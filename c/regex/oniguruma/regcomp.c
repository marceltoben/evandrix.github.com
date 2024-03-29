/**********************************************************************

  regcomp.c -  Oniguruma (regular expression library)

  Copyright (C) 2002-2005  K.Kosako (sndgk393 AT ybb DOT ne DOT jp)

**********************************************************************/
#include "regparse.h"

#ifndef PLATFORM_UNALIGNED_WORD_ACCESS
static unsigned char PadBuf[WORD_ALIGNMENT_SIZE];
#endif

static void
swap_node(Node* a, Node* b)
{
  Node c;
  c = *a; *a = *b; *b = c;
}

static OnigDistance
distance_add(OnigDistance d1, OnigDistance d2)
{
  if (d1 == ONIG_INFINITE_DISTANCE || d2 == ONIG_INFINITE_DISTANCE)
    return ONIG_INFINITE_DISTANCE;
  else {
    if (d1 <= ONIG_INFINITE_DISTANCE - d2) return d1 + d2;
    else return ONIG_INFINITE_DISTANCE;
  }
}

static OnigDistance
distance_multiply(OnigDistance d, int m)
{
  if (m == 0) return 0;

  if (d < ONIG_INFINITE_DISTANCE / m)
    return d * m;
  else
    return ONIG_INFINITE_DISTANCE;
}

static int
bitset_is_empty(BitSetRef bs)
{
  int i;
  for (i = 0; i < BITSET_SIZE; i++) {
    if (bs[i] != 0) return 0;
  }
  return 1;
}

#ifdef ONIG_DEBUG
static int
bitset_on_num(BitSetRef bs)
{
  int i, n;

  n = 0;
  for (i = 0; i < SINGLE_BYTE_SIZE; i++) {
    if (BITSET_AT(bs, i)) n++;
  }
  return n;
}
#endif

extern int
onig_bbuf_init(BBuf* buf, int size)
{
  buf->p = (UChar* )xmalloc(size);
  if (IS_NULL(buf->p)) return(ONIGERR_MEMORY);

  buf->alloc = size;
  buf->used  = 0;
  return 0;
}


#ifdef USE_SUBEXP_CALL

static int
unset_addr_list_init(UnsetAddrList* uslist, int size)
{
  UnsetAddr* p;

  p = (UnsetAddr* )xmalloc(sizeof(UnsetAddr)* size);
  CHECK_NULL_RETURN_VAL(p, ONIGERR_MEMORY);
  uslist->num   = 0;
  uslist->alloc = size;
  uslist->us    = p;
  return 0;
}

static void
unset_addr_list_end(UnsetAddrList* uslist)
{
  if (IS_NOT_NULL(uslist->us))
    xfree(uslist->us);
}

static int
unset_addr_list_add(UnsetAddrList* uslist, int offset, struct _Node* node)
{
  UnsetAddr* p;
  int size;

  if (uslist->num >= uslist->alloc) {
    size = uslist->alloc * 2;
    p = (UnsetAddr* )xrealloc(uslist->us, sizeof(UnsetAddr) * size);
    CHECK_NULL_RETURN_VAL(p, ONIGERR_MEMORY);
    uslist->alloc = size;
    uslist->us    = p;
  }

  uslist->us[uslist->num].offset = offset;
  uslist->us[uslist->num].target = node;
  uslist->num++;
  return 0;
}
#endif /* USE_SUBEXP_CALL */


#if 0
static int
bitset_mbmaxlen(BitSetRef bs, int negative, OnigEncoding enc)
{
  int i;
  int len, maxlen = 0;

  if (negative) {
    for (i = 0; i < SINGLE_BYTE_SIZE; i++) {
      if (! BITSET_AT(bs, i)) {
	len = enc_len(enc, i);
	if (len > maxlen) maxlen = len;
      }
    }
  }
  else {
    for (i = 0; i < SINGLE_BYTE_SIZE; i++) {
      if (BITSET_AT(bs, i)) {
	len = enc_len(enc, i);
	if (len > maxlen) maxlen = len;
      }
    }
  }
  return maxlen;
}
#endif

static int
add_opcode(regex_t* reg, int opcode)
{
  BBUF_ADD1(reg, opcode);
  return 0;
}

static int
add_rel_addr(regex_t* reg, int addr)
{
  RelAddrType ra = (RelAddrType )addr;

  BBUF_ADD(reg, &ra, SIZE_RELADDR);
  return 0;
}

static int
add_abs_addr(regex_t* reg, int addr)
{
  AbsAddrType ra = (AbsAddrType )addr;

  BBUF_ADD(reg, &ra, SIZE_ABSADDR);
  return 0;
}

static int
add_length(regex_t* reg, int len)
{
  LengthType l = (LengthType )len;

  BBUF_ADD(reg, &l, SIZE_LENGTH);
  return 0;
}

static int
add_mem_num(regex_t* reg, int num)
{
  MemNumType n = (MemNumType )num;

  BBUF_ADD(reg, &n, SIZE_MEMNUM);
  return 0;
}

#if 0
static int
add_repeat_num(regex_t* reg, int num)
{
  RepeatNumType n = (RepeatNumType )num;

  BBUF_ADD(reg, &n, SIZE_REPEATNUM);
  return 0;
}
#endif

static int
add_option(regex_t* reg, OnigOptionType option)
{
  BBUF_ADD(reg, &option, SIZE_OPTION);
  return 0;
}

static int
add_opcode_rel_addr(regex_t* reg, int opcode, int addr)
{
  int r;

  r = add_opcode(reg, opcode);
  if (r) return r;
  r = add_rel_addr(reg, addr);
  return r;
}

static int
add_bytes(regex_t* reg, UChar* bytes, int len)
{
  BBUF_ADD(reg, bytes, len);
  return 0;
}

static int
add_bitset(regex_t* reg, BitSetRef bs)
{
  BBUF_ADD(reg, bs, SIZE_BITSET);
  return 0;
}

static int
add_opcode_option(regex_t* reg, int opcode, OnigOptionType option)
{
  int r;

  r = add_opcode(reg, opcode);
  if (r) return r;
  r = add_option(reg, option);
  return r;
}

static int compile_length_tree(Node* node, regex_t* reg);
static int compile_tree(Node* node, regex_t* reg);


#define IS_NEED_STR_LEN_OP_EXACT(op) \
   ((op) == OP_EXACTN    || (op) == OP_EXACTMB2N ||\
    (op) == OP_EXACTMB3N || (op) == OP_EXACTMBN  || (op) == OP_EXACTN_IC)

static int
select_str_opcode(int mb_len, int str_len, int ignore_case)
{
  int op;

  switch (mb_len) {
  case 1:
    if (ignore_case) {
      switch (str_len) {
      case 1:  op = OP_EXACT1_IC; break;
      default: op = OP_EXACTN_IC; break;
      }
    }
    else {
      switch (str_len) {
      case 1:  op = OP_EXACT1; break;
      case 2:  op = OP_EXACT2; break;
      case 3:  op = OP_EXACT3; break;
      case 4:  op = OP_EXACT4; break;
      case 5:  op = OP_EXACT5; break;
      default: op = OP_EXACTN; break;
      }
    }
    break;

  case 2:
    switch (str_len) {
    case 1:  op = OP_EXACTMB2N1; break;
    case 2:  op = OP_EXACTMB2N2; break;
    case 3:  op = OP_EXACTMB2N3; break;
    default: op = OP_EXACTMB2N;  break;
    }
    break;

  case 3:
    op = OP_EXACTMB3N;
    break;

  default:
    op = OP_EXACTMBN;
    break;
  }
  return op;
}

static int
compile_tree_empty_check(Node* node, regex_t* reg, int empty_info)
{
  int r;
  int saved_num_null_check = reg->num_null_check;

  if (empty_info != 0) {
    r = add_opcode(reg, OP_NULL_CHECK_START);
    if (r) return r;
    r = add_mem_num(reg, reg->num_null_check); /* NULL CHECK ID */
    if (r) return r;
    reg->num_null_check++;
  }

  r = compile_tree(node, reg);
  if (r) return r;

  if (empty_info != 0) {
    if (empty_info == NQ_TARGET_IS_EMPTY)
      r = add_opcode(reg, OP_NULL_CHECK_END);
    else if (empty_info == NQ_TARGET_IS_EMPTY_MEM)
      r = add_opcode(reg, OP_NULL_CHECK_END_MEMST);
    else if (empty_info == NQ_TARGET_IS_EMPTY_REC)
      r = add_opcode(reg, OP_NULL_CHECK_END_MEMST_PUSH);

    if (r) return r;
    r = add_mem_num(reg, saved_num_null_check); /* NULL CHECK ID */
  }
  return r;
}

#ifdef USE_SUBEXP_CALL
static int
compile_call(CallNode* node, regex_t* reg)
{
  int r;

  r = add_opcode(reg, OP_CALL);
  if (r) return r;
  r = unset_addr_list_add(node->unset_addr_list, BBUF_GET_OFFSET_POS(reg),
			  node->target);
  if (r) return r;
  r = add_abs_addr(reg, 0 /*dummy addr.*/);
  return r;
}
#endif

static int
compile_tree_n_times(Node* node, int n, regex_t* reg)
{
  int i, r;

  for (i = 0; i < n; i++) {
    r = compile_tree(node, reg);
    if (r) return r;
  }
  return 0;
}

static int
add_compile_string_length(UChar* s, int mb_len, int str_len,
			  regex_t* reg, int ignore_case)
{
  int len;
  int op = select_str_opcode(mb_len, str_len, ignore_case);

  len = SIZE_OPCODE;
  if (op == OP_EXACTMBN)
    len += SIZE_LENGTH;

  if (IS_NEED_STR_LEN_OP_EXACT(op))
    len += SIZE_LENGTH;

  len += mb_len * str_len;
  return len;
}

static int
add_compile_string(UChar* s, int mb_len, int str_len,
		   regex_t* reg, int ignore_case)
{
  int op = select_str_opcode(mb_len, str_len, ignore_case);
  add_opcode(reg, op);

  if (op == OP_EXACTMBN)
    add_length(reg, mb_len);

  if (IS_NEED_STR_LEN_OP_EXACT(op))
    add_length(reg, str_len);

  add_bytes(reg, s, mb_len * str_len);
  return 0;
}


static int
compile_length_string_node(StrNode* sn, regex_t* reg)
{
  int rlen, r, len, prev_len, slen, ambig, ic;
  OnigEncoding enc = reg->enc;
  UChar *p, *prev;

  if (sn->end <= sn->s)
    return 0;

  ic = IS_IGNORECASE(reg->options);

  p = prev = sn->s;
  prev_len = enc_len(enc, *p);
  if (ic != 0 && prev_len == 1)
    ambig = ONIGENC_IS_MBC_CASE_AMBIG(reg->enc, p);
  else
    ambig = 0;

  p += prev_len;
  slen = 1;
  rlen = 0;

  for (; p < sn->end; ) {
    len = enc_len(enc, *p);
    if (len == prev_len) {
      slen++;
      if (ic != 0 && ambig == 0 && len == 1)
	ambig = ONIGENC_IS_MBC_CASE_AMBIG(reg->enc, p);
    }
    else {
      r = add_compile_string_length(prev, prev_len, slen, reg, ambig);
      rlen += r;

      if (ic != 0 && len == 1)
	ambig = ONIGENC_IS_MBC_CASE_AMBIG(reg->enc, p);
      else
	ambig = 0;

      prev = p;
      slen = 1;
      prev_len = len;
    }

    p += len;
  }
  r = add_compile_string_length(prev, prev_len, slen, reg, ambig);
  rlen += r;
  return rlen;
}

static int
compile_length_string_raw_node(StrNode* sn, regex_t* reg)
{
  if (sn->end <= sn->s)
    return 0;

  return add_compile_string_length(sn->s, 1 /* sb */, sn->end - sn->s, reg, 0);
}

static int
compile_string_node(StrNode* sn, regex_t* reg)
{
  int r, len, prev_len, slen, ambig, ic;
  OnigEncoding enc = reg->enc;
  UChar *p, *prev;

  if (sn->end <= sn->s)
    return 0;

  ic = IS_IGNORECASE(reg->options);

  p = prev = sn->s;
  prev_len = enc_len(enc, *p);
  if (ic != 0 && prev_len == 1) {
    ambig = ONIGENC_IS_MBC_CASE_AMBIG(reg->enc, p);
    if (ambig != 0)
      ONIGENC_MBC_TO_LOWER(reg->enc, p, p);
  }
  else
    ambig = 0;

  p += prev_len;
  slen = 1;

  for (; p < sn->end; ) {
    len = enc_len(enc, *p);
    if (len == prev_len) {
      slen++;
      if (ic != 0 && len == 1) {
	if (ambig == 0)
	  ambig = ONIGENC_IS_MBC_CASE_AMBIG(reg->enc, p);
	if (ambig != 0) ONIGENC_MBC_TO_LOWER(reg->enc, p, p);
      }
    }
    else {
      r = add_compile_string(prev, prev_len, slen, reg, ambig);
      if (r) return r;
      if (ic != 0 && len == 1) {
	ambig = ONIGENC_IS_MBC_CASE_AMBIG(reg->enc, p);
	if (ambig != 0) ONIGENC_MBC_TO_LOWER(reg->enc, p, p);
      }
      else
	ambig = 0;

      prev  = p;
      slen  = 1;
      prev_len = len;
    }

    p += len;
  }
  return add_compile_string(prev, prev_len, slen, reg, ambig);
}

static int
compile_string_raw_node(StrNode* sn, regex_t* reg)
{
  if (sn->end <= sn->s)
    return 0;

  return add_compile_string(sn->s, 1 /* sb */, sn->end - sn->s, reg, 0);
}

static int
add_multi_byte_cclass(BBuf* mbuf, regex_t* reg)
{
#ifdef PLATFORM_UNALIGNED_WORD_ACCESS
  add_length(reg, mbuf->used);
  return add_bytes(reg, mbuf->p, mbuf->used);
#else
  int r, pad_size;
  UChar* p = BBUF_GET_ADD_ADDRESS(reg) + SIZE_LENGTH;

  GET_ALIGNMENT_PAD_SIZE(p, pad_size);
  add_length(reg, mbuf->used + (WORD_ALIGNMENT_SIZE - 1));
  if (pad_size != 0) add_bytes(reg, PadBuf, pad_size);

  r = add_bytes(reg, mbuf->p, mbuf->used);

  /* padding for return value from compile_length_cclass_node() to be fix. */
  pad_size = (WORD_ALIGNMENT_SIZE - 1) - pad_size;
  if (pad_size != 0) add_bytes(reg, PadBuf, pad_size);
  return r;
#endif
}

static int
compile_length_cclass_node(CClassNode* cc, regex_t* reg)
{
  int len;

  if (IS_NULL(cc->mbuf)) {
    len = SIZE_OPCODE + SIZE_BITSET;
  }
  else {
    if (bitset_is_empty(cc->bs)) {
      /* SIZE_BITSET is included in mbuf->used. */
      len = SIZE_OPCODE;
    }
    else {
      len = SIZE_OPCODE + SIZE_BITSET;
    }
#ifdef PLATFORM_UNALIGNED_WORD_ACCESS
    len += SIZE_LENGTH + cc->mbuf->used;
#else
    len += SIZE_LENGTH + cc->mbuf->used + (WORD_ALIGNMENT_SIZE - 1);
#endif
  }

  return len;
}

static int
compile_cclass_node(CClassNode* cc, regex_t* reg)
{
  int r;

  if (IS_NULL(cc->mbuf)) {
    if (cc->not)  add_opcode(reg, OP_CCLASS_NOT);
    else          add_opcode(reg, OP_CCLASS);

    r = add_bitset(reg, cc->bs);
  }
  else {
    if (bitset_is_empty(cc->bs)) {
      if (cc->not)  add_opcode(reg, OP_CCLASS_MB_NOT);
      else          add_opcode(reg, OP_CCLASS_MB);

      r = add_multi_byte_cclass(cc->mbuf, reg);
    }
    else {
      if (cc->not)  add_opcode(reg, OP_CCLASS_MIX_NOT);
      else          add_opcode(reg, OP_CCLASS_MIX);

      r = add_bitset(reg, cc->bs);
      if (r) return r;
      r = add_multi_byte_cclass(cc->mbuf, reg);
    }
  }

  return r;
}

static int
entry_repeat_range(regex_t* reg, int id, int lower, int upper)
{
#define REPEAT_RANGE_ALLOC  4

  OnigRepeatRange* p;

  if (reg->repeat_range_alloc == 0) {
    p = (OnigRepeatRange* )xmalloc(sizeof(OnigRepeatRange) * REPEAT_RANGE_ALLOC);
    CHECK_NULL_RETURN_VAL(p, ONIGERR_MEMORY);
    reg->repeat_range = p;
    reg->repeat_range_alloc = REPEAT_RANGE_ALLOC;
  }
  else if (reg->repeat_range_alloc <= id) {
    int n;
    n = reg->repeat_range_alloc + REPEAT_RANGE_ALLOC;
    p = (OnigRepeatRange* )xrealloc(reg->repeat_range,
				   sizeof(OnigRepeatRange) * n);
    CHECK_NULL_RETURN_VAL(p, ONIGERR_MEMORY);
    reg->repeat_range = p;
    reg->repeat_range_alloc = n;
  }
  else {
    p = reg->repeat_range;
  }

  p[id].lower = lower;
  p[id].upper = upper;
  return 0;
}

static int
compile_range_repeat_node(QualifierNode* qn, int target_len, int empty_info,
			  regex_t* reg)
{
  int r;
  int num_repeat = reg->num_repeat;

  r = add_opcode(reg, qn->greedy ? OP_REPEAT : OP_REPEAT_NG);
  if (r) return r;
  r = add_mem_num(reg, num_repeat); /* OP_REPEAT ID */
  reg->num_repeat++;
  if (r) return r;
  r = add_rel_addr(reg, target_len + SIZE_OP_REPEAT_INC);
  if (r) return r;

  r = entry_repeat_range(reg, num_repeat, qn->lower, qn->upper);
  if (r) return r;

  r = compile_tree_empty_check(qn->target, reg, empty_info);
  if (r) return r;

  if (
#ifdef USE_SUBEXP_CALL
      reg->num_call > 0 ||
#endif
      IS_QUALIFIER_IN_REPEAT(qn)) {
    r = add_opcode(reg, qn->greedy ? OP_REPEAT_INC_SG : OP_REPEAT_INC_NG_SG);
  }
  else {
    r = add_opcode(reg, qn->greedy ? OP_REPEAT_INC : OP_REPEAT_INC_NG);
  }
  if (r) return r;
  r = add_mem_num(reg, num_repeat); /* OP_REPEAT ID */
  return r;
}

#define QUALIFIER_EXPAND_LIMIT_SIZE   50

static int
compile_length_qualifier_node(QualifierNode* qn, regex_t* reg)
{
  int len, mod_tlen;
  int infinite = IS_REPEAT_INFINITE(qn->upper);
  int empty_info = qn->target_empty_info;
  int tlen = compile_length_tree(qn->target, reg);

  if (tlen < 0) return tlen;

  /* anychar repeat */
  if (NTYPE(qn->target) == N_ANYCHAR) {
    if (qn->greedy && infinite) {
      if (IS_NOT_NULL(qn->next_head_exact))
	return SIZE_OP_ANYCHAR_STAR_PEEK_NEXT + tlen * qn->lower;
      else
	return SIZE_OP_ANYCHAR_STAR + tlen * qn->lower;
    }
  }

  if (empty_info != 0)
    mod_tlen = tlen + (SIZE_OP_NULL_CHECK_START + SIZE_OP_NULL_CHECK_END);
  else
    mod_tlen = tlen;

  if (infinite &&
      (qn->lower <= 1 || tlen * qn->lower <= QUALIFIER_EXPAND_LIMIT_SIZE)) {
    if (qn->lower == 1 && tlen > QUALIFIER_EXPAND_LIMIT_SIZE) {
      len = SIZE_OP_JUMP;
    }
    else {
      len = tlen * qn->lower;
    }

    if (qn->greedy) {
      if (IS_NOT_NULL(qn->head_exact))
	len += SIZE_OP_PUSH_OR_JUMP_EXACT1 + mod_tlen + SIZE_OP_JUMP;
      else if (IS_NOT_NULL(qn->next_head_exact))
	len += SIZE_OP_PUSH_IF_PEEK_NEXT + mod_tlen + SIZE_OP_JUMP;
      else
	len += SIZE_OP_PUSH + mod_tlen + SIZE_OP_JUMP;
    }
    else
      len += SIZE_OP_JUMP + mod_tlen + SIZE_OP_PUSH;
  }
  else if (qn->upper == 0 && qn->is_refered != 0) { /* /(?<n>..){0}/ */
    len = SIZE_OP_JUMP + tlen;
  }
  else if (!infinite && qn->greedy &&
           (qn->upper == 1 || (tlen + SIZE_OP_PUSH) * qn->upper
                                 <= QUALIFIER_EXPAND_LIMIT_SIZE)) {
    len = tlen * qn->lower;
    len += (SIZE_OP_PUSH + tlen) * (qn->upper - qn->lower);
  }
  else if (!qn->greedy && qn->upper == 1 && qn->lower == 0) { /* '??' */
    len = SIZE_OP_PUSH + SIZE_OP_JUMP + tlen;
  }
  else {
    len = SIZE_OP_REPEAT_INC
        + mod_tlen + SIZE_OPCODE + SIZE_RELADDR + SIZE_MEMNUM;
  }

  return len;
}

