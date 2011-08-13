/* Generated from data-structures.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: data-structures.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file data-structures.c
   unit: data_2dstructures
*/

#include "chicken.h"

#define C_mem_compare(to, from, n)   C_fix(C_memcmp(C_c_string(to), C_c_string(from), C_unfix(n)))

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[110];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,12),40,102,95,49,48,55,54,32,120,54,50,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,100,115,54,55,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,12),40,102,95,49,48,56,49,32,120,54,53,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,18),40,102,95,49,48,55,57,32,46,32,112,114,101,100,115,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,100,115,55,57,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,12),40,102,95,49,49,49,52,32,120,55,55,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,18),40,102,95,49,49,49,50,32,46,32,112,114,101,100,115,55,54,41,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,14),40,102,95,49,49,54,48,32,46,32,95,57,48,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,14),40,102,95,49,49,54,50,32,46,32,95,57,49,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,15),40,102,95,49,49,52,57,32,46,32,120,115,56,56,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,16),40,102,95,49,49,55,52,32,120,57,52,32,121,57,53,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,15),40,102,95,49,49,55,50,32,112,114,111,99,57,51,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,17),40,102,95,49,49,56,50,32,46,32,97,114,103,115,57,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,12),40,102,95,49,49,56,48,32,112,57,55,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,7),40,97,49,50,48,56,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,18),40,102,95,49,50,48,51,32,46,32,97,114,103,115,49,48,52,41,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,20),40,114,101,99,32,102,48,49,48,50,32,46,32,102,110,115,49,48,51,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,17),40,102,95,49,49,57,50,32,46,32,102,110,115,49,48,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,13),40,102,95,49,50,53,52,32,120,49,49,50,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,110,115,49,48,57,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,17),40,102,95,49,50,50,56,32,46,32,102,110,115,49,48,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,49,50,48,41,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,15),40,102,95,49,50,54,57,32,108,115,116,49,49,56,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,16),40,102,95,49,50,54,55,32,112,114,101,100,49,49,55,41};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,15),40,102,95,49,51,49,53,32,46,32,95,49,51,48,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,112,114,111,99,115,49,51,51,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,18),40,102,95,49,51,50,57,32,46,32,97,114,103,115,49,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,19),40,102,95,49,51,48,55,32,46,32,112,114,111,99,115,49,50,54,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,13),40,102,95,49,51,54,51,32,120,49,51,57,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,13),40,102,95,49,51,54,54,32,120,49,52,49,41,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,15),40,102,95,49,51,54,57,32,46,32,95,49,52,51,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,15),40,102,95,49,51,55,50,32,46,32,95,49,52,53,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,13),40,102,95,49,51,55,53,32,120,49,52,55,41,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,18),40,102,95,49,51,55,56,32,120,49,52,57,32,121,49,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,110,115,49,54,53,41,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,20),40,102,95,49,52,48,54,32,108,115,116,49,54,50,32,120,49,54,51,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,49,55,49,41,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,15),40,102,95,49,52,51,57,32,108,115,116,49,54,57,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,105,115,116,115,49,55,57,32,114,101,115,116,49,56,48,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,20),40,102,95,49,52,55,49,32,46,32,108,105,115,116,115,48,49,55,55,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,28),40,100,111,108,111,111,112,49,57,55,32,104,100,49,57,57,32,116,108,50,48,48,32,99,50,48,49,41,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,115,116,49,57,50,32,105,49,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,20),40,102,95,49,53,49,50,32,108,115,116,49,56,56,32,110,49,56,57,41,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,108,115,116,115,50,49,49,41,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,25),40,102,95,49,53,57,55,32,108,115,116,115,50,48,55,32,46,32,108,115,116,50,48,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,98,108,115,116,50,50,52,32,108,115,116,50,50,53,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,23),40,102,95,49,54,53,54,32,98,108,115,116,50,50,48,32,108,115,116,50,50,49,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,51,55,32,103,50,52,57,50,56,52,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,11),40,103,50,54,50,32,120,50,55,51,41,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,17),40,97,49,56,48,49,32,120,50,56,49,32,121,50,56,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,53,54,32,103,50,54,56,50,55,53,41,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,23),40,102,95,49,55,51,54,32,108,50,51,50,32,114,97,110,100,111,109,50,51,51,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,49,52,41,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,20),40,102,95,49,56,57,48,32,120,51,49,49,32,108,115,116,51,49,50,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,37),40,102,95,49,56,53,49,32,120,50,57,54,32,121,50,57,55,32,108,115,116,50,57,56,32,46,32,116,109,112,50,57,53,50,57,57,41,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,52,55,41,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,20),40,102,95,49,57,57,55,32,120,51,52,52,32,108,115,116,51,52,53,41,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,32),40,102,95,49,57,53,48,32,120,51,50,55,32,108,115,116,51,50,56,32,46,32,116,109,112,51,50,54,51,50,57,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,51,53,57,41,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,29),40,102,95,50,48,54,53,32,120,51,53,52,32,108,115,116,51,53,53,32,46,32,116,115,116,51,53,54,41,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,106,51,55,52,32,107,51,55,53,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,29),40,114,101,118,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,51,54,56,32,105,51,54,57,41,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,13),40,102,95,50,49,49,53,32,108,51,54,54,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,13),40,102,95,50,49,57,50,32,120,51,56,48,41,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,57,48,32,103,52,48,50,52,48,56,41,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,18),40,102,95,50,50,51,55,32,46,32,97,114,103,115,51,56,55,41,0,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,105,115,116,97,114,116,52,50,51,32,105,101,110,100,52,50,52,41};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,52),40,116,114,97,118,101,114,115,101,32,119,104,105,99,104,52,49,53,32,119,104,101,114,101,52,49,54,32,115,116,97,114,116,52,49,55,32,116,101,115,116,52,49,56,32,108,111,99,52,49,57,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,17),40,97,50,51,51,55,32,105,52,51,53,32,108,52,51,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,35),40,102,95,50,51,51,50,32,119,104,105,99,104,52,51,50,32,119,104,101,114,101,52,51,51,32,115,116,97,114,116,52,51,52,41,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,17),40,97,50,51,52,54,32,105,52,52,48,32,108,52,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,35),40,102,95,50,51,52,49,32,119,104,105,99,104,52,51,55,32,119,104,101,114,101,52,51,56,32,115,116,97,114,116,52,51,57,41,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,38),40,102,95,50,51,53,48,32,119,104,105,99,104,52,53,48,32,119,104,101,114,101,52,53,49,32,46,32,116,109,112,52,52,57,52,53,50,41,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,38),40,102,95,50,51,55,56,32,119,104,105,99,104,52,54,53,32,119,104,101,114,101,52,54,54,32,46,32,116,109,112,52,54,52,52,54,55,41,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,20),40,102,95,50,52,48,54,32,115,49,52,55,53,32,115,50,52,55,54,41,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,20),40,102,95,50,52,51,55,32,115,49,52,56,52,32,115,50,52,56,53,41,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,45),40,102,95,50,52,54,56,32,115,49,52,57,51,32,115,50,52,57,52,32,115,116,97,114,116,49,52,57,53,32,115,116,97,114,116,50,52,57,54,32,110,52,57,55,41,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,32),40,102,95,50,53,48,53,32,115,49,53,49,50,32,115,50,53,49,51,32,46,32,116,109,112,53,49,49,53,49,52,41};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,45),40,102,95,50,53,55,52,32,115,49,53,50,56,32,115,50,53,50,57,32,115,116,97,114,116,49,53,51,48,32,115,116,97,114,116,50,53,51,49,32,110,53,51,50,41,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,32),40,102,95,50,54,49,49,32,115,49,53,52,55,32,115,50,53,52,56,32,46,32,116,109,112,53,52,54,53,52,57,41};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,27),40,97,100,100,32,102,114,111,109,53,55,49,32,116,111,53,55,50,32,108,97,115,116,53,55,51,41,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,11),40,115,99,97,110,32,106,53,57,50,41,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,105,53,55,55,32,108,97,115,116,53,55,56,32,102,114,111,109,53,55,57,41,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,36),40,102,95,50,54,56,48,32,115,116,114,53,54,51,32,46,32,100,101,108,115,116,114,45,97,110,100,45,102,108,97,103,53,54,52,41,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,50,32,110,50,54,50,57,41,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,49,32,115,115,54,50,49,32,110,54,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,28),40,102,95,50,56,49,53,32,115,116,114,115,54,49,49,32,46,32,116,109,112,54,49,48,54,49,50,41,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,13),40,102,95,50,57,51,56,32,99,54,53,48,41,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,15),40,105,110,115,116,114,105,110,103,32,115,54,52,56,41,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,105,54,55,53,32,106,54,55,54,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,48,55,32,99,54,54,49,41,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,31),40,102,95,50,57,51,48,32,115,116,114,54,52,52,32,102,114,111,109,54,52,53,32,46,32,116,111,54,52,54,41,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,109,97,112,54,57,56,41,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,37),40,99,111,108,108,101,99,116,32,105,54,57,51,32,102,114,111,109,54,57,52,32,116,111,116,97,108,54,57,53,32,102,115,54,57,54,41,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,23),40,102,95,51,49,51,50,32,115,116,114,54,56,57,32,115,109,97,112,54,57,48,41,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,116,111,116,97,108,55,49,52,32,112,111,115,55,49,53,41,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,22),40,102,95,51,50,53,52,32,115,116,114,55,49,48,32,108,101,110,55,49,49,41,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,27),40,102,95,51,51,49,56,32,115,116,114,55,50,56,32,46,32,116,109,112,55,50,55,55,50,57,41,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,55,52,57,32,105,55,53,49,41};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,108,97,115,116,55,53,55,32,110,101,120,116,55,53,56,41,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,24),40,102,95,51,51,55,48,32,115,101,113,55,52,51,32,108,101,115,115,63,55,52,52,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,120,55,55,50,32,97,55,55,51,32,121,55,55,52,32,98,55,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,27),40,102,95,51,52,55,57,32,97,55,54,53,32,98,55,54,54,32,108,101,115,115,63,55,54,55,41,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,114,55,56,53,32,97,55,56,54,32,98,55,56,55,41,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,27),40,102,95,51,53,55,56,32,97,55,55,56,32,98,55,55,57,32,108,101,115,115,63,55,56,48,41,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,11),40,115,116,101,112,32,110,55,57,55,41,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,56,49,55,32,112,56,49,57,32,105,56,50,48,41,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,24),40,102,95,51,55,49,48,32,115,101,113,55,57,52,32,108,101,115,115,63,55,57,53,41};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,24),40,102,95,51,56,52,51,32,115,101,113,56,50,54,32,108,101,115,115,63,56,50,55,41};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,97,116,56,52,56,41,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,18),40,105,110,115,101,114,116,32,120,56,52,53,32,121,56,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,97,116,56,53,53,41,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,13),40,108,111,111,107,117,112,32,120,56,53,51,41,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,11),40,103,56,54,53,32,118,56,55,51,41,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,56,54,52,32,103,56,55,48,56,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,24),40,118,105,115,105,116,32,117,56,54,48,32,97,100,106,45,108,105,115,116,56,54,49,41};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,13),40,103,56,51,54,32,100,101,102,56,56,55,41,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,13),40,103,56,57,54,32,100,101,102,57,48,52,41,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,56,57,53,32,103,57,48,49,57,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,56,51,53,32,103,56,52,49,56,56,57,41,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,23),40,102,95,51,56,55,48,32,100,97,103,56,50,57,32,112,114,101,100,56,51,48,41,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,112,115,57,50,51,32,112,101,57,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,23),40,102,95,52,49,52,48,32,118,101,99,57,49,56,32,112,114,111,99,57,49,57,41,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,8),40,102,95,52,50,50,51,41};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,13),40,102,95,52,50,50,57,32,120,57,51,55,41,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,13),40,102,95,52,50,51,53,32,113,57,51,57,41,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,13),40,102,95,52,50,52,56,32,113,57,52,50,41,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,13),40,102,95,52,50,54,57,32,113,57,52,55,41,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,22),40,102,95,52,50,57,48,32,113,57,53,50,32,100,97,116,117,109,57,53,51,41,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,13),40,102,95,52,51,50,50,32,113,57,54,50,41,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,13),40,102,95,52,51,53,56,32,113,57,55,48,41,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,57,55,52,32,108,115,116,57,55,54,41,0,0,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,16),40,102,95,52,51,54,55,32,108,115,116,48,57,55,51,41};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,21),40,102,95,52,52,50,49,32,113,57,56,52,32,105,116,101,109,57,56,53,41,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,57,57,55,41,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,25),40,102,95,52,52,53,48,32,113,57,57,48,32,105,116,101,109,108,105,115,116,57,57,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_data_2dstructures_toplevel)
C_externexport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1074)
static void C_ccall f_1074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4450)
static void C_ccall f_4450(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4460)
static void C_ccall f_4460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4479)
static C_word C_fcall f_4479(C_word t0);
C_noret_decl(f_4421)
static void C_ccall f_4421(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4367)
static void C_ccall f_4367(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4386)
static void C_fcall f_4386(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4396)
static void C_ccall f_4396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4378)
static void C_ccall f_4378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4358)
static void C_ccall f_4358(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4332)
static void C_ccall f_4332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4269)
static void C_ccall f_4269(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4279)
static void C_ccall f_4279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4248)
static void C_ccall f_4248(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4235)
static void C_ccall f_4235(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4229)
static void C_ccall f_4229(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4223)
static void C_ccall f_4223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4218)
static void C_ccall f_4218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4144)
static void C_fcall f_4144(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4158)
static void C_fcall f_4158(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3870)
static void C_ccall f_3870(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4117)
static void C_fcall f_4117(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4127)
static void C_ccall f_4127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4042)
static void C_ccall f_4042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4045)
static void C_ccall f_4045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4086)
static void C_fcall f_4086(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4096)
static void C_ccall f_4096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4046)
static void C_fcall f_4046(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4050)
static void C_ccall f_4050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4021)
static void C_fcall f_4021(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3961)
static void C_fcall f_3961(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3965)
static void C_ccall f_3965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3999)
static void C_fcall f_3999(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4009)
static void C_ccall f_4009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3993)
static void C_ccall f_3993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3966)
static void C_fcall f_3966(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3970)
static void C_ccall f_3970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3926)
static void C_fcall f_3926(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3932)
static void C_fcall f_3932(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3879)
static void C_fcall f_3879(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3885)
static void C_fcall f_3885(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3906)
static void C_ccall f_3906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3843)
static void C_ccall f_3843(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3868)
static void C_ccall f_3868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3861)
static void C_ccall f_3861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3857)
static void C_ccall f_3857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3710)
static void C_ccall f_3710(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3800)
static void C_ccall f_3800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3807)
static void C_ccall f_3807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3809)
static void C_fcall f_3809(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3713)
static void C_fcall f_3713(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3764)
static void C_ccall f_3764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3723)
static void C_ccall f_3723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3726)
static void C_ccall f_3726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3732)
static void C_ccall f_3732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3660)
static void C_ccall f_3660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3663)
static void C_ccall f_3663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3581)
static void C_fcall f_3581(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3588)
static void C_ccall f_3588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3479)
static void C_ccall f_3479(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3513)
static void C_fcall f_3513(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3520)
static void C_ccall f_3520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3568)
static void C_ccall f_3568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3540)
static void C_ccall f_3540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3370)
static void C_ccall f_3370(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3445)
static void C_fcall f_3445(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3473)
static void C_ccall f_3473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3397)
static void C_fcall f_3397(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3407)
static void C_ccall f_3407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3318)
static void C_ccall f_3318(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3318)
static void C_ccall f_3318r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3322)
static void C_ccall f_3322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3254)
static void C_ccall f_3254(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3269)
static void C_fcall f_3269(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3300)
static void C_ccall f_3300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3304)
static void C_ccall f_3304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3289)
static void C_ccall f_3289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3144)
static void C_fcall f_3144(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3177)
static void C_fcall f_3177(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3242)
static void C_ccall f_3242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3216)
static void C_fcall f_3216(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3172)
static void C_ccall f_3172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3158)
static void C_ccall f_3158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3124)
static void C_ccall f_3124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2987)
static void C_fcall f_2987(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2933)
static void C_fcall f_2933(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2938)
static void C_ccall f_2938(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2944)
static C_word C_fcall f_2944(C_word t0,C_word t1);
C_noret_decl(f_2815)
static void C_ccall f_2815(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2815)
static void C_ccall f_2815r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2833)
static void C_fcall f_2833(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2843)
static void C_ccall f_2843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2848)
static C_word C_fcall f_2848(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2680)
static void C_ccall f_2680(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2680)
static void C_ccall f_2680r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2721)
static void C_fcall f_2721(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2748)
static void C_fcall f_2748(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2787)
static void C_ccall f_2787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2731)
static void C_ccall f_2731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2701)
static void C_fcall f_2701(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2716)
static void C_ccall f_2716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2574)
static void C_ccall f_2574(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2584)
static void C_fcall f_2584(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2505)
static void C_ccall f_2505(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2505)
static void C_ccall f_2505r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2468)
static void C_ccall f_2468(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2478)
static void C_fcall f_2478(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2437)
static void C_ccall f_2437(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2406)
static void C_ccall f_2406(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2378)
static void C_ccall f_2378(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2378)
static void C_ccall f_2378r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2382)
static void C_ccall f_2382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2350)
static void C_ccall f_2350(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2350)
static void C_ccall f_2350r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2341)
static void C_ccall f_2341(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2347)
static void C_ccall f_2347(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2332)
static void C_ccall f_2332(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2338)
static void C_ccall f_2338(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2285)
static void C_fcall f_2285(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2306)
static void C_fcall f_2306(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2250)
static void C_fcall f_2250(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2279)
static void C_ccall f_2279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2248)
static void C_ccall f_2248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2192)
static void C_ccall f_2192(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2229)
static void C_ccall f_2229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2232)
static void C_ccall f_2232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2115)
static void C_ccall f_2115(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2118)
static void C_fcall f_2118(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2134)
static void C_ccall f_2134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2143)
static void C_fcall f_2143(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2065)
static void C_ccall f_2065(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2065)
static void C_ccall f_2065r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2077)
static void C_fcall f_2077(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2096)
static void C_ccall f_2096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1997)
static void C_ccall f_1997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2003)
static void C_fcall f_2003(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2019)
static void C_ccall f_2019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1972)
static void C_fcall f_1972(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1975)
static void C_ccall f_1975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1851)
static void C_ccall f_1851(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_1851)
static void C_ccall f_1851r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1855)
static void C_ccall f_1855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1896)
static void C_fcall f_1896(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1912)
static void C_ccall f_1912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1858)
static void C_fcall f_1858(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1861)
static void C_ccall f_1861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1736)
static void C_ccall f_1736(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1816)
static void C_fcall f_1816(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1845)
static void C_ccall f_1845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1800)
static void C_ccall f_1800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1802)
static void C_ccall f_1802(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1786)
static void C_fcall f_1786(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1794)
static void C_ccall f_1794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1743)
static void C_ccall f_1743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1751)
static void C_fcall f_1751(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1780)
static void C_ccall f_1780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1656)
static void C_ccall f_1656(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1665)
static void C_fcall f_1665(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1597)
static void C_ccall f_1597(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1597)
static void C_ccall f_1597r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1609)
static void C_fcall f_1609(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1519)
static void C_ccall f_1519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1527)
static void C_fcall f_1527(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1548)
static void C_fcall f_1548(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1562)
static void C_ccall f_1562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1566)
static void C_ccall f_1566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1477)
static void C_fcall f_1477(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1510)
static void C_ccall f_1510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1503)
static void C_ccall f_1503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1439)
static void C_ccall f_1439(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1448)
static void C_fcall f_1448(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1469)
static void C_ccall f_1469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1412)
static void C_fcall f_1412(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1437)
static void C_ccall f_1437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1378)
static void C_ccall f_1378(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1390)
static C_word C_fcall f_1390(C_word t0,C_word t1);
C_noret_decl(f_1375)
static void C_ccall f_1375(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1372)
static void C_ccall f_1372(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1369)
static void C_ccall f_1369(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1366)
static void C_ccall f_1366(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1363)
static void C_ccall f_1363(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1307)
static void C_ccall f_1307(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1307)
static void C_ccall f_1307r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1329)
static void C_ccall f_1329(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1329)
static void C_ccall f_1329r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1335)
static void C_fcall f_1335(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1354)
static void C_ccall f_1354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1315)
static void C_ccall f_1315(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1267)
static void C_ccall f_1267(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1269)
static void C_ccall f_1269(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1275)
static void C_fcall f_1275(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1294)
static void C_ccall f_1294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1240)
static void C_fcall f_1240(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1254)
static void C_ccall f_1254(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1262)
static void C_ccall f_1262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1192)
static void C_ccall f_1192(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1192)
static void C_ccall f_1192r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1195)
static void C_ccall f_1195(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1195)
static void C_ccall f_1195r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1203)
static void C_ccall f_1203(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1203)
static void C_ccall f_1203r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1209)
static void C_ccall f_1209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1217)
static void C_ccall f_1217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1180)
static void C_ccall f_1180(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1182)
static void C_ccall f_1182(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1182)
static void C_ccall f_1182r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1190)
static void C_ccall f_1190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1172)
static void C_ccall f_1172(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1174)
static void C_ccall f_1174(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1162)
static void C_ccall f_1162(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1160)
static void C_ccall f_1160(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1112)
static void C_ccall f_1112(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1112)
static void C_ccall f_1112r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1114)
static void C_ccall f_1114(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1120)
static void C_fcall f_1120(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1133)
static void C_ccall f_1133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1079)
static void C_ccall f_1079(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1079)
static void C_ccall f_1079r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1081)
static void C_ccall f_1081(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1087)
static void C_fcall f_1087(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1103)
static void C_ccall f_1103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1076)
static void C_ccall f_1076(C_word c,C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_4386)
static void C_fcall trf_4386(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4386(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4386(t0,t1,t2);}

C_noret_decl(trf_4144)
static void C_fcall trf_4144(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4144(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4144(t0,t1);}

C_noret_decl(trf_4158)
static void C_fcall trf_4158(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4158(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4158(t0,t1,t2,t3);}

C_noret_decl(trf_4117)
static void C_fcall trf_4117(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4117(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4117(t0,t1,t2);}

C_noret_decl(trf_4086)
static void C_fcall trf_4086(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4086(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4086(t0,t1,t2);}

C_noret_decl(trf_4046)
static void C_fcall trf_4046(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4046(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4046(t0,t1,t2);}

C_noret_decl(trf_4021)
static void C_fcall trf_4021(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4021(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4021(t0,t1,t2);}

C_noret_decl(trf_3961)
static void C_fcall trf_3961(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3961(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3961(t0,t1,t2,t3);}

C_noret_decl(trf_3999)
static void C_fcall trf_3999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3999(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3999(t0,t1,t2);}

C_noret_decl(trf_3966)
static void C_fcall trf_3966(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3966(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3966(t0,t1,t2);}

C_noret_decl(trf_3926)
static void C_fcall trf_3926(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3926(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3926(t0,t1,t2);}

C_noret_decl(trf_3932)
static void C_fcall trf_3932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3932(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3932(t0,t1,t2);}

C_noret_decl(trf_3879)
static void C_fcall trf_3879(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3879(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3879(t0,t1,t2,t3);}

C_noret_decl(trf_3885)
static void C_fcall trf_3885(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3885(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3885(t0,t1,t2);}

C_noret_decl(trf_3809)
static void C_fcall trf_3809(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3809(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3809(t0,t1,t2,t3);}

C_noret_decl(trf_3713)
static void C_fcall trf_3713(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3713(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3713(t0,t1,t2);}

C_noret_decl(trf_3581)
static void C_fcall trf_3581(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3581(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3581(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3513)
static void C_fcall trf_3513(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3513(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3513(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3445)
static void C_fcall trf_3445(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3445(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3445(t0,t1,t2,t3);}

C_noret_decl(trf_3397)
static void C_fcall trf_3397(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3397(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3397(t0,t1,t2);}

C_noret_decl(trf_3269)
static void C_fcall trf_3269(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3269(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3269(t0,t1,t2,t3);}

C_noret_decl(trf_3144)
static void C_fcall trf_3144(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3144(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3144(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3177)
static void C_fcall trf_3177(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3177(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3177(t0,t1,t2);}

C_noret_decl(trf_3216)
static void C_fcall trf_3216(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3216(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3216(t0,t1);}

C_noret_decl(trf_2987)
static void C_fcall trf_2987(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2987(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2987(t0,t1,t2,t3);}

C_noret_decl(trf_2933)
static void C_fcall trf_2933(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2933(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2933(t0,t1);}

C_noret_decl(trf_2833)
static void C_fcall trf_2833(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2833(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2833(t0,t1,t2,t3);}

C_noret_decl(trf_2721)
static void C_fcall trf_2721(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2721(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2721(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2748)
static void C_fcall trf_2748(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2748(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2748(t0,t1,t2);}

C_noret_decl(trf_2701)
static void C_fcall trf_2701(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2701(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2701(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2584)
static void C_fcall trf_2584(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2584(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2584(t0,t1);}

C_noret_decl(trf_2478)
static void C_fcall trf_2478(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2478(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2478(t0,t1);}

C_noret_decl(trf_2285)
static void C_fcall trf_2285(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2285(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2285(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2306)
static void C_fcall trf_2306(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2306(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2306(t0,t1,t2,t3);}

C_noret_decl(trf_2250)
static void C_fcall trf_2250(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2250(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2250(t0,t1,t2);}

C_noret_decl(trf_2118)
static void C_fcall trf_2118(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2118(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2118(t0,t1,t2,t3);}

C_noret_decl(trf_2143)
static void C_fcall trf_2143(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2143(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2143(t0,t1,t2,t3);}

C_noret_decl(trf_2077)
static void C_fcall trf_2077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2077(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2077(t0,t1,t2);}

C_noret_decl(trf_2003)
static void C_fcall trf_2003(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2003(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2003(t0,t1,t2);}

C_noret_decl(trf_1972)
static void C_fcall trf_1972(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1972(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1972(t0,t1);}

C_noret_decl(trf_1896)
static void C_fcall trf_1896(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1896(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1896(t0,t1,t2);}

C_noret_decl(trf_1858)
static void C_fcall trf_1858(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1858(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1858(t0,t1);}

C_noret_decl(trf_1816)
static void C_fcall trf_1816(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1816(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1816(t0,t1,t2);}

C_noret_decl(trf_1786)
static void C_fcall trf_1786(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1786(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1786(t0,t1,t2);}

C_noret_decl(trf_1751)
static void C_fcall trf_1751(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1751(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1751(t0,t1,t2);}

C_noret_decl(trf_1665)
static void C_fcall trf_1665(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1665(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1665(t0,t1,t2,t3);}

C_noret_decl(trf_1609)
static void C_fcall trf_1609(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1609(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1609(t0,t1,t2);}

C_noret_decl(trf_1527)
static void C_fcall trf_1527(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1527(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1527(t0,t1,t2,t3);}

C_noret_decl(trf_1548)
static void C_fcall trf_1548(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1548(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1548(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1477)
static void C_fcall trf_1477(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1477(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1477(t0,t1,t2,t3);}

C_noret_decl(trf_1448)
static void C_fcall trf_1448(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1448(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1448(t0,t1,t2);}

C_noret_decl(trf_1412)
static void C_fcall trf_1412(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1412(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1412(t0,t1,t2);}

C_noret_decl(trf_1335)
static void C_fcall trf_1335(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1335(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1335(t0,t1,t2);}

C_noret_decl(trf_1275)
static void C_fcall trf_1275(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1275(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1275(t0,t1,t2);}

C_noret_decl(trf_1240)
static void C_fcall trf_1240(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1240(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1240(t0,t1,t2);}

C_noret_decl(trf_1120)
static void C_fcall trf_1120(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1120(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1120(t0,t1,t2);}

C_noret_decl(trf_1087)
static void C_fcall trf_1087(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1087(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1087(t0,t1,t2);}

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
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_data_2dstructures_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("data_2dstructures_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(980)){
C_save(t1);
C_rereclaim2(980*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,110);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],8,"identity");
lf[3]=C_h_intern(&lf[3],7,"conjoin");
lf[4]=C_h_intern(&lf[4],7,"disjoin");
lf[5]=C_h_intern(&lf[5],10,"constantly");
lf[6]=C_h_intern(&lf[6],4,"flip");
lf[7]=C_h_intern(&lf[7],10,"complement");
lf[8]=C_h_intern(&lf[8],7,"compose");
lf[9]=C_h_intern(&lf[9],6,"values");
lf[10]=C_h_intern(&lf[10],1,"o");
lf[11]=C_h_intern(&lf[11],8,"list-of\077");
lf[12]=C_h_intern(&lf[12],4,"each");
lf[13]=C_h_intern(&lf[13],19,"\003sysundefined-value");
lf[14]=C_h_intern(&lf[14],4,"any\077");
lf[15]=C_h_intern(&lf[15],5,"none\077");
lf[16]=C_h_intern(&lf[16],7,"always\077");
lf[17]=C_h_intern(&lf[17],6,"never\077");
lf[18]=C_h_intern(&lf[18],5,"atom\077");
lf[19]=C_h_intern(&lf[19],5,"tail\077");
lf[20]=C_h_intern(&lf[20],11,"intersperse");
lf[21]=C_h_intern(&lf[21],7,"butlast");
lf[22]=C_h_intern(&lf[22],7,"flatten");
lf[23]=C_h_intern(&lf[23],4,"chop");
lf[24]=C_h_intern(&lf[24],7,"reverse");
lf[25]=C_h_intern(&lf[25],9,"\003syserror");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid numeric argument");
lf[27]=C_h_intern(&lf[27],4,"join");
lf[28]=C_h_intern(&lf[28],10,"\003sysappend");
lf[29]=C_h_intern(&lf[29],27,"\003syserror-not-a-proper-list");
lf[30]=C_h_intern(&lf[30],8,"compress");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000%bad argument type - not a proper list");
lf[32]=C_h_intern(&lf[32],15,"\003syssignal-hook");
lf[33]=C_h_intern(&lf[33],11,"\000type-error");
lf[34]=C_h_intern(&lf[34],7,"shuffle");
lf[35]=C_h_intern(&lf[35],3,"cdr");
lf[36]=C_h_intern(&lf[36],3,"map");
lf[37]=C_h_intern(&lf[37],5,"sort!");
lf[38]=C_h_intern(&lf[38],13,"alist-update!");
lf[39]=C_h_intern(&lf[39],3,"eq\077");
lf[40]=C_h_intern(&lf[40],4,"assq");
lf[41]=C_h_intern(&lf[41],4,"eqv\077");
lf[42]=C_h_intern(&lf[42],4,"assv");
lf[43]=C_h_intern(&lf[43],6,"equal\077");
lf[44]=C_h_intern(&lf[44],5,"assoc");
lf[45]=C_h_intern(&lf[45],9,"alist-ref");
lf[46]=C_h_intern(&lf[46],6,"rassoc");
lf[47]=C_h_intern(&lf[47],21,"reverse-string-append");
lf[48]=C_h_intern(&lf[48],11,"make-string");
lf[49]=C_h_intern(&lf[49],8,"->string");
lf[50]=C_h_intern(&lf[50],14,"symbol->string");
lf[51]=C_h_intern(&lf[51],18,"\003sysnumber->string");
lf[52]=C_h_intern(&lf[52],17,"get-output-string");
lf[53]=C_h_intern(&lf[53],7,"display");
lf[54]=C_h_intern(&lf[54],18,"open-output-string");
lf[55]=C_h_intern(&lf[55],4,"conc");
lf[56]=C_h_intern(&lf[56],13,"string-append");
lf[57]=C_h_intern(&lf[57],19,"\003syssubstring-index");
lf[58]=C_h_intern(&lf[58],15,"substring-index");
lf[59]=C_h_intern(&lf[59],22,"\003syssubstring-index-ci");
lf[60]=C_h_intern(&lf[60],18,"substring-index-ci");
lf[61]=C_h_intern(&lf[61],15,"string-compare3");
lf[62]=C_h_intern(&lf[62],18,"string-compare3-ci");
lf[63]=C_h_intern(&lf[63],15,"\003syssubstring=\077");
lf[64]=C_h_intern(&lf[64],11,"substring=\077");
lf[65]=C_h_intern(&lf[65],18,"\003syssubstring-ci=\077");
lf[66]=C_h_intern(&lf[66],14,"substring-ci=\077");
lf[67]=C_h_intern(&lf[67],12,"string-split");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\003\011\012 ");
lf[69]=C_h_intern(&lf[69],13,"\003syssubstring");
lf[70]=C_h_intern(&lf[70],18,"string-intersperse");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[72]=C_h_intern(&lf[72],19,"\003sysallocate-vector");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[74]=C_h_intern(&lf[74],16,"string-translate");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid translation destination");
lf[76]=C_h_intern(&lf[76],16,"\003syslist->string");
lf[77]=C_h_intern(&lf[77],17,"string-translate*");
lf[78]=C_h_intern(&lf[78],21,"\003sysfragments->string");
lf[79]=C_h_intern(&lf[79],11,"string-chop");
lf[80]=C_h_intern(&lf[80],12,"string-chomp");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[82]=C_h_intern(&lf[82],7,"sorted\077");
lf[83]=C_h_intern(&lf[83],5,"merge");
lf[84]=C_h_intern(&lf[84],6,"merge!");
lf[85]=C_h_intern(&lf[85],12,"vector->list");
lf[86]=C_h_intern(&lf[86],4,"sort");
lf[87]=C_h_intern(&lf[87],12,"list->vector");
lf[88]=C_h_intern(&lf[88],6,"append");
lf[89]=C_h_intern(&lf[89],16,"topological-sort");
lf[90]=C_h_intern(&lf[90],7,"colored");
lf[91]=C_h_intern(&lf[91],8,"for-each");
lf[92]=C_h_intern(&lf[92],13,"binary-search");
lf[93]=C_h_intern(&lf[93],10,"make-queue");
lf[94]=C_h_intern(&lf[94],5,"queue");
lf[95]=C_h_intern(&lf[95],6,"queue\077");
lf[96]=C_h_intern(&lf[96],12,"queue-empty\077");
lf[97]=C_h_intern(&lf[97],11,"queue-first");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[99]=C_h_intern(&lf[99],10,"queue-last");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[101]=C_h_intern(&lf[101],10,"queue-add!");
lf[102]=C_h_intern(&lf[102],13,"queue-remove!");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[104]=C_h_intern(&lf[104],11,"queue->list");
lf[105]=C_h_intern(&lf[105],11,"list->queue");
lf[106]=C_h_intern(&lf[106],16,"queue-push-back!");
lf[107]=C_h_intern(&lf[107],21,"queue-push-back-list!");
lf[108]=C_h_intern(&lf[108],17,"register-feature!");
lf[109]=C_h_intern(&lf[109],15,"data-structures");
C_register_lf2(lf,110,create_ptable());
t2=C_mutate(&lf[0] /* (set! c306 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1074,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* data-structures.scm:37: register-feature! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[108]+1)))(3,*((C_word*)lf[108]+1),t3,lf[109]);}

/* k1072 */
static void C_ccall f_1074(C_word c,C_word t0,C_word t1){
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
C_word t66;
C_word ab[194],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1074,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! identity ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1076,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[3]+1 /* (set! conjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1079,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[4]+1 /* (set! disjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1112,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[5]+1 /* (set! constantly ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1149,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[6]+1 /* (set! flip ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1172,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[7]+1 /* (set! complement ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1180,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[8]+1 /* (set! compose ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1192,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[10]+1 /* (set! o ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1228,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[11]+1 /* (set! list-of? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1267,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[12]+1 /* (set! each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1307,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[14]+1 /* (set! any? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1363,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[15]+1 /* (set! none? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1366,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[16]+1 /* (set! always? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1369,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[17]+1 /* (set! never? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1372,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[18]+1 /* (set! atom? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1375,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[19]+1 /* (set! tail? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1378,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[20]+1 /* (set! intersperse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1406,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[21]+1 /* (set! butlast ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1439,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[22]+1 /* (set! flatten ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1471,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[23]+1 /* (set! chop ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1512,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[27]+1 /* (set! join ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1597,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[30]+1 /* (set! compress ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1656,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[34]+1 /* (set! shuffle ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1736,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[38]+1 /* (set! alist-update! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1851,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[45]+1 /* (set! alist-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1950,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[46]+1 /* (set! rassoc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2065,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[47]+1 /* (set! reverse-string-append ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2115,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[49]+1 /* (set! ->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2192,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[55]+1 /* (set! conc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2237,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2285,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp);
t32=C_mutate((C_word*)lf[57]+1 /* (set! ##sys#substring-index ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2332,a[2]=t31,a[3]=((C_word)li70),tmp=(C_word)a,a+=4,tmp));
t33=C_mutate((C_word*)lf[59]+1 /* (set! ##sys#substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2341,a[2]=t31,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp));
t34=C_mutate((C_word*)lf[58]+1 /* (set! substring-index ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2350,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[60]+1 /* (set! substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2378,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[61]+1 /* (set! string-compare3 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2406,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[62]+1 /* (set! string-compare3-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2437,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[63]+1 /* (set! ##sys#substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2468,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[64]+1 /* (set! substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2505,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[65]+1 /* (set! ##sys#substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2574,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[66]+1 /* (set! substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2611,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[67]+1 /* (set! string-split ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2680,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[70]+1 /* (set! string-intersperse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2815,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[74]+1 /* (set! string-translate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2930,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[77]+1 /* (set! string-translate* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3132,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[79]+1 /* (set! string-chop ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3254,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[80]+1 /* (set! string-chomp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3318,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[82]+1 /* (set! sorted? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3370,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[83]+1 /* (set! merge ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3479,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[84]+1 /* (set! merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3578,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[37]+1 /* (set! sort! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3710,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[86]+1 /* (set! sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3843,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[89]+1 /* (set! topological-sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3870,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[92]+1 /* (set! binary-search ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4140,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[93]+1 /* (set! make-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4223,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[95]+1 /* (set! queue? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4229,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[96]+1 /* (set! queue-empty? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4235,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[97]+1 /* (set! queue-first ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4248,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[99]+1 /* (set! queue-last ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4269,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[101]+1 /* (set! queue-add! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4290,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[102]+1 /* (set! queue-remove! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4322,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[104]+1 /* (set! queue->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4358,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[105]+1 /* (set! list->queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4367,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[106]+1 /* (set! queue-push-back! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4421,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[107]+1 /* (set! queue-push-back-list! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4450,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp));
t66=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t66+1)))(2,t66,C_SCHEME_UNDEFINED);}

/* f_4450 in k1072 */
static void C_ccall f_4450(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4450,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[94],lf[107]);
t5=C_i_check_list_2(t3,lf[107]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4460,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_slot(t2,C_fix(1));
/* data-structures.scm:879: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[88]+1)))(4,*((C_word*)lf[88]+1),t6,t3,t7);}

/* k4458 */
static void C_ccall f_4460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4460,2,t0,t1);}
t2=C_eqp(t1,C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_setslot(((C_word*)t0)[3],C_fix(2),C_SCHEME_END_OF_LIST));}
else{
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4479,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
t5=f_4479(t3);
t6=C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_setslot(((C_word*)t0)[3],C_fix(2),t5));}}

/* doloop997 in k4458 */
static C_word C_fcall f_4479(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
loop:
t2=C_slot(t1,C_fix(1));
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t1;
return(t4);}
else{
t4=C_slot(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}}

/* f_4421 in k1072 */
static void C_ccall f_4421(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4421,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[94],lf[106]);
t5=C_slot(t2,C_fix(1));
t6=C_a_i_cons(&a,2,t3,t5);
t7=C_i_setslot(t2,C_fix(1),t6);
t8=C_slot(t2,C_fix(2));
t9=C_eqp(C_SCHEME_END_OF_LIST,t8);
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_i_setslot(t2,C_fix(2),t6));}
else{
t10=C_SCHEME_UNDEFINED;
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}}

/* f_4367 in k1072 */
static void C_ccall f_4367(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_4367,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[105]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4378,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record3(&a,3,lf[94],t2,C_SCHEME_END_OF_LIST));}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4386,a[2]=t2,a[3]=t7,a[4]=((C_word)li133),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4386(t9,t4,t2);}}

/* doloop974 */
static void C_fcall f_4386(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4386,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=C_eqp(t3,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4396,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=C_i_not(C_blockp(t2));
t7=(C_truep(t6)?t6:C_i_not(C_pairp(t2)));
if(C_truep(t7)){
/* data-structures.scm:855: ##sys#error-not-a-proper-list */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(4,*((C_word*)lf[29]+1),t5,((C_word*)t0)[2],lf[105]);}
else{
t8=C_slot(t2,C_fix(1));
t11=t1;
t12=t8;
t1=t11;
t2=t12;
goto loop;}}}

/* k4394 in doloop974 */
static void C_ccall f_4396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4386(t3,((C_word*)t0)[2],t2);}

/* k4376 */
static void C_ccall f_4378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4378,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record3(&a,3,lf[94],((C_word*)t0)[2],t1));}

/* f_4358 in k1072 */
static void C_ccall f_4358(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4358,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[94],lf[104]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f_4322 in k1072 */
static void C_ccall f_4322(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4322,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[94],lf[102]);
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4332,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
/* data-structures.scm:834: ##sys#error */
t7=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[102],lf[103],t2);}
else{
t7=t5;
f_4332(2,t7,C_SCHEME_UNDEFINED);}}

/* k4330 */
static void C_ccall f_4332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=C_eqp(C_SCHEME_END_OF_LIST,t2);
if(C_truep(t4)){
t5=C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),C_SCHEME_END_OF_LIST);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_slot(((C_word*)t0)[4],C_fix(0)));}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_slot(((C_word*)t0)[4],C_fix(0)));}}

/* f_4290 in k1072 */
static void C_ccall f_4290(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4290,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[94],lf[101]);
t5=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t6=C_slot(t2,C_fix(1));
t7=C_eqp(C_SCHEME_END_OF_LIST,t6);
if(C_truep(t7)){
t8=C_i_setslot(t2,C_fix(1),t5);
t9=C_i_setslot(t2,C_fix(2),t5);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}
else{
t8=C_slot(t2,C_fix(2));
t9=C_i_setslot(t8,C_fix(1),t5);
t10=C_i_setslot(t2,C_fix(2),t5);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_UNDEFINED);}}

/* f_4269 in k1072 */
static void C_ccall f_4269(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4269,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[94],lf[99]);
t4=C_slot(t2,C_fix(2));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4279,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
/* data-structures.scm:818: ##sys#error */
t7=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[99],lf[100],t2);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_slot(t4,C_fix(0)));}}

/* k4277 */
static void C_ccall f_4279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[2],C_fix(0)));}

/* f_4248 in k1072 */
static void C_ccall f_4248(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4248,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[94],lf[97]);
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4258,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
/* data-structures.scm:810: ##sys#error */
t7=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[97],lf[98],t2);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_slot(t4,C_fix(0)));}}

/* k4256 */
static void C_ccall f_4258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[2],C_fix(0)));}

/* f_4235 in k1072 */
static void C_ccall f_4235(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4235,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[94],lf[96]);
t4=C_slot(t2,C_fix(1));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_eqp(C_SCHEME_END_OF_LIST,t4));}

/* f_4229 in k1072 */
static void C_ccall f_4229(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4229,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[94]));}

/* f_4223 in k1072 */
static void C_ccall f_4223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4223,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record3(&a,3,lf[94],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}

/* f_4140 in k1072 */
static void C_ccall f_4140(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4140,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4144,a[2]=t1,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t4)[1]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4218,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:769: list->vector */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[87]+1)))(3,*((C_word*)lf[87]+1),t6,((C_word*)t4)[1]);}
else{
t6=t5;
f_4144(t6,C_i_check_vector_2(((C_word*)t4)[1],lf[92]));}}

/* k4216 */
static void C_ccall f_4218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_4144(t3,t2);}

/* k4142 */
static void C_fcall f_4144(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4144,NULL,2,t0,t1);}
t2=C_block_size(((C_word*)((C_word*)t0)[4])[1]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4158,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word)li123),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4158(t6,((C_word*)t0)[2],C_fix(0),t2);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* loop in k4142 */
static void C_fcall f_4158(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4158,NULL,4,t0,t1,t2,t3);}
t4=C_fixnum_difference(t3,t2);
t5=C_fixnum_shift_right(t4,C_fix(1));
t6=C_fixnum_plus(t2,t5);
t7=C_slot(((C_word*)((C_word*)t0)[4])[1],t6);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4168,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t6,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:777: proc */
t9=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t9))(3,t9,t8,t7);}

/* k4166 in loop in k4142 */
static void C_ccall f_4168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}
else{
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t3=C_eqp(((C_word*)t0)[4],((C_word*)t0)[5]);
if(C_truep(t3)){
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
/* data-structures.scm:779: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4158(t4,((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[5]);}}
else{
t3=C_eqp(((C_word*)t0)[2],((C_word*)t0)[5]);
if(C_truep(t3)){
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
/* data-structures.scm:780: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4158(t4,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}}}}

/* f_3870 in k1072 */
static void C_ccall f_3870(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[45],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3870,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3879,a[2]=t3,a[3]=t5,a[4]=((C_word)li112),tmp=(C_word)a,a+=5,tmp));
t15=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3926,a[2]=t5,a[3]=t3,a[4]=((C_word)li114),tmp=(C_word)a,a+=5,tmp));
t16=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3961,a[2]=t9,a[3]=t7,a[4]=t11,a[5]=t13,a[6]=((C_word)li117),tmp=(C_word)a,a+=7,tmp));
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4021,a[2]=t9,a[3]=((C_word)li118),tmp=(C_word)a,a+=4,tmp);
t18=C_i_cdr(t2);
t19=C_i_check_list_2(t18,lf[91]);
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4042,a[2]=t1,a[3]=t7,a[4]=t2,a[5]=t11,a[6]=t13,tmp=(C_word)a,a+=7,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4117,a[2]=t17,a[3]=t22,a[4]=((C_word)li121),tmp=(C_word)a,a+=5,tmp));
t24=((C_word*)t22)[1];
f_4117(t24,t20,t18);}}

