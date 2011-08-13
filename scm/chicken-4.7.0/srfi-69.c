/* Generated from srfi-69.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: srfi-69.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file srfi-69.c -extend ./private-namespace.scm
   unit: srfi_2d69
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[116];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,14),40,102,95,49,51,56,57,32,111,98,106,57,55,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,27),40,102,95,49,51,57,53,32,111,98,106,49,48,52,32,46,32,116,109,112,49,48,51,49,48,53,41,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,27),40,102,95,49,53,57,56,32,111,98,106,49,56,49,32,46,32,116,109,112,49,56,48,49,56,50,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,27),40,102,95,49,54,54,50,32,111,98,106,50,48,55,32,46,32,116,109,112,50,48,54,50,48,56,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,20),40,102,95,49,55,51,53,32,120,50,51,50,32,46,32,121,50,51,51,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,27),40,102,95,49,55,54,49,32,111,98,106,50,52,49,32,46,32,116,109,112,50,52,48,50,52,50,41,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,27),40,102,95,49,57,49,53,32,111,98,106,50,56,56,32,46,32,116,109,112,50,56,55,50,56,57,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,27),40,102,95,50,49,56,57,32,111,98,106,51,55,53,32,46,32,116,109,112,51,55,52,51,55,54,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,104,115,104,52,48,51,32,105,52,48,52,32,108,101,110,52,48,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,46),40,118,101,99,116,111,114,45,104,97,115,104,32,111,98,106,51,57,55,32,115,101,101,100,51,57,56,32,100,101,112,116,104,51,57,57,32,115,116,97,114,116,52,48,48,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,39),40,114,101,99,117,114,115,105,118,101,45,97,116,111,109,105,99,45,104,97,115,104,32,111,98,106,52,48,55,32,100,101,112,116,104,52,48,56,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,13),40,103,52,57,54,32,111,98,106,52,57,56,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,13),40,103,52,57,57,32,111,98,106,53,48,49,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,13),40,103,53,49,49,32,111,98,106,53,49,51,41,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,13),40,103,53,49,52,32,111,98,106,53,49,54,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,32),40,114,101,99,117,114,115,105,118,101,45,104,97,115,104,32,111,98,106,52,51,48,32,100,101,112,116,104,52,51,49,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,21),40,42,101,113,117,97,108,63,45,104,97,115,104,32,111,98,106,51,57,51,41,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,27),40,102,95,50,55,49,52,32,111,98,106,53,50,54,32,46,32,116,109,112,53,50,53,53,50,55,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,25),40,98,111,100,121,53,54,52,32,115,116,97,114,116,53,55,52,32,101,110,100,53,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,25),40,100,101,102,45,101,110,100,53,54,55,32,37,115,116,97,114,116,53,54,50,53,55,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,14),40,100,101,102,45,115,116,97,114,116,53,54,54,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,27),40,102,95,50,55,55,52,32,115,116,114,53,53,48,32,46,32,116,109,112,53,52,57,53,53,49,41,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,25),40,98,111,100,121,54,49,56,32,115,116,97,114,116,54,50,56,32,101,110,100,54,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,25),40,100,101,102,45,101,110,100,54,50,49,32,37,115,116,97,114,116,54,49,54,54,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,14),40,100,101,102,45,115,116,97,114,116,54,50,48,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,27),40,102,95,50,57,49,53,32,115,116,114,54,48,52,32,46,32,116,109,112,54,48,51,54,48,53,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,43),40,104,97,115,104,45,116,97,98,108,101,45,99,97,110,111,110,105,99,97,108,45,108,101,110,103,116,104,32,116,97,98,54,54,56,32,114,101,113,54,54,57,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,86),40,42,109,97,107,101,45,104,97,115,104,45,116,97,98,108,101,32,116,101,115,116,54,56,53,32,104,97,115,104,54,56,54,32,108,101,110,54,56,55,32,109,105,110,45,108,111,97,100,54,56,56,32,109,97,120,45,108,111,97,100,54,56,57,32,105,110,105,116,105,97,108,54,57,50,32,116,109,112,54,56,52,54,57,51,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,19),40,105,110,118,97,114,103,45,101,114,114,32,109,115,103,55,53,51,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,8),40,102,95,51,51,50,50,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,97,114,103,115,55,53,48,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,24),40,102,95,51,49,49,57,32,46,32,97,114,103,117,109,101,110,116,115,48,55,48,55,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,15),40,102,95,51,52,56,50,32,111,98,106,55,56,53,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,14),40,102,95,51,52,56,56,32,104,116,55,56,55,41,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,14),40,102,95,51,52,57,55,32,104,116,55,57,48,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,14),40,102,95,51,53,48,54,32,104,116,55,57,51,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,14),40,102,95,51,53,49,53,32,104,116,55,57,54,41,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,14),40,102,95,51,53,50,52,32,104,116,55,57,57,41,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,14),40,102,95,51,53,51,51,32,104,116,56,48,50,41,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,14),40,102,95,51,53,52,50,32,104,116,56,48,53,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,14),40,102,95,51,53,53,49,32,104,116,56,48,56,41,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,14),40,102,95,51,53,54,51,32,104,116,56,49,50,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,56,50,53,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,56,50,49,32,105,56,50,51,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,28),40,102,95,51,54,53,55,32,104,116,56,51,52,32,118,101,99,56,51,53,32,108,101,110,56,51,54,41,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,21),40,99,111,112,121,45,108,111,111,112,32,98,117,99,107,101,116,56,53,49,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,56,52,55,32,105,56,52,57,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,24),40,42,104,97,115,104,45,116,97,98,108,101,45,99,111,112,121,32,104,116,56,52,51,41};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,14),40,102,95,51,55,57,53,32,104,116,56,53,55,41,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,57,48,54,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,57,49,53,41};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,8),40,102,95,52,48,54,48,41};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,41),40,102,95,51,56,48,52,32,104,116,56,54,54,32,107,101,121,56,54,55,32,102,117,110,99,56,54,56,32,46,32,116,109,112,56,54,53,56,54,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,57,53,57,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,57,54,56,41};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,57),40,42,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,47,100,101,102,97,117,108,116,32,104,116,57,50,57,32,107,101,121,57,51,48,32,102,117,110,99,57,51,49,32,100,101,102,57,51,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,36),40,102,95,52,51,49,48,32,104,116,57,55,56,32,107,101,121,57,55,57,32,102,117,110,99,57,56,48,32,100,101,102,57,56,49,41,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,49,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,50,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,28),40,102,95,52,51,50,50,32,104,116,57,56,54,32,107,101,121,57,56,55,32,118,97,108,57,56,56,41,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,55,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,31),40,102,95,52,53,52,48,32,104,116,49,48,53,57,32,107,101,121,49,48,54,48,32,100,101,102,49,48,54,49,41,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,57,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,23),40,102,95,52,54,52,54,32,104,116,49,48,55,55,32,107,101,121,49,48,55,56,41,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,49,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,112,114,101,118,49,49,50,49,32,98,117,99,107,101,116,49,49,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,23),40,102,95,52,55,53,52,32,104,116,49,49,48,50,32,107,101,121,49,49,48,51,41,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,112,114,101,118,49,49,52,48,32,98,117,99,107,101,116,49,49,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,49,51,54,32,105,49,49,51,56,41,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,24),40,102,95,52,56,56,53,32,104,116,49,49,51,49,32,102,117,110,99,49,49,51,50,41};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,15),40,102,95,52,57,56,49,32,104,116,49,49,53,51,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,13),40,97,53,48,53,55,32,120,49,49,54,56,41,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,20),40,100,111,108,111,111,112,49,49,54,52,32,108,115,116,49,49,54,54,41,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,49,54,49,32,105,49,49,54,51,41,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,36),40,42,104,97,115,104,45,116,97,98,108,101,45,109,101,114,103,101,33,32,104,116,49,49,49,53,55,32,104,116,50,49,49,53,56,41,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,24),40,102,95,53,48,54,53,32,104,116,49,49,49,55,52,32,104,116,50,49,49,55,53,41};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,24),40,102,95,53,48,55,55,32,104,116,49,49,49,55,57,32,104,116,50,49,49,56,48,41};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,98,117,99,107,101,116,49,49,57,49,32,108,115,116,49,49,57,50,41,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,49,56,56,32,108,115,116,49,49,56,57,41,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,15),40,102,95,53,48,57,51,32,104,116,49,49,56,52,41,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,13),40,97,53,49,56,54,32,120,49,50,49,51,41,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,13),40,103,49,50,48,52,32,120,49,50,49,50,41,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,48,51,32,103,49,50,48,57,49,50,49,54,41,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,29),40,102,95,53,49,54,54,32,97,108,105,115,116,49,49,57,56,32,46,32,114,101,115,116,49,49,57,57,41,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,98,117,99,107,101,116,49,50,51,48,32,108,115,116,49,50,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,50,50,55,32,108,115,116,49,50,50,56,41,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,15),40,102,95,53,50,50,51,32,104,116,49,50,50,51,41,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,98,117,99,107,101,116,49,50,52,52,32,108,115,116,49,50,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,50,52,49,32,108,115,116,49,50,52,50,41,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,15),40,102,95,53,50,56,56,32,104,116,49,50,51,55,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,18),40,103,49,50,54,49,32,98,117,99,107,101,116,49,50,54,57,41,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,54,48,32,103,49,50,54,54,49,50,55,49,41,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,50,53,53,32,105,49,50,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,38),40,42,104,97,115,104,45,116,97,98,108,101,45,102,111,114,45,101,97,99,104,32,104,116,49,50,53,49,32,112,114,111,99,49,50,53,50,41,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,26),40,102,111,108,100,50,32,98,117,99,107,101,116,49,50,56,55,32,97,99,99,49,50,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,50,56,52,32,97,99,99,49,50,56,53,41,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,43),40,42,104,97,115,104,45,116,97,98,108,101,45,102,111,108,100,32,104,116,49,50,55,56,32,102,117,110,99,49,50,55,57,32,105,110,105,116,49,50,56,48,41,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,33),40,102,95,53,52,57,50,32,104,116,49,50,57,51,32,102,117,110,99,49,50,57,52,32,105,110,105,116,49,50,57,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,24),40,102,95,53,53,48,52,32,104,116,49,50,57,57,32,112,114,111,99,49,51,48,48,41};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,24),40,102,95,53,53,49,54,32,104,116,49,51,48,52,32,112,114,111,99,49,51,48,53,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,25),40,97,53,53,51,57,32,107,49,51,49,49,32,118,49,51,49,50,32,97,49,51,49,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,24),40,102,95,53,53,50,56,32,104,116,49,51,48,57,32,102,117,110,99,49,51,49,48,41};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,23),40,97,53,53,53,50,32,104,116,49,51,49,54,32,112,111,114,116,49,51,49,55,41,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,53,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,8),40,102,95,53,54,56,57,41};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,36),40,97,53,53,54,56,32,104,116,49,48,51,52,32,107,101,121,49,48,51,53,32,46,32,116,109,112,49,48,51,51,49,48,51,54,41,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_srfi_2d69_toplevel)
C_externexport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1387)
static void C_ccall f_1387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5569)
static void C_ccall f_5569(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5569)
static void C_ccall f_5569r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5689)
static void C_ccall f_5689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5573)
static void C_ccall f_5573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5579)
static void C_ccall f_5579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5591)
static void C_ccall f_5591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5648)
static void C_fcall f_5648(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5667)
static void C_ccall f_5667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5606)
static void C_fcall f_5606(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4538)
static void C_ccall f_4538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5553)
static void C_ccall f_5553(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5557)
static void C_ccall f_5557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5551)
static void C_ccall f_5551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5528)
static void C_ccall f_5528(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5540)
static void C_ccall f_5540(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5548)
static void C_ccall f_5548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5516)
static void C_ccall f_5516(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5523)
static void C_ccall f_5523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5504)
static void C_ccall f_5504(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5511)
static void C_ccall f_5511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5492)
static void C_ccall f_5492(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5499)
static void C_ccall f_5499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5426)
static void C_fcall f_5426(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5438)
static void C_fcall f_5438(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5454)
static void C_fcall f_5454(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5482)
static void C_ccall f_5482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5353)
static void C_fcall f_5353(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5365)
static void C_fcall f_5365(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5403)
static void C_fcall f_5403(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5413)
static void C_ccall f_5413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5394)
static void C_ccall f_5394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5373)
static void C_fcall f_5373(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5288)
static void C_ccall f_5288(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5303)
static void C_fcall f_5303(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5319)
static void C_fcall f_5319(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5223)
static void C_ccall f_5223(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5238)
static void C_fcall f_5238(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5254)
static void C_fcall f_5254(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5166)
static void C_ccall f_5166(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5166)
static void C_ccall f_5166r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5173)
static void C_ccall f_5173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5200)
static void C_fcall f_5200(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5210)
static void C_ccall f_5210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5198)
static void C_ccall f_5198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5174)
static void C_fcall f_5174(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5187)
static void C_ccall f_5187(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5093)
static void C_ccall f_5093(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5108)
static void C_fcall f_5108(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5124)
static void C_fcall f_5124(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5077)
static void C_ccall f_5077(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5091)
static void C_ccall f_5091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5065)
static void C_ccall f_5065(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4997)
static void C_fcall f_4997(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5009)
static void C_fcall f_5009(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5032)
static void C_fcall f_5032(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5058)
static void C_ccall f_5058(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5045)
static void C_ccall f_5045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5019)
static void C_ccall f_5019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4981)
static void C_ccall f_4981(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4988)
static void C_ccall f_4988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4885)
static void C_ccall f_4885(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4892)
static void C_ccall f_4892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4906)
static void C_fcall f_4906(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4932)
static void C_fcall f_4932(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4754)
static void C_ccall f_4754(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4770)
static void C_ccall f_4770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4837)
static void C_fcall f_4837(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4856)
static void C_ccall f_4856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4790)
static C_word C_fcall f_4790(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_4646)
static void C_ccall f_4646(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4662)
static void C_ccall f_4662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4717)
static void C_fcall f_4717(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4730)
static void C_ccall f_4730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4677)
static C_word C_fcall f_4677(C_word t0,C_word t1);
C_noret_decl(f_4540)
static void C_ccall f_4540(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4556)
static void C_ccall f_4556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4610)
static void C_fcall f_4610(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4626)
static void C_ccall f_4626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4571)
static C_word C_fcall f_4571(C_word t0,C_word t1);
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4398)
static void C_ccall f_4398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4354)
static void C_fcall f_4354(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4390)
static void C_ccall f_4390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4365)
static void C_fcall f_4365(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4371)
static void C_fcall f_4371(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4405)
static void C_ccall f_4405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4420)
static void C_ccall f_4420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4486)
static void C_fcall f_4486(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4516)
static void C_ccall f_4516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4437)
static void C_fcall f_4437(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4317)
static void C_ccall f_4317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4082)
static void C_fcall f_4082(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4155)
static void C_ccall f_4155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4111)
static void C_fcall f_4111(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4147)
static void C_ccall f_4147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4122)
static void C_fcall f_4122(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4128)
static void C_fcall f_4128(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4162)
static void C_ccall f_4162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4177)
static void C_ccall f_4177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4250)
static void C_fcall f_4250(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4283)
static void C_ccall f_4283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4286)
static void C_ccall f_4286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4260)
static void C_ccall f_4260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4191)
static void C_fcall f_4191(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4227)
static void C_ccall f_4227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4201)
static void C_ccall f_4201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_4060)
static void C_ccall f_4060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3808)
static void C_ccall f_3808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3814)
static void C_ccall f_3814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3817)
static void C_ccall f_3817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3889)
static void C_ccall f_3889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3845)
static void C_fcall f_3845(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3856)
static void C_fcall f_3856(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3862)
static void C_fcall f_3862(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3896)
static void C_ccall f_3896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3988)
static void C_fcall f_3988(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4025)
static void C_ccall f_4025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4028)
static void C_ccall f_4028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4016)
static void C_ccall f_4016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3998)
static void C_ccall f_3998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3925)
static void C_fcall f_3925(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3965)
static void C_ccall f_3965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3935)
static void C_ccall f_3935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3683)
static void C_fcall f_3683(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3698)
static void C_fcall f_3698(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3760)
static void C_fcall f_3760(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3781)
static void C_ccall f_3781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3754)
static void C_ccall f_3754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3657)
static void C_ccall f_3657(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3664)
static void C_ccall f_3664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3667)
static void C_ccall f_3667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3590)
static void C_fcall f_3590(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3613)
static void C_fcall f_3613(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3629)
static void C_ccall f_3629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3600)
static void C_ccall f_3600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3670)
static void C_ccall f_3670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3563)
static void C_ccall f_3563(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3551)
static void C_ccall f_3551(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3542)
static void C_ccall f_3542(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3533)
static void C_ccall f_3533(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3515)
static void C_ccall f_3515(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3506)
static void C_ccall f_3506(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3497)
static void C_ccall f_3497(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3488)
static void C_ccall f_3488(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3482)
static void C_ccall f_3482(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3119)
static void C_ccall f_3119(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3119)
static void C_ccall f_3119r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3472)
static void C_ccall f_3472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3475)
static void C_ccall f_3475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3197)
static void C_fcall f_3197(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3455)
static void C_ccall f_3455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3200)
static void C_fcall f_3200(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3426)
static void C_ccall f_3426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3203)
static void C_fcall f_3203(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3238)
static void C_fcall f_3238(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3259)
static void C_ccall f_3259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3265)
static void C_ccall f_3265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3357)
static void C_ccall f_3357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3332)
static void C_ccall f_3332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3335)
static void C_ccall f_3335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3322)
static void C_ccall f_3322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3304)
static void C_ccall f_3304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3281)
static void C_ccall f_3281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3268)
static void C_ccall f_3268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3249)
static void C_fcall f_3249(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3209)
static void C_ccall f_3209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3229)
static void C_ccall f_3229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3121)
static C_word C_fcall f_3121(C_word t0);
C_noret_decl(f_3088)
static void C_fcall f_3088(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3058)
static void C_fcall f_3058(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3064)
static C_word C_fcall f_3064(C_word t0,C_word t1);
C_noret_decl(f_2915)
static void C_ccall f_2915(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2915)
static void C_ccall f_2915r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2996)
static void C_fcall f_2996(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2987)
static void C_fcall f_2987(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2968)
static void C_fcall f_2968(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2972)
static void C_ccall f_2972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2855)
static void C_fcall f_2855(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_fcall f_2846(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2827)
static void C_fcall f_2827(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2831)
static void C_ccall f_2831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2790)
static void C_ccall f_2790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2718)
static void C_ccall f_2718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2752)
static void C_ccall f_2752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2248)
static void C_fcall f_2248(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2367)
static void C_fcall f_2367(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2702)
static void C_fcall f_2702(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2690)
static void C_fcall f_2690(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2674)
static void C_ccall f_2674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2623)
static void C_fcall f_2623(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2643)
static void C_ccall f_2643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2597)
static void C_fcall f_2597(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2316)
static void C_fcall f_2316(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2350)
static void C_fcall f_2350(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2353)
static void C_fcall f_2353(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2251)
static void C_fcall f_2251(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2268)
static void C_fcall f_2268(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2302)
static void C_ccall f_2302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2189)
static void C_ccall f_2189(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2189)
static void C_ccall f_2189r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2165)
static void C_ccall f_2165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1919)
static void C_ccall f_1919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1953)
static void C_ccall f_1953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1761)
static void C_ccall f_1761(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1761)
static void C_ccall f_1761r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1765)
static void C_ccall f_1765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1768)
static void C_ccall f_1768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1742)
static void C_ccall f_1742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1666)
static void C_ccall f_1666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1602)
static void C_ccall f_1602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1395)
static void C_ccall f_1395(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1395)
static void C_ccall f_1395r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1399)
static void C_ccall f_1399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1402)
static void C_ccall f_1402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1565)
static void C_ccall f_1565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1571)
static void C_fcall f_1571(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1389)
static void C_ccall f_1389(C_word c,C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_5648)
static void C_fcall trf_5648(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5648(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5648(t0,t1,t2);}

C_noret_decl(trf_5606)
static void C_fcall trf_5606(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5606(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5606(t0,t1,t2);}

C_noret_decl(trf_5426)
static void C_fcall trf_5426(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5426(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5426(t0,t1,t2,t3);}

C_noret_decl(trf_5438)
static void C_fcall trf_5438(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5438(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5438(t0,t1,t2,t3);}

C_noret_decl(trf_5454)
static void C_fcall trf_5454(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5454(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5454(t0,t1,t2,t3);}

C_noret_decl(trf_5353)
static void C_fcall trf_5353(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5353(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5353(t0,t1,t2);}

C_noret_decl(trf_5365)
static void C_fcall trf_5365(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5365(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5365(t0,t1,t2);}

C_noret_decl(trf_5403)
static void C_fcall trf_5403(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5403(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5403(t0,t1,t2);}

C_noret_decl(trf_5373)
static void C_fcall trf_5373(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5373(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5373(t0,t1,t2);}

C_noret_decl(trf_5303)
static void C_fcall trf_5303(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5303(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5303(t0,t1,t2,t3);}

C_noret_decl(trf_5319)
static void C_fcall trf_5319(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5319(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5319(t0,t1,t2,t3);}

C_noret_decl(trf_5238)
static void C_fcall trf_5238(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5238(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5238(t0,t1,t2,t3);}

C_noret_decl(trf_5254)
static void C_fcall trf_5254(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5254(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5254(t0,t1,t2,t3);}

C_noret_decl(trf_5200)
static void C_fcall trf_5200(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5200(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5200(t0,t1,t2);}

C_noret_decl(trf_5174)
static void C_fcall trf_5174(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5174(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5174(t0,t1,t2);}

C_noret_decl(trf_5108)
static void C_fcall trf_5108(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5108(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5108(t0,t1,t2,t3);}

C_noret_decl(trf_5124)
static void C_fcall trf_5124(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5124(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5124(t0,t1,t2,t3);}

C_noret_decl(trf_4997)
static void C_fcall trf_4997(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4997(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4997(t0,t1,t2);}

C_noret_decl(trf_5009)
static void C_fcall trf_5009(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5009(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5009(t0,t1,t2);}

C_noret_decl(trf_5032)
static void C_fcall trf_5032(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5032(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5032(t0,t1,t2);}

C_noret_decl(trf_4906)
static void C_fcall trf_4906(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4906(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4906(t0,t1,t2);}

C_noret_decl(trf_4932)
static void C_fcall trf_4932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4932(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4932(t0,t1,t2,t3);}

C_noret_decl(trf_4837)
static void C_fcall trf_4837(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4837(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4837(t0,t1,t2,t3);}

C_noret_decl(trf_4717)
static void C_fcall trf_4717(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4717(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4717(t0,t1,t2);}

C_noret_decl(trf_4610)
static void C_fcall trf_4610(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4610(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4610(t0,t1,t2);}

C_noret_decl(trf_4354)
static void C_fcall trf_4354(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4354(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4354(t0,t1);}

C_noret_decl(trf_4365)
static void C_fcall trf_4365(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4365(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4365(t0,t1);}

C_noret_decl(trf_4371)
static void C_fcall trf_4371(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4371(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4371(t0,t1);}

C_noret_decl(trf_4486)
static void C_fcall trf_4486(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4486(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4486(t0,t1,t2);}

C_noret_decl(trf_4437)
static void C_fcall trf_4437(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4437(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4437(t0,t1,t2);}

C_noret_decl(trf_4082)
static void C_fcall trf_4082(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4082(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4082(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4111)
static void C_fcall trf_4111(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4111(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4111(t0,t1);}

C_noret_decl(trf_4122)
static void C_fcall trf_4122(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4122(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4122(t0,t1);}

C_noret_decl(trf_4128)
static void C_fcall trf_4128(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4128(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4128(t0,t1);}

C_noret_decl(trf_4250)
static void C_fcall trf_4250(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4250(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4250(t0,t1,t2);}

C_noret_decl(trf_4191)
static void C_fcall trf_4191(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4191(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4191(t0,t1,t2);}

C_noret_decl(trf_3845)
static void C_fcall trf_3845(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3845(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3845(t0,t1);}

C_noret_decl(trf_3856)
static void C_fcall trf_3856(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3856(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3856(t0,t1);}

C_noret_decl(trf_3862)
static void C_fcall trf_3862(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3862(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3862(t0,t1);}

C_noret_decl(trf_3988)
static void C_fcall trf_3988(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3988(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3988(t0,t1,t2);}

C_noret_decl(trf_3925)
static void C_fcall trf_3925(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3925(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3925(t0,t1,t2);}

C_noret_decl(trf_3683)
static void C_fcall trf_3683(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3683(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3683(t0,t1,t2);}

C_noret_decl(trf_3698)
static void C_fcall trf_3698(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3698(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3698(t0,t1,t2);}

C_noret_decl(trf_3760)
static void C_fcall trf_3760(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3760(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3760(t0,t1,t2);}

C_noret_decl(trf_3590)
static void C_fcall trf_3590(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3590(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3590(t0,t1,t2);}

C_noret_decl(trf_3613)
static void C_fcall trf_3613(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3613(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3613(t0,t1,t2);}

C_noret_decl(trf_3197)
static void C_fcall trf_3197(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3197(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3197(t0,t1);}

C_noret_decl(trf_3200)
static void C_fcall trf_3200(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3200(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3200(t0,t1);}

C_noret_decl(trf_3203)
static void C_fcall trf_3203(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3203(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3203(t0,t1);}

C_noret_decl(trf_3238)
static void C_fcall trf_3238(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3238(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3238(t0,t1,t2);}

C_noret_decl(trf_3249)
static void C_fcall trf_3249(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3249(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3249(t0,t1,t2);}

C_noret_decl(trf_3088)
static void C_fcall trf_3088(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3088(void *dummy){
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
f_3088(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_3058)
static void C_fcall trf_3058(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3058(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3058(t0,t1,t2);}

C_noret_decl(trf_2996)
static void C_fcall trf_2996(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2996(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2996(t0,t1);}

C_noret_decl(trf_2987)
static void C_fcall trf_2987(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2987(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2987(t0,t1,t2);}

C_noret_decl(trf_2968)
static void C_fcall trf_2968(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2968(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2968(t0,t1,t2,t3);}

C_noret_decl(trf_2855)
static void C_fcall trf_2855(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2855(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2855(t0,t1);}

C_noret_decl(trf_2846)
static void C_fcall trf_2846(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2846(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2846(t0,t1,t2);}

C_noret_decl(trf_2827)
static void C_fcall trf_2827(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2827(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2827(t0,t1,t2,t3);}

C_noret_decl(trf_2248)
static void C_fcall trf_2248(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2248(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2248(t0,t1);}

C_noret_decl(trf_2367)
static void C_fcall trf_2367(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2367(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2367(t0,t1,t2,t3);}

C_noret_decl(trf_2702)
static void C_fcall trf_2702(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2702(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2702(t0,t1,t2);}

C_noret_decl(trf_2690)
static void C_fcall trf_2690(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2690(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2690(t0,t1,t2);}

C_noret_decl(trf_2623)
static void C_fcall trf_2623(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2623(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2623(t0,t1,t2);}

C_noret_decl(trf_2597)
static void C_fcall trf_2597(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2597(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2597(t0,t1,t2);}

C_noret_decl(trf_2316)
static void C_fcall trf_2316(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2316(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2316(t0,t1,t2,t3);}

C_noret_decl(trf_2350)
static void C_fcall trf_2350(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2350(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2350(t0,t1);}

C_noret_decl(trf_2353)
static void C_fcall trf_2353(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2353(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2353(t0,t1);}

C_noret_decl(trf_2251)
static void C_fcall trf_2251(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2251(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2251(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2268)
static void C_fcall trf_2268(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2268(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2268(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1571)
static void C_fcall trf_1571(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1571(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1571(t0,t1);}

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
C_srfi_2d69_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_2d69_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_2d69_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(925)){
C_save(t1);
C_rereclaim2(925*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,116);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],20,"\003sysnumber-hash-hook");
lf[4]=C_h_intern(&lf[4],11,"number-hash");
lf[5]=C_h_intern(&lf[5],15,"\003syssignal-hook");
lf[6]=C_h_intern(&lf[6],5,"\000type");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid number");
lf[8]=C_h_intern(&lf[8],9,"\003syserror");
lf[9]=C_h_intern(&lf[9],15,"object-uid-hash");
lf[10]=C_h_intern(&lf[10],11,"symbol-hash");
lf[11]=C_h_intern(&lf[11],17,"\003syscheck-keyword");
lf[12]=C_h_intern(&lf[12],11,"\000type-error");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000!bad argument type - not a keyword");
lf[14]=C_h_intern(&lf[14],8,"keyword\077");
lf[15]=C_h_intern(&lf[15],12,"keyword-hash");
lf[16]=C_h_intern(&lf[16],8,"eq\077-hash");
lf[17]=C_h_intern(&lf[17],16,"hash-by-identity");
lf[18]=C_h_intern(&lf[18],9,"eqv\077-hash");
lf[19]=C_h_intern(&lf[19],11,"input-port\077");
lf[20]=C_h_intern(&lf[20],11,"equal\077-hash");
lf[21]=C_h_intern(&lf[21],4,"hash");
lf[22]=C_h_intern(&lf[22],11,"string-hash");
lf[23]=C_h_intern(&lf[23],13,"\003syssubstring");
lf[24]=C_h_intern(&lf[24],15,"\003syscheck-range");
lf[25]=C_h_intern(&lf[25],14,"string-ci-hash");
lf[26]=C_h_intern(&lf[26],14,"string-hash-ci");
lf[28]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\0013\376\003\000\000\002\376\377\001\000\000\002i\376\003\000\000\002\376\377\001\000\000\004\325\376\003\000\000\002\376\377\001\000\000\011\255\376\003\000\000\002\376\377\001\000\000\023]\376\003\000\000\002\376\377\001\000\000&\303\376\003\000\000\002\376\377\001"
"\000\000M\215\376\003\000\000\002\376\377\001\000\000\233\035\376\003\000\000\002\376\377\001\000\0016\077\376\003\000\000\002\376\377\001\000\002l\201\376\003\000\000\002\376\377\001\000\004\331\005\376\003\000\000\002\376\377\001\000\011\262\025\376\003\000\000\002\376\377\001\000\023dA\376\003\000\000"
"\002\376\377\001\000&\310\205\376\003\000\000\002\376\377\001\000M\221\037\376\003\000\000\002\376\377\001\000\233\042I\376\003\000\000\002\376\377\001\0016D\277\376\003\000\000\002\376\377\001\002l\211\207\376\003\000\000\002\376\377\001\004\331\023\027\376\003\000\000\002\376\377\001\011\262&1"
"\376\003\000\000\002\376\377\001\023dLq\376\003\000\000\002\376\377\001&\310\230\373\376\003\000\000\002\376\377\001\077\377\377\377\376\377\016");
lf[30]=C_h_intern(&lf[30],11,"make-vector");
lf[32]=C_h_intern(&lf[32],10,"hash-table");
lf[33]=C_h_intern(&lf[33],3,"eq\077");
lf[34]=C_h_intern(&lf[34],4,"eqv\077");
lf[35]=C_h_intern(&lf[35],6,"equal\077");
lf[36]=C_h_intern(&lf[36],8,"string=\077");
lf[37]=C_h_intern(&lf[37],11,"string-ci=\077");
lf[38]=C_h_intern(&lf[38],1,"=");
lf[39]=C_h_intern(&lf[39],15,"make-hash-table");
lf[40]=C_decode_literal(C_heaptop,"\376U0.5\000");
lf[41]=C_decode_literal(C_heaptop,"\376U0.8\000");
lf[42]=C_h_intern(&lf[42],7,"warning");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\033user test without user hash");
lf[44]=C_h_intern(&lf[44],5,"error");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\036min-load greater than max-load");
lf[46]=C_h_intern(&lf[46],5,"\000test");
lf[47]=C_h_intern(&lf[47],17,"\003syscheck-closure");
lf[48]=C_h_intern(&lf[48],5,"\000hash");
lf[49]=C_h_intern(&lf[49],5,"\000size");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid size");
lf[51]=C_h_intern(&lf[51],8,"\000initial");
lf[52]=C_h_intern(&lf[52],9,"\000min-load");
lf[53]=C_decode_literal(C_heaptop,"\376U0.0\000");
lf[54]=C_decode_literal(C_heaptop,"\376U1.0\000");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\020invalid min-load");
lf[56]=C_h_intern(&lf[56],17,"\003syscheck-inexact");
lf[57]=C_h_intern(&lf[57],9,"\000max-load");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\020invalid max-load");
lf[59]=C_h_intern(&lf[59],10,"\000weak-keys");
lf[60]=C_h_intern(&lf[60],12,"\000weak-values");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\017unknown keyword");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\025missing keyword value");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\017missing keyword");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid size");
lf[65]=C_h_intern(&lf[65],11,"hash-table\077");
lf[66]=C_h_intern(&lf[66],15,"hash-table-size");
lf[67]=C_h_intern(&lf[67],31,"hash-table-equivalence-function");
lf[68]=C_h_intern(&lf[68],24,"hash-table-hash-function");
lf[69]=C_h_intern(&lf[69],19,"hash-table-min-load");
lf[70]=C_h_intern(&lf[70],19,"hash-table-max-load");
lf[71]=C_h_intern(&lf[71],20,"hash-table-weak-keys");
lf[72]=C_h_intern(&lf[72],22,"hash-table-weak-values");
lf[73]=C_h_intern(&lf[73],23,"hash-table-has-initial\077");
lf[74]=C_h_intern(&lf[74],18,"hash-table-initial");
lf[75]=C_h_intern(&lf[75],18,"hash-table-resize!");
lf[77]=C_h_intern(&lf[77],15,"hash-table-copy");
lf[78]=C_h_intern(&lf[78],18,"hash-table-update!");
lf[79]=C_h_intern(&lf[79],5,"floor");
lf[80]=C_h_intern(&lf[80],13,"\000access-error");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\037hash-table does not contain key");
lf[83]=C_h_intern(&lf[83],26,"hash-table-update!/default");
lf[84]=C_h_intern(&lf[84],15,"hash-table-set!");
lf[85]=C_h_intern(&lf[85],19,"\003sysundefined-value");
lf[86]=C_h_intern(&lf[86],14,"hash-table-ref");
lf[87]=C_h_intern(&lf[87],22,"hash-table-ref/default");
lf[88]=C_h_intern(&lf[88],18,"hash-table-exists\077");
lf[89]=C_h_intern(&lf[89],18,"hash-table-delete!");
lf[90]=C_h_intern(&lf[90],18,"hash-table-remove!");
lf[91]=C_h_intern(&lf[91],17,"hash-table-clear!");
lf[92]=C_h_intern(&lf[92],12,"vector-fill!");
lf[94]=C_h_intern(&lf[94],17,"hash-table-merge!");
lf[95]=C_h_intern(&lf[95],16,"hash-table-merge");
lf[96]=C_h_intern(&lf[96],17,"hash-table->alist");
lf[97]=C_h_intern(&lf[97],17,"alist->hash-table");
lf[98]=C_h_intern(&lf[98],8,"for-each");
lf[99]=C_h_intern(&lf[99],15,"hash-table-keys");
lf[100]=C_h_intern(&lf[100],17,"hash-table-values");
lf[103]=C_h_intern(&lf[103],15,"hash-table-fold");
lf[104]=C_h_intern(&lf[104],19,"hash-table-for-each");
lf[105]=C_h_intern(&lf[105],15,"hash-table-walk");
lf[106]=C_h_intern(&lf[106],14,"hash-table-map");
lf[107]=C_h_intern(&lf[107],9,"\003sysprint");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\002)>");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\016#<hash-table (");
lf[110]=C_h_intern(&lf[110],27,"\003sysregister-record-printer");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\037hash-table does not contain key");
lf[112]=C_h_intern(&lf[112],18,"getter-with-setter");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\035(hash-table-ref ht key . def)");
lf[114]=C_h_intern(&lf[114],17,"register-feature!");
lf[115]=C_h_intern(&lf[115],7,"srfi-69");
C_register_lf2(lf,116,create_ptable());
t2=C_mutate(&lf[0] /* (set! c112 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1387,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:38: register-feature! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[114]+1)))(3,*((C_word*)lf[114]+1),t3,lf[115]);}

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
C_word ab[114],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1387,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#number-hash-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1389,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[4]+1 /* (set! number-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1395,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[9]+1 /* (set! object-uid-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1598,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[10]+1 /* (set! symbol-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1662,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#check-keyword ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1735,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[15]+1 /* (set! keyword-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1761,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[16]+1 /* (set! eq?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1915,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[17]+1 /* (set! hash-by-identity ...) */,*((C_word*)lf[16]+1));
t10=C_mutate((C_word*)lf[18]+1 /* (set! eqv?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2189,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[3] /* (set! *equal?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2248,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[20]+1 /* (set! equal?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2714,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[21]+1 /* (set! hash ...) */,*((C_word*)lf[20]+1));
t14=C_mutate((C_word*)lf[22]+1 /* (set! string-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2774,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[25]+1 /* (set! string-ci-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2915,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[26]+1 /* (set! string-hash-ci ...) */,*((C_word*)lf[25]+1));
t17=C_mutate(&lf[27] /* (set! constant665 ...) */,lf[28]);
t18=C_mutate(&lf[29] /* (set! hash-table-canonical-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3058,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t19=*((C_word*)lf[30]+1);
t20=C_mutate(&lf[31] /* (set! *make-hash-table ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3088,a[2]=t19,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp));
t21=*((C_word*)lf[33]+1);
t22=*((C_word*)lf[34]+1);
t23=*((C_word*)lf[35]+1);
t24=*((C_word*)lf[36]+1);
t25=*((C_word*)lf[37]+1);
t26=*((C_word*)lf[38]+1);
t27=C_mutate((C_word*)lf[39]+1 /* (set! make-hash-table ...) */,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3119,a[2]=t26,a[3]=t25,a[4]=t24,a[5]=t23,a[6]=t22,a[7]=t21,a[8]=((C_word)li32),tmp=(C_word)a,a+=9,tmp));
t28=C_mutate((C_word*)lf[65]+1 /* (set! hash-table? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3482,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[66]+1 /* (set! hash-table-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3488,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[67]+1 /* (set! hash-table-equivalence-function ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3497,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[68]+1 /* (set! hash-table-hash-function ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3506,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[69]+1 /* (set! hash-table-min-load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3515,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[70]+1 /* (set! hash-table-max-load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3524,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[71]+1 /* (set! hash-table-weak-keys ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3533,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[72]+1 /* (set! hash-table-weak-values ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3542,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[73]+1 /* (set! hash-table-has-initial? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3551,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[74]+1 /* (set! hash-table-initial ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3563,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[75]+1 /* (set! hash-table-resize! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3657,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t39=*((C_word*)lf[30]+1);
t40=C_mutate(&lf[76] /* (set! *hash-table-copy ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3683,a[2]=t39,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp));
t41=C_mutate((C_word*)lf[77]+1 /* (set! hash-table-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3795,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t42=*((C_word*)lf[33]+1);
t43=C_mutate((C_word*)lf[78]+1 /* (set! hash-table-update! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3804,a[2]=t42,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp));
t44=*((C_word*)lf[33]+1);
t45=C_mutate(&lf[82] /* (set! *hash-table-update!/default ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4082,a[2]=t44,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t46=C_mutate((C_word*)lf[83]+1 /* (set! hash-table-update!/default ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4310,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t47=*((C_word*)lf[33]+1);
t48=C_mutate((C_word*)lf[84]+1 /* (set! hash-table-set! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4322,a[2]=t47,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp));
t49=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4538,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t50=*((C_word*)lf[33]+1);
t51=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5569,a[2]=t50,a[3]=((C_word)li109),tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:788: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[112]+1)))(5,*((C_word*)lf[112]+1),t49,t51,*((C_word*)lf[84]+1),lf[113]);}

/* a5568 in k1385 */
static void C_ccall f_5569(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr4r,(void*)f_5569r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5569r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5569r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(11);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5573,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_5573(2,t6,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5689,a[2]=t2,a[3]=t3,a[4]=((C_word)li108),tmp=(C_word)a,a+=5,tmp));}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_5573(2,t7,C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* f_5689 in a5568 in k1385 */
static void C_ccall f_5689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5689,2,t0,t1);}
/* srfi-69.scm:791: ##sys#signal-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(7,*((C_word*)lf[5]+1),t1,lf[80],lf[86],lf[111],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5571 in a5568 in k1385 */
static void C_ccall f_5573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5573,2,t0,t1);}
t2=C_i_check_structure_2(((C_word*)t0)[5],lf[32],lf[86]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:795: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(4,*((C_word*)lf[47]+1),t3,t1,lf[86]);}

