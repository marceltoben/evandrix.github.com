/* Generated from extras.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: extras.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file extras.c
   unit: extras
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[136];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,23),40,100,111,108,111,111,112,56,53,32,120,56,55,32,105,56,56,32,120,115,56,57,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,115,108,117,114,112,32,112,111,114,116,56,52,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,17),40,102,95,55,55,48,32,46,32,116,109,112,54,57,55,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,13),40,102,95,56,57,52,32,46,32,110,57,56,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,12),40,102,95,57,50,48,32,110,49,48,50,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,12),40,103,49,50,48,32,114,108,49,50,50,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,49,50,54,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,17),40,102,95,57,53,57,32,46,32,97,114,103,115,49,48,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,110,115,49,53,49,32,110,49,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,16),40,100,111,114,101,97,100,32,112,111,114,116,49,52,57,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,26),40,102,95,49,49,48,56,32,46,32,112,111,114,116,45,97,110,100,45,109,97,120,49,52,51,41,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,25),40,102,95,49,49,57,56,32,115,116,114,49,54,49,32,46,32,112,111,114,116,49,54,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,115,116,97,114,116,49,55,56,32,110,49,55,57,32,109,49,56,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,115,116,97,114,116,49,57,50,32,110,49,57,51,32,109,49,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,38),40,102,95,49,50,49,57,32,110,49,54,56,32,100,101,115,116,49,54,57,32,112,111,114,116,49,55,48,32,115,116,97,114,116,49,55,49,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,33),40,102,95,49,51,54,53,32,110,50,49,51,32,100,101,115,116,50,49,52,32,46,32,116,109,112,50,49,50,50,49,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,18),40,102,95,49,52,53,51,32,110,50,51,50,32,112,50,51,51,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,20),40,102,95,49,53,49,48,32,46,32,116,109,112,50,53,53,50,53,54,41,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,20),40,102,95,49,53,54,49,32,46,32,116,109,112,50,55,50,50,55,51,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,26),40,102,95,49,54,48,50,32,112,114,101,100,50,56,51,32,46,32,112,111,114,116,50,56,52,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,22),40,98,111,100,121,51,48,51,32,110,51,49,51,32,112,111,114,116,51,49,52,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,22),40,100,101,102,45,112,111,114,116,51,48,54,32,37,110,51,48,49,51,49,57,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,10),40,100,101,102,45,110,51,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,23),40,102,95,49,54,55,49,32,115,50,57,57,32,46,32,109,111,114,101,51,48,48,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,20),40,102,95,49,55,54,48,32,46,32,116,109,112,51,51,49,51,51,50,41,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,28),40,102,95,49,56,48,48,32,98,121,116,101,51,52,55,32,46,32,116,109,112,51,52,54,51,52,56,41,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,18),40,114,101,97,100,45,109,97,99,114,111,63,32,108,51,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,109,97,99,114,111,45,112,114,101,102,105,120,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,19),40,111,117,116,32,115,116,114,51,57,56,32,99,111,108,51,57,57,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,24),40,119,114,45,101,120,112,114,32,101,120,112,114,52,48,57,32,99,111,108,52,49,48,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,52,49,52,32,99,111,108,52,49,53,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,20),40,119,114,45,108,115,116,32,108,52,49,49,32,99,111,108,52,49,50,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,11),40,103,52,51,55,32,97,52,51,57,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,105,52,50,52,32,106,52,50,53,32,99,111,108,52,50,54,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,12),40,103,52,52,56,32,99,110,52,53,48,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,18),40,119,114,32,111,98,106,52,48,50,32,99,111,108,52,48,51,41,0,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,20),40,115,112,97,99,101,115,32,110,52,56,53,32,99,111,108,52,56,54,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,21),40,105,110,100,101,110,116,32,116,111,52,56,55,32,99,111,108,52,56,56,41,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,14),40,97,50,54,48,53,32,115,116,114,53,48,48,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,38),40,112,114,32,111,98,106,52,57,49,32,99,111,108,52,57,50,32,101,120,116,114,97,52,57,51,32,112,112,45,112,97,105,114,52,57,52,41,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,33),40,112,112,45,101,120,112,114,32,101,120,112,114,53,48,52,32,99,111,108,53,48,53,32,101,120,116,114,97,53,48,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,44),40,112,112,45,99,97,108,108,32,101,120,112,114,53,48,57,32,99,111,108,53,49,48,32,101,120,116,114,97,53,49,49,32,112,112,45,105,116,101,109,53,49,50,41,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,41),40,112,112,45,108,105,115,116,32,108,53,49,53,32,99,111,108,53,49,54,32,101,120,116,114,97,53,49,55,32,112,112,45,105,116,101,109,53,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,53,50,54,32,99,111,108,53,50,55,41,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,50),40,112,112,45,100,111,119,110,32,108,53,50,48,32,99,111,108,49,53,50,49,32,99,111,108,50,53,50,50,32,101,120,116,114,97,53,50,51,32,112,112,45,105,116,101,109,53,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,39),40,116,97,105,108,49,32,114,101,115,116,53,52,53,32,99,111,108,49,53,52,54,32,99,111,108,50,53,52,55,32,99,111,108,51,53,52,56,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,39),40,116,97,105,108,50,32,114,101,115,116,53,53,51,32,99,111,108,49,53,53,52,32,99,111,108,50,53,53,53,32,99,111,108,51,53,53,54,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,31),40,116,97,105,108,51,32,114,101,115,116,53,54,49,32,99,111,108,49,53,54,50,32,99,111,108,50,53,54,51,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,70),40,112,112,45,103,101,110,101,114,97,108,32,101,120,112,114,53,51,53,32,99,111,108,53,51,54,32,101,120,116,114,97,53,51,55,32,110,97,109,101,100,63,53,51,56,32,112,112,45,49,53,51,57,32,112,112,45,50,53,52,48,32,112,112,45,51,53,52,49,41,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,35),40,112,112,45,101,120,112,114,45,108,105,115,116,32,108,53,55,52,32,99,111,108,53,55,53,32,101,120,116,114,97,53,55,54,41,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,35),40,112,112,45,108,97,109,98,100,97,32,101,120,112,114,53,55,55,32,99,111,108,53,55,56,32,101,120,116,114,97,53,55,57,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,31),40,112,112,45,105,102,32,101,120,112,114,53,56,48,32,99,111,108,53,56,49,32,101,120,116,114,97,53,56,50,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,33),40,112,112,45,99,111,110,100,32,101,120,112,114,53,56,51,32,99,111,108,53,56,52,32,101,120,116,114,97,53,56,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,33),40,112,112,45,99,97,115,101,32,101,120,112,114,53,56,54,32,99,111,108,53,56,55,32,101,120,116,114,97,53,56,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,32),40,112,112,45,97,110,100,32,101,120,112,114,53,56,57,32,99,111,108,53,57,48,32,101,120,116,114,97,53,57,49,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,32),40,112,112,45,108,101,116,32,101,120,112,114,53,57,50,32,99,111,108,53,57,51,32,101,120,116,114,97,53,57,52,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,34),40,112,112,45,98,101,103,105,110,32,101,120,112,114,53,57,56,32,99,111,108,53,57,57,32,101,120,116,114,97,54,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,31),40,112,112,45,100,111,32,101,120,112,114,54,48,49,32,99,111,108,54,48,50,32,101,120,116,114,97,54,48,51,41,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,15),40,115,116,121,108,101,32,104,101,97,100,54,48,52,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,18),40,112,112,32,111,98,106,52,54,50,32,99,111,108,52,54,51,41,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,53),40,103,101,110,101,114,105,99,45,119,114,105,116,101,32,111,98,106,51,53,56,32,100,105,115,112,108,97,121,63,51,53,57,32,119,105,100,116,104,51,54,48,32,111,117,116,112,117,116,51,54,49,41,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,12),40,97,51,49,53,57,32,115,54,53,55,41,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,24),40,102,95,51,49,52,55,32,111,98,106,54,53,52,32,46,32,111,112,116,54,53,53,41};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,6),40,110,101,120,116,41,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,6),40,115,107,105,112,41,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,20),40,114,101,99,32,109,115,103,54,54,57,32,97,114,103,115,54,55,48,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,40),40,102,112,114,105,110,116,102,48,32,108,111,99,54,54,50,32,112,111,114,116,54,54,51,32,109,115,103,54,54,52,32,97,114,103,115,54,54,53,41};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,34),40,102,95,51,52,55,52,32,112,111,114,116,55,49,48,32,102,115,116,114,55,49,49,32,46,32,97,114,103,115,55,49,50,41,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,26),40,102,95,51,52,56,48,32,102,115,116,114,55,49,52,32,46,32,97,114,103,115,55,49,53,41,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,26),40,102,95,51,52,56,54,32,102,115,116,114,55,49,55,32,46,32,97,114,103,115,55,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,32),40,102,95,51,52,57,50,32,102,109,116,45,111,114,45,100,115,116,55,50,48,32,46,32,97,114,103,115,55,50,49,41};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_extras_toplevel)
C_externexport void C_ccall C_extras_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_762)
static void C_ccall f_762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_765)
static void C_ccall f_765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_768)
static void C_ccall f_768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3145)
static void C_ccall f_3145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3535)
static void C_ccall f_3535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3525)
static void C_ccall f_3525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3176)
static void C_fcall f_3176(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3180)
static void C_ccall f_3180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3463)
static void C_ccall f_3463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3214)
static void C_fcall f_3214(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3249)
static void C_fcall f_3249(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3427)
static C_word C_fcall f_3427(C_word t0,C_word t1);
C_noret_decl(f_3382)
static void C_ccall f_3382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3385)
static void C_ccall f_3385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3391)
static void C_ccall f_3391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3364)
static void C_ccall f_3364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3347)
static void C_ccall f_3347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3343)
static void C_ccall f_3343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3330)
static void C_ccall f_3330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3326)
static void C_ccall f_3326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3300)
static void C_ccall f_3300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3287)
static void C_ccall f_3287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3230)
static void C_fcall f_3230(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3223)
static C_word C_fcall f_3223(C_word t0);
C_noret_decl(f_3186)
static void C_ccall f_3186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3208)
static void C_ccall f_3208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3147)
static void C_ccall f_3147(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3147)
static void C_ccall f_3147r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3151)
static void C_ccall f_3151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3158)
static void C_ccall f_3158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3160)
static void C_ccall f_3160(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3164)
static void C_ccall f_3164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3154)
static void C_ccall f_3154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1838)
static void C_fcall f_1838(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3134)
static void C_ccall f_3134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3138)
static void C_ccall f_3138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2487)
static void C_fcall f_2487(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3042)
static void C_fcall f_3042(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3052)
static void C_fcall f_3052(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3005)
static void C_ccall f_3005(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2987)
static void C_ccall f_2987(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2821)
static void C_fcall f_2821(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2949)
static void C_ccall f_2949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2934)
static void C_ccall f_2934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2906)
static void C_fcall f_2906(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2865)
static void C_fcall f_2865(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2888)
static void C_ccall f_2888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2824)
static void C_fcall f_2824(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2851)
static void C_ccall f_2851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2847)
static void C_ccall f_2847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2744)
static void C_fcall f_2744(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2750)
static void C_fcall f_2750(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2815)
static void C_ccall f_2815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2781)
static void C_ccall f_2781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2773)
static void C_ccall f_2773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2735)
static void C_fcall f_2735(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2739)
static void C_ccall f_2739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2707)
static void C_fcall f_2707(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2733)
static void C_ccall f_2733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2642)
static void C_ccall f_2642(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2702)
static void C_ccall f_2702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2660)
static void C_ccall f_2660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2555)
static void C_fcall f_2555(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2568)
static void C_ccall f_2568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2604)
static void C_ccall f_2604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2584)
static void C_ccall f_2584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2523)
static void C_fcall f_2523(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2546)
static void C_ccall f_2546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2539)
static void C_ccall f_2539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2490)
static void C_fcall f_2490(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1951)
static void C_fcall f_1951(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2130)
static void C_ccall f_2130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2468)
static void C_ccall f_2468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2478)
static void C_ccall f_2478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2471)
static void C_ccall f_2471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2449)
static void C_ccall f_2449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2436)
static void C_ccall f_2436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2413)
static void C_ccall f_2413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2395)
static void C_ccall f_2395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2315)
static void C_ccall f_2315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2318)
static void C_ccall f_2318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2349)
static void C_ccall f_2349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2322)
static void C_fcall f_2322(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2309)
static void C_ccall f_2309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2190)
static void C_fcall f_2190(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2197)
static void C_fcall f_2197(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2286)
static void C_ccall f_2286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2282)
static void C_ccall f_2282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2235)
static void C_fcall f_2235(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2262)
static void C_ccall f_2262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2254)
static void C_ccall f_2254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2228)
static void C_ccall f_2228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2224)
static void C_ccall f_2224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2220)
static void C_ccall f_2220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2169)
static void C_ccall f_2169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2146)
static void C_ccall f_2146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2156)
static void C_ccall f_2156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2137)
static void C_ccall f_2137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2107)
static void C_ccall f_2107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2111)
static void C_ccall f_2111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1981)
static void C_fcall f_1981(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2064)
static void C_ccall f_2064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1999)
static void C_ccall f_1999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2001)
static void C_fcall f_2001(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2053)
static void C_ccall f_2053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2049)
static void C_ccall f_2049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2025)
static void C_ccall f_2025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1954)
static void C_fcall f_1954(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1961)
static void C_ccall f_1961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1972)
static void C_ccall f_1972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1932)
static void C_fcall f_1932(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1942)
static void C_ccall f_1942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1899)
static C_word C_fcall f_1899(C_word t0);
C_noret_decl(f_1841)
static void C_fcall f_1841(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1873)
static void C_fcall f_1873(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1800)
static void C_ccall f_1800(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1800)
static void C_ccall f_1800r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1804)
static void C_ccall f_1804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1810)
static void C_ccall f_1810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1760)
static void C_ccall f_1760(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1760)
static void C_ccall f_1760r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1764)
static void C_ccall f_1764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1767)
static void C_ccall f_1767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1770)
static void C_ccall f_1770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1671)
static void C_ccall f_1671(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1671)
static void C_ccall f_1671r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1712)
static void C_fcall f_1712(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1707)
static void C_fcall f_1707(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1676)
static void C_fcall f_1676(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1680)
static void C_ccall f_1680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1693)
static void C_fcall f_1693(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1690)
static void C_ccall f_1690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1602)
static void C_ccall f_1602(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1602)
static void C_ccall f_1602r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1606)
static void C_ccall f_1606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1609)
static void C_ccall f_1609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1612)
static void C_ccall f_1612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1617)
static void C_fcall f_1617(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1621)
static void C_ccall f_1621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1627)
static void C_ccall f_1627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1637)
static void C_ccall f_1637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1561)
static void C_ccall f_1561(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1561)
static void C_ccall f_1561r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1565)
static void C_ccall f_1565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1568)
static void C_ccall f_1568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1510)
static void C_ccall f_1510(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1510)
static void C_ccall f_1510r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1453)
static void C_ccall f_1453(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1457)
static void C_ccall f_1457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1481)
static void C_ccall f_1481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1484)
static void C_ccall f_1484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1489)
static void C_fcall f_1489(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1493)
static void C_ccall f_1493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1505)
static void C_ccall f_1505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1466)
static void C_ccall f_1466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1469)
static void C_ccall f_1469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1365)
static void C_ccall f_1365(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1365)
static void C_ccall f_1365r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1387)
static void C_ccall f_1387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1359)
static void C_ccall f_1359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1229)
static void C_fcall f_1229(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1299)
static void C_fcall f_1299(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1306)
static void C_fcall f_1306(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1240)
static void C_fcall f_1240(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1244)
static void C_ccall f_1244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1198)
static void C_ccall f_1198(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1198)
static void C_ccall f_1198r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1205)
static void C_ccall f_1205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1211)
static void C_ccall f_1211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1108)
static void C_ccall f_1108(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1108)
static void C_ccall f_1108r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1175)
static void C_ccall f_1175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1120)
static void C_ccall f_1120(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1130)
static void C_fcall f_1130(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1143)
static void C_ccall f_1143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_959)
static void C_ccall f_959(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_959)
static void C_ccall f_959r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_969)
static void C_fcall f_969(C_word t0,C_word t1) C_noret;
C_noret_decl(f_972)
static void C_ccall f_972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_992)
static void C_ccall f_992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_997)
static void C_fcall f_997(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1083)
static void C_ccall f_1083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1075)
static void C_ccall f_1075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1061)
static void C_fcall f_1061(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1043)
static void C_ccall f_1043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1052)
static void C_ccall f_1052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_979)
static void C_fcall f_979(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_920)
static void C_ccall f_920(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_894)
static void C_ccall f_894(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_894)
static void C_ccall f_894r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_915)
static void C_ccall f_915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_911)
static void C_ccall f_911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_898)
static void C_ccall f_898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_770)
static void C_ccall f_770(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_770)
static void C_ccall f_770r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_847)
static void C_ccall f_847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_797)
static void C_ccall f_797(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_805)
static void C_ccall f_805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_807)
static void C_fcall f_807(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_827)
static void C_ccall f_827(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_3176)
static void C_fcall trf_3176(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3176(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3176(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3214)
static void C_fcall trf_3214(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3214(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3214(t0,t1,t2,t3);}

C_noret_decl(trf_3249)
static void C_fcall trf_3249(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3249(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3249(t0,t1);}

C_noret_decl(trf_3230)
static void C_fcall trf_3230(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3230(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3230(t0,t1);}

C_noret_decl(trf_1838)
static void C_fcall trf_1838(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1838(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1838(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2487)
static void C_fcall trf_2487(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2487(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2487(t0,t1,t2,t3);}

C_noret_decl(trf_3042)
static void C_fcall trf_3042(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3042(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3042(t0,t1,t2);}

C_noret_decl(trf_3052)
static void C_fcall trf_3052(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3052(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3052(t0,t1);}

C_noret_decl(trf_2821)
static void C_fcall trf_2821(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2821(void *dummy){
C_word t8=C_pick(0);
C_word t7=C_pick(1);
C_word t6=C_pick(2);
C_word t5=C_pick(3);
C_word t4=C_pick(4);
C_word t3=C_pick(5);
C_word t2=C_pick(6);
C_word t1=C_pick(7);
C_word t0=C_pick(8);
C_adjust_stack(-9);
f_2821(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_2906)
static void C_fcall trf_2906(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2906(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2906(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2865)
static void C_fcall trf_2865(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2865(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2865(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2824)
static void C_fcall trf_2824(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2824(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2824(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2744)
static void C_fcall trf_2744(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2744(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2744(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2750)
static void C_fcall trf_2750(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2750(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2750(t0,t1,t2,t3);}

C_noret_decl(trf_2735)
static void C_fcall trf_2735(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2735(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2735(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2707)
static void C_fcall trf_2707(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2707(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2707(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2555)
static void C_fcall trf_2555(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2555(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2555(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2523)
static void C_fcall trf_2523(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2523(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2523(t0,t1,t2,t3);}

C_noret_decl(trf_2490)
static void C_fcall trf_2490(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2490(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2490(t0,t1,t2,t3);}

C_noret_decl(trf_1951)
static void C_fcall trf_1951(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1951(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1951(t0,t1,t2,t3);}

C_noret_decl(trf_2322)
static void C_fcall trf_2322(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2322(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2322(t0,t1,t2);}

C_noret_decl(trf_2190)
static void C_fcall trf_2190(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2190(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2190(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2197)
static void C_fcall trf_2197(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2197(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2197(t0,t1);}

C_noret_decl(trf_2235)
static void C_fcall trf_2235(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2235(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2235(t0,t1,t2);}

C_noret_decl(trf_1981)
static void C_fcall trf_1981(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1981(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1981(t0,t1,t2,t3);}

C_noret_decl(trf_2001)
static void C_fcall trf_2001(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2001(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2001(t0,t1,t2,t3);}

C_noret_decl(trf_1954)
static void C_fcall trf_1954(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1954(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1954(t0,t1,t2,t3);}

C_noret_decl(trf_1932)
static void C_fcall trf_1932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1932(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1932(t0,t1,t2,t3);}

C_noret_decl(trf_1841)
static void C_fcall trf_1841(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1841(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1841(t0,t1);}

C_noret_decl(trf_1873)
static void C_fcall trf_1873(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1873(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1873(t0,t1);}

C_noret_decl(trf_1712)
static void C_fcall trf_1712(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1712(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1712(t0,t1);}

C_noret_decl(trf_1707)
static void C_fcall trf_1707(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1707(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1707(t0,t1,t2);}

C_noret_decl(trf_1676)
static void C_fcall trf_1676(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1676(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1676(t0,t1,t2,t3);}

C_noret_decl(trf_1693)
static void C_fcall trf_1693(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1693(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1693(t0,t1);}

C_noret_decl(trf_1617)
static void C_fcall trf_1617(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1617(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1617(t0,t1);}

C_noret_decl(trf_1489)
static void C_fcall trf_1489(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1489(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1489(t0,t1);}

C_noret_decl(trf_1229)
static void C_fcall trf_1229(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1229(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1229(t0,t1);}

C_noret_decl(trf_1299)
static void C_fcall trf_1299(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1299(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1299(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1306)
static void C_fcall trf_1306(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1306(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1306(t0,t1);}

C_noret_decl(trf_1240)
static void C_fcall trf_1240(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1240(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1240(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1130)
static void C_fcall trf_1130(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1130(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1130(t0,t1,t2,t3);}

C_noret_decl(trf_969)
static void C_fcall trf_969(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_969(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_969(t0,t1);}

C_noret_decl(trf_997)
static void C_fcall trf_997(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_997(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_997(t0,t1,t2);}

C_noret_decl(trf_1061)
static void C_fcall trf_1061(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1061(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1061(t0,t1);}

C_noret_decl(trf_979)
static void C_fcall trf_979(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_979(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_979(t0,t1,t2);}

C_noret_decl(trf_807)
static void C_fcall trf_807(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_807(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_807(t0,t1,t2,t3,t4);}

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
C_extras_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_extras_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("extras_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(872)){
C_save(t1);
C_rereclaim2(872*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,136);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],4,"read");
lf[3]=C_h_intern(&lf[3],7,"reverse");
lf[4]=C_h_intern(&lf[4],20,"call-with-input-file");
lf[5]=C_h_intern(&lf[5],9,"read-file");
lf[6]=C_h_intern(&lf[6],18,"\003sysstandard-input");
lf[7]=C_h_intern(&lf[7],5,"port\077");
lf[8]=C_h_intern(&lf[8],9,"\003syserror");
lf[9]=C_h_intern(&lf[9],9,"randomize");
lf[10]=C_h_intern(&lf[10],11,"\003sysflo2fix");
lf[11]=C_h_intern(&lf[11],3,"fp/");
lf[12]=C_decode_literal(C_heaptop,"\376U1000.0\000");
lf[13]=C_h_intern(&lf[13],15,"current-seconds");
lf[14]=C_h_intern(&lf[14],6,"random");
lf[15]=C_h_intern(&lf[15],9,"read-line");
lf[16]=C_h_intern(&lf[16],13,"\003syssubstring");
lf[17]=C_h_intern(&lf[17],15,"\003sysread-char-0");
lf[18]=C_h_intern(&lf[18],9,"peek-char");
lf[19]=C_h_intern(&lf[19],17,"\003sysstring-append");
lf[20]=C_h_intern(&lf[20],11,"make-string");
lf[21]=C_h_intern(&lf[21],15,"\003sysmake-string");
lf[22]=C_h_intern(&lf[22],14,"\003syscheck-port");
lf[23]=C_h_intern(&lf[23],10,"read-lines");
lf[24]=C_h_intern(&lf[24],10,"write-line");
lf[25]=C_h_intern(&lf[25],19,"\003sysstandard-output");
lf[26]=C_h_intern(&lf[26],7,"newline");
lf[27]=C_h_intern(&lf[27],7,"display");
lf[28]=C_h_intern(&lf[28],16,"\003sysread-string!");
lf[29]=C_h_intern(&lf[29],12,"read-string!");
lf[30]=C_h_intern(&lf[30],20,"\003sysread-string/port");
lf[31]=C_h_intern(&lf[31],11,"read-string");
lf[32]=C_h_intern(&lf[32],17,"get-output-string");
lf[33]=C_h_intern(&lf[33],12,"write-string");
lf[34]=C_h_intern(&lf[34],18,"open-output-string");
lf[35]=C_h_intern(&lf[35],13,"read-buffered");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[37]=C_h_intern(&lf[37],10,"read-token");
lf[38]=C_h_intern(&lf[38],16,"\003syswrite-char-0");
lf[39]=C_h_intern(&lf[39],15,"\003syspeek-char-0");
lf[40]=C_h_intern(&lf[40],9,"read-byte");
lf[41]=C_h_intern(&lf[41],10,"write-byte");
lf[43]=C_h_intern(&lf[43],5,"quote");
lf[44]=C_h_intern(&lf[44],10,"quasiquote");
lf[45]=C_h_intern(&lf[45],7,"unquote");
lf[46]=C_h_intern(&lf[46],16,"unquote-splicing");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\001`");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\002,@");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\003 . ");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\002()");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\005#!eof");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[59]=C_h_intern(&lf[59],12,"vector->list");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\002#t");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\002#f");
lf[62]=C_h_intern(&lf[62],18,"\003sysnumber->string");
lf[63]=C_h_intern(&lf[63],9,"\003sysprint");
lf[64]=C_h_intern(&lf[64],21,"\003sysprocedure->string");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[66]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\011\376B\000\000\002\134t\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\012\376B\000\000\002\134n\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\015\376B\000\000\002\134r\376\377\016");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\001x");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\001U");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\001u");
lf[72]=C_h_intern(&lf[72],9,"char-name");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\002#\134");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\016#<unspecified>");
lf[75]=C_h_intern(&lf[75],19,"\003syspointer->string");
lf[76]=C_h_intern(&lf[76],28,"\003sysarbitrary-unbound-symbol");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\020#<unbound value>");
lf[78]=C_h_intern(&lf[78],19,"\003sysuser-print-hook");
lf[79]=C_h_intern(&lf[79],13,"string-append");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\007#<port ");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\001>");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\001>");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\025#<static blob of size");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\017#<blob of size ");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\002#>");
lf[86]=C_h_intern(&lf[86],23,"\003syslambda-info->string");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\016#<lambda info ");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\025#<unprintable object>");
lf[89]=C_h_intern(&lf[89],11,"\003sysnumber\077");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\010        ");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\010        ");
lf[92]=C_h_intern(&lf[92],21,"reverse-string-append");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[94]=C_h_intern(&lf[94],3,"max");
lf[95]=C_h_intern(&lf[95],28,"\003syssymbol->qualified-string");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[103]=C_h_intern(&lf[103],6,"lambda");
lf[104]=C_h_intern(&lf[104],2,"if");
lf[105]=C_h_intern(&lf[105],4,"set!");
lf[106]=C_h_intern(&lf[106],4,"cond");
lf[107]=C_h_intern(&lf[107],4,"case");
lf[108]=C_h_intern(&lf[108],3,"and");
lf[109]=C_h_intern(&lf[109],2,"or");
lf[110]=C_h_intern(&lf[110],3,"let");
lf[111]=C_h_intern(&lf[111],5,"begin");
lf[112]=C_h_intern(&lf[112],2,"do");
lf[113]=C_h_intern(&lf[113],4,"let*");
lf[114]=C_h_intern(&lf[114],6,"letrec");
lf[115]=C_h_intern(&lf[115],6,"define");
lf[116]=C_h_intern(&lf[116],18,"pretty-print-width");
lf[117]=C_h_intern(&lf[117],12,"pretty-print");
lf[118]=C_h_intern(&lf[118],19,"current-output-port");
lf[119]=C_h_intern(&lf[119],2,"pp");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000/too few arguments to formatted output procedure");
lf[122]=C_h_intern(&lf[122],5,"write");
lf[123]=C_h_intern(&lf[123],16,"\003sysflush-output");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\037illegal format-string character");
lf[125]=C_h_intern(&lf[125],13,"\003systty-port\077");
lf[126]=C_h_intern(&lf[126],7,"fprintf");
lf[127]=C_h_intern(&lf[127],6,"printf");
lf[128]=C_h_intern(&lf[128],7,"sprintf");
lf[129]=C_h_intern(&lf[129],6,"format");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\023illegal destination");
lf[131]=C_h_intern(&lf[131],12,"output-port\077");
lf[132]=C_h_intern(&lf[132],17,"register-feature!");
lf[133]=C_h_intern(&lf[133],7,"srfi-28");
lf[134]=C_h_intern(&lf[134],14,"make-parameter");
lf[135]=C_h_intern(&lf[135],6,"extras");
C_register_lf2(lf,136,create_ptable());
t2=C_mutate(&lf[0] /* (set! c96 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_762,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k760 */
static void C_ccall f_762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_762,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_765,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k763 in k760 */
static void C_ccall f_765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_768,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:37: register-feature! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[132]+1)))(3,*((C_word*)lf[132]+1),t2,lf[135]);}