/* for-each-loop835 */
static void C_fcall f_4117(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4117,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4127,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g836885 */
t5=((C_word*)t0)[2];
f_4021(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4125 in for-each-loop835 */
static void C_ccall f_4127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4117(t3,((C_word*)t0)[2],t2);}

/* k4040 */
static void C_ccall f_4042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4042,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_caar(((C_word*)t0)[4]);
t4=C_i_cdar(((C_word*)t0)[4]);
/* data-structures.scm:755: visit */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3961(t5,t2,t3,t4);}

/* k4043 in k4040 */
static void C_ccall f_4045(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4045,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4046,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li119),tmp=(C_word)a,a+=5,tmp);
t3=C_i_cdr(((C_word*)t0)[4]);
t4=C_i_check_list_2(t3,lf[91]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4084,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4086,a[2]=t2,a[3]=t7,a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4086(t9,t5,t3);}

/* for-each-loop895 in k4043 in k4040 */
static void C_fcall f_4086(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4086,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4096,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g896902 */
t5=((C_word*)t0)[2];
f_4046(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4094 in for-each-loop895 in k4043 in k4040 */
static void C_ccall f_4096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4086(t3,((C_word*)t0)[2],t2);}

/* k4082 in k4043 in k4040 */
static void C_ccall f_4084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* g896 in k4043 in k4040 */
static void C_fcall f_4046(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4046,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4050,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* data-structures.scm:757: lookup */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3926(t5,t3,t4);}

/* k4048 in g896 in k4043 in k4040 */
static void C_ccall f_4050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_eqp(t1,lf[90]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_car(((C_word*)t0)[3]);
t4=C_i_cdr(((C_word*)t0)[3]);
/* data-structures.scm:759: visit */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3961(t5,((C_word*)t0)[4],t3,t4);}}

