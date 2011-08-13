/* Generated from srfi-18.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: srfi-18.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file srfi-18.c
   unit: srfi_2d18
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[112];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,31),40,99,111,109,112,117,116,101,45,116,105,109,101,45,108,105,109,105,116,32,116,109,56,56,32,108,111,99,56,57,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,7),40,102,95,53,49,50,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,12),40,102,95,53,50,50,32,116,109,57,53,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,11),40,102,95,53,51,53,32,110,57,56,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,12),40,102,95,53,53,50,32,120,49,48,49,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,12),40,102,95,53,53,57,32,120,49,48,52,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,12),40,102,95,53,55,53,32,120,49,48,55,41,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,12),40,102,95,53,57,49,32,120,49,49,48,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,12),40,102,95,54,48,55,32,120,49,49,51,41,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,19),40,97,54,52,49,32,46,32,114,101,115,117,108,116,115,49,50,48,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,6),40,97,54,51,53,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,26),40,102,95,54,50,55,32,116,104,117,110,107,49,49,55,32,46,32,110,97,109,101,49,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,12),40,102,95,54,55,49,32,120,49,50,53,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,7),40,102,95,54,55,55,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,17),40,102,95,54,56,48,32,116,104,114,101,97,100,49,50,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,22),40,102,95,54,56,57,32,116,104,114,101,97,100,49,51,49,32,120,49,51,50,41,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,17),40,102,95,55,48,50,32,116,104,114,101,97,100,49,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,22),40,102,95,55,49,49,32,116,104,114,101,97,100,49,52,49,32,113,49,52,50,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,12),40,102,95,55,50,55,32,120,49,52,54,41,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,17),40,102,95,55,51,54,32,116,104,114,101,97,100,49,52,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,97,56,48,55,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,16),40,97,55,57,50,32,114,101,116,117,114,110,49,54,54,41};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,30),40,102,95,55,55,50,32,116,104,114,101,97,100,49,53,54,32,46,32,116,105,109,101,111,117,116,49,53,55,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,17),40,102,95,57,48,48,32,116,104,114,101,97,100,49,55,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,6),40,97,57,55,48,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,16),40,97,57,54,49,32,114,101,116,117,114,110,49,56,57,41};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,17),40,102,95,57,52,52,32,116,104,114,101,97,100,49,56,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,17),40,102,95,57,55,55,32,116,104,114,101,97,100,49,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,7),40,97,49,48,49,57,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,17),40,97,49,48,48,55,32,114,101,116,117,114,110,50,48,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,13),40,102,95,57,57,57,32,116,109,49,57,56,41,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,13),40,102,95,49,48,51,57,32,120,50,48,56,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,20),40,102,95,49,48,52,53,32,46,32,116,109,112,50,49,52,50,49,53,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,13),40,102,95,49,48,55,54,32,120,50,50,52,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,17),40,102,95,49,48,56,53,32,109,117,116,101,120,50,50,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,22),40,102,95,49,48,57,52,32,109,117,116,101,120,50,51,48,32,120,50,51,49,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,17),40,102,95,49,49,48,51,32,109,117,116,101,120,50,51,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,8),40,115,119,105,116,99,104,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,7),40,99,104,101,99,107,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,7),40,97,49,50,55,55,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,7),40,97,49,51,51,53,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,17),40,97,49,49,53,48,32,114,101,116,117,114,110,50,53,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,31),40,102,95,49,49,50,55,32,109,117,116,101,120,50,52,51,32,46,32,109,115,45,97,110,100,45,116,50,52,52,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,49,52,57,56,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,49,53,51,54,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,17),40,97,49,51,56,51,32,114,101,116,117,114,110,50,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,34),40,102,95,49,51,54,54,32,109,117,116,101,120,50,57,50,32,46,32,99,118,97,114,45,97,110,100,45,116,111,50,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,18),40,102,95,49,53,56,56,32,46,32,110,97,109,101,51,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,13),40,102,95,49,54,48,55,32,120,51,51,52,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,14),40,102,95,49,54,49,51,32,99,118,51,51,54,41,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,14),40,102,95,49,54,50,50,32,99,118,51,51,57,41,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,19),40,102,95,49,54,51,49,32,99,118,51,52,50,32,120,51,52,51,41,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,16),40,102,95,49,54,52,48,32,99,118,97,114,51,52,54,41};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,53,57,32,103,51,54,53,51,55,52,41,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,16),40,102,95,49,54,56,51,32,99,118,97,114,51,53,54,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,7),40,97,49,55,55,54,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,25),40,102,95,49,55,52,52,32,116,104,114,101,97,100,51,56,49,32,101,120,110,51,56,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,8),40,102,95,49,56,51,52,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,26),40,102,95,49,56,53,56,32,102,100,52,48,53,32,46,32,116,109,112,52,48,52,52,48,54,41,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,17),40,97,49,56,57,49,32,116,104,114,101,97,100,49,51,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_srfi_2d18_toplevel)
C_externexport void C_ccall C_srfi_2d18_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_469)
static void C_ccall f_469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_472)
static void C_ccall f_472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_625)
static void C_ccall f_625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1892)
static void C_ccall f_1892(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_700)
static void C_ccall f_700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1858)
static void C_ccall f_1858(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1858)
static void C_ccall f_1858r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1862)
static void C_ccall f_1862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1868)
static void C_ccall f_1868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1834)
static void C_ccall f_1834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1844)
static void C_ccall f_1844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1847)
static void C_ccall f_1847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1828)
static void C_ccall f_1828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1811)
static void C_ccall f_1811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1794)
static void C_ccall f_1794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1766)
static void C_fcall f_1766(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1777)
static void C_ccall f_1777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1721)
static void C_fcall f_1721(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1731)
static void C_ccall f_1731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1716)
static void C_ccall f_1716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1640)
static void C_ccall f_1640(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1631)
static void C_ccall f_1631(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1613)
static void C_ccall f_1613(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1588)
static void C_ccall f_1588(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1588)
static void C_ccall f_1588r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1596)
static void C_ccall f_1596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1366)
static void C_ccall f_1366(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1366)
static void C_ccall f_1366r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1391)
static void C_ccall f_1391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1403)
static void C_fcall f_1403(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1545)
static void C_ccall f_1545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1499)
static void C_ccall f_1499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1525)
static void C_ccall f_1525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1518)
static void C_ccall f_1518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1409)
static void C_ccall f_1409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1137)
static void C_ccall f_1137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1151)
static void C_ccall f_1151(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f1996)
static void C_ccall f1996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1992)
static void C_ccall f1992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1988)
static void C_ccall f1988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1336)
static void C_ccall f_1336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1340)
static void C_ccall f_1340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1267)
static void C_ccall f_1267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1273)
static void C_ccall f_1273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1278)
static void C_ccall f_1278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1318)
static void C_ccall f_1318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1285)
static void C_ccall f_1285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1288)
static void C_ccall f_1288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1175)
static void C_fcall f_1175(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1189)
static void C_ccall f_1189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1154)
static void C_fcall f_1154(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1165)
static void C_ccall f_1165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1103)
static void C_ccall f_1103(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1094)
static void C_ccall f_1094(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1085)
static void C_ccall f_1085(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1076)
static void C_ccall f_1076(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1045)
static void C_ccall f_1045(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1045)
static void C_ccall f_1045r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1049)
static void C_ccall f_1049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1039)
static void C_ccall f_1039(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_999)
static void C_ccall f_999(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1027)
static void C_ccall f_1027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1034)
static void C_ccall f_1034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1008)
static void C_ccall f_1008(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1015)
static void C_ccall f_1015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1020)
static void C_ccall f_1020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_977)
static void C_ccall f_977(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_944)
static void C_ccall f_944(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_962)
static void C_ccall f_962(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_971)
static void C_ccall f_971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_900)
static void C_ccall f_900(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_939)
static void C_ccall f_939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_907)
static void C_ccall f_907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_916)
static void C_ccall f_916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_772)
static void C_ccall f_772(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_772)
static void C_ccall f_772r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_779)
static void C_ccall f_779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_793)
static void C_ccall f_793(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_797)
static void C_ccall f_797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_803)
static void C_ccall f_803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_808)
static void C_ccall f_808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_866)
static void C_ccall f_866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_847)
static void C_ccall f_847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_821)
static void C_ccall f_821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_736)
static void C_ccall f_736(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_766)
static void C_ccall f_766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_740)
static void C_fcall f_740(C_word t0,C_word t1) C_noret;
C_noret_decl(f_743)
static void C_ccall f_743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_749)
static void C_ccall f_749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_727)
static void C_ccall f_727(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_711)
static void C_ccall f_711(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_702)
static void C_ccall f_702(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_689)
static void C_ccall f_689(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_680)
static void C_ccall f_680(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_677)
static void C_ccall f_677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_671)
static void C_ccall f_671(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_627)
static void C_ccall f_627(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_627)
static void C_ccall f_627r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_656)
static void C_ccall f_656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_631)
static void C_ccall f_631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_636)
static void C_ccall f_636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_642)
static void C_ccall f_642(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_642)
static void C_ccall f_642r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_649)
static void C_ccall f_649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_607)
static void C_ccall f_607(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_591)
static void C_ccall f_591(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_575)
static void C_ccall f_575(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_559)
static void C_ccall f_559(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_552)
static void C_ccall f_552(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_535)
static void C_ccall f_535(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_550)
static void C_ccall f_550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_546)
static void C_ccall f_546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_522)
static void C_ccall f_522(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_512)
static void C_ccall f_512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_520)
static void C_ccall f_520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_474)
static void C_fcall f_474(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_503)
static void C_ccall f_503(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1766)
static void C_fcall trf_1766(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1766(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1766(t0,t1);}

C_noret_decl(trf_1721)
static void C_fcall trf_1721(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1721(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1721(t0,t1,t2);}

C_noret_decl(trf_1403)
static void C_fcall trf_1403(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1403(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1403(t0,t1);}

C_noret_decl(trf_1175)
static void C_fcall trf_1175(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1175(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1175(t0,t1);}

C_noret_decl(trf_1154)
static void C_fcall trf_1154(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1154(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1154(t0,t1);}

C_noret_decl(trf_740)
static void C_fcall trf_740(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_740(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_740(t0,t1);}

C_noret_decl(trf_474)
static void C_fcall trf_474(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_474(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_474(t0,t1,t2);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_srfi_2d18_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_2d18_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_2d18_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1079)){
C_save(t1);
C_rereclaim2(1079*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,112);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[3]=C_h_intern(&lf[3],4,"time");
lf[4]=C_h_intern(&lf[4],20,"current-milliseconds");
lf[5]=C_h_intern(&lf[5],15,"\003syssignal-hook");
lf[6]=C_h_intern(&lf[6],11,"\000type-error");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid timeout argument");
lf[8]=C_h_intern(&lf[8],12,"current-time");
lf[9]=C_h_intern(&lf[9],13,"time->seconds");
lf[10]=C_h_intern(&lf[10],3,"fp/");
lf[11]=C_decode_literal(C_heaptop,"\376U1000.0\000");
lf[12]=C_h_intern(&lf[12],13,"seconds->time");
lf[13]=C_h_intern(&lf[13],3,"fp*");
lf[14]=C_h_intern(&lf[14],18,"\003sysexact->inexact");
lf[15]=C_h_intern(&lf[15],5,"time\077");
lf[16]=C_h_intern(&lf[16],5,"raise");
lf[17]=C_h_intern(&lf[17],10,"\003syssignal");
lf[18]=C_h_intern(&lf[18],23,"join-timeout-exception\077");
lf[19]=C_h_intern(&lf[19],9,"condition");
lf[20]=C_h_intern(&lf[20],22,"join-timeout-exception");
lf[21]=C_h_intern(&lf[21],26,"abandoned-mutex-exception\077");
lf[22]=C_h_intern(&lf[22],25,"abandoned-mutex-exception");
lf[23]=C_h_intern(&lf[23],28,"terminated-thread-exception\077");
lf[24]=C_h_intern(&lf[24],27,"terminated-thread-exception");
lf[25]=C_h_intern(&lf[25],19,"uncaught-exception\077");
lf[26]=C_h_intern(&lf[26],18,"uncaught-exception");
lf[27]=C_h_intern(&lf[27],25,"uncaught-exception-reason");
lf[28]=C_h_intern(&lf[28],11,"make-thread");
lf[29]=C_h_intern(&lf[29],12,"\003sysschedule");
lf[30]=C_h_intern(&lf[30],16,"\003systhread-kill!");
lf[31]=C_h_intern(&lf[31],4,"dead");
lf[32]=C_h_intern(&lf[32],18,"\003syscurrent-thread");
lf[33]=C_h_intern(&lf[33],15,"\003sysmake-thread");
lf[34]=C_h_intern(&lf[34],7,"created");
lf[35]=C_h_intern(&lf[35],6,"gensym");
lf[36]=C_h_intern(&lf[36],6,"thread");
lf[37]=C_h_intern(&lf[37],7,"thread\077");
lf[38]=C_h_intern(&lf[38],14,"current-thread");
lf[39]=C_h_intern(&lf[39],12,"thread-state");
lf[40]=C_h_intern(&lf[40],20,"thread-specific-set!");
lf[41]=C_h_intern(&lf[41],15,"thread-specific");
lf[42]=C_h_intern(&lf[42],14,"thread-quantum");
lf[43]=C_h_intern(&lf[43],19,"thread-quantum-set!");
lf[44]=C_h_intern(&lf[44],11,"thread-name");
lf[45]=C_h_intern(&lf[45],13,"thread-start!");
lf[46]=C_h_intern(&lf[46],5,"ready");
lf[47]=C_h_intern(&lf[47],22,"\003sysadd-to-ready-queue");
lf[48]=C_h_intern(&lf[48],9,"\003syserror");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000&thread cannot be started a second time");
lf[50]=C_h_intern(&lf[50],13,"thread-yield!");
lf[51]=C_h_intern(&lf[51],17,"\003systhread-yield!");
lf[52]=C_h_intern(&lf[52],12,"thread-join!");
lf[53]=C_h_intern(&lf[53],28,"\003sysremove-from-timeout-list");
lf[54]=C_h_intern(&lf[54],10,"terminated");
lf[55]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\022uncaught-exception\376\001\000\000\006reason");
lf[56]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\022uncaught-exception\376\377\016");
lf[57]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\026join-timeout-exception\376\377\016");
lf[58]=C_h_intern(&lf[58],33,"\003systhread-block-for-termination!");
lf[59]=C_h_intern(&lf[59],29,"\003systhread-block-for-timeout!");
lf[60]=C_h_intern(&lf[60],17,"thread-terminate!");
lf[61]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\033terminated-thread-exception\376\377\016");
lf[62]=C_h_intern(&lf[62],21,"\003sysprimordial-thread");
lf[63]=C_h_intern(&lf[63],16,"\003sysexit-handler");
lf[64]=C_h_intern(&lf[64],15,"thread-suspend!");
lf[65]=C_h_intern(&lf[65],9,"suspended");
lf[66]=C_h_intern(&lf[66],14,"thread-resume!");
lf[67]=C_h_intern(&lf[67],13,"thread-sleep!");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid timeout argument");
lf[69]=C_h_intern(&lf[69],6,"mutex\077");
lf[70]=C_h_intern(&lf[70],5,"mutex");
lf[71]=C_h_intern(&lf[71],10,"make-mutex");
lf[72]=C_h_intern(&lf[72],14,"\003sysmake-mutex");
lf[73]=C_h_intern(&lf[73],10,"mutex-name");
lf[74]=C_h_intern(&lf[74],14,"mutex-specific");
lf[75]=C_h_intern(&lf[75],19,"mutex-specific-set!");
lf[76]=C_h_intern(&lf[76],11,"mutex-state");
lf[77]=C_h_intern(&lf[77],9,"not-owned");
lf[78]=C_h_intern(&lf[78],9,"abandoned");
lf[79]=C_h_intern(&lf[79],13,"not-abandoned");
lf[80]=C_h_intern(&lf[80],11,"mutex-lock!");
lf[81]=C_h_intern(&lf[81],10,"\003sysappend");
lf[82]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\031abandoned-mutex-exception\376\377\016");
lf[83]=C_h_intern(&lf[83],8,"\003sysdelq");
lf[84]=C_h_intern(&lf[84],8,"sleeping");
lf[85]=C_h_intern(&lf[85],13,"mutex-unlock!");
lf[86]=C_h_intern(&lf[86],18,"condition-variable");
lf[87]=C_h_intern(&lf[87],7,"running");
lf[88]=C_h_intern(&lf[88],7,"blocked");
lf[89]=C_h_intern(&lf[89],23,"make-condition-variable");
lf[90]=C_h_intern(&lf[90],19,"condition-variable\077");
lf[91]=C_h_intern(&lf[91],23,"condition-variable-name");
lf[92]=C_h_intern(&lf[92],27,"condition-variable-specific");
lf[93]=C_h_intern(&lf[93],32,"condition-variable-specific-set!");
lf[94]=C_h_intern(&lf[94],26,"condition-variable-signal!");
lf[95]=C_h_intern(&lf[95],25,"\003systhread-basic-unblock!");
lf[96]=C_h_intern(&lf[96],29,"condition-variable-broadcast!");
lf[97]=C_h_intern(&lf[97],8,"for-each");
lf[98]=C_h_intern(&lf[98],14,"thread-signal!");
lf[99]=C_h_intern(&lf[99],19,"\003systhread-unblock!");
lf[100]=C_h_intern(&lf[100],20,"\003sysread-prompt-hook");
lf[101]=C_h_intern(&lf[101],25,"\003systhread-block-for-i/o!");
lf[102]=C_h_intern(&lf[102],6,"\000input");
lf[103]=C_h_intern(&lf[103],13,"\003systty-port\077");
lf[104]=C_h_intern(&lf[104],18,"\003sysstandard-input");
lf[105]=C_h_intern(&lf[105],20,"thread-wait-for-i/o!");
lf[106]=C_h_intern(&lf[106],4,"\000all");
lf[107]=C_h_intern(&lf[107],18,"getter-with-setter");
lf[108]=C_h_intern(&lf[108],27,"condition-property-accessor");
lf[109]=C_h_intern(&lf[109],6,"reason");
lf[110]=C_h_intern(&lf[110],17,"register-feature!");
lf[111]=C_h_intern(&lf[111],7,"srfi-18");
C_register_lf2(lf,112,create_ptable());
t2=C_mutate(&lf[0] /* (set! c222 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_469,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k467 */
static void C_ccall f_469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_469,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_472,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:36: register-feature! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[110]+1)))(3,*((C_word*)lf[110]+1),t2,lf[111]);}