/* k766 in k763 in k760 */
static void C_ccall f_768(C_word c,C_word t0,C_word t1){
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
C_word ab[54],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_768,2,t0,t1);}
t2=*((C_word*)lf[2]+1);
t3=*((C_word*)lf[3]+1);
t4=*((C_word*)lf[4]+1);
t5=C_mutate((C_word*)lf[5]+1 /* (set! read-file ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_770,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li2),tmp=(C_word)a,a+=6,tmp));
t6=C_mutate((C_word*)lf[9]+1 /* (set! randomize ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_894,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[14]+1 /* (set! random ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_920,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[15]+1 /* (set! read-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_959,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[23]+1 /* (set! read-lines ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1108,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[24]+1 /* (set! write-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1198,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[28]+1 /* (set! ##sys#read-string! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1219,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[29]+1 /* (set! read-string! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1365,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[30]+1 /* (set! ##sys#read-string/port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1453,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[31]+1 /* (set! read-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1510,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[35]+1 /* (set! read-buffered ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1561,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[37]+1 /* (set! read-token ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1602,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[33]+1 /* (set! write-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1671,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[40]+1 /* (set! read-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1760,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[41]+1 /* (set! write-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1800,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate(&lf[42] /* (set! generic-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1838,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3145,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:564: make-parameter */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[134]+1)))(3,*((C_word*)lf[134]+1),t21,C_fix(79));}

