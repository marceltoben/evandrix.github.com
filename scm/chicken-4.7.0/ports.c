/* Generated from ports.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: ports.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file ports.c
   unit: ports
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[47];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,20),40,102,95,52,48,51,32,102,110,54,50,32,116,104,117,110,107,54,51,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,120,115,55,50,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,20),40,102,95,52,50,55,32,102,110,54,57,32,116,104,117,110,107,55,48,41,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,97,99,99,56,48,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,26),40,102,95,52,53,57,32,102,110,55,54,32,97,99,99,55,55,32,116,104,117,110,107,55,56,41,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,19),40,102,95,54,53,56,32,98,117,102,49,52,55,32,110,49,52,56,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,49,48,49,32,105,49,48,51,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,19),40,102,95,54,54,51,32,98,117,102,49,52,57,32,110,49,53,48,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,110,49,49,55,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,6),40,97,54,56,48,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,11),40,97,54,56,54,32,120,49,53,49,41,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,34),40,102,95,54,50,50,32,115,114,99,49,51,49,32,100,101,115,116,49,51,50,32,46,32,116,109,112,49,51,48,49,51,51,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,17),40,103,49,54,51,32,103,49,55,52,49,55,53,49,55,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,50,32,103,49,54,56,49,56,48,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,11),40,97,55,50,53,32,115,49,53,57,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,56,54,32,103,49,57,50,49,57,54,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,6),40,97,55,54,50,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,18),40,102,95,55,50,48,32,46,32,112,111,114,116,115,49,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,6),40,97,56,48,51,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,6),40,97,56,51,56,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,6),40,97,56,53,56,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,110,50,50,52,32,99,50,50,53,41};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,33),40,97,56,57,51,32,112,50,49,57,32,110,50,50,48,32,100,101,115,116,50,50,49,32,115,116,97,114,116,50,50,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,24),40,102,95,55,57,53,32,112,49,50,48,49,32,46,32,112,111,114,116,115,50,48,50,41};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,6),40,97,57,53,53,41,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,6),40,97,57,54,48,41,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,6),40,97,57,54,54,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,24),40,102,95,57,52,55,32,112,111,114,116,50,51,51,32,116,104,117,110,107,50,51,52,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,6),40,97,57,56,48,41,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,6),40,97,57,56,53,41,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,6),40,97,57,57,49,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,24),40,102,95,57,55,50,32,112,111,114,116,50,52,55,32,116,104,117,110,107,50,52,56,41};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,49,48,48,53,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,7),40,97,49,48,49,48,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,7),40,97,49,48,49,54,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,24),40,102,95,57,57,55,32,112,111,114,116,50,54,49,32,116,104,117,110,107,50,54,50,41};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,23),40,102,95,49,48,50,50,32,115,116,114,50,55,53,32,112,114,111,99,50,55,54,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,16),40,102,95,49,48,51,49,32,112,114,111,99,50,55,57,41};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,49,48,53,49,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,49,48,53,54,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,7),40,97,49,48,54,50,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,24),40,102,95,49,48,52,51,32,115,116,114,50,56,51,32,116,104,117,110,107,50,56,52,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,49,48,55,54,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,7),40,97,49,48,56,49,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,49,48,57,48,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,17),40,102,95,49,48,54,56,32,116,104,117,110,107,50,57,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,12),40,97,49,49,52,48,32,112,51,51,51,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,12),40,97,49,49,54,49,32,112,51,51,57,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,12),40,97,49,49,56,50,32,112,51,52,54,41,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,12),40,97,49,49,57,49,32,112,51,52,56,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,47),40,102,95,49,48,57,54,32,114,101,97,100,51,49,52,32,114,101,97,100,121,63,51,49,53,32,99,108,111,115,101,51,49,54,32,46,32,116,109,112,51,49,51,51,49,55,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,17),40,97,49,50,54,54,32,112,51,54,56,32,99,51,54,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,17),40,97,49,50,55,54,32,112,51,55,48,32,115,51,55,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,12),40,97,49,50,56,50,32,112,51,55,50,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,12),40,97,49,50,57,49,32,112,51,55,52,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,38),40,102,95,49,50,52,57,32,119,114,105,116,101,51,53,56,32,99,108,111,115,101,51,53,57,32,46,32,116,109,112,51,53,55,51,54,48,41,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_ports_toplevel)
C_externexport void C_ccall C_ports_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_401)
static void C_ccall f_401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1249)
static void C_ccall f_1249(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1249)
static void C_ccall f_1249r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1253)
static void C_ccall f_1253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1262)
static void C_ccall f_1262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1283)
static void C_ccall f_1283(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1287)
static void C_ccall f_1287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1267)
static void C_ccall f_1267(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1096)
static void C_ccall f_1096(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_1096)
static void C_ccall f_1096r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1136)
static void C_ccall f_1136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1139)
static void C_ccall f_1139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1192)
static void C_ccall f_1192(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1183)
static void C_ccall f_1183(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1187)
static void C_ccall f_1187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1162)
static void C_ccall f_1162(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1178)
static void C_ccall f_1178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1141)
static void C_ccall f_1141(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1068)
static void C_ccall f_1068(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1072)
static void C_ccall f_1072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1091)
static void C_ccall f_1091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1082)
static void C_ccall f_1082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1086)
static void C_ccall f_1086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1077)
static void C_ccall f_1077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1043)
static void C_ccall f_1043(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1047)
static void C_ccall f_1047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1063)
static void C_ccall f_1063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1057)
static void C_ccall f_1057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1052)
static void C_ccall f_1052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1031)
static void C_ccall f_1031(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1035)
static void C_ccall f_1035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1038)
static void C_ccall f_1038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1022)
static void C_ccall f_1022(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1026)
static void C_ccall f_1026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_997)
static void C_ccall f_997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1001)
static void C_ccall f_1001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1017)
static void C_ccall f_1017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1011)
static void C_ccall f_1011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1006)
static void C_ccall f_1006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_972)
static void C_ccall f_972(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_976)
static void C_ccall f_976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_992)
static void C_ccall f_992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_986)
static void C_ccall f_986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_981)
static void C_ccall f_981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_947)
static void C_ccall f_947(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_967)
static void C_ccall f_967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_961)
static void C_ccall f_961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_956)
static void C_ccall f_956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_894)
static void C_ccall f_894(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_900)
static void C_fcall f_900(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_916)
static void C_ccall f_916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_919)
static void C_fcall f_919(C_word t0,C_word t1) C_noret;
C_noret_decl(f_859)
static void C_ccall f_859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_865)
static void C_fcall f_865(C_word t0,C_word t1) C_noret;
C_noret_decl(f_875)
static void C_ccall f_875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_839)
static void C_ccall f_839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_810)
static void C_fcall f_810(C_word t0,C_word t1) C_noret;
C_noret_decl(f_820)
static void C_ccall f_820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_720)
static void C_ccall f_720(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_720)
static void C_ccall f_720r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_763)
static void C_ccall f_763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_772)
static void C_fcall f_772(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_782)
static void C_ccall f_782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_726)
static void C_ccall f_726(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_740)
static void C_fcall f_740(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_750)
static void C_ccall f_750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_728)
static void C_fcall f_728(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_622)
static void C_ccall f_622(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_622)
static void C_ccall f_622r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_551)
static void C_fcall f_551(C_word t0,C_word t1) C_noret;
C_noret_decl(f_555)
static void C_ccall f_555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_564)
static void C_ccall f_564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_687)
static void C_fcall f_687(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_681)
static void C_fcall f_681(C_word t0,C_word t1) C_noret;
C_noret_decl(f_573)
static void C_ccall f_573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_578)
static void C_fcall f_578(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_620)
static void C_ccall f_620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_582)
static void C_fcall f_582(C_word t0,C_word t1) C_noret;
C_noret_decl(f_585)
static void C_ccall f_585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_489)
static void C_ccall f_489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_494)
static void C_fcall f_494(C_word t0,C_word t1) C_noret;
C_noret_decl(f_498)
static void C_ccall f_498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_507)
static void C_ccall f_507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_663)
static void C_ccall f_663(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_518)
static void C_fcall f_518(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_528)
static void C_ccall f_528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_658)
static void C_ccall f_658(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_459)
static void C_ccall f_459(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_465)
static void C_fcall f_465(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_469)
static void C_ccall f_469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_482)
static void C_ccall f_482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_427)
static void C_ccall f_427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_433)
static void C_fcall f_433(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_437)
static void C_ccall f_437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_457)
static void C_ccall f_457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_403)
static void C_ccall f_403(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_409)
static void C_fcall f_409(C_word t0,C_word t1) C_noret;
C_noret_decl(f_413)
static void C_ccall f_413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_422)
static void C_ccall f_422(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_900)
static void C_fcall trf_900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_900(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_900(t0,t1,t2,t3);}

C_noret_decl(trf_919)
static void C_fcall trf_919(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_919(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_919(t0,t1);}

C_noret_decl(trf_865)
static void C_fcall trf_865(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_865(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_865(t0,t1);}

C_noret_decl(trf_810)
static void C_fcall trf_810(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_810(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_810(t0,t1);}

C_noret_decl(trf_772)
static void C_fcall trf_772(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_772(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_772(t0,t1,t2);}

C_noret_decl(trf_740)
static void C_fcall trf_740(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_740(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_740(t0,t1,t2);}

C_noret_decl(trf_728)
static void C_fcall trf_728(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_728(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_728(t0,t1,t2);}

C_noret_decl(trf_551)
static void C_fcall trf_551(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_551(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_551(t0,t1);}

C_noret_decl(trf_687)
static void C_fcall trf_687(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_687(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_687(t0,t1,t2);}

C_noret_decl(trf_681)
static void C_fcall trf_681(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_681(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_681(t0,t1);}

C_noret_decl(trf_578)
static void C_fcall trf_578(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_578(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_578(t0,t1,t2);}

C_noret_decl(trf_582)
static void C_fcall trf_582(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_582(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_582(t0,t1);}

C_noret_decl(trf_494)
static void C_fcall trf_494(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_494(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_494(t0,t1);}

C_noret_decl(trf_518)
static void C_fcall trf_518(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_518(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_518(t0,t1,t2);}

C_noret_decl(trf_465)
static void C_fcall trf_465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_465(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_465(t0,t1,t2);}

C_noret_decl(trf_433)
static void C_fcall trf_433(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_433(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_433(t0,t1,t2);}

C_noret_decl(trf_409)
static void C_fcall trf_409(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_409(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_409(t0,t1);}

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

C_noret_decl(tr6)
static void C_fcall tr6(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6(C_proc6 k){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
(k)(6,t0,t1,t2,t3,t4,t5);}

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

C_noret_decl(tr3r)
static void C_fcall tr3r(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3r(C_proc3 k){
int n;
C_word *a,t3;
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
n=C_rest_count(0);
a=C_alloc(n*3);
t3=C_restore_rest(a,n);
(k)(t0,t1,t2,t3);}

C_noret_decl(tr5r)
static void C_fcall tr5r(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5r(C_proc5 k){
int n;
C_word *a,t5;
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
n=C_rest_count(0);
a=C_alloc(n*3);
t5=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr4r)
static void C_fcall tr4r(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4r(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n*3);
t4=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_ports_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_ports_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("ports_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(430)){
C_save(t1);
C_rereclaim2(430*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,47);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],13,"port-for-each");
lf[3]=C_h_intern(&lf[3],8,"port-map");
lf[4]=C_h_intern(&lf[4],7,"reverse");
lf[5]=C_h_intern(&lf[5],9,"port-fold");
lf[6]=C_h_intern(&lf[6],9,"read-char");
lf[7]=C_h_intern(&lf[7],10,"write-char");
lf[8]=C_h_intern(&lf[8],9,"copy-port");
lf[9]=C_h_intern(&lf[9],12,"write-string");
lf[10]=C_h_intern(&lf[10],12,"read-string!");
lf[11]=C_h_intern(&lf[11],11,"make-string");
lf[12]=C_h_intern(&lf[12],9,"\003syserror");
lf[13]=C_h_intern(&lf[13],19,"make-broadcast-port");
lf[14]=C_h_intern(&lf[14],8,"for-each");
lf[15]=C_h_intern(&lf[15],12,"flush-output");
lf[16]=C_h_intern(&lf[16],16,"make-output-port");
lf[17]=C_h_intern(&lf[17],4,"void");
lf[18]=C_h_intern(&lf[18],22,"make-concatenated-port");
lf[19]=C_h_intern(&lf[19],18,"\003sysread-char/port");
lf[20]=C_h_intern(&lf[20],11,"char-ready\077");
lf[21]=C_h_intern(&lf[21],9,"peek-char");
lf[22]=C_h_intern(&lf[22],15,"make-input-port");
lf[23]=C_h_intern(&lf[23],20,"with-input-from-port");
lf[24]=C_h_intern(&lf[24],18,"\003sysstandard-input");
lf[25]=C_h_intern(&lf[25],16,"\003sysdynamic-wind");
lf[26]=C_h_intern(&lf[26],14,"\003syscheck-port");
lf[27]=C_h_intern(&lf[27],19,"with-output-to-port");
lf[28]=C_h_intern(&lf[28],19,"\003sysstandard-output");
lf[29]=C_h_intern(&lf[29],21,"with-output-from-port");
lf[30]=C_h_intern(&lf[30],25,"with-error-output-to-port");
lf[31]=C_h_intern(&lf[31],18,"\003sysstandard-error");
lf[32]=C_h_intern(&lf[32],27,"with-error-output-from-port");
lf[33]=C_h_intern(&lf[33],22,"call-with-input-string");
lf[34]=C_h_intern(&lf[34],17,"open-input-string");
lf[35]=C_h_intern(&lf[35],23,"call-with-output-string");
lf[36]=C_h_intern(&lf[36],17,"get-output-string");
lf[37]=C_h_intern(&lf[37],18,"open-output-string");
lf[38]=C_h_intern(&lf[38],22,"with-input-from-string");
lf[39]=C_h_intern(&lf[39],21,"with-output-to-string");
lf[40]=C_h_intern(&lf[40],18,"\003sysset-port-data!");
lf[41]=C_h_intern(&lf[41],13,"\003sysmake-port");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\010(custom)");
lf[43]=C_h_intern(&lf[43],6,"custom");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\010(custom)");
lf[45]=C_h_intern(&lf[45],17,"register-feature!");
lf[46]=C_h_intern(&lf[46],5,"ports");
C_register_lf2(lf,47,create_ptable());
t2=C_mutate(&lf[0] /* (set! c152 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_401,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ports.scm:40: register-feature! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(3,*((C_word*)lf[45]+1),t3,lf[46]);}

/* k399 */
static void C_ccall f_401(C_word c,C_word t0,C_word t1){
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
C_word ab[47],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_401,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! port-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_403,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[3]+1 /* (set! port-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_427,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[5]+1 /* (set! port-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_459,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t5=*((C_word*)lf[6]+1);
t6=*((C_word*)lf[7]+1);
t7=C_mutate((C_word*)lf[8]+1 /* (set! copy-port ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_622,a[2]=t6,a[3]=t5,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp));
t8=C_mutate((C_word*)lf[13]+1 /* (set! make-broadcast-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_720,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[18]+1 /* (set! make-concatenated-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_795,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[23]+1 /* (set! with-input-from-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_947,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[27]+1 /* (set! with-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_972,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[30]+1 /* (set! with-error-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_997,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[33]+1 /* (set! call-with-input-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1022,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[35]+1 /* (set! call-with-output-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1031,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[38]+1 /* (set! with-input-from-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1043,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[39]+1 /* (set! with-output-to-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1068,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[22]+1 /* (set! make-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1096,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[16]+1 /* (set! make-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1249,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t19=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,C_SCHEME_UNDEFINED);}

/* f_1249 in k399 */
static void C_ccall f_1249(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_1249r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1249r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1249r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1253,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_1253(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_1253(2,t7,C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k1251 */
static void C_ccall f_1253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[32],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1253,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1267,a[2]=((C_word*)t0)[4],a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1277,a[2]=((C_word*)t0)[4],a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1283,a[2]=((C_word*)t0)[3],a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1292,a[2]=t1,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_vector(&a,9,C_SCHEME_FALSE,C_SCHEME_FALSE,t2,t3,t4,t5,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t7=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1262,a[2]=t7,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:265: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(6,*((C_word*)lf[41]+1),t8,C_SCHEME_FALSE,t6,lf[44],lf[43]);}

/* k1260 in k1251 */
static void C_ccall f_1262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1262,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1265,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:266: ##sys#set-port-data! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,t1,((C_word*)t0)[2]);}

/* k1263 in k1260 in k1251 */
static void C_ccall f_1265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a1291 in k1251 */
static void C_ccall f_1292(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1292,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
/* ports.scm:260: flush */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a1282 in k1251 */
static void C_ccall f_1283(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1283,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1287,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:257: close */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k1285 in a1282 in k1251 */
static void C_ccall f_1287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[2],C_fix(8),C_SCHEME_TRUE));}

/* a1276 in k1251 */
static void C_ccall f_1277(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1277,4,t0,t1,t2,t3);}
/* ports.scm:255: write */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1266 in k1251 */
static void C_ccall f_1267(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[2],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1267,4,t0,t1,t2,t3);}
t4=C_a_i_string(&a,1,t3);
/* ports.scm:253: write */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t1,t4);}

