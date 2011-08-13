/* Generated from chicken-syntax.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: chicken-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file chicken-syntax.c
   unit: chicken_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[241];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,50,48,54,56,32,108,50,48,54,51,50,48,57,57,32,108,101,110,50,48,54,52,50,49,48,48,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,50,48,54,56,32,108,50,48,54,51,50,48,56,57,32,108,101,110,50,48,54,52,50,48,57,48,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,52),40,97,50,50,56,52,32,105,110,112,117,116,50,48,54,50,50,48,55,53,32,114,101,110,97,109,101,50,48,55,49,50,48,55,54,32,99,111,109,112,97,114,101,50,48,53,57,50,48,55,55,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,50,48,49,56,32,108,50,48,49,51,50,48,52,51,32,108,101,110,50,48,49,52,50,48,52,52,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,52),40,97,50,52,51,50,32,105,110,112,117,116,50,48,49,50,50,48,50,53,32,114,101,110,97,109,101,50,48,50,49,50,48,50,54,32,99,111,109,112,97,114,101,50,48,48,57,50,48,50,55,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,25),40,97,50,54,52,52,32,120,50,48,48,49,32,114,50,48,48,50,32,99,50,48,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,28),40,97,50,54,54,49,32,102,111,114,109,49,57,57,52,32,114,49,57,57,53,32,99,49,57,57,54,41,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,28),40,97,50,54,57,48,32,102,111,114,109,49,57,56,51,32,114,49,57,56,52,32,99,49,57,56,53,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,47),40,108,111,111,112,32,120,115,49,57,54,50,32,118,97,114,115,49,57,54,51,32,98,115,49,57,54,52,32,118,97,108,115,49,57,54,53,32,114,101,115,116,49,57,54,54,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,28),40,97,50,55,54,51,32,102,111,114,109,49,57,53,53,32,114,49,57,53,54,32,99,49,57,53,55,41,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,40),40,108,111,111,112,32,120,115,49,57,51,51,32,118,97,114,115,49,57,51,52,32,118,97,108,115,49,57,51,53,32,114,101,115,116,49,57,51,54,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,28),40,97,50,57,55,56,32,102,111,114,109,49,57,50,54,32,114,49,57,50,55,32,99,49,57,50,56,41,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,7),40,103,49,56,54,57,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,115,108,111,116,115,49,56,56,57,32,105,49,56,57,48,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,56,54,51,32,103,49,56,55,53,49,56,56,50,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,56,51,52,32,103,49,56,52,54,49,56,53,50,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,28),40,97,51,49,55,52,32,102,111,114,109,49,56,49,57,32,114,49,56,50,48,32,99,49,56,50,49,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,7),40,103,49,55,54,48,41,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,53,52,32,103,49,55,54,54,49,55,55,54,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,20),40,112,97,114,115,101,45,99,108,97,117,115,101,32,99,49,55,51,53,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,57,48,32,103,49,56,48,50,49,56,48,56,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,28),40,97,51,53,53,57,32,102,111,114,109,49,55,50,51,32,114,49,55,50,52,32,99,49,55,50,53,41,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,28),40,97,51,56,54,57,32,102,111,114,109,49,55,49,49,32,114,49,55,49,50,32,99,49,55,49,51,41,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,28),40,97,51,57,56,56,32,102,111,114,109,49,54,57,49,32,114,49,54,57,50,32,99,49,54,57,51,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,53,55,53,41,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,15),40,103,101,110,118,97,114,115,32,110,49,53,55,51,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,7),40,97,52,49,55,56,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,34),40,109,97,112,45,108,111,111,112,49,54,53,56,32,103,49,54,55,48,49,54,55,56,32,103,49,54,55,49,49,54,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,27),40,98,117,105,108,100,32,118,97,114,115,50,49,54,51,55,32,118,114,101,115,116,49,54,51,56,41,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,27),40,97,52,49,56,56,32,118,97,114,115,49,49,54,51,51,32,118,97,114,115,50,49,54,51,52,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,34),40,97,52,49,53,56,32,118,97,114,115,49,54,50,48,32,97,114,103,99,49,54,50,49,32,114,101,115,116,49,54,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,22),40,97,52,49,52,56,32,99,49,54,49,56,32,98,111,100,121,49,54,49,57,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,34),40,97,52,52,49,48,32,118,97,114,115,49,53,57,56,32,97,114,103,99,49,53,57,57,32,114,101,115,116,49,54,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,53,56,48,32,103,49,53,57,50,49,54,48,50,41};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,28),40,97,52,48,54,50,32,102,111,114,109,49,53,54,57,32,114,49,53,55,48,32,99,49,53,55,49,41,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,97,114,103,115,49,53,53,49,32,118,97,114,100,101,102,115,49,53,53,50,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,28),40,97,52,52,57,55,32,102,111,114,109,49,53,51,55,32,114,49,53,51,56,32,99,49,53,51,57,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,28),40,97,52,54,56,49,32,102,111,114,109,49,53,50,48,32,114,49,53,50,49,32,99,49,53,50,50,41,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,48),40,114,101,99,117,114,32,118,97,114,115,49,51,56,49,32,100,101,102,97,117,108,116,101,114,115,49,51,56,50,32,110,111,110,45,100,101,102,97,117,108,116,115,49,51,56,51,41};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,61),40,109,97,107,101,45,105,102,45,116,114,101,101,32,118,97,114,115,49,51,55,53,32,100,101,102,97,117,108,116,101,114,115,49,51,55,54,32,98,111,100,121,45,112,114,111,99,49,51,55,55,32,114,101,115,116,49,51,55,56,41,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,31),40,112,114,101,102,105,120,45,115,121,109,32,112,114,101,102,105,120,49,52,50,48,32,115,121,109,49,52,50,49,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,13),40,103,49,52,51,49,32,118,49,52,52,50,41,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,15),40,103,49,52,56,56,32,118,97,114,49,52,57,57,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,58),40,114,101,99,117,114,32,118,97,114,115,49,51,54,54,32,100,101,102,97,117,108,116,101,114,45,110,97,109,101,115,49,51,54,55,32,100,101,102,115,49,51,54,56,32,110,101,120,116,45,103,117,121,49,51,54,57,41,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,52,56,50,32,103,49,52,57,52,49,53,48,49,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,52,53,51,32,103,49,52,54,53,49,52,55,49,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,52,50,53,32,103,49,52,51,55,49,52,52,52,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,51,57,53,32,103,49,52,48,55,49,52,49,51,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,28),40,97,52,56,49,57,32,102,111,114,109,49,51,53,50,32,114,49,51,53,51,32,99,49,51,53,52,41,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,103,49,51,50,52,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,51,49,56,32,103,49,51,51,48,49,51,52,48,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,30),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,49,50,57,55,32,101,108,115,101,63,49,50,57,56,41,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,28),40,97,53,51,48,51,32,102,111,114,109,49,50,56,53,32,114,49,50,56,54,32,99,49,50,56,55,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,13),40,102,111,108,100,32,98,115,49,50,54,52,41,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,28),40,97,53,52,55,54,32,102,111,114,109,49,50,53,56,32,114,49,50,53,57,32,99,49,50,54,48,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,28),40,113,117,111,116,105,102,121,45,112,114,111,99,32,120,115,49,50,52,48,32,105,100,49,50,52,49,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,28),40,97,53,53,55,55,32,102,111,114,109,49,50,51,54,32,114,49,50,51,55,32,99,49,50,51,56,41,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,28),40,97,53,54,56,57,32,102,111,114,109,49,50,50,56,32,114,49,50,50,57,32,99,49,50,51,48,41,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,13),40,103,49,48,56,55,32,118,49,48,57,56,41,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,8),40,108,111,111,107,117,112,41};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,7),40,103,49,49,57,53,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,56,57,32,103,49,50,48,49,49,50,49,49,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,54,51,32,103,49,49,55,53,49,49,56,49,41};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,14),40,103,49,49,52,54,32,118,98,49,49,53,55,41,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,52,48,32,103,49,49,53,50,49,50,49,56,41};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,49,51,32,103,49,49,50,53,49,49,51,50,41};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,56,49,32,103,49,48,57,51,49,49,48,48,41};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,53,51,32,103,49,48,54,53,49,48,55,50,41};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,28),40,97,53,55,51,55,32,102,111,114,109,49,48,52,53,32,114,49,48,52,54,32,99,49,48,52,55,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,20),40,102,111,108,100,32,118,98,105,110,100,105,110,103,115,49,48,51,54,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,28),40,97,54,48,56,54,32,102,111,114,109,49,48,50,57,32,114,49,48,51,48,32,99,49,48,51,49,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,20),40,97,112,112,101,110,100,42,32,105,108,56,55,48,32,108,56,55,49,41,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,19),40,109,97,112,42,32,112,114,111,99,56,55,50,32,108,56,55,51,41,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,11),40,103,57,50,51,32,118,57,51,52,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,13),40,108,111,111,107,117,112,32,118,57,52,51,41,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,11),40,103,57,55,50,32,118,57,56,51,41,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,54,54,32,103,57,55,56,57,56,53,41,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,35),40,102,111,108,100,32,108,108,105,115,116,115,57,53,53,32,101,120,112,115,57,53,54,32,108,108,105,115,116,115,50,57,53,55,41,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,48,49,32,103,49,48,49,51,49,48,50,48,41};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,108,105,115,116,115,57,52,54,32,97,99,99,57,52,55,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,49,55,32,103,57,50,57,57,51,54,41,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,108,105,115,116,115,57,48,54,32,97,99,99,57,48,55,41,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,56,48,32,103,56,57,50,56,57,56,41,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,25),40,97,54,49,52,51,32,102,111,114,109,56,54,51,32,114,56,54,52,32,99,56,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,56,51,54,32,103,56,52,50,56,53,52,41,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,25),40,97,54,54,51,52,32,102,111,114,109,56,51,49,32,114,56,51,50,32,99,56,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,55,57,54,32,103,56,48,56,56,50,49,32,103,56,48,57,56,50,50,41,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,54,55,32,103,55,55,57,55,56,53,41,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,25),40,97,54,54,57,54,32,102,111,114,109,55,53,48,32,114,55,53,49,32,99,55,53,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,25),40,97,54,56,55,48,32,102,111,114,109,55,52,51,32,114,55,52,52,32,99,55,52,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,25),40,97,54,56,57,57,32,102,111,114,109,55,51,54,32,114,55,51,55,32,99,55,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,6),40,103,53,56,55,41,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,6),40,103,54,49,53,41,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,55,48,49,32,103,55,49,51,55,50,54,32,103,55,49,52,55,50,55,41,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,54,55,48,32,103,54,56,50,54,57,48,32,103,54,56,51,54,57,49,41,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,54,51,57,32,103,54,53,49,54,53,57,32,103,54,53,50,54,54,48,41,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,54,48,57,32,103,54,50,49,54,50,56,41,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,56,49,32,103,53,57,51,54,48,48,41,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,53,52,32,103,53,54,54,53,55,50,41,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,50,55,32,103,53,51,57,53,52,53,41,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,25),40,97,54,57,50,52,32,102,111,114,109,53,49,56,32,114,53,49,57,32,99,53,50,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,115,52,57,57,41,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,25),40,97,55,51,54,54,32,102,111,114,109,52,56,52,32,114,52,56,53,32,99,52,56,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,6),40,103,49,57,56,41,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,6),40,103,50,50,54,41,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,52,52,57,32,103,52,54,49,52,55,52,32,103,52,54,50,52,55,53,41,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,52,49,51,32,103,52,50,53,52,51,56,32,103,52,50,54,52,51,57,41,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,51,55,55,32,103,51,56,57,52,48,50,32,103,51,57,48,52,48,51,41,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,51,52,49,32,103,51,53,51,51,54,54,32,103,51,53,52,51,54,55,41,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,51,48,55,32,103,51,49,57,51,51,48,32,103,51,50,48,51,51,49,41,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,110,51,50,55,41,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,50,53,48,32,103,50,54,50,50,57,54,32,103,50,54,51,50,57,55,41,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,55,49,32,103,50,56,51,50,56,57,41,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,50,48,32,103,50,51,50,50,51,57,41,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,49,57,50,32,103,50,48,52,50,49,49,41,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,49,54,53,32,103,49,55,55,49,56,51,41,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,25),40,97,55,52,55,50,32,102,111,114,109,49,53,55,32,114,49,53,56,32,99,49,53,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,25),40,97,56,49,51,56,32,102,111,114,109,49,52,51,32,114,49,52,52,32,99,49,52,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,25),40,97,56,50,49,51,32,102,111,114,109,49,50,56,32,114,49,50,57,32,99,49,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,25),40,97,56,50,57,49,32,102,111,114,109,49,50,48,32,114,49,50,49,32,99,49,50,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,25),40,97,56,51,48,56,32,102,111,114,109,49,49,52,32,114,49,49,53,32,99,49,49,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,25),40,97,56,51,50,50,32,102,111,114,109,49,48,55,32,114,49,48,56,32,99,49,48,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,22),40,97,56,51,55,49,32,102,111,114,109,56,54,32,114,56,55,32,99,56,56,41,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,12),40,103,51,49,32,115,108,111,116,52,50,41,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,22),40,109,97,112,115,108,111,116,115,32,115,108,111,116,115,54,49,32,105,54,50,41,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,50,53,32,103,51,55,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,19),40,97,56,52,54,56,32,120,49,51,32,114,49,52,32,99,49,53,41,0,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,19),40,97,56,56,51,48,32,102,111,114,109,54,32,114,55,32,99,56,41,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externexport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2157)
static void C_ccall f_2157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2161)
static void C_ccall f_2161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8831)
static void C_ccall f_8831(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8835)
static void C_ccall f_8835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8829)
static void C_ccall f_8829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2164)
static void C_ccall f_2164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8469)
static void C_ccall f_8469(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8473)
static void C_ccall f_8473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8482)
static void C_ccall f_8482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8485)
static void C_ccall f_8485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8488)
static void C_ccall f_8488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8491)
static void C_ccall f_8491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8792)
static void C_fcall f_8792(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8821)
static void C_ccall f_8821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8557)
static void C_ccall f_8557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8790)
static void C_ccall f_8790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8770)
static void C_ccall f_8770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8766)
static void C_ccall f_8766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8746)
static void C_ccall f_8746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8582)
static void C_fcall f_8582(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8598)
static void C_ccall f_8598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8731)
static void C_ccall f_8731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8601)
static void C_ccall f_8601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8727)
static void C_ccall f_8727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8604)
static void C_ccall f_8604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8634)
static void C_fcall f_8634(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8630)
static void C_ccall f_8630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8618)
static void C_ccall f_8618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8580)
static void C_ccall f_8580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8492)
static void C_fcall f_8492(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8520)
static void C_ccall f_8520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8467)
static void C_ccall f_8467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8372)
static void C_ccall f_8372(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8376)
static void C_ccall f_8376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8400)
static void C_ccall f_8400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8415)
static void C_fcall f_8415(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8370)
static void C_ccall f_8370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2170)
static void C_ccall f_2170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8323)
static void C_ccall f_8323(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8327)
static void C_ccall f_8327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8321)
static void C_ccall f_8321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2173)
static void C_ccall f_2173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8309)
static void C_ccall f_8309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8307)
static void C_ccall f_8307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2176)
static void C_ccall f_2176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8292)
static void C_ccall f_8292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8296)
static void C_ccall f_8296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8290)
static void C_ccall f_8290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2179)
static void C_ccall f_2179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8214)
static void C_ccall f_8214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8218)
static void C_ccall f_8218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8224)
static void C_ccall f_8224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8233)
static void C_ccall f_8233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8273)
static void C_ccall f_8273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8256)
static void C_fcall f_8256(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8212)
static void C_ccall f_8212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2182)
static void C_ccall f_2182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8139)
static void C_ccall f_8139(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8143)
static void C_ccall f_8143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8155)
static void C_ccall f_8155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8178)
static void C_fcall f_8178(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8137)
static void C_ccall f_8137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2185)
static void C_ccall f_2185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7473)
static void C_ccall f_7473(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7477)
static void C_ccall f_7477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8100)
static void C_fcall f_8100(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8129)
static void C_ccall f_8129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7489)
static void C_ccall f_7489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8065)
static void C_fcall f_8065(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8094)
static void C_ccall f_8094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7504)
static void C_ccall f_7504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8030)
static void C_fcall f_8030(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8059)
static void C_ccall f_8059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7519)
static void C_ccall f_7519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7995)
static void C_fcall f_7995(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8024)
static void C_ccall f_8024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7849)
static void C_ccall f_7849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7946)
static void C_fcall f_7946(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7979)
static void C_ccall f_7979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7959)
static void C_fcall f_7959(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7858)
static void C_ccall f_7858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7926)
static void C_fcall f_7926(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7940)
static void C_ccall f_7940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7862)
static void C_ccall f_7862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7873)
static void C_fcall f_7873(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7906)
static void C_ccall f_7906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7886)
static void C_fcall f_7886(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7871)
static void C_ccall f_7871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7526)
static void C_ccall f_7526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7795)
static void C_fcall f_7795(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7808)
static void C_fcall f_7808(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7717)
static void C_ccall f_7717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7746)
static void C_fcall f_7746(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7759)
static void C_fcall f_7759(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7736)
static void C_ccall f_7736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7721)
static void C_ccall f_7721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7702)
static void C_ccall f_7702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7643)
static void C_fcall f_7643(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7656)
static void C_fcall f_7656(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7565)
static void C_ccall f_7565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7594)
static void C_fcall f_7594(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7607)
static void C_fcall f_7607(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7584)
static void C_ccall f_7584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7569)
static void C_ccall f_7569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7550)
static void C_ccall f_7550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7505)
static void C_fcall f_7505(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7513)
static void C_ccall f_7513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7490)
static void C_fcall f_7490(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7498)
static void C_ccall f_7498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7471)
static void C_ccall f_7471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7367)
static void C_ccall f_7367(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7371)
static void C_ccall f_7371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7380)
static void C_ccall f_7380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7383)
static void C_ccall f_7383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7386)
static void C_ccall f_7386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7418)
static void C_fcall f_7418(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7441)
static void C_ccall f_7441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7448)
static void C_ccall f_7448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7455)
static void C_ccall f_7455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7431)
static void C_ccall f_7431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7389)
static void C_ccall f_7389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7365)
static void C_ccall f_7365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2191)
static void C_ccall f_2191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6925)
static void C_ccall f_6925(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6929)
static void C_ccall f_6929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6938)
static void C_ccall f_6938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7328)
static void C_fcall f_7328(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7357)
static void C_ccall f_7357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6944)
static void C_ccall f_6944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7293)
static void C_fcall f_7293(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7322)
static void C_ccall f_7322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6950)
static void C_ccall f_6950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7258)
static void C_fcall f_7258(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7287)
static void C_ccall f_7287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6965)
static void C_ccall f_6965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7223)
static void C_fcall f_7223(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7252)
static void C_ccall f_7252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6980)
static void C_ccall f_6980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7174)
static void C_fcall f_7174(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7207)
static void C_ccall f_7207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7187)
static void C_fcall f_7187(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7113)
static void C_ccall f_7113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7125)
static void C_fcall f_7125(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7158)
static void C_ccall f_7158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7138)
static void C_fcall f_7138(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7123)
static void C_ccall f_7123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6987)
static void C_ccall f_6987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7056)
static void C_fcall f_7056(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7069)
static void C_fcall f_7069(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7054)
static void C_ccall f_7054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6966)
static void C_fcall f_6966(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6974)
static void C_ccall f_6974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6951)
static void C_fcall f_6951(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6959)
static void C_ccall f_6959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6923)
static void C_ccall f_6923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6900)
static void C_ccall f_6900(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6904)
static void C_ccall f_6904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6898)
static void C_ccall f_6898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2197)
static void C_ccall f_2197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6871)
static void C_ccall f_6871(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6875)
static void C_ccall f_6875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6869)
static void C_ccall f_6869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2200)
static void C_ccall f_2200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6697)
static void C_ccall f_6697(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6701)
static void C_ccall f_6701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6828)
static void C_fcall f_6828(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6857)
static void C_ccall f_6857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6747)
static void C_ccall f_6747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6779)
static void C_fcall f_6779(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6792)
static void C_fcall f_6792(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6777)
static void C_ccall f_6777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6695)
static void C_ccall f_6695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2203)
static void C_ccall f_2203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6635)
static void C_ccall f_6635(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6639)
static void C_ccall f_6639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6670)
static void C_fcall f_6670(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6648)
static void C_ccall f_6648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6680)
static void C_ccall f_6680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6657)
static void C_ccall f_6657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6664)
static void C_ccall f_6664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6633)
static void C_ccall f_6633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2207)
static void C_ccall f_2207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6144)
static void C_ccall f_6144(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6148)
static void C_ccall f_6148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6596)
static void C_fcall f_6596(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6625)
static void C_ccall f_6625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6232)
static void C_ccall f_6232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6556)
static void C_fcall f_6556(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6569)
static void C_ccall f_6569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6235)
static void C_ccall f_6235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6521)
static void C_fcall f_6521(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6550)
static void C_ccall f_6550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6254)
static void C_ccall f_6254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6475)
static void C_fcall f_6475(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6508)
static void C_ccall f_6508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6515)
static void C_ccall f_6515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6266)
static void C_ccall f_6266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6440)
static void C_fcall f_6440(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6281)
static void C_ccall f_6281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6283)
static void C_fcall f_6283(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6354)
static void C_fcall f_6354(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6408)
static void C_ccall f_6408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6365)
static void C_ccall f_6365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6315)
static void C_fcall f_6315(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6344)
static void C_ccall f_6344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6313)
static void C_ccall f_6313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6299)
static void C_fcall f_6299(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6307)
static void C_ccall f_6307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6255)
static void C_ccall f_6255(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6236)
static void C_fcall f_6236(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6248)
static void C_ccall f_6248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6244)
static void C_ccall f_6244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6187)
static void C_fcall f_6187(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6210)
static void C_ccall f_6210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6214)
static void C_ccall f_6214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6156)
static void C_fcall f_6156(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6177)
static void C_ccall f_6177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6142)
static void C_ccall f_6142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2210)
static void C_ccall f_2210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6087)
static void C_ccall f_6087(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6091)
static void C_ccall f_6091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6100)
static void C_ccall f_6100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6105)
static void C_fcall f_6105(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6130)
static void C_ccall f_6130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6085)
static void C_ccall f_6085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2213)
static void C_ccall f_2213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5738)
static void C_ccall f_5738(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5742)
static void C_ccall f_5742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6048)
static void C_fcall f_6048(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6046)
static void C_ccall f_6046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5751)
static void C_ccall f_5751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6001)
static void C_fcall f_6001(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6030)
static void C_ccall f_6030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5770)
static void C_ccall f_5770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5966)
static void C_fcall f_5966(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5798)
static void C_ccall f_5798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5931)
static void C_fcall f_5931(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5960)
static void C_ccall f_5960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5929)
static void C_ccall f_5929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5804)
static void C_fcall f_5804(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5886)
static void C_fcall f_5886(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5830)
static void C_ccall f_5830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5851)
static void C_fcall f_5851(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5849)
static void C_ccall f_5849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5832)
static C_word C_fcall f_5832(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_5802)
static void C_ccall f_5802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5771)
static C_word C_fcall f_5771(C_word t0,C_word t1);
C_noret_decl(f_5752)
static void C_fcall f_5752(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5764)
static void C_ccall f_5764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5760)
static void C_ccall f_5760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5736)
static void C_ccall f_5736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2216)
static void C_ccall f_2216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5732)
static void C_ccall f_5732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5690)
static void C_ccall f_5690(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5694)
static void C_ccall f_5694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5697)
static void C_ccall f_5697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5688)
static void C_ccall f_5688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2219)
static void C_ccall f_2219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5578)
static void C_ccall f_5578(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5676)
static void C_ccall f_5676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5581)
static void C_fcall f_5581(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5585)
static void C_ccall f_5585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5594)
static void C_fcall f_5594(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5626)
static void C_ccall f_5626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5622)
static void C_ccall f_5622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5606)
static void C_fcall f_5606(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5597)
static void C_ccall f_5597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5576)
static void C_ccall f_5576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2222)
static void C_ccall f_2222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5477)
static void C_ccall f_5477(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5481)
static void C_ccall f_5481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5492)
static void C_fcall f_5492(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5521)
static void C_ccall f_5521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5556)
static void C_ccall f_5556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5538)
static void C_ccall f_5538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5475)
static void C_ccall f_5475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2225)
static void C_ccall f_2225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5304)
static void C_ccall f_5304(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5308)
static void C_ccall f_5308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5317)
static void C_ccall f_5317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5320)
static void C_ccall f_5320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5323)
static void C_ccall f_5323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5336)
static void C_fcall f_5336(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5361)
static void C_ccall f_5361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5367)
static void C_ccall f_5367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5426)
static void C_fcall f_5426(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5424)
static void C_ccall f_5424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5405)
static void C_ccall f_5405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5411)
static C_word C_fcall f_5411(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_5390)
static void C_ccall f_5390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5383)
static void C_ccall f_5383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5386)
static void C_ccall f_5386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5370)
static void C_ccall f_5370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5334)
static void C_ccall f_5334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5302)
static void C_ccall f_5302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2228)
static void C_ccall f_2228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5298)
static void C_ccall f_5298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5294)
static void C_ccall f_5294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4820)
static void C_ccall f_4820(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4824)
static void C_ccall f_4824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5044)
static void C_ccall f_5044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5249)
static void C_fcall f_5249(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5278)
static void C_ccall f_5278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5050)
static void C_ccall f_5050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5214)
static void C_fcall f_5214(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5243)
static void C_ccall f_5243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5078)
static void C_ccall f_5078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5179)
static void C_fcall f_5179(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5208)
static void C_ccall f_5208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5084)
static void C_ccall f_5084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5087)
static void C_ccall f_5087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5090)
static void C_ccall f_5090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5144)
static void C_fcall f_5144(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5173)
static void C_ccall f_5173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5105)
static void C_ccall f_5105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4847)
static void C_ccall f_4847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4851)
static void C_ccall f_4851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4853)
static void C_fcall f_4853(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4898)
static void C_ccall f_4898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4910)
static void C_ccall f_4910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4906)
static void C_ccall f_4906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4874)
static void C_ccall f_4874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5108)
static void C_ccall f_5108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5111)
static void C_ccall f_5111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5118)
static void C_ccall f_5118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5091)
static void C_fcall f_5091(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5099)
static void C_ccall f_5099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5064)
static void C_fcall f_5064(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5072)
static void C_ccall f_5072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5051)
static void C_fcall f_5051(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5063)
static void C_ccall f_5063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5059)
static void C_ccall f_5059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4920)
static void C_fcall f_4920(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4926)
static void C_fcall f_4926(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5038)
static void C_ccall f_5038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5030)
static void C_ccall f_5030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5022)
static void C_ccall f_5022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4994)
static void C_ccall f_4994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4968)
static void C_ccall f_4968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4960)
static void C_ccall f_4960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4818)
static void C_ccall f_4818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4810)
static void C_ccall f_4810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4806)
static void C_ccall f_4806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4802)
static void C_ccall f_4802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4682)
static void C_ccall f_4682(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4686)
static void C_ccall f_4686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4689)
static void C_ccall f_4689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4778)
static void C_ccall f_4778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4747)
static void C_ccall f_4747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4755)
static void C_ccall f_4755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4739)
static void C_ccall f_4739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4680)
static void C_ccall f_4680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2234)
static void C_ccall f_2234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4672)
static void C_ccall f_4672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4498)
static void C_ccall f_4498(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4502)
static void C_ccall f_4502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4514)
static void C_ccall f_4514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4517)
static void C_ccall f_4517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4520)
static void C_ccall f_4520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4523)
static void C_ccall f_4523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4536)
static void C_fcall f_4536(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4586)
static void C_ccall f_4586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4597)
static void C_ccall f_4597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4534)
static void C_ccall f_4534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4496)
static void C_ccall f_4496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4488)
static void C_ccall f_4488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4476)
static void C_ccall f_4476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4063)
static void C_ccall f_4063(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4067)
static void C_ccall f_4067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4104)
static void C_ccall f_4104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4423)
static void C_fcall f_4423(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4452)
static void C_ccall f_4452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4421)
static void C_ccall f_4421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4107)
static void C_ccall f_4107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4110)
static void C_ccall f_4110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4113)
static void C_ccall f_4113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4116)
static void C_ccall f_4116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4122)
static void C_ccall f_4122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4125)
static void C_ccall f_4125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4128)
static void C_ccall f_4128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4135)
static void C_ccall f_4135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4149)
static void C_ccall f_4149(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4159)
static void C_ccall f_4159(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4163)
static void C_ccall f_4163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4173)
static void C_fcall f_4173(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4263)
static void C_fcall f_4263(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4371)
static void C_ccall f_4371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4319)
static void C_ccall f_4319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4330)
static void C_ccall f_4330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4214)
static void C_fcall f_4214(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4247)
static void C_ccall f_4247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4227)
static void C_fcall f_4227(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4179)
static void C_ccall f_4179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4187)
static void C_ccall f_4187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4177)
static void C_ccall f_4177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4147)
static void C_ccall f_4147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4069)
static void C_fcall f_4069(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4075)
static void C_fcall f_4075(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4101)
static void C_ccall f_4101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4089)
static void C_ccall f_4089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4093)
static void C_ccall f_4093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4061)
static void C_ccall f_4061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2240)
static void C_ccall f_2240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3989)
static void C_ccall f_3989(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3993)
static void C_ccall f_3993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4038)
static void C_ccall f_4038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4008)
static void C_ccall f_4008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3987)
static void C_ccall f_3987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2243)
static void C_ccall f_2243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3979)
static void C_ccall f_3979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3870)
static void C_ccall f_3870(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3874)
static void C_ccall f_3874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3877)
static void C_ccall f_3877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3880)
static void C_ccall f_3880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3891)
static void C_ccall f_3891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3907)
static void C_ccall f_3907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3868)
static void C_ccall f_3868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2246)
static void C_ccall f_2246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3860)
static void C_ccall f_3860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3856)
static void C_ccall f_3856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3560)
static void C_ccall f_3560(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3564)
static void C_ccall f_3564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3573)
static void C_ccall f_3573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3576)
static void C_ccall f_3576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3743)
static void C_ccall f_3743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3763)
static void C_ccall f_3763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3791)
static void C_fcall f_3791(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3581)
static void C_fcall f_3581(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3681)
static void C_fcall f_3681(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3679)
static void C_ccall f_3679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3665)
static C_word C_fcall f_3665(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3558)
static void C_ccall f_3558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2249)
static void C_ccall f_2249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3550)
static void C_ccall f_3550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3175)
static void C_ccall f_3175(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3179)
static void C_ccall f_3179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3194)
static void C_ccall f_3194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3197)
static void C_ccall f_3197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3203)
static void C_ccall f_3203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3509)
static void C_fcall f_3509(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3538)
static void C_ccall f_3538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3212)
static void C_ccall f_3212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3474)
static void C_fcall f_3474(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3472)
static void C_ccall f_3472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3237)
static void C_fcall f_3237(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3415)
static void C_ccall f_3415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3256)
static void C_fcall f_3256(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3262)
static void C_fcall f_3262(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3335)
static void C_ccall f_3335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3269)
static void C_fcall f_3269(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3277)
static void C_fcall f_3277(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3281)
static void C_ccall f_3281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3459)
static C_word C_fcall f_3459(C_word t0,C_word t1);
C_noret_decl(f_3173)
static void C_ccall f_3173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2983)
static void C_ccall f_2983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2989)
static void C_ccall f_2989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2992)
static void C_ccall f_2992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3001)
static void C_fcall f_3001(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3108)
static void C_ccall f_3108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3043)
static void C_ccall f_3043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2977)
static void C_ccall f_2977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2764)
static void C_ccall f_2764(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2768)
static void C_ccall f_2768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2771)
static void C_ccall f_2771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2777)
static void C_ccall f_2777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2786)
static void C_fcall f_2786(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2869)
static void C_ccall f_2869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2943)
static void C_ccall f_2943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2796)
static void C_ccall f_2796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2805)
static void C_ccall f_2805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2816)
static void C_ccall f_2816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2832)
static void C_ccall f_2832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2762)
static void C_ccall f_2762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2695)
static void C_ccall f_2695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2689)
static void C_ccall f_2689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2662)
static void C_ccall f_2662(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2673)
static void C_ccall f_2673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2681)
static void C_ccall f_2681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2660)
static void C_ccall f_2660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2643)
static void C_ccall f_2643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2267)
static void C_ccall f_2267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2433)
static void C_ccall f_2433(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2443)
static void C_fcall f_2443(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2582)
static void C_ccall f_2582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2591)
static void C_ccall f_2591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2600)
static void C_fcall f_2600(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2621)
static void C_ccall f_2621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2467)
static void C_ccall f_2467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2517)
static void C_fcall f_2517(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2483)
static void C_ccall f_2483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2499)
static void C_ccall f_2499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2453)
static void C_ccall f_2453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2431)
static void C_ccall f_2431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2285)
static void C_ccall f_2285(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2380)
static void C_ccall f_2380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2383)
static void C_ccall f_2383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2389)
static void C_ccall f_2389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2398)
static void C_fcall f_2398(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2405)
static void C_ccall f_2405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2419)
static void C_ccall f_2419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2324)
static void C_ccall f_2324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2333)
static void C_ccall f_2333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2339)
static void C_ccall f_2339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2348)
static void C_fcall f_2348(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2355)
static void C_ccall f_2355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2369)
static void C_ccall f_2369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2295)
static void C_ccall f_2295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2283)
static void C_ccall f_2283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2273)
static void C_ccall f_2273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2276)
static void C_ccall f_2276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2279)
static void C_ccall f_2279(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_8792)
static void C_fcall trf_8792(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8792(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8792(t0,t1,t2);}

C_noret_decl(trf_8582)
static void C_fcall trf_8582(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8582(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8582(t0,t1,t2,t3);}

C_noret_decl(trf_8634)
static void C_fcall trf_8634(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8634(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8634(t0,t1);}

C_noret_decl(trf_8492)
static void C_fcall trf_8492(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8492(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8492(t0,t1,t2);}

C_noret_decl(trf_8415)
static void C_fcall trf_8415(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8415(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8415(t0,t1);}

C_noret_decl(trf_8256)
static void C_fcall trf_8256(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8256(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8256(t0,t1);}

C_noret_decl(trf_8178)
static void C_fcall trf_8178(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8178(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8178(t0,t1);}

C_noret_decl(trf_8100)
static void C_fcall trf_8100(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8100(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8100(t0,t1,t2);}

C_noret_decl(trf_8065)
static void C_fcall trf_8065(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8065(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8065(t0,t1,t2);}

C_noret_decl(trf_8030)
static void C_fcall trf_8030(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8030(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8030(t0,t1,t2);}

C_noret_decl(trf_7995)
static void C_fcall trf_7995(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7995(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7995(t0,t1,t2);}

C_noret_decl(trf_7946)
static void C_fcall trf_7946(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7946(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7946(t0,t1,t2,t3);}

C_noret_decl(trf_7959)
static void C_fcall trf_7959(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7959(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7959(t0,t1);}

C_noret_decl(trf_7926)
static void C_fcall trf_7926(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7926(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7926(t0,t1,t2);}

C_noret_decl(trf_7873)
static void C_fcall trf_7873(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7873(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7873(t0,t1,t2,t3);}

C_noret_decl(trf_7886)
static void C_fcall trf_7886(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7886(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7886(t0,t1);}

C_noret_decl(trf_7795)
static void C_fcall trf_7795(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7795(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7795(t0,t1,t2,t3);}

C_noret_decl(trf_7808)
static void C_fcall trf_7808(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7808(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7808(t0,t1);}

C_noret_decl(trf_7746)
static void C_fcall trf_7746(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7746(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7746(t0,t1,t2,t3);}

C_noret_decl(trf_7759)
static void C_fcall trf_7759(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7759(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7759(t0,t1);}

C_noret_decl(trf_7643)
static void C_fcall trf_7643(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7643(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7643(t0,t1,t2,t3);}

C_noret_decl(trf_7656)
static void C_fcall trf_7656(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7656(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7656(t0,t1);}

C_noret_decl(trf_7594)
static void C_fcall trf_7594(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7594(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7594(t0,t1,t2,t3);}

C_noret_decl(trf_7607)
static void C_fcall trf_7607(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7607(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7607(t0,t1);}

C_noret_decl(trf_7505)
static void C_fcall trf_7505(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7505(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7505(t0,t1);}

C_noret_decl(trf_7490)
static void C_fcall trf_7490(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7490(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7490(t0,t1);}

C_noret_decl(trf_7418)
static void C_fcall trf_7418(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7418(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7418(t0,t1,t2);}

C_noret_decl(trf_7328)
static void C_fcall trf_7328(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7328(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7328(t0,t1,t2);}

C_noret_decl(trf_7293)
static void C_fcall trf_7293(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7293(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7293(t0,t1,t2);}

C_noret_decl(trf_7258)
static void C_fcall trf_7258(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7258(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7258(t0,t1,t2);}

C_noret_decl(trf_7223)
static void C_fcall trf_7223(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7223(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7223(t0,t1,t2);}

C_noret_decl(trf_7174)
static void C_fcall trf_7174(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7174(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7174(t0,t1,t2,t3);}

C_noret_decl(trf_7187)
static void C_fcall trf_7187(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7187(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7187(t0,t1);}

C_noret_decl(trf_7125)
static void C_fcall trf_7125(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7125(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7125(t0,t1,t2,t3);}

C_noret_decl(trf_7138)
static void C_fcall trf_7138(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7138(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7138(t0,t1);}

C_noret_decl(trf_7056)
static void C_fcall trf_7056(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7056(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7056(t0,t1,t2,t3);}

C_noret_decl(trf_7069)
static void C_fcall trf_7069(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7069(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7069(t0,t1);}

C_noret_decl(trf_6966)
static void C_fcall trf_6966(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6966(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6966(t0,t1);}

C_noret_decl(trf_6951)
static void C_fcall trf_6951(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6951(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6951(t0,t1);}

C_noret_decl(trf_6828)
static void C_fcall trf_6828(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6828(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6828(t0,t1,t2);}

C_noret_decl(trf_6779)
static void C_fcall trf_6779(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6779(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6779(t0,t1,t2,t3);}

C_noret_decl(trf_6792)
static void C_fcall trf_6792(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6792(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6792(t0,t1);}

C_noret_decl(trf_6670)
static void C_fcall trf_6670(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6670(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6670(t0,t1,t2);}

C_noret_decl(trf_6596)
static void C_fcall trf_6596(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6596(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6596(t0,t1,t2);}

C_noret_decl(trf_6556)
static void C_fcall trf_6556(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6556(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6556(t0,t1,t2,t3);}

C_noret_decl(trf_6521)
static void C_fcall trf_6521(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6521(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6521(t0,t1,t2);}

C_noret_decl(trf_6475)
static void C_fcall trf_6475(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6475(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6475(t0,t1,t2,t3);}

C_noret_decl(trf_6440)
static void C_fcall trf_6440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6440(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6440(t0,t1,t2);}

C_noret_decl(trf_6283)
static void C_fcall trf_6283(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6283(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6283(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6354)
static void C_fcall trf_6354(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6354(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6354(t0,t1);}

C_noret_decl(trf_6315)
static void C_fcall trf_6315(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6315(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6315(t0,t1,t2);}

C_noret_decl(trf_6299)
static void C_fcall trf_6299(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6299(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6299(t0,t1,t2);}

C_noret_decl(trf_6236)
static void C_fcall trf_6236(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6236(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6236(t0,t1,t2);}

C_noret_decl(trf_6187)
static void C_fcall trf_6187(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6187(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6187(t0,t1,t2,t3);}

C_noret_decl(trf_6156)
static void C_fcall trf_6156(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6156(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6156(t0,t1,t2,t3);}

C_noret_decl(trf_6105)
static void C_fcall trf_6105(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6105(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6105(t0,t1,t2);}

C_noret_decl(trf_6048)
static void C_fcall trf_6048(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6048(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6048(t0,t1,t2);}

C_noret_decl(trf_6001)
static void C_fcall trf_6001(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6001(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6001(t0,t1,t2);}

C_noret_decl(trf_5966)
static void C_fcall trf_5966(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5966(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5966(t0,t1,t2);}

C_noret_decl(trf_5931)
static void C_fcall trf_5931(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5931(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5931(t0,t1,t2);}

C_noret_decl(trf_5804)
static void C_fcall trf_5804(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5804(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5804(t0,t1,t2);}

C_noret_decl(trf_5886)
static void C_fcall trf_5886(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5886(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5886(t0,t1,t2);}

C_noret_decl(trf_5851)
static void C_fcall trf_5851(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5851(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5851(t0,t1,t2);}

C_noret_decl(trf_5752)
static void C_fcall trf_5752(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5752(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5752(t0,t1,t2);}

C_noret_decl(trf_5581)
static void C_fcall trf_5581(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5581(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5581(t0,t1,t2,t3);}

C_noret_decl(trf_5594)
static void C_fcall trf_5594(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5594(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5594(t0,t1);}

C_noret_decl(trf_5606)
static void C_fcall trf_5606(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5606(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5606(t0,t1);}

C_noret_decl(trf_5492)
static void C_fcall trf_5492(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5492(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5492(t0,t1,t2);}

C_noret_decl(trf_5336)
static void C_fcall trf_5336(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5336(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5336(t0,t1,t2,t3);}

C_noret_decl(trf_5426)
static void C_fcall trf_5426(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5426(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5426(t0,t1,t2);}

C_noret_decl(trf_5249)
static void C_fcall trf_5249(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5249(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5249(t0,t1,t2);}

C_noret_decl(trf_5214)
static void C_fcall trf_5214(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5214(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5214(t0,t1,t2);}

C_noret_decl(trf_5179)
static void C_fcall trf_5179(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5179(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5179(t0,t1,t2);}

C_noret_decl(trf_5144)
static void C_fcall trf_5144(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5144(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5144(t0,t1,t2);}

C_noret_decl(trf_4853)
static void C_fcall trf_4853(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4853(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4853(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5091)
static void C_fcall trf_5091(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5091(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5091(t0,t1,t2);}

C_noret_decl(trf_5064)
static void C_fcall trf_5064(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5064(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5064(t0,t1,t2);}

C_noret_decl(trf_5051)
static void C_fcall trf_5051(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5051(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5051(t0,t1,t2);}

C_noret_decl(trf_4920)
static void C_fcall trf_4920(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4920(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4920(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4926)
static void C_fcall trf_4926(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4926(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4926(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4536)
static void C_fcall trf_4536(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4536(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4536(t0,t1,t2,t3);}

C_noret_decl(trf_4423)
static void C_fcall trf_4423(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4423(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4423(t0,t1,t2);}

C_noret_decl(trf_4173)
static void C_fcall trf_4173(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4173(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4173(t0,t1);}

C_noret_decl(trf_4263)
static void C_fcall trf_4263(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4263(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4263(t0,t1,t2,t3);}

C_noret_decl(trf_4214)
static void C_fcall trf_4214(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4214(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4214(t0,t1,t2,t3);}

C_noret_decl(trf_4227)
static void C_fcall trf_4227(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4227(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4227(t0,t1);}

C_noret_decl(trf_4069)
static void C_fcall trf_4069(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4069(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4069(t0,t1,t2);}

C_noret_decl(trf_4075)
static void C_fcall trf_4075(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4075(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4075(t0,t1,t2);}

C_noret_decl(trf_3791)
static void C_fcall trf_3791(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3791(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3791(t0,t1,t2);}

C_noret_decl(trf_3581)
static void C_fcall trf_3581(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3581(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3581(t0,t1,t2);}

C_noret_decl(trf_3681)
static void C_fcall trf_3681(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3681(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3681(t0,t1,t2);}

C_noret_decl(trf_3509)
static void C_fcall trf_3509(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3509(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3509(t0,t1,t2);}

C_noret_decl(trf_3474)
static void C_fcall trf_3474(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3474(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3474(t0,t1,t2);}

C_noret_decl(trf_3237)
static void C_fcall trf_3237(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3237(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3237(t0,t1,t2,t3);}

C_noret_decl(trf_3256)
static void C_fcall trf_3256(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3256(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3256(t0,t1);}

C_noret_decl(trf_3262)
static void C_fcall trf_3262(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3262(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3262(t0,t1);}

C_noret_decl(trf_3269)
static void C_fcall trf_3269(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3269(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3269(t0,t1);}

C_noret_decl(trf_3277)
static void C_fcall trf_3277(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3277(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3277(t0,t1);}

C_noret_decl(trf_3001)
static void C_fcall trf_3001(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3001(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3001(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2786)
static void C_fcall trf_2786(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2786(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2786(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2443)
static void C_fcall trf_2443(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2443(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2443(t0,t1);}

C_noret_decl(trf_2600)
static void C_fcall trf_2600(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2600(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2600(t0,t1,t2,t3);}

C_noret_decl(trf_2517)
static void C_fcall trf_2517(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2517(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2517(t0,t1);}

C_noret_decl(trf_2398)
static void C_fcall trf_2398(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2398(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2398(t0,t1,t2,t3);}

C_noret_decl(trf_2348)
static void C_fcall trf_2348(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2348(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2348(t0,t1,t2,t3);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("chicken_2dsyntax_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3084)){
C_save(t1);
C_rereclaim2(3084*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,241);
lf[0]=C_h_intern(&lf[0],28,"\003sysdefine-values-definition");
lf[1]=C_h_intern(&lf[1],29,"\003syschicken-macro-environment");
lf[2]=C_h_intern(&lf[2],17,"register-feature!");
lf[3]=C_h_intern(&lf[3],6,"srfi-8");
lf[4]=C_h_intern(&lf[4],7,"srfi-16");
lf[5]=C_h_intern(&lf[5],7,"srfi-26");
lf[6]=C_h_intern(&lf[6],7,"srfi-31");
lf[7]=C_h_intern(&lf[7],7,"srfi-15");
lf[8]=C_h_intern(&lf[8],7,"srfi-11");
lf[9]=C_h_intern(&lf[9],16,"\003sysmacro-subset");
lf[10]=C_h_intern(&lf[10],29,"\003sysdefault-macro-environment");
lf[11]=C_h_intern(&lf[11],28,"\003sysextend-macro-environment");
lf[12]=C_h_intern(&lf[12],19,"let-compiler-syntax");
lf[13]=C_h_intern(&lf[13],24,"\004corelet-compiler-syntax");
lf[14]=C_h_intern(&lf[14],25,"\003syssyntax-rules-mismatch");
lf[15]=C_h_intern(&lf[15],5,"\003sys+");
lf[16]=C_h_intern(&lf[16],5,"\003sys=");
lf[17]=C_h_intern(&lf[17],6,"\003sys>=");
lf[18]=C_h_intern(&lf[18],10,"\003syslength");
lf[19]=C_h_intern(&lf[19],9,"\003syslist\077");
lf[20]=C_h_intern(&lf[20],18,"\003syser-transformer");
lf[21]=C_h_intern(&lf[21],22,"define-compiler-syntax");
lf[22]=C_h_intern(&lf[22],27,"\004coredefine-compiler-syntax");
lf[23]=C_h_intern(&lf[23],6,"lambda");
lf[24]=C_h_intern(&lf[24],3,"use");
lf[25]=C_h_intern(&lf[25],22,"\004corerequire-extension");
lf[26]=C_h_intern(&lf[26],16,"\003syscheck-syntax");
lf[27]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[28]=C_h_intern(&lf[28],17,"define-for-syntax");
lf[29]=C_h_intern(&lf[29],6,"define");
lf[30]=C_h_intern(&lf[30],16,"begin-for-syntax");
lf[31]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[32]=C_h_intern(&lf[32],3,"rec");
lf[33]=C_h_intern(&lf[33],11,"\004corelambda");
lf[34]=C_h_intern(&lf[34],11,"\004coreletrec");
lf[35]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[36]=C_h_intern(&lf[36],5,"apply");
lf[37]=C_h_intern(&lf[37],4,"cute");
lf[38]=C_h_intern(&lf[38],8,"\004corelet");
lf[39]=C_h_intern(&lf[39],10,"\003sysappend");
lf[40]=C_h_intern(&lf[40],6,"gensym");
lf[41]=C_h_intern(&lf[41],7,"reverse");
lf[42]=C_h_intern(&lf[42],12,"syntax-error");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000+tail patterns after <...> are not supported");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\047you need to supply at least a procedure");
lf[45]=C_h_intern(&lf[45],5,"<...>");
lf[46]=C_h_intern(&lf[46],2,"<>");
lf[47]=C_h_intern(&lf[47],19,"\003sysprimitive-alias");
lf[48]=C_h_intern(&lf[48],3,"cut");
lf[49]=C_h_intern(&lf[49],10,"\004corebegin");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000+tail patterns after <...> are not supported");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\047you need to supply at least a procedure");
lf[52]=C_h_intern(&lf[52],18,"getter-with-setter");
lf[53]=C_h_intern(&lf[53],18,"define-record-type");
lf[54]=C_h_intern(&lf[54],3,"car");
lf[55]=C_h_intern(&lf[55],3,"map");
lf[56]=C_h_intern(&lf[56],10,"\004corequote");
lf[57]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[58]=C_h_intern(&lf[58],18,"\003sysmake-structure");
lf[59]=C_h_intern(&lf[59],14,"\003sysstructure\077");
lf[60]=C_h_intern(&lf[60],19,"\003syscheck-structure");
lf[61]=C_h_intern(&lf[61],10,"\004corecheck");
lf[62]=C_h_intern(&lf[62],13,"\003sysblock-ref");
lf[63]=C_h_intern(&lf[63],10,"\003syssetter");
lf[64]=C_h_intern(&lf[64],14,"\003sysblock-set!");
lf[65]=C_h_intern(&lf[65],6,"setter");
lf[66]=C_h_intern(&lf[66],1,"y");
lf[67]=C_h_intern(&lf[67],1,"x");
lf[68]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\000\000\000\002\376\001\000\000\010variable\376\377\001\000\000\000\001\376\003\000\000\002\376\001\000\000\010variable\376\001\000"
"\000\001_");
lf[69]=C_h_intern(&lf[69],4,"else");
lf[70]=C_h_intern(&lf[70],4,"memv");
lf[71]=C_h_intern(&lf[71],14,"condition-case");
lf[72]=C_h_intern(&lf[72],9,"condition");
lf[73]=C_h_intern(&lf[73],8,"\003sysslot");
lf[74]=C_h_intern(&lf[74],10,"\003syssignal");
lf[75]=C_h_intern(&lf[75],4,"cond");
lf[76]=C_h_intern(&lf[76],17,"handle-exceptions");
lf[77]=C_h_intern(&lf[77],3,"and");
lf[78]=C_h_intern(&lf[78],4,"kvar");
lf[79]=C_h_intern(&lf[79],5,"exvar");
lf[80]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[81]=C_h_intern(&lf[81],30,"call-with-current-continuation");
lf[82]=C_h_intern(&lf[82],22,"with-exception-handler");
lf[83]=C_h_intern(&lf[83],9,"\003sysapply");
lf[84]=C_h_intern(&lf[84],10,"\003sysvalues");
lf[85]=C_h_intern(&lf[85],20,"\003syscall-with-values");
lf[86]=C_h_intern(&lf[86],4,"args");
lf[87]=C_h_intern(&lf[87],1,"k");
lf[88]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[89]=C_h_intern(&lf[89],21,"define-record-printer");
lf[90]=C_h_intern(&lf[90],5,"quote");
lf[91]=C_h_intern(&lf[91],27,"\003sysregister-record-printer");
lf[92]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[93]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[94]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[95]=C_h_intern(&lf[95],2,">=");
lf[96]=C_h_intern(&lf[96],3,"cdr");
lf[97]=C_h_intern(&lf[97],3,"eq\077");
lf[98]=C_h_intern(&lf[98],11,"case-lambda");
lf[99]=C_h_intern(&lf[99],6,"length");
lf[100]=C_h_intern(&lf[100],7,"\004coreif");
lf[101]=C_h_intern(&lf[101],9,"split-at!");
lf[102]=C_h_intern(&lf[102],4,"take");
lf[103]=C_h_intern(&lf[103],4,"list");
lf[104]=C_h_intern(&lf[104],11,"lambda-list");
lf[105]=C_h_intern(&lf[105],25,"\003sysdecompose-lambda-list");
lf[106]=C_h_intern(&lf[106],10,"fold-right");
lf[107]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corecheck\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\003syserror\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreimmutable\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\005quote\376\003\000\000\002\376B\000\0000no matching clause in call to \047case-lambda\047 form\376\377\016\376\377\016\376\377\016"
"\376\377\016");
lf[108]=C_h_intern(&lf[108],6,"append");
lf[109]=C_h_intern(&lf[109],4,"lvar");
lf[110]=C_h_intern(&lf[110],4,"rvar");
lf[111]=C_h_intern(&lf[111],3,"min");
lf[112]=C_h_intern(&lf[112],7,"require");
lf[113]=C_h_intern(&lf[113],6,"srfi-1");
lf[114]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[115]=C_h_intern(&lf[115],5,"null\077");
lf[116]=C_h_intern(&lf[116],14,"let-optionals*");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[118]=C_h_intern(&lf[118],14,"\004coreimmutable");
lf[119]=C_h_intern(&lf[119],9,"\003syserror");
lf[120]=C_h_intern(&lf[120],4,"tmp2");
lf[121]=C_h_intern(&lf[121],3,"tmp");
lf[122]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[123]=C_h_intern(&lf[123],8,"optional");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[126]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[127]=C_h_intern(&lf[127],13,"let-optionals");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[129]=C_h_intern(&lf[129],14,"string->symbol");
lf[130]=C_h_intern(&lf[130],13,"string-append");
lf[131]=C_h_intern(&lf[131],14,"symbol->string");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\001%");
lf[133]=C_h_intern(&lf[133],4,"cadr");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\004def-");
lf[135]=C_h_intern(&lf[135],4,"let*");
lf[136]=C_h_intern(&lf[136],6,"_%rest");
lf[137]=C_h_intern(&lf[137],4,"body");
lf[138]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[139]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000");
lf[140]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[141]=C_h_intern(&lf[141],6,"select");
lf[142]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[143]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corebegin\376\377\016");
lf[144]=C_h_intern(&lf[144],10,"\003sysnotice");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\0005non-`else\047 clause following `else\047 clause in `select\047");
lf[146]=C_h_intern(&lf[146],16,"\003sysstrip-syntax");
lf[147]=C_h_intern(&lf[147],8,"\003syseqv\077");
lf[148]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[149]=C_h_intern(&lf[149],16,"\003syssyntax-error");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid syntax");
lf[151]=C_h_intern(&lf[151],2,"or");
lf[152]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[153]=C_h_intern(&lf[153],8,"and-let*");
lf[154]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000\376\001\000\000\001_");
lf[155]=C_h_intern(&lf[155],13,"define-inline");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000*invalid substitution form - must be lambda");
lf[157]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[158]=C_h_intern(&lf[158],18,"\004coredefine-inline");
lf[159]=C_h_intern(&lf[159],8,"list-ref");
lf[160]=C_h_intern(&lf[160],9,"nth-value");
lf[161]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[162]=C_h_intern(&lf[162],13,"letrec-values");
lf[163]=C_h_intern(&lf[163],9,"\004coreset!");
lf[164]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[165]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[166]=C_h_intern(&lf[166],11,"let*-values");
lf[167]=C_h_intern(&lf[167],10,"let-values");
lf[168]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[169]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[170]=C_h_intern(&lf[170],13,"define-values");
lf[171]=C_h_intern(&lf[171],8,"for-each");
lf[172]=C_h_intern(&lf[172],11,"set!-values");
lf[173]=C_h_intern(&lf[173],19,"\003sysregister-export");
lf[174]=C_h_intern(&lf[174],18,"\003syscurrent-module");
lf[175]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\001\000\000\010variable\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[176]=C_h_intern(&lf[176],14,"\004coreundefined");
lf[177]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\001\000\000\010variable\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[178]=C_h_intern(&lf[178],6,"unless");
lf[179]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[180]=C_h_intern(&lf[180],4,"when");
lf[181]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[182]=C_h_intern(&lf[182],12,"parameterize");
lf[183]=C_h_intern(&lf[183],16,"\003sysdynamic-wind");
lf[184]=C_h_intern(&lf[184],1,"t");
lf[185]=C_h_intern(&lf[185],8,"\003syslist");
lf[186]=C_h_intern(&lf[186],4,"swap");
lf[187]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[188]=C_h_intern(&lf[188],9,"eval-when");
lf[189]=C_h_intern(&lf[189],10,"\000compiling");
lf[190]=C_h_intern(&lf[190],12,"\003sysfeatures");
lf[191]=C_h_intern(&lf[191],19,"\004corecompiletimetoo");
lf[192]=C_h_intern(&lf[192],20,"\004corecompiletimeonly");
lf[193]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[194]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid situation specifier");
lf[196]=C_h_intern(&lf[196],4,"load");
lf[197]=C_h_intern(&lf[197],7,"compile");
lf[198]=C_h_intern(&lf[198],4,"eval");
lf[199]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[200]=C_h_intern(&lf[200],9,"fluid-let");
lf[201]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\001\000\000\001_");
lf[202]=C_h_intern(&lf[202],6,"ensure");
lf[203]=C_h_intern(&lf[203],15,"\003syssignal-hook");
lf[204]=C_h_intern(&lf[204],11,"\000type-error");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\033argument has incorrect type");
lf[206]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\003");
lf[207]=C_h_intern(&lf[207],6,"assert");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\020assertion failed");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[211]=C_h_intern(&lf[211],15,"get-line-number");
lf[212]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[213]=C_h_intern(&lf[213],7,"include");
lf[214]=C_h_intern(&lf[214],12,"\004coreinclude");
lf[215]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006string\376\377\016");
lf[216]=C_h_intern(&lf[216],7,"declare");
lf[217]=C_h_intern(&lf[217],12,"\004coredeclare");
lf[218]=C_h_intern(&lf[218],4,"time");
lf[219]=C_h_intern(&lf[219],15,"\003sysstart-timer");
lf[220]=C_h_intern(&lf[220],14,"\003sysstop-timer");
lf[221]=C_h_intern(&lf[221],17,"\003sysdisplay-times");
lf[222]=C_h_intern(&lf[222],7,"receive");
lf[223]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[224]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[225]=C_h_intern(&lf[225],13,"define-record");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid slot specification");
lf[227]=C_h_intern(&lf[227],3,"val");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\005-set!");
lf[231]=C_decode_literal(C_heaptop,"\376B\000\000\001\077");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\005make-");
lf[233]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\001\000\000\001_");
lf[234]=C_h_intern(&lf[234],15,"define-constant");
lf[235]=C_h_intern(&lf[235],20,"\004coredefine-constant");
lf[236]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[237]=C_h_intern(&lf[237],21,"\003sysmacro-environment");
lf[238]=C_h_intern(&lf[238],11,"\003sysprovide");
lf[239]=C_h_intern(&lf[239],19,"chicken-more-macros");
lf[240]=C_h_intern(&lf[240],14,"chicken-syntax");
C_register_lf2(lf,241,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2157,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:38: ##sys#provide */
t3=*((C_word*)lf[238]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[239],lf[240]);}

