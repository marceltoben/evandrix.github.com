/* Generated from chicken-bug.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:18
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: chicken-bug.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -no-lambda-info -local -no-trace -output-file chicken-bug.c
   used units: library eval srfi_2d13 posix tcp data_2dstructures utils extras
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_tcp_toplevel)
C_externimport void C_ccall C_tcp_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[91];
static double C_possibly_force_alignment;


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_202)
static void C_ccall f_202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_205)
static void C_ccall f_205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_208)
static void C_ccall f_208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_211)
static void C_ccall f_211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_214)
static void C_ccall f_214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_217)
static void C_ccall f_217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_220)
static void C_ccall f_220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_223)
static void C_ccall f_223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_776)
static void C_ccall f_776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_766)
static void C_ccall f_766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_772)
static void C_ccall f_772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_769)
static void C_ccall f_769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_750)
static void C_ccall f_750(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_759)
static void C_ccall f_759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_754)
static void C_ccall f_754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_605)
static void C_ccall f_605(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_727)
static void C_fcall f_727(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_737)
static void C_ccall f_737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_654)
static void C_ccall f_654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_725)
static void C_ccall f_725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_721)
static void C_ccall f_721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_657)
static void C_fcall f_657(C_word t0,C_word t1) C_noret;
C_noret_decl(f_660)
static void C_ccall f_660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_717)
static void C_ccall f_717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_663)
static void C_ccall f_663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_709)
static void C_ccall f_709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_713)
static void C_ccall f_713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_688)
static void C_ccall f_688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_694)
static void C_ccall f_694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_698)
static void C_ccall f_698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_692)
static void C_ccall f_692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_678)
static void C_ccall f_678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_607)
static void C_fcall f_607(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_648)
static void C_ccall f_648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_644)
static void C_ccall f_644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f834)
static void C_ccall f834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_623)
static void C_ccall f_623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_619)
static void C_ccall f_619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_586)
static void C_ccall f_586(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_590)
static void C_ccall f_590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_539)
static void C_ccall f_539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_584)
static void C_ccall f_584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_577)
static void C_ccall f_577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_543)
static void C_ccall f_543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_548)
static void C_fcall f_548(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_552)
static void C_ccall f_552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_530)
static void C_ccall f_530(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_534)
static void C_ccall f_534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_236)
static void C_ccall f_236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_240)
static void C_ccall f_240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_243)
static void C_ccall f_243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_528)
static void C_ccall f_528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_524)
static void C_ccall f_524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_246)
static void C_ccall f_246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_249)
static void C_ccall f_249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f827)
static void C_ccall f827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_520)
static void C_ccall f_520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_252)
static void C_ccall f_252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_255)
static void C_ccall f_255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_258)
static void C_ccall f_258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_261)
static void C_ccall f_261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_516)
static void C_ccall f_516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_264)
static void C_ccall f_264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_512)
static void C_ccall f_512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_267)
static void C_ccall f_267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_508)
static void C_ccall f_508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_270)
static void C_ccall f_270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_504)
static void C_ccall f_504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_273)
static void C_ccall f_273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_500)
static void C_ccall f_500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_276)
static void C_ccall f_276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_496)
static void C_ccall f_496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_279)
static void C_ccall f_279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_282)
static void C_ccall f_282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_285)
static void C_ccall f_285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_288)
static void C_ccall f_288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_291)
static void C_ccall f_291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_294)
static void C_ccall f_294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_459)
static void C_fcall f_459(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_488)
static void C_ccall f_488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_457)
static void C_ccall f_457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_450)
static void C_ccall f_450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_355)
static void C_ccall f_355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_425)
static void C_fcall f_425(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_299)
static void C_ccall f_299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_331)
static void C_fcall f_331(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_304)
static void C_ccall f_304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_311)
static void C_ccall f_311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_341)
static void C_ccall f_341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_435)
static void C_ccall f_435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_361)
static void C_ccall f_361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_364)
static void C_ccall f_364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_423)
static void C_ccall f_423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_409)
static void C_ccall f_409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_411)
static void C_ccall f_411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_419)
static void C_ccall f_419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_367)
static void C_ccall f_367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_370)
static void C_ccall f_370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_405)
static void C_ccall f_405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_379)
static void C_ccall f_379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_382)
static void C_ccall f_382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_387)
static void C_ccall f_387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_395)
static void C_ccall f_395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_373)
static void C_ccall f_373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_226)
static void C_ccall f_226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_234)
static void C_ccall f_234(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_727)
static void C_fcall trf_727(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_727(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_727(t0,t1,t2);}

C_noret_decl(trf_657)
static void C_fcall trf_657(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_657(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_657(t0,t1);}

C_noret_decl(trf_607)
static void C_fcall trf_607(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_607(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_607(t0,t1,t2);}

C_noret_decl(trf_548)
static void C_fcall trf_548(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_548(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_548(t0,t1,t2);}

C_noret_decl(trf_459)
static void C_fcall trf_459(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_459(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_459(t0,t1,t2);}

C_noret_decl(trf_425)
static void C_fcall trf_425(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_425(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_425(t0,t1,t2);}

C_noret_decl(trf_331)
static void C_fcall trf_331(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_331(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_331(t0,t1,t2);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

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
if(!C_demand_2(510)){
C_save(t1);
C_rereclaim2(510*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,91);
lf[0]=C_h_intern(&lf[0],7,"user-id");
lf[1]=C_h_intern(&lf[1],16,"user-information");
lf[2]=C_h_intern(&lf[2],15,"current-user-id");
lf[3]=C_h_intern(&lf[3],12,"collect-info");
lf[4]=C_h_intern(&lf[4],19,"\003sysstandard-output");
lf[5]=C_h_intern(&lf[5],8,"for-each");
lf[6]=C_h_intern(&lf[6],7,"newline");
lf[7]=C_h_intern(&lf[7],7,"display");
lf[8]=C_h_intern(&lf[8],8,"read-all");
lf[9]=C_h_intern(&lf[9],20,"with-input-from-pipe");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\013gcc -v 2>&1");
lf[11]=C_h_intern(&lf[11],5,"print");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\0000CC seems to be gcc, trying to obtain version...\012");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\003gcc");
lf[14]=C_h_intern(&lf[14],8,"feature\077");
lf[15]=C_h_intern(&lf[15],4,"unix");
lf[16]=C_h_intern(&lf[16],17,"\003syspeek-c-string");
lf[17]=C_h_intern(&lf[17],20,"with-input-from-file");
lf[18]=C_h_intern(&lf[18],13,"make-pathname");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\020chicken-config.h");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\024\012\012chicken-config.h:\012");
lf[21]=C_h_intern(&lf[21],11,"make-string");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\003\012  ");
lf[23]=C_h_intern(&lf[23],4,"chop");
lf[24]=C_h_intern(&lf[24],15,"keyword->string");
lf[25]=C_h_intern(&lf[25],12,"\003sysfeatures");
lf[26]=C_h_intern(&lf[26],3,"map");
lf[27]=C_h_intern(&lf[27],4,"sort");
lf[28]=C_h_intern(&lf[28],8,"string<\077");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000\011Features:");
lf[30]=C_h_intern(&lf[30],19,"\003syswrite-char/port");
lf[31]=C_h_intern(&lf[31],5,"write");
lf[32]=C_h_intern(&lf[32],21,"\003sysinclude-pathnames");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\016Include path:\011");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\020Home directory:\011");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[36]=C_h_intern(&lf[36],12,"chicken-home");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\024CHICKEN version is:\012");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[39]=C_h_intern(&lf[39],15,"chicken-version");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\021\011build platform:\011");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[42]=C_h_intern(&lf[42],14,"build-platform");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\023\011software version:\011");
lf[44]=C_h_intern(&lf[44],16,"software-version");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\020\011software type:\011");
lf[46]=C_h_intern(&lf[46],13,"software-type");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\017\011machine type:\011");
lf[48]=C_h_intern(&lf[48],12,"machine-type");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\022Host information:\012");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\022User information:\011");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\006Date:\011");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\002\012\012");
lf[53]=C_h_intern(&lf[53],15,"seconds->string");
lf[54]=C_h_intern(&lf[54],15,"current-seconds");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\0002This is a bug report generated by chicken-bug(1).\012");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\0004\012--------------------------------------------------\012");
lf[57]=C_h_intern(&lf[57],5,"usage");
lf[58]=C_h_intern(&lf[58],4,"exit");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\0017usage: chicken-bug [FILENAME ...]\012\012  -help  -h            show this message"
"\012  -to-stdout           write bug report to standard output\012  -                 "
"   read description from standard input\012\012Generates a bug report file from user i"
"nput or alternatively\012from the contents of files given on the command line.\012");
lf[60]=C_h_intern(&lf[60],10,"user-input");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[62]=C_h_intern(&lf[62],26,"string-concatenate-reverse");
lf[63]=C_h_intern(&lf[63],9,"read-line");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\001jThis is the CHICKEN bug report generator. Please enter a detailed\012descripti"
"on of the problem you have encountered and enter CTRL-D (EOF)\012or a line consisti"
"ng only of \042.\042 to finish. Press CTRL-C to abort the program. You can\012also pass t"
"he description from a file (just abort now and re-invoke\012\042chicken-bug\042 with one "
"or more input files given on the command-line)\012");
lf[65]=C_h_intern(&lf[65],13,"\003systty-port\077");
lf[66]=C_h_intern(&lf[66],18,"current-input-port");
lf[67]=C_h_intern(&lf[67],7,"justify");
lf[68]=C_h_intern(&lf[68],13,"string-append");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[70]=C_h_intern(&lf[70],4,"main");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\017\012\012User input:\012\012");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\012-to-stdout");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\016\012\012File added: ");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\002\012\012");
lf[80]=C_h_intern(&lf[80],15,"generate-report");
lf[81]=C_h_intern(&lf[81],21,"with-output-to-string");
lf[82]=C_h_intern(&lf[82],7,"sprintf");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\033chicken-bug-report.~a-~a-~a");
lf[84]=C_h_intern(&lf[84],19,"seconds->local-time");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\002\012\012");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000#\012A bug report has been written to `");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\002\047.");
lf[88]=C_h_intern(&lf[88],19,"with-output-to-file");
lf[89]=C_h_intern(&lf[89],25,"\003sysimplicit-exit-handler");
lf[90]=C_h_intern(&lf[90],22,"command-line-arguments");
C_register_lf2(lf,91,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_202,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k200 */
static void C_ccall f_202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_202,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_205,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k203 in k200 */
static void C_ccall f_205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_205,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_208,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k206 in k203 in k200 */
static void C_ccall f_208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_211,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k209 in k206 in k203 in k200 */
static void C_ccall f_211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_211,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_214,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_tcp_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k212 in k209 in k206 in k203 in k200 */
static void C_ccall f_214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_214,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_217,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k215 in k212 in k209 in k206 in k203 in k200 */
static void C_ccall f_217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_220,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k218 in k215 in k212 in k209 in k206 in k203 in k200 */
static void C_ccall f_220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_220,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_223,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k221 in k218 in k215 in k212 in k209 in k206 in k203 in k200 */
static void C_ccall f_223(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_223,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! user-id ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_226,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate((C_word*)lf[3]+1 /* (set! collect-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_236,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[57]+1 /* (set! usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_530,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[60]+1 /* (set! user-input ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_539,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[67]+1 /* (set! justify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_586,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[70]+1 /* (set! main ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_605,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[80]+1 /* (set! generate-report ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_750,tmp=(C_word)a,a+=2,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_766,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_776,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:157: command-line-arguments */
((C_proc2)C_fast_retrieve_symbol_proc(lf[90]))(2,*((C_word*)lf[90]+1),t10);}

/* k774 in k221 in k218 in k215 in k212 in k209 in k206 in k203 in k200 */
static void C_ccall f_776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:157: main */
t2=C_fast_retrieve(lf[70]);
f_605(3,t2,((C_word*)t0)[2],t1);}