/* g836 */
static void C_fcall f_4021(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4021,NULL,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=C_i_cdr(t2);
/* data-structures.scm:752: insert */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3879(t5,t1,t3,t4);}

/* visit */
static void C_fcall f_3961(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3961,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3965,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:740: insert */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3879(t5,t4,t2,lf[90]);}

/* k3963 in visit */
static void C_ccall f_3965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3965,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3966,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word)li115),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
t4=C_i_check_list_2(t3,lf[91]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3999,a[2]=t2,a[3]=t7,a[4]=((C_word)li116),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_3999(t9,t5,t3);}

/* for-each-loop864 in k3963 in visit */
static void C_fcall f_3999(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3999,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4009,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g865871 */
t5=((C_word*)t0)[2];
f_3966(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4007 in for-each-loop864 in k3963 in visit */
static void C_ccall f_4009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3999(t3,((C_word*)t0)[2],t2);}

/* k3991 in k3963 in visit */
static void C_ccall f_3993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3993,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* g865 in k3963 in visit */
static void C_fcall f_3966(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3966,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3970,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:743: lookup */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3926(t4,t3,t2);}

/* k3968 in g865 in k3963 in visit */
static void C_ccall f_3970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_eqp(t1,lf[90]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(t1)){
t3=t1;
/* data-structures.scm:745: visit */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3961(t4,((C_word*)t0)[4],((C_word*)t0)[2],t3);}
else{
/* data-structures.scm:745: visit */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3961(t3,((C_word*)t0)[4],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}}}