/* k2155 */
static void C_ccall f_2157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2157,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2161,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:46: ##sys#macro-environment */
t3=*((C_word*)lf[237]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2159 in k2155 */
static void C_ccall f_2161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2161,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2164,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8829,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8831,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:51: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8830 in k2159 in k2155 */
static void C_ccall f_8831(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8831,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8835,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:53: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[234],t2,lf[236]);}

/* k8833 in a8830 in k2159 in k2155 */
static void C_ccall f_8835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8835,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[235],t2));}

/* k8827 in k2159 in k2155 */
static void C_ccall f_8829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:48: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[234],C_SCHEME_END_OF_LIST,t1);}

/* k2162 in k2159 in k2155 */
static void C_ccall f_2164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2164,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2167,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8467,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8469,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:58: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8469(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8469,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8473,a[2]=t3,a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:60: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[225],t2,lf[233]);}

/* k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8473,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[5]);
t3=C_i_cddr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:63: symbol->string */
t5=*((C_word*)lf[131]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8482,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8485,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:64: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[29]);}

/* k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8485,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:65: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[65]);}

/* k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8491,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:66: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[52]);}

/* k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8491(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8491,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8492,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word)li123),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[6],lf[55]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8557,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8792,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li125),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_8792(t12,t8,((C_word*)t0)[6]);}

/* map-loop25 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_fcall f_8792(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8792,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8821,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g3140 */
t5=((C_word*)t0)[2];
f_8492(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8819 in map-loop25 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8821(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8821,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8792(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8792(t6,((C_word*)t0)[3],t5);}}

/* k8555 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8770,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8790,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:82: string-append */
t4=*((C_word*)lf[130]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[232],((C_word*)t0)[3]);}