/* k764 in k221 in k218 in k215 in k212 in k209 in k206 in k203 in k200 */
static void C_ccall f_766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_766,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_769,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_772,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[89]))(2,*((C_word*)lf[89]+1),t3);}

/* k770 in k764 in k221 in k218 in k215 in k212 in k209 in k206 in k203 in k200 */
static void C_ccall f_772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k767 in k764 in k221 in k218 in k215 in k212 in k209 in k206 in k203 in k200 */
static void C_ccall f_769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* f_750 in k221 in k218 in k215 in k212 in k209 in k206 in k203 in k200 */
static void C_ccall f_750(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_750,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_754,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_759,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:153: with-output-to-file */
((C_proc4)C_fast_retrieve_symbol_proc(lf[88]))(4,*((C_word*)lf[88]+1),t4,t2,t5);}

/* a758 */
static void C_ccall f_759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_759,2,t0,t1);}
/* chicken-bug.scm:154: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t1,((C_word*)t0)[2]);}

/* k752 */
static void C_ccall f_754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:155: print */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(5,*((C_word*)lf[11]+1),((C_word*)t0)[3],lf[86],((C_word*)t0)[2],lf[87]);}

/* f_605 in k221 in k218 in k215 in k212 in k209 in k206 in k203 in k200 */
static void C_ccall f_605(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[23],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_605,3,t0,t1,t2);}
t3=lf[71];
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_607,a[2]=t8,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t10=C_i_check_list_2(t2,lf[5]);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_654,a[2]=t6,a[3]=t4,a[4]=t1,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_727,a[2]=t9,a[3]=t13,tmp=(C_word)a,a+=4,tmp));
t15=((C_word*)t13)[1];
f_727(t15,t11,t2);}