/* f_1096 in k399 */
static void C_ccall f_1096(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+35)){
C_save_and_reclaim((void*)tr5r,(void*)f_1096r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_1096r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_1096r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word *a=C_alloc(35);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=C_i_nullp(t5);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_FALSE:C_i_car(t13));
t16=C_i_nullp(t13);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t18=C_i_nullp(t17);
t19=(C_truep(t18)?C_SCHEME_FALSE:C_i_car(t17));
t20=C_i_nullp(t17);
t21=(C_truep(t20)?C_SCHEME_END_OF_LIST:C_i_cdr(t17));
if(C_truep(C_i_nullp(t21))){
t22=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1141,a[2]=t2,a[3]=t7,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp);
t23=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1162,a[2]=t2,a[3]=t7,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp);
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1183,a[2]=t4,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp);
t25=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1192,a[2]=t3,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp);
t26=C_a_i_vector(&a,10,t22,t23,C_SCHEME_FALSE,C_SCHEME_FALSE,t24,C_SCHEME_FALSE,t25,t11,t15,t19);
t27=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t28=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1136,a[2]=t27,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:242: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(6,*((C_word*)lf[41]+1),t28,C_SCHEME_TRUE,t26,lf[42],lf[43]);}
else{
/* ##sys#error */
t22=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t22+1)))(4,t22,t1,lf[0],t21);}}

