/* Generated from profiler.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: profiler.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file profiler.c
   unit: profiler
*/

#include "chicken.h"

#include <unistd.h>

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[21];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,97,49,56,57,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,15),40,97,49,57,56,32,46,32,97,114,103,115,55,48,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,25),40,102,95,49,53,55,32,115,105,122,101,54,54,32,102,105,108,101,110,97,109,101,54,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,21),40,102,95,50,49,56,32,118,101,99,55,57,32,105,56,48,32,120,56,49,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,21),40,102,95,50,51,49,32,105,110,100,101,120,56,52,32,118,101,99,56,53,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,21),40,102,95,50,56,55,32,105,110,100,101,120,57,56,32,118,101,99,57,57,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,49,50,52,32,105,49,50,54,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,13),40,103,49,49,52,32,118,101,99,49,50,50,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,49,51,32,103,49,49,57,49,51,55,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,6),40,97,51,52,56,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,7),40,102,95,51,52,48,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_profiler_toplevel)
C_externexport void C_ccall C_profiler_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_340)
static void C_ccall f_340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_344)
static void C_ccall f_344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_349)
static void C_ccall f_349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_426)
static void C_fcall f_426(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_436)
static void C_ccall f_436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_351)
static void C_fcall f_351(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_360)
static void C_fcall f_360(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_370)
static void C_ccall f_370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_373)
static void C_ccall f_373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_376)
static void C_ccall f_376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_379)
static void C_ccall f_379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_382)
static void C_ccall f_382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_385)
static void C_ccall f_385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_388)
static void C_ccall f_388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_391)
static void C_ccall f_391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_287)
static void C_ccall f_287(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_231)
static void C_ccall f_231(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_253)
static void C_fcall f_253(C_word t0,C_word t1) C_noret;
C_noret_decl(f_218)
static void C_ccall f_218(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_157)
static void C_ccall f_157(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_216)
static void C_ccall f_216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_176)
static void C_ccall f_176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_179)
static void C_ccall f_179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_182)
static void C_ccall f_182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_199)
static void C_ccall f_199(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_199)
static void C_ccall f_199r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_203)
static void C_ccall f_203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_185)
static void C_ccall f_185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_190)
static void C_ccall f_190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_194)
static void C_ccall f_194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_161)
static void C_ccall f_161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_164)
static void C_ccall f_164(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_426)
static void C_fcall trf_426(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_426(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_426(t0,t1,t2);}

C_noret_decl(trf_351)
static void C_fcall trf_351(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_351(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_351(t0,t1,t2);}

C_noret_decl(trf_360)
static void C_fcall trf_360(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_360(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_360(t0,t1,t2);}

C_noret_decl(trf_253)
static void C_fcall trf_253(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_253(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_253(t0,t1);}

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

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

C_noret_decl(tr2r)
static void C_fcall tr2r(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2r(C_proc2 k){
int n;
C_word *a,t2;
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
n=C_rest_count(0);
a=C_alloc(n*3);
t2=C_restore_rest(a,n);
(k)(t0,t1,t2);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_profiler_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_profiler_toplevel(C_word c,C_word t0,C_word t1){
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
C_word t14;
C_word t15;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("profiler_toplevel"));
C_check_nursery_minimum(20);
if(!C_demand(20)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(170)){
C_save(t1);
C_rereclaim2(170*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(20);
C_initialize_lf(lf,21);
lf[2]=C_h_intern(&lf[2],23,"\003sysprofile-append-mode");
lf[3]=C_h_intern(&lf[3],11,"make-vector");
lf[4]=C_h_intern(&lf[4],25,"\003sysregister-profile-info");
lf[5]=C_h_intern(&lf[5],18,"\003sysfinish-profile");
lf[6]=C_h_intern(&lf[6],25,"\003sysimplicit-exit-handler");
lf[7]=C_h_intern(&lf[7],16,"\003sysexit-handler");
lf[8]=C_h_intern(&lf[8],13,"string-append");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\010PROFILE.");
lf[10]=C_h_intern(&lf[10],28,"\003sysset-profile-info-vector!");
lf[11]=C_h_intern(&lf[11],17,"\003sysprofile-entry");
lf[12]=C_h_intern(&lf[12],16,"\003sysprofile-exit");
lf[13]=C_h_intern(&lf[13],19,"with-output-to-file");
lf[14]=C_h_intern(&lf[14],10,"write-char");
lf[15]=C_h_intern(&lf[15],5,"write");
lf[16]=C_h_intern(&lf[16],8,"for-each");
lf[17]=C_h_intern(&lf[17],7,"\000append");
lf[18]=C_h_intern(&lf[18],9,"\003sysprint");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\033[debug] writing profile...\012");
lf[20]=C_h_intern(&lf[20],19,"\003sysstandard-output");
C_register_lf2(lf,21,create_ptable());
t2=lf[0] /* profile-vector-list */ =C_SCHEME_END_OF_LIST;;
t3=lf[1] /* profile-name */ =C_SCHEME_FALSE;;
t4=C_set_block_item(lf[2] /* profile-append-mode */,0,C_SCHEME_FALSE);
t5=*((C_word*)lf[3]+1);
t6=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#register-profile-info ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_157,a[2]=t5,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t7=C_mutate((C_word*)lf[10]+1 /* (set! ##sys#set-profile-info-vector! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_218,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t8=C_fudge(C_fix(21));
t9=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#profile-entry ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_231,a[2]=t8,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[12]+1 /* (set! ##sys#profile-exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_287,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[13]+1);
t12=*((C_word*)lf[14]+1);
t13=*((C_word*)lf[15]+1);
t14=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#finish-profile ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_340,a[2]=t11,a[3]=t13,a[4]=t12,a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp));
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_SCHEME_UNDEFINED);}

/* f_340 */
static void C_ccall f_340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_340,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_344,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fudge(C_fix(13)))){
/* profiler.scm:127: ##sys#print */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[19],C_SCHEME_FALSE,*((C_word*)lf[20]+1));}
else{
t3=t2;
f_344(2,t3,C_SCHEME_UNDEFINED);}}

/* k342 */
static void C_ccall f_344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_349,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[2]+1))){
t3=((C_word*)t0)[3];
((C_proc5)C_fast_retrieve_proc(t3))(5,t3,((C_word*)t0)[2],lf[1],t2,lf[17]);}
else{
t3=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],lf[1],t2);}}

