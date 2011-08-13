/* Generated from chicken-uninstall.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: chicken-uninstall.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -no-lambda-info -local -no-trace -output-file chicken-uninstall.c
   used units: library eval srfi_2d1 posix data_2dstructures utils ports irregex srfi_2d13 files
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[78];
static double C_possibly_force_alignment;


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_505)
static void C_ccall f_505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_508)
static void C_ccall f_508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_511)
static void C_ccall f_511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_514)
static void C_ccall f_514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_517)
static void C_ccall f_517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_520)
static void C_ccall f_520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_523)
static void C_ccall f_523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_526)
static void C_ccall f_526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_529)
static void C_ccall f_529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_532)
static void C_ccall f_532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_535)
static void C_ccall f_535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_539)
static void C_ccall f_539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1286)
static void C_ccall f_1286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_941)
static void C_fcall f_941(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1037)
static void C_fcall f_1037(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1140)
static void C_fcall f_1140(C_word t0,C_word t1) C_noret;
C_noret_decl(f1371)
static void C_ccall f1371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1226)
static void C_ccall f_1226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1218)
static void C_ccall f_1218(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1155)
static void C_ccall f_1155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1366)
static void C_ccall f1366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1180)
static void C_fcall f_1180(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1209)
static void C_ccall f_1209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1174)
static void C_ccall f_1174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1162)
static void C_ccall f_1162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1052)
static void C_ccall f_1052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1359)
static void C_ccall f1359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1354)
static void C_ccall f1354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_986)
static void C_fcall f_986(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1015)
static void C_ccall f_1015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_984)
static void C_ccall f_984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_960)
static void C_fcall f_960(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_975)
static void C_ccall f_975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_971)
static void C_ccall f_971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_958)
static void C_ccall f_958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_698)
static void C_ccall f_698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_694)
static void C_ccall f_694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_595)
static void C_ccall f_595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_657)
static void C_fcall f_657(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_686)
static void C_ccall f_686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_601)
static void C_ccall f_601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_622)
static void C_fcall f_622(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_651)
static void C_ccall f_651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_620)
static void C_ccall f_620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_610)
static void C_fcall f_610(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_585)
static void C_ccall f_585(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_608)
static void C_ccall f_608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_832)
static void C_ccall f_832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_718)
static void C_ccall f_718(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_745)
static void C_ccall f_745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_816)
static void C_ccall f_816(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_816)
static void C_ccall f_816r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_822)
static void C_ccall f_822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_751)
static void C_ccall f_751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_781)
static void C_fcall f_781(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_810)
static void C_ccall f_810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_779)
static void C_ccall f_779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_767)
static void C_ccall f_767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_759)
static void C_ccall f_759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_763)
static void C_ccall f_763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_724)
static void C_ccall f_724(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_730)
static void C_ccall f_730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_704)
static void C_ccall f_704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_713)
static void C_ccall f_713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_847)
static void C_ccall f_847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_899)
static void C_fcall f_899(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_852)
static void C_ccall f_852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_891)
static void C_ccall f_891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_861)
static void C_ccall f_861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_881)
static void C_ccall f_881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_871)
static void C_ccall f_871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_879)
static void C_ccall f_879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_866)
static void C_ccall f_866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_909)
static void C_ccall f_909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1276)
static void C_ccall f_1276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1282)
static void C_ccall f_1282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1279)
static void C_ccall f_1279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_543)
static void C_fcall f_543(C_word t0) C_noret;
C_noret_decl(f_557)
static void C_ccall f_557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_561)
static void C_ccall f_561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_564)
static void C_ccall f_564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_567)
static void C_ccall f_567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_570)
static void C_ccall f_570(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_941)
static void C_fcall trf_941(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_941(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_941(t0,t1,t2,t3);}

C_noret_decl(trf_1037)
static void C_fcall trf_1037(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1037(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1037(t0,t1);}

C_noret_decl(trf_1140)
static void C_fcall trf_1140(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1140(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1140(t0,t1);}

C_noret_decl(trf_1180)
static void C_fcall trf_1180(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1180(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1180(t0,t1,t2);}

C_noret_decl(trf_986)
static void C_fcall trf_986(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_986(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_986(t0,t1,t2);}

C_noret_decl(trf_960)
static void C_fcall trf_960(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_960(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_960(t0,t1,t2);}

C_noret_decl(trf_657)
static void C_fcall trf_657(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_657(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_657(t0,t1,t2);}

C_noret_decl(trf_622)
static void C_fcall trf_622(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_622(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_622(t0,t1,t2);}

C_noret_decl(trf_610)
static void C_fcall trf_610(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_610(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_610(t0,t1,t2);}

C_noret_decl(trf_781)
static void C_fcall trf_781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_781(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_781(t0,t1,t2);}

C_noret_decl(trf_899)
static void C_fcall trf_899(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_899(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_899(t0,t1,t2);}

C_noret_decl(trf_543)
static void C_fcall trf_543(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_543(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_543(t0);}

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
if(!C_demand_2(482)){
C_save(t1);
C_rereclaim2(482*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,78);
lf[4]=C_h_intern(&lf[4],13,"make-pathname");
lf[5]=C_h_intern(&lf[5],17,"get-output-string");
lf[6]=C_h_intern(&lf[6],7,"display");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000\010chicken/");
lf[8]=C_h_intern(&lf[8],18,"open-output-string");
lf[9]=C_h_intern(&lf[9],17,"\003syspeek-c-string");
lf[10]=C_h_intern(&lf[10],15,"repository-path");
lf[12]=C_h_intern(&lf[12],25,"\003sysimplicit-exit-handler");
lf[13]=C_h_intern(&lf[13],5,"print");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\022nothing to remove.");
lf[15]=C_h_intern(&lf[15],8,"for-each");
lf[16]=C_h_intern(&lf[16],26,"setup-api#remove-extension");
lf[17]=C_h_intern(&lf[17],16,"\003sysdynamic-wind");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\011removing ");
lf[19]=C_h_intern(&lf[19],7,"aborted");
lf[20]=C_h_intern(&lf[20],4,"exit");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\010aborted.");
lf[22]=C_h_intern(&lf[22],6,"signal");
lf[23]=C_h_intern(&lf[23],10,"yes-or-no\077");
lf[24]=C_h_intern(&lf[24],8,"\000default");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[26]=C_h_intern(&lf[26],6,"\000abort");
lf[27]=C_h_intern(&lf[27],21,"setup-api#abort-setup");
lf[28]=C_h_intern(&lf[28],18,"string-concatenate");
lf[29]=C_h_intern(&lf[29],3,"map");
lf[30]=C_h_intern(&lf[30],6,"append");
lf[31]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000+About to delete the following extensions:\012\012\376\377\016");
lf[32]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\030\012Do you want to proceed\077\376\377\016");
lf[33]=C_h_intern(&lf[33],13,"string-append");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[36]=C_h_intern(&lf[36],22,"with-exception-handler");
lf[37]=C_h_intern(&lf[37],30,"call-with-current-continuation");
lf[38]=C_h_intern(&lf[38],13,"pathname-file");
lf[39]=C_h_intern(&lf[39],17,"delete-duplicates");
lf[40]=C_h_intern(&lf[40],8,"string=\077");
lf[41]=C_h_intern(&lf[41],14,"irregex-search");
lf[42]=C_h_intern(&lf[42],6,"filter");
lf[43]=C_h_intern(&lf[43],11,"concatenate");
lf[44]=C_h_intern(&lf[44],4,"glob");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[47]=C_h_intern(&lf[47],7,"irregex");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\001^");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\001$");
lf[50]=C_h_intern(&lf[50],13,"irregex-quote");
lf[51]=C_h_intern(&lf[51],16,"\003sysglob->regexp");
lf[52]=C_h_intern(&lf[52],7,"reverse");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\002\034usage: chicken-uninstall [OPTION | PATTERN] ...\012\012  -h   -help              "
"      show this message and exit\012  -v   -version                 show version an"
"d exit\012       -force                   don\047t ask, delete whatever matches\012      "
" -exact                   treat PATTERN as exact match (not a pattern)\012  -s   -s"
"udo                    use sudo(1) for deleting files\012       -host              "
"      when cross-compiling, uninstall host extensions only\012       -target       "
"           when cross-compiling, uninstall target extensions only");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\002-v");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[57]=C_h_intern(&lf[57],15,"chicken-version");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\007-target");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\006-force");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\006-exact");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\005-sudo");
lf[64]=C_h_intern(&lf[64],22,"setup-api#sudo-install");
lf[65]=C_h_intern(&lf[65],6,"string");
lf[66]=C_h_intern(&lf[66],4,"memq");
lf[67]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000s\376\377\016");
lf[68]=C_h_intern(&lf[68],5,"every");
lf[69]=C_h_intern(&lf[69],16,"\003sysstring->list");
lf[70]=C_h_intern(&lf[70],9,"substring");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[73]=C_h_intern(&lf[73],22,"command-line-arguments");
lf[74]=C_h_intern(&lf[74],8,"feature\077");
lf[75]=C_h_intern(&lf[75],14,"\000cross-chicken");
lf[76]=C_h_intern(&lf[76],11,"\003sysrequire");
lf[77]=C_h_intern(&lf[77],9,"setup-api");
C_register_lf2(lf,78,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_505,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k503 */
static void C_ccall f_505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_508,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k506 in k503 */
static void C_ccall f_508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_511,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k509 in k506 in k503 */
static void C_ccall f_511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_511,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_514,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k512 in k509 in k506 in k503 */
static void C_ccall f_514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_517,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_517,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_520,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_520,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_523,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_523,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_526,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_526,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_529,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_529,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_532,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_535,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#require */
((C_proc3)C_fast_retrieve_symbol_proc(lf[76]))(3,*((C_word*)lf[76]+1),t2,lf[77]);}

