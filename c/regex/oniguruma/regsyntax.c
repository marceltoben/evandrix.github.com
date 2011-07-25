/**********************************************************************

  regsyntax.c -  Oniguruma (regular expression library)

  Copyright (C) 2004-2006  K.Kosako (sndgk393 AT ybb DOT ne DOT jp)

**********************************************************************/
#include "regint.h"

OnigSyntaxType OnigSyntaxPosixBasic = {
  ( SYN_POSIX_COMMON_OP | ONIG_SYN_OP_ESC_LPAREN_SUBEXP |
    ONIG_SYN_OP_ESC_BRACE_INTERVAL )
  , 0
  , 0
  , ( ONIG_OPTION_SINGLELINE | ONIG_OPTION_MULTILINE )
};

OnigSyntaxType OnigSyntaxPosixExtended = {
  ( SYN_POSIX_COMMON_OP | ONIG_SYN_OP_LPAREN_SUBEXP |
    ONIG_SYN_OP_BRACE_INTERVAL |
    ONIG_SYN_OP_PLUS_ONE_INF | ONIG_SYN_OP_QMARK_ZERO_ONE | ONIG_SYN_OP_VBAR_ALT )
  , 0
  , ( ONIG_SYN_CONTEXT_INDEP_ANCHORS | 
      ONIG_SYN_CONTEXT_INDEP_REPEAT_OPS | ONIG_SYN_CONTEXT_INVALID_REPEAT_OPS | 
      ONIG_SYN_ALLOW_UNMATCHED_CLOSE_SUBEXP |
      ONIG_SYN_ALLOW_DOUBLE_RANGE_OP_IN_CC )
  , ( ONIG_OPTION_SINGLELINE | ONIG_OPTION_MULTILINE )
};

OnigSyntaxType OnigSyntaxEmacs = {
  ( ONIG_SYN_OP_DOT_ANYCHAR | ONIG_SYN_OP_BRACKET_CC |
    ONIG_SYN_OP_ESC_BRACE_INTERVAL |
    ONIG_SYN_OP_ESC_LPAREN_SUBEXP | ONIG_SYN_OP_ESC_VBAR_ALT |
    ONIG_SYN_OP_ASTERISK_ZERO_INF | ONIG_SYN_OP_PLUS_ONE_INF |
    ONIG_SYN_OP_QMARK_ZERO_ONE | ONIG_SYN_OP_DECIMAL_BACKREF |
    ONIG_SYN_OP_LINE_ANCHOR | ONIG_SYN_OP_ESC_CONTROL_CHARS )
  , ONIG_SYN_OP2_ESC_GNU_BUF_ANCHOR
  , ONIG_SYN_ALLOW_EMPTY_RANGE_IN_CC
  , ONIG_OPTION_NONE
};

OnigSyntaxType OnigSyntaxGrep = {
  ( ONIG_SYN_OP_DOT_ANYCHAR | ONIG_SYN_OP_BRACKET_CC | ONIG_SYN_OP_POSIX_BRACKET |
    ONIG_SYN_OP_ESC_BRACE_INTERVAL | ONIG_SYN_OP_ESC_LPAREN_SUBEXP |
    ONIG_SYN_OP_ESC_VBAR_ALT |
    ONIG_SYN_OP_ASTERISK_ZERO_INF | ONIG_SYN_OP_ESC_PLUS_ONE_INF |
    ONIG_SYN_OP_ESC_QMARK_ZERO_ONE | ONIG_SYN_OP_LINE_ANCHOR |
    ONIG_SYN_OP_ESC_W_WORD | ONIG_SYN_OP_ESC_B_WORD_BOUND |
    ONIG_SYN_OP_ESC_LTGT_WORD_BEGIN_END | ONIG_SYN_OP_DECIMAL_BACKREF )
  , 0
  , ( ONIG_SYN_ALLOW_EMPTY_RANGE_IN_CC | ONIG_SYN_NOT_NEWLINE_IN_NEGATIVE_CC )
  , ONIG_OPTION_NONE
};

OnigSyntaxType OnigSyntaxGnuRegex = {
  SYN_GNU_REGEX_OP
  , 0
  , SYN_GNU_REGEX_BV
  , ONIG_OPTION_NONE
};