/* a348 in k342 */
static void C_ccall f_349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_349,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp);
t3=lf[0];
t4=C_i_check_list_2(t3,lf[16]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_426,a[2]=t2,a[3]=t6,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_426(t8,t1,t3);}

/* for-each-loop113 in a348 in k342 */
static void C_fcall f_426(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_426,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_436,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g114120 */
t5=((C_word*)t0)[2];
f_351(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k434 in for-each-loop113 in a348 in k342 */
static void C_ccall f_436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_426(t3,((C_word*)t0)[2],t2);}

/* g114 in a348 in k342 */
static void C_fcall f_351(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_351,NULL,3,t0,t1,t2);}
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_360,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t3,a[7]=((C_word)li6),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_360(t7,t1,C_fix(0));}

/* doloop124 in g114 in a348 in k342 */
static void C_fcall f_360(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_360,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_370,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* profiler.scm:136: write-char */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,C_make_character(40));}}

/* k368 in doloop124 in g114 in a348 in k342 */
static void C_ccall f_370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_373,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_slot(((C_word*)t0)[3],((C_word*)t0)[7]);
/* profiler.scm:137: write */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t2,t3);}

/* k371 in k368 in doloop124 in g114 in a348 in k342 */
static void C_ccall f_373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* profiler.scm:138: write-char */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,C_make_character(32));}

/* k374 in k371 in k368 in doloop124 in g114 in a348 in k342 */
static void C_ccall f_376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_379,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
t4=C_slot(((C_word*)t0)[3],t3);
/* profiler.scm:139: write */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t2,t4);}

/* k377 in k374 in k371 in k368 in doloop124 in g114 in a348 in k342 */
static void C_ccall f_379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* profiler.scm:140: write-char */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,C_make_character(32));}

