/* Generated from srfi-13.import.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: srfi-13.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -feature chicken-compile-shared -dynamic -no-trace -output-file srfi-13.import.c
   used units: library eval
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[10];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,17),40,97,52,56,32,102,111,114,109,51,32,114,52,32,99,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_29)
static void C_ccall f_29(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_32)
static void C_ccall f_32(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_49)
static void C_ccall f_49(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_53)
static void C_ccall f_53(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_71)
static void C_ccall f_71(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_74)
static void C_ccall f_74(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_77)
static void C_ccall f_77(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_47)
static void C_ccall f_47(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_35)
static void C_ccall f_35(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(tr5)
static void C_fcall tr5(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5(C_proc5 k){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
(k)(5,t0,t1,t2,t3,t4);}

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
if(!C_demand_2(1221)){
C_save(t1);
C_rereclaim2(1221*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,10);
lf[0]=C_h_intern(&lf[0],20,"let-string-start+end");
lf[1]=C_h_intern(&lf[1],29,"\003sysregister-primitive-module");
lf[2]=C_h_intern(&lf[2],7,"srfi-13");
lf[3]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\024check-substring-spec\376\003\000\000\002\376\001\000\000\010kmp-step\376\003\000\000\002\376\001\000\000\027make-kmp-restart-vecto"
"r\376\003\000\000\002\376\001\000\000\014string->list\376\003\000\000\002\376\001\000\000\012string-any\376\003\000\000\002\376\001\000\000\024string-append/shared\376\003\000\000\002\376\001"
"\000\000\012string-ci<\376\003\000\000\002\376\001\000\000\013string-ci<=\376\003\000\000\002\376\001\000\000\013string-ci<>\376\003\000\000\002\376\001\000\000\012string-ci=\376\003\000\000\002"
"\376\001\000\000\012string-ci>\376\003\000\000\002\376\001\000\000\013string-ci>=\376\003\000\000\002\376\001\000\000\016string-compare\376\003\000\000\002\376\001\000\000\021string-com"
"pare-ci\376\003\000\000\002\376\001\000\000\022string-concatenate\376\003\000\000\002\376\001\000\000\032string-concatenate-reverse\376\003\000\000\002\376\001\000\000"
"!string-concatenate-reverse/shared\376\003\000\000\002\376\001\000\000\031string-concatenate/shared\376\003\000\000\002\376\001\000\000\017s"
"tring-contains\376\003\000\000\002\376\001\000\000\022string-contains-ci\376\003\000\000\002\376\001\000\000\013string-copy\376\003\000\000\002\376\001\000\000\014string-"
"copy!\376\003\000\000\002\376\001\000\000\014string-count\376\003\000\000\002\376\001\000\000\015string-delete\376\003\000\000\002\376\001\000\000\017string-downcase\376\003\000\000\002"
"\376\001\000\000\020string-downcase!\376\003\000\000\002\376\001\000\000\013string-drop\376\003\000\000\002\376\001\000\000\021string-drop-right\376\003\000\000\002\376\001\000\000\014s"
"tring-every\376\003\000\000\002\376\001\000\000\014string-fill!\376\003\000\000\002\376\001\000\000\015string-filter\376\003\000\000\002\376\001\000\000\013string-fold\376\003\000"
"\000\002\376\001\000\000\021string-fold-right\376\003\000\000\002\376\001\000\000\017string-for-each\376\003\000\000\002\376\001\000\000\025string-for-each-index"
"\376\003\000\000\002\376\001\000\000\014string-index\376\003\000\000\002\376\001\000\000\022string-index-right\376\003\000\000\002\376\001\000\000\013string-join\376\003\000\000\002\376\001\000\000"
"\031string-kmp-partial-search\376\003\000\000\002\376\001\000\000\012string-map\376\003\000\000\002\376\001\000\000\013string-map!\376\003\000\000\002\376\001\000\000\014str"
"ing-null\077\376\003\000\000\002\376\001\000\000\012string-pad\376\003\000\000\002\376\001\000\000\020string-pad-right\376\003\000\000\002\376\001\000\000\034string-parse-fi"
"nal-start+end\376\003\000\000\002\376\001\000\000\026string-parse-start+end\376\003\000\000\002\376\001\000\000\021string-prefix-ci\077\376\003\000\000\002\376\001\000"
"\000\024string-prefix-length\376\003\000\000\002\376\001\000\000\027string-prefix-length-ci\376\003\000\000\002\376\001\000\000\016string-prefix\077\376"
"\003\000\000\002\376\001\000\000\016string-replace\376\003\000\000\002\376\001\000\000\016string-reverse\376\003\000\000\002\376\001\000\000\017string-reverse!\376\003\000\000\002\376\001\000"
"\000\013string-skip\376\003\000\000\002\376\001\000\000\021string-skip-right\376\003\000\000\002\376\001\000\000\021string-suffix-ci\077\376\003\000\000\002\376\001\000\000\024str"
"ing-suffix-length\376\003\000\000\002\376\001\000\000\027string-suffix-length-ci\376\003\000\000\002\376\001\000\000\016string-suffix\077\376\003\000\000\002\376"
"\001\000\000\017string-tabulate\376\003\000\000\002\376\001\000\000\013string-take\376\003\000\000\002\376\001\000\000\021string-take-right\376\003\000\000\002\376\001\000\000\020str"
"ing-titlecase\376\003\000\000\002\376\001\000\000\021string-titlecase!\376\003\000\000\002\376\001\000\000\017string-tokenize\376\003\000\000\002\376\001\000\000\013strin"
"g-trim\376\003\000\000\002\376\001\000\000\020string-trim-both\376\003\000\000\002\376\001\000\000\021string-trim-right\376\003\000\000\002\376\001\000\000\015string-unfo"
"ld\376\003\000\000\002\376\001\000\000\023string-unfold-right\376\003\000\000\002\376\001\000\000\015string-upcase\376\003\000\000\002\376\001\000\000\016string-upcase!\376\003"
"\000\000\002\376\001\000\000\015string-xcopy!\376\003\000\000\002\376\001\000\000\007string<\376\003\000\000\002\376\001\000\000\010string<=\376\003\000\000\002\376\001\000\000\010string<>\376\003\000\000\002\376"
"\001\000\000\007string=\376\003\000\000\002\376\001\000\000\007string>\376\003\000\000\002\376\001\000\000\010string>=\376\003\000\000\002\376\001\000\000\022substring-spec-ok\077\376\003\000\000\002\376"
"\001\000\000\020substring/shared\376\003\000\000\002\376\001\000\000\012xsubstring\376\377\016");
lf[4]=C_h_intern(&lf[4],28,"string-parse-final-start+end");
lf[5]=C_h_intern(&lf[5],22,"string-parse-start+end");
lf[6]=C_h_intern(&lf[6],7,"receive");
lf[7]=C_h_intern(&lf[7],16,"\003syscheck-syntax");
lf[8]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[9]=C_h_intern(&lf[9],18,"\003syser-transformer");
C_register_lf2(lf,10,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_29,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k27 */
static void C_ccall f_29(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_29,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_32,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k30 in k27 */
static void C_ccall f_32(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_32,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_35,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_47,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_49,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
/* srfi-13.import.scm:113: ##sys#er-transformer */
((C_proc3)C_fast_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),t3,t4);}

