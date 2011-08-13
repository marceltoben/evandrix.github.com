/* Generated from srfi-14.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: srfi-14.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file srfi-14.c
   unit: srfi_2d14
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[103];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,12),40,102,95,49,48,56,48,32,115,54,54,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,13),40,102,95,49,48,56,54,32,99,115,54,56,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,12),40,102,95,49,48,57,50,32,120,55,48,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,35),40,37,100,101,102,97,117,108,116,45,98,97,115,101,32,109,97,121,98,101,45,98,97,115,101,55,52,32,112,114,111,99,55,53,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,9),40,108,112,32,99,115,56,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,31),40,37,99,104,97,114,45,115,101,116,58,115,47,99,104,101,99,107,32,99,115,55,57,32,112,114,111,99,56,48,41,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,13),40,102,95,49,49,56,56,32,99,115,56,55,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,11),40,108,112,32,114,101,115,116,57,55,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,17),40,102,95,49,50,48,50,32,46,32,114,101,115,116,56,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,10),40,108,112,50,32,105,49,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,18),40,108,112,32,115,49,49,49,49,32,114,101,115,116,49,49,50,41,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,18),40,102,95,49,50,53,55,32,46,32,114,101,115,116,49,48,52,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,4),40,108,112,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,108,112,32,105,49,52,55,32,97,110,115,49,52,56,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,31),40,102,95,49,51,54,53,32,99,115,49,51,50,32,46,32,109,97,121,98,101,45,98,111,117,110,100,49,51,51,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,22),40,102,95,49,52,55,56,32,99,115,49,53,55,32,99,104,97,114,49,53,56,41,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,12),40,108,112,32,115,105,122,101,49,55,51,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,14),40,102,95,49,53,49,55,32,99,115,49,54,57,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,18),40,108,112,32,105,49,56,52,32,99,111,117,110,116,49,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,24),40,102,95,49,53,53,57,32,112,114,101,100,49,56,48,32,99,115,101,116,49,56,49,41};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,11),40,103,50,48,53,32,99,50,49,51,41,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,48,52,32,103,50,49,48,50,49,53,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,45),40,37,115,101,116,45,99,104,97,114,45,115,101,116,32,115,101,116,49,57,55,32,112,114,111,99,49,57,56,32,99,115,49,57,57,32,99,104,97,114,115,50,48,48,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,11),40,103,50,50,57,32,99,50,51,55,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,50,56,32,103,50,51,52,50,51,57,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,46),40,37,115,101,116,45,99,104,97,114,45,115,101,116,33,32,115,101,116,50,50,49,32,112,114,111,99,50,50,50,32,99,115,50,50,51,32,99,104,97,114,115,50,50,52,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,17),40,97,49,55,50,54,32,115,50,52,55,32,105,50,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,25),40,102,95,49,55,50,49,32,99,115,50,52,53,32,46,32,99,104,97,114,115,50,52,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,17),40,97,49,55,51,56,32,115,50,53,50,32,105,50,53,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,25),40,102,95,49,55,51,51,32,99,115,50,53,48,32,46,32,99,104,97,114,115,50,53,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,17),40,97,49,55,53,48,32,115,50,53,55,32,105,50,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,25),40,102,95,49,55,52,53,32,99,115,50,53,53,32,46,32,99,104,97,114,115,50,53,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,17),40,97,49,55,54,50,32,115,50,54,50,32,105,50,54,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,25),40,102,95,49,55,53,55,32,99,115,50,54,48,32,46,32,99,104,97,114,115,50,54,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,16),40,102,95,49,55,54,57,32,99,115,101,116,50,54,53,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,18),40,102,95,49,55,55,53,32,99,117,114,115,111,114,50,54,55,41,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,26),40,102,95,49,55,56,49,32,99,115,101,116,50,54,57,32,99,117,114,115,111,114,50,55,48,41,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,26),40,102,95,49,55,56,55,32,99,115,101,116,50,55,50,32,99,117,114,115,111,114,50,55,51,41,0,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,4),40,108,112,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,49),40,37,99,104,97,114,45,115,101,116,45,99,117,114,115,111,114,45,110,101,120,116,32,99,115,101,116,50,55,54,32,99,117,114,115,111,114,50,55,55,32,112,114,111,99,50,55,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,48,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,22),40,102,95,49,56,52,56,32,112,114,111,99,50,57,54,32,99,115,50,57,55,41,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,50,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,22),40,102,95,49,57,48,56,32,112,114,111,99,51,49,53,32,99,115,51,49,54,41,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,16),40,108,112,32,105,51,52,53,32,97,110,115,51,52,54,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,30),40,102,95,49,57,56,55,32,107,111,110,115,51,52,48,32,107,110,105,108,51,52,49,32,99,115,51,52,50,41,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,53,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,22),40,102,95,50,48,51,57,32,112,114,101,100,51,53,51,32,99,115,51,53,52,41,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,22),40,102,95,50,48,57,51,32,112,114,101,100,51,55,49,32,99,115,51,55,50,41,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,12),40,108,112,32,115,101,101,100,51,57,56,41,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,47),40,37,99,104,97,114,45,115,101,116,45,117,110,102,111,108,100,33,32,112,51,57,50,32,102,51,57,51,32,103,51,57,52,32,115,51,57,53,32,115,101,101,100,51,57,54,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,47),40,102,95,50,49,57,56,32,112,52,48,57,32,102,52,49,48,32,103,52,49,49,32,115,101,101,100,52,49,50,32,46,32,109,97,121,98,101,45,98,97,115,101,52,49,51,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,44),40,102,95,50,50,49,48,32,112,52,49,55,32,102,52,49,56,32,103,52,49,57,32,115,101,101,100,52,50,48,32,98,97,115,101,45,99,115,101,116,52,50,49,41,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,6),40,103,52,50,57,41,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,18),40,102,111,114,45,101,97,99,104,45,108,111,111,112,52,50,56,41,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,32),40,37,108,105,115,116,45,62,99,104,97,114,45,115,101,116,33,32,99,104,97,114,115,52,50,52,32,115,52,50,53,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,19),40,102,95,50,50,54,54,32,46,32,99,104,97,114,115,52,52,56,41,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,33),40,102,95,50,50,55,56,32,99,104,97,114,115,52,53,50,32,46,32,109,97,121,98,101,45,98,97,115,101,52,53,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,28),40,102,95,50,50,57,48,32,99,104,97,114,115,52,53,55,32,98,97,115,101,45,99,115,52,53,56,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,16),40,108,112,32,105,52,54,52,32,97,110,115,52,54,53,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,14),40,102,95,50,51,48,48,32,99,115,52,54,49,41,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,55,53,41,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,41),40,37,115,116,114,105,110,103,45,62,99,104,97,114,45,115,101,116,33,32,115,116,114,52,55,50,32,98,115,52,55,51,32,112,114,111,99,52,55,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,31),40,102,95,50,52,48,49,32,115,116,114,52,56,54,32,46,32,109,97,121,98,101,45,98,97,115,101,52,56,55,41,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,26),40,102,95,50,52,49,51,32,115,116,114,52,57,49,32,98,97,115,101,45,99,115,52,57,50,41,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,9),40,108,112,32,106,53,48,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,14),40,102,95,50,52,50,51,32,99,115,52,57,53,41,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,4),40,108,112,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,65),40,37,117,99,115,45,114,97,110,103,101,45,62,99,104,97,114,45,115,101,116,33,32,108,111,119,101,114,53,48,57,32,117,112,112,101,114,53,49,48,32,101,114,114,111,114,63,53,49,49,32,98,115,53,49,50,32,112,114,111,99,53,49,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,36),40,102,95,50,53,52,54,32,108,111,119,101,114,53,51,49,32,117,112,112,101,114,53,51,50,32,46,32,114,101,115,116,53,51,51,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,47),40,102,95,50,53,55,54,32,108,111,119,101,114,53,52,54,32,117,112,112,101,114,53,52,55,32,101,114,114,111,114,63,53,52,56,32,98,97,115,101,45,99,115,53,52,57,41,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,53,53,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,39),40,37,99,104,97,114,45,115,101,116,45,102,105,108,116,101,114,33,32,112,114,101,100,53,53,50,32,100,115,53,53,51,32,98,115,53,53,52,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,47),40,102,95,50,54,53,52,32,112,114,101,100,105,99,97,116,101,53,55,55,32,100,111,109,97,105,110,53,55,56,32,46,32,109,97,121,98,101,45,98,97,115,101,53,55,57,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,42),40,102,95,50,54,55,48,32,112,114,101,100,105,99,97,116,101,53,56,51,32,100,111,109,97,105,110,53,56,52,32,98,97,115,101,45,99,115,53,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,13),40,102,95,50,54,56,52,32,120,53,56,56,41,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,53,57,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,24),40,37,115,116,114,105,110,103,45,105,116,101,114,32,112,53,57,51,32,115,53,57,52,41};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,54,50,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,14),40,103,54,49,48,32,99,115,101,116,54,49,56,41,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,48,57,32,103,54,49,53,54,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,47),40,37,99,104,97,114,45,115,101,116,45,97,108,103,101,98,114,97,32,115,54,48,51,32,99,115,101,116,115,54,48,52,32,111,112,54,48,53,32,112,114,111,99,54,48,54,41,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,17),40,97,50,56,52,49,32,105,54,52,48,32,118,54,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,14),40,102,95,50,56,50,55,32,99,115,54,51,55,41,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,17),40,97,50,56,55,52,32,105,54,53,54,32,118,54,53,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,16),40,102,95,50,56,54,54,32,99,115,101,116,54,53,52,41};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,22),40,97,50,57,48,56,32,115,54,55,50,32,105,54,55,51,32,118,54,55,52,41,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,28),40,102,95,50,56,57,57,32,99,115,101,116,49,54,55,48,32,46,32,99,115,101,116,115,54,55,49,41,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,22),40,97,50,57,53,49,32,115,54,56,51,32,105,54,56,52,32,118,54,56,53,41,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,19),40,102,95,50,57,51,48,32,46,32,99,115,101,116,115,54,56,49,41,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,22),40,97,50,57,57,51,32,115,54,57,52,32,105,54,57,53,32,118,54,57,54,41,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,28),40,102,95,50,57,56,52,32,99,115,101,116,49,54,57,50,32,46,32,99,115,101,116,115,54,57,51,41,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,22),40,97,51,48,51,50,32,115,55,48,53,32,105,55,48,54,32,118,55,48,55,41,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,19),40,102,95,51,48,49,49,32,46,32,99,115,101,116,115,55,48,51,41,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,22),40,97,51,48,55,48,32,115,55,49,54,32,105,55,49,55,32,118,55,49,56,41,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,28),40,102,95,51,48,54,49,32,99,115,101,116,49,55,49,52,32,46,32,99,115,101,116,115,55,49,53,41,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,22),40,97,51,49,48,57,32,115,55,50,56,32,105,55,50,57,32,118,55,51,48,41,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,26),40,102,95,51,48,57,50,32,99,115,49,55,50,53,32,46,32,99,115,101,116,115,55,50,54,41,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,22),40,97,51,49,52,55,32,115,55,51,57,32,105,55,52,48,32,118,55,52,49,41,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,28),40,102,95,51,49,51,56,32,99,115,101,116,49,55,51,55,32,46,32,99,115,101,116,115,55,51,56,41,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,22),40,97,51,50,49,49,32,115,55,53,53,32,105,55,53,54,32,118,55,53,55,41,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,19),40,102,95,51,49,57,48,32,46,32,99,115,101,116,115,55,53,51,41,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,17),40,97,51,50,55,50,32,105,55,56,53,32,118,55,56,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,12),40,103,55,55,54,32,99,115,55,56,52,41,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,55,53,32,103,55,56,49,56,48,56,41,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,62),40,37,99,104,97,114,45,115,101,116,45,100,105,102,102,43,105,110,116,101,114,115,101,99,116,105,111,110,33,32,100,105,102,102,55,54,57,32,105,110,116,55,55,48,32,99,115,101,116,115,55,55,49,32,112,114,111,99,55,55,50,41,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,17),40,97,51,51,56,48,32,105,56,49,56,32,118,56,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,33),40,102,95,51,51,54,51,32,99,115,49,56,49,51,32,99,115,50,56,49,52,32,46,32,99,115,101,116,115,56,49,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,26),40,102,95,51,52,51,52,32,99,115,49,56,51,57,32,46,32,99,115,101,116,115,56,52,48,41,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,52,56,32,103,57,54,48,57,54,54,41,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,50,48,32,103,57,51,50,57,51,56,41,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,57,50,32,103,57,48,52,57,49,48,41,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,54,51,32,103,56,55,53,56,56,49,41,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_srfi_2d14_toplevel)
C_externexport void C_ccall C_srfi_2d14_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1066)
static void C_ccall f_1066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3463)
static void C_ccall f_3463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3467)
static void C_ccall f_3467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3477)
static void C_ccall f_3477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3484)
static void C_ccall f_3484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3727)
static void C_ccall f_3727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3487)
static void C_ccall f_3487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3499)
static void C_ccall f_3499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3503)
static void C_ccall f_3503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3507)
static void C_ccall f_3507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3511)
static void C_ccall f_3511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3682)
static void C_fcall f_3682(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3517)
static void C_ccall f_3517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3520)
static void C_ccall f_3520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3647)
static void C_fcall f_3647(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3530)
static void C_ccall f_3530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3533)
static void C_ccall f_3533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3537)
static void C_ccall f_3537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3612)
static void C_fcall f_3612(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3610)
static void C_ccall f_3610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3541)
static void C_ccall f_3541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3545)
static void C_ccall f_3545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3570)
static void C_fcall f_3570(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3568)
static void C_ccall f_3568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3549)
static void C_ccall f_3549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3561)
static void C_ccall f_3561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3553)
static void C_ccall f_3553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3557)
static void C_ccall f_3557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3434)
static void C_ccall f_3434(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3434)
static void C_ccall f_3434r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3459)
static void C_ccall f_3459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3438)
static void C_ccall f_3438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3441)
static void C_ccall f_3441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3444)
static void C_ccall f_3444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3451)
static void C_ccall f_3451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3455)
static void C_ccall f_3455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3367)
static void C_ccall f_3367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3370)
static void C_ccall f_3370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3376)
static void C_ccall f_3376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3265)
static void C_fcall f_3265(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3340)
static void C_fcall f_3340(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3267)
static void C_fcall f_3267(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3332)
static void C_ccall f_3332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3190)
static void C_ccall f_3190(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3190)
static void C_ccall f_3190r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3200)
static void C_ccall f_3200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3212)
static void C_ccall f_3212(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3203)
static void C_ccall f_3203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3138)
static void C_ccall f_3138(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3138)
static void C_ccall f_3138r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3146)
static void C_ccall f_3146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3148)
static void C_ccall f_3148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3142)
static void C_ccall f_3142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3110)
static void C_ccall f_3110(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3105)
static void C_ccall f_3105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3069)
static void C_ccall f_3069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3071)
static void C_ccall f_3071(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3065)
static void C_ccall f_3065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3052)
static void C_ccall f_3052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3021)
static void C_ccall f_3021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2992)
static void C_ccall f_2992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2988)
static void C_ccall f_2988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2943)
static void C_ccall f_2943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2899)
static void C_ccall f_2899(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2899)
static void C_ccall f_2899r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2903)
static void C_ccall f_2903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2866)
static void C_ccall f_2866(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2875)
static void C_ccall f_2875(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2873)
static void C_ccall f_2873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2831)
static void C_ccall f_2831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2842)
static void C_ccall f_2842(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2837)
static void C_ccall f_2837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2755)
static void C_fcall f_2755(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2804)
static void C_fcall f_2804(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2814)
static void C_ccall f_2814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2757)
static void C_fcall f_2757(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2761)
static void C_ccall f_2761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2766)
static void C_fcall f_2766(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2776)
static void C_ccall f_2776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2714)
static void C_fcall f_2714(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2724)
static void C_fcall f_2724(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2734)
static void C_ccall f_2734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2678)
static void C_ccall f_2678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2682)
static void C_ccall f_2682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2674)
static void C_ccall f_2674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2654)
static void C_ccall f_2654(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2654)
static void C_ccall f_2654r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2658)
static void C_ccall f_2658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2668)
static void C_ccall f_2668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2661)
static void C_ccall f_2661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2586)
static void C_fcall f_2586(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2592)
static void C_fcall f_2592(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2612)
static void C_ccall f_2612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2584)
static void C_ccall f_2584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2546)
static void C_ccall f_2546(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2546)
static void C_ccall f_2546r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2556)
static void C_ccall f_2556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2559)
static void C_ccall f_2559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2484)
static void C_fcall f_2484(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2532)
static void C_fcall f_2532(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2494)
static void C_ccall f_2494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2503)
static C_word C_fcall f_2503(C_word t0,C_word t1);
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2482)
static void C_ccall f_2482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2435)
static C_word C_fcall f_2435(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2413)
static void C_ccall f_2413(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2421)
static void C_ccall f_2421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2417)
static void C_ccall f_2417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2401)
static void C_ccall f_2401(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2401)
static void C_ccall f_2401r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2405)
static void C_ccall f_2405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2352)
static void C_fcall f_2352(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2365)
static C_word C_fcall f_2365(C_word t0,C_word t1);
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2309)
static void C_fcall f_2309(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2290)
static void C_ccall f_2290(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2294)
static void C_ccall f_2294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2278)
static void C_ccall f_2278(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2278)
static void C_ccall f_2278r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2282)
static void C_ccall f_2282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2285)
static void C_ccall f_2285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2266)
static void C_ccall f_2266(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2266)
static void C_ccall f_2266r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2273)
static void C_ccall f_2273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2220)
static void C_fcall f_2220(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2243)
static C_word C_fcall f_2243(C_word t0,C_word t1);
C_noret_decl(f_2222)
static C_word C_fcall f_2222(C_word t0,C_word t1);
C_noret_decl(f_2210)
static void C_ccall f_2210(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2218)
static void C_ccall f_2218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2214)
static void C_ccall f_2214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2198)
static void C_ccall f_2198(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_2198)
static void C_ccall f_2198r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_2202)
static void C_ccall f_2202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2205)
static void C_ccall f_2205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2156)
static void C_fcall f_2156(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2162)
static void C_fcall f_2162(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2192)
static void C_ccall f_2192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2184)
static void C_ccall f_2184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2093)
static void C_ccall f_2093(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2097)
static void C_ccall f_2097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2102)
static void C_fcall f_2102(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2112)
static void C_ccall f_2112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2039)
static void C_ccall f_2039(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2043)
static void C_ccall f_2043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2048)
static void C_fcall f_2048(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2077)
static void C_ccall f_2077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1987)
static void C_ccall f_1987(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1991)
static void C_ccall f_1991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1996)
static void C_fcall f_1996(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2014)
static void C_ccall f_2014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1912)
static void C_ccall f_1912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1923)
static void C_fcall f_1923(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1981)
static void C_ccall f_1981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1918)
static void C_ccall f_1918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1848)
static void C_ccall f_1848(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1852)
static void C_ccall f_1852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1857)
static void C_fcall f_1857(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1867)
static void C_ccall f_1867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1796)
static void C_fcall f_1796(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1800)
static void C_ccall f_1800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1805)
static C_word C_fcall f_1805(C_word t0,C_word t1);
C_noret_decl(f_1787)
static void C_ccall f_1787(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1775)
static void C_ccall f_1775(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1757)
static void C_ccall f_1757(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1757)
static void C_ccall f_1757r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1745)
static void C_ccall f_1745(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1745)
static void C_ccall f_1745r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1751)
static void C_ccall f_1751(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1733)
static void C_ccall f_1733(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1733)
static void C_ccall f_1733r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1739)
static void C_ccall f_1739(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1721)
static void C_ccall f_1721(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1721)
static void C_ccall f_1721r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1727)
static void C_ccall f_1727(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1677)
static void C_fcall f_1677(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1681)
static void C_ccall f_1681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1698)
static void C_fcall f_1698(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1696)
static void C_ccall f_1696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1682)
static void C_fcall f_1682(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1626)
static void C_fcall f_1626(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1675)
static void C_ccall f_1675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1650)
static void C_fcall f_1650(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1660)
static void C_ccall f_1660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1645)
static void C_ccall f_1645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1631)
static void C_fcall f_1631(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1559)
static void C_ccall f_1559(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1563)
static void C_ccall f_1563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1568)
static void C_fcall f_1568(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1589)
static void C_ccall f_1589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1517)
static void C_ccall f_1517(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1521)
static void C_ccall f_1521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1526)
static C_word C_fcall f_1526(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1478)
static void C_ccall f_1478(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1511)
static void C_ccall f_1511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1365)
static void C_ccall f_1365(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1365)
static void C_ccall f_1365r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1369)
static void C_ccall f_1369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1372)
static void C_fcall f_1372(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1378)
static void C_ccall f_1378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1386)
static void C_fcall f_1386(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1436)
static C_word C_fcall f_1436(C_word t0,C_word t1);
C_noret_decl(f_1257)
static void C_ccall f_1257(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1257)
static void C_ccall f_1257r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1279)
static void C_fcall f_1279(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1289)
static void C_ccall f_1289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1306)
static void C_fcall f_1306(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1202)
static void C_ccall f_1202(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1202)
static void C_ccall f_1202r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1218)
static void C_ccall f_1218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1223)
static void C_fcall f_1223(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1247)
static void C_ccall f_1247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1188)
static void C_ccall f_1188(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1200)
static void C_ccall f_1200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1196)
static void C_ccall f_1196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1155)
static void C_fcall f_1155(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1161)
static void C_fcall f_1161(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1168)
static void C_ccall f_1168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1178)
static void C_ccall f_1178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1108)
static void C_fcall f_1108(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1133)
static void C_ccall f_1133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1140)
static void C_ccall f_1140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1092)
static void C_ccall f_1092(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1086)
static void C_ccall f_1086(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1080)
static void C_ccall f_1080(C_word c,C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_3682)
static void C_fcall trf_3682(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3682(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3682(t0,t1,t2);}

C_noret_decl(trf_3647)
static void C_fcall trf_3647(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3647(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3647(t0,t1,t2);}

C_noret_decl(trf_3612)
static void C_fcall trf_3612(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3612(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3612(t0,t1,t2);}

C_noret_decl(trf_3570)
static void C_fcall trf_3570(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3570(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3570(t0,t1,t2);}

C_noret_decl(trf_3265)
static void C_fcall trf_3265(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3265(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3265(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3340)
static void C_fcall trf_3340(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3340(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3340(t0,t1,t2);}

C_noret_decl(trf_3267)
static void C_fcall trf_3267(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3267(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3267(t0,t1,t2);}

C_noret_decl(trf_2755)
static void C_fcall trf_2755(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2755(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2755(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2804)
static void C_fcall trf_2804(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2804(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2804(t0,t1,t2);}

C_noret_decl(trf_2757)
static void C_fcall trf_2757(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2757(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2757(t0,t1,t2);}

C_noret_decl(trf_2766)
static void C_fcall trf_2766(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2766(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2766(t0,t1,t2);}

C_noret_decl(trf_2714)
static void C_fcall trf_2714(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2714(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2714(t0,t1,t2);}

C_noret_decl(trf_2724)
static void C_fcall trf_2724(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2724(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2724(t0,t1,t2);}

C_noret_decl(trf_2586)
static void C_fcall trf_2586(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2586(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2586(t0,t1,t2,t3);}

C_noret_decl(trf_2592)
static void C_fcall trf_2592(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2592(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2592(t0,t1,t2);}

C_noret_decl(trf_2484)
static void C_fcall trf_2484(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2484(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2484(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2532)
static void C_fcall trf_2532(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2532(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2532(t0,t1);}

C_noret_decl(trf_2352)
static void C_fcall trf_2352(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2352(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2352(t0,t1,t2,t3);}

C_noret_decl(trf_2309)
static void C_fcall trf_2309(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2309(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2309(t0,t1,t2,t3);}

C_noret_decl(trf_2220)
static void C_fcall trf_2220(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2220(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2220(t0,t1,t2);}

C_noret_decl(trf_2156)
static void C_fcall trf_2156(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2156(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2156(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2162)
static void C_fcall trf_2162(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2162(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2162(t0,t1,t2);}

C_noret_decl(trf_2102)
static void C_fcall trf_2102(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2102(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2102(t0,t1,t2);}

C_noret_decl(trf_2048)
static void C_fcall trf_2048(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2048(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2048(t0,t1,t2);}

C_noret_decl(trf_1996)
static void C_fcall trf_1996(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1996(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1996(t0,t1,t2,t3);}

C_noret_decl(trf_1923)
static void C_fcall trf_1923(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1923(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1923(t0,t1,t2);}

C_noret_decl(trf_1857)
static void C_fcall trf_1857(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1857(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1857(t0,t1,t2);}

C_noret_decl(trf_1796)
static void C_fcall trf_1796(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1796(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1796(t0,t1,t2,t3);}

C_noret_decl(trf_1677)
static void C_fcall trf_1677(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1677(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1677(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1698)
static void C_fcall trf_1698(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1698(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1698(t0,t1,t2);}

C_noret_decl(trf_1682)
static void C_fcall trf_1682(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1682(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1682(t0,t1,t2);}

C_noret_decl(trf_1626)
static void C_fcall trf_1626(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1626(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1626(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1650)
static void C_fcall trf_1650(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1650(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1650(t0,t1,t2);}

C_noret_decl(trf_1631)
static void C_fcall trf_1631(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1631(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1631(t0,t1,t2);}

C_noret_decl(trf_1568)
static void C_fcall trf_1568(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1568(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1568(t0,t1,t2,t3);}

C_noret_decl(trf_1372)
static void C_fcall trf_1372(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1372(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1372(t0,t1);}

C_noret_decl(trf_1386)
static void C_fcall trf_1386(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1386(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1386(t0,t1,t2,t3);}

C_noret_decl(trf_1279)
static void C_fcall trf_1279(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1279(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1279(t0,t1,t2,t3);}

C_noret_decl(trf_1306)
static void C_fcall trf_1306(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1306(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1306(t0,t1,t2);}

C_noret_decl(trf_1223)
static void C_fcall trf_1223(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1223(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1223(t0,t1,t2);}

C_noret_decl(trf_1155)
static void C_fcall trf_1155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1155(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1155(t0,t1,t2);}

C_noret_decl(trf_1161)
static void C_fcall trf_1161(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1161(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1161(t0,t1,t2);}

C_noret_decl(trf_1108)
static void C_fcall trf_1108(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1108(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1108(t0,t1,t2);}

C_noret_decl(tr7)
static void C_fcall tr7(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7(C_proc7 k){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
(k)(7,t0,t1,t2,t3,t4,t5,t6);}

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

C_noret_decl(tr6r)
static void C_fcall tr6r(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6r(C_proc6 k){
int n;
C_word *a,t6;
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
n=C_rest_count(0);
a=C_alloc(n*3);
t6=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6);}

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
C_srfi_2d14_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_2d14_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_2d14_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(862)){
C_save(t1);
C_rereclaim2(862*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,103);
lf[0]=C_h_intern(&lf[0],13,"make-char-set");
lf[1]=C_h_intern(&lf[1],8,"char-set");
lf[2]=C_h_intern(&lf[2],10,"char-set:s");
lf[3]=C_h_intern(&lf[3],9,"char-set\077");
lf[5]=C_h_intern(&lf[5],9,"substring");
lf[6]=C_h_intern(&lf[6],9,"\003syserror");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000 BASE-CS parameter not a char-set");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\0003Expected final base char set -- too many parameters");
lf[9]=C_h_intern(&lf[9],11,"make-string");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\016Not a char-set");
lf[12]=C_h_intern(&lf[12],13,"char-set-copy");
lf[13]=C_h_intern(&lf[13],9,"char-set=");
lf[14]=C_h_intern(&lf[14],10,"char-set<=");
lf[15]=C_h_intern(&lf[15],13,"char-set-hash");
lf[16]=C_h_intern(&lf[16],6,"modulo");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[18]=C_h_intern(&lf[18],18,"char-set-contains\077");
lf[19]=C_h_intern(&lf[19],13,"char-set-size");
lf[20]=C_h_intern(&lf[20],14,"char-set-count");
lf[22]=C_h_intern(&lf[22],8,"for-each");
lf[24]=C_h_intern(&lf[24],15,"char-set-adjoin");
lf[25]=C_h_intern(&lf[25],16,"char-set-adjoin!");
lf[26]=C_h_intern(&lf[26],15,"char-set-delete");
lf[27]=C_h_intern(&lf[27],16,"char-set-delete!");
lf[28]=C_h_intern(&lf[28],15,"char-set-cursor");
lf[30]=C_h_intern(&lf[30],16,"end-of-char-set\077");
lf[31]=C_h_intern(&lf[31],12,"char-set-ref");
lf[32]=C_h_intern(&lf[32],20,"char-set-cursor-next");
lf[33]=C_h_intern(&lf[33],17,"char-set-for-each");
lf[34]=C_h_intern(&lf[34],12,"char-set-map");
lf[35]=C_h_intern(&lf[35],13,"char-set-fold");
lf[36]=C_h_intern(&lf[36],14,"char-set-every");
lf[37]=C_h_intern(&lf[37],12,"char-set-any");
lf[39]=C_h_intern(&lf[39],15,"char-set-unfold");
lf[40]=C_h_intern(&lf[40],16,"char-set-unfold!");
lf[42]=C_h_intern(&lf[42],14,"list->char-set");
lf[43]=C_h_intern(&lf[43],15,"list->char-set!");
lf[44]=C_h_intern(&lf[44],14,"char-set->list");
lf[46]=C_h_intern(&lf[46],16,"string->char-set");
lf[47]=C_h_intern(&lf[47],17,"string->char-set!");
lf[48]=C_h_intern(&lf[48],16,"char-set->string");
lf[50]=C_h_intern(&lf[50],3,"min");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000`Requested UCS range contains unavailable characters -- this implementation "
"only supports Latin-1");
lf[52]=C_h_intern(&lf[52],19,"ucs-range->char-set");
lf[53]=C_h_intern(&lf[53],20,"ucs-range->char-set!");
lf[55]=C_h_intern(&lf[55],15,"char-set-filter");
lf[56]=C_h_intern(&lf[56],16,"char-set-filter!");
lf[57]=C_h_intern(&lf[57],10,"->char-set");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\036Not a charset, string or char.");
lf[61]=C_h_intern(&lf[61],19,"char-set-complement");
lf[62]=C_h_intern(&lf[62],20,"char-set-complement!");
lf[63]=C_h_intern(&lf[63],15,"char-set-union!");
lf[64]=C_h_intern(&lf[64],14,"char-set-union");
lf[65]=C_h_intern(&lf[65],14,"char-set:empty");
lf[66]=C_h_intern(&lf[66],22,"char-set-intersection!");
lf[67]=C_h_intern(&lf[67],21,"char-set-intersection");
lf[68]=C_h_intern(&lf[68],13,"char-set:full");
lf[69]=C_h_intern(&lf[69],20,"char-set-difference!");
lf[70]=C_h_intern(&lf[70],19,"char-set-difference");
lf[71]=C_h_intern(&lf[71],13,"char-set-xor!");
lf[72]=C_h_intern(&lf[72],12,"char-set-xor");
lf[74]=C_h_intern(&lf[74],27,"char-set-diff+intersection!");
lf[75]=C_h_intern(&lf[75],26,"char-set-diff+intersection");
lf[76]=C_h_intern(&lf[76],11,"string-copy");
lf[77]=C_h_intern(&lf[77],19,"char-set:lower-case");
lf[78]=C_h_intern(&lf[78],19,"char-set:upper-case");
lf[79]=C_h_intern(&lf[79],19,"char-set:title-case");
lf[80]=C_h_intern(&lf[80],15,"char-set:letter");
lf[81]=C_h_intern(&lf[81],14,"char-set:digit");
lf[82]=C_h_intern(&lf[82],18,"char-set:hex-digit");
lf[83]=C_h_intern(&lf[83],21,"char-set:letter+digit");
lf[84]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\241\376\003\000\000\002\376\377\001\000\000\000\253\376\003\000\000\002\376\377\001\000\000\000\255\376\003\000\000\002\376\377\001\000\000\000\267\376\003\000\000\002\376\377\001\000\000\000\273\376\003\000\000\002\376\377\001\000\000\000\277\376\377\016");
lf[85]=C_h_intern(&lf[85],3,"map");
lf[86]=C_h_intern(&lf[86],20,"char-set:punctuation");
lf[87]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\242\376\003\000\000\002\376\377\001\000\000\000\243\376\003\000\000\002\376\377\001\000\000\000\244\376\003\000\000\002\376\377\001\000\000\000\245\376\003\000\000\002\376\377\001\000\000\000\246\376\003\000\000\002\376\377\001\000\000\000\247\376\003\000\000\002\376\377\001"
"\000\000\000\250\376\003\000\000\002\376\377\001\000\000\000\251\376\003\000\000\002\376\377\001\000\000\000\254\376\003\000\000\002\376\377\001\000\000\000\256\376\003\000\000\002\376\377\001\000\000\000\257\376\003\000\000\002\376\377\001\000\000\000\260\376\003\000\000\002\376\377\001\000\000\000\261\376\003\000\000"
"\002\376\377\001\000\000\000\264\376\003\000\000\002\376\377\001\000\000\000\266\376\003\000\000\002\376\377\001\000\000\000\270\376\003\000\000\002\376\377\001\000\000\000\327\376\003\000\000\002\376\377\001\000\000\000\367\376\377\016");
lf[88]=C_h_intern(&lf[88],15,"char-set:symbol");
lf[89]=C_h_intern(&lf[89],16,"char-set:graphic");
lf[90]=C_h_intern(&lf[90],19,"char-set:whitespace");
lf[91]=C_h_intern(&lf[91],17,"char-set:printing");
lf[92]=C_h_intern(&lf[92],14,"char-set:blank");
lf[93]=C_h_intern(&lf[93],20,"char-set:iso-control");
lf[94]=C_h_intern(&lf[94],14,"char-set:ascii");
lf[95]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\011\376\003\000\000\002\376\377\001\000\000\000 \376\003\000\000\002\376\377\001\000\000\000\240\376\377\016");
lf[96]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\011\376\003\000\000\002\376\377\001\000\000\000\012\376\003\000\000\002\376\377\001\000\000\000\013\376\003\000\000\002\376\377\001\000\000\000\014\376\003\000\000\002\376\377\001\000\000\000\015\376\003\000\000\002\376\377\001\000\000\000 \376\003\000\000\002\376\377\001"
"\000\000\000\240\376\377\016");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\011$+<=>^`|~");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\027!\042#%&\047()*,-./:;\077@[\134]_{}");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\0260123456789abcdefABCDEF");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\0120123456789");
lf[101]=C_h_intern(&lf[101],17,"register-feature!");
lf[102]=C_h_intern(&lf[102],7,"srfi-14");
C_register_lf2(lf,103,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1066,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:15: register-feature! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[101]+1)))(3,*((C_word*)lf[101]+1),t2,lf[102]);}

/* k1064 */
static void C_ccall f_1066(C_word c,C_word t0,C_word t1){
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
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word ab[189],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1066,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! make-char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1080,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[2]+1 /* (set! char-set:s ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1086,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[3]+1 /* (set! char-set? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1092,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[4] /* (set! %default-base ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1108,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[10] /* (set! %char-set:s/check ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1155,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[12]+1 /* (set! char-set-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1188,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[13]+1 /* (set! char-set= ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1202,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[14]+1 /* (set! char-set<= ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1257,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[15]+1 /* (set! char-set-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1365,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[18]+1 /* (set! char-set-contains? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1478,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[19]+1 /* (set! char-set-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1517,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[20]+1 /* (set! char-set-count ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1559,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate(&lf[21] /* (set! %set-char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1626,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate(&lf[23] /* (set! %set-char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1677,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[24]+1 /* (set! char-set-adjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1721,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[25]+1 /* (set! char-set-adjoin! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1733,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[26]+1 /* (set! char-set-delete ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1745,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[27]+1 /* (set! char-set-delete! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1757,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[28]+1 /* (set! char-set-cursor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1769,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[30]+1 /* (set! end-of-char-set? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1775,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[31]+1 /* (set! char-set-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1781,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[32]+1 /* (set! char-set-cursor-next ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1787,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate(&lf[29] /* (set! %char-set-cursor-next ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1796,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[33]+1 /* (set! char-set-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1848,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[34]+1 /* (set! char-set-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1908,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[35]+1 /* (set! char-set-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1987,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[36]+1 /* (set! char-set-every ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2039,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[37]+1 /* (set! char-set-any ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2093,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate(&lf[38] /* (set! %char-set-unfold! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2156,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[39]+1 /* (set! char-set-unfold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2198,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[40]+1 /* (set! char-set-unfold! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2210,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate(&lf[41] /* (set! %list->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2220,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[1]+1 /* (set! char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2266,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[42]+1 /* (set! list->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2278,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[43]+1 /* (set! list->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2290,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[44]+1 /* (set! char-set->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2300,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate(&lf[45] /* (set! %string->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2352,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[46]+1 /* (set! string->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2401,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[47]+1 /* (set! string->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2413,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[48]+1 /* (set! char-set->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2423,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate(&lf[49] /* (set! %ucs-range->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2484,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[52]+1 /* (set! ucs-range->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2546,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[53]+1 /* (set! ucs-range->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2576,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate(&lf[54] /* (set! %char-set-filter! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2586,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[55]+1 /* (set! char-set-filter ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2654,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[56]+1 /* (set! char-set-filter! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2670,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[57]+1 /* (set! ->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2684,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate(&lf[59] /* (set! %string-iter ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2714,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate(&lf[60] /* (set! %char-set-algebra ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2755,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[61]+1 /* (set! char-set-complement ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2827,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[62]+1 /* (set! char-set-complement! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2866,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[63]+1 /* (set! char-set-union! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2899,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[64]+1 /* (set! char-set-union ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2930,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[66]+1 /* (set! char-set-intersection! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2984,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[67]+1 /* (set! char-set-intersection ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3011,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[69]+1 /* (set! char-set-difference! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3061,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[70]+1 /* (set! char-set-difference ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3092,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[71]+1 /* (set! char-set-xor! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3138,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[72]+1 /* (set! char-set-xor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3190,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate(&lf[73] /* (set! %char-set-diff+intersection! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3265,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[74]+1 /* (set! char-set-diff+intersection! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3363,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[75]+1 /* (set! char-set-diff+intersection ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3434,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t64=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3463,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:630: char-set */
t65=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t65+1)))(2,t65,t64);}