/* for-each-loop145 */
static void C_fcall f_727(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_727,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_737,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g146152 */
t5=((C_word*)t0)[2];
f_607(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k735 in for-each-loop145 */
static void C_ccall f_737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_727(t3,((C_word*)t0)[2],t2);}

/* k652 */
static void C_ccall f_654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_654,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_657,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=t2;
f_657(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_721,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_725,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:135: user-input */
t5=C_fast_retrieve(lf[60]);
f_539(2,t5,t4);}}

/* k723 in k652 */
static void C_ccall f_725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:135: string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[68]+1)))(5,*((C_word*)lf[68]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],lf[85],t1);}

/* k719 in k652 */
static void C_ccall f_721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_657(t3,t2);}

/* k655 in k652 */
static void C_fcall f_657(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_657,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_660,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:136: newline */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(2,*((C_word*)lf[6]+1),t2);}

/* k658 in k655 in k652 */
static void C_ccall f_660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_660,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_663,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_717,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:137: current-seconds */
((C_proc2)C_fast_retrieve_symbol_proc(lf[54]))(2,*((C_word*)lf[54]+1),t3);}

/* k715 in k658 in k655 in k652 */
static void C_ccall f_717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:137: seconds->local-time */
((C_proc3)C_fast_retrieve_symbol_proc(lf[84]))(3,*((C_word*)lf[84]+1),((C_word*)t0)[2],t1);}

