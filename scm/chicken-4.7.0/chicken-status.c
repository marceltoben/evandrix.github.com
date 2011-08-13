/* Generated from chicken-status.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:18
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: chicken-status.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -no-lambda-info -local -no-trace -output-file chicken-status.c
   used units: library eval srfi_2d1 posix data_2dstructures utils ports irregex files
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
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[78];
static double C_possibly_force_alignment;


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_527)
static void C_ccall f_527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_530)
static void C_ccall f_530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_533)
static void C_ccall f_533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_536)
static void C_ccall f_536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_539)
static void C_ccall f_539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_542)
static void C_ccall f_542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_545)
static void C_ccall f_545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_548)
static void C_ccall f_548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_551)
static void C_ccall f_551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_554)
static void C_ccall f_554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_558)
static void C_ccall f_558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1409)
static void C_ccall f_1409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_992)
static void C_fcall f_992(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1176)
static void C_fcall f_1176(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1263)
static void C_fcall f_1263(C_word t0,C_word t1) C_noret;
C_noret_decl(f1513)
static void C_ccall f1513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1349)
static void C_ccall f_1349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1341)
static void C_ccall f_1341(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1278)
static void C_ccall f_1278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1508)
static void C_ccall f1508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1303)
static void C_fcall f_1303(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1332)
static void C_ccall f_1332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1297)
static void C_ccall f_1297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1285)
static void C_ccall f_1285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1257)
static void C_ccall f_1257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1501)
static void C_ccall f1501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1161)
static void C_ccall f_1161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1128)
static void C_ccall f_1128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1131)
static void C_ccall f_1131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1154)
static void C_ccall f_1154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1141)
static void C_ccall f_1141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1152)
static void C_ccall f_1152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1145)
static void C_ccall f_1145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1136)
static void C_ccall f_1136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1000)
static void C_fcall f_1000(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1086)
static void C_fcall f_1086(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1078)
static void C_ccall f_1078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1115)
static void C_ccall f_1115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1004)
static void C_ccall f_1004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1030)
static void C_fcall f_1030(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_716)
static void C_ccall f_716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_712)
static void C_ccall f_712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_613)
static void C_ccall f_613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_675)
static void C_fcall f_675(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_704)
static void C_ccall f_704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_619)
static void C_ccall f_619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_640)
static void C_fcall f_640(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_669)
static void C_ccall f_669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_638)
static void C_ccall f_638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_628)
static void C_fcall f_628(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_603)
static void C_ccall f_603(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_626)
static void C_ccall f_626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_793)
static void C_ccall f_793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_799)
static void C_ccall f_799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_819)
static void C_ccall f_819(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_819)
static void C_ccall f_819r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_813)
static void C_ccall f_813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_802)
static void C_ccall f_802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_915)
static void C_ccall f_915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_829)
static void C_ccall f_829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_878)
static void C_ccall f_878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_886)
static void C_fcall f_886(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_896)
static void C_ccall f_896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_830)
static void C_fcall f_830(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_875)
static void C_ccall f_875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_871)
static void C_ccall f_871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_864)
static void C_ccall f_864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_844)
static void C_ccall f_844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_856)
static void C_ccall f_856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_852)
static void C_ccall f_852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_848)
static void C_ccall f_848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_956)
static void C_ccall f_956(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_974)
static void C_ccall f_974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_970)
static void C_ccall f_970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_954)
static void C_ccall f_954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_921)
static void C_ccall f_921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_929)
static void C_fcall f_929(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_939)
static void C_ccall f_939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1399)
static void C_ccall f_1399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1405)
static void C_ccall f_1405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1402)
static void C_ccall f_1402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_718)
static void C_fcall f_718(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_743)
static void C_ccall f_743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_562)
static void C_fcall f_562(C_word t0) C_noret;
C_noret_decl(f_576)
static void C_ccall f_576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_580)
static void C_ccall f_580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_583)
static void C_ccall f_583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_586)
static void C_ccall f_586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_589)
static void C_ccall f_589(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_992)
static void C_fcall trf_992(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_992(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_992(t0,t1,t2,t3);}

C_noret_decl(trf_1176)
static void C_fcall trf_1176(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1176(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1176(t0,t1);}

C_noret_decl(trf_1263)
static void C_fcall trf_1263(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1263(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1263(t0,t1);}

C_noret_decl(trf_1303)
static void C_fcall trf_1303(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1303(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1303(t0,t1,t2);}

C_noret_decl(trf_1000)
static void C_fcall trf_1000(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1000(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1000(t0,t1);}

C_noret_decl(trf_1086)
static void C_fcall trf_1086(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1086(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1086(t0,t1,t2);}

C_noret_decl(trf_1030)
static void C_fcall trf_1030(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1030(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1030(t0,t1,t2);}

C_noret_decl(trf_675)
static void C_fcall trf_675(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_675(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_675(t0,t1,t2);}

C_noret_decl(trf_640)
static void C_fcall trf_640(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_640(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_640(t0,t1,t2);}

C_noret_decl(trf_628)
static void C_fcall trf_628(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_628(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_628(t0,t1,t2);}

C_noret_decl(trf_886)
static void C_fcall trf_886(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_886(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_886(t0,t1,t2);}

C_noret_decl(trf_830)
static void C_fcall trf_830(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_830(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_830(t0,t1,t2);}

C_noret_decl(trf_929)
static void C_fcall trf_929(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_929(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_929(t0,t1,t2);}

C_noret_decl(trf_718)
static void C_fcall trf_718(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_718(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_718(t0,t1,t2,t3);}

C_noret_decl(trf_562)
static void C_fcall trf_562(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_562(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_562(t0);}

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
if(!C_demand_2(479)){
C_save(t1);
C_rereclaim2(479*sizeof(C_word), 1);
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
lf[12]=C_h_intern(&lf[12],13,"string-append");
lf[13]=C_h_intern(&lf[13],11,"make-string");
lf[14]=C_h_intern(&lf[14],9,"\003syserror");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[16]=C_h_intern(&lf[16],25,"\003sysimplicit-exit-handler");
lf[17]=C_h_intern(&lf[17],7,"irregex");
lf[18]=C_h_intern(&lf[18],3,"map");
lf[19]=C_h_intern(&lf[19],5,"print");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\006(none)");
lf[21]=C_h_intern(&lf[21],8,"for-each");
lf[22]=C_h_intern(&lf[22],4,"sort");
lf[23]=C_h_intern(&lf[23],8,"string<\077");
lf[24]=C_h_intern(&lf[24],5,"files");
lf[25]=C_h_intern(&lf[25],19,"setup-api#read-info");
lf[26]=C_h_intern(&lf[26],10,"append-map");
lf[27]=C_h_intern(&lf[27],7,"version");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\012 version: ");
lf[29]=C_h_intern(&lf[29],8,"->string");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[31]=C_h_intern(&lf[31],3,"min");
lf[32]=C_h_intern(&lf[32],13,"terminal-size");
lf[33]=C_h_intern(&lf[33],14,"terminal-port\077");
lf[34]=C_h_intern(&lf[34],19,"current-output-port");
lf[35]=C_h_intern(&lf[35],13,"pathname-file");
lf[36]=C_h_intern(&lf[36],17,"delete-duplicates");
lf[37]=C_h_intern(&lf[37],8,"string=\077");
lf[38]=C_h_intern(&lf[38],14,"irregex-search");
lf[39]=C_h_intern(&lf[39],6,"filter");
lf[40]=C_h_intern(&lf[40],11,"concatenate");
lf[41]=C_h_intern(&lf[41],4,"glob");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[44]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002.*\376\377\016");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\001^");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001$");
lf[47]=C_h_intern(&lf[47],13,"irregex-quote");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\013\012target at ");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\002:\012");
lf[50]=C_h_intern(&lf[50],16,"\003sysdynamic-wind");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\010host at ");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\002:\012");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[54]=C_h_intern(&lf[54],4,"exit");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\001\315usage: chicken-status [OPTION | PATTERN] ...\012\012  -h   -help                 "
"   show this message\012  -v   -version                 show version and exit\012  -f "
"  -files                   list installed files\012       -exact                   "
"treat PATTERN as exact match (not a pattern)\012       -host                    whe"
"n cross-compiling, show status of host extensions only\012       -target           "
"       when cross-compiling, show status of target extensions only");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\007-target");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\006-exact");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\002-f");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\006-files");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\002-v");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[63]=C_h_intern(&lf[63],15,"chicken-version");
lf[64]=C_h_intern(&lf[64],6,"append");
lf[65]=C_h_intern(&lf[65],6,"string");
lf[66]=C_h_intern(&lf[66],4,"memq");
lf[67]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000f\376\377\016");
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
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_527,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k525 */
static void C_ccall f_527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_527,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_530,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k528 in k525 */
static void C_ccall f_530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_530,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_533,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k531 in k528 in k525 */
static void C_ccall f_533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_536,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k534 in k531 in k528 in k525 */
static void C_ccall f_536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_536,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_539,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_539,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_542,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_542,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_545,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_548,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_548,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_551,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_554,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#require */
((C_proc3)C_fast_retrieve_symbol_proc(lf[76]))(3,*((C_word*)lf[76]+1),t2,lf[77]);}

