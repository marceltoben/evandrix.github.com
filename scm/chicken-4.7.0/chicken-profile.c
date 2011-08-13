/* Generated from chicken-profile.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:18
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: chicken-profile.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -no-lambda-info -local -no-trace -output-file chicken-profile.c
   used units: library eval srfi_2d1 srfi_2d13 srfi_2d69 posix utils
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d69_toplevel)
C_externimport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[89];
static double C_possibly_force_alignment;


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_366)
static void C_ccall f_366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_369)
static void C_ccall f_369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_372)
static void C_ccall f_372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_375)
static void C_ccall f_375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_378)
static void C_ccall f_378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_381)
static void C_ccall f_381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_384)
static void C_ccall f_384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1616)
static void C_ccall f_1616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_439)
static void C_fcall f_439(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_641)
static void C_fcall f_641(C_word t0,C_word t1) C_noret;
C_noret_decl(f_635)
static void C_ccall f_635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_827)
static void C_ccall f_827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_831)
static void C_ccall f_831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_835)
static void C_ccall f_835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_792)
static void C_fcall f_792(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_802)
static void C_ccall f_802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_594)
static void C_ccall f_594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_577)
static void C_ccall f_577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_570)
static void C_ccall f_570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_561)
static void C_ccall f_561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_554)
static void C_ccall f_554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_536)
static void C_ccall f_536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_513)
static void C_fcall f_513(C_word t0,C_word t1) C_noret;
C_noret_decl(f_533)
static void C_ccall f_533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_494)
static void C_fcall f_494(C_word t0,C_word t1) C_noret;
C_noret_decl(f_456)
static void C_ccall f_456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_474)
static void C_ccall f_474(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_482)
static void C_ccall f_482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_486)
static void C_ccall f_486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_472)
static void C_ccall f_472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_459)
static void C_ccall f_459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_449)
static void C_fcall f_449(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1094)
static void C_ccall f_1094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1097)
static void C_ccall f_1097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1595)
static void C_ccall f_1595(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1100)
static void C_ccall f_1100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1560)
static void C_fcall f_1560(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1589)
static void C_ccall f_1589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1558)
static void C_ccall f_1558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1505)
static void C_fcall f_1505(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1523)
static void C_fcall f_1523(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1530)
static void C_fcall f_1530(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1103)
static void C_ccall f_1103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1495)
static void C_ccall f_1495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1499)
static void C_ccall f_1499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1106)
static void C_fcall f_1106(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1475)
static void C_ccall f_1475(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1165)
static void C_ccall f_1165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1440)
static void C_fcall f_1440(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1128)
static void C_ccall f_1128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1132)
static void C_ccall f_1132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1136)
static void C_ccall f_1136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1140)
static void C_ccall f_1140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1144)
static void C_ccall f_1144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1171)
static void C_ccall f_1171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1180)
static void C_ccall f_1180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1330)
static void C_ccall f_1330(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1397)
static void C_fcall f_1397(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1337)
static void C_ccall f_1337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1348)
static void C_fcall f_1348(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1381)
static void C_ccall f_1381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1361)
static void C_fcall f_1361(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1183)
static void C_ccall f_1183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1316)
static void C_ccall f_1316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1308)
static void C_ccall f_1308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1275)
static void C_ccall f_1275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1283)
static void C_fcall f_1283(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1293)
static void C_ccall f_1293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1185)
static void C_fcall f_1185(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1208)
static void C_fcall f_1208(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1215)
static void C_fcall f_1215(C_word t0,C_word t1) C_noret;
C_noret_decl(f_988)
static void C_ccall f_988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1245)
static void C_ccall f_1245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1221)
static void C_fcall f_1221(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1206)
static void C_ccall f_1206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1193)
static void C_ccall f_1193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1606)
static void C_ccall f_1606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1612)
static void C_ccall f_1612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1609)
static void C_ccall f_1609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1034)
static void C_fcall f_1034(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1088)
static void C_ccall f_1088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1045)
static void C_ccall f_1045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1077)
static void C_ccall f_1077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1081)
static void C_ccall f_1081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1069)
static void C_ccall f_1069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1057)
static void C_ccall f_1057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1053)
static void C_ccall f_1053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_844)
static void C_ccall f_844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_848)
static void C_ccall f_848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_858)
static void C_ccall f_858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_860)
static void C_fcall f_860(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_896)
static void C_ccall f_896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_910)
static void C_fcall f_910(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_920)
static void C_fcall f_920(C_word t0,C_word t1) C_noret;
C_noret_decl(f_923)
static void C_fcall f_923(C_word t0,C_word t1) C_noret;
C_noret_decl(f_908)
static void C_ccall f_908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_870)
static void C_ccall f_870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_877)
static void C_ccall f_877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_851)
static void C_ccall f_851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_760)
static void C_ccall f_760(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_768)
static void C_ccall f_768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_772)
static void C_ccall f_772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_731)
static void C_ccall f_731(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_702)
static void C_ccall f_702(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_667)
static void C_ccall f_667(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_392)
static void C_fcall f_392(C_word t0) C_noret;
C_noret_decl(f_403)
static void C_ccall f_403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_396)
static void C_ccall f_396(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_439)
static void C_fcall trf_439(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_439(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_439(t0,t1,t2);}

C_noret_decl(trf_641)
static void C_fcall trf_641(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_641(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_641(t0,t1);}

C_noret_decl(trf_792)
static void C_fcall trf_792(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_792(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_792(t0,t1,t2);}

C_noret_decl(trf_513)
static void C_fcall trf_513(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_513(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_513(t0,t1);}

C_noret_decl(trf_494)
static void C_fcall trf_494(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_494(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_494(t0,t1);}

C_noret_decl(trf_449)
static void C_fcall trf_449(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_449(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_449(t0,t1);}

C_noret_decl(trf_1560)
static void C_fcall trf_1560(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1560(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1560(t0,t1,t2);}

C_noret_decl(trf_1505)
static void C_fcall trf_1505(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1505(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1505(t0,t1,t2);}

C_noret_decl(trf_1523)
static void C_fcall trf_1523(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1523(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1523(t0,t1);}

C_noret_decl(trf_1530)
static void C_fcall trf_1530(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1530(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1530(t0,t1);}

C_noret_decl(trf_1106)
static void C_fcall trf_1106(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1106(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1106(t0,t1);}

C_noret_decl(trf_1440)
static void C_fcall trf_1440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1440(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1440(t0,t1,t2);}

C_noret_decl(trf_1397)
static void C_fcall trf_1397(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1397(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1397(t0,t1,t2);}

C_noret_decl(trf_1348)
static void C_fcall trf_1348(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1348(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1348(t0,t1,t2,t3);}

C_noret_decl(trf_1361)
static void C_fcall trf_1361(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1361(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1361(t0,t1);}

C_noret_decl(trf_1283)
static void C_fcall trf_1283(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1283(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1283(t0,t1,t2);}

C_noret_decl(trf_1185)
static void C_fcall trf_1185(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1185(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1185(t0,t1,t2);}

C_noret_decl(trf_1208)
static void C_fcall trf_1208(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1208(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1208(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1215)
static void C_fcall trf_1215(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1215(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1215(t0,t1);}

C_noret_decl(trf_1221)
static void C_fcall trf_1221(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1221(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1221(t0,t1);}

C_noret_decl(trf_1034)
static void C_fcall trf_1034(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1034(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1034(t0,t1,t2);}

C_noret_decl(trf_860)
static void C_fcall trf_860(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_860(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_860(t0,t1,t2);}

C_noret_decl(trf_910)
static void C_fcall trf_910(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_910(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_910(t0,t1,t2,t3);}

C_noret_decl(trf_920)
static void C_fcall trf_920(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_920(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_920(t0,t1);}

C_noret_decl(trf_923)
static void C_fcall trf_923(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_923(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_923(t0,t1);}

C_noret_decl(trf_392)
static void C_fcall trf_392(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_392(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_392(t0);}

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
if(!C_demand_2(376)){
C_save(t1);
C_rereclaim2(376*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,89);
lf[7]=C_h_intern(&lf[7],4,"exit");
lf[8]=C_h_intern(&lf[8],7,"display");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\001\242)\012 -no-unused                remove procedures that are never called\012 -top "
"N                    display only the top N entries\012 -help                     s"
"how this text and exit\012 -version                  show version and exit\012 -releas"
"e                  show release number and exit\012\012 FILENAME defaults to the `PROF"
"ILE.<number>\047, selecting the one with\012 the highest modification time, in case mu"
"ltiple profiles exist.\012");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\001\315Usage: chicken-profile [FILENAME | OPTION] ...\012\012 -sort-by-calls            "
"sort output by call frequency\012 -sort-by-time             sort output by procedur"
"e execution time\012 -sort-by-avg              sort output by average procedure exe"
"cution time\012 -sort-by-name             sort output alphabetically by procedure n"
"ame\012 -decimals DDD             set number of decimals for seconds, average and\012 "
"                          percent columns (three digits, default: ");
lf[13]=C_h_intern(&lf[13],19,"\003sysprint-to-string");
lf[18]=C_h_intern(&lf[18],8,"string<\077");
lf[19]=C_h_intern(&lf[19],14,"symbol->string");
lf[22]=C_h_intern(&lf[22],17,"hash-table->alist");
lf[23]=C_h_intern(&lf[23],4,"read");
lf[24]=C_h_intern(&lf[24],3,"map");
lf[25]=C_h_intern(&lf[25],15,"hash-table-set!");
lf[26]=C_h_intern(&lf[26],22,"hash-table-ref/default");
lf[27]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\000\376\003\000\000\002\376\377\001\000\000\000\000\376\377\016");
lf[28]=C_h_intern(&lf[28],15,"make-hash-table");
lf[29]=C_h_intern(&lf[29],3,"eq\077");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[33]=C_h_intern(&lf[33],13,"string-append");
lf[34]=C_h_intern(&lf[34],9,"substring");
lf[35]=C_h_intern(&lf[35],8,"truncate");
lf[36]=C_h_intern(&lf[36],4,"expt");
lf[37]=C_h_intern(&lf[37],25,"\003sysimplicit-exit-handler");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\011procedure");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\005calls");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\007seconds");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\007average");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\007percent");
lf[43]=C_h_intern(&lf[43],5,"print");
lf[44]=C_h_intern(&lf[44],11,"string-join");
lf[45]=C_h_intern(&lf[45],11,"make-string");
lf[46]=C_h_intern(&lf[46],9,"\003syserror");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[48]=C_h_intern(&lf[48],8,"for-each");
lf[49]=C_h_intern(&lf[49],6,"reduce");
lf[50]=C_h_intern(&lf[50],1,"+");
lf[51]=C_h_intern(&lf[51],3,"max");
lf[52]=C_h_intern(&lf[52],4,"fold");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\010overflow");
lf[54]=C_h_intern(&lf[54],28,"\003syssymbol->qualified-string");
lf[55]=C_h_intern(&lf[55],6,"remove");
lf[56]=C_h_intern(&lf[56],4,"take");
lf[57]=C_h_intern(&lf[57],6,"append");
lf[58]=C_h_intern(&lf[58],4,"sort");
lf[59]=C_h_intern(&lf[59],20,"with-input-from-file");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\011reading `");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\006\047 ...\012");
lf[62]=C_h_intern(&lf[62],5,"error");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\021no PROFILEs found");
lf[64]=C_h_intern(&lf[64],22,"file-modification-time");
lf[65]=C_h_intern(&lf[65],4,"glob");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\011PROFILE.*");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\032missing argument to option");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid argument to option");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\002-v");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\032chicken-profile - Version ");
lf[75]=C_h_intern(&lf[75],15,"chicken-version");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\010-release");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\012-no-unused");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\004-top");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\016-sort-by-calls");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\015-sort-by-time");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\014-sort-by-avg");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\015-sort-by-name");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\011-decimals");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000$invalid argument to -decimals option");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000$invalid argument to -decimals option");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid option");
lf[88]=C_h_intern(&lf[88],22,"command-line-arguments");
C_register_lf2(lf,89,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_366,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k364 */
static void C_ccall f_366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_369,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k367 in k364 */
static void C_ccall f_369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_369,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_372,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k370 in k367 in k364 */
static void C_ccall f_372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_372,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_375,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k373 in k370 in k367 in k364 */
static void C_ccall f_375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d69_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_378,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_381,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_384,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_384(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_384,2,t0,t1);}
t2=lf[0] /* file */ =C_SCHEME_FALSE;;
t3=lf[1] /* no-unused */ =C_SCHEME_FALSE;;
t4=lf[2] /* seconds-digits */ =C_fix(3);;
t5=lf[3] /* average-digits */ =C_fix(3);;
t6=lf[4] /* percent-digits */ =C_fix(3);;
t7=lf[5] /* top */ =C_fix(0);;
t8=C_mutate(&lf[6] /* (set! print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_392,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate(&lf[14] /* (set! sort-by-calls ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_667,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[15] /* (set! sort-by-time ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_702,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate(&lf[16] /* (set! sort-by-avg ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_731,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate(&lf[17] /* (set! sort-by-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_760,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate(&lf[20] /* (set! sort-by ...) */,C_retrieve2(lf[15],"sort-by-time"));
t14=C_mutate(&lf[21] /* (set! read-profile ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_844,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate(&lf[30] /* (set! format-real ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1034,tmp=(C_word)a,a+=2,tmp));
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1606,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1616,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:234: command-line-arguments */
((C_proc2)C_fast_retrieve_symbol_proc(lf[88]))(2,*((C_word*)lf[88]+1),t17);}