/* lookup */
static void C_fcall f_3926(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3926,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3932,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word)li113),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3932(t6,t1,((C_word*)((C_word*)t0)[2])[1]);}

/* loop in lookup */
static void C_fcall f_3932(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3932,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3945,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
/* data-structures.scm:735: pred */
t5=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[2],t4);}}

/* k3943 in loop in lookup */
static void C_ccall f_3945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_cdar(((C_word*)t0)[3]));}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
/* data-structures.scm:736: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3932(t3,((C_word*)t0)[4],t2);}}

/* insert */
static void C_fcall f_3879(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3879,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3885,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word)li111),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_3885(t7,t1,((C_word*)((C_word*)t0)[3])[1]);}

/* loop in insert */
static void C_fcall f_3885(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3885,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,t3,((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3906,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_i_caar(t2);
/* data-structures.scm:729: pred */
t5=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[6],t4);}}

/* k3904 in loop in insert */
static void C_ccall f_3906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_set_cdr(t2,((C_word*)t0)[3]));}
else{
t2=C_i_cdr(((C_word*)t0)[5]);
/* data-structures.scm:730: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3885(t3,((C_word*)t0)[4],t2);}}

/* f_3843 in k1072 */
static void C_ccall f_3843(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3843,4,t0,t1,t2,t3);}
if(C_truep(C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3857,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3861,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:712: vector->list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[85]+1)))(3,*((C_word*)lf[85]+1),t5,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3868,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:713: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[88]+1)))(4,*((C_word*)lf[88]+1),t4,t2,C_SCHEME_END_OF_LIST);}}

/* k3866 */
static void C_ccall f_3868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:713: sort! */
t2=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3859 */
static void C_ccall f_3861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:712: sort! */
t2=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3855 */
static void C_ccall f_3857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:712: list->vector */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[87]+1)))(3,*((C_word*)lf[87]+1),((C_word*)t0)[2],t1);}

/* f_3710 in k1072 */
static void C_ccall f_3710(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3710,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3713,a[2]=t4,a[3]=t6,a[4]=t3,a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp));
if(C_truep(C_i_vectorp(((C_word*)t4)[1]))){
t8=C_i_vector_length(((C_word*)t4)[1]);
t9=((C_word*)t4)[1];
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3800,a[2]=t8,a[3]=t6,a[4]=t1,a[5]=t9,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:695: vector->list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[85]+1)))(3,*((C_word*)lf[85]+1),t10,((C_word*)t4)[1]);}
else{
t8=C_i_length(((C_word*)t4)[1]);
/* data-structures.scm:701: step */
t9=((C_word*)t6)[1];
f_3713(t9,t1,t8);}}

/* k3798 */
static void C_ccall f_3800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3800,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3807,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:696: step */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3713(t4,t3,((C_word*)t0)[2]);}

/* k3805 in k3798 */
static void C_ccall f_3807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3807,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3809,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word)li108),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3809(t5,((C_word*)t0)[2],t1,C_fix(0));}

/* doloop817 in k3805 in k3798 */
static void C_fcall f_3809(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3809,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}
else{
t4=C_i_car(t2);
t5=C_i_vector_set(((C_word*)t0)[3],t3,t4);
t6=C_i_cdr(t2);
t7=C_a_i_plus(&a,2,t3,C_fix(1));
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* step */
static void C_fcall f_3713(C_word t0,C_word t1,C_word t2){
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
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3713,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3723,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_quotient(4,0,t3,t2,C_fix(2));}
else{
if(C_truep(C_i_nequalp(t2,C_fix(2)))){
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=C_i_cadr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=C_i_cddr(((C_word*)((C_word*)t0)[2])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3764,a[2]=t1,a[3]=t3,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:680: less? */
t9=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t8,t4,t3);}
else{
if(C_truep(C_i_nequalp(t2,C_fix(1)))){
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=C_i_set_cdr(t3,C_SCHEME_END_OF_LIST);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}}}}

/* k3762 in step */
static void C_ccall f_3764(C_word c,C_word t0,C_word t1){
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
if(C_truep(t1)){
t2=C_i_set_car(((C_word*)t0)[5],((C_word*)t0)[4]);
t3=C_i_cdr(((C_word*)t0)[5]);
t4=C_i_set_car(t3,((C_word*)t0)[3]);
t5=C_i_cdr(((C_word*)t0)[5]);
t6=C_i_set_cdr(t5,C_SCHEME_END_OF_LIST);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,((C_word*)t0)[5]);}
else{
t2=C_i_cdr(((C_word*)t0)[5]);
t3=C_i_set_cdr(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[5]);}}

/* k3721 in step */
static void C_ccall f_3723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3723,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:671: step */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3713(t3,t2,t1);}

/* k3724 in k3721 in step */
static void C_ccall f_3726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3726,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3732,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:673: step */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3713(t4,t3,t2);}

/* k3730 in k3724 in k3721 in step */
static void C_ccall f_3732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:674: merge! */
t2=*((C_word*)lf[84]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* f_3578 in k1072 */
static void C_ccall f_3578(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3578,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3581,a[2]=t4,a[3]=t6,a[4]=((C_word)li105),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_nullp(t2))){
t8=t3;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
if(C_truep(C_i_nullp(t3))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t2);}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3660,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t9=C_i_car(t3);
t10=C_i_car(t2);
/* data-structures.scm:648: less? */
t11=t4;
((C_proc4)C_fast_retrieve_proc(t11))(4,t11,t8,t9,t10);}}}

/* k3658 */
static void C_ccall f_3660(C_word c,C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3660,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3663,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[5]);
if(C_truep(C_i_nullp(t3))){
t4=C_i_set_cdr(((C_word*)t0)[5],((C_word*)t0)[3]);
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t4=C_i_cdr(((C_word*)t0)[5]);
/* data-structures.scm:651: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3581(t5,t2,((C_word*)t0)[5],((C_word*)t0)[3],t4);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3683,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
if(C_truep(C_i_nullp(t3))){
t4=C_i_set_cdr(((C_word*)t0)[3],((C_word*)t0)[5]);
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t4=C_i_cdr(((C_word*)t0)[3]);
/* data-structures.scm:656: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3581(t5,t2,((C_word*)t0)[3],t4,((C_word*)t0)[5]);}}}

/* k3681 in k3658 */
static void C_ccall f_3683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3661 in k3658 */
static void C_ccall f_3663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* loop */
static void C_fcall f_3581(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3581,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3588,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(t4);
t7=C_i_car(t3);
/* data-structures.scm:633: less? */
t8=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t8))(4,t8,t5,t6,t7);}

/* k3586 in loop */
static void C_ccall f_3588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_truep(t1)){
t2=C_i_set_cdr(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[5]);
if(C_truep(C_i_nullp(t3))){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_set_cdr(((C_word*)t0)[5],((C_word*)t0)[3]));}
else{
t4=C_i_cdr(((C_word*)t0)[5]);
/* data-structures.scm:638: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3581(t5,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[3],t4);}}
else{
t2=C_i_set_cdr(((C_word*)t0)[6],((C_word*)t0)[3]);
t3=C_i_cdr(((C_word*)t0)[3]);
if(C_truep(C_i_nullp(t3))){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_set_cdr(((C_word*)t0)[3],((C_word*)t0)[5]));}
else{
t4=C_i_cdr(((C_word*)t0)[3]);
/* data-structures.scm:644: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3581(t5,((C_word*)t0)[4],((C_word*)t0)[3],t4,((C_word*)t0)[5]);}}}

/* f_3479 in k1072 */
static void C_ccall f_3479(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3479,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
if(C_truep(C_i_nullp(t3))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}
else{
t5=C_i_car(t2);
t6=C_i_cdr(t2);
t7=C_i_car(t3);
t8=C_i_cdr(t3);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3513,a[2]=t4,a[3]=t10,a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3513(t12,t1,t5,t6,t7,t8);}}}

/* loop */
static void C_fcall f_3513(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3513,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3520,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t1,a[5]=t3,a[6]=t2,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:616: less? */
t7=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,t4,t2);}

/* k3518 in loop */
static void C_ccall f_3520(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3520,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_nullp(((C_word*)t0)[7]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[3],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3540,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[7]);
t4=C_i_cdr(((C_word*)t0)[7]);
/* data-structures.scm:619: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3513(t5,t2,((C_word*)t0)[6],((C_word*)t0)[5],t3,t4);}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[5]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[7]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[6],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3568,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[5]);
t4=C_i_cdr(((C_word*)t0)[5]);
/* data-structures.scm:623: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3513(t5,t2,t3,t4,((C_word*)t0)[3],((C_word*)t0)[7]);}}}

/* k3566 in k3518 in loop */
static void C_ccall f_3568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3568,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k3538 in k3518 in loop */
static void C_ccall f_3540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3540,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* f_3370 in k1072 */
static void C_ccall f_3370(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3370,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}
else{
if(C_truep(C_i_vectorp(t2))){
t4=C_i_vector_length(t2);
if(C_truep(C_i_less_or_equalp(t4,C_fix(1)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3397,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t4,a[6]=((C_word)li100),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_3397(t8,t1,C_fix(1));}}
else{
t4=C_i_car(t2);
t5=C_i_cdr(t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3445,a[2]=t3,a[3]=t7,a[4]=((C_word)li101),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_3445(t9,t1,t4,t5);}}}

/* loop */
static void C_fcall f_3445(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3445,NULL,4,t0,t1,t2,t3);}
t4=C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3473,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_i_car(t3);
/* data-structures.scm:599: less? */
t7=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t5,t6,t2);}}