/* k661 in k658 in k655 in k652 */
static void C_ccall f_663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_663,2,t0,t1);}
t2=C_i_vector_ref(t1,C_fix(3));
t3=C_i_vector_ref(t1,C_fix(4));
t4=C_i_vector_ref(t1,C_fix(5));
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_678,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:143: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t5,((C_word*)((C_word*)t0)[2])[1]);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_688,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_plus(&a,2,C_fix(1900),t4);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_709,a[2]=t2,a[3]=t6,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:146: justify */
t8=C_fast_retrieve(lf[67]);
f_586(3,t8,t7,t3);}}

/* k707 in k661 in k658 in k655 in k652 */
static void C_ccall f_709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_713,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:146: justify */
t3=C_fast_retrieve(lf[67]);
f_586(3,t3,t2,((C_word*)t0)[2]);}

/* k711 in k707 in k661 in k658 in k655 in k652 */
static void C_ccall f_713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:146: sprintf */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[82]+1)))(6,*((C_word*)lf[82]+1),((C_word*)t0)[4],lf[83],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k686 in k661 in k658 in k655 in k652 */
static void C_ccall f_688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_688,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_692,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_694,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:147: with-output-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[81]))(3,*((C_word*)lf[81]+1),t2,t3);}

/* a693 in k686 in k661 in k658 in k655 in k652 */
static void C_ccall f_694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_694,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_698,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:149: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k696 in a693 in k686 in k661 in k658 in k655 in k652 */
static void C_ccall f_698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:150: collect-info */
t2=C_fast_retrieve(lf[3]);
f_236(2,t2,((C_word*)t0)[2]);}

/* k690 in k686 in k661 in k658 in k655 in k652 */
static void C_ccall f_692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:145: generate-report */
t2=C_fast_retrieve(lf[80]);
f_750(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k676 in k661 in k658 in k655 in k652 */
static void C_ccall f_678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:144: collect-info */
t2=C_fast_retrieve(lf[3]);
f_236(2,t2,((C_word*)t0)[2]);}

/* g146 */
static void C_fcall f_607(C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_607,NULL,3,t0,t1,t2);}
if(C_truep(C_i_string_equal_p(lf[72],t2))){
t3=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_619,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_623,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:121: user-input */
t6=C_fast_retrieve(lf[60]);
f_539(2,t6,t5);}
else{
t3=t2;
if(C_truep((C_truep(C_i_equalp(t3,lf[74]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[75]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[76]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t4=t1;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f834,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:76: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t5,lf[59]);}
else{
if(C_truep(C_i_string_equal_p(lf[77],t2))){
t4=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_644,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_648,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:132: read-all */
((C_proc3)C_fast_retrieve_symbol_proc(lf[8]))(3,*((C_word*)lf[8]+1),t6,t2);}}}}

/* k646 in g146 */
static void C_ccall f_648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:129: string-append */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[68]+1)))(7,*((C_word*)lf[68]+1),((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],lf[78],((C_word*)t0)[2],lf[79],t1);}

/* k642 in g146 */
static void C_ccall f_644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f834 in g146 */
static void C_ccall f834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:88: exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[58]))(3,*((C_word*)lf[58]+1),((C_word*)t0)[2],C_fix(0));}

/* k621 in g146 */
static void C_ccall f_623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:121: string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[68]+1)))(5,*((C_word*)lf[68]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],lf[73],t1);}

/* k617 in g146 */
static void C_ccall f_619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_586 in k221 in k218 in k215 in k212 in k209 in k206 in k203 in k200 */
static void C_ccall f_586(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_586,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_590,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:108: number->string */
C_number_to_string(3,0,t3,t2);}

/* k588 */
static void C_ccall f_590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_string_length(t1);
if(C_truep(C_i_greaterp(t2,C_fix(1)))){
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* chicken-bug.scm:111: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[68]+1)))(4,*((C_word*)lf[68]+1),((C_word*)t0)[2],lf[69],t1);}}