/* k1134 */
static void C_ccall f_1136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1136,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1139,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:243: ##sys#set-port-data! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,t1,((C_word*)t0)[2]);}

/* k1137 in k1134 */
static void C_ccall f_1139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* a1191 */
static void C_ccall f_1192(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1192,3,t0,t1,t2);}
/* ports.scm:237: ready? */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}

/* a1182 */
static void C_ccall f_1183(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1183,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1187,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:233: close */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k1185 in a1182 */
static void C_ccall f_1187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[2],C_fix(8),C_SCHEME_TRUE));}

/* a1161 */
static void C_ccall f_1162(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1162,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[3])){
/* ports.scm:224: peek */
t4=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}
else{
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1178,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:227: read */
t5=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t4);}}}

/* k1176 in a1161 */
static void C_ccall f_1178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[3],C_fix(10),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* a1140 */
static void C_ccall f_1141(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1141,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[3])){
/* ports.scm:217: read */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}
else{
if(C_truep(t3)){
t4=C_i_set_i_slot(t2,C_fix(10),C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
/* ports.scm:221: read */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}}}

/* f_1068 in k399 */
static void C_ccall f_1068(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1068,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1072,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:200: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[37]+1)))(2,*((C_word*)lf[37]+1),t3);}

/* k1070 */
static void C_ccall f_1072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1072,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1077,a[2]=t3,a[3]=t5,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1082,a[2]=((C_word*)t0)[3],a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1091,a[2]=t5,a[3]=t3,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a1090 in k1070 */
static void C_ccall f_1091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1091,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[28]+1));
t3=C_mutate((C_word*)lf[28]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a1081 in k1070 */
static void C_ccall f_1082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1082,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1086,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ports.scm:201: thunk */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k1084 in a1081 in k1070 */
static void C_ccall f_1086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:202: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[36]+1)))(3,*((C_word*)lf[36]+1),((C_word*)t0)[2],*((C_word*)lf[28]+1));}