/* k3471 in loop */
static void C_ccall f_3473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=C_i_cdr(((C_word*)t0)[3]);
/* data-structures.scm:600: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3445(t4,((C_word*)t0)[4],t2,t3);}}

/* doloop749 */
static void C_fcall f_3397(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3397,NULL,3,t0,t1,t2);}
t3=C_i_nequalp(t2,((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3407,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_3407(2,t5,t3);}
else{
t5=C_i_vector_ref(((C_word*)t0)[3],t2);
t6=C_a_i_minus(&a,2,t2,C_fix(1));
t7=C_i_vector_ref(((C_word*)t0)[3],t6);
/* data-structures.scm:593: less? */
t8=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t8))(4,t8,t4,t5,t7);}}

/* k3405 in doloop749 */
static void C_ccall f_3407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3407,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_nequalp(((C_word*)t0)[4],((C_word*)t0)[3]));}
else{
t2=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[2])[1];
f_3397(t3,((C_word*)t0)[5],t2);}}

/* f_3318 in k1072 */
static void C_ccall f_3318(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3318r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3318r(t0,t1,t2,t3);}}

static void C_ccall f_3318r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3322,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_3322(2,t5,lf[81]);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_3322(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k3320 */
static void C_ccall f_3322(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=C_i_check_string_2(((C_word*)t0)[3],lf[80]);
t3=C_i_check_string_2(t1,lf[80]);
t4=C_block_size(((C_word*)t0)[3]);
t5=C_block_size(t1);
t6=C_fixnum_difference(t4,t5);
t7=C_fixnum_greater_or_equal_p(t4,t5);
t8=(C_truep(t7)?C_substring_compare(((C_word*)t0)[3],t1,t6,C_fix(0),t5):C_SCHEME_FALSE);
if(C_truep(t8)){
/* data-structures.scm:560: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(5,*((C_word*)lf[69]+1),((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t6);}
else{
t9=((C_word*)t0)[3];
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* f_3254 in k1072 */
static void C_ccall f_3254(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3254,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[79]);
t5=C_i_check_exact_2(t3,lf[79]);
t6=C_block_size(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3269,a[2]=t8,a[3]=t2,a[4]=t3,a[5]=((C_word)li97),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_3269(t10,t1,t6,C_fix(0));}

/* loop */
static void C_fcall f_3269(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3269,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_fixnum_less_or_equal_p(t2,((C_word*)t0)[4]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3289,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_plus(t3,t2);
/* data-structures.scm:546: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(5,*((C_word*)lf[69]+1),t4,((C_word*)t0)[3],t3,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3300,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=C_fixnum_plus(t3,((C_word*)t0)[4]);
/* data-structures.scm:547: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(5,*((C_word*)lf[69]+1),t4,((C_word*)t0)[3],t3,t5);}}}

/* k3298 in loop */
static void C_ccall f_3300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3300,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3304,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=C_fixnum_plus(((C_word*)t0)[3],((C_word*)t0)[4]);
/* data-structures.scm:547: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3269(t5,t2,t3,t4);}

/* k3302 in k3298 in loop */
static void C_ccall f_3304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3304,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k3287 in loop */
static void C_ccall f_3289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3289,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list1(&a,1,t1));}

/* f_3132 in k1072 */
static void C_ccall f_3132(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3132,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[77]);
t5=C_i_check_list_2(t3,lf[77]);
t6=C_block_size(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3144,a[2]=t3,a[3]=t8,a[4]=t2,a[5]=t6,a[6]=((C_word)li95),tmp=(C_word)a,a+=7,tmp));
/* data-structures.scm:535: collect */
t10=((C_word*)t8)[1];
f_3144(t10,t1,C_fix(0),C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* collect */
static void C_fcall f_3144(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3144,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3158,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3172,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:517: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(5,*((C_word*)lf[69]+1),t8,((C_word*)t0)[4],t3,t2);}
else{
t8=((C_word*)t6)[1];
/* data-structures.scm:515: reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(3,*((C_word*)lf[24]+1),t7,t8);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3177,a[2]=t8,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=t2,a[9]=((C_word)li94),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_3177(t10,t1,((C_word*)t0)[2]);}}

/* loop in collect */
static void C_fcall f_3177(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3177,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* data-structures.scm:521: collect */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3144(t5,t1,t3,((C_word*)t0)[5],t4,((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=C_i_car(t2);
t4=C_i_car(t3);
t5=C_i_string_length(t4);
t6=C_i_cdr(t3);
if(C_truep(C_substring_compare(((C_word*)t0)[3],t4,((C_word*)t0)[8],C_fix(0),t5))){
t7=C_fixnum_plus(((C_word*)t0)[8],t5);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3216,a[2]=t7,a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=t6,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[8],((C_word*)t0)[5]))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3242,a[2]=t8,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:529: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(5,*((C_word*)lf[69]+1),t9,((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[8]);}
else{
t9=t8;
f_3216(t9,C_SCHEME_UNDEFINED);}}
else{
t7=C_i_cdr(t2);
/* data-structures.scm:534: loop */
t14=t1;
t15=t7;
t1=t14;
t2=t15;
goto loop;}}}

/* k3240 in loop in collect */
static void C_ccall f_3242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3242,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_3216(t4,t3);}

/* k3214 in loop in collect */
static void C_fcall f_3216(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3216,NULL,2,t0,t1);}
t2=C_i_string_length(((C_word*)t0)[7]);
t3=C_fixnum_plus(((C_word*)t0)[6],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[5])[1]);
/* data-structures.scm:530: collect */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3144(t5,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[2],t3,t4);}

/* k3170 in collect */
static void C_ccall f_3172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3172,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[3])[1]);
/* data-structures.scm:515: reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(3,*((C_word*)lf[24]+1),((C_word*)t0)[2],t2);}

/* k3156 in collect */
static void C_ccall f_3158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:513: ##sys#fragments->string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[78]+1)))(4,*((C_word*)lf[78]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_2930 in k1072 */
static void C_ccall f_2930(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_2930r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2930r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2930r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(12);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2933,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2967,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_charp(t3))){
t7=t6;
f_2967(2,t7,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3107,a[2]=t3,a[3]=((C_word)li92),tmp=(C_word)a,a+=4,tmp));}
else{
if(C_truep(C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3124,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* list->string */
t8=*((C_word*)lf[76]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}
else{
t7=C_i_check_string_2(t3,lf[74]);
/* data-structures.scm:474: instring */
f_2933(t6,t3);}}}

/* k3122 */
static void C_ccall f_3124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:471: instring */
f_2933(((C_word*)t0)[2],t1);}

/* f_3107 */
static void C_ccall f_3107(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3107,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(t2,((C_word*)t0)[2]));}

/* k2965 */
static void C_ccall f_2967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2967,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2970,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=C_slot(((C_word*)t0)[2],C_fix(0));
if(C_truep(C_charp(t3))){
t4=t2;
f_2970(2,t4,t3);}
else{
if(C_truep(C_i_pairp(t3))){
/* list->string */
t4=*((C_word*)lf[76]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t4=C_i_check_string_2(t3,lf[74]);
t5=t2;
f_2970(2,t5,t3);}}}
else{
t3=t2;
f_2970(2,t3,C_SCHEME_FALSE);}}

/* k2968 in k2965 */
static void C_ccall f_2970(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2970,2,t0,t1);}
t2=C_i_stringp(t1);
t3=(C_truep(t2)?C_block_size(t1):C_SCHEME_FALSE);
t4=C_i_check_string_2(((C_word*)t0)[4],lf[74]);
t5=C_block_size(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2982,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:486: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[48]+1)))(3,*((C_word*)lf[48]+1),t6,t5);}

/* k2980 in k2968 in k2965 */
static void C_ccall f_2982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2982,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2987,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word)li91),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_2987(t5,((C_word*)t0)[2],C_fix(0),C_fix(0));}

/* loop in k2980 in k2968 in k2965 */
static void C_fcall f_2987(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2987,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[8]))){
if(C_truep(C_fixnum_lessp(t3,t2))){
/* data-structures.scm:490: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(5,*((C_word*)lf[69]+1),t1,((C_word*)t0)[7],C_fix(0),t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[7]);}}
else{
t4=C_subchar(((C_word*)t0)[6],t2);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3006,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* data-structures.scm:493: from */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}}

/* k3004 in loop in k2980 in k2968 in k2965 */
static void C_ccall f_3006(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=t1;
if(C_truep(t2)){
t3=((C_word*)t0)[9];
if(C_truep(t3)){
if(C_truep(C_charp(((C_word*)t0)[9]))){
t4=C_setsubchar(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[9]);
t5=C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t6=C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* data-structures.scm:500: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_2987(t7,((C_word*)t0)[4],t5,t6);}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[3]))){
/* data-structures.scm:502: ##sys#error */
t4=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,((C_word*)t0)[4],lf[74],lf[75],((C_word*)t0)[6],((C_word*)t0)[9]);}
else{
t4=C_setsubchar(((C_word*)t0)[8],((C_word*)t0)[7],C_subchar(((C_word*)t0)[9],t1));
t5=C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t6=C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* data-structures.scm:505: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_2987(t7,((C_word*)t0)[4],t5,t6);}}}
else{
t4=C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
/* data-structures.scm:497: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_2987(t5,((C_word*)t0)[4],t4,((C_word*)t0)[7]);}}
else{
t3=C_setsubchar(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[2]);
t4=C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t5=C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* data-structures.scm:496: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_2987(t6,((C_word*)t0)[4],t4,t5);}}

/* instring */
static void C_fcall f_2933(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2933,NULL,2,t1,t2);}
t3=C_block_size(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2938,a[2]=t2,a[3]=t3,a[4]=((C_word)li89),tmp=(C_word)a,a+=5,tmp));}

/* f_2938 in instring */
static void C_ccall f_2938(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2938,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2944,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_2944(t3,C_fix(0)));}

/* loop */
static C_word C_fcall f_2944(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(C_SCHEME_FALSE);}
else{
t2=C_eqp(((C_word*)t0)[3],C_subchar(((C_word*)t0)[2],t1));
if(C_truep(t2)){
return(t1);}
else{
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}}

/* f_2815 in k1072 */
static void C_ccall f_2815(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2815r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2815r(t0,t1,t2,t3);}}

static void C_ccall f_2815r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2819,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_2819(2,t5,lf[73]);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_2819(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2817 */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2819,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[3],lf[70]);
t3=C_i_check_string_2(t1,lf[70]);
t4=C_block_size(t1);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2833,a[2]=t6,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word)li86),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2833(t8,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* loop1 in k2817 */
static void C_fcall f_2833(C_word t0,C_word t1,C_word t2,C_word t3){
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
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2833,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
if(C_truep(C_eqp(((C_word*)t0)[5],C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[71]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2843,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=C_fixnum_difference(t3,((C_word*)t0)[3]);
/* data-structures.scm:436: ##sys#allocate-vector */
t6=*((C_word*)lf[72]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t4,t5,C_SCHEME_TRUE,C_make_character(32),C_SCHEME_FALSE);}}
else{
t4=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_slot(t2,C_fix(0));
t6=C_i_check_string_2(t5,lf[70]);
t7=C_slot(t2,C_fix(1));
t8=C_block_size(t5);
t9=C_fixnum_plus(((C_word*)t0)[3],t3);
t10=C_fixnum_plus(t8,t9);
/* data-structures.scm:451: loop1 */
t14=t1;
t15=t7;
t16=t10;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
/* data-structures.scm:453: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(3,*((C_word*)lf[29]+1),t1,((C_word*)t0)[5]);}}}

/* k2841 in loop1 in k2817 */
static void C_ccall f_2843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2843,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2848,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word)li85),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2848(t2,((C_word*)t0)[2],C_fix(0)));}

/* loop2 in k2841 in loop1 in k2817 */
static C_word C_fcall f_2848(C_word t0,C_word t1,C_word t2){
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
t3=C_slot(t1,C_fix(0));
t4=C_slot(t1,C_fix(1));
t5=C_block_size(t3);
t6=C_substring_copy(t3,((C_word*)t0)[4],C_fix(0),t5,t2);
t7=C_fixnum_plus(t2,t5);
if(C_truep(C_eqp(t4,C_SCHEME_END_OF_LIST))){
t8=((C_word*)t0)[4];
return(t8);}
else{
t8=C_substring_copy(((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),((C_word*)t0)[2],t7);
t9=C_fixnum_plus(t7,((C_word*)t0)[2]);
t12=t4;
t13=t9;
t1=t12;
t2=t13;
goto loop;}}

/* f_2680 in k1072 */
static void C_ccall f_2680(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+20)){
C_save_and_reclaim((void*)tr3r,(void*)f_2680r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2680r(t0,t1,t2,t3);}}

static void C_ccall f_2680r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(20);
t4=C_i_check_string_2(t2,lf[67]);
t5=C_i_nullp(t3);
t6=(C_truep(t5)?lf[68]:C_i_car(t3));
t7=C_i_length(t3);
t8=C_eqp(t7,C_fix(2));
t9=(C_truep(t8)?C_i_cadr(t3):C_SCHEME_FALSE);
t10=C_block_size(t2);
t11=C_i_check_string_2(t6,lf[67]);
t12=C_block_size(t6);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2701,a[2]=t2,a[3]=t14,a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2721,a[2]=t6,a[3]=t17,a[4]=t12,a[5]=t2,a[6]=t15,a[7]=t9,a[8]=t14,a[9]=t10,a[10]=((C_word)li83),tmp=(C_word)a,a+=11,tmp));
t19=((C_word*)t17)[1];
f_2721(t19,t1,C_fix(0),C_SCHEME_FALSE,C_fix(0));}

/* loop */
static void C_fcall f_2721(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2721,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[9]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2731,a[2]=t1,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t6=C_fixnum_greaterp(t2,t4);
t7=(C_truep(t6)?t6:((C_word*)t0)[7]);
if(C_truep(t7)){
/* data-structures.scm:412: add */
t8=((C_word*)t0)[6];
f_2701(t8,t5,t4,t2,t3);}
else{
t8=((C_word*)((C_word*)t0)[8])[1];
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_truep(t8)?t8:C_SCHEME_END_OF_LIST));}}
else{
t5=C_subchar(((C_word*)t0)[5],t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2748,a[2]=t7,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],a[6]=t5,a[7]=t4,a[8]=t3,a[9]=((C_word*)t0)[3],a[10]=t2,a[11]=((C_word*)t0)[4],a[12]=((C_word)li82),tmp=(C_word)a,a+=13,tmp));
t9=((C_word*)t7)[1];
f_2748(t9,t1,C_fix(0));}}