/* k3143 in k766 in k763 in k760 */
static void C_ccall f_3145(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3145,2,t0,t1);}
t2=C_mutate((C_word*)lf[116]+1 /* (set! pretty-print-width ...) */,t1);
t3=C_mutate((C_word*)lf[117]+1 /* (set! pretty-print ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3147,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[119]+1 /* (set! pp ...) */,*((C_word*)lf[117]+1));
t5=C_mutate(&lf[120] /* (set! fprintf0 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3176,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[126]+1 /* (set! fprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3474,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[127]+1 /* (set! printf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3480,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[128]+1 /* (set! sprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3486,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[129]+1 /* (set! format ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3492,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3535,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:648: register-feature! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[132]+1)))(3,*((C_word*)lf[132]+1),t10,lf[133]);}

/* k3533 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* f_3492 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3492(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr3r,(void*)f_3492r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3492r(t0,t1,t2,t3);}}

static void C_ccall f_3492r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(12);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3500,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=t2;
if(C_truep(t6)){
if(C_truep(C_booleanp(t2))){
t7=*((C_word*)lf[127]+1);
C_apply(4,0,t1,t7,((C_word*)t4)[1]);}
else{
if(C_truep(C_i_stringp(t2))){
t7=C_a_i_cons(&a,2,t2,((C_word*)t4)[1]);
t8=C_set_block_item(t4,0,t7);
t9=*((C_word*)lf[128]+1);
C_apply(4,0,t1,t9,((C_word*)t4)[1]);}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3525,a[2]=t5,a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:643: output-port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[131]+1)))(3,*((C_word*)lf[131]+1),t7,t2);}}}
else{
t7=*((C_word*)lf[128]+1);
C_apply(4,0,t1,t7,((C_word*)t4)[1]);}}

/* k3523 */
static void C_ccall f_3525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3525,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=*((C_word*)lf[126]+1);
C_apply(4,0,((C_word*)t0)[3],t4,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* extras.scm:645: ##sys#error */
t2=*((C_word*)lf[8]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[129],lf[130],((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);}}

/* k3498 */
static void C_ccall f_3500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* f_3486 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3486(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_3486r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3486r(t0,t1,t2,t3);}}

static void C_ccall f_3486r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* extras.scm:636: fprintf0 */
f_3176(t1,lf[128],C_SCHEME_FALSE,t2,t3);}

/* f_3480 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3480(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_3480r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3480r(t0,t1,t2,t3);}}

static void C_ccall f_3480r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* extras.scm:633: fprintf0 */
f_3176(t1,lf[127],*((C_word*)lf[25]+1),t2,t3);}

/* f_3474 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3474(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_3474r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3474r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3474r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
/* extras.scm:630: fprintf0 */
f_3176(t1,lf[126],t2,t3,t4);}

/* fprintf0 in k3143 in k766 in k763 in k760 */
static void C_fcall f_3176(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3176,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3180,a[2]=t5,a[3]=t4,a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t3)){
/* extras.scm:578: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),t6,t3,t2);}
else{
t7=t6;
f_3180(2,t7,C_SCHEME_UNDEFINED);}}

/* k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3180,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3463,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[6])){
/* extras.scm:579: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[125]+1)))(3,*((C_word*)lf[125]+1),t3,((C_word*)t0)[6]);}
else{
/* extras.scm:581: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(2,*((C_word*)lf[34]+1),t2);}}

/* k3461 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_3183(2,t2,((C_word*)t0)[2]);}
else{
/* extras.scm:581: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(2,*((C_word*)lf[34]+1),((C_word*)t0)[3]);}}

/* k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3186,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3214,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3214(t6,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_fcall f_3214(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3214,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_i_check_string_2(t2,((C_word*)t0)[4]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_block_size(t2);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3223,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3230,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word)li65),tmp=(C_word)a,a+=5,tmp));
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t12,a[5]=((C_word*)t0)[3],a[6]=t16,a[7]=t10,a[8]=t8,a[9]=t7,a[10]=((C_word)li67),tmp=(C_word)a,a+=11,tmp));
t18=((C_word*)t16)[1];
f_3249(t18,t1);}

/* loop in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_fcall f_3249(C_word t0,C_word t1){
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
C_word *a;
loop:
a=C_alloc(11);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3249,NULL,2,t0,t1);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[9])[1],((C_word*)t0)[8]))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=f_3223(((C_word*)((C_word*)t0)[7])[1]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3262,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(t2,C_make_character(126));
t5=(C_truep(t4)?C_fixnum_lessp(((C_word*)((C_word*)t0)[9])[1],((C_word*)t0)[8]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=f_3223(((C_word*)((C_word*)t0)[7])[1]);
t7=C_u_i_char_upcase(t6);
switch(t7){
case C_make_character(83):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3287,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:602: next */
t9=((C_word*)((C_word*)t0)[4])[1];
f_3230(t9,t8);
case C_make_character(65):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3300,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:603: next */
t9=((C_word*)((C_word*)t0)[4])[1];
f_3230(t9,t8);
case C_make_character(67):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3313,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:604: next */
t9=((C_word*)((C_word*)t0)[4])[1];
f_3230(t9,t8);
case C_make_character(66):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3326,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3330,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:605: next */
t10=((C_word*)((C_word*)t0)[4])[1];
f_3230(t10,t9);
case C_make_character(79):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3343,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3347,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:606: next */
t10=((C_word*)((C_word*)t0)[4])[1];
f_3230(t10,t9);
case C_make_character(88):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3360,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3364,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:607: next */
t10=((C_word*)((C_word*)t0)[4])[1];
f_3230(t10,t9);
case C_make_character(33):
/* extras.scm:608: ##sys#flush-output */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[123]+1)))(3,*((C_word*)lf[123]+1),t3,((C_word*)t0)[5]);
case C_make_character(63):
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3382,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:610: next */
t9=((C_word*)((C_word*)t0)[4])[1];
f_3230(t9,t8);
case C_make_character(126):
/* extras.scm:614: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(4,*((C_word*)lf[38]+1),t3,C_make_character(126),((C_word*)t0)[5]);
default:
t8=C_eqp(t7,C_make_character(37));
t9=(C_truep(t8)?t8:C_eqp(t7,C_make_character(78)));
if(C_truep(t9)){
/* extras.scm:615: newline */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(3,*((C_word*)lf[26]+1),t3,((C_word*)t0)[5]);}
else{
if(C_truep(C_u_i_char_whitespacep(t6))){
t10=f_3223(((C_word*)((C_word*)t0)[7])[1]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3427,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[7],a[4]=((C_word)li66),tmp=(C_word)a,a+=5,tmp);
t12=f_3427(t11,t10);
/* extras.scm:624: loop */
t25=t1;
t1=t25;
goto loop;}
else{
/* extras.scm:622: ##sys#error */
t10=*((C_word*)lf[8]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t3,((C_word*)t0)[3],lf[124],t6);}}}}
else{
/* extras.scm:623: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(4,*((C_word*)lf[38]+1),t3,t2,((C_word*)t0)[5]);}}}

/* skip in loop in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static C_word C_fcall f_3427(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_check;
loop:
if(C_truep(C_u_i_char_whitespacep(t1))){
t2=f_3223(((C_word*)((C_word*)t0)[3])[1]);
t6=t2;
t1=t6;
goto loop;}
else{
t2=C_fixnum_difference(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}}

/* k3380 in loop in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3382,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3385,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:611: next */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3230(t3,t2);}

/* k3383 in k3380 in loop in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3385,2,t0,t1);}
t2=C_i_check_list_2(t1,((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3391,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:613: rec */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3214(t4,t3,((C_word*)t0)[2],t1);}

/* k3389 in k3383 in k3380 in loop in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:624: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3249(t2,((C_word*)t0)[2]);}

/* k3362 in loop in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:607: ##sys#number->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(4,*((C_word*)lf[62]+1),((C_word*)t0)[2],t1,C_fix(16));}

/* k3358 in loop in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:607: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3345 in loop in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:606: ##sys#number->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(4,*((C_word*)lf[62]+1),((C_word*)t0)[2],t1,C_fix(8));}

/* k3341 in loop in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:606: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3328 in loop in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:605: ##sys#number->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(4,*((C_word*)lf[62]+1),((C_word*)t0)[2],t1,C_fix(2));}

/* k3324 in loop in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:605: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3311 in loop in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:604: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(4,*((C_word*)lf[38]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3298 in loop in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:603: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3285 in loop in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:602: write */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[122]+1)))(4,*((C_word*)lf[122]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3260 in loop in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:624: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3249(t2,((C_word*)t0)[2]);}

/* next in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_fcall f_3230(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3230,NULL,2,t0,t1);}
if(C_truep(C_eqp(((C_word*)((C_word*)t0)[3])[1],C_SCHEME_END_OF_LIST))){
/* extras.scm:592: ##sys#error */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],lf[121]);}
else{
t2=C_slot(((C_word*)((C_word*)t0)[3])[1],C_fix(0));
t3=C_slot(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* fetch in rec in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static C_word C_fcall f_3223(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t1=C_subchar(((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t1);}

/* k3184 in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3186,2,t0,t1);}
t2=((C_word*)t0)[4];
if(C_truep(t2)){
t3=C_eqp(((C_word*)t0)[3],((C_word*)t0)[4]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3208,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:627: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[32]+1)))(3,*((C_word*)lf[32]+1),t4,((C_word*)t0)[3]);}}
else{
/* extras.scm:625: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[32]+1)))(3,*((C_word*)lf[32]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k3206 in k3184 in k3181 in k3178 in fprintf0 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:627: ##sys#print */
t2=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* f_3147 in k3143 in k766 in k763 in k760 */
static void C_ccall f_3147(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3147r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3147r(t0,t1,t2,t3);}}

static void C_ccall f_3147r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3151,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t4;
f_3151(2,t5,C_i_car(t3));}
else{
/* extras.scm:567: current-output-port */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(2,*((C_word*)lf[118]+1),t4);}}

/* k3149 */
static void C_ccall f_3151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3151,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3154,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3158,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:568: pretty-print-width */
t4=*((C_word*)lf[116]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3156 in k3149 */
static void C_ccall f_3158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3158,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3160,a[2]=((C_word*)t0)[4],a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp);
/* extras.scm:568: generic-write */
f_1838(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t1,t2);}

/* a3159 in k3156 in k3149 */
static void C_ccall f_3160(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3160,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3164,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:568: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),t3,t2,((C_word*)t0)[2]);}