/* f_539 in k221 in k218 in k215 in k212 in k209 in k206 in k203 in k200 */
static void C_ccall f_539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_539,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_543,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_577,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_584,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:91: current-input-port */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(2,*((C_word*)lf[66]+1),t4);}

/* k582 */
static void C_ccall f_584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:91: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),((C_word*)t0)[2],t1);}

/* k575 */
static void C_ccall f_577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken-bug.scm:92: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),((C_word*)t0)[2],lf[64]);}
else{
t2=((C_word*)t0)[2];
f_543(2,t2,C_SCHEME_UNDEFINED);}}

/* k541 */
static void C_ccall f_543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_543,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_548,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_548(t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* loop in k541 */
static void C_fcall f_548(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_548,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_552,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:102: read-line */
((C_proc2)C_fast_retrieve_symbol_proc(lf[63]))(2,*((C_word*)lf[63]+1),t3);}

/* k550 in loop in k541 */
static void C_ccall f_552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_552,2,t0,t1);}
t2=C_eofp(t1);
t3=(C_truep(t2)?t2:C_i_string_equal_p(lf[61],t1));
if(C_truep(t3)){
/* chicken-bug.scm:104: string-concatenate-reverse */
((C_proc3)C_fast_retrieve_symbol_proc(lf[62]))(3,*((C_word*)lf[62]+1),((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
/* chicken-bug.scm:105: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_548(t5,((C_word*)t0)[4],t4);}}

/* f_530 in k221 in k218 in k215 in k212 in k209 in k206 in k203 in k200 */
static void C_ccall f_530(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_530,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_534,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:76: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t3,lf[59]);}

/* k532 */
static void C_ccall f_534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:88: exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[58]))(3,*((C_word*)lf[58]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_236 in k221 in k218 in k215 in k212 in k209 in k206 in k203 in k200 */
static void C_ccall f_236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_236,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_240,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:42: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t2,lf[56]);}

/* k238 */
static void C_ccall f_240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_240,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_243,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:43: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t2,lf[55]);}

/* k241 in k238 */
static void C_ccall f_243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_243,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_246,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_524,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_528,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:44: current-seconds */
((C_proc2)C_fast_retrieve_symbol_proc(lf[54]))(2,*((C_word*)lf[54]+1),t4);}

/* k526 in k241 in k238 */
static void C_ccall f_528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:44: seconds->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[53]))(3,*((C_word*)lf[53]+1),((C_word*)t0)[2],t1);}

/* k522 in k241 in k238 */
static void C_ccall f_524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:44: print */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(5,*((C_word*)lf[11]+1),((C_word*)t0)[2],lf[51],t1,lf[52]);}

/* k244 in k241 in k238 */
static void C_ccall f_246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_246,2,t0,t1);}
t2=*((C_word*)lf[4]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_249,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(4,*((C_word*)lf[7]+1),t3,lf[50],t2);}

/* k247 in k244 in k241 in k238 */
static void C_ccall f_249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_249,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_252,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_520,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f827,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:39: current-user-id */
((C_proc2)C_fast_retrieve_symbol_proc(lf[2]))(2,*((C_word*)lf[2]+1),t4);}

/* f827 in k247 in k244 in k241 in k238 */
static void C_ccall f827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:39: user-information */
((C_proc3)C_fast_retrieve_symbol_proc(lf[1]))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],t1);}

/* k518 in k247 in k244 in k241 in k238 */
static void C_ccall f_520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[31]+1)))(4,*((C_word*)lf[31]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_252,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[30]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_255,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_258,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[30]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_258,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_261,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:46: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t2,lf[49]);}

/* k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_261,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_264,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_516,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:47: machine-type */
((C_proc2)C_fast_retrieve_symbol_proc(lf[48]))(2,*((C_word*)lf[48]+1),t3);}

/* k514 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:47: print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(4,*((C_word*)lf[11]+1),((C_word*)t0)[2],lf[47],t1);}

/* k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_267,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_512,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:48: software-type */
((C_proc2)C_fast_retrieve_symbol_proc(lf[46]))(2,*((C_word*)lf[46]+1),t3);}

/* k510 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:48: print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(4,*((C_word*)lf[11]+1),((C_word*)t0)[2],lf[45],t1);}

/* k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_267,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_270,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_508,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:49: software-version */
((C_proc2)C_fast_retrieve_symbol_proc(lf[44]))(2,*((C_word*)lf[44]+1),t3);}

/* k506 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:49: print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(4,*((C_word*)lf[11]+1),((C_word*)t0)[2],lf[43],t1);}

/* k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_270,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_273,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_504,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:50: build-platform */
((C_proc2)C_fast_retrieve_symbol_proc(lf[42]))(2,*((C_word*)lf[42]+1),t3);}