/* k3461 in k1064 */
static void C_ccall f_3463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3463,2,t0,t1);}
t2=C_mutate((C_word*)lf[65]+1 /* (set! char-set:empty ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3467,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:631: char-set-complement */
t4=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[65]+1));}

/* k3465 in k3461 in k1064 */
static void C_ccall f_3467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3467,2,t0,t1);}
t2=C_mutate((C_word*)lf[68]+1 /* (set! char-set:full ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3471,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:634: ucs-range->char-set */
t4=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(97),C_fix(123));}

/* k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3471,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3474,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:635: ucs-range->char-set! */
t3=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(223),C_fix(247),C_SCHEME_TRUE,t1);}

/* k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3474,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3477,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:636: ucs-range->char-set! */
t3=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(248),C_fix(256),C_SCHEME_TRUE,t1);}

/* k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3477,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3480,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:637: char-set-adjoin! */
t3=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_make_character(181));}

/* k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3480,2,t0,t1);}
t2=C_mutate((C_word*)lf[77]+1 /* (set! char-set:lower-case ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3484,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:640: ucs-range->char-set */
t4=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(65),C_fix(91));}

/* k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3484,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3487,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3727,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:643: ucs-range->char-set! */
t4=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,C_fix(192),C_fix(215),C_SCHEME_TRUE,t1);}