/* k3162 in a3159 in k3156 in k3149 */
static void C_ccall f_3164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k3152 in k3149 */
static void C_ccall f_3154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* generic-write in k766 in k763 in k760 */
static void C_fcall f_1838(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[43],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1838,NULL,5,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1841,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t17=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1899,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t18=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1932,a[2]=t5,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp));
t19=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1951,a[2]=t3,a[3]=t7,a[4]=t11,a[5]=t9,a[6]=t13,a[7]=((C_word)li37),tmp=(C_word)a,a+=8,tmp));
t20=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2487,a[2]=t7,a[3]=t9,a[4]=t13,a[5]=t4,a[6]=t3,a[7]=t11,a[8]=((C_word)li61),tmp=(C_word)a,a+=9,tmp));
if(C_truep(t4)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3134,a[2]=t2,a[3]=t15,a[4]=t1,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:558: make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(4,*((C_word*)lf[20]+1),t21,C_fix(1),C_make_character(10));}
else{
/* extras.scm:559: wr */
t21=((C_word*)t13)[1];
f_1951(t21,t1,t2,C_fix(0));}}

/* k3132 in generic-write in k766 in k763 in k760 */
static void C_ccall f_3134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3138,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:558: pp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2487(t3,t2,((C_word*)t0)[2],C_fix(0));}

/* k3136 in k3132 in generic-write in k766 in k763 in k760 */
static void C_ccall f_3138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:558: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* pp in generic-write in k766 in k763 in k760 */
static void C_fcall f_2487(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word ab[152],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2487,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_SCHEME_UNDEFINED;
t35=(*a=C_VECTOR_TYPE|1,a[1]=t34,tmp=(C_word)a,a+=2,tmp);
t36=C_SCHEME_UNDEFINED;
t37=(*a=C_VECTOR_TYPE|1,a[1]=t36,tmp=(C_word)a,a+=2,tmp);
t38=C_SCHEME_UNDEFINED;
t39=(*a=C_VECTOR_TYPE|1,a[1]=t38,tmp=(C_word)a,a+=2,tmp);
t40=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2490,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp));
t41=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2523,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp));
t42=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2555,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t11,a[6]=t15,a[7]=((C_word*)t0)[7],a[8]=((C_word)li41),tmp=(C_word)a,a+=9,tmp));
t43=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2642,a[2]=((C_word*)t0)[2],a[3]=t15,a[4]=t39,a[5]=t13,a[6]=t19,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[3],a[9]=t11,a[10]=t9,a[11]=((C_word)li42),tmp=(C_word)a,a+=12,tmp));
t44=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2707,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t17,a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp));
t45=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2735,a[2]=((C_word*)t0)[7],a[3]=t17,a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp));
t46=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2744,a[2]=((C_word*)t0)[7],a[3]=t7,a[4]=t9,a[5]=((C_word)li46),tmp=(C_word)a,a+=6,tmp));
t47=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2821,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t17,a[5]=t7,a[6]=t9,a[7]=((C_word)li50),tmp=(C_word)a,a+=8,tmp));
t48=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2969,a[2]=t11,a[3]=t15,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp));
t49=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2975,a[2]=t11,a[3]=t21,a[4]=t19,a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp));
t50=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2981,a[2]=t11,a[3]=t19,a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp));
t51=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2987,a[2]=t21,a[3]=t13,a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp));
t52=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2993,a[2]=t21,a[3]=t11,a[4]=t19,a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t53=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2999,a[2]=t11,a[3]=t13,a[4]=((C_word)li56),tmp=(C_word)a,a+=5,tmp));
t54=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3005,a[2]=t11,a[3]=t21,a[4]=t19,a[5]=((C_word)li57),tmp=(C_word)a,a+=6,tmp));
t55=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3027,a[2]=t11,a[3]=t19,a[4]=((C_word)li58),tmp=(C_word)a,a+=5,tmp));
t56=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3033,a[2]=t11,a[3]=t21,a[4]=t19,a[5]=((C_word)li59),tmp=(C_word)a,a+=6,tmp));
t57=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3042,a[2]=t37,a[3]=t35,a[4]=t33,a[5]=t31,a[6]=t29,a[7]=t27,a[8]=t25,a[9]=t23,a[10]=((C_word)li60),tmp=(C_word)a,a+=11,tmp));
/* extras.scm:555: pr */
t58=((C_word*)t9)[1];
f_2555(t58,t1,t2,t3,C_fix(0),((C_word*)t11)[1]);}

/* style in pp in generic-write in k766 in k763 in k760 */
static void C_fcall f_3042(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3042,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,lf[103]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
if(C_truep(t3)){
t5=t4;
f_3052(t5,t3);}
else{
t5=C_eqp(t2,lf[113]);
if(C_truep(t5)){
t6=t4;
f_3052(t6,t5);}
else{
t6=C_eqp(t2,lf[114]);
t7=t4;
f_3052(t7,(C_truep(t6)?t6:C_eqp(t2,lf[115])));}}}

/* k3050 in style in pp in generic-write in k766 in k763 in k760 */
static void C_fcall f_3052(C_word t0,C_word t1){
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
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[10])[1]);}
else{
t2=C_eqp(((C_word*)t0)[9],lf[104]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[9],lf[105]));
if(C_truep(t3)){
t4=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)((C_word*)t0)[8])[1]);}
else{
t4=C_eqp(((C_word*)t0)[9],lf[106]);
if(C_truep(t4)){
t5=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)((C_word*)t0)[7])[1]);}
else{
t5=C_eqp(((C_word*)t0)[9],lf[107]);
if(C_truep(t5)){
t6=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,((C_word*)((C_word*)t0)[6])[1]);}
else{
t6=C_eqp(((C_word*)t0)[9],lf[108]);
t7=(C_truep(t6)?t6:C_eqp(((C_word*)t0)[9],lf[109]));
if(C_truep(t7)){
t8=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,((C_word*)((C_word*)t0)[5])[1]);}
else{
t8=C_eqp(((C_word*)t0)[9],lf[110]);
if(C_truep(t8)){
t9=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,((C_word*)((C_word*)t0)[4])[1]);}
else{
t9=C_eqp(((C_word*)t0)[9],lf[111]);
if(C_truep(t9)){
t10=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,((C_word*)((C_word*)t0)[3])[1]);}
else{
t10=C_eqp(((C_word*)t0)[9],lf[112]);
t11=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_truep(t10)?((C_word*)((C_word*)t0)[2])[1]:C_SCHEME_FALSE));}}}}}}}}

/* pp-do in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_3033(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3033,5,t0,t1,t2,t3,t4);}
/* extras.scm:533: pp-general */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2821(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* pp-begin in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_3027(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3027,5,t0,t1,t2,t3,t4);}
/* extras.scm:530: pp-general */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2821(t5,t1,t2,t3,t4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-let in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_3005(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3005,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
if(C_truep(C_i_pairp(t5))){
t6=C_i_car(t5);
t7=C_i_symbolp(t6);
/* extras.scm:527: pp-general */
t8=((C_word*)((C_word*)t0)[4])[1];
f_2821(t8,t1,t2,t3,t4,t7,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}
else{
/* extras.scm:527: pp-general */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2821(t6,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}}

/* pp-and in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2999(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2999,5,t0,t1,t2,t3,t4);}
/* extras.scm:522: pp-call */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2707(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-case in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2993(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2993,5,t0,t1,t2,t3,t4);}
/* extras.scm:519: pp-general */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2821(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-cond in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2987(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2987,5,t0,t1,t2,t3,t4);}
/* extras.scm:516: pp-call */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2707(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-if in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2981(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2981,5,t0,t1,t2,t3,t4);}
/* extras.scm:513: pp-general */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2821(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-lambda in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2975(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2975,5,t0,t1,t2,t3,t4);}
/* extras.scm:510: pp-general */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2821(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-expr-list in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2969(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2969,5,t0,t1,t2,t3,t4);}
/* extras.scm:507: pp-list */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2735(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-general in pp in generic-write in k766 in k763 in k760 */
static void C_fcall f_2821(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
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
C_word ab[42],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2821,NULL,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2824,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t12,a[5]=t4,a[6]=t6,a[7]=((C_word)li47),tmp=(C_word)a,a+=8,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2865,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t14,a[5]=t4,a[6]=t7,a[7]=((C_word)li48),tmp=(C_word)a,a+=8,tmp));
t17=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2906,a[2]=t8,a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
t18=C_i_car(t2);
t19=C_i_cdr(t2);
t20=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2919,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t10,a[6]=t3,a[7]=t19,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2967,a[2]=t18,a[3]=t20,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:498: out */
t22=((C_word*)((C_word*)t0)[2])[1];
f_1932(t22,t21,lf[102],t3);}

/* k2965 in pp-general in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:498: wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1951(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2917 in pp-general in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2919,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[8])?C_i_pairp(((C_word*)t0)[7]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[7]);
t4=C_i_cdr(((C_word*)t0)[7]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2934,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2949,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:502: out */
t7=((C_word*)((C_word*)t0)[2])[1];
f_1932(t7,t6,lf[101],t1);}
else{
t3=C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(2));
t4=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:504: tail1 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_2824(t5,((C_word*)t0)[4],((C_word*)t0)[7],t3,t1,t4);}}

/* k2947 in k2917 in pp-general in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:502: wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1951(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2932 in k2917 in pp-general in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2934,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(2));
t3=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:503: tail1 */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2824(t4,((C_word*)t0)[3],((C_word*)t0)[2],t2,t1,t3);}

/* tail3 in pp-general in pp in generic-write in k766 in k763 in k760 */
static void C_fcall f_2906(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2906,NULL,5,t0,t1,t2,t3,t4);}
/* extras.scm:494: pp-down */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2744(t5,t1,t2,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* tail2 in pp-general in pp in generic-write in k766 in k763 in k760 */
static void C_fcall f_2865(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2865,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(((C_word*)t0)[6])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=C_i_cdr(t2);
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1)):C_fix(0));
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2888,a[2]=t3,a[3]=t8,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2892,a[2]=((C_word*)t0)[6],a[3]=t10,a[4]=t7,a[5]=t11,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:490: indent */
t13=((C_word*)((C_word*)t0)[2])[1];
f_2523(t13,t12,t5,t4);}
else{
/* extras.scm:491: tail3 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2906(t7,t1,t2,t3,t4);}}

/* k2890 in tail2 in pp-general in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:490: pr */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2555(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2886 in tail2 in pp-general in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:490: tail3 */
t2=((C_word*)((C_word*)t0)[5])[1];
f_2906(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* tail1 in pp-general in pp in generic-write in k766 in k763 in k760 */
static void C_fcall f_2824(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2824,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(((C_word*)t0)[6])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=C_i_cdr(t2);
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1)):C_fix(0));
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2847,a[2]=t5,a[3]=t3,a[4]=t8,a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2851,a[2]=((C_word*)t0)[6],a[3]=t10,a[4]=t7,a[5]=t11,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:482: indent */
t13=((C_word*)((C_word*)t0)[2])[1];
f_2523(t13,t12,t5,t4);}
else{
/* extras.scm:483: tail2 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2865(t7,t1,t2,t3,t4,t5);}}

/* k2849 in tail1 in pp-general in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:482: pr */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2555(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2845 in tail1 in pp-general in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:482: tail2 */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2865(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* pp-down in pp in generic-write in k766 in k763 in k760 */
static void C_fcall f_2744(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2744,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2750,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=t8,a[8]=t5,a[9]=((C_word)li45),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_2750(t10,t1,t2,t3);}

/* loop in pp-down in pp in generic-write in k766 in k763 in k760 */
static void C_fcall f_2750(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2750,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
if(C_truep(C_i_pairp(t2))){
t4=C_i_cdr(t2);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_a_i_plus(&a,2,((C_word*)t0)[8],C_fix(1)):C_fix(0));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2773,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t8=C_i_car(t2);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2781,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=t8,a[5]=t7,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:465: indent */
t10=((C_word*)((C_word*)t0)[4])[1];
f_2523(t10,t9,((C_word*)t0)[3],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:467: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1932(t4,t1,lf[98],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2803,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2807,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2815,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2819,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:471: indent */
t8=((C_word*)((C_word*)t0)[4])[1];
f_2523(t8,t7,((C_word*)t0)[3],t3);}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2817 in loop in pp-down in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:471: out */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1932(t2,((C_word*)t0)[2],lf[100],t1);}

/* k2813 in loop in pp-down in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:471: indent */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2523(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2805 in loop in pp-down in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2807,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(1));
/* extras.scm:470: pr */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2555(t3,((C_word*)t0)[4],((C_word*)t0)[3],t1,t2,((C_word*)t0)[2]);}

/* k2801 in loop in pp-down in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:469: out */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1932(t2,((C_word*)t0)[2],lf[99],t1);}

/* k2779 in loop in pp-down in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:465: pr */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2555(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2771 in loop in pp-down in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:464: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2750(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* pp-list in pp in generic-write in k766 in k763 in k760 */
static void C_fcall f_2735(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2735,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2739,a[2]=t5,a[3]=t4,a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:455: out */
t7=((C_word*)((C_word*)t0)[2])[1];
f_1932(t7,t6,lf[97],t3);}

/* k2737 in pp-list in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:456: pp-down */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2744(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* pp-call in pp in generic-write in k766 in k763 in k760 */
static void C_fcall f_2707(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2707,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2711,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t7=C_i_car(t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2733,a[2]=t7,a[3]=t6,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:447: out */
t9=((C_word*)((C_word*)t0)[2])[1];
f_1932(t9,t8,lf[96],t3);}

/* k2731 in pp-call in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:447: wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1951(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2709 in pp-call in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2711,2,t0,t1);}
if(C_truep(((C_word*)t0)[7])){
t2=C_i_cdr(((C_word*)t0)[6]);
t3=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:449: pp-down */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2744(t4,((C_word*)t0)[4],t2,t1,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* pp-expr in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2642(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2642,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2649,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t4,a[11]=t1,a[12]=((C_word*)t0)[10],a[13]=t2,tmp=(C_word)a,a+=14,tmp);
/* extras.scm:427: read-macro? */
f_1841(t5,t2);}

/* k2647 in pp-expr in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2649,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[13];
t3=C_i_cadr(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2660,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t3,a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
t5=f_1899(((C_word*)t0)[13]);
/* extras.scm:429: out */
t6=((C_word*)((C_word*)t0)[7])[1];
f_1932(t6,t4,t5,((C_word*)t0)[6]);}
else{
t2=C_i_car(((C_word*)t0)[13]);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2676,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* extras.scm:434: style */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3042(t4,t3,t2);}
else{
/* extras.scm:441: pp-list */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2735(t3,((C_word*)t0)[11],((C_word*)t0)[13],((C_word*)t0)[6],((C_word*)t0)[10],((C_word*)((C_word*)t0)[9])[1]);}}}

/* k2674 in k2647 in pp-expr in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2676,2,t0,t1);}
if(C_truep(t1)){
/* extras.scm:436: proc */
t2=t1;
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2702,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:437: ##sys#symbol->qualified-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(3,*((C_word*)lf[95]+1),t2,((C_word*)t0)[2]);}}

/* k2700 in k2674 in k2647 in pp-expr in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
if(C_truep(C_i_greaterp(t2,C_fix(5)))){
/* extras.scm:439: pp-general */
t3=((C_word*)((C_word*)t0)[8])[1];
f_2821(t3,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}
else{
/* extras.scm:440: pp-call */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2707(t3,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);}}

/* k2658 in k2647 in pp-expr in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:428: pr */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2555(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* pr in pp in generic-write in k766 in k763 in k760 */
static void C_fcall f_2555(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[26],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2555,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_pairp(t2);
t7=(C_truep(t6)?t6:C_i_vectorp(t2));
if(C_truep(t7)){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2568,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=t5,a[7]=t2,a[8]=t9,a[9]=t3,a[10]=t1,a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t11=C_a_i_minus(&a,2,((C_word*)t0)[3],t3);
t12=C_a_i_minus(&a,2,t11,t4);
t13=C_a_i_plus(&a,2,t12,C_fix(1));
/* extras.scm:413: max */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[94]+1)))(4,*((C_word*)lf[94]+1),t10,t13,C_fix(50));}
else{
/* extras.scm:424: wr */
t8=((C_word*)((C_word*)t0)[2])[1];
f_1951(t8,t1,t2,t3);}}

