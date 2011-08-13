/* Generated from chicken.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: chicken.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file chicken.c
   used units: library eval chicken_2dsyntax chicken_2dffi_2dsyntax srfi_2d1 srfi_2d4 utils files extras data_2dstructures support compiler optimizer unboxing compiler_2dsyntax scrutinizer driver platform backend srfi_2d69
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dffi_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_externimport void C_ccall C_srfi_2d4_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_support_toplevel)
C_externimport void C_ccall C_support_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_compiler_toplevel)
C_externimport void C_ccall C_compiler_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_externimport void C_ccall C_optimizer_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_unboxing_toplevel)
C_externimport void C_ccall C_unboxing_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_compiler_2dsyntax_toplevel)
C_externimport void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_scrutinizer_toplevel)
C_externimport void C_ccall C_scrutinizer_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_driver_toplevel)
C_externimport void C_ccall C_driver_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_platform_toplevel)
C_externimport void C_ccall C_platform_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_backend_toplevel)
C_externimport void C_ccall C_backend_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d69_toplevel)
C_externimport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[41];
static double C_possibly_force_alignment;


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_96)
static void C_ccall f_96(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_99)
static void C_ccall f_99(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_102)
static void C_ccall f_102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_105)
static void C_ccall f_105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_108)
static void C_ccall f_108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_111)
static void C_ccall f_111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_114)
static void C_ccall f_114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_117)
static void C_ccall f_117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_120)
static void C_ccall f_120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_123)
static void C_ccall f_123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_126)
static void C_ccall f_126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_129)
static void C_ccall f_129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_132)
static void C_ccall f_132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_135)
static void C_ccall f_135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_138)
static void C_ccall f_138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_141)
static void C_ccall f_141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_144)
static void C_ccall f_144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_147)
static void C_ccall f_147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_150)
static void C_ccall f_150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_153)
static void C_ccall f_153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_508)
static void C_ccall f_508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_504)
static void C_ccall f_504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_496)
static void C_ccall f_496(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_486)
static void C_ccall f_486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_494)
static void C_ccall f_494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_157)
static void C_ccall f_157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_286)
static void C_ccall f_286(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_298)
static void C_fcall f_298(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_476)
static void C_ccall f_476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_469)
static void C_ccall f_469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_417)
static void C_ccall f_417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_387)
static void C_ccall f_387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_377)
static void C_ccall f_377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_367)
static void C_ccall f_367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_357)
static void C_ccall f_357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_337)
static void C_ccall f_337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_290)
static void C_ccall f_290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_293)
static void C_ccall f_293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_274)
static void C_ccall f_274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_278)
static void C_ccall f_278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_266)
static void C_ccall f_266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_272)
static void C_ccall f_272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_269)
static void C_ccall f_269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_159)
static void C_ccall f_159(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_165)
static void C_fcall f_165(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_200)
static void C_fcall f_200(C_word t0,C_word t1) C_noret;
C_noret_decl(f_226)
static void C_ccall f_226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_222)
static void C_ccall f_222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_179)
static void C_ccall f_179(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_298)
static void C_fcall trf_298(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_298(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_298(t0,t1,t2);}

C_noret_decl(trf_165)
static void C_fcall trf_165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_165(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_165(t0,t1,t2,t3,t4);}

C_noret_decl(trf_200)
static void C_fcall trf_200(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_200(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_200(t0,t1);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

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
if(!C_demand_2(350)){
C_save(t1);
C_rereclaim2(350*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,41);
lf[0]=C_h_intern(&lf[0],27,"\010compilercompiler-arguments");
lf[1]=C_h_intern(&lf[1],29,"\010compilerprocess-command-line");
lf[2]=C_h_intern(&lf[2],7,"reverse");
lf[3]=C_h_intern(&lf[3],14,"string->symbol");
lf[4]=C_h_intern(&lf[4],9,"substring");
lf[5]=C_h_intern(&lf[5],25,"\003sysimplicit-exit-handler");
lf[6]=C_h_intern(&lf[6],17,"user-options-pass");
lf[7]=C_h_intern(&lf[7],4,"exit");
lf[8]=C_h_intern(&lf[8],19,"compile-source-file");
lf[9]=C_h_intern(&lf[9],14,"optimize-level");
lf[10]=C_h_intern(&lf[10],5,"cons*");
lf[11]=C_h_intern(&lf[11],18,"no-compiler-syntax");
lf[12]=C_h_intern(&lf[12],21,"no-usual-integrations");
lf[13]=C_h_intern(&lf[13],22,"optimize-leaf-routines");
lf[14]=C_h_intern(&lf[14],6,"inline");
lf[15]=C_h_intern(&lf[15],8,"unboxing");
lf[16]=C_h_intern(&lf[16],13,"inline-global");
lf[17]=C_h_intern(&lf[17],5,"local");
lf[18]=C_h_intern(&lf[18],6,"unsafe");
lf[19]=C_h_intern(&lf[19],18,"disable-interrupts");
lf[20]=C_h_intern(&lf[20],8,"no-trace");
lf[21]=C_h_intern(&lf[21],5,"block");
lf[22]=C_h_intern(&lf[22],14,"no-lambda-info");
lf[23]=C_h_intern(&lf[23],11,"debug-level");
lf[24]=C_h_intern(&lf[24],10,"scrutinize");
lf[25]=C_h_intern(&lf[25],31,"\010compilervalid-compiler-options");
lf[26]=C_h_intern(&lf[26],45,"\010compilervalid-compiler-options-with-argument");
lf[27]=C_h_intern(&lf[27],4,"quit");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000 missing argument to `-~s\047 option");
lf[29]=C_h_intern(&lf[29],7,"warning");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000 invalid compiler option (gnored)");
lf[31]=C_h_intern(&lf[31],4,"conc");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[33]=C_h_intern(&lf[33],6,"append");
lf[34]=C_h_intern(&lf[34],4,"argv");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[36]=C_h_intern(&lf[36],6,"remove");
lf[37]=C_h_intern(&lf[37],12,"string-split");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[39]=C_h_intern(&lf[39],24,"get-environment-variable");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\017CHICKEN_OPTIONS");
C_register_lf2(lf,41,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_96,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k94 */
static void C_ccall f_96(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_96,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_99,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k97 in k94 */
static void C_ccall f_99(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_99,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_102,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k100 in k97 in k94 */
static void C_ccall f_102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_102,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_105,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dffi_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k103 in k100 in k97 in k94 */
static void C_ccall f_105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_105,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_108,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_108,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_111,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d4_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_114,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_114,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_117,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_117,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_120,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_120,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_123,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_123,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_126,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_support_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_126,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_129,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_compiler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_129,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_132,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_optimizer_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_132,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_135,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_unboxing_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_135,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_138,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_compiler_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_138,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_141,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_scrutinizer_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_141,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_144,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_driver_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_144,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_147,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_platform_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_147,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_150,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_backend_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_150,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_153,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d69_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_153,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_157,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_486,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_496,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_504,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_508,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm:45: get-environment-variable */
t7=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[40]);}