/* k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1616,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_439,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_439(t5,((C_word*)t0)[2],t1);}

/* loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_439(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(24);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_439,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_449,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[0],"file"))){
t4=t3;
f_449(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_456,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:73: glob */
((C_proc3)C_fast_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),t4,lf[66]);}}
else{
t3=C_i_car(t2);
t4=C_i_cdr(t2);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_494,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t11=t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_513,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_536,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_truep(C_i_equalp(t3,lf[69]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[70]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[71]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
/* chicken-profile.scm:93: print-usage */
f_392(t12);}
else{
if(C_truep((C_truep(C_i_equalp(t3,lf[72]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[73]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_554,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_561,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:95: chicken-version */
((C_proc2)C_fast_retrieve_symbol_proc(lf[75]))(2,*((C_word*)lf[75]+1),t14);}
else{
if(C_truep(C_i_string_equal_p(t3,lf[76]))){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_570,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_577,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:98: chicken-version */
((C_proc2)C_fast_retrieve_symbol_proc(lf[75]))(2,*((C_word*)lf[75]+1),t14);}
else{
if(C_truep(C_i_string_equal_p(t3,lf[77]))){
t13=lf[1] /* no-unused */ =C_SCHEME_TRUE;;
/* chicken-profile.scm:111: loop */
t30=t1;
t31=((C_word*)t6)[1];
t1=t30;
t2=t31;
goto loop;}
else{
if(C_truep(C_i_string_equal_p(t3,lf[78]))){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_594,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:101: next-number */
t14=t9;
f_513(t14,t13);}
else{
if(C_truep(C_i_string_equal_p(t3,lf[79]))){
t13=C_mutate(&lf[20] /* (set! sort-by ...) */,C_retrieve2(lf[14],"sort-by-calls"));
/* chicken-profile.scm:111: loop */
t30=t1;
t31=((C_word*)t6)[1];
t1=t30;
t2=t31;
goto loop;}
else{
if(C_truep(C_i_string_equal_p(t3,lf[80]))){
t13=C_mutate(&lf[20] /* (set! sort-by ...) */,C_retrieve2(lf[15],"sort-by-time"));
/* chicken-profile.scm:111: loop */
t30=t1;
t31=((C_word*)t6)[1];
t1=t30;
t2=t31;
goto loop;}
else{
if(C_truep(C_i_string_equal_p(t3,lf[81]))){
t13=C_mutate(&lf[20] /* (set! sort-by ...) */,C_retrieve2(lf[16],"sort-by-avg"));
/* chicken-profile.scm:111: loop */
t30=t1;
t31=((C_word*)t6)[1];
t1=t30;
t2=t31;
goto loop;}
else{
if(C_truep(C_i_string_equal_p(t3,lf[82]))){
t13=C_mutate(&lf[20] /* (set! sort-by ...) */,C_retrieve2(lf[17],"sort-by-name"));
/* chicken-profile.scm:111: loop */
t30=t1;
t31=((C_word*)t6)[1];
t1=t30;
t2=t31;
goto loop;}
else{
if(C_truep(C_i_string_equal_p(t3,lf[83]))){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_635,a[2]=t12,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* chicken-profile.scm:106: next-arg */
t14=((C_word*)t8)[1];
f_494(t14,t13);}
else{
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_641,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t12,tmp=(C_word)a,a+=7,tmp);
t14=C_i_string_length(t3);
if(C_truep(C_i_greaterp(t14,C_fix(1)))){
t15=C_i_string_ref(t3,C_fix(0));
t16=t13;
f_641(t16,C_i_char_equalp(C_make_character(45),t15));}
else{
t15=t13;
f_641(t15,C_SCHEME_FALSE);}}}}}}}}}}}}}

/* k639 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_641(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* chicken-profile.scm:108: error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(4,*((C_word*)lf[62]+1),((C_word*)t0)[6],lf[87],((C_word*)t0)[5]);}
else{
if(C_truep(C_retrieve2(lf[0],"file"))){
/* chicken-profile.scm:109: print-usage */
f_392(((C_word*)t0)[6]);}
else{
t2=C_mutate(&lf[0] /* (set! file ...) */,((C_word*)t0)[5]);
/* chicken-profile.scm:111: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_439(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}}}

/* k633 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_635,2,t0,t1);}
t2=C_i_string_length(t1);
if(C_truep(C_i_nequalp(t2,C_fix(3)))){
t3=C_mutate(&lf[84] /* (set! arg-digit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_792,a[2]=t1,tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_827,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:148: arg-digit */
t5=C_retrieve2(lf[84],"arg-digit");
f_792(t5,t4,C_fix(0));}
else{
/* chicken-profile.scm:151: error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(4,*((C_word*)lf[62]+1),((C_word*)t0)[2],lf[86],t1);}}

/* k825 in k633 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_827,2,t0,t1);}
t2=C_mutate(&lf[2] /* (set! seconds-digits ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:149: arg-digit */
t4=C_retrieve2(lf[84],"arg-digit");
f_792(t4,t3,C_fix(1));}

/* k829 in k825 in k633 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_831,2,t0,t1);}
t2=C_mutate(&lf[3] /* (set! average-digits ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_835,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:150: arg-digit */
t4=C_retrieve2(lf[84],"arg-digit");
f_792(t4,t3,C_fix(2));}

/* k833 in k829 in k825 in k633 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[4] /* (set! percent-digits ...) */,t1);
/* chicken-profile.scm:111: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_439(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* arg-digit in k633 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_792(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_792,NULL,3,t0,t1,t2);}
t3=C_i_string_ref(((C_word*)t0)[2],t2);
t4=C_fix(C_character_code(t3));
t5=C_a_i_minus(&a,2,t4,C_fix(48));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_802,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:145: <= */
C_less_or_equal_p(5,0,t6,C_fix(0),t5,C_fix(9));}