/* k8788 in k8555 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:82: string->symbol */
t2=*((C_word*)lf[129]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8768 in k8555 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8770,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[56],((C_word*)t0)[8]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
t4=C_a_i_cons(&a,2,lf[58],t3);
t5=C_a_i_list(&a,3,lf[33],((C_word*)t0)[7],t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[6],t1,t5);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t6,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8766,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:87: string-append */
t9=*((C_word*)lf[130]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,((C_word*)t0)[3],lf[231]);}

/* k8764 in k8768 in k8555 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:87: string->symbol */
t2=*((C_word*)lf[129]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8744 in k8768 in k8555 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8746(C_word c,C_word t0,C_word t1){
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
C_word ab[51],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8746,2,t0,t1);}
t2=C_a_i_list(&a,1,lf[67]);
t3=C_a_i_list(&a,2,lf[90],((C_word*)t0)[8]);
t4=C_a_i_list(&a,3,lf[59],lf[67],t3);
t5=C_a_i_list(&a,3,lf[33],t2,t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[7],t1,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8580,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8582,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=t9,a[6]=((C_word*)t0)[8],a[7]=((C_word)li124),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_8582(t11,t7,((C_word*)t0)[2],C_fix(1));}

/* mapslots in k8744 in k8768 in k8555 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_fcall f_8582(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8582,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_i_car(t2);
t6=C_i_symbolp(t5);
t7=C_i_not(t6);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t7,a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=t1,a[9]=t3,a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t7)){
t9=C_i_cadr(t5);
/* chicken-syntax.scm:94: symbol->string */
t10=*((C_word*)lf[131]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
/* chicken-syntax.scm:94: symbol->string */
t9=*((C_word*)lf[131]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t5);}}}

/* k8596 in mapslots in k8744 in k8768 in k8555 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8598,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8601,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8731,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:95: string-append */
t4=*((C_word*)lf[130]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[2],lf[229],t1,lf[230]);}

/* k8729 in k8596 in mapslots in k8744 in k8768 in k8555 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:95: string->symbol */
t2=*((C_word*)lf[129]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8599 in k8596 in mapslots in k8744 in k8768 in k8555 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8601,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8604,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8727,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:96: string-append */
t4=*((C_word*)lf[130]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],lf[228],((C_word*)t0)[2]);}

/* k8725 in k8599 in k8596 in mapslots in k8744 in k8768 in k8555 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:96: string->symbol */
t2=*((C_word*)lf[129]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8602 in k8599 in k8596 in mapslots in k8744 in k8768 in k8555 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8604(C_word c,C_word t0,C_word t1){
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
C_word ab[79],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8604,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[67],lf[227]);
t3=C_a_i_list(&a,2,lf[56],((C_word*)t0)[10]);
t4=C_a_i_list(&a,3,lf[60],lf[67],t3);
t5=C_a_i_list(&a,2,lf[61],t4);
t6=C_a_i_list(&a,4,lf[64],lf[67],((C_word*)t0)[9],lf[227]);
t7=C_a_i_list(&a,4,lf[33],t2,t5,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8630,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8634,a[2]=t8,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t7,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[5])){
t10=t9;
f_8634(t10,C_SCHEME_END_OF_LIST);}
else{
t10=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[2],t7);
t11=t9;
f_8634(t11,C_a_i_list(&a,1,t10));}}

/* k8632 in k8602 in k8599 in k8596 in mapslots in k8744 in k8768 in k8555 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_fcall f_8634(C_word t0,C_word t1){
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
C_word ab[66],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8634,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[9])){
t2=C_a_i_list(&a,1,lf[67]);
t3=C_a_i_list(&a,2,lf[56],((C_word*)t0)[8]);
t4=C_a_i_list(&a,3,lf[60],lf[67],t3);
t5=C_a_i_list(&a,2,lf[61],t4);
t6=C_a_i_list(&a,3,lf[62],lf[67],((C_word*)t0)[7]);
t7=C_a_i_list(&a,4,lf[33],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[6],t7,((C_word*)t0)[5]);
t9=C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[3],t8);
t10=C_a_i_list(&a,1,t9);
/* ##sys#append */
t11=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,((C_word*)t0)[2],t1,t10);}
else{
t2=C_a_i_list(&a,1,lf[67]);
t3=C_a_i_list(&a,2,lf[56],((C_word*)t0)[8]);
t4=C_a_i_list(&a,3,lf[60],lf[67],t3);
t5=C_a_i_list(&a,2,lf[61],t4);
t6=C_a_i_list(&a,3,lf[62],lf[67],((C_word*)t0)[7]);
t7=C_a_i_list(&a,4,lf[33],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[3],t7);
t9=C_a_i_list(&a,1,t8);
/* ##sys#append */
t10=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,((C_word*)t0)[2],t1,t9);}}

/* k8628 in k8602 in k8599 in k8596 in mapslots in k8744 in k8768 in k8555 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8630,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[49],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8618,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm:120: mapslots */
t6=((C_word*)((C_word*)t0)[2])[1];
f_8582(t6,t3,t4,t5);}

/* k8616 in k8628 in k8602 in k8599 in k8596 in mapslots in k8744 in k8768 in k8555 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8618,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k8578 in k8744 in k8768 in k8555 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8580,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[49],t3));}

/* g31 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_fcall f_8492(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8492,NULL,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8520,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
/* chicken-syntax.scm:71: c */
t5=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}
else{
/* chicken-syntax.scm:77: syntax-error */
t3=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[225],lf[226],t2);}}}

/* k8518 in g31 in k8489 in k8486 in k8483 in k8480 in k8471 in a8468 in k2162 in k2159 in k2155 */
static void C_ccall f_8520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[3]);
if(C_truep(C_i_pairp(t2))){
t3=C_i_cadr(((C_word*)t0)[3]);
if(C_truep(C_i_symbolp(t3))){
t4=C_i_cddr(((C_word*)t0)[3]);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_cadr(((C_word*)t0)[3]));}
else{
/* chicken-syntax.scm:77: syntax-error */
t5=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[2],lf[225],lf[226],((C_word*)t0)[3]);}}
else{
/* chicken-syntax.scm:77: syntax-error */
t4=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],lf[225],lf[226],((C_word*)t0)[3]);}}
else{
/* chicken-syntax.scm:77: syntax-error */
t3=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[225],lf[226],((C_word*)t0)[3]);}}
else{
/* chicken-syntax.scm:77: syntax-error */
t2=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[225],lf[226],((C_word*)t0)[3]);}}

/* k8465 in k2162 in k2159 in k2155 */
static void C_ccall f_8467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:56: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[225],C_SCHEME_END_OF_LIST,t1);}

/* k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2167,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8370,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8372,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:125: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8371 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8372(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8372,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8376,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:127: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[222],t2,lf[224]);}

/* k8374 in a8371 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8376,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[3]);
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,lf[33],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[85],t5,lf[185]));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:131: ##sys#check-syntax */
t4=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[222],((C_word*)t0)[3],lf[223]);}}

/* k8398 in k8374 in a8371 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8400,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[3]);
t3=C_i_caddr(((C_word*)t0)[3]);
t4=C_i_cdddr(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8415,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_cdr(t2);
t7=t5;
f_8415(t7,C_i_nullp(t6));}
else{
t6=t5;
f_8415(t6,C_SCHEME_FALSE);}}

/* k8413 in k8398 in k8374 in a8371 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_8415(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8415,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[4]);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[38],t5));}
else{
t2=C_a_i_list(&a,3,lf[33],C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,lf[33],t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[85],t2,t4));}}

/* k8368 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:122: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[222],C_SCHEME_END_OF_LIST,t1);}

/* k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2170,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2173,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8321,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8323,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:143: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8322 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8323(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8323,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8327,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:145: r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[184]);}

/* k8325 in a8322 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8327(C_word c,C_word t0,C_word t1){
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
C_word ab[57],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8327,2,t0,t1);}
t2=C_a_i_list(&a,1,lf[219]);
t3=C_i_cdr(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,lf[33],t4);
t6=C_a_i_list(&a,1,lf[220]);
t7=C_a_i_list(&a,2,lf[221],t6);
t8=C_a_i_list(&a,3,lf[83],lf[84],t1);
t9=C_a_i_list(&a,4,lf[33],t1,t7,t8);
t10=C_a_i_list(&a,3,lf[85],t5,t9);
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_list(&a,3,lf[49],t2,t10));}

/* k8319 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:141: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[218],C_SCHEME_END_OF_LIST,t1);}

/* k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2173,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8307,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8309,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:157: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8308 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8309,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[217],t5));}

/* k8305 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:155: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[216],C_SCHEME_END_OF_LIST,t1);}

/* k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2176,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2179,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8290,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8292,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:163: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8291 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8292,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8296,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:165: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[213],t2,lf[215]);}

/* k8294 in a8291 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8296,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[214],t2));}

/* k8288 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:161: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[213],C_SCHEME_END_OF_LIST,t1);}

/* k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2179,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2182,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8212,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[130]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8214,a[2]=t4,a[3]=((C_word)li118),tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:170: ##sys#er-transformer */
t6=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,t5);}

/* a8213 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8214,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8218,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:173: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[207],t2,lf[212]);}

/* k8216 in a8213 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8218,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8224,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:175: get-line-number */
t4=*((C_word*)lf[211]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k8222 in k8216 in a8213 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8224,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[5]);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?lf[208]:C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8233,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
/* chicken-syntax.scm:181: string-append */
t6=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,lf[209],t1,lf[210],t4);}
else{
t6=t5;
f_8233(2,t6,t4);}}

/* k8231 in k8222 in k8216 in a8213 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8233,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[61],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,lf[176]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8256,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t5,C_fix(1)))){
t6=t4;
f_8256(t6,C_i_cdr(((C_word*)t0)[2]));}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8273,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:189: ##sys#strip-syntax */
t7=*((C_word*)lf[146]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[4]);}}

/* k8271 in k8231 in k8222 in k8216 in a8213 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8273,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[56],t1);
t3=((C_word*)t0)[2];
f_8256(t3,C_a_i_list(&a,1,t2));}

/* k8254 in k8231 in k8222 in k8216 in a8213 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_8256(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8256,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,lf[119],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,4,lf[100],((C_word*)t0)[3],((C_word*)t0)[2],t3));}

/* k8210 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:168: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[207],C_SCHEME_END_OF_LIST,t1);}

/* k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2182,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8137,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8139,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:194: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8138 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8139(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8139,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8143,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:196: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[202],t2,lf[206]);}

/* k8141 in a8138 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8143,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_caddr(((C_word*)t0)[4]);
t4=C_i_cdddr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8155,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:200: r */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[121]);}

/* k8153 in k8141 in a8138 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8155(C_word c,C_word t0,C_word t1){
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
C_word ab[57],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8155,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[5]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t5=C_a_i_list(&a,2,lf[61],t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8178,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t7=t6;
f_8178(t7,C_a_i_cons(&a,2,lf[204],((C_word*)t0)[2]));}
else{
t7=C_a_i_list(&a,2,lf[90],lf[205]);
t8=C_a_i_list(&a,2,lf[118],t7);
t9=C_a_i_list(&a,2,lf[90],((C_word*)t0)[4]);
t10=C_a_i_list(&a,3,t8,t1,t9);
t11=t6;
f_8178(t11,C_a_i_cons(&a,2,lf[204],t10));}}

/* k8176 in k8153 in k8141 in a8138 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_8178(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8178,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[203],t1);
t3=C_a_i_list(&a,4,lf[100],((C_word*)t0)[5],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[38],((C_word*)t0)[2],t3));}

/* k8135 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:191: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[202],C_SCHEME_END_OF_LIST,t1);}

/* k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7471,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7473,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:214: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7473(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7473,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7477,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:216: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[200],t2,lf[201]);}

/* k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7477(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7477,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=*((C_word*)lf[54]+1);
t9=C_i_check_list_2(t2,lf[55]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7489,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8100,a[2]=t8,a[3]=t5,a[4]=t12,a[5]=t7,a[6]=((C_word)li115),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_8100(t14,t10,t2);}

/* map-loop165 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_8100(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8100,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8129,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g171180 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8127 in map-loop165 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8129(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8129,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8100(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8100(t6,((C_word*)t0)[3],t5);}}

/* k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7489(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7489,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7490,a[2]=((C_word*)t0)[5],a[3]=((C_word)li103),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[55]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7504,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8065,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li114),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_8065(t12,t8,((C_word*)t0)[4]);}

/* map-loop192 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_8065(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8065,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8094,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* g198207 */
t4=((C_word*)t0)[2];
f_7490(t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8092 in map-loop192 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8094(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8094,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8065(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8065(t6,((C_word*)t0)[3],t5);}}

/* k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7504(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7504,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7505,a[2]=((C_word*)t0)[6],a[3]=((C_word)li104),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[5],lf[55]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7519,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8030,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li113),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_8030(t12,t8,((C_word*)t0)[5]);}

/* map-loop220 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_8030(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8030,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8059,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* g226235 */
t4=((C_word*)t0)[2];
f_7505(t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8057 in map-loop220 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8059(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8059,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8030(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8030(t6,((C_word*)t0)[3],t5);}}

/* k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7519(C_word c,C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7519,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7526,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[185]+1);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=*((C_word*)lf[133]+1);
t13=C_i_check_list_2(((C_word*)t0)[2],lf[55]);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7849,a[2]=t7,a[3]=t4,a[4]=t6,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7995,a[2]=t12,a[3]=t9,a[4]=t16,a[5]=t11,a[6]=((C_word)li112),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_7995(t18,t14,((C_word*)t0)[2]);}

/* map-loop271 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7995(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7995,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8024,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g277286 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8022 in map-loop271 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_8024(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8024,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7995(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7995(t6,((C_word*)t0)[3],t5);}}

/* k7847 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7849,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[8],lf[55]);
t3=C_i_check_list_2(t1,lf[55]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7858,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=((C_word)li111),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_7946(t8,t4,((C_word*)t0)[8],t1);}

/* map-loop250 in k7847 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7946(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7946,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7979,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g256266 */
t9=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7977 in map-loop250 in k7847 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7979,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7959,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_7959(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_7959(t5,t4);}}

/* k7957 in k7977 in map-loop250 in k7847 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7959(C_word t0,C_word t1){
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
f_7946(t5,((C_word*)t0)[2],t3,t4);}

/* k7856 in k7847 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7858(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7858,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[185]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7862,a[2]=t6,a[3]=t3,a[4]=t5,a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=C_i_length(((C_word*)t0)[2]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7926,a[2]=t10,a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_7926(t12,t7,t8);}

/* loop in k7856 in k7847 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7926(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7926,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7940,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_difference(t2,C_fix(1));
/* chicken-syntax.scm:228: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k7938 in loop in k7856 in k7847 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7940,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_SCHEME_FALSE,t1));}

/* k7860 in k7856 in k7847 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7862(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7862,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[7],lf[55]);
t3=C_i_check_list_2(t1,lf[55]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7871,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=((C_word)li109),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_7873(t8,t4,((C_word*)t0)[7],t1);}

/* map-loop307 in k7860 in k7856 in k7847 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7873(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7873,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7906,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g313323 */
t9=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7904 in map-loop307 in k7860 in k7856 in k7847 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7906,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7886,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_7886(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_7886(t5,t4);}}