/* k506 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* chicken.scm:45: string-split */
t3=*((C_word*)lf[37]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}
else{
/* chicken.scm:45: string-split */
t2=*((C_word*)lf[37]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[38]);}}

/* k502 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:43: remove */
t2=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a495 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_496(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_496,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_string_equal_p(t2,lf[35]));}

/* k484 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_486,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_494,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm:46: argv */
t3=*((C_word*)lf[34]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k492 in k484 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(t1);
/* chicken.scm:42: append */
t3=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_157,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##compiler#compiler-arguments ...) */,t1);
t3=C_mutate((C_word*)lf[1]+1 /* (set! ##compiler#process-command-line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_159,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_266,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_274,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_286,tmp=(C_word)a,a+=2,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t4,t5,t6);}

/* a285 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_286(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_286,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_290,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_298,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_298(t9,t5,((C_word*)t4)[1]);}

/* loop in a285 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_fcall f_298(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word *a;
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_298,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_car(t2);
t4=C_i_cdr(t2);
t5=C_eqp(lf[9],t3);
if(C_truep(t5)){
t6=C_i_car(t4);
t7=C_a_i_string_to_number(&a,2,t6,C_fix(10));
switch(t7){
case C_fix(0):
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_337,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:83: cons* */
t9=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[11],lf[12],((C_word*)((C_word*)t0)[3])[1]);
case C_fix(1):
t8=C_a_i_cons(&a,2,lf[13],((C_word*)((C_word*)t0)[3])[1]);
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,t8);
t10=C_i_cdr(t4);
/* chicken.scm:106: loop */
t32=t1;
t33=t10;
t1=t32;
t2=t33;
goto loop;
case C_fix(2):
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_357,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:88: cons* */
t9=*((C_word*)lf[10]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t8,lf[13],lf[14],lf[15],((C_word*)((C_word*)t0)[3])[1]);
case C_fix(3):
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_367,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:92: cons* */
t9=*((C_word*)lf[10]+1);
((C_proc8)(void*)(*((C_word*)t9+1)))(8,t9,t8,lf[13],lf[14],lf[16],lf[15],lf[17],((C_word*)((C_word*)t0)[3])[1]);
case C_fix(4):
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_377,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:96: cons* */
t9=*((C_word*)lf[10]+1);
((C_proc9)(void*)(*((C_word*)t9+1)))(9,t9,t8,lf[13],lf[14],lf[16],lf[15],lf[17],lf[18],((C_word*)((C_word*)t0)[3])[1]);
default:
if(C_truep(C_i_greater_or_equalp(t7,C_fix(5)))){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_387,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:102: cons* */
t9=*((C_word*)lf[10]+1);
((C_proc12)(void*)(*((C_word*)t9+1)))(12,t9,t8,lf[19],lf[20],lf[18],lf[21],lf[13],lf[22],lf[14],lf[16],lf[15],((C_word*)((C_word*)t0)[3])[1]);}
else{
t8=C_i_cdr(t4);
/* chicken.scm:106: loop */
t32=t1;
t33=t8;
t1=t32;
t2=t33;
goto loop;}}}
else{
t6=C_eqp(lf[23],t3);
if(C_truep(t6)){
t7=C_i_car(t4);
t8=C_a_i_string_to_number(&a,2,t7,C_fix(10));
switch(t8){
case C_fix(0):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_417,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:110: cons* */
t10=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,lf[22],lf[20],((C_word*)((C_word*)t0)[3])[1]);
case C_fix(1):
t9=C_a_i_cons(&a,2,lf[20],((C_word*)((C_word*)t0)[3])[1]);
t10=C_mutate(((C_word *)((C_word*)t0)[3])+1,t9);
t11=C_i_cdr(t4);
/* chicken.scm:113: loop */
t32=t1;
t33=t11;
t1=t32;
t2=t33;
goto loop;
default:
t9=C_a_i_cons(&a,2,lf[24],((C_word*)((C_word*)t0)[3])[1]);
t10=C_mutate(((C_word *)((C_word*)t0)[3])+1,t9);
t11=C_i_cdr(t4);
/* chicken.scm:113: loop */
t32=t1;
t33=t11;
t1=t32;
t2=t33;
goto loop;}}
else{
if(C_truep(C_i_memq(t3,*((C_word*)lf[25]+1)))){
/* chicken.scm:114: loop */
t32=t1;
t33=t4;
t1=t32;
t2=t33;
goto loop;}
else{
if(C_truep(C_i_memq(t3,*((C_word*)lf[26]+1)))){
if(C_truep(C_i_pairp(t4))){
t7=C_i_cdr(t4);
/* chicken.scm:117: loop */
t32=t1;
t33=t7;
t1=t32;
t2=t33;
goto loop;}
else{
/* chicken.scm:118: quit */
t7=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,lf[28],t3);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_469,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_476,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t3))){
/* chicken.scm:120: warning */
t9=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,lf[30],t3);}
else{
/* chicken.scm:122: conc */
t9=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,lf[32],t3);}}}}}}}