/* k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_535,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_539,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* feature? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[74]))(3,*((C_word*)lf[74]+1),t2,lf[75]);}

/* k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_539,2,t0,t1);}
t2=C_mutate(&lf[0] /* (set! main#*cross-chicken* ...) */,t1);
t3=C_mutate(&lf[1] /* (set! main#*host-extensions* ...) */,C_retrieve2(lf[0],"main#*cross-chicken*"));
t4=C_mutate(&lf[2] /* (set! main#*target-extensions* ...) */,C_retrieve2(lf[0],"main#*cross-chicken*"));
t5=C_mutate(&lf[3] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_543,tmp=(C_word)a,a+=2,tmp));
t6=lf[11] /* main#*force* */ =C_SCHEME_FALSE;;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1276,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1286,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* command-line-arguments */
((C_proc2)C_fast_retrieve_symbol_proc(lf[73]))(2,*((C_word*)lf[73]+1),t8);}

/* k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_1286(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1286,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_941,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_941(t7,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_fcall f_941(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_941,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_951,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1354,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t5,lf[53]);}
else{
t5=t4;
f_951(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=C_i_car(t2);
t5=C_i_string_equal_p(t4,lf[54]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1037,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=t4,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t7=t6;
f_1037(t7,t5);}
else{
t7=C_i_string_equal_p(t4,lf[71]);
t8=t6;
f_1037(t8,(C_truep(t7)?t7:C_i_string_equal_p(t4,lf[72])));}}}

/* k1035 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_fcall f_1037(C_word t0,C_word t1){
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1037,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1359,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t3,lf[53]);}
else{
t2=C_i_string_equal_p(((C_word*)t0)[6],lf[55]);
t3=(C_truep(t2)?t2:C_i_string_equal_p(((C_word*)t0)[6],lf[56]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1052,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1059,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-version */
((C_proc2)C_fast_retrieve_symbol_proc(lf[57]))(2,*((C_word*)lf[57]+1),t5);}
else{
if(C_truep(C_i_string_equal_p(((C_word*)t0)[6],lf[58]))){
t4=lf[1] /* main#*host-extensions* */ =C_SCHEME_FALSE;;
t5=C_i_cdr(((C_word*)t0)[5]);
/* loop373 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_941(t6,((C_word*)t0)[7],t5,((C_word*)t0)[3]);}
else{
if(C_truep(C_i_string_equal_p(((C_word*)t0)[6],lf[59]))){
t4=lf[2] /* main#*target-extensions* */ =C_SCHEME_FALSE;;
t5=C_i_cdr(((C_word*)t0)[5]);
/* loop373 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_941(t6,((C_word*)t0)[7],t5,((C_word*)t0)[3]);}
else{
if(C_truep(C_i_string_equal_p(((C_word*)t0)[6],lf[60]))){
t4=lf[11] /* main#*force* */ =C_SCHEME_TRUE;;
t5=C_i_cdr(((C_word*)t0)[5]);
/* loop373 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_941(t6,((C_word*)t0)[7],t5,((C_word*)t0)[3]);}
else{
if(C_truep(C_i_string_equal_p(((C_word*)t0)[6],lf[61]))){
t4=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t5=C_i_cdr(((C_word*)t0)[5]);
/* loop373 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_941(t6,((C_word*)t0)[7],t5,((C_word*)t0)[3]);}
else{
t4=C_i_string_equal_p(((C_word*)t0)[6],lf[62]);
t5=(C_truep(t4)?t4:C_i_string_equal_p(((C_word*)t0)[6],lf[63]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1127,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* setup-api#sudo-install */
((C_proc3)C_fast_retrieve_symbol_proc(lf[64]))(3,*((C_word*)lf[64]+1),t6,C_SCHEME_TRUE);}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1140,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t7=C_i_string_length(((C_word*)t0)[6]);
if(C_truep(C_i_positivep(t7))){
t8=C_i_string_ref(((C_word*)t0)[6],C_fix(0));
t9=t6;
f_1140(t9,C_i_char_equalp(C_make_character(45),t8));}
else{
t8=t6;
f_1140(t8,C_SCHEME_FALSE);}}}}}}}}}