/* k3725 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:642: ucs-range->char-set! */
t2=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_fix(216),C_fix(223),C_SCHEME_TRUE,t1);}

/* k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3487,2,t0,t1);}
t2=C_mutate((C_word*)lf[78]+1 /* (set! char-set:upper-case ...) */,t1);
t3=C_mutate((C_word*)lf[79]+1 /* (set! char-set:title-case ...) */,*((C_word*)lf[65]+1));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3492,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:648: char-set-union */
t5=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[78]+1),*((C_word*)lf[77]+1));}

/* k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3492,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3495,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:649: char-set-adjoin! */
t3=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,t1,C_make_character(170),C_make_character(186));}

/* k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3495,2,t0,t1);}
t2=C_mutate((C_word*)lf[80]+1 /* (set! char-set:letter ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3499,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:653: string->char-set */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[100]);}

/* k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3499,2,t0,t1);}
t2=C_mutate((C_word*)lf[81]+1 /* (set! char-set:digit ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3503,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:654: string->char-set */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[99]);}

/* k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3503,2,t0,t1);}
t2=C_mutate((C_word*)lf[82]+1 /* (set! char-set:hex-digit ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3507,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:657: char-set-union */
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[80]+1),*((C_word*)lf[81]+1));}

/* k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3507,2,t0,t1);}
t2=C_mutate((C_word*)lf[83]+1 /* (set! char-set:letter+digit ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3511,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:660: string->char-set */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[98]);}

/* k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3511(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3511,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=lf[84];
t7=C_i_check_list_2(t6,lf[85]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3517,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3682,a[2]=t3,a[3]=t10,a[4]=t5,a[5]=((C_word)li113),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_3682(t12,t8,t6);}

/* map-loop863 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_fcall f_3682(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3682,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_make_character(C_unfix(t3));
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

/* k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3517,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3520,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:667: list->char-set! */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[2]);}

/* k3518 in k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3520,2,t0,t1);}
t2=C_mutate((C_word*)lf[86]+1 /* (set! char-set:punctuation ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3524,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:670: string->char-set */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[97]);}