/* k470 in k467 */
static void C_ccall f_472(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_472,2,t0,t1);}
t2=C_mutate(&lf[2] /* (set! compute-time-limit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_474,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[8]+1 /* (set! current-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_512,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[9]+1 /* (set! time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_522,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[12]+1 /* (set! seconds->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_535,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[15]+1 /* (set! time? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_552,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[16]+1 /* (set! raise ...) */,*((C_word*)lf[17]+1));
t8=C_mutate((C_word*)lf[18]+1 /* (set! join-timeout-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_559,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[21]+1 /* (set! abandoned-mutex-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_575,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[23]+1 /* (set! terminated-thread-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_591,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[25]+1 /* (set! uncaught-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_607,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_625,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:92: condition-property-accessor */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[108]+1)))(4,*((C_word*)lf[108]+1),t12,lf[26],lf[109]);}

/* k623 in k470 in k467 */
static void C_ccall f_625(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_625,2,t0,t1);}
t2=C_mutate((C_word*)lf[27]+1 /* (set! uncaught-exception-reason ...) */,t1);
t3=C_mutate((C_word*)lf[28]+1 /* (set! make-thread ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_627,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[37]+1 /* (set! thread? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_671,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[38]+1 /* (set! current-thread ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_677,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[39]+1 /* (set! thread-state ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_680,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[40]+1 /* (set! thread-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_689,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_700,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1892,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:128: getter-with-setter */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[107]+1)))(4,*((C_word*)lf[107]+1),t8,t9,*((C_word*)lf[40]+1));}