/* k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_554,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_558,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* feature? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[74]))(3,*((C_word*)lf[74]+1),t2,lf[75]);}

/* k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_558,2,t0,t1);}
t2=C_mutate(&lf[0] /* (set! main#*cross-chicken* ...) */,t1);
t3=C_mutate(&lf[1] /* (set! main#*host-extensions* ...) */,C_retrieve2(lf[0],"main#*cross-chicken*"));
t4=C_mutate(&lf[2] /* (set! main#*target-extensions* ...) */,C_retrieve2(lf[0],"main#*cross-chicken*"));
t5=C_mutate(&lf[3] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_562,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[11] /* (set! main#format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_718,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1399,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1409,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* command-line-arguments */
((C_proc2)C_fast_retrieve_symbol_proc(lf[73]))(2,*((C_word*)lf[73]+1),t8);}

/* k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1409,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_992,a[2]=t7,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_992(t9,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_fcall f_992(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_992,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1000,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(C_truep(C_retrieve2(lf[1],"main#*host-extensions*"))?C_retrieve2(lf[2],"main#*target-extensions*"):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1128,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1161,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* main#repo-path */
f_562(t7);}
else{
/* status351 */
t6=t4;
f_1000(t6,t1);}}
else{
t4=C_i_car(t2);
t5=C_i_string_equal_p(t4,lf[53]);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1176,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=t4,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t5)){
t7=t6;
f_1176(t7,t5);}
else{
t7=C_i_string_equal_p(t4,lf[71]);
t8=t6;
f_1176(t8,(C_truep(t7)?t7:C_i_string_equal_p(t4,lf[72])));}}}