/* k3522 in k3518 in k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3524(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3524,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=lf[87];
t7=C_i_check_list_2(t6,lf[85]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3530,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3647,a[2]=t3,a[3]=t10,a[4]=t5,a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_3647(t12,t8,t6);}

/* map-loop892 in k3522 in k3518 in k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_fcall f_3647(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3647,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_make_character(C_unfix(t3));
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

/* k3528 in k3522 in k3518 in k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3530,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3533,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:689: list->char-set! */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[2]);}

/* k3531 in k3528 in k3522 in k3518 in k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3533,2,t0,t1);}
t2=C_mutate((C_word*)lf[88]+1 /* (set! char-set:symbol ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3537,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:693: char-set-union */
t4=*((C_word*)lf[64]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,*((C_word*)lf[83]+1),*((C_word*)lf[86]+1),*((C_word*)lf[88]+1));}

/* k3535 in k3531 in k3528 in k3522 in k3518 in k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3537(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3537,2,t0,t1);}
t2=C_mutate((C_word*)lf[89]+1 /* (set! char-set:graphic ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3541,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=lf[96];
t9=C_i_check_list_2(t8,lf[85]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3610,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3612,a[2]=t5,a[3]=t12,a[4]=t7,a[5]=((C_word)li111),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_3612(t14,t10,t8);}

/* map-loop920 in k3535 in k3531 in k3528 in k3522 in k3518 in k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_fcall f_3612(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3612,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_make_character(C_unfix(t3));
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

/* k3608 in k3535 in k3531 in k3528 in k3522 in k3518 in k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:696: list->char-set */
t2=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3539 in k3535 in k3531 in k3528 in k3522 in k3518 in k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3541,2,t0,t1);}
t2=C_mutate((C_word*)lf[90]+1 /* (set! char-set:whitespace ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3545,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:704: char-set-union */
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[90]+1),*((C_word*)lf[89]+1));}

/* k3543 in k3539 in k3535 in k3531 in k3528 in k3522 in k3518 in k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3545(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3545,2,t0,t1);}
t2=C_mutate((C_word*)lf[91]+1 /* (set! char-set:printing ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3549,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=lf[95];
t9=C_i_check_list_2(t8,lf[85]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3568,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3570,a[2]=t5,a[3]=t12,a[4]=t7,a[5]=((C_word)li110),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_3570(t14,t10,t8);}

/* map-loop948 in k3543 in k3539 in k3535 in k3531 in k3528 in k3522 in k3518 in k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_fcall f_3570(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3570,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_make_character(C_unfix(t3));
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

/* k3566 in k3543 in k3539 in k3535 in k3531 in k3528 in k3522 in k3518 in k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:707: list->char-set */
t2=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3547 in k3543 in k3539 in k3535 in k3531 in k3528 in k3522 in k3518 in k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3549,2,t0,t1);}
t2=C_mutate((C_word*)lf[92]+1 /* (set! char-set:blank ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3553,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3561,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:713: ucs-range->char-set */
t5=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_fix(0),C_fix(32));}

/* k3559 in k3547 in k3543 in k3539 in k3535 in k3531 in k3528 in k3522 in k3518 in k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:713: ucs-range->char-set! */
t2=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_fix(127),C_fix(160),C_SCHEME_TRUE,t1);}

/* k3551 in k3547 in k3543 in k3539 in k3535 in k3531 in k3528 in k3522 in k3518 in k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3553,2,t0,t1);}
t2=C_mutate((C_word*)lf[93]+1 /* (set! char-set:iso-control ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3557,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:715: ucs-range->char-set */
t4=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(0),C_fix(128));}

/* k3555 in k3551 in k3547 in k3543 in k3539 in k3535 in k3531 in k3528 in k3522 in k3518 in k3515 in k3509 in k3505 in k3501 in k3497 in k3493 in k3490 in k3485 in k3482 in k3478 in k3475 in k3472 in k3469 in k3465 in k3461 in k1064 */
static void C_ccall f_3557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[94]+1 /* (set! char-set:ascii ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* f_3434 in k1064 */
static void C_ccall f_3434(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3434r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3434r(t0,t1,t2,t3);}}

static void C_ccall f_3434r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3438,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3459,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:616: %char-set:s/check */
f_1155(t5,t2,lf[75]);}

/* k3457 */
static void C_ccall f_3459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:616: string-copy */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(3,*((C_word*)lf[76]+1),((C_word*)t0)[2],t1);}

/* k3436 */
static void C_ccall f_3438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3438,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3441,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:617: make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),t2,C_fix(256),C_make_character(0));}

/* k3439 in k3436 */
static void C_ccall f_3441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3441,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3444,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:618: %char-set-diff+intersection! */
f_3265(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2],lf[75]);}

/* k3442 in k3439 in k3436 */
static void C_ccall f_3444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3444,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3451,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:619: make-char-set */
t3=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3449 in k3442 in k3439 in k3436 */
static void C_ccall f_3451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3451,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3455,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:619: make-char-set */
t3=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3453 in k3449 in k3442 in k3439 in k3436 */
static void C_ccall f_3455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:619: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_3363 in k1064 */
static void C_ccall f_3363(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3363r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3363r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3363r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3367,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:606: %char-set:s/check */
f_1155(t5,t2,lf[74]);}

/* k3365 */
static void C_ccall f_3367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3370,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:607: %char-set:s/check */
f_1155(t2,((C_word*)t0)[3],lf[74]);}

/* k3368 in k3365 */
static void C_ccall f_3370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3373,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3381,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li107),tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:608: %string-iter */
f_2714(t2,t3,((C_word*)t0)[3]);}

/* a3380 in k3368 in k3365 */
static void C_ccall f_3381(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3381,4,t0,t1,t2,t3);}
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=t1;
t6=((C_word*)t0)[3];
t7=t2;
t8=t5;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_string_set(t6,t7,C_make_character(0)));}
else{
t5=((C_word*)t0)[3];
t6=t2;
t7=C_i_string_ref(t5,t6);
t8=C_fix(C_character_code(t7));
t9=C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}
else{
t10=t1;
t11=((C_word*)t0)[2];
t12=t2;
t13=t10;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_i_string_set(t11,t12,C_make_character(0)));}}}

/* k3371 in k3368 in k3365 */
static void C_ccall f_3373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3376,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:612: %char-set-diff+intersection! */
f_3265(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[74]);}

/* k3374 in k3371 in k3368 in k3365 */
static void C_ccall f_3376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:613: values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %char-set-diff+intersection! in k1064 */
static void C_fcall f_3265(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3265,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3267,a[2]=t5,a[3]=t3,a[4]=t2,a[5]=((C_word)li104),tmp=(C_word)a,a+=6,tmp);
t7=C_i_check_list_2(t4,lf[22]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3340,a[2]=t6,a[3]=t9,a[4]=((C_word)li105),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3340(t11,t1,t4);}

/* for-each-loop775 in %char-set-diff+intersection! in k1064 */
static void C_fcall f_3340(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3340,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3350,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g776782 */
t5=((C_word*)t0)[2];
f_3267(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3348 in for-each-loop775 in %char-set-diff+intersection! in k1064 */
static void C_ccall f_3350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3340(t3,((C_word*)t0)[2],t2);}

/* g776 in %char-set-diff+intersection! in k1064 */
static void C_fcall f_3267(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3267,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3273,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3332,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:602: %char-set:s/check */
f_1155(t4,t2,((C_word*)t0)[2]);}

/* k3330 in g776 in %char-set-diff+intersection! in k1064 */
static void C_ccall f_3332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:597: %string-iter */
f_2714(((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a3272 in g776 in %char-set-diff+intersection! in k1064 */
static void C_ccall f_3273(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3273,4,t0,t1,t2,t3);}
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=((C_word*)t0)[3];
t6=t2;
t7=C_i_string_ref(t5,t6);
t8=C_fix(C_character_code(t7));
t9=C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}
else{
t10=((C_word*)t0)[3];
t11=t2;
t12=C_i_string_set(t10,t11,C_make_character(0));
t13=t1;
t14=((C_word*)t0)[2];
t15=t2;
t16=t13;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_i_string_set(t14,t15,C_make_character(1)));}}}

/* f_3190 in k1064 */
static void C_ccall f_3190(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_3190r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3190r(t0,t1,t2);}}

static void C_ccall f_3190r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3200,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3256,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_car(t2);
/* srfi-14.scm:587: %char-set:s/check */
f_1155(t4,t5,lf[72]);}
else{
/* srfi-14.scm:590: char-set-copy */
t3=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[65]+1));}}

/* k3254 */
static void C_ccall f_3256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(5,*((C_word*)lf[5]+1),((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k3198 */
static void C_ccall f_3200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3200,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3203,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3212,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:588: %char-set-algebra */
f_2755(t2,t1,t3,t4,lf[72]);}

/* a3211 in k3198 */
static void C_ccall f_3212(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3212,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t2;
t7=t3;
t8=C_i_string_ref(t6,t7);
t9=C_fix(C_character_code(t8));
t10=C_fixnum_difference(C_fix(1),t9);
t11=t1;
t12=t2;
t13=t3;
t14=C_make_character(C_unfix(t10));
t15=t11;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_i_string_set(t12,t13,t14));}}

/* k3201 in k3198 */
static void C_ccall f_3203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:589: make-char-set */
t2=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_3138 in k1064 */
static void C_ccall f_3138(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3138r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3138r(t0,t1,t2,t3);}}

static void C_ccall f_3138r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3142,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3146,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:581: %char-set:s/check */
f_1155(t5,t2,lf[71]);}

/* k3144 */
static void C_ccall f_3146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3146,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3148,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:581: %char-set-algebra */
f_2755(((C_word*)t0)[3],t1,((C_word*)t0)[2],t2,lf[71]);}

/* a3147 in k3144 */
static void C_ccall f_3148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3148,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t2;
t7=t3;
t8=C_i_string_ref(t6,t7);
t9=C_fix(C_character_code(t8));
t10=C_fixnum_difference(C_fix(1),t9);
t11=t1;
t12=t2;
t13=t3;
t14=C_make_character(C_unfix(t10));
t15=t11;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_i_string_set(t12,t13,t14));}}

/* k3140 */
static void C_ccall f_3142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_3092 in k1064 */
static void C_ccall f_3092(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3092r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3092r(t0,t1,t2,t3);}}

static void C_ccall f_3092r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3102,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3133,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:572: %char-set:s/check */
f_1155(t5,t2,lf[70]);}
else{
/* srfi-14.scm:575: char-set-copy */
t4=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}

/* k3131 */
static void C_ccall f_3133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(5,*((C_word*)lf[5]+1),((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k3100 */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3102,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3105,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3110,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:573: %char-set-algebra */
f_2755(t2,t1,((C_word*)t0)[2],t3,lf[70]);}

/* a3109 in k3100 */
static void C_ccall f_3110(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3110,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_string_set(t2,t3,C_make_character(0)));}}

/* k3103 in k3100 */
static void C_ccall f_3105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:574: make-char-set */
t2=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_3061 in k1064 */
static void C_ccall f_3061(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3061r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3061r(t0,t1,t2,t3);}}

static void C_ccall f_3061r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3065,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3069,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:566: %char-set:s/check */
f_1155(t5,t2,lf[69]);}

/* k3067 */
static void C_ccall f_3069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3071,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:566: %char-set-algebra */
f_2755(((C_word*)t0)[3],t1,((C_word*)t0)[2],t2,lf[69]);}

/* a3070 in k3067 */
static void C_ccall f_3071(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3071,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_string_set(t2,t3,C_make_character(0)));}}

/* k3063 */
static void C_ccall f_3065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_3011 in k1064 */
static void C_ccall f_3011(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_3011r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3011r(t0,t1,t2);}}

static void C_ccall f_3011r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3021,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3052,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_car(t2);
/* srfi-14.scm:557: %char-set:s/check */
f_1155(t4,t5,lf[67]);}
else{
/* srfi-14.scm:560: char-set-copy */
t3=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[68]+1));}}

/* k3050 */
static void C_ccall f_3052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(5,*((C_word*)lf[5]+1),((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k3019 */
static void C_ccall f_3021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3021,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3024,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3033,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:558: %char-set-algebra */
f_2755(t2,t1,t3,t4,lf[67]);}

/* a3032 in k3019 */
static void C_ccall f_3033(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3033,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_string_set(t2,t3,C_make_character(0)));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3022 in k3019 */
static void C_ccall f_3024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:559: make-char-set */
t2=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_2984 in k1064 */
static void C_ccall f_2984(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2984r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2984r(t0,t1,t2,t3);}}

static void C_ccall f_2984r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2988,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2992,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:551: %char-set:s/check */
f_1155(t5,t2,lf[66]);}

/* k2990 */
static void C_ccall f_2992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2992,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2994,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:551: %char-set-algebra */
f_2755(((C_word*)t0)[3],t1,((C_word*)t0)[2],t2,lf[66]);}

/* a2993 in k2990 */
static void C_ccall f_2994(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2994,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_string_set(t2,t3,C_make_character(0)));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2986 */
static void C_ccall f_2988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2930 in k1064 */
static void C_ccall f_2930(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2930r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2930r(t0,t1,t2);}}

static void C_ccall f_2930r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2940,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2975,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_car(t2);
/* srfi-14.scm:542: %char-set:s/check */
f_1155(t4,t5,lf[64]);}
else{
/* srfi-14.scm:545: char-set-copy */
t3=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[65]+1));}}

/* k2973 */
static void C_ccall f_2975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(5,*((C_word*)lf[5]+1),((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k2938 */
static void C_ccall f_2940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2940,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2943,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2952,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:543: %char-set-algebra */
f_2755(t2,t1,t3,t4,lf[64]);}

/* a2951 in k2938 */
static void C_ccall f_2952(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2952,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_string_set(t2,t3,C_make_character(1)));}}

/* k2941 in k2938 */
static void C_ccall f_2943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:544: make-char-set */
t2=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_2899 in k1064 */
static void C_ccall f_2899(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2899r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2899r(t0,t1,t2,t3);}}

static void C_ccall f_2899r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2903,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2907,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:536: %char-set:s/check */
f_1155(t5,t2,lf[63]);}

/* k2905 */
static void C_ccall f_2907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2907,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2909,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:536: %char-set-algebra */
f_2755(((C_word*)t0)[3],t1,((C_word*)t0)[2],t2,lf[63]);}

/* a2908 in k2905 */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2909,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_string_set(t2,t3,C_make_character(1)));}}