/* k800 in arg-digit in k633 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_nequalp(((C_word*)t0)[4],C_fix(9));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_fix(8):((C_word*)t0)[4]));}
else{
/* chicken-profile.scm:147: error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(4,*((C_word*)lf[62]+1),((C_word*)t0)[3],lf[85],((C_word*)t0)[2]);}}

/* k592 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[5] /* (set! top ...) */,t1);
/* chicken-profile.scm:111: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_439(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k575 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:98: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[43]+1)))(3,*((C_word*)lf[43]+1),((C_word*)t0)[2],t1);}

/* k568 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:99: exit */
((C_proc2)C_fast_retrieve_symbol_proc(lf[7]))(2,*((C_word*)lf[7]+1),((C_word*)t0)[2]);}

/* k559 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:95: print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[43]+1)))(4,*((C_word*)lf[43]+1),((C_word*)t0)[2],lf[74],t1);}

/* k552 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:96: exit */
((C_proc2)C_fast_retrieve_symbol_proc(lf[7]))(2,*((C_word*)lf[7]+1),((C_word*)t0)[2]);}

/* k534 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:111: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_439(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* next-number in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_513(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_513,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_533,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:90: next-arg */
t3=((C_word*)((C_word*)t0)[2])[1];
f_494(t3,t2);}