static int
is_anychar_star_qualifier(QualifierNode* qn)
{
  if (qn->greedy && IS_REPEAT_INFINITE(qn->upper) &&
      NTYPE(qn->target) == N_ANYCHAR)
    return 1;
  else
    return 0;
}

static int
compile_qualifier_node(QualifierNode* qn, regex_t* reg)
{
  int i, r, mod_tlen;
  int infinite = IS_REPEAT_INFINITE(qn->upper);
  int empty_info = qn->target_empty_info;
  int tlen = compile_length_tree(qn->target, reg);

  if (tlen < 0) return tlen;

  if (is_anychar_star_qualifier(qn)) {
    r = compile_tree_n_times(qn->target, qn->lower, reg);
    if (r) return r;
    if (IS_NOT_NULL(qn->next_head_exact)) {
      if (IS_MULTILINE(reg->options))
	r = add_opcode(reg, OP_ANYCHAR_ML_STAR_PEEK_NEXT);
      else
	r = add_opcode(reg, OP_ANYCHAR_STAR_PEEK_NEXT);
      if (r) return r;
      return add_bytes(reg, NSTRING(qn->next_head_exact).s, 1);
    }
    else {
      if (IS_MULTILINE(reg->options))
	return add_opcode(reg, OP_ANYCHAR_ML_STAR);
      else
	return add_opcode(reg, OP_ANYCHAR_STAR);
    }
  }

  if (empty_info != 0)
    mod_tlen = tlen + (SIZE_OP_NULL_CHECK_START + SIZE_OP_NULL_CHECK_END);
  else
    mod_tlen = tlen;

  if (infinite &&
      (qn->lower <= 1 || tlen * qn->lower <= QUALIFIER_EXPAND_LIMIT_SIZE)) {
    if (qn->lower == 1 && tlen > QUALIFIER_EXPAND_LIMIT_SIZE) {
      if (qn->greedy) {
	if (IS_NOT_NULL(qn->head_exact))
	  r = add_opcode_rel_addr(reg, OP_JUMP, SIZE_OP_PUSH_OR_JUMP_EXACT1);
	else if (IS_NOT_NULL(qn->next_head_exact))
	  r = add_opcode_rel_addr(reg, OP_JUMP, SIZE_OP_PUSH_IF_PEEK_NEXT);
	else
	  r = add_opcode_rel_addr(reg, OP_JUMP, SIZE_OP_PUSH);
      }
      else {
	r = add_opcode_rel_addr(reg, OP_JUMP, SIZE_OP_JUMP);
      }
      if (r) return r;
    }
    else {
      r = compile_tree_n_times(qn->target, qn->lower, reg);
      if (r) return r;
    }

    if (qn->greedy) {
      if (IS_NOT_NULL(qn->head_exact)) {
	r = add_opcode_rel_addr(reg, OP_PUSH_OR_JUMP_EXACT1,
			     mod_tlen + SIZE_OP_JUMP);
	if (r) return r;
	add_bytes(reg, NSTRING(qn->head_exact).s, 1);
	r = compile_tree_empty_check(qn->target, reg, empty_info);
	if (r) return r;
	r = add_opcode_rel_addr(reg, OP_JUMP,
	-(mod_tlen + (int )SIZE_OP_JUMP + (int )SIZE_OP_PUSH_OR_JUMP_EXACT1));
      }
      else if (IS_NOT_NULL(qn->next_head_exact)) {
	r = add_opcode_rel_addr(reg, OP_PUSH_IF_PEEK_NEXT,
				mod_tlen + SIZE_OP_JUMP);
	if (r) return r;
	add_bytes(reg, NSTRING(qn->next_head_exact).s, 1);
	r = compile_tree_empty_check(qn->target, reg, empty_info);
	if (r) return r;
	r = add_opcode_rel_addr(reg, OP_JUMP,
          -(mod_tlen + (int )SIZE_OP_JUMP + (int )SIZE_OP_PUSH_IF_PEEK_NEXT));
      }
      else {
	r = add_opcode_rel_addr(reg, OP_PUSH, mod_tlen + SIZE_OP_JUMP);
	if (r) return r;
	r = compile_tree_empty_check(qn->target, reg, empty_info);
	if (r) return r;
	r = add_opcode_rel_addr(reg, OP_JUMP,
		     -(mod_tlen + (int )SIZE_OP_JUMP + (int )SIZE_OP_PUSH));
      }
    }
    else {
      r = add_opcode_rel_addr(reg, OP_JUMP, mod_tlen);
      if (r) return r;
      r = compile_tree_empty_check(qn->target, reg, empty_info);
      if (r) return r;
      r = add_opcode_rel_addr(reg, OP_PUSH, -(mod_tlen + (int )SIZE_OP_PUSH));
    }
  }
  else if (qn->upper == 0 && qn->is_refered != 0) { /* /(?<n>..){0}/ */
    r = add_opcode_rel_addr(reg, OP_JUMP, tlen);
    if (r) return r;
    r = compile_tree(qn->target, reg);
  }
  else if (!infinite && qn->greedy &&
           (qn->upper == 1 || (tlen + SIZE_OP_PUSH) * qn->upper
                                  <= QUALIFIER_EXPAND_LIMIT_SIZE)) {
    int n = qn->upper - qn->lower;

    r = compile_tree_n_times(qn->target, qn->lower, reg);
    if (r) return r;

    for (i = 0; i < n; i++) {
      r = add_opcode_rel_addr(reg, OP_PUSH,
			   (n - i) * tlen + (n - i - 1) * SIZE_OP_PUSH);
      if (r) return r;
      r = compile_tree(qn->target, reg);
      if (r) return r;
    }
  }
  else if (!qn->greedy && qn->upper == 1 && qn->lower == 0) { /* '??' */
    r = add_opcode_rel_addr(reg, OP_PUSH, SIZE_OP_JUMP);
    if (r) return r;
    r = add_opcode_rel_addr(reg, OP_JUMP, tlen);
    if (r) return r;
    r = compile_tree(qn->target, reg);
  }
  else {
    r = compile_range_repeat_node(qn, mod_tlen, empty_info, reg);
  }
  return r;
}

static int
compile_length_option_node(EffectNode* node, regex_t* reg)
{
  int tlen;
  OnigOptionType prev = reg->options;

  reg->options = node->option;
  tlen = compile_length_tree(node->target, reg);
  reg->options = prev;

  if (tlen < 0) return tlen;

  if (IS_DYNAMIC_OPTION(prev ^ node->option)) {
    return SIZE_OP_SET_OPTION_PUSH + SIZE_OP_SET_OPTION + SIZE_OP_FAIL
           + tlen + SIZE_OP_SET_OPTION;
  }
  else
    return tlen;
}

static int
compile_option_node(EffectNode* node, regex_t* reg)
{
  int r;
  OnigOptionType prev = reg->options;

  if (IS_DYNAMIC_OPTION(prev ^ node->option)) {
    r = add_opcode_option(reg, OP_SET_OPTION_PUSH, node->option);
    if (r) return r;
    r = add_opcode_option(reg, OP_SET_OPTION, prev);
    if (r) return r;
    r = add_opcode(reg, OP_FAIL);
    if (r) return r;

    reg->options = node->option;
    r = compile_tree(node->target, reg);
    reg->options = prev;
    if (r) return r;
    r = add_opcode_option(reg, OP_SET_OPTION, prev);
  }
  else {
    reg->options = node->option;
    r = compile_tree(node->target, reg);
    reg->options = prev;
  }
  return r;
}

static int
compile_length_effect_node(EffectNode* node, regex_t* reg)
{
  int len;
  int tlen;

  if (node->type == EFFECT_OPTION)
    return compile_length_option_node(node, reg);

  if (node->target) {
    tlen = compile_length_tree(node->target, reg);
    if (tlen < 0) return tlen;
  }
  else
    tlen = 0;

  switch (node->type) {
  case EFFECT_MEMORY:
#ifdef USE_SUBEXP_CALL
    if (IS_EFFECT_CALLED(node)) {
      len = SIZE_OP_MEMORY_START_PUSH + tlen
	  + SIZE_OP_CALL + SIZE_OP_JUMP + SIZE_OP_RETURN;
      if (BIT_STATUS_AT(reg->bt_mem_end, node->regnum))
	len += (IS_EFFECT_RECURSION(node)
		? SIZE_OP_MEMORY_END_PUSH_REC : SIZE_OP_MEMORY_END_PUSH);
      else
	len += (IS_EFFECT_RECURSION(node)
		? SIZE_OP_MEMORY_END_REC : SIZE_OP_MEMORY_END);
    }
    else
#endif
    {
      if (BIT_STATUS_AT(reg->bt_mem_start, node->regnum))
	len = SIZE_OP_MEMORY_START_PUSH;
      else
	len = SIZE_OP_MEMORY_START;

      len += tlen + (BIT_STATUS_AT(reg->bt_mem_end, node->regnum)
		     ? SIZE_OP_MEMORY_END_PUSH : SIZE_OP_MEMORY_END);
    }
    break;

  case EFFECT_STOP_BACKTRACK:
    if (IS_EFFECT_STOP_BT_SIMPLE_REPEAT(node)) {
      QualifierNode* qn = &NQUALIFIER(node->target);
      tlen = compile_length_tree(qn->target, reg);
      if (tlen < 0) return tlen;

      len = tlen * qn->lower
	  + SIZE_OP_PUSH + tlen + SIZE_OP_POP + SIZE_OP_JUMP;
    }
    else {
      len = SIZE_OP_PUSH_STOP_BT + tlen + SIZE_OP_POP_STOP_BT;
    }
    break;

  default:
    return ONIGERR_TYPE_BUG;
    break;
  }

  return len;
}

static int get_char_length_tree(Node* node, regex_t* reg, int* len);

static int
compile_effect_node(EffectNode* node, regex_t* reg)
{
  int r, len;

  if (node->type == EFFECT_OPTION)
    return compile_option_node(node, reg);

  switch (node->type) {
  case EFFECT_MEMORY:
#ifdef USE_SUBEXP_CALL
    if (IS_EFFECT_CALLED(node)) {
      r = add_opcode(reg, OP_CALL);
      if (r) return r;
      node->call_addr = BBUF_GET_OFFSET_POS(reg) + SIZE_ABSADDR + SIZE_OP_JUMP;
      node->state |= NST_ADDR_FIXED;
      r = add_abs_addr(reg, (int )node->call_addr);
      if (r) return r;
      len = compile_length_tree(node->target, reg);
      len += (SIZE_OP_MEMORY_START_PUSH + SIZE_OP_RETURN);
      if (BIT_STATUS_AT(reg->bt_mem_end, node->regnum))
	len += (IS_EFFECT_RECURSION(node)
		? SIZE_OP_MEMORY_END_PUSH_REC : SIZE_OP_MEMORY_END_PUSH);
      else
	len += (IS_EFFECT_RECURSION(node)
		? SIZE_OP_MEMORY_END_REC : SIZE_OP_MEMORY_END);

      r = add_opcode_rel_addr(reg, OP_JUMP, len);
      if (r) return r;
    }
#endif
    if (BIT_STATUS_AT(reg->bt_mem_start, node->regnum))
      r = add_opcode(reg, OP_MEMORY_START_PUSH);
    else
      r = add_opcode(reg, OP_MEMORY_START);
    if (r) return r;
    r = add_mem_num(reg, node->regnum);
    if (r) return r;
    r = compile_tree(node->target, reg);
    if (r) return r;
#ifdef USE_SUBEXP_CALL
    if (IS_EFFECT_CALLED(node)) {
      if (BIT_STATUS_AT(reg->bt_mem_end, node->regnum))
	r = add_opcode(reg, (IS_EFFECT_RECURSION(node)
			     ? OP_MEMORY_END_PUSH_REC : OP_MEMORY_END_PUSH));
      else
	r = add_opcode(reg, (IS_EFFECT_RECURSION(node)
			     ? OP_MEMORY_END_REC : OP_MEMORY_END));

      if (r) return r;
      r = add_mem_num(reg, node->regnum);
      if (r) return r;
      r = add_opcode(reg, OP_RETURN);
    }
    else
#endif
    {
      if (BIT_STATUS_AT(reg->bt_mem_end, node->regnum))
	r = add_opcode(reg, OP_MEMORY_END_PUSH);
      else
	r = add_opcode(reg, OP_MEMORY_END);
      if (r) return r;
      r = add_mem_num(reg, node->regnum);
    }
    break;

  case EFFECT_STOP_BACKTRACK:
    if (IS_EFFECT_STOP_BT_SIMPLE_REPEAT(node)) {
      QualifierNode* qn = &NQUALIFIER(node->target);
      r = compile_tree_n_times(qn->target, qn->lower, reg);
      if (r) return r;

      len = compile_length_tree(qn->target, reg);
      if (len < 0) return len;

      r = add_opcode_rel_addr(reg, OP_PUSH, len + SIZE_OP_POP + SIZE_OP_JUMP);
      if (r) return r;
      r = compile_tree(qn->target, reg);
      if (r) return r;
      r = add_opcode(reg, OP_POP);
      if (r) return r;
      r = add_opcode_rel_addr(reg, OP_JUMP,
	 -((int )SIZE_OP_PUSH + len + (int )SIZE_OP_POP + (int )SIZE_OP_JUMP));
    }
    else {
      r = add_opcode(reg, OP_PUSH_STOP_BT);
      if (r) return r;
      r = compile_tree(node->target, reg);
      if (r) return r;
      r = add_opcode(reg, OP_POP_STOP_BT);
    }
    break;

  default:
    return ONIGERR_TYPE_BUG;
    break;
  }

  return r;
}

static int
compile_length_anchor_node(AnchorNode* node, regex_t* reg)
{
  int len;
  int tlen = 0;

  if (node->target) {
    tlen = compile_length_tree(node->target, reg);
    if (tlen < 0) return tlen;
  }

  switch (node->type) {
  case ANCHOR_PREC_READ:
    len = SIZE_OP_PUSH_POS + tlen + SIZE_OP_POP_POS;
    break;
  case ANCHOR_PREC_READ_NOT:
    len = SIZE_OP_PUSH_POS_NOT + tlen + SIZE_OP_FAIL_POS;
    break;
  case ANCHOR_LOOK_BEHIND:
    len = SIZE_OP_LOOK_BEHIND + tlen;
    break;
  case ANCHOR_LOOK_BEHIND_NOT:
    len = SIZE_OP_PUSH_LOOK_BEHIND_NOT + tlen + SIZE_OP_FAIL_LOOK_BEHIND_NOT;
    break;

  default:
    len = SIZE_OPCODE;
    break;
  }

  return len;
}

static int
compile_anchor_node(AnchorNode* node, regex_t* reg)
{
  int r, len;

  switch (node->type) {
  case ANCHOR_BEGIN_BUF:      r = add_opcode(reg, OP_BEGIN_BUF);      break;
  case ANCHOR_END_BUF:        r = add_opcode(reg, OP_END_BUF);        break;
  case ANCHOR_BEGIN_LINE:     r = add_opcode(reg, OP_BEGIN_LINE);     break;
  case ANCHOR_END_LINE:       r = add_opcode(reg, OP_END_LINE);       break;
  case ANCHOR_SEMI_END_BUF:   r = add_opcode(reg, OP_SEMI_END_BUF);   break;
  case ANCHOR_BEGIN_POSITION: r = add_opcode(reg, OP_BEGIN_POSITION); break;

  case ANCHOR_WORD_BOUND:     r = add_opcode(reg, OP_WORD_BOUND);     break;
  case ANCHOR_NOT_WORD_BOUND: r = add_opcode(reg, OP_NOT_WORD_BOUND); break;
#ifdef USE_WORD_BEGIN_END
  case ANCHOR_WORD_BEGIN:     r = add_opcode(reg, OP_WORD_BEGIN);     break;
  case ANCHOR_WORD_END:       r = add_opcode(reg, OP_WORD_END);       break;
#endif

  case ANCHOR_PREC_READ:
    r = add_opcode(reg, OP_PUSH_POS);
    if (r) return r;
    r = compile_tree(node->target, reg);
    if (r) return r;
    r = add_opcode(reg, OP_POP_POS);
    break;

  case ANCHOR_PREC_READ_NOT:
    len = compile_length_tree(node->target, reg);
    if (len < 0) return len;
    r = add_opcode_rel_addr(reg, OP_PUSH_POS_NOT, len + SIZE_OP_FAIL_POS);
    if (r) return r;
    r = compile_tree(node->target, reg);
    if (r) return r;
    r = add_opcode(reg, OP_FAIL_POS);
    break;

  case ANCHOR_LOOK_BEHIND:
    {
      int n;
      r = add_opcode(reg, OP_LOOK_BEHIND);
      if (r) return r;
      if (node->char_len < 0) {
	r = get_char_length_tree(node->target, reg, &n);
	if (r) return ONIGERR_INVALID_LOOK_BEHIND_PATTERN;
      }
      else
	n = node->char_len;
      r = add_length(reg, n);
      if (r) return r;
      r = compile_tree(node->target, reg);
    }
    break;

  case ANCHOR_LOOK_BEHIND_NOT:
    {
      int n;
      len = compile_length_tree(node->target, reg);
      r = add_opcode_rel_addr(reg, OP_PUSH_LOOK_BEHIND_NOT,
			   len + SIZE_OP_FAIL_LOOK_BEHIND_NOT);
      if (r) return r;
      if (node->char_len < 0) {
	r = get_char_length_tree(node->target, reg, &n);
	if (r) return ONIGERR_INVALID_LOOK_BEHIND_PATTERN;
      }
      else
	n = node->char_len;
      r = add_length(reg, n);
      if (r) return r;
      r = compile_tree(node->target, reg);
      if (r) return r;
      r = add_opcode(reg, OP_FAIL_LOOK_BEHIND_NOT);
    }
    break;

  default:
    return ONIGERR_TYPE_BUG;
    break;
  }

  return r;
}

static int
compile_length_tree(Node* node, regex_t* reg)
{
  int len, type, r;

  type = NTYPE(node);
  switch (type) {
  case N_LIST:
    len = 0;
    do {
      r = compile_length_tree(NCONS(node).left, reg);
      if (r < 0) return r;
      len += r;
    } while (IS_NOT_NULL(node = NCONS(node).right));
    r = len;
    break;

  case N_ALT:
    {
      int n;

      n = r = 0;
      do {
	r += compile_length_tree(NCONS(node).left, reg);
	n++;
      } while (IS_NOT_NULL(node = NCONS(node).right));
      r += (SIZE_OP_PUSH + SIZE_OP_JUMP) * (n - 1);
    }
    break;

  case N_STRING:
    if (NSTRING_IS_RAW(node))
      r = compile_length_string_raw_node(&(NSTRING(node)), reg);
    else
      r = compile_length_string_node(&(NSTRING(node)), reg);
    break;

  case N_CCLASS:
    r = compile_length_cclass_node(&(NCCLASS(node)), reg);
    break;

  case N_CTYPE:
  case N_ANYCHAR:
    r = SIZE_OPCODE;
    break;

  case N_BACKREF:
    {
      BackrefNode* br = &(NBACKREF(node));

      if (br->back_num == 1) {
	r = ((!IS_IGNORECASE(reg->options) && br->back_static[0] <= 3)
	     ? SIZE_OPCODE : (SIZE_OPCODE + SIZE_MEMNUM));
      }
      else {
	r = SIZE_OPCODE + SIZE_LENGTH + (SIZE_MEMNUM * br->back_num);
      }
    }
    break;

#ifdef USE_SUBEXP_CALL
  case N_CALL:
    r = SIZE_OP_CALL;
    break;
#endif

  case N_QUALIFIER:
    r = compile_length_qualifier_node(&(NQUALIFIER(node)), reg);
    break;

  case N_EFFECT:
    r = compile_length_effect_node(&NEFFECT(node), reg);
    break;

  case N_ANCHOR:
    r = compile_length_anchor_node(&(NANCHOR(node)), reg);
    break;

  default:
    return ONIGERR_TYPE_BUG;
    break;
  }

  return r;
}