/* k7884 in k7904 in map-loop307 in k7860 in k7856 in k7847 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7886(C_word t0,C_word t1){
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
f_7873(t5,((C_word*)t0)[2],t3,t4);}

/* k7869 in k7860 in k7856 in k7847 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7526(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7526,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[55]);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[55]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7717,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7795,a[2]=t4,a[3]=t11,a[4]=t6,a[5]=((C_word)li108),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_7795(t13,t9,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* map-loop341 in k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7795(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7795,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[163],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7808,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t9,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t11=t10;
f_7808(t11,C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t12=t10;
f_7808(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7806 in map-loop341 in k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7808(C_word t0,C_word t1){
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
f_7795(t5,((C_word*)t0)[2],t3,t4);}

/* k7715 in k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7717(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7717,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7721,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[55]);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[55]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7736,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7746,a[2]=t4,a[3]=t11,a[4]=t6,a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_7746(t13,t9,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* map-loop377 in k7715 in k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7746(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7746,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[163],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7759,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t9,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t11=t10;
f_7759(t11,C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t12=t10;
f_7759(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7757 in map-loop377 in k7715 in k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7759(C_word t0,C_word t1){
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
f_7746(t5,((C_word*)t0)[2],t3,t4);}

/* k7734 in k7715 in k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7736,2,t0,t1);}
t2=C_a_i_list(&a,1,lf[176]);
t3=C_a_i_list(&a,1,t2);
/* ##sys#append */
t4=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k7719 in k7715 in k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7700 in k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7702(C_word c,C_word t0,C_word t1){
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
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7702,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[33],t2);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[7]);
t5=C_a_i_cons(&a,2,lf[33],t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7550,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_i_check_list_2(((C_word*)t0)[4],lf[55]);
t12=C_i_check_list_2(((C_word*)t0)[3],lf[55]);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7565,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7643,a[2]=t8,a[3]=t15,a[4]=t10,a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_7643(t17,t13,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* map-loop413 in k7700 in k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7643(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7643,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[163],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7656,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t9,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t11=t10;
f_7656(t11,C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t12=t10;
f_7656(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7654 in map-loop413 in k7700 in k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7656(C_word t0,C_word t1){
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
f_7643(t5,((C_word*)t0)[2],t3,t4);}

/* k7563 in k7700 in k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7565(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7569,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[55]);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[55]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7584,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7594,a[2]=t4,a[3]=t11,a[4]=t6,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_7594(t13,t9,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* map-loop449 in k7563 in k7700 in k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7594(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7594,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[163],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7607,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t9,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t11=t10;
f_7607(t11,C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t12=t10;
f_7607(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7605 in map-loop449 in k7563 in k7700 in k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7607(C_word t0,C_word t1){
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
f_7594(t5,((C_word*)t0)[2],t3,t4);}

/* k7582 in k7563 in k7700 in k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7584,2,t0,t1);}
t2=C_a_i_list(&a,1,lf[176]);
t3=C_a_i_list(&a,1,t2);
/* ##sys#append */
t4=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k7567 in k7563 in k7700 in k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7548 in k7700 in k7524 in k7517 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7550,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[33],t2);
t4=C_a_i_list(&a,4,lf[183],((C_word*)t0)[5],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[38],((C_word*)t0)[2],t4));}

/* g226 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7505(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7505,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7513,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:221: gensym */
t3=*((C_word*)lf[40]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k7511 in g226 in k7502 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:221: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* g198 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7490(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7490,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7498,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:220: gensym */
t3=*((C_word*)lf[40]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k7496 in g198 in k7487 in k7475 in a7472 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:220: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k7469 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:212: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[200],C_SCHEME_END_OF_LIST,t1);}

/* k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2188,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2191,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7365,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7367,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:246: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a7366 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7367(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7367,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7371,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:248: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[188],t2,lf[199]);}

/* k7369 in a7366 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7371,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[5]);
t3=C_i_cddr(((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,lf[49],t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7380,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:251: r */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[198]);}

/* k7378 in k7369 in a7366 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7380,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:252: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[197]);}

/* k7381 in k7378 in k7369 in a7366 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7383,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7386,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:253: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[196]);}

/* k7384 in k7381 in k7378 in k7369 in a7366 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7386(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7386,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7389,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t7,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7418,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,a[7]=t7,a[8]=t3,a[9]=t10,a[10]=((C_word)li101),tmp=(C_word)a,a+=11,tmp));
t12=((C_word*)t10)[1];
f_7418(t12,t8,((C_word*)t0)[2]);}

/* loop in k7384 in k7381 in k7378 in k7369 in a7366 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7418(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7418,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7431,a[2]=t1,a[3]=((C_word*)t0)[9],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7441,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=t2,a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:260: c */
t6=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7439 in loop in k7384 in k7381 in k7378 in k7369 in a7366 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7441,2,t0,t1);}
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[12],0,C_SCHEME_TRUE);
t3=C_slot(((C_word*)t0)[11],C_fix(1));
/* chicken-syntax.scm:264: loop */
t4=((C_word*)((C_word*)t0)[10])[1];
f_7418(t4,((C_word*)t0)[9],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7448,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:261: c */
t3=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k7446 in k7439 in loop in k7384 in k7381 in k7378 in k7369 in a7366 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7448,2,t0,t1);}
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[10],0,C_SCHEME_TRUE);
t3=C_slot(((C_word*)t0)[9],C_fix(1));
/* chicken-syntax.scm:264: loop */
t4=((C_word*)((C_word*)t0)[8])[1];
f_7418(t4,((C_word*)t0)[7],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7455,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:262: c */
t3=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k7453 in k7446 in k7439 in loop in k7384 in k7381 in k7378 in k7369 in a7366 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[6],0,C_SCHEME_TRUE);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
/* chicken-syntax.scm:264: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_7418(t4,((C_word*)t0)[3],t3);}
else{
t2=C_i_car(((C_word*)t0)[5]);
/* chicken-syntax.scm:263: ##sys#error */
t3=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],lf[195],t2);}}

/* k7429 in loop in k7384 in k7381 in k7378 in k7369 in a7366 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* chicken-syntax.scm:264: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7418(t3,((C_word*)t0)[2],t2);}

/* k7387 in k7384 in k7381 in k7378 in k7369 in a7366 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7389,2,t0,t1);}
if(C_truep(C_i_memq(lf[189],*((C_word*)lf[190]+1)))){
t2=(C_truep(((C_word*)((C_word*)t0)[6])[1])?((C_word*)((C_word*)t0)[5])[1]:C_SCHEME_FALSE);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_a_i_list(&a,2,lf[191],((C_word*)t0)[3]):(C_truep(((C_word*)((C_word*)t0)[6])[1])?C_a_i_list(&a,2,lf[192],((C_word*)t0)[3]):(C_truep(((C_word*)((C_word*)t0)[5])[1])?((C_word*)t0)[3]:lf[193]))));}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(((C_word*)((C_word*)t0)[2])[1])?((C_word*)t0)[3]:lf[194]));}}

/* k7363 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:244: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[188],C_SCHEME_END_OF_LIST,t1);}

/* k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2191,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6923,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6925,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:276: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6925(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6925,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6929,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:278: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[182],t2,lf[187]);}

/* k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6929,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6938,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:281: r */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[186]);}

/* k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6938(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6938,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[54]+1);
t7=C_i_check_list_2(((C_word*)t0)[5],lf[55]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7328,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li99),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_7328(t12,t8,((C_word*)t0)[5]);}

/* map-loop527 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7328(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7328,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7357,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g533542 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7355 in map-loop527 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7357(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7357,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7328(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7328(t6,((C_word*)t0)[3],t5);}}

/* k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6944(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6944,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[133]+1);
t7=C_i_check_list_2(((C_word*)t0)[6],lf[55]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6950,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7293,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li98),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_7293(t12,t8,((C_word*)t0)[6]);}

/* map-loop554 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7293(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7293,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7322,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g560569 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7320 in map-loop554 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7322(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7322,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7293(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7293(t6,((C_word*)t0)[3],t5);}}

/* k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6950(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6950,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6951,a[2]=((C_word*)t0)[6],a[3]=((C_word)li91),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[5],lf[55]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6965,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7258,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li97),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_7258(t12,t8,((C_word*)t0)[5]);}

/* map-loop581 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7258(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7258,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7287,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* g587596 */
t4=((C_word*)t0)[2];
f_6951(t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7285 in map-loop581 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7287(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7287,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7258(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7258(t6,((C_word*)t0)[3],t5);}}

/* k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6965(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6965,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6966,a[2]=((C_word*)t0)[7],a[3]=((C_word)li92),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[6],lf[55]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7223,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li96),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_7223(t12,t8,((C_word*)t0)[6]);}

/* map-loop609 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7223(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7223,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7252,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* g615624 */
t4=((C_word*)t0)[2];
f_6966(t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7250 in map-loop609 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7252(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7252,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7223(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7223(t6,((C_word*)t0)[3],t5);}}

/* k6978 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6980(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6987,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[185]+1);
t8=C_i_check_list_2(((C_word*)t0)[7],lf[55]);
t9=C_i_check_list_2(((C_word*)t0)[3],lf[55]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7113,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7174,a[2]=t7,a[3]=t4,a[4]=t12,a[5]=t6,a[6]=((C_word)li95),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_7174(t14,t10,((C_word*)t0)[7],((C_word*)t0)[3]);}

/* map-loop639 in k6978 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7174(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7174,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7207,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g645655 */
t9=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7205 in map-loop639 in k6978 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7207,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7187,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_7187(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_7187(t5,t4);}}

/* k7185 in k7205 in map-loop639 in k6978 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7187(C_word t0,C_word t1){
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
f_7174(t5,((C_word*)t0)[2],t3,t4);}

/* k7111 in k6978 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7113(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7113,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[185]+1);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[55]);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[55]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7123,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7125,a[2]=t6,a[3]=t3,a[4]=t11,a[5]=t5,a[6]=((C_word)li94),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7125(t13,t9,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* map-loop670 in k7111 in k6978 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7125(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7125,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7158,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g676686 */
t9=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7156 in map-loop670 in k7111 in k6978 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7158,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7138,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_7138(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_7138(t5,t4);}}

/* k7136 in k7156 in map-loop670 in k7111 in k6978 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7138(C_word t0,C_word t1){
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
f_7125(t5,((C_word*)t0)[2],t3,t4);}

/* k7121 in k7111 in k6978 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:287: ##sys#append */
t2=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6985 in k6978 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6987(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6987,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(((C_word*)t0)[6],lf[55]);
t7=C_i_check_list_2(((C_word*)t0)[5],lf[55]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7054,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7056,a[2]=t3,a[3]=t10,a[4]=t5,a[5]=((C_word)li93),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7056(t12,t8,((C_word*)t0)[6],((C_word*)t0)[5]);}

/* map-loop701 in k6985 in k6978 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7056(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[50],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7056,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,1,t6);
t9=C_a_i_list(&a,2,lf[184],t8);
t10=C_a_i_list(&a,1,t9);
t11=C_a_i_list(&a,2,t6,t7);
t12=C_a_i_list(&a,3,lf[163],t7,lf[184]);
t13=C_a_i_list(&a,4,lf[38],t10,t11,t12);
t14=C_a_i_cons(&a,2,t13,C_SCHEME_END_OF_LIST);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7069,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t14,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t16=t15;
f_7069(t16,C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t14));}
else{
t16=C_mutate(((C_word *)((C_word*)t0)[2])+1,t14);
t17=t15;
f_7069(t17,t16);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7067 in map-loop701 in k6985 in k6978 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_7069(C_word t0,C_word t1){
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
f_7056(t5,((C_word*)t0)[2],t3,t4);}

/* k7052 in k6985 in k6978 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_7054(C_word c,C_word t0,C_word t1){
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
C_word ab[51],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7054,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[33],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[5],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);
t7=C_a_i_cons(&a,2,lf[33],t6);
t8=C_a_i_list(&a,4,lf[183],((C_word*)t0)[5],t7,((C_word*)t0)[5]);
t9=C_a_i_list(&a,3,lf[38],t5,t8);
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_list(&a,3,lf[38],((C_word*)t0)[2],t9));}

/* g615 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6966(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6966,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6974,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:285: gensym */
t3=*((C_word*)lf[40]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6972 in g615 in k6963 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:285: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* g587 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6951(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6951,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6959,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:284: gensym */
t3=*((C_word*)lf[40]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6957 in g587 in k6948 in k6942 in k6936 in k6927 in a6924 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:284: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6921 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:274: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[182],C_SCHEME_END_OF_LIST,t1);}

/* k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2194,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6898,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6900,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:304: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a6899 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6900(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6900,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6904,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:306: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[180],t2,lf[181]);}

/* k6902 in a6899 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6904,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[3]);
t3=C_i_cddr(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,lf[49],t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[100],t2,t4));}

/* k6896 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:302: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[180],C_SCHEME_END_OF_LIST,t1);}

/* k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2197,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2200,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6869,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6871,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:312: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a6870 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6871(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6871,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6875,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:314: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[178],t2,lf[179]);}

/* k6873 in a6870 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6875,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,lf[176]);
t4=C_i_cddr(((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,lf[49],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,4,lf[100],t2,t3,t5));}

/* k6867 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:310: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[178],C_SCHEME_END_OF_LIST,t1);}

/* k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2200,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6695,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6697,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:321: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a6696 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6697(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6697,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6701,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:323: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[172],t2,lf[177]);}

/* k6699 in a6696 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6701(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6701,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[3]);
t3=C_i_caddr(((C_word*)t0)[3]);
if(C_truep(C_i_nullp(t2))){
t4=C_a_i_list(&a,3,lf[33],C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_list(&a,1,lf[176]);
t6=C_a_i_list(&a,3,lf[33],C_SCHEME_END_OF_LIST,t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[85],t4,t6));}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[163],t5,t3));}
else{
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[40]+1);
t10=C_i_check_list_2(t2,lf[55]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6747,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6828,a[2]=t9,a[3]=t6,a[4]=t13,a[5]=t8,a[6]=((C_word)li87),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_6828(t15,t11,t2);}}}

/* map-loop767 in k6699 in a6696 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6828(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6828,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6857,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g773782 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6855 in map-loop767 in k6699 in a6696 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6857(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6857,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6828(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6828(t6,((C_word*)t0)[3],t5);}}

/* k6745 in k6699 in a6696 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6747(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6747,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[33],C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[55]);
t8=C_i_check_list_2(t1,lf[55]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6777,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6779,a[2]=t4,a[3]=t11,a[4]=t6,a[5]=((C_word)li86),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_6779(t13,t9,((C_word*)t0)[3],t1);}

/* map-loop796 in k6745 in k6699 in a6696 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6779(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6779,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[163],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6792,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t9,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t11=t10;
f_6792(t11,C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t12=t10;
f_6792(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k6790 in map-loop796 in k6745 in k6699 in a6696 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6792(C_word t0,C_word t1){
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
f_6779(t5,((C_word*)t0)[2],t3,t4);}

/* k6775 in k6745 in k6699 in a6696 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6777,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=C_a_i_cons(&a,2,lf[33],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[85],((C_word*)t0)[2],t3));}

/* k6693 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:319: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[172],C_SCHEME_END_OF_LIST,t1);}

/* k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2203,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6633,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6635,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:345: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a6634 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6635(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6635,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6639,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:347: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[170],t2,lf[175]);}

/* k6637 in a6634 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6639,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_check_list_2(t2,lf[171]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6670,a[2]=t6,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_6670(t8,t4,t2);}

/* for-each-loop836 in k6637 in a6634 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6670(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6670,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6680,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[173]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6648,a[2]=t4,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:348: ##sys#current-module */
t7=*((C_word*)lf[174]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6646 in for-each-loop836 in k6637 in a6634 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g851852 */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6678 in for-each-loop836 in k6637 in a6634 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6670(t3,((C_word*)t0)[2],t2);}

/* k6655 in k6637 in a6634 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6657,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6664,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:349: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[172]);}

/* k6662 in k6655 in k6637 in a6634 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6664,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t1,t2));}

/* k6631 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:343: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[170],C_SCHEME_END_OF_LIST,t1);}

/* k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2207,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##sys#define-values-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2210,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6142,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6144,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:353: ##sys#er-transformer */
t6=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6144(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6144,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6148,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:355: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[167],t2,lf[169]);}

/* k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6148(C_word c,C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6148,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6156,a[2]=t5,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6187,a[2]=t7,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp));
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=*((C_word*)lf[54]+1);
t15=C_i_check_list_2(t2,lf[55]);
t16=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6232,a[2]=t5,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6596,a[2]=t14,a[3]=t11,a[4]=t18,a[5]=t13,a[6]=((C_word)li82),tmp=(C_word)a,a+=7,tmp));
t20=((C_word*)t18)[1];
f_6596(t20,t16,t2);}

/* map-loop880 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6596(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6596,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6625,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g886895 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6623 in map-loop880 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6625(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6625,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6596(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6596(t6,((C_word*)t0)[3],t5);}}

/* k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6232,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6235,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6556,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6556(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* loop in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6556(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6556,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6569,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t4))){
/* chicken-syntax.scm:373: append */
t6=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,t3);}
else{
if(C_truep(C_i_pairp(t4))){
/* chicken-syntax.scm:374: append* */
t6=((C_word*)((C_word*)t0)[2])[1];
f_6156(t6,t5,t4,t3);}
else{
t6=C_a_i_cons(&a,2,t4,t3);
t7=C_i_cdr(t2);
/* chicken-syntax.scm:376: loop */
t10=t1;
t11=t7;
t12=t6;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}}}

/* k6567 in loop in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[4]);
/* chicken-syntax.scm:376: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6556(t3,((C_word*)t0)[2],t2,t1);}

/* k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6235(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6235,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6236,a[2]=((C_word*)t0)[7],a[3]=((C_word)li73),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(t1,lf[55]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6254,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6521,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li80),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_6521(t12,t8,t1);}

/* map-loop917 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6521(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6521,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6550,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g923932 */
t5=((C_word*)t0)[2];
f_6236(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6548 in map-loop917 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6550(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6550,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6521(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6521(t6,((C_word*)t0)[3],t5);}}

/* k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6254,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6255,a[2]=t1,a[3]=((C_word)li74),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6266,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6475,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word)li79),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6475(t7,t3,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}

/* loop in k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6475(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6475,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* chicken-syntax.scm:381: reverse */
t4=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=C_i_car(t2);
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6515,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:385: map* */
t6=((C_word*)((C_word*)t0)[3])[1];
f_6187(t6,t5,((C_word*)t0)[2],t4);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6508,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:384: lookup */
t6=((C_word*)t0)[2];
f_6255(3,t6,t5,t4);}}}

/* k6506 in loop in k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6508,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[4]);
/* chicken-syntax.scm:386: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6475(t4,((C_word*)t0)[2],t3,t2);}

/* k6513 in loop in k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6515,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[4]);
/* chicken-syntax.scm:386: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6475(t4,((C_word*)t0)[2],t3,t2);}

/* k6264 in k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6266(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6266,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(((C_word*)t0)[7],lf[55]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6281,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6440,a[2]=t3,a[3]=t9,a[4]=t5,a[5]=((C_word)li78),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_6440(t11,t7,((C_word*)t0)[7]);}

/* map-loop1001 in k6264 in k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6440(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6440,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* k6279 in k6264 in k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6281,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6283,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li77),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_6283(t5,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* fold in k6279 in k6264 in k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6283(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6283,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6299,a[2]=((C_word*)t0)[5],a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[4],lf[55]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6313,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6315,a[2]=t9,a[3]=t6,a[4]=t13,a[5]=t8,a[6]=((C_word)li76),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_6315(t15,t11,((C_word*)t0)[4]);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6354,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(t4);
if(C_truep(C_i_pairp(t6))){
t7=C_i_cdar(t4);
t8=t5;
f_6354(t8,C_i_nullp(t7));}
else{
t7=t5;
f_6354(t7,C_SCHEME_FALSE);}}}

/* k6352 in fold in k6279 in k6264 in k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6354(C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6354,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caar(((C_word*)t0)[6]);
t3=C_i_car(((C_word*)t0)[5]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6365,a[2]=t5,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=C_i_cdr(((C_word*)t0)[3]);
t8=C_i_cdr(((C_word*)t0)[5]);
t9=C_i_cdr(((C_word*)t0)[6]);
/* chicken-syntax.scm:397: fold */
t10=((C_word*)((C_word*)t0)[2])[1];
f_6283(t10,t6,t7,t8,t9);}
else{
t2=C_i_car(((C_word*)t0)[5]);
t3=C_a_i_list(&a,3,lf[33],C_SCHEME_END_OF_LIST,t2);
t4=C_i_car(((C_word*)t0)[6]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6408,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_i_cdr(((C_word*)t0)[3]);
t7=C_i_cdr(((C_word*)t0)[5]);
t8=C_i_cdr(((C_word*)t0)[6]);
/* chicken-syntax.scm:403: fold */
t9=((C_word*)((C_word*)t0)[2])[1];
f_6283(t9,t5,t6,t7,t8);}}

/* k6406 in k6352 in fold in k6279 in k6264 in k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6408,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[33],((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[85],((C_word*)t0)[2],t2));}

/* k6363 in k6352 in fold in k6279 in k6264 in k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6365,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[38],((C_word*)t0)[2],t1));}

/* map-loop966 in fold in k6279 in k6264 in k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6315(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6315,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6344,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g972981 */
t5=((C_word*)t0)[2];
f_6299(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6342 in map-loop966 in fold in k6279 in k6264 in k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6344(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6344,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6315(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6315(t6,((C_word*)t0)[3],t5);}}

/* k6311 in fold in k6279 in k6264 in k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6313,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[38],t2));}

/* g972 in fold in k6279 in k6264 in k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6299(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6299,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6307,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:392: lookup */
t4=((C_word*)t0)[2];
f_6255(3,t4,t3,t2);}

/* k6305 in g972 in fold in k6279 in k6264 in k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6307,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* lookup in k6252 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6255(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6255,3,t0,t1,t2);}
t3=C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_cdr(t3));}

/* g923 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6236(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6236,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6244,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6248,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:377: gensym */
t5=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k6246 in g923 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:377: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6242 in g923 in k6233 in k6230 in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6244,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* map* in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6187(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6187,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6210,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
/* chicken-syntax.scm:366: proc */
t6=t2;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
/* chicken-syntax.scm:365: proc */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}}

/* k6208 in map* in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6210,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6214,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[4]);
/* chicken-syntax.scm:366: map* */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6187(t4,t2,((C_word*)t0)[2],t3);}

/* k6212 in k6208 in map* in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6214,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* append* in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6156(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6156,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6177,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(t2);
/* chicken-syntax.scm:362: append* */
t8=t5;
t9=t6;
t10=t3;
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}}

/* k6175 in append* in k6146 in a6143 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6177,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k6140 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:351: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[167],C_SCHEME_END_OF_LIST,t1);}

/* k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2210,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6085,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6087,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:407: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a6086 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6087(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6087,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6091,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:409: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[166],t2,lf[168]);}

/* k6089 in a6086 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6091,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6100,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:412: r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[167]);}

/* k6098 in k6089 in a6086 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6100,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6105,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_6105(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* fold in k6098 in k6089 in a6086 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6105(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6105,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[38],t3));}
else{
t3=C_i_car(t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6130,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_i_cdr(t2);
/* chicken-syntax.scm:417: fold */
t9=t5;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}

/* k6128 in fold in k6098 in k6089 in a6086 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6130,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k6083 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:405: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[166],C_SCHEME_END_OF_LIST,t1);}

/* k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2213,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2216,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5736,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5738,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:421: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5738(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5738,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5742,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:423: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[162],t2,lf[165]);}

/* k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5742(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5742,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5751,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_i_check_list_2(t2,lf[55]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6046,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6048,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=((C_word)li67),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_6048(t14,t10,t2);}

/* map-loop1053 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6048(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6048,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* k6044 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[39]+1),t1);}

/* k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5751(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5751,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5752,a[2]=((C_word*)t0)[5],a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(t1,lf[55]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5770,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6001,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li66),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_6001(t12,t8,t1);}

/* map-loop1081 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_6001(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6001,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6030,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g10871096 */
t5=((C_word*)t0)[2];
f_5752(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6028 in map-loop1081 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_6030(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6030,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6001(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6001(t6,((C_word*)t0)[3],t5);}}

/* k5768 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5770(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5770,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5771,a[2]=t1,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[5],lf[55]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5966,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=((C_word)li65),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_5966(t12,t8,((C_word*)t0)[5]);}

/* map-loop1113 in k5768 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5966(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5966,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,t3,lf[164]);
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

/* k5796 in k5768 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5798(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5798,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5802,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5804,a[2]=((C_word*)t0)[4],a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[55]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5929,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5931,a[2]=t7,a[3]=t4,a[4]=t11,a[5]=t6,a[6]=((C_word)li64),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_5931(t13,t9,((C_word*)t0)[3]);}

/* map-loop1140 in k5796 in k5768 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5931(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5931,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5960,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g11461155 */
t5=((C_word*)t0)[2];
f_5804(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5958 in map-loop1140 in k5796 in k5768 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5960(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5960,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5931(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5931(t6,((C_word*)t0)[3],t5);}}

/* k5927 in k5796 in k5768 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* g1146 in k5796 in k5768 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5804(C_word t0,C_word t1,C_word t2){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5804,NULL,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=C_a_i_list(&a,3,lf[33],C_SCHEME_END_OF_LIST,t3);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_i_car(t2);
t10=C_i_check_list_2(t9,lf[55]);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5830,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5886,a[2]=t6,a[3]=t13,a[4]=t8,a[5]=((C_word*)t0)[2],a[6]=((C_word)li62),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_5886(t15,t11,t9);}

/* map-loop1163 in g1146 in k5796 in k5768 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5886(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5886,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_5771(((C_word*)t0)[5],t3);
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

/* k5828 in g1146 in k5796 in k5768 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5830(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5830,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5832,a[2]=((C_word*)t0)[5],a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
t7=C_i_car(((C_word*)t0)[4]);
t8=C_i_check_list_2(t7,lf[55]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5851,a[2]=t3,a[3]=t11,a[4]=t5,a[5]=t6,a[6]=((C_word)li61),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_5851(t13,t9,t7);}

/* map-loop1189 in k5828 in g1146 in k5796 in k5768 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5851(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(12);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5851,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_5832(C_a_i(&a,9),((C_word*)t0)[5],t3);
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

/* k5847 in k5828 in g1146 in k5796 in k5768 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5849,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=C_a_i_cons(&a,2,lf[33],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[85],((C_word*)t0)[2],t3));}

/* g1195 in k5828 in g1146 in k5796 in k5768 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static C_word C_fcall f_5832(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=f_5771(((C_word*)t0)[2],t1);
return(C_a_i_list(&a,3,lf[163],t1,t2));}

/* k5800 in k5796 in k5768 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5802,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[38],t2));}

/* lookup in k5768 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static C_word C_fcall f_5771(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=C_i_assq(t1,((C_word*)t0)[2]);
return(C_i_cdr(t2));}

/* g1087 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5752(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5752,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5760,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5764,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:427: gensym */
t5=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5762 in g1087 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:427: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5758 in g1087 in k5749 in k5740 in a5737 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5760,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k5734 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:419: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[162],C_SCHEME_END_OF_LIST,t1);}

/* k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2216,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5732,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:441: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[159]);}

/* k5730 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5732,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[159],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5688,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5690,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:442: ##sys#er-transformer */
t6=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a5689 in k5730 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5690(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5690,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5694,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:444: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[160],t2,lf[161]);}