/* k531 in next-number in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_533,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
if(C_truep(t2)){
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* chicken-profile.scm:91: error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(4,*((C_word*)lf[62]+1),((C_word*)t0)[3],lf[68],((C_word*)t0)[2]);}}
else{
/* chicken-profile.scm:91: error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(4,*((C_word*)lf[62]+1),((C_word*)t0)[3],lf[68],((C_word*)t0)[2]);}}

/* next-arg in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_494(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_494,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[3])[1]))){
/* chicken-profile.scm:85: error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(4,*((C_word*)lf[62]+1),t1,lf[67],((C_word*)t0)[2]);}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k454 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_459,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t1))){
/* chicken-profile.scm:75: error */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(3,*((C_word*)lf[62]+1),t2,lf[63]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_472,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_474,tmp=(C_word)a,a+=2,tmp);
/* chicken-profile.scm:76: sort */
((C_proc4)C_fast_retrieve_symbol_proc(lf[58]))(4,*((C_word*)lf[58]+1),t3,t1,t4);}}

/* a473 in k454 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_474(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_474,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_482,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:78: file-modification-time */
((C_proc3)C_fast_retrieve_symbol_proc(lf[64]))(3,*((C_word*)lf[64]+1),t4,t2);}

/* k480 in a473 in k454 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_482,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_486,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:79: file-modification-time */
((C_proc3)C_fast_retrieve_symbol_proc(lf[64]))(3,*((C_word*)lf[64]+1),t2,((C_word*)t0)[2]);}

/* k484 in k480 in a473 in k454 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_greaterp(((C_word*)t0)[2],t1));}

/* k470 in k454 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_car(t1);
t3=C_mutate(&lf[0] /* (set! file ...) */,t2);
t4=((C_word*)t0)[2];
f_449(t4,t3);}

/* k457 in k454 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[0] /* (set! file ...) */,t1);
t3=((C_word*)t0)[2];
f_449(t3,t2);}

/* k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_449(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_449,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1094,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:184: print */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[43]+1)))(5,*((C_word*)lf[43]+1),t3,lf[60],C_retrieve2(lf[0],"file"),lf[61]);}

/* k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1094,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1097,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:185: with-input-from-file */
((C_proc4)C_fast_retrieve_symbol_proc(lf[59]))(4,*((C_word*)lf[59]+1),t2,C_retrieve2(lf[0],"file"),C_retrieve2(lf[21],"read-profile"));}

/* k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1100,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1595,tmp=(C_word)a,a+=2,tmp);
/* chicken-profile.scm:186: fold */
((C_proc5)C_fast_retrieve_symbol_proc(lf[52]))(5,*((C_word*)lf[52]+1),t2,t3,C_fix(0),t1);}

/* a1594 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1595(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1595,4,t0,t1,t2,t3);}
t4=C_i_caddr(t2);
/* chicken-profile.scm:187: max */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[51]+1)))(4,*((C_word*)lf[51]+1),t1,t4,t3);}

/* k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1100(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1100,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1103,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1505,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[24]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1558,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1560,a[2]=t7,a[3]=t4,a[4]=t11,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_1560(t13,t9,((C_word*)t0)[2]);}

/* map-loop138 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_1560(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1560,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1589,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g144153 */
t5=((C_word*)t0)[2];
f_1505(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1587 in map-loop138 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1589(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1589,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1560(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1560(t6,((C_word*)t0)[3],t5);}}

/* k1556 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:190: sort */
((C_proc4)C_fast_retrieve_symbol_proc(lf[58]))(4,*((C_word*)lf[58]+1),((C_word*)t0)[2],t1,C_retrieve2(lf[20],"sort-by"));}

/* g144 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_1505(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1505,NULL,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=C_i_caddr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1523,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t6=C_i_greaterp(t3,C_fix(0));
t7=t5;
f_1523(t7,(C_truep(t6)?C_a_i_divide(&a,2,t4,t3):C_SCHEME_FALSE));}
else{
t6=t5;
f_1523(t6,C_SCHEME_FALSE);}}

/* k1521 in g144 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_1523(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1523,NULL,2,t0,t1);}
t2=(C_truep(t1)?t1:C_fix(0));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1530,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[3],C_fix(0)))){
t4=C_a_i_divide(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t5=t3;
f_1530(t5,C_a_i_times(&a,2,t4,C_fix(100)));}
else{
t4=t3;
f_1530(t4,C_SCHEME_FALSE);}}

/* k1528 in k1521 in g144 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_1530(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1530,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=C_a_i_list2(&a,2,((C_word*)t0)[4],t2);
/* chicken-profile.scm:191: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),((C_word*)t0)[3],((C_word*)t0)[2],t3);}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[4],C_fix(0));
/* chicken-profile.scm:191: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1103(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1103,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1106,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1495,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_i_length(((C_word*)t3)[1]);
/* chicken-profile.scm:200: < */
C_lessp(5,0,t5,C_fix(0),C_retrieve2(lf[5],"top"),t6);}