static int
compile_tree(Node* node, regex_t* reg)
{
  int n, type, len, pos, r = 0;

  type = NTYPE(node);
  switch (type) {
  case N_LIST:
    do {
      r = compile_tree(NCONS(node).left, reg);
    } while (r == 0 && IS_NOT_NULL(node = NCONS(node).right));
    break;

  case N_ALT:
    {
      Node* x = node;
      len = 0;
      do {
	len += compile_length_tree(NCONS(x).left, reg);
	if (NCONS(x).right != NULL) {
	  len += SIZE_OP_PUSH + SIZE_OP_JUMP;
	}
      } while (IS_NOT_NULL(x = NCONS(x).right));
      pos = reg->used + len;  /* goal position */

      do {
	len = compile_length_tree(NCONS(node).left, reg);
	if (IS_NOT_NULL(NCONS(node).right)) {
	  r = add_opcode_rel_addr(reg, OP_PUSH, len + SIZE_OP_JUMP);
	  if (r) break;
	}
	r = compile_tree(NCONS(node).left, reg);
	if (r) break;
	if (IS_NOT_NULL(NCONS(node).right)) {
	  len = pos - (reg->used + SIZE_OP_JUMP);
	  r = add_opcode_rel_addr(reg, OP_JUMP, len);
	  if (r) break;
	}
      } while (IS_NOT_NULL(node = NCONS(node).right));
    }
    break;

  case N_STRING:
    if (NSTRING_IS_RAW(node))
      r = compile_string_raw_node(&(NSTRING(node)), reg);
    else
      r = compile_string_node(&(NSTRING(node)), reg);
    break;

  case N_CCLASS:
    r = compile_cclass_node(&(NCCLASS(node)), reg);
    break;

  case N_CTYPE:
    {
      int op;

      switch (NCTYPE(node).type) {
      case CTYPE_WORD:            op = OP_WORD;           break;
      case CTYPE_NOT_WORD:        op = OP_NOT_WORD;       break;
      default:
	return ONIGERR_TYPE_BUG;
	break;
      }
      r = add_opcode(reg, op);
    }
    break;

  case N_ANYCHAR:
    if (IS_MULTILINE(reg->options))
      r = add_opcode(reg, OP_ANYCHAR_ML);
    else
      r = add_opcode(reg, OP_ANYCHAR);
    break;

  case N_BACKREF:
    {
      int i;
      BackrefNode* br = &(NBACKREF(node));

      if (br->back_num == 1) {
	n = br->back_static[0];
	if (IS_IGNORECASE(reg->options)) {
	  r = add_opcode(reg, OP_BACKREFN_IC);
	  if (r) return r;
	  r = add_mem_num(reg, n);
	}
	else {
	  switch (n) {
	  case 1:  r = add_opcode(reg, OP_BACKREF1); break;
	  case 2:  r = add_opcode(reg, OP_BACKREF2); break;
	  case 3:  r = add_opcode(reg, OP_BACKREF3); break;
	  default:
	    r = add_opcode(reg, OP_BACKREFN);
	    if (r) return r;
	    r = add_mem_num(reg, n);
	    break;
	  }
	}
      }
      else {
	int* p;
	add_opcode(reg, (IS_IGNORECASE(reg->options) ? 
			    OP_BACKREF_MULTI_IC : OP_BACKREF_MULTI));
	if (r) return r;
	add_length(reg, br->back_num);
	if (r) return r;
	p = BACKREFS_P(br);
	for (i = br->back_num - 1; i >= 0; i--) {
	  r = add_mem_num(reg, p[i]);
	  if (r) return r;
	}
      }
    }
    break;

#ifdef USE_SUBEXP_CALL
  case N_CALL:
    r = compile_call(&(NCALL(node)), reg);
    break;
#endif

  case N_QUALIFIER:
    r = compile_qualifier_node(&(NQUALIFIER(node)), reg);
    break;

  case N_EFFECT:
    r = compile_effect_node(&NEFFECT(node), reg);
    break;

  case N_ANCHOR:
    r = compile_anchor_node(&(NANCHOR(node)), reg);
    break;

  default:
#ifdef ONIG_DEBUG
    fprintf(stderr, "compile_tree: undefined node type %d\n", NTYPE(node));
#endif
    break;
  }

  return r;
}

#ifdef USE_NAMED_GROUP

static int
noname_disable_map(Node** plink, GroupNumRemap* map, int* counter)
{
  int r = 0;
  Node* node = *plink;

  switch (NTYPE(node)) {
  case N_LIST:
  case N_ALT:
    do {
      r = noname_disable_map(&(NCONS(node).left), map, counter);
    } while (r == 0 && IS_NOT_NULL(node = NCONS(node).right));
    break;

  case N_QUALIFIER:
    {
      Node** ptarget = &(NQUALIFIER(node).target);
      Node*  old = *ptarget;
      r = noname_disable_map(ptarget, map, counter);
      if (*ptarget != old && NTYPE(*ptarget) == N_QUALIFIER) {
	onig_reduce_nested_qualifier(node, *ptarget);
      }
    }
    break;

  case N_EFFECT:
    {
      EffectNode* en = &(NEFFECT(node));
      if (en->type == EFFECT_MEMORY) {
	if (IS_EFFECT_NAMED_GROUP(en)) {
	  (*counter)++;
	  map[en->regnum].new_val = *counter;
	  en->regnum = *counter;
	  r = noname_disable_map(&(en->target), map, counter);
	}
	else {
	  *plink = en->target;
	  en->target = NULL_NODE;
	  onig_node_free(node);
	  r = noname_disable_map(plink, map, counter);
	}
      }
      else
	r = noname_disable_map(&(en->target), map, counter);
    }
    break;

  default:
    break;
  }

  return r;
}

static int
renumber_node_backref(Node* node, GroupNumRemap* map)
{
  int i, pos, n, old_num;
  int *backs;
  BackrefNode* bn = &(NBACKREF(node));

  if (! IS_BACKREF_NAME_REF(bn))
    return ONIGERR_NUMBERED_BACKREF_OR_CALL_NOT_ALLOWED;

  old_num = bn->back_num;
  if (IS_NULL(bn->back_dynamic))
    backs = bn->back_static;
  else
    backs = bn->back_dynamic;

  for (i = 0, pos = 0; i < old_num; i++) {
    n = map[backs[i]].new_val;
    if (n > 0) {
      backs[pos] = n;
      pos++;
    }
  }

  bn->back_num = pos;
  return 0;
}

static int
renumber_by_map(Node* node, GroupNumRemap* map)
{
  int r = 0;

  switch (NTYPE(node)) {
  case N_LIST:
  case N_ALT:
    do {
      r = renumber_by_map(NCONS(node).left, map);
    } while (r == 0 && IS_NOT_NULL(node = NCONS(node).right));
    break;
  case N_QUALIFIER:
    r = renumber_by_map(NQUALIFIER(node).target, map);
    break;
  case N_EFFECT:
    r = renumber_by_map(NEFFECT(node).target, map);
    break;

  case N_BACKREF:
    r = renumber_node_backref(node, map);
    break;

  default:
    break;
  }

  return r;
}

static int
numbered_ref_check(Node* node)
{
  int r = 0;

  switch (NTYPE(node)) {
  case N_LIST:
  case N_ALT:
    do {
      r = numbered_ref_check(NCONS(node).left);
    } while (r == 0 && IS_NOT_NULL(node = NCONS(node).right));
    break;
  case N_QUALIFIER:
    r = numbered_ref_check(NQUALIFIER(node).target);
    break;
  case N_EFFECT:
    r = numbered_ref_check(NEFFECT(node).target);
    break;

  case N_BACKREF:
    if (! IS_BACKREF_NAME_REF(&(NBACKREF(node))))
      return ONIGERR_NUMBERED_BACKREF_OR_CALL_NOT_ALLOWED;
    break;

  default:
    break;
  }

  return r;
}

static int
disable_noname_group_capture(Node** root, regex_t* reg, ScanEnv* env)
{
  int r, i, pos, counter;
  BitStatusType loc;
  GroupNumRemap* map;

  map = (GroupNumRemap* )xalloca(sizeof(GroupNumRemap) * (env->num_mem + 1));
  CHECK_NULL_RETURN_VAL(map, ONIGERR_MEMORY);
  for (i = 1; i <= env->num_mem; i++) {
    map[i].new_val = 0;
  }
  counter = 0;
  r = noname_disable_map(root, map, &counter);
  if (r != 0) return r;

  r = renumber_by_map(*root, map);
  if (r != 0) return r;

  for (i = 1, pos = 1; i <= env->num_mem; i++) {
    if (map[i].new_val > 0) {
      SCANENV_MEM_NODES(env)[pos] = SCANENV_MEM_NODES(env)[i];
      pos++;
    }
  }

  loc = env->capture_history;
  BIT_STATUS_CLEAR(env->capture_history);
  for (i = 1; i <= ONIG_MAX_CAPTURE_HISTORY_GROUP; i++) {
    if (BIT_STATUS_AT(loc, i)) {
      BIT_STATUS_ON_AT_SIMPLE(env->capture_history, map[i].new_val);
    }
  }

  env->num_mem = env->num_named;
  reg->num_mem = env->num_named;

  return onig_renumber_name_table(reg, map);
}
#endif /* USE_NAMED_GROUP */

#ifdef USE_SUBEXP_CALL
static int
unset_addr_list_fix(UnsetAddrList* uslist, regex_t* reg)
{
  int i, offset;
  EffectNode* en;
  AbsAddrType addr;

  for (i = 0; i < uslist->num; i++) {
    en = &(NEFFECT(uslist->us[i].target));
    if (! IS_EFFECT_ADDR_FIXED(en)) return ONIGERR_PARSER_BUG;
    addr = en->call_addr;
    offset = uslist->us[i].offset;

    BBUF_WRITE(reg, offset, &addr, SIZE_ABSADDR);
  }
  return 0;
}
#endif

#ifdef USE_INFINITE_REPEAT_MONOMANIAC_MEM_STATUS_CHECK
static int
qualifiers_memory_node_info(Node* node)
{
  int r = 0;

  switch (NTYPE(node)) {
  case N_LIST:
  case N_ALT:
    {
      int v;
      do {
	v = qualifiers_memory_node_info(NCONS(node).left);
	if (v > r) r = v;
      } while (v >= 0 && IS_NOT_NULL(node = NCONS(node).right));
    }
    break;

#ifdef USE_SUBEXP_CALL
  case N_CALL:
    if (IS_CALL_RECURSION(&NCALL(node))) {
      return NQ_TARGET_IS_EMPTY_REC; /* tiny version */
    }
    else
      r = qualifiers_memory_node_info(NCALL(node).target);
    break;
#endif

  case N_QUALIFIER:
    {
      QualifierNode* qn = &(NQUALIFIER(node));
      if (qn->upper != 0) {
	r = qualifiers_memory_node_info(qn->target);
      }
    }
    break;

  case N_EFFECT:
    {
      EffectNode* en = &(NEFFECT(node));
      switch (en->type) {
      case EFFECT_MEMORY:
	return NQ_TARGET_IS_EMPTY_MEM;
	break;

      case EFFECT_OPTION:
      case EFFECT_STOP_BACKTRACK:
	r = qualifiers_memory_node_info(en->target);
	break;
      default:
	break;
      }
    }
    break;

  case N_BACKREF:
  case N_STRING:
  case N_CTYPE:
  case N_CCLASS:
  case N_ANYCHAR:
  case N_ANCHOR:
  default:
    break;
  }

  return r;
}
#endif /* USE_INFINITE_REPEAT_MONOMANIAC_MEM_STATUS_CHECK */

static int
get_min_match_length(Node* node, OnigDistance *min, ScanEnv* env)
{
  OnigDistance tmin;
  int r = 0;

  *min = 0;
  switch (NTYPE(node)) {
  case N_BACKREF:
    {
      int i;
      int* backs;
      Node** nodes = SCANENV_MEM_NODES(env);
      BackrefNode* br = &(NBACKREF(node));
      if (br->state & NST_RECURSION) break;

      backs = BACKREFS_P(br);
      if (backs[0] > env->num_mem)  return ONIGERR_INVALID_BACKREF;
      r = get_min_match_length(nodes[backs[0]], min, env);
      if (r != 0) break;
      for (i = 1; i < br->back_num; i++) {
	if (backs[i] > env->num_mem)  return ONIGERR_INVALID_BACKREF;
	r = get_min_match_length(nodes[backs[i]], &tmin, env);
	if (r != 0) break;
	if (*min > tmin) *min = tmin;
      }
    }
    break;

#ifdef USE_SUBEXP_CALL
  case N_CALL:
    if (IS_CALL_RECURSION(&NCALL(node))) {
      EffectNode* en = &(NEFFECT(NCALL(node).target));
      if (IS_EFFECT_MIN_FIXED(en))
	*min = en->min_len;
    }
    else
      r = get_min_match_length(NCALL(node).target, min, env);
    break;
#endif

  case N_LIST:
    do {
      r = get_min_match_length(NCONS(node).left, &tmin, env);
      if (r == 0) *min += tmin;
    } while (r == 0 && IS_NOT_NULL(node = NCONS(node).right));
    break;

  case N_ALT:
    {
      Node *x, *y;
      y = node;
      do {
	x = NCONS(y).left;
	r = get_min_match_length(x, &tmin, env);
	if (r != 0) break;
	if (y == node) *min = tmin;
	else if (*min > tmin) *min = tmin;
      } while (r == 0 && IS_NOT_NULL(y = NCONS(y).right));
    }
    break;

  case N_STRING:
    {
      StrNode* sn = &(NSTRING(node));
      *min = sn->end - sn->s;
    }
    break;

  case N_CTYPE:
    switch (NCTYPE(node).type) {
    case CTYPE_WORD:     *min = 1; break;
    case CTYPE_NOT_WORD: *min = 1; break;
    default:
      break;
    }
    break;

  case N_CCLASS:
  case N_ANYCHAR:
    *min = 1;
    break;

  case N_QUALIFIER:
    {
      QualifierNode* qn = &(NQUALIFIER(node));

      if (qn->lower > 0) {
	r = get_min_match_length(qn->target, min, env);
	if (r == 0)
	  *min = distance_multiply(*min, qn->lower);
      }
    }
    break;

  case N_EFFECT:
    {
      EffectNode* en = &(NEFFECT(node));
      switch (en->type) {
      case EFFECT_MEMORY:
#ifdef USE_SUBEXP_CALL
	if (IS_EFFECT_MIN_FIXED(en))
	  *min = en->min_len;
	else {
	  r = get_min_match_length(en->target, min, env);
	  if (r == 0) {
	    en->min_len = *min;
	    SET_EFFECT_STATUS(node, NST_MIN_FIXED);
	  }
	}
	break;
#endif
      case EFFECT_OPTION:
      case EFFECT_STOP_BACKTRACK:
	r = get_min_match_length(en->target, min, env);
	break;
      }
    }
    break;

  case N_ANCHOR:
  default:
    break;
  }

  return r;
}

static int
get_max_match_length(Node* node, OnigDistance *max, ScanEnv* env)
{
  OnigDistance tmax;
  int r = 0;

  *max = 0;
  switch (NTYPE(node)) {
  case N_LIST:
    do {
      r = get_max_match_length(NCONS(node).left, &tmax, env);
      if (r == 0)
	*max = distance_add(*max, tmax);
    } while (r == 0 && IS_NOT_NULL(node = NCONS(node).right));
    break;

  case N_ALT:
    do {
      r = get_max_match_length(NCONS(node).left, &tmax, env);
      if (r == 0 && *max < tmax) *max = tmax;
    } while (r == 0 && IS_NOT_NULL(node = NCONS(node).right));
    break;

  case N_STRING:
    {
      StrNode* sn = &(NSTRING(node));
      *max = sn->end - sn->s;
    }
    break;

  case N_CTYPE:
    switch (NCTYPE(node).type) {
    case CTYPE_WORD:
    case CTYPE_NOT_WORD:
      *max = ONIGENC_MBC_MAXLEN_DIST(env->enc);
      break;

    default:
      break;
    }
    break;

  case N_CCLASS:
  case N_ANYCHAR:
    *max = ONIGENC_MBC_MAXLEN_DIST(env->enc);
    break;

  case N_BACKREF:
    {
      int i;
      int* backs;
      Node** nodes = SCANENV_MEM_NODES(env);
      BackrefNode* br = &(NBACKREF(node));
      if (br->state & NST_RECURSION) {
	*max = ONIG_INFINITE_DISTANCE;
	break;
      }
      backs = BACKREFS_P(br);
      for (i = 0; i < br->back_num; i++) {
	if (backs[i] > env->num_mem)  return ONIGERR_INVALID_BACKREF;
	r = get_max_match_length(nodes[backs[i]], &tmax, env);
	if (r != 0) break;
	if (*max < tmax) *max = tmax;
      }
    }
    break;

#ifdef USE_SUBEXP_CALL
  case N_CALL:
    if (! IS_CALL_RECURSION(&(NCALL(node))))
      r = get_max_match_length(NCALL(node).target, max, env);
    else
      *max = ONIG_INFINITE_DISTANCE;
    break;
#endif

  case N_QUALIFIER:
    {
      QualifierNode* qn = &(NQUALIFIER(node));

      if (qn->upper != 0) {
	r = get_max_match_length(qn->target, max, env);
	if (r == 0 && *max != 0) {
	  if (! IS_REPEAT_INFINITE(qn->upper))
	    *max = distance_multiply(*max, qn->upper);
	  else
	    *max = ONIG_INFINITE_DISTANCE;
	}
      }
    }
    break;

  case N_EFFECT:
    {
      EffectNode* en = &(NEFFECT(node));
      switch (en->type) {
      case EFFECT_MEMORY:
#ifdef USE_SUBEXP_CALL
	if (IS_EFFECT_MAX_FIXED(en))
	  *max = en->max_len;
	else {
	  r = get_max_match_length(en->target, max, env);
	  if (r == 0) {
	    en->max_len = *max;
	    SET_EFFECT_STATUS(node, NST_MAX_FIXED);
	  }
	}
	break;
#endif
      case EFFECT_OPTION:
      case EFFECT_STOP_BACKTRACK:
	r = get_max_match_length(en->target, max, env);
	break;
      }
    }
    break;

  case N_ANCHOR:
  default:
    break;
  }

  return r;
}

#define GET_CHAR_LEN_VARLEN           -1
#define GET_CHAR_LEN_TOP_ALT_VARLEN   -2

/* fixed size pattern node only */
static int
get_char_length_tree1(Node* node, regex_t* reg, int* len, int level)
{
  int tlen;
  int r = 0;

  level++;
  *len = 0;
  switch (NTYPE(node)) {
  case N_LIST:
    do {
      r = get_char_length_tree1(NCONS(node).left, reg, &tlen, level);
      if (r == 0)
	*len = distance_add(*len, tlen);
    } while (r == 0 && IS_NOT_NULL(node = NCONS(node).right));
    break;

  case N_ALT:
    {
      int tlen2;
      int varlen = 0;

      r = get_char_length_tree1(NCONS(node).left, reg, &tlen, level);
      while (r == 0 && IS_NOT_NULL(node = NCONS(node).right)) {
	r = get_char_length_tree1(NCONS(node).left, reg, &tlen2, level);
	if (r == 0) {
	  if (tlen != tlen2)
	    varlen = 1;
	}
      }
      if (r == 0) {
	if (varlen != 0) {
	  if (level == 1)
	    r = GET_CHAR_LEN_TOP_ALT_VARLEN;
	  else
	    r = GET_CHAR_LEN_VARLEN;
	}
	else
	  *len = tlen;
      }
    }
    break;

  case N_STRING:
    {
      StrNode* sn = &(NSTRING(node));
      UChar *s = sn->s;
      while (s < sn->end) {
	s += enc_len(reg->enc, *s);
	(*len)++;
      }
    }
    break;

  case N_QUALIFIER:
    {
      QualifierNode* qn = &(NQUALIFIER(node));
      if (qn->lower == qn->upper) {
	r = get_char_length_tree1(qn->target, reg, &tlen, level);
	if (r == 0)
	  *len = distance_multiply(tlen, qn->lower);
      }
      else
	r = GET_CHAR_LEN_VARLEN;
    }
    break;

#ifdef USE_SUBEXP_CALL
  case N_CALL:
    if (! IS_CALL_RECURSION(&(NCALL(node))))
      r = get_char_length_tree1(NCALL(node).target, reg, len, level);
    else
      r = GET_CHAR_LEN_VARLEN;
    break;
#endif

  case N_CTYPE:
    switch (NCTYPE(node).type) {
    case CTYPE_WORD:
    case CTYPE_NOT_WORD:
      *len = 1;
      break;
    }
    break;

  case N_CCLASS:
  case N_ANYCHAR:
    *len = 1;
    break;

  case N_EFFECT:
    {
      EffectNode* en = &(NEFFECT(node));
      switch (en->type) {
      case EFFECT_MEMORY:
#ifdef USE_SUBEXP_CALL
	if (IS_EFFECT_CLEN_FIXED(en))
	  *len = en->char_len;
	else {
	  r = get_char_length_tree1(en->target, reg, len, level);
	  if (r == 0) {
	    en->char_len = *len;
	    SET_EFFECT_STATUS(node, NST_CLEN_FIXED);
	  }
	}
	break;
#endif
      case EFFECT_OPTION:
      case EFFECT_STOP_BACKTRACK:
	r = get_char_length_tree1(en->target, reg, len, level);
	break;
      default:
	break;
      }
    }
    break;

  case N_ANCHOR:
    break;

  default:
    r = GET_CHAR_LEN_VARLEN;
    break;
  }

  return r;
}

static int
get_char_length_tree(Node* node, regex_t* reg, int* len)
{
  return get_char_length_tree1(node, reg, len, 0);
}