/* a1076 in k1070 */
static void C_ccall f_1077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1077,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[28]+1));
t3=C_mutate((C_word*)lf[28]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_1043 in k399 */
static void C_ccall f_1043(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1043,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1047,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:195: open-input-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(3,*((C_word*)lf[34]+1),t4,t2);}

/* k1045 */
static void C_ccall f_1047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1047,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1052,a[2]=t3,a[3]=t5,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1057,a[2]=((C_word*)t0)[3],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1063,a[2]=t5,a[3]=t3,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a1062 in k1045 */
static void C_ccall f_1063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1063,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[24]+1));
t3=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a1056 in k1045 */
static void C_ccall f_1057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1057,2,t0,t1);}
/* ports.scm:196: thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,t1);}

/* a1051 in k1045 */
static void C_ccall f_1052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1052,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[24]+1));
t3=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_1031 in k399 */
static void C_ccall f_1031(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1031,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1035,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:189: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[37]+1)))(2,*((C_word*)lf[37]+1),t3);}

/* k1033 */
static void C_ccall f_1035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1035,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1038,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:190: proc */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}

/* k1036 in k1033 */
static void C_ccall f_1038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:191: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[36]+1)))(3,*((C_word*)lf[36]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_1022 in k399 */
static void C_ccall f_1022(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1022,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1026,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:184: open-input-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(3,*((C_word*)lf[34]+1),t4,t2);}

/* k1024 */
static void C_ccall f_1026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:185: proc */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* f_997 in k399 */
static void C_ccall f_997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_997,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1001,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ports.scm:176: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(4,*((C_word*)lf[26]+1),t4,t2,lf[32]);}

/* k999 */
static void C_ccall f_1001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1001,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1006,a[2]=t3,a[3]=t5,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1011,a[2]=((C_word*)t0)[3],a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1017,a[2]=t5,a[3]=t3,a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a1016 in k999 */
static void C_ccall f_1017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1017,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[31]+1));
t3=C_mutate((C_word*)lf[31]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a1010 in k999 */
static void C_ccall f_1011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1011,2,t0,t1);}
/* ports.scm:178: thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,t1);}

/* a1005 in k999 */
static void C_ccall f_1006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1006,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[31]+1));
t3=C_mutate((C_word*)lf[31]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_972 in k399 */
static void C_ccall f_972(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_972,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_976,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ports.scm:171: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(4,*((C_word*)lf[26]+1),t4,t2,lf[29]);}

/* k974 */
static void C_ccall f_976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_976,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_981,a[2]=t3,a[3]=t5,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_986,a[2]=((C_word*)t0)[3],a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_992,a[2]=t5,a[3]=t3,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a991 in k974 */
static void C_ccall f_992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_992,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[28]+1));
t3=C_mutate((C_word*)lf[28]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a985 in k974 */
static void C_ccall f_986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_986,2,t0,t1);}
/* ports.scm:173: thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,t1);}

/* a980 in k974 */
static void C_ccall f_981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_981,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[28]+1));
t3=C_mutate((C_word*)lf[28]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_947 in k399 */
static void C_ccall f_947(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_947,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_951,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ports.scm:166: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(4,*((C_word*)lf[26]+1),t4,t2,lf[23]);}

/* k949 */
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
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_951,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_956,a[2]=t3,a[3]=t5,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_961,a[2]=((C_word*)t0)[3],a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_967,a[2]=t5,a[3]=t3,a[4]=((C_word)li31),tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a966 in k949 */
static void C_ccall f_967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_967,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[24]+1));
t3=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a960 in k949 */
static void C_ccall f_961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_961,2,t0,t1);}
/* ports.scm:168: thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,t1);}

/* a955 in k949 */
static void C_ccall f_956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_956,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[24]+1));
t3=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_795 in k399 */
static void C_ccall f_795(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+21)){
C_save_and_reclaim((void*)tr3r,(void*)f_795r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_795r(t0,t1,t2,t3);}}