/* k474 in loop in a285 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:120: warning */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[30],t1);}

/* k467 in loop in a285 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:123: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_298(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k415 in loop in a285 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_i_cdr(((C_word*)t0)[4]);
/* chicken.scm:113: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_298(t4,((C_word*)t0)[2],t3);}

/* k385 in loop in a285 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_i_cdr(((C_word*)t0)[4]);
/* chicken.scm:106: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_298(t4,((C_word*)t0)[2],t3);}

/* k375 in loop in a285 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_i_cdr(((C_word*)t0)[4]);
/* chicken.scm:106: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_298(t4,((C_word*)t0)[2],t3);}

/* k365 in loop in a285 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_i_cdr(((C_word*)t0)[4]);
/* chicken.scm:106: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_298(t4,((C_word*)t0)[2],t3);}

/* k355 in loop in a285 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_i_cdr(((C_word*)t0)[4]);
/* chicken.scm:106: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_298(t4,((C_word*)t0)[2],t3);}

/* k335 in loop in a285 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_i_cdr(((C_word*)t0)[4]);
/* chicken.scm:106: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_298(t4,((C_word*)t0)[2],t3);}

/* k288 in a285 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_290,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_293,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t2,*((C_word*)lf[8]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k291 in k288 in a285 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:125: exit */
t2=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a273 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_274,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_278,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm:73: user-options-pass */
t3=*((C_word*)lf[6]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k276 in a273 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* g3536 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],*((C_word*)lf[0]+1));}
else{
t2=*((C_word*)lf[1]+1);
/* g3536 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],*((C_word*)lf[0]+1));}}

/* k264 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_266,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_269,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_272,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
t4=*((C_word*)lf[5]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k270 in k264 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k267 in k264 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* f_159 in k155 in k151 in k148 in k145 in k142 in k139 in k136 in k133 in k130 in k127 in k124 in k121 in k118 in k115 in k112 in k109 in k106 in k103 in k100 in k97 in k94 */
static void C_ccall f_159(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_159,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_165,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_165(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop */
static void C_fcall f_165(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_word t18;
C_word t19;
C_word t20;
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_165,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_179,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm:58: reverse */
t6=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
t5=C_i_car(t2);
t6=C_i_string_length(t5);
t7=C_i_string_ref(t5,C_fix(0));
t8=C_i_char_equalp(C_make_character(45),t7);
t9=(C_truep(t8)?C_i_greaterp(t6,C_fix(1)):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_200,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[2],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_greaterp(t6,C_fix(1)))){
t11=C_i_string_ref(t5,C_fix(1));
t12=t10;
f_200(t12,C_i_char_equalp(C_make_character(58),t11));}
else{
t11=t10;
f_200(t11,C_SCHEME_FALSE);}}
else{
if(C_truep(t4)){
t10=C_i_cdr(t2);
t11=C_a_i_cons(&a,2,t5,t3);
/* chicken.scm:67: loop */
t17=t1;
t18=t10;
t19=t11;
t20=t4;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
goto loop;}
else{
t10=C_i_cdr(t2);
/* chicken.scm:68: loop */
t17=t1;
t18=t10;
t19=t3;
t20=t5;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
goto loop;}}}}