/* k1174 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_fcall f_1176(C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1176,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1501,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t3,lf[55]);}
else{
if(C_truep(C_i_string_equal_p(((C_word*)t0)[7],lf[56]))){
t2=lf[2] /* main#*target-extensions* */ =C_SCHEME_FALSE;;
t3=C_i_cdr(((C_word*)t0)[6]);
/* loop348 */
t4=((C_word*)((C_word*)t0)[5])[1];
f_992(t4,((C_word*)t0)[8],t3,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_string_equal_p(((C_word*)t0)[7],lf[57]))){
t2=lf[1] /* main#*host-extensions* */ =C_SCHEME_FALSE;;
t3=C_i_cdr(((C_word*)t0)[6]);
/* loop348 */
t4=((C_word*)((C_word*)t0)[5])[1];
f_992(t4,((C_word*)t0)[8],t3,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_string_equal_p(((C_word*)t0)[7],lf[58]))){
t2=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t3=C_i_cdr(((C_word*)t0)[6]);
/* loop348 */
t4=((C_word*)((C_word*)t0)[5])[1];
f_992(t4,((C_word*)t0)[8],t3,((C_word*)t0)[4]);}
else{
t2=C_i_string_equal_p(((C_word*)t0)[7],lf[59]);
t3=(C_truep(t2)?t2:C_i_string_equal_p(((C_word*)t0)[7],lf[60]));
if(C_truep(t3)){
t4=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t5=C_i_cdr(((C_word*)t0)[6]);
/* loop348 */
t6=((C_word*)((C_word*)t0)[5])[1];
f_992(t6,((C_word*)t0)[8],t5,((C_word*)t0)[4]);}
else{
t4=C_i_string_equal_p(((C_word*)t0)[7],lf[61]);
t5=(C_truep(t4)?t4:C_i_string_equal_p(((C_word*)t0)[7],lf[62]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1250,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1257,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-version */
((C_proc2)C_fast_retrieve_symbol_proc(lf[63]))(2,*((C_word*)lf[63]+1),t7);}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1263,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t7=C_i_string_length(((C_word*)t0)[7]);
if(C_truep(C_i_positivep(t7))){
t8=C_i_string_ref(((C_word*)t0)[7],C_fix(0));
t9=t6;
f_1263(t9,C_i_char_equalp(C_make_character(45),t8));}
else{
t8=t6;
f_1263(t8,C_SCHEME_FALSE);}}}}}}}}