extern int
onig_is_code_in_cc(OnigEncoding enc, OnigCodePoint code, CClassNode* cc)
{
  int found;

  if (code >= SINGLE_BYTE_SIZE) {
    if (IS_NULL(cc->mbuf)) {
      found = 0;
    }
    else {
      found = (onig_is_in_code_range(cc->mbuf->p, code) != 0 ? 1 : 0);
    }
  }
  else {
    found = (BITSET_AT(cc->bs, code) == 0 ? 0 : 1);
  }

  if (cc->not == 0)
    return found;
  else
    return !found;
}

/* x is not included y ==>  1 : 0 */
static int
is_not_included(Node* x, Node* y, regex_t* reg)
{
  int i, len;
  OnigCodePoint code;
  UChar *p, c;
  int ytype;

 retry:
  ytype = NTYPE(y);
  switch (NTYPE(x)) {
  case N_CTYPE:
    {
      switch (ytype) {
      case N_CTYPE:
	switch (NCTYPE(x).type) {
	case CTYPE_WORD:
	  if (NCTYPE(y).type == CTYPE_NOT_WORD)
	    return 1;
	  else
	    return 0;
	  break;
	case CTYPE_NOT_WORD:
	  if (NCTYPE(y).type == CTYPE_WORD)
	    return 1;
	  else
	    return 0;
	  break;
	default:
	  break;
	}
	break;

      case N_CCLASS:
      swap:
	{
	  Node* tmp;
	  tmp = x; x = y; y = tmp;
	  goto retry;
	}
	break;

      case N_STRING:
	goto swap;
	break;

      default:
	break;
      }
    }
    break;

  case N_CCLASS:
    {
      CClassNode* xc = &(NCCLASS(x));
      switch (ytype) {
      case N_CTYPE:
	switch (NCTYPE(y).type) {
	case CTYPE_WORD:
	  if (IS_NULL(xc->mbuf) && xc->not == 0) {
	    for (i = 0; i < SINGLE_BYTE_SIZE; i++) {
	      if (BITSET_AT(xc->bs, i)) {
		if (ONIGENC_IS_CODE_SB_WORD(reg->enc, i)) return 0;
	      }
	    }
	    return 1;
	  }
	  return 0;
	  break;
	case CTYPE_NOT_WORD:
	  for (i = 0; i < SINGLE_BYTE_SIZE; i++) {
	    if (! ONIGENC_IS_CODE_SB_WORD(reg->enc, i)) {
	      if (xc->not == 0) {
		if (BITSET_AT(xc->bs, i))
		  return 0;
	      }
	      else {
		if (! BITSET_AT(xc->bs, i))
		  return 0;
	      }
	    }
	  }
	  return 1;
	  break;

	default:
	  break;
	}
	break;

      case N_CCLASS:
	{
	  int v;
	  CClassNode* yc = &(NCCLASS(y));

	  for (i = 0; i < SINGLE_BYTE_SIZE; i++) {
	    v = BITSET_AT(xc->bs, i);
	    if ((v != 0 && xc->not == 0) || (v == 0 && xc->not)) {
	      v = BITSET_AT(yc->bs, i);
	      if ((v != 0 && yc->not == 0) || (v == 0 && yc->not))
		return 0;
	    }
	  }
	  if ((IS_NULL(xc->mbuf) && xc->not == 0) ||
	      (IS_NULL(yc->mbuf) && yc->not == 0))
	    return 1;
	  return 0;
	}
	break;

      case N_STRING:
	goto swap;
	break;

      default:
	break;
      }
    }
    break;

  case N_STRING:
    {
      StrNode* xs = &(NSTRING(x));
      if (NSTRING_LEN(x) == 0)
	break;

      c = *(xs->s);
      switch (ytype) {
      case N_CTYPE:
	switch (NCTYPE(y).type) {
	case CTYPE_WORD:
	  return (ONIGENC_IS_MBC_WORD(reg->enc, xs->s, xs->end) ? 0 : 1);
	  break;
	case CTYPE_NOT_WORD:
	  return (ONIGENC_IS_MBC_WORD(reg->enc, xs->s, xs->end) ? 1 : 0);
	  break;
	default:
	  break;
	}
	break;

      case N_CCLASS:
	{
	  CClassNode* cc = &(NCCLASS(y));

	  code = ONIGENC_MBC_TO_CODE(reg->enc, xs->s,
				 xs->s + enc_len(reg->enc, c));
	  return (onig_is_code_in_cc(reg->enc, code, cc) != 0 ? 0 : 1);
	}
	break;

      case N_STRING:
	{
	  UChar *q;
	  StrNode* ys = &(NSTRING(y));
	  len = NSTRING_LEN(x);
	  if (len > NSTRING_LEN(y)) len = NSTRING_LEN(y);
	  if (NSTRING_IS_CASE_AMBIG(x) || NSTRING_IS_CASE_AMBIG(y)) {
	    UChar plow[ONIGENC_MBC_TO_LOWER_MAXLEN];
	    UChar qlow[ONIGENC_MBC_TO_LOWER_MAXLEN];
	    int plen, qlen;
	    for (p = ys->s, q = xs->s; q < xs->end; ) {
	      plen = ONIGENC_MBC_TO_LOWER(reg->enc, p, plow);
	      qlen = ONIGENC_MBC_TO_LOWER(reg->enc, q, qlow);
	      if (plen != qlen || onig_strncmp(plow, qlow, plen) != 0)
		return 1;
	      p += enc_len(reg->enc, *p);
	      q += enc_len(reg->enc, *q);
	    }
	  }
	  else {
	    for (i = 0, p = ys->s, q = xs->s; i < len; i++, p++, q++) {
	      if (*p != *q) return 1;
	    }
	  }
	}
	break;
	
      default:
	break;
      }
    }
    break;

  default:
    break;
  }

  return 0;
}

static Node*
get_head_value_node(Node* node, int exact, regex_t* reg)
{
  Node* n = NULL_NODE;

  switch (NTYPE(node)) {
  case N_BACKREF:
  case N_ALT:
  case N_ANYCHAR:
#ifdef USE_SUBEXP_CALL
  case N_CALL:
#endif
    break;

  case N_CTYPE:
  case N_CCLASS:
    if (exact == 0) {
      n = node;
    }
    break;

  case N_LIST:
    n = get_head_value_node(NCONS(node).left, exact, reg);
    break;

  case N_STRING:
    {
      StrNode* sn = &(NSTRING(node));

      if (sn->end <= sn->s)
	break;

      if (exact != 0 &&
	  !NSTRING_IS_RAW(node) && IS_IGNORECASE(reg->options)) {
	if (! ONIGENC_IS_MBC_CASE_AMBIG(reg->enc, sn->s))
	  n = node;
      }
      else {
	n = node;
      }
    }
    break;

  case N_QUALIFIER:
    {
      QualifierNode* qn = &(NQUALIFIER(node));
      if (qn->lower > 0) {
	if (IS_NOT_NULL(qn->head_exact))
	  n = qn->head_exact;
	else
	  n = get_head_value_node(qn->target, exact, reg);
      }
    }
    break;

  case N_EFFECT:
    {
      EffectNode* en = &(NEFFECT(node));
      switch (en->type) {
      case EFFECT_OPTION:
	{
	  OnigOptionType options = reg->options;

	  reg->options = NEFFECT(node).option;
	  n = get_head_value_node(NEFFECT(node).target, exact, reg);
	  reg->options = options;
	}
	break;

      case EFFECT_MEMORY:
      case EFFECT_STOP_BACKTRACK:
	n = get_head_value_node(en->target, exact, reg);
	break;
      }
    }
    break;

  case N_ANCHOR:
    if (NANCHOR(node).type == ANCHOR_PREC_READ)
      n = get_head_value_node(NANCHOR(node).target, exact, reg);
    break;

  default:
    break;
  }

  return n;
}

static int
check_type_tree(Node* node, int type_mask, int effect_mask, int anchor_mask)
{
  int type, r = 0;

  type = NTYPE(node);
  if ((type & type_mask) == 0)
    return 1;

  switch (type) {
  case N_LIST:
  case N_ALT:
    do {
      r = check_type_tree(NCONS(node).left, type_mask, effect_mask, anchor_mask);
    } while (r == 0 && IS_NOT_NULL(node = NCONS(node).right));
    break;

  case N_QUALIFIER:
    r = check_type_tree(NQUALIFIER(node).target, type_mask, effect_mask,
			anchor_mask);
    break;

  case N_EFFECT:
    {
      EffectNode* en = &(NEFFECT(node));
      if ((en->type & effect_mask) == 0)
	return 1;

      r = check_type_tree(en->target, type_mask, effect_mask, anchor_mask);
    }
    break;

  case N_ANCHOR:
    type = NANCHOR(node).type;
    if ((type & anchor_mask) == 0)
      return 1;

    if (NANCHOR(node).target)
      r = check_type_tree(NANCHOR(node).target,
			  type_mask, effect_mask, anchor_mask);
    break;

  default:
    break;
  }
  return r;
}

#ifdef USE_SUBEXP_CALL

#define RECURSION_EXIST       1
#define RECURSION_INFINITE    2

static int
subexp_inf_recursive_check(Node* node, ScanEnv* env, int head)
{
  int type;
  int r = 0;

  type = NTYPE(node);
  switch (type) {
  case N_LIST:
    {
      Node *x;
      OnigDistance min;
      int ret;

      x = node;
      do {
	ret = subexp_inf_recursive_check(NCONS(x).left, env, head);
	if (ret < 0 || ret == RECURSION_INFINITE) return ret;
	r |= ret;
	if (head) {
	  ret = get_min_match_length(NCONS(x).left, &min, env);
	  if (ret != 0) return ret;
	  if (min != 0) head = 0;
	}
      } while (IS_NOT_NULL(x = NCONS(x).right));
    }
    break;

  case N_ALT:
    {
      int ret;
      r = RECURSION_EXIST;
      do {
	ret = subexp_inf_recursive_check(NCONS(node).left, env, head);
	if (ret < 0 || ret == RECURSION_INFINITE) return ret;
	r &= ret;
      } while (IS_NOT_NULL(node = NCONS(node).right));
    }
    break;

  case N_QUALIFIER:
    r = subexp_inf_recursive_check(NQUALIFIER(node).target, env, head);
    if (r == RECURSION_EXIST) {
      if (NQUALIFIER(node).lower == 0) r = 0;
    }
    break;

  case N_ANCHOR:
    {
      AnchorNode* an = &(NANCHOR(node));
      switch (an->type) {
      case ANCHOR_PREC_READ:
      case ANCHOR_PREC_READ_NOT:
      case ANCHOR_LOOK_BEHIND:
      case ANCHOR_LOOK_BEHIND_NOT:
	r = subexp_inf_recursive_check(an->target, env, head);
	break;
      }
    }
    break;

  case N_CALL:
    r = subexp_inf_recursive_check(NCALL(node).target, env, head);
    break;

  case N_EFFECT:
    if (IS_EFFECT_MARK2(&(NEFFECT(node))))
      return 0;
    else if (IS_EFFECT_MARK1(&(NEFFECT(node))))
      return (head == 0 ? RECURSION_EXIST : RECURSION_INFINITE);
    else {
      SET_EFFECT_STATUS(node, NST_MARK2);
      r = subexp_inf_recursive_check(NEFFECT(node).target, env, head);
      CLEAR_EFFECT_STATUS(node, NST_MARK2);
    }
    break;

  default:
    break;
  }

  return r;
}

static int
subexp_inf_recursive_check_trav(Node* node, ScanEnv* env)
{
  int type;
  int r = 0;

  type = NTYPE(node);
  switch (type) {
  case N_LIST:
  case N_ALT:
    do {
      r = subexp_inf_recursive_check_trav(NCONS(node).left, env);
    } while (r == 0 && IS_NOT_NULL(node = NCONS(node).right));
    break;

  case N_QUALIFIER:
    r = subexp_inf_recursive_check_trav(NQUALIFIER(node).target, env);
    break;

  case N_ANCHOR:
    {
      AnchorNode* an = &(NANCHOR(node));
      switch (an->type) {
      case ANCHOR_PREC_READ:
      case ANCHOR_PREC_READ_NOT:
      case ANCHOR_LOOK_BEHIND:
      case ANCHOR_LOOK_BEHIND_NOT:
	r = subexp_inf_recursive_check_trav(an->target, env);
	break;
      }
    }
    break;

  case N_EFFECT:
    {
      EffectNode* en = &(NEFFECT(node));

      if (IS_EFFECT_RECURSION(en)) {
	SET_EFFECT_STATUS(node, NST_MARK1);
	r = subexp_inf_recursive_check(en->target, env, 1);
	if (r > 0) return ONIGERR_NEVER_ENDING_RECURSION;
	CLEAR_EFFECT_STATUS(node, NST_MARK1);
      }
      r = subexp_inf_recursive_check_trav(en->target, env);
    }

    break;

  default:
    break;
  }

  return r;
}

static int
subexp_recursive_check(Node* node)
{
  int type;
  int r = 0;

  type = NTYPE(node);
  switch (type) {
  case N_LIST:
  case N_ALT:
    do {
      r |= subexp_recursive_check(NCONS(node).left);
    } while (IS_NOT_NULL(node = NCONS(node).right));
    break;

  case N_QUALIFIER:
    r = subexp_recursive_check(NQUALIFIER(node).target);
    break;

  case N_ANCHOR:
    {
      AnchorNode* an = &(NANCHOR(node));
      switch (an->type) {
      case ANCHOR_PREC_READ:
      case ANCHOR_PREC_READ_NOT:
      case ANCHOR_LOOK_BEHIND:
      case ANCHOR_LOOK_BEHIND_NOT:
	r = subexp_recursive_check(an->target);
	break;
      }
    }
    break;

  case N_CALL:
    r = subexp_recursive_check(NCALL(node).target);
    if (r != 0) SET_CALL_RECURSION(node);
    break;

  case N_EFFECT:
    if (IS_EFFECT_MARK2(&(NEFFECT(node))))
      return 0;
    else if (IS_EFFECT_MARK1(&(NEFFECT(node))))
      return 1; /* recursion */
    else {
      SET_EFFECT_STATUS(node, NST_MARK2);
      r = subexp_recursive_check(NEFFECT(node).target);
      CLEAR_EFFECT_STATUS(node, NST_MARK2);
    }
    break;

  default:
    break;
  }

  return r;
}


static int
subexp_recursive_check_trav(Node* node, ScanEnv* env)
{
#define FOUND_CALLED_NODE    1

  int type;
  int r = 0;

  type = NTYPE(node);
  switch (type) {
  case N_LIST:
  case N_ALT:
    {
      int ret;
      do {
	ret = subexp_recursive_check_trav(NCONS(node).left, env);
	if (ret == FOUND_CALLED_NODE) r = FOUND_CALLED_NODE;
	else if (ret < 0) return ret;
      } while (IS_NOT_NULL(node = NCONS(node).right));
    }
    break;

  case N_QUALIFIER:
    r = subexp_recursive_check_trav(NQUALIFIER(node).target, env);
    if (NQUALIFIER(node).upper == 0) {
      if (r == FOUND_CALLED_NODE)
	NQUALIFIER(node).is_refered = 1;
    }
    break;

  case N_ANCHOR:
    {
      AnchorNode* an = &(NANCHOR(node));
      switch (an->type) {
      case ANCHOR_PREC_READ:
      case ANCHOR_PREC_READ_NOT:
      case ANCHOR_LOOK_BEHIND:
      case ANCHOR_LOOK_BEHIND_NOT:
	r = subexp_recursive_check_trav(an->target, env);
	break;
      }
    }
    break;

  case N_EFFECT:
    {
      EffectNode* en = &(NEFFECT(node));

      if (! IS_EFFECT_RECURSION(en)) {
	if (IS_EFFECT_CALLED(en)) {
	  SET_EFFECT_STATUS(node, NST_MARK1);
	  r = subexp_recursive_check(en->target);
	  if (r != 0) SET_EFFECT_STATUS(node, NST_RECURSION);
	  CLEAR_EFFECT_STATUS(node, NST_MARK1);
	}
      }
      r = subexp_recursive_check_trav(en->target, env);
      if (IS_EFFECT_CALLED(en))
	r |= FOUND_CALLED_NODE;
    }
    break;

  default:
    break;
  }

  return r;
}

static int
setup_subexp_call(Node* node, ScanEnv* env)
{
  int type;
  int r = 0;

  type = NTYPE(node);
  switch (type) {
  case N_LIST:
    do {
      r = setup_subexp_call(NCONS(node).left, env);
    } while (r == 0 && IS_NOT_NULL(node = NCONS(node).right));
    break;

  case N_ALT:
    do {
      r = setup_subexp_call(NCONS(node).left, env);
    } while (r == 0 && IS_NOT_NULL(node = NCONS(node).right));
    break;

  case N_QUALIFIER:
    r = setup_subexp_call(NQUALIFIER(node).target, env);
    break;
  case N_EFFECT:
    r = setup_subexp_call(NEFFECT(node).target, env);
    break;

  case N_CALL:
    {
      int n, num, *refs;
      UChar *p;
      CallNode* cn = &(NCALL(node));
      Node** nodes = SCANENV_MEM_NODES(env);

#ifdef USE_NAMED_GROUP
      n = onig_name_to_group_numbers(env->reg, cn->name, cn->name_end, &refs);
#else
      n = -1;
#endif
      if (n <= 0) {
	/* name not found, check group number. (?*ddd) */
	p = cn->name;
	num = onig_scan_unsigned_number(&p, cn->name_end, env->enc);
	if (num <= 0 || p != cn->name_end) {
	  onig_scan_env_set_error_string(env,
		  ONIGERR_UNDEFINED_NAME_REFERENCE, cn->name, cn->name_end);
	  return ONIGERR_UNDEFINED_NAME_REFERENCE;
	}
#ifdef USE_NAMED_GROUP
	if (env->num_named > 0 &&
	    IS_SYNTAX_BV(env->syntax, ONIG_SYN_CAPTURE_ONLY_NAMED_GROUP) &&
	    !ONIG_IS_OPTION_ON(env->option, ONIG_OPTION_CAPTURE_GROUP)) {
	  return ONIGERR_NUMBERED_BACKREF_OR_CALL_NOT_ALLOWED;
	}
#endif
	if (num > env->num_mem) {
	  onig_scan_env_set_error_string(env,
		 ONIGERR_UNDEFINED_GROUP_REFERENCE, cn->name, cn->name_end);
	  return ONIGERR_UNDEFINED_GROUP_REFERENCE;
	}
	cn->ref_num = num;
	goto set_call_attr;
      }
      else if (n > 1) {
	onig_scan_env_set_error_string(env,
	       ONIGERR_MULTIPLEX_DEFINITION_NAME_CALL, cn->name, cn->name_end);
	return ONIGERR_MULTIPLEX_DEFINITION_NAME_CALL;
      }
      else {
	cn->ref_num = refs[0];
      set_call_attr:
	cn->target = nodes[cn->ref_num];
	if (IS_NULL(cn->target)) {
	  onig_scan_env_set_error_string(env,
		  ONIGERR_UNDEFINED_NAME_REFERENCE, cn->name, cn->name_end);
	  return ONIGERR_UNDEFINED_NAME_REFERENCE;
	}
	SET_EFFECT_STATUS(cn->target, NST_CALLED);
	BIT_STATUS_ON_AT(env->bt_mem_start, cn->ref_num);
	cn->unset_addr_list = env->unset_addr_list;
      }
    }
    break;

  case N_ANCHOR:
    {
      AnchorNode* an = &(NANCHOR(node));

      switch (an->type) {
      case ANCHOR_PREC_READ:
      case ANCHOR_PREC_READ_NOT:
      case ANCHOR_LOOK_BEHIND:
      case ANCHOR_LOOK_BEHIND_NOT:
	r = setup_subexp_call(an->target, env);
	break;
      }
    }
    break;

  default:
    break;
  }

  return r;
}
#endif

/* divide different length alternatives in look-behind.
  (?<=A|B) ==> (?<=A)|(?<=B)
  (?<!A|B) ==> (?<!A)(?<!B)
*/
static int
divide_look_behind_alternatives(Node* node)
{
  Node tmp_node;
  Node *head, *np, *insert_node;
  AnchorNode* an = &(NANCHOR(node));
  int anc_type = an->type;

  head = an->target;
  np = NCONS(head).left;
  tmp_node = *node; *node = *head; *head = tmp_node;
  NCONS(node).left = head;
  NANCHOR(head).target = np;

  np = node;
  while ((np = NCONS(np).right) != NULL_NODE) {
    insert_node = onig_node_new_anchor(anc_type);
    CHECK_NULL_RETURN_VAL(insert_node, ONIGERR_MEMORY);
    NANCHOR(insert_node).target = NCONS(np).left;
    NCONS(np).left = insert_node;
  }

  if (anc_type == ANCHOR_LOOK_BEHIND_NOT) {
    np = node;
    do {
      np->type = N_LIST;  /* alt -> list */
    } while ((np = NCONS(np).right) != NULL_NODE);
  }
  return 0;
}