/* k2901 */
static void C_ccall f_2903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2866 in k1064 */
static void C_ccall f_2866(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2866,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2870,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:528: %char-set:s/check */
f_1155(t3,t2,lf[62]);}

/* k2868 */
static void C_ccall f_2870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2875,a[2]=t1,a[3]=((C_word)li85),tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:529: %string-iter */
f_2714(t2,t3,t1);}

/* a2874 in k2868 */
static void C_ccall f_2875(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2875,4,t0,t1,t2,t3);}
t4=((C_word*)t0)[2];
t5=C_fixnum_difference(C_fix(1),t3);
t6=C_make_character(C_unfix(t5));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_string_set(t4,t2,t6));}

/* k2871 in k2868 */
static void C_ccall f_2873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2827 in k1064 */
static void C_ccall f_2827(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2827,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2831,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:522: %char-set:s/check */
f_1155(t3,t2,lf[61]);}

/* k2829 */
static void C_ccall f_2831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2834,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:523: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(3,*((C_word*)lf[9]+1),t2,C_fix(256));}

/* k2832 in k2829 */
static void C_ccall f_2834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2834,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2837,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2842,a[2]=t1,a[3]=((C_word)li83),tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:524: %string-iter */
f_2714(t2,t3,((C_word*)t0)[2]);}

/* a2841 in k2832 in k2829 */
static void C_ccall f_2842(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2842,4,t0,t1,t2,t3);}
t4=((C_word*)t0)[2];
t5=C_fixnum_difference(C_fix(1),t3);
t6=C_make_character(C_unfix(t5));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_string_set(t4,t2,t6));}

/* k2835 in k2832 in k2829 */
static void C_ccall f_2837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:525: make-char-set */
t2=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %char-set-algebra in k1064 */
static void C_fcall f_2755(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2755,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2757,a[2]=t5,a[3]=t2,a[4]=t4,a[5]=((C_word)li80),tmp=(C_word)a,a+=6,tmp);
t7=C_i_check_list_2(t3,lf[22]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2804,a[2]=t6,a[3]=t9,a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_2804(t11,t1,t3);}

/* for-each-loop609 in %char-set-algebra in k1064 */
static void C_fcall f_2804(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2804,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2814,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g610616 */
t5=((C_word*)t0)[2];
f_2757(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2812 in for-each-loop609 in %char-set-algebra in k1064 */
static void C_ccall f_2814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2804(t3,((C_word*)t0)[2],t2);}

/* g610 in %char-set-algebra in k1064 */
static void C_fcall f_2757(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2757,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2761,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:511: %char-set:s/check */
f_1155(t3,t2,((C_word*)t0)[2]);}

/* k2759 in g610 in %char-set-algebra in k1064 */
static void C_ccall f_2761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2761,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2766,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t3,a[6]=((C_word)li79),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2766(t5,((C_word*)t0)[2],C_fix(255));}

/* lp in k2759 in g610 in %char-set-algebra in k1064 */
static void C_fcall f_2766(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2766,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2776,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[4];
t6=t2;
t7=C_i_string_ref(t5,t6);
t8=C_fix(C_character_code(t7));
/* srfi-14.scm:514: op */
t9=((C_word*)t0)[3];
((C_proc5)C_fast_retrieve_proc(t9))(5,t9,t4,((C_word*)t0)[2],t2,t8);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2774 in lp in k2759 in g610 in %char-set-algebra in k1064 */
static void C_ccall f_2776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm:515: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2766(t3,((C_word*)t0)[2],t2);}

/* %string-iter in k1064 */
static void C_fcall f_2714(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2714,NULL,3,t1,t2,t3);}
t4=C_i_string_length(t3);
t5=C_fixnum_difference(t4,C_fix(1));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2724,a[2]=t2,a[3]=t3,a[4]=t7,a[5]=((C_word)li77),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_2724(t9,t1,t5);}

/* lp in %string-iter in k1064 */
static void C_fcall f_2724(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2724,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2734,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_i_string_ref(((C_word*)t0)[3],t2);
t6=C_fix(C_character_code(t5));
/* srfi-14.scm:500: p */
t7=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t4,t2,t6);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2732 in lp in %string-iter in k1064 */
static void C_ccall f_2734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm:501: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2724(t3,((C_word*)t0)[2],t2);}

/* f_2684 in k1064 */
static void C_ccall f_2684(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2684,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2691,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:477: char-set? */
t4=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2689 */
static void C_ccall f_2691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
/* srfi-14.scm:478: string->char-set */
t2=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
if(C_truep(C_charp(((C_word*)t0)[3]))){
/* srfi-14.scm:479: char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
/* srfi-14.scm:480: ##sys#error */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[57],lf[58],((C_word*)t0)[3]);}}}}

/* f_2670 in k1064 */
static void C_ccall f_2670(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2670,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2674,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2678,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:468: %char-set:s/check */
f_1155(t6,t3,lf[56]);}

/* k2676 */
static void C_ccall f_2678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2678,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2682,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:469: %char-set:s/check */
f_1155(t2,((C_word*)t0)[2],lf[56]);}

/* k2680 in k2676 */
static void C_ccall f_2682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:467: %char-set-filter! */
f_2586(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2672 */
static void C_ccall f_2674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2654 in k1064 */
static void C_ccall f_2654(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2654r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2654r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2654r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2658,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:459: %default-base */
f_1108(t5,t4,*((C_word*)lf[55]+1));}

/* k2656 */
static void C_ccall f_2658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2658,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2661,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2668,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:461: %char-set:s/check */
f_1155(t3,((C_word*)t0)[2],lf[56]);}

/* k2666 in k2656 */
static void C_ccall f_2668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:460: %char-set-filter! */
f_2586(((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2659 in k2656 */
static void C_ccall f_2661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:464: make-char-set */
t2=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %char-set-filter! in k1064 */
static void C_fcall f_2586(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2586,NULL,4,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2592,a[2]=t2,a[3]=t3,a[4]=t6,a[5]=t4,a[6]=((C_word)li72),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2592(t8,t1,C_fix(255));}

/* lp in %char-set-filter! in k1064 */
static void C_fcall f_2592(C_word t0,C_word t1,C_word t2){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2592,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2612,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[3];
t6=t2;
t7=C_i_string_ref(t5,t6);
t8=C_fix(C_character_code(t7));
t9=C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=t4;
f_2612(2,t10,C_SCHEME_FALSE);}
else{
t10=t2;
t11=C_make_character(C_unfix(t10));
/* srfi-14.scm:454: pred */
t12=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t12))(3,t12,t4,t11);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2610 in lp in %char-set-filter! in k1064 */
static void C_ccall f_2612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[4];
t4=C_i_string_set(t2,t3,C_make_character(1));
t5=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm:456: lp */
t6=((C_word*)((C_word*)t0)[3])[1];
f_2592(t6,((C_word*)t0)[2],t5);}
else{
t2=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm:456: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2592(t3,((C_word*)t0)[2],t2);}}

/* f_2576 in k1064 */
static void C_ccall f_2576(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2576,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2580,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2584,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:443: %char-set:s/check */
f_1155(t7,t5,lf[53]);}

/* k2582 */
static void C_ccall f_2584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:442: %ucs-range->char-set! */
f_2484(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[52]);}

/* k2578 */
static void C_ccall f_2580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2546 in k1064 */
static void C_ccall f_2546(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2546r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2546r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2546r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2556,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:437: %default-base */
f_1108(t9,t8,*((C_word*)lf[52]+1));}

/* k2554 */
static void C_ccall f_2556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2556,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2559,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:438: %ucs-range->char-set! */
f_2484(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[52]);}

/* k2557 in k2554 */
static void C_ccall f_2559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:439: make-char-set */
t2=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %ucs-range->char-set! in k1064 */
static void C_fcall f_2484(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2484,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=C_i_check_exact_2(t2,t6);
t8=C_i_check_exact_2(t3,t6);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2494,a[2]=t3,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2532,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t11=t2;
t12=t3;
if(C_truep(C_fixnum_lessp(t11,t12))){
t13=t3;
t14=t10;
f_2532(t14,(C_truep(C_fixnum_lessp(C_fix(256),t13))?t4:C_SCHEME_FALSE));}
else{
t13=t10;
f_2532(t13,C_SCHEME_FALSE);}}

/* k2530 in %ucs-range->char-set! in k1064 */
static void C_fcall f_2532(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-14.scm:429: ##sys#error */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[51],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
f_2494(2,t2,C_SCHEME_UNDEFINED);}}

/* k2492 in %ucs-range->char-set! in k1064 */
static void C_ccall f_2494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2494,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2529,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:432: min */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(4,*((C_word*)lf[50]+1),t2,((C_word*)t0)[2],C_fix(256));}

/* k2527 in k2492 in %ucs-range->char-set! in k1064 */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2529,2,t0,t1);}
t2=C_fixnum_difference(t1,C_fix(1));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2503,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li68),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_2503(t3,t2));}

/* lp in k2527 in k2492 in %ucs-range->char-set! in k1064 */
static C_word C_fcall f_2503(C_word t0,C_word t1){
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
C_stack_check;
loop:
t2=((C_word*)t0)[3];
t3=t1;
if(C_truep(C_fixnum_less_or_equal_p(t2,t3))){
t4=((C_word*)t0)[2];
t5=t1;
t6=C_i_string_set(t4,t5,C_make_character(1));
t7=C_fixnum_difference(t1,C_fix(1));
t10=t7;
t1=t10;
goto loop;}
else{
t4=C_SCHEME_UNDEFINED;
return(t4);}}

/* f_2423 in k1064 */
static void C_ccall f_2423(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2423,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2427,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:410: %char-set:s/check */
f_1155(t3,t2,lf[48]);}

/* k2425 */
static void C_ccall f_2427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2427,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2430,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2482,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:411: char-set-size */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k2480 in k2425 */
static void C_ccall f_2482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:411: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(3,*((C_word*)lf[9]+1),((C_word*)t0)[2],t1);}

/* k2428 in k2425 */
static void C_ccall f_2430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2430,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2435,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li66),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2435(t2,C_fix(255),C_fix(0)));}

/* lp in k2428 in k2425 */
static C_word C_fcall f_2435(C_word t0,C_word t1,C_word t2){
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
C_stack_check;
loop:
t3=t1;
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=((C_word*)t0)[3];
return(t4);}
else{
t4=((C_word*)t0)[2];
t5=t1;
t6=C_i_string_ref(t4,t5);
t7=C_fix(C_character_code(t6));
t8=C_eqp(t7,C_fix(0));
if(C_truep(t8)){
t9=t2;
t10=C_fixnum_difference(t1,C_fix(1));
t18=t10;
t19=t9;
t1=t18;
t2=t19;
goto loop;}
else{
t9=t1;
t10=C_make_character(C_unfix(t9));
t11=C_i_string_set(((C_word*)t0)[3],t2,t10);
t12=C_fixnum_plus(t2,C_fix(1));
t13=C_fixnum_difference(t1,C_fix(1));
t18=t13;
t19=t12;
t1=t18;
t2=t19;
goto loop;}}}

/* f_2413 in k1064 */
static void C_ccall f_2413(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2413,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2417,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2421,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:404: %char-set:s/check */
f_1155(t5,t3,lf[47]);}

/* k2419 */
static void C_ccall f_2421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:404: %string->char-set! */
f_2352(((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[47]);}

/* k2415 */
static void C_ccall f_2417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2401 in k1064 */
static void C_ccall f_2401(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2401r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2401r(t0,t1,t2,t3);}}

static void C_ccall f_2401r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2405,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:399: %default-base */
f_1108(t4,t3,*((C_word*)lf[46]+1));}

/* k2403 */
static void C_ccall f_2405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2405,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2408,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:400: %string->char-set! */
f_2352(t2,((C_word*)t0)[2],t1,lf[46]);}

/* k2406 in k2403 */
static void C_ccall f_2408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:401: make-char-set */
t2=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string->char-set! in k1064 */
static void C_fcall f_2352(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2352,NULL,4,t1,t2,t3,t4);}
t5=C_i_check_string_2(t2,t4);
t6=C_i_string_length(t2);
t7=C_fixnum_difference(t6,C_fix(1));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2365,a[2]=t3,a[3]=t2,a[4]=((C_word)li62),tmp=(C_word)a,a+=5,tmp);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,f_2365(t8,t7));}

/* doloop475 in %string->char-set! in k1064 */
static C_word C_fcall f_2365(C_word t0,C_word t1){
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
C_stack_check;
loop:
t2=t1;
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=C_SCHEME_UNDEFINED;
return(t3);}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t1);
t4=C_fix(C_character_code(t3));
t5=((C_word*)t0)[2];
t6=C_i_string_set(t5,t4,C_make_character(1));
t7=C_fixnum_difference(t1,C_fix(1));
t10=t7;
t1=t10;
goto loop;}}

/* f_2300 in k1064 */
static void C_ccall f_2300(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2300,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2304,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:380: %char-set:s/check */
f_1155(t3,t2,lf[44]);}

/* k2302 */
static void C_ccall f_2304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2304,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2309,a[2]=t3,a[3]=t1,a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2309(t5,((C_word*)t0)[2],C_fix(255),C_SCHEME_END_OF_LIST);}

/* lp in k2302 */
static void C_fcall f_2309(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2309,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=((C_word*)t0)[3];
t7=t2;
t8=C_i_string_ref(t6,t7);
t9=C_fix(C_character_code(t8));
t10=C_eqp(t9,C_fix(0));
if(C_truep(t10)){
t11=t3;
/* srfi-14.scm:383: lp */
t17=t1;
t18=t5;
t19=t11;
t1=t17;
t2=t18;
t3=t19;
goto loop;}
else{
t11=t2;
t12=C_make_character(C_unfix(t11));
t13=C_a_i_cons(&a,2,t12,t3);
/* srfi-14.scm:383: lp */
t17=t1;
t18=t5;
t19=t13;
t1=t17;
t2=t18;
t3=t19;
goto loop;}}}

/* f_2290 in k1064 */
static void C_ccall f_2290(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2290,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2294,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2298,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:375: %char-set:s/check */
f_1155(t5,t3,lf[43]);}

