/* Generated from setup-download.import.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: setup-download.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -feature chicken-compile-shared -dynamic -no-trace -output-file setup-download.import.c
   used units: library eval
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[5];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9)
static void C_ccall f_9(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12)
static void C_ccall f_12(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15)
static void C_ccall f_15(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_18)
static void C_ccall f_18(C_word c,C_word t0,C_word t1) C_noret;

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
if(!C_demand_2(420)){
C_save(t1);
C_rereclaim2(420*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,5);
lf[0]=C_h_intern(&lf[0],28,"\003sysregister-compiled-module");
lf[1]=C_h_intern(&lf[1],14,"setup-download");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022retrieve-extension\376\001\000\000!setup-download#retrieve-extension\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\020locate-egg/local\376\001\000\000\037setup-download#locate-egg/local\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016locate-"
"egg/svn\376\001\000\000\035setup-download#locate-egg/svn\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017locate-egg/http\376\001\000\000\036setu"
"p-download#locate-egg/http\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026gather-egg-information\376\001\000\000%setup-downlo"
"ad#gather-egg-information\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017list-extensions\376\001\000\000\036setup-download#list-"
"extensions\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027list-extension-versions\376\001\000\000&setup-download#list-extensi"
"on-versions\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023temporary-directory\376\001\000\000\042setup-download#temporary-direc"
"tory\376\377\016");
lf[3]=C_h_intern(&lf[3],4,"eval");
lf[4]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006import\376\003\000\000\002\376\001\000\000\006scheme\376\003\000\000\002\376\001\000\000\007chicken\376\003\000\000\002\376\001\000\000\007foreign\376\003\000\000\002\376\001\000\000\006extr"
"as\376\003\000\000\002\376\001\000\000\007irregex\376\003\000\000\002\376\001\000\000\005posix\376\003\000\000\002\376\001\000\000\005utils\376\003\000\000\002\376\001\000\000\006srfi-1\376\003\000\000\002\376\001\000\000\017data-"
"structures\376\003\000\000\002\376\001\000\000\003tcp\376\003\000\000\002\376\001\000\000\007srfi-13\376\003\000\000\002\376\001\000\000\005files\376\003\000\000\002\376\001\000\000\011setup-api\376\377\016");
C_register_lf2(lf,5,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k7 */
static void C_ccall f_9(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k10 in k7 */
static void C_ccall f_12(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* setup-download.import.scm:3: eval */
((C_proc3)C_fast_retrieve_symbol_proc(lf[3]))(3,*((C_word*)lf[3]+1),t2,lf[4]);}

/* k13 in k10 in k7 */
static void C_ccall f_15(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_18,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* setup-download.import.scm:17: ##sys#register-compiled-module */
((C_proc7)C_fast_retrieve_symbol_proc(lf[0]))(7,*((C_word*)lf[0]+1),t2,lf[1],C_SCHEME_END_OF_LIST,lf[2],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k16 in k13 in k10 in k7 */
static void C_ccall f_18(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[6] = {
{"toplevel:setup_2ddownload_2eimport_2escm",(void*)C_toplevel},
{"f_9:setup_2ddownload_2eimport_2escm",(void*)f_9},
{"f_12:setup_2ddownload_2eimport_2escm",(void*)f_12},
{"f_15:setup_2ddownload_2eimport_2escm",(void*)f_15},
{"f_18:setup_2ddownload_2eimport_2escm",(void*)f_18},
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