/* k1261 in k1174 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_fcall f_1263(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1263,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_string_length(((C_word*)t0)[6]);
if(C_truep(C_i_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1272,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1349,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* substring */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t4,((C_word*)t0)[6],C_fix(1));}
else{
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1513,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t4,lf[55]);}}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[3]);
/* loop348 */
t4=((C_word*)((C_word*)t0)[5])[1];
f_992(t4,((C_word*)t0)[4],t2,t3);}}

/* f1513 in k1261 in k1174 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f1513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),((C_word*)t0)[2],C_fix(1));}

/* k1347 in k1261 in k1174 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=C_fast_retrieve(lf[69]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1270 in k1261 in k1174 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1278,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1341,tmp=(C_word)a,a+=2,tmp);
/* every */
((C_proc4)C_fast_retrieve_symbol_proc(lf[68]))(4,*((C_word*)lf[68]+1),t2,t3,t1);}

/* a1340 in k1270 in k1261 in k1174 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1341(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1341,3,t0,t1,t2);}
t3=*((C_word*)lf[66]+1);
/* g458459 */
t4=t3;
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,t2,lf[67]);}

/* k1276 in k1270 in k1261 in k1174 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1278(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1278,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1285,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[18]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1297,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1303,a[2]=t4,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1303(t12,t8,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[5];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1508,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t3,lf[55]);}}

/* f1508 in k1276 in k1270 in k1261 in k1174 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f1508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),((C_word*)t0)[2],C_fix(1));}

/* map-loop462 in k1276 in k1270 in k1261 in k1174 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_fcall f_1303(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1303,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1332,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[65]+1);
/* g485486 */
t6=t5;
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t3,C_make_character(45),t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1330 in map-loop462 in k1276 in k1270 in k1261 in k1174 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1332(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1332,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1303(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1303(t6,((C_word*)t0)[3],t5);}}

/* k1295 in k1276 in k1270 in k1261 in k1174 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[3]);
/* append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(4,*((C_word*)lf[64]+1),((C_word*)t0)[2],t1,t2);}

/* k1283 in k1276 in k1270 in k1261 in k1174 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* loop348 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_992(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1255 in k1174 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),((C_word*)t0)[2],t1);}

/* k1248 in k1174 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),((C_word*)t0)[2],C_fix(0));}

/* f1501 in k1174 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f1501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),((C_word*)t0)[2],C_fix(0));}

/* k1159 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* print */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(5,*((C_word*)lf[19]+1),((C_word*)t0)[2],lf[51],t1,lf[52]);}

/* k1126 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1128,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* status351 */
t3=((C_word*)t0)[3];
f_1000(t3,t2);}

/* k1129 in k1126 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1131(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1131,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1136,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1141,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1154,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a1153 in k1129 in k1126 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1154,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[1],"main#*host-extensions*"));
t3=C_mutate(&lf[1] /* (set! main#*host-extensions* ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a1140 in k1129 in k1126 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1141,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1145,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1152,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* main#repo-path */
f_562(t3);}

/* k1150 in a1140 in k1129 in k1126 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* print */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(5,*((C_word*)lf[19]+1),((C_word*)t0)[2],lf[48],t1,lf[49]);}

/* k1143 in a1140 in k1129 in k1126 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* status351 */
t2=((C_word*)t0)[3];
f_1000(t2,((C_word*)t0)[2]);}