/* k502 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:50: print */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(5,*((C_word*)lf[11]+1),((C_word*)t0)[2],lf[40],t1,lf[41]);}

/* k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_276,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_500,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:51: chicken-version */
((C_proc3)C_fast_retrieve_symbol_proc(lf[39]))(3,*((C_word*)lf[39]+1),t3,C_SCHEME_TRUE);}

/* k498 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:51: print */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(5,*((C_word*)lf[11]+1),((C_word*)t0)[2],lf[37],t1,lf[38]);}

/* k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_276,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_279,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_496,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:52: chicken-home */
((C_proc2)C_fast_retrieve_symbol_proc(lf[36]))(2,*((C_word*)lf[36]+1),t3);}

/* k494 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:52: print */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(5,*((C_word*)lf[11]+1),((C_word*)t0)[2],lf[34],t1,lf[35]);}

/* k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_279,2,t0,t1);}
t2=*((C_word*)lf[4]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_282,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(4,*((C_word*)lf[7]+1),t3,lf[33],t2);}

/* k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_282,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_285,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[31]+1)))(4,*((C_word*)lf[31]+1),t2,C_fast_retrieve(lf[32]),((C_word*)t0)[2]);}

/* k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_285,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[30]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_288,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_291,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[30]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_294,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:54: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t2,lf[29]);}

/* k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_294(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_294,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_355,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_450,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fast_retrieve(lf[24]);
t9=C_fast_retrieve(lf[25]);
t10=C_i_check_list_2(t9,lf[26]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_457,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_459,a[2]=t8,a[3]=t5,a[4]=t13,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_459(t15,t11,t9);}

/* map-loop71 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_fcall f_459(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_459,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_488,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g7786 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k486 in map-loop71 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_488,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_459(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_459(t6,((C_word*)t0)[3],t5);}}

/* k455 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:62: sort */
((C_proc4)C_fast_retrieve_symbol_proc(lf[27]))(4,*((C_word*)lf[27]+1),((C_word*)t0)[2],t1,*((C_word*)lf[28]+1));}

/* k448 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:62: chop */
((C_proc4)C_fast_retrieve_symbol_proc(lf[23]))(4,*((C_word*)lf[23]+1),((C_word*)t0)[2],t1,C_fix(5));}

/* k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_355,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_361,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_425,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_425(t7,t3,t1);}

/* for-each-loop32 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_fcall f_425(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_425,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_435,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_299,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:57: display */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(3,*((C_word*)lf[7]+1),t5,lf[22]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k297 in for-each-loop32 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_299,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[3],lf[5]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_331,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_331(t6,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* for-each-loop44 in k297 in for-each-loop32 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_fcall f_331(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_331,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_341,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[4]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_304,a[2]=t4,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(4,*((C_word*)lf[7]+1),t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k302 in for-each-loop44 in k297 in for-each-loop32 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_311,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_string_length(((C_word*)t0)[2]);
t4=C_fixnum_difference(C_fix(16),t3);
t5=C_i_fixnum_max(C_fix(1),t4);
/* chicken-bug.scm:60: make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[21]+1)))(4,*((C_word*)lf[21]+1),t2,t5,C_make_character(32));}

/* k309 in k302 in for-each-loop44 in k297 in for-each-loop32 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(4,*((C_word*)lf[7]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k339 in for-each-loop44 in k297 in for-each-loop32 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_331(t3,((C_word*)t0)[2],t2);}

/* k433 in for-each-loop32 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_425(t3,((C_word*)t0)[2],t2);}

/* k359 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_364,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:63: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t2,lf[20]);}

/* k362 in k359 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_364,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_367,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_409,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_423,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME),C_fix(0));}

/* k421 in k362 in k359 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:64: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[18]))(4,*((C_word*)lf[18]+1),((C_word*)t0)[2],t1,lf[19]);}

/* k407 in k362 in k359 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_409,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_411,tmp=(C_word)a,a+=2,tmp);
/* chicken-bug.scm:64: with-input-from-file */
((C_proc4)C_fast_retrieve_symbol_proc(lf[17]))(4,*((C_word*)lf[17]+1),((C_word*)t0)[2],t1,t2);}

/* a410 in k407 in k362 in k359 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_411,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_419,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:66: read-all */
((C_proc2)C_fast_retrieve_symbol_proc(lf[8]))(2,*((C_word*)lf[8]+1),t2);}

/* k417 in a410 in k407 in k362 in k359 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:66: display */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(3,*((C_word*)lf[7]+1),((C_word*)t0)[2],t1);}

/* k365 in k362 in k359 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_370,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:67: newline */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(2,*((C_word*)lf[6]+1),t2);}