/* k5577 in k5571 in a5568 in k1385 */
static void C_ccall f_5579(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5579,2,t0,t1);}
t2=C_slot(((C_word*)t0)[6],C_fix(1));
t3=C_slot(((C_word*)t0)[6],C_fix(3));
t4=C_slot(((C_word*)t0)[6],C_fix(4));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5591,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t6=C_block_size(t2);
/* srfi-69.scm:799: hash */
t7=t4;
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t5,((C_word*)t0)[3],t6);}

/* k5589 in k5577 in k5571 in a5568 in k1385 */
static void C_ccall f_5591(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5591,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[7],((C_word*)t0)[6]);
if(C_truep(t2)){
t3=C_slot(((C_word*)t0)[5],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5606,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5606(t7,((C_word*)t0)[2],t3);}
else{
t3=C_slot(((C_word*)t0)[5],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5648,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word)li107),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_5648(t7,((C_word*)t0)[2],t3);}}

/* loop in k5589 in k5577 in k5571 in a5568 in k1385 */
static void C_fcall f_5648(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5648,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* srfi-69.scm:812: def */
t3=((C_word*)t0)[5];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5667,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_slot(t3,C_fix(0));
/* srfi-69.scm:814: test */
t6=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[2],t5);}}

/* k5665 in loop in k5589 in k5577 in k5571 in a5568 in k1385 */
static void C_ccall f_5667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[4],C_fix(1)));}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm:816: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5648(t3,((C_word*)t0)[5],t2);}}