static void C_ccall f_795r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(21);
t4=C_a_i_cons(&a,2,t2,t3);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_804,a[2]=t6,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_839,a[2]=t6,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_859,a[2]=t6,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_894,a[2]=t6,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
/* ports.scm:129: make-input-port */
t11=*((C_word*)lf[22]+1);
((C_proc7)(void*)(*((C_word*)t11+1)))(7,t11,t1,t7,t8,*((C_word*)lf[17]+1),t9,t10);}

/* a893 */
static void C_ccall f_894(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_894,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_900,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_900(t9,t1,t3,C_fix(0));}

/* loop in a893 */
static void C_fcall f_900(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_900,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[5])[1]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_916,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t5=C_i_car(((C_word*)((C_word*)t0)[5])[1]);
t6=C_fixnum_plus(((C_word*)t0)[3],t3);
/* ports.scm:157: read-string! */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(6,*((C_word*)lf[10]+1),t4,t2,((C_word*)t0)[2],t5,t6);}}}

/* k914 in loop in a893 */
static void C_ccall f_916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_919,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(t1,((C_word*)t0)[6]))){
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t2;
f_919(t5,t4);}
else{
t3=t2;
f_919(t3,C_SCHEME_UNDEFINED);}}

/* k917 in k914 in loop in a893 */
static void C_fcall f_919(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=C_fixnum_plus(((C_word*)t0)[4],((C_word*)t0)[5]);
/* ports.scm:160: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_900(t4,((C_word*)t0)[2],t2,t3);}

/* a858 */
static void C_ccall f_859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_859,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_865,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_865(t5,t1);}