/* k1138 in k1035 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_fcall f_1140(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1140,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_string_length(((C_word*)t0)[6]);
if(C_truep(C_i_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1226,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* substring */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t4,((C_word*)t0)[6],C_fix(1));}
else{
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1371,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t4,lf[53]);}}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[3]);
/* loop373 */
t4=((C_word*)((C_word*)t0)[5])[1];
f_941(t4,((C_word*)t0)[4],t2,t3);}}

/* f1371 in k1138 in k1035 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f1371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[20]))(3,*((C_word*)lf[20]+1),((C_word*)t0)[2],C_fix(1));}

/* k1224 in k1138 in k1035 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_1226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=C_fast_retrieve(lf[69]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1147 in k1138 in k1035 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_1149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1149,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1155,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1218,tmp=(C_word)a,a+=2,tmp);
/* every */
((C_proc4)C_fast_retrieve_symbol_proc(lf[68]))(4,*((C_word*)lf[68]+1),t2,t3,t1);}

/* a1217 in k1147 in k1138 in k1035 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_1218(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1218,3,t0,t1,t2);}
t3=*((C_word*)lf[66]+1);
/* g437438 */
t4=t3;
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,t2,lf[67]);}

/* k1153 in k1147 in k1138 in k1035 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_1155(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1155,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1162,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[29]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1174,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1180,a[2]=t4,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1180(t12,t8,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[5];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1366,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t3,lf[53]);}}

/* f1366 in k1153 in k1147 in k1138 in k1035 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f1366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[20]))(3,*((C_word*)lf[20]+1),((C_word*)t0)[2],C_fix(1));}

/* map-loop441 in k1153 in k1147 in k1138 in k1035 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_fcall f_1180(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1180,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1209,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[65]+1);
/* g464465 */
t6=t5;
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t3,C_make_character(45),t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1207 in map-loop441 in k1153 in k1147 in k1138 in k1035 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_1209(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1209,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1180(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1180(t6,((C_word*)t0)[3],t5);}}