/* loop in k5589 in k5577 in k5571 in a5568 in k1385 */
static void C_fcall f_5606(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5606,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* srfi-69.scm:804: def */
t3=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[3],t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_slot(t3,C_fix(1)));}
else{
t6=C_slot(t2,C_fix(1));
/* srfi-69.scm:808: loop */
t8=t1;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* k4536 in k1385 */
static void C_ccall f_4538(C_word c,C_word t0,C_word t1){
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
C_word ab[63],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4538,2,t0,t1);}
t2=C_mutate((C_word*)lf[86]+1 /* (set! hash-table-ref ...) */,t1);
t3=*((C_word*)lf[33]+1);
t4=C_mutate((C_word*)lf[87]+1 /* (set! hash-table-ref/default ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4540,a[2]=t3,a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp));
t5=*((C_word*)lf[33]+1);
t6=C_mutate((C_word*)lf[88]+1 /* (set! hash-table-exists? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4646,a[2]=t5,a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp));
t7=*((C_word*)lf[33]+1);
t8=C_mutate((C_word*)lf[89]+1 /* (set! hash-table-delete! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4754,a[2]=t7,a[3]=((C_word)li69),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate((C_word*)lf[90]+1 /* (set! hash-table-remove! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4885,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[91]+1 /* (set! hash-table-clear! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4981,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[93] /* (set! *hash-table-merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4997,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[94]+1 /* (set! hash-table-merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5065,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[95]+1 /* (set! hash-table-merge ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5077,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[96]+1 /* (set! hash-table->alist ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5093,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[97]+1 /* (set! alist->hash-table ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5166,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[99]+1 /* (set! hash-table-keys ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5223,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[100]+1 /* (set! hash-table-values ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5288,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate(&lf[101] /* (set! *hash-table-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5353,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate(&lf[102] /* (set! *hash-table-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5426,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[103]+1 /* (set! hash-table-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5492,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[104]+1 /* (set! hash-table-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5504,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[105]+1 /* (set! hash-table-walk ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5516,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[106]+1 /* (set! hash-table-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5528,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5551,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5553,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:1074: ##sys#register-record-printer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[110]+1)))(4,*((C_word*)lf[110]+1),t24,lf[32],t25);}

/* a5552 in k4536 in k1385 */
static void C_ccall f_5553(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5553,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5557,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:1077: ##sys#print */
t5=*((C_word*)lf[107]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[109],C_SCHEME_FALSE,t3);}

/* k5555 in a5552 in k4536 in k1385 */
static void C_ccall f_5557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5560,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(2));
/* srfi-69.scm:1078: ##sys#print */
t4=*((C_word*)lf[107]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k5558 in k5555 in a5552 in k4536 in k1385 */
static void C_ccall f_5560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1079: ##sys#print */
t2=*((C_word*)lf[107]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[108],C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k5549 in k4536 in k1385 */
static void C_ccall f_5551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* f_5528 in k4536 in k1385 */
static void C_ccall f_5528(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5528,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[32],lf[106]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5535,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:1068: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(4,*((C_word*)lf[47]+1),t5,t3,lf[106]);}

/* k5533 */
static void C_ccall f_5535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5535,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5540,a[2]=((C_word*)t0)[4],a[3]=((C_word)li103),tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:1069: *hash-table-fold */
f_5426(((C_word*)t0)[3],((C_word*)t0)[2],t2,C_SCHEME_END_OF_LIST);}

/* a5539 in k5533 */
static void C_ccall f_5540(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5540,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5548,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:1069: func */
t6=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t5,t2,t3);}

/* k5546 in a5539 in k5533 */
static void C_ccall f_5548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5548,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* f_5516 in k4536 in k1385 */
static void C_ccall f_5516(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5516,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[32],lf[105]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5523,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:1063: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(4,*((C_word*)lf[47]+1),t5,t3,lf[105]);}

/* k5521 */
static void C_ccall f_5523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1064: *hash-table-for-each */
f_5353(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_5504 in k4536 in k1385 */
static void C_ccall f_5504(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5504,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[32],lf[104]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5511,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:1058: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(4,*((C_word*)lf[47]+1),t5,t3,lf[104]);}

/* k5509 */
static void C_ccall f_5511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1059: *hash-table-for-each */
f_5353(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_5492 in k4536 in k1385 */
static void C_ccall f_5492(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5492,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[32],lf[103]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5499,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:1053: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(4,*((C_word*)lf[47]+1),t6,t3,lf[103]);}

/* k5497 */
static void C_ccall f_5499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1054: *hash-table-fold */
f_5426(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* *hash-table-fold in k4536 in k1385 */
static void C_fcall f_5426(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5426,NULL,4,t1,t2,t3,t4);}
t5=C_slot(t2,C_fix(1));
t6=C_block_size(t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5438,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=t6,a[6]=((C_word)li98),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_5438(t10,t1,C_fix(0),t4);}

/* loop in *hash-table-fold in k4536 in k1385 */
static void C_fcall f_5438(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5438,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5454,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word)li97),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_5454(t8,t1,t4,t3);}}

/* fold2 in loop in *hash-table-fold in k4536 in k1385 */
static void C_fcall f_5454(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5454,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:1046: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5438(t5,t1,t4,t3);}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5482,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t4,C_fix(0));
t8=C_slot(t4,C_fix(1));
/* srfi-69.scm:1049: func */
t9=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t9))(5,t9,t6,t7,t8,t3);}}

/* k5480 in fold2 in loop in *hash-table-fold in k4536 in k1385 */
static void C_ccall f_5482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:1048: fold2 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5454(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* *hash-table-for-each in k4536 in k1385 */
static void C_fcall f_5353(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5353,NULL,3,t1,t2,t3);}
t4=C_slot(t2,C_fix(1));
t5=C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5365,a[2]=t7,a[3]=t4,a[4]=t3,a[5]=t5,a[6]=((C_word)li95),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_5365(t9,t1,C_fix(0));}

/* doloop1255 in *hash-table-for-each in k4536 in k1385 */
static void C_fcall f_5365(C_word t0,C_word t1,C_word t2){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5365,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5373,a[2]=((C_word*)t0)[4],a[3]=((C_word)li93),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_i_check_list_2(t4,lf[98]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5394,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5403,a[2]=t3,a[3]=t8,a[4]=((C_word)li94),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_5403(t10,t6,t4);}}

/* for-each-loop1260 in doloop1255 in *hash-table-for-each in k4536 in k1385 */
static void C_fcall f_5403(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5403,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5413,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g12611267 */
t5=((C_word*)t0)[2];
f_5373(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5411 in for-each-loop1260 in doloop1255 in *hash-table-for-each in k4536 in k1385 */
static void C_ccall f_5413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5403(t3,((C_word*)t0)[2],t2);}

/* k5392 in doloop1255 in *hash-table-for-each in k4536 in k1385 */
static void C_ccall f_5394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5365(t3,((C_word*)t0)[2],t2);}

/* g1261 in doloop1255 in *hash-table-for-each in k4536 in k1385 */
static void C_fcall f_5373(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5373,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
/* srfi-69.scm:1034: proc */
t5=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t1,t3,t4);}

/* f_5288 in k4536 in k1385 */
static void C_ccall f_5288(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5288,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[32],lf[100]);
t4=C_slot(t2,C_fix(1));
t5=C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5303,a[2]=t7,a[3]=t4,a[4]=t5,a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_5303(t9,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop */
static void C_fcall f_5303(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5303,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5319,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word)li90),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5319(t8,t1,t4,t3);}}

/* loop2 in loop */
static void C_fcall f_5319(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5319,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:1016: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5303(t5,t1,t4,t3);}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_slot(t5,C_fix(1));
t7=C_a_i_cons(&a,2,t6,t3);
/* srfi-69.scm:1017: loop2 */
t10=t1;
t11=t4;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* f_5223 in k4536 in k1385 */
static void C_ccall f_5223(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5223,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[32],lf[99]);
t4=C_slot(t2,C_fix(1));
t5=C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5238,a[2]=t7,a[3]=t4,a[4]=t5,a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_5238(t9,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop */
static void C_fcall f_5238(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5238,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5254,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word)li87),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5254(t8,t1,t4,t3);}}

/* loop2 in loop */
static void C_fcall f_5254(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5254,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:1001: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5238(t5,t1,t4,t3);}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_slot(t5,C_fix(0));
t7=C_a_i_cons(&a,2,t6,t3);
/* srfi-69.scm:1002: loop2 */
t10=t1;
t11=t4;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* f_5166 in k4536 in k1385 */
static void C_ccall f_5166(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5166r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5166r(t0,t1,t2,t3);}}

static void C_ccall f_5166r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=C_i_check_list_2(t2,lf[97]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5173,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t5,*((C_word*)lf[39]+1),t3);}

/* k5171 */
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5173,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5174,a[2]=t1,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_list_2(t3,lf[98]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5198,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5200,a[2]=t2,a[3]=t7,a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_5200(t9,t5,t3);}

/* for-each-loop1203 in k5171 */
static void C_fcall f_5200(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5200,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5210,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g12041210 */
t5=((C_word*)t0)[2];
f_5174(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5208 in for-each-loop1203 in k5171 */
static void C_ccall f_5210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5200(t3,((C_word*)t0)[2],t2);}

/* k5196 in k5171 */
static void C_ccall f_5198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* g1204 in k5171 */
static void C_fcall f_5174(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5174,NULL,3,t0,t1,t2);}
t3=C_i_check_pair_2(t2,lf[97]);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5187,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
t6=C_slot(t2,C_fix(1));
/* srfi-69.scm:985: *hash-table-update!/default */
t7=lf[82];
f_4082(t7,t1,((C_word*)t0)[2],t4,t5,t6);}

/* a5186 in g1204 in k5171 */
static void C_ccall f_5187(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5187,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_5093 in k4536 in k1385 */
static void C_ccall f_5093(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5093,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[32],lf[96]);
t4=C_slot(t2,C_fix(1));
t5=C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5108,a[2]=t7,a[3]=t4,a[4]=t5,a[5]=((C_word)li81),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_5108(t9,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop */
static void C_fcall f_5108(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5108,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5124,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word)li80),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5124(t8,t1,t4,t3);}}

/* loop2 in loop */
static void C_fcall f_5124(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5124,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:973: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5108(t5,t1,t4,t3);}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_slot(t5,C_fix(0));
t7=C_slot(t5,C_fix(1));
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,t3);
/* srfi-69.scm:974: loop2 */
t12=t1;
t13=t4;
t14=t9;
t1=t12;
t2=t13;
t3=t14;
goto loop;}}