/* loop in a858 */
static void C_fcall f_865(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_865,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[3])[1]))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_875,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[3])[1]);
/* ports.scm:147: peek-char */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[21]+1)))(3,*((C_word*)lf[21]+1),t2,t3);}}

/* k873 in loop in a858 */
static void C_ccall f_875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_eofp(t1))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
/* ports.scm:150: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_865(t4,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}}

/* a838 */
static void C_ccall f_839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_839,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* ports.scm:141: char-ready? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(3,*((C_word*)lf[20]+1),t1,t2);}}

/* a803 */
static void C_ccall f_804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_804,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_810,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_810(t5,t1);}

/* loop in a803 */
static void C_fcall f_810(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_810,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[3])[1]))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_820,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[3])[1]);
/* read-char/port */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}}

/* k818 in loop in a803 */
static void C_ccall f_820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_eofp(t1))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
/* ports.scm:137: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_810(t4,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}}

/* f_720 in k399 */
static void C_ccall f_720(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2r,(void*)f_720r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_720r(t0,t1,t2);}}

static void C_ccall f_720r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_726,a[2]=t2,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_763,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
/* ports.scm:121: make-output-port */
t5=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t3,*((C_word*)lf[17]+1),t4);}

/* a762 */
static void C_ccall f_763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_763,2,t0,t1);}
t2=*((C_word*)lf[15]+1);
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t3,lf[14]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_772,a[2]=t2,a[3]=t6,a[4]=((C_word)li18),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_772(t8,t1,t3);}

/* for-each-loop186 in a762 */
static void C_fcall f_772(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_772,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_782,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g187193 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k780 in for-each-loop186 in a762 */
static void C_ccall f_782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_772(t3,((C_word*)t0)[2],t2);}

/* a725 */
static void C_ccall f_726(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_726,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_728,a[2]=t2,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
t5=C_i_check_list_2(t4,lf[14]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_740,a[2]=t3,a[3]=t7,a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_740(t9,t1,t4);}

/* for-each-loop162 in a725 */
static void C_fcall f_740(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_740,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_750,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g163169 */
t5=((C_word*)t0)[2];
f_728(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k748 in for-each-loop162 in a725 */
static void C_ccall f_750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_740(t3,((C_word*)t0)[2],t2);}

/* g163 in a725 */
static void C_fcall f_728(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_728,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[9]+1);
/* g177178 */
t4=t3;
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t1,((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* f_622 in k399 */
static void C_ccall f_622(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr4r,(void*)f_622r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_622r(t0,t1,t2,t3,t4);}}

static void C_ccall f_622r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(18);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?((C_word*)t0)[3]:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?((C_word*)t0)[2]:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
if(C_truep(C_i_nullp(t12))){
t13=C_eqp(t6,((C_word*)t0)[3]);
if(C_truep(t13)){
t14=C_eqp(t10,((C_word*)t0)[2]);
t15=(C_truep(t14)?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_658,a[2]=t3,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp):(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_663,a[2]=t10,a[3]=t3,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t16=t1;
t17=t2;
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_489,a[2]=t16,a[3]=t17,a[4]=t15,tmp=(C_word)a,a+=5,tmp);
/* ports.scm:73: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t18,C_fix(1024));}
else{
t14=C_eqp(t10,((C_word*)t0)[2]);
if(C_truep(t14)){
t15=t1;
t16=t2;
t17=t3;
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_573,a[2]=t15,a[3]=t16,a[4]=t6,a[5]=t17,tmp=(C_word)a,a+=6,tmp);
/* ports.scm:90: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t18,C_fix(1024));}
else{
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_681,a[2]=t2,a[3]=t6,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_687,a[2]=t3,a[3]=t10,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
t17=t1;
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_551,a[2]=t15,a[3]=t16,a[4]=t19,a[5]=((C_word)li13),tmp=(C_word)a,a+=6,tmp));
t21=((C_word*)t19)[1];
f_551(t21,t17);}}}
else{
/* ##sys#error */
t13=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t1,lf[0],t12);}}

/* loop */
static void C_fcall f_551(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_551,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_555,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ports.scm:85: reader */
t3=((C_word*)t0)[2];
f_681(t3,t2);}

/* k553 in loop */
static void C_ccall f_555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_555,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_564,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:87: writer */
t3=((C_word*)t0)[2];
f_687(t3,t2,t1);}}

/* k562 in k553 in loop */
static void C_ccall f_564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:88: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_551(t2,((C_word*)t0)[2]);}