/* k2296 */
static void C_ccall f_2298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:375: %list->char-set! */
f_2220(((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2292 */
static void C_ccall f_2294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2278 in k1064 */
static void C_ccall f_2278(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2278r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2278r(t0,t1,t2,t3);}}

static void C_ccall f_2278r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2282,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:370: %default-base */
f_1108(t4,t3,*((C_word*)lf[42]+1));}

/* k2280 */
static void C_ccall f_2282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2282,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2285,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:371: %list->char-set! */
f_2220(t2,((C_word*)t0)[2],t1);}

/* k2283 in k2280 */
static void C_ccall f_2285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:372: make-char-set */
t2=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_2266 in k1064 */
static void C_ccall f_2266(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2266r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2266r(t0,t1,t2);}}

static void C_ccall f_2266r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2270,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:365: make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),t3,C_fix(256),C_make_character(0));}

/* k2268 */
static void C_ccall f_2270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2270,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2273,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:366: %list->char-set! */
f_2220(t2,((C_word*)t0)[2],t1);}

/* k2271 in k2268 */
static void C_ccall f_2273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:367: make-char-set */
t2=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %list->char-set! in k1064 */
static void C_fcall f_2220(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2220,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2222,a[2]=t3,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_list_2(t2,lf[22]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2243,a[2]=t4,a[3]=((C_word)li55),tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,f_2243(t6,t2));}

/* for-each-loop428 in %list->char-set! in k1064 */
static C_word C_fcall f_2243(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
loop:
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=f_2222(((C_word*)t0)[2],t2);
t4=C_slot(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* g429 in %list->char-set! in k1064 */
static C_word C_fcall f_2222(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t2=C_fix(C_character_code(t1));
t3=((C_word*)t0)[2];
return(C_i_string_set(t3,t2,C_make_character(1)));}

/* f_2210 in k1064 */
static void C_ccall f_2210(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2210,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2214,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2218,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:352: %char-set:s/check */
f_1155(t8,t6,lf[40]);}

/* k2216 */
static void C_ccall f_2218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:351: %char-set-unfold! */
f_2156(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2212 */
static void C_ccall f_2214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2198 in k1064 */
static void C_ccall f_2198(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr6r,(void*)f_2198r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_2198r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_2198r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a=C_alloc(7);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2202,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:346: %default-base */
f_1108(t7,t6,*((C_word*)lf[39]+1));}

/* k2200 */
static void C_ccall f_2202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2202,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2205,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:347: %char-set-unfold! */
f_2156(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2203 in k2200 */
static void C_ccall f_2205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:348: make-char-set */
t2=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %char-set-unfold! in k1064 */
static void C_fcall f_2156(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2156,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2162,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t8,a[6]=t5,a[7]=((C_word)li50),tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_2162(t10,t1,t6);}

/* lp in %char-set-unfold! in k1064 */
static void C_fcall f_2162(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2162,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2196,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* srfi-14.scm:341: p */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2194 in lp in %char-set-unfold! in k1064 */
static void C_ccall f_2196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2196,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2192,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:342: f */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}}

/* k2190 in k2194 in lp in %char-set-unfold! in k1064 */
static void C_ccall f_2192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2192,2,t0,t1);}
t2=C_fix(C_character_code(t1));
t3=((C_word*)t0)[6];
t4=C_i_string_set(t3,t2,C_make_character(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2184,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:343: g */
t6=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}

/* k2182 in k2190 in k2194 in lp in %char-set-unfold! in k1064 */
static void C_ccall f_2184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:343: lp */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2162(t2,((C_word*)t0)[2],t1);}

/* f_2093 in k1064 */
static void C_ccall f_2093(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2093,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2097,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:329: %char-set:s/check */
f_1155(t4,t3,lf[37]);}

/* k2095 */
static void C_ccall f_2097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2097,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2102,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word)li48),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2102(t5,((C_word*)t0)[2],C_fix(255));}

/* lp in k2095 */
static void C_fcall f_2102(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2102,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2112,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[3];
t6=t2;
t7=C_i_string_ref(t5,t6);
t8=C_fix(C_character_code(t7));
t9=C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm:333: lp */
t14=t1;
t15=t10;
t1=t14;
t2=t15;
goto loop;}
else{
t10=t2;
t11=C_make_character(C_unfix(t10));
/* srfi-14.scm:332: pred */
t12=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t12))(3,t12,t4,t11);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2110 in lp in k2095 */
static void C_ccall f_2112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-14.scm:333: lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2102(t3,((C_word*)t0)[4],t2);}}

/* f_2039 in k1064 */
static void C_ccall f_2039(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2039,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2043,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:321: %char-set:s/check */
f_1155(t4,t3,lf[36]);}

/* k2041 */
static void C_ccall f_2043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2043,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2048,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word)li46),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2048(t5,((C_word*)t0)[2],C_fix(255));}

/* lp in k2041 */
static void C_fcall f_2048(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2048,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_fixnum_lessp(t3,C_fix(0));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=((C_word*)t0)[4];
t6=t2;
t7=C_i_string_ref(t5,t6);
t8=C_fix(C_character_code(t7));
t9=C_eqp(t8,C_fix(0));
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2077,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t9)){
if(C_truep(t9)){
t11=C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm:325: lp */
t15=t1;
t16=t11;
t1=t15;
t2=t16;
goto loop;}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t11=t2;
t12=C_make_character(C_unfix(t11));
/* srfi-14.scm:324: pred */
t13=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t13))(3,t13,t10,t12);}}}

/* k2075 in lp in k2041 */
static void C_ccall f_2077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm:325: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2048(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_1987 in k1064 */
static void C_ccall f_1987(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1987,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1991,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:312: %char-set:s/check */
f_1155(t5,t4,lf[35]);}

/* k1989 */
static void C_ccall f_1991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1991,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1996,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1996(t5,((C_word*)t0)[3],C_fix(255),((C_word*)t0)[2]);}

/* lp in k1989 */
static void C_fcall f_1996(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1996,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2014,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[3];
t8=t2;
t9=C_i_string_ref(t7,t8);
t10=C_fix(C_character_code(t9));
t11=C_eqp(t10,C_fix(0));
if(C_truep(t11)){
t12=t3;
/* srfi-14.scm:315: lp */
t17=t1;
t18=t5;
t19=t12;
t1=t17;
t2=t18;
t3=t19;
goto loop;}
else{
t12=t2;
t13=C_make_character(C_unfix(t12));
/* srfi-14.scm:317: kons */
t14=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t14))(4,t14,t6,t13,t3);}}}

/* k2012 in lp in k1989 */
static void C_ccall f_2014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:315: lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1996(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_1908 in k1064 */
static void C_ccall f_1908(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1908,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1912,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:301: %char-set:s/check */
f_1155(t4,t3,lf[34]);}

/* k1910 */
static void C_ccall f_1912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1912,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1915,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:302: make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),t2,C_fix(256),C_make_character(0));}

/* k1913 in k1910 */
static void C_ccall f_1915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1915,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1918,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1923,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word)li42),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1923(t6,t2,C_fix(255));}

/* lp in k1913 in k1910 */
static void C_fcall f_1923(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1923,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=((C_word*)t0)[5];
t5=t2;
t6=C_i_string_ref(t4,t5);
t7=C_fix(C_character_code(t6));
t8=C_eqp(t7,C_fix(0));
if(C_truep(t8)){
t9=C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm:307: lp */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1981,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t10=t2;
t11=C_make_character(C_unfix(t10));
/* srfi-14.scm:306: proc */
t12=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t12))(3,t12,t9,t11);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1979 in lp in k1913 in k1910 */
static void C_ccall f_1981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_fix(C_character_code(t1));
t3=((C_word*)t0)[5];
t4=C_i_string_set(t3,t2,C_make_character(1));
t5=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm:307: lp */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1923(t6,((C_word*)t0)[2],t5);}

/* k1916 in k1913 in k1910 */
static void C_ccall f_1918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:308: make-char-set */
t2=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_1848 in k1064 */
static void C_ccall f_1848(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1848,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1852,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:293: %char-set:s/check */
f_1155(t4,t3,lf[33]);}

/* k1850 */
static void C_ccall f_1852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1852,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1857,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1857(t5,((C_word*)t0)[2],C_fix(255));}

/* lp in k1850 */
static void C_fcall f_1857(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1857,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1867,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[3];
t6=t2;
t7=C_i_string_ref(t5,t6);
t8=C_fix(C_character_code(t7));
t9=C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm:297: lp */
t15=t1;
t16=t10;
t1=t15;
t2=t16;
goto loop;}
else{
t10=t2;
t11=C_make_character(C_unfix(t10));
/* srfi-14.scm:296: proc */
t12=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t12))(3,t12,t4,t11);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1865 in lp in k1850 */
static void C_ccall f_1867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm:297: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1857(t3,((C_word*)t0)[2],t2);}

/* %char-set-cursor-next in k1064 */
static void C_fcall f_1796(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1796,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1800,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:282: %char-set:s/check */
f_1155(t5,t2,t4);}

/* k1798 in %char-set-cursor-next in k1064 */
static void C_ccall f_1800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1805,a[2]=t1,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1805(t2,((C_word*)t0)[2]));}

/* lp in k1798 in %char-set-cursor-next in k1064 */
static C_word C_fcall f_1805(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_check;
loop:
t2=C_fixnum_difference(t1,C_fix(1));
t3=C_fixnum_lessp(t2,C_fix(0));
if(C_truep(t3)){
if(C_truep(t3)){
return(t2);}
else{
t9=t2;
t1=t9;
goto loop;}}
else{
t4=((C_word*)t0)[2];
t5=C_i_string_ref(t4,t2);
t6=C_fix(C_character_code(t5));
t7=C_eqp(t6,C_fix(0));
if(C_truep(t7)){
t9=t2;
t1=t9;
goto loop;}
else{
return(t2);}}}

/* f_1787 in k1064 */
static void C_ccall f_1787(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1787,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t3,lf[32]);
/* srfi-14.scm:279: %char-set-cursor-next */
f_1796(t1,t2,t3,lf[32]);}

/* f_1781 in k1064 */
static void C_ccall f_1781(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1781,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_make_character(C_unfix(t3)));}

/* f_1775 in k1064 */
static void C_ccall f_1775(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1775,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_lessp(t2,C_fix(0)));}

/* f_1769 in k1064 */
static void C_ccall f_1769(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1769,3,t0,t1,t2);}
/* srfi-14.scm:269: %char-set-cursor-next */
f_1796(t1,t2,C_fix(256),lf[28]);}

/* f_1757 in k1064 */
static void C_ccall f_1757(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1757r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1757r(t0,t1,t2,t3);}}

static void C_ccall f_1757r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1763,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:255: %set-char-set! */
f_1677(t1,t4,lf[27],t2,t3);}

/* a1762 */
static void C_ccall f_1763(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1763,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(0)));}

/* f_1745 in k1064 */
static void C_ccall f_1745(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1745r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1745r(t0,t1,t2,t3);}}

static void C_ccall f_1745r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1751,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:253: %set-char-set */
f_1626(t1,t4,lf[26],t2,t3);}

/* a1750 */
static void C_ccall f_1751(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1751,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(0)));}

/* f_1733 in k1064 */
static void C_ccall f_1733(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1733r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1733r(t0,t1,t2,t3);}}

static void C_ccall f_1733r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1739,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:251: %set-char-set! */
f_1677(t1,t4,lf[25],t2,t3);}

/* a1738 */
static void C_ccall f_1739(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1739,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(1)));}

/* f_1721 in k1064 */
static void C_ccall f_1721(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1721r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1721r(t0,t1,t2,t3);}}

static void C_ccall f_1721r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1727,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:249: %set-char-set */
f_1626(t1,t4,lf[24],t2,t3);}

/* a1726 */
static void C_ccall f_1727(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1727,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_string_set(t2,t3,C_make_character(1)));}

/* %set-char-set! in k1064 */
static void C_fcall f_1677(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1677,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1681,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:243: %char-set:s/check */
f_1155(t6,t4,t3);}

/* k1679 in %set-char-set! in k1064 */
static void C_ccall f_1681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1681,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1682,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_list_2(t3,lf[22]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1698,a[2]=t2,a[3]=t7,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1698(t9,t5,t3);}

/* for-each-loop228 in k1679 in %set-char-set! in k1064 */
static void C_fcall f_1698(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1698,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1708,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g229235 */
t5=((C_word*)t0)[2];
f_1682(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1706 in for-each-loop228 in k1679 in %set-char-set! in k1064 */
static void C_ccall f_1708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1698(t3,((C_word*)t0)[2],t2);}

/* k1694 in k1679 in %set-char-set! in k1064 */
static void C_ccall f_1696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* g229 in k1679 in %set-char-set! in k1064 */
static void C_fcall f_1682(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1682,NULL,3,t0,t1,t2);}
t3=C_fix(C_character_code(t2));
/* srfi-14.scm:244: set */
t4=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,((C_word*)t0)[2],t3);}

/* %set-char-set in k1064 */
static void C_fcall f_1626(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1626,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1630,a[2]=t1,a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1675,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:237: %char-set:s/check */
f_1155(t7,t4,t3);}

/* k1673 in %set-char-set in k1064 */
static void C_ccall f_1675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(5,*((C_word*)lf[5]+1),((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k1628 in %set-char-set in k1064 */
static void C_ccall f_1630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1630,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1631,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_list_2(t3,lf[22]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1645,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1650,a[2]=t2,a[3]=t7,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1650(t9,t5,t3);}

/* for-each-loop204 in k1628 in %set-char-set in k1064 */
static void C_fcall f_1650(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1650,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1660,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g205211 */
t5=((C_word*)t0)[2];
f_1631(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1658 in for-each-loop204 in k1628 in %set-char-set in k1064 */
static void C_ccall f_1660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1650(t3,((C_word*)t0)[2],t2);}

/* k1643 in k1628 in %set-char-set in k1064 */
static void C_ccall f_1645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:240: make-char-set */
t2=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* g205 in k1628 in %set-char-set in k1064 */
static void C_fcall f_1631(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1631,NULL,3,t0,t1,t2);}
t3=C_fix(C_character_code(t2));
/* srfi-14.scm:238: set */
t4=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,((C_word*)t0)[2],t3);}

/* f_1559 in k1064 */
static void C_ccall f_1559(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1559,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1563,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:225: %char-set:s/check */
f_1155(t4,t3,lf[20]);}

/* k1561 */
static void C_ccall f_1563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1563,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1568,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word)li18),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1568(t5,((C_word*)t0)[2],C_fix(255),C_fix(0));}