/* k1172 in k1153 in k1147 in k1138 in k1035 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_1174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[3]);
/* append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[30]+1)))(4,*((C_word*)lf[30]+1),((C_word*)t0)[2],t1,t2);}

/* k1160 in k1153 in k1147 in k1138 in k1035 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_1162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* loop373 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_941(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1125 in k1035 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_1127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[5]);
/* loop373 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_941(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k1057 in k1035 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_1059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),((C_word*)t0)[2],t1);}

/* k1050 in k1035 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_1052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[20]))(3,*((C_word*)lf[20]+1),((C_word*)t0)[2],C_fix(0));}

/* f1359 in k1035 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f1359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[20]))(3,*((C_word*)lf[20]+1),((C_word*)t0)[2],C_fix(0));}

/* f1354 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f1354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[20]))(3,*((C_word*)lf[20]+1),((C_word*)t0)[2],C_fix(1));}

/* k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_951(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_958,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_960,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t8=((C_word*)t0)[2];
t9=C_i_check_list_2(t8,lf[29]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_984,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_986,a[2]=t7,a[3]=t4,a[4]=t12,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_986(t14,t10,t8);}

/* map-loop381 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_fcall f_986(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_986,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1015,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g387396 */
t5=((C_word*)t0)[2];
f_960(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1013 in map-loop381 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_1015(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1015,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_986(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_986(t6,((C_word*)t0)[3],t5);}}

/* k982 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[52]+1)))(3,*((C_word*)lf[52]+1),((C_word*)t0)[2],t1);}

/* g387 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_fcall f_960(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_960,NULL,3,t0,t1,t2);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_971,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_975,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* irregex-quote */
((C_proc3)C_fast_retrieve_symbol_proc(lf[50]))(3,*((C_word*)lf[50]+1),t4,t2);}
else{
/* ##sys#glob->regexp */
((C_proc3)C_fast_retrieve_symbol_proc(lf[51]))(3,*((C_word*)lf[51]+1),t1,t2);}}