/* f_5077 in k4536 in k1385 */
static void C_ccall f_5077(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5077,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[32],lf[95]);
t5=C_i_check_structure_2(t3,lf[32],lf[95]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5091,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:959: *hash-table-copy */
t7=lf[76];
f_3683(t7,t6,t2);}

/* k5089 */
static void C_ccall f_5091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:959: *hash-table-merge! */
f_4997(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* f_5065 in k4536 in k1385 */
static void C_ccall f_5065(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5065,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[32],lf[94]);
t5=C_i_check_structure_2(t3,lf[32],lf[94]);
/* srfi-69.scm:954: *hash-table-merge! */
f_4997(t1,t2,t3);}

/* *hash-table-merge! in k4536 in k1385 */
static void C_fcall f_4997(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4997,NULL,3,t1,t2,t3);}
t4=C_slot(t3,C_fix(1));
t5=C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5009,a[2]=t4,a[3]=t7,a[4]=t2,a[5]=t5,a[6]=((C_word)li76),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_5009(t9,t1,C_fix(0));}

/* doloop1161 in *hash-table-merge! in k4536 in k1385 */
static void C_fcall f_5009(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_5009,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=((C_word*)t0)[4];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5019,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[2],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5032,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5032(t8,t3,t4);}}

/* doloop1164 in doloop1161 in *hash-table-merge! in k4536 in k1385 */
static void C_fcall f_5032(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_5032,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5045,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t3,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5058,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp);
t7=C_slot(t3,C_fix(1));
/* srfi-69.scm:949: *hash-table-update!/default */
t8=lf[82];
f_4082(t8,t4,((C_word*)t0)[2],t5,t6,t7);}}

/* a5057 in doloop1164 in doloop1161 in *hash-table-merge! in k4536 in k1385 */
static void C_ccall f_5058(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5058,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5043 in doloop1164 in doloop1161 in *hash-table-merge! in k4536 in k1385 */
static void C_ccall f_5045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5032(t3,((C_word*)t0)[2],t2);}

/* k5017 in doloop1161 in *hash-table-merge! in k4536 in k1385 */
static void C_ccall f_5019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5009(t3,((C_word*)t0)[2],t2);}

/* f_4981 in k4536 in k1385 */
static void C_ccall f_4981(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4981,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[32],lf[91]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4988,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(1));
/* srfi-69.scm:936: vector-fill! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[92]+1)))(4,*((C_word*)lf[92]+1),t4,t5,C_SCHEME_END_OF_LIST);}

/* k4986 */
static void C_ccall f_4988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[2],C_fix(2),C_fix(0)));}

/* f_4885 in k4536 in k1385 */
static void C_ccall f_4885(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4885,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[32],lf[90]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4892,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:913: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(4,*((C_word*)lf[47]+1),t5,t3,lf[90]);}

/* k4890 */
static void C_ccall f_4892(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4892,2,t0,t1);}
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=C_block_size(t2);
t4=C_slot(((C_word*)t0)[4],C_fix(2));
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4906,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t8,a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word)li71),tmp=(C_word)a,a+=9,tmp));
t10=((C_word*)t8)[1];
f_4906(t10,((C_word*)t0)[2],C_fix(0));}

/* doloop1136 in k4890 */
static void C_fcall f_4906(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4906,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[7]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)((C_word*)t0)[5])[1]));}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4919,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4932,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word)li70),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_4932(t8,t3,C_SCHEME_FALSE,t4);}}

/* loop in doloop1136 in k4890 */
static void C_fcall f_4932(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4932,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=C_slot(t3,C_fix(0));
t5=C_slot(t3,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4951,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t5,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t7=C_slot(t4,C_fix(0));
t8=C_slot(t4,C_fix(1));
/* srfi-69.scm:923: func */
t9=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t6,t7,t8);}}

/* k4949 in loop in doloop1136 in k4890 */
static void C_ccall f_4951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[9])?C_i_setslot(((C_word*)t0)[9],C_fix(1),((C_word*)t0)[8]):C_i_setslot(((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[8]));
t3=C_fixnum_difference(((C_word*)((C_word*)t0)[5])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}
else{
/* srfi-69.scm:930: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4932(t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[8]);}}

/* k4917 in doloop1136 in k4890 */
static void C_ccall f_4919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4906(t3,((C_word*)t0)[2],t2);}

/* f_4754 in k4536 in k1385 */
static void C_ccall f_4754(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4754,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[32],lf[89]);
t5=C_slot(t2,C_fix(1));
t6=C_block_size(t5);
t7=C_slot(t2,C_fix(4));
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4770,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t5,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:877: hash */
t9=t7;
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t8,t3,t6);}

/* k4768 */
static void C_ccall f_4770(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4770,2,t0,t1);}
t2=C_slot(((C_word*)t0)[6],C_fix(3));
t3=C_slot(((C_word*)t0)[6],C_fix(2));
t4=C_fixnum_difference(t3,C_fix(1));
t5=C_slot(((C_word*)t0)[5],t1);
t6=C_eqp(((C_word*)t0)[4],t2);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4790,a[2]=t4,a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],a[7]=((C_word)li67),tmp=(C_word)a,a+=8,tmp);
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,f_4790(t7,C_SCHEME_FALSE,t5));}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4837,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t8,a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[5],a[9]=((C_word)li68),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_4837(t10,((C_word*)t0)[2],C_SCHEME_FALSE,t5);}}

/* loop in k4768 */
static void C_fcall f_4837(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4837,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=C_slot(t3,C_fix(0));
t5=C_slot(t3,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4856,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t5,a[10]=t2,tmp=(C_word)a,a+=11,tmp);
t7=C_slot(t4,C_fix(0));
/* srfi-69.scm:900: test */
t8=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t8))(4,t8,t6,((C_word*)t0)[2],t7);}}

/* k4854 in loop in k4768 */
static void C_ccall f_4856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[10])?C_i_setslot(((C_word*)t0)[10],C_fix(1),((C_word*)t0)[9]):C_i_setslot(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[9]));
t3=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[5]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}
else{
/* srfi-69.scm:907: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4837(t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[9]);}}

/* loop in k4768 */
static C_word C_fcall f_4790(C_word t0,C_word t1,C_word t2){
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
C_stack_check;
loop:
if(C_truep(C_i_nullp(t2))){
return(C_SCHEME_FALSE);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
t5=C_slot(t3,C_fix(0));
t6=C_eqp(((C_word*)t0)[6],t5);
if(C_truep(t6)){
t7=(C_truep(t1)?C_i_setslot(t1,C_fix(1),t4):C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t4));
t8=C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),((C_word*)t0)[2]);
return(C_SCHEME_TRUE);}
else{
t10=t2;
t11=t4;
t1=t10;
t2=t11;
goto loop;}}}

/* f_4646 in k4536 in k1385 */
static void C_ccall f_4646(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4646,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[32],lf[88]);
t5=C_slot(t2,C_fix(1));
t6=C_slot(t2,C_fix(3));
t7=C_slot(t2,C_fix(4));
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4662,a[2]=t1,a[3]=t3,a[4]=t5,a[5]=t6,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t9=C_block_size(t5);
/* srfi-69.scm:853: hash */
t10=t7;
((C_proc4)C_fast_retrieve_proc(t10))(4,t10,t8,t3,t9);}

/* k4660 */
static void C_ccall f_4662(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4662,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[6],((C_word*)t0)[5]);
if(C_truep(t2)){
t3=C_slot(((C_word*)t0)[4],t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4677,a[2]=((C_word*)t0)[3],a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_4677(t4,t3));}
else{
t3=C_slot(((C_word*)t0)[4],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4717,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=((C_word)li65),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4717(t7,((C_word*)t0)[2],t3);}}

/* loop in k4660 */
static void C_fcall f_4717(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4717,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4730,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t3,C_fix(0));
/* srfi-69.scm:865: test */
t6=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[2],t5);}}

/* k4728 in loop in k4660 */
static void C_ccall f_4730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm:866: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4717(t3,((C_word*)t0)[4],t2);}}

/* loop in k4660 */
static C_word C_fcall f_4677(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
loop:
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t2=C_slot(t1,C_fix(0));
t3=C_slot(t2,C_fix(0));
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(t4);}
else{
t5=C_slot(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}}}

/* f_4540 in k4536 in k1385 */
static void C_ccall f_4540(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4540,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[32],lf[87]);
t6=C_slot(t2,C_fix(1));
t7=C_slot(t2,C_fix(3));
t8=C_slot(t2,C_fix(4));
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4556,a[2]=t1,a[3]=t3,a[4]=t4,a[5]=t6,a[6]=t7,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t10=C_block_size(t6);
/* srfi-69.scm:827: hash */
t11=t8;
((C_proc4)C_fast_retrieve_proc(t11))(4,t11,t9,t3,t10);}

/* k4554 */
static void C_ccall f_4556(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4556,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[7],((C_word*)t0)[6]);
if(C_truep(t2)){
t3=C_slot(((C_word*)t0)[5],t1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4571,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li61),tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_4571(t4,t3));}
else{
t3=C_slot(((C_word*)t0)[5],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4610,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word)li62),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_4610(t7,((C_word*)t0)[2],t3);}}

/* loop in k4554 */
static void C_fcall f_4610(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4610,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[5];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4626,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_slot(t3,C_fix(0));
/* srfi-69.scm:842: test */
t6=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[2],t5);}}

/* k4624 in loop in k4554 */
static void C_ccall f_4626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[4],C_fix(1)));}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm:844: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4610(t3,((C_word*)t0)[5],t2);}}

/* loop in k4554 */
static C_word C_fcall f_4571(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_check;
loop:
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[3];
return(t2);}
else{
t2=C_slot(t1,C_fix(0));
t3=C_slot(t2,C_fix(0));
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(C_slot(t2,C_fix(1)));}
else{
t5=C_slot(t1,C_fix(1));
t8=t5;
t1=t8;
goto loop;}}}

/* f_4322 in k1385 */
static void C_ccall f_4322(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[23],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4322,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[32],lf[84]);
t6=C_slot(t2,C_fix(2));
t7=C_fixnum_plus(t6,C_fix(1));
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4405,a[2]=t7,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t9=t2;
t10=C_slot(t9,C_fix(1));
t11=C_slot(t9,C_fix(5));
t12=C_slot(t9,C_fix(6));
t13=C_block_size(t10);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4354,a[2]=t12,a[3]=t7,a[4]=t13,a[5]=t10,a[6]=t9,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4398,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
t16=C_a_i_times(&a,2,t13,t11);
/* srfi-69.scm:615: floor */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(3,*((C_word*)lf[79]+1),t15,t16);}

/* k4396 */
static void C_ccall f_4398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_4354(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_4354(t3,t2);}}

/* k4352 */
static void C_fcall f_4354(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4354,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4365,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4390,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_times(&a,2,((C_word*)t0)[4],((C_word*)t0)[2]);
/* srfi-69.scm:616: floor */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(3,*((C_word*)lf[79]+1),t3,t4);}

/* k4388 in k4352 */
static void C_ccall f_4390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_4365(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_4365(t3,t2);}}

/* k4363 in k4352 */
static void C_fcall f_4365(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4365,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4371,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[4],C_fix(1073741823)))){
t3=C_fixnum_less_or_equal_p(((C_word*)t0)[3],((C_word*)t0)[2]);
t4=t2;
f_4371(t4,(C_truep(t3)?C_fixnum_less_or_equal_p(((C_word*)t0)[2],t1):C_SCHEME_FALSE));}
else{
t3=t2;
f_4371(t3,C_SCHEME_FALSE);}}

/* k4369 in k4363 in k4352 */
static void C_fcall f_4371(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* srfi-69.scm:619: hash-table-resize! */
t2=*((C_word*)lf[75]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
f_4405(2,t3,t2);}}

/* k4403 */
static void C_ccall f_4405(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4405,2,t0,t1);}
t2=C_slot(((C_word*)t0)[7],C_fix(4));
t3=C_slot(((C_word*)t0)[7],C_fix(3));
t4=C_slot(((C_word*)t0)[7],C_fix(1));
t5=C_block_size(t4);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm:760: hash */
t7=t2;
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[4],t5);}

/* k4418 in k4403 */
static void C_ccall f_4420(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4420,2,t0,t1);}
t2=C_slot(((C_word*)t0)[9],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4426,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t4=C_eqp(((C_word*)t0)[7],((C_word*)t0)[6]);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4437,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[9],a[7]=t2,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word)li58),tmp=(C_word)a,a+=11,tmp));
t8=((C_word*)t6)[1];
f_4437(t8,t3,t2);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4486,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=t2,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word)li59),tmp=(C_word)a,a+=12,tmp));
t8=((C_word*)t6)[1];
f_4486(t8,t3,t2);}}

/* loop in k4418 in k4403 */
static void C_fcall f_4486(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4486,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,((C_word*)t0)[10],((C_word*)t0)[9]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[8]);
t5=C_i_setslot(((C_word*)t0)[7],((C_word*)t0)[6],t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_set_i_slot(((C_word*)t0)[5],C_fix(2),((C_word*)t0)[4]));}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4516,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t3,C_fix(0));
/* srfi-69.scm:780: test */
t6=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[10],t5);}}

/* k4514 in loop in k4418 in k4403 */
static void C_ccall f_4516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_setslot(((C_word*)t0)[5],C_fix(1),((C_word*)t0)[4]));}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm:782: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4486(t3,((C_word*)t0)[6],t2);}}

/* loop in k4418 in k4403 */
static void C_fcall f_4437(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4437,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[8]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[7]);
t5=C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_set_i_slot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]));}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[9],t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_setslot(t3,C_fix(1),((C_word*)t0)[8]));}
else{
t6=C_slot(t2,C_fix(1));
/* srfi-69.scm:772: loop */
t11=t1;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}}

/* k4424 in k4418 in k4403 */
static void C_ccall f_4426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[85]+1));}

/* f_4310 in k1385 */
static void C_ccall f_4310(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4310,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_check_structure_2(t2,lf[32],lf[83]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4317,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:747: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(4,*((C_word*)lf[47]+1),t7,t4,lf[83]);}

/* k4315 */
static void C_ccall f_4317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:748: *hash-table-update!/default */
t2=lf[82];
f_4082(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* *hash-table-update!/default in k1385 */
static void C_fcall f_4082(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4082,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_slot(t2,C_fix(2));
t7=C_fixnum_plus(t6,C_fix(1));
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4162,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t7,a[6]=t3,a[7]=((C_word*)t0)[2],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t9=t2;
t10=C_slot(t9,C_fix(1));
t11=C_slot(t9,C_fix(5));
t12=C_slot(t9,C_fix(6));
t13=C_block_size(t10);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4111,a[2]=t12,a[3]=t7,a[4]=t13,a[5]=t10,a[6]=t9,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4155,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
t16=C_a_i_times(&a,2,t13,t11);
/* srfi-69.scm:615: floor */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(3,*((C_word*)lf[79]+1),t15,t16);}

/* k4153 in *hash-table-update!/default in k1385 */
static void C_ccall f_4155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_4111(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_4111(t3,t2);}}

/* k4109 in *hash-table-update!/default in k1385 */
static void C_fcall f_4111(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4111,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4122,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4147,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_times(&a,2,((C_word*)t0)[4],((C_word*)t0)[2]);
/* srfi-69.scm:616: floor */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(3,*((C_word*)lf[79]+1),t3,t4);}

/* k4145 in k4109 in *hash-table-update!/default in k1385 */
static void C_ccall f_4147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_4122(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_4122(t3,t2);}}

/* k4120 in k4109 in *hash-table-update!/default in k1385 */
static void C_fcall f_4122(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4122,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4128,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[4],C_fix(1073741823)))){
t3=C_fixnum_less_or_equal_p(((C_word*)t0)[3],((C_word*)t0)[2]);
t4=t2;
f_4128(t4,(C_truep(t3)?C_fixnum_less_or_equal_p(((C_word*)t0)[2],t1):C_SCHEME_FALSE));}
else{
t3=t2;
f_4128(t3,C_SCHEME_FALSE);}}

/* k4126 in k4120 in k4109 in *hash-table-update!/default in k1385 */
static void C_fcall f_4128(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* srfi-69.scm:619: hash-table-resize! */
t2=*((C_word*)lf[75]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
f_4162(2,t3,t2);}}

/* k4160 in *hash-table-update!/default in k1385 */
static void C_ccall f_4162(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4162,2,t0,t1);}
t2=C_slot(((C_word*)t0)[8],C_fix(4));
t3=C_slot(((C_word*)t0)[8],C_fix(3));
t4=C_slot(((C_word*)t0)[8],C_fix(1));
t5=C_block_size(t4);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=((C_word*)t0)[7],a[10]=t4,tmp=(C_word)a,a+=11,tmp);
/* srfi-69.scm:715: hash */
t7=t2;
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[6],t5);}

/* k4175 in k4160 in *hash-table-update!/default in k1385 */
static void C_ccall f_4177(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4177,2,t0,t1);}
t2=C_slot(((C_word*)t0)[10],t1);
t3=C_eqp(((C_word*)t0)[9],((C_word*)t0)[8]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4191,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[10],a[9]=t2,a[10]=((C_word*)t0)[7],a[11]=((C_word)li54),tmp=(C_word)a,a+=12,tmp));
t7=((C_word*)t5)[1];
f_4191(t7,((C_word*)t0)[2],t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4250,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,a[9]=((C_word*)t0)[10],a[10]=t2,a[11]=((C_word*)t0)[7],a[12]=((C_word)li55),tmp=(C_word)a,a+=13,tmp));
t7=((C_word*)t5)[1];
f_4250(t7,((C_word*)t0)[2],t2);}}

/* loop in k4175 in k4160 in *hash-table-update!/default in k1385 */
static void C_fcall f_4250(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4250,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4260,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm:734: func */
t4=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4283,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t3,C_fix(0));
/* srfi-69.scm:739: test */
t6=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[11],t5);}}