/* k2566 in pr in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2568,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2571,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t3,tmp=(C_word)a,a+=12,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2606,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:414: generic-write */
f_1838(t4,((C_word*)t0)[7],((C_word*)t0)[2],C_SCHEME_FALSE,t5);}

/* a2605 in k2566 in pr in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2606(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2606,3,t0,t1,t2);}
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=C_i_string_length(t2);
t6=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[2])[1],t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_greaterp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)));}

/* k2569 in k2566 in pr in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2571,2,t0,t1);}
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[11])[1],C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2584,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:420: reverse-string-append */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[92]+1)))(3,*((C_word*)lf[92]+1),t2,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
/* extras.scm:422: pp-pair */
t2=((C_word*)t0)[5];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[9],((C_word*)t0)[6],((C_word*)t0)[8],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2600,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:423: vector->list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t2,((C_word*)t0)[6]);}}}

/* k2598 in k2569 in k2566 in pr in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2600,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2604,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:423: out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1932(t3,t2,lf[93],((C_word*)t0)[2]);}

/* k2602 in k2598 in k2569 in k2566 in pr in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:423: pp-list */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2735(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k2582 in k2569 in k2566 in pr in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:420: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* indent in pp in generic-write in k766 in k763 in k760 */
static void C_fcall f_2523(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2523,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
if(C_truep(C_i_lessp(t2,t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2539,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2546,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:407: make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(4,*((C_word*)lf[20]+1),t5,C_fix(1),C_make_character(10));}
else{
t4=C_a_i_minus(&a,2,t2,t3);
/* extras.scm:408: spaces */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2490(t5,t1,t4,t3);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2544 in indent in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:407: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2537 in indent in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* extras.scm:407: spaces */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2490(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* spaces in pp in generic-write in k766 in k763 in k760 */
static void C_fcall f_2490(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2490,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
if(C_truep(C_i_greaterp(t2,C_fix(7)))){
t4=C_a_i_minus(&a,2,t2,C_fix(8));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2514,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:400: out */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1932(t6,t5,lf[90],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2521,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:401: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(5,*((C_word*)lf[16]+1),t4,lf[91],C_fix(0),t2);}}
else{
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2519 in spaces in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:401: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2512 in spaces in pp in generic-write in k766 in k763 in k760 */
static void C_ccall f_2514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:400: spaces */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2490(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* wr in generic-write in k766 in k763 in k760 */
static void C_fcall f_1951(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1951,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1954,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li31),tmp=(C_word)a,a+=8,tmp);
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1981,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_pairp(t2))){
/* extras.scm:324: wr-expr */
t9=t4;
f_1954(t9,t1,t2,t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:325: wr-lst */
t9=((C_word*)t6)[1];
f_1981(t9,t1,t2,t3);}
else{
if(C_truep(C_eofp(t2))){
/* extras.scm:326: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_1932(t9,t1,lf[57],t3);}
else{
if(C_truep(C_i_vectorp(t2))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2107,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:327: vector->list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t9,t2);}
else{
if(C_truep(C_booleanp(t2))){
if(C_truep(t2)){
/* extras.scm:328: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_1932(t9,t1,lf[60],t3);}
else{
/* extras.scm:328: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_1932(t9,t1,lf[61],t3);}}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2130,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:329: ##sys#number? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[89]+1)))(3,*((C_word*)lf[89]+1),t9,t2);}}}}}}

/* k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2130(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2130,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2137,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:329: ##sys#number->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(3,*((C_word*)lf[62]+1),t2,((C_word*)t0)[3]);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2146,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:331: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(2,*((C_word*)lf[34]+1),t2);}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2169,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:334: ##sys#procedure->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(3,*((C_word*)lf[64]+1),t2,((C_word*)t0)[3]);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
if(C_truep(((C_word*)t0)[2])){
/* extras.scm:336: out */
t2=((C_word*)((C_word*)t0)[6])[1];
f_1932(t2,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2188,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:337: out */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1932(t3,t2,lf[68],((C_word*)t0)[4]);}}
else{
if(C_truep(C_charp(((C_word*)t0)[3]))){
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2309,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:361: make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(4,*((C_word*)lf[20]+1),t2,C_fix(1),((C_word*)t0)[3]);}
else{
t2=C_fix(C_character_code(((C_word*)t0)[3]));
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2315,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:363: out */
t4=((C_word*)((C_word*)t0)[6])[1];
f_1932(t4,t3,lf[73],((C_word*)t0)[4]);}}
else{
if(C_truep(C_undefinedp(((C_word*)t0)[3]))){
/* extras.scm:374: out */
t2=((C_word*)((C_word*)t0)[6])[1];
f_1932(t2,((C_word*)t0)[5],lf[74],((C_word*)t0)[4]);}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2395,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:375: ##sys#pointer->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[75]+1)))(3,*((C_word*)lf[75]+1),t2,((C_word*)t0)[3]);}
else{
t2=C_slot(lf[76],C_fix(0));
t3=C_eqp(((C_word*)t0)[3],t2);
if(C_truep(t3)){
/* extras.scm:377: out */
t4=((C_word*)((C_word*)t0)[6])[1];
f_1932(t4,((C_word*)t0)[5],lf[77],((C_word*)t0)[4]);}
else{
if(C_truep(C_structurep(((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2413,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:379: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(2,*((C_word*)lf[34]+1),t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2429,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:382: port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(3,*((C_word*)lf[7]+1),t4,((C_word*)t0)[3]);}}}}}}}}}}

/* k2427 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2429,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2436,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(3));
/* extras.scm:382: string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(5,*((C_word*)lf[79]+1),t2,lf[80],t3,lf[81]);}
else{
if(C_truep(C_bytevectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_permanentp(((C_word*)t0)[2]))){
/* extras.scm:385: out */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1932(t3,t2,lf[83],((C_word*)t0)[3]);}
else{
/* extras.scm:386: out */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1932(t3,t2,lf[84],((C_word*)t0)[3]);}}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:390: out */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1932(t3,t2,lf[87],((C_word*)t0)[3]);}
else{
/* extras.scm:393: out */
t2=((C_word*)((C_word*)t0)[5])[1];
f_1932(t2,((C_word*)t0)[4],lf[88],((C_word*)t0)[3]);}}}}

/* k2466 in k2427 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2468,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2471,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2478,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:391: ##sys#lambda-info->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[86]+1)))(3,*((C_word*)lf[86]+1),t3,((C_word*)t0)[2]);}

/* k2476 in k2466 in k2427 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:391: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2469 in k2466 in k2427 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:392: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],lf[85],((C_word*)t0)[2]);}

/* k2444 in k2427 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2449,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2456,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:387: number->string */
C_number_to_string(3,0,t3,C_block_size(((C_word*)t0)[2]));}

/* k2454 in k2444 in k2427 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:387: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2447 in k2444 in k2427 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:388: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],lf[82],((C_word*)t0)[2]);}

/* k2434 in k2427 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:382: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2411 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2416,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:380: ##sys#user-print-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[78]+1)))(5,*((C_word*)lf[78]+1),t2,((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* k2414 in k2411 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2416,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2423,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:381: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[32]+1)))(3,*((C_word*)lf[32]+1),t2,((C_word*)t0)[2]);}

/* k2421 in k2414 in k2411 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:381: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2393 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:375: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2313 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:364: char-name */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(3,*((C_word*)lf[72]+1),t2,((C_word*)t0)[2]);}

/* k2316 in k2313 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2318,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2322,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp);
/* g448449 */
t3=t2;
f_2322(t3,((C_word*)t0)[4],t1);}
else{
if(C_truep(C_fixnum_lessp(((C_word*)t0)[3],C_fix(32)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2342,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:368: out */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1932(t3,t2,lf[69],((C_word*)t0)[5]);}
else{
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[3],C_fix(255)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2358,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[3],C_fix(65535)))){
/* extras.scm:371: out */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1932(t3,t2,lf[70],((C_word*)t0)[5]);}
else{
/* extras.scm:371: out */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1932(t3,t2,lf[71],((C_word*)t0)[5]);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2379,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:373: make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(4,*((C_word*)lf[20]+1),t2,C_fix(1),((C_word*)t0)[2]);}}}}

/* k2377 in k2316 in k2313 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:373: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2356 in k2316 in k2313 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2358,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2365,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:372: number->string */
C_number_to_string(4,0,t2,((C_word*)t0)[2],C_fix(16));}

/* k2363 in k2356 in k2316 in k2313 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:372: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2340 in k2316 in k2313 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2342,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2349,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:369: number->string */
C_number_to_string(4,0,t2,((C_word*)t0)[2],C_fix(16));}

/* k2347 in k2340 in k2316 in k2313 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:369: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* g448 in k2316 in k2313 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_fcall f_2322(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2322,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
/* extras.scm:366: out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1932(t4,t1,t3,((C_word*)t0)[2]);}

/* k2307 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:361: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2186 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2188,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2190,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2190(t5,((C_word*)t0)[2],C_fix(0),C_fix(0),t1);}

/* loop in k2186 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_fcall f_2190(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2190,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2197,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t3,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=C_i_string_length(((C_word*)t0)[4]);
t7=t5;
f_2197(t7,C_fixnum_lessp(t3,t6));}
else{
t6=t5;
f_2197(t6,C_SCHEME_FALSE);}}

/* k2195 in loop in k2186 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_fcall f_2197(C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2197,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_string_ref(((C_word*)t0)[8],((C_word*)t0)[7]);
t3=C_i_char_equalp(t2,C_make_character(92));
t4=(C_truep(t3)?t3:C_i_char_equalp(t2,C_make_character(34)));
if(C_truep(t4)){
t5=C_a_i_plus(&a,2,((C_word*)t0)[7],C_fix(1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2220,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2224,a[2]=t6,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2228,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:345: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(5,*((C_word*)lf[16]+1),t8,((C_word*)t0)[8],((C_word*)t0)[2],((C_word*)t0)[7]);}
else{
t5=C_i_assq(t2,lf[66]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2235,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li34),tmp=(C_word)a,a+=9,tmp);
/* g437438 */
t7=t6;
f_2235(t7,((C_word*)t0)[5],t5);}
else{
t6=C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* extras.scm:357: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_2190(t7,((C_word*)t0)[5],((C_word*)t0)[2],t6,((C_word*)t0)[3]);}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2282,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2286,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:359: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(5,*((C_word*)lf[16]+1),t3,((C_word*)t0)[8],((C_word*)t0)[2],((C_word*)t0)[7]);}}

/* k2284 in k2195 in loop in k2186 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:359: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2280 in k2195 in loop in k2186 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:358: out */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1932(t2,((C_word*)t0)[2],lf[67],t1);}

/* g437 in k2195 in loop in k2186 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_fcall f_2235(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2235,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2239,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2262,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:353: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(5,*((C_word*)lf[16]+1),t4,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7]);}

/* k2260 in g437 in k2195 in loop in k2186 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:353: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2237 in g437 in k2195 in loop in k2186 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2239,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2254,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=C_i_cdr(((C_word*)t0)[3]);
/* extras.scm:356: out */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1932(t6,t4,t5,t1);}