/* k973 in g387 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(5,*((C_word*)lf[33]+1),((C_word*)t0)[2],lf[48],t1,lf[49]);}

/* k969 in g387 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* irregex */
((C_proc3)C_fast_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),((C_word*)t0)[2],t1);}

/* k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_958(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_958,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_832,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fast_retrieve(lf[38]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_595,a[2]=t8,a[3]=t5,a[4]=t7,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_694,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_698,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* main#repo-path */
f_543(t11);}

/* k696 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* make-pathname */
((C_proc5)C_fast_retrieve_symbol_proc(lf[4]))(5,*((C_word*)lf[4]+1),((C_word*)t0)[2],t1,lf[45],lf[46]);}

/* k692 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* glob */
((C_proc3)C_fast_retrieve_symbol_proc(lf[44]))(3,*((C_word*)lf[44]+1),((C_word*)t0)[2],t1);}

/* k593 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_595,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[29]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_601,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_657(t7,t3,t1);}

/* map-loop218 in k593 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_fcall f_657(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_657,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_686,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g224233 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k684 in map-loop218 in k593 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_686(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_686,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_657(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_657(t6,((C_word*)t0)[3],t5);}}

/* k599 in k593 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_601(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_601,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_608,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_610,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[29]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_620,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_622,a[2]=t7,a[3]=t4,a[4]=t11,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_622(t13,t9,((C_word*)t0)[2]);}

/* map-loop244 in k599 in k593 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_fcall f_622(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_622,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_651,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g250259 */
t5=((C_word*)t0)[2];
f_610(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k649 in map-loop244 in k599 in k593 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_651(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_651,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_622(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_622(t6,((C_word*)t0)[3],t5);}}

/* k618 in k599 in k593 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* concatenate */
((C_proc3)C_fast_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),((C_word*)t0)[2],t1);}

/* g250 in k599 in k593 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_fcall f_610(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_610,NULL,3,t0,t1,t2);}
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_585,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* filter */
((C_proc4)C_fast_retrieve_symbol_proc(lf[42]))(4,*((C_word*)lf[42]+1),t1,t4,t3);}

/* a584 in g250 in k599 in k593 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_585(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_585,3,t0,t1,t2);}
t3=C_fast_retrieve(lf[41]);
/* g211212 */
t4=t3;
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,((C_word*)t0)[2],t2);}

/* k606 in k599 in k593 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* delete-duplicates */
((C_proc4)C_fast_retrieve_symbol_proc(lf[39]))(4,*((C_word*)lf[39]+1),((C_word*)t0)[2],t1,*((C_word*)lf[40]+1));}