/* scan in loop */
static void C_fcall f_2748(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2748,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[11]))){
t3=C_fixnum_plus(((C_word*)t0)[10],C_fix(1));
/* data-structures.scm:417: loop */
t4=((C_word*)((C_word*)t0)[9])[1];
f_2721(t4,t1,t3,((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t3=C_eqp(((C_word*)t0)[6],C_subchar(((C_word*)t0)[5],t2));
if(C_truep(t3)){
t4=C_fixnum_plus(((C_word*)t0)[10],C_fix(1));
t5=C_fixnum_greaterp(((C_word*)t0)[10],((C_word*)t0)[7]);
t6=(C_truep(t5)?t5:((C_word*)t0)[4]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2787,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:421: add */
t8=((C_word*)t0)[3];
f_2701(t8,t7,((C_word*)t0)[7],((C_word*)t0)[10],((C_word*)t0)[8]);}
else{
/* data-structures.scm:422: loop */
t7=((C_word*)((C_word*)t0)[9])[1];
f_2721(t7,t1,t4,((C_word*)t0)[8],t4);}}
else{
t4=C_fixnum_plus(t2,C_fix(1));
/* data-structures.scm:423: scan */
t11=t1;
t12=t4;
t1=t11;
t2=t12;
goto loop;}}}

/* k2785 in scan in loop */
static void C_ccall f_2787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:421: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2721(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,((C_word*)t0)[2]);}

/* k2729 in loop */
static void C_ccall f_2731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?t2:C_SCHEME_END_OF_LIST));}

/* add */
static void C_fcall f_2701(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2701,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2716,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:405: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(5,*((C_word*)lf[69]+1),t5,((C_word*)t0)[2],t2,t3);}

/* k2714 in add */
static void C_ccall f_2716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2716,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* f_2611 in k1072 */
static void C_ccall f_2611(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_2611r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2611r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2611r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_fix(0):C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(0):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
if(C_truep(C_i_nullp(t16))){
/* data-structures.scm:390: ##sys#substring-ci=? */
t17=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t17+1)))(7,t17,t1,t2,t3,t6,t10,t14);}
else{
/* ##sys#error */
t17=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t1,lf[0],t16);}}

/* f_2574 in k1072 */
static void C_ccall f_2574(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[7],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2574,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_i_check_string_2(t2,lf[66]);
t8=C_i_check_string_2(t3,lf[66]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2584,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t10=t9;
f_2584(t10,t6);}
else{
t10=C_block_size(t2);
t11=C_fixnum_difference(t10,t4);
t12=C_block_size(t3);
t13=C_fixnum_difference(t12,t5);
t14=t9;
f_2584(t14,C_i_fixnum_min(t11,t13));}}

/* k2582 */
static void C_fcall f_2584(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_check_exact_2(((C_word*)t0)[6],lf[66]);
t3=C_i_check_exact_2(((C_word*)t0)[5],lf[66]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_substring_compare_case_insensitive(((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[5],t1));}

/* f_2505 in k1072 */
static void C_ccall f_2505(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_2505r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2505r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2505r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_fix(0):C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(0):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
if(C_truep(C_i_nullp(t16))){
/* data-structures.scm:376: ##sys#substring=? */
t17=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t17+1)))(7,t17,t1,t2,t3,t6,t10,t14);}
else{
/* ##sys#error */
t17=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t1,lf[0],t16);}}

/* f_2468 in k1072 */
static void C_ccall f_2468(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[7],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2468,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_i_check_string_2(t2,lf[64]);
t8=C_i_check_string_2(t3,lf[64]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2478,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t10=t9;
f_2478(t10,t6);}
else{
t10=C_block_size(t2);
t11=C_fixnum_difference(t10,t4);
t12=C_block_size(t3);
t13=C_fixnum_difference(t12,t5);
t14=t9;
f_2478(t14,C_i_fixnum_min(t11,t13));}}

/* k2476 */
static void C_fcall f_2478(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_check_exact_2(((C_word*)t0)[6],lf[64]);
t3=C_i_check_exact_2(((C_word*)t0)[5],lf[64]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_substring_compare(((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[5],t1));}

/* f_2437 in k1072 */
static void C_ccall f_2437(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2437,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[62]);
t5=C_i_check_string_2(t3,lf[62]);
t6=C_block_size(t2);
t7=C_block_size(t3);
t8=C_fixnum_difference(t6,t7);
t9=C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=C_string_compare_case_insensitive(t2,t3,t10);
t12=C_eqp(t11,C_fix(0));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_truep(t12)?t8:t11));}

/* f_2406 in k1072 */
static void C_ccall f_2406(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2406,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[61]);
t5=C_i_check_string_2(t3,lf[61]);
t6=C_block_size(t2);
t7=C_block_size(t3);
t8=C_fixnum_difference(t6,t7);
t9=C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=C_mem_compare(t2,t3,t10);
t12=C_eqp(t11,C_fix(0));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_truep(t12)?t8:t11));}

/* f_2378 in k1072 */
static void C_ccall f_2378(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2378r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2378r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2378r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2382,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
/* data-structures.scm:335: ##sys#substring-index-ci */
t6=*((C_word*)lf[59]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,C_fix(0));}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=C_i_car(t4);
/* data-structures.scm:335: ##sys#substring-index-ci */
t8=*((C_word*)lf[59]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,t2,t3,t7);}
else{
/* ##sys#error */
t7=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k2380 */
static void C_ccall f_2382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:335: ##sys#substring-index-ci */
t2=*((C_word*)lf[59]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_2350 in k1072 */
static void C_ccall f_2350(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2350r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2350r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2350r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2354,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
/* data-structures.scm:332: ##sys#substring-index */
t6=*((C_word*)lf[57]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,C_fix(0));}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=C_i_car(t4);
/* data-structures.scm:332: ##sys#substring-index */
t8=*((C_word*)lf[57]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,t2,t3,t7);}
else{
/* ##sys#error */
t7=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k2352 */
static void C_ccall f_2354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:332: ##sys#substring-index */
t2=*((C_word*)lf[57]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_2341 in k1072 */
static void C_ccall f_2341(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2341,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2347,a[2]=t3,a[3]=t2,a[4]=((C_word)li71),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:326: traverse */
f_2285(t1,t2,t3,t4,t5,lf[60]);}

/* a2346 */
static void C_ccall f_2347(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2347,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_substring_compare_case_insensitive(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2,t3));}

/* f_2332 in k1072 */
static void C_ccall f_2332(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2332,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2338,a[2]=t3,a[3]=t2,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:320: traverse */
f_2285(t1,t2,t3,t4,t5,lf[58]);}

/* a2337 */
static void C_ccall f_2338(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2338,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_substring_compare(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2,t3));}

/* traverse in k1072 */
static void C_fcall f_2285(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2285,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=C_i_check_string_2(t2,t6);
t8=C_i_check_string_2(t3,t6);
t9=C_block_size(t3);
t10=C_block_size(t2);
t11=C_i_check_exact_2(t4,t6);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2306,a[2]=t10,a[3]=t5,a[4]=t13,a[5]=t9,a[6]=((C_word)li67),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_2306(t15,t1,t4,t10);}

/* loop in traverse in k1072 */
static void C_fcall f_2306(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2306,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greaterp(t3,((C_word*)t0)[5]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2319,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:314: test */
t5=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t4,t2,((C_word*)t0)[2]);}}

/* k2317 in loop in traverse in k1072 */
static void C_ccall f_2319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:316: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2306(t4,((C_word*)t0)[5],t2,t3);}}

/* f_2237 in k1072 */
static void C_ccall f_2237(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr2r,(void*)f_2237r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2237r(t0,t1,t2);}}

static void C_ccall f_2237r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(16);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[49]+1);
t8=C_i_check_list_2(t2,lf[36]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2248,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2250,a[2]=t7,a[3]=t4,a[4]=t11,a[5]=t6,a[6]=((C_word)li65),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_2250(t13,t9,t2);}

/* map-loop390 */
static void C_fcall f_2250(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2250,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2279,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g396405 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2277 in map-loop390 */
static void C_ccall f_2279(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2279,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2250(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2250(t6,((C_word*)t0)[3],t5);}}

/* k2246 */
static void C_ccall f_2248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[56]+1),t1);}

/* f_2192 in k1072 */
static void C_ccall f_2192(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2192,3,t0,t1,t2);}
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_symbolp(t2))){
/* data-structures.scm:290: symbol->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(3,*((C_word*)lf[50]+1),t1,t2);}
else{
if(C_truep(C_charp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_string(&a,1,t2));}
else{
if(C_truep(C_i_numberp(t2))){
/* data-structures.scm:292: ##sys#number->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[51]+1)))(3,*((C_word*)lf[51]+1),t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2229,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:294: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[54]+1)))(2,*((C_word*)lf[54]+1),t3);}}}}}

/* k2227 */
static void C_ccall f_2229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2229,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2232,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:295: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[53]+1)))(4,*((C_word*)lf[53]+1),t2,((C_word*)t0)[2],t1);}

/* k2230 in k2227 */
static void C_ccall f_2232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:296: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[52]+1)))(3,*((C_word*)lf[52]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_2115 in k1072 */
static void C_ccall f_2115(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2115,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2118,a[2]=t4,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp));
/* data-structures.scm:283: rev-string-append */
t6=((C_word*)t4)[1];
f_2118(t6,t1,t2,C_fix(0));}

/* rev-string-append */
static void C_fcall f_2118(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(10);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2118,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=C_i_string_length(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2134,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=C_i_cdr(t2);
t8=C_a_i_plus(&a,2,t3,t5);
/* data-structures.scm:274: rev-string-append */
t10=t6;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
/* data-structures.scm:281: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[48]+1)))(3,*((C_word*)lf[48]+1),t1,t3);}}

/* k2132 in rev-string-append */
static void C_ccall f_2134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2134,2,t0,t1);}
t2=C_i_string_length(t1);
t3=C_a_i_minus(&a,2,t2,((C_word*)t0)[5]);
t4=C_a_i_minus(&a,2,t3,((C_word*)t0)[4]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2143,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li61),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2143(t8,((C_word*)t0)[2],C_fix(0),t4);}

/* loop in k2132 in rev-string-append */
static void C_fcall f_2143(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2143,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_lessp(t2,((C_word*)t0)[5]))){
t4=C_i_string_ref(((C_word*)t0)[4],t2);
t5=C_i_string_set(((C_word*)t0)[3],t3,t4);
t6=C_a_i_plus(&a,2,t2,C_fix(1));
t7=C_a_i_plus(&a,2,t3,C_fix(1));
/* data-structures.scm:279: loop */
t10=t1;
t11=t6;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t4=((C_word*)t0)[3];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_2065 in k1072 */
static void C_ccall f_2065(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_2065r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2065r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2065r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(8);
t5=C_i_check_list_2(t3,lf[46]);
t6=C_i_pairp(t4);
t7=(C_truep(t6)?C_i_car(t4):*((C_word*)lf[41]+1));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2077,a[2]=t2,a[3]=t7,a[4]=t9,a[5]=((C_word)li59),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2077(t11,t1,t3);}

/* loop */
static void C_fcall f_2077(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2077,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_check_pair_2(t3,lf[46]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2096,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_slot(t3,C_fix(1));
/* data-structures.scm:260: tst */
t7=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t5,((C_word*)t0)[2],t6);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2094 in loop */
static void C_ccall f_2096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:262: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2077(t3,((C_word*)t0)[5],t2);}}

/* f_1950 in k1072 */
static void C_ccall f_1950(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_1950r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1950r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1950r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(10);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?*((C_word*)lf[41]+1):C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
if(C_truep(C_i_nullp(t12))){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1972,a[2]=t3,a[3]=t2,a[4]=t10,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t14=C_eqp(*((C_word*)lf[39]+1),t6);
if(C_truep(t14)){
t15=t13;
f_1972(t15,*((C_word*)lf[40]+1));}
else{
t15=C_eqp(*((C_word*)lf[41]+1),t6);
if(C_truep(t15)){
t16=*((C_word*)lf[42]+1);
t17=t13;
f_1972(t17,t16);}
else{
t16=C_eqp(*((C_word*)lf[43]+1),t6);
t17=t13;
f_1972(t17,(C_truep(t16)?*((C_word*)lf[44]+1):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1997,a[2]=t6,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp)));}}}
else{
/* ##sys#error */
t13=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t1,lf[0],t12);}}

/* f_1997 */
static void C_ccall f_1997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1997,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2003,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word)li56),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2003(t7,t1,t3);}

/* loop */
static void C_fcall f_2003(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2003,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2019,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t3))){
t5=C_slot(t3,C_fix(0));
/* data-structures.scm:245: cmp */
t6=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,t5,((C_word*)t0)[2]);}
else{
t5=t4;
f_2019(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2017 in loop */
static void C_ccall f_2019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:247: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2003(t3,((C_word*)t0)[5],t2);}}

/* k1970 */
static void C_fcall f_1972(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1972,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1975,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:248: aq */
t3=t1;
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1973 in k1970 */
static void C_ccall f_1975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_slot(t1,C_fix(1)):((C_word*)t0)[2]));}

/* f_1851 in k1072 */
static void C_ccall f_1851(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr5r,(void*)f_1851r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_1851r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_1851r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1855,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t5))){
t7=t6;
f_1855(2,t7,*((C_word*)lf[41]+1));}
else{
t7=C_i_cdr(t5);
if(C_truep(C_i_nullp(t7))){
t8=t6;
f_1855(2,t8,C_i_car(t5));}
else{
/* ##sys#error */
t8=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,lf[0],t5);}}}

/* k1853 */
static void C_ccall f_1855(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1855,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1858,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(*((C_word*)lf[39]+1),t1);
if(C_truep(t3)){
t4=t2;
f_1858(t4,*((C_word*)lf[40]+1));}
else{
t4=C_eqp(*((C_word*)lf[41]+1),t1);
if(C_truep(t4)){
t5=*((C_word*)lf[42]+1);
t6=t2;
f_1858(t6,t5);}
else{
t5=C_eqp(*((C_word*)lf[43]+1),t1);
t6=t2;
f_1858(t6,(C_truep(t5)?*((C_word*)lf[44]+1):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1890,a[2]=t1,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp)));}}}

/* f_1890 in k1853 */
static void C_ccall f_1890(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1890,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1896,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1896(t7,t1,t3);}

/* loop */
static void C_fcall f_1896(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1896,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1912,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t3))){
t5=C_slot(t3,C_fix(0));
/* data-structures.scm:226: cmp */
t6=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,t5,((C_word*)t0)[2]);}
else{
t5=t4;
f_1912(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1910 in loop */
static void C_ccall f_1912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:228: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1896(t3,((C_word*)t0)[5],t2);}}

/* k1856 in k1853 */
static void C_fcall f_1858(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1858,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1861,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:229: aq */
t3=t1;
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k1859 in k1856 in k1853 */
static void C_ccall f_1861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1861,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_setslot(t1,C_fix(1),((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[5]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t2,((C_word*)t0)[4]));}}

/* f_1736 in k1072 */
static void C_ccall f_1736(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[31],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1736,4,t0,t1,t2,t3);}
t4=C_i_length(t2);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[35]+1);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1743,a[2]=t1,a[3]=t9,a[4]=t6,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1786,a[2]=t4,a[3]=t3,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
t16=t2;
t17=C_i_check_list_2(t16,lf[36]);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1800,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1816,a[2]=t15,a[3]=t12,a[4]=t20,a[5]=t14,a[6]=((C_word)li51),tmp=(C_word)a,a+=7,tmp));
t22=((C_word*)t20)[1];
f_1816(t22,t18,t16);}