/* k5692 in a5689 in k5730 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5694,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5697,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:445: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[121]);}

/* k5695 in k5692 in a5689 in k5730 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5697,2,t0,t1);}
t2=C_i_caddr(((C_word*)t0)[4]);
t3=C_a_i_list(&a,3,lf[33],C_SCHEME_END_OF_LIST,t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5716,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:448: r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[159]);}

/* k5714 in k5695 in k5692 in a5689 in k5730 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5716,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[5]);
t3=C_a_i_list(&a,3,t1,((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,3,lf[33],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[85],((C_word*)t0)[2],t4));}

/* k5686 in k5730 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:439: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[160],((C_word*)t0)[2],t1);}

/* k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2219,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5576,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5578,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:452: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a5577 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5578(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5578,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5581,a[2]=t3,a[3]=t4,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5676,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_i_cdr(t2);
/* chicken-syntax.scm:469: quotify-proc */
t8=t5;
f_5581(t8,t6,t7,lf[155]);}

/* k5674 in a5577 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5676,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[158],t1));}

/* quotify-proc in a5577 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5581(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5581,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:456: ##sys#check-syntax */
t5=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t3,t2,lf[157]);}

/* k5583 in quotify-proc in a5577 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5585(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5585,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[5]);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_i_car(t2):t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_cdr(t2);
t7=C_i_cdr(((C_word*)t0)[5]);
t8=C_a_i_cons(&a,2,t6,t7);
t9=t5;
f_5594(t9,C_a_i_cons(&a,2,lf[33],t8));}
else{
t6=t5;
f_5594(t6,C_i_cadr(((C_word*)t0)[5]));}}

/* k5592 in k5583 in quotify-proc in a5577 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5594(C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5594,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5597,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_i_pairp(t1);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5606,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_5606(t6,t4);}
else{
t6=C_i_car(t1);
t7=C_eqp(lf[33],t6);
if(C_truep(t7)){
t8=t5;
f_5606(t8,C_SCHEME_FALSE);}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5622,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5626,a[2]=t8,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:464: r */
t10=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,lf[23]);}}}

/* k5624 in k5592 in k5583 in quotify-proc in a5577 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[4]);
/* chicken-syntax.scm:464: c */
t3=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* k5620 in k5592 in k5583 in quotify-proc in a5577 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5606(t2,C_i_not(t1));}

/* k5604 in k5592 in k5583 in quotify-proc in a5577 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5606(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5606,NULL,2,t0,t1);}
if(C_truep(t1)){
/* chicken-syntax.scm:465: syntax-error */
t2=*((C_word*)lf[42]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[155],lf[156],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]));}}

/* k5595 in k5592 in k5583 in quotify-proc in a5577 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5597,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* k5574 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:450: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[155],C_SCHEME_END_OF_LIST,t1);}

/* k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2222,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2225,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5475,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5477,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:473: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a5476 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5477(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5477,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5481,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:475: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[153],t2,lf[154]);}

/* k5479 in a5476 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5481,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[3]);
t3=C_i_cddr(((C_word*)t0)[3]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5492,a[2]=t5,a[3]=t3,a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_5492(t7,((C_word*)t0)[2],t2);}

/* fold in k5479 in a5476 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5492(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(14);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5492,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[49],((C_word*)t0)[3]));}
else{
t3=C_i_car(t2);
t4=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=C_i_car(t3);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5538,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:484: fold */
t15=t7;
t16=t4;
t1=t15;
t2=t16;
goto loop;}
else{
t6=C_i_car(t3);
t7=C_i_cadr(t3);
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_list(&a,1,t8);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5556,a[2]=t9,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:488: fold */
t15=t10;
t16=t4;
t1=t15;
t2=t16;
goto loop;}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5521,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:483: fold */
t15=t5;
t16=t4;
t1=t15;
t2=t16;
goto loop;}}}

/* k5519 in fold in k5479 in a5476 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5521,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[100],((C_word*)t0)[2],t1,C_SCHEME_FALSE));}

/* k5554 in fold in k5479 in a5476 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5556,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[100],((C_word*)t0)[4],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[38],((C_word*)t0)[2],t2));}

/* k5536 in fold in k5479 in a5476 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5538,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[100],((C_word*)t0)[2],t1,C_SCHEME_FALSE));}

/* k5473 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:471: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[153],C_SCHEME_END_OF_LIST,t1);}

/* k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2225,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2228,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5302,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5304,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:492: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5304(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5304,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5308,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:494: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[141],t2,lf[152]);}

/* k5306 in a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5308,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[5]);
t3=C_i_cddr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5317,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:497: r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[121]);}

/* k5315 in k5306 in a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:498: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[69]);}

/* k5318 in k5315 in k5306 in a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5323,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:499: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[151]);}

/* k5321 in k5318 in k5315 in k5306 in a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5323,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[7],((C_word*)t0)[6]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5334,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5336,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=t6,a[7]=((C_word)li51),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_5336(t8,t4,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* expand in k5321 in k5318 in k5315 in k5306 in a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5336(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5336,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[142]);}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(0));
t5=C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t5,a[8]=((C_word*)t0)[6],a[9]=t1,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:510: ##sys#check-syntax */
t7=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[141],t4,lf[148]);}
else{
/* chicken-syntax.scm:506: ##sys#syntax-error */
t4=*((C_word*)lf[149]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[141],lf[150],t2);}}}

/* k5359 in expand in k5321 in k5318 in k5315 in k5306 in a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5367,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t3=C_i_car(((C_word*)t0)[10]);
/* chicken-syntax.scm:511: c */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}

/* k5365 in k5359 in expand in k5321 in k5318 in k5315 in k5306 in a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5367(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5367,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5370,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:512: expand */
t3=((C_word*)((C_word*)t0)[6])[1];
f_5336(t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE);}
else{
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5383,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5390,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:517: ##sys#strip-syntax */
t4=*((C_word*)lf[146]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[8]);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5411,a[2]=((C_word*)t0)[3],a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp);
t7=C_i_car(((C_word*)t0)[8]);
t8=C_i_check_list_2(t7,lf[55]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5424,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5426,a[2]=t3,a[3]=t11,a[4]=t5,a[5]=t6,a[6]=((C_word)li50),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_5426(t13,t9,t7);}}}

/* map-loop1318 in k5365 in k5359 in expand in k5321 in k5318 in k5315 in k5306 in a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5426(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(12);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5426,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_5411(C_a_i(&a,9),((C_word*)t0)[5],t3);
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

/* k5422 in k5365 in k5359 in expand in k5321 in k5318 in k5315 in k5306 in a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5424,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=C_i_cdr(((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,lf[49],t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5405,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:525: expand */
t6=((C_word*)((C_word*)t0)[3])[1];
f_5336(t6,t5,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k5403 in k5422 in k5365 in k5359 in expand in k5321 in k5318 in k5315 in k5306 in a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5405,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[100],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* g1324 in k5365 in k5359 in expand in k5321 in k5318 in k5315 in k5306 in a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static C_word C_fcall f_5411(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_check;
return(C_a_i_list(&a,3,lf[147],((C_word*)t0)[2],t1));}

/* k5388 in k5365 in k5359 in expand in k5321 in k5318 in k5315 in k5306 in a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:515: ##sys#notice */
t2=*((C_word*)lf[144]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[145],t1);}

/* k5381 in k5365 in k5359 in expand in k5321 in k5318 in k5315 in k5306 in a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5383,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5386,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:518: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5336(t3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k5384 in k5381 in k5365 in k5359 in expand in k5321 in k5318 in k5315 in k5306 in a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[143]);}

/* k5368 in k5365 in k5359 in expand in k5321 in k5318 in k5315 in k5306 in a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5370,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[49],t2));}

/* k5332 in k5321 in k5318 in k5315 in k5306 in a5303 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5334,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[38],((C_word*)t0)[2],t1));}

/* k5300 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:490: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[141],C_SCHEME_END_OF_LIST,t1);}

/* k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2228,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2231,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5298,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:606: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[54]);}

/* k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5298,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[54],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5294,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:607: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[96]);}

/* k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5294,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[96],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4818,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4820,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:608: ##sys#er-transformer */
t6=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4820(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4820,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4824,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:610: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[127],t2,lf[140]);}

/* k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4824,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_caddr(((C_word*)t0)[4]);
t4=C_i_cdddr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4920,a[2]=((C_word*)t0)[3],a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5041,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:651: ##sys#check-syntax */
t7=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[127],t3,lf[139]);}

/* k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5041,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:652: ##sys#check-syntax */
t3=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[127],((C_word*)t0)[4],lf[138]);}

/* k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5044(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5044,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[54]+1);
t7=C_i_check_list_2(((C_word*)t0)[7],lf[55]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5249,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li47),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_5249(t12,t8,((C_word*)t0)[7]);}

/* map-loop1395 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5249(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5249,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5278,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g14011410 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5276 in map-loop1395 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5278(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5278,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5249(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5249(t6,((C_word*)t0)[3],t5);}}

/* k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5050(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5050,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5051,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5064,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(t1,lf[55]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5078,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5214,a[2]=t7,a[3]=t4,a[4]=t11,a[5]=t6,a[6]=((C_word)li46),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_5214(t13,t9,t1);}

/* map-loop1425 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5214(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5214,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5243,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g14311440 */
t5=((C_word*)t0)[2];
f_5064(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5241 in map-loop1425 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5243(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5243,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5214(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5214(t6,((C_word*)t0)[3],t5);}}

/* k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5078(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5078,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[133]+1);
t7=C_i_check_list_2(((C_word*)t0)[9],lf[55]);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5084,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5179,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li45),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_5179(t12,t8,((C_word*)t0)[9]);}

/* map-loop1453 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5179(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5179,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5208,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g14591468 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5206 in map-loop1453 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5208(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5208,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5179(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5179(t6,((C_word*)t0)[3],t5);}}

/* k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5084,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5087,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:664: r */
t3=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[137]);}

/* k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5087,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5090,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:667: r */
t3=((C_word*)t0)[10];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[136]);}

/* k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5090(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5090,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5091,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[9],lf[55]);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5105,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[8],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5144,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li44),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_5144(t12,t8,((C_word*)t0)[9]);}

/* map-loop1482 in k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5144(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5144,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5173,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g14881497 */
t5=((C_word*)t0)[2];
f_5091(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5171 in map-loop1482 in k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5173(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5173,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5144(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5144(t6,((C_word*)t0)[3],t5);}}

/* k5103 in k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5105,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5108,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[7];
t5=t1;
t6=((C_word*)t0)[2];
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4843,a[2]=t5,a[3]=t6,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:619: reverse */
t8=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}

/* k4841 in k5103 in k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4843,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4847,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:620: reverse */
t3=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4845 in k4841 in k5103 in k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4847,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4851,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:621: reverse */
t3=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4849 in k4845 in k4841 in k5103 in k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4851,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4853,a[2]=t3,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4853(t5,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* recur in k4849 in k4845 in k4841 in k5103 in k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_4853(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4853,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_nullp(t2))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=C_i_cdr(t2);
t7=C_i_car(t3);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4898,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t3,a[6]=t1,a[7]=t7,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:626: reverse */
t9=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t6);}}

/* k4896 in recur in k4849 in k4845 in k4841 in k5103 in k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4898,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4906,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4910,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:627: reverse */
t4=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k4908 in k4896 in recur in k4849 in k4845 in k4841 in k5103 in k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4910,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
/* ##sys#append */
t4=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k4904 in k4896 in recur in k4849 in k4845 in k4841 in k5103 in k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4906,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[9],t1);
t3=C_a_i_list(&a,3,lf[33],((C_word*)t0)[8],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[7],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4874,a[2]=t4,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(((C_word*)t0)[5]);
t7=C_i_cdr(((C_word*)t0)[4]);
t8=C_i_car(((C_word*)t0)[5]);
/* chicken-syntax.scm:628: recur */
t9=((C_word*)((C_word*)t0)[3])[1];
f_4853(t9,t5,((C_word*)t0)[2],t6,t7,t8);}

/* k4872 in k4904 in k4896 in recur in k4849 in k4845 in k4841 in k5103 in k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4874,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k5106 in k5103 in k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5108,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5111,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:674: make-if-tree */
t3=((C_word*)t0)[4];
f_4920(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],((C_word*)t0)[11]);}

/* k5109 in k5106 in k5103 in k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5118,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:677: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[135]);}

/* k5116 in k5109 in k5106 in k5103 in k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5118,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[9],((C_word*)t0)[8]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[6]);
t4=C_a_i_cons(&a,2,lf[33],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[4]);
t7=C_a_i_cons(&a,2,t2,t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,3,t1,t7,((C_word*)t0)[2]));}

/* g1488 in k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5091(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5091,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5099,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:669: prefix-sym */
f_5051(t3,lf[134],t2);}

/* k5097 in g1488 in k5088 in k5085 in k5082 in k5076 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:669: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* g1431 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5064(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5064,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5072,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:660: prefix-sym */
f_5051(t3,lf[132],t2);}

/* k5070 in g1431 in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:660: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* prefix-sym in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_5051(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5051,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5059,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5063,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:655: symbol->string */
t6=*((C_word*)lf[131]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* k5061 in prefix-sym in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:655: string-append */
t2=*((C_word*)lf[130]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5057 in prefix-sym in k5048 in k5042 in k5039 in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:655: string->symbol */
t2=*((C_word*)lf[129]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* make-if-tree in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_4920(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4920,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4926,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t5,a[6]=((C_word)li38),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_4926(t9,t1,t2,t3,C_SCHEME_END_OF_LIST);}

/* recur in make-if-tree in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_4926(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4926,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4968,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:639: r */
t6=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[115]);}
else{
t5=C_i_car(t2);
t6=C_a_i_list(&a,2,lf[115],((C_word*)t0)[5]);
t7=C_i_car(t3);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5038,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t3,a[6]=t2,a[7]=t6,a[8]=t1,a[9]=t5,a[10]=((C_word*)t0)[5],a[11]=t7,tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:644: reverse */
t9=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t4);}}

/* k5036 in recur in make-if-tree in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5038,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[11],t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:645: r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[54]);}

/* k5028 in k5036 in recur in make-if-tree in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5030,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[11]);
t3=C_a_i_list(&a,2,((C_word*)t0)[10],t2);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5022,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t3,a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:646: r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[96]);}

/* k5020 in k5028 in k5036 in recur in make-if-tree in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_5022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5022,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[11]);
t3=C_a_i_list(&a,2,((C_word*)t0)[11],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[10],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4994,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=C_i_cdr(((C_word*)t0)[6]);
t7=C_i_cdr(((C_word*)t0)[5]);
t8=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
/* chicken-syntax.scm:647: recur */
t9=((C_word*)((C_word*)t0)[2])[1];
f_4926(t9,t5,t6,t7,t8);}

/* k4992 in k5020 in k5028 in k5036 in recur in make-if-tree in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4994,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[38],((C_word*)t0)[5],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,4,lf[100],((C_word*)t0)[3],((C_word*)t0)[2],t2));}

/* k4966 in recur in make-if-tree in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4968,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[5]);
t3=C_a_i_list(&a,2,lf[61],t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4960,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:640: reverse */
t5=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k4958 in k4966 in recur in make-if-tree in k4822 in a4819 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4960,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_list(&a,2,lf[90],lf[128]);
t4=C_a_i_list(&a,2,lf[118],t3);
t5=C_a_i_list(&a,3,lf[119],t4,((C_word*)t0)[4]);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,4,lf[100],((C_word*)t0)[2],t2,t5));}

/* k4816 in k5292 in k5296 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:604: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[127],((C_word*)t0)[2],t1);}

/* k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2231,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2234,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4810,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:697: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[115]);}

/* k4808 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4810,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[115],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4806,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:698: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[54]);}

/* k4804 in k4808 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4806,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[54],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4802,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:699: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[96]);}

/* k4800 in k4804 in k4808 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4802,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[96],t1);
t3=C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4680,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4682,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:700: ##sys#er-transformer */
t6=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a4681 in k4800 in k4804 in k4808 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4682(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4682,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4686,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:702: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[123],t2,lf[126]);}

/* k4684 in a4681 in k4800 in k4804 in k4808 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4686,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4689,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:703: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[121]);}

/* k4687 in k4684 in a4681 in k4800 in k4804 in k4808 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4689,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4778,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:705: r */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[115]);}

/* k4776 in k4687 in k4684 in a4681 in k4800 in k4804 in k4808 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4778,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[6]);
t3=C_i_cddr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_4711(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_4711(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[125],t3);}}}

/* k4709 in k4776 in k4687 in k4684 in a4681 in k4800 in k4804 in k4808 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4747,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:707: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[115]);}

/* k4745 in k4709 in k4776 in k4687 in k4684 in a4681 in k4800 in k4804 in k4808 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4755,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:707: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[96]);}

/* k4753 in k4745 in k4709 in k4776 in k4687 in k4684 in a4681 in k4800 in k4804 in k4808 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4755,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[8]);
t3=C_a_i_list(&a,2,((C_word*)t0)[7],t2);
t4=C_a_i_list(&a,2,lf[61],t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4739,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:708: r */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[54]);}

/* k4737 in k4753 in k4745 in k4709 in k4776 in k4687 in k4684 in a4681 in k4800 in k4804 in k4808 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[60],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4739,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[7]);
t3=C_a_i_list(&a,2,lf[90],lf[124]);
t4=C_a_i_list(&a,2,lf[118],t3);
t5=C_a_i_list(&a,3,lf[119],t4,((C_word*)t0)[7]);
t6=C_a_i_list(&a,4,lf[100],((C_word*)t0)[6],t2,t5);
t7=C_a_i_list(&a,4,lf[100],((C_word*)t0)[5],((C_word*)t0)[4],t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,3,lf[38],((C_word*)t0)[2],t7));}

/* k4678 in k4800 in k4804 in k4808 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:695: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[123],((C_word*)t0)[2],t1);}

/* k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2234,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2237,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4672,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:731: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[115]);}

/* k4670 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4672,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[115],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4496,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4498,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:732: ##sys#er-transformer */
t6=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a4497 in k4670 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4498(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4498,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4502,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:734: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[116],t2,lf[122]);}

/* k4500 in a4497 in k4670 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4502,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_caddr(((C_word*)t0)[4]);
t4=C_i_cdddr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4514,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:738: r */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[115]);}

/* k4512 in k4500 in a4497 in k4670 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4517,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:739: r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[54]);}

/* k4515 in k4512 in k4500 in a4497 in k4670 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4517,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:740: r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[96]);}

/* k4518 in k4515 in k4512 in k4500 in a4497 in k4670 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4520,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4523,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:741: r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[121]);}

/* k4521 in k4518 in k4515 in k4512 in k4500 in a4497 in k4670 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4523,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[9]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4534,a[2]=t3,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4536,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li35),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_4536(t8,t4,t1,((C_word*)t0)[2]);}

/* loop in k4521 in k4518 in k4515 in k4512 in k4500 in a4497 in k4670 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_4536(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[51],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4536,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_list(&a,2,((C_word*)t0)[7],t2);
t5=C_a_i_list(&a,2,lf[61],t4);
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[6]);
t7=C_a_i_cons(&a,2,lf[38],t6);
t8=C_a_i_list(&a,2,lf[90],lf[117]);
t9=C_a_i_list(&a,2,lf[118],t8);
t10=C_a_i_list(&a,3,lf[119],t9,t2);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_list(&a,4,lf[100],t5,t7,t10));}
else{
t4=C_i_car(t3);
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4586,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:753: r */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[120]);}
else{
t5=C_a_i_list(&a,2,t4,t2);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[6]);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_cons(&a,2,lf[38],t7));}}}

/* k4584 in loop in k4521 in k4518 in k4515 in k4512 in k4500 in a4497 in k4670 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4586(C_word c,C_word t0,C_word t1){
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
C_word ab[76],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4586,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[9]);
t3=C_a_i_list(&a,2,((C_word*)t0)[8],((C_word*)t0)[7]);
t4=C_i_cadr(((C_word*)t0)[9]);
t5=C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[7]);
t6=C_a_i_list(&a,4,lf[100],t3,t4,t5);
t7=C_a_i_list(&a,2,t2,t6);
t8=C_a_i_list(&a,2,((C_word*)t0)[8],((C_word*)t0)[7]);
t9=C_a_i_list(&a,2,lf[90],C_SCHEME_END_OF_LIST);
t10=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[7]);
t11=C_a_i_list(&a,4,lf[100],t8,t9,t10);
t12=C_a_i_list(&a,2,t1,t11);
t13=C_a_i_list(&a,2,t7,t12);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4597,a[2]=t13,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t15=C_i_cdr(((C_word*)t0)[3]);
/* chicken-syntax.scm:760: loop */
t16=((C_word*)((C_word*)t0)[2])[1];
f_4536(t16,t14,t1,t15);}

/* k4595 in k4584 in loop in k4521 in k4518 in k4515 in k4512 in k4500 in a4497 in k4670 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4597,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[38],((C_word*)t0)[2],t1));}

/* k4532 in k4521 in k4518 in k4515 in k4512 in k4500 in a4497 in k4670 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4534,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[38],((C_word*)t0)[2],t1));}

/* k4494 in k4670 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:729: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[116],((C_word*)t0)[2],t1);}

/* k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2237,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2240,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4488,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:768: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[95]);}

/* k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4488,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[95],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4484,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:769: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[54]);}

/* k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4484,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[54],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4480,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:770: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[96]);}

/* k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4480,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[96],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4476,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:771: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[97]);}

/* k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4476,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[97],t1);
t3=C_a_i_list(&a,4,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4061,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4063,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:772: ##sys#er-transformer */
t6=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4063(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4063,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4067,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:774: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[98],t2,lf[114]);}

/* k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4067,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4069,a[2]=((C_word*)t0)[4],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4104,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:780: require */
t4=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[113]);}

/* k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4104(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4104,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_cdr(((C_word*)t0)[3]);
t8=C_i_check_list_2(t7,lf[55]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4421,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4423,a[2]=t4,a[3]=t11,a[4]=t6,a[5]=((C_word)li33),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_4423(t13,t9,t7);}

/* map-loop1580 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_4423(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4423,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4452,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4411,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:782: ##sys#decompose-lambda-list */
t7=*((C_word*)lf[105]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t5,t6);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a4410 in map-loop1580 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4411(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4411,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* k4450 in map-loop1580 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4452(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4452,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4423(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4423(t6,((C_word*)t0)[3],t5);}}

/* k4419 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[111]+1),t1);}

/* k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4107,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4110,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:786: genvars */
t3=((C_word*)t0)[2];
f_4069(t3,t2,t1);}

/* k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4110,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:787: r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[110]);}

/* k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4113,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:788: r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[109]);}

/* k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4116,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:789: r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[95]);}

/* k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4119,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4122,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:790: r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[97]);}

/* k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4122,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4125,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:791: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[54]);}

/* k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4125,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4128,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:792: r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[96]);}

/* k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4128,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4135,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:794: append */
t3=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],((C_word*)t0)[11]);}

/* k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4135,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[99],((C_word*)t0)[12]);
t3=C_a_i_list(&a,2,((C_word*)t0)[11],t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4147,a[2]=t1,a[3]=((C_word*)t0)[10],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4149,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word)li31),tmp=(C_word)a,a+=12,tmp);
t7=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:797: fold-right */
t8=*((C_word*)lf[106]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t5,t6,lf[107],t7);}

/* a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4149(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4149,4,t0,t1,t2,t3);}
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=t3,a[12]=((C_word*)t0)[10],a[13]=((C_word)li30),tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:799: ##sys#decompose-lambda-list */
t6=*((C_word*)lf[105]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t4,t5);}

/* a4158 in a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4159(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4159,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t4,a[11]=((C_word*)t0)[10],a[12]=t2,a[13]=((C_word*)t0)[11],a[14]=t1,a[15]=((C_word*)t0)[12],a[16]=t3,tmp=(C_word)a,a+=17,tmp);
t6=C_i_car(((C_word*)t0)[9]);
/* chicken-syntax.scm:802: ##sys#check-syntax */
t7=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[98],t6,lf[104]);}

/* k4161 in a4158 in a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4163,2,t0,t1);}
t2=C_fixnum_difference(((C_word*)t0)[16],((C_word*)t0)[15]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4173,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[16],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[10])){
t4=C_eqp(t2,C_fix(0));
t5=t3;
f_4173(t5,(C_truep(t4)?C_SCHEME_TRUE:C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[3],t2)));}
else{
t4=t3;
f_4173(t4,C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t2));}}

/* k4171 in k4161 in a4158 in a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_4173(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4173,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4177,a[2]=((C_word*)t0)[12],a[3]=t1,a[4]=((C_word*)t0)[13],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4179,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word)li26),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4189,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li29),tmp=(C_word)a,a+=10,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}

/* a4188 in k4171 in k4161 in a4158 in a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4189,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4193,a[2]=((C_word*)t0)[8],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4263,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li28),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_4263(t8,t4,t3,((C_word*)t0)[2]);}

/* build in a4188 in k4171 in k4161 in a4158 in a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_4263(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4263,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(((C_word*)t0)[7])){
t4=C_a_i_list(&a,2,((C_word*)t0)[7],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_i_cdr(((C_word*)t0)[6]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_cons(&a,2,lf[38],t7));}
else{
t4=C_i_cddr(((C_word*)t0)[6]);
if(C_truep(C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_cadr(((C_word*)t0)[6]));}
else{
t5=C_i_cdr(((C_word*)t0)[6]);
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_cons(&a,2,lf[38],t6));}}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4319,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4371,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:817: gensym */
t6=*((C_word*)lf[40]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k4369 in build in a4188 in k4171 in k4161 in a4158 in a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:817: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4317 in build in a4188 in k4171 in k4161 in a4158 in a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4319(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4319,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[7]);
t3=C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t6=C_a_i_list(&a,2,t1,t5);
t7=C_a_i_list(&a,2,t4,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4330,a[2]=t7,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t9=C_i_cdr(((C_word*)t0)[7]);
if(C_truep(C_i_pairp(t9))){
t10=C_i_cdr(((C_word*)t0)[7]);
/* chicken-syntax.scm:821: build */
t11=((C_word*)((C_word*)t0)[2])[1];
f_4263(t11,t8,t10,t1);}
else{
/* chicken-syntax.scm:822: build */
t10=((C_word*)((C_word*)t0)[2])[1];
f_4263(t10,t8,C_SCHEME_END_OF_LIST,t1);}}

/* k4328 in k4317 in build in a4188 in k4171 in k4161 in a4158 in a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4330,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[38],((C_word*)t0)[2],t1));}

/* k4191 in a4188 in k4171 in k4161 in a4158 in a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4193(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4193,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[103]+1);
t7=((C_word*)t0)[4];
t8=C_i_check_list_2(t7,lf[55]);
t9=C_i_check_list_2(((C_word*)t0)[2],lf[55]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4212,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4214,a[2]=t6,a[3]=t3,a[4]=t12,a[5]=t5,a[6]=((C_word)li27),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_4214(t14,t10,t7,((C_word*)t0)[2]);}}

/* map-loop1658 in k4191 in a4188 in k4171 in k4161 in a4158 in a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_4214(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4214,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4247,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g16641674 */
t9=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4245 in map-loop1658 in k4191 in a4188 in k4171 in k4161 in a4158 in a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4247,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4227,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_4227(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_4227(t5,t4);}}