/* k1493 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1495,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:201: take */
((C_proc4)C_fast_retrieve_symbol_proc(lf[56]))(4,*((C_word*)lf[56]+1),t2,((C_word*)((C_word*)t0)[3])[1],C_retrieve2(lf[5],"top"));}
else{
t2=((C_word*)t0)[2];
f_1106(t2,C_SCHEME_UNDEFINED);}}

/* k1497 in k1493 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_1106(t3,t2);}

/* k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_1106(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1106,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1165,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1475,tmp=(C_word)a,a+=2,tmp);
/* chicken-profile.scm:212: remove */
((C_proc4)C_fast_retrieve_symbol_proc(lf[55]))(4,*((C_word*)lf[55]+1),t6,t7,((C_word*)((C_word*)t0)[3])[1]);}

/* a1474 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1475(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1475,3,t0,t1,t2);}
if(C_truep(C_i_cadr(t2))){
t3=C_i_cadr(t2);
t4=C_i_zerop(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?C_retrieve2(lf[1],"no-unused"):C_SCHEME_FALSE));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1165,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[24]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1171,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1440,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1440(t7,t3,t1);}

/* map-loop176 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_1440(C_word t0,C_word t1,C_word t2){
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
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1440,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_i_caddr(t3);
t6=C_i_cadddr(t3);
t7=C_i_list_ref(t3,C_fix(4));
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1128,a[2]=t4,a[3]=t5,a[4]=t6,a[5]=t7,a[6]=((C_word*)t0)[2],a[7]=t1,a[8]=((C_word*)t0)[3],a[9]=t2,a[10]=((C_word*)t0)[4],tmp=(C_word)a,a+=11,tmp);
t9=C_i_car(t3);
/* chicken-profile.scm:207: ##sys#symbol->qualified-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t8,t9);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1126 in map-loop176 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1128,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1132,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[2])){
/* chicken-profile.scm:208: number->string */
C_number_to_string(3,0,t2,((C_word*)t0)[2]);}
else{
t3=t2;
f_1132(2,t3,lf[53]);}}

/* k1130 in k1126 in map-loop176 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1132,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1136,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t1,a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_a_i_divide(&a,2,((C_word*)t0)[2],C_fix(1000));
/* chicken-profile.scm:209: format-real */
f_1034(t2,t3,C_retrieve2(lf[2],"seconds-digits"));}

/* k1134 in k1130 in k1126 in map-loop176 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1136,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1140,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_a_i_divide(&a,2,((C_word*)t0)[2],C_fix(1000));
/* chicken-profile.scm:210: format-real */
f_1034(t2,t3,C_retrieve2(lf[3],"average-digits"));}

/* k1138 in k1134 in k1130 in k1126 in map-loop176 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1144,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* chicken-profile.scm:211: format-real */
f_1034(t2,((C_word*)t0)[2],C_retrieve2(lf[4],"percent-digits"));}

/* k1142 in k1138 in k1134 in k1130 in k1126 in map-loop176 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1144(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1144,2,t0,t1);}
t2=C_a_i_list5(&a,5,((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t4=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=C_slot(((C_word*)t0)[5],C_fix(1));
t7=((C_word*)((C_word*)t0)[4])[1];
f_1440(t7,((C_word*)t0)[3],t6);}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=C_slot(((C_word*)t0)[5],C_fix(1));
t7=((C_word*)((C_word*)t0)[4])[1];
f_1440(t7,((C_word*)t0)[3],t6);}}

/* k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[36],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1171,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=C_a_i_list5(&a,5,lf[38],lf[39],lf[40],lf[41],lf[42]);
t4=C_a_i_list5(&a,5,C_SCHEME_FALSE,C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1180,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* chicken-profile.scm:220: make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),t5,C_fix(2),C_make_character(32));}

/* k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[27],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1180,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1330,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_list5(&a,5,C_fix(0),C_fix(0),C_fix(0),C_fix(0),C_fix(0));
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);
/* chicken-profile.scm:221: fold */
((C_proc5)C_fast_retrieve_symbol_proc(lf[52]))(5,*((C_word*)lf[52]+1),t2,t3,t4,t5);}

/* a1329 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1330(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t18;
C_word ab[22],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1330,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=*((C_word*)lf[51]+1);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_i_check_list_2(t2,lf[24]);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1337,a[2]=t1,a[3]=t8,a[4]=t5,a[5]=t7,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1397,a[2]=t10,a[3]=t16,a[4]=t12,tmp=(C_word)a,a+=5,tmp));
t18=((C_word*)t16)[1];
f_1397(t18,t14,t2);}

/* map-loop237 in a1329 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_1397(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1397,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_string_length(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1335 in a1329 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1337,2,t0,t1);}
t2=((C_word*)t0)[6];
t3=C_i_check_list_2(t1,lf[24]);
t4=C_i_check_list_2(t2,lf[24]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1348,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1348(t8,((C_word*)t0)[2],t1,t2);}

/* map-loop216 in k1335 in a1329 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_1348(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_1348,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1381,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g222232 */
t9=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k1379 in map-loop216 in k1335 in a1329 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1381,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1361,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_1361(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_1361(t5,t4);}}

/* k1359 in k1379 in map-loop216 in k1335 in a1329 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_1361(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_1348(t5,((C_word*)t0)[2],t3,t4);}

/* k1181 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1185,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1272,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm:228: print-row */
t4=t2;
f_1185(t4,t3,((C_word*)t0)[2]);}

/* k1270 in k1181 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1275,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1308,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1316,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:229: reduce */
((C_proc5)C_fast_retrieve_symbol_proc(lf[49]))(5,*((C_word*)lf[49]+1),t4,*((C_word*)lf[50]+1),C_fix(0),((C_word*)t0)[2]);}