/* a686 */
static void C_fcall f_687(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_687,NULL,3,t0,t1,t2);}
/* ports.scm:115: write */
t3=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* a680 */
static void C_fcall f_681(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_681,NULL,2,t0,t1);}
/* ports.scm:114: read */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* k571 */
static void C_ccall f_573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_573,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_578,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word)li10),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_578(t5,((C_word*)t0)[2],C_fix(0));}

/* loop in k571 */
static void C_fcall f_578(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_578,NULL,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_582,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t3)[1],C_fix(1024)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_620,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:93: write-string */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(5,*((C_word*)lf[9]+1),t5,((C_word*)t0)[6],C_fix(1024),((C_word*)t0)[5]);}
else{
t5=t4;
f_582(t5,C_SCHEME_UNDEFINED);}}

/* k618 in loop in k571 */
static void C_ccall f_620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[3],0,C_fix(0));
t3=((C_word*)t0)[2];
f_582(t3,t2);}

/* k580 in loop in k571 */
static void C_fcall f_582(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_582,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_585,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* ports.scm:95: reader */
t3=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k583 in k580 in loop in k571 */
static void C_ccall f_585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(C_eofp(t1))){
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[6])[1],C_fix(0)))){
/* ports.scm:98: write-string */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(5,*((C_word*)lf[9]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}
else{
t2=C_fix(C_character_code(t1));
t3=C_setbyte(((C_word*)t0)[4],((C_word*)((C_word*)t0)[6])[1],t2);
t4=C_fixnum_plus(((C_word*)((C_word*)t0)[6])[1],C_fix(1));
/* ports.scm:101: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_578(t5,((C_word*)t0)[5],t4);}}

/* k487 */
static void C_ccall f_489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_489,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_494,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word)li9),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_494(t5,((C_word*)t0)[2]);}

/* loop in k487 */
static void C_fcall f_494(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_494,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_498,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* ports.scm:75: read-string! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(5,*((C_word*)lf[10]+1),t2,C_fix(1024),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k496 in loop in k487 */
static void C_ccall f_498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_498,2,t0,t1);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_507,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:77: writer */
t4=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],t1);}}

/* k505 in k496 in loop in k487 */
static void C_ccall f_507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:78: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_494(t2,((C_word*)t0)[2]);}

/* f_663 */
static void C_ccall f_663(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_663,4,t0,t1,t2,t3);}
t4=((C_word*)t0)[3];
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_518,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t6,a[6]=t3,a[7]=((C_word)li7),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_518(t8,t1,C_fix(0));}

/* doloop101 */
static void C_fcall f_518(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_518,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_528,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_subbyte(((C_word*)t0)[4],t2);
t5=C_make_character(C_unfix(t4));
/* ports.scm:82: writer */
t6=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t3,t5,((C_word*)t0)[2]);}}

/* k526 in doloop101 */
static void C_ccall f_528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_518(t3,((C_word*)t0)[2],t2);}

/* f_658 */
static void C_ccall f_658(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_658,4,t0,t1,t2,t3);}
/* ports.scm:108: write-string */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(5,*((C_word*)lf[9]+1),t1,t2,t3,((C_word*)t0)[2]);}

/* f_459 in k399 */
static void C_ccall f_459(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_459,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_465,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_465(t8,t1,t3);}

/* loop */
static void C_fcall f_465(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_465,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_469,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ports.scm:62: thunk */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k467 in loop */
static void C_ccall f_469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_469,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_482,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:65: fn */
t3=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,t1,((C_word*)t0)[5]);}}

/* k480 in k467 in loop */
static void C_ccall f_482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:65: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_465(t2,((C_word*)t0)[2],t1);}

/* f_427 in k399 */
static void C_ccall f_427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_427,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_433,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=((C_word)li2),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_433(t7,t1,C_SCHEME_END_OF_LIST);}

/* loop */
static void C_fcall f_433(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_433,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_437,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* ports.scm:55: thunk */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k435 in loop */
static void C_ccall f_437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_437,2,t0,t1);}
if(C_truep(C_eofp(t1))){
/* ports.scm:57: reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(3,*((C_word*)lf[4]+1),((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_457,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ports.scm:58: fn */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}}

/* k455 in k435 in loop */
static void C_ccall f_457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_457,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* ports.scm:58: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_433(t3,((C_word*)t0)[2],t2);}

/* f_403 in k399 */
static void C_ccall f_403(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_403,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_409,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=((C_word)li0),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_409(t7,t1);}

/* loop */
static void C_fcall f_409(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_409,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_413,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ports.scm:47: thunk */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k411 in loop */
static void C_ccall f_413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_413,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_422,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:49: fn */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}}