/* k380 in k377 in k374 in k371 in k368 in doloop124 in g114 in a348 in k342 */
static void C_ccall f_382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_382,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_385,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_plus(((C_word*)t0)[7],C_fix(3));
t4=C_slot(((C_word*)t0)[3],t3);
/* profiler.scm:141: write */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t2,t4);}

/* k383 in k380 in k377 in k374 in k371 in k368 in doloop124 in g114 in a348 in k342 */
static void C_ccall f_385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_385,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_388,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* profiler.scm:142: write-char */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,C_make_character(41));}

/* k386 in k383 in k380 in k377 in k374 in k371 in k368 in doloop124 in g114 in a348 in k342 */
static void C_ccall f_388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_391,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* profiler.scm:143: write-char */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,C_make_character(10));}

/* k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in doloop124 in g114 in a348 in k342 */
static void C_ccall f_391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(5));
t3=((C_word*)((C_word*)t0)[3])[1];
f_360(t3,((C_word*)t0)[2],t2);}

/* f_287 */
static void C_ccall f_287(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_287,4,t0,t1,t2,t3);}
t4=C_fixnum_times(t2,C_fix(5));
t5=C_fixnum_plus(t4,C_fix(2));
t6=C_fixnum_plus(t4,C_fix(3));
t7=C_fixnum_plus(t4,C_fix(4));
t8=C_slot(t3,t7);
t9=C_fixnum_decrease(t8);
t10=C_i_set_i_slot(t3,t7,t9);
t11=C_eqp(t9,C_fix(0));
if(C_truep(t11)){
t12=C_slot(t3,t6);
t13=C_slot(t3,t5);
t14=C_fixnum_difference(C_i_current_cpu_milliseconds_as_fixnum(C_SCHEME_FALSE),t13);
t15=C_fixnum_plus(t12,t14);
t16=C_i_set_i_slot(t3,t6,t15);
t17=t1;
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,C_i_set_i_slot(t3,t5,C_fix(0)));}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_i_set_i_slot(t3,t5,C_fix(0)));}}

/* f_231 */
static void C_ccall f_231(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_231,4,t0,t1,t2,t3);}
t4=C_fixnum_times(t2,C_fix(5));
t5=C_fixnum_increase(t4);
t6=C_slot(t3,t5);
t7=C_fixnum_plus(t4,C_fix(2));
t8=C_fixnum_plus(t4,C_fix(4));
t9=C_slot(t3,t8);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_253,a[2]=t8,a[3]=t1,a[4]=t7,a[5]=t3,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t11=C_eqp(((C_word*)t0)[2],t6);
if(C_truep(t11)){
t12=t10;
f_253(t12,C_i_set_i_slot(t3,t5,C_SCHEME_FALSE));}
else{
t12=C_fixnum_increase(t6);
t13=t10;
f_253(t13,C_i_set_i_slot(t3,t5,t12));}}
else{
t11=t10;
f_253(t11,C_i_set_i_slot(t3,t5,C_SCHEME_FALSE));}}

/* k251 */
static void C_fcall f_253(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_eqp(((C_word*)t0)[6],C_fix(0));
t3=(C_truep(t2)?C_i_set_i_slot(((C_word*)t0)[5],((C_word*)t0)[4],C_i_current_cpu_milliseconds_as_fixnum(C_SCHEME_FALSE)):C_SCHEME_UNDEFINED);
t4=C_fixnum_increase(((C_word*)t0)[6]);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_set_i_slot(((C_word*)t0)[5],((C_word*)t0)[2],t4));}

/* f_218 */
static void C_ccall f_218(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_218,5,t0,t1,t2,t3,t4);}
t5=C_fixnum_times(t3,C_fix(5));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_setslot(t2,t5,t4));}

/* f_157 */
static void C_ccall f_157(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_157,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_161,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_176,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t3))){
t6=t5;
f_176(2,t6,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_216,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* profiler.scm:61: number->string */
C_number_to_string(3,0,t6,C_fix((C_word)getpid()));}}
else{
t5=t4;
f_161(2,t5,C_SCHEME_UNDEFINED);}}