/* a1891 in k623 in k470 in k467 */
static void C_ccall f_1892(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1892,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[36],lf[41]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(10)));}

/* k698 in k623 in k470 in k467 */
static void C_ccall f_700(C_word c,C_word t0,C_word t1){
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
C_word ab[82],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_700,2,t0,t1);}
t2=C_mutate((C_word*)lf[41]+1 /* (set! thread-specific ...) */,t1);
t3=C_mutate((C_word*)lf[42]+1 /* (set! thread-quantum ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_702,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[43]+1 /* (set! thread-quantum-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_711,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[44]+1 /* (set! thread-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_727,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[45]+1 /* (set! thread-start! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_736,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[50]+1 /* (set! thread-yield! ...) */,*((C_word*)lf[51]+1));
t8=C_mutate((C_word*)lf[52]+1 /* (set! thread-join! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_772,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[60]+1 /* (set! thread-terminate! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_900,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[64]+1 /* (set! thread-suspend! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_944,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[66]+1 /* (set! thread-resume! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_977,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[67]+1 /* (set! thread-sleep! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_999,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[69]+1 /* (set! mutex? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1039,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[71]+1 /* (set! make-mutex ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1045,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[73]+1 /* (set! mutex-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1076,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[74]+1 /* (set! mutex-specific ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1085,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[75]+1 /* (set! mutex-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1094,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[76]+1 /* (set! mutex-state ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1103,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[80]+1 /* (set! mutex-lock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1127,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[85]+1 /* (set! mutex-unlock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1366,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[89]+1 /* (set! make-condition-variable ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1588,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[90]+1 /* (set! condition-variable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1607,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[91]+1 /* (set! condition-variable-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1613,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[92]+1 /* (set! condition-variable-specific ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1622,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[93]+1 /* (set! condition-variable-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1631,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[94]+1 /* (set! condition-variable-signal! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1640,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[96]+1 /* (set! condition-variable-broadcast! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1683,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[98]+1 /* (set! thread-signal! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1744,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t29=*((C_word*)lf[100]+1);
t30=C_mutate((C_word*)lf[100]+1 /* (set! ##sys#read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1834,a[2]=t29,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp));
t31=C_mutate((C_word*)lf[105]+1 /* (set! thread-wait-for-i/o! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1858,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t32=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t32+1)))(2,t32,C_SCHEME_UNDEFINED);}

/* f_1858 in k698 in k623 in k470 in k467 */
static void C_ccall f_1858(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1858r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1858r(t0,t1,t2,t3);}}

static void C_ccall f_1858r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1862,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_1862(2,t5,lf[106]);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_1862(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1860 */
static void C_ccall f_1862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1862,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[3],lf[105]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1868,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:453: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[101]+1)))(5,*((C_word*)lf[101]+1),t3,*((C_word*)lf[32]+1),((C_word*)t0)[3],t1);}

/* k1866 in k1860 */
static void C_ccall f_1868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:454: thread-yield! */
t2=*((C_word*)lf[50]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_1834 in k698 in k623 in k470 in k467 */
static void C_ccall f_1834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1834,2,t0,t1);}
t2=C_fudge(C_fix(12));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1844,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_1844(2,t4,t2);}
else{
/* srfi-18.scm:443: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[103]+1)))(3,*((C_word*)lf[103]+1),t3,*((C_word*)lf[104]+1));}}

/* k1842 */
static void C_ccall f_1844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1844,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1847,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:444: old */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1845 in k1842 */
static void C_ccall f_1847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1847,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1850,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:445: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[101]+1)))(5,*((C_word*)lf[101]+1),t2,*((C_word*)lf[32]+1),C_fix(0),lf[102]);}