/* k4281 in loop in k4175 in k4160 in *hash-table-update!/default in k1385 */
static void C_ccall f_4283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4283,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4286,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[6],C_fix(1));
/* srfi-69.scm:740: func */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm:743: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4250(t3,((C_word*)t0)[5],t2);}}

/* k4284 in k4281 in loop in k4175 in k4160 in *hash-table-update!/default in k1385 */
static void C_ccall f_4286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k4258 in loop in k4175 in k4160 in *hash-table-update!/default in k1385 */
static void C_ccall f_4260(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4260,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
t4=C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t3);
t5=C_i_set_i_slot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t6=t1;
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* loop in k4175 in k4160 in *hash-table-update!/default in k1385 */
static void C_fcall f_4191(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(9);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4191,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4201,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm:721: func */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[3]);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[10],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4227,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=C_slot(t3,C_fix(1));
/* srfi-69.scm:727: func */
t8=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t6,t7);}
else{
t6=C_slot(t2,C_fix(1));
/* srfi-69.scm:730: loop */
t11=t1;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}}

/* k4225 in loop in k4175 in k4160 in *hash-table-update!/default in k1385 */
static void C_ccall f_4227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k4199 in loop in k4175 in k4160 in *hash-table-update!/default in k1385 */
static void C_ccall f_4201(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4201,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
t4=C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t3);
t5=C_i_set_i_slot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t6=t1;
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* f_3804 in k1385 */
static void C_ccall f_3804(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr5r,(void*)f_3804r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_3804r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_3804r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(12);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3808,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nullp(t5))){
t7=C_slot(t2,C_fix(9));
if(C_truep(t7)){
t8=t6;
f_3808(2,t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4060,a[2]=t2,a[3]=t3,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp);
t9=t6;
f_3808(2,t9,t8);}}
else{
t7=C_i_cdr(t5);
if(C_truep(C_i_nullp(t7))){
t8=t6;
f_3808(2,t8,C_i_car(t5));}
else{
/* ##sys#error */
t8=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,lf[0],t5);}}}

/* f_4060 */
static void C_ccall f_4060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4060,2,t0,t1);}
/* srfi-69.scm:663: ##sys#signal-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(7,*((C_word*)lf[5]+1),t1,lf[80],lf[78],lf[81],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3806 */
static void C_ccall f_3808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3808,2,t0,t1);}
t2=C_i_check_structure_2(((C_word*)t0)[6],lf[32],lf[78]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3814,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:668: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(4,*((C_word*)lf[47]+1),t3,((C_word*)t0)[3],lf[78]);}

/* k3812 in k3806 */
static void C_ccall f_3814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3814,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:669: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(4,*((C_word*)lf[47]+1),t2,((C_word*)t0)[3],lf[78]);}

/* k3815 in k3812 in k3806 */
static void C_ccall f_3817(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3817,2,t0,t1);}
t2=C_slot(((C_word*)t0)[7],C_fix(2));
t3=C_fixnum_plus(t2,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3896,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t5=((C_word*)t0)[7];
t6=C_slot(t5,C_fix(1));
t7=C_slot(t5,C_fix(5));
t8=C_slot(t5,C_fix(6));
t9=C_block_size(t6);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3845,a[2]=t8,a[3]=t3,a[4]=t9,a[5]=t6,a[6]=t5,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3889,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
t12=C_a_i_times(&a,2,t9,t7);
/* srfi-69.scm:615: floor */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(3,*((C_word*)lf[79]+1),t11,t12);}

/* k3887 in k3815 in k3812 in k3806 */
static void C_ccall f_3889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_3845(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_3845(t3,t2);}}

/* k3843 in k3815 in k3812 in k3806 */
static void C_fcall f_3845(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3845,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3856,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3881,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_times(&a,2,((C_word*)t0)[4],((C_word*)t0)[2]);
/* srfi-69.scm:616: floor */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(3,*((C_word*)lf[79]+1),t3,t4);}

/* k3879 in k3843 in k3815 in k3812 in k3806 */
static void C_ccall f_3881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_3856(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_3856(t3,t2);}}

/* k3854 in k3843 in k3815 in k3812 in k3806 */
static void C_fcall f_3856(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3856,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3862,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[4],C_fix(1073741823)))){
t3=C_fixnum_less_or_equal_p(((C_word*)t0)[3],((C_word*)t0)[2]);
t4=t2;
f_3862(t4,(C_truep(t3)?C_fixnum_less_or_equal_p(((C_word*)t0)[2],t1):C_SCHEME_FALSE));}
else{
t3=t2;
f_3862(t3,C_SCHEME_FALSE);}}

/* k3860 in k3854 in k3843 in k3815 in k3812 in k3806 */
static void C_fcall f_3862(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* srfi-69.scm:619: hash-table-resize! */
t2=*((C_word*)lf[75]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
f_3896(2,t3,t2);}}

/* k3894 in k3815 in k3812 in k3806 */
static void C_ccall f_3896(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3896,2,t0,t1);}
t2=C_slot(((C_word*)t0)[8],C_fix(4));
t3=C_slot(((C_word*)t0)[8],C_fix(3));
t4=C_slot(((C_word*)t0)[8],C_fix(1));
t5=C_block_size(t4);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3911,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=((C_word*)t0)[7],a[10]=t4,tmp=(C_word)a,a+=11,tmp);
/* srfi-69.scm:676: hash */
t7=t2;
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[6],t5);}

/* k3909 in k3894 in k3815 in k3812 in k3806 */
static void C_ccall f_3911(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3911,2,t0,t1);}
t2=C_slot(((C_word*)t0)[10],t1);
t3=C_eqp(((C_word*)t0)[9],((C_word*)t0)[8]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3925,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[10],a[9]=t2,a[10]=((C_word*)t0)[7],a[11]=((C_word)li50),tmp=(C_word)a,a+=12,tmp));
t7=((C_word*)t5)[1];
f_3925(t7,((C_word*)t0)[2],t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3988,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,a[9]=((C_word*)t0)[10],a[10]=t2,a[11]=((C_word*)t0)[7],a[12]=((C_word)li51),tmp=(C_word)a,a+=13,tmp));
t7=((C_word*)t5)[1];
f_3988(t7,((C_word*)t0)[2],t2);}}

/* loop in k3909 in k3894 in k3815 in k3812 in k3806 */
static void C_fcall f_3988(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3988,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3998,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4016,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:695: thunk */
t5=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t4);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4025,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t3,C_fix(0));
/* srfi-69.scm:700: test */
t6=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[11],t5);}}

/* k4023 in loop in k3909 in k3894 in k3815 in k3812 in k3806 */
static void C_ccall f_4025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4025,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4028,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[6],C_fix(1));
/* srfi-69.scm:701: func */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm:704: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3988(t3,((C_word*)t0)[5],t2);}}

/* k4026 in k4023 in loop in k3909 in k3894 in k3815 in k3812 in k3806 */
static void C_ccall f_4028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k4014 in loop in k3909 in k3894 in k3815 in k3812 in k3806 */
static void C_ccall f_4016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:695: func */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k3996 in loop in k3909 in k3894 in k3815 in k3812 in k3806 */
static void C_ccall f_3998(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3998,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
t4=C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t3);
t5=C_i_set_i_slot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t6=t1;
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* loop in k3909 in k3894 in k3815 in k3812 in k3806 */
static void C_fcall f_3925(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(13);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3925,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3935,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3953,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:682: thunk */
t5=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t4);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[10],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3965,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=C_slot(t3,C_fix(1));
/* srfi-69.scm:688: func */
t8=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t6,t7);}
else{
t6=C_slot(t2,C_fix(1));
/* srfi-69.scm:691: loop */
t12=t1;
t13=t6;
t1=t12;
t2=t13;
goto loop;}}}

/* k3963 in loop in k3909 in k3894 in k3815 in k3812 in k3806 */
static void C_ccall f_3965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k3951 in loop in k3909 in k3894 in k3815 in k3812 in k3806 */
static void C_ccall f_3953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:682: func */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k3933 in loop in k3909 in k3894 in k3815 in k3812 in k3806 */
static void C_ccall f_3935(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3935,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
t4=C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t3);
t5=C_i_set_i_slot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t6=t1;
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* f_3795 in k1385 */
static void C_ccall f_3795(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3795,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[32],lf[77]);
/* srfi-69.scm:648: *hash-table-copy */
t4=lf[76];
f_3683(t4,t1,t2);}

/* *hash-table-copy in k1385 */
static void C_fcall f_3683(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3683,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=C_block_size(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3693,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:628: make-vector */
t6=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t5,t4,C_SCHEME_END_OF_LIST);}

/* k3691 in *hash-table-copy in k1385 */
static void C_ccall f_3693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3693,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3698,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li47),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_3698(t5,((C_word*)t0)[2],C_fix(0));}

/* doloop847 in k3691 in *hash-table-copy in k1385 */
static void C_fcall f_3698(C_word t0,C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3698,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=C_slot(((C_word*)t0)[5],C_fix(3));
t4=C_slot(((C_word*)t0)[5],C_fix(4));
t5=C_slot(((C_word*)t0)[5],C_fix(2));
t6=C_slot(((C_word*)t0)[5],C_fix(5));
t7=C_slot(((C_word*)t0)[5],C_fix(6));
t8=C_slot(((C_word*)t0)[5],C_fix(9));
/* srfi-69.scm:631: *make-hash-table */
t9=lf[31];
f_3088(t9,t1,t3,t4,t5,t6,t7,t8,C_a_i_list(&a,1,((C_word*)t0)[4]));}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3754,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[2],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3760,a[2]=t6,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3760(t8,t3,t4);}}

/* copy-loop in doloop847 in k3691 in *hash-table-copy in k1385 */
static void C_fcall f_3760(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(7);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3760,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_slot(t3,C_fix(1));
t6=C_a_i_cons(&a,2,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3781,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=C_slot(t2,C_fix(1));
/* srfi-69.scm:644: copy-loop */
t10=t7;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* k3779 in copy-loop in doloop847 in k3691 in *hash-table-copy in k1385 */
static void C_ccall f_3781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3781,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k3752 in doloop847 in k3691 in *hash-table-copy in k1385 */
static void C_ccall f_3754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3698(t4,((C_word*)t0)[2],t3);}

/* f_3657 in k1385 */
static void C_ccall f_3657(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3657,5,t0,t1,t2,t3,t4);}
t5=C_fixnum_times(t4,C_fix(2));
t6=C_i_fixnum_min(C_fix(1073741823),t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3664,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:603: hash-table-canonical-length */
f_3058(t7,lf[27],t6);}

/* k3662 */
static void C_ccall f_3664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3664,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3667,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:604: make-vector */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[30]+1)))(4,*((C_word*)lf[30]+1),t2,t1,C_SCHEME_END_OF_LIST);}

/* k3665 in k3662 */
static void C_ccall f_3667(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3667,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3670,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(4));
t4=((C_word*)t0)[2];
t5=t1;
t6=C_block_size(t4);
t7=C_block_size(t5);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3590,a[2]=t7,a[3]=t3,a[4]=t5,a[5]=t4,a[6]=t9,a[7]=t6,a[8]=((C_word)li44),tmp=(C_word)a,a+=9,tmp));
t11=((C_word*)t9)[1];
f_3590(t11,t2,C_fix(0));}

/* doloop821 in k3665 in k3662 */
static void C_fcall f_3590(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3590,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[7]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3600,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3613,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=((C_word)li43),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_3613(t8,t3,t4);}}

/* loop in doloop821 in k3665 in k3662 */
static void C_fcall f_3613(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3613,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3629,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:594: hash */
t6=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t5,t4,((C_word*)t0)[2]);}}

/* k3627 in loop in doloop821 in k3665 in k3662 */
static void C_ccall f_3629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3629,2,t0,t1);}
t2=C_slot(((C_word*)t0)[7],C_fix(1));
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=C_slot(((C_word*)t0)[5],t1);
t5=C_a_i_cons(&a,2,t3,t4);
t6=C_i_setslot(((C_word*)t0)[5],t1,t5);
t7=C_slot(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:597: loop */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3613(t8,((C_word*)t0)[2],t7);}

/* k3598 in doloop821 in k3665 in k3662 */
static void C_ccall f_3600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3590(t3,((C_word*)t0)[2],t2);}

/* k3668 in k3665 in k3662 */
static void C_ccall f_3670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_setslot(((C_word*)t0)[3],C_fix(1),((C_word*)t0)[2]));}

/* f_3563 in k1385 */
static void C_ccall f_3563(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3563,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[32],lf[74]);
t4=C_slot(t2,C_fix(9));
if(C_truep(t4)){
/* srfi-69.scm:581: thunk */
t5=t4;
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t1);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* f_3551 in k1385 */
static void C_ccall f_3551(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3551,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[32],lf[73]);
t4=C_slot(t2,C_fix(9));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* f_3542 in k1385 */
static void C_ccall f_3542(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3542,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[32],lf[72]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(8)));}

/* f_3533 in k1385 */
static void C_ccall f_3533(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3533,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[32],lf[71]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(7)));}

/* f_3524 in k1385 */
static void C_ccall f_3524(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3524,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[32],lf[70]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(6)));}

/* f_3515 in k1385 */
static void C_ccall f_3515(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3515,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[32],lf[69]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(5)));}

/* f_3506 in k1385 */
static void C_ccall f_3506(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3506,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[32],lf[68]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(4)));}

/* f_3497 in k1385 */
static void C_ccall f_3497(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3497,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[32],lf[67]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(3)));}

/* f_3488 in k1385 */
static void C_ccall f_3488(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3488,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[32],lf[66]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(2)));}

/* f_3482 in k1385 */
static void C_ccall f_3482(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3482,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[32]));}

/* f_3119 in k1385 */
static void C_ccall f_3119(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+41)){
C_save_and_reclaim((void*)tr2r,(void*)f_3119r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3119r(t0,t1,t2);}}

static void C_ccall f_3119r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(41);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=*((C_word*)lf[35]+1);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fix(307);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=lf[40];
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=lf[41];
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3121,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t6,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t18=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3197,a[2]=t4,a[3]=t2,a[4]=t17,a[5]=t12,a[6]=t16,a[7]=t14,a[8]=t6,a[9]=t1,a[10]=t8,a[11]=t10,tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_nullp(((C_word*)t4)[1]))){
t19=t18;
f_3197(t19,C_SCHEME_UNDEFINED);}
else{
t19=C_i_car(((C_word*)t4)[1]);
t20=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3472,a[2]=t4,a[3]=t19,a[4]=t6,a[5]=t18,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:460: keyword? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t20,t19);}}

/* k3470 */
static void C_ccall f_3472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3472,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
f_3197(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3475,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:461: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(4,*((C_word*)lf[47]+1),t2,((C_word*)t0)[3],lf[39]);}}

/* k3473 in k3470 */
static void C_ccall f_3475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)t0)[4]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
f_3197(t5,t4);}

/* k3195 */
static void C_fcall f_3197(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3197,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3200,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t3=t2;
f_3200(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3452,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[10],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:466: keyword? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t4,t3);}}

/* k3450 in k3195 */
static void C_ccall f_3452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3452,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
f_3200(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3455,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:467: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(4,*((C_word*)lf[47]+1),t2,((C_word*)t0)[3],lf[39]);}}

/* k3453 in k3450 in k3195 */
static void C_ccall f_3455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)t0)[4]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
f_3200(t5,t4);}

/* k3198 in k3195 */
static void C_fcall f_3200(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3200,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t3=t2;
f_3203(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[11],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:472: keyword? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t4,t3);}}

/* k3418 in k3198 in k3195 */
static void C_ccall f_3420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3420,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
f_3203(t3,t2);}
else{
t2=C_i_check_exact_2(((C_word*)t0)[4],lf[39]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3426,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(C_fix(0),((C_word*)t0)[4]))){
t4=t3;
f_3426(2,t4,C_SCHEME_UNDEFINED);}
else{
/* srfi-69.scm:475: error */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[44]+1)))(5,*((C_word*)lf[44]+1),t3,lf[39],lf[64],((C_word*)t0)[4]);}}}

/* k3424 in k3418 in k3198 in k3195 */
static void C_ccall f_3426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_fixnum_min(C_fix(1073741823),((C_word*)t0)[5]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[2];
f_3203(t6,t5);}

/* k3201 in k3198 in k3195 */
static void C_fcall f_3203(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3203,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3206,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3238,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[8],a[8]=t4,a[9]=((C_word*)t0)[3],a[10]=((C_word)li31),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_3238(t6,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* loop in k3201 in k3198 in k3195 */
static void C_fcall f_3238(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3238,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3249,a[2]=((C_word*)t0)[9],a[3]=t3,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3259,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t3,a[10]=t1,a[11]=((C_word*)t0)[8],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* srfi-69.scm:485: keyword? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t5,t3);}}

/* k3257 in loop in k3201 in k3198 in k3195 */
static void C_ccall f_3259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3259,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3265,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t3;
f_3265(2,t4,C_i_car(t2));}
else{
/* srfi-69.scm:489: invarg-err */
t4=((C_word*)t0)[2];
f_3249(t4,t3,lf[62]);}}
else{
/* srfi-69.scm:521: invarg-err */
t2=((C_word*)t0)[2];
f_3249(t2,((C_word*)t0)[10],lf[63]);}}