/* map-loop256 */
static void C_fcall f_1816(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1816,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1845,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g262271 */
t5=((C_word*)t0)[2];
f_1786(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1843 in map-loop256 */
static void C_ccall f_1845(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1845,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1816(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1816(t6,((C_word*)t0)[3],t5);}}

/* k1798 */
static void C_ccall f_1800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1802,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* data-structures.scm:211: sort! */
t3=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* a1801 in k1798 */
static void C_ccall f_1802(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1802,4,t0,t1,t2,t3);}
t4=C_i_car(t2);
t5=C_i_car(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_lessp(t4,t5));}

/* g262 */
static void C_fcall f_1786(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1786,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1794,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:211: random */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k1792 in g262 */
static void C_ccall f_1794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1794,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k1741 */
static void C_ccall f_1743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1743,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[36]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1751,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],a[6]=((C_word)li48),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1751(t6,((C_word*)t0)[2],t1);}

/* map-loop237 in k1741 */
static void C_fcall f_1751(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1751,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1780,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g243252 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1778 in map-loop237 in k1741 */
static void C_ccall f_1780(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1780,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1751(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1751(t6,((C_word*)t0)[3],t5);}}

/* f_1656 in k1072 */
static void C_ccall f_1656(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_1656,4,t0,t1,t2,t3);}
t4=lf[31];
t5=C_i_check_list_2(t3,lf[30]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1665,a[2]=t4,a[3]=t7,a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1665(t9,t1,t2,t3);}

/* loop */
static void C_fcall f_1665(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1665,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_i_pairp(t2))){
if(C_truep(C_i_pairp(t3))){
if(C_truep(C_slot(t2,C_fix(0)))){
t4=C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1707,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_slot(t2,C_fix(1));
t7=C_slot(t3,C_fix(1));
/* data-structures.scm:204: loop */
t11=t5;
t12=t6;
t13=t7;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t3,C_fix(1));
/* data-structures.scm:205: loop */
t11=t1;
t12=t4;
t13=t5;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}
else{
/* data-structures.scm:202: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[32]+1)))(6,*((C_word*)lf[32]+1),t1,lf[33],lf[30],((C_word*)t0)[2],t3);}}
else{
/* data-structures.scm:200: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[32]+1)))(6,*((C_word*)lf[32]+1),t1,lf[33],lf[30],((C_word*)t0)[2],t2);}}}

/* k1705 in loop */
static void C_ccall f_1707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1707,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* f_1597 in k1072 */
static void C_ccall f_1597(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_1597r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1597r(t0,t1,t2,t3);}}

static void C_ccall f_1597r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(7);
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_i_car(t3):C_SCHEME_END_OF_LIST);
t6=C_i_check_list_2(t5,lf[27]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1609,a[2]=t8,a[3]=t5,a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1609(t10,t1,t2);}

/* loop */
static void C_fcall f_1609(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1609,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
if(C_truep(C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1644,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:191: loop */
t7=t5;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}
else{
/* data-structures.scm:185: ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(3,*((C_word*)lf[29]+1),t1,t2);}}}

/* k1642 in loop */
static void C_ccall f_1644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:191: ##sys#append */
t2=*((C_word*)lf[28]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_1512 in k1072 */
static void C_ccall f_1512(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1512,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t3,lf[23]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1519,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
/* data-structures.scm:167: ##sys#error */
t6=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[23],lf[26],t3);}
else{
t6=t5;
f_1519(2,t6,C_SCHEME_UNDEFINED);}}

/* k1517 */
static void C_ccall f_1519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1519,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[4]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1527,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1527(t6,((C_word*)t0)[2],((C_word*)t0)[4],t2);}

/* loop in k1517 */
static void C_fcall f_1527(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1527,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_fixnum_lessp(t3,((C_word*)t0)[3]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list1(&a,1,t2));}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1548,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1548(t7,t1,C_SCHEME_END_OF_LIST,t2,((C_word*)t0)[3]);}}}

/* doloop197 in loop in k1517 */
static void C_fcall f_1548(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(7);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1548,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1562,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:177: reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(3,*((C_word*)lf[24]+1),t6,t2);}
else{
t6=C_slot(t3,C_fix(0));
t7=C_a_i_cons(&a,2,t6,t2);
t8=C_slot(t3,C_fix(1));
t9=C_fixnum_difference(t4,C_fix(1));
t12=t1;
t13=t7;
t14=t8;
t15=t9;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
goto loop;}}

/* k1560 in doloop197 in loop in k1517 */
static void C_ccall f_1562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1562,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1566,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* data-structures.scm:177: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1527(t4,t2,((C_word*)t0)[2],t3);}

/* k1564 in k1560 in doloop197 in loop in k1517 */
static void C_ccall f_1566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1566,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* f_1471 in k1072 */
static void C_ccall f_1471(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1471r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1471r(t0,t1,t2);}}

static void C_ccall f_1471r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1477,a[2]=t4,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1477(t6,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop */
static void C_fcall f_1477(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1477,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t2,C_fix(1));
if(C_truep(C_i_listp(t4))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1503,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:161: loop */
t10=t6;
t11=t5;
t12=t3;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1510,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:162: loop */
t10=t6;
t11=t5;
t12=t3;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}}

/* k1508 in loop */
static void C_ccall f_1510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1510,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k1501 in loop */
static void C_ccall f_1503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:161: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1477(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_1439 in k1072 */
static void C_ccall f_1439(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1439,3,t0,t1,t2);}
t3=C_i_check_pair_2(t2,lf[21]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1448,a[2]=t5,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1448(t7,t1,t2);}

/* loop */
static void C_fcall f_1448(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1448,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=(C_truep(C_blockp(t3))?C_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_slot(t2,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1469,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:151: loop */
t8=t6;
t9=t3;
t1=t8;
t2=t9;
goto loop;}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}}

/* k1467 in loop */
static void C_ccall f_1469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1469,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* f_1406 in k1072 */
static void C_ccall f_1406(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1406,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1412,a[2]=t5,a[3]=t3,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1412(t7,t1,t2);}

/* loop */
static void C_fcall f_1412(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1412,NULL,3,t0,t1,t2);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_cdr(t2);
if(C_truep(C_eqp(t3,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1437,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:144: loop */
t8=t5;
t9=t3;
t1=t8;
t2=t9;
goto loop;}}}

/* k1435 in loop */
static void C_ccall f_1437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1437,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* f_1378 in k1072 */
static void C_ccall f_1378(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1378,4,t0,t1,t2,t3);}
t4=C_i_check_list_2(t3,lf[19]);
t5=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1390,a[2]=t2,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,f_1390(t6,t3));}}

/* loop */
static C_word C_fcall f_1390(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
loop:
if(C_truep(C_eqp(t1,C_SCHEME_END_OF_LIST))){
return(C_SCHEME_FALSE);}
else{
if(C_truep(C_eqp(((C_word*)t0)[2],t1))){
return(C_SCHEME_TRUE);}
else{
t2=C_slot(t1,C_fix(1));
t4=t2;
t1=t4;
goto loop;}}}

/* f_1375 in k1072 */
static void C_ccall f_1375(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1375,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_not_pair_p(t2));}

/* f_1372 in k1072 */
static void C_ccall f_1372(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1372,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_1369 in k1072 */
static void C_ccall f_1369(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1369,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_1366 in k1072 */
static void C_ccall f_1366(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1366,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* f_1363 in k1072 */
static void C_ccall f_1363(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1363,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* f_1307 in k1072 */
static void C_ccall f_1307(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1307r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1307r(t0,t1,t2);}}

static void C_ccall f_1307r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1315,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_slot(t2,C_fix(1));
t4=C_i_nullp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?C_slot(t2,C_fix(0)):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1329,a[2]=t2,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp)));}}

/* f_1329 */
static void C_ccall f_1329(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_1329r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1329r(t0,t1,t2);}}

static void C_ccall f_1329r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1335,a[2]=t4,a[3]=t2,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1335(t6,t1,((C_word*)t0)[2]);}

/* loop */
static void C_fcall f_1335(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1335,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
if(C_truep(C_i_nullp(t4))){
C_apply(4,0,t1,t3,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1354,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t5,t3,((C_word*)t0)[3]);}}

/* k1352 in loop */
static void C_ccall f_1354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:113: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1335(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_1315 */
static void C_ccall f_1315(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1315,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[13]+1));}

/* f_1267 in k1072 */
static void C_ccall f_1267(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1267,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1269,a[2]=t2,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp));}

/* f_1269 */
static void C_ccall f_1269(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1269,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1275,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1275(t6,t1,t2);}

/* loop */
static void C_fcall f_1275(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1275,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}
else{
if(C_truep(C_i_not_pair_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1294,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* data-structures.scm:98: pred */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}}}

/* k1292 in loop */
static void C_ccall f_1294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:98: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1275(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_1228 in k1072 */
static void C_ccall f_1228(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1228r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1228r(t0,t1,t2);}}

static void C_ccall f_1228r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=*((C_word*)lf[2]+1);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1240,a[2]=t4,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1240(t6,t1,t2);}}

/* loop */
static void C_fcall f_1240(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1240,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
if(C_truep(C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1254,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word)li18),tmp=(C_word)a,a+=6,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* f_1254 in loop */
static void C_ccall f_1254(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1254,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1262,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:91: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1240(t4,t3,((C_word*)t0)[2]);}

/* k1260 */
static void C_ccall f_1262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1262,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1265,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* g113114 */
t3=t1;
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k1263 in k1260 */
static void C_ccall f_1265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm:91: h */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* f_1192 in k1072 */
static void C_ccall f_1192(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1192r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1192r(t0,t1,t2);}}

static void C_ccall f_1192r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1195,a[2]=t4,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp));
if(C_truep(C_i_nullp(t2))){
t6=*((C_word*)lf[9]+1);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
C_apply(4,0,t1,((C_word*)t4)[1],t2);}}

/* rec */
static void C_ccall f_1195(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1195r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1195r(t0,t1,t2,t3);}}

static void C_ccall f_1195r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1203,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_1203 in rec */
static void C_ccall f_1203(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1203r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1203r(t0,t1,t2);}}

static void C_ccall f_1203r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1209,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:76: call-with-values */
C_call_with_values(4,0,t1,t3,((C_word*)t0)[2]);}

/* a1208 */
static void C_ccall f_1209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1217,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* k1215 in a1208 */
static void C_ccall f_1217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* f_1180 in k1072 */
static void C_ccall f_1180(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1180,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1182,a[2]=t2,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));}

/* f_1182 */
static void C_ccall f_1182(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1182r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1182r(t0,t1,t2);}}

static void C_ccall f_1182r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1190,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_apply(4,0,t3,((C_word*)t0)[2],t2);}

/* k1188 */
static void C_ccall f_1190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_not(t1));}

/* f_1172 in k1072 */
static void C_ccall f_1172(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1172,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1174,a[2]=t2,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));}

/* f_1174 */
static void C_ccall f_1174(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1174,4,t0,t1,t2,t3);}
/* data-structures.scm:65: proc */
t4=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,t3,t2);}

/* f_1149 in k1072 */
static void C_ccall f_1149(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1149r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1149r(t0,t1,t2);}}

static void C_ccall f_1149r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t3=C_i_length(t2);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1160,a[2]=t5,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1162,a[2]=t2,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* f_1162 */
static void C_ccall f_1162(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1162,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* f_1160 */
static void C_ccall f_1160(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1160,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_1112 in k1072 */
static void C_ccall f_1112(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1112r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1112r(t0,t1,t2);}}

static void C_ccall f_1112r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a=C_alloc(4);
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1114,a[2]=t2,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));}

/* f_1114 */
static void C_ccall f_1114(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1114,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1120,a[2]=t2,a[3]=t4,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1120(t6,t1,((C_word*)t0)[2]);}

/* loop */
static void C_fcall f_1120(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1120,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1133,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* g8485 */
t5=t3;
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[2]);}}

/* k1131 in loop */
static void C_ccall f_1133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:57: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1120(t3,((C_word*)t0)[4],t2);}}

/* f_1079 in k1072 */
static void C_ccall f_1079(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1079r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1079r(t0,t1,t2);}}

static void C_ccall f_1079r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a=C_alloc(4);
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1081,a[2]=t2,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));}

/* f_1081 */
static void C_ccall f_1081(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1081,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1087,a[2]=t2,a[3]=t4,a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1087(t6,t1,((C_word*)t0)[2]);}

/* loop */
static void C_fcall f_1087(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1087,NULL,3,t0,t1,t2);}
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1103,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* g7273 */
t6=t4;
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}}