/* k2252 in k2237 in g437 in k2195 in loop in k2186 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:354: loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_2190(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2226 in k2195 in loop in k2186 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:345: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2222 in k2195 in loop in k2186 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:344: out */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1932(t2,((C_word*)t0)[2],lf[65],t1);}

/* k2218 in k2195 in loop in k2186 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:342: loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_2190(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2167 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:334: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2144 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2146,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2149,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:332: ##sys#print */
t3=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* k2147 in k2144 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2149,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2156,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:333: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[32]+1)))(3,*((C_word*)lf[32]+1),t2,((C_word*)t0)[2]);}

/* k2154 in k2147 in k2144 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:333: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2135 in k2128 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:329: out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2105 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2107,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2111,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:327: out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1932(t3,t2,lf[58],((C_word*)t0)[2]);}

/* k2109 in k2105 in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:327: wr-lst */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1981(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* wr-lst in wr in generic-write in k766 in k763 in k760 */
static void C_fcall f_1981(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1981,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1999,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t6=C_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2064,a[2]=t6,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:316: out */
t8=((C_word*)((C_word*)t0)[2])[1];
f_1932(t8,t7,lf[55],t3);}
else{
t6=t5;
f_1999(2,t6,C_SCHEME_FALSE);}}
else{
/* extras.scm:322: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1932(t4,t1,lf[56],t3);}}

/* k2062 in wr-lst in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:316: wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1951(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1997 in wr-lst in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_1999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1999,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2001,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word)li32),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2001(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k1997 in wr-lst in wr in generic-write in k766 in k763 in k760 */
static void C_fcall f_2001(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2001,NULL,4,t0,t1,t2,t3);}
t4=t3;
if(C_truep(t4)){
if(C_truep(C_i_pairp(t2))){
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2025,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=C_i_car(t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2033,a[2]=t7,a[3]=t6,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:319: out */
t9=((C_word*)((C_word*)t0)[2])[1];
f_1932(t9,t8,lf[51],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:320: out */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1932(t5,t1,lf[52],t3);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2049,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2053,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:321: out */
t7=((C_word*)((C_word*)t0)[2])[1];
f_1932(t7,t6,lf[54],t3);}}}
else{
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k2051 in loop in k1997 in wr-lst in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:321: wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1951(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2047 in loop in k1997 in wr-lst in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:321: out */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1932(t2,((C_word*)t0)[2],lf[53],t1);}

/* k2031 in loop in k1997 in wr-lst in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:319: wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1951(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2023 in loop in k1997 in wr-lst in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_2025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:319: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2001(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* wr-expr in wr in generic-write in k766 in k763 in k760 */
static void C_fcall f_1954(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1954,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1961,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* extras.scm:309: read-macro? */
f_1841(t4,t2);}

/* k1959 in wr-expr in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_1961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1961,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=C_i_cadr(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1972,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t5=f_1899(((C_word*)t0)[8]);
/* extras.scm:310: out */
t6=((C_word*)((C_word*)t0)[4])[1];
f_1932(t6,t4,t5,((C_word*)t0)[3]);}
else{
/* extras.scm:311: wr-lst */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1981(t2,((C_word*)t0)[6],((C_word*)t0)[8],((C_word*)t0)[3]);}}

/* k1970 in k1959 in wr-expr in wr in generic-write in k766 in k763 in k760 */
static void C_ccall f_1972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:310: wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1951(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* out in generic-write in k766 in k763 in k760 */
static void C_fcall f_1932(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1932,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1942,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:304: output */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k1940 in out in generic-write in k766 in k763 in k760 */
static void C_ccall f_1942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1942,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_string_length(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_plus(&a,2,((C_word*)t0)[2],t2));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* read-macro-prefix in generic-write in k766 in k763 in k760 */
static C_word C_fcall f_1899(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_check;
t2=C_i_car(t1);
t3=C_i_cdr(t1);
t4=C_eqp(t2,lf[43]);
if(C_truep(t4)){
return(lf[47]);}
else{
t5=C_eqp(t2,lf[44]);
if(C_truep(t5)){
return(lf[48]);}
else{
t6=C_eqp(t2,lf[45]);
if(C_truep(t6)){
return(lf[49]);}
else{
t7=C_eqp(t2,lf[46]);
return((C_truep(t7)?lf[50]:C_SCHEME_UNDEFINED));}}}}

/* read-macro? in generic-write in k766 in k763 in k760 */
static void C_fcall f_1841(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1841,NULL,2,t1,t2);}
t3=C_i_car(t2);
t4=C_i_cdr(t2);
t5=C_eqp(t3,lf[43]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1873,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=t6;
f_1873(t7,t5);}
else{
t7=C_eqp(t3,lf[44]);
if(C_truep(t7)){
t8=t6;
f_1873(t8,t7);}
else{
t8=C_eqp(t3,lf[45]);
t9=t6;
f_1873(t9,(C_truep(t8)?t8:C_eqp(t3,lf[46])));}}}

/* k1871 in read-macro? in generic-write in k766 in k763 in k760 */
static void C_fcall f_1873(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_nullp(t3));}
else{
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_1800 in k766 in k763 in k760 */
static void C_ccall f_1800(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1800r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1800r(t0,t1,t2,t3);}}

static void C_ccall f_1800r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1804,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_1804(2,t5,*((C_word*)lf[25]+1));}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_1804(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1802 */
static void C_ccall f_1804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1804,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[3],lf[41]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1810,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:267: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),t3,t1,lf[41]);}

/* k1808 in k1802 */
static void C_ccall f_1810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_make_character(C_unfix(((C_word*)t0)[4]));
/* extras.scm:268: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(4,*((C_word*)lf[38]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* f_1760 in k766 in k763 in k760 */
static void C_ccall f_1760(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1760r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1760r(t0,t1,t2);}}

static void C_ccall f_1760r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1764,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_1764(2,t4,*((C_word*)lf[6]+1));}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_1764(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k1762 */
static void C_ccall f_1764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1764,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1767,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:259: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),t2,t1,lf[40]);}

/* k1765 in k1762 */
static void C_ccall f_1767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1770,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:260: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2]);}

/* k1768 in k1765 in k1762 */
static void C_ccall f_1770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_eofp(t1))){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_character_code(t1)));}}

/* f_1671 in k766 in k763 in k760 */
static void C_ccall f_1671(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr3r,(void*)f_1671r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1671r(t0,t1,t2,t3);}}

static void C_ccall f_1671r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(12);
t4=C_i_check_string_2(t2,lf[33]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1676,a[2]=t2,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1707,a[2]=t5,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1712,a[2]=t6,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* def-n305320 */
t8=t7;
f_1712(t8,t1);}
else{
t8=C_i_car(t3);
t9=C_i_cdr(t3);
if(C_truep(C_i_nullp(t9))){
/* def-port306318 */
t10=t6;
f_1707(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_i_cdr(t9);
if(C_truep(C_i_nullp(t11))){
/* body303312 */
t12=t5;
f_1676(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-n305 */
static void C_fcall f_1712(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1712,NULL,2,t0,t1);}
/* def-port306318 */
t2=((C_word*)t0)[2];
f_1707(t2,t1,C_SCHEME_FALSE);}

/* def-port306 */
static void C_fcall f_1707(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1707,NULL,3,t0,t1,t2);}
/* body303312 */
t3=((C_word*)t0)[2];
f_1676(t3,t1,t2,*((C_word*)lf[25]+1));}

/* body303 */
static void C_fcall f_1676(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1676,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1680,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:247: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),t4,t3,lf[33]);}

/* k1678 in body303 */
static void C_ccall f_1680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1680,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[5])?C_i_check_exact_2(((C_word*)t0)[5],lf[33]):C_SCHEME_UNDEFINED);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1690,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1693,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[5])){
t5=C_block_size(((C_word*)t0)[2]);
t6=t4;
f_1693(t6,C_fixnum_lessp(((C_word*)t0)[5],t5));}
else{
t5=t4;
f_1693(t5,C_SCHEME_FALSE);}}

/* k1691 in k1678 in body303 */
static void C_fcall f_1693(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* extras.scm:251: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(5,*((C_word*)lf[16]+1),((C_word*)t0)[6],((C_word*)t0)[5],C_fix(0),((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[5];
/* extras.scm:249: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}}

/* k1688 in k1678 in body303 */
static void C_ccall f_1690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:249: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* f_1602 in k766 in k763 in k760 */
static void C_ccall f_1602(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1602r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1602r(t0,t1,t2,t3);}}

static void C_ccall f_1602r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1606,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_1606(2,t5,*((C_word*)lf[6]+1));}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_1606(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1604 */
static void C_ccall f_1606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1606,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:233: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),t2,t1,lf[37]);}

/* k1607 in k1604 */
static void C_ccall f_1609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1609,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:234: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(2,*((C_word*)lf[34]+1),t2);}

/* k1610 in k1607 in k1604 */
static void C_ccall f_1612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1612,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1617,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t3,a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1617(t5,((C_word*)t0)[2]);}

/* loop in k1610 in k1607 in k1604 */
static void C_fcall f_1617(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1617,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:236: ##sys#peek-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[39]+1)))(3,*((C_word*)lf[39]+1),t2,((C_word*)t0)[3]);}

/* k1619 in loop in k1610 in k1607 in k1604 */
static void C_ccall f_1621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1621,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1627,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_eofp(t1))){
t3=t2;
f_1627(2,t3,C_SCHEME_FALSE);}
else{
/* extras.scm:237: pred */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}}

/* k1625 in k1619 in loop in k1610 in k1607 in k1604 */
static void C_ccall f_1627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1627,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1630,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1637,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:239: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t3,((C_word*)t0)[2]);}
else{
/* extras.scm:241: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[32]+1)))(3,*((C_word*)lf[32]+1),((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* k1635 in k1625 in k1619 in loop in k1610 in k1607 in k1604 */
static void C_ccall f_1637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:239: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(4,*((C_word*)lf[38]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1628 in k1625 in k1619 in loop in k1610 in k1607 in k1604 */
static void C_ccall f_1630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:240: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1617(t2,((C_word*)t0)[2]);}

/* f_1561 in k766 in k763 in k760 */
static void C_ccall f_1561(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1561r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1561r(t0,t1,t2);}}

static void C_ccall f_1561r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1565,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_1565(2,t4,*((C_word*)lf[6]+1));}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_1565(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k1563 */
static void C_ccall f_1565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1568,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:221: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),t2,t1,lf[35]);}

/* k1566 in k1563 */
static void C_ccall f_1568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[3],C_fix(2));
t3=C_slot(t2,C_fix(9));
if(C_truep(t3)){
/* extras.scm:224: rb */
t4=t3;
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[36]);}}

/* f_1510 in k766 in k763 in k760 */
static void C_ccall f_1510(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_1510r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1510r(t0,t1,t2);}}

static void C_ccall f_1510r(C_word t0,C_word t1,C_word t2){
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
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?*((C_word*)lf[6]+1):C_i_car(t6));
t9=C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t6));
if(C_truep(C_i_nullp(t10))){
/* extras.scm:211: ##sys#read-string/port */
t11=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,t4,t8);}
else{
/* ##sys#error */
t11=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}

/* f_1453 in k766 in k763 in k760 */
static void C_ccall f_1453(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1453,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1457,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:191: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),t4,t3,lf[31]);}

/* k1455 */
static void C_ccall f_1457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1457,2,t0,t1);}
if(C_truep(((C_word*)t0)[4])){
t2=C_i_check_exact_2(((C_word*)t0)[4],lf[31]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:193: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[21]+1)))(3,*((C_word*)lf[21]+1),t3,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1481,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:199: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(2,*((C_word*)lf[34]+1),t2);}}

/* k1479 in k1455 */
static void C_ccall f_1481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1481,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1484,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:200: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(3,*((C_word*)lf[20]+1),t2,C_fix(2048));}

/* k1482 in k1479 in k1455 */
static void C_ccall f_1484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1484,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1489,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word)li16),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1489(t5,((C_word*)t0)[2]);}

/* loop in k1482 in k1479 in k1455 */
static void C_fcall f_1489(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1489,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1493,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:202: ##sys#read-string! */
t3=*((C_word*)lf[28]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(2048),((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* k1491 in loop in k1482 in k1479 in k1455 */
static void C_ccall f_1493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1493,2,t0,t1);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
/* extras.scm:205: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[32]+1)))(3,*((C_word*)lf[32]+1),((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1505,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:207: write-string */
t4=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],t1,((C_word*)t0)[4]);}}

/* k1503 in k1491 in loop in k1482 in k1479 in k1455 */
static void C_ccall f_1505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:208: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1489(t2,((C_word*)t0)[2]);}

/* k1464 in k1455 */
static void C_ccall f_1466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1466,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1469,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:194: ##sys#read-string! */
t3=*((C_word*)lf[28]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[4],t1,((C_word*)t0)[2],C_fix(0));}

/* k1467 in k1464 in k1455 */
static void C_ccall f_1469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(((C_word*)t0)[4],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}
else{
/* extras.scm:197: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(5,*((C_word*)lf[16]+1),((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t1);}}

/* f_1365 in k766 in k763 in k760 */
static void C_ccall f_1365(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4r,(void*)f_1365r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1365r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1365r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(9);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=C_i_nullp(t4);
t7=(C_truep(t6)?*((C_word*)lf[6]+1):C_i_car(t4));
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(0):C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
if(C_truep(C_i_nullp(t13))){
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1387,a[2]=t7,a[3]=t1,a[4]=t11,a[5]=t5,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:178: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),t14,t7,lf[29]);}
else{
/* ##sys#error */
t14=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}