/* k3263 in k3257 in loop in k3201 in k3198 in k3195 */
static void C_ccall f_3265(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3265,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3268,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(((C_word*)t0)[9],lf[46]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3281,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=t1,a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:492: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(4,*((C_word*)lf[47]+1),t4,t1,lf[39]);}
else{
t4=C_eqp(((C_word*)t0)[9],lf[48]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3291,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=t1,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:495: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(4,*((C_word*)lf[47]+1),t5,t1,lf[39]);}
else{
t5=C_eqp(((C_word*)t0)[9],lf[49]);
if(C_truep(t5)){
t6=C_i_check_exact_2(t1,lf[39]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3304,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[6],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(C_fix(0),t1))){
t8=t7;
f_3304(2,t8,C_SCHEME_UNDEFINED);}
else{
/* srfi-69.scm:500: error */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[44]+1)))(5,*((C_word*)lf[44]+1),t7,lf[39],lf[50],t1);}}
else{
t6=C_eqp(((C_word*)t0)[9],lf[51]);
if(C_truep(t6)){
t7=C_mutate(((C_word *)((C_word*)t0)[5])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3322,a[2]=t1,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp));
t8=C_i_cdr(((C_word*)t0)[12]);
/* srfi-69.scm:520: loop */
t9=((C_word*)((C_word*)t0)[11])[1];
f_3238(t9,((C_word*)t0)[10],t8);}
else{
t7=C_eqp(((C_word*)t0)[9],lf[52]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3332,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:505: ##sys#check-inexact */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(4,*((C_word*)lf[56]+1),t8,t1,lf[39]);}
else{
t8=C_eqp(((C_word*)t0)[9],lf[57]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3357,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:510: ##sys#check-inexact */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(4,*((C_word*)lf[56]+1),t9,t1,lf[39]);}
else{
t9=C_eqp(((C_word*)t0)[9],lf[59]);
if(C_truep(t9)){
if(C_truep(t1)){
t10=C_i_cdr(((C_word*)t0)[12]);
/* srfi-69.scm:520: loop */
t11=((C_word*)((C_word*)t0)[11])[1];
f_3238(t11,((C_word*)t0)[10],t10);}
else{
t10=C_i_cdr(((C_word*)t0)[12]);
/* srfi-69.scm:520: loop */
t11=((C_word*)((C_word*)t0)[11])[1];
f_3238(t11,((C_word*)t0)[10],t10);}}
else{
t10=C_eqp(((C_word*)t0)[9],lf[60]);
if(C_truep(t10)){
if(C_truep(t1)){
t11=C_i_cdr(((C_word*)t0)[12]);
/* srfi-69.scm:520: loop */
t12=((C_word*)((C_word*)t0)[11])[1];
f_3238(t12,((C_word*)t0)[10],t11);}
else{
t11=C_i_cdr(((C_word*)t0)[12]);
/* srfi-69.scm:520: loop */
t12=((C_word*)((C_word*)t0)[11])[1];
f_3238(t12,((C_word*)t0)[10],t11);}}
else{
/* srfi-69.scm:519: invarg-err */
t11=((C_word*)t0)[2];
f_3249(t11,t2,lf[61]);}}}}}}}}}

/* k3355 in k3263 in k3257 in loop in k3201 in k3198 in k3195 */
static void C_ccall f_3357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3360,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_flonum_lessp(lf[53],((C_word*)t0)[5]);
t4=(C_truep(t3)?C_flonum_lessp(((C_word*)t0)[5],lf[54]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[5]);
t6=C_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:520: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_3238(t7,((C_word*)t0)[2],t6);}
else{
/* srfi-69.scm:512: error */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[44]+1)))(5,*((C_word*)lf[44]+1),t2,lf[39],lf[58],((C_word*)t0)[5]);}}

/* k3358 in k3355 in k3263 in k3257 in loop in k3201 in k3198 in k3195 */
static void C_ccall f_3360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:520: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3238(t4,((C_word*)t0)[2],t3);}

/* k3330 in k3263 in k3257 in loop in k3201 in k3198 in k3195 */
static void C_ccall f_3332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3332,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_flonum_lessp(lf[53],((C_word*)t0)[5]);
t4=(C_truep(t3)?C_flonum_lessp(((C_word*)t0)[5],lf[54]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[5]);
t6=C_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:520: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_3238(t7,((C_word*)t0)[2],t6);}
else{
/* srfi-69.scm:507: error */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[44]+1)))(5,*((C_word*)lf[44]+1),t2,lf[39],lf[55],((C_word*)t0)[5]);}}

/* k3333 in k3330 in k3263 in k3257 in loop in k3201 in k3198 in k3195 */
static void C_ccall f_3335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:520: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3238(t4,((C_word*)t0)[2],t3);}

/* f_3322 in k3263 in k3257 in loop in k3201 in k3198 in k3195 */
static void C_ccall f_3322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3322,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k3302 in k3263 in k3257 in loop in k3201 in k3198 in k3195 */
static void C_ccall f_3304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_fixnum_min(C_fix(1073741823),((C_word*)t0)[6]);
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,t2);
t4=C_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:520: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_3238(t5,((C_word*)t0)[2],t4);}

/* k3289 in k3263 in k3257 in loop in k3201 in k3198 in k3195 */
static void C_ccall f_3291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:520: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3238(t4,((C_word*)t0)[2],t3);}

/* k3279 in k3263 in k3257 in loop in k3201 in k3198 in k3195 */
static void C_ccall f_3281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:520: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3238(t4,((C_word*)t0)[2],t3);}

/* k3266 in k3263 in k3257 in loop in k3201 in k3198 in k3195 */
static void C_ccall f_3268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:520: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3238(t3,((C_word*)t0)[2],t2);}

/* invarg-err in loop in k3201 in k3198 in k3195 */
static void C_fcall f_3249(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3249,NULL,3,t0,t1,t2);}
/* srfi-69.scm:484: error */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[44]+1)))(6,*((C_word*)lf[44]+1),t1,lf[39],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3204 in k3201 in k3198 in k3195 */
static void C_ccall f_3206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3206,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_flonum_lessp(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[5])[1]))){
/* srfi-69.scm:524: error */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[44]+1)))(6,*((C_word*)lf[44]+1),t2,lf[39],lf[45],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=t2;
f_3209(2,t3,C_SCHEME_UNDEFINED);}}

/* k3207 in k3204 in k3201 in k3198 in k3195 */
static void C_ccall f_3209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm:526: hash-table-canonical-length */
f_3058(t2,lf[27],((C_word*)((C_word*)t0)[9])[1]);}

/* k3211 in k3207 in k3204 in k3201 in k3198 in k3195 */
static void C_ccall f_3213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3213,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[9])+1,t1);
if(C_truep(((C_word*)((C_word*)t0)[8])[1])){
/* srfi-69.scm:536: *make-hash-table */
t3=lf[31];
f_3088(t3,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[8])[1],((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],C_SCHEME_END_OF_LIST);}
else{
t3=f_3121(((C_word*)t0)[2]);
if(C_truep(t3)){
t4=C_mutate(((C_word *)((C_word*)t0)[8])+1,t3);
/* srfi-69.scm:536: *make-hash-table */
t5=lf[31];
f_3088(t5,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[8])[1],((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3229,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm:533: warning */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[42]+1)))(4,*((C_word*)lf[42]+1),t4,lf[39],lf[43]);}}}

/* k3227 in k3211 in k3207 in k3204 in k3201 in k3198 in k3195 */
static void C_ccall f_3229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[8])+1,*((C_word*)lf[20]+1));
/* srfi-69.scm:536: *make-hash-table */
t3=lf[31];
f_3088(t3,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[8])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1],C_SCHEME_END_OF_LIST);}

/* hash-for-test */
static C_word C_fcall f_3121(C_word t0){
C_word tmp;
C_word t1;
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
C_stack_check;
t1=C_eqp(((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);
t2=(C_truep(t1)?t1:C_eqp(*((C_word*)lf[33]+1),((C_word*)((C_word*)t0)[7])[1]));
if(C_truep(t2)){
t3=*((C_word*)lf[16]+1);
return(t3);}
else{
t3=C_eqp(((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);
t4=(C_truep(t3)?t3:C_eqp(*((C_word*)lf[34]+1),((C_word*)((C_word*)t0)[7])[1]));
if(C_truep(t4)){
return(*((C_word*)lf[18]+1));}
else{
t5=C_eqp(((C_word*)t0)[5],((C_word*)((C_word*)t0)[7])[1]);
t6=(C_truep(t5)?t5:C_eqp(*((C_word*)lf[35]+1),((C_word*)((C_word*)t0)[7])[1]));
if(C_truep(t6)){
t7=*((C_word*)lf[20]+1);
return(t7);}
else{
t7=C_eqp(((C_word*)t0)[4],((C_word*)((C_word*)t0)[7])[1]);
t8=(C_truep(t7)?t7:C_eqp(*((C_word*)lf[36]+1),((C_word*)((C_word*)t0)[7])[1]));
if(C_truep(t8)){
return(*((C_word*)lf[22]+1));}
else{
t9=C_eqp(((C_word*)t0)[3],((C_word*)((C_word*)t0)[7])[1]);
t10=(C_truep(t9)?t9:C_eqp(*((C_word*)lf[37]+1),((C_word*)((C_word*)t0)[7])[1]));
if(C_truep(t10)){
t11=*((C_word*)lf[26]+1);
return(t11);}
else{
t11=C_eqp(((C_word*)t0)[2],((C_word*)((C_word*)t0)[7])[1]);
if(C_truep(t11)){
return((C_truep(t11)?*((C_word*)lf[4]+1):C_SCHEME_FALSE));}
else{
t12=C_eqp(*((C_word*)lf[38]+1),((C_word*)((C_word*)t0)[7])[1]);
return((C_truep(t12)?*((C_word*)lf[4]+1):C_SCHEME_FALSE));}}}}}}}

/* *make-hash-table in k1385 */
static void C_fcall f_3088(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3088,NULL,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3092,a[2]=t7,a[3]=t6,a[4]=t5,a[5]=t3,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(t8))){
/* srfi-69.scm:408: make-vector */
t10=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t10))(4,t10,t9,t4,C_SCHEME_END_OF_LIST);}
else{
t10=C_i_cdr(t8);
if(C_truep(C_i_nullp(t10))){
t11=t9;
f_3092(2,t11,C_i_car(t8));}
else{
/* ##sys#error */
t11=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,lf[0],t8);}}}

/* k3090 in *make-hash-table in k1385 */
static void C_ccall f_3092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3092,2,t0,t1);}
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record(&a,10,lf[32],t1,C_fix(0),((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]));}

/* hash-table-canonical-length in k1385 */
static void C_fcall f_3058(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3058,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3064,a[2]=t3,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_3064(t4,t2));}

/* loop in hash-table-canonical-length in k1385 */
static C_word C_fcall f_3064(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_check;
loop:
t2=C_slot(t1,C_fix(0));
t3=C_slot(t1,C_fix(1));
t4=C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]);
if(C_truep(t4)){
if(C_truep(t4)){
return(t2);}
else{
t6=t3;
t1=t6;
goto loop;}}
else{
if(C_truep(C_i_nullp(t3))){
return(t2);}
else{
t6=t3;
t1=t6;
goto loop;}}}

/* f_2915 in k1385 */
static void C_ccall f_2915(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_2915r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2915r(t0,t1,t2,t3);}}

static void C_ccall f_2915r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(17);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_check_string_2(t2,lf[25]);
t9=C_i_check_exact_2(t5,lf[25]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2931,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t7))){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2968,a[2]=t2,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2987,a[2]=t11,a[3]=t2,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2996,a[2]=t12,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t7))){
/* def-start620634 */
t14=t13;
f_2996(t14,t10);}
else{
t14=C_i_car(t7);
t15=C_i_cdr(t7);
if(C_truep(C_i_nullp(t15))){
/* def-end621632 */
t16=t12;
f_2987(t16,t10,t14);}
else{
t16=C_i_car(t15);
t17=C_i_cdr(t15);
if(C_truep(C_i_nullp(t17))){
/* body618627 */
t18=t11;
f_2968(t18,t10,t14,t16);}
else{
/* ##sys#error */
t18=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t10,lf[0],t17);}}}}
else{
t11=t10;
f_2931(2,t11,t2);}}

/* def-start620 */
static void C_fcall f_2996(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2996,NULL,2,t0,t1);}
/* def-end621632 */
t2=((C_word*)t0)[2];
f_2987(t2,t1,C_fix(0));}

/* def-end621 */
static void C_fcall f_2987(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2987,NULL,3,t0,t1,t2);}
t3=C_block_size(((C_word*)t0)[3]);
/* body618627 */
t4=((C_word*)t0)[2];
f_2968(t4,t1,t2,t3);}

/* body618 */
static void C_fcall f_2968(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2968,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2972,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_block_size(((C_word*)t0)[2]);
/* srfi-69.scm:356: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(6,*((C_word*)lf[24]+1),t4,t2,C_fix(0),t5,lf[26]);}

/* k2970 in body618 */
static void C_ccall f_2972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2972,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2975,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[4]);
/* srfi-69.scm:357: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(6,*((C_word*)lf[24]+1),t2,((C_word*)t0)[2],C_fix(0),t3,lf[26]);}

/* k2973 in k2970 in body618 */
static void C_ccall f_2975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:358: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(5,*((C_word*)lf[23]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2929 */
static void C_ccall f_2931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_hash_string_ci(t1);
t3=((C_word*)t0)[3];
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=C_fixnum_negate(t2);
t5=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t4);
t6=t3;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fixnum_modulo(t5,((C_word*)t0)[2]));}
else{
t4=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t2);
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_modulo(t4,((C_word*)t0)[2]));}}

/* f_2774 in k1385 */
static void C_ccall f_2774(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_2774r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2774r(t0,t1,t2,t3);}}

static void C_ccall f_2774r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(17);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_check_string_2(t2,lf[22]);
t9=C_i_check_exact_2(t5,lf[22]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2790,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t7))){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2827,a[2]=t2,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2846,a[2]=t11,a[3]=t2,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2855,a[2]=t12,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t7))){
/* def-start566580 */
t14=t13;
f_2855(t14,t10);}
else{
t14=C_i_car(t7);
t15=C_i_cdr(t7);
if(C_truep(C_i_nullp(t15))){
/* def-end567578 */
t16=t12;
f_2846(t16,t10,t14);}
else{
t16=C_i_car(t15);
t17=C_i_cdr(t15);
if(C_truep(C_i_nullp(t17))){
/* body564573 */
t18=t11;
f_2827(t18,t10,t14,t16);}
else{
/* ##sys#error */
t18=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t10,lf[0],t17);}}}}
else{
t11=t10;
f_2790(2,t11,t2);}}

/* def-start566 */
static void C_fcall f_2855(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2855,NULL,2,t0,t1);}
/* def-end567578 */
t2=((C_word*)t0)[2];
f_2846(t2,t1,C_fix(0));}

/* def-end567 */
static void C_fcall f_2846(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2846,NULL,3,t0,t1,t2);}
t3=C_block_size(((C_word*)t0)[3]);
/* body564573 */
t4=((C_word*)t0)[2];
f_2827(t4,t1,t2,t3);}

/* body564 */
static void C_fcall f_2827(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2827,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2831,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_block_size(((C_word*)t0)[2]);
/* srfi-69.scm:344: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(6,*((C_word*)lf[24]+1),t4,t2,C_fix(0),t5,lf[22]);}

/* k2829 in body564 */
static void C_ccall f_2831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2834,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[4]);
/* srfi-69.scm:345: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(6,*((C_word*)lf[24]+1),t2,((C_word*)t0)[2],C_fix(0),t3,lf[22]);}

/* k2832 in k2829 in body564 */
static void C_ccall f_2834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm:346: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(5,*((C_word*)lf[23]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2788 */
static void C_ccall f_2790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_hash_string(t1);
t3=((C_word*)t0)[3];
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=C_fixnum_negate(t2);
t5=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t4);
t6=t3;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fixnum_modulo(t5,((C_word*)t0)[2]));}
else{
t4=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t2);
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fixnum_modulo(t4,((C_word*)t0)[2]));}}

/* f_2714 in k1385 */
static void C_ccall f_2714(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2714r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2714r(t0,t1,t2,t3);}}

static void C_ccall f_2714r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2718,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_2718(2,t5,C_fix(536870912));}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_2718(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2716 */
static void C_ccall f_2718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2718,2,t0,t1);}
t2=C_i_check_exact_2(t1,lf[21]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2752,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:332: *equal?-hash */
f_2248(t3,((C_word*)t0)[2]);}

/* k2750 in k2716 */
static void C_ccall f_2752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t4=C_fixnum_negate(t1);
t5=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t4);
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fixnum_modulo(t5,t3));}
else{
t4=t1;
t5=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t4);
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fixnum_modulo(t5,t3));}}

/* *equal?-hash in k1385 */
static void C_fcall f_2248(C_word t1,C_word t2){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2248,NULL,2,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2251,a[2]=t8,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t10=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2316,a[2]=t8,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2367,a[2]=t4,a[3]=t6,a[4]=((C_word)li15),tmp=(C_word)a,a+=5,tmp));
/* srfi-69.scm:328: recursive-hash */
t12=((C_word*)t8)[1];
f_2367(t12,t1,t2,C_fix(0));}