/* a1135 in k1129 in k1126 in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1136,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[1],"main#*host-extensions*"));
t3=C_mutate(&lf[1] /* (set! main#*host-extensions* ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_fcall f_1000(C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1000,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fast_retrieve(lf[17]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1004,a[2]=t6,a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
t8=t7;
f_1004(2,t8,lf[44]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t0)[3];
t13=C_i_check_list_2(t12,lf[18]);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1086,a[2]=t9,a[3]=t15,a[4]=t11,tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_1086(t17,t7,t12);}
else{
t8=((C_word*)t0)[3];
t9=t7;
f_1004(2,t9,t8);}}}

/* map-loop377 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_fcall f_1086(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1086,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1115,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1078,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* irregex-quote */
((C_proc3)C_fast_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t5,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1076 in map-loop377 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[2],lf[45],t1,lf[46]);}

/* k1113 in map-loop377 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1115(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1115,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1086(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1086(t6,((C_word*)t0)[3],t5);}}

/* k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1004(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1004,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[18]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1010,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1030(t7,t3,t1);}

/* map-loop355 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_fcall f_1030(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1030,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1059,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g361370 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1057 in map-loop355 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1059(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1059,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1030(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1030(t6,((C_word*)t0)[3],t5);}}

/* k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1010(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1010,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1013,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_fast_retrieve(lf[35]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_613,a[2]=t7,a[3]=t4,a[4]=t6,a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_712,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_716,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* main#repo-path */
f_562(t10);}

/* k714 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* make-pathname */
((C_proc5)C_fast_retrieve_symbol_proc(lf[4]))(5,*((C_word*)lf[4]+1),((C_word*)t0)[2],t1,lf[42],lf[43]);}

/* k710 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* glob */
((C_proc3)C_fast_retrieve_symbol_proc(lf[41]))(3,*((C_word*)lf[41]+1),((C_word*)t0)[2],t1);}

/* k611 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_613(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_613,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[18]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_619,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_675(t7,t3,t1);}

/* map-loop212 in k611 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_fcall f_675(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_675,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_704,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g218227 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k702 in map-loop212 in k611 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_704(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_704,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_675(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_675(t6,((C_word*)t0)[3],t5);}}

/* k617 in k611 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_619(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_626,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_628,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[18]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_638,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_640,a[2]=t7,a[3]=t4,a[4]=t11,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_640(t13,t9,((C_word*)t0)[2]);}

/* map-loop238 in k617 in k611 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_fcall f_640(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_640,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_669,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g244253 */
t5=((C_word*)t0)[2];
f_628(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k667 in map-loop238 in k617 in k611 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_669(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_669,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_640(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_640(t6,((C_word*)t0)[3],t5);}}

/* k636 in k617 in k611 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* concatenate */
((C_proc3)C_fast_retrieve_symbol_proc(lf[40]))(3,*((C_word*)lf[40]+1),((C_word*)t0)[2],t1);}

/* g244 in k617 in k611 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_fcall f_628(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_628,NULL,3,t0,t1,t2);}
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_603,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* filter */
((C_proc4)C_fast_retrieve_symbol_proc(lf[39]))(4,*((C_word*)lf[39]+1),t1,t4,t3);}

/* a602 in g244 in k617 in k611 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_603(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_603,3,t0,t1,t2);}
t3=C_fast_retrieve(lf[38]);
/* g205206 */
t4=t3;
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,((C_word*)t0)[2],t2);}

/* k624 in k617 in k611 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* delete-duplicates */
((C_proc4)C_fast_retrieve_symbol_proc(lf[36]))(4,*((C_word*)lf[36]+1),((C_word*)t0)[2],t1,*((C_word*)lf[37]+1));}

/* k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1013(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1013,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),((C_word*)t0)[3],lf[20]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=((C_word*)t0)[3];
t3=t1;
t4=*((C_word*)lf[19]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_921,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_954,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_956,tmp=(C_word)a,a+=2,tmp);
/* append-map */
((C_proc4)C_fast_retrieve_symbol_proc(lf[26]))(4,*((C_word*)lf[26]+1),t6,t7,t3);}
else{
t2=((C_word*)t0)[3];
t3=t1;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_829,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_915,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_793,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* current-output-port */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(2,*((C_word*)lf[34]+1),t6);}}}