/* k4225 in k4245 in map-loop1658 in k4191 in a4188 in k4171 in k4161 in a4158 in a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_4227(C_word t0,C_word t1){
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
f_4214(t5,((C_word*)t0)[2],t3,t4);}

/* k4210 in k4191 in a4188 in k4171 in k4161 in a4158 in a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4212,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[38],t1,((C_word*)t0)[2]));}

/* a4178 in k4171 in k4161 in a4158 in a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4179,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4187,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:810: take */
t3=*((C_word*)lf[102]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4185 in a4178 in k4171 in k4161 in a4158 in a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:810: split-at! */
t2=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4175 in k4171 in k4161 in a4158 in a4148 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4177,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,4,lf[100],((C_word*)t0)[3],t1,((C_word*)t0)[2]));}

/* k4145 in k4133 in k4126 in k4123 in k4120 in k4117 in k4114 in k4111 in k4108 in k4105 in k4102 in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4147,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[38],((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[33],((C_word*)t0)[2],t2));}

/* genvars in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_4069(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4069,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4075,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=((C_word)li24),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4075(t6,t1,C_fix(0));}

/* loop in genvars in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_4075(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4075,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4089,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4101,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:779: gensym */
t5=*((C_word*)lf[40]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k4099 in loop in genvars in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:779: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4087 in loop in genvars in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4089,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4093,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm:779: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4075(t4,t2,t3);}

/* k4091 in k4087 in loop in genvars in k4065 in a4062 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4093,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k4059 in k4474 in k4478 in k4482 in k4486 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:766: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[98],((C_word*)t0)[2],t1);}

/* k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2240,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3987,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3989,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:835: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a3988 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3989(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3989,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3993,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:837: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[89],t2,lf[94]);}

/* k3991 in a3988 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3993,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[3]);
t3=C_i_cddr(((C_word*)t0)[3]);
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4008,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_cons(&a,2,t2,t3);
/* chicken-syntax.scm:841: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[89],t5,lf[92]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4038,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_cons(&a,2,t2,t3);
/* chicken-syntax.scm:848: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[89],t5,lf[93]);}}

/* k4036 in k3991 in a3988 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4038,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[90],((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[91],t3));}

/* k4006 in k3991 in a3988 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_4008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4008,2,t0,t1);}
t2=C_slot(((C_word*)t0)[4],C_fix(0));
t3=C_a_i_list(&a,2,lf[90],t2);
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,lf[33],t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[91],t3,t6));}

/* k3985 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:833: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[89],C_SCHEME_END_OF_LIST,t1);}

/* k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2243,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3983,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:856: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[81]);}

/* k3981 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3983,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[81],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3979,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:857: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[82]);}

/* k3977 in k3981 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3979,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[82],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3868,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3870,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:858: ##sys#er-transformer */
t6=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a3869 in k3977 in k3981 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3870(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3870,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3874,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:860: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[76],t2,lf[88]);}

/* k3872 in a3869 in k3977 in k3981 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3874,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:861: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[87]);}

/* k3875 in k3872 in a3869 in k3977 in k3981 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3877,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3880,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:862: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[86]);}

/* k3878 in k3875 in k3872 in a3869 in k3977 in k3981 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3880,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3891,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:863: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[81]);}

/* k3889 in k3878 in k3875 in k3872 in a3869 in k3977 in k3981 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3891,2,t0,t1);}
t2=C_a_i_list(&a,1,((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3907,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:866: r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[82]);}

/* k3905 in k3889 in k3878 in k3875 in k3872 in a3869 in k3977 in k3981 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3907(C_word c,C_word t0,C_word t1){
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
C_word ab[111],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3907,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[7]);
t3=C_a_i_list(&a,1,t2);
t4=C_i_caddr(((C_word*)t0)[7]);
t5=C_a_i_list(&a,3,lf[33],C_SCHEME_END_OF_LIST,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[6],t5);
t7=C_a_i_list(&a,3,lf[33],t3,t6);
t8=C_i_cdddr(((C_word*)t0)[7]);
t9=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t8);
t10=C_a_i_cons(&a,2,lf[33],t9);
t11=C_a_i_list(&a,3,lf[83],lf[84],((C_word*)t0)[5]);
t12=C_a_i_list(&a,3,lf[33],C_SCHEME_END_OF_LIST,t11);
t13=C_a_i_list(&a,2,((C_word*)t0)[6],t12);
t14=C_a_i_list(&a,3,lf[33],((C_word*)t0)[5],t13);
t15=C_a_i_list(&a,3,lf[85],t10,t14);
t16=C_a_i_list(&a,3,lf[33],C_SCHEME_END_OF_LIST,t15);
t17=C_a_i_list(&a,3,t1,t7,t16);
t18=C_a_i_list(&a,3,lf[33],((C_word*)t0)[4],t17);
t19=C_a_i_list(&a,2,((C_word*)t0)[3],t18);
t20=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,C_a_i_list(&a,1,t19));}

/* k3866 in k3977 in k3981 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:854: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[76],((C_word*)t0)[2],t1);}

/* k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2246,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3860,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:878: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[69]);}

/* k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3860,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[69],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3856,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:879: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[70]);}

/* k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3856,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[70],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3558,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3560,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:880: ##sys#er-transformer */
t6=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3560(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3560,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3564,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:882: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[71],t2,lf[80]);}

/* k3562 in a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3564,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3567,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:883: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[79]);}

/* k3565 in k3562 in a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:884: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[78]);}

/* k3568 in k3565 in k3562 in a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3570,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3573,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:885: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[77]);}

/* k3571 in k3568 in k3565 in k3562 in a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3573,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:886: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[70]);}

/* k3574 in k3571 in k3568 in k3565 in k3562 in a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3576,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:887: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[69]);}

/* k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3579,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3581,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=((C_word*)t0)[8],a[7]=((C_word)li19),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3743,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:901: r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[76]);}

/* k3741 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[51],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3743,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[56],lf[72]);
t3=C_a_i_list(&a,3,lf[59],((C_word*)t0)[9],t2);
t4=C_a_i_list(&a,3,lf[73],((C_word*)t0)[9],C_fix(1));
t5=C_a_i_list(&a,3,((C_word*)t0)[8],t3,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[7],t5);
t7=C_a_i_list(&a,1,t6);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3763,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t7,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:904: r */
t9=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[75]);}

/* k3761 in k3741 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3763(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3763,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3767,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_cddr(((C_word*)t0)[7]);
t8=C_i_check_list_2(t7,lf[55]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3777,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3791,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t11,a[5]=t6,a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_3791(t13,t9,t7);}

/* map-loop1790 in k3761 in k3741 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_3791(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3791,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3820,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g17961805 */
t5=((C_word*)t0)[2];
f_3581(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3818 in map-loop1790 in k3761 in k3741 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3820(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3820,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3791(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3791(t6,((C_word*)t0)[3],t5);}}

/* k3775 in k3761 in k3741 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3777,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[74],((C_word*)t0)[4]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,1,t3);
/* ##sys#append */
t5=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t1,t4);}

/* k3765 in k3761 in k3741 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3767,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=C_a_i_list(&a,3,lf[38],((C_word*)t0)[6],t2);
t4=C_i_cadr(((C_word*)t0)[5]);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,4,((C_word*)t0)[3],((C_word*)t0)[2],t3,t4));}

/* parse-clause in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_3581(C_word t0,C_word t1,C_word t2){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3581,NULL,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=(C_truep(t4)?C_i_car(t2):C_SCHEME_FALSE);
t6=(C_truep(t5)?C_i_cadr(t2):C_i_car(t2));
t7=(C_truep(t5)?C_i_cddr(t2):C_i_cdr(t2));
if(C_truep(C_i_nullp(t6))){
if(C_truep(t5)){
t8=C_a_i_list(&a,2,t5,((C_word*)t0)[6]);
t9=C_a_i_list(&a,1,t8);
t10=C_a_i_cons(&a,2,t9,t7);
t11=C_a_i_cons(&a,2,lf[38],t10);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_a_i_list(&a,2,((C_word*)t0)[5],t11));}
else{
t8=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t7);
t9=C_a_i_cons(&a,2,lf[38],t8);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_list(&a,2,((C_word*)t0)[5],t9));}}
else{
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3665,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp);
t13=C_i_check_list_2(t6,lf[55]);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3679,a[2]=t1,a[3]=t7,a[4]=((C_word*)t0)[6],a[5]=t5,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3681,a[2]=t9,a[3]=t16,a[4]=t11,a[5]=t12,a[6]=((C_word)li18),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_3681(t18,t14,t6);}}

/* map-loop1754 in parse-clause in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_3681(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(18);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3681,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_3665(C_a_i(&a,15),((C_word*)t0)[5],t3);
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

/* k3677 in parse-clause in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3679(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3679,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
if(C_truep(((C_word*)t0)[5])){
t4=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t5=C_a_i_list(&a,1,t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[3]);
t7=C_a_i_cons(&a,2,lf[38],t6);
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,2,t3,t7));}
else{
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,lf[38],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,2,t3,t5));}}

/* g1760 in parse-clause in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in a3559 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static C_word C_fcall f_3665(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=C_a_i_list(&a,2,lf[56],t1);
return(C_a_i_list(&a,3,((C_word*)t0)[3],t2,((C_word*)t0)[2]));}

/* k3556 in k3854 in k3858 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:876: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[71],((C_word*)t0)[2],t1);}

/* k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2249,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2252,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3550,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:913: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[52]);}

/* k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3550,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[52],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3173,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3175,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:914: ##sys#er-transformer */
t6=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3175(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3175,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3179,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:916: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[53],t2,lf[68]);}

/* k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3179,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[5]);
t3=C_i_caddr(((C_word*)t0)[5]);
t4=C_i_cadddr(((C_word*)t0)[5]);
t5=C_i_cddddr(((C_word*)t0)[5]);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t2,a[7]=t5,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:924: r */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[29]);}

/* k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3194,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:925: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[52]);}

/* k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3197,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3203,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[6],a[9]=t2,a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:927: r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[67]);}

/* k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3203,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3206,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:928: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[66]);}

/* k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3206(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3206,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[54]+1);
t7=C_i_check_list_2(((C_word*)t0)[11],lf[55]);
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3212,a[2]=((C_word*)t0)[11],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],tmp=(C_word)a,a+=13,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3509,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li15),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_3509(t12,t8,((C_word*)t0)[11]);}

/* map-loop1834 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_3509(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3509,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3538,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g18401849 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3536 in map-loop1834 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3538(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3538,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3509(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3509(t6,((C_word*)t0)[3],t5);}}

/* k3210 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3212(C_word c,C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3212,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[56],((C_word*)t0)[12]);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3459,a[2]=((C_word*)t0)[11],a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(t1,lf[55]);
t9=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3472,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3474,a[2]=t4,a[3]=t11,a[4]=t6,a[5]=t7,a[6]=((C_word)li14),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_3474(t13,t9,t1);}

/* map-loop1863 in k3210 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_3474(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3474,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_3459(((C_word*)t0)[5],t3);
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

/* k3470 in k3210 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3472(C_word c,C_word t0,C_word t1){
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
C_word ab[62],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3472,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[12],t1);
t3=C_a_i_cons(&a,2,lf[58],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[11],((C_word*)t0)[10],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[9],((C_word*)t0)[8]);
t6=C_a_i_list(&a,2,lf[56],((C_word*)t0)[7]);
t7=C_a_i_list(&a,3,lf[59],((C_word*)t0)[8],t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[11],t5,t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3235,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3237,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[5],a[6]=t11,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li13),tmp=(C_word)a,a+=10,tmp));
t13=((C_word*)t11)[1];
f_3237(t13,t9,((C_word*)t0)[2],C_fix(1));}

/* loop in k3470 in k3210 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_3237(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3237,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_i_car(t2);
t5=C_i_cddr(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_caddr(t4):C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3256,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t6,a[8]=((C_word*)t0)[6],a[9]=t2,a[10]=t1,a[11]=t3,a[12]=t4,a[13]=((C_word*)t0)[7],a[14]=((C_word*)t0)[8],tmp=(C_word)a,a+=15,tmp);
if(C_truep(C_i_pairp(t7))){
t9=C_i_cdr(t7);
if(C_truep(C_i_pairp(t9))){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3415,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t11=C_i_car(t7);
/* chicken-syntax.scm:948: c */
t12=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,lf[65],t11);}
else{
t10=t8;
f_3256(t10,C_SCHEME_FALSE);}}
else{
t9=t8;
f_3256(t9,C_SCHEME_FALSE);}}}

/* k3413 in loop in k3470 in k3210 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_3256(t2,(C_truep(t1)?C_i_cadr(((C_word*)t0)[2]):C_SCHEME_FALSE));}

/* k3254 in loop in k3470 in k3210 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_3256(C_word t0,C_word t1){
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
C_word ab[128],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3256,NULL,2,t0,t1);}
t2=C_a_i_list(&a,1,((C_word*)t0)[14]);
t3=C_a_i_list(&a,2,lf[56],((C_word*)t0)[13]);
t4=C_i_cadr(((C_word*)t0)[12]);
t5=C_a_i_list(&a,2,lf[56],t4);
t6=C_a_i_list(&a,4,lf[60],((C_word*)t0)[14],t3,t5);
t7=C_a_i_list(&a,2,lf[61],t6);
t8=C_a_i_list(&a,3,lf[62],((C_word*)t0)[14],((C_word*)t0)[11]);
t9=C_a_i_list(&a,4,lf[33],t2,t7,t8);
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3262,a[2]=t9,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[12],a[8]=t1,a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[7])){
t11=C_a_i_list(&a,2,((C_word*)t0)[14],((C_word*)t0)[2]);
t12=C_a_i_list(&a,2,lf[56],((C_word*)t0)[13]);
t13=C_a_i_list(&a,2,lf[56],t1);
t14=C_a_i_list(&a,4,lf[60],((C_word*)t0)[14],t12,t13);
t15=C_a_i_list(&a,2,lf[61],t14);
t16=C_a_i_list(&a,4,lf[64],((C_word*)t0)[14],((C_word*)t0)[11],((C_word*)t0)[2]);
t17=t10;
f_3262(t17,C_a_i_list(&a,4,lf[33],t11,t15,t16));}
else{
t11=t10;
f_3262(t11,C_SCHEME_FALSE);}}

/* k3260 in k3254 in loop in k3470 in k3210 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_3262(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3262,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3269,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
t3=C_i_cadr(((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3335,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[8])){
t5=C_i_cadr(((C_word*)t0)[7]);
/* chicken-syntax.scm:969: c */
t6=((C_word*)t0)[6];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[8],t5);}
else{
t5=t4;
f_3335(2,t5,C_SCHEME_FALSE);}}

/* k3333 in k3260 in k3254 in loop in k3470 in k3210 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3335,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
f_3269(t3,C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[2],t2));}
else{
t2=((C_word*)t0)[4];
f_3269(t2,C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[6]));}}

/* k3267 in k3260 in k3254 in loop in k3470 in k3210 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_3269(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3269,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3273,a[2]=t1,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3277,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[8])){
if(C_truep(((C_word*)t0)[7])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3313,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_i_cadr(((C_word*)t0)[5]);
/* chicken-syntax.scm:974: c */
t6=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[7],t5);}
else{
t4=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[6]);
t5=t3;
f_3277(t5,C_a_i_list(&a,1,t4));}}
else{
t4=t3;
f_3277(t4,C_SCHEME_END_OF_LIST);}}

/* k3311 in k3267 in k3260 in k3254 in loop in k3470 in k3210 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3313,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_3277(t2,C_SCHEME_END_OF_LIST);}
else{
t2=C_a_i_list(&a,2,lf[63],lf[63]);
t3=C_a_i_list(&a,3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);
t4=((C_word*)t0)[4];
f_3277(t4,C_a_i_list(&a,1,t3));}}

/* k3275 in k3267 in k3260 in k3254 in loop in k3470 in k3210 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_3277(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3277,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3281,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[4]);
t4=C_fixnum_increase(((C_word*)t0)[3]);
/* chicken-syntax.scm:979: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3237(t5,t2,t3,t4);}

/* k3279 in k3275 in k3267 in k3260 in k3254 in loop in k3470 in k3210 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3271 in k3267 in k3260 in k3254 in loop in k3470 in k3210 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3273,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k3233 in k3470 in k3210 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3235,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[49],t3));}

/* g1869 in k3210 in k3204 in k3201 in k3195 in k3192 in k3177 in a3174 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static C_word C_fcall f_3459(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
if(C_truep(C_i_memq(t1,((C_word*)t0)[2]))){
t2=t1;
return(t2);}
else{
return(lf[57]);}}

/* k3171 in k3548 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:911: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[53],((C_word*)t0)[2],t1);}

/* k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2252,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3165,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:986: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[36]);}

/* k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3165,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[36],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2977,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2979,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:987: ##sys#er-transformer */
t6=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a2978 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2979(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2979,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2983,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:989: r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[46]);}

/* k2981 in a2978 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2983,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2986,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:990: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[45]);}

/* k2984 in k2981 in a2978 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2986,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:991: r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[36]);}

/* k2987 in k2984 in k2981 in a2978 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2989,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2992,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdr(((C_word*)t0)[7]);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:993: syntax-error */
t4=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[48],lf[51],((C_word*)t0)[7]);}
else{
t4=t2;
f_2992(2,t4,C_SCHEME_UNDEFINED);}}

/* k2990 in k2987 in k2984 in k2981 in a2978 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2992,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[8]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3001,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=t4,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li10),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_3001(t6,((C_word*)t0)[2],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k2990 in k2987 in k2984 in k2981 in a2978 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_3001(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3001,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3011,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=((C_word*)t0)[8],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:996: reverse */
t7=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3080,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=t4,a[9]=t3,a[10]=t2,tmp=(C_word)a,a+=11,tmp);
t7=C_i_car(t2);
/* chicken-syntax.scm:1005: c */
t8=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,((C_word*)t0)[2],t7);}}

/* k3078 in loop in k2990 in k2987 in k2984 in k2981 in a2978 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3080,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3083,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3102,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1006: gensym */
t4=*((C_word*)lf[40]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3108,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t3=C_i_car(((C_word*)t0)[10]);
/* chicken-syntax.scm:1008: c */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}}

/* k3106 in k3078 in loop in k2990 in k2987 in k2984 in k2981 in a2978 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3108,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[7]);
if(C_truep(C_i_nullp(t2))){
/* chicken-syntax.scm:1010: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3001(t3,((C_word*)t0)[5],C_SCHEME_END_OF_LIST,((C_word*)t0)[4],((C_word*)t0)[3],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1011: syntax-error */
t3=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[5],lf[48],lf[50],((C_word*)t0)[2]);}}
else{
t2=C_i_cdr(((C_word*)t0)[7]);
t3=C_i_car(((C_word*)t0)[7]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* chicken-syntax.scm:1014: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3001(t5,((C_word*)t0)[5],t2,((C_word*)t0)[4],t4,C_SCHEME_FALSE);}}

/* k3100 in k3078 in loop in k2990 in k2987 in k2984 in k2981 in a2978 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1006: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3081 in k3078 in loop in k2990 in k2987 in k2984 in k2981 in a2978 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3083,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[6]);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1007: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_3001(t5,((C_word*)t0)[2],t2,t3,t4,C_SCHEME_FALSE);}

/* k3009 in loop in k2990 in k2987 in k2984 in k2981 in a2978 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3011,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3014,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:997: reverse */
t3=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3012 in k3009 in loop in k2990 in k2987 in k2984 in k2981 in a2978 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3014,2,t0,t1);}
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3020,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3055,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:999: gensym */
t4=*((C_word*)lf[40]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_i_car(t1);
t3=C_a_i_list(&a,2,lf[49],t2);
t4=C_i_cdr(t1);
t5=C_a_i_cons(&a,2,t3,t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[33],((C_word*)t0)[3],t5));}}

/* k3053 in k3012 in k3009 in loop in k2990 in k2987 in k2984 in k2981 in a2978 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:999: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3018 in k3012 in k3009 in loop in k2990 in k2987 in k2984 in k2981 in a2978 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3020,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3027,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* ##sys#append */
t3=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k3025 in k3018 in k3012 in k3009 in loop in k2990 in k2987 in k2984 in k2981 in a2978 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3027,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3043,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_i_cdr(((C_word*)t0)[5]);
t5=C_a_i_list(&a,1,((C_word*)t0)[2]);
/* ##sys#append */
t6=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}

/* k3041 in k3025 in k3018 in k3012 in k3009 in loop in k2990 in k2987 in k2984 in k2981 in a2978 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_3043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3043,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[33],((C_word*)t0)[2],t3));}

/* k2975 in k3163 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:984: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[48],((C_word*)t0)[2],t1);}

/* k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2255,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2969,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1018: ##sys#primitive-alias */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[36]);}

/* k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2969,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[36],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2762,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2764,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1019: ##sys#er-transformer */
t6=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2764(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2764,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2768,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1021: r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[36]);}

/* k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1022: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[46]);}

/* k2769 in k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2774,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1023: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[45]);}

/* k2772 in k2769 in k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2774,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdr(((C_word*)t0)[7]);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1025: syntax-error */
t4=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[37],lf[44],((C_word*)t0)[7]);}
else{
t4=t2;
f_2777(2,t4,C_SCHEME_UNDEFINED);}}

/* k2775 in k2772 in k2769 in k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2777,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[8]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2786,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=t4,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li8),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_2786(t6,((C_word*)t0)[2],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k2775 in k2772 in k2769 in k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_2786(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2786,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep(C_i_nullp(t2))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2796,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=t4,a[5]=t1,a[6]=((C_word*)t0)[8],a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1028: reverse */
t8=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}
else{
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2869,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=t4,a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=t5,a[10]=t3,a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t8=C_i_car(t2);
/* chicken-syntax.scm:1038: c */
t9=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,((C_word*)t0)[2],t8);}}

/* k2867 in loop in k2775 in k2772 in k2769 in k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2869,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2872,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2891,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1039: gensym */
t4=*((C_word*)lf[40]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2897,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=C_i_car(((C_word*)t0)[11]);
/* chicken-syntax.scm:1041: c */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}}

/* k2895 in k2867 in loop in k2775 in k2772 in k2769 in k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2897,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[9]);
if(C_truep(C_i_nullp(t2))){
/* chicken-syntax.scm:1043: loop */
t3=((C_word*)((C_word*)t0)[8])[1];
f_2786(t3,((C_word*)t0)[7],C_SCHEME_END_OF_LIST,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1044: syntax-error */
t3=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[7],lf[37],lf[43],((C_word*)t0)[3]);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2916,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2943,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1048: gensym */
t4=*((C_word*)lf[40]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2941 in k2895 in k2867 in loop in k2775 in k2772 in k2769 in k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1048: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2914 in k2895 in k2867 in loop in k2775 in k2772 in k2769 in k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2916,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[7]);
t3=C_i_car(((C_word*)t0)[7]);
t4=C_a_i_list2(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[6]);
t6=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* chicken-syntax.scm:1049: loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2786(t7,((C_word*)t0)[3],t2,((C_word*)t0)[2],t5,t6,C_SCHEME_FALSE);}

/* k2889 in k2867 in loop in k2775 in k2772 in k2769 in k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1039: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2870 in k2867 in loop in k2775 in k2772 in k2769 in k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2872,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[7]);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* chicken-syntax.scm:1040: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2786(t5,((C_word*)t0)[3],t2,t3,((C_word*)t0)[2],t4,C_SCHEME_FALSE);}

/* k2794 in loop in k2775 in k2772 in k2769 in k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2796,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2799,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1029: reverse */
t3=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2797 in k2794 in loop in k2775 in k2772 in k2769 in k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2799,2,t0,t1);}
if(C_truep(((C_word*)t0)[7])){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2805,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2844,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1031: gensym */
t4=*((C_word*)lf[40]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_i_car(t1);
t3=C_i_cdr(t1);
t4=C_a_i_cons(&a,2,t2,t3);
t5=C_a_i_list(&a,3,lf[33],((C_word*)t0)[3],t4);
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[38],((C_word*)t0)[4],t5));}}

/* k2842 in k2797 in k2794 in loop in k2775 in k2772 in k2769 in k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1031: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2803 in k2797 in k2794 in loop in k2775 in k2772 in k2769 in k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2805,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2816,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* ##sys#append */
t3=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k2814 in k2803 in k2797 in k2794 in loop in k2775 in k2772 in k2769 in k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2816,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2832,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_i_cdr(((C_word*)t0)[6]);
t5=C_a_i_list(&a,1,((C_word*)t0)[2]);
/* ##sys#append */
t6=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}