/* k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_832,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),((C_word*)t0)[2],lf[14]);}
else{
t2=C_retrieve2(lf[11],"main#*force*");
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_847,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_847(2,t4,t2);}
else{
t4=t1;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_713,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_718,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* call-with-current-continuation */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[37]+1)))(3,*((C_word*)lf[37]+1),t5,t6);}}}

/* a717 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_718(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_718,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_724,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_745,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* with-exception-handler */
((C_proc4)C_fast_retrieve_symbol_proc(lf[36]))(4,*((C_word*)lf[36]+1),t1,t3,t4);}

/* a744 in a717 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_745,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_751,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_816,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a815 in a744 in a717 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_816(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_816r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_816r(t0,t1,t2);}}

static void C_ccall f_816r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_822,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* k281287 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a821 in a815 in a744 in a717 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_822,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a750 in a744 in a717 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_751(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_751,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_759,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_767,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[29]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_779,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_781,a[2]=t5,a[3]=t11,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_781(t13,t9,((C_word*)t0)[2]);}

/* map-loop291 in a750 in a744 in a717 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_fcall f_781(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_781,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_810,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[33]+1);
/* g314315 */
t6=t5;
((C_proc5)C_fast_retrieve_proc(t6))(5,t6,t3,lf[34],t4,lf[35]);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k808 in map-loop291 in a750 in a744 in a717 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_810(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_810,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_781(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_781(t6,((C_word*)t0)[3],t5);}}

/* k777 in a750 in a744 in a717 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[30]+1)))(5,*((C_word*)lf[30]+1),((C_word*)t0)[2],lf[31],t1,lf[32]);}

/* k765 in a750 in a744 in a717 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string-concatenate */
((C_proc3)C_fast_retrieve_symbol_proc(lf[28]))(3,*((C_word*)lf[28]+1),((C_word*)t0)[2],t1);}

/* k757 in a750 in a744 in a717 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_763,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* setup-api#abort-setup */
((C_proc2)C_fast_retrieve_symbol_proc(lf[27]))(2,*((C_word*)lf[27]+1),t2);}

/* k761 in k757 in a750 in a744 in a717 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* yes-or-no? */
((C_proc7)C_fast_retrieve_symbol_proc(lf[23]))(7,*((C_word*)lf[23]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[24],lf[25],lf[26],t1);}

/* a723 in a717 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_724(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_724,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_730,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* k281287 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a729 in a723 in a717 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_730,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],lf[19]);
if(C_truep(t2)){
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_704,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t4,lf[21]);}
else{
/* signal */
((C_proc3)C_fast_retrieve_symbol_proc(lf[22]))(3,*((C_word*)lf[22]+1),t1,((C_word*)t0)[2]);}}

/* k702 in a729 in a723 in a717 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[20]))(3,*((C_word*)lf[20]+1),((C_word*)t0)[2],C_fix(1));}

/* k711 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g285286 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k845 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_847,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_check_list_2(((C_word*)t0)[3],lf[15]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_899,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_899(t6,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* for-each-loop335 in k845 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_fcall f_899(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_899,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_909,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_852,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(4,*((C_word*)lf[13]+1),t5,lf[18],t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k850 in for-each-loop335 in k845 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_852,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[1],"main#*host-extensions*"))?C_retrieve2(lf[2],"main#*target-extensions*"):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_861,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* setup-api#remove-extension */
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t3,((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_891,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* main#repo-path */
f_543(t3);}}

/* k889 in k850 in for-each-loop335 in k845 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api#remove-extension */
((C_proc4)C_fast_retrieve_symbol_proc(lf[16]))(4,*((C_word*)lf[16]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k859 in k850 in for-each-loop335 in k845 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_861,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_866,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_871,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_881,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a880 in k859 in k850 in for-each-loop335 in k845 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_881,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[1],"main#*host-extensions*"));
t3=C_mutate(&lf[1] /* (set! main#*host-extensions* ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a870 in k859 in k850 in for-each-loop335 in k845 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_871,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_879,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* main#repo-path */
f_543(t2);}