/* a48 in k30 in k27 */
static void C_ccall f_49(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_49,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_53,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-13.import.scm:115: ##sys#check-syntax */
((C_proc5)C_fast_retrieve_symbol_proc(lf[7]))(5,*((C_word*)lf[7]+1),t5,lf[0],t2,lf[8]);}

/* k51 in a48 in k30 in k27 */
static void C_ccall f_53(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_53,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_caddr(((C_word*)t0)[4]);
t4=C_i_cadddr(((C_word*)t0)[4]);
t5=C_i_cddddr(((C_word*)t0)[4]);
t6=C_i_car(t5);
t7=C_i_cddddr(((C_word*)t0)[4]);
t8=C_i_cdr(t7);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_71,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t8,a[5]=t6,a[6]=t4,a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* srfi-13.import.scm:121: r */
t10=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t10))(3,t10,t9,lf[6]);}

/* k69 in k51 in a48 in k30 in k27 */
static void C_ccall f_71(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_71,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_74,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* srfi-13.import.scm:122: r */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[5]);}

/* k72 in k69 in k51 in a48 in k30 in k27 */
static void C_ccall f_74(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_74,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_77,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* srfi-13.import.scm:123: r */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[4]);}

/* k75 in k72 in k69 in k51 in a48 in k30 in k27 */
static void C_ccall f_77(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_77,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[9]);
if(C_truep(C_i_pairp(t2))){
t3=C_i_caddr(((C_word*)t0)[9]);
t4=C_i_car(((C_word*)t0)[9]);
t5=C_i_cadr(((C_word*)t0)[9]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=C_a_i_list(&a,4,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[4]);
t9=C_a_i_cons(&a,2,t6,t8);
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_cons(&a,2,((C_word*)t0)[2],t9));}
else{
t3=C_a_i_list(&a,4,t1,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=C_a_i_cons(&a,2,((C_word*)t0)[9],t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}}

/* k45 in k30 in k27 */
static void C_ccall f_47(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_47,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[0],C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_list(&a,1,t2);
/* srfi-13.import.scm:27: ##sys#register-primitive-module */
((C_proc5)C_fast_retrieve_symbol_proc(lf[1]))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[2],lf[3],t3);}

/* k33 in k30 in k27 */
static void C_ccall f_35(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[11] = {
{"toplevel:srfi_2d13_2eimport_2escm",(void*)C_toplevel},
{"f_29:srfi_2d13_2eimport_2escm",(void*)f_29},
{"f_32:srfi_2d13_2eimport_2escm",(void*)f_32},
{"f_49:srfi_2d13_2eimport_2escm",(void*)f_49},
{"f_53:srfi_2d13_2eimport_2escm",(void*)f_53},
{"f_71:srfi_2d13_2eimport_2escm",(void*)f_71},
{"f_74:srfi_2d13_2eimport_2escm",(void*)f_74},
{"f_77:srfi_2d13_2eimport_2escm",(void*)f_77},
{"f_47:srfi_2d13_2eimport_2escm",(void*)f_47},
{"f_35:srfi_2d13_2eimport_2escm",(void*)f_35},
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
