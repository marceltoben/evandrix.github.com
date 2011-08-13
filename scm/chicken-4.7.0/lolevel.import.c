/* Generated from lolevel.import.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: lolevel.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -feature chicken-compile-shared -dynamic -no-trace -output-file lolevel.import.c
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
if(!C_demand_2(930)){
C_save(t1);
C_rereclaim2(930*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,3);
lf[0]=C_h_intern(&lf[0],29,"\003sysregister-primitive-module");
lf[1]=C_h_intern(&lf[1],7,"lolevel");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\020address->pointer\376\003\000\000\002\376\001\000\000\015align-to-word\376\003\000\000\002\376\001\000\000\010allocate\376\003\000\000\002\376\001\000\000\011blo"
"ck-ref\376\003\000\000\002\376\001\000\000\012block-set!\376\003\000\000\002\376\001\000\000\020extend-procedure\376\003\000\000\002\376\001\000\000\023extended-procedure"
"\077\376\003\000\000\002\376\001\000\000\004free\376\003\000\000\002\376\001\000\000\020locative->object\376\003\000\000\002\376\001\000\000\014locative-ref\376\003\000\000\002\376\001\000\000\015locativ"
"e-set!\376\003\000\000\002\376\001\000\000\011locative\077\376\003\000\000\002\376\001\000\000\015make-locative\376\003\000\000\002\376\001\000\000\024make-record-instance\376\003"
"\000\000\002\376\001\000\000\023make-pointer-vector\376\003\000\000\002\376\001\000\000\022make-weak-locative\376\003\000\000\002\376\001\000\000\014move-memory!\376\003\000"
"\000\002\376\001\000\000\020mutate-procedure\376\003\000\000\002\376\001\000\000\014null-pointer\376\003\000\000\002\376\001\000\000\015null-pointer\077\376\003\000\000\002\376\001\000\000\017nu"
"mber-of-bytes\376\003\000\000\002\376\001\000\000\017number-of-slots\376\003\000\000\002\376\001\000\000\017object->pointer\376\003\000\000\002\376\001\000\000\016object-"
"become!\376\003\000\000\002\376\001\000\000\013object-copy\376\003\000\000\002\376\001\000\000\014object-evict\376\003\000\000\002\376\001\000\000\030object-evict-to-loca"
"tion\376\003\000\000\002\376\001\000\000\017object-evicted\077\376\003\000\000\002\376\001\000\000\016object-release\376\003\000\000\002\376\001\000\000\013object-size\376\003\000\000\002\376"
"\001\000\000\016object-unevict\376\003\000\000\002\376\001\000\000\020pointer->address\376\003\000\000\002\376\001\000\000\015pointer-like\077\376\003\000\000\002\376\001\000\000\016poi"
"nter-offset\376\003\000\000\002\376\001\000\000\017pointer->object\376\003\000\000\002\376\001\000\000\017pointer-f32-ref\376\003\000\000\002\376\001\000\000\020pointer-f"
"32-set!\376\003\000\000\002\376\001\000\000\017pointer-f64-ref\376\003\000\000\002\376\001\000\000\020pointer-f64-set!\376\003\000\000\002\376\001\000\000\010pointer+\376\003\000\000"
"\002\376\001\000\000\017pointer-s16-ref\376\003\000\000\002\376\001\000\000\020pointer-s16-set!\376\003\000\000\002\376\001\000\000\017pointer-s32-ref\376\003\000\000\002\376\001\000"
"\000\020pointer-s32-set!\376\003\000\000\002\376\001\000\000\016pointer-s8-ref\376\003\000\000\002\376\001\000\000\017pointer-s8-set!\376\003\000\000\002\376\001\000\000\016poi"
"nter-vector\376\003\000\000\002\376\001\000\000\017pointer-vector\077\376\003\000\000\002\376\001\000\000\025pointer-vector-length\376\003\000\000\002\376\001\000\000\022poi"
"nter-vector-ref\376\003\000\000\002\376\001\000\000\023pointer-vector-set!\376\003\000\000\002\376\001\000\000\013pointer-tag\376\003\000\000\002\376\001\000\000\017point"
"er-u16-ref\376\003\000\000\002\376\001\000\000\020pointer-u16-set!\376\003\000\000\002\376\001\000\000\017pointer-u32-ref\376\003\000\000\002\376\001\000\000\020pointer-u"
"32-set!\376\003\000\000\002\376\001\000\000\016pointer-u8-ref\376\003\000\000\002\376\001\000\000\017pointer-u8-set!\376\003\000\000\002\376\001\000\000\011pointer=\077\376\003\000\000\002"
"\376\001\000\000\010pointer\077\376\003\000\000\002\376\001\000\000\016procedure-data\376\003\000\000\002\376\001\000\000\016record->vector\376\003\000\000\002\376\001\000\000\020record-in"
"stance\077\376\003\000\000\002\376\001\000\000\026record-instance-length\376\003\000\000\002\376\001\000\000\024record-instance-slot\376\003\000\000\002\376\001\000\000\031r"
"ecord-instance-slot-set!\376\003\000\000\002\376\001\000\000\024record-instance-type\376\003\000\000\002\376\001\000\000\023set-procedure-da"
"ta!\376\003\000\000\002\376\001\000\000\013tag-pointer\376\003\000\000\002\376\001\000\000\017tagged-pointer\077\376\377\016");
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
/* lolevel.import.scm:27: ##sys#register-primitive-module */
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
{"toplevel:lolevel_2eimport_2escm",(void*)C_toplevel},
{"f_8:lolevel_2eimport_2escm",(void*)f_8},
{"f_11:lolevel_2eimport_2escm",(void*)f_11},
{"f_14:lolevel_2eimport_2escm",(void*)f_14},
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