/* k1848 in k1845 in k1842 */
static void C_ccall f_1850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:446: thread-yield! */
t2=*((C_word*)lf[50]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_1744 in k698 in k623 in k470 in k467 */
static void C_ccall f_1744(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1744,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[36],lf[98]);
t5=C_eqp(t2,*((C_word*)lf[32]+1));
if(C_truep(t5)){
/* srfi-18.scm:419: ##sys#signal */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t1,t3);}
else{
t6=C_slot(t2,C_fix(1));
t7=C_slot(t2,C_fix(11));
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1766,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_structurep(t7,lf[86]))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1794,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=C_slot(t7,C_fix(2));
/* srfi-18.scm:424: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(4,*((C_word*)lf[83]+1),t9,t2,t10);}
else{
if(C_truep(C_i_structurep(t7,lf[70]))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1811,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=C_slot(t7,C_fix(3));
/* srfi-18.scm:426: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(4,*((C_word*)lf[83]+1),t9,t2,t10);}
else{
if(C_truep(C_i_structurep(t7,lf[36]))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1828,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=C_slot(t7,C_fix(12));
/* srfi-18.scm:428: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(4,*((C_word*)lf[83]+1),t9,t2,t10);}
else{
t9=t8;
f_1766(t9,C_SCHEME_UNDEFINED);}}}}}

/* k1826 */
static void C_ccall f_1828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_1766(t2,C_i_setslot(((C_word*)t0)[2],C_fix(12),t1));}

/* k1809 */
static void C_ccall f_1811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_1766(t2,C_i_setslot(((C_word*)t0)[2],C_fix(3),t1));}

/* k1792 */
static void C_ccall f_1794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_1766(t2,C_i_setslot(((C_word*)t0)[2],C_fix(2),t1));}

/* k1764 */
static void C_fcall f_1766(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1766,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1777,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp);
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=C_i_setslot(((C_word*)t0)[3],C_fix(3),lf[88]);
/* srfi-18.scm:435: ##sys#thread-unblock! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[99]+1)))(3,*((C_word*)lf[99]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a1776 in k1764 */
static void C_ccall f_1777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1777,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1781,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:432: ##sys#signal */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2]);}

/* k1779 in a1776 in k1764 */
static void C_ccall f_1781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:433: old */
t2=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* f_1683 in k698 in k623 in k470 in k467 */
static void C_ccall f_1683(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1683,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[86],lf[96]);
t4=C_slot(t2,C_fix(2));
t5=C_i_check_list_2(t4,lf[97]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1716,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1721,a[2]=t8,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_1721(t10,t6,t4);}

/* for-each-loop359 */
static void C_fcall f_1721(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1721,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1731,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_slot(t4,C_fix(3));
t6=C_eqp(t5,lf[88]);
t7=(C_truep(t6)?t6:C_eqp(t5,lf[84]));
if(C_truep(t7)){
/* srfi-18.scm:408: ##sys#thread-basic-unblock! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(3,*((C_word*)lf[95]+1),t3,t4);}
else{
t8=C_slot(t2,C_fix(1));
t11=t1;
t12=t8;
t1=t11;
t2=t12;
goto loop;}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1729 in for-each-loop359 */
static void C_ccall f_1731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1721(t3,((C_word*)t0)[2],t2);}

/* k1714 */
static void C_ccall f_1716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[2],C_fix(2),C_SCHEME_END_OF_LIST));}

/* f_1640 in k698 in k623 in k470 in k467 */
static void C_ccall f_1640(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1640,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[86],lf[94]);
t4=C_slot(t2,C_fix(2));
if(C_truep(C_i_nullp(t4))){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_slot(t4,C_fix(0));
t6=C_slot(t5,C_fix(3));
t7=C_slot(t4,C_fix(1));
t8=C_i_setslot(t2,C_fix(2),t7);
t9=C_eqp(t6,lf[88]);
if(C_truep(t9)){
if(C_truep(t9)){
/* srfi-18.scm:399: ##sys#thread-basic-unblock! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(3,*((C_word*)lf[95]+1),t1,t5);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}}
else{
t10=C_eqp(t6,lf[84]);
if(C_truep(t10)){
/* srfi-18.scm:399: ##sys#thread-basic-unblock! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(3,*((C_word*)lf[95]+1),t1,t5);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_UNDEFINED);}}}}

/* f_1631 in k698 in k623 in k470 in k467 */
static void C_ccall f_1631(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1631,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[86],lf[93]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(3),t3));}

/* f_1622 in k698 in k623 in k470 in k467 */
static void C_ccall f_1622(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1622,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[86],lf[92]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(3)));}

/* f_1613 in k698 in k623 in k470 in k467 */
static void C_ccall f_1613(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1613,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[86],lf[91]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f_1607 in k698 in k623 in k470 in k467 */
static void C_ccall f_1607(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1607,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[86]));}

/* f_1588 in k698 in k623 in k470 in k467 */
static void C_ccall f_1588(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2r,(void*)f_1588r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1588r(t0,t1,t2);}}

static void C_ccall f_1588r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1596,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[86],t4,C_SCHEME_END_OF_LIST,C_SCHEME_UNDEFINED));}
else{
/* srfi-18.scm:371: gensym */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),t3,lf[86]);}}

/* k1594 */
static void C_ccall f_1596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1596,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record4(&a,4,lf[86],t1,C_SCHEME_END_OF_LIST,C_SCHEME_UNDEFINED));}

/* f_1366 in k698 in k623 in k470 in k467 */
static void C_ccall f_1366(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_1366r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1366r(t0,t1,t2,t3);}}

static void C_ccall f_1366r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(7);
t4=C_i_check_structure_2(t2,lf[70],lf[85]);
t5=*((C_word*)lf[32]+1);
t6=C_i_pairp(t3);
t7=(C_truep(t6)?C_i_car(t3):C_SCHEME_FALSE);
t8=C_i_length(t3);
t9=C_fixnum_greaterp(t8,C_fix(1));
t10=(C_truep(t9)?C_i_cadr(t3):C_SCHEME_FALSE);
t11=(C_truep(t7)?C_i_check_structure_2(t7,lf[86],lf[85]):C_SCHEME_UNDEFINED);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1384,a[2]=t10,a[3]=t7,a[4]=t5,a[5]=t2,a[6]=((C_word)li45),tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm:322: ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t12);}

/* a1383 */
static void C_ccall f_1384(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1384,3,t0,t1,t2);}
t3=C_slot(((C_word*)t0)[5],C_fix(3));
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1391,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
/* srfi-18.scm:325: compute-time-limit */
f_474(t4,((C_word*)t0)[2],lf[85]);}
else{
t5=t4;
f_1391(2,t5,C_SCHEME_FALSE);}}

/* k1389 in a1383 */
static void C_ccall f_1391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1391,2,t0,t1);}
t2=C_i_set_i_slot(((C_word*)t0)[7],C_fix(4),C_SCHEME_FALSE);
t3=C_i_set_i_slot(((C_word*)t0)[7],C_fix(5),C_SCHEME_FALSE);
t4=C_slot(((C_word*)t0)[7],C_fix(2));
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1403,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1560,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_slot(t4,C_fix(8));
/* srfi-18.scm:330: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(4,*((C_word*)lf[83]+1),t6,((C_word*)t0)[7],t7);}
else{
t6=t5;
f_1403(t6,C_SCHEME_UNDEFINED);}}

/* k1558 in k1389 in a1383 */
static void C_ccall f_1560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_1403(t2,C_i_setslot(((C_word*)t0)[2],C_fix(8),t1));}

/* k1401 in k1389 in a1383 */
static void C_fcall f_1403(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1403,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1406,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1545,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(((C_word*)t0)[3],C_fix(2));
t5=C_a_i_list(&a,1,((C_word*)t0)[8]);
/* srfi-18.scm:332: ##sys#append */
t6=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}
else{
t3=t2;
f_1406(2,t3,C_SCHEME_UNDEFINED);}}