static int
setup_look_behind(Node* node, regex_t* reg, ScanEnv* env)
{
  int r, len;
  AnchorNode* an = &(NANCHOR(node));

  r = get_char_length_tree(an->target, reg, &len);
  if (r == 0)
    an->char_len = len;
  else if (r == GET_CHAR_LEN_VARLEN)
    r = ONIGERR_INVALID_LOOK_BEHIND_PATTERN;
  else if (r == GET_CHAR_LEN_TOP_ALT_VARLEN) {
    if (IS_SYNTAX_BV(env->syntax, ONIG_SYN_DIFFERENT_LEN_ALT_LOOK_BEHIND))
      r = divide_look_behind_alternatives(node);
    else
      r = ONIGERR_INVALID_LOOK_BEHIND_PATTERN;
  }

  return r;
}

static int
next_setup(Node* node, Node* next_node, regex_t* reg)
{
  int type;

 retry:
  type = NTYPE(node);
  if (type == N_QUALIFIER) {
    QualifierNode* qn = &(NQUALIFIER(node));
    if (qn->greedy && IS_REPEAT_INFINITE(qn->upper)) {
#ifdef USE_QUALIFIER_PEEK_NEXT
      qn->next_head_exact = get_head_value_node(next_node, 1, reg);
#endif
      /* automatic posseivation a*b ==> (?>a*)b */
      if (qn->lower <= 1) {
	int ttype = NTYPE(qn->target);
	if (IS_NODE_TYPE_SIMPLE(ttype)) {
	  Node *x, *y;
	  x = get_head_value_node(qn->target, 0, reg);
	  if (IS_NOT_NULL(x)) {
	    y = get_head_value_node(next_node,  0, reg);
	    if (IS_NOT_NULL(y) && is_not_included(x, y, reg)) {
	      Node* en = onig_node_new_effect(EFFECT_STOP_BACKTRACK);
	      CHECK_NULL_RETURN_VAL(en, ONIGERR_MEMORY);
	      SET_EFFECT_STATUS(en, NST_STOP_BT_SIMPLE_REPEAT);
	      swap_node(node, en);
	      NEFFECT(node).target = en;
	    }
	  }
	}
      }
    }
  }
  else if (type == N_EFFECT) {
    EffectNode* en = &(NEFFECT(node));
    if (en->type == EFFECT_MEMORY) {
      node = en->target;
      goto retry;
    }
  }
  return 0;
}

#define IN_ALT        (1<<0)
#define IN_NOT        (1<<1)
#define IN_REPEAT     (1<<2)
#define IN_VAR_REPEAT (1<<3)

/* setup_tree does the following work.
 1. check empty loop. (set qn->target_empty_info)
 2. expand ignore-case in char class.
 3. set memory status bit flags. (reg->mem_stats)
 4. set qn->head_exact for [push, exact] -> [push_or_jump_exact1, exact].
 5. find invalid patterns in look-behind.
 6. expand repeated string.
 */
static int
setup_tree(Node* node, regex_t* reg, int state, ScanEnv* env)
{
  int type;
  int r = 0;

  type = NTYPE(node);
  switch (type) {
  case N_LIST:
    {
      Node* prev = NULL_NODE;
      do {
	r = setup_tree(NCONS(node).left, reg, state, env);
	if (IS_NOT_NULL(prev) && r == 0) {
	  r = next_setup(prev, NCONS(node).left, reg);
	}
	prev = NCONS(node).left;
      } while (r == 0 && IS_NOT_NULL(node = NCONS(node).right));
    }
    break;

  case N_ALT:
    do {
      r = setup_tree(NCONS(node).left, reg, (state | IN_ALT), env);
    } while (r == 0 && IS_NOT_NULL(node = NCONS(node).right));
    break;

  case N_CCLASS:
    if (IS_IGNORECASE(reg->options)) {
      int i;
      UChar c, lowbuf[ONIGENC_MBC_TO_LOWER_MAXLEN];
      BitSetRef bs = NCCLASS(node).bs;
      for (i = 0; i < SINGLE_BYTE_SIZE; i++) {
	c = (UChar )i;
	ONIGENC_MBC_TO_LOWER(reg->enc, &c, lowbuf);
	if (*lowbuf != c) {
	  if (BITSET_AT(bs, c))       BITSET_SET_BIT(bs, *lowbuf);
	  if (BITSET_AT(bs, *lowbuf)) BITSET_SET_BIT(bs, c);
	}
      }
    }
    break;

  case N_STRING:
    if (IS_IGNORECASE(reg->options) && !NSTRING_IS_RAW(node)) {
      StrNode* sn = &NSTRING(node);
      UChar* p = sn->s;

      while (p < sn->end) {
	if (ONIGENC_IS_MBC_CASE_AMBIG(reg->enc, p)) {
	  NSTRING_SET_CASE_AMBIG(node);
	  break;
	}
        p += enc_len(reg->enc, *p);
      }
    }
    break;

  case N_CTYPE:
  case N_ANYCHAR:
    break;

#ifdef USE_SUBEXP_CALL
  case N_CALL:
    break;
#endif

  case N_BACKREF:
    {
      int i;
      int* p;
      Node** nodes = SCANENV_MEM_NODES(env);
      BackrefNode* br = &(NBACKREF(node));
      p = BACKREFS_P(br);
      for (i = 0; i < br->back_num; i++) {
	if (p[i] > env->num_mem)  return ONIGERR_INVALID_BACKREF;
	BIT_STATUS_ON_AT(env->backrefed_mem, p[i]);
	BIT_STATUS_ON_AT(env->bt_mem_start, p[i]);
	SET_EFFECT_STATUS(nodes[p[i]], NST_MEM_BACKREFED);
      }
    }
    break;

  case N_QUALIFIER:
    {
      OnigDistance d;
      QualifierNode* qn = &(NQUALIFIER(node));
      Node* target = qn->target;

      if ((state & IN_REPEAT) != 0) {
        qn->state |= NST_IN_REPEAT;
      }

      if (IS_REPEAT_INFINITE(qn->upper) || qn->upper >= 1) {
	r = get_min_match_length(target, &d, env);
	if (r) break;
	if (d == 0) {
	  qn->target_empty_info = NQ_TARGET_IS_EMPTY;
#ifdef USE_INFINITE_REPEAT_MONOMANIAC_MEM_STATUS_CHECK
	  r = qualifiers_memory_node_info(target);
	  if (r < 0) break;
	  if (r > 0) {
	    qn->target_empty_info = r;
	  }
#endif
#if 0
	  r = get_max_match_length(target, &d, env);
	  if (r == 0 && d == 0) {
	    /*  ()* ==> ()?, ()+ ==> ()  */
	    qn->upper = 1;
	    if (qn->lower > 1) qn->lower = 1;
	    if (NTYPE(target) == N_STRING) {
	      qn->upper = qn->lower = 0;  /* /(?:)+/ ==> // */
	    }
	  }
#endif
	}
      }

      state |= IN_REPEAT;
      if (qn->lower != qn->upper)
	state |= IN_VAR_REPEAT;
      r = setup_tree(target, reg, state, env);
      if (r) break;

      /* expand string */
#define EXPAND_STRING_MAX_LENGTH  100
      if (NTYPE(target) == N_STRING) {
	if (!IS_REPEAT_INFINITE(qn->lower) && qn->lower == qn->upper &&
	    qn->lower > 1 && qn->lower <= EXPAND_STRING_MAX_LENGTH) {
	  int len = NSTRING_LEN(target);
	  StrNode* sn = &(NSTRING(target));

	  if (len * qn->lower <= EXPAND_STRING_MAX_LENGTH) {
	    int i, n = qn->lower;
	    onig_node_conv_to_str_node(node, NSTRING(target).flag);
	    for (i = 0; i < n; i++) {
	      r = onig_node_str_cat(node, sn->s, sn->end);
	      if (r) break;
	    }
	    onig_node_free(target);
	    break; /* break case N_QUALIFIER: */
	  }
	}
      }

#ifdef USE_OP_PUSH_OR_JUMP_EXACT
      if (qn->greedy && (qn->target_empty_info != 0)) {
	if (NTYPE(target) == N_QUALIFIER) {
	  QualifierNode* tqn = &(NQUALIFIER(target));
	  if (IS_NOT_NULL(tqn->head_exact)) {
	    qn->head_exact  = tqn->head_exact;
	    tqn->head_exact = NULL;
	  }
	}
	else {
	  qn->head_exact = get_head_value_node(qn->target, 1, reg);
	}
      }
#endif
    }
    break;

  case N_EFFECT:
    {
      EffectNode* en = &(NEFFECT(node));

      switch (en->type) {
      case EFFECT_OPTION:
	{
	  OnigOptionType options = reg->options;
	  reg->options = NEFFECT(node).option;
	  r = setup_tree(NEFFECT(node).target, reg, state, env);
	  reg->options = options;
	}
	break;

      case EFFECT_MEMORY:
	if ((state & (IN_ALT | IN_NOT | IN_VAR_REPEAT)) != 0) {
	  BIT_STATUS_ON_AT(env->bt_mem_start, en->regnum);
	  /* SET_EFFECT_STATUS(node, NST_MEM_IN_ALT_NOT); */
	}
        r = setup_tree(en->target, reg, state, env);
        break;

      case EFFECT_STOP_BACKTRACK:
	{
	  Node* target = en->target;
	  r = setup_tree(target, reg, state, env);
	  if (NTYPE(target) == N_QUALIFIER) {
	    QualifierNode* tqn = &(NQUALIFIER(target));
	    if (IS_REPEAT_INFINITE(tqn->upper) && tqn->lower <= 1 &&
		tqn->greedy != 0) {  /* (?>a*), a*+ etc... */
	      int qtype = NTYPE(tqn->target);
	      if (IS_NODE_TYPE_SIMPLE(qtype))
		SET_EFFECT_STATUS(node, NST_STOP_BT_SIMPLE_REPEAT);
	    }
	  }
	}
	break;
      }
    }
    break;

  case N_ANCHOR:
    {
      AnchorNode* an = &(NANCHOR(node));

      switch (an->type) {
      case ANCHOR_PREC_READ:
	r = setup_tree(an->target, reg, state, env);
	break;
      case ANCHOR_PREC_READ_NOT:
	r = setup_tree(an->target, reg, (state | IN_NOT), env);
	break;

/* allowed node types in look-behind */
#define ALLOWED_TYPE_IN_LB  \
  ( N_LIST | N_ALT | N_STRING | N_CCLASS | N_CTYPE | \
    N_ANYCHAR | N_ANCHOR | N_EFFECT | N_QUALIFIER | N_CALL )

#define ALLOWED_EFFECT_IN_LB       ( EFFECT_MEMORY )
#define ALLOWED_EFFECT_IN_LB_NOT   0

#define ALLOWED_ANCHOR_IN_LB \
( ANCHOR_LOOK_BEHIND | ANCHOR_BEGIN_LINE | ANCHOR_END_LINE | ANCHOR_BEGIN_BUF )
#define ALLOWED_ANCHOR_IN_LB_NOT \
( ANCHOR_LOOK_BEHIND_NOT | ANCHOR_BEGIN_LINE | ANCHOR_END_LINE | ANCHOR_BEGIN_BUF )
	/* can't allow all anchors, because \G in look-behind through Search().
	   ex. /(?<=\G)zz/.match("azz") => success. */

      case ANCHOR_LOOK_BEHIND:
	{
	  r = check_type_tree(an->target, ALLOWED_TYPE_IN_LB,
			      ALLOWED_EFFECT_IN_LB, ALLOWED_ANCHOR_IN_LB);
	  if (r < 0) return r;
	  if (r > 0) return ONIGERR_INVALID_LOOK_BEHIND_PATTERN;
	  r = setup_look_behind(node, reg, env);
	  if (r != 0) return r;
	  r = setup_tree(an->target, reg, state, env);
	}
	break;

      case ANCHOR_LOOK_BEHIND_NOT:
	{
	  r = check_type_tree(an->target, ALLOWED_TYPE_IN_LB,
		      ALLOWED_EFFECT_IN_LB_NOT, ALLOWED_ANCHOR_IN_LB_NOT);
	  if (r < 0) return r;
	  if (r > 0) return ONIGERR_INVALID_LOOK_BEHIND_PATTERN;
	  r = setup_look_behind(node, reg, env);
	  if (r != 0) return r;
	  r = setup_tree(an->target, reg, (state | IN_NOT), env);
	}
	break;
      }
    }
    break;

  default:
    break;
  }

  return r;
}

/* set skip map for Boyer-Moor search */
static int
set_bm_skip(UChar* s, UChar* end, OnigEncoding enc, int ignore_case,
	    UChar skip[], int** int_skip)
{
  int i, len;
  UChar lowbuf[ONIGENC_MBC_TO_LOWER_MAXLEN];

  len = end - s;
  if (len < ONIG_CHAR_TABLE_SIZE) {
    for (i = 0; i < ONIG_CHAR_TABLE_SIZE; i++) skip[i] = len;

    if (ignore_case) {
      for (i = 0; i < len - 1; i++) {
	ONIGENC_MBC_TO_LOWER(enc, &(s[i]), lowbuf);
	skip[*lowbuf] = len - 1 - i;
      }
    }
    else {
      for (i = 0; i < len - 1; i++)
	skip[s[i]] = len - 1 - i;
    }
  }
  else {
    if (IS_NULL(*int_skip)) {
      *int_skip = (int* )xmalloc(sizeof(int) * ONIG_CHAR_TABLE_SIZE);
      if (IS_NULL(*int_skip)) return ONIGERR_MEMORY;
    }
    for (i = 0; i < ONIG_CHAR_TABLE_SIZE; i++) (*int_skip)[i] = len;

    if (ignore_case) {
      for (i = 0; i < len - 1; i++) {
	ONIGENC_MBC_TO_LOWER(enc, &(s[i]), lowbuf);
	(*int_skip)[*lowbuf] = len - 1 - i;
      }
    }
    else {
      for (i = 0; i < len - 1; i++)
	(*int_skip)[s[i]] = len - 1 - i;
    }
  }
  return 0;
}

#define OPT_EXACT_MAXLEN   24

typedef struct {
  OnigDistance min;  /* min byte length */
  OnigDistance max;  /* max byte length */
} MinMaxLen;

typedef struct {
  MinMaxLen mmd;
  OnigEncoding   enc;
  OnigOptionType     options;
  ScanEnv*          scan_env;
} OptEnv;

typedef struct {
  int left_anchor;
  int right_anchor;
} OptAncInfo;

typedef struct {
  MinMaxLen  mmd; /* info position */
  OptAncInfo anc;

  int   reach_end;
  int   ignore_case;
  int   len;
  UChar s[OPT_EXACT_MAXLEN];
} OptExactInfo;

typedef struct {
  MinMaxLen mmd; /* info position */
  OptAncInfo anc;

  int   value;      /* weighted value */
  UChar map[ONIG_CHAR_TABLE_SIZE];
} OptMapInfo;

typedef struct {
  MinMaxLen    len;

  OptAncInfo   anc;
  OptExactInfo exb;    /* boundary */
  OptExactInfo exm;    /* middle */
  OptExactInfo expr;   /* prec read (?=...) */

  OptMapInfo   map;   /* boundary */
} NodeOptInfo;


static int
map_position_value(int i)
{
  static int vals[] = {
    10, 10, 10, 10, 10, 10, 10, 10, 10,  1,  1, 10, 10,  1, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
     1,  6,  3,  6,  6,  6,  6,  6,  6,  5,  5,  5,  5,  5,  5,  5,
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  5,  5,  5,  5,  5,  5,
     5,  4,  4,  4,  4,  3,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  5,  4,  5,  5,  5,
     5,  4,  4,  4,  4,  3,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  5,  5,  5,  5, 10,
  };

  if (i < sizeof(vals)/sizeof(vals[0])) return vals[i];

  return 7;   /* Take it easy. */
}

static int
distance_value(MinMaxLen* mm)
{
  /* 1000 / (min-max-dist + 1) */
  static int dist_vals[] = {
    1000,  500,  333,  250,  200,  167,  143,  125,  111,  100, 
      91,   83,   77,   71,   67,   63,   59,   56,   53,   50, 
      48,   45,   43,   42,   40,   38,   37,   36,   34,   33, 
      32,   31,   30,   29,   29,   28,   27,   26,   26,   25, 
      24,   24,   23,   23,   22,   22,   21,   21,   20,   20, 
      20,   19,   19,   19,   18,   18,   18,   17,   17,   17, 
      16,   16,   16,   16,   15,   15,   15,   15,   14,   14, 
      14,   14,   14,   14,   13,   13,   13,   13,   13,   13, 
      12,   12,   12,   12,   12,   12,   11,   11,   11,   11, 
      11,   11,   11,   11,   11,   10,   10,   10,   10,   10
  };

  int d;

  if (mm->max == ONIG_INFINITE_DISTANCE) return 0;

  d = mm->max - mm->min;
  if (d < sizeof(dist_vals)/sizeof(dist_vals[0]))
    /* return dist_vals[d] * 16 / (mm->min + 12); */
    return dist_vals[d];
  else
    return 1;
}

static int
comp_distance_value(MinMaxLen* d1, MinMaxLen* d2, int v1, int v2)
{
  if (v2 <= 0) return -1;
  if (v1 <= 0) return  1;

  v1 *= distance_value(d1);
  v2 *= distance_value(d2);

  if (v2 > v1) return  1;
  if (v2 < v1) return -1;

  if (d2->min < d1->min) return  1;
  if (d2->min > d1->min) return -1;
  return 0;
}

static int
is_equal_mml(MinMaxLen* a, MinMaxLen* b)
{
  return (a->min == b->min && a->max == b->max) ? 1 : 0;
}


static void
set_mml(MinMaxLen* mml, OnigDistance min, OnigDistance max)
{
  mml->min = min;
  mml->max = max;
}

static void
clear_mml(MinMaxLen* mml)
{
  mml->min = mml->max = 0;
}

static void
copy_mml(MinMaxLen* to, MinMaxLen* from)
{
  to->min = from->min;
  to->max = from->max;
}

static void
add_mml(MinMaxLen* to, MinMaxLen* from)
{
  to->min = distance_add(to->min, from->min);
  to->max = distance_add(to->max, from->max);
}

static void
add_len_mml(MinMaxLen* to, OnigDistance len)
{
  to->min = distance_add(to->min, len);
  to->max = distance_add(to->max, len);
}

static void
alt_merge_mml(MinMaxLen* to, MinMaxLen* from)
{
  if (to->min > from->min) to->min = from->min;
  if (to->max < from->max) to->max = from->max;
}

static void
copy_opt_env(OptEnv* to, OptEnv* from)
{
  *to = *from;
}

static void
clear_opt_anc_info(OptAncInfo* anc)
{
  anc->left_anchor  = 0;
  anc->right_anchor = 0;
}

static void
copy_opt_anc_info(OptAncInfo* to, OptAncInfo* from)
{
  *to = *from;
}

static void
concat_opt_anc_info(OptAncInfo* to, OptAncInfo* left, OptAncInfo* right,
		    OnigDistance left_len, OnigDistance right_len)
{
  clear_opt_anc_info(to);

  to->left_anchor = left->left_anchor;
  if (left_len == 0) {
    to->left_anchor |= right->left_anchor;
  }

  to->right_anchor = right->right_anchor;
  if (right_len == 0) {
    to->right_anchor |= left->right_anchor;
  }
}

static int
is_left_anchor(int anc)
{
  if (anc == ANCHOR_END_BUF || anc == ANCHOR_SEMI_END_BUF ||
      anc == ANCHOR_END_LINE || anc == ANCHOR_PREC_READ ||
      anc == ANCHOR_PREC_READ_NOT)
    return 0;

  return 1;
}

static int
is_set_opt_anc_info(OptAncInfo* to, int anc)
{
  if ((to->left_anchor & anc) != 0) return 1;

  return ((to->right_anchor & anc) != 0 ? 1 : 0);
}

static void
add_opt_anc_info(OptAncInfo* to, int anc)
{
  if (is_left_anchor(anc))
    to->left_anchor |= anc;
  else
    to->right_anchor |= anc;
}

static void
remove_opt_anc_info(OptAncInfo* to, int anc)
{
  if (is_left_anchor(anc))
    to->left_anchor &= ~anc;
  else
    to->right_anchor &= ~anc;
}

static void
alt_merge_opt_anc_info(OptAncInfo* to, OptAncInfo* add)
{
  to->left_anchor  &= add->left_anchor;
  to->right_anchor &= add->right_anchor;
}

static int
is_full_opt_exact_info(OptExactInfo* ex)
{
  return (ex->len >= OPT_EXACT_MAXLEN ? 1 : 0);
}

static void
clear_opt_exact_info(OptExactInfo* ex)
{
  clear_mml(&ex->mmd);
  clear_opt_anc_info(&ex->anc);
  ex->reach_end   = 0;
  ex->ignore_case = 0;
  ex->len         = 0;
  ex->s[0]        = '\0';
}

static void
copy_opt_exact_info(OptExactInfo* to, OptExactInfo* from)
{
  *to = *from;
}

static void
concat_opt_exact_info(OptExactInfo* to, OptExactInfo* add)
{
  int i, n;
  OptAncInfo tanc;

  if (! to->ignore_case && add->ignore_case) {
    if (to->len >= add->len) return ;  /* avoid */

    to->ignore_case = 1;
  }

  for (i = to->len, n = 0; n < add->len && i < OPT_EXACT_MAXLEN; i++, n++)
    to->s[i] = add->s[n];

  to->len = i;
  to->reach_end = (n == add->len ? add->reach_end : 0);

  concat_opt_anc_info(&tanc, &to->anc, &add->anc, 1, 1);
  if (! to->reach_end) tanc.right_anchor = 0;
  copy_opt_anc_info(&to->anc, &tanc);
}