/* lp in k1561 */
static void C_fcall f_1568(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1568,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1589,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[3];
t8=t2;
t9=C_i_string_ref(t7,t8);
t10=C_fix(C_character_code(t9));
t11=C_eqp(t10,C_fix(0));
if(C_truep(t11)){
t12=t6;
f_1589(2,t12,C_SCHEME_FALSE);}
else{
t12=t2;
t13=C_make_character(C_unfix(t12));
/* srfi-14.scm:229: pred */
t14=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t14))(3,t14,t6,t13);}}}

/* k1587 in lp in k1561 */
static void C_ccall f_1589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* srfi-14.scm:228: lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1568(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[5];
/* srfi-14.scm:228: lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1568(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* f_1517 in k1064 */
static void C_ccall f_1517(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1517,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1521,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:218: %char-set:s/check */
f_1155(t3,t2,lf[19]);}

/* k1519 */
static void C_ccall f_1521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1521,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1526,a[2]=t1,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1526(t2,C_fix(255),C_fix(0)));}

/* lp in k1519 */
static C_word C_fcall f_1526(C_word t0,C_word t1,C_word t2){
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
C_stack_check;
loop:
t3=t1;
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=t2;
return(t4);}
else{
t4=C_fixnum_difference(t1,C_fix(1));
t5=((C_word*)t0)[2];
t6=t1;
t7=C_i_string_ref(t5,t6);
t8=C_fix(C_character_code(t7));
t9=C_fixnum_plus(t2,t8);
t12=t4;
t13=t9;
t1=t12;
t2=t13;
goto loop;}}

/* f_1478 in k1064 */
static void C_ccall f_1478(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1478,4,t0,t1,t2,t3);}
t4=C_i_check_char_2(t3,lf[18]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1511,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:213: %char-set:s/check */
f_1155(t5,t2,lf[18]);}

/* k1509 */
static void C_ccall f_1511(C_word c,C_word t0,C_word t1){
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
t3=C_fix(C_character_code(t2));
t4=((C_word*)t0)[2];
t5=C_i_string_ref(t1,t3);
t6=C_fix(C_character_code(t5));
t7=C_eqp(t6,C_fix(0));
t8=t4;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_not(t7));}

/* f_1365 in k1064 */
static void C_ccall f_1365(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1365r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1365r(t0,t1,t2,t3);}}

static void C_ccall f_1365r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1369,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_1369(2,t5,C_fix(4194304));}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_1369(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[17],t3);}}}

/* k1367 */
static void C_ccall f_1369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1369,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(((C_word*)t3)[1],C_fix(0));
if(C_truep(t5)){
t6=C_set_block_item(t3,0,C_fix(4194304));
t7=t4;
f_1372(t7,t6);}
else{
t6=t4;
f_1372(t6,C_SCHEME_UNDEFINED);}}

/* k1370 in k1367 */
static void C_fcall f_1372(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1372,NULL,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)((C_word*)t0)[4])[1],lf[15]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1378,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:200: %char-set:s/check */
f_1155(t3,((C_word*)t0)[2],lf[15]);}

/* k1376 in k1370 in k1367 */
static void C_ccall f_1378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1378,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1436,a[2]=((C_word*)t0)[3],a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp);
t3=f_1436(t2,C_fix(65536));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1386,a[2]=t3,a[3]=t5,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word)li13),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1386(t7,((C_word*)t0)[2],C_fix(255),C_fix(0));}

/* lp in k1376 in k1370 in k1367 */
static void C_fcall f_1386(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1386,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* srfi-14.scm:205: modulo */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(4,*((C_word*)lf[16]+1),t1,t3,((C_word*)((C_word*)t0)[5])[1]);}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=((C_word*)t0)[4];
t7=t2;
t8=C_i_string_ref(t6,t7);
t9=C_fix(C_character_code(t8));
t10=C_eqp(t9,C_fix(0));
if(C_truep(t10)){
t11=t3;
/* srfi-14.scm:206: lp */
t16=t1;
t17=t5;
t18=t11;
t1=t16;
t2=t17;
t3=t18;
goto loop;}
else{
t11=C_fixnum_times(C_fix(37),t3);
t12=C_fixnum_plus(t11,t2);
t13=C_fixnum_and(((C_word*)t0)[2],t12);
/* srfi-14.scm:206: lp */
t16=t1;
t17=t5;
t18=t13;
t1=t16;
t2=t17;
t3=t18;
goto loop;}}}

/* lp in k1376 in k1370 in k1367 */
static C_word C_fcall f_1436(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_check;
loop:
t2=t1;
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(C_fixnum_greater_or_equal_p(t2,t3))){
return(C_fixnum_difference(t1,C_fix(1)));}
else{
t4=C_fixnum_plus(t1,t1);
t6=t4;
t1=t6;
goto loop;}}

/* f_1257 in k1064 */
static void C_ccall f_1257(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1257r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1257r(t0,t1,t2);}}

static void C_ccall f_1257r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_car(t2);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1277,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:173: %char-set:s/check */
f_1155(t6,t4,lf[14]);}}

/* k1275 */
static void C_ccall f_1277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1277,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1279,a[2]=t3,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1279(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* lp in k1275 */
static void C_fcall f_1279(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1279,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t3);
t5=C_i_not(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1289,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=C_i_car(t3);
/* srfi-14.scm:175: %char-set:s/check */
f_1155(t6,t7,lf[14]);}}

/* k1287 in lp in k1275 */
static void C_ccall f_1289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1289,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[5]);
t3=C_eqp(((C_word*)t0)[4],t1);
if(C_truep(t3)){
/* srfi-14.scm:177: lp */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1279(t4,((C_word*)t0)[2],t1,t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1306,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word)li9),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_1306(t7,((C_word*)t0)[2],C_fix(255));}}

/* lp2 in k1287 in lp in k1275 */
static void C_fcall f_1306(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1306,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* srfi-14.scm:179: lp */
t4=((C_word*)((C_word*)t0)[6])[1];
f_1279(t4,t1,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t4=((C_word*)t0)[3];
t5=t2;
t6=C_i_string_ref(t4,t5);
t7=C_fix(C_character_code(t6));
t8=((C_word*)t0)[5];
t9=t2;
t10=C_i_string_ref(t8,t9);
t11=C_fix(C_character_code(t10));
if(C_truep(C_fixnum_less_or_equal_p(t7,t11))){
t12=C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm:181: lp2 */
t14=t1;
t15=t12;
t1=t14;
t2=t15;
goto loop;}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}}

/* f_1202 in k1064 */
static void C_ccall f_1202(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1202r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1202r(t0,t1,t2);}}

static void C_ccall f_1202r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_car(t2);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1218,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:162: %char-set:s/check */
f_1155(t6,t4,lf[13]);}}

/* k1216 */
static void C_ccall f_1218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1218,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1223,a[2]=t3,a[3]=t1,a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1223(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lp in k1216 */
static void C_fcall f_1223(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1223,NULL,3,t0,t1,t2);}
t3=C_i_pairp(t2);
t4=C_i_not(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1247,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t2);
/* srfi-14.scm:165: %char-set:s/check */
f_1155(t5,t6,lf[13]);}}