/* k1543 in k1401 in k1389 in a1383 */
static void C_ccall f_1545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1545,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[6],C_fix(2),t1);
t3=C_i_setslot(((C_word*)t0)[5],C_fix(11),((C_word*)t0)[6]);
if(C_truep(((C_word*)t0)[4])){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1499,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp);
t5=C_i_setslot(((C_word*)t0)[5],C_fix(1),t4);
/* srfi-18.scm:345: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(4,*((C_word*)lf[59]+1),((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1537,a[2]=((C_word*)t0)[3],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
t5=C_i_setslot(((C_word*)t0)[5],C_fix(1),t4);
t6=((C_word*)t0)[2];
f_1406(2,t6,C_i_setslot(((C_word*)t0)[5],C_fix(3),lf[84]));}}

/* a1536 in k1543 in k1401 in k1389 in a1383 */
static void C_ccall f_1537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1537,2,t0,t1);}
/* srfi-18.scm:347: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_TRUE);}

/* a1498 in k1543 in k1401 in k1389 in a1383 */
static void C_ccall f_1499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1499,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1525,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(2));
/* srfi-18.scm:338: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(4,*((C_word*)lf[83]+1),t2,((C_word*)t0)[3],t3);}

/* k1523 in a1498 in k1543 in k1401 in k1389 in a1383 */
static void C_ccall f_1525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1525,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[5],C_fix(2),t1);
t3=C_i_set_i_slot(((C_word*)t0)[4],C_fix(11),C_SCHEME_FALSE);
if(C_truep(C_slot(((C_word*)t0)[4],C_fix(13)))){
/* srfi-18.scm:341: return */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1518,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:343: ##sys#remove-from-timeout-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[53]+1)))(3,*((C_word*)lf[53]+1),t4,((C_word*)t0)[4]);}}

/* k1516 in k1523 in a1498 in k1543 in k1401 in k1389 in a1383 */
static void C_ccall f_1518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:344: return */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k1404 in k1401 in k1389 in a1383 */
static void C_ccall f_1406(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1406,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1409,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
t3=t2;
f_1409(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=C_slot(((C_word*)t0)[3],C_fix(0));
t4=C_slot(t3,C_fix(3));
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=C_i_setslot(((C_word*)t0)[2],C_fix(3),t5);
t7=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_SCHEME_TRUE);
t8=C_eqp(t4,lf[88]);
t9=(C_truep(t8)?t8:C_eqp(t4,lf[84]));
if(C_truep(t9)){
t10=C_i_setslot(((C_word*)t0)[2],C_fix(2),t3);
t11=C_slot(t3,C_fix(8));
t12=C_a_i_cons(&a,2,((C_word*)t0)[2],t11);
t13=C_i_setslot(t3,C_fix(8),t12);
t14=C_i_set_i_slot(t3,C_fix(11),C_SCHEME_FALSE);
t15=C_eqp(t4,lf[84]);
if(C_truep(t15)){
/* srfi-18.scm:358: ##sys#add-to-ready-queue */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(3,*((C_word*)lf[47]+1),t2,t3);}
else{
t16=t2;
f_1409(2,t16,C_SCHEME_UNDEFINED);}}
else{
t10=C_SCHEME_UNDEFINED;
t11=t2;
f_1409(2,t11,t10);}}}

/* k1407 in k1404 in k1401 in k1389 in a1383 */
static void C_ccall f_1409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(3));
t3=C_eqp(t2,lf[87]);
if(C_truep(t3)){
/* srfi-18.scm:360: return */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,((C_word*)t0)[2],C_SCHEME_TRUE);}
else{
/* srfi-18.scm:361: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(2,*((C_word*)lf[29]+1),((C_word*)t0)[2]);}}

/* f_1127 in k698 in k623 in k470 in k467 */
static void C_ccall f_1127(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1127r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1127r(t0,t1,t2,t3);}}

static void C_ccall f_1127r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[70],lf[80]);
t5=C_i_pairp(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1137,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=C_i_car(t3);
/* srfi-18.scm:260: compute-time-limit */
f_474(t6,t7,lf[80]);}
else{
t7=t6;
f_1137(2,t7,C_SCHEME_FALSE);}}

/* k1135 */
static void C_ccall f_1137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1137,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[4]);
t3=C_fixnum_greaterp(t2,C_fix(1));
t4=(C_truep(t3)?C_i_cadr(((C_word*)t0)[4]):C_SCHEME_FALSE);
t5=(C_truep(t4)?C_i_check_structure_2(t4,lf[36],lf[80]):C_SCHEME_UNDEFINED);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1151,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm:264: ##sys#call-with-current-continuation */
C_call_cc(3,0,((C_word*)t0)[2],t6);}

/* a1150 in k1135 */
static void C_ccall f_1151(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[24],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1151,3,t0,t1,t2);}
t3=*((C_word*)lf[32]+1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1154,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1175,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(5)))){
if(C_truep(((C_word*)t0)[4])){
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1267,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t5,a[5]=t7,a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=t3,a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* srfi-18.scm:293: check */
t11=((C_word*)t7)[1];
f_1175(t11,t10);}
else{
t10=C_i_setslot(t3,C_fix(3),lf[84]);
t11=C_i_setslot(t3,C_fix(11),((C_word*)t0)[5]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1336,a[2]=t7,a[3]=t2,a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp);
t13=C_i_setslot(t3,C_fix(1),t12);
/* srfi-18.scm:311: switch */
t14=((C_word*)t5)[1];
f_1154(t14,t1);}}
else{
t10=(C_truep(((C_word*)t0)[2])?C_i_not(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=C_i_set_i_slot(((C_word*)t0)[5],C_fix(2),C_SCHEME_FALSE);
t12=C_i_set_i_slot(((C_word*)t0)[5],C_fix(5),C_SCHEME_TRUE);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f1988,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:290: check */
t14=((C_word*)t7)[1];
f_1175(t14,t13);}
else{
t11=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:t3);
t12=C_slot(t11,C_fix(3));
t13=C_eqp(lf[54],t12);
t14=(C_truep(t13)?t13:C_eqp(lf[31],t12));
if(C_truep(t14)){
t15=C_i_set_i_slot(((C_word*)t0)[5],C_fix(4),C_SCHEME_TRUE);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f1992,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:290: check */
t17=((C_word*)t7)[1];
f_1175(t17,t16);}
else{
t15=C_i_set_i_slot(((C_word*)t0)[5],C_fix(5),C_SCHEME_TRUE);
t16=C_slot(t11,C_fix(8));
t17=C_a_i_cons(&a,2,((C_word*)t0)[5],t16);
t18=C_i_setslot(t11,C_fix(8),t17);
t19=C_i_setslot(t11,C_fix(11),((C_word*)t0)[5]);
t20=C_i_setslot(((C_word*)t0)[5],C_fix(2),t11);
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f1996,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:290: check */
t22=((C_word*)t7)[1];
f_1175(t22,t21);}}}}

/* f1996 in a1150 in k1135 */
static void C_ccall f1996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:291: return */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* f1992 in a1150 in k1135 */
static void C_ccall f1992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:291: return */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* f1988 in a1150 in k1135 */
static void C_ccall f1988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:291: return */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* a1335 in a1150 in k1135 */
static void C_ccall f_1336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1336,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1340,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:310: check */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1175(t3,t2);}

/* k1338 in a1335 in a1150 in k1135 */
static void C_ccall f_1340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:310: return */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k1265 in a1150 in k1135 */
static void C_ccall f_1267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1267,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1278,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word)li39),tmp=(C_word)a,a+=8,tmp);
t3=C_i_setslot(((C_word*)t0)[8],C_fix(1),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1273,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:305: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(4,*((C_word*)lf[59]+1),t4,((C_word*)t0)[8],((C_word*)t0)[2]);}

/* k1271 in k1265 in a1150 in k1135 */
static void C_ccall f_1273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:306: switch */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1154(t2,((C_word*)t0)[2]);}

/* a1277 in k1265 in a1150 in k1135 */
static void C_ccall f_1278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1278,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1318,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_slot(((C_word*)t0)[6],C_fix(3));
/* srfi-18.scm:297: ##sys#delq */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(4,*((C_word*)lf[83]+1),t2,((C_word*)t0)[5],t3);}