/* k791 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_793,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_799,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* terminal-port? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[33]))(3,*((C_word*)lf[33]+1),t2,t1);}

/* k797 in k791 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_799,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_802,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_813,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_819,tmp=(C_word)a,a+=2,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}
else{
t2=((C_word*)t0)[4];
f_829(2,t2,C_fix(39));}}

/* a818 in k797 in k791 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_819(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_819r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_819r(t0,t1,t2);}}

static void C_ccall f_819r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_list_ref(t2,C_fix(1)));}

/* a812 in k797 in k791 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_813,2,t0,t1);}
/* terminal-size */
((C_proc3)C_fast_retrieve_symbol_proc(lf[32]))(3,*((C_word*)lf[32]+1),t1,((C_word*)t0)[2]);}

/* k800 in k797 in k791 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_zerop(t1))){
t2=((C_word*)t0)[3];
f_829(2,t2,C_fix(39));}
else{
/* min */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[31]+1)))(4,*((C_word*)lf[31]+1),((C_word*)t0)[2],C_fix(80),t1);}}

/* k913 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_915,2,t0,t1);}
t2=C_a_i_minus(&a,2,t1,C_fix(2));
C_quotient(4,0,((C_word*)t0)[2],t2,C_fix(2));}

/* k827 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_829,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_830,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_878,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* sort */
((C_proc4)C_fast_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),t3,((C_word*)t0)[2],*((C_word*)lf[23]+1));}

/* k876 in k827 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_878,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[21]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_886,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_886(t6,((C_word*)t0)[2],t1);}

/* for-each-loop304 in k876 in k827 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_fcall f_886(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_886,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_896,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g305311 */
t5=((C_word*)t0)[2];
f_830(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k894 in for-each-loop304 in k876 in k827 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_886(t3,((C_word*)t0)[2],t2);}

/* g305 in k827 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_fcall f_830(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_830,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_871,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_875,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* main#repo-path */
f_562(t4);}

/* k873 in g305 in k827 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api#read-info */
((C_proc4)C_fast_retrieve_symbol_proc(lf[25]))(4,*((C_word*)lf[25]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k869 in g305 in k827 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_871,2,t0,t1);}
t2=C_i_assq(lf[27],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_844,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_864,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,((C_word*)t0)[2],lf[30]);}
else{
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k862 in k869 in g305 in k827 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_864,2,t0,t1);}
/* main#format-string */
f_718(((C_word*)t0)[3],t1,((C_word*)t0)[2],C_a_i_list(&a,2,C_SCHEME_FALSE,C_make_character(46)));}

/* k842 in k869 in g305 in k827 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_844,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_848,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_852,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_856,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* ->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[29]))(3,*((C_word*)lf[29]+1),t4,t5);}

/* k854 in k842 in k869 in g305 in k827 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],lf[28],t1);}

/* k850 in k842 in k869 in g305 in k827 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_852,2,t0,t1);}
/* main#format-string */
f_718(((C_word*)t0)[3],t1,((C_word*)t0)[2],C_a_i_list(&a,2,C_SCHEME_TRUE,C_make_character(46)));}

/* k846 in k842 in k869 in g305 in k827 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(4,*((C_word*)lf[19]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a955 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_956(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_956,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_970,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_974,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* main#repo-path */
f_562(t4);}

/* k972 in a955 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api#read-info */
((C_proc4)C_fast_retrieve_symbol_proc(lf[25]))(4,*((C_word*)lf[25]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k968 in a955 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_assq(lf[24],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_i_cdr(t2):C_SCHEME_END_OF_LIST));}

/* k952 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* sort */
((C_proc4)C_fast_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),((C_word*)t0)[2],t1,*((C_word*)lf[23]+1));}

/* k919 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_921,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[21]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_929,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_929(t6,((C_word*)t0)[2],t1);}

/* for-each-loop324 in k919 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_fcall f_929(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_929,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_939,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g325331 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k937 in for-each-loop324 in k919 in k1011 in k1008 in k1002 in status in loop in k1407 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_929(t3,((C_word*)t0)[2],t2);}

/* k1397 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1399,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1402,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1405,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[16]))(2,*((C_word*)lf[16]+1),t3);}

/* k1403 in k1397 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1400 in k1397 in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_1402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* main#format-string in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_fcall f_718(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_718,NULL,4,t1,t2,t3,t4);}
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_make_character(32):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
if(C_truep(C_i_nullp(t12))){
t13=C_i_string_length(t2);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_743,a[2]=t2,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t15=C_fixnum_difference(t3,t13);
t16=C_i_fixnum_max(C_fix(0),t15);
/* make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(4,*((C_word*)lf[13]+1),t14,t16,t10);}
else{
/* ##sys#error */
t13=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t1,lf[15],t12);}}