/* k877 in a870 in k859 in k850 in for-each-loop335 in k845 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api#remove-extension */
((C_proc4)C_fast_retrieve_symbol_proc(lf[16]))(4,*((C_word*)lf[16]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a865 in k859 in k850 in for-each-loop335 in k845 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_866,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[1],"main#*host-extensions*"));
t3=C_mutate(&lf[1] /* (set! main#*host-extensions* ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k907 in for-each-loop335 in k845 in k830 in k956 in k949 in loop in k1284 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_899(t3,((C_word*)t0)[2],t2);}

/* k1274 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_1276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1276,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1279,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1282,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[12]))(2,*((C_word*)lf[12]+1),t3);}

/* k1280 in k1274 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_1282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1277 in k1274 in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_1279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* main#repo-path in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_fcall f_543(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_543,NULL,1,t1);}
t2=(C_truep(C_retrieve2(lf[0],"main#*cross-chicken*"))?C_i_not(C_retrieve2(lf[1],"main#*host-extensions*")):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_557,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}
else{
/* repository-path */
((C_proc2)C_fast_retrieve_symbol_proc(lf[10]))(2,*((C_word*)lf[10]+1),t1);}}

/* k555 in main#repo-path in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_561,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
((C_proc2)C_fast_retrieve_symbol_proc(lf[8]))(2,*((C_word*)lf[8]+1),t2);}

/* k559 in k555 in main#repo-path in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_561,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_564,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t2,lf[7],t1);}

/* k562 in k559 in k555 in main#repo-path in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_564,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_567,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t2,C_fix((C_word)C_BINARY_VERSION),((C_word*)t0)[2]);}

/* k565 in k562 in k559 in k555 in main#repo-path in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_570,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* get-output-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[5]))(3,*((C_word*)lf[5]+1),t2,((C_word*)t0)[2]);}

/* k568 in k565 in k562 in k559 in k555 in main#repo-path in k537 in k533 in k530 in k527 in k524 in k521 in k518 in k515 in k512 in k509 in k506 in k503 */
static void C_ccall f_570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[4]))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[88] = {
{"toplevel:chicken_2duninstall_2escm",(void*)C_toplevel},
{"f_505:chicken_2duninstall_2escm",(void*)f_505},
{"f_508:chicken_2duninstall_2escm",(void*)f_508},
{"f_511:chicken_2duninstall_2escm",(void*)f_511},
{"f_514:chicken_2duninstall_2escm",(void*)f_514},
{"f_517:chicken_2duninstall_2escm",(void*)f_517},
{"f_520:chicken_2duninstall_2escm",(void*)f_520},
{"f_523:chicken_2duninstall_2escm",(void*)f_523},
{"f_526:chicken_2duninstall_2escm",(void*)f_526},
{"f_529:chicken_2duninstall_2escm",(void*)f_529},
{"f_532:chicken_2duninstall_2escm",(void*)f_532},
{"f_535:chicken_2duninstall_2escm",(void*)f_535},
{"f_539:chicken_2duninstall_2escm",(void*)f_539},
{"f_1286:chicken_2duninstall_2escm",(void*)f_1286},
{"f_941:chicken_2duninstall_2escm",(void*)f_941},
{"f_1037:chicken_2duninstall_2escm",(void*)f_1037},
{"f_1140:chicken_2duninstall_2escm",(void*)f_1140},
{"f1371:chicken_2duninstall_2escm",(void*)f1371},
{"f_1226:chicken_2duninstall_2escm",(void*)f_1226},
{"f_1149:chicken_2duninstall_2escm",(void*)f_1149},
{"f_1218:chicken_2duninstall_2escm",(void*)f_1218},
{"f_1155:chicken_2duninstall_2escm",(void*)f_1155},
{"f1366:chicken_2duninstall_2escm",(void*)f1366},
{"f_1180:chicken_2duninstall_2escm",(void*)f_1180},
{"f_1209:chicken_2duninstall_2escm",(void*)f_1209},
{"f_1174:chicken_2duninstall_2escm",(void*)f_1174},
{"f_1162:chicken_2duninstall_2escm",(void*)f_1162},
{"f_1127:chicken_2duninstall_2escm",(void*)f_1127},
{"f_1059:chicken_2duninstall_2escm",(void*)f_1059},
{"f_1052:chicken_2duninstall_2escm",(void*)f_1052},
{"f1359:chicken_2duninstall_2escm",(void*)f1359},
{"f1354:chicken_2duninstall_2escm",(void*)f1354},
{"f_951:chicken_2duninstall_2escm",(void*)f_951},
{"f_986:chicken_2duninstall_2escm",(void*)f_986},
{"f_1015:chicken_2duninstall_2escm",(void*)f_1015},
{"f_984:chicken_2duninstall_2escm",(void*)f_984},
{"f_960:chicken_2duninstall_2escm",(void*)f_960},
{"f_975:chicken_2duninstall_2escm",(void*)f_975},
{"f_971:chicken_2duninstall_2escm",(void*)f_971},
{"f_958:chicken_2duninstall_2escm",(void*)f_958},
{"f_698:chicken_2duninstall_2escm",(void*)f_698},
{"f_694:chicken_2duninstall_2escm",(void*)f_694},
{"f_595:chicken_2duninstall_2escm",(void*)f_595},
{"f_657:chicken_2duninstall_2escm",(void*)f_657},
{"f_686:chicken_2duninstall_2escm",(void*)f_686},
{"f_601:chicken_2duninstall_2escm",(void*)f_601},
{"f_622:chicken_2duninstall_2escm",(void*)f_622},
{"f_651:chicken_2duninstall_2escm",(void*)f_651},
{"f_620:chicken_2duninstall_2escm",(void*)f_620},
{"f_610:chicken_2duninstall_2escm",(void*)f_610},
{"f_585:chicken_2duninstall_2escm",(void*)f_585},
{"f_608:chicken_2duninstall_2escm",(void*)f_608},
{"f_832:chicken_2duninstall_2escm",(void*)f_832},
{"f_718:chicken_2duninstall_2escm",(void*)f_718},
{"f_745:chicken_2duninstall_2escm",(void*)f_745},
{"f_816:chicken_2duninstall_2escm",(void*)f_816},
{"f_822:chicken_2duninstall_2escm",(void*)f_822},
{"f_751:chicken_2duninstall_2escm",(void*)f_751},
{"f_781:chicken_2duninstall_2escm",(void*)f_781},
{"f_810:chicken_2duninstall_2escm",(void*)f_810},
{"f_779:chicken_2duninstall_2escm",(void*)f_779},
{"f_767:chicken_2duninstall_2escm",(void*)f_767},
{"f_759:chicken_2duninstall_2escm",(void*)f_759},
{"f_763:chicken_2duninstall_2escm",(void*)f_763},
{"f_724:chicken_2duninstall_2escm",(void*)f_724},
{"f_730:chicken_2duninstall_2escm",(void*)f_730},
{"f_704:chicken_2duninstall_2escm",(void*)f_704},
{"f_713:chicken_2duninstall_2escm",(void*)f_713},
{"f_847:chicken_2duninstall_2escm",(void*)f_847},
{"f_899:chicken_2duninstall_2escm",(void*)f_899},
{"f_852:chicken_2duninstall_2escm",(void*)f_852},
{"f_891:chicken_2duninstall_2escm",(void*)f_891},
{"f_861:chicken_2duninstall_2escm",(void*)f_861},
{"f_881:chicken_2duninstall_2escm",(void*)f_881},
{"f_871:chicken_2duninstall_2escm",(void*)f_871},
{"f_879:chicken_2duninstall_2escm",(void*)f_879},
{"f_866:chicken_2duninstall_2escm",(void*)f_866},
{"f_909:chicken_2duninstall_2escm",(void*)f_909},
{"f_1276:chicken_2duninstall_2escm",(void*)f_1276},
{"f_1282:chicken_2duninstall_2escm",(void*)f_1282},
{"f_1279:chicken_2duninstall_2escm",(void*)f_1279},
{"f_543:chicken_2duninstall_2escm",(void*)f_543},
{"f_557:chicken_2duninstall_2escm",(void*)f_557},
{"f_561:chicken_2duninstall_2escm",(void*)f_561},
{"f_564:chicken_2duninstall_2escm",(void*)f_564},
{"f_567:chicken_2duninstall_2escm",(void*)f_567},
{"f_570:chicken_2duninstall_2escm",(void*)f_570},
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