OnigSyntaxType OnigSyntaxJava = {
  (( SYN_GNU_REGEX_OP | ONIG_SYN_OP_QMARK_NON_GREEDY |
     ONIG_SYN_OP_ESC_CONTROL_CHARS | ONIG_SYN_OP_ESC_C_CONTROL |
     ONIG_SYN_OP_ESC_OCTAL3 | ONIG_SYN_OP_ESC_X_HEX2 )
   & ~ONIG_SYN_OP_ESC_LTGT_WORD_BEGIN_END )
  , ( ONIG_SYN_OP2_ESC_CAPITAL_Q_QUOTE | ONIG_SYN_OP2_QMARK_GROUP_EFFECT |
      ONIG_SYN_OP2_OPTION_PERL | ONIG_SYN_OP2_PLUS_POSSESSIVE_REPEAT |
      ONIG_SYN_OP2_PLUS_POSSESSIVE_INTERVAL | ONIG_SYN_OP2_CCLASS_SET_OP |
      ONIG_SYN_OP2_ESC_V_VTAB | ONIG_SYN_OP2_ESC_U_HEX4 |
      ONIG_SYN_OP2_ESC_P_BRACE_CHAR_PROPERTY )
  , ( SYN_GNU_REGEX_BV | ONIG_SYN_DIFFERENT_LEN_ALT_LOOK_BEHIND )
  , ONIG_OPTION_SINGLELINE
};

OnigSyntaxType OnigSyntaxPerl = {
  (( SYN_GNU_REGEX_OP | ONIG_SYN_OP_QMARK_NON_GREEDY |
     ONIG_SYN_OP_ESC_OCTAL3 | ONIG_SYN_OP_ESC_X_HEX2 |
     ONIG_SYN_OP_ESC_X_BRACE_HEX8 | ONIG_SYN_OP_ESC_CONTROL_CHARS |
     ONIG_SYN_OP_ESC_C_CONTROL )
   & ~ONIG_SYN_OP_ESC_LTGT_WORD_BEGIN_END )
  , ( ONIG_SYN_OP2_ESC_CAPITAL_Q_QUOTE |
      ONIG_SYN_OP2_QMARK_GROUP_EFFECT | ONIG_SYN_OP2_OPTION_PERL |
      ONIG_SYN_OP2_ESC_P_BRACE_CHAR_PROPERTY |
      ONIG_SYN_OP2_ESC_P_BRACE_CIRCUMFLEX_NOT |
      ONIG_SYN_OP2_CHAR_PROPERTY_PREFIX_IS )
  , SYN_GNU_REGEX_BV
  , ONIG_OPTION_SINGLELINE
};


extern int
onig_set_default_syntax(OnigSyntaxType* syntax)
{
  if (IS_NULL(syntax))
    syntax = ONIG_SYNTAX_RUBY;

  OnigDefaultSyntax = syntax;
  return 0;
}

extern void
onig_copy_syntax(OnigSyntaxType* to, OnigSyntaxType* from)
{
  *to = *from;
}

extern void
onig_set_syntax_op(OnigSyntaxType* syntax, unsigned int op)
{
  syntax->op = op;
}

extern void
onig_set_syntax_op2(OnigSyntaxType* syntax, unsigned int op2)
{
  syntax->op2 = op2;
}

extern void
onig_set_syntax_behavior(OnigSyntaxType* syntax, unsigned int behavior)
{
  syntax->behavior = behavior;
}

extern void
onig_set_syntax_options(OnigSyntaxType* syntax, OnigOptionType options)
{
  syntax->options = options;
}

#ifdef USE_VARIABLE_META_CHARS
extern int onig_set_meta_char(unsigned int what, OnigCodePoint code)
{
  if (code >= 256) { /* restricted by current implementation. */
    return ONIGERR_INVALID_ARGUMENT;
  }

  switch (what) {
  case ONIG_META_CHAR_ESCAPE:
    OnigMetaCharTable.esc = (UChar )code;
    break;
  case ONIG_META_CHAR_ANYCHAR:
    OnigMetaCharTable.anychar = (UChar )code;
    break;
  case ONIG_META_CHAR_ANYTIME:
    OnigMetaCharTable.anytime = (UChar )code;
    break;
  case ONIG_META_CHAR_ZERO_OR_ONE_TIME:
    OnigMetaCharTable.zero_or_one_time = (UChar )code;
    break;
  case ONIG_META_CHAR_ONE_OR_MORE_TIME:
    OnigMetaCharTable.one_or_more_time = (UChar )code;
    break;
  case ONIG_META_CHAR_ANYCHAR_ANYTIME:
    OnigMetaCharTable.anychar_anytime = (UChar )code;
    break;
  default:
    return ONIGERR_INVALID_ARGUMENT;
    break;
  }
  return 0;
}
#endif /* USE_VARIABLE_META_CHARS */