/* k1316 in a1277 in k1265 in a1150 in k1135 */
static void C_ccall f_1318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1318,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[7],C_fix(3),t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1285,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_slot(((C_word*)t0)[6],C_fix(13)))){
t4=t3;
f_1285(2,t4,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm:299: ##sys#remove-from-timeout-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[53]+1)))(3,*((C_word*)lf[53]+1),t3,((C_word*)t0)[6]);}}

/* k1283 in k1316 in a1277 in k1265 in a1150 in k1135 */
static void C_ccall f_1285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1285,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1288,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm:300: check */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1175(t3,t2);}

/* k1286 in k1283 in k1316 in a1277 in k1265 in a1150 in k1135 */
static void C_ccall f_1288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1288,2,t0,t1);}
t2=C_slot(((C_word*)t0)[6],C_fix(8));
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],t2);
t4=C_i_setslot(((C_word*)t0)[6],C_fix(8),t3);
t5=C_i_set_i_slot(((C_word*)t0)[6],C_fix(11),C_SCHEME_FALSE);
t6=C_i_setslot(((C_word*)t0)[5],C_fix(2),((C_word*)t0)[4]);
/* srfi-18.scm:304: return */
t7=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* check in a1150 in k1135 */
static void C_fcall f_1175(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1175,NULL,2,t0,t1);}
if(C_truep(C_slot(((C_word*)t0)[3],C_fix(4)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1189,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_record3(&a,3,lf[19],lf[82],C_SCHEME_END_OF_LIST);
/* srfi-18.scm:273: ##sys#signal */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t2,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1187 in check in a1150 in k1135 */
static void C_ccall f_1189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:272: return */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* switch in a1150 in k1135 */
static void C_fcall f_1154(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1154,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1165,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(3));
t4=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* srfi-18.scm:268: ##sys#append */
t5=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}

/* k1163 in switch in a1150 in k1135 */
static void C_ccall f_1165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[3],C_fix(3),t1);
/* srfi-18.scm:269: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(2,*((C_word*)lf[29]+1),((C_word*)t0)[2]);}

/* f_1103 in k698 in k623 in k470 in k467 */
static void C_ccall f_1103(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1103,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[70],lf[76]);
if(C_truep(C_slot(t2,C_fix(5)))){
t4=C_slot(t2,C_fix(2));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t4:lf[77]));}
else{
t4=C_slot(t2,C_fix(4));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?lf[78]:lf[79]));}}

/* f_1094 in k698 in k623 in k470 in k467 */
static void C_ccall f_1094(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1094,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[70],lf[75]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(6),t3));}

/* f_1085 in k698 in k623 in k470 in k467 */
static void C_ccall f_1085(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1085,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[70],lf[74]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(6)));}

/* f_1076 in k698 in k623 in k470 in k467 */
static void C_ccall f_1076(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1076,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[70],lf[73]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f_1045 in k698 in k623 in k470 in k467 */
static void C_ccall f_1045(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1045r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1045r(t0,t1,t2);}}

static void C_ccall f_1045r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1049,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* srfi-18.scm:235: gensym */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),t3,lf[70]);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
/* srfi-18.scm:236: ##sys#make-mutex */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(4,*((C_word*)lf[72]+1),t1,t5,C_SCHEME_FALSE);}
else{
/* ##sys#error */
t5=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k1047 */
static void C_ccall f_1049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:236: ##sys#make-mutex */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(4,*((C_word*)lf[72]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* f_1039 in k698 in k623 in k470 in k467 */
static void C_ccall f_1039(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1039,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[70]));}

/* f_999 in k698 in k623 in k470 in k467 */
static void C_ccall f_999(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_999,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1027,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_1027(2,t4,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm:227: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(6,*((C_word*)lf[5]+1),t3,lf[6],lf[67],lf[68],t2);}}

/* k1025 */
static void C_ccall f_1027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1027,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1034,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:228: compute-time-limit */
f_474(t2,((C_word*)t0)[2],lf[67]);}

/* k1032 in k1025 */
static void C_ccall f_1034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1034,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1008,a[2]=t1,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:221: ##sys#call-with-current-continuation */
C_call_cc(3,0,t2,t3);}

/* a1007 in k1032 in k1025 */
static void C_ccall f_1008(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1008,3,t0,t1,t2);}
t3=*((C_word*)lf[32]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1020,a[2]=t2,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp);
t5=C_i_setslot(t3,C_fix(1),t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1015,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:225: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(4,*((C_word*)lf[59]+1),t6,t3,((C_word*)t0)[2]);}

/* k1013 in a1007 in k1032 in k1025 */
static void C_ccall f_1015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:226: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(2,*((C_word*)lf[29]+1),((C_word*)t0)[2]);}

/* a1019 in a1007 in k1032 in k1025 */
static void C_ccall f_1020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1020,2,t0,t1);}
/* srfi-18.scm:224: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* f_977 in k698 in k623 in k470 in k467 */
static void C_ccall f_977(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_977,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[36],lf[66]);
t4=C_slot(t2,C_fix(3));
t5=C_eqp(t4,lf[65]);
if(C_truep(t5)){
t6=C_i_setslot(t2,C_fix(3),lf[46]);
/* srfi-18.scm:217: ##sys#add-to-ready-queue */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(3,*((C_word*)lf[47]+1),t1,t2);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* f_944 in k698 in k623 in k470 in k467 */
static void C_ccall f_944(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_944,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[36],lf[64]);
t4=C_i_setslot(t2,C_fix(3),lf[65]);
t5=C_eqp(t2,*((C_word*)lf[32]+1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_962,a[2]=t2,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:208: ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t6);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* a961 */
static void C_ccall f_962(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_962,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_971,a[2]=t2,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t4=C_i_setslot(((C_word*)t0)[2],C_fix(1),t3);
/* srfi-18.scm:211: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(2,*((C_word*)lf[29]+1),t1);}

/* a970 in a961 */
static void C_ccall f_971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_971,2,t0,t1);}
/* srfi-18.scm:210: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* f_900 in k698 in k623 in k470 in k467 */
static void C_ccall f_900(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_900,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[36],lf[60]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_907,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(t2,*((C_word*)lf[62]+1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_939,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:198: ##sys#exit-handler */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[63]+1)))(2,*((C_word*)lf[63]+1),t6);}
else{
t6=t4;
f_907(2,t6,C_SCHEME_UNDEFINED);}}

/* k937 */
static void C_ccall f_939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g180181 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k905 */
static void C_ccall f_907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_907,2,t0,t1);}
t2=C_a_i_list1(&a,1,C_SCHEME_UNDEFINED);
t3=C_i_setslot(((C_word*)t0)[3],C_fix(2),t2);
t4=C_a_i_record3(&a,3,lf[19],lf[61],C_SCHEME_END_OF_LIST);
t5=C_i_setslot(((C_word*)t0)[3],C_fix(7),t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:201: ##sys#thread-kill! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[30]+1)))(4,*((C_word*)lf[30]+1),t6,((C_word*)t0)[3],lf[54]);}

/* k914 in k905 */
static void C_ccall f_916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(((C_word*)t0)[3],*((C_word*)lf[32]+1));
if(C_truep(t2)){
/* srfi-18.scm:202: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(2,*((C_word*)lf[29]+1),((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_772 in k698 in k623 in k470 in k467 */
static void C_ccall f_772(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_772r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_772r(t0,t1,t2,t3);}}

static void C_ccall f_772r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[36],lf[52]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_779,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t3))){
t6=C_slot(t3,C_fix(0));
/* srfi-18.scm:164: compute-time-limit */
f_474(t5,t6,lf[52]);}
else{
t6=t5;
f_779(2,t6,C_SCHEME_FALSE);}}

/* k777 */
static void C_ccall f_779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_779,2,t0,t1);}
t2=C_i_pairp(((C_word*)t0)[4]);
t3=(C_truep(t2)?C_slot(((C_word*)t0)[4],C_fix(1)):C_SCHEME_FALSE);
t4=(C_truep(t3)?C_i_pairp(t3):C_SCHEME_FALSE);
t5=(C_truep(t4)?C_slot(t3,C_fix(0)):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_793,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word)li21),tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm:168: ##sys#call-with-current-continuation */
C_call_cc(3,0,((C_word*)t0)[2],t6);}

/* a792 in k777 */
static void C_ccall f_793(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_793,3,t0,t1,t2);}
t3=*((C_word*)lf[32]+1);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_797,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
/* srfi-18.scm:171: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(4,*((C_word*)lf[59]+1),t4,t3,((C_word*)t0)[2]);}
else{
t5=t4;
f_797(2,t5,C_SCHEME_UNDEFINED);}}

/* k795 in a792 in k777 */
static void C_ccall f_797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_797,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_808,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li20),tmp=(C_word)a,a+=8,tmp);
t3=C_i_setslot(((C_word*)t0)[5],C_fix(1),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_803,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:192: ##sys#thread-block-for-termination! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[58]+1)))(4,*((C_word*)lf[58]+1),t4,((C_word*)t0)[5],((C_word*)t0)[7]);}

/* k801 in k795 in a792 in k777 */
static void C_ccall f_803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:193: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(2,*((C_word*)lf[29]+1),((C_word*)t0)[2]);}