/* k198 in loop */
static void C_fcall f_200(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_200,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[8]);
/* chicken.scm:64: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_165(t3,((C_word*)t0)[6],t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=C_i_cdr(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_222,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_226,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm:65: substring */
t5=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[3],C_fix(1),((C_word*)t0)[2]);}}

/* k224 in k198 in loop */
static void C_ccall f_226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:65: string->symbol */
t2=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k220 in k198 in loop */
static void C_ccall f_222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_222,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* chicken.scm:65: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_165(t3,((C_word*)t0)[4],((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k177 in loop */
static void C_ccall f_179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:58: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[51] = {
{"toplevel:chicken_2escm",(void*)C_toplevel},
{"f_96:chicken_2escm",(void*)f_96},
{"f_99:chicken_2escm",(void*)f_99},
{"f_102:chicken_2escm",(void*)f_102},
{"f_105:chicken_2escm",(void*)f_105},
{"f_108:chicken_2escm",(void*)f_108},
{"f_111:chicken_2escm",(void*)f_111},
{"f_114:chicken_2escm",(void*)f_114},
{"f_117:chicken_2escm",(void*)f_117},
{"f_120:chicken_2escm",(void*)f_120},
{"f_123:chicken_2escm",(void*)f_123},
{"f_126:chicken_2escm",(void*)f_126},
{"f_129:chicken_2escm",(void*)f_129},
{"f_132:chicken_2escm",(void*)f_132},
{"f_135:chicken_2escm",(void*)f_135},
{"f_138:chicken_2escm",(void*)f_138},
{"f_141:chicken_2escm",(void*)f_141},
{"f_144:chicken_2escm",(void*)f_144},
{"f_147:chicken_2escm",(void*)f_147},
{"f_150:chicken_2escm",(void*)f_150},
{"f_153:chicken_2escm",(void*)f_153},
{"f_508:chicken_2escm",(void*)f_508},
{"f_504:chicken_2escm",(void*)f_504},
{"f_496:chicken_2escm",(void*)f_496},
{"f_486:chicken_2escm",(void*)f_486},
{"f_494:chicken_2escm",(void*)f_494},
{"f_157:chicken_2escm",(void*)f_157},
{"f_286:chicken_2escm",(void*)f_286},
{"f_298:chicken_2escm",(void*)f_298},
{"f_476:chicken_2escm",(void*)f_476},
{"f_469:chicken_2escm",(void*)f_469},
{"f_417:chicken_2escm",(void*)f_417},
{"f_387:chicken_2escm",(void*)f_387},
{"f_377:chicken_2escm",(void*)f_377},
{"f_367:chicken_2escm",(void*)f_367},
{"f_357:chicken_2escm",(void*)f_357},
{"f_337:chicken_2escm",(void*)f_337},
{"f_290:chicken_2escm",(void*)f_290},
{"f_293:chicken_2escm",(void*)f_293},
{"f_274:chicken_2escm",(void*)f_274},
{"f_278:chicken_2escm",(void*)f_278},
{"f_266:chicken_2escm",(void*)f_266},
{"f_272:chicken_2escm",(void*)f_272},
{"f_269:chicken_2escm",(void*)f_269},
{"f_159:chicken_2escm",(void*)f_159},
{"f_165:chicken_2escm",(void*)f_165},
{"f_200:chicken_2escm",(void*)f_200},
{"f_226:chicken_2escm",(void*)f_226},
{"f_222:chicken_2escm",(void*)f_222},
{"f_179:chicken_2escm",(void*)f_179},
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