static void
concat_opt_exact_info_str(OptExactInfo* to,
			  UChar* s, UChar* end, int raw, OnigEncoding enc)
{
  int i, j, len;
  UChar *p;

  for (i = to->len, p = s; p < end && i < OPT_EXACT_MAXLEN; ) {
    if (raw) {
      to->s[i++] = *p++;
    }
    else {
      len = enc_len(enc, *p);
      if (i + len > OPT_EXACT_MAXLEN) break;
      for (j = 0; j < len; j++)
	to->s[i++] = *p++;
    }
  }

  to->len = i;
}

static void
alt_merge_opt_exact_info(OptExactInfo* to, OptExactInfo* add, OptEnv* env)
{
  int i, j, len;

  if (add->len == 0 || to->len == 0) {
    clear_opt_exact_info(to);
    return ;
  }

  if (! is_equal_mml(&to->mmd, &add->mmd)) {
    clear_opt_exact_info(to);
    return ;
  }

  for (i = 0; i < to->len && i < add->len; ) {
    if (to->s[i] != add->s[i]) break;
    len = enc_len(env->enc, to->s[i]);

    for (j = 1; j < len; j++) {
      if (to->s[i+j] != add->s[i+j]) break;
    }
    if (j < len) break;
    i += len;
  }

  if (! add->reach_end || i < add->len || i < to->len) {
    to->reach_end = 0;
  }
  to->len = i;
  to->ignore_case |= add->ignore_case;

  alt_merge_opt_anc_info(&to->anc, &add->anc);
  if (! to->reach_end) to->anc.right_anchor = 0;
}

static void
select_opt_exact_info(OptExactInfo* now, OptExactInfo* alt)
{
  int vlen1, vlen2;

  vlen1 = now->len * (now->ignore_case ? 1 : 2);
  vlen2 = alt->len * (alt->ignore_case ? 1 : 2);

  if (comp_distance_value(&now->mmd, &alt->mmd, vlen1, vlen2) > 0)
    copy_opt_exact_info(now, alt);
}

static void
clear_opt_map_info(OptMapInfo* map)
{
  int i;

  clear_mml(&map->mmd);
  clear_opt_anc_info(&map->anc);
  map->value = 0;
  for (i = 0; i < ONIG_CHAR_TABLE_SIZE; i++)
    map->map[i] = 0;
}

static void
copy_opt_map_info(OptMapInfo* to, OptMapInfo* from)
{
  *to = *from;
}

static void
add_char_opt_map_info(OptMapInfo* map, int c)
{
  if (map->map[c] == 0) {
    map->map[c] = 1;
    map->value += map_position_value(c);
  }
}

static void
add_char_amb_opt_map_info(OptMapInfo* map, int c, OnigEncoding enc)
{
  UChar x, low[ONIGENC_MBC_TO_LOWER_MAXLEN];

  add_char_opt_map_info(map, c);

  x = (UChar )c;
  ONIGENC_MBC_TO_LOWER(enc, &x, low);
  if (*low != x) {
    add_char_opt_map_info(map, (int )(*low));
  }
  else {
    int i;
    for (i = 0; i < ONIG_CHAR_TABLE_SIZE; i++) {
      x = (UChar )i;
      ONIGENC_MBC_TO_LOWER(enc, &x, low);
      if ((int )(*low) == c) add_char_opt_map_info(map, i);
    }
  }
}

static void
select_opt_map_info(OptMapInfo* now, OptMapInfo* alt)
{
  static int z = 1<<15; /* 32768: something big value */

  int v1, v2;

  if (alt->value == 0) return ;
  if (now->value == 0) {
    copy_opt_map_info(now, alt);
    return ;
  }

  v1 = z / now->value;
  v2 = z / alt->value;
  if (comp_distance_value(&now->mmd, &alt->mmd, v1, v2) > 0)
    copy_opt_map_info(now, alt);
}

static int
comp_opt_exact_or_map_info(OptExactInfo* e, OptMapInfo* m)
{
#define COMP_EM_BASE  20
  int ve, vm;

  if (m->value <= 0) return -1;

  ve = COMP_EM_BASE * e->len * (e->ignore_case ? 1 : 2);
  vm = COMP_EM_BASE * 5 * 2 / m->value;
  return comp_distance_value(&e->mmd, &m->mmd, ve, vm);
}

static void
alt_merge_opt_map_info(OptMapInfo* to, OptMapInfo* add)
{
  int i, val;

  /* if (! is_equal_mml(&to->mmd, &add->mmd)) return ; */
  if (to->value == 0) return ;
  if (add->value == 0 || to->mmd.max < add->mmd.min) {
    clear_opt_map_info(to);
    return ;
  }

  alt_merge_mml(&to->mmd, &add->mmd);

  val = 0;
  for (i = 0; i < ONIG_CHAR_TABLE_SIZE; i++) {
    if (add->map[i])
      to->map[i] = 1;

    if (to->map[i])
      val += map_position_value(i);
  }
  to->value = val;

  alt_merge_opt_anc_info(&to->anc, &add->anc);
}

static void
set_bound_node_opt_info(NodeOptInfo* opt, MinMaxLen* mmd)
{
  copy_mml(&(opt->exb.mmd),  mmd);
  copy_mml(&(opt->expr.mmd), mmd);
  copy_mml(&(opt->map.mmd),  mmd);
}

static void
clear_node_opt_info(NodeOptInfo* opt)
{
  clear_mml(&opt->len);
  clear_opt_anc_info(&opt->anc);
  clear_opt_exact_info(&opt->exb);
  clear_opt_exact_info(&opt->exm);
  clear_opt_exact_info(&opt->expr);
  clear_opt_map_info(&opt->map);
}

static void
copy_node_opt_info(NodeOptInfo* to, NodeOptInfo* from)
{
  *to = *from;
}

static void
concat_left_node_opt_info(NodeOptInfo* to, NodeOptInfo* add)
{
  int exb_reach, exm_reach;
  OptAncInfo tanc;

  concat_opt_anc_info(&tanc, &to->anc, &add->anc, to->len.max, add->len.max);
  copy_opt_anc_info(&to->anc, &tanc);

  if (add->exb.len > 0 && to->len.max == 0) {
    concat_opt_anc_info(&tanc, &to->anc, &add->exb.anc,
			to->len.max, add->len.max);
    copy_opt_anc_info(&add->exb.anc, &tanc);
  }

  if (add->map.value > 0 && to->len.max == 0) {
    if (add->map.mmd.max == 0)
      add->map.anc.left_anchor |= to->anc.left_anchor;
  }

  exb_reach = to->exb.reach_end;
  exm_reach = to->exm.reach_end;

  if (add->len.max != 0)
    to->exb.reach_end = to->exm.reach_end = 0;

  if (add->exb.len > 0) {
    if (exb_reach) {
      concat_opt_exact_info(&to->exb, &add->exb);
      clear_opt_exact_info(&add->exb);
    }
    else if (exm_reach) {
      concat_opt_exact_info(&to->exm, &add->exb);
      clear_opt_exact_info(&add->exb);
    }
  }
  select_opt_exact_info(&to->exm, &add->exb);
  select_opt_exact_info(&to->exm, &add->exm);

  if (to->expr.len > 0) {
    if (add->len.max > 0) {
      if (to->expr.len > (int )add->len.max)
	to->expr.len = add->len.max;

      if (to->expr.mmd.max == 0)
	select_opt_exact_info(&to->exb, &to->expr);
      else
	select_opt_exact_info(&to->exm, &to->expr);
    }
  }
  else if (add->expr.len > 0) {
    copy_opt_exact_info(&to->expr, &add->expr);
  }

  select_opt_map_info(&to->map, &add->map);

  add_mml(&to->len, &add->len);
}

static void
alt_merge_node_opt_info(NodeOptInfo* to, NodeOptInfo* add, OptEnv* env)
{
  alt_merge_opt_anc_info  (&to->anc,  &add->anc);
  alt_merge_opt_exact_info(&to->exb,  &add->exb, env);
  alt_merge_opt_exact_info(&to->exm,  &add->exm, env);
  alt_merge_opt_exact_info(&to->expr, &add->expr, env);
  alt_merge_opt_map_info  (&to->map,  &add->map);

  alt_merge_mml(&to->len, &add->len);
}


#define MAX_NODE_OPT_INFO_REF_COUNT    5

static int
optimize_node_left(Node* node, NodeOptInfo* opt, OptEnv* env)
{
  int type;
  int r = 0;

  clear_node_opt_info(opt);
  set_bound_node_opt_info(opt, &env->mmd);

  type = NTYPE(node);
  switch (type) {
  case N_LIST:
    {
      OptEnv nenv;
      NodeOptInfo nopt;
      Node* nd = node;

      copy_opt_env(&nenv, env);
      do {
	r = optimize_node_left(NCONS(nd).left, &nopt, &nenv);
	if (r == 0) {
	  add_mml(&nenv.mmd, &nopt.len);
	  concat_left_node_opt_info(opt, &nopt);
	}
      } while (r == 0 && IS_NOT_NULL(nd = NCONS(nd).right));
    }
    break;

  case N_ALT:
    {
      NodeOptInfo nopt;
      Node* nd = node;

      do {
	r = optimize_node_left(NCONS(nd).left, &nopt, env);
	if (r == 0) {
	  if (nd == node) copy_node_opt_info(opt, &nopt);
	  else            alt_merge_node_opt_info(opt, &nopt, env);
	}
      } while ((r == 0) && IS_NOT_NULL(nd = NCONS(nd).right));
    }
    break;

  case N_STRING:
    {
      UChar *p;
      int len, plen;
      StrNode* sn = &(NSTRING(node));
      int slen = sn->end - sn->s;
      int is_raw = NSTRING_IS_RAW(node);

      if ((! IS_IGNORECASE(env->options)) || is_raw) {
	concat_opt_exact_info_str(&opt->exb, sn->s, sn->end,
				  NSTRING_IS_RAW(node), env->enc);
	if (slen > 0) {
	  add_char_opt_map_info(&opt->map, *(sn->s));
	}
      }
      else {
	for (p = sn->s; p < sn->end; ) {
	  len = enc_len(env->enc, *p);
	  if (len == 1 && ONIGENC_IS_MBC_CASE_AMBIG(env->enc, p)) {
	    break;
	  }
	  p += len;
	}

	plen = p - sn->s;
	if (plen > slen / 5) {
	  concat_opt_exact_info_str(&opt->exb, sn->s, p,   is_raw, env->enc);
	  concat_opt_exact_info_str(&opt->exm, p, sn->end, is_raw, env->enc);
	  opt->exm.ignore_case = 1;
	  if (opt->exm.len == sn->end - p)
	    opt->exm.reach_end = 1;

	  copy_mml(&(opt->exm.mmd), &(opt->exb.mmd));
	  add_len_mml(&(opt->exm.mmd), plen);
	}
	else {
	  concat_opt_exact_info_str(&opt->exb, sn->s, sn->end,
				    is_raw, env->enc);
	  opt->exb.ignore_case = 1;
	}

	if (slen > 0) {
	  if (p == sn->s)
	    add_char_amb_opt_map_info(&opt->map, *(sn->s), env->enc);
	  else
	    add_char_opt_map_info(&opt->map, *(sn->s));
	}
      }

      if (opt->exb.len == slen)
	opt->exb.reach_end = 1;

      set_mml(&opt->len, slen, slen);
    }
    break;

  case N_CCLASS:
    {
      int i, z, len, found, mb_found;
      CClassNode* cc = &(NCCLASS(node));

      /* no need to check ignore case. (setted in setup_tree()) */
      found = mb_found = 0;
      for (i = 0; i < SINGLE_BYTE_SIZE; i++) {
	z = BITSET_AT(cc->bs, i);
	if ((z && !cc->not) || (!z && cc->not)) {
	  found = 1;
	  add_char_opt_map_info(&opt->map, i);
	}
      }

      if (! ONIGENC_IS_SINGLEBYTE(env->enc)) {
        if (! IS_NULL(cc->mbuf) ||
            (cc->not != 0 && found != 0)) {
          for (i = 0; i < SINGLE_BYTE_SIZE; i++) {
            z = ONIGENC_IS_MBC_HEAD(env->enc, i);
            if (z) {
              mb_found = 1;
              add_char_opt_map_info(&opt->map, i);
            }
          }
        }
      }

      if (mb_found) {
	len = ONIGENC_MBC_MAXLEN_DIST(env->enc);
	set_mml(&opt->len, 1, len);
      }
      else if (found) {
	len = 1;
	set_mml(&opt->len, 1, len);
      }
    }
    break;

  case N_CTYPE:
    {
      int c;
      int len, min, max;

      min = ONIGENC_MBC_MAXLEN_DIST(env->enc);
      max = 0;

#define IS_WORD_HEAD_BYTE(enc,b) \
    (ONIGENC_IS_MBC_ASCII(&b) ? ONIGENC_IS_CODE_WORD(enc,((OnigCodePoint )b)) \
                          : ONIGENC_IS_MBC_HEAD(enc,b))

      switch (NCTYPE(node).type) {
      case CTYPE_WORD:
	for (c = 0; c < SINGLE_BYTE_SIZE; c++) {
	  if (IS_WORD_HEAD_BYTE(env->enc, c)) {
	    add_char_opt_map_info(&opt->map, c);
	    len = enc_len(env->enc, c);
	    if (len < min) min = len;
	    if (len > max) max = len;
	  }
	}
	break;

      case CTYPE_NOT_WORD:
	for (c = 0; c < SINGLE_BYTE_SIZE; c++) {
	  if (! IS_WORD_HEAD_BYTE(env->enc, c)) {
	    add_char_opt_map_info(&opt->map, c);
	    len = enc_len(env->enc, c);
	    if (len < min) min = len;
	    if (len > max) max = len;
	  }
	}
	break;
      }

      set_mml(&opt->len, min, max);
    }
    break;

  case N_ANYCHAR:
    {
      OnigDistance len = ONIGENC_MBC_MAXLEN_DIST(env->enc);
      set_mml(&opt->len, 1, len);
    }
    break;

  case N_ANCHOR:
    switch (NANCHOR(node).type) {
    case ANCHOR_BEGIN_BUF:
    case ANCHOR_BEGIN_POSITION:
    case ANCHOR_BEGIN_LINE:
    case ANCHOR_END_BUF:
    case ANCHOR_SEMI_END_BUF:
    case ANCHOR_END_LINE:
      add_opt_anc_info(&opt->anc, NANCHOR(node).type);
      break;

    case ANCHOR_PREC_READ:
      {
	NodeOptInfo nopt;

	r = optimize_node_left(NANCHOR(node).target, &nopt, env);
	if (r == 0) {
	  if (nopt.exb.len > 0)
	    copy_opt_exact_info(&opt->expr, &nopt.exb);
	  else if (nopt.exm.len > 0)
	    copy_opt_exact_info(&opt->expr, &nopt.exm);

	  opt->expr.reach_end = 0;

	  if (nopt.map.value > 0)
	    copy_opt_map_info(&opt->map, &nopt.map);
	}
      }
      break;

    case ANCHOR_PREC_READ_NOT:
    case ANCHOR_LOOK_BEHIND: /* Sorry, I can't make use of it. */
    case ANCHOR_LOOK_BEHIND_NOT:
      break;
    }
    break;

  case N_BACKREF:
    {
      int i;
      int* backs;
      OnigDistance min, max, tmin, tmax;
      Node** nodes = SCANENV_MEM_NODES(env->scan_env);
      BackrefNode* br = &(NBACKREF(node));

      if (br->state & NST_RECURSION) {
	set_mml(&opt->len, 0, ONIG_INFINITE_DISTANCE);
	break;
      }
      backs = BACKREFS_P(br);
      r = get_min_match_length(nodes[backs[0]], &min, env->scan_env);
      if (r != 0) break;
      r = get_max_match_length(nodes[backs[0]], &max, env->scan_env);
      if (r != 0) break;
      for (i = 1; i < br->back_num; i++) {
	r = get_min_match_length(nodes[backs[i]], &tmin, env->scan_env);
	if (r != 0) break;
	r = get_max_match_length(nodes[backs[i]], &tmax, env->scan_env);
	if (r != 0) break;
	if (min > tmin) min = tmin;
	if (max < tmax) max = tmax;
      }
      if (r == 0) set_mml(&opt->len, min, max);
    }
    break;

#ifdef USE_SUBEXP_CALL
  case N_CALL:
    if (IS_CALL_RECURSION(&(NCALL(node))))
      set_mml(&opt->len, 0, ONIG_INFINITE_DISTANCE);
    else {
      OnigOptionType save = env->options;
      env->options = NEFFECT(NCALL(node).target).option;
      r = optimize_node_left(NCALL(node).target, opt, env);
      env->options = save;
    }
    break;
#endif

  case N_QUALIFIER:
    {
      int i;
      OnigDistance min, max;
      NodeOptInfo nopt;
      QualifierNode* qn = &(NQUALIFIER(node));

      r = optimize_node_left(qn->target, &nopt, env);
      if (r) break;

      if (qn->lower == 0 && IS_REPEAT_INFINITE(qn->upper)) {
	if (env->mmd.max == 0 &&
	    NTYPE(qn->target) == N_ANYCHAR && qn->greedy) {
	  if (IS_MULTILINE(env->options))
	    add_opt_anc_info(&opt->anc, ANCHOR_ANYCHAR_STAR_ML);
	  else
	    add_opt_anc_info(&opt->anc, ANCHOR_ANYCHAR_STAR);
	}
      }
      else {
	if (qn->lower > 0) {
	  copy_node_opt_info(opt, &nopt);
	  if (nopt.exb.len > 0) {
	    if (nopt.exb.reach_end) {
	      for (i = 2; i < qn->lower &&
		          ! is_full_opt_exact_info(&opt->exb); i++) {
		concat_opt_exact_info(&opt->exb, &nopt.exb);
	      }
	      if (i < qn->lower) {
		opt->exb.reach_end = 0;
	      }
	    }
	  }

	  if (qn->lower != qn->upper) {
	    opt->exb.reach_end = 0;
	    opt->exm.reach_end = 0;
	  }
	  if (qn->lower > 1)
	    opt->exm.reach_end = 0;
	}
      }

      min = distance_multiply(nopt.len.min, qn->lower);
      if (IS_REPEAT_INFINITE(qn->upper))
	max = (nopt.len.max > 0 ? ONIG_INFINITE_DISTANCE : 0);
      else
	max = distance_multiply(nopt.len.max, qn->upper);

      set_mml(&opt->len, min, max);
    }
    break;

  case N_EFFECT:
    {
      EffectNode* en = &(NEFFECT(node));

      switch (en->type) {
      case EFFECT_OPTION:
	{
	  OnigOptionType save = env->options;

	  env->options = en->option;
	  r = optimize_node_left(en->target, opt, env);
	  env->options = save;
	}
	break;

      case EFFECT_MEMORY:
#ifdef USE_SUBEXP_CALL
	en->opt_count++;
	if (en->opt_count > MAX_NODE_OPT_INFO_REF_COUNT) {
	  OnigDistance min, max;

	  min = 0;
	  max = ONIG_INFINITE_DISTANCE;
	  if (IS_EFFECT_MIN_FIXED(en)) min = en->min_len;
	  if (IS_EFFECT_MAX_FIXED(en)) max = en->max_len;
	  set_mml(&opt->len, min, max);
	}
	else
#endif
	{
	  r = optimize_node_left(en->target, opt, env);

	  if (is_set_opt_anc_info(&opt->anc, ANCHOR_ANYCHAR_STAR_MASK)) {
	    if (BIT_STATUS_AT(env->scan_env->backrefed_mem, en->regnum))
	      remove_opt_anc_info(&opt->anc, ANCHOR_ANYCHAR_STAR_MASK);
	  }
	}
	break;

      case EFFECT_STOP_BACKTRACK:
	r = optimize_node_left(en->target, opt, env);
	break;
      }
    }
    break;

  default:
#ifdef ONIG_DEBUG
    fprintf(stderr, "optimize_node_left: undefined node type %d\n",
	    NTYPE(node));
#endif
    r = ONIGERR_TYPE_BUG;
    break;
  }

  return r;
}