/* k1101 in loop */
static void C_ccall f_1103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:50: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1087(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_1076 in k1072 */
static void C_ccall f_1076(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1076,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[238] = {
{"toplevel:data_2dstructures_2escm",(void*)C_data_2dstructures_toplevel},
{"f_1074:data_2dstructures_2escm",(void*)f_1074},
{"f_4450:data_2dstructures_2escm",(void*)f_4450},
{"f_4460:data_2dstructures_2escm",(void*)f_4460},
{"f_4479:data_2dstructures_2escm",(void*)f_4479},
{"f_4421:data_2dstructures_2escm",(void*)f_4421},
{"f_4367:data_2dstructures_2escm",(void*)f_4367},
{"f_4386:data_2dstructures_2escm",(void*)f_4386},
{"f_4396:data_2dstructures_2escm",(void*)f_4396},
{"f_4378:data_2dstructures_2escm",(void*)f_4378},
{"f_4358:data_2dstructures_2escm",(void*)f_4358},
{"f_4322:data_2dstructures_2escm",(void*)f_4322},
{"f_4332:data_2dstructures_2escm",(void*)f_4332},
{"f_4290:data_2dstructures_2escm",(void*)f_4290},
{"f_4269:data_2dstructures_2escm",(void*)f_4269},
{"f_4279:data_2dstructures_2escm",(void*)f_4279},
{"f_4248:data_2dstructures_2escm",(void*)f_4248},
{"f_4258:data_2dstructures_2escm",(void*)f_4258},
{"f_4235:data_2dstructures_2escm",(void*)f_4235},
{"f_4229:data_2dstructures_2escm",(void*)f_4229},
{"f_4223:data_2dstructures_2escm",(void*)f_4223},
{"f_4140:data_2dstructures_2escm",(void*)f_4140},
{"f_4218:data_2dstructures_2escm",(void*)f_4218},
{"f_4144:data_2dstructures_2escm",(void*)f_4144},
{"f_4158:data_2dstructures_2escm",(void*)f_4158},
{"f_4168:data_2dstructures_2escm",(void*)f_4168},
{"f_3870:data_2dstructures_2escm",(void*)f_3870},
{"f_4117:data_2dstructures_2escm",(void*)f_4117},
{"f_4127:data_2dstructures_2escm",(void*)f_4127},
{"f_4042:data_2dstructures_2escm",(void*)f_4042},
{"f_4045:data_2dstructures_2escm",(void*)f_4045},
{"f_4086:data_2dstructures_2escm",(void*)f_4086},
{"f_4096:data_2dstructures_2escm",(void*)f_4096},
{"f_4084:data_2dstructures_2escm",(void*)f_4084},
{"f_4046:data_2dstructures_2escm",(void*)f_4046},
{"f_4050:data_2dstructures_2escm",(void*)f_4050},
{"f_4021:data_2dstructures_2escm",(void*)f_4021},
{"f_3961:data_2dstructures_2escm",(void*)f_3961},
{"f_3965:data_2dstructures_2escm",(void*)f_3965},
{"f_3999:data_2dstructures_2escm",(void*)f_3999},
{"f_4009:data_2dstructures_2escm",(void*)f_4009},
{"f_3993:data_2dstructures_2escm",(void*)f_3993},
{"f_3966:data_2dstructures_2escm",(void*)f_3966},
{"f_3970:data_2dstructures_2escm",(void*)f_3970},
{"f_3926:data_2dstructures_2escm",(void*)f_3926},
{"f_3932:data_2dstructures_2escm",(void*)f_3932},
{"f_3945:data_2dstructures_2escm",(void*)f_3945},
{"f_3879:data_2dstructures_2escm",(void*)f_3879},
{"f_3885:data_2dstructures_2escm",(void*)f_3885},
{"f_3906:data_2dstructures_2escm",(void*)f_3906},
{"f_3843:data_2dstructures_2escm",(void*)f_3843},
{"f_3868:data_2dstructures_2escm",(void*)f_3868},
{"f_3861:data_2dstructures_2escm",(void*)f_3861},
{"f_3857:data_2dstructures_2escm",(void*)f_3857},
{"f_3710:data_2dstructures_2escm",(void*)f_3710},
{"f_3800:data_2dstructures_2escm",(void*)f_3800},
{"f_3807:data_2dstructures_2escm",(void*)f_3807},
{"f_3809:data_2dstructures_2escm",(void*)f_3809},
{"f_3713:data_2dstructures_2escm",(void*)f_3713},
{"f_3764:data_2dstructures_2escm",(void*)f_3764},
{"f_3723:data_2dstructures_2escm",(void*)f_3723},
{"f_3726:data_2dstructures_2escm",(void*)f_3726},
{"f_3732:data_2dstructures_2escm",(void*)f_3732},
{"f_3578:data_2dstructures_2escm",(void*)f_3578},
{"f_3660:data_2dstructures_2escm",(void*)f_3660},
{"f_3683:data_2dstructures_2escm",(void*)f_3683},
{"f_3663:data_2dstructures_2escm",(void*)f_3663},
{"f_3581:data_2dstructures_2escm",(void*)f_3581},
{"f_3588:data_2dstructures_2escm",(void*)f_3588},
{"f_3479:data_2dstructures_2escm",(void*)f_3479},
{"f_3513:data_2dstructures_2escm",(void*)f_3513},
{"f_3520:data_2dstructures_2escm",(void*)f_3520},
{"f_3568:data_2dstructures_2escm",(void*)f_3568},
{"f_3540:data_2dstructures_2escm",(void*)f_3540},
{"f_3370:data_2dstructures_2escm",(void*)f_3370},
{"f_3445:data_2dstructures_2escm",(void*)f_3445},
{"f_3473:data_2dstructures_2escm",(void*)f_3473},
{"f_3397:data_2dstructures_2escm",(void*)f_3397},
{"f_3407:data_2dstructures_2escm",(void*)f_3407},
{"f_3318:data_2dstructures_2escm",(void*)f_3318},
{"f_3322:data_2dstructures_2escm",(void*)f_3322},
{"f_3254:data_2dstructures_2escm",(void*)f_3254},
{"f_3269:data_2dstructures_2escm",(void*)f_3269},
{"f_3300:data_2dstructures_2escm",(void*)f_3300},
{"f_3304:data_2dstructures_2escm",(void*)f_3304},
{"f_3289:data_2dstructures_2escm",(void*)f_3289},
{"f_3132:data_2dstructures_2escm",(void*)f_3132},
{"f_3144:data_2dstructures_2escm",(void*)f_3144},
{"f_3177:data_2dstructures_2escm",(void*)f_3177},
{"f_3242:data_2dstructures_2escm",(void*)f_3242},
{"f_3216:data_2dstructures_2escm",(void*)f_3216},
{"f_3172:data_2dstructures_2escm",(void*)f_3172},
{"f_3158:data_2dstructures_2escm",(void*)f_3158},
{"f_2930:data_2dstructures_2escm",(void*)f_2930},
{"f_3124:data_2dstructures_2escm",(void*)f_3124},
{"f_3107:data_2dstructures_2escm",(void*)f_3107},
{"f_2967:data_2dstructures_2escm",(void*)f_2967},
{"f_2970:data_2dstructures_2escm",(void*)f_2970},
{"f_2982:data_2dstructures_2escm",(void*)f_2982},
{"f_2987:data_2dstructures_2escm",(void*)f_2987},
{"f_3006:data_2dstructures_2escm",(void*)f_3006},
{"f_2933:data_2dstructures_2escm",(void*)f_2933},
{"f_2938:data_2dstructures_2escm",(void*)f_2938},
{"f_2944:data_2dstructures_2escm",(void*)f_2944},
{"f_2815:data_2dstructures_2escm",(void*)f_2815},
{"f_2819:data_2dstructures_2escm",(void*)f_2819},
{"f_2833:data_2dstructures_2escm",(void*)f_2833},
{"f_2843:data_2dstructures_2escm",(void*)f_2843},
{"f_2848:data_2dstructures_2escm",(void*)f_2848},
{"f_2680:data_2dstructures_2escm",(void*)f_2680},
{"f_2721:data_2dstructures_2escm",(void*)f_2721},
{"f_2748:data_2dstructures_2escm",(void*)f_2748},
{"f_2787:data_2dstructures_2escm",(void*)f_2787},
{"f_2731:data_2dstructures_2escm",(void*)f_2731},
{"f_2701:data_2dstructures_2escm",(void*)f_2701},
{"f_2716:data_2dstructures_2escm",(void*)f_2716},
{"f_2611:data_2dstructures_2escm",(void*)f_2611},
{"f_2574:data_2dstructures_2escm",(void*)f_2574},
{"f_2584:data_2dstructures_2escm",(void*)f_2584},
{"f_2505:data_2dstructures_2escm",(void*)f_2505},
{"f_2468:data_2dstructures_2escm",(void*)f_2468},
{"f_2478:data_2dstructures_2escm",(void*)f_2478},
{"f_2437:data_2dstructures_2escm",(void*)f_2437},
{"f_2406:data_2dstructures_2escm",(void*)f_2406},
{"f_2378:data_2dstructures_2escm",(void*)f_2378},
{"f_2382:data_2dstructures_2escm",(void*)f_2382},
{"f_2350:data_2dstructures_2escm",(void*)f_2350},
{"f_2354:data_2dstructures_2escm",(void*)f_2354},
{"f_2341:data_2dstructures_2escm",(void*)f_2341},
{"f_2347:data_2dstructures_2escm",(void*)f_2347},
{"f_2332:data_2dstructures_2escm",(void*)f_2332},
{"f_2338:data_2dstructures_2escm",(void*)f_2338},
{"f_2285:data_2dstructures_2escm",(void*)f_2285},
{"f_2306:data_2dstructures_2escm",(void*)f_2306},
{"f_2319:data_2dstructures_2escm",(void*)f_2319},
{"f_2237:data_2dstructures_2escm",(void*)f_2237},
{"f_2250:data_2dstructures_2escm",(void*)f_2250},
{"f_2279:data_2dstructures_2escm",(void*)f_2279},
{"f_2248:data_2dstructures_2escm",(void*)f_2248},
{"f_2192:data_2dstructures_2escm",(void*)f_2192},
{"f_2229:data_2dstructures_2escm",(void*)f_2229},
{"f_2232:data_2dstructures_2escm",(void*)f_2232},
{"f_2115:data_2dstructures_2escm",(void*)f_2115},
{"f_2118:data_2dstructures_2escm",(void*)f_2118},
{"f_2134:data_2dstructures_2escm",(void*)f_2134},
{"f_2143:data_2dstructures_2escm",(void*)f_2143},
{"f_2065:data_2dstructures_2escm",(void*)f_2065},
{"f_2077:data_2dstructures_2escm",(void*)f_2077},
{"f_2096:data_2dstructures_2escm",(void*)f_2096},
{"f_1950:data_2dstructures_2escm",(void*)f_1950},
{"f_1997:data_2dstructures_2escm",(void*)f_1997},
{"f_2003:data_2dstructures_2escm",(void*)f_2003},
{"f_2019:data_2dstructures_2escm",(void*)f_2019},
{"f_1972:data_2dstructures_2escm",(void*)f_1972},
{"f_1975:data_2dstructures_2escm",(void*)f_1975},
{"f_1851:data_2dstructures_2escm",(void*)f_1851},
{"f_1855:data_2dstructures_2escm",(void*)f_1855},
{"f_1890:data_2dstructures_2escm",(void*)f_1890},
{"f_1896:data_2dstructures_2escm",(void*)f_1896},
{"f_1912:data_2dstructures_2escm",(void*)f_1912},
{"f_1858:data_2dstructures_2escm",(void*)f_1858},
{"f_1861:data_2dstructures_2escm",(void*)f_1861},
{"f_1736:data_2dstructures_2escm",(void*)f_1736},
{"f_1816:data_2dstructures_2escm",(void*)f_1816},
{"f_1845:data_2dstructures_2escm",(void*)f_1845},
{"f_1800:data_2dstructures_2escm",(void*)f_1800},
{"f_1802:data_2dstructures_2escm",(void*)f_1802},
{"f_1786:data_2dstructures_2escm",(void*)f_1786},
{"f_1794:data_2dstructures_2escm",(void*)f_1794},
{"f_1743:data_2dstructures_2escm",(void*)f_1743},
{"f_1751:data_2dstructures_2escm",(void*)f_1751},
{"f_1780:data_2dstructures_2escm",(void*)f_1780},
{"f_1656:data_2dstructures_2escm",(void*)f_1656},
{"f_1665:data_2dstructures_2escm",(void*)f_1665},
{"f_1707:data_2dstructures_2escm",(void*)f_1707},
{"f_1597:data_2dstructures_2escm",(void*)f_1597},
{"f_1609:data_2dstructures_2escm",(void*)f_1609},
{"f_1644:data_2dstructures_2escm",(void*)f_1644},
{"f_1512:data_2dstructures_2escm",(void*)f_1512},
{"f_1519:data_2dstructures_2escm",(void*)f_1519},
{"f_1527:data_2dstructures_2escm",(void*)f_1527},
{"f_1548:data_2dstructures_2escm",(void*)f_1548},
{"f_1562:data_2dstructures_2escm",(void*)f_1562},
{"f_1566:data_2dstructures_2escm",(void*)f_1566},
{"f_1471:data_2dstructures_2escm",(void*)f_1471},
{"f_1477:data_2dstructures_2escm",(void*)f_1477},
{"f_1510:data_2dstructures_2escm",(void*)f_1510},
{"f_1503:data_2dstructures_2escm",(void*)f_1503},
{"f_1439:data_2dstructures_2escm",(void*)f_1439},
{"f_1448:data_2dstructures_2escm",(void*)f_1448},
{"f_1469:data_2dstructures_2escm",(void*)f_1469},
{"f_1406:data_2dstructures_2escm",(void*)f_1406},
{"f_1412:data_2dstructures_2escm",(void*)f_1412},
{"f_1437:data_2dstructures_2escm",(void*)f_1437},
{"f_1378:data_2dstructures_2escm",(void*)f_1378},
{"f_1390:data_2dstructures_2escm",(void*)f_1390},
{"f_1375:data_2dstructures_2escm",(void*)f_1375},
{"f_1372:data_2dstructures_2escm",(void*)f_1372},
{"f_1369:data_2dstructures_2escm",(void*)f_1369},
{"f_1366:data_2dstructures_2escm",(void*)f_1366},
{"f_1363:data_2dstructures_2escm",(void*)f_1363},
{"f_1307:data_2dstructures_2escm",(void*)f_1307},
{"f_1329:data_2dstructures_2escm",(void*)f_1329},
{"f_1335:data_2dstructures_2escm",(void*)f_1335},
{"f_1354:data_2dstructures_2escm",(void*)f_1354},
{"f_1315:data_2dstructures_2escm",(void*)f_1315},
{"f_1267:data_2dstructures_2escm",(void*)f_1267},
{"f_1269:data_2dstructures_2escm",(void*)f_1269},
{"f_1275:data_2dstructures_2escm",(void*)f_1275},
{"f_1294:data_2dstructures_2escm",(void*)f_1294},
{"f_1228:data_2dstructures_2escm",(void*)f_1228},
{"f_1240:data_2dstructures_2escm",(void*)f_1240},
{"f_1254:data_2dstructures_2escm",(void*)f_1254},
{"f_1262:data_2dstructures_2escm",(void*)f_1262},
{"f_1265:data_2dstructures_2escm",(void*)f_1265},
{"f_1192:data_2dstructures_2escm",(void*)f_1192},
{"f_1195:data_2dstructures_2escm",(void*)f_1195},
{"f_1203:data_2dstructures_2escm",(void*)f_1203},
{"f_1209:data_2dstructures_2escm",(void*)f_1209},
{"f_1217:data_2dstructures_2escm",(void*)f_1217},
{"f_1180:data_2dstructures_2escm",(void*)f_1180},
{"f_1182:data_2dstructures_2escm",(void*)f_1182},
{"f_1190:data_2dstructures_2escm",(void*)f_1190},
{"f_1172:data_2dstructures_2escm",(void*)f_1172},
{"f_1174:data_2dstructures_2escm",(void*)f_1174},
{"f_1149:data_2dstructures_2escm",(void*)f_1149},
{"f_1162:data_2dstructures_2escm",(void*)f_1162},
{"f_1160:data_2dstructures_2escm",(void*)f_1160},
{"f_1112:data_2dstructures_2escm",(void*)f_1112},
{"f_1114:data_2dstructures_2escm",(void*)f_1114},
{"f_1120:data_2dstructures_2escm",(void*)f_1120},
{"f_1133:data_2dstructures_2escm",(void*)f_1133},
{"f_1079:data_2dstructures_2escm",(void*)f_1079},
{"f_1081:data_2dstructures_2escm",(void*)f_1081},
{"f_1087:data_2dstructures_2escm",(void*)f_1087},
{"f_1103:data_2dstructures_2escm",(void*)f_1103},
{"f_1076:data_2dstructures_2escm",(void*)f_1076},
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