/* k1314 in k1270 in k1181 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1316,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[3]);
t3=C_a_i_minus(&a,2,t2,C_fix(1));
t4=C_a_i_times(&a,2,C_fix(2),t3);
t5=C_a_i_plus(&a,2,t1,t4);
/* chicken-profile.scm:229: make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),((C_word*)t0)[2],t5,C_make_character(45));}

/* k1306 in k1270 in k1181 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:229: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[43]+1)))(3,*((C_word*)lf[43]+1),((C_word*)t0)[2],t1);}

/* k1273 in k1270 in k1181 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1275,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[4])[1];
t3=C_i_check_list_2(t2,lf[48]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1283,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1283(t7,((C_word*)t0)[2],t2);}

/* for-each-loop311 in k1273 in k1270 in k1181 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_1283(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1283,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1293,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g312318 */
t5=((C_word*)t0)[2];
f_1185(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1291 in for-each-loop311 in k1273 in k1270 in k1181 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1283(t3,((C_word*)t0)[2],t2);}

/* print-row in k1181 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_1185(C_word t0,C_word t1,C_word t2){
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
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1185,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1193,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_check_list_2(t2,lf[24]);
t9=C_i_check_list_2(((C_word*)t0)[4],lf[24]);
t10=C_i_check_list_2(((C_word*)t0)[3],lf[24]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1206,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1208,a[2]=t5,a[3]=t13,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_1208(t15,t11,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* map-loop275 in print-row in k1181 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_1208(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1208,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1215,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t3,a[7]=t2,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_1215(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_1215(t6,C_SCHEME_FALSE);}}

/* k1213 in map-loop275 in print-row in k1181 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_1215(C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1215,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_slot(((C_word*)t0)[7],C_fix(0));
t4=C_slot(((C_word*)t0)[6],C_fix(0));
t5=C_slot(((C_word*)t0)[5],C_fix(0));
t6=C_a_i_list(&a,1,t5);
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_FALSE:C_i_car(t6));
t9=C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t6));
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_make_character(32):C_i_car(t10));
t13=C_i_nullp(t10);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t10));
if(C_truep(C_i_nullp(t14))){
t15=C_i_string_length(t3);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_988,a[2]=t3,a[3]=t2,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t17=C_fixnum_difference(t4,t15);
t18=C_i_fixnum_max(C_fix(0),t17);
/* chicken-profile.scm:166: make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),t16,t18,t12);}
else{
/* ##sys#error */
t15=*((C_word*)lf[46]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t2,lf[47],t14);}}
else{
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k986 in k1213 in map-loop275 in print-row in k1181 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* chicken-profile.scm:168: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(4,*((C_word*)lf[33]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}
else{
/* chicken-profile.scm:169: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(4,*((C_word*)lf[33]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}}

/* k1243 in k1213 in map-loop275 in print-row in k1181 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1245,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1221,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[8])[1])){
t4=t3;
f_1221(t4,C_i_setslot(((C_word*)((C_word*)t0)[8])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_1221(t5,t4);}}

/* k1219 in k1243 in k1213 in map-loop275 in print-row in k1181 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_1221(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[8])+1,((C_word*)t0)[7]);
t3=C_slot(((C_word*)t0)[6],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=C_slot(((C_word*)t0)[4],C_fix(1));
t6=((C_word*)((C_word*)t0)[3])[1];
f_1208(t6,((C_word*)t0)[2],t3,t4,t5);}

/* k1204 in print-row in k1181 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:227: string-join */
((C_proc4)C_fast_retrieve_symbol_proc(lf[44]))(4,*((C_word*)lf[44]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1191 in print-row in k1181 in k1178 in k1169 in k1163 in k1104 in k1101 in k1098 in k1095 in k1092 in k447 in loop in k1614 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:227: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[43]+1)))(3,*((C_word*)lf[43]+1),((C_word*)t0)[2],t1);}

/* k1604 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1606,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1609,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1612,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[37]))(2,*((C_word*)lf[37]+1),t3);}

/* k1610 in k1604 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1607 in k1604 in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* format-real in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_1034(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1034,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1088,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:172: truncate */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),t4,t2);}

/* k1086 in format-real in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1088,2,t0,t1);}
t2=C_i_inexact_to_exact(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1045,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-profile.scm:174: number->string */
C_number_to_string(3,0,t3,t2);}

/* k1043 in k1086 in format-real in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1045,2,t0,t1);}
t2=C_i_greaterp(((C_word*)t0)[5],C_fix(0));
t3=(C_truep(t2)?lf[31]:lf[32]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1053,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1057,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1069,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1077,a[2]=((C_word*)t0)[5],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:180: - */
C_minus(5,0,t7,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(-1));}

/* k1075 in k1043 in k1086 in format-real in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1077,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1081,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:180: expt */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[36]+1)))(4,*((C_word*)lf[36]+1),t2,C_fix(10),((C_word*)t0)[2]);}

/* k1079 in k1075 in k1043 in k1086 in format-real in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1081,2,t0,t1);}
t2=C_a_i_times(&a,2,((C_word*)t0)[3],t1);
/* chicken-profile.scm:179: truncate */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),((C_word*)t0)[2],t2);}

/* k1067 in k1043 in k1086 in format-real in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_inexact_to_exact(t1);
/* chicken-profile.scm:177: number->string */
C_number_to_string(3,0,((C_word*)t0)[2],t2);}

/* k1055 in k1043 in k1086 in format-real in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1057,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* chicken-profile.scm:176: substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(5,*((C_word*)lf[34]+1),((C_word*)t0)[2],t1,C_fix(1),t2);}

/* k1051 in k1043 in k1086 in format-real in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_1053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:173: string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(5,*((C_word*)lf[33]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* read-profile in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_844,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_848,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:154: make-hash-table */
((C_proc3)C_fast_retrieve_symbol_proc(lf[28]))(3,*((C_word*)lf[28]+1),t2,*((C_word*)lf[29]+1));}

/* k846 in read-profile in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_848,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_851,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_858,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:155: read */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(2,*((C_word*)lf[23]+1),t3);}

/* k856 in k846 in read-profile in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_858,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_860,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_860(t5,((C_word*)t0)[2],t1);}

/* doloop63 in k856 in k846 in read-profile in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_860(C_word t0,C_word t1,C_word t2){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_860,NULL,3,t0,t1,t2);}
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_870,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_896,a[2]=t6,a[3]=t8,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t10=C_i_car(t2);
/* chicken-profile.scm:160: hash-table-ref/default */
((C_proc5)C_fast_retrieve_symbol_proc(lf[26]))(5,*((C_word*)lf[26]+1),t9,((C_word*)t0)[2],t10,lf[27]);}}