/* k1385 */
static void C_ccall f_1387(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=C_i_check_string_2(((C_word*)t0)[6],lf[29]);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t3=C_i_check_exact_2(((C_word*)((C_word*)t0)[5])[1],lf[29]);
t4=C_fixnum_plus(((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1]);
t5=C_block_size(((C_word*)t0)[6]);
if(C_truep(C_fixnum_greaterp(t4,t5))){
t6=C_block_size(((C_word*)t0)[6]);
t7=C_fixnum_difference(t6,((C_word*)t0)[4]);
t8=C_mutate(((C_word *)((C_word*)t0)[5])+1,t7);
t9=C_i_check_exact_2(((C_word*)t0)[4],lf[29]);
/* extras.scm:185: ##sys#read-string! */
t10=*((C_word*)lf[28]+1);
((C_proc6)(void*)(*((C_word*)t10+1)))(6,t10,((C_word*)t0)[3],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t6=C_i_check_exact_2(((C_word*)t0)[4],lf[29]);
/* extras.scm:185: ##sys#read-string! */
t7=*((C_word*)lf[28]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,((C_word*)t0)[3],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[4]);}}
else{
t3=C_i_check_exact_2(((C_word*)t0)[4],lf[29]);
/* extras.scm:185: ##sys#read-string! */
t4=*((C_word*)lf[28]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* f_1219 in k766 in k763 in k760 */
static void C_ccall f_1219(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[14],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1219,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_eqp(t2,C_fix(0));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_fix(0));}
else{
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1229,a[2]=t2,a[3]=t6,a[4]=t1,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(t4,C_fix(6)))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1359,a[2]=t8,a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:153: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t9,t4);}
else{
t9=t8;
f_1229(t9,C_SCHEME_UNDEFINED);}}}

/* k1357 */
static void C_ccall f_1359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_setsubchar(((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],t1);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
f_1229(t5,t4);}

/* k1227 */
static void C_fcall f_1229(C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1229,NULL,2,t0,t1);}
t2=C_slot(((C_word*)t0)[6],C_fix(2));
t3=C_slot(t2,C_fix(7));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1240,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=((C_word)li12),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1240(t7,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2],C_fix(0));}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1299,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=((C_word)li13),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1299(t7,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2],C_fix(0));}}

/* loop in k1227 */
static void C_fcall f_1299(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1299,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1303,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,a[6]=t1,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* extras.scm:166: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t5,((C_word*)t0)[2]);}

/* k1301 in loop in k1227 */
static void C_ccall f_1303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1306,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_eofp(t1))){
t3=t2;
f_1306(t3,C_fix(0));}
else{
t3=C_setsubchar(((C_word*)t0)[2],((C_word*)t0)[4],t1);
t4=t2;
f_1306(t4,C_fix(1));}}

/* k1304 in k1301 in loop in k1227 */
static void C_fcall f_1306(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[6];
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_not(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:C_fixnum_lessp(t1,((C_word*)t0)[4]));
if(C_truep(t4)){
t5=C_fixnum_plus(((C_word*)t0)[3],t1);
t6=(C_truep(((C_word*)t0)[4])?C_fixnum_difference(((C_word*)t0)[4],t1):C_SCHEME_FALSE);
t7=C_fixnum_plus(((C_word*)t0)[6],t1);
/* extras.scm:174: loop */
t8=((C_word*)((C_word*)t0)[2])[1];
f_1299(t8,((C_word*)t0)[5],t5,t6,t7);}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_plus(t1,((C_word*)t0)[6]));}}}

/* loop in k1227 */
static void C_fcall f_1240(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1240,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1244,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:158: rdstring */
t6=((C_word*)t0)[3];
((C_proc6)C_fast_retrieve_proc(t6))(6,t6,t5,((C_word*)t0)[5],t3,((C_word*)t0)[2],t2);}

/* k1242 in loop in k1227 */
static void C_ccall f_1244(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=C_slot(((C_word*)t0)[7],C_fix(5));
t3=C_fixnum_plus(t2,t1);
t4=C_i_set_i_slot(((C_word*)t0)[7],C_fix(5),t3);
t5=C_eqp(t1,C_fix(0));
if(C_truep(t5)){
t6=((C_word*)t0)[6];
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_i_not(((C_word*)t0)[4]);
t7=(C_truep(t6)?t6:C_fixnum_lessp(t1,((C_word*)t0)[4]));
if(C_truep(t7)){
t8=C_fixnum_plus(((C_word*)t0)[3],t1);
t9=(C_truep(((C_word*)t0)[4])?C_fixnum_difference(((C_word*)t0)[4],t1):C_SCHEME_FALSE);
t10=C_fixnum_plus(((C_word*)t0)[6],t1);
/* extras.scm:163: loop */
t11=((C_word*)((C_word*)t0)[2])[1];
f_1240(t11,((C_word*)t0)[5],t8,t9,t10);}
else{
t8=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_fixnum_plus(t1,((C_word*)t0)[6]));}}}

/* f_1198 in k766 in k763 in k760 */
static void C_ccall f_1198(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1198r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1198r(t0,t1,t2,t3);}}

static void C_ccall f_1198r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(C_truep(C_eqp(t3,C_SCHEME_END_OF_LIST))?*((C_word*)lf[25]+1):C_slot(t3,C_fix(0)));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1205,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:141: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),t5,t4,lf[24]);}

/* k1203 */
static void C_ccall f_1205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1205,2,t0,t1);}
t2=C_i_check_string_2(((C_word*)t0)[4],lf[24]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1211,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:143: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),t3,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* k1209 in k1203 */
static void C_ccall f_1211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:144: newline */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(3,*((C_word*)lf[26]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_1108 in k766 in k763 in k760 */
static void C_ccall f_1108(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_1108r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1108r(t0,t1,t2);}}

static void C_ccall f_1108r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(9);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_slot(t2,C_fix(0)):*((C_word*)lf[6]+1));
t5=C_i_pairp(t2);
t6=(C_truep(t5)?C_slot(t2,C_fix(1)):C_SCHEME_FALSE);
t7=C_i_pairp(t6);
t8=(C_truep(t7)?C_slot(t6,C_fix(0)):C_SCHEME_FALSE);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1120,a[2]=t8,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(t4))){
/* extras.scm:131: call-with-input-file */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t1,t4,t9);}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1175,a[2]=t4,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:133: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),t10,t4,lf[23]);}}

/* k1173 */
static void C_ccall f_1175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:134: doread */
t2=((C_word*)t0)[4];
f_1120(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* doread */
static void C_ccall f_1120(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1120,3,t0,t1,t2);}
t3=(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:C_fix(1000000000));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1130,a[2]=t2,a[3]=t5,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1130(t7,t1,C_SCHEME_END_OF_LIST,t3);}

/* loop in doread */
static void C_fcall f_1130(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1130,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
/* extras.scm:125: reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(3,*((C_word*)lf[3]+1),t1,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1143,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:126: read-line */
t6=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}}

/* k1141 in loop in doread */
static void C_ccall f_1143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1143,2,t0,t1);}
if(C_truep(C_eofp(t1))){
/* extras.scm:128: reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(3,*((C_word*)lf[3]+1),((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* extras.scm:129: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1130(t4,((C_word*)t0)[5],t2,t3);}}

/* f_959 in k766 in k763 in k760 */
static void C_ccall f_959(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_959r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_959r(t0,t1,t2);}}

static void C_ccall f_959r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_i_car(t2):*((C_word*)lf[6]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_969,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t6=C_i_cdr(t2);
t7=C_i_pairp(t6);
t8=t5;
f_969(t8,(C_truep(t7)?C_i_cadr(t2):C_SCHEME_FALSE));}
else{
t6=t5;
f_969(t6,C_SCHEME_FALSE);}}

/* k967 */
static void C_fcall f_969(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_969,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_972,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:87: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(4,*((C_word*)lf[22]+1),t2,((C_word*)t0)[3],lf[15]);}

/* k970 in k967 */
static void C_ccall f_972(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_972,2,t0,t1);}
t2=C_slot(((C_word*)t0)[4],C_fix(2));
t3=C_slot(t2,C_fix(8));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_979,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp);
/* g120121 */
t5=t4;
f_979(t5,((C_word*)t0)[2],t3);}
else{
t4=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:C_fix(256));
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_992,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:91: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[21]+1)))(3,*((C_word*)lf[21]+1),t7,((C_word*)t6)[1]);}}

/* k990 in k970 in k967 */
static void C_ccall f_992(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_992,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_997,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word)li6),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_997(t7,((C_word*)t0)[2],C_fix(0));}

/* loop in k990 in k970 in k967 */
static void C_fcall f_997(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_997,NULL,3,t0,t1,t2);}
t3=(C_truep(((C_word*)t0)[6])?C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]):C_SCHEME_FALSE);
if(C_truep(t3)){
/* extras.scm:94: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(5,*((C_word*)lf[16]+1),t1,((C_word*)((C_word*)t0)[5])[1],C_fix(0),t2);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1010,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* extras.scm:95: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t4,((C_word*)t0)[4]);}}

/* k1008 in loop in k990 in k970 in k967 */
static void C_ccall f_1010(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1010,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=C_eqp(((C_word*)t0)[7],C_fix(0));
if(C_truep(t2)){
t3=t1;
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* extras.scm:99: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(5,*((C_word*)lf[16]+1),((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],C_fix(0),((C_word*)t0)[7]);}}
else{
switch(t1){
case C_make_character(10):
/* extras.scm:101: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(5,*((C_word*)lf[16]+1),((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],C_fix(0),((C_word*)t0)[7]);
case C_make_character(13):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1043,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:103: peek-char */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(3,*((C_word*)lf[18]+1),t2,((C_word*)t0)[4]);
default:
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1061,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[7],((C_word*)((C_word*)t0)[2])[1]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1075,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1083,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:111: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(3,*((C_word*)lf[20]+1),t4,((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=t2;
f_1061(t3,C_SCHEME_UNDEFINED);}}}}

/* k1081 in k1008 in loop in k990 in k970 in k967 */
static void C_ccall f_1083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:111: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(4,*((C_word*)lf[19]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k1073 in k1008 in loop in k990 in k970 in k967 */
static void C_ccall f_1075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
f_1061(t5,t4);}

/* k1059 in k1008 in loop in k990 in k970 in k967 */
static void C_fcall f_1061(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_setsubchar(((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[5],((C_word*)t0)[4]);
t3=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* extras.scm:114: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_997(t4,((C_word*)t0)[2],t3);}

/* k1041 in k1008 in loop in k990 in k970 in k967 */
static void C_ccall f_1043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1043,2,t0,t1);}
if(C_truep(C_i_char_equalp(t1,C_make_character(10)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1052,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:105: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2]);}
else{
/* extras.scm:107: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(5,*((C_word*)lf[16]+1),((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1],C_fix(0),((C_word*)t0)[3]);}}

/* k1050 in k1041 in k1008 in loop in k990 in k970 in k967 */
static void C_ccall f_1052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:106: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(5,*((C_word*)lf[16]+1),((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],C_fix(0),((C_word*)t0)[2]);}

/* g120 in k970 in k967 */
static void C_fcall f_979(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_979,NULL,3,t0,t1,t2);}
/* extras.scm:88: rl */
t3=t2;
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_920 in k766 in k763 in k760 */
static void C_ccall f_920(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_920,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[14]);
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fix(0));}
else{
t5=C_random_fixnum(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* f_894 in k766 in k763 in k760 */
static void C_ccall f_894(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_894r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_894r(t0,t1,t2);}}

static void C_ccall f_894r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_898,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_911,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_915,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:61: current-seconds */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t5);}
else{
t4=C_i_car(t2);
t5=C_i_check_exact_2(t4,lf[9]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_randomize(t4));}}

/* k913 */
static void C_ccall f_915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:61: fp/ */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(4,*((C_word*)lf[11]+1),((C_word*)t0)[2],t1,lf[12]);}

/* k909 */
static void C_ccall f_911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm:61: ##sys#flo2fix */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1);}

/* k896 */
static void C_ccall f_898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_exact_2(t1,lf[9]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_randomize(t1));}

/* f_770 in k766 in k763 in k760 */
static void C_ccall f_770(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_770r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_770r(t0,t1,t2);}}

static void C_ccall f_770r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(12);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[6]+1):C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?((C_word*)t0)[4]:C_i_car(t6));
t9=C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t6));
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_SCHEME_FALSE:C_i_car(t10));
t13=C_i_nullp(t10);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t10));
if(C_truep(C_i_nullp(t14))){
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_797,a[2]=t8,a[3]=((C_word*)t0)[3],a[4]=t12,a[5]=((C_word)li1),tmp=(C_word)a,a+=6,tmp);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_847,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,a[5]=t15,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:52: port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(3,*((C_word*)lf[7]+1),t16,t4);}
else{
/* ##sys#error */
t15=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}

/* k845 */
static void C_ccall f_847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* extras.scm:53: slurp */
t2=((C_word*)t0)[5];
f_797(3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
/* extras.scm:54: call-with-input-file */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* slurp */
static void C_ccall f_797(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_797,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_805,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:48: reader */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,t2);}

/* k803 in slurp */
static void C_ccall f_805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_805,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_807,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li0),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_807(t5,((C_word*)t0)[2],t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* doloop85 in k803 in slurp */
static void C_fcall f_807(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_807,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eofp(t2);
t6=(C_truep(t5)?t5:(C_truep(((C_word*)t0)[6])?C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[6]):C_SCHEME_FALSE));
if(C_truep(t6)){
/* extras.scm:51: reverse */
t7=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t1,t4);}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_827,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:48: reader */
t8=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t7,((C_word*)t0)[2]);}}