/* recursive-hash in *equal?-hash in k1385 */
static void C_fcall f_2367(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2367,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(4)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(99));}
else{
if(C_truep(C_fixnump(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
if(C_truep(C_charp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(C_character_code(t2)));}
else{
switch(t2){
case C_SCHEME_TRUE:
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(256));
case C_SCHEME_FALSE:
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(257));
default:
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(258));}
else{
if(C_truep(C_eofp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(259));}
else{
if(C_truep(C_i_symbolp(t2))){
t4=t1;
t5=t2;
t6=C_slot(t5,C_fix(1));
t7=t4;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_hash_string(t6));}
else{
if(C_truep(C_i_numberp(t2))){
t4=t1;
t5=t2;
if(C_truep(C_i_flonump(t5))){
t6=C_subbyte(t5,C_fix(7));
t7=C_subbyte(t5,C_fix(6));
t8=C_subbyte(t5,C_fix(5));
t9=C_subbyte(t5,C_fix(4));
t10=C_subbyte(t5,C_fix(3));
t11=C_subbyte(t5,C_fix(2));
t12=C_subbyte(t5,C_fix(1));
t13=C_subbyte(t5,C_fix(0));
t14=C_fixnum_shift_left(t13,C_fix(1));
t15=C_fixnum_plus(t12,t14);
t16=C_fixnum_shift_left(t15,C_fix(1));
t17=C_fixnum_plus(t11,t16);
t18=C_fixnum_shift_left(t17,C_fix(1));
t19=C_fixnum_plus(t10,t18);
t20=C_fixnum_shift_left(t19,C_fix(1));
t21=C_fixnum_plus(t9,t20);
t22=C_fixnum_shift_left(t21,C_fix(1));
t23=C_fixnum_plus(t8,t22);
t24=C_fixnum_shift_left(t23,C_fix(1));
t25=C_fixnum_plus(t7,t24);
t26=C_fixnum_shift_left(t25,C_fix(1));
t27=C_fixnum_plus(t6,t26);
t28=t4;
((C_proc2)(void*)(*((C_word*)t28+1)))(2,t28,C_fixnum_times(C_fix(331804471),t27));}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2563,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:144: ##sys#number-hash-hook */
t7=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}}
else{
t4=t2;
if(C_truep(C_blockp(t4))){
t5=t2;
if(C_truep(C_byteblockp(t5))){
t6=t1;
t7=t2;
t8=t6;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_hash_string(t7));}
else{
if(C_truep(C_i_listp(t2))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2597,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
/* g496497 */
t7=t6;
f_2597(t7,t1,t2);}
else{
if(C_truep(C_i_pairp(t2))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2623,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
/* g499500 */
t7=t6;
f_2623(t7,t1,t2);}
else{
t6=t2;
if(C_truep(C_portp(t6))){
t7=t1;
t8=t2;
t9=C_peek_fixnum(t8,C_fix(0));
t10=C_fixnum_shift_left(t9,C_fix(4));
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2674,a[2]=t10,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:272: input-port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t11,t8);}
else{
t7=t2;
if(C_truep(C_specialp(t7))){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2690,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp);
/* g511512 */
t9=t8;
f_2690(t9,t1,t2);}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2702,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp);
/* g514515 */
t9=t8;
f_2702(t9,t1,t2);}}}}}}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fix(262));}}}}}}}}}}

/* g514 in recursive-hash in *equal?-hash in k1385 */
static void C_fcall f_2702(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2702,NULL,3,t0,t1,t2);}
/* srfi-69.scm:280: vector-hash */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2251(t3,t1,t2,C_fix(0),((C_word*)t0)[2],C_fix(0));}

/* g511 in recursive-hash in *equal?-hash in k1385 */
static void C_fcall f_2690(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2690,NULL,3,t0,t1,t2);}
t3=C_peek_fixnum(t2,C_fix(0));
/* srfi-69.scm:277: vector-hash */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2251(t4,t1,t2,t3,((C_word*)t0)[2],C_fix(1));}

/* k2672 in recursive-hash in *equal?-hash in k1385 */
static void C_ccall f_2674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_fixnum_plus(((C_word*)t0)[2],C_fix(260)):C_fixnum_plus(((C_word*)t0)[2],C_fix(261))));}

/* g499 in recursive-hash in *equal?-hash in k1385 */
static void C_fcall f_2623(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2623,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2643,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-69.scm:267: recursive-atomic-hash */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2316(t5,t3,t4,((C_word*)t0)[2]);}

/* k2641 in g499 in recursive-hash in *equal?-hash in k1385 */
static void C_ccall f_2643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2643,2,t0,t1);}
t2=C_fixnum_shift_left(t1,C_fix(16));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2635,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:268: recursive-atomic-hash */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2316(t5,t3,t4,((C_word*)t0)[2]);}

/* k2633 in k2641 in g499 in recursive-hash in *equal?-hash in k1385 */
static void C_ccall f_2635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_plus(((C_word*)t0)[2],t1));}

/* g496 in recursive-hash in *equal?-hash in k1385 */
static void C_fcall f_2597(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2597,NULL,3,t0,t1,t2);}
t3=C_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2609,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(0));
/* srfi-69.scm:264: recursive-atomic-hash */
t6=((C_word*)((C_word*)t0)[3])[1];
f_2316(t6,t4,t5,((C_word*)t0)[2]);}

/* k2607 in g496 in recursive-hash in *equal?-hash in k1385 */
static void C_ccall f_2609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_plus(((C_word*)t0)[2],t1));}

/* k2561 in recursive-hash in *equal?-hash in k1385 */
static void C_ccall f_2563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(t1));}

/* recursive-atomic-hash in *equal?-hash in k1385 */
static void C_fcall f_2316(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2316,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2350,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=t2;
t6=C_i_not(C_blockp(t5));
if(C_truep(t6)){
t7=t4;
f_2350(t7,(C_truep(t6)?t6:C_i_numberp(t5)));}
else{
t7=C_i_symbolp(t5);
t8=t4;
f_2350(t8,(C_truep(t7)?t7:C_i_numberp(t5)));}}

/* k2348 in recursive-atomic-hash in *equal?-hash in k1385 */
static void C_fcall f_2350(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2350,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2353,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_2353(t3,t1);}
else{
t3=((C_word*)t0)[2];
t4=t2;
f_2353(t4,C_byteblockp(t3));}}

/* k2351 in k2348 in recursive-atomic-hash in *equal?-hash in k1385 */
static void C_fcall f_2353(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:302: recursive-hash */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2367(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(99));}}

/* vector-hash in *equal?-hash in k1385 */
static void C_fcall f_2251(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_save_and_reclaim((void*)trf_2251,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_block_size(t2);
t7=C_fixnum_plus(t6,t3);
t8=C_i_fixnum_min(C_fix(4),t6);
t9=C_fixnum_difference(t8,t5);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2268,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=t11,a[6]=((C_word)li8),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_2268(t13,t1,t7,t5,t9);}

/* loop in vector-hash in *equal?-hash in k1385 */
static void C_fcall f_2268(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2268,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_fixnum_shift_left(t2,C_fix(4));
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2302,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=t3,a[6]=t2,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t8=C_slot(((C_word*)t0)[4],t3);
t9=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm:294: recursive-hash */
t10=((C_word*)((C_word*)t0)[2])[1];
f_2367(t10,t7,t8,t9);}}

/* k2300 in loop in vector-hash in *equal?-hash in k1385 */
static void C_ccall f_2302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[7],t1);
t3=C_fixnum_plus(((C_word*)t0)[6],t2);
t4=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t5=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:292: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_2268(t6,((C_word*)t0)[2],t3,t4,t5);}

/* f_2189 in k1385 */
static void C_ccall f_2189(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2189r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2189r(t0,t1,t2,t3);}}

static void C_ccall f_2189r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2193,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_2193(2,t5,C_fix(536870912));}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_2193(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2191 */
static void C_ccall f_2193(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2193,2,t0,t1);}
t2=C_i_check_exact_2(t1,lf[18]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2227,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
if(C_truep(C_fixnump(t4))){
t5=t3;
f_2227(2,t5,t4);}
else{
if(C_truep(C_charp(t4))){
t5=t3;
f_2227(2,t5,C_fix(C_character_code(t4)));}
else{
switch(t4){
case C_SCHEME_TRUE:
t5=t3;
f_2227(2,t5,C_fix(256));
case C_SCHEME_FALSE:
t5=t3;
f_2227(2,t5,C_fix(257));
default:
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_2227(2,t5,C_fix(258));}
else{
if(C_truep(C_eofp(t4))){
t5=t3;
f_2227(2,t5,C_fix(259));}
else{
if(C_truep(C_i_symbolp(t4))){
t5=C_slot(t4,C_fix(1));
t6=t3;
f_2227(2,t6,C_hash_string(t5));}
else{
if(C_truep(C_i_numberp(t4))){
if(C_truep(C_i_flonump(t4))){
t5=C_subbyte(t4,C_fix(7));
t6=C_subbyte(t4,C_fix(6));
t7=C_subbyte(t4,C_fix(5));
t8=C_subbyte(t4,C_fix(4));
t9=C_subbyte(t4,C_fix(3));
t10=C_subbyte(t4,C_fix(2));
t11=C_subbyte(t4,C_fix(1));
t12=C_subbyte(t4,C_fix(0));
t13=C_fixnum_shift_left(t12,C_fix(1));
t14=C_fixnum_plus(t11,t13);
t15=C_fixnum_shift_left(t14,C_fix(1));
t16=C_fixnum_plus(t10,t15);
t17=C_fixnum_shift_left(t16,C_fix(1));
t18=C_fixnum_plus(t9,t17);
t19=C_fixnum_shift_left(t18,C_fix(1));
t20=C_fixnum_plus(t8,t19);
t21=C_fixnum_shift_left(t20,C_fix(1));
t22=C_fixnum_plus(t7,t21);
t23=C_fixnum_shift_left(t22,C_fix(1));
t24=C_fixnum_plus(t6,t23);
t25=C_fixnum_shift_left(t24,C_fix(1));
t26=C_fixnum_plus(t5,t25);
t27=t3;
f_2227(2,t27,C_fixnum_times(C_fix(331804471),t26));}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2165,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:144: ##sys#number-hash-hook */
t6=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}}
else{
if(C_truep(C_blockp(t4))){
/* srfi-69.scm:163: *equal?-hash */
f_2248(t3,t4);}
else{
t5=t3;
f_2227(2,t5,C_fix(262));}}}}}}}}}

/* k2163 in k2191 */
static void C_ccall f_2165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2227(2,t2,C_fix(t1));}

/* k2225 in k2191 */
static void C_ccall f_2227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t4=C_fixnum_negate(t1);
t5=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t4);
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fixnum_modulo(t5,t3));}
else{
t4=t1;
t5=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t4);
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fixnum_modulo(t5,t3));}}

/* f_1915 in k1385 */
static void C_ccall f_1915(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1915r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1915r(t0,t1,t2,t3);}}

static void C_ccall f_1915r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1919,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_1919(2,t5,C_fix(536870912));}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_1919(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1917 */
static void C_ccall f_1919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1919,2,t0,t1);}
t2=C_i_check_exact_2(t1,lf[16]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1953,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
if(C_truep(C_fixnump(t4))){
t5=t3;
f_1953(2,t5,t4);}
else{
if(C_truep(C_charp(t4))){
t5=t3;
f_1953(2,t5,C_fix(C_character_code(t4)));}
else{
switch(t4){
case C_SCHEME_TRUE:
t5=t3;
f_1953(2,t5,C_fix(256));
case C_SCHEME_FALSE:
t5=t3;
f_1953(2,t5,C_fix(257));
default:
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_1953(2,t5,C_fix(258));}
else{
if(C_truep(C_eofp(t4))){
t5=t3;
f_1953(2,t5,C_fix(259));}
else{
if(C_truep(C_i_symbolp(t4))){
t5=C_slot(t4,C_fix(1));
t6=t3;
f_1953(2,t6,C_hash_string(t5));}
else{
if(C_truep(C_blockp(t4))){
/* srfi-69.scm:163: *equal?-hash */
f_2248(t3,t4);}
else{
t5=t3;
f_1953(2,t5,C_fix(262));}}}}}}}}

/* k1951 in k1917 */
static void C_ccall f_1953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t4=C_fixnum_negate(t1);
t5=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t4);
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fixnum_modulo(t5,t3));}
else{
t4=t1;
t5=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t4);
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fixnum_modulo(t5,t3));}}

/* f_1761 in k1385 */
static void C_ccall f_1761(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1761r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1761r(t0,t1,t2,t3);}}

static void C_ccall f_1761r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1765,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_1765(2,t5,C_fix(536870912));}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_1765(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1763 */
static void C_ccall f_1765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:199: ##sys#check-keyword */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],lf[15]);}

/* k1766 in k1763 */
static void C_ccall f_1768(C_word c,C_word t0,C_word t1){
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
t2=C_i_check_exact_2(((C_word*)t0)[4],lf[15]);
t3=((C_word*)t0)[3];
t4=C_slot(t3,C_fix(1));
t5=C_hash_string(t4);
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[4];
if(C_truep(C_fixnum_lessp(t5,C_fix(0)))){
t8=C_fixnum_negate(t5);
t9=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t8);
t10=t6;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_fixnum_modulo(t9,t7));}
else{
t8=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t5);
t9=t6;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_fixnum_modulo(t8,t7));}}

/* f_1735 in k1385 */
static void C_ccall f_1735(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1735r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1735r(t0,t1,t2,t3);}}

static void C_ccall f_1735r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1742,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:186: keyword? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t4,t2);}

/* k1740 */
static void C_ccall f_1742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
/* srfi-69.scm:187: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(6,*((C_word*)lf[5]+1),((C_word*)t0)[4],lf[12],C_SCHEME_FALSE,lf[13],((C_word*)t0)[2]);}
else{
t2=C_i_car(((C_word*)t0)[3]);
/* srfi-69.scm:187: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(6,*((C_word*)lf[5]+1),((C_word*)t0)[4],lf[12],t2,lf[13],((C_word*)t0)[2]);}}}

/* f_1662 in k1385 */
static void C_ccall f_1662(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1662r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1662r(t0,t1,t2,t3);}}

static void C_ccall f_1662r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1666,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_1666(2,t5,C_fix(536870912));}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_1666(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1664 */
static void C_ccall f_1666(C_word c,C_word t0,C_word t1){
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
t2=C_i_check_symbol_2(((C_word*)t0)[3],lf[10]);
t3=C_i_check_exact_2(t1,lf[10]);
t4=((C_word*)t0)[3];
t5=C_slot(t4,C_fix(1));
t6=C_hash_string(t5);
t7=((C_word*)t0)[2];
t8=t1;
if(C_truep(C_fixnum_lessp(t6,C_fix(0)))){
t9=C_fixnum_negate(t6);
t10=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t9);
t11=t7;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_fixnum_modulo(t10,t8));}
else{
t9=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t6);
t10=t7;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_fixnum_modulo(t9,t8));}}

/* f_1598 in k1385 */
static void C_ccall f_1598(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1598r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1598r(t0,t1,t2,t3);}}

static void C_ccall f_1598r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1602,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_1602(2,t5,C_fix(536870912));}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_1602(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1600 */
static void C_ccall f_1602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1602,2,t0,t1);}
t2=C_i_check_exact_2(t1,lf[9]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1641,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
/* srfi-69.scm:163: *equal?-hash */
f_2248(t3,t4);}

/* k1639 in k1600 */
static void C_ccall f_1641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t4=C_fixnum_negate(t1);
t5=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t4);
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fixnum_modulo(t5,t3));}
else{
t4=t1;
t5=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t4);
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fixnum_modulo(t5,t3));}}

/* f_1395 in k1385 */
static void C_ccall f_1395(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1395r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1395r(t0,t1,t2,t3);}}

static void C_ccall f_1395r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1399,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_1399(2,t5,C_fix(536870912));}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_1399(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1397 */
static void C_ccall f_1399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1399,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_numberp(((C_word*)t0)[2]))){
t3=t2;
f_1402(2,t3,C_SCHEME_UNDEFINED);}
else{
/* srfi-69.scm:152: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(6,*((C_word*)lf[5]+1),t2,lf[6],lf[4],lf[7],((C_word*)t0)[2]);}}

/* k1400 in k1397 */
static void C_ccall f_1402(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1402,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[4],lf[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1571,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
if(C_truep(C_fixnump(t4))){
t5=t3;
f_1571(t5,t4);}
else{
if(C_truep(C_i_flonump(t4))){
t5=C_subbyte(t4,C_fix(7));
t6=C_subbyte(t4,C_fix(6));
t7=C_subbyte(t4,C_fix(5));
t8=C_subbyte(t4,C_fix(4));
t9=C_subbyte(t4,C_fix(3));
t10=C_subbyte(t4,C_fix(2));
t11=C_subbyte(t4,C_fix(1));
t12=C_subbyte(t4,C_fix(0));
t13=C_fixnum_shift_left(t12,C_fix(1));
t14=C_fixnum_plus(t11,t13);
t15=C_fixnum_shift_left(t14,C_fix(1));
t16=C_fixnum_plus(t10,t15);
t17=C_fixnum_shift_left(t16,C_fix(1));
t18=C_fixnum_plus(t9,t17);
t19=C_fixnum_shift_left(t18,C_fix(1));
t20=C_fixnum_plus(t8,t19);
t21=C_fixnum_shift_left(t20,C_fix(1));
t22=C_fixnum_plus(t7,t21);
t23=C_fixnum_shift_left(t22,C_fix(1));
t24=C_fixnum_plus(t6,t23);
t25=C_fixnum_shift_left(t24,C_fix(1));
t26=C_fixnum_plus(t5,t25);
t27=t3;
f_1571(t27,C_fixnum_times(C_fix(331804471),t26));}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1565,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:144: ##sys#number-hash-hook */
t6=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}}}

/* k1563 in k1400 in k1397 */
static void C_ccall f_1565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1571(t2,C_fix(t1));}

/* k1569 in k1400 in k1397 */
static void C_fcall f_1571(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t4=C_fixnum_negate(t1);
t5=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t4);
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fixnum_modulo(t5,t3));}
else{
t4=t1;
t5=C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM),t4);
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fixnum_modulo(t5,t3));}}

