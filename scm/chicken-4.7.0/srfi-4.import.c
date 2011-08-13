/* Generated from srfi-4.import.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: srfi-4.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -feature chicken-compile-shared -dynamic -no-trace -output-file srfi-4.import.c
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
if(!C_demand_2(1528)){
C_save(t1);
C_rereclaim2(1528*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,3);
lf[0]=C_h_intern(&lf[0],29,"\003sysregister-primitive-module");
lf[1]=C_h_intern(&lf[1],6,"srfi-4");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\017blob->f32vector\376\003\000\000\002\376\001\000\000\026blob->f32vector/shared\376\003\000\000\002\376\001\000\000\017blob->f64vect"
"or\376\003\000\000\002\376\001\000\000\026blob->f64vector/shared\376\003\000\000\002\376\001\000\000\017blob->s16vector\376\003\000\000\002\376\001\000\000\026blob->s16ve"
"ctor/shared\376\003\000\000\002\376\001\000\000\017blob->s32vector\376\003\000\000\002\376\001\000\000\026blob->s32vector/shared\376\003\000\000\002\376\001\000\000\016bl"
"ob->s8vector\376\003\000\000\002\376\001\000\000\025blob->s8vector/shared\376\003\000\000\002\376\001\000\000\017blob->u16vector\376\003\000\000\002\376\001\000\000\026bl"
"ob->u16vector/shared\376\003\000\000\002\376\001\000\000\017blob->u32vector\376\003\000\000\002\376\001\000\000\026blob->u32vector/shared\376\003\000"
"\000\002\376\001\000\000\016blob->u8vector\376\003\000\000\002\376\001\000\000\025blob->u8vector/shared\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376\001\000\000"
"\017f32vector->blob\376\003\000\000\002\376\001\000\000\026f32vector->blob/shared\376\003\000\000\002\376\001\000\000\026f32vector->byte-vector"
"\376\003\000\000\002\376\001\000\000\017f32vector->list\376\003\000\000\002\376\001\000\000\020f32vector-length\376\003\000\000\002\376\001\000\000\015f32vector-ref\376\003\000\000\002\376"
"\001\000\000\016f32vector-set!\376\003\000\000\002\376\001\000\000\012f32vector\077\376\003\000\000\002\376\001\000\000\011f64vector\376\003\000\000\002\376\001\000\000\017f64vector->bl"
"ob\376\003\000\000\002\376\001\000\000\026f64vector->blob/shared\376\003\000\000\002\376\001\000\000\026f64vector->byte-vector\376\003\000\000\002\376\001\000\000\017f64v"
"ector->list\376\003\000\000\002\376\001\000\000\020f64vector-length\376\003\000\000\002\376\001\000\000\015f64vector-ref\376\003\000\000\002\376\001\000\000\016f64vector-"
"set!\376\003\000\000\002\376\001\000\000\012f64vector\077\376\003\000\000\002\376\001\000\000\017list->f32vector\376\003\000\000\002\376\001\000\000\017list->f64vector\376\003\000\000\002\376"
"\001\000\000\017list->s16vector\376\003\000\000\002\376\001\000\000\017list->s32vector\376\003\000\000\002\376\001\000\000\016list->s8vector\376\003\000\000\002\376\001\000\000\017li"
"st->u16vector\376\003\000\000\002\376\001\000\000\017list->u32vector\376\003\000\000\002\376\001\000\000\016list->u8vector\376\003\000\000\002\376\001\000\000\016make-f32"
"vector\376\003\000\000\002\376\001\000\000\016make-f64vector\376\003\000\000\002\376\001\000\000\016make-s16vector\376\003\000\000\002\376\001\000\000\016make-s32vector\376\003"
"\000\000\002\376\001\000\000\015make-s8vector\376\003\000\000\002\376\001\000\000\016make-u16vector\376\003\000\000\002\376\001\000\000\016make-u32vector\376\003\000\000\002\376\001\000\000\015m"
"ake-u8vector\376\003\000\000\002\376\001\000\000\015read-u8vector\376\003\000\000\002\376\001\000\000\016read-u8vector!\376\003\000\000\002\376\001\000\000\025release-num"
"ber-vector\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376\001\000\000\017s16vector->blob\376\003\000\000\002\376\001\000\000\026s16vector->blob/"
"shared\376\003\000\000\002\376\001\000\000\026s16vector->byte-vector\376\003\000\000\002\376\001\000\000\017s16vector->list\376\003\000\000\002\376\001\000\000\020s16vect"
"or-length\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\003\000\000\002\376\001\000\000\016s16vector-set!\376\003\000\000\002\376\001\000\000\012s16vector\077\376\003\000\000"
"\002\376\001\000\000\011s32vector\376\003\000\000\002\376\001\000\000\017s32vector->blob\376\003\000\000\002\376\001\000\000\026s32vector->blob/shared\376\003\000\000\002\376\001\000"
"\000\026s32vector->byte-vector\376\003\000\000\002\376\001\000\000\017s32vector->list\376\003\000\000\002\376\001\000\000\020s32vector-length\376\003\000\000\002"
"\376\001\000\000\015s32vector-ref\376\003\000\000\002\376\001\000\000\016s32vector-set!\376\003\000\000\002\376\001\000\000\012s32vector\077\376\003\000\000\002\376\001\000\000\010s8vector"
"\376\003\000\000\002\376\001\000\000\016s8vector->blob\376\003\000\000\002\376\001\000\000\025s8vector->blob/shared\376\003\000\000\002\376\001\000\000\025s8vector->byte-"
"vector\376\003\000\000\002\376\001\000\000\016s8vector->list\376\003\000\000\002\376\001\000\000\017s8vector-length\376\003\000\000\002\376\001\000\000\014s8vector-ref\376\003\000"
"\000\002\376\001\000\000\015s8vector-set!\376\003\000\000\002\376\001\000\000\011s8vector\077\376\003\000\000\002\376\001\000\000\014subf32vector\376\003\000\000\002\376\001\000\000\014subf64vec"
"tor\376\003\000\000\002\376\001\000\000\014subs16vector\376\003\000\000\002\376\001\000\000\014subs32vector\376\003\000\000\002\376\001\000\000\013subs8vector\376\003\000\000\002\376\001\000\000\014su"
"bu16vector\376\003\000\000\002\376\001\000\000\014subu32vector\376\003\000\000\002\376\001\000\000\013subu8vector\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000\002\376\001\000"
"\000\017u16vector->blob\376\003\000\000\002\376\001\000\000\026u16vector->blob/shared\376\003\000\000\002\376\001\000\000\026u16vector->byte-vecto"
"r\376\003\000\000\002\376\001\000\000\017u16vector->list\376\003\000\000\002\376\001\000\000\020u16vector-length\376\003\000\000\002\376\001\000\000\015u16vector-ref\376\003\000\000\002"
"\376\001\000\000\016u16vector-set!\376\003\000\000\002\376\001\000\000\012u16vector\077\376\003\000\000\002\376\001\000\000\011u32vector\376\003\000\000\002\376\001\000\000\017u32vector->b"
"lob\376\003\000\000\002\376\001\000\000\026u32vector->blob/shared\376\003\000\000\002\376\001\000\000\026u32vector->byte-vector\376\003\000\000\002\376\001\000\000\017u32"
"vector->list\376\003\000\000\002\376\001\000\000\020u32vector-length\376\003\000\000\002\376\001\000\000\015u32vector-ref\376\003\000\000\002\376\001\000\000\016u32vector"
"-set!\376\003\000\000\002\376\001\000\000\012u32vector\077\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376\001\000\000\016u8vector->blob\376\003\000\000\002\376\001\000\000\025u8v"
"ector->blob/shared\376\003\000\000\002\376\001\000\000\025u8vector->byte-vector\376\003\000\000\002\376\001\000\000\016u8vector->list\376\003\000\000\002\376\001"
"\000\000\017u8vector-length\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\003\000\000\002\376\001\000\000\015u8vector-set!\376\003\000\000\002\376\001\000\000\011u8vecto"
"r\077\376\003\000\000\002\376\001\000\000\016write-u8vector\376\377\016");
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
/* srfi-4.import.scm:27: ##sys#register-primitive-module */
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
{"toplevel:srfi_2d4_2eimport_2escm",(void*)C_toplevel},
{"f_8:srfi_2d4_2eimport_2escm",(void*)f_8},
{"f_11:srfi_2d4_2eimport_2escm",(void*)f_11},
{"f_14:srfi_2d4_2eimport_2escm",(void*)f_14},
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