/* k420 in k411 in loop */
static void C_ccall f_422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm:50: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_409(t2,((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[103] = {
{"toplevel:ports_2escm",(void*)C_ports_toplevel},
{"f_401:ports_2escm",(void*)f_401},
{"f_1249:ports_2escm",(void*)f_1249},
{"f_1253:ports_2escm",(void*)f_1253},
{"f_1262:ports_2escm",(void*)f_1262},
{"f_1265:ports_2escm",(void*)f_1265},
{"f_1292:ports_2escm",(void*)f_1292},
{"f_1283:ports_2escm",(void*)f_1283},
{"f_1287:ports_2escm",(void*)f_1287},
{"f_1277:ports_2escm",(void*)f_1277},
{"f_1267:ports_2escm",(void*)f_1267},
{"f_1096:ports_2escm",(void*)f_1096},
{"f_1136:ports_2escm",(void*)f_1136},
{"f_1139:ports_2escm",(void*)f_1139},
{"f_1192:ports_2escm",(void*)f_1192},
{"f_1183:ports_2escm",(void*)f_1183},
{"f_1187:ports_2escm",(void*)f_1187},
{"f_1162:ports_2escm",(void*)f_1162},
{"f_1178:ports_2escm",(void*)f_1178},
{"f_1141:ports_2escm",(void*)f_1141},
{"f_1068:ports_2escm",(void*)f_1068},
{"f_1072:ports_2escm",(void*)f_1072},
{"f_1091:ports_2escm",(void*)f_1091},
{"f_1082:ports_2escm",(void*)f_1082},
{"f_1086:ports_2escm",(void*)f_1086},
{"f_1077:ports_2escm",(void*)f_1077},
{"f_1043:ports_2escm",(void*)f_1043},
{"f_1047:ports_2escm",(void*)f_1047},
{"f_1063:ports_2escm",(void*)f_1063},
{"f_1057:ports_2escm",(void*)f_1057},
{"f_1052:ports_2escm",(void*)f_1052},
{"f_1031:ports_2escm",(void*)f_1031},
{"f_1035:ports_2escm",(void*)f_1035},
{"f_1038:ports_2escm",(void*)f_1038},
{"f_1022:ports_2escm",(void*)f_1022},
{"f_1026:ports_2escm",(void*)f_1026},
{"f_997:ports_2escm",(void*)f_997},
{"f_1001:ports_2escm",(void*)f_1001},
{"f_1017:ports_2escm",(void*)f_1017},
{"f_1011:ports_2escm",(void*)f_1011},
{"f_1006:ports_2escm",(void*)f_1006},
{"f_972:ports_2escm",(void*)f_972},
{"f_976:ports_2escm",(void*)f_976},
{"f_992:ports_2escm",(void*)f_992},
{"f_986:ports_2escm",(void*)f_986},
{"f_981:ports_2escm",(void*)f_981},
{"f_947:ports_2escm",(void*)f_947},
{"f_951:ports_2escm",(void*)f_951},
{"f_967:ports_2escm",(void*)f_967},
{"f_961:ports_2escm",(void*)f_961},
{"f_956:ports_2escm",(void*)f_956},
{"f_795:ports_2escm",(void*)f_795},
{"f_894:ports_2escm",(void*)f_894},
{"f_900:ports_2escm",(void*)f_900},
{"f_916:ports_2escm",(void*)f_916},
{"f_919:ports_2escm",(void*)f_919},
{"f_859:ports_2escm",(void*)f_859},
{"f_865:ports_2escm",(void*)f_865},
{"f_875:ports_2escm",(void*)f_875},
{"f_839:ports_2escm",(void*)f_839},
{"f_804:ports_2escm",(void*)f_804},
{"f_810:ports_2escm",(void*)f_810},
{"f_820:ports_2escm",(void*)f_820},
{"f_720:ports_2escm",(void*)f_720},
{"f_763:ports_2escm",(void*)f_763},
{"f_772:ports_2escm",(void*)f_772},
{"f_782:ports_2escm",(void*)f_782},
{"f_726:ports_2escm",(void*)f_726},
{"f_740:ports_2escm",(void*)f_740},
{"f_750:ports_2escm",(void*)f_750},
{"f_728:ports_2escm",(void*)f_728},
{"f_622:ports_2escm",(void*)f_622},
{"f_551:ports_2escm",(void*)f_551},
{"f_555:ports_2escm",(void*)f_555},
{"f_564:ports_2escm",(void*)f_564},
{"f_687:ports_2escm",(void*)f_687},
{"f_681:ports_2escm",(void*)f_681},
{"f_573:ports_2escm",(void*)f_573},
{"f_578:ports_2escm",(void*)f_578},
{"f_620:ports_2escm",(void*)f_620},
{"f_582:ports_2escm",(void*)f_582},
{"f_585:ports_2escm",(void*)f_585},
{"f_489:ports_2escm",(void*)f_489},
{"f_494:ports_2escm",(void*)f_494},
{"f_498:ports_2escm",(void*)f_498},
{"f_507:ports_2escm",(void*)f_507},
{"f_663:ports_2escm",(void*)f_663},
{"f_518:ports_2escm",(void*)f_518},
{"f_528:ports_2escm",(void*)f_528},
{"f_658:ports_2escm",(void*)f_658},
{"f_459:ports_2escm",(void*)f_459},
{"f_465:ports_2escm",(void*)f_465},
{"f_469:ports_2escm",(void*)f_469},
{"f_482:ports_2escm",(void*)f_482},
{"f_427:ports_2escm",(void*)f_427},
{"f_433:ports_2escm",(void*)f_433},
{"f_437:ports_2escm",(void*)f_437},
{"f_457:ports_2escm",(void*)f_457},
{"f_403:ports_2escm",(void*)f_403},
{"f_409:ports_2escm",(void*)f_409},
{"f_413:ports_2escm",(void*)f_413},
{"f_422:ports_2escm",(void*)f_422},
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