/* k825 in doloop85 in k803 in slurp */
static void C_ccall f_827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_827,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_807(t4,((C_word*)t0)[2],t1,t2,t3);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[236] = {
{"toplevel:extras_2escm",(void*)C_extras_toplevel},
{"f_762:extras_2escm",(void*)f_762},
{"f_765:extras_2escm",(void*)f_765},
{"f_768:extras_2escm",(void*)f_768},
{"f_3145:extras_2escm",(void*)f_3145},
{"f_3535:extras_2escm",(void*)f_3535},
{"f_3492:extras_2escm",(void*)f_3492},
{"f_3525:extras_2escm",(void*)f_3525},
{"f_3500:extras_2escm",(void*)f_3500},
{"f_3486:extras_2escm",(void*)f_3486},
{"f_3480:extras_2escm",(void*)f_3480},
{"f_3474:extras_2escm",(void*)f_3474},
{"f_3176:extras_2escm",(void*)f_3176},
{"f_3180:extras_2escm",(void*)f_3180},
{"f_3463:extras_2escm",(void*)f_3463},
{"f_3183:extras_2escm",(void*)f_3183},
{"f_3214:extras_2escm",(void*)f_3214},
{"f_3249:extras_2escm",(void*)f_3249},
{"f_3427:extras_2escm",(void*)f_3427},
{"f_3382:extras_2escm",(void*)f_3382},
{"f_3385:extras_2escm",(void*)f_3385},
{"f_3391:extras_2escm",(void*)f_3391},
{"f_3364:extras_2escm",(void*)f_3364},
{"f_3360:extras_2escm",(void*)f_3360},
{"f_3347:extras_2escm",(void*)f_3347},
{"f_3343:extras_2escm",(void*)f_3343},
{"f_3330:extras_2escm",(void*)f_3330},
{"f_3326:extras_2escm",(void*)f_3326},
{"f_3313:extras_2escm",(void*)f_3313},
{"f_3300:extras_2escm",(void*)f_3300},
{"f_3287:extras_2escm",(void*)f_3287},
{"f_3262:extras_2escm",(void*)f_3262},
{"f_3230:extras_2escm",(void*)f_3230},
{"f_3223:extras_2escm",(void*)f_3223},
{"f_3186:extras_2escm",(void*)f_3186},
{"f_3208:extras_2escm",(void*)f_3208},
{"f_3147:extras_2escm",(void*)f_3147},
{"f_3151:extras_2escm",(void*)f_3151},
{"f_3158:extras_2escm",(void*)f_3158},
{"f_3160:extras_2escm",(void*)f_3160},
{"f_3164:extras_2escm",(void*)f_3164},
{"f_3154:extras_2escm",(void*)f_3154},
{"f_1838:extras_2escm",(void*)f_1838},
{"f_3134:extras_2escm",(void*)f_3134},
{"f_3138:extras_2escm",(void*)f_3138},
{"f_2487:extras_2escm",(void*)f_2487},
{"f_3042:extras_2escm",(void*)f_3042},
{"f_3052:extras_2escm",(void*)f_3052},
{"f_3033:extras_2escm",(void*)f_3033},
{"f_3027:extras_2escm",(void*)f_3027},
{"f_3005:extras_2escm",(void*)f_3005},
{"f_2999:extras_2escm",(void*)f_2999},
{"f_2993:extras_2escm",(void*)f_2993},
{"f_2987:extras_2escm",(void*)f_2987},
{"f_2981:extras_2escm",(void*)f_2981},
{"f_2975:extras_2escm",(void*)f_2975},
{"f_2969:extras_2escm",(void*)f_2969},
{"f_2821:extras_2escm",(void*)f_2821},
{"f_2967:extras_2escm",(void*)f_2967},
{"f_2919:extras_2escm",(void*)f_2919},
{"f_2949:extras_2escm",(void*)f_2949},
{"f_2934:extras_2escm",(void*)f_2934},
{"f_2906:extras_2escm",(void*)f_2906},
{"f_2865:extras_2escm",(void*)f_2865},
{"f_2892:extras_2escm",(void*)f_2892},
{"f_2888:extras_2escm",(void*)f_2888},
{"f_2824:extras_2escm",(void*)f_2824},
{"f_2851:extras_2escm",(void*)f_2851},
{"f_2847:extras_2escm",(void*)f_2847},
{"f_2744:extras_2escm",(void*)f_2744},
{"f_2750:extras_2escm",(void*)f_2750},
{"f_2819:extras_2escm",(void*)f_2819},
{"f_2815:extras_2escm",(void*)f_2815},
{"f_2807:extras_2escm",(void*)f_2807},
{"f_2803:extras_2escm",(void*)f_2803},
{"f_2781:extras_2escm",(void*)f_2781},
{"f_2773:extras_2escm",(void*)f_2773},
{"f_2735:extras_2escm",(void*)f_2735},
{"f_2739:extras_2escm",(void*)f_2739},
{"f_2707:extras_2escm",(void*)f_2707},
{"f_2733:extras_2escm",(void*)f_2733},
{"f_2711:extras_2escm",(void*)f_2711},
{"f_2642:extras_2escm",(void*)f_2642},
{"f_2649:extras_2escm",(void*)f_2649},
{"f_2676:extras_2escm",(void*)f_2676},
{"f_2702:extras_2escm",(void*)f_2702},
{"f_2660:extras_2escm",(void*)f_2660},
{"f_2555:extras_2escm",(void*)f_2555},
{"f_2568:extras_2escm",(void*)f_2568},
{"f_2606:extras_2escm",(void*)f_2606},
{"f_2571:extras_2escm",(void*)f_2571},
{"f_2600:extras_2escm",(void*)f_2600},
{"f_2604:extras_2escm",(void*)f_2604},
{"f_2584:extras_2escm",(void*)f_2584},
{"f_2523:extras_2escm",(void*)f_2523},
{"f_2546:extras_2escm",(void*)f_2546},
{"f_2539:extras_2escm",(void*)f_2539},
{"f_2490:extras_2escm",(void*)f_2490},
{"f_2521:extras_2escm",(void*)f_2521},
{"f_2514:extras_2escm",(void*)f_2514},
{"f_1951:extras_2escm",(void*)f_1951},
{"f_2130:extras_2escm",(void*)f_2130},
{"f_2429:extras_2escm",(void*)f_2429},
{"f_2468:extras_2escm",(void*)f_2468},
{"f_2478:extras_2escm",(void*)f_2478},
{"f_2471:extras_2escm",(void*)f_2471},
{"f_2446:extras_2escm",(void*)f_2446},
{"f_2456:extras_2escm",(void*)f_2456},
{"f_2449:extras_2escm",(void*)f_2449},
{"f_2436:extras_2escm",(void*)f_2436},
{"f_2413:extras_2escm",(void*)f_2413},
{"f_2416:extras_2escm",(void*)f_2416},
{"f_2423:extras_2escm",(void*)f_2423},
{"f_2395:extras_2escm",(void*)f_2395},
{"f_2315:extras_2escm",(void*)f_2315},
{"f_2318:extras_2escm",(void*)f_2318},
{"f_2379:extras_2escm",(void*)f_2379},
{"f_2358:extras_2escm",(void*)f_2358},
{"f_2365:extras_2escm",(void*)f_2365},
{"f_2342:extras_2escm",(void*)f_2342},
{"f_2349:extras_2escm",(void*)f_2349},
{"f_2322:extras_2escm",(void*)f_2322},
{"f_2309:extras_2escm",(void*)f_2309},
{"f_2188:extras_2escm",(void*)f_2188},
{"f_2190:extras_2escm",(void*)f_2190},
{"f_2197:extras_2escm",(void*)f_2197},
{"f_2286:extras_2escm",(void*)f_2286},
{"f_2282:extras_2escm",(void*)f_2282},
{"f_2235:extras_2escm",(void*)f_2235},
{"f_2262:extras_2escm",(void*)f_2262},
{"f_2239:extras_2escm",(void*)f_2239},
{"f_2254:extras_2escm",(void*)f_2254},
{"f_2228:extras_2escm",(void*)f_2228},
{"f_2224:extras_2escm",(void*)f_2224},
{"f_2220:extras_2escm",(void*)f_2220},
{"f_2169:extras_2escm",(void*)f_2169},
{"f_2146:extras_2escm",(void*)f_2146},
{"f_2149:extras_2escm",(void*)f_2149},
{"f_2156:extras_2escm",(void*)f_2156},
{"f_2137:extras_2escm",(void*)f_2137},
{"f_2107:extras_2escm",(void*)f_2107},
{"f_2111:extras_2escm",(void*)f_2111},
{"f_1981:extras_2escm",(void*)f_1981},
{"f_2064:extras_2escm",(void*)f_2064},
{"f_1999:extras_2escm",(void*)f_1999},
{"f_2001:extras_2escm",(void*)f_2001},
{"f_2053:extras_2escm",(void*)f_2053},
{"f_2049:extras_2escm",(void*)f_2049},
{"f_2033:extras_2escm",(void*)f_2033},
{"f_2025:extras_2escm",(void*)f_2025},
{"f_1954:extras_2escm",(void*)f_1954},
{"f_1961:extras_2escm",(void*)f_1961},
{"f_1972:extras_2escm",(void*)f_1972},
{"f_1932:extras_2escm",(void*)f_1932},
{"f_1942:extras_2escm",(void*)f_1942},
{"f_1899:extras_2escm",(void*)f_1899},
{"f_1841:extras_2escm",(void*)f_1841},
{"f_1873:extras_2escm",(void*)f_1873},
{"f_1800:extras_2escm",(void*)f_1800},
{"f_1804:extras_2escm",(void*)f_1804},
{"f_1810:extras_2escm",(void*)f_1810},
{"f_1760:extras_2escm",(void*)f_1760},
{"f_1764:extras_2escm",(void*)f_1764},
{"f_1767:extras_2escm",(void*)f_1767},
{"f_1770:extras_2escm",(void*)f_1770},
{"f_1671:extras_2escm",(void*)f_1671},
{"f_1712:extras_2escm",(void*)f_1712},
{"f_1707:extras_2escm",(void*)f_1707},
{"f_1676:extras_2escm",(void*)f_1676},
{"f_1680:extras_2escm",(void*)f_1680},
{"f_1693:extras_2escm",(void*)f_1693},
{"f_1690:extras_2escm",(void*)f_1690},
{"f_1602:extras_2escm",(void*)f_1602},
{"f_1606:extras_2escm",(void*)f_1606},
{"f_1609:extras_2escm",(void*)f_1609},
{"f_1612:extras_2escm",(void*)f_1612},
{"f_1617:extras_2escm",(void*)f_1617},
{"f_1621:extras_2escm",(void*)f_1621},
{"f_1627:extras_2escm",(void*)f_1627},
{"f_1637:extras_2escm",(void*)f_1637},
{"f_1630:extras_2escm",(void*)f_1630},
{"f_1561:extras_2escm",(void*)f_1561},
{"f_1565:extras_2escm",(void*)f_1565},
{"f_1568:extras_2escm",(void*)f_1568},
{"f_1510:extras_2escm",(void*)f_1510},
{"f_1453:extras_2escm",(void*)f_1453},
{"f_1457:extras_2escm",(void*)f_1457},
{"f_1481:extras_2escm",(void*)f_1481},
{"f_1484:extras_2escm",(void*)f_1484},
{"f_1489:extras_2escm",(void*)f_1489},
{"f_1493:extras_2escm",(void*)f_1493},
{"f_1505:extras_2escm",(void*)f_1505},
{"f_1466:extras_2escm",(void*)f_1466},
{"f_1469:extras_2escm",(void*)f_1469},
{"f_1365:extras_2escm",(void*)f_1365},
{"f_1387:extras_2escm",(void*)f_1387},
{"f_1219:extras_2escm",(void*)f_1219},
{"f_1359:extras_2escm",(void*)f_1359},
{"f_1229:extras_2escm",(void*)f_1229},
{"f_1299:extras_2escm",(void*)f_1299},
{"f_1303:extras_2escm",(void*)f_1303},
{"f_1306:extras_2escm",(void*)f_1306},
{"f_1240:extras_2escm",(void*)f_1240},
{"f_1244:extras_2escm",(void*)f_1244},
{"f_1198:extras_2escm",(void*)f_1198},
{"f_1205:extras_2escm",(void*)f_1205},
{"f_1211:extras_2escm",(void*)f_1211},
{"f_1108:extras_2escm",(void*)f_1108},
{"f_1175:extras_2escm",(void*)f_1175},
{"f_1120:extras_2escm",(void*)f_1120},
{"f_1130:extras_2escm",(void*)f_1130},
{"f_1143:extras_2escm",(void*)f_1143},
{"f_959:extras_2escm",(void*)f_959},
{"f_969:extras_2escm",(void*)f_969},
{"f_972:extras_2escm",(void*)f_972},
{"f_992:extras_2escm",(void*)f_992},
{"f_997:extras_2escm",(void*)f_997},
{"f_1010:extras_2escm",(void*)f_1010},
{"f_1083:extras_2escm",(void*)f_1083},
{"f_1075:extras_2escm",(void*)f_1075},
{"f_1061:extras_2escm",(void*)f_1061},
{"f_1043:extras_2escm",(void*)f_1043},
{"f_1052:extras_2escm",(void*)f_1052},
{"f_979:extras_2escm",(void*)f_979},
{"f_920:extras_2escm",(void*)f_920},
{"f_894:extras_2escm",(void*)f_894},
{"f_915:extras_2escm",(void*)f_915},
{"f_911:extras_2escm",(void*)f_911},
{"f_898:extras_2escm",(void*)f_898},
{"f_770:extras_2escm",(void*)f_770},
{"f_847:extras_2escm",(void*)f_847},
{"f_797:extras_2escm",(void*)f_797},
{"f_805:extras_2escm",(void*)f_805},
{"f_807:extras_2escm",(void*)f_807},
{"f_827:extras_2escm",(void*)f_827},
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