/* k2830 in k2814 in k2803 in k2797 in k2794 in loop in k2775 in k2772 in k2769 in k2766 in a2763 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2832,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],t2);
t4=C_a_i_list(&a,3,lf[33],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[38],((C_word*)t0)[2],t4));}

/* k2760 in k2967 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1016: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[37],((C_word*)t0)[2],t1);}

/* k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2258,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2689,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2691,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1059: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2690 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2691(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2691,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2695,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1061: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[32],t2,lf[35]);}

/* k2693 in a2690 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2695(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2695,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[3]);
if(C_truep(C_i_pairp(t2))){
t3=C_i_car(t2);
t4=C_i_cdr(t2);
t5=C_i_cddr(((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,lf[33],t6);
t8=C_a_i_list(&a,2,t3,t7);
t9=C_a_i_list(&a,1,t8);
t10=C_i_car(t2);
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_list(&a,3,lf[34],t9,t10));}
else{
t3=C_i_cddr(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[34],t5,t2));}}

/* k2687 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1057: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[32],C_SCHEME_END_OF_LIST,t1);}

/* k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2261,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2660,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2662,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1075: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2661 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2662(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2662,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2666,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1077: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[28],t2,lf[31]);}

/* k2664 in a2661 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2666,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2673,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1078: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[30]);}

/* k2671 in k2664 in a2661 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2673,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2681,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1079: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[29]);}

/* k2679 in k2671 in k2664 in a2661 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2681,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,((C_word*)t0)[2],t3));}

/* k2658 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1073: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[28],C_SCHEME_END_OF_LIST,t1);}

/* k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2643,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2645,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1086: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2644 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2645(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2645,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2649,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1088: ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[24],t2,lf[27]);}

/* k2647 in a2644 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2649,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[25],t2,C_SCHEME_TRUE));}

/* k2641 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1084: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[24],C_SCHEME_END_OF_LIST,t1);}

/* k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2267,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2431,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2433,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1096: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2432 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2433(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2433,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2443,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=C_i_cdr(t5);
t8=t6;
f_2443(t8,C_eqp(t7,C_SCHEME_END_OF_LIST));}
else{
t7=t6;
f_2443(t7,C_SCHEME_FALSE);}}

/* k2441 in a2432 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_2443(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2443,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2453,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* rename20212026 */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[22]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=C_i_car(((C_word*)t0)[5]);
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2582,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=C_i_cdr(((C_word*)t0)[5]);
/* ##sys#list? */
t6=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t4=t2;
f_2467(2,t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_2467(2,t3,C_SCHEME_FALSE);}}}

/* k2580 in k2441 in a2432 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2582,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* ##sys#length */
t4=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[2];
f_2467(2,t2,C_SCHEME_FALSE);}}

/* k2583 in k2580 in k2441 in a2432 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2585,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2591,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#>= */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_fix(0));}

/* k2589 in k2583 in k2580 in k2441 in a2432 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2591,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[4]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2600,a[2]=t4,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2600(t6,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_2467(2,t2,C_SCHEME_FALSE);}}

/* loop2018 in k2589 in k2583 in k2580 in k2441 in a2432 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_2600(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2600,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2607,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* ##sys#= */
t5=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,C_fix(0));}

/* k2605 in loop2018 in k2589 in k2583 in k2580 in k2441 in a2432 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2607,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[4],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2621,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#+ */
t4=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],C_fix(-1));}}

/* k2619 in k2605 in loop2018 in k2589 in k2583 in k2580 in k2441 in a2432 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* loop20182042 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2600(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2465 in k2441 in a2432 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2467(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2467,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_i_car(t2);
t4=C_i_car(((C_word*)t0)[5]);
t5=C_i_cdr(t4);
t6=C_i_cdr(((C_word*)t0)[5]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2483,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t6,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* rename20212026 */
t8=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[21]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2517,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=C_i_cdr(((C_word*)t0)[5]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_cdr(t3);
t5=t2;
f_2517(t5,C_eqp(t4,C_SCHEME_END_OF_LIST));}
else{
t4=t2;
f_2517(t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_2517(t3,C_SCHEME_FALSE);}}}

/* k2515 in k2465 in k2441 in a2432 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_2517(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2517,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[5]);
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2530,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* rename20212026 */
t6=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[22]);}
else{
/* ##sys#syntax-rules-mismatch */
t2=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k2528 in k2515 in k2465 in k2441 in a2432 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2530,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t1,t3));}

/* k2481 in k2465 in k2441 in a2432 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2499,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* rename20212026 */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[23]);}

/* k2497 in k2481 in k2465 in k2441 in a2432 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2499,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}

/* k2451 in k2441 in a2432 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2453,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t1,t3));}

/* k2429 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1094: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[21],C_SCHEME_END_OF_LIST,t1);}

/* k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2270,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2283,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2285,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1107: ##sys#er-transformer */
t5=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2284 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2285(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2285,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2295,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2324,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2380,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t9=C_i_car(t5);
/* ##sys#list? */
t10=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
t7=t6;
f_2295(2,t7,C_SCHEME_FALSE);}}

/* k2378 in a2284 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2380,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* ##sys#length */
t4=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[2];
f_2324(2,t2,C_SCHEME_FALSE);}}

/* k2381 in k2378 in a2284 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2383,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2389,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#>= */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_fix(0));}

/* k2387 in k2381 in k2378 in a2284 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2389,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[4]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2398,a[2]=t4,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2398(t6,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_2324(2,t2,C_SCHEME_FALSE);}}

/* loop2068 in k2387 in k2381 in k2378 in a2284 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_2398(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2398,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2405,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* ##sys#= */
t5=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,C_fix(0));}

/* k2403 in loop2068 in k2387 in k2381 in k2378 in a2284 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2405,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[4],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2419,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#+ */
t4=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],C_fix(-1));}}

/* k2417 in k2403 in loop2068 in k2387 in k2381 in k2378 in a2284 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* loop20682088 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2398(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2322 in a2284 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2324,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* ##sys#list? */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[2];
f_2295(2,t2,C_SCHEME_FALSE);}}

/* k2328 in k2322 in a2284 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2330,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* ##sys#length */
t4=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[2];
f_2295(2,t2,C_SCHEME_FALSE);}}

/* k2331 in k2328 in k2322 in a2284 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2339,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#>= */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_fix(0));}

/* k2337 in k2331 in k2328 in k2322 in a2284 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2339,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[4]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2348,a[2]=t4,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2348(t6,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_2295(2,t2,C_SCHEME_FALSE);}}

/* loop2068 in k2337 in k2331 in k2328 in k2322 in a2284 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_fcall f_2348(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2348,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2355,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* ##sys#= */
t5=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,C_fix(0));}

/* k2353 in loop2068 in k2337 in k2331 in k2328 in k2322 in a2284 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2355,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[4],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2369,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#+ */
t4=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],C_fix(-1));}}

/* k2367 in k2353 in loop2068 in k2337 in k2331 in k2328 in k2322 in a2284 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* loop20682098 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2348(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2293 in a2284 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2295,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2308,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* rename20712076 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[13]);}
else{
/* ##sys#syntax-rules-mismatch */
t2=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k2306 in k2293 in a2284 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2308,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t1,t2));}

/* k2281 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm:1105: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[12],C_SCHEME_END_OF_LIST,t1);}

/* k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2276,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1113: ##sys#macro-subset */
t3=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],*((C_word*)lf[10]+1));}

/* k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2276,2,t0,t1);}
t2=C_mutate((C_word*)lf[1]+1 /* (set! ##sys#chicken-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2279,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1118: register-feature! */
t4=*((C_word*)lf[2]+1);
((C_proc8)(void*)(*((C_word*)t4+1)))(8,t4,t3,lf[3],lf[4],lf[5],lf[6],lf[7],lf[8]);}