static int
set_optimize_exact_info(regex_t* reg, OptExactInfo* e)
{
  int r;

  if (e->len == 0) return 0;

  reg->exact = onig_strdup(e->s, e->s + e->len);
  CHECK_NULL_RETURN_VAL(reg->exact, ONIGERR_MEMORY);

  reg->exact_end = reg->exact + e->len;
 
  if (e->ignore_case) {
    UChar buf[ONIGENC_MBC_TO_LOWER_MAXLEN];
    int len, low_len, i, j, alloc_size;

    alloc_size = e->len;
    i = j = 0;
    while (i < e->len) {
      low_len = ONIGENC_MBC_TO_LOWER(reg->enc, &(e->s[i]), buf);
      len = enc_len(reg->enc, e->s[i]);
      if (low_len > alloc_size - i) {
	reg->exact = xrealloc(reg->exact, alloc_size * 2);
	CHECK_NULL_RETURN_VAL(reg->exact, ONIGERR_MEMORY);
	alloc_size *= 2;
      }

      xmemcpy(&(reg->exact[j]), buf, low_len);
      i += len;
      j += low_len;
    }
    reg->exact_end = reg->exact + j;
    reg->optimize = ONIG_OPTIMIZE_EXACT_IC;
  }
  else {
    int allow_reverse;

    if (e->anc.left_anchor & ANCHOR_BEGIN_LINE)
      allow_reverse = 1;
    else
      allow_reverse =
	ONIGENC_IS_ALLOWED_REVERSE_MATCH(reg->enc, reg->exact, reg->exact_end);

    if (e->len >= 3 || (e->len >= 2 && allow_reverse)) {
      r = set_bm_skip(reg->exact, reg->exact_end, reg->enc, 0,
	              reg->map, &(reg->int_map));
      if (r) return r;

      reg->optimize = (allow_reverse != 0
		       ? ONIG_OPTIMIZE_EXACT_BM : ONIG_OPTIMIZE_EXACT_BM_NOT_REV);
    }
    else {
      reg->optimize = ONIG_OPTIMIZE_EXACT;
    }
  }

  reg->dmin = e->mmd.min;
  reg->dmax = e->mmd.max;

  if (reg->dmin != ONIG_INFINITE_DISTANCE) {
    reg->threshold_len = reg->dmin + (reg->exact_end - reg->exact);
  }

  return 0;
}

static void
set_optimize_map_info(regex_t* reg, OptMapInfo* m)
{
  int i;

  for (i = 0; i < ONIG_CHAR_TABLE_SIZE; i++)
    reg->map[i] = m->map[i];

  reg->optimize   = ONIG_OPTIMIZE_MAP;
  reg->dmin       = m->mmd.min;
  reg->dmax       = m->mmd.max;

  if (reg->dmin != ONIG_INFINITE_DISTANCE) {
    reg->threshold_len = reg->dmin + 1;
  }
}

static void
set_sub_anchor(regex_t* reg, OptAncInfo* anc)
{
  reg->sub_anchor |= anc->left_anchor  & ANCHOR_BEGIN_LINE;
  reg->sub_anchor |= anc->right_anchor & ANCHOR_END_LINE;
}

#ifdef ONIG_DEBUG
static void print_optimize_info(FILE* f, regex_t* reg);
#endif

static int
set_optimize_info_from_tree(Node* node, regex_t* reg, ScanEnv* scan_env)
{

  int r;
  NodeOptInfo opt;
  OptEnv env;

  env.enc        = reg->enc;
  env.options    = reg->options;
  env.scan_env   = scan_env;
  clear_mml(&env.mmd);

  r = optimize_node_left(node, &opt, &env);
  if (r) return r;

  reg->anchor = opt.anc.left_anchor & (ANCHOR_BEGIN_BUF |
        ANCHOR_BEGIN_POSITION | ANCHOR_ANYCHAR_STAR | ANCHOR_ANYCHAR_STAR_ML);

  reg->anchor |= opt.anc.right_anchor & (ANCHOR_END_BUF | ANCHOR_SEMI_END_BUF);

  if (reg->anchor & (ANCHOR_END_BUF | ANCHOR_SEMI_END_BUF)) {
    reg->anchor_dmin = opt.len.min;
    reg->anchor_dmax = opt.len.max;
  }

  if (opt.exb.len > 0 || opt.exm.len > 0) {
    select_opt_exact_info(&opt.exb, &opt.exm);
    if (opt.map.value > 0 &&
	comp_opt_exact_or_map_info(&opt.exb, &opt.map) > 0) {
      goto set_map;
    }
    else {
      r = set_optimize_exact_info(reg, &opt.exb);
      set_sub_anchor(reg, &opt.exb.anc);
    }
  }
  else if (opt.map.value > 0) {
  set_map:
    set_optimize_map_info(reg, &opt.map);
    set_sub_anchor(reg, &opt.map.anc);
  }
  else {
    reg->sub_anchor |= opt.anc.left_anchor & ANCHOR_BEGIN_LINE;
    if (opt.len.max == 0)
      reg->sub_anchor |= opt.anc.right_anchor & ANCHOR_END_LINE;
  }

#if defined(ONIG_DEBUG_COMPILE) || defined(ONIG_DEBUG_MATCH)
  print_optimize_info(stderr, reg);
#endif
  return r;
}

static void
clear_optimize_info(regex_t* reg)
{
  reg->optimize      = ONIG_OPTIMIZE_NONE;
  reg->anchor        = 0;
  reg->anchor_dmin   = 0;
  reg->anchor_dmax   = 0;
  reg->sub_anchor    = 0;
  reg->exact_end     = (UChar* )NULL;
  reg->threshold_len = 0;
  if (IS_NOT_NULL(reg->exact)) {
    xfree(reg->exact);
    reg->exact = (UChar* )NULL;
  }
}

#ifdef ONIG_DEBUG

static void
print_distance_range(FILE* f, OnigDistance a, OnigDistance b)
{
  if (a == ONIG_INFINITE_DISTANCE)
    fputs("inf", f);
  else
    fprintf(f, "(%u)", a);

  fputs("-", f);

  if (b == ONIG_INFINITE_DISTANCE)
    fputs("inf", f);
  else
    fprintf(f, "(%u)", b);
}

static void
print_anchor(FILE* f, int anchor)
{
  int q = 0;

  fprintf(f, "[");

  if (anchor & ANCHOR_BEGIN_BUF) {
    fprintf(f, "begin-buf");
    q = 1;
  }
  if (anchor & ANCHOR_BEGIN_LINE) {
    if (q) fprintf(f, ", ");
    q = 1;
    fprintf(f, "begin-line");
  }
  if (anchor & ANCHOR_BEGIN_POSITION) {
    if (q) fprintf(f, ", ");
    q = 1;
    fprintf(f, "begin-pos");
  }
  if (anchor & ANCHOR_END_BUF) {
    if (q) fprintf(f, ", ");
    q = 1;
    fprintf(f, "end-buf");
  }
  if (anchor & ANCHOR_SEMI_END_BUF) {
    if (q) fprintf(f, ", ");
    q = 1;
    fprintf(f, "semi-end-buf");
  }
  if (anchor & ANCHOR_END_LINE) {
    if (q) fprintf(f, ", ");
    q = 1;
    fprintf(f, "end-line");
  }
  if (anchor & ANCHOR_ANYCHAR_STAR) {
    if (q) fprintf(f, ", ");
    q = 1;
    fprintf(f, "anychar-star");
  }
  if (anchor & ANCHOR_ANYCHAR_STAR_ML) {
    if (q) fprintf(f, ", ");
    fprintf(f, "anychar-star-pl");
  }

  fprintf(f, "]");
}

static void
print_optimize_info(FILE* f, regex_t* reg)
{
  static char* on[] = { "NONE", "EXACT", "EXACT_BM", "EXACT_BM_NOT_REV",
			"EXACT_IC", "MAP" };

  fprintf(f, "optimize: %s\n", on[reg->optimize]);
  fprintf(f, "  anchor: "); print_anchor(f, reg->anchor);
  if ((reg->anchor & ANCHOR_END_BUF_MASK) != 0)
    print_distance_range(f, reg->anchor_dmin, reg->anchor_dmax);
  fprintf(f, "\n");

  if (reg->optimize) {
    fprintf(f, "  sub anchor: "); print_anchor(f, reg->sub_anchor);
    fprintf(f, "\n");
  }
  fprintf(f, "\n");

  if (reg->exact) {
    UChar *p;
    fprintf(f, "exact: [");
    for (p = reg->exact; p < reg->exact_end; p++) {
      fputc(*p, f);
    }
    fprintf(f, "]: length: %d\n", (reg->exact_end - reg->exact));
  }
  else if (reg->optimize & ONIG_OPTIMIZE_MAP) {
    int i, n = 0;
    for (i = 0; i < ONIG_CHAR_TABLE_SIZE; i++)
      if (reg->map[i]) n++;

    fprintf(f, "map: n=%d\n", n);
    if (n > 0) {
      fputc('[', f);
      for (i = 0; i < ONIG_CHAR_TABLE_SIZE; i++)
	if (reg->map[i] && enc_len(reg->enc, i) == 1 &&
	    ONIGENC_IS_CODE_PRINT(reg->enc, i))
	  fputc(i, f);
      fprintf(f, "]\n");
    }
  }
}
#endif /* ONIG_DEBUG */


static void
onig_free_body(regex_t* reg)
{
  if (IS_NOT_NULL(reg->p))                xfree(reg->p);
  if (IS_NOT_NULL(reg->exact))            xfree(reg->exact);
  if (IS_NOT_NULL(reg->int_map))          xfree(reg->int_map);
  if (IS_NOT_NULL(reg->int_map_backward)) xfree(reg->int_map_backward);
  if (IS_NOT_NULL(reg->repeat_range))     xfree(reg->repeat_range);
  if (IS_NOT_NULL(reg->chain))  onig_free(reg->chain);

#ifdef USE_NAMED_GROUP
  onig_names_free(reg);
#endif
}

extern void
onig_free(regex_t* reg)
{
  if (IS_NOT_NULL(reg)) {
    onig_free_body(reg);
    xfree(reg);
  }
}

#define REGEX_TRANSFER(to,from) do {\
  (to)->state = ONIG_STATE_MODIFY;\
  onig_free_body(to);\
  xmemcpy(to, from, sizeof(regex_t));\
  xfree(from);\
} while (0)

static void
onig_transfer(regex_t* to, regex_t* from)
{
  THREAD_ATOMIC_START;
  REGEX_TRANSFER(to, from);
  THREAD_ATOMIC_END;
}

#define REGEX_CHAIN_HEAD(reg) do {\
  while (IS_NOT_NULL((reg)->chain)) {\
    (reg) = (reg)->chain;\
  }\
} while (0)

static void
onig_chain_link_add(regex_t* to, regex_t* add)
{
  THREAD_ATOMIC_START;
  REGEX_CHAIN_HEAD(to);
  to->chain = add;
  THREAD_ATOMIC_END;
}

extern void
onig_chain_reduce(regex_t* reg)
{
  regex_t *head, *prev;

  THREAD_ATOMIC_START;
  prev = reg;
  head = prev->chain;
  if (IS_NOT_NULL(head)) {
    reg->state = ONIG_STATE_MODIFY;
    while (IS_NOT_NULL(head->chain)) {
      prev = head;
      head = head->chain;
    }
    prev->chain = (regex_t* )NULL;
    REGEX_TRANSFER(reg, head);
  }
  THREAD_ATOMIC_END;
}

#if 0
extern int
onig_clone(regex_t** to, regex_t* from)
{
  int r, size;
  regex_t* reg;

  if (ONIG_STATE(from) == ONIG_STATE_NORMAL) {
    from->state++;  /* increment as search counter */
    if (IS_NOT_NULL(from->chain)) {
      onig_chain_reduce(from);
      from->state++;
    }
  }
  else {
    int n = 0;
    while (ONIG_STATE(from) < ONIG_STATE_NORMAL) {
      if (++n > THREAD_PASS_LIMIT_COUNT)
	return ONIGERR_OVER_THREAD_PASS_LIMIT_COUNT;
      THREAD_PASS;
    }
    from->state++;  /* increment as search counter */
  }

  r = onig_alloc_init(&reg, ONIG_OPTION_NONE, from->enc, ONIG_SYNTAX_DEFAULT);
  if (r != 0) {
    from->state--;
    return r;
  }

  xmemcpy(reg, from, sizeof(onig_t));
  reg->state = ONIG_STATE_NORMAL;
  reg->chain = (regex_t* )NULL;

  if (from->p) {
    reg->p = (UChar* )xmalloc(reg->alloc);
    if (IS_NULL(reg->p)) goto mem_error;
    xmemcpy(reg->p, from->p, reg->alloc);
  }

  if (from->exact) {
    reg->exact = (UChar* )xmalloc(from->exact_end - from->exact);
    if (IS_NULL(reg->exact)) goto mem_error;
    reg->exact_end = reg->exact + (from->exact_end - from->exact);
    xmemcpy(reg->exact, from->exact, reg->exact_end - reg->exact);
  }

  if (from->int_map) {
    size = sizeof(int) * ONIG_CHAR_TABLE_SIZE;
    reg->int_map = (int* )xmalloc(size);
    if (IS_NULL(reg->int_map)) goto mem_error;
    xmemcpy(reg->int_map, from->int_map, size);
  }

  if (from->int_map_backward) {
    size = sizeof(int) * ONIG_CHAR_TABLE_SIZE;
    reg->int_map_backward = (int* )xmalloc(size);
    if (IS_NULL(reg->int_map_backward)) goto mem_error;
    xmemcpy(reg->int_map_backward, from->int_map_backward, size);
  }

#ifdef USE_NAMED_GROUP
  reg->name_table = names_clone(from); /* names_clone is not implemented */
#endif

  from->state--;
  *to = reg;
  return 0;

 mem_error:
  from->state--;
  return ONIGERR_MEMORY;
}
#endif

#ifdef ONIG_DEBUG
static void print_compiled_byte_code_list P_((FILE* f, regex_t* reg));
#endif
#ifdef ONIG_DEBUG_PARSE_TREE
static void print_tree P_((FILE* f, Node* node));
#endif

extern int
onig_compile(regex_t* reg, UChar* pattern, UChar* pattern_end,
	      OnigErrorInfo* einfo)
{
#define COMPILE_INIT_SIZE  20

  int r, init_size;
  Node*  root;
  ScanEnv  scan_env;
#ifdef USE_SUBEXP_CALL
  UnsetAddrList  uslist;
#endif

  reg->state = ONIG_STATE_COMPILING;

  if (reg->alloc == 0) {
    init_size = (pattern_end - pattern) * 2;
    if (init_size <= 0) init_size = COMPILE_INIT_SIZE;
    r = BBUF_INIT(reg, init_size);
    if (r != 0) goto end;
  }
  else
    reg->used = 0;

  reg->num_mem            = 0;
  reg->num_repeat         = 0;
  reg->num_null_check     = 0;
  reg->repeat_range_alloc = 0;
  reg->repeat_range       = (OnigRepeatRange* )NULL;

  r = onig_parse_make_tree(&root, pattern, pattern_end, reg, &scan_env);
  if (r != 0) goto err;

#ifdef USE_NAMED_GROUP
  /* mixed use named group and no-named group */
  if (scan_env.num_named > 0 &&
      IS_SYNTAX_BV(scan_env.syntax, ONIG_SYN_CAPTURE_ONLY_NAMED_GROUP) &&
      !ONIG_IS_OPTION_ON(reg->options, ONIG_OPTION_CAPTURE_GROUP)) {
    if (scan_env.num_named != scan_env.num_mem)
      r = disable_noname_group_capture(&root, reg, &scan_env);
    else
      r = numbered_ref_check(root);

    if (r != 0) goto err;
  }
#endif

#ifdef ONIG_DEBUG_PARSE_TREE
  print_tree(stderr, root);
#endif

#ifdef USE_SUBEXP_CALL
  if (scan_env.num_call > 0) {
    r = unset_addr_list_init(&uslist, scan_env.num_call);
    if (r != 0) goto err;
    scan_env.unset_addr_list = &uslist;
    r = setup_subexp_call(root, &scan_env);
    if (r != 0) goto err_unset;
    r = subexp_recursive_check_trav(root, &scan_env);
    if (r  < 0) goto err_unset;
    r = subexp_inf_recursive_check_trav(root, &scan_env);
    if (r != 0) goto err_unset;

    reg->num_call = scan_env.num_call;
  }
  else
    reg->num_call = 0;
#endif

  r = setup_tree(root, reg, 0, &scan_env);
  if (r != 0) goto err_unset;

  reg->capture_history  = scan_env.capture_history;
  reg->bt_mem_start     = scan_env.bt_mem_start;
  reg->bt_mem_start    |= reg->capture_history;
  if (IS_FIND_CONDITION(reg->options))
    BIT_STATUS_ON_ALL(reg->bt_mem_end);
  else {
    reg->bt_mem_end  = scan_env.bt_mem_end;
    reg->bt_mem_end |= reg->capture_history;
  }

  clear_optimize_info(reg);
#ifndef ONIG_DONT_OPTIMIZE
  r = set_optimize_info_from_tree(root, reg, &scan_env);
  if (r != 0) goto err_unset;
#endif

  if (IS_NOT_NULL(scan_env.mem_nodes_dynamic)) {
    xfree(scan_env.mem_nodes_dynamic);
    scan_env.mem_nodes_dynamic = (Node** )NULL;
  }

  r = compile_tree(root, reg);
  if (r == 0) {
    r = add_opcode(reg, OP_END);
#ifdef USE_SUBEXP_CALL
    if (scan_env.num_call > 0) {
      r = unset_addr_list_fix(&uslist, reg);
      unset_addr_list_end(&uslist);
      if (r) goto err;
    }
#endif

    if ((reg->num_repeat != 0) || (reg->bt_mem_end != 0))
      reg->stack_pop_level = STACK_POP_LEVEL_ALL;
    else {
      if (reg->bt_mem_start != 0)
	reg->stack_pop_level = STACK_POP_LEVEL_MEM_START;
      else
	reg->stack_pop_level = STACK_POP_LEVEL_FREE;
    }
  }
#ifdef USE_SUBEXP_CALL
  else if (scan_env.num_call > 0) {
    unset_addr_list_end(&uslist);
  }
#endif
  onig_node_free(root);

#ifdef ONIG_DEBUG_COMPILE
#ifdef USE_NAMED_GROUP
  onig_print_names(stderr, reg);
#endif
  print_compiled_byte_code_list(stderr, reg);
#endif

 end:
  reg->state = ONIG_STATE_NORMAL;
  return r;

 err_unset:
#ifdef USE_SUBEXP_CALL
  if (scan_env.num_call > 0) {
    unset_addr_list_end(&uslist);
  }
#endif
 err:
  if (IS_NOT_NULL(scan_env.error)) {
    if (IS_NOT_NULL(einfo)) {
      einfo->par     = scan_env.error;
      einfo->par_end = scan_env.error_end;
    }
  }

  if (IS_NOT_NULL(root)) onig_node_free(root);
  if (IS_NOT_NULL(scan_env.mem_nodes_dynamic))
      xfree(scan_env.mem_nodes_dynamic);
  return r;
}

extern int
onig_recompile(regex_t* reg, UChar* pattern, UChar* pattern_end,
	    OnigOptionType option, OnigEncoding enc, OnigSyntaxType* syntax,
	    OnigErrorInfo* einfo)
{
  int r;
  regex_t *new_reg;

  r = onig_new(&new_reg, pattern, pattern_end, option, enc, syntax, einfo);
  if (r) return r;
  if (ONIG_STATE(reg) == ONIG_STATE_NORMAL) {
    onig_transfer(reg, new_reg);
  }
  else {
    onig_chain_link_add(reg, new_reg);
  }
  return 0;
}

static int onig_inited = 0;

extern int
onig_alloc_init(regex_t** reg, OnigOptionType option, OnigEncoding enc,
		 OnigSyntaxType* syntax)
{
  if (! onig_inited)
    onig_init();

  if (ONIGENC_IS_UNDEF(enc))
    return ONIGERR_DEFAULT_ENCODING_IS_NOT_SETTED;

  *reg = (regex_t* )xmalloc(sizeof(regex_t));
  if (IS_NULL(*reg)) return ONIGERR_MEMORY;

  if ((option & ONIG_OPTION_NEGATE_SINGLELINE) != 0) {
    option |= syntax->options;
    option &= ~ONIG_OPTION_SINGLELINE;
  }
  else
    option |= syntax->options;

  (*reg)->state            = ONIG_STATE_NORMAL;
  (*reg)->enc              = enc;
  (*reg)->options          = option;
  (*reg)->syntax           = syntax;
  (*reg)->optimize         = 0;
  (*reg)->exact            = (UChar* )NULL;
  (*reg)->int_map          = (int* )NULL;
  (*reg)->int_map_backward = (int* )NULL;
  (*reg)->chain            = (regex_t* )NULL;

  (*reg)->p                = (UChar* )NULL;
  (*reg)->alloc            = 0;
  (*reg)->used             = 0;
  (*reg)->name_table       = (void* )NULL;

  return 0;
}

extern int
onig_new(regex_t** reg, UChar* pattern, UChar* pattern_end,
	  OnigOptionType option, OnigEncoding enc, OnigSyntaxType* syntax,
	  OnigErrorInfo* einfo)
{
  int r;

  if (IS_NOT_NULL(einfo)) einfo->par = (UChar* )NULL;

  r = onig_alloc_init(reg, option, enc, syntax);
  if (r) return r;

  r = onig_compile(*reg, pattern, pattern_end, einfo);
  if (r) {
    onig_free(*reg);
    *reg = NULL;
  }
  return r;
}

extern int
onig_init()
{
  if (onig_inited != 0)
    return 0;

  onig_inited = 1;

  THREAD_ATOMIC_START;

  onigenc_init();
  onigenc_set_default_caseconv_table((UChar* )0);

#ifdef ONIG_DEBUG_STATISTICS
  onig_statistics_init();
#endif

  THREAD_ATOMIC_END;
  return 0;
}