/* k1245 in lp in k1216 */
static void C_ccall f_1247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_string_equal_p(((C_word*)t0)[5],t1))){
t2=C_i_cdr(((C_word*)t0)[4]);
/* srfi-14.scm:166: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1223(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_1188 in k1064 */
static void C_ccall f_1188(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1188,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1196,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1200,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:155: %char-set:s/check */
f_1155(t4,t2,lf[12]);}

/* k1198 */
static void C_ccall f_1200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(5,*((C_word*)lf[5]+1),((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k1194 */
static void C_ccall f_1196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:155: make-char-set */
t2=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* %char-set:s/check in k1064 */
static void C_fcall f_1155(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1155,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1161,a[2]=t3,a[3]=t5,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1161(t7,t1,t2);}

/* lp in %char-set:s/check in k1064 */
static void C_fcall f_1161(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1161,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:126: char-set? */
t4=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1166 in lp in %char-set:s/check in k1064 */
static void C_ccall f_1168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1168,2,t0,t1);}
if(C_truep(t1)){
/* srfi-14.scm:126: char-set:s */
t2=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1178,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:127: ##sys#error */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],lf[11],((C_word*)t0)[4]);}}

/* k1176 in k1166 in lp in %char-set:s/check in k1064 */
static void C_ccall f_1178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm:127: lp */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1161(t2,((C_word*)t0)[2],t1);}

/* %default-base in k1064 */
static void C_fcall f_1108(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1108,NULL,3,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=C_i_cdr(t2);
if(C_truep(C_i_nullp(t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1133,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:114: char-set? */
t7=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
/* srfi-14.scm:116: ##sys#error */
t6=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,lf[8],t3,t2);}}
else{
/* srfi-14.scm:118: make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(4,*((C_word*)lf[9]+1),t1,C_fix(256),C_make_character(0));}}

/* k1131 in %default-base in k1064 */
static void C_ccall f_1133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1133,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1140,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:114: char-set:s */
t3=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
/* srfi-14.scm:115: ##sys#error */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[7],((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k1138 in k1131 in %default-base in k1064 */
static void C_ccall f_1140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(5,*((C_word*)lf[5]+1),t2,t1,C_fix(0),t3);}

/* f_1092 in k1064 */
static void C_ccall f_1092(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1092,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[1]));}

/* f_1086 in k1064 */
static void C_ccall f_1086(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1086,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_1080 in k1064 */
static void C_ccall f_1080(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1080,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record2(&a,2,lf[1],t2));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[260] = {
{"toplevel:srfi_2d14_2escm",(void*)C_srfi_2d14_toplevel},
{"f_1066:srfi_2d14_2escm",(void*)f_1066},
{"f_3463:srfi_2d14_2escm",(void*)f_3463},
{"f_3467:srfi_2d14_2escm",(void*)f_3467},
{"f_3471:srfi_2d14_2escm",(void*)f_3471},
{"f_3474:srfi_2d14_2escm",(void*)f_3474},
{"f_3477:srfi_2d14_2escm",(void*)f_3477},
{"f_3480:srfi_2d14_2escm",(void*)f_3480},
{"f_3484:srfi_2d14_2escm",(void*)f_3484},
{"f_3727:srfi_2d14_2escm",(void*)f_3727},
{"f_3487:srfi_2d14_2escm",(void*)f_3487},
{"f_3492:srfi_2d14_2escm",(void*)f_3492},
{"f_3495:srfi_2d14_2escm",(void*)f_3495},
{"f_3499:srfi_2d14_2escm",(void*)f_3499},
{"f_3503:srfi_2d14_2escm",(void*)f_3503},
{"f_3507:srfi_2d14_2escm",(void*)f_3507},
{"f_3511:srfi_2d14_2escm",(void*)f_3511},
{"f_3682:srfi_2d14_2escm",(void*)f_3682},
{"f_3517:srfi_2d14_2escm",(void*)f_3517},
{"f_3520:srfi_2d14_2escm",(void*)f_3520},
{"f_3524:srfi_2d14_2escm",(void*)f_3524},
{"f_3647:srfi_2d14_2escm",(void*)f_3647},
{"f_3530:srfi_2d14_2escm",(void*)f_3530},
{"f_3533:srfi_2d14_2escm",(void*)f_3533},
{"f_3537:srfi_2d14_2escm",(void*)f_3537},
{"f_3612:srfi_2d14_2escm",(void*)f_3612},
{"f_3610:srfi_2d14_2escm",(void*)f_3610},
{"f_3541:srfi_2d14_2escm",(void*)f_3541},
{"f_3545:srfi_2d14_2escm",(void*)f_3545},
{"f_3570:srfi_2d14_2escm",(void*)f_3570},
{"f_3568:srfi_2d14_2escm",(void*)f_3568},
{"f_3549:srfi_2d14_2escm",(void*)f_3549},
{"f_3561:srfi_2d14_2escm",(void*)f_3561},
{"f_3553:srfi_2d14_2escm",(void*)f_3553},
{"f_3557:srfi_2d14_2escm",(void*)f_3557},
{"f_3434:srfi_2d14_2escm",(void*)f_3434},
{"f_3459:srfi_2d14_2escm",(void*)f_3459},
{"f_3438:srfi_2d14_2escm",(void*)f_3438},
{"f_3441:srfi_2d14_2escm",(void*)f_3441},
{"f_3444:srfi_2d14_2escm",(void*)f_3444},
{"f_3451:srfi_2d14_2escm",(void*)f_3451},
{"f_3455:srfi_2d14_2escm",(void*)f_3455},
{"f_3363:srfi_2d14_2escm",(void*)f_3363},
{"f_3367:srfi_2d14_2escm",(void*)f_3367},
{"f_3370:srfi_2d14_2escm",(void*)f_3370},
{"f_3381:srfi_2d14_2escm",(void*)f_3381},
{"f_3373:srfi_2d14_2escm",(void*)f_3373},
{"f_3376:srfi_2d14_2escm",(void*)f_3376},
{"f_3265:srfi_2d14_2escm",(void*)f_3265},
{"f_3340:srfi_2d14_2escm",(void*)f_3340},
{"f_3350:srfi_2d14_2escm",(void*)f_3350},
{"f_3267:srfi_2d14_2escm",(void*)f_3267},
{"f_3332:srfi_2d14_2escm",(void*)f_3332},
{"f_3273:srfi_2d14_2escm",(void*)f_3273},
{"f_3190:srfi_2d14_2escm",(void*)f_3190},
{"f_3256:srfi_2d14_2escm",(void*)f_3256},
{"f_3200:srfi_2d14_2escm",(void*)f_3200},
{"f_3212:srfi_2d14_2escm",(void*)f_3212},
{"f_3203:srfi_2d14_2escm",(void*)f_3203},
{"f_3138:srfi_2d14_2escm",(void*)f_3138},
{"f_3146:srfi_2d14_2escm",(void*)f_3146},
{"f_3148:srfi_2d14_2escm",(void*)f_3148},
{"f_3142:srfi_2d14_2escm",(void*)f_3142},
{"f_3092:srfi_2d14_2escm",(void*)f_3092},
{"f_3133:srfi_2d14_2escm",(void*)f_3133},
{"f_3102:srfi_2d14_2escm",(void*)f_3102},
{"f_3110:srfi_2d14_2escm",(void*)f_3110},
{"f_3105:srfi_2d14_2escm",(void*)f_3105},
{"f_3061:srfi_2d14_2escm",(void*)f_3061},
{"f_3069:srfi_2d14_2escm",(void*)f_3069},
{"f_3071:srfi_2d14_2escm",(void*)f_3071},
{"f_3065:srfi_2d14_2escm",(void*)f_3065},
{"f_3011:srfi_2d14_2escm",(void*)f_3011},
{"f_3052:srfi_2d14_2escm",(void*)f_3052},
{"f_3021:srfi_2d14_2escm",(void*)f_3021},
{"f_3033:srfi_2d14_2escm",(void*)f_3033},
{"f_3024:srfi_2d14_2escm",(void*)f_3024},
{"f_2984:srfi_2d14_2escm",(void*)f_2984},
{"f_2992:srfi_2d14_2escm",(void*)f_2992},
{"f_2994:srfi_2d14_2escm",(void*)f_2994},
{"f_2988:srfi_2d14_2escm",(void*)f_2988},
{"f_2930:srfi_2d14_2escm",(void*)f_2930},
{"f_2975:srfi_2d14_2escm",(void*)f_2975},
{"f_2940:srfi_2d14_2escm",(void*)f_2940},
{"f_2952:srfi_2d14_2escm",(void*)f_2952},
{"f_2943:srfi_2d14_2escm",(void*)f_2943},
{"f_2899:srfi_2d14_2escm",(void*)f_2899},
{"f_2907:srfi_2d14_2escm",(void*)f_2907},
{"f_2909:srfi_2d14_2escm",(void*)f_2909},
{"f_2903:srfi_2d14_2escm",(void*)f_2903},
{"f_2866:srfi_2d14_2escm",(void*)f_2866},
{"f_2870:srfi_2d14_2escm",(void*)f_2870},
{"f_2875:srfi_2d14_2escm",(void*)f_2875},
{"f_2873:srfi_2d14_2escm",(void*)f_2873},
{"f_2827:srfi_2d14_2escm",(void*)f_2827},
{"f_2831:srfi_2d14_2escm",(void*)f_2831},
{"f_2834:srfi_2d14_2escm",(void*)f_2834},
{"f_2842:srfi_2d14_2escm",(void*)f_2842},
{"f_2837:srfi_2d14_2escm",(void*)f_2837},
{"f_2755:srfi_2d14_2escm",(void*)f_2755},
{"f_2804:srfi_2d14_2escm",(void*)f_2804},
{"f_2814:srfi_2d14_2escm",(void*)f_2814},
{"f_2757:srfi_2d14_2escm",(void*)f_2757},
{"f_2761:srfi_2d14_2escm",(void*)f_2761},
{"f_2766:srfi_2d14_2escm",(void*)f_2766},
{"f_2776:srfi_2d14_2escm",(void*)f_2776},
{"f_2714:srfi_2d14_2escm",(void*)f_2714},
{"f_2724:srfi_2d14_2escm",(void*)f_2724},
{"f_2734:srfi_2d14_2escm",(void*)f_2734},
{"f_2684:srfi_2d14_2escm",(void*)f_2684},
{"f_2691:srfi_2d14_2escm",(void*)f_2691},
{"f_2670:srfi_2d14_2escm",(void*)f_2670},
{"f_2678:srfi_2d14_2escm",(void*)f_2678},
{"f_2682:srfi_2d14_2escm",(void*)f_2682},
{"f_2674:srfi_2d14_2escm",(void*)f_2674},
{"f_2654:srfi_2d14_2escm",(void*)f_2654},
{"f_2658:srfi_2d14_2escm",(void*)f_2658},
{"f_2668:srfi_2d14_2escm",(void*)f_2668},
{"f_2661:srfi_2d14_2escm",(void*)f_2661},
{"f_2586:srfi_2d14_2escm",(void*)f_2586},
{"f_2592:srfi_2d14_2escm",(void*)f_2592},
{"f_2612:srfi_2d14_2escm",(void*)f_2612},
{"f_2576:srfi_2d14_2escm",(void*)f_2576},
{"f_2584:srfi_2d14_2escm",(void*)f_2584},
{"f_2580:srfi_2d14_2escm",(void*)f_2580},
{"f_2546:srfi_2d14_2escm",(void*)f_2546},
{"f_2556:srfi_2d14_2escm",(void*)f_2556},
{"f_2559:srfi_2d14_2escm",(void*)f_2559},
{"f_2484:srfi_2d14_2escm",(void*)f_2484},
{"f_2532:srfi_2d14_2escm",(void*)f_2532},
{"f_2494:srfi_2d14_2escm",(void*)f_2494},
{"f_2529:srfi_2d14_2escm",(void*)f_2529},
{"f_2503:srfi_2d14_2escm",(void*)f_2503},
{"f_2423:srfi_2d14_2escm",(void*)f_2423},
{"f_2427:srfi_2d14_2escm",(void*)f_2427},
{"f_2482:srfi_2d14_2escm",(void*)f_2482},
{"f_2430:srfi_2d14_2escm",(void*)f_2430},
{"f_2435:srfi_2d14_2escm",(void*)f_2435},
{"f_2413:srfi_2d14_2escm",(void*)f_2413},
{"f_2421:srfi_2d14_2escm",(void*)f_2421},
{"f_2417:srfi_2d14_2escm",(void*)f_2417},
{"f_2401:srfi_2d14_2escm",(void*)f_2401},
{"f_2405:srfi_2d14_2escm",(void*)f_2405},
{"f_2408:srfi_2d14_2escm",(void*)f_2408},
{"f_2352:srfi_2d14_2escm",(void*)f_2352},
{"f_2365:srfi_2d14_2escm",(void*)f_2365},
{"f_2300:srfi_2d14_2escm",(void*)f_2300},
{"f_2304:srfi_2d14_2escm",(void*)f_2304},
{"f_2309:srfi_2d14_2escm",(void*)f_2309},
{"f_2290:srfi_2d14_2escm",(void*)f_2290},
{"f_2298:srfi_2d14_2escm",(void*)f_2298},
{"f_2294:srfi_2d14_2escm",(void*)f_2294},
{"f_2278:srfi_2d14_2escm",(void*)f_2278},
{"f_2282:srfi_2d14_2escm",(void*)f_2282},
{"f_2285:srfi_2d14_2escm",(void*)f_2285},
{"f_2266:srfi_2d14_2escm",(void*)f_2266},
{"f_2270:srfi_2d14_2escm",(void*)f_2270},
{"f_2273:srfi_2d14_2escm",(void*)f_2273},
{"f_2220:srfi_2d14_2escm",(void*)f_2220},
{"f_2243:srfi_2d14_2escm",(void*)f_2243},
{"f_2222:srfi_2d14_2escm",(void*)f_2222},
{"f_2210:srfi_2d14_2escm",(void*)f_2210},
{"f_2218:srfi_2d14_2escm",(void*)f_2218},
{"f_2214:srfi_2d14_2escm",(void*)f_2214},
{"f_2198:srfi_2d14_2escm",(void*)f_2198},
{"f_2202:srfi_2d14_2escm",(void*)f_2202},
{"f_2205:srfi_2d14_2escm",(void*)f_2205},
{"f_2156:srfi_2d14_2escm",(void*)f_2156},
{"f_2162:srfi_2d14_2escm",(void*)f_2162},
{"f_2196:srfi_2d14_2escm",(void*)f_2196},
{"f_2192:srfi_2d14_2escm",(void*)f_2192},
{"f_2184:srfi_2d14_2escm",(void*)f_2184},
{"f_2093:srfi_2d14_2escm",(void*)f_2093},
{"f_2097:srfi_2d14_2escm",(void*)f_2097},
{"f_2102:srfi_2d14_2escm",(void*)f_2102},
{"f_2112:srfi_2d14_2escm",(void*)f_2112},
{"f_2039:srfi_2d14_2escm",(void*)f_2039},
{"f_2043:srfi_2d14_2escm",(void*)f_2043},
{"f_2048:srfi_2d14_2escm",(void*)f_2048},
{"f_2077:srfi_2d14_2escm",(void*)f_2077},
{"f_1987:srfi_2d14_2escm",(void*)f_1987},
{"f_1991:srfi_2d14_2escm",(void*)f_1991},
{"f_1996:srfi_2d14_2escm",(void*)f_1996},
{"f_2014:srfi_2d14_2escm",(void*)f_2014},
{"f_1908:srfi_2d14_2escm",(void*)f_1908},
{"f_1912:srfi_2d14_2escm",(void*)f_1912},
{"f_1915:srfi_2d14_2escm",(void*)f_1915},
{"f_1923:srfi_2d14_2escm",(void*)f_1923},
{"f_1981:srfi_2d14_2escm",(void*)f_1981},
{"f_1918:srfi_2d14_2escm",(void*)f_1918},
{"f_1848:srfi_2d14_2escm",(void*)f_1848},
{"f_1852:srfi_2d14_2escm",(void*)f_1852},
{"f_1857:srfi_2d14_2escm",(void*)f_1857},
{"f_1867:srfi_2d14_2escm",(void*)f_1867},
{"f_1796:srfi_2d14_2escm",(void*)f_1796},
{"f_1800:srfi_2d14_2escm",(void*)f_1800},
{"f_1805:srfi_2d14_2escm",(void*)f_1805},
{"f_1787:srfi_2d14_2escm",(void*)f_1787},
{"f_1781:srfi_2d14_2escm",(void*)f_1781},
{"f_1775:srfi_2d14_2escm",(void*)f_1775},
{"f_1769:srfi_2d14_2escm",(void*)f_1769},
{"f_1757:srfi_2d14_2escm",(void*)f_1757},
{"f_1763:srfi_2d14_2escm",(void*)f_1763},
{"f_1745:srfi_2d14_2escm",(void*)f_1745},
{"f_1751:srfi_2d14_2escm",(void*)f_1751},
{"f_1733:srfi_2d14_2escm",(void*)f_1733},
{"f_1739:srfi_2d14_2escm",(void*)f_1739},
{"f_1721:srfi_2d14_2escm",(void*)f_1721},
{"f_1727:srfi_2d14_2escm",(void*)f_1727},
{"f_1677:srfi_2d14_2escm",(void*)f_1677},
{"f_1681:srfi_2d14_2escm",(void*)f_1681},
{"f_1698:srfi_2d14_2escm",(void*)f_1698},
{"f_1708:srfi_2d14_2escm",(void*)f_1708},
{"f_1696:srfi_2d14_2escm",(void*)f_1696},
{"f_1682:srfi_2d14_2escm",(void*)f_1682},
{"f_1626:srfi_2d14_2escm",(void*)f_1626},
{"f_1675:srfi_2d14_2escm",(void*)f_1675},
{"f_1630:srfi_2d14_2escm",(void*)f_1630},
{"f_1650:srfi_2d14_2escm",(void*)f_1650},
{"f_1660:srfi_2d14_2escm",(void*)f_1660},
{"f_1645:srfi_2d14_2escm",(void*)f_1645},
{"f_1631:srfi_2d14_2escm",(void*)f_1631},
{"f_1559:srfi_2d14_2escm",(void*)f_1559},
{"f_1563:srfi_2d14_2escm",(void*)f_1563},
{"f_1568:srfi_2d14_2escm",(void*)f_1568},
{"f_1589:srfi_2d14_2escm",(void*)f_1589},
{"f_1517:srfi_2d14_2escm",(void*)f_1517},
{"f_1521:srfi_2d14_2escm",(void*)f_1521},
{"f_1526:srfi_2d14_2escm",(void*)f_1526},
{"f_1478:srfi_2d14_2escm",(void*)f_1478},
{"f_1511:srfi_2d14_2escm",(void*)f_1511},
{"f_1365:srfi_2d14_2escm",(void*)f_1365},
{"f_1369:srfi_2d14_2escm",(void*)f_1369},
{"f_1372:srfi_2d14_2escm",(void*)f_1372},
{"f_1378:srfi_2d14_2escm",(void*)f_1378},
{"f_1386:srfi_2d14_2escm",(void*)f_1386},
{"f_1436:srfi_2d14_2escm",(void*)f_1436},
{"f_1257:srfi_2d14_2escm",(void*)f_1257},
{"f_1277:srfi_2d14_2escm",(void*)f_1277},
{"f_1279:srfi_2d14_2escm",(void*)f_1279},
{"f_1289:srfi_2d14_2escm",(void*)f_1289},
{"f_1306:srfi_2d14_2escm",(void*)f_1306},
{"f_1202:srfi_2d14_2escm",(void*)f_1202},
{"f_1218:srfi_2d14_2escm",(void*)f_1218},
{"f_1223:srfi_2d14_2escm",(void*)f_1223},
{"f_1247:srfi_2d14_2escm",(void*)f_1247},
{"f_1188:srfi_2d14_2escm",(void*)f_1188},
{"f_1200:srfi_2d14_2escm",(void*)f_1200},
{"f_1196:srfi_2d14_2escm",(void*)f_1196},
{"f_1155:srfi_2d14_2escm",(void*)f_1155},
{"f_1161:srfi_2d14_2escm",(void*)f_1161},
{"f_1168:srfi_2d14_2escm",(void*)f_1168},
{"f_1178:srfi_2d14_2escm",(void*)f_1178},
{"f_1108:srfi_2d14_2escm",(void*)f_1108},
{"f_1133:srfi_2d14_2escm",(void*)f_1133},
{"f_1140:srfi_2d14_2escm",(void*)f_1140},
{"f_1092:srfi_2d14_2escm",(void*)f_1092},
{"f_1086:srfi_2d14_2escm",(void*)f_1086},
{"f_1080:srfi_2d14_2escm",(void*)f_1080},
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