/* a807 in k795 in a792 in k777 */
static void C_ccall f_808(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_808,2,t0,t1);}
t2=C_slot(((C_word*)t0)[6],C_fix(3));
t3=C_eqp(t2,lf[31]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_821,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[4],C_fix(13)))){
t5=C_slot(((C_word*)t0)[6],C_fix(2));
C_apply(4,0,t1,((C_word*)t0)[5],t5);}
else{
/* srfi-18.scm:178: ##sys#remove-from-timeout-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[53]+1)))(3,*((C_word*)lf[53]+1),t4,((C_word*)t0)[4]);}}
else{
t4=C_eqp(t2,lf[54]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_847,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=C_slot(((C_word*)t0)[6],C_fix(7));
t7=C_a_i_list2(&a,2,lf[55],t6);
t8=C_a_i_record3(&a,3,lf[19],lf[56],t7);
/* srfi-18.scm:182: ##sys#signal */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t5,t8);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_866,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
/* srfi-18.scm:187: return */
t6=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t1,((C_word*)t0)[2]);}
else{
t6=C_a_i_record3(&a,3,lf[19],lf[57],C_SCHEME_END_OF_LIST);
/* srfi-18.scm:190: ##sys#signal */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t5,t6);}}}}

/* k864 in a807 in k795 in a792 in k777 */
static void C_ccall f_866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:187: return */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k845 in a807 in k795 in a792 in k777 */
static void C_ccall f_847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:181: return */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k819 in a807 in k795 in a792 in k777 */
static void C_ccall f_821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(2));
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* f_736 in k698 in k623 in k470 in k467 */
static void C_ccall f_736(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_736,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_740,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_closurep(((C_word*)t3)[1]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_766,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:150: make-thread */
t6=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t3)[1]);}
else{
t5=t4;
f_740(t5,C_i_check_structure_2(((C_word*)t3)[1],lf[36],lf[45]));}}

/* k764 */
static void C_ccall f_766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_740(t3,t2);}

/* k738 */
static void C_fcall f_740(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_740,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_743,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)((C_word*)t0)[3])[1],C_fix(3));
t4=C_eqp(lf[34],t3);
if(C_truep(t4)){
t5=t2;
f_743(2,t5,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm:153: ##sys#error */
t5=*((C_word*)lf[48]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[45],lf[49],((C_word*)((C_word*)t0)[3])[1]);}}

/* k741 in k738 */
static void C_ccall f_743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_743,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(3),lf[46]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_749,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:155: ##sys#add-to-ready-queue */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(3,*((C_word*)lf[47]+1),t3,((C_word*)((C_word*)t0)[3])[1]);}

/* k747 in k741 in k738 */
static void C_ccall f_749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* f_727 in k698 in k623 in k470 in k467 */
static void C_ccall f_727(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_727,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[36],lf[44]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(6)));}

/* f_711 in k698 in k623 in k470 in k467 */
static void C_ccall f_711(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_711,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[36],lf[43]);
t5=C_i_check_exact_2(t3,lf[43]);
t6=C_i_fixnum_max(t3,C_fix(10));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_set_i_slot(t2,C_fix(9),t6));}

/* f_702 in k698 in k623 in k470 in k467 */
static void C_ccall f_702(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_702,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[36],lf[42]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(9)));}

/* f_689 in k623 in k470 in k467 */
static void C_ccall f_689(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_689,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[36],lf[40]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(10),t3));}

/* f_680 in k623 in k470 in k467 */
static void C_ccall f_680(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_680,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[36],lf[39]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(3)));}

/* f_677 in k623 in k470 in k467 */
static void C_ccall f_677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_677,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[32]+1));}

/* f_671 in k623 in k470 in k467 */
static void C_ccall f_671(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_671,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[36]));}

/* f_627 in k623 in k470 in k467 */
static void C_ccall f_627(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_627r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_627r(t0,t1,t2,t3);}}

static void C_ccall f_627r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_631,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_656,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(t3))){
t6=C_slot(t3,C_fix(0));
t7=C_slot(*((C_word*)lf[32]+1),C_fix(9));
/* srfi-18.scm:100: ##sys#make-thread */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(6,*((C_word*)lf[33]+1),t4,C_SCHEME_FALSE,lf[34],t6,t7);}
else{
/* srfi-18.scm:103: gensym */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),t5,lf[36]);}}

/* k654 */
static void C_ccall f_656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(*((C_word*)lf[32]+1),C_fix(9));
/* srfi-18.scm:100: ##sys#make-thread */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(6,*((C_word*)lf[33]+1),((C_word*)t0)[2],C_SCHEME_FALSE,lf[34],t1,t2);}

/* k629 */
static void C_ccall f_631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_631,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_636,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp);
t3=C_i_setslot(t1,C_fix(1),t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}

/* a635 in k629 */
static void C_ccall f_636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_642,a[2]=((C_word*)t0)[3],a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:108: ##sys#call-with-values */
C_call_with_values(4,0,t1,((C_word*)t0)[2],t2);}

/* a641 in a635 in k629 */
static void C_ccall f_642(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_642r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_642r(t0,t1,t2);}}

static void C_ccall f_642r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=C_i_setslot(((C_word*)t0)[2],C_fix(2),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_649,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:112: ##sys#thread-kill! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[30]+1)))(4,*((C_word*)lf[30]+1),t4,((C_word*)t0)[2],lf[31]);}

/* k647 in a641 in a635 in k629 */
static void C_ccall f_649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:113: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(2,*((C_word*)lf[29]+1),((C_word*)t0)[2]);}

/* f_607 in k470 in k467 */
static void C_ccall f_607(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_607,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[19]))){
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(lf[26],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_591 in k470 in k467 */
static void C_ccall f_591(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_591,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[19]))){
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(lf[24],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_575 in k470 in k467 */
static void C_ccall f_575(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_575,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[19]))){
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(lf[22],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_559 in k470 in k467 */
static void C_ccall f_559(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_559,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[19]))){
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(lf[20],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_552 in k470 in k467 */
static void C_ccall f_552(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_552,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[3]));}

/* f_535 in k470 in k467 */
static void C_ccall f_535(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_535,3,t0,t1,t2);}
t3=C_i_check_number_2(t2,lf[12]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_546,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_550,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:66: ##sys#exact->inexact */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t5,t2);}

/* k548 */
static void C_ccall f_550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm:66: fp* */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(4,*((C_word*)lf[13]+1),((C_word*)t0)[2],t1,lf[11]);}

/* k544 */
static void C_ccall f_546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_546,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record2(&a,2,lf[3],t1));}

/* f_522 in k470 in k467 */
static void C_ccall f_522(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_522,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[3],lf[9]);
t4=C_slot(t2,C_fix(1));
/* srfi-18.scm:62: fp/ */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t1,t4,lf[11]);}

/* f_512 in k470 in k467 */
static void C_ccall f_512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_512,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_520,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:58: current-milliseconds */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(2,*((C_word*)lf[4]+1),t2);}

/* k518 */
static void C_ccall f_520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_520,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record2(&a,2,lf[3],t1));}