/* k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2223 in k2220 in k2217 in k2214 in k2211 in k2208 in k2205 in k2201 in k2198 in k2195 in k2192 in k2189 in k2186 in k2183 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2155 */
static void C_ccall f_2279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[574] = {
{"toplevel:chicken_2dsyntax_2escm",(void*)C_chicken_2dsyntax_toplevel},
{"f_2157:chicken_2dsyntax_2escm",(void*)f_2157},
{"f_2161:chicken_2dsyntax_2escm",(void*)f_2161},
{"f_8831:chicken_2dsyntax_2escm",(void*)f_8831},
{"f_8835:chicken_2dsyntax_2escm",(void*)f_8835},
{"f_8829:chicken_2dsyntax_2escm",(void*)f_8829},
{"f_2164:chicken_2dsyntax_2escm",(void*)f_2164},
{"f_8469:chicken_2dsyntax_2escm",(void*)f_8469},
{"f_8473:chicken_2dsyntax_2escm",(void*)f_8473},
{"f_8482:chicken_2dsyntax_2escm",(void*)f_8482},
{"f_8485:chicken_2dsyntax_2escm",(void*)f_8485},
{"f_8488:chicken_2dsyntax_2escm",(void*)f_8488},
{"f_8491:chicken_2dsyntax_2escm",(void*)f_8491},
{"f_8792:chicken_2dsyntax_2escm",(void*)f_8792},
{"f_8821:chicken_2dsyntax_2escm",(void*)f_8821},
{"f_8557:chicken_2dsyntax_2escm",(void*)f_8557},
{"f_8790:chicken_2dsyntax_2escm",(void*)f_8790},
{"f_8770:chicken_2dsyntax_2escm",(void*)f_8770},
{"f_8766:chicken_2dsyntax_2escm",(void*)f_8766},
{"f_8746:chicken_2dsyntax_2escm",(void*)f_8746},
{"f_8582:chicken_2dsyntax_2escm",(void*)f_8582},
{"f_8598:chicken_2dsyntax_2escm",(void*)f_8598},
{"f_8731:chicken_2dsyntax_2escm",(void*)f_8731},
{"f_8601:chicken_2dsyntax_2escm",(void*)f_8601},
{"f_8727:chicken_2dsyntax_2escm",(void*)f_8727},
{"f_8604:chicken_2dsyntax_2escm",(void*)f_8604},
{"f_8634:chicken_2dsyntax_2escm",(void*)f_8634},
{"f_8630:chicken_2dsyntax_2escm",(void*)f_8630},
{"f_8618:chicken_2dsyntax_2escm",(void*)f_8618},
{"f_8580:chicken_2dsyntax_2escm",(void*)f_8580},
{"f_8492:chicken_2dsyntax_2escm",(void*)f_8492},
{"f_8520:chicken_2dsyntax_2escm",(void*)f_8520},
{"f_8467:chicken_2dsyntax_2escm",(void*)f_8467},
{"f_2167:chicken_2dsyntax_2escm",(void*)f_2167},
{"f_8372:chicken_2dsyntax_2escm",(void*)f_8372},
{"f_8376:chicken_2dsyntax_2escm",(void*)f_8376},
{"f_8400:chicken_2dsyntax_2escm",(void*)f_8400},
{"f_8415:chicken_2dsyntax_2escm",(void*)f_8415},
{"f_8370:chicken_2dsyntax_2escm",(void*)f_8370},
{"f_2170:chicken_2dsyntax_2escm",(void*)f_2170},
{"f_8323:chicken_2dsyntax_2escm",(void*)f_8323},
{"f_8327:chicken_2dsyntax_2escm",(void*)f_8327},
{"f_8321:chicken_2dsyntax_2escm",(void*)f_8321},
{"f_2173:chicken_2dsyntax_2escm",(void*)f_2173},
{"f_8309:chicken_2dsyntax_2escm",(void*)f_8309},
{"f_8307:chicken_2dsyntax_2escm",(void*)f_8307},
{"f_2176:chicken_2dsyntax_2escm",(void*)f_2176},
{"f_8292:chicken_2dsyntax_2escm",(void*)f_8292},
{"f_8296:chicken_2dsyntax_2escm",(void*)f_8296},
{"f_8290:chicken_2dsyntax_2escm",(void*)f_8290},
{"f_2179:chicken_2dsyntax_2escm",(void*)f_2179},
{"f_8214:chicken_2dsyntax_2escm",(void*)f_8214},
{"f_8218:chicken_2dsyntax_2escm",(void*)f_8218},
{"f_8224:chicken_2dsyntax_2escm",(void*)f_8224},
{"f_8233:chicken_2dsyntax_2escm",(void*)f_8233},
{"f_8273:chicken_2dsyntax_2escm",(void*)f_8273},
{"f_8256:chicken_2dsyntax_2escm",(void*)f_8256},
{"f_8212:chicken_2dsyntax_2escm",(void*)f_8212},
{"f_2182:chicken_2dsyntax_2escm",(void*)f_2182},
{"f_8139:chicken_2dsyntax_2escm",(void*)f_8139},
{"f_8143:chicken_2dsyntax_2escm",(void*)f_8143},
{"f_8155:chicken_2dsyntax_2escm",(void*)f_8155},
{"f_8178:chicken_2dsyntax_2escm",(void*)f_8178},
{"f_8137:chicken_2dsyntax_2escm",(void*)f_8137},
{"f_2185:chicken_2dsyntax_2escm",(void*)f_2185},
{"f_7473:chicken_2dsyntax_2escm",(void*)f_7473},
{"f_7477:chicken_2dsyntax_2escm",(void*)f_7477},
{"f_8100:chicken_2dsyntax_2escm",(void*)f_8100},
{"f_8129:chicken_2dsyntax_2escm",(void*)f_8129},
{"f_7489:chicken_2dsyntax_2escm",(void*)f_7489},
{"f_8065:chicken_2dsyntax_2escm",(void*)f_8065},
{"f_8094:chicken_2dsyntax_2escm",(void*)f_8094},
{"f_7504:chicken_2dsyntax_2escm",(void*)f_7504},
{"f_8030:chicken_2dsyntax_2escm",(void*)f_8030},
{"f_8059:chicken_2dsyntax_2escm",(void*)f_8059},
{"f_7519:chicken_2dsyntax_2escm",(void*)f_7519},
{"f_7995:chicken_2dsyntax_2escm",(void*)f_7995},
{"f_8024:chicken_2dsyntax_2escm",(void*)f_8024},
{"f_7849:chicken_2dsyntax_2escm",(void*)f_7849},
{"f_7946:chicken_2dsyntax_2escm",(void*)f_7946},
{"f_7979:chicken_2dsyntax_2escm",(void*)f_7979},
{"f_7959:chicken_2dsyntax_2escm",(void*)f_7959},
{"f_7858:chicken_2dsyntax_2escm",(void*)f_7858},
{"f_7926:chicken_2dsyntax_2escm",(void*)f_7926},
{"f_7940:chicken_2dsyntax_2escm",(void*)f_7940},
{"f_7862:chicken_2dsyntax_2escm",(void*)f_7862},
{"f_7873:chicken_2dsyntax_2escm",(void*)f_7873},
{"f_7906:chicken_2dsyntax_2escm",(void*)f_7906},
{"f_7886:chicken_2dsyntax_2escm",(void*)f_7886},
{"f_7871:chicken_2dsyntax_2escm",(void*)f_7871},
{"f_7526:chicken_2dsyntax_2escm",(void*)f_7526},
{"f_7795:chicken_2dsyntax_2escm",(void*)f_7795},
{"f_7808:chicken_2dsyntax_2escm",(void*)f_7808},
{"f_7717:chicken_2dsyntax_2escm",(void*)f_7717},
{"f_7746:chicken_2dsyntax_2escm",(void*)f_7746},
{"f_7759:chicken_2dsyntax_2escm",(void*)f_7759},
{"f_7736:chicken_2dsyntax_2escm",(void*)f_7736},
{"f_7721:chicken_2dsyntax_2escm",(void*)f_7721},
{"f_7702:chicken_2dsyntax_2escm",(void*)f_7702},
{"f_7643:chicken_2dsyntax_2escm",(void*)f_7643},
{"f_7656:chicken_2dsyntax_2escm",(void*)f_7656},
{"f_7565:chicken_2dsyntax_2escm",(void*)f_7565},
{"f_7594:chicken_2dsyntax_2escm",(void*)f_7594},
{"f_7607:chicken_2dsyntax_2escm",(void*)f_7607},
{"f_7584:chicken_2dsyntax_2escm",(void*)f_7584},
{"f_7569:chicken_2dsyntax_2escm",(void*)f_7569},
{"f_7550:chicken_2dsyntax_2escm",(void*)f_7550},
{"f_7505:chicken_2dsyntax_2escm",(void*)f_7505},
{"f_7513:chicken_2dsyntax_2escm",(void*)f_7513},
{"f_7490:chicken_2dsyntax_2escm",(void*)f_7490},
{"f_7498:chicken_2dsyntax_2escm",(void*)f_7498},
{"f_7471:chicken_2dsyntax_2escm",(void*)f_7471},
{"f_2188:chicken_2dsyntax_2escm",(void*)f_2188},
{"f_7367:chicken_2dsyntax_2escm",(void*)f_7367},
{"f_7371:chicken_2dsyntax_2escm",(void*)f_7371},
{"f_7380:chicken_2dsyntax_2escm",(void*)f_7380},
{"f_7383:chicken_2dsyntax_2escm",(void*)f_7383},
{"f_7386:chicken_2dsyntax_2escm",(void*)f_7386},
{"f_7418:chicken_2dsyntax_2escm",(void*)f_7418},
{"f_7441:chicken_2dsyntax_2escm",(void*)f_7441},
{"f_7448:chicken_2dsyntax_2escm",(void*)f_7448},
{"f_7455:chicken_2dsyntax_2escm",(void*)f_7455},
{"f_7431:chicken_2dsyntax_2escm",(void*)f_7431},
{"f_7389:chicken_2dsyntax_2escm",(void*)f_7389},
{"f_7365:chicken_2dsyntax_2escm",(void*)f_7365},
{"f_2191:chicken_2dsyntax_2escm",(void*)f_2191},
{"f_6925:chicken_2dsyntax_2escm",(void*)f_6925},
{"f_6929:chicken_2dsyntax_2escm",(void*)f_6929},
{"f_6938:chicken_2dsyntax_2escm",(void*)f_6938},
{"f_7328:chicken_2dsyntax_2escm",(void*)f_7328},
{"f_7357:chicken_2dsyntax_2escm",(void*)f_7357},
{"f_6944:chicken_2dsyntax_2escm",(void*)f_6944},
{"f_7293:chicken_2dsyntax_2escm",(void*)f_7293},
{"f_7322:chicken_2dsyntax_2escm",(void*)f_7322},
{"f_6950:chicken_2dsyntax_2escm",(void*)f_6950},
{"f_7258:chicken_2dsyntax_2escm",(void*)f_7258},
{"f_7287:chicken_2dsyntax_2escm",(void*)f_7287},
{"f_6965:chicken_2dsyntax_2escm",(void*)f_6965},
{"f_7223:chicken_2dsyntax_2escm",(void*)f_7223},
{"f_7252:chicken_2dsyntax_2escm",(void*)f_7252},
{"f_6980:chicken_2dsyntax_2escm",(void*)f_6980},
{"f_7174:chicken_2dsyntax_2escm",(void*)f_7174},
{"f_7207:chicken_2dsyntax_2escm",(void*)f_7207},
{"f_7187:chicken_2dsyntax_2escm",(void*)f_7187},
{"f_7113:chicken_2dsyntax_2escm",(void*)f_7113},
{"f_7125:chicken_2dsyntax_2escm",(void*)f_7125},
{"f_7158:chicken_2dsyntax_2escm",(void*)f_7158},
{"f_7138:chicken_2dsyntax_2escm",(void*)f_7138},
{"f_7123:chicken_2dsyntax_2escm",(void*)f_7123},
{"f_6987:chicken_2dsyntax_2escm",(void*)f_6987},
{"f_7056:chicken_2dsyntax_2escm",(void*)f_7056},
{"f_7069:chicken_2dsyntax_2escm",(void*)f_7069},
{"f_7054:chicken_2dsyntax_2escm",(void*)f_7054},
{"f_6966:chicken_2dsyntax_2escm",(void*)f_6966},
{"f_6974:chicken_2dsyntax_2escm",(void*)f_6974},
{"f_6951:chicken_2dsyntax_2escm",(void*)f_6951},
{"f_6959:chicken_2dsyntax_2escm",(void*)f_6959},
{"f_6923:chicken_2dsyntax_2escm",(void*)f_6923},
{"f_2194:chicken_2dsyntax_2escm",(void*)f_2194},
{"f_6900:chicken_2dsyntax_2escm",(void*)f_6900},
{"f_6904:chicken_2dsyntax_2escm",(void*)f_6904},
{"f_6898:chicken_2dsyntax_2escm",(void*)f_6898},
{"f_2197:chicken_2dsyntax_2escm",(void*)f_2197},
{"f_6871:chicken_2dsyntax_2escm",(void*)f_6871},
{"f_6875:chicken_2dsyntax_2escm",(void*)f_6875},
{"f_6869:chicken_2dsyntax_2escm",(void*)f_6869},
{"f_2200:chicken_2dsyntax_2escm",(void*)f_2200},
{"f_6697:chicken_2dsyntax_2escm",(void*)f_6697},
{"f_6701:chicken_2dsyntax_2escm",(void*)f_6701},
{"f_6828:chicken_2dsyntax_2escm",(void*)f_6828},
{"f_6857:chicken_2dsyntax_2escm",(void*)f_6857},
{"f_6747:chicken_2dsyntax_2escm",(void*)f_6747},
{"f_6779:chicken_2dsyntax_2escm",(void*)f_6779},
{"f_6792:chicken_2dsyntax_2escm",(void*)f_6792},
{"f_6777:chicken_2dsyntax_2escm",(void*)f_6777},
{"f_6695:chicken_2dsyntax_2escm",(void*)f_6695},
{"f_2203:chicken_2dsyntax_2escm",(void*)f_2203},
{"f_6635:chicken_2dsyntax_2escm",(void*)f_6635},
{"f_6639:chicken_2dsyntax_2escm",(void*)f_6639},
{"f_6670:chicken_2dsyntax_2escm",(void*)f_6670},
{"f_6648:chicken_2dsyntax_2escm",(void*)f_6648},
{"f_6680:chicken_2dsyntax_2escm",(void*)f_6680},
{"f_6657:chicken_2dsyntax_2escm",(void*)f_6657},
{"f_6664:chicken_2dsyntax_2escm",(void*)f_6664},
{"f_6633:chicken_2dsyntax_2escm",(void*)f_6633},
{"f_2207:chicken_2dsyntax_2escm",(void*)f_2207},
{"f_6144:chicken_2dsyntax_2escm",(void*)f_6144},
{"f_6148:chicken_2dsyntax_2escm",(void*)f_6148},
{"f_6596:chicken_2dsyntax_2escm",(void*)f_6596},
{"f_6625:chicken_2dsyntax_2escm",(void*)f_6625},
{"f_6232:chicken_2dsyntax_2escm",(void*)f_6232},
{"f_6556:chicken_2dsyntax_2escm",(void*)f_6556},
{"f_6569:chicken_2dsyntax_2escm",(void*)f_6569},
{"f_6235:chicken_2dsyntax_2escm",(void*)f_6235},
{"f_6521:chicken_2dsyntax_2escm",(void*)f_6521},
{"f_6550:chicken_2dsyntax_2escm",(void*)f_6550},
{"f_6254:chicken_2dsyntax_2escm",(void*)f_6254},
{"f_6475:chicken_2dsyntax_2escm",(void*)f_6475},
{"f_6508:chicken_2dsyntax_2escm",(void*)f_6508},
{"f_6515:chicken_2dsyntax_2escm",(void*)f_6515},
{"f_6266:chicken_2dsyntax_2escm",(void*)f_6266},
{"f_6440:chicken_2dsyntax_2escm",(void*)f_6440},
{"f_6281:chicken_2dsyntax_2escm",(void*)f_6281},
{"f_6283:chicken_2dsyntax_2escm",(void*)f_6283},
{"f_6354:chicken_2dsyntax_2escm",(void*)f_6354},
{"f_6408:chicken_2dsyntax_2escm",(void*)f_6408},
{"f_6365:chicken_2dsyntax_2escm",(void*)f_6365},
{"f_6315:chicken_2dsyntax_2escm",(void*)f_6315},
{"f_6344:chicken_2dsyntax_2escm",(void*)f_6344},
{"f_6313:chicken_2dsyntax_2escm",(void*)f_6313},
{"f_6299:chicken_2dsyntax_2escm",(void*)f_6299},
{"f_6307:chicken_2dsyntax_2escm",(void*)f_6307},
{"f_6255:chicken_2dsyntax_2escm",(void*)f_6255},
{"f_6236:chicken_2dsyntax_2escm",(void*)f_6236},
{"f_6248:chicken_2dsyntax_2escm",(void*)f_6248},
{"f_6244:chicken_2dsyntax_2escm",(void*)f_6244},
{"f_6187:chicken_2dsyntax_2escm",(void*)f_6187},
{"f_6210:chicken_2dsyntax_2escm",(void*)f_6210},
{"f_6214:chicken_2dsyntax_2escm",(void*)f_6214},
{"f_6156:chicken_2dsyntax_2escm",(void*)f_6156},
{"f_6177:chicken_2dsyntax_2escm",(void*)f_6177},
{"f_6142:chicken_2dsyntax_2escm",(void*)f_6142},
{"f_2210:chicken_2dsyntax_2escm",(void*)f_2210},
{"f_6087:chicken_2dsyntax_2escm",(void*)f_6087},
{"f_6091:chicken_2dsyntax_2escm",(void*)f_6091},
{"f_6100:chicken_2dsyntax_2escm",(void*)f_6100},
{"f_6105:chicken_2dsyntax_2escm",(void*)f_6105},
{"f_6130:chicken_2dsyntax_2escm",(void*)f_6130},
{"f_6085:chicken_2dsyntax_2escm",(void*)f_6085},
{"f_2213:chicken_2dsyntax_2escm",(void*)f_2213},
{"f_5738:chicken_2dsyntax_2escm",(void*)f_5738},
{"f_5742:chicken_2dsyntax_2escm",(void*)f_5742},
{"f_6048:chicken_2dsyntax_2escm",(void*)f_6048},
{"f_6046:chicken_2dsyntax_2escm",(void*)f_6046},
{"f_5751:chicken_2dsyntax_2escm",(void*)f_5751},
{"f_6001:chicken_2dsyntax_2escm",(void*)f_6001},
{"f_6030:chicken_2dsyntax_2escm",(void*)f_6030},
{"f_5770:chicken_2dsyntax_2escm",(void*)f_5770},
{"f_5966:chicken_2dsyntax_2escm",(void*)f_5966},
{"f_5798:chicken_2dsyntax_2escm",(void*)f_5798},
{"f_5931:chicken_2dsyntax_2escm",(void*)f_5931},
{"f_5960:chicken_2dsyntax_2escm",(void*)f_5960},
{"f_5929:chicken_2dsyntax_2escm",(void*)f_5929},
{"f_5804:chicken_2dsyntax_2escm",(void*)f_5804},
{"f_5886:chicken_2dsyntax_2escm",(void*)f_5886},
{"f_5830:chicken_2dsyntax_2escm",(void*)f_5830},
{"f_5851:chicken_2dsyntax_2escm",(void*)f_5851},
{"f_5849:chicken_2dsyntax_2escm",(void*)f_5849},
{"f_5832:chicken_2dsyntax_2escm",(void*)f_5832},
{"f_5802:chicken_2dsyntax_2escm",(void*)f_5802},
{"f_5771:chicken_2dsyntax_2escm",(void*)f_5771},
{"f_5752:chicken_2dsyntax_2escm",(void*)f_5752},
{"f_5764:chicken_2dsyntax_2escm",(void*)f_5764},
{"f_5760:chicken_2dsyntax_2escm",(void*)f_5760},
{"f_5736:chicken_2dsyntax_2escm",(void*)f_5736},
{"f_2216:chicken_2dsyntax_2escm",(void*)f_2216},
{"f_5732:chicken_2dsyntax_2escm",(void*)f_5732},
{"f_5690:chicken_2dsyntax_2escm",(void*)f_5690},
{"f_5694:chicken_2dsyntax_2escm",(void*)f_5694},
{"f_5697:chicken_2dsyntax_2escm",(void*)f_5697},
{"f_5716:chicken_2dsyntax_2escm",(void*)f_5716},
{"f_5688:chicken_2dsyntax_2escm",(void*)f_5688},
{"f_2219:chicken_2dsyntax_2escm",(void*)f_2219},
{"f_5578:chicken_2dsyntax_2escm",(void*)f_5578},
{"f_5676:chicken_2dsyntax_2escm",(void*)f_5676},
{"f_5581:chicken_2dsyntax_2escm",(void*)f_5581},
{"f_5585:chicken_2dsyntax_2escm",(void*)f_5585},
{"f_5594:chicken_2dsyntax_2escm",(void*)f_5594},
{"f_5626:chicken_2dsyntax_2escm",(void*)f_5626},
{"f_5622:chicken_2dsyntax_2escm",(void*)f_5622},
{"f_5606:chicken_2dsyntax_2escm",(void*)f_5606},
{"f_5597:chicken_2dsyntax_2escm",(void*)f_5597},
{"f_5576:chicken_2dsyntax_2escm",(void*)f_5576},
{"f_2222:chicken_2dsyntax_2escm",(void*)f_2222},
{"f_5477:chicken_2dsyntax_2escm",(void*)f_5477},
{"f_5481:chicken_2dsyntax_2escm",(void*)f_5481},
{"f_5492:chicken_2dsyntax_2escm",(void*)f_5492},
{"f_5521:chicken_2dsyntax_2escm",(void*)f_5521},
{"f_5556:chicken_2dsyntax_2escm",(void*)f_5556},
{"f_5538:chicken_2dsyntax_2escm",(void*)f_5538},
{"f_5475:chicken_2dsyntax_2escm",(void*)f_5475},
{"f_2225:chicken_2dsyntax_2escm",(void*)f_2225},
{"f_5304:chicken_2dsyntax_2escm",(void*)f_5304},
{"f_5308:chicken_2dsyntax_2escm",(void*)f_5308},
{"f_5317:chicken_2dsyntax_2escm",(void*)f_5317},
{"f_5320:chicken_2dsyntax_2escm",(void*)f_5320},
{"f_5323:chicken_2dsyntax_2escm",(void*)f_5323},
{"f_5336:chicken_2dsyntax_2escm",(void*)f_5336},
{"f_5361:chicken_2dsyntax_2escm",(void*)f_5361},
{"f_5367:chicken_2dsyntax_2escm",(void*)f_5367},
{"f_5426:chicken_2dsyntax_2escm",(void*)f_5426},
{"f_5424:chicken_2dsyntax_2escm",(void*)f_5424},
{"f_5405:chicken_2dsyntax_2escm",(void*)f_5405},
{"f_5411:chicken_2dsyntax_2escm",(void*)f_5411},
{"f_5390:chicken_2dsyntax_2escm",(void*)f_5390},
{"f_5383:chicken_2dsyntax_2escm",(void*)f_5383},
{"f_5386:chicken_2dsyntax_2escm",(void*)f_5386},
{"f_5370:chicken_2dsyntax_2escm",(void*)f_5370},
{"f_5334:chicken_2dsyntax_2escm",(void*)f_5334},
{"f_5302:chicken_2dsyntax_2escm",(void*)f_5302},
{"f_2228:chicken_2dsyntax_2escm",(void*)f_2228},
{"f_5298:chicken_2dsyntax_2escm",(void*)f_5298},
{"f_5294:chicken_2dsyntax_2escm",(void*)f_5294},
{"f_4820:chicken_2dsyntax_2escm",(void*)f_4820},
{"f_4824:chicken_2dsyntax_2escm",(void*)f_4824},
{"f_5041:chicken_2dsyntax_2escm",(void*)f_5041},
{"f_5044:chicken_2dsyntax_2escm",(void*)f_5044},
{"f_5249:chicken_2dsyntax_2escm",(void*)f_5249},
{"f_5278:chicken_2dsyntax_2escm",(void*)f_5278},
{"f_5050:chicken_2dsyntax_2escm",(void*)f_5050},
{"f_5214:chicken_2dsyntax_2escm",(void*)f_5214},
{"f_5243:chicken_2dsyntax_2escm",(void*)f_5243},
{"f_5078:chicken_2dsyntax_2escm",(void*)f_5078},
{"f_5179:chicken_2dsyntax_2escm",(void*)f_5179},
{"f_5208:chicken_2dsyntax_2escm",(void*)f_5208},
{"f_5084:chicken_2dsyntax_2escm",(void*)f_5084},
{"f_5087:chicken_2dsyntax_2escm",(void*)f_5087},
{"f_5090:chicken_2dsyntax_2escm",(void*)f_5090},
{"f_5144:chicken_2dsyntax_2escm",(void*)f_5144},
{"f_5173:chicken_2dsyntax_2escm",(void*)f_5173},
{"f_5105:chicken_2dsyntax_2escm",(void*)f_5105},
{"f_4843:chicken_2dsyntax_2escm",(void*)f_4843},
{"f_4847:chicken_2dsyntax_2escm",(void*)f_4847},
{"f_4851:chicken_2dsyntax_2escm",(void*)f_4851},
{"f_4853:chicken_2dsyntax_2escm",(void*)f_4853},
{"f_4898:chicken_2dsyntax_2escm",(void*)f_4898},
{"f_4910:chicken_2dsyntax_2escm",(void*)f_4910},
{"f_4906:chicken_2dsyntax_2escm",(void*)f_4906},
{"f_4874:chicken_2dsyntax_2escm",(void*)f_4874},
{"f_5108:chicken_2dsyntax_2escm",(void*)f_5108},
{"f_5111:chicken_2dsyntax_2escm",(void*)f_5111},
{"f_5118:chicken_2dsyntax_2escm",(void*)f_5118},
{"f_5091:chicken_2dsyntax_2escm",(void*)f_5091},
{"f_5099:chicken_2dsyntax_2escm",(void*)f_5099},
{"f_5064:chicken_2dsyntax_2escm",(void*)f_5064},
{"f_5072:chicken_2dsyntax_2escm",(void*)f_5072},
{"f_5051:chicken_2dsyntax_2escm",(void*)f_5051},
{"f_5063:chicken_2dsyntax_2escm",(void*)f_5063},
{"f_5059:chicken_2dsyntax_2escm",(void*)f_5059},
{"f_4920:chicken_2dsyntax_2escm",(void*)f_4920},
{"f_4926:chicken_2dsyntax_2escm",(void*)f_4926},
{"f_5038:chicken_2dsyntax_2escm",(void*)f_5038},
{"f_5030:chicken_2dsyntax_2escm",(void*)f_5030},
{"f_5022:chicken_2dsyntax_2escm",(void*)f_5022},
{"f_4994:chicken_2dsyntax_2escm",(void*)f_4994},
{"f_4968:chicken_2dsyntax_2escm",(void*)f_4968},
{"f_4960:chicken_2dsyntax_2escm",(void*)f_4960},
{"f_4818:chicken_2dsyntax_2escm",(void*)f_4818},
{"f_2231:chicken_2dsyntax_2escm",(void*)f_2231},
{"f_4810:chicken_2dsyntax_2escm",(void*)f_4810},
{"f_4806:chicken_2dsyntax_2escm",(void*)f_4806},
{"f_4802:chicken_2dsyntax_2escm",(void*)f_4802},
{"f_4682:chicken_2dsyntax_2escm",(void*)f_4682},
{"f_4686:chicken_2dsyntax_2escm",(void*)f_4686},
{"f_4689:chicken_2dsyntax_2escm",(void*)f_4689},
{"f_4778:chicken_2dsyntax_2escm",(void*)f_4778},
{"f_4711:chicken_2dsyntax_2escm",(void*)f_4711},
{"f_4747:chicken_2dsyntax_2escm",(void*)f_4747},
{"f_4755:chicken_2dsyntax_2escm",(void*)f_4755},
{"f_4739:chicken_2dsyntax_2escm",(void*)f_4739},
{"f_4680:chicken_2dsyntax_2escm",(void*)f_4680},
{"f_2234:chicken_2dsyntax_2escm",(void*)f_2234},
{"f_4672:chicken_2dsyntax_2escm",(void*)f_4672},
{"f_4498:chicken_2dsyntax_2escm",(void*)f_4498},
{"f_4502:chicken_2dsyntax_2escm",(void*)f_4502},
{"f_4514:chicken_2dsyntax_2escm",(void*)f_4514},
{"f_4517:chicken_2dsyntax_2escm",(void*)f_4517},
{"f_4520:chicken_2dsyntax_2escm",(void*)f_4520},
{"f_4523:chicken_2dsyntax_2escm",(void*)f_4523},
{"f_4536:chicken_2dsyntax_2escm",(void*)f_4536},
{"f_4586:chicken_2dsyntax_2escm",(void*)f_4586},
{"f_4597:chicken_2dsyntax_2escm",(void*)f_4597},
{"f_4534:chicken_2dsyntax_2escm",(void*)f_4534},
{"f_4496:chicken_2dsyntax_2escm",(void*)f_4496},
{"f_2237:chicken_2dsyntax_2escm",(void*)f_2237},
{"f_4488:chicken_2dsyntax_2escm",(void*)f_4488},
{"f_4484:chicken_2dsyntax_2escm",(void*)f_4484},
{"f_4480:chicken_2dsyntax_2escm",(void*)f_4480},
{"f_4476:chicken_2dsyntax_2escm",(void*)f_4476},
{"f_4063:chicken_2dsyntax_2escm",(void*)f_4063},
{"f_4067:chicken_2dsyntax_2escm",(void*)f_4067},
{"f_4104:chicken_2dsyntax_2escm",(void*)f_4104},
{"f_4423:chicken_2dsyntax_2escm",(void*)f_4423},
{"f_4411:chicken_2dsyntax_2escm",(void*)f_4411},
{"f_4452:chicken_2dsyntax_2escm",(void*)f_4452},
{"f_4421:chicken_2dsyntax_2escm",(void*)f_4421},
{"f_4107:chicken_2dsyntax_2escm",(void*)f_4107},
{"f_4110:chicken_2dsyntax_2escm",(void*)f_4110},
{"f_4113:chicken_2dsyntax_2escm",(void*)f_4113},
{"f_4116:chicken_2dsyntax_2escm",(void*)f_4116},
{"f_4119:chicken_2dsyntax_2escm",(void*)f_4119},
{"f_4122:chicken_2dsyntax_2escm",(void*)f_4122},
{"f_4125:chicken_2dsyntax_2escm",(void*)f_4125},
{"f_4128:chicken_2dsyntax_2escm",(void*)f_4128},
{"f_4135:chicken_2dsyntax_2escm",(void*)f_4135},
{"f_4149:chicken_2dsyntax_2escm",(void*)f_4149},
{"f_4159:chicken_2dsyntax_2escm",(void*)f_4159},
{"f_4163:chicken_2dsyntax_2escm",(void*)f_4163},
{"f_4173:chicken_2dsyntax_2escm",(void*)f_4173},
{"f_4189:chicken_2dsyntax_2escm",(void*)f_4189},
{"f_4263:chicken_2dsyntax_2escm",(void*)f_4263},
{"f_4371:chicken_2dsyntax_2escm",(void*)f_4371},
{"f_4319:chicken_2dsyntax_2escm",(void*)f_4319},
{"f_4330:chicken_2dsyntax_2escm",(void*)f_4330},
{"f_4193:chicken_2dsyntax_2escm",(void*)f_4193},
{"f_4214:chicken_2dsyntax_2escm",(void*)f_4214},
{"f_4247:chicken_2dsyntax_2escm",(void*)f_4247},
{"f_4227:chicken_2dsyntax_2escm",(void*)f_4227},
{"f_4212:chicken_2dsyntax_2escm",(void*)f_4212},
{"f_4179:chicken_2dsyntax_2escm",(void*)f_4179},
{"f_4187:chicken_2dsyntax_2escm",(void*)f_4187},
{"f_4177:chicken_2dsyntax_2escm",(void*)f_4177},
{"f_4147:chicken_2dsyntax_2escm",(void*)f_4147},
{"f_4069:chicken_2dsyntax_2escm",(void*)f_4069},
{"f_4075:chicken_2dsyntax_2escm",(void*)f_4075},
{"f_4101:chicken_2dsyntax_2escm",(void*)f_4101},
{"f_4089:chicken_2dsyntax_2escm",(void*)f_4089},
{"f_4093:chicken_2dsyntax_2escm",(void*)f_4093},
{"f_4061:chicken_2dsyntax_2escm",(void*)f_4061},
{"f_2240:chicken_2dsyntax_2escm",(void*)f_2240},
{"f_3989:chicken_2dsyntax_2escm",(void*)f_3989},
{"f_3993:chicken_2dsyntax_2escm",(void*)f_3993},
{"f_4038:chicken_2dsyntax_2escm",(void*)f_4038},
{"f_4008:chicken_2dsyntax_2escm",(void*)f_4008},
{"f_3987:chicken_2dsyntax_2escm",(void*)f_3987},
{"f_2243:chicken_2dsyntax_2escm",(void*)f_2243},
{"f_3983:chicken_2dsyntax_2escm",(void*)f_3983},
{"f_3979:chicken_2dsyntax_2escm",(void*)f_3979},
{"f_3870:chicken_2dsyntax_2escm",(void*)f_3870},
{"f_3874:chicken_2dsyntax_2escm",(void*)f_3874},
{"f_3877:chicken_2dsyntax_2escm",(void*)f_3877},
{"f_3880:chicken_2dsyntax_2escm",(void*)f_3880},
{"f_3891:chicken_2dsyntax_2escm",(void*)f_3891},
{"f_3907:chicken_2dsyntax_2escm",(void*)f_3907},
{"f_3868:chicken_2dsyntax_2escm",(void*)f_3868},
{"f_2246:chicken_2dsyntax_2escm",(void*)f_2246},
{"f_3860:chicken_2dsyntax_2escm",(void*)f_3860},
{"f_3856:chicken_2dsyntax_2escm",(void*)f_3856},
{"f_3560:chicken_2dsyntax_2escm",(void*)f_3560},
{"f_3564:chicken_2dsyntax_2escm",(void*)f_3564},
{"f_3567:chicken_2dsyntax_2escm",(void*)f_3567},
{"f_3570:chicken_2dsyntax_2escm",(void*)f_3570},
{"f_3573:chicken_2dsyntax_2escm",(void*)f_3573},
{"f_3576:chicken_2dsyntax_2escm",(void*)f_3576},
{"f_3579:chicken_2dsyntax_2escm",(void*)f_3579},
{"f_3743:chicken_2dsyntax_2escm",(void*)f_3743},
{"f_3763:chicken_2dsyntax_2escm",(void*)f_3763},
{"f_3791:chicken_2dsyntax_2escm",(void*)f_3791},
{"f_3820:chicken_2dsyntax_2escm",(void*)f_3820},
{"f_3777:chicken_2dsyntax_2escm",(void*)f_3777},
{"f_3767:chicken_2dsyntax_2escm",(void*)f_3767},
{"f_3581:chicken_2dsyntax_2escm",(void*)f_3581},
{"f_3681:chicken_2dsyntax_2escm",(void*)f_3681},
{"f_3679:chicken_2dsyntax_2escm",(void*)f_3679},
{"f_3665:chicken_2dsyntax_2escm",(void*)f_3665},
{"f_3558:chicken_2dsyntax_2escm",(void*)f_3558},
{"f_2249:chicken_2dsyntax_2escm",(void*)f_2249},
{"f_3550:chicken_2dsyntax_2escm",(void*)f_3550},
{"f_3175:chicken_2dsyntax_2escm",(void*)f_3175},
{"f_3179:chicken_2dsyntax_2escm",(void*)f_3179},
{"f_3194:chicken_2dsyntax_2escm",(void*)f_3194},
{"f_3197:chicken_2dsyntax_2escm",(void*)f_3197},
{"f_3203:chicken_2dsyntax_2escm",(void*)f_3203},
{"f_3206:chicken_2dsyntax_2escm",(void*)f_3206},
{"f_3509:chicken_2dsyntax_2escm",(void*)f_3509},
{"f_3538:chicken_2dsyntax_2escm",(void*)f_3538},
{"f_3212:chicken_2dsyntax_2escm",(void*)f_3212},
{"f_3474:chicken_2dsyntax_2escm",(void*)f_3474},
{"f_3472:chicken_2dsyntax_2escm",(void*)f_3472},
{"f_3237:chicken_2dsyntax_2escm",(void*)f_3237},
{"f_3415:chicken_2dsyntax_2escm",(void*)f_3415},
{"f_3256:chicken_2dsyntax_2escm",(void*)f_3256},
{"f_3262:chicken_2dsyntax_2escm",(void*)f_3262},
{"f_3335:chicken_2dsyntax_2escm",(void*)f_3335},
{"f_3269:chicken_2dsyntax_2escm",(void*)f_3269},
{"f_3313:chicken_2dsyntax_2escm",(void*)f_3313},
{"f_3277:chicken_2dsyntax_2escm",(void*)f_3277},
{"f_3281:chicken_2dsyntax_2escm",(void*)f_3281},
{"f_3273:chicken_2dsyntax_2escm",(void*)f_3273},
{"f_3235:chicken_2dsyntax_2escm",(void*)f_3235},
{"f_3459:chicken_2dsyntax_2escm",(void*)f_3459},
{"f_3173:chicken_2dsyntax_2escm",(void*)f_3173},
{"f_2252:chicken_2dsyntax_2escm",(void*)f_2252},
{"f_3165:chicken_2dsyntax_2escm",(void*)f_3165},
{"f_2979:chicken_2dsyntax_2escm",(void*)f_2979},
{"f_2983:chicken_2dsyntax_2escm",(void*)f_2983},
{"f_2986:chicken_2dsyntax_2escm",(void*)f_2986},
{"f_2989:chicken_2dsyntax_2escm",(void*)f_2989},
{"f_2992:chicken_2dsyntax_2escm",(void*)f_2992},
{"f_3001:chicken_2dsyntax_2escm",(void*)f_3001},
{"f_3080:chicken_2dsyntax_2escm",(void*)f_3080},
{"f_3108:chicken_2dsyntax_2escm",(void*)f_3108},
{"f_3102:chicken_2dsyntax_2escm",(void*)f_3102},
{"f_3083:chicken_2dsyntax_2escm",(void*)f_3083},
{"f_3011:chicken_2dsyntax_2escm",(void*)f_3011},
{"f_3014:chicken_2dsyntax_2escm",(void*)f_3014},
{"f_3055:chicken_2dsyntax_2escm",(void*)f_3055},
{"f_3020:chicken_2dsyntax_2escm",(void*)f_3020},
{"f_3027:chicken_2dsyntax_2escm",(void*)f_3027},
{"f_3043:chicken_2dsyntax_2escm",(void*)f_3043},
{"f_2977:chicken_2dsyntax_2escm",(void*)f_2977},
{"f_2255:chicken_2dsyntax_2escm",(void*)f_2255},
{"f_2969:chicken_2dsyntax_2escm",(void*)f_2969},
{"f_2764:chicken_2dsyntax_2escm",(void*)f_2764},
{"f_2768:chicken_2dsyntax_2escm",(void*)f_2768},
{"f_2771:chicken_2dsyntax_2escm",(void*)f_2771},
{"f_2774:chicken_2dsyntax_2escm",(void*)f_2774},
{"f_2777:chicken_2dsyntax_2escm",(void*)f_2777},
{"f_2786:chicken_2dsyntax_2escm",(void*)f_2786},
{"f_2869:chicken_2dsyntax_2escm",(void*)f_2869},
{"f_2897:chicken_2dsyntax_2escm",(void*)f_2897},
{"f_2943:chicken_2dsyntax_2escm",(void*)f_2943},
{"f_2916:chicken_2dsyntax_2escm",(void*)f_2916},
{"f_2891:chicken_2dsyntax_2escm",(void*)f_2891},
{"f_2872:chicken_2dsyntax_2escm",(void*)f_2872},
{"f_2796:chicken_2dsyntax_2escm",(void*)f_2796},
{"f_2799:chicken_2dsyntax_2escm",(void*)f_2799},
{"f_2844:chicken_2dsyntax_2escm",(void*)f_2844},
{"f_2805:chicken_2dsyntax_2escm",(void*)f_2805},
{"f_2816:chicken_2dsyntax_2escm",(void*)f_2816},
{"f_2832:chicken_2dsyntax_2escm",(void*)f_2832},
{"f_2762:chicken_2dsyntax_2escm",(void*)f_2762},
{"f_2258:chicken_2dsyntax_2escm",(void*)f_2258},
{"f_2691:chicken_2dsyntax_2escm",(void*)f_2691},
{"f_2695:chicken_2dsyntax_2escm",(void*)f_2695},
{"f_2689:chicken_2dsyntax_2escm",(void*)f_2689},
{"f_2261:chicken_2dsyntax_2escm",(void*)f_2261},
{"f_2662:chicken_2dsyntax_2escm",(void*)f_2662},
{"f_2666:chicken_2dsyntax_2escm",(void*)f_2666},
{"f_2673:chicken_2dsyntax_2escm",(void*)f_2673},
{"f_2681:chicken_2dsyntax_2escm",(void*)f_2681},
{"f_2660:chicken_2dsyntax_2escm",(void*)f_2660},
{"f_2264:chicken_2dsyntax_2escm",(void*)f_2264},
{"f_2645:chicken_2dsyntax_2escm",(void*)f_2645},
{"f_2649:chicken_2dsyntax_2escm",(void*)f_2649},
{"f_2643:chicken_2dsyntax_2escm",(void*)f_2643},
{"f_2267:chicken_2dsyntax_2escm",(void*)f_2267},
{"f_2433:chicken_2dsyntax_2escm",(void*)f_2433},
{"f_2443:chicken_2dsyntax_2escm",(void*)f_2443},
{"f_2582:chicken_2dsyntax_2escm",(void*)f_2582},
{"f_2585:chicken_2dsyntax_2escm",(void*)f_2585},
{"f_2591:chicken_2dsyntax_2escm",(void*)f_2591},
{"f_2600:chicken_2dsyntax_2escm",(void*)f_2600},
{"f_2607:chicken_2dsyntax_2escm",(void*)f_2607},
{"f_2621:chicken_2dsyntax_2escm",(void*)f_2621},
{"f_2467:chicken_2dsyntax_2escm",(void*)f_2467},
{"f_2517:chicken_2dsyntax_2escm",(void*)f_2517},
{"f_2530:chicken_2dsyntax_2escm",(void*)f_2530},
{"f_2483:chicken_2dsyntax_2escm",(void*)f_2483},
{"f_2499:chicken_2dsyntax_2escm",(void*)f_2499},
{"f_2453:chicken_2dsyntax_2escm",(void*)f_2453},
{"f_2431:chicken_2dsyntax_2escm",(void*)f_2431},
{"f_2270:chicken_2dsyntax_2escm",(void*)f_2270},
{"f_2285:chicken_2dsyntax_2escm",(void*)f_2285},
{"f_2380:chicken_2dsyntax_2escm",(void*)f_2380},
{"f_2383:chicken_2dsyntax_2escm",(void*)f_2383},
{"f_2389:chicken_2dsyntax_2escm",(void*)f_2389},
{"f_2398:chicken_2dsyntax_2escm",(void*)f_2398},
{"f_2405:chicken_2dsyntax_2escm",(void*)f_2405},
{"f_2419:chicken_2dsyntax_2escm",(void*)f_2419},
{"f_2324:chicken_2dsyntax_2escm",(void*)f_2324},
{"f_2330:chicken_2dsyntax_2escm",(void*)f_2330},
{"f_2333:chicken_2dsyntax_2escm",(void*)f_2333},
{"f_2339:chicken_2dsyntax_2escm",(void*)f_2339},
{"f_2348:chicken_2dsyntax_2escm",(void*)f_2348},
{"f_2355:chicken_2dsyntax_2escm",(void*)f_2355},
{"f_2369:chicken_2dsyntax_2escm",(void*)f_2369},
{"f_2295:chicken_2dsyntax_2escm",(void*)f_2295},
{"f_2308:chicken_2dsyntax_2escm",(void*)f_2308},
{"f_2283:chicken_2dsyntax_2escm",(void*)f_2283},
{"f_2273:chicken_2dsyntax_2escm",(void*)f_2273},
{"f_2276:chicken_2dsyntax_2escm",(void*)f_2276},
{"f_2279:chicken_2dsyntax_2escm",(void*)f_2279},
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