/* k368 in k365 in k362 in k359 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_373,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_379,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_405,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CC),C_fix(0));}

/* k403 in k368 in k365 in k362 in k359 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_string_equal_p(t1,lf[13]))){
/* chicken-bug.scm:68: feature? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),((C_word*)t0)[2],lf[15]);}
else{
t2=((C_word*)t0)[2];
f_379(2,t2,C_SCHEME_FALSE);}}

/* k377 in k368 in k365 in k362 in k359 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_379,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_382,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:69: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t2,lf[12]);}
else{
/* chicken-bug.scm:73: newline */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(2,*((C_word*)lf[6]+1),((C_word*)t0)[2]);}}

/* k380 in k377 in k368 in k365 in k362 in k359 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_382,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_387,tmp=(C_word)a,a+=2,tmp);
/* chicken-bug.scm:70: with-input-from-pipe */
((C_proc4)C_fast_retrieve_symbol_proc(lf[9]))(4,*((C_word*)lf[9]+1),((C_word*)t0)[2],lf[10],t2);}

/* a386 in k380 in k377 in k368 in k365 in k362 in k359 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_395,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:72: read-all */
((C_proc2)C_fast_retrieve_symbol_proc(lf[8]))(2,*((C_word*)lf[8]+1),t2);}

/* k393 in a386 in k380 in k377 in k368 in k365 in k362 in k359 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:72: display */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(3,*((C_word*)lf[7]+1),((C_word*)t0)[2],t1);}

/* k371 in k368 in k365 in k362 in k359 in k353 in k292 in k289 in k286 in k283 in k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in k256 in k253 in k250 in k247 in k244 in k241 in k238 */
static void C_ccall f_373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:73: newline */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(2,*((C_word*)lf[6]+1),((C_word*)t0)[2]);}

/* f_226 in k221 in k218 in k215 in k212 in k209 in k206 in k203 in k200 */
static void C_ccall f_226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_226,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_234,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:39: current-user-id */
((C_proc2)C_fast_retrieve_symbol_proc(lf[2]))(2,*((C_word*)lf[2]+1),t2);}