/* k214 */
static void C_ccall f_216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* profiler.scm:61: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),((C_word*)t0)[2],lf[9],t1);}

/* k174 */
static void C_ccall f_176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_176,2,t0,t1);}
t2=C_mutate(&lf[1] /* (set! ##sys#profile-name ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_179,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* profiler.scm:62: ##sys#exit-handler */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t3);}

/* k177 in k174 */
static void C_ccall f_179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_179,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_182,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:63: ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(2,*((C_word*)lf[6]+1),t2);}

/* k180 in k177 in k174 */
static void C_ccall f_182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_182,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_185,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_199,a[2]=((C_word*)t0)[2],a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:64: ##sys#exit-handler */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(3,*((C_word*)lf[7]+1),t2,t3);}

/* a198 in k180 in k177 in k174 */
static void C_ccall f_199(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_199r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_199r(t0,t1,t2);}}

static void C_ccall f_199r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_203,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* profiler.scm:66: ##sys#finish-profile */
t4=*((C_word*)lf[5]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k201 in a198 in k180 in k177 in k174 */
static void C_ccall f_203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k183 in k180 in k177 in k174 */
static void C_ccall f_185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_190,a[2]=((C_word*)t0)[3],a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:68: ##sys#implicit-exit-handler */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(3,*((C_word*)lf[6]+1),((C_word*)t0)[2],t2);}

/* a189 in k183 in k180 in k177 in k174 */
static void C_ccall f_190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_194,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:70: ##sys#finish-profile */
t3=*((C_word*)lf[5]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k192 in a189 in k183 in k180 in k177 in k174 */
static void C_ccall f_194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* profiler.scm:71: oldieh */
t2=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k159 */
static void C_ccall f_161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_161,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_164,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=C_fixnum_times(((C_word*)t0)[3],C_fix(5));
/* profiler.scm:73: make-vector */
t4=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t2,t3,C_fix(0));}

/* k162 in k159 */
static void C_ccall f_164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_164,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,lf[0]);
t3=C_mutate(&lf[0] /* (set! ##sys#profile-vector-list ...) */,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[33] = {
{"toplevel:profiler_2escm",(void*)C_profiler_toplevel},
{"f_340:profiler_2escm",(void*)f_340},
{"f_344:profiler_2escm",(void*)f_344},
{"f_349:profiler_2escm",(void*)f_349},
{"f_426:profiler_2escm",(void*)f_426},
{"f_436:profiler_2escm",(void*)f_436},
{"f_351:profiler_2escm",(void*)f_351},
{"f_360:profiler_2escm",(void*)f_360},
{"f_370:profiler_2escm",(void*)f_370},
{"f_373:profiler_2escm",(void*)f_373},
{"f_376:profiler_2escm",(void*)f_376},
{"f_379:profiler_2escm",(void*)f_379},
{"f_382:profiler_2escm",(void*)f_382},
{"f_385:profiler_2escm",(void*)f_385},
{"f_388:profiler_2escm",(void*)f_388},
{"f_391:profiler_2escm",(void*)f_391},
{"f_287:profiler_2escm",(void*)f_287},
{"f_231:profiler_2escm",(void*)f_231},
{"f_253:profiler_2escm",(void*)f_253},
{"f_218:profiler_2escm",(void*)f_218},
{"f_157:profiler_2escm",(void*)f_157},
{"f_216:profiler_2escm",(void*)f_216},
{"f_176:profiler_2escm",(void*)f_176},
{"f_179:profiler_2escm",(void*)f_179},
{"f_182:profiler_2escm",(void*)f_182},
{"f_199:profiler_2escm",(void*)f_199},
{"f_203:profiler_2escm",(void*)f_203},
{"f_185:profiler_2escm",(void*)f_185},
{"f_190:profiler_2escm",(void*)f_190},
{"f_194:profiler_2escm",(void*)f_194},
{"f_161:profiler_2escm",(void*)f_161},
{"f_164:profiler_2escm",(void*)f_164},
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