/* f_1389 in k1385 */
static void C_ccall f_1389(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1389,3,t0,t1,t2);}
/* srfi-69.scm:140: *equal?-hash */
f_2248(t1,t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[248] = {
{"toplevel:srfi_2d69_2escm",(void*)C_srfi_2d69_toplevel},
{"f_1387:srfi_2d69_2escm",(void*)f_1387},
{"f_5569:srfi_2d69_2escm",(void*)f_5569},
{"f_5689:srfi_2d69_2escm",(void*)f_5689},
{"f_5573:srfi_2d69_2escm",(void*)f_5573},
{"f_5579:srfi_2d69_2escm",(void*)f_5579},
{"f_5591:srfi_2d69_2escm",(void*)f_5591},
{"f_5648:srfi_2d69_2escm",(void*)f_5648},
{"f_5667:srfi_2d69_2escm",(void*)f_5667},
{"f_5606:srfi_2d69_2escm",(void*)f_5606},
{"f_4538:srfi_2d69_2escm",(void*)f_4538},
{"f_5553:srfi_2d69_2escm",(void*)f_5553},
{"f_5557:srfi_2d69_2escm",(void*)f_5557},
{"f_5560:srfi_2d69_2escm",(void*)f_5560},
{"f_5551:srfi_2d69_2escm",(void*)f_5551},
{"f_5528:srfi_2d69_2escm",(void*)f_5528},
{"f_5535:srfi_2d69_2escm",(void*)f_5535},
{"f_5540:srfi_2d69_2escm",(void*)f_5540},
{"f_5548:srfi_2d69_2escm",(void*)f_5548},
{"f_5516:srfi_2d69_2escm",(void*)f_5516},
{"f_5523:srfi_2d69_2escm",(void*)f_5523},
{"f_5504:srfi_2d69_2escm",(void*)f_5504},
{"f_5511:srfi_2d69_2escm",(void*)f_5511},
{"f_5492:srfi_2d69_2escm",(void*)f_5492},
{"f_5499:srfi_2d69_2escm",(void*)f_5499},
{"f_5426:srfi_2d69_2escm",(void*)f_5426},
{"f_5438:srfi_2d69_2escm",(void*)f_5438},
{"f_5454:srfi_2d69_2escm",(void*)f_5454},
{"f_5482:srfi_2d69_2escm",(void*)f_5482},
{"f_5353:srfi_2d69_2escm",(void*)f_5353},
{"f_5365:srfi_2d69_2escm",(void*)f_5365},
{"f_5403:srfi_2d69_2escm",(void*)f_5403},
{"f_5413:srfi_2d69_2escm",(void*)f_5413},
{"f_5394:srfi_2d69_2escm",(void*)f_5394},
{"f_5373:srfi_2d69_2escm",(void*)f_5373},
{"f_5288:srfi_2d69_2escm",(void*)f_5288},
{"f_5303:srfi_2d69_2escm",(void*)f_5303},
{"f_5319:srfi_2d69_2escm",(void*)f_5319},
{"f_5223:srfi_2d69_2escm",(void*)f_5223},
{"f_5238:srfi_2d69_2escm",(void*)f_5238},
{"f_5254:srfi_2d69_2escm",(void*)f_5254},
{"f_5166:srfi_2d69_2escm",(void*)f_5166},
{"f_5173:srfi_2d69_2escm",(void*)f_5173},
{"f_5200:srfi_2d69_2escm",(void*)f_5200},
{"f_5210:srfi_2d69_2escm",(void*)f_5210},
{"f_5198:srfi_2d69_2escm",(void*)f_5198},
{"f_5174:srfi_2d69_2escm",(void*)f_5174},
{"f_5187:srfi_2d69_2escm",(void*)f_5187},
{"f_5093:srfi_2d69_2escm",(void*)f_5093},
{"f_5108:srfi_2d69_2escm",(void*)f_5108},
{"f_5124:srfi_2d69_2escm",(void*)f_5124},
{"f_5077:srfi_2d69_2escm",(void*)f_5077},
{"f_5091:srfi_2d69_2escm",(void*)f_5091},
{"f_5065:srfi_2d69_2escm",(void*)f_5065},
{"f_4997:srfi_2d69_2escm",(void*)f_4997},
{"f_5009:srfi_2d69_2escm",(void*)f_5009},
{"f_5032:srfi_2d69_2escm",(void*)f_5032},
{"f_5058:srfi_2d69_2escm",(void*)f_5058},
{"f_5045:srfi_2d69_2escm",(void*)f_5045},
{"f_5019:srfi_2d69_2escm",(void*)f_5019},
{"f_4981:srfi_2d69_2escm",(void*)f_4981},
{"f_4988:srfi_2d69_2escm",(void*)f_4988},
{"f_4885:srfi_2d69_2escm",(void*)f_4885},
{"f_4892:srfi_2d69_2escm",(void*)f_4892},
{"f_4906:srfi_2d69_2escm",(void*)f_4906},
{"f_4932:srfi_2d69_2escm",(void*)f_4932},
{"f_4951:srfi_2d69_2escm",(void*)f_4951},
{"f_4919:srfi_2d69_2escm",(void*)f_4919},
{"f_4754:srfi_2d69_2escm",(void*)f_4754},
{"f_4770:srfi_2d69_2escm",(void*)f_4770},
{"f_4837:srfi_2d69_2escm",(void*)f_4837},
{"f_4856:srfi_2d69_2escm",(void*)f_4856},
{"f_4790:srfi_2d69_2escm",(void*)f_4790},
{"f_4646:srfi_2d69_2escm",(void*)f_4646},
{"f_4662:srfi_2d69_2escm",(void*)f_4662},
{"f_4717:srfi_2d69_2escm",(void*)f_4717},
{"f_4730:srfi_2d69_2escm",(void*)f_4730},
{"f_4677:srfi_2d69_2escm",(void*)f_4677},
{"f_4540:srfi_2d69_2escm",(void*)f_4540},
{"f_4556:srfi_2d69_2escm",(void*)f_4556},
{"f_4610:srfi_2d69_2escm",(void*)f_4610},
{"f_4626:srfi_2d69_2escm",(void*)f_4626},
{"f_4571:srfi_2d69_2escm",(void*)f_4571},
{"f_4322:srfi_2d69_2escm",(void*)f_4322},
{"f_4398:srfi_2d69_2escm",(void*)f_4398},
{"f_4354:srfi_2d69_2escm",(void*)f_4354},
{"f_4390:srfi_2d69_2escm",(void*)f_4390},
{"f_4365:srfi_2d69_2escm",(void*)f_4365},
{"f_4371:srfi_2d69_2escm",(void*)f_4371},
{"f_4405:srfi_2d69_2escm",(void*)f_4405},
{"f_4420:srfi_2d69_2escm",(void*)f_4420},
{"f_4486:srfi_2d69_2escm",(void*)f_4486},
{"f_4516:srfi_2d69_2escm",(void*)f_4516},
{"f_4437:srfi_2d69_2escm",(void*)f_4437},
{"f_4426:srfi_2d69_2escm",(void*)f_4426},
{"f_4310:srfi_2d69_2escm",(void*)f_4310},
{"f_4317:srfi_2d69_2escm",(void*)f_4317},
{"f_4082:srfi_2d69_2escm",(void*)f_4082},
{"f_4155:srfi_2d69_2escm",(void*)f_4155},
{"f_4111:srfi_2d69_2escm",(void*)f_4111},
{"f_4147:srfi_2d69_2escm",(void*)f_4147},
{"f_4122:srfi_2d69_2escm",(void*)f_4122},
{"f_4128:srfi_2d69_2escm",(void*)f_4128},
{"f_4162:srfi_2d69_2escm",(void*)f_4162},
{"f_4177:srfi_2d69_2escm",(void*)f_4177},
{"f_4250:srfi_2d69_2escm",(void*)f_4250},
{"f_4283:srfi_2d69_2escm",(void*)f_4283},
{"f_4286:srfi_2d69_2escm",(void*)f_4286},
{"f_4260:srfi_2d69_2escm",(void*)f_4260},
{"f_4191:srfi_2d69_2escm",(void*)f_4191},
{"f_4227:srfi_2d69_2escm",(void*)f_4227},
{"f_4201:srfi_2d69_2escm",(void*)f_4201},
{"f_3804:srfi_2d69_2escm",(void*)f_3804},
{"f_4060:srfi_2d69_2escm",(void*)f_4060},
{"f_3808:srfi_2d69_2escm",(void*)f_3808},
{"f_3814:srfi_2d69_2escm",(void*)f_3814},
{"f_3817:srfi_2d69_2escm",(void*)f_3817},
{"f_3889:srfi_2d69_2escm",(void*)f_3889},
{"f_3845:srfi_2d69_2escm",(void*)f_3845},
{"f_3881:srfi_2d69_2escm",(void*)f_3881},
{"f_3856:srfi_2d69_2escm",(void*)f_3856},
{"f_3862:srfi_2d69_2escm",(void*)f_3862},
{"f_3896:srfi_2d69_2escm",(void*)f_3896},
{"f_3911:srfi_2d69_2escm",(void*)f_3911},
{"f_3988:srfi_2d69_2escm",(void*)f_3988},
{"f_4025:srfi_2d69_2escm",(void*)f_4025},
{"f_4028:srfi_2d69_2escm",(void*)f_4028},
{"f_4016:srfi_2d69_2escm",(void*)f_4016},
{"f_3998:srfi_2d69_2escm",(void*)f_3998},
{"f_3925:srfi_2d69_2escm",(void*)f_3925},
{"f_3965:srfi_2d69_2escm",(void*)f_3965},
{"f_3953:srfi_2d69_2escm",(void*)f_3953},
{"f_3935:srfi_2d69_2escm",(void*)f_3935},
{"f_3795:srfi_2d69_2escm",(void*)f_3795},
{"f_3683:srfi_2d69_2escm",(void*)f_3683},
{"f_3693:srfi_2d69_2escm",(void*)f_3693},
{"f_3698:srfi_2d69_2escm",(void*)f_3698},
{"f_3760:srfi_2d69_2escm",(void*)f_3760},
{"f_3781:srfi_2d69_2escm",(void*)f_3781},
{"f_3754:srfi_2d69_2escm",(void*)f_3754},
{"f_3657:srfi_2d69_2escm",(void*)f_3657},
{"f_3664:srfi_2d69_2escm",(void*)f_3664},
{"f_3667:srfi_2d69_2escm",(void*)f_3667},
{"f_3590:srfi_2d69_2escm",(void*)f_3590},
{"f_3613:srfi_2d69_2escm",(void*)f_3613},
{"f_3629:srfi_2d69_2escm",(void*)f_3629},
{"f_3600:srfi_2d69_2escm",(void*)f_3600},
{"f_3670:srfi_2d69_2escm",(void*)f_3670},
{"f_3563:srfi_2d69_2escm",(void*)f_3563},
{"f_3551:srfi_2d69_2escm",(void*)f_3551},
{"f_3542:srfi_2d69_2escm",(void*)f_3542},
{"f_3533:srfi_2d69_2escm",(void*)f_3533},
{"f_3524:srfi_2d69_2escm",(void*)f_3524},
{"f_3515:srfi_2d69_2escm",(void*)f_3515},
{"f_3506:srfi_2d69_2escm",(void*)f_3506},
{"f_3497:srfi_2d69_2escm",(void*)f_3497},
{"f_3488:srfi_2d69_2escm",(void*)f_3488},
{"f_3482:srfi_2d69_2escm",(void*)f_3482},
{"f_3119:srfi_2d69_2escm",(void*)f_3119},
{"f_3472:srfi_2d69_2escm",(void*)f_3472},
{"f_3475:srfi_2d69_2escm",(void*)f_3475},
{"f_3197:srfi_2d69_2escm",(void*)f_3197},
{"f_3452:srfi_2d69_2escm",(void*)f_3452},
{"f_3455:srfi_2d69_2escm",(void*)f_3455},
{"f_3200:srfi_2d69_2escm",(void*)f_3200},
{"f_3420:srfi_2d69_2escm",(void*)f_3420},
{"f_3426:srfi_2d69_2escm",(void*)f_3426},
{"f_3203:srfi_2d69_2escm",(void*)f_3203},
{"f_3238:srfi_2d69_2escm",(void*)f_3238},
{"f_3259:srfi_2d69_2escm",(void*)f_3259},
{"f_3265:srfi_2d69_2escm",(void*)f_3265},
{"f_3357:srfi_2d69_2escm",(void*)f_3357},
{"f_3360:srfi_2d69_2escm",(void*)f_3360},
{"f_3332:srfi_2d69_2escm",(void*)f_3332},
{"f_3335:srfi_2d69_2escm",(void*)f_3335},
{"f_3322:srfi_2d69_2escm",(void*)f_3322},
{"f_3304:srfi_2d69_2escm",(void*)f_3304},
{"f_3291:srfi_2d69_2escm",(void*)f_3291},
{"f_3281:srfi_2d69_2escm",(void*)f_3281},
{"f_3268:srfi_2d69_2escm",(void*)f_3268},
{"f_3249:srfi_2d69_2escm",(void*)f_3249},
{"f_3206:srfi_2d69_2escm",(void*)f_3206},
{"f_3209:srfi_2d69_2escm",(void*)f_3209},
{"f_3213:srfi_2d69_2escm",(void*)f_3213},
{"f_3229:srfi_2d69_2escm",(void*)f_3229},
{"f_3121:srfi_2d69_2escm",(void*)f_3121},
{"f_3088:srfi_2d69_2escm",(void*)f_3088},
{"f_3092:srfi_2d69_2escm",(void*)f_3092},
{"f_3058:srfi_2d69_2escm",(void*)f_3058},
{"f_3064:srfi_2d69_2escm",(void*)f_3064},
{"f_2915:srfi_2d69_2escm",(void*)f_2915},
{"f_2996:srfi_2d69_2escm",(void*)f_2996},
{"f_2987:srfi_2d69_2escm",(void*)f_2987},
{"f_2968:srfi_2d69_2escm",(void*)f_2968},
{"f_2972:srfi_2d69_2escm",(void*)f_2972},
{"f_2975:srfi_2d69_2escm",(void*)f_2975},
{"f_2931:srfi_2d69_2escm",(void*)f_2931},
{"f_2774:srfi_2d69_2escm",(void*)f_2774},
{"f_2855:srfi_2d69_2escm",(void*)f_2855},
{"f_2846:srfi_2d69_2escm",(void*)f_2846},
{"f_2827:srfi_2d69_2escm",(void*)f_2827},
{"f_2831:srfi_2d69_2escm",(void*)f_2831},
{"f_2834:srfi_2d69_2escm",(void*)f_2834},
{"f_2790:srfi_2d69_2escm",(void*)f_2790},
{"f_2714:srfi_2d69_2escm",(void*)f_2714},
{"f_2718:srfi_2d69_2escm",(void*)f_2718},
{"f_2752:srfi_2d69_2escm",(void*)f_2752},
{"f_2248:srfi_2d69_2escm",(void*)f_2248},
{"f_2367:srfi_2d69_2escm",(void*)f_2367},
{"f_2702:srfi_2d69_2escm",(void*)f_2702},
{"f_2690:srfi_2d69_2escm",(void*)f_2690},
{"f_2674:srfi_2d69_2escm",(void*)f_2674},
{"f_2623:srfi_2d69_2escm",(void*)f_2623},
{"f_2643:srfi_2d69_2escm",(void*)f_2643},
{"f_2635:srfi_2d69_2escm",(void*)f_2635},
{"f_2597:srfi_2d69_2escm",(void*)f_2597},
{"f_2609:srfi_2d69_2escm",(void*)f_2609},
{"f_2563:srfi_2d69_2escm",(void*)f_2563},
{"f_2316:srfi_2d69_2escm",(void*)f_2316},
{"f_2350:srfi_2d69_2escm",(void*)f_2350},
{"f_2353:srfi_2d69_2escm",(void*)f_2353},
{"f_2251:srfi_2d69_2escm",(void*)f_2251},
{"f_2268:srfi_2d69_2escm",(void*)f_2268},
{"f_2302:srfi_2d69_2escm",(void*)f_2302},
{"f_2189:srfi_2d69_2escm",(void*)f_2189},
{"f_2193:srfi_2d69_2escm",(void*)f_2193},
{"f_2165:srfi_2d69_2escm",(void*)f_2165},
{"f_2227:srfi_2d69_2escm",(void*)f_2227},
{"f_1915:srfi_2d69_2escm",(void*)f_1915},
{"f_1919:srfi_2d69_2escm",(void*)f_1919},
{"f_1953:srfi_2d69_2escm",(void*)f_1953},
{"f_1761:srfi_2d69_2escm",(void*)f_1761},
{"f_1765:srfi_2d69_2escm",(void*)f_1765},
{"f_1768:srfi_2d69_2escm",(void*)f_1768},
{"f_1735:srfi_2d69_2escm",(void*)f_1735},
{"f_1742:srfi_2d69_2escm",(void*)f_1742},
{"f_1662:srfi_2d69_2escm",(void*)f_1662},
{"f_1666:srfi_2d69_2escm",(void*)f_1666},
{"f_1598:srfi_2d69_2escm",(void*)f_1598},
{"f_1602:srfi_2d69_2escm",(void*)f_1602},
{"f_1641:srfi_2d69_2escm",(void*)f_1641},
{"f_1395:srfi_2d69_2escm",(void*)f_1395},
{"f_1399:srfi_2d69_2escm",(void*)f_1399},
{"f_1402:srfi_2d69_2escm",(void*)f_1402},
{"f_1565:srfi_2d69_2escm",(void*)f_1565},
{"f_1571:srfi_2d69_2escm",(void*)f_1571},
{"f_1389:srfi_2d69_2escm",(void*)f_1389},
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
