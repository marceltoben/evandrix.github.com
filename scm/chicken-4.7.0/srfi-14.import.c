/* Generated from srfi-14.import.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: srfi-14.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -feature chicken-compile-shared -dynamic -no-trace -output-file srfi-14.import.c
   used units: library eval
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[3];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8)
static void C_ccall f_8(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11)
static void C_ccall f_11(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14)
static void C_ccall f_14(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("toplevel"));
C_resize_stack(131072);
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(878)){
C_save(t1);
C_rereclaim2(878*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,3);
lf[0]=C_h_intern(&lf[0],29,"\003sysregister-primitive-module");
lf[1]=C_h_intern(&lf[1],7,"srfi-14");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012->char-set\376\003\000\000\002\376\001\000\000\010char-set\376\003\000\000\002\376\001\000\000\016char-set->list\376\003\000\000\002\376\001\000\000\020char-set"
"->string\376\003\000\000\002\376\001\000\000\017char-set-adjoin\376\003\000\000\002\376\001\000\000\020char-set-adjoin!\376\003\000\000\002\376\001\000\000\014char-set-an"
"y\376\003\000\000\002\376\001\000\000\023char-set-complement\376\003\000\000\002\376\001\000\000\024char-set-complement!\376\003\000\000\002\376\001\000\000\022char-set-c"
"ontains\077\376\003\000\000\002\376\001\000\000\015char-set-copy\376\003\000\000\002\376\001\000\000\016char-set-count\376\003\000\000\002\376\001\000\000\017char-set-cursor"
"\376\003\000\000\002\376\001\000\000\024char-set-cursor-next\376\003\000\000\002\376\001\000\000\017char-set-delete\376\003\000\000\002\376\001\000\000\020char-set-delete"
"!\376\003\000\000\002\376\001\000\000\032char-set-diff+intersection\376\003\000\000\002\376\001\000\000\033char-set-diff+intersection!\376\003\000\000\002\376"
"\001\000\000\023char-set-difference\376\003\000\000\002\376\001\000\000\024char-set-difference!\376\003\000\000\002\376\001\000\000\016char-set-every\376\003\000"
"\000\002\376\001\000\000\017char-set-filter\376\003\000\000\002\376\001\000\000\020char-set-filter!\376\003\000\000\002\376\001\000\000\015char-set-fold\376\003\000\000\002\376\001\000\000"
"\021char-set-for-each\376\003\000\000\002\376\001\000\000\015char-set-hash\376\003\000\000\002\376\001\000\000\025char-set-intersection\376\003\000\000\002\376\001\000"
"\000\026char-set-intersection!\376\003\000\000\002\376\001\000\000\014char-set-map\376\003\000\000\002\376\001\000\000\014char-set-ref\376\003\000\000\002\376\001\000\000\015ch"
"ar-set-size\376\003\000\000\002\376\001\000\000\017char-set-unfold\376\003\000\000\002\376\001\000\000\020char-set-unfold!\376\003\000\000\002\376\001\000\000\016char-set"
"-union\376\003\000\000\002\376\001\000\000\017char-set-union!\376\003\000\000\002\376\001\000\000\014char-set-xor\376\003\000\000\002\376\001\000\000\015char-set-xor!\376\003\000\000"
"\002\376\001\000\000\016char-set:ascii\376\003\000\000\002\376\001\000\000\016char-set:blank\376\003\000\000\002\376\001\000\000\016char-set:digit\376\003\000\000\002\376\001\000\000\016ch"
"ar-set:empty\376\003\000\000\002\376\001\000\000\015char-set:full\376\003\000\000\002\376\001\000\000\020char-set:graphic\376\003\000\000\002\376\001\000\000\022char-set:"
"hex-digit\376\003\000\000\002\376\001\000\000\024char-set:iso-control\376\003\000\000\002\376\001\000\000\017char-set:letter\376\003\000\000\002\376\001\000\000\025char-s"
"et:letter+digit\376\003\000\000\002\376\001\000\000\023char-set:lower-case\376\003\000\000\002\376\001\000\000\021char-set:printing\376\003\000\000\002\376\001\000\000"
"\024char-set:punctuation\376\003\000\000\002\376\001\000\000\012char-set:s\376\003\000\000\002\376\001\000\000\017char-set:symbol\376\003\000\000\002\376\001\000\000\023char"
"-set:title-case\376\003\000\000\002\376\001\000\000\023char-set:upper-case\376\003\000\000\002\376\001\000\000\023char-set:whitespace\376\003\000\000\002\376\001"
"\000\000\012char-set<=\376\003\000\000\002\376\001\000\000\011char-set=\376\003\000\000\002\376\001\000\000\011char-set\077\376\003\000\000\002\376\001\000\000\020end-of-char-set\077\376\003\000"
"\000\002\376\001\000\000\016list->char-set\376\003\000\000\002\376\001\000\000\017list->char-set!\376\003\000\000\002\376\001\000\000\015make-char-set\376\003\000\000\002\376\001\000\000\020s"
"tring->char-set\376\003\000\000\002\376\001\000\000\021string->char-set!\376\003\000\000\002\376\001\000\000\023ucs-range->char-set\376\003\000\000\002\376\001\000\000"
"\024ucs-range->char-set!\376\377\016");
C_register_lf2(lf,3,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k6 */
static void C_ccall f_8(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k9 in k6 */
static void C_ccall f_11(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.import.scm:27: ##sys#register-primitive-module */
((C_proc4)C_fast_retrieve_symbol_proc(lf[0]))(4,*((C_word*)lf[0]+1),t2,lf[1],lf[2]);}

/* k12 in k9 in k6 */
static void C_ccall f_14(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[5] = {
{"toplevel:srfi_2d14_2eimport_2escm",(void*)C_toplevel},
{"f_8:srfi_2d14_2eimport_2escm",(void*)f_8},
{"f_11:srfi_2d14_2eimport_2escm",(void*)f_11},
{"f_14:srfi_2d14_2eimport_2escm",(void*)f_14},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}
/* end of file */