/* compute-time-limit in k470 in k467 */
static void C_fcall f_474(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_474,NULL,3,t1,t2,t3);}
t4=t2;
if(C_truep(t4)){
if(C_truep(C_i_structurep(t2,lf[3]))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_slot(t2,C_fix(1)));}
else{
if(C_truep(C_i_numberp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_503,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:51: current-milliseconds */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(2,*((C_word*)lf[4]+1),t5);}
else{
/* srfi-18.scm:52: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(6,*((C_word*)lf[5]+1),t1,lf[6],t3,lf[7],t2);}}}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k501 in compute-time-limit in k470 in k467 */
static void C_ccall f_503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_503,2,t0,t1);}
t2=C_a_i_times(&a,2,((C_word*)t0)[3],C_fix(1000));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_plus(&a,2,t1,t2));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[123] = {
{"toplevel:srfi_2d18_2escm",(void*)C_srfi_2d18_toplevel},
{"f_469:srfi_2d18_2escm",(void*)f_469},
{"f_472:srfi_2d18_2escm",(void*)f_472},
{"f_625:srfi_2d18_2escm",(void*)f_625},
{"f_1892:srfi_2d18_2escm",(void*)f_1892},
{"f_700:srfi_2d18_2escm",(void*)f_700},
{"f_1858:srfi_2d18_2escm",(void*)f_1858},
{"f_1862:srfi_2d18_2escm",(void*)f_1862},
{"f_1868:srfi_2d18_2escm",(void*)f_1868},
{"f_1834:srfi_2d18_2escm",(void*)f_1834},
{"f_1844:srfi_2d18_2escm",(void*)f_1844},
{"f_1847:srfi_2d18_2escm",(void*)f_1847},
{"f_1850:srfi_2d18_2escm",(void*)f_1850},
{"f_1744:srfi_2d18_2escm",(void*)f_1744},
{"f_1828:srfi_2d18_2escm",(void*)f_1828},
{"f_1811:srfi_2d18_2escm",(void*)f_1811},
{"f_1794:srfi_2d18_2escm",(void*)f_1794},
{"f_1766:srfi_2d18_2escm",(void*)f_1766},
{"f_1777:srfi_2d18_2escm",(void*)f_1777},
{"f_1781:srfi_2d18_2escm",(void*)f_1781},
{"f_1683:srfi_2d18_2escm",(void*)f_1683},
{"f_1721:srfi_2d18_2escm",(void*)f_1721},
{"f_1731:srfi_2d18_2escm",(void*)f_1731},
{"f_1716:srfi_2d18_2escm",(void*)f_1716},
{"f_1640:srfi_2d18_2escm",(void*)f_1640},
{"f_1631:srfi_2d18_2escm",(void*)f_1631},
{"f_1622:srfi_2d18_2escm",(void*)f_1622},
{"f_1613:srfi_2d18_2escm",(void*)f_1613},
{"f_1607:srfi_2d18_2escm",(void*)f_1607},
{"f_1588:srfi_2d18_2escm",(void*)f_1588},
{"f_1596:srfi_2d18_2escm",(void*)f_1596},
{"f_1366:srfi_2d18_2escm",(void*)f_1366},
{"f_1384:srfi_2d18_2escm",(void*)f_1384},
{"f_1391:srfi_2d18_2escm",(void*)f_1391},
{"f_1560:srfi_2d18_2escm",(void*)f_1560},
{"f_1403:srfi_2d18_2escm",(void*)f_1403},
{"f_1545:srfi_2d18_2escm",(void*)f_1545},
{"f_1537:srfi_2d18_2escm",(void*)f_1537},
{"f_1499:srfi_2d18_2escm",(void*)f_1499},
{"f_1525:srfi_2d18_2escm",(void*)f_1525},
{"f_1518:srfi_2d18_2escm",(void*)f_1518},
{"f_1406:srfi_2d18_2escm",(void*)f_1406},
{"f_1409:srfi_2d18_2escm",(void*)f_1409},
{"f_1127:srfi_2d18_2escm",(void*)f_1127},
{"f_1137:srfi_2d18_2escm",(void*)f_1137},
{"f_1151:srfi_2d18_2escm",(void*)f_1151},
{"f1996:srfi_2d18_2escm",(void*)f1996},
{"f1992:srfi_2d18_2escm",(void*)f1992},
{"f1988:srfi_2d18_2escm",(void*)f1988},
{"f_1336:srfi_2d18_2escm",(void*)f_1336},
{"f_1340:srfi_2d18_2escm",(void*)f_1340},
{"f_1267:srfi_2d18_2escm",(void*)f_1267},
{"f_1273:srfi_2d18_2escm",(void*)f_1273},
{"f_1278:srfi_2d18_2escm",(void*)f_1278},
{"f_1318:srfi_2d18_2escm",(void*)f_1318},
{"f_1285:srfi_2d18_2escm",(void*)f_1285},
{"f_1288:srfi_2d18_2escm",(void*)f_1288},
{"f_1175:srfi_2d18_2escm",(void*)f_1175},
{"f_1189:srfi_2d18_2escm",(void*)f_1189},
{"f_1154:srfi_2d18_2escm",(void*)f_1154},
{"f_1165:srfi_2d18_2escm",(void*)f_1165},
{"f_1103:srfi_2d18_2escm",(void*)f_1103},
{"f_1094:srfi_2d18_2escm",(void*)f_1094},
{"f_1085:srfi_2d18_2escm",(void*)f_1085},
{"f_1076:srfi_2d18_2escm",(void*)f_1076},
{"f_1045:srfi_2d18_2escm",(void*)f_1045},
{"f_1049:srfi_2d18_2escm",(void*)f_1049},
{"f_1039:srfi_2d18_2escm",(void*)f_1039},
{"f_999:srfi_2d18_2escm",(void*)f_999},
{"f_1027:srfi_2d18_2escm",(void*)f_1027},
{"f_1034:srfi_2d18_2escm",(void*)f_1034},
{"f_1008:srfi_2d18_2escm",(void*)f_1008},
{"f_1015:srfi_2d18_2escm",(void*)f_1015},
{"f_1020:srfi_2d18_2escm",(void*)f_1020},
{"f_977:srfi_2d18_2escm",(void*)f_977},
{"f_944:srfi_2d18_2escm",(void*)f_944},
{"f_962:srfi_2d18_2escm",(void*)f_962},
{"f_971:srfi_2d18_2escm",(void*)f_971},
{"f_900:srfi_2d18_2escm",(void*)f_900},
{"f_939:srfi_2d18_2escm",(void*)f_939},
{"f_907:srfi_2d18_2escm",(void*)f_907},
{"f_916:srfi_2d18_2escm",(void*)f_916},
{"f_772:srfi_2d18_2escm",(void*)f_772},
{"f_779:srfi_2d18_2escm",(void*)f_779},
{"f_793:srfi_2d18_2escm",(void*)f_793},
{"f_797:srfi_2d18_2escm",(void*)f_797},
{"f_803:srfi_2d18_2escm",(void*)f_803},
{"f_808:srfi_2d18_2escm",(void*)f_808},
{"f_866:srfi_2d18_2escm",(void*)f_866},
{"f_847:srfi_2d18_2escm",(void*)f_847},
{"f_821:srfi_2d18_2escm",(void*)f_821},
{"f_736:srfi_2d18_2escm",(void*)f_736},
{"f_766:srfi_2d18_2escm",(void*)f_766},
{"f_740:srfi_2d18_2escm",(void*)f_740},
{"f_743:srfi_2d18_2escm",(void*)f_743},
{"f_749:srfi_2d18_2escm",(void*)f_749},
{"f_727:srfi_2d18_2escm",(void*)f_727},
{"f_711:srfi_2d18_2escm",(void*)f_711},
{"f_702:srfi_2d18_2escm",(void*)f_702},
{"f_689:srfi_2d18_2escm",(void*)f_689},
{"f_680:srfi_2d18_2escm",(void*)f_680},
{"f_677:srfi_2d18_2escm",(void*)f_677},
{"f_671:srfi_2d18_2escm",(void*)f_671},
{"f_627:srfi_2d18_2escm",(void*)f_627},
{"f_656:srfi_2d18_2escm",(void*)f_656},
{"f_631:srfi_2d18_2escm",(void*)f_631},
{"f_636:srfi_2d18_2escm",(void*)f_636},
{"f_642:srfi_2d18_2escm",(void*)f_642},
{"f_649:srfi_2d18_2escm",(void*)f_649},
{"f_607:srfi_2d18_2escm",(void*)f_607},
{"f_591:srfi_2d18_2escm",(void*)f_591},
{"f_575:srfi_2d18_2escm",(void*)f_575},
{"f_559:srfi_2d18_2escm",(void*)f_559},
{"f_552:srfi_2d18_2escm",(void*)f_552},
{"f_535:srfi_2d18_2escm",(void*)f_535},
{"f_550:srfi_2d18_2escm",(void*)f_550},
{"f_546:srfi_2d18_2escm",(void*)f_546},
{"f_522:srfi_2d18_2escm",(void*)f_522},
{"f_512:srfi_2d18_2escm",(void*)f_512},
{"f_520:srfi_2d18_2escm",(void*)f_520},
{"f_474:srfi_2d18_2escm",(void*)f_474},
{"f_503:srfi_2d18_2escm",(void*)f_503},
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