/* k741 in main#format-string in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}
else{
/* string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}}

/* main#repo-path in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_fcall f_562(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_562,NULL,1,t1);}
t2=(C_truep(C_retrieve2(lf[0],"main#*cross-chicken*"))?C_i_not(C_retrieve2(lf[1],"main#*host-extensions*")):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_576,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}
else{
/* repository-path */
((C_proc2)C_fast_retrieve_symbol_proc(lf[10]))(2,*((C_word*)lf[10]+1),t1);}}

/* k574 in main#repo-path in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_576,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_580,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
((C_proc2)C_fast_retrieve_symbol_proc(lf[8]))(2,*((C_word*)lf[8]+1),t2);}

/* k578 in k574 in main#repo-path in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_583,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t2,lf[7],t1);}

/* k581 in k578 in k574 in main#repo-path in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_583,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t2,C_fix((C_word)C_BINARY_VERSION),((C_word*)t0)[2]);}

/* k584 in k581 in k578 in k574 in main#repo-path in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_586,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_589,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* get-output-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[5]))(3,*((C_word*)lf[5]+1),t2,((C_word*)t0)[2]);}

/* k587 in k584 in k581 in k578 in k574 in main#repo-path in k556 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in k531 in k528 in k525 */
static void C_ccall f_589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[4]))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[95] = {
{"toplevel:chicken_2dstatus_2escm",(void*)C_toplevel},
{"f_527:chicken_2dstatus_2escm",(void*)f_527},
{"f_530:chicken_2dstatus_2escm",(void*)f_530},
{"f_533:chicken_2dstatus_2escm",(void*)f_533},
{"f_536:chicken_2dstatus_2escm",(void*)f_536},
{"f_539:chicken_2dstatus_2escm",(void*)f_539},
{"f_542:chicken_2dstatus_2escm",(void*)f_542},
{"f_545:chicken_2dstatus_2escm",(void*)f_545},
{"f_548:chicken_2dstatus_2escm",(void*)f_548},
{"f_551:chicken_2dstatus_2escm",(void*)f_551},
{"f_554:chicken_2dstatus_2escm",(void*)f_554},
{"f_558:chicken_2dstatus_2escm",(void*)f_558},
{"f_1409:chicken_2dstatus_2escm",(void*)f_1409},
{"f_992:chicken_2dstatus_2escm",(void*)f_992},
{"f_1176:chicken_2dstatus_2escm",(void*)f_1176},
{"f_1263:chicken_2dstatus_2escm",(void*)f_1263},
{"f1513:chicken_2dstatus_2escm",(void*)f1513},
{"f_1349:chicken_2dstatus_2escm",(void*)f_1349},
{"f_1272:chicken_2dstatus_2escm",(void*)f_1272},
{"f_1341:chicken_2dstatus_2escm",(void*)f_1341},
{"f_1278:chicken_2dstatus_2escm",(void*)f_1278},
{"f1508:chicken_2dstatus_2escm",(void*)f1508},
{"f_1303:chicken_2dstatus_2escm",(void*)f_1303},
{"f_1332:chicken_2dstatus_2escm",(void*)f_1332},
{"f_1297:chicken_2dstatus_2escm",(void*)f_1297},
{"f_1285:chicken_2dstatus_2escm",(void*)f_1285},
{"f_1257:chicken_2dstatus_2escm",(void*)f_1257},
{"f_1250:chicken_2dstatus_2escm",(void*)f_1250},
{"f1501:chicken_2dstatus_2escm",(void*)f1501},
{"f_1161:chicken_2dstatus_2escm",(void*)f_1161},
{"f_1128:chicken_2dstatus_2escm",(void*)f_1128},
{"f_1131:chicken_2dstatus_2escm",(void*)f_1131},
{"f_1154:chicken_2dstatus_2escm",(void*)f_1154},
{"f_1141:chicken_2dstatus_2escm",(void*)f_1141},
{"f_1152:chicken_2dstatus_2escm",(void*)f_1152},
{"f_1145:chicken_2dstatus_2escm",(void*)f_1145},
{"f_1136:chicken_2dstatus_2escm",(void*)f_1136},
{"f_1000:chicken_2dstatus_2escm",(void*)f_1000},
{"f_1086:chicken_2dstatus_2escm",(void*)f_1086},
{"f_1078:chicken_2dstatus_2escm",(void*)f_1078},
{"f_1115:chicken_2dstatus_2escm",(void*)f_1115},
{"f_1004:chicken_2dstatus_2escm",(void*)f_1004},
{"f_1030:chicken_2dstatus_2escm",(void*)f_1030},
{"f_1059:chicken_2dstatus_2escm",(void*)f_1059},
{"f_1010:chicken_2dstatus_2escm",(void*)f_1010},
{"f_716:chicken_2dstatus_2escm",(void*)f_716},
{"f_712:chicken_2dstatus_2escm",(void*)f_712},
{"f_613:chicken_2dstatus_2escm",(void*)f_613},
{"f_675:chicken_2dstatus_2escm",(void*)f_675},
{"f_704:chicken_2dstatus_2escm",(void*)f_704},
{"f_619:chicken_2dstatus_2escm",(void*)f_619},
{"f_640:chicken_2dstatus_2escm",(void*)f_640},
{"f_669:chicken_2dstatus_2escm",(void*)f_669},
{"f_638:chicken_2dstatus_2escm",(void*)f_638},
{"f_628:chicken_2dstatus_2escm",(void*)f_628},
{"f_603:chicken_2dstatus_2escm",(void*)f_603},
{"f_626:chicken_2dstatus_2escm",(void*)f_626},
{"f_1013:chicken_2dstatus_2escm",(void*)f_1013},
{"f_793:chicken_2dstatus_2escm",(void*)f_793},
{"f_799:chicken_2dstatus_2escm",(void*)f_799},
{"f_819:chicken_2dstatus_2escm",(void*)f_819},
{"f_813:chicken_2dstatus_2escm",(void*)f_813},
{"f_802:chicken_2dstatus_2escm",(void*)f_802},
{"f_915:chicken_2dstatus_2escm",(void*)f_915},
{"f_829:chicken_2dstatus_2escm",(void*)f_829},
{"f_878:chicken_2dstatus_2escm",(void*)f_878},
{"f_886:chicken_2dstatus_2escm",(void*)f_886},
{"f_896:chicken_2dstatus_2escm",(void*)f_896},
{"f_830:chicken_2dstatus_2escm",(void*)f_830},
{"f_875:chicken_2dstatus_2escm",(void*)f_875},
{"f_871:chicken_2dstatus_2escm",(void*)f_871},
{"f_864:chicken_2dstatus_2escm",(void*)f_864},
{"f_844:chicken_2dstatus_2escm",(void*)f_844},
{"f_856:chicken_2dstatus_2escm",(void*)f_856},
{"f_852:chicken_2dstatus_2escm",(void*)f_852},
{"f_848:chicken_2dstatus_2escm",(void*)f_848},
{"f_956:chicken_2dstatus_2escm",(void*)f_956},
{"f_974:chicken_2dstatus_2escm",(void*)f_974},
{"f_970:chicken_2dstatus_2escm",(void*)f_970},
{"f_954:chicken_2dstatus_2escm",(void*)f_954},
{"f_921:chicken_2dstatus_2escm",(void*)f_921},
{"f_929:chicken_2dstatus_2escm",(void*)f_929},
{"f_939:chicken_2dstatus_2escm",(void*)f_939},
{"f_1399:chicken_2dstatus_2escm",(void*)f_1399},
{"f_1405:chicken_2dstatus_2escm",(void*)f_1405},
{"f_1402:chicken_2dstatus_2escm",(void*)f_1402},
{"f_718:chicken_2dstatus_2escm",(void*)f_718},
{"f_743:chicken_2dstatus_2escm",(void*)f_743},
{"f_562:chicken_2dstatus_2escm",(void*)f_562},
{"f_576:chicken_2dstatus_2escm",(void*)f_576},
{"f_580:chicken_2dstatus_2escm",(void*)f_580},
{"f_583:chicken_2dstatus_2escm",(void*)f_583},
{"f_586:chicken_2dstatus_2escm",(void*)f_586},
{"f_589:chicken_2dstatus_2escm",(void*)f_589},
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
