/* Generated from srfi-69.import.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: srfi-69.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -feature chicken-compile-shared -dynamic -no-trace -output-file srfi-69.import.c
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
if(!C_demand_2(579)){
C_save(t1);
C_rereclaim2(579*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,3);
lf[0]=C_h_intern(&lf[0],29,"\003sysregister-primitive-module");
lf[1]=C_h_intern(&lf[1],7,"srfi-69");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\021alist->hash-table\376\003\000\000\002\376\001\000\000\010eq\077-hash\376\003\000\000\002\376\001\000\000\013equal\077-hash\376\003\000\000\002\376\001\000\000\011eqv\077"
"-hash\376\003\000\000\002\376\001\000\000\004hash\376\003\000\000\002\376\001\000\000\020hash-by-identity\376\003\000\000\002\376\001\000\000\021hash-table->alist\376\003\000\000\002\376\001\000"
"\000\021hash-table-clear!\376\003\000\000\002\376\001\000\000\017hash-table-copy\376\003\000\000\002\376\001\000\000\022hash-table-delete!\376\003\000\000\002\376\001\000"
"\000\037hash-table-equivalence-function\376\003\000\000\002\376\001\000\000\022hash-table-exists\077\376\003\000\000\002\376\001\000\000\017hash-tabl"
"e-fold\376\003\000\000\002\376\001\000\000\023hash-table-for-each\376\003\000\000\002\376\001\000\000\027hash-table-has-initial\077\376\003\000\000\002\376\001\000\000\030ha"
"sh-table-hash-function\376\003\000\000\002\376\001\000\000\022hash-table-initial\376\003\000\000\002\376\001\000\000\017hash-table-keys\376\003\000\000\002"
"\376\001\000\000\016hash-table-map\376\003\000\000\002\376\001\000\000\023hash-table-max-load\376\003\000\000\002\376\001\000\000\020hash-table-merge\376\003\000\000\002\376"
"\001\000\000\021hash-table-merge!\376\003\000\000\002\376\001\000\000\023hash-table-min-load\376\003\000\000\002\376\001\000\000\016hash-table-ref\376\003\000\000\002\376"
"\001\000\000\026hash-table-ref/default\376\003\000\000\002\376\001\000\000\022hash-table-remove!\376\003\000\000\002\376\001\000\000\017hash-table-set!\376"
"\003\000\000\002\376\001\000\000\017hash-table-size\376\003\000\000\002\376\001\000\000\022hash-table-update!\376\003\000\000\002\376\001\000\000\032hash-table-update!"
"/default\376\003\000\000\002\376\001\000\000\021hash-table-values\376\003\000\000\002\376\001\000\000\017hash-table-walk\376\003\000\000\002\376\001\000\000\024hash-table"
"-weak-keys\376\003\000\000\002\376\001\000\000\026hash-table-weak-values\376\003\000\000\002\376\001\000\000\013hash-table\077\376\003\000\000\002\376\001\000\000\014keyword"
"-hash\376\003\000\000\002\376\001\000\000\017make-hash-table\376\003\000\000\002\376\001\000\000\013number-hash\376\003\000\000\002\376\001\000\000\017object-uid-hash\376\003\000\000"
"\002\376\001\000\000\016string-hash-ci\376\003\000\000\002\376\001\000\000\016string-ci-hash\376\003\000\000\002\376\001\000\000\013string-hash\376\003\000\000\002\376\001\000\000\013symbo"
"l-hash\376\377\016");
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
/* srfi-69.import.scm:27: ##sys#register-primitive-module */
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
{"toplevel:srfi_2d69_2eimport_2escm",(void*)C_toplevel},
{"f_8:srfi_2d69_2eimport_2escm",(void*)f_8},
{"f_11:srfi_2d69_2eimport_2escm",(void*)f_11},
{"f_14:srfi_2d69_2eimport_2escm",(void*)f_14},
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