extern int
onig_end()
{
#ifdef ONIG_DEBUG_STATISTICS
  onig_print_statistics(stderr);
#endif

#ifdef USE_RECYCLE_NODE
  onig_free_node_list();
#endif

  onig_inited = 0;
  return 0;
}


#ifdef ONIG_DEBUG

OnigOpInfoType OnigOpInfo[] = {
  { OP_FINISH,            "finish",          ARG_NON },
  { OP_END,               "end",             ARG_NON },
  { OP_EXACT1,            "exact1",          ARG_SPECIAL },
  { OP_EXACT2,            "exact2",          ARG_SPECIAL },
  { OP_EXACT3,            "exact3",          ARG_SPECIAL },
  { OP_EXACT4,            "exact4",          ARG_SPECIAL },
  { OP_EXACT5,            "exact5",          ARG_SPECIAL },
  { OP_EXACTN,            "exactn",          ARG_SPECIAL },
  { OP_EXACTMB2N1,        "exactmb2-n1",     ARG_SPECIAL },
  { OP_EXACTMB2N2,        "exactmb2-n2",     ARG_SPECIAL },
  { OP_EXACTMB2N3,        "exactmb2-n3",     ARG_SPECIAL },
  { OP_EXACTMB2N,         "exactmb2-n",      ARG_SPECIAL },
  { OP_EXACTMB3N,         "exactmb3n"  ,     ARG_SPECIAL },
  { OP_EXACTMBN,          "exactmbn",        ARG_SPECIAL },
  { OP_EXACT1_IC,         "exact1-ic",       ARG_SPECIAL },
  { OP_EXACTN_IC,         "exactn-ic",       ARG_SPECIAL },
  { OP_CCLASS,            "cclass",          ARG_SPECIAL },
  { OP_CCLASS_MB,         "cclass-mb",       ARG_SPECIAL },
  { OP_CCLASS_MIX,        "cclass-mix",      ARG_SPECIAL },
  { OP_CCLASS_NOT,        "cclass-not",      ARG_SPECIAL },
  { OP_CCLASS_MB_NOT,     "cclass-mb-not",   ARG_SPECIAL },
  { OP_CCLASS_MIX_NOT,    "cclass-mix-not",  ARG_SPECIAL },
  { OP_ANYCHAR,           "anychar",         ARG_NON },
  { OP_ANYCHAR_ML,        "anychar-ml",      ARG_NON },
  { OP_ANYCHAR_STAR,      "anychar*",        ARG_NON },
  { OP_ANYCHAR_ML_STAR,   "anychar-ml*",     ARG_NON },
  { OP_ANYCHAR_STAR_PEEK_NEXT, "anychar*-peek-next", ARG_SPECIAL },
  { OP_ANYCHAR_ML_STAR_PEEK_NEXT, "anychar-ml*-peek-next", ARG_SPECIAL },
  { OP_WORD,              "word",            ARG_NON },
  { OP_NOT_WORD,          "not-word",        ARG_NON },
  { OP_WORD_SB,           "word-sb",         ARG_NON },
  { OP_WORD_MB,           "word-mb",         ARG_NON },
  { OP_WORD_BOUND,        "word-bound",      ARG_NON },
  { OP_NOT_WORD_BOUND,    "not-word-bound",  ARG_NON },
  { OP_WORD_BEGIN,        "word-begin",      ARG_NON },
  { OP_WORD_END,          "word-end",        ARG_NON },
  { OP_BEGIN_BUF,         "begin-buf",       ARG_NON },
  { OP_END_BUF,           "end-buf",         ARG_NON },
  { OP_BEGIN_LINE,        "begin-line",      ARG_NON },
  { OP_END_LINE,          "end-line",        ARG_NON },
  { OP_SEMI_END_BUF,      "semi-end-buf",    ARG_NON },
  { OP_BEGIN_POSITION,    "begin-position",  ARG_NON },
  { OP_BACKREF1,          "backref1",        ARG_NON },
  { OP_BACKREF2,          "backref2",        ARG_NON },
  { OP_BACKREF3,          "backref3",        ARG_NON },
  { OP_BACKREFN,          "backrefn",        ARG_MEMNUM  },
  { OP_BACKREFN_IC,       "backrefn-ic",     ARG_MEMNUM  },
  { OP_BACKREF_MULTI,     "backref_multi",   ARG_SPECIAL },
  { OP_BACKREF_MULTI_IC,  "backref_multi-ic",ARG_SPECIAL },
  { OP_MEMORY_START_PUSH, "mem-start-push",  ARG_MEMNUM  },
  { OP_MEMORY_START,      "mem-start",       ARG_MEMNUM  },
  { OP_MEMORY_END_PUSH,     "mem-end-push",     ARG_MEMNUM  },
  { OP_MEMORY_END_PUSH_REC, "mem-end-push-rec", ARG_MEMNUM  },
  { OP_MEMORY_END,          "mem-end",          ARG_MEMNUM  },
  { OP_MEMORY_END_REC,      "mem-end-rec",      ARG_MEMNUM  },
  { OP_SET_OPTION_PUSH,   "set-option-push", ARG_OPTION  },
  { OP_SET_OPTION,        "set-option",      ARG_OPTION  },
  { OP_FAIL,              "fail",            ARG_NON },
  { OP_JUMP,              "jump",            ARG_RELADDR },
  { OP_PUSH,              "push",            ARG_RELADDR },
  { OP_POP,               "pop",             ARG_NON },
  { OP_PUSH_OR_JUMP_EXACT1, "push-or-jump-e1", ARG_SPECIAL },
  { OP_PUSH_IF_PEEK_NEXT, "push-if-peek-next", ARG_SPECIAL },
  { OP_REPEAT,            "repeat",          ARG_SPECIAL },
  { OP_REPEAT_NG,         "repeat-ng",       ARG_SPECIAL },
  { OP_REPEAT_INC,        "repeat-inc",      ARG_MEMNUM  },
  { OP_REPEAT_INC_NG,     "repeat-inc-ng",   ARG_MEMNUM  },
  { OP_REPEAT_INC_SG,     "repeat-inc-sg",    ARG_MEMNUM  },
  { OP_REPEAT_INC_NG_SG,  "repeat-inc-ng-sg", ARG_MEMNUM  },
  { OP_NULL_CHECK_START,  "null-check-start",ARG_MEMNUM  },
  { OP_NULL_CHECK_END,    "null-check-end",  ARG_MEMNUM  },
  { OP_NULL_CHECK_END_MEMST,"null-check-end-memst",  ARG_MEMNUM  },
  { OP_NULL_CHECK_END_MEMST_PUSH,"null-check-end-memst-push",  ARG_MEMNUM  },
  { OP_PUSH_POS,          "push-pos",        ARG_NON },
  { OP_POP_POS,           "pop-pos",         ARG_NON },
  { OP_PUSH_POS_NOT,      "push-pos-not",    ARG_RELADDR },
  { OP_FAIL_POS,          "fail-pos",        ARG_NON },
  { OP_PUSH_STOP_BT,      "push-stop-bt",    ARG_NON },
  { OP_POP_STOP_BT,       "pop-stop-bt",     ARG_NON },
  { OP_LOOK_BEHIND,       "look-behind",     ARG_SPECIAL },
  { OP_PUSH_LOOK_BEHIND_NOT, "push-look-behind-not", ARG_SPECIAL },
  { OP_FAIL_LOOK_BEHIND_NOT, "fail-look-behind-not", ARG_NON },
  { OP_CALL,                 "call",            ARG_ABSADDR },
  { OP_RETURN,               "return",          ARG_NON },
  { -1, "", ARG_NON }
};

static char*
op2name(int opcode)
{
  int i;

  for (i = 0; OnigOpInfo[i].opcode >= 0; i++) {
    if (opcode == OnigOpInfo[i].opcode)
      return OnigOpInfo[i].name;
  }
  return "";
}

static int
op2arg_type(int opcode)
{
  int i;

  for (i = 0; OnigOpInfo[i].opcode >= 0; i++) {
    if (opcode == OnigOpInfo[i].opcode)
      return OnigOpInfo[i].arg_type;
  }
  return ARG_SPECIAL;
}

static void
Indent(FILE* f, int indent)
{
  int i;
  for (i = 0; i < indent; i++) putc(' ', f);
}

static void
p_string(FILE* f, int len, UChar* s)
{
  fputs(":", f);
  while (len-- > 0) { fputc(*s++, f); }
}

static void
p_len_string(FILE* f, LengthType len, int mb_len, UChar* s)
{
  int x = len * mb_len;

  fprintf(f, ":%d:", len);
  while (x-- > 0) { fputc(*s++, f); }
}

extern void
onig_print_compiled_byte_code(FILE* f, UChar* bp, UChar** nextp)
{
  int i, n, arg_type;
  RelAddrType addr;
  LengthType len;
  MemNumType mem;
  OnigCodePoint code;
  UChar *q;

  fprintf(f, "[%s", op2name(*bp));
  arg_type = op2arg_type(*bp);
  if (arg_type != ARG_SPECIAL) {
    bp++;
    switch (arg_type) {
    case ARG_NON:
      break;
    case ARG_RELADDR:
      GET_RELADDR_INC(addr, bp);
      fprintf(f, ":(%d)", addr);
      break;
    case ARG_ABSADDR:
      GET_ABSADDR_INC(addr, bp);
      fprintf(f, ":(%d)", addr);
      break;
    case ARG_LENGTH:
      GET_LENGTH_INC(len, bp);
      fprintf(f, ":%d", len);
      break;
    case ARG_MEMNUM:
      mem = *((MemNumType* )bp);
      bp += SIZE_MEMNUM;
      fprintf(f, ":%d", mem);
      break;
    case ARG_OPTION:
      {
	OnigOptionType option = *((OnigOptionType* )bp);
	bp += SIZE_OPTION;
	fprintf(f, ":%d", option);
      }
      break;
    }
  }
  else {
    switch (*bp++) {
    case OP_EXACT1:
    case OP_ANYCHAR_STAR_PEEK_NEXT:
    case OP_ANYCHAR_ML_STAR_PEEK_NEXT:
      p_string(f, 1, bp++); break;
    case OP_EXACT2:
      p_string(f, 2, bp); bp += 2; break;
    case OP_EXACT3:
      p_string(f, 3, bp); bp += 3; break;
    case OP_EXACT4:
      p_string(f, 4, bp); bp += 4; break;
    case OP_EXACT5:
      p_string(f, 5, bp); bp += 5; break;
    case OP_EXACTN:
      GET_LENGTH_INC(len, bp);
      p_len_string(f, len, 1, bp);
      bp += len;
      break;
    
    case OP_EXACTMB2N1:
      p_string(f, 2, bp); bp += 2; break;
    case OP_EXACTMB2N2:
      p_string(f, 4, bp); bp += 4; break;
    case OP_EXACTMB2N3:
      p_string(f, 6, bp); bp += 6; break;
    case OP_EXACTMB2N:
      GET_LENGTH_INC(len, bp);
      p_len_string(f, len, 2, bp);
      bp += len * 2;
      break;
    case OP_EXACTMB3N:
      GET_LENGTH_INC(len, bp);
      p_len_string(f, len, 3, bp);
      bp += len * 3;
      break;
    case OP_EXACTMBN:
      {
	int mb_len;
      
	GET_LENGTH_INC(mb_len, bp);
	GET_LENGTH_INC(len, bp);
	fprintf(f, ":%d:%d:", mb_len, len);
	n = len * mb_len;
	while (n-- > 0) { fputc(*bp++, f); }
      }
      break;

    case OP_EXACT1_IC:
      p_string(f, 1, bp++);
      break;
    case OP_EXACTN_IC:
      GET_LENGTH_INC(len, bp);
      p_len_string(f, len, 1, bp);
      bp += len;
      break;

    case OP_CCLASS:
      n = bitset_on_num((BitSetRef )bp);
      bp += SIZE_BITSET;
      fprintf(f, ":%d", n);
      break;

    case OP_CCLASS_NOT:
      n = bitset_on_num((BitSetRef )bp);
      bp += SIZE_BITSET;
      fprintf(f, ":%d", n);
      break;

    case OP_CCLASS_MB:
    case OP_CCLASS_MB_NOT:
      GET_LENGTH_INC(len, bp);
      q = bp;
#ifndef PLATFORM_UNALIGNED_WORD_ACCESS
      ALIGNMENT_RIGHT(q);
#endif
      GET_CODE_POINT(code, q);
      bp += len;
      fprintf(f, ":%d:%d", (int )code, len);
      break;

    case OP_CCLASS_MIX:
    case OP_CCLASS_MIX_NOT:
      n = bitset_on_num((BitSetRef )bp);
      bp += SIZE_BITSET;
      GET_LENGTH_INC(len, bp);
      q = bp;
#ifndef PLATFORM_UNALIGNED_WORD_ACCESS
      ALIGNMENT_RIGHT(q);
#endif
      GET_CODE_POINT(code, q);
      bp += len;
      fprintf(f, ":%d:%d:%d", n, (int )code, len);
      break;

    case OP_BACKREF_MULTI:
    case OP_BACKREF_MULTI_IC:
      fputs(" ", f);
      GET_LENGTH_INC(len, bp);
      for (i = 0; i < len; i++) {
	GET_MEMNUM_INC(mem, bp);
	if (i > 0) fputs(", ", f);
	fprintf(f, "%d", mem);
      }
      break;

    case OP_REPEAT:
    case OP_REPEAT_NG:
      {
	mem = *((MemNumType* )bp);
	bp += SIZE_MEMNUM;
	addr = *((RelAddrType* )bp);
	bp += SIZE_RELADDR;
	fprintf(f, ":%d:%d", mem, addr);
      }
      break;

    case OP_PUSH_OR_JUMP_EXACT1:
    case OP_PUSH_IF_PEEK_NEXT:
      addr = *((RelAddrType* )bp);
      bp += SIZE_RELADDR;
      fprintf(f, ":(%d)", addr);
      p_string(f, 1, bp);
      bp += 1;
      break;

    case OP_LOOK_BEHIND:
      GET_LENGTH_INC(len, bp);
      fprintf(f, ":%d", len);
      break;

    case OP_PUSH_LOOK_BEHIND_NOT:
      GET_RELADDR_INC(addr, bp);
      GET_LENGTH_INC(len, bp);
      fprintf(f, ":%d:(%d)", len, addr);
      break;

    default:
      fprintf(stderr, "onig_print_compiled_byte_code: undefined code %d\n",
	      *--bp);
    }
  }
  fputs("]", f);
  if (nextp) *nextp = bp;
}

static void
print_compiled_byte_code_list(FILE* f, regex_t* reg)
{
  int ncode;
  UChar* bp = reg->p;
  UChar* end = reg->p + reg->used;

  fprintf(f, "code length: %d\n", reg->used);

  ncode = 0;
  while (bp < end) {
    ncode++;
    if (bp > reg->p) {
      if (ncode % 5 == 0)
	fprintf(f, "\n");
      else
	fputs(" ", f);
    }
    onig_print_compiled_byte_code(f, bp, &bp);
  }

  fprintf(f, "\n");
}

static void
print_indent_tree(FILE* f, Node* node, int indent)
{
  int i, type;
  int add = 3;
  UChar* p;

  Indent(f, indent);
  if (IS_NULL(node)) {
    fprintf(f, "ERROR: null node!!!\n");
    exit (0);
  }

  type = NTYPE(node);
  switch (type) {
  case N_LIST:
  case N_ALT:
    if (NTYPE(node) == N_LIST)
      fprintf(f, "<list:%x>\n", (int )node);
    else
      fprintf(f, "<alt:%x>\n", (int )node);

    print_indent_tree(f, NCONS(node).left, indent + add);
    while (IS_NOT_NULL(node = NCONS(node).right)) {
      if (NTYPE(node) != type) {
	fprintf(f, "ERROR: list/alt right is not a cons. %d\n", NTYPE(node));
	exit(0);
      }
      print_indent_tree(f, NCONS(node).left, indent + add);
    }
    break;

  case N_STRING:
    fprintf(f, "<string%s:%x>",
	    (NSTRING_IS_RAW(node) ? "-raw" : ""), (int )node);
    for (p = NSTRING(node).s; p < NSTRING(node).end; p++) {
      if (*p >= 0x20 && *p < 0x7f)
	fputc(*p, f);
      else {
	fprintf(f, " 0x%02x", *p);
      }
    }
    break;

  case N_CCLASS:
    fprintf(f, "<cclass:%x>", (int )node);
    if (NCCLASS(node).not) fputs(" not", f);
    if (NCCLASS(node).mbuf) {
      BBuf* bbuf = NCCLASS(node).mbuf;
      for (i = 0; i < bbuf->used; i++) {
	if (i > 0) fprintf(f, ",");
	fprintf(f, "%0x", bbuf->p[i]);
      }
    }
#if 0
    fprintf(f, "\n");
    Indent(f, indent);
    for (i = 0; i < SINGLE_BYTE_SIZE; i++)
      fputc((BITSET_AT(NCCLASS(node).bs, i) ? '1' : '0'), f);
#endif
    break;

  case N_CTYPE:
    fprintf(f, "<ctype:%x> ", (int )node);
    switch (NCTYPE(node).type) {
    case CTYPE_WORD:            fputs("word",           f); break;
    case CTYPE_NOT_WORD:        fputs("not word",       f); break;
    default:
      fprintf(f, "ERROR: undefined ctype.\n");
      exit(0);
    }
    break;

  case N_ANYCHAR:
    fprintf(f, "<anychar:%x>", (int )node);
    break;

  case N_ANCHOR:
    fprintf(f, "<anchor:%x> ", (int )node);
    switch (NANCHOR(node).type) {
    case ANCHOR_BEGIN_BUF:      fputs("begin buf",      f); break;
    case ANCHOR_END_BUF:        fputs("end buf",        f); break;
    case ANCHOR_BEGIN_LINE:     fputs("begin line",     f); break;
    case ANCHOR_END_LINE:       fputs("end line",       f); break;
    case ANCHOR_SEMI_END_BUF:   fputs("semi end buf",   f); break;
    case ANCHOR_BEGIN_POSITION: fputs("begin position", f); break;

    case ANCHOR_WORD_BOUND:      fputs("word bound",     f); break;
    case ANCHOR_NOT_WORD_BOUND:  fputs("not word bound", f); break;
#ifdef USE_WORD_BEGIN_END
    case ANCHOR_WORD_BEGIN:      fputs("word begin", f);     break;
    case ANCHOR_WORD_END:        fputs("word end", f);       break;
#endif
    case ANCHOR_PREC_READ:       fputs("prec read",      f); break;
    case ANCHOR_PREC_READ_NOT:   fputs("prec read not",  f); break;
    case ANCHOR_LOOK_BEHIND:     fputs("look_behind",    f); break;
    case ANCHOR_LOOK_BEHIND_NOT: fputs("look_behind_not",f); break;

    default:
      fprintf(f, "ERROR: undefined anchor type.\n");
      break;
    }
    break;

  case N_BACKREF:
    {
      int* p;
      BackrefNode* br = &(NBACKREF(node));
      p = BACKREFS_P(br);
      fprintf(f, "<backref:%x>", (int )node);
      for (i = 0; i < br->back_num; i++) {
	if (i > 0) fputs(", ", f);
	fprintf(f, "%d", p[i]);
      }
    }
    break;

#ifdef USE_SUBEXP_CALL
  case N_CALL:
    {
      CallNode* cn = &(NCALL(node));
      fprintf(f, "<call:%x>", (int )node);
      p_string(f, cn->name_end - cn->name, cn->name);
    }
    break;
#endif

  case N_QUALIFIER:
    fprintf(f, "<qualifier:%x>{%d,%d}%s\n", (int )node,
	    NQUALIFIER(node).lower, NQUALIFIER(node).upper,
	    (NQUALIFIER(node).greedy ? "" : "?"));
    print_indent_tree(f, NQUALIFIER(node).target, indent + add);
    break;

  case N_EFFECT:
    fprintf(f, "<effect:%x> ", (int )node);
    switch (NEFFECT(node).type) {
    case EFFECT_OPTION:
      fprintf(f, "option:%d\n", NEFFECT(node).option);
      print_indent_tree(f, NEFFECT(node).target, indent + add);
      break;
    case EFFECT_MEMORY:
      fprintf(f, "memory:%d", NEFFECT(node).regnum);
      break;
    case EFFECT_STOP_BACKTRACK:
      fprintf(f, "stop-bt");
      break;

    default:
      break;
    }
    fprintf(f, "\n");
    print_indent_tree(f, NEFFECT(node).target, indent + add);
    break;

  default:
    fprintf(f, "print_indent_tree: undefined node type %d\n", NTYPE(node));
    break;
  }

  if (type != N_LIST && type != N_ALT && type != N_QUALIFIER &&
      type != N_EFFECT)
    fprintf(f, "\n");
  fflush(f);
}
#endif /* ONIG_DEBUG */

#ifdef ONIG_DEBUG_PARSE_TREE
static void
print_tree(FILE* f, Node* node)
{
  print_indent_tree(f, node, 0);
}
#endif