/* k894 in doloop63 in k856 in k846 in read-profile in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_896,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[7]);
t3=C_i_check_list_2(t1,lf[24]);
t4=C_i_check_list_2(t2,lf[24]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_908,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_910,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_910(t9,t5,t1,t2);}

/* map-loop68 in k894 in doloop63 in k856 in k846 in read-profile in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_910(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_910,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_920,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
if(C_truep(t7)){
if(C_truep(t8)){
t9=C_a_i_plus(&a,2,t7,t8);
t10=t6;
f_920(t10,C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST));}
else{
t9=t6;
f_920(t9,C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST));}}
else{
t9=t6;
f_920(t9,C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST));}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k918 in map-loop68 in k894 in doloop63 in k856 in k846 in read-profile in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_920(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_920,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_923,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t3=t2;
f_923(t3,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t1));}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t4=t2;
f_923(t4,t3);}}

/* k921 in k918 in map-loop68 in k894 in doloop63 in k856 in k846 in read-profile in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_923(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_910(t5,((C_word*)t0)[2],t3,t4);}

/* k906 in k894 in doloop63 in k856 in k846 in read-profile in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:157: hash-table-set! */
((C_proc5)C_fast_retrieve_symbol_proc(lf[25]))(5,*((C_word*)lf[25]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k868 in doloop63 in k856 in k846 in read-profile in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:155: read */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(2,*((C_word*)lf[23]+1),t2);}

/* k875 in k868 in doloop63 in k856 in k846 in read-profile in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
f_860(t2,((C_word*)t0)[2],t1);}

/* k849 in k846 in read-profile in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:162: hash-table->alist */
((C_proc3)C_fast_retrieve_symbol_proc(lf[22]))(3,*((C_word*)lf[22]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* sort-by-name in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_760(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_760,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_768,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(t2);
/* chicken-profile.scm:135: symbol->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t4,t5);}

/* k766 in sort-by-name in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_772,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* chicken-profile.scm:135: symbol->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t2,t3);}

/* k770 in k766 in sort-by-name in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:135: string<? */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(4,*((C_word*)lf[18]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* sort-by-avg in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_731(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_731,4,t0,t1,t2,t3);}
t4=C_i_cadddr(t2);
t5=C_i_cadddr(t3);
if(C_truep(C_i_eqvp(t4,t5))){
t6=C_i_caddr(t2);
t7=C_i_caddr(t3);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_greaterp(t6,t7));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_greaterp(t4,t5));}}

/* sort-by-time in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_702(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_702,4,t0,t1,t2,t3);}
t4=C_i_caddr(t2);
t5=C_i_caddr(t3);
if(C_truep(C_i_nequalp(t4,t5))){
t6=C_i_cadr(t2);
t7=C_i_cadr(t3);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_greaterp(t6,t7));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_greaterp(t4,t5));}}

/* sort-by-calls in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_667(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_667,4,t0,t1,t2,t3);}
t4=C_i_cadr(t2);
t5=C_i_cadr(t3);
if(C_truep(C_i_eqvp(t4,t5))){
t6=C_i_caddr(t2);
t7=C_i_caddr(t3);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_greaterp(t6,t7));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t4)?(C_truep(t5)?C_i_greaterp(t4,t5):C_SCHEME_TRUE):C_SCHEME_TRUE));}}

/* print-usage in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_fcall f_392(C_word t1){
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
C_word ab[27],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_392,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_396,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_403,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[9],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,C_retrieve2(lf[4],"percent-digits"),t4);
t6=C_a_i_cons(&a,2,lf[10],t5);
t7=C_a_i_cons(&a,2,C_retrieve2(lf[3],"average-digits"),t6);
t8=C_a_i_cons(&a,2,lf[11],t7);
t9=C_a_i_cons(&a,2,C_retrieve2(lf[2],"seconds-digits"),t8);
t10=C_a_i_cons(&a,2,lf[12],t9);
/* chicken-profile.scm:45: ##sys#print-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[13]))(3,*((C_word*)lf[13]+1),t3,t10);}

/* k401 in print-usage in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:45: display */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(3,*((C_word*)lf[8]+1),((C_word*)t0)[2],t1);}

/* k394 in print-usage in k382 in k379 in k376 in k373 in k370 in k367 in k364 */
static void C_ccall f_396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:65: exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[7]))(3,*((C_word*)lf[7]+1),((C_word*)t0)[2],C_fix(64));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[111] = {
{"toplevel:chicken_2dprofile_2escm",(void*)C_toplevel},
{"f_366:chicken_2dprofile_2escm",(void*)f_366},
{"f_369:chicken_2dprofile_2escm",(void*)f_369},
{"f_372:chicken_2dprofile_2escm",(void*)f_372},
{"f_375:chicken_2dprofile_2escm",(void*)f_375},
{"f_378:chicken_2dprofile_2escm",(void*)f_378},
{"f_381:chicken_2dprofile_2escm",(void*)f_381},
{"f_384:chicken_2dprofile_2escm",(void*)f_384},
{"f_1616:chicken_2dprofile_2escm",(void*)f_1616},
{"f_439:chicken_2dprofile_2escm",(void*)f_439},
{"f_641:chicken_2dprofile_2escm",(void*)f_641},
{"f_635:chicken_2dprofile_2escm",(void*)f_635},
{"f_827:chicken_2dprofile_2escm",(void*)f_827},
{"f_831:chicken_2dprofile_2escm",(void*)f_831},
{"f_835:chicken_2dprofile_2escm",(void*)f_835},
{"f_792:chicken_2dprofile_2escm",(void*)f_792},
{"f_802:chicken_2dprofile_2escm",(void*)f_802},
{"f_594:chicken_2dprofile_2escm",(void*)f_594},
{"f_577:chicken_2dprofile_2escm",(void*)f_577},
{"f_570:chicken_2dprofile_2escm",(void*)f_570},
{"f_561:chicken_2dprofile_2escm",(void*)f_561},
{"f_554:chicken_2dprofile_2escm",(void*)f_554},
{"f_536:chicken_2dprofile_2escm",(void*)f_536},
{"f_513:chicken_2dprofile_2escm",(void*)f_513},
{"f_533:chicken_2dprofile_2escm",(void*)f_533},
{"f_494:chicken_2dprofile_2escm",(void*)f_494},
{"f_456:chicken_2dprofile_2escm",(void*)f_456},
{"f_474:chicken_2dprofile_2escm",(void*)f_474},
{"f_482:chicken_2dprofile_2escm",(void*)f_482},
{"f_486:chicken_2dprofile_2escm",(void*)f_486},
{"f_472:chicken_2dprofile_2escm",(void*)f_472},
{"f_459:chicken_2dprofile_2escm",(void*)f_459},
{"f_449:chicken_2dprofile_2escm",(void*)f_449},
{"f_1094:chicken_2dprofile_2escm",(void*)f_1094},
{"f_1097:chicken_2dprofile_2escm",(void*)f_1097},
{"f_1595:chicken_2dprofile_2escm",(void*)f_1595},
{"f_1100:chicken_2dprofile_2escm",(void*)f_1100},
{"f_1560:chicken_2dprofile_2escm",(void*)f_1560},
{"f_1589:chicken_2dprofile_2escm",(void*)f_1589},
{"f_1558:chicken_2dprofile_2escm",(void*)f_1558},
{"f_1505:chicken_2dprofile_2escm",(void*)f_1505},
{"f_1523:chicken_2dprofile_2escm",(void*)f_1523},
{"f_1530:chicken_2dprofile_2escm",(void*)f_1530},
{"f_1103:chicken_2dprofile_2escm",(void*)f_1103},
{"f_1495:chicken_2dprofile_2escm",(void*)f_1495},
{"f_1499:chicken_2dprofile_2escm",(void*)f_1499},
{"f_1106:chicken_2dprofile_2escm",(void*)f_1106},
{"f_1475:chicken_2dprofile_2escm",(void*)f_1475},
{"f_1165:chicken_2dprofile_2escm",(void*)f_1165},
{"f_1440:chicken_2dprofile_2escm",(void*)f_1440},
{"f_1128:chicken_2dprofile_2escm",(void*)f_1128},
{"f_1132:chicken_2dprofile_2escm",(void*)f_1132},
{"f_1136:chicken_2dprofile_2escm",(void*)f_1136},
{"f_1140:chicken_2dprofile_2escm",(void*)f_1140},
{"f_1144:chicken_2dprofile_2escm",(void*)f_1144},
{"f_1171:chicken_2dprofile_2escm",(void*)f_1171},
{"f_1180:chicken_2dprofile_2escm",(void*)f_1180},
{"f_1330:chicken_2dprofile_2escm",(void*)f_1330},
{"f_1397:chicken_2dprofile_2escm",(void*)f_1397},
{"f_1337:chicken_2dprofile_2escm",(void*)f_1337},
{"f_1348:chicken_2dprofile_2escm",(void*)f_1348},
{"f_1381:chicken_2dprofile_2escm",(void*)f_1381},
{"f_1361:chicken_2dprofile_2escm",(void*)f_1361},
{"f_1183:chicken_2dprofile_2escm",(void*)f_1183},
{"f_1272:chicken_2dprofile_2escm",(void*)f_1272},
{"f_1316:chicken_2dprofile_2escm",(void*)f_1316},
{"f_1308:chicken_2dprofile_2escm",(void*)f_1308},
{"f_1275:chicken_2dprofile_2escm",(void*)f_1275},
{"f_1283:chicken_2dprofile_2escm",(void*)f_1283},
{"f_1293:chicken_2dprofile_2escm",(void*)f_1293},
{"f_1185:chicken_2dprofile_2escm",(void*)f_1185},
{"f_1208:chicken_2dprofile_2escm",(void*)f_1208},
{"f_1215:chicken_2dprofile_2escm",(void*)f_1215},
{"f_988:chicken_2dprofile_2escm",(void*)f_988},
{"f_1245:chicken_2dprofile_2escm",(void*)f_1245},
{"f_1221:chicken_2dprofile_2escm",(void*)f_1221},
{"f_1206:chicken_2dprofile_2escm",(void*)f_1206},
{"f_1193:chicken_2dprofile_2escm",(void*)f_1193},
{"f_1606:chicken_2dprofile_2escm",(void*)f_1606},
{"f_1612:chicken_2dprofile_2escm",(void*)f_1612},
{"f_1609:chicken_2dprofile_2escm",(void*)f_1609},
{"f_1034:chicken_2dprofile_2escm",(void*)f_1034},
{"f_1088:chicken_2dprofile_2escm",(void*)f_1088},
{"f_1045:chicken_2dprofile_2escm",(void*)f_1045},
{"f_1077:chicken_2dprofile_2escm",(void*)f_1077},
{"f_1081:chicken_2dprofile_2escm",(void*)f_1081},
{"f_1069:chicken_2dprofile_2escm",(void*)f_1069},
{"f_1057:chicken_2dprofile_2escm",(void*)f_1057},
{"f_1053:chicken_2dprofile_2escm",(void*)f_1053},
{"f_844:chicken_2dprofile_2escm",(void*)f_844},
{"f_848:chicken_2dprofile_2escm",(void*)f_848},
{"f_858:chicken_2dprofile_2escm",(void*)f_858},
{"f_860:chicken_2dprofile_2escm",(void*)f_860},
{"f_896:chicken_2dprofile_2escm",(void*)f_896},
{"f_910:chicken_2dprofile_2escm",(void*)f_910},
{"f_920:chicken_2dprofile_2escm",(void*)f_920},
{"f_923:chicken_2dprofile_2escm",(void*)f_923},
{"f_908:chicken_2dprofile_2escm",(void*)f_908},
{"f_870:chicken_2dprofile_2escm",(void*)f_870},
{"f_877:chicken_2dprofile_2escm",(void*)f_877},
{"f_851:chicken_2dprofile_2escm",(void*)f_851},
{"f_760:chicken_2dprofile_2escm",(void*)f_760},
{"f_768:chicken_2dprofile_2escm",(void*)f_768},
{"f_772:chicken_2dprofile_2escm",(void*)f_772},
{"f_731:chicken_2dprofile_2escm",(void*)f_731},
{"f_702:chicken_2dprofile_2escm",(void*)f_702},
{"f_667:chicken_2dprofile_2escm",(void*)f_667},
{"f_392:chicken_2dprofile_2escm",(void*)f_392},
{"f_403:chicken_2dprofile_2escm",(void*)f_403},
{"f_396:chicken_2dprofile_2escm",(void*)f_396},
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
