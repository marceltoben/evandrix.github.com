/* Generated from srfi-1.import.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: srfi-1.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -feature chicken-compile-shared -dynamic -no-trace -output-file srfi-1.import.c
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
if(!C_demand_2(1372)){
C_save(t1);
C_rereclaim2(1372*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,3);
lf[0]=C_h_intern(&lf[0],29,"\003sysregister-primitive-module");
lf[1]=C_h_intern(&lf[1],6,"srfi-1");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012alist-cons\376\003\000\000\002\376\001\000\000\012alist-copy\376\003\000\000\002\376\001\000\000\014alist-delete\376\003\000\000\002\376\001\000\000\015alist-de"
"lete!\376\003\000\000\002\376\001\000\000\003any\376\003\000\000\002\376\001\000\000\007append!\376\003\000\000\002\376\001\000\000\012append-map\376\003\000\000\002\376\001\000\000\013append-map!\376\003\000\000"
"\002\376\001\000\000\016append-reverse\376\003\000\000\002\376\001\000\000\017append-reverse!\376\003\000\000\002\376\001\000\000\005assoc\376\003\000\000\002\376\001\000\000\005break\376\003\000\000\002"
"\376\001\000\000\006break!\376\003\000\000\002\376\001\000\000\007car+cdr\376\003\000\000\002\376\001\000\000\015circular-list\376\003\000\000\002\376\001\000\000\016circular-list\077\376\003\000\000\002"
"\376\001\000\000\013concatenate\376\003\000\000\002\376\001\000\000\014concatenate!\376\003\000\000\002\376\001\000\000\005cons*\376\003\000\000\002\376\001\000\000\005count\376\003\000\000\002\376\001\000\000\006de"
"lete\376\003\000\000\002\376\001\000\000\007delete!\376\003\000\000\002\376\001\000\000\021delete-duplicates\376\003\000\000\002\376\001\000\000\022delete-duplicates!\376\003\000\000"
"\002\376\001\000\000\014dotted-list\077\376\003\000\000\002\376\001\000\000\004drop\376\003\000\000\002\376\001\000\000\012drop-right\376\003\000\000\002\376\001\000\000\013drop-right!\376\003\000\000\002\376\001"
"\000\000\012drop-while\376\003\000\000\002\376\001\000\000\006eighth\376\003\000\000\002\376\001\000\000\005every\376\003\000\000\002\376\001\000\000\005fifth\376\003\000\000\002\376\001\000\000\006filter\376\003\000\000\002"
"\376\001\000\000\007filter!\376\003\000\000\002\376\001\000\000\012filter-map\376\003\000\000\002\376\001\000\000\004find\376\003\000\000\002\376\001\000\000\011find-tail\376\003\000\000\002\376\001\000\000\005first"
"\376\003\000\000\002\376\001\000\000\004fold\376\003\000\000\002\376\001\000\000\012fold-right\376\003\000\000\002\376\001\000\000\006fourth\376\003\000\000\002\376\001\000\000\004iota\376\003\000\000\002\376\001\000\000\004last\376\003"
"\000\000\002\376\001\000\000\011last-pair\376\003\000\000\002\376\001\000\000\007length+\376\003\000\000\002\376\001\000\000\011list-copy\376\003\000\000\002\376\001\000\000\012list-index\376\003\000\000\002\376\001"
"\000\000\015list-tabulate\376\003\000\000\002\376\001\000\000\005list=\376\003\000\000\002\376\001\000\000\013lset-adjoin\376\003\000\000\002\376\001\000\000\026lset-diff+intersec"
"tion\376\003\000\000\002\376\001\000\000\027lset-diff+intersection!\376\003\000\000\002\376\001\000\000\017lset-difference\376\003\000\000\002\376\001\000\000\020lset-dif"
"ference!\376\003\000\000\002\376\001\000\000\021lset-intersection\376\003\000\000\002\376\001\000\000\022lset-intersection!\376\003\000\000\002\376\001\000\000\012lset-un"
"ion\376\003\000\000\002\376\001\000\000\013lset-union!\376\003\000\000\002\376\001\000\000\010lset-xor\376\003\000\000\002\376\001\000\000\011lset-xor!\376\003\000\000\002\376\001\000\000\006lset<=\376\003\000"
"\000\002\376\001\000\000\005lset=\376\003\000\000\002\376\001\000\000\011make-list\376\003\000\000\002\376\001\000\000\003map\376\003\000\000\002\376\001\000\000\004map!\376\003\000\000\002\376\001\000\000\014map-in-order"
"\376\003\000\000\002\376\001\000\000\006member\376\003\000\000\002\376\001\000\000\005ninth\376\003\000\000\002\376\001\000\000\011not-pair\077\376\003\000\000\002\376\001\000\000\012null-list\077\376\003\000\000\002\376\001\000\000\011"
"pair-fold\376\003\000\000\002\376\001\000\000\017pair-fold-right\376\003\000\000\002\376\001\000\000\015pair-for-each\376\003\000\000\002\376\001\000\000\011partition\376\003\000\000"
"\002\376\001\000\000\012partition!\376\003\000\000\002\376\001\000\000\014proper-list\077\376\003\000\000\002\376\001\000\000\006reduce\376\003\000\000\002\376\001\000\000\014reduce-right\376\003\000\000"
"\002\376\001\000\000\006remove\376\003\000\000\002\376\001\000\000\007remove!\376\003\000\000\002\376\001\000\000\010reverse!\376\003\000\000\002\376\001\000\000\006second\376\003\000\000\002\376\001\000\000\007seventh"
"\376\003\000\000\002\376\001\000\000\005sixth\376\003\000\000\002\376\001\000\000\004span\376\003\000\000\002\376\001\000\000\005span!\376\003\000\000\002\376\001\000\000\010split-at\376\003\000\000\002\376\001\000\000\011split-at"
"!\376\003\000\000\002\376\001\000\000\004take\376\003\000\000\002\376\001\000\000\005take!\376\003\000\000\002\376\001\000\000\012take-right\376\003\000\000\002\376\001\000\000\012take-while\376\003\000\000\002\376\001\000\000\013"
"take-while!\376\003\000\000\002\376\001\000\000\005tenth\376\003\000\000\002\376\001\000\000\005third\376\003\000\000\002\376\001\000\000\006unfold\376\003\000\000\002\376\001\000\000\014unfold-right\376"
"\003\000\000\002\376\001\000\000\006unzip1\376\003\000\000\002\376\001\000\000\006unzip2\376\003\000\000\002\376\001\000\000\006unzip3\376\003\000\000\002\376\001\000\000\006unzip4\376\003\000\000\002\376\001\000\000\006unzip5\376"
"\003\000\000\002\376\001\000\000\005xcons\376\003\000\000\002\376\001\000\000\003zip\376\377\016");
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
/* srfi-1.import.scm:27: ##sys#register-primitive-module */
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
{"toplevel:srfi_2d1_2eimport_2escm",(void*)C_toplevel},
{"f_8:srfi_2d1_2eimport_2escm",(void*)f_8},
{"f_11:srfi_2d1_2eimport_2escm",(void*)f_11},
{"f_14:srfi_2d1_2eimport_2escm",(void*)f_14},
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