/* k232 */
static void C_ccall f_234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:39: user-information */
((C_proc3)C_fast_retrieve_symbol_proc(lf[1]))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[108] = {
{"toplevel:chicken_2dbug_2escm",(void*)C_toplevel},
{"f_202:chicken_2dbug_2escm",(void*)f_202},
{"f_205:chicken_2dbug_2escm",(void*)f_205},
{"f_208:chicken_2dbug_2escm",(void*)f_208},
{"f_211:chicken_2dbug_2escm",(void*)f_211},
{"f_214:chicken_2dbug_2escm",(void*)f_214},
{"f_217:chicken_2dbug_2escm",(void*)f_217},
{"f_220:chicken_2dbug_2escm",(void*)f_220},
{"f_223:chicken_2dbug_2escm",(void*)f_223},
{"f_776:chicken_2dbug_2escm",(void*)f_776},
{"f_766:chicken_2dbug_2escm",(void*)f_766},
{"f_772:chicken_2dbug_2escm",(void*)f_772},
{"f_769:chicken_2dbug_2escm",(void*)f_769},
{"f_750:chicken_2dbug_2escm",(void*)f_750},
{"f_759:chicken_2dbug_2escm",(void*)f_759},
{"f_754:chicken_2dbug_2escm",(void*)f_754},
{"f_605:chicken_2dbug_2escm",(void*)f_605},
{"f_727:chicken_2dbug_2escm",(void*)f_727},
{"f_737:chicken_2dbug_2escm",(void*)f_737},
{"f_654:chicken_2dbug_2escm",(void*)f_654},
{"f_725:chicken_2dbug_2escm",(void*)f_725},
{"f_721:chicken_2dbug_2escm",(void*)f_721},
{"f_657:chicken_2dbug_2escm",(void*)f_657},
{"f_660:chicken_2dbug_2escm",(void*)f_660},
{"f_717:chicken_2dbug_2escm",(void*)f_717},
{"f_663:chicken_2dbug_2escm",(void*)f_663},
{"f_709:chicken_2dbug_2escm",(void*)f_709},
{"f_713:chicken_2dbug_2escm",(void*)f_713},
{"f_688:chicken_2dbug_2escm",(void*)f_688},
{"f_694:chicken_2dbug_2escm",(void*)f_694},
{"f_698:chicken_2dbug_2escm",(void*)f_698},
{"f_692:chicken_2dbug_2escm",(void*)f_692},
{"f_678:chicken_2dbug_2escm",(void*)f_678},
{"f_607:chicken_2dbug_2escm",(void*)f_607},
{"f_648:chicken_2dbug_2escm",(void*)f_648},
{"f_644:chicken_2dbug_2escm",(void*)f_644},
{"f834:chicken_2dbug_2escm",(void*)f834},
{"f_623:chicken_2dbug_2escm",(void*)f_623},
{"f_619:chicken_2dbug_2escm",(void*)f_619},
{"f_586:chicken_2dbug_2escm",(void*)f_586},
{"f_590:chicken_2dbug_2escm",(void*)f_590},
{"f_539:chicken_2dbug_2escm",(void*)f_539},
{"f_584:chicken_2dbug_2escm",(void*)f_584},
{"f_577:chicken_2dbug_2escm",(void*)f_577},
{"f_543:chicken_2dbug_2escm",(void*)f_543},
{"f_548:chicken_2dbug_2escm",(void*)f_548},
{"f_552:chicken_2dbug_2escm",(void*)f_552},
{"f_530:chicken_2dbug_2escm",(void*)f_530},
{"f_534:chicken_2dbug_2escm",(void*)f_534},
{"f_236:chicken_2dbug_2escm",(void*)f_236},
{"f_240:chicken_2dbug_2escm",(void*)f_240},
{"f_243:chicken_2dbug_2escm",(void*)f_243},
{"f_528:chicken_2dbug_2escm",(void*)f_528},
{"f_524:chicken_2dbug_2escm",(void*)f_524},
{"f_246:chicken_2dbug_2escm",(void*)f_246},
{"f_249:chicken_2dbug_2escm",(void*)f_249},
{"f827:chicken_2dbug_2escm",(void*)f827},
{"f_520:chicken_2dbug_2escm",(void*)f_520},
{"f_252:chicken_2dbug_2escm",(void*)f_252},
{"f_255:chicken_2dbug_2escm",(void*)f_255},
{"f_258:chicken_2dbug_2escm",(void*)f_258},
{"f_261:chicken_2dbug_2escm",(void*)f_261},
{"f_516:chicken_2dbug_2escm",(void*)f_516},
{"f_264:chicken_2dbug_2escm",(void*)f_264},
{"f_512:chicken_2dbug_2escm",(void*)f_512},
{"f_267:chicken_2dbug_2escm",(void*)f_267},
{"f_508:chicken_2dbug_2escm",(void*)f_508},
{"f_270:chicken_2dbug_2escm",(void*)f_270},
{"f_504:chicken_2dbug_2escm",(void*)f_504},
{"f_273:chicken_2dbug_2escm",(void*)f_273},
{"f_500:chicken_2dbug_2escm",(void*)f_500},
{"f_276:chicken_2dbug_2escm",(void*)f_276},
{"f_496:chicken_2dbug_2escm",(void*)f_496},
{"f_279:chicken_2dbug_2escm",(void*)f_279},
{"f_282:chicken_2dbug_2escm",(void*)f_282},
{"f_285:chicken_2dbug_2escm",(void*)f_285},
{"f_288:chicken_2dbug_2escm",(void*)f_288},
{"f_291:chicken_2dbug_2escm",(void*)f_291},
{"f_294:chicken_2dbug_2escm",(void*)f_294},
{"f_459:chicken_2dbug_2escm",(void*)f_459},
{"f_488:chicken_2dbug_2escm",(void*)f_488},
{"f_457:chicken_2dbug_2escm",(void*)f_457},
{"f_450:chicken_2dbug_2escm",(void*)f_450},
{"f_355:chicken_2dbug_2escm",(void*)f_355},
{"f_425:chicken_2dbug_2escm",(void*)f_425},
{"f_299:chicken_2dbug_2escm",(void*)f_299},
{"f_331:chicken_2dbug_2escm",(void*)f_331},
{"f_304:chicken_2dbug_2escm",(void*)f_304},
{"f_311:chicken_2dbug_2escm",(void*)f_311},
{"f_341:chicken_2dbug_2escm",(void*)f_341},
{"f_435:chicken_2dbug_2escm",(void*)f_435},
{"f_361:chicken_2dbug_2escm",(void*)f_361},
{"f_364:chicken_2dbug_2escm",(void*)f_364},
{"f_423:chicken_2dbug_2escm",(void*)f_423},
{"f_409:chicken_2dbug_2escm",(void*)f_409},
{"f_411:chicken_2dbug_2escm",(void*)f_411},
{"f_419:chicken_2dbug_2escm",(void*)f_419},
{"f_367:chicken_2dbug_2escm",(void*)f_367},
{"f_370:chicken_2dbug_2escm",(void*)f_370},
{"f_405:chicken_2dbug_2escm",(void*)f_405},
{"f_379:chicken_2dbug_2escm",(void*)f_379},
{"f_382:chicken_2dbug_2escm",(void*)f_382},
{"f_387:chicken_2dbug_2escm",(void*)f_387},
{"f_395:chicken_2dbug_2escm",(void*)f_395},
{"f_373:chicken_2dbug_2escm",(void*)f_373},
{"f_226:chicken_2dbug_2escm",(void*)f_226},
{"f_234:chicken_2dbug_2escm",(void*)f_234},
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
