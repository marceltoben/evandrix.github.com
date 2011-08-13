/* Generated from srfi-4.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: srfi-4.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file srfi-4.c
   unit: srfi_2d4
*/

#include "chicken.h"

#define C_copy_subvector(to, from, start_to, start_from, bytes)   \
  (C_memcpy((C_char *)C_data_pointer(to) + C_unfix(start_to), (C_char *)C_data_pointer(from) + C_unfix(start_from), C_unfix(bytes)), \
    C_SCHEME_UNDEFINED)

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[169];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,50),40,35,35,115,121,115,35,99,104,101,99,107,45,101,120,97,99,116,45,105,110,116,101,114,118,97,108,32,110,54,50,32,102,114,111,109,54,51,32,116,111,54,52,32,108,111,99,54,53,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,12),40,102,95,49,50,51,48,32,120,55,49,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,12),40,102,95,49,50,51,54,32,120,55,52,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,12),40,102,95,49,50,52,50,32,120,55,55,41,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,12),40,102,95,49,50,52,56,32,120,56,48,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,12),40,102,95,49,50,53,52,32,120,56,51,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,12),40,102,95,49,50,54,48,32,120,56,54,41,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,12),40,102,95,49,50,54,54,32,120,56,57,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,12),40,102,95,49,50,55,50,32,120,57,50,41,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,20),40,102,95,49,50,55,56,32,120,57,53,32,105,57,54,32,121,57,55,41,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,23),40,102,95,49,51,49,57,32,120,49,49,51,32,105,49,49,52,32,121,49,49,53,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,23),40,102,95,49,51,53,49,32,120,49,51,48,32,105,49,51,49,32,121,49,51,50,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,23),40,102,95,49,51,57,50,32,120,49,52,56,32,105,49,52,57,32,121,49,53,48,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,23),40,102,95,49,52,50,52,32,120,49,54,53,32,105,49,54,54,32,121,49,54,55,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,23),40,102,95,49,52,55,56,32,120,49,56,54,32,105,49,56,55,32,121,49,56,56,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,23),40,102,95,49,53,49,57,32,120,50,48,52,32,105,50,48,53,32,121,50,48,54,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,23),40,102,95,49,53,53,53,32,120,50,50,49,32,105,50,50,50,32,121,50,50,51,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,18),40,101,120,116,45,102,114,101,101,32,97,51,54,51,51,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,29),40,97,108,108,111,99,32,108,111,99,51,54,56,32,108,101,110,51,54,57,32,101,120,116,63,51,55,48,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,13),40,102,95,49,54,52,56,32,118,51,55,55,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,48,48,41,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,27),40,102,95,49,54,55,51,32,108,101,110,51,56,52,32,46,32,116,109,112,51,56,51,51,56,53,41,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,51,48,41,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,27),40,102,95,49,55,55,57,32,108,101,110,52,49,52,32,46,32,116,109,112,52,49,51,52,49,53,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,53,57,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,27),40,102,95,49,56,56,53,32,108,101,110,52,52,51,32,46,32,116,109,112,52,52,50,52,52,52,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,56,56,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,27),40,102,95,49,57,57,49,32,108,101,110,52,55,50,32,46,32,116,109,112,52,55,49,52,55,51,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,49,55,41,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,27),40,102,95,50,48,57,55,32,108,101,110,53,48,49,32,46,32,116,109,112,53,48,48,53,48,50,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,52,54,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,27),40,102,95,50,50,48,51,32,108,101,110,53,51,48,32,46,32,116,109,112,53,50,57,53,51,49,41,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,55,53,41,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,27),40,102,95,50,51,48,57,32,108,101,110,53,53,57,32,46,32,116,109,112,53,53,56,53,54,48,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,54,48,53,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,27),40,102,95,50,52,49,57,32,108,101,110,53,56,57,32,46,32,116,109,112,53,56,56,53,57,48,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,51,56,32,112,54,52,48,32,105,54,52,49,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,15),40,102,95,50,53,50,57,32,108,115,116,54,51,53,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,53,49,32,112,54,53,51,32,105,54,53,52,41,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,15),40,102,95,50,53,54,50,32,108,115,116,54,52,56,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,54,52,32,112,54,54,54,32,105,54,54,55,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,15),40,102,95,50,53,57,53,32,108,115,116,54,54,49,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,55,55,32,112,54,55,57,32,105,54,56,48,41,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,15),40,102,95,50,54,50,56,32,108,115,116,54,55,52,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,57,48,32,112,54,57,50,32,105,54,57,51,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,15),40,102,95,50,54,54,49,32,108,115,116,54,56,55,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,55,48,51,32,112,55,48,53,32,105,55,48,54,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,15),40,102,95,50,54,57,52,32,108,115,116,55,48,48,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,55,49,54,32,112,55,49,56,32,105,55,49,57,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,15),40,102,95,50,55,50,55,32,108,115,116,55,49,51,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,55,50,57,32,112,55,51,49,32,105,55,51,50,41,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,15),40,102,95,50,55,54,48,32,108,115,116,55,50,54,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,16),40,102,95,50,55,57,51,32,46,32,120,115,55,51,56,41};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,16),40,102,95,50,55,57,57,32,46,32,120,115,55,52,48,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,16),40,102,95,50,56,48,53,32,46,32,120,115,55,52,50,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,16),40,102,95,50,56,49,49,32,46,32,120,115,55,52,52,41};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,16),40,102,95,50,56,49,55,32,46,32,120,115,55,52,54,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,16),40,102,95,50,56,50,51,32,46,32,120,115,55,52,56,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,16),40,102,95,50,56,50,57,32,46,32,120,115,55,53,48,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,16),40,102,95,50,56,51,53,32,46,32,120,115,55,53,50,41};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,55,50,41,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,13),40,102,95,50,56,52,49,32,118,55,54,57,41,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,55,57,41,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,13),40,102,95,50,56,55,48,32,118,55,55,54,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,56,54,41,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,13),40,102,95,50,56,57,57,32,118,55,56,51,41,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,57,51,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,13),40,102,95,50,57,50,56,32,118,55,57,48,41,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,48,48,41,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,13),40,102,95,50,57,53,55,32,118,55,57,55,41,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,48,55,41,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,13),40,102,95,50,57,56,54,32,118,56,48,52,41,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,49,52,41,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,13),40,102,95,51,48,49,53,32,118,56,49,49,41,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,50,49,41,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,13),40,102,95,51,48,52,52,32,118,56,49,56,41,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,13),40,102,95,51,48,55,51,32,120,56,50,53,41,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,13),40,102,95,51,48,55,57,32,120,56,50,55,41,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,13),40,102,95,51,48,56,53,32,120,56,50,57,41,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,13),40,102,95,51,48,57,49,32,120,56,51,49,41,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,13),40,102,95,51,48,57,55,32,120,56,51,51,41,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,48,51,32,120,56,51,53,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,48,57,32,120,56,51,55,41,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,49,53,32,120,56,51,57,41,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,51,52,32,118,56,52,56,41,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,25),40,112,97,99,107,45,99,111,112,121,32,116,97,103,56,52,54,32,108,111,99,56,52,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,15),40,102,95,51,49,53,50,32,115,116,114,56,53,54,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,28),40,117,110,112,97,99,107,32,116,97,103,56,53,51,32,115,122,56,53,52,32,108,111,99,56,53,53,41,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,15),40,102,95,51,49,56,49,32,115,116,114,56,54,54,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,33),40,117,110,112,97,99,107,45,99,111,112,121,32,116,97,103,56,54,51,32,115,122,56,54,52,32,108,111,99,56,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,16),40,102,52,56,54,52,32,118,56,52,51,52,56,54,51,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,16),40,102,52,56,53,55,32,118,56,52,51,52,56,53,54,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,16),40,102,52,56,53,48,32,118,56,52,51,52,56,52,57,41};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,16),40,102,52,56,52,51,32,118,56,52,51,52,56,52,50,41};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,16),40,102,52,56,51,54,32,118,56,52,51,52,56,51,53,41};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,16),40,102,52,56,50,57,32,118,56,52,51,52,56,50,56,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,16),40,102,52,56,50,50,32,118,56,52,51,52,56,50,49,41};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,16),40,102,52,56,49,53,32,118,56,52,51,52,56,49,52,41};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,11),40,103,57,50,49,32,99,57,50,51,41,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,24),40,102,95,51,51,52,50,32,99,104,97,114,57,48,56,32,112,111,114,116,57,48,57,41};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,33),40,102,95,51,52,48,51,32,120,57,50,55,32,114,101,97,100,97,98,108,101,57,50,56,32,112,111,114,116,57,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,48),40,115,117,98,118,101,99,116,111,114,32,118,57,52,50,32,116,57,52,51,32,101,115,57,52,52,32,102,114,111,109,57,52,53,32,116,111,57,52,54,32,108,111,99,57,52,55,41};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,27),40,102,95,51,53,53,52,32,118,57,55,56,32,102,114,111,109,57,55,57,32,116,111,57,56,48,41,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,27),40,102,95,51,53,54,48,32,118,57,56,50,32,102,114,111,109,57,56,51,32,116,111,57,56,52,41,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,27),40,102,95,51,53,54,54,32,118,57,56,54,32,102,114,111,109,57,56,55,32,116,111,57,56,56,41,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,27),40,102,95,51,53,55,50,32,118,57,57,48,32,102,114,111,109,57,57,49,32,116,111,57,57,50,41,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,27),40,102,95,51,53,55,56,32,118,57,57,52,32,102,114,111,109,57,57,53,32,116,111,57,57,54,41,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,28),40,102,95,51,53,56,52,32,118,57,57,56,32,102,114,111,109,57,57,57,32,116,111,49,48,48,48,41,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,30),40,102,95,51,53,57,48,32,118,49,48,48,50,32,102,114,111,109,49,48,48,51,32,116,111,49,48,48,52,41,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,30),40,102,95,51,53,57,54,32,118,49,48,48,54,32,102,114,111,109,49,48,48,55,32,116,111,49,48,48,56,41,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,48,50,57,32,105,49,48,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,28),40,102,95,51,54,48,50,32,118,49,48,49,53,32,46,32,116,109,112,49,48,49,52,49,48,49,54,41,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,37),40,102,95,51,55,48,51,32,110,49,48,52,50,32,100,101,115,116,49,48,52,51,32,46,32,116,109,112,49,48,52,49,49,48,52,52,41,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,20),40,119,114,97,112,32,115,116,114,49,48,54,51,32,110,49,48,54,52,41,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,22),40,102,95,51,56,48,52,32,46,32,116,109,112,49,48,55,50,49,48,55,51,41,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,17),40,97,51,57,49,52,32,120,51,52,51,32,105,51,52,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,17),40,97,51,57,52,51,32,120,51,50,56,32,105,51,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,17),40,97,51,57,55,50,32,120,51,49,51,32,105,51,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,17),40,97,52,48,48,49,32,120,50,57,56,32,105,50,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,17),40,97,52,48,51,48,32,120,50,56,51,32,105,50,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,17),40,97,52,48,53,57,32,120,50,54,56,32,105,50,54,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,17),40,97,52,48,56,56,32,120,50,53,51,32,105,50,53,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,17),40,97,52,49,49,55,32,120,50,51,56,32,105,50,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub364(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub364(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word bv=(C_word )(C_a0);
C_free((void *)C_block_item(bv, 1));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub359(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub359(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int bytes=(int )C_unfix(C_a0);
C_word *buf = (C_word *)C_malloc(bytes + sizeof(C_header));if(buf == NULL) C_return(C_SCHEME_FALSE);C_block_header(buf) = C_make_header(C_BYTEVECTOR_TYPE, bytes);C_return(buf);
C_ret:
#undef return

return C_r;}

C_noret_decl(C_srfi_2d4_toplevel)
C_externexport void C_ccall C_srfi_2d4_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4118)
static void C_ccall f_4118(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4145)
static void C_ccall f_4145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1593)
static void C_ccall f_1593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4089)
static void C_ccall f_4089(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4116)
static void C_ccall f_4116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1597)
static void C_ccall f_1597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4060)
static void C_ccall f_4060(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4087)
static void C_ccall f_4087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4031)
static void C_ccall f_4031(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4058)
static void C_ccall f_4058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4002)
static void C_ccall f_4002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4029)
static void C_ccall f_4029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1609)
static void C_ccall f_1609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3973)
static void C_ccall f_3973(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4000)
static void C_ccall f_4000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1613)
static void C_ccall f_1613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3944)
static void C_ccall f_3944(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3915)
static void C_ccall f_3915(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1621)
static void C_ccall f_1621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3245)
static void C_ccall f_3245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3249)
static void C_ccall f_3249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3257)
static void C_ccall f_3257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3265)
static void C_ccall f_3265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3269)
static void C_ccall f_3269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3277)
static void C_ccall f_3277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3281)
static void C_ccall f_3281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3285)
static void C_ccall f_3285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3289)
static void C_ccall f_3289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3293)
static void C_ccall f_3293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3301)
static void C_ccall f_3301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3309)
static void C_ccall f_3309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3317)
static void C_ccall f_3317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3325)
static void C_ccall f_3325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3333)
static void C_ccall f_3333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3337)
static void C_ccall f_3337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3826)
static void C_ccall f_3826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3858)
static void C_fcall f_3858(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3862)
static void C_ccall f_3862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3880)
static void C_ccall f_3880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3871)
static void C_ccall f_3871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3835)
static void C_ccall f_3835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3795)
static void C_fcall f_3795(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3803)
static void C_ccall f_3803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3703)
static void C_ccall f_3703(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3703)
static void C_ccall f_3703r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3725)
static void C_ccall f_3725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3602)
static void C_ccall f_3602(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3602)
static void C_ccall f_3602r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3633)
static void C_ccall f_3633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3638)
static void C_fcall f_3638(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3590)
static void C_ccall f_3590(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3572)
static void C_ccall f_3572(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3560)
static void C_ccall f_3560(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3471)
static void C_fcall f_3471(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3504)
static void C_ccall f_3504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3527)
static void C_ccall f_3527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3533)
static void C_ccall f_3533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3403)
static void C_ccall f_3403(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3413)
static void C_ccall f_3413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3416)
static void C_ccall f_3416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3426)
static void C_ccall f_3426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3342)
static void C_ccall f_3342(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3371)
static void C_fcall f_3371(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3382)
static void C_ccall f_3382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f4815)
static void C_ccall f4815(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4822)
static void C_ccall f4822(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4829)
static void C_ccall f4829(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4836)
static void C_ccall f4836(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4843)
static void C_ccall f4843(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4850)
static void C_ccall f4850(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4857)
static void C_ccall f4857(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4864)
static void C_ccall f4864(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3179)
static void C_fcall f_3179(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3181)
static void C_ccall f_3181(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3191)
static void C_ccall f_3191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3150)
static void C_fcall f_3150(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3152)
static void C_ccall f_3152(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3132)
static void C_fcall f_3132(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3134)
static void C_ccall f_3134(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3144)
static void C_ccall f_3144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3109)
static void C_ccall f_3109(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3103)
static void C_ccall f_3103(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3097)
static void C_ccall f_3097(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3091)
static void C_ccall f_3091(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3085)
static void C_ccall f_3085(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3079)
static void C_ccall f_3079(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3073)
static void C_ccall f_3073(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3053)
static void C_fcall f_3053(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3067)
static void C_ccall f_3067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3015)
static void C_ccall f_3015(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3024)
static void C_fcall f_3024(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2995)
static void C_fcall f_2995(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3009)
static void C_ccall f_3009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2966)
static void C_fcall f_2966(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2937)
static void C_fcall f_2937(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2899)
static void C_ccall f_2899(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2908)
static void C_fcall f_2908(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2879)
static void C_fcall f_2879(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2893)
static void C_ccall f_2893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2841)
static void C_ccall f_2841(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2850)
static void C_fcall f_2850(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2829)
static void C_ccall f_2829(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2829)
static void C_ccall f_2829r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2817)
static void C_ccall f_2817(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2817)
static void C_ccall f_2817r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2805)
static void C_ccall f_2805(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2805)
static void C_ccall f_2805r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2793)
static void C_ccall f_2793(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2793)
static void C_ccall f_2793r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2760)
static void C_ccall f_2760(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2772)
static void C_fcall f_2772(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2779)
static void C_ccall f_2779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2734)
static void C_ccall f_2734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2739)
static void C_fcall f_2739(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2746)
static void C_ccall f_2746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2706)
static void C_fcall f_2706(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2713)
static void C_ccall f_2713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2661)
static void C_ccall f_2661(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2668)
static void C_ccall f_2668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2673)
static void C_fcall f_2673(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2680)
static void C_ccall f_2680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2640)
static void C_fcall f_2640(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2647)
static void C_ccall f_2647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2595)
static void C_ccall f_2595(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2602)
static void C_ccall f_2602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2607)
static void C_fcall f_2607(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2574)
static void C_fcall f_2574(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2581)
static void C_ccall f_2581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2536)
static void C_ccall f_2536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_fcall f_2541(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2548)
static void C_ccall f_2548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2419)
static void C_ccall f_2419(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2419)
static void C_ccall f_2419r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2488)
static void C_ccall f_2488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2453)
static void C_ccall f_2453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2465)
static void C_fcall f_2465(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2470)
static C_word C_fcall f_2470(C_word t0,C_word t1);
C_noret_decl(f_2309)
static void C_ccall f_2309(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2309)
static void C_ccall f_2309r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2378)
static void C_ccall f_2378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2343)
static void C_ccall f_2343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2355)
static void C_fcall f_2355(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2360)
static C_word C_fcall f_2360(C_word t0,C_word t1);
C_noret_decl(f_2203)
static void C_ccall f_2203(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2203)
static void C_ccall f_2203r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2268)
static void C_ccall f_2268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2251)
static C_word C_fcall f_2251(C_word t0,C_word t1);
C_noret_decl(f_2097)
static void C_ccall f_2097(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2097)
static void C_ccall f_2097r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2162)
static void C_ccall f_2162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2131)
static void C_ccall f_2131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2145)
static C_word C_fcall f_2145(C_word t0,C_word t1);
C_noret_decl(f_1991)
static void C_ccall f_1991(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1991)
static void C_ccall f_1991r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2056)
static void C_ccall f_2056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2025)
static void C_ccall f_2025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2034)
static void C_ccall f_2034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2039)
static C_word C_fcall f_2039(C_word t0,C_word t1);
C_noret_decl(f_1885)
static void C_ccall f_1885(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1885)
static void C_ccall f_1885r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1919)
static void C_ccall f_1919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1933)
static C_word C_fcall f_1933(C_word t0,C_word t1);
C_noret_decl(f_1779)
static void C_ccall f_1779(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1779)
static void C_ccall f_1779r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1844)
static void C_ccall f_1844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1813)
static void C_ccall f_1813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1822)
static void C_ccall f_1822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1827)
static C_word C_fcall f_1827(C_word t0,C_word t1);
C_noret_decl(f_1673)
static void C_ccall f_1673(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1716)
static void C_ccall f_1716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1721)
static C_word C_fcall f_1721(C_word t0,C_word t1);
C_noret_decl(f_1648)
static void C_ccall f_1648(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1655)
static void C_fcall f_1655(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1630)
static void C_fcall f_1630(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1646)
static void C_ccall f_1646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1628)
static void C_ccall f_1628(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1555)
static void C_ccall f_1555(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1585)
static void C_ccall f_1585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1519)
static void C_ccall f_1519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1549)
static void C_ccall f_1549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1478)
static void C_ccall f_1478(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1488)
static void C_ccall f_1488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1511)
static void C_ccall f_1511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1424)
static void C_ccall f_1424(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1431)
static void C_ccall f_1431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1434)
static void C_ccall f_1434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1457)
static void C_ccall f_1457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1392)
static void C_ccall f_1392(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1422)
static void C_ccall f_1422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1351)
static void C_ccall f_1351(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1361)
static void C_ccall f_1361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1319)
static void C_ccall f_1319(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1349)
static void C_ccall f_1349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1278)
static void C_ccall f_1278(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1288)
static void C_ccall f_1288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1311)
static void C_ccall f_1311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1260)
static void C_ccall f_1260(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1254)
static void C_ccall f_1254(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1248)
static void C_ccall f_1248(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1242)
static void C_ccall f_1242(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1236)
static void C_ccall f_1236(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1230)
static void C_ccall f_1230(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1215)
static void C_fcall f_1215(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;

C_noret_decl(trf_3858)
static void C_fcall trf_3858(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3858(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3858(t0,t1);}

C_noret_decl(trf_3795)
static void C_fcall trf_3795(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3795(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3795(t0,t1,t2);}

C_noret_decl(trf_3638)
static void C_fcall trf_3638(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3638(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3638(t0,t1,t2);}

C_noret_decl(trf_3471)
static void C_fcall trf_3471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3471(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_3471(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3371)
static void C_fcall trf_3371(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3371(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3371(t0,t1,t2);}

C_noret_decl(trf_3179)
static void C_fcall trf_3179(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3179(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3179(t0,t1,t2,t3);}

C_noret_decl(trf_3150)
static void C_fcall trf_3150(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3150(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3150(t0,t1,t2,t3);}

C_noret_decl(trf_3132)
static void C_fcall trf_3132(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3132(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3132(t0,t1,t2);}

C_noret_decl(trf_3053)
static void C_fcall trf_3053(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3053(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3053(t0,t1,t2);}

C_noret_decl(trf_3024)
static void C_fcall trf_3024(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3024(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3024(t0,t1,t2);}

C_noret_decl(trf_2995)
static void C_fcall trf_2995(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2995(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2995(t0,t1,t2);}

C_noret_decl(trf_2966)
static void C_fcall trf_2966(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2966(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2966(t0,t1,t2);}

C_noret_decl(trf_2937)
static void C_fcall trf_2937(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2937(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2937(t0,t1,t2);}

C_noret_decl(trf_2908)
static void C_fcall trf_2908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2908(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2908(t0,t1,t2);}

C_noret_decl(trf_2879)
static void C_fcall trf_2879(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2879(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2879(t0,t1,t2);}

C_noret_decl(trf_2850)
static void C_fcall trf_2850(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2850(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2850(t0,t1,t2);}

C_noret_decl(trf_2772)
static void C_fcall trf_2772(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2772(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2772(t0,t1,t2,t3);}

C_noret_decl(trf_2739)
static void C_fcall trf_2739(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2739(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2739(t0,t1,t2,t3);}

C_noret_decl(trf_2706)
static void C_fcall trf_2706(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2706(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2706(t0,t1,t2,t3);}

C_noret_decl(trf_2673)
static void C_fcall trf_2673(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2673(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2673(t0,t1,t2,t3);}

C_noret_decl(trf_2640)
static void C_fcall trf_2640(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2640(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2640(t0,t1,t2,t3);}

C_noret_decl(trf_2607)
static void C_fcall trf_2607(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2607(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2607(t0,t1,t2,t3);}

C_noret_decl(trf_2574)
static void C_fcall trf_2574(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2574(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2574(t0,t1,t2,t3);}

C_noret_decl(trf_2541)
static void C_fcall trf_2541(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2541(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2541(t0,t1,t2,t3);}

C_noret_decl(trf_2465)
static void C_fcall trf_2465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2465(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2465(t0,t1);}

C_noret_decl(trf_2355)
static void C_fcall trf_2355(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2355(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2355(t0,t1);}

C_noret_decl(trf_1655)
static void C_fcall trf_1655(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1655(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1655(t0,t1);}

C_noret_decl(trf_1630)
static void C_fcall trf_1630(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1630(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1630(t0,t1,t2,t3);}

C_noret_decl(trf_1215)
static void C_fcall trf_1215(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1215(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1215(t0,t1,t2,t3,t4);}

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
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_srfi_2d4_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_2d4_toplevel(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_2d4_toplevel"));
C_check_nursery_minimum(57);
if(!C_demand(57)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1524)){
C_save(t1);
C_rereclaim2(1524*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(57);
C_initialize_lf(lf,169);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[3]=C_h_intern(&lf[3],9,"\003syserror");
lf[4]=C_decode_literal(C_heaptop,"\376B\000\000&numeric value is not in expected range");
lf[5]=C_h_intern(&lf[5],15,"u8vector-length");
lf[6]=C_h_intern(&lf[6],8,"u8vector");
lf[7]=C_h_intern(&lf[7],15,"s8vector-length");
lf[8]=C_h_intern(&lf[8],8,"s8vector");
lf[9]=C_h_intern(&lf[9],16,"u16vector-length");
lf[10]=C_h_intern(&lf[10],9,"u16vector");
lf[11]=C_h_intern(&lf[11],16,"s16vector-length");
lf[12]=C_h_intern(&lf[12],9,"s16vector");
lf[13]=C_h_intern(&lf[13],16,"u32vector-length");
lf[14]=C_h_intern(&lf[14],9,"u32vector");
lf[15]=C_h_intern(&lf[15],16,"s32vector-length");
lf[16]=C_h_intern(&lf[16],9,"s32vector");
lf[17]=C_h_intern(&lf[17],16,"f32vector-length");
lf[18]=C_h_intern(&lf[18],9,"f32vector");
lf[19]=C_h_intern(&lf[19],16,"f64vector-length");
lf[20]=C_h_intern(&lf[20],9,"f64vector");
lf[21]=C_h_intern(&lf[21],13,"u8vector-set!");
lf[22]=C_h_intern(&lf[22],14,"\003syserror-hook");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\034argument may not be negative");
lf[24]=C_h_intern(&lf[24],13,"s8vector-set!");
lf[25]=C_h_intern(&lf[25],14,"u16vector-set!");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\034argument may not be negative");
lf[27]=C_h_intern(&lf[27],14,"s16vector-set!");
lf[28]=C_h_intern(&lf[28],14,"u32vector-set!");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000\034argument may not be negative");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\036argument exceeds integer range");
lf[31]=C_h_intern(&lf[31],17,"\003syscheck-integer");
lf[32]=C_h_intern(&lf[32],14,"s32vector-set!");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\036argument exceeds integer range");
lf[34]=C_h_intern(&lf[34],14,"f32vector-set!");
lf[35]=C_h_intern(&lf[35],14,"f64vector-set!");
lf[36]=C_h_intern(&lf[36],12,"u8vector-ref");
lf[37]=C_h_intern(&lf[37],12,"s8vector-ref");
lf[38]=C_h_intern(&lf[38],13,"u16vector-ref");
lf[39]=C_h_intern(&lf[39],13,"s16vector-ref");
lf[40]=C_h_intern(&lf[40],13,"u32vector-ref");
lf[41]=C_h_intern(&lf[41],13,"s32vector-ref");
lf[42]=C_h_intern(&lf[42],13,"f32vector-ref");
lf[43]=C_h_intern(&lf[43],13,"f64vector-ref");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000:not enough memory - cannot allocate external number vector");
lf[45]=C_h_intern(&lf[45],19,"\003sysallocate-vector");
lf[46]=C_h_intern(&lf[46],21,"release-number-vector");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\047bad argument type - not a number vector");
lf[48]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000\002\376\001\000\000\010s8vector\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376"
"\001\000\000\011u32vector\376\003\000\000\002\376\001\000\000\011s32vector\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376\001\000\000\011f64vector\376\377\016");
lf[49]=C_h_intern(&lf[49],13,"make-u8vector");
lf[50]=C_h_intern(&lf[50],14,"set-finalizer!");
lf[51]=C_h_intern(&lf[51],13,"make-s8vector");
lf[52]=C_h_intern(&lf[52],14,"make-u16vector");
lf[53]=C_h_intern(&lf[53],14,"make-s16vector");
lf[54]=C_h_intern(&lf[54],14,"make-u32vector");
lf[55]=C_h_intern(&lf[55],14,"make-s32vector");
lf[56]=C_h_intern(&lf[56],14,"make-f32vector");
lf[57]=C_h_intern(&lf[57],14,"make-f64vector");
lf[58]=C_h_intern(&lf[58],14,"list->u8vector");
lf[59]=C_h_intern(&lf[59],27,"\003syserror-not-a-proper-list");
lf[60]=C_h_intern(&lf[60],14,"list->s8vector");
lf[61]=C_h_intern(&lf[61],15,"list->u16vector");
lf[62]=C_h_intern(&lf[62],15,"list->s16vector");
lf[63]=C_h_intern(&lf[63],15,"list->u32vector");
lf[64]=C_h_intern(&lf[64],15,"list->s32vector");
lf[65]=C_h_intern(&lf[65],15,"list->f32vector");
lf[66]=C_h_intern(&lf[66],15,"list->f64vector");
lf[67]=C_h_intern(&lf[67],14,"u8vector->list");
lf[68]=C_h_intern(&lf[68],14,"s8vector->list");
lf[69]=C_h_intern(&lf[69],15,"u16vector->list");
lf[70]=C_h_intern(&lf[70],15,"s16vector->list");
lf[71]=C_h_intern(&lf[71],15,"u32vector->list");
lf[72]=C_h_intern(&lf[72],15,"s32vector->list");
lf[73]=C_h_intern(&lf[73],15,"f32vector->list");
lf[74]=C_h_intern(&lf[74],15,"f64vector->list");
lf[75]=C_h_intern(&lf[75],9,"u8vector\077");
lf[76]=C_h_intern(&lf[76],9,"s8vector\077");
lf[77]=C_h_intern(&lf[77],10,"u16vector\077");
lf[78]=C_h_intern(&lf[78],10,"s16vector\077");
lf[79]=C_h_intern(&lf[79],10,"u32vector\077");
lf[80]=C_h_intern(&lf[80],10,"s32vector\077");
lf[81]=C_h_intern(&lf[81],10,"f32vector\077");
lf[82]=C_h_intern(&lf[82],10,"f64vector\077");
lf[84]=C_h_intern(&lf[84],13,"\003sysmake-blob");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000+blob does not have correct size for packing");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000+blob does not have correct size for packing");
lf[89]=C_h_intern(&lf[89],21,"u8vector->blob/shared");
lf[90]=C_h_intern(&lf[90],21,"s8vector->blob/shared");
lf[91]=C_h_intern(&lf[91],22,"u16vector->blob/shared");
lf[92]=C_h_intern(&lf[92],22,"s16vector->blob/shared");
lf[93]=C_h_intern(&lf[93],22,"u32vector->blob/shared");
lf[94]=C_h_intern(&lf[94],22,"s32vector->blob/shared");
lf[95]=C_h_intern(&lf[95],22,"f32vector->blob/shared");
lf[96]=C_h_intern(&lf[96],22,"f64vector->blob/shared");
lf[97]=C_h_intern(&lf[97],14,"u8vector->blob");
lf[98]=C_h_intern(&lf[98],14,"s8vector->blob");
lf[99]=C_h_intern(&lf[99],15,"u16vector->blob");
lf[100]=C_h_intern(&lf[100],15,"s16vector->blob");
lf[101]=C_h_intern(&lf[101],15,"u32vector->blob");
lf[102]=C_h_intern(&lf[102],15,"s32vector->blob");
lf[103]=C_h_intern(&lf[103],15,"f32vector->blob");
lf[104]=C_h_intern(&lf[104],15,"f64vector->blob");
lf[105]=C_h_intern(&lf[105],21,"blob->u8vector/shared");
lf[106]=C_h_intern(&lf[106],21,"blob->s8vector/shared");
lf[107]=C_h_intern(&lf[107],22,"blob->u16vector/shared");
lf[108]=C_h_intern(&lf[108],22,"blob->s16vector/shared");
lf[109]=C_h_intern(&lf[109],22,"blob->u32vector/shared");
lf[110]=C_h_intern(&lf[110],22,"blob->s32vector/shared");
lf[111]=C_h_intern(&lf[111],22,"blob->f32vector/shared");
lf[112]=C_h_intern(&lf[112],22,"blob->f64vector/shared");
lf[113]=C_h_intern(&lf[113],14,"blob->u8vector");
lf[114]=C_h_intern(&lf[114],14,"blob->s8vector");
lf[115]=C_h_intern(&lf[115],15,"blob->u16vector");
lf[116]=C_h_intern(&lf[116],15,"blob->s16vector");
lf[117]=C_h_intern(&lf[117],15,"blob->u32vector");
lf[118]=C_h_intern(&lf[118],15,"blob->s32vector");
lf[119]=C_h_intern(&lf[119],15,"blob->f32vector");
lf[120]=C_h_intern(&lf[120],15,"blob->f64vector");
lf[121]=C_h_intern(&lf[121],18,"\003sysuser-read-hook");
lf[122]=C_h_intern(&lf[122],4,"read");
lf[123]=C_h_intern(&lf[123],2,"u8");
lf[124]=C_h_intern(&lf[124],2,"s8");
lf[125]=C_h_intern(&lf[125],3,"u16");
lf[126]=C_h_intern(&lf[126],3,"s16");
lf[127]=C_h_intern(&lf[127],3,"u32");
lf[128]=C_h_intern(&lf[128],3,"s32");
lf[129]=C_h_intern(&lf[129],3,"f32");
lf[130]=C_h_intern(&lf[130],3,"f64");
lf[131]=C_h_intern(&lf[131],1,"f");
lf[132]=C_h_intern(&lf[132],1,"F");
lf[133]=C_h_intern(&lf[133],14,"\003sysread-error");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\031illegal bytevector syntax");
lf[135]=C_h_intern(&lf[135],19,"\003sysuser-print-hook");
lf[136]=C_h_intern(&lf[136],9,"\003sysprint");
lf[138]=C_h_intern(&lf[138],11,"subu8vector");
lf[139]=C_h_intern(&lf[139],12,"subu16vector");
lf[140]=C_h_intern(&lf[140],12,"subu32vector");
lf[141]=C_h_intern(&lf[141],11,"subs8vector");
lf[142]=C_h_intern(&lf[142],12,"subs16vector");
lf[143]=C_h_intern(&lf[143],12,"subs32vector");
lf[144]=C_h_intern(&lf[144],12,"subf32vector");
lf[145]=C_h_intern(&lf[145],12,"subf64vector");
lf[146]=C_h_intern(&lf[146],14,"write-u8vector");
lf[147]=C_h_intern(&lf[147],19,"\003sysstandard-output");
lf[148]=C_h_intern(&lf[148],16,"\003syswrite-char-0");
lf[149]=C_h_intern(&lf[149],14,"\003syscheck-port");
lf[150]=C_h_intern(&lf[150],14,"read-u8vector!");
lf[151]=C_h_intern(&lf[151],18,"\003sysstandard-input");
lf[152]=C_h_intern(&lf[152],16,"\003sysread-string!");
lf[153]=C_h_intern(&lf[153],13,"read-u8vector");
lf[154]=C_h_intern(&lf[154],17,"get-output-string");
lf[155]=C_h_intern(&lf[155],19,"\003syswrite-char/port");
lf[156]=C_h_intern(&lf[156],15,"\003sysread-char-0");
lf[157]=C_h_intern(&lf[157],18,"open-output-string");
lf[158]=C_h_intern(&lf[158],17,"register-feature!");
lf[159]=C_h_intern(&lf[159],6,"srfi-4");
lf[160]=C_h_intern(&lf[160],18,"getter-with-setter");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\023(f64vector-ref v i)");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\023(f32vector-ref v i)");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\023(s32vector-ref v i)");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\023(u32vector-ref v i)");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\023(s16vector-ref v i)");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\023(u16vector-ref v i)");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\022(s8vector-ref v i)");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\022(u8vector-ref v i)");
C_register_lf2(lf,169,create_ptable());
t2=C_mutate(&lf[0] /* (set! c408 ...) */,lf[1]);
t3=C_mutate(&lf[2] /* (set! ##sys#check-exact-interval ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1215,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[5]+1 /* (set! u8vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1230,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[7]+1 /* (set! s8vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1236,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[9]+1 /* (set! u16vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1242,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[11]+1 /* (set! s16vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1248,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[13]+1 /* (set! u32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1254,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[15]+1 /* (set! s32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1260,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[17]+1 /* (set! f32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1266,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[19]+1 /* (set! f64vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1272,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[21]+1 /* (set! u8vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1278,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[24]+1 /* (set! s8vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1319,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[25]+1 /* (set! u16vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1351,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[27]+1 /* (set! s16vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1392,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[28]+1 /* (set! u32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1424,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[32]+1 /* (set! s32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1478,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[34]+1 /* (set! f32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1519,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[35]+1 /* (set! f64vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1555,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1593,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4118,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:175: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[160]+1)))(5,*((C_word*)lf[160]+1),t20,t21,*((C_word*)lf[21]+1),lf[168]);}

/* a4117 */
static void C_ccall f_4118(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4118,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[6],lf[36]);
t5=C_u_i_s8vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4145,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[36]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_u_i_u8vector_ref(t2,t3));}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t6,C_fix((C_word)C_OUT_OF_RANGE_ERROR),lf[36],t7,C_fix(0),t5);}}

/* k4143 in a4117 */
static void C_ccall f_4145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_u8vector_ref(((C_word*)t0)[3],((C_word*)t0)[2]));}

/* k1591 */
static void C_ccall f_1593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1593,2,t0,t1);}
t2=C_mutate((C_word*)lf[36]+1 /* (set! u8vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1597,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4089,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:185: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[160]+1)))(5,*((C_word*)lf[160]+1),t3,t4,*((C_word*)lf[21]+1),lf[167]);}

/* a4088 in k1591 */
static void C_ccall f_4089(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4089,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[8],lf[37]);
t5=C_u_i_s8vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4116,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[37]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_u_i_s8vector_ref(t2,t3));}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t6,C_fix((C_word)C_OUT_OF_RANGE_ERROR),lf[37],t7,C_fix(0),t5);}}

/* k4114 in a4088 in k1591 */
static void C_ccall f_4116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_s8vector_ref(((C_word*)t0)[3],((C_word*)t0)[2]));}

/* k1595 in k1591 */
static void C_ccall f_1597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1597,2,t0,t1);}
t2=C_mutate((C_word*)lf[37]+1 /* (set! s8vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1601,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4060,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:195: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[160]+1)))(5,*((C_word*)lf[160]+1),t3,t4,*((C_word*)lf[25]+1),lf[166]);}

/* a4059 in k1595 in k1591 */
static void C_ccall f_4060(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4060,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[10],lf[38]);
t5=C_u_i_s16vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4087,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[38]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_u_i_u16vector_ref(t2,t3));}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t6,C_fix((C_word)C_OUT_OF_RANGE_ERROR),lf[38],t7,C_fix(0),t5);}}

/* k4085 in a4059 in k1595 in k1591 */
static void C_ccall f_4087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_u16vector_ref(((C_word*)t0)[3],((C_word*)t0)[2]));}

/* k1599 in k1595 in k1591 */
static void C_ccall f_1601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1601,2,t0,t1);}
t2=C_mutate((C_word*)lf[38]+1 /* (set! u16vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1605,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4031,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:205: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[160]+1)))(5,*((C_word*)lf[160]+1),t3,t4,*((C_word*)lf[27]+1),lf[165]);}

/* a4030 in k1599 in k1595 in k1591 */
static void C_ccall f_4031(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4031,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[12],lf[39]);
t5=C_u_i_s16vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4058,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[39]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_u_i_s16vector_ref(t2,t3));}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t6,C_fix((C_word)C_OUT_OF_RANGE_ERROR),lf[39],t7,C_fix(0),t5);}}

/* k4056 in a4030 in k1599 in k1595 in k1591 */
static void C_ccall f_4058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_s16vector_ref(((C_word*)t0)[3],((C_word*)t0)[2]));}

/* k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_1605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1605,2,t0,t1);}
t2=C_mutate((C_word*)lf[39]+1 /* (set! s16vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1609,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4002,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:215: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[160]+1)))(5,*((C_word*)lf[160]+1),t3,t4,*((C_word*)lf[28]+1),lf[164]);}

/* a4001 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_4002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4002,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[14],lf[40]);
t5=C_u_i_u32vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4029,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[40]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_u32vector_ref(&a,2,t2,t3));}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t6,C_fix((C_word)C_OUT_OF_RANGE_ERROR),lf[40],t7,C_fix(0),t5);}}

/* k4027 in a4001 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_4029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4029,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_u32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_1609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1609,2,t0,t1);}
t2=C_mutate((C_word*)lf[40]+1 /* (set! u32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1613,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3973,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:225: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[160]+1)))(5,*((C_word*)lf[160]+1),t3,t4,*((C_word*)lf[32]+1),lf[163]);}

/* a3972 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3973(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3973,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[16],lf[41]);
t5=C_u_i_s32vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4000,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[41]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_s32vector_ref(&a,2,t2,t3));}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t6,C_fix((C_word)C_OUT_OF_RANGE_ERROR),lf[41],t7,C_fix(0),t5);}}

/* k3998 in a3972 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_4000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4000,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_s32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_1613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1613,2,t0,t1);}
t2=C_mutate((C_word*)lf[41]+1 /* (set! s32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1617,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3944,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:235: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[160]+1)))(5,*((C_word*)lf[160]+1),t3,t4,*((C_word*)lf[34]+1),lf[162]);}

/* a3943 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3944(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3944,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[18],lf[42]);
t5=C_u_i_f32vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3971,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[42]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_f32vector_ref(&a,2,t2,t3));}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t6,C_fix((C_word)C_OUT_OF_RANGE_ERROR),lf[42],t7,C_fix(0),t5);}}

/* k3969 in a3943 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3971,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_f32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_1617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1617,2,t0,t1);}
t2=C_mutate((C_word*)lf[42]+1 /* (set! f32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1621,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3915,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:245: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[160]+1)))(5,*((C_word*)lf[160]+1),t3,t4,*((C_word*)lf[35]+1),lf[161]);}

/* a3914 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3915(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3915,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[20],lf[43]);
t5=C_u_i_8vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3942,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[43]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_f64vector_ref(&a,2,t2,t3));}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t6,C_fix((C_word)C_OUT_OF_RANGE_ERROR),lf[43],t7,C_fix(0),t5);}}

/* k3940 in a3914 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3942,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_f64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_1621(C_word c,C_word t0,C_word t1){
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
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word ab[189],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1621,2,t0,t1);}
t2=C_mutate((C_word*)lf[43]+1 /* (set! f64vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1628,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1630,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
t5=C_mutate((C_word*)lf[46]+1 /* (set! release-number-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1648,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[49]+1 /* (set! make-u8vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1673,a[2]=t4,a[3]=t3,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t7=C_mutate((C_word*)lf[51]+1 /* (set! make-s8vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1779,a[2]=t4,a[3]=t3,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t8=C_mutate((C_word*)lf[52]+1 /* (set! make-u16vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1885,a[2]=t4,a[3]=t3,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp));
t9=C_mutate((C_word*)lf[53]+1 /* (set! make-s16vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1991,a[2]=t4,a[3]=t3,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t10=C_mutate((C_word*)lf[54]+1 /* (set! make-u32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2097,a[2]=t4,a[3]=t3,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp));
t11=C_mutate((C_word*)lf[55]+1 /* (set! make-s32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2203,a[2]=t4,a[3]=t3,a[4]=((C_word)li31),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate((C_word*)lf[56]+1 /* (set! make-f32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2309,a[2]=t4,a[3]=t3,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
t13=C_mutate((C_word*)lf[57]+1 /* (set! make-f64vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2419,a[2]=t4,a[3]=t3,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));
t14=*((C_word*)lf[49]+1);
t15=C_mutate((C_word*)lf[58]+1 /* (set! list->u8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2529,a[2]=t14,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp));
t16=*((C_word*)lf[51]+1);
t17=C_mutate((C_word*)lf[60]+1 /* (set! list->s8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2562,a[2]=t16,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp));
t18=*((C_word*)lf[52]+1);
t19=C_mutate((C_word*)lf[61]+1 /* (set! list->u16vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2595,a[2]=t18,a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp));
t20=*((C_word*)lf[53]+1);
t21=C_mutate((C_word*)lf[62]+1 /* (set! list->s16vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2628,a[2]=t20,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp));
t22=*((C_word*)lf[54]+1);
t23=C_mutate((C_word*)lf[63]+1 /* (set! list->u32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2661,a[2]=t22,a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp));
t24=*((C_word*)lf[55]+1);
t25=C_mutate((C_word*)lf[64]+1 /* (set! list->s32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2694,a[2]=t24,a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp));
t26=*((C_word*)lf[56]+1);
t27=C_mutate((C_word*)lf[65]+1 /* (set! list->f32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2727,a[2]=t26,a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp));
t28=*((C_word*)lf[57]+1);
t29=C_mutate((C_word*)lf[66]+1 /* (set! list->f64vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2760,a[2]=t28,a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp));
t30=C_mutate((C_word*)lf[6]+1 /* (set! u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2793,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[8]+1 /* (set! s8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2799,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[10]+1 /* (set! u16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2805,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[12]+1 /* (set! s16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2811,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[14]+1 /* (set! u32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2817,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[16]+1 /* (set! s32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2823,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[18]+1 /* (set! f32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2829,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[20]+1 /* (set! f64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2835,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[67]+1 /* (set! u8vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2841,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[68]+1 /* (set! s8vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2870,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[69]+1 /* (set! u16vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2899,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[70]+1 /* (set! s16vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2928,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[71]+1 /* (set! u32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2957,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[72]+1 /* (set! s32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2986,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[73]+1 /* (set! f32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3015,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[74]+1 /* (set! f64vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3044,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[75]+1 /* (set! u8vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3073,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[76]+1 /* (set! s8vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3079,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[77]+1 /* (set! u16vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3085,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[78]+1 /* (set! s16vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3091,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[79]+1 /* (set! u32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3097,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[80]+1 /* (set! s32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3103,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[81]+1 /* (set! f32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3109,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[82]+1 /* (set! f64vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3115,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate(&lf[83] /* (set! pack-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3132,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate(&lf[85] /* (set! unpack ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3150,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate(&lf[87] /* (set! unpack-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3179,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t57=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4864,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
t58=C_mutate((C_word*)lf[89]+1 /* (set! u8vector->blob/shared ...) */,t57);
t59=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4857,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp);
t60=C_mutate((C_word*)lf[90]+1 /* (set! s8vector->blob/shared ...) */,t59);
t61=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4850,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
t62=C_mutate((C_word*)lf[91]+1 /* (set! u16vector->blob/shared ...) */,t61);
t63=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4843,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp);
t64=C_mutate((C_word*)lf[92]+1 /* (set! s16vector->blob/shared ...) */,t63);
t65=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4836,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
t66=C_mutate((C_word*)lf[93]+1 /* (set! u32vector->blob/shared ...) */,t65);
t67=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4829,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp);
t68=C_mutate((C_word*)lf[94]+1 /* (set! s32vector->blob/shared ...) */,t67);
t69=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4822,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp);
t70=C_mutate((C_word*)lf[95]+1 /* (set! f32vector->blob/shared ...) */,t69);
t71=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4815,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp);
t72=C_mutate((C_word*)lf[96]+1 /* (set! f64vector->blob/shared ...) */,t71);
t73=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3245,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:539: pack-copy */
f_3132(t73,lf[6],lf[97]);}

/* k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3245,2,t0,t1);}
t2=C_mutate((C_word*)lf[97]+1 /* (set! u8vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3249,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:540: pack-copy */
f_3132(t3,lf[8],lf[98]);}

/* k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3249,2,t0,t1);}
t2=C_mutate((C_word*)lf[98]+1 /* (set! s8vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3253,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:541: pack-copy */
f_3132(t3,lf[10],lf[99]);}

/* k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3253,2,t0,t1);}
t2=C_mutate((C_word*)lf[99]+1 /* (set! u16vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3257,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:542: pack-copy */
f_3132(t3,lf[12],lf[100]);}

/* k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3257,2,t0,t1);}
t2=C_mutate((C_word*)lf[100]+1 /* (set! s16vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3261,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:543: pack-copy */
f_3132(t3,lf[14],lf[101]);}

/* k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3261,2,t0,t1);}
t2=C_mutate((C_word*)lf[101]+1 /* (set! u32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3265,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:544: pack-copy */
f_3132(t3,lf[16],lf[102]);}

/* k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3265,2,t0,t1);}
t2=C_mutate((C_word*)lf[102]+1 /* (set! s32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3269,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:545: pack-copy */
f_3132(t3,lf[18],lf[103]);}

/* k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3269,2,t0,t1);}
t2=C_mutate((C_word*)lf[103]+1 /* (set! f32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3273,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:546: pack-copy */
f_3132(t3,lf[20],lf[104]);}

/* k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3273,2,t0,t1);}
t2=C_mutate((C_word*)lf[104]+1 /* (set! f64vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3277,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:548: unpack */
f_3150(t3,lf[6],C_SCHEME_TRUE,lf[105]);}

/* k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3277,2,t0,t1);}
t2=C_mutate((C_word*)lf[105]+1 /* (set! blob->u8vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3281,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:549: unpack */
f_3150(t3,lf[8],C_SCHEME_TRUE,lf[106]);}

/* k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3281,2,t0,t1);}
t2=C_mutate((C_word*)lf[106]+1 /* (set! blob->s8vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3285,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:550: unpack */
f_3150(t3,lf[10],C_fix(2),lf[107]);}

/* k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3285,2,t0,t1);}
t2=C_mutate((C_word*)lf[107]+1 /* (set! blob->u16vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3289,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:551: unpack */
f_3150(t3,lf[12],C_fix(2),lf[108]);}

/* k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3289,2,t0,t1);}
t2=C_mutate((C_word*)lf[108]+1 /* (set! blob->s16vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3293,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:552: unpack */
f_3150(t3,lf[14],C_fix(4),lf[109]);}

/* k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3293,2,t0,t1);}
t2=C_mutate((C_word*)lf[109]+1 /* (set! blob->u32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3297,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:553: unpack */
f_3150(t3,lf[16],C_fix(4),lf[110]);}

/* k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3297,2,t0,t1);}
t2=C_mutate((C_word*)lf[110]+1 /* (set! blob->s32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3301,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:554: unpack */
f_3150(t3,lf[18],C_fix(4),lf[111]);}

/* k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3301,2,t0,t1);}
t2=C_mutate((C_word*)lf[111]+1 /* (set! blob->f32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3305,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:555: unpack */
f_3150(t3,lf[20],C_fix(8),lf[112]);}

/* k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3305,2,t0,t1);}
t2=C_mutate((C_word*)lf[112]+1 /* (set! blob->f64vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3309,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:557: unpack-copy */
f_3179(t3,lf[6],C_SCHEME_TRUE,lf[113]);}

/* k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3309,2,t0,t1);}
t2=C_mutate((C_word*)lf[113]+1 /* (set! blob->u8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3313,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:558: unpack-copy */
f_3179(t3,lf[8],C_SCHEME_TRUE,lf[114]);}

/* k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3313,2,t0,t1);}
t2=C_mutate((C_word*)lf[114]+1 /* (set! blob->s8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3317,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:559: unpack-copy */
f_3179(t3,lf[10],C_fix(2),lf[115]);}

/* k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3317,2,t0,t1);}
t2=C_mutate((C_word*)lf[115]+1 /* (set! blob->u16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:560: unpack-copy */
f_3179(t3,lf[12],C_fix(2),lf[116]);}

/* k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3321,2,t0,t1);}
t2=C_mutate((C_word*)lf[116]+1 /* (set! blob->s16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3325,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:561: unpack-copy */
f_3179(t3,lf[14],C_fix(4),lf[117]);}

/* k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3325,2,t0,t1);}
t2=C_mutate((C_word*)lf[117]+1 /* (set! blob->u32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3329,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:562: unpack-copy */
f_3179(t3,lf[16],C_fix(4),lf[118]);}

/* k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3329,2,t0,t1);}
t2=C_mutate((C_word*)lf[118]+1 /* (set! blob->s32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3333,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:563: unpack-copy */
f_3179(t3,lf[18],C_fix(4),lf[119]);}

/* k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3333,2,t0,t1);}
t2=C_mutate((C_word*)lf[119]+1 /* (set! blob->f32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3337,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:564: unpack-copy */
f_3179(t3,lf[20],C_fix(8),lf[120]);}

/* k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3337(C_word c,C_word t0,C_word t1){
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
C_word ab[101],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3337,2,t0,t1);}
t2=C_mutate((C_word*)lf[120]+1 /* (set! blob->f64vector ...) */,t1);
t3=*((C_word*)lf[121]+1);
t4=*((C_word*)lf[122]+1);
t5=C_a_i_list(&a,16,lf[123],*((C_word*)lf[58]+1),lf[124],*((C_word*)lf[60]+1),lf[125],*((C_word*)lf[61]+1),lf[126],*((C_word*)lf[62]+1),lf[127],*((C_word*)lf[63]+1),lf[128],*((C_word*)lf[64]+1),lf[129],*((C_word*)lf[65]+1),lf[130],*((C_word*)lf[66]+1));
t6=C_mutate((C_word*)lf[121]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3342,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=((C_word)li99),tmp=(C_word)a,a+=6,tmp));
t7=*((C_word*)lf[135]+1);
t8=C_mutate((C_word*)lf[135]+1 /* (set! ##sys#user-print-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3403,a[2]=t7,a[3]=((C_word)li100),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate(&lf[137] /* (set! subvector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3471,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[138]+1 /* (set! subu8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3554,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[139]+1 /* (set! subu16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3560,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[140]+1 /* (set! subu32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3566,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[141]+1 /* (set! subs8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3572,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[142]+1 /* (set! subs16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3578,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[143]+1 /* (set! subs32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3584,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[144]+1 /* (set! subf32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3590,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[145]+1 /* (set! subf64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3596,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[146]+1 /* (set! write-u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3602,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[150]+1 /* (set! read-u8vector! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3703,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3795,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp);
t21=C_mutate((C_word*)lf[153]+1 /* (set! read-u8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3804,a[2]=t20,a[3]=((C_word)li115),tmp=(C_word)a,a+=4,tmp));
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3913,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:689: register-feature! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[158]+1)))(3,*((C_word*)lf[158]+1),t22,lf[159]);}

/* k3911 in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* f_3804 in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3804(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_3804r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3804r(t0,t1,t2);}}

static void C_ccall f_3804r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(6);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?*((C_word*)lf[151]+1):C_i_car(t6));
t9=C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t6));
if(C_truep(C_i_nullp(t10))){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3826,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:669: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[149]+1)))(4,*((C_word*)lf[149]+1),t11,t8,lf[153]);}
else{
/* ##sys#error */
t11=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}

/* k3824 */
static void C_ccall f_3826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3826,2,t0,t1);}
if(C_truep(((C_word*)t0)[5])){
t2=C_i_check_exact_2(((C_word*)t0)[5],lf[153]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3835,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:671: ##sys#allocate-vector */
t4=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3853,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:678: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[157]+1)))(2,*((C_word*)lf[157]+1),t2);}}

/* k3851 in k3824 */
static void C_ccall f_3853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3853,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3858,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word)li114),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_3858(t5,((C_word*)t0)[2]);}

/* loop in k3851 in k3824 */
static void C_fcall f_3858(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3858,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3862,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:680: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[156]+1)))(3,*((C_word*)lf[156]+1),t2,((C_word*)t0)[2]);}

/* k3860 in loop in k3851 in k3824 */
static void C_ccall f_3862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3862,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3871,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:682: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[154]+1)))(3,*((C_word*)lf[154]+1),t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3880,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:686: ##sys#write-char/port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[155]+1)))(4,*((C_word*)lf[155]+1),t2,t1,((C_word*)t0)[3]);}}

/* k3878 in k3860 in loop in k3851 in k3824 */
static void C_ccall f_3880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm:687: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3858(t2,((C_word*)t0)[2]);}

/* k3869 in k3860 in loop in k3851 in k3824 */
static void C_ccall f_3871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_block_size(t1);
/* srfi-4.scm:684: wrap */
f_3795(((C_word*)t0)[2],t1,t2);}

/* k3833 in k3824 */
static void C_ccall f_3835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3835,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3838,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:672: ##sys#read-string! */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[152]+1)))(6,*((C_word*)lf[152]+1),t2,((C_word*)t0)[5],t1,((C_word*)t0)[2],C_fix(0));}

/* k3836 in k3833 in k3824 */
static void C_ccall f_3838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3838,2,t0,t1);}
t2=C_string_to_bytevector(((C_word*)t0)[5]);
t3=C_eqp(((C_word*)t0)[4],t1);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record2(&a,2,lf[6],((C_word*)t0)[5]));}
else{
/* srfi-4.scm:676: wrap */
f_3795(((C_word*)t0)[3],((C_word*)t0)[5],t1);}}

/* wrap in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_fcall f_3795(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3795,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3803,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:664: ##sys#allocate-vector */
t5=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,t3,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k3801 in wrap in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3803,2,t0,t1);}
t2=C_string_to_bytevector(t1);
t3=C_substring_copy(((C_word*)t0)[4],t1,C_fix(0),((C_word*)t0)[3],C_fix(0));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record2(&a,2,lf[6],t1));}

/* f_3703 in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3703(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4r,(void*)f_3703r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3703r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3703r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t7=(C_truep(t6)?*((C_word*)lf[151]+1):C_i_car(t4));
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(0):C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
if(C_truep(C_i_nullp(t13))){
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3725,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t3,a[6]=t11,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:649: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[149]+1)))(4,*((C_word*)lf[149]+1),t14,t7,lf[150]);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}

/* k3723 */
static void C_ccall f_3725(C_word c,C_word t0,C_word t1){
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
t2=C_i_check_exact_2(((C_word*)t0)[6],lf[150]);
t3=C_i_check_structure_2(((C_word*)t0)[5],lf[6],lf[150]);
t4=C_slot(((C_word*)t0)[5],C_fix(1));
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t5=C_i_check_exact_2(((C_word*)((C_word*)t0)[4])[1],lf[150]);
t6=C_fixnum_plus(((C_word*)t0)[6],((C_word*)((C_word*)t0)[4])[1]);
t7=C_block_size(t4);
if(C_truep(C_fixnum_greaterp(t6,t7))){
t8=C_block_size(t4);
t9=C_fixnum_difference(t8,((C_word*)t0)[6]);
t10=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
/* srfi-4.scm:657: ##sys#read-string! */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[152]+1)))(6,*((C_word*)lf[152]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],t4,((C_word*)t0)[2],((C_word*)t0)[6]);}
else{
/* srfi-4.scm:657: ##sys#read-string! */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[152]+1)))(6,*((C_word*)lf[152]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],t4,((C_word*)t0)[2],((C_word*)t0)[6]);}}
else{
/* srfi-4.scm:657: ##sys#read-string! */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[152]+1)))(6,*((C_word*)lf[152]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],t4,((C_word*)t0)[2],((C_word*)t0)[6]);}}

/* f_3602 in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3602(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3602r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3602r(t0,t1,t2,t3);}}

static void C_ccall f_3602r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[147]+1):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_fix(0):C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3618,a[2]=t9,a[3]=t1,a[4]=t5,a[5]=t2,a[6]=t11,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nullp(t11))){
/* srfi-4.scm:639: u8vector-length */
t13=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,t2);}
else{
t13=t12;
f_3618(2,t13,C_i_car(t11));}}

/* k3616 */
static void C_ccall f_3618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3618,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[6]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[6]));
if(C_truep(C_i_nullp(t3))){
t4=C_i_check_structure_2(((C_word*)t0)[5],lf[6],lf[146]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:641: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[149]+1)))(4,*((C_word*)lf[149]+1),t5,((C_word*)t0)[4],lf[146]);}
else{
/* ##sys#error */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],lf[0],t3);}}

/* k3631 in k3616 */
static void C_ccall f_3633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3633,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3638,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word)li110),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_3638(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* doloop1029 in k3631 in k3616 */
static void C_fcall f_3638(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3638,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3648,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_make_character(C_unfix(C_u_i_u8vector_ref(((C_word*)t0)[3],t2)));
/* srfi-4.scm:644: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[148]+1)))(4,*((C_word*)lf[148]+1),t3,t4,((C_word*)t0)[2]);}}

/* k3646 in doloop1029 in k3631 in k3616 */
static void C_ccall f_3648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3638(t3,((C_word*)t0)[2],t2);}

/* f_3596 in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3596(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3596,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:636: subvector */
f_3471(t1,t2,lf[20],C_fix(8),t3,t4,lf[145]);}

/* f_3590 in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3590(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3590,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:635: subvector */
f_3471(t1,t2,lf[18],C_fix(4),t3,t4,lf[144]);}

/* f_3584 in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3584(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3584,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:634: subvector */
f_3471(t1,t2,lf[16],C_fix(4),t3,t4,lf[143]);}

/* f_3578 in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3578(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3578,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:633: subvector */
f_3471(t1,t2,lf[12],C_fix(2),t3,t4,lf[142]);}

/* f_3572 in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3572(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3572,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:632: subvector */
f_3471(t1,t2,lf[8],C_fix(1),t3,t4,lf[141]);}

/* f_3566 in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3566,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:631: subvector */
f_3471(t1,t2,lf[14],C_fix(4),t3,t4,lf[140]);}

/* f_3560 in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3560(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3560,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:630: subvector */
f_3471(t1,t2,lf[10],C_fix(2),t3,t4,lf[139]);}

/* f_3554 in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3554(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3554,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm:629: subvector */
f_3471(t1,t2,lf[6],C_fix(1),t3,t4,lf[138]);}

/* subvector in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_fcall f_3471(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3471,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=C_i_check_structure_2(t2,t3,t7);
t9=C_slot(t2,C_fix(1));
t10=C_block_size(t9);
t11=C_u_fixnum_divide(t10,t4);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3504,a[2]=t7,a[3]=t11,a[4]=t1,a[5]=t9,a[6]=t3,a[7]=t4,a[8]=t5,a[9]=t6,tmp=(C_word)a,a+=10,tmp);
t13=C_fixnum_plus(t11,C_fix(1));
t14=t5;
t15=t7;
t16=C_i_check_exact_2(t14,t15);
t17=C_fixnum_less_or_equal_p(C_fix(0),t14);
t18=(C_truep(t17)?C_fixnum_lessp(t14,t13):C_SCHEME_FALSE);
if(C_truep(t18)){
t19=C_SCHEME_UNDEFINED;
t20=t12;
f_3504(2,t20,t19);}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t12,C_fix((C_word)C_OUT_OF_RANGE_ERROR),t15,t14,C_fix(0),t13);}}

/* k3502 in subvector in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3504(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3527,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)t0)[9];
t5=((C_word*)t0)[2];
t6=C_i_check_exact_2(t4,t5);
t7=C_fixnum_less_or_equal_p(C_fix(0),t4);
t8=(C_truep(t7)?C_fixnum_lessp(t4,t3):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t2;
f_3527(2,t10,t9);}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t2,C_fix((C_word)C_OUT_OF_RANGE_ERROR),t5,t4,C_fix(0),t3);}}

/* k3525 in k3502 in subvector in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3527,2,t0,t1);}
t2=C_fixnum_difference(((C_word*)t0)[7],((C_word*)t0)[6]);
t3=C_fixnum_times(((C_word*)t0)[5],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3533,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:623: ##sys#allocate-vector */
t5=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,t3,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k3531 in k3525 in k3502 in subvector in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3533,2,t0,t1);}
t2=C_string_to_bytevector(t1);
t3=C_a_i_record2(&a,2,((C_word*)t0)[7],t1);
t4=C_fixnum_times(((C_word*)t0)[6],((C_word*)t0)[5]);
t5=C_copy_subvector(t1,((C_word*)t0)[4],C_fix(0),t4,((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}

/* f_3403 in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3403(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[102],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3403,5,t0,t1,t2,t3,t4);}
t5=C_a_i_list(&a,3,lf[6],lf[123],*((C_word*)lf[67]+1));
t6=C_a_i_list(&a,3,lf[8],lf[124],*((C_word*)lf[68]+1));
t7=C_a_i_list(&a,3,lf[10],lf[125],*((C_word*)lf[69]+1));
t8=C_a_i_list(&a,3,lf[12],lf[126],*((C_word*)lf[70]+1));
t9=C_a_i_list(&a,3,lf[14],lf[127],*((C_word*)lf[71]+1));
t10=C_a_i_list(&a,3,lf[16],lf[128],*((C_word*)lf[72]+1));
t11=C_a_i_list(&a,3,lf[18],lf[129],*((C_word*)lf[73]+1));
t12=C_a_i_list(&a,3,lf[20],lf[130],*((C_word*)lf[74]+1));
t13=C_a_i_list(&a,8,t5,t6,t7,t8,t9,t10,t11,t12);
t14=C_i_assq(C_slot(t2,C_fix(0)),t13);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3413,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t14,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:605: ##sys#print */
t16=*((C_word*)lf[136]+1);
((C_proc5)(void*)(*((C_word*)t16+1)))(5,t16,t15,C_make_character(35),C_SCHEME_FALSE,t4);}
else{
/* srfi-4.scm:608: old-hook */
t15=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t15))(5,t15,t1,t2,t3,t4);}}

/* k3411 */
static void C_ccall f_3413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3416,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[5]);
/* srfi-4.scm:606: ##sys#print */
t4=*((C_word*)lf[136]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k3414 in k3411 */
static void C_ccall f_3416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3416,2,t0,t1);}
t2=C_i_caddr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3426,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* g937938 */
t4=t2;
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k3424 in k3414 in k3411 */
static void C_ccall f_3426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm:607: ##sys#print */
t2=*((C_word*)lf[136]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],t1,C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* f_3342 in k3335 in k3331 in k3327 in k3323 in k3319 in k3315 in k3311 in k3307 in k3303 in k3299 in k3295 in k3291 in k3287 in k3283 in k3279 in k3275 in k3271 in k3267 in k3263 in k3259 in k3255 in k3251 in k3247 in k3243 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3342(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3342,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_truep(C_eqp(t4,C_make_character(117)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(115)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(102)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(85)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(83)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(70)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3352,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:582: read */
t6=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t3);}
else{
/* srfi-4.scm:587: old-hook */
t5=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k3350 */
static void C_ccall f_3352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3352,2,t0,t1);}
t2=C_i_symbolp(t1);
t3=(C_truep(t2)?t1:C_SCHEME_FALSE);
t4=C_eqp(t3,lf[131]);
t5=(C_truep(t4)?t4:C_eqp(t3,lf[132]));
if(C_truep(t5)){
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_memq(t3,((C_word*)t0)[4]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li98),tmp=(C_word)a,a+=5,tmp);
/* g921922 */
t8=t7;
f_3371(t8,((C_word*)t0)[5],t6);}
else{
/* srfi-4.scm:586: ##sys#read-error */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[133]+1)))(5,*((C_word*)lf[133]+1),((C_word*)t0)[5],((C_word*)t0)[2],lf[134],t3);}}}

/* g921 in k3350 */
static void C_fcall f_3371(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3371,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3382,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:585: read */
t6=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}

/* k3380 in g921 in k3350 */
static void C_ccall f_3382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g924925 */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* f4815 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f4815(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4815,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[20],lf[96]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f4822 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f4822(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4822,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[18],lf[95]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f4829 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f4829(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4829,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[16],lf[94]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f4836 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f4836(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4836,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[14],lf[93]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f4843 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f4843(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4843,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[12],lf[92]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f4850 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f4850(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4850,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[10],lf[91]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f4857 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f4857(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4857,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[8],lf[90]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f4864 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f4864(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4864,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[6],lf[89]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* unpack-copy in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_fcall f_3179(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3179,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3181,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp));}

/* f_3181 in unpack-copy in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3181(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3181,3,t0,t1,t2);}
t3=C_i_check_bytevector_2(t2,((C_word*)t0)[4]);
t4=C_block_size(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3191,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:522: ##sys#make-blob */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[84]+1)))(3,*((C_word*)lf[84]+1),t5,t4);}

/* k3189 */
static void C_ccall f_3191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3191,2,t0,t1);}
t2=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[7]);
t3=(C_truep(t2)?t2:C_eqp(C_fix(0),C_fixnum_modulo(((C_word*)t0)[6],((C_word*)t0)[7])));
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record2(&a,2,((C_word*)t0)[4],C_copy_block(((C_word*)t0)[3],t1)));}
else{
/* srfi-4.scm:528: ##sys#error */
t4=*((C_word*)lf[3]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[5],((C_word*)t0)[2],lf[88],((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[7]);}}

/* unpack in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_fcall f_3150(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3150,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3152,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word)li86),tmp=(C_word)a,a+=6,tmp));}

/* f_3152 in unpack in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3152(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3152,3,t0,t1,t2);}
t3=C_i_check_bytevector_2(t2,((C_word*)t0)[4]);
t4=C_block_size(t2);
t5=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[3]);
t6=(C_truep(t5)?t5:C_eqp(C_fix(0),C_fixnum_modulo(t4,((C_word*)t0)[3])));
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record2(&a,2,((C_word*)t0)[2],t2));}
else{
/* srfi-4.scm:516: ##sys#error */
t7=*((C_word*)lf[3]+1);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,t1,((C_word*)t0)[4],lf[86],((C_word*)t0)[2],t4,((C_word*)t0)[3]);}}

/* pack-copy in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_fcall f_3132(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3132,NULL,3,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3134,a[2]=t3,a[3]=t2,a[4]=((C_word)li84),tmp=(C_word)a,a+=5,tmp));}

/* f_3134 in pack-copy in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3134(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3134,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[3],((C_word*)t0)[2]);
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3144,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_block_size(t4);
/* srfi-4.scm:506: ##sys#make-blob */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[84]+1)))(3,*((C_word*)lf[84]+1),t5,t6);}

/* k3142 */
static void C_ccall f_3144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_copy_block(((C_word*)t0)[2],t1));}

/* f_3115 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3115(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3115,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[20]));}

/* f_3109 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3109(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3109,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[18]));}

/* f_3103 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3103(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3103,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[16]));}

/* f_3097 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3097(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3097,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[14]));}

/* f_3091 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3091(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3091,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[12]));}

/* f_3085 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3085(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3085,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[10]));}

/* f_3079 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3079(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3079,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[8]));}

/* f_3073 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3073(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3073,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[6]));}

/* f_3044 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3044(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3044,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[20],lf[74]);
t4=C_u_i_f64vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3053,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=((C_word)li74),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3053(t8,t1,C_fix(0));}

/* loop */
static void C_fcall f_3053(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3053,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3067,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* loop820 */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k3065 in loop */
static void C_ccall f_3067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3067,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_a_i_f64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]),t1));}

/* f_3015 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_3015(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3015,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[18],lf[73]);
t4=C_u_i_f32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3024,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=((C_word)li72),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3024(t8,t1,C_fix(0));}

/* loop */
static void C_fcall f_3024(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3024,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3038,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* loop813 */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k3036 in loop */
static void C_ccall f_3038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3038,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_a_i_f32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]),t1));}

/* f_2986 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2986(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2986,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[16],lf[72]);
t4=C_u_i_s32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2995,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2995(t8,t1,C_fix(0));}

/* loop */
static void C_fcall f_2995(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2995,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3009,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* loop806 */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k3007 in loop */
static void C_ccall f_3009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3009,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_a_i_s32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]),t1));}

/* f_2957 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2957(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2957,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[14],lf[71]);
t4=C_u_i_u32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2966,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2966(t8,t1,C_fix(0));}

/* loop */
static void C_fcall f_2966(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2966,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2980,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* loop799 */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k2978 in loop */
static void C_ccall f_2980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2980,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_a_i_u32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]),t1));}

/* f_2928 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2928(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2928,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[12],lf[70]);
t4=C_u_i_s16vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2937,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=((C_word)li66),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2937(t8,t1,C_fix(0));}

/* loop */
static void C_fcall f_2937(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2937,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2951,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* loop792 */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k2949 in loop */
static void C_ccall f_2951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2951,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_u_i_s16vector_ref(((C_word*)t0)[3],((C_word*)t0)[2]),t1));}

/* f_2899 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2899(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2899,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[10],lf[69]);
t4=C_u_i_u16vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2908,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2908(t8,t1,C_fix(0));}

/* loop */
static void C_fcall f_2908(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2908,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2922,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* loop785 */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k2920 in loop */
static void C_ccall f_2922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2922,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_u_i_u16vector_ref(((C_word*)t0)[3],((C_word*)t0)[2]),t1));}

/* f_2870 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2870(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2870,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[8],lf[68]);
t4=C_u_i_s8vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2879,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=((C_word)li62),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2879(t8,t1,C_fix(0));}

/* loop */
static void C_fcall f_2879(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2879,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2893,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* loop778 */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k2891 in loop */
static void C_ccall f_2893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2893,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_u_i_s8vector_ref(((C_word*)t0)[3],((C_word*)t0)[2]),t1));}

/* f_2841 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2841(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2841,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[6],lf[67]);
t4=C_u_i_u8vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2850,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=((C_word)li60),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2850(t8,t1,C_fix(0));}

/* loop */
static void C_fcall f_2850(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2850,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2864,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* loop771 */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k2862 in loop */
static void C_ccall f_2864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2864,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_u_i_u8vector_ref(((C_word*)t0)[3],((C_word*)t0)[2]),t1));}

/* f_2835 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2835(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2835r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2835r(t0,t1,t2);}}

static void C_ccall f_2835r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:450: list->f64vector */
t3=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* f_2829 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2829(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2829r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2829r(t0,t1,t2);}}

static void C_ccall f_2829r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:447: list->f32vector */
t3=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* f_2823 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2823(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2823r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2823r(t0,t1,t2);}}

static void C_ccall f_2823r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:444: list->s32vector */
t3=*((C_word*)lf[64]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* f_2817 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2817(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2817r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2817r(t0,t1,t2);}}

static void C_ccall f_2817r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:441: list->u32vector */
t3=*((C_word*)lf[63]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* f_2811 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2811(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2811r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2811r(t0,t1,t2);}}

static void C_ccall f_2811r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:438: list->s16vector */
t3=*((C_word*)lf[62]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* f_2805 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2805(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2805r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2805r(t0,t1,t2);}}

static void C_ccall f_2805r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:435: list->u16vector */
t3=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* f_2799 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2799(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2799r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2799r(t0,t1,t2);}}

static void C_ccall f_2799r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:432: list->s8vector */
t3=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* f_2793 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2793(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2793r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2793r(t0,t1,t2);}}

static void C_ccall f_2793r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm:429: list->u8vector */
t3=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* f_2760 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2760(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2760,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[20]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2767,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* make-f64vector725 */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k2765 */
static void C_ccall f_2767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2767,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2772,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2772(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* doloop729 in k2765 */
static void C_fcall f_2772(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2772,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[4];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2779,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* f64vector-set! */
t6=*((C_word*)lf[35]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[4],t3,C_slot(t2,C_fix(0)));}
else{
/* ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t4,((C_word*)t0)[2]);}}}

/* k2777 in doloop729 in k2765 */
static void C_ccall f_2779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[5])[1];
f_2772(t2,((C_word*)t0)[4],C_slot(((C_word*)t0)[3],C_fix(1)),C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* f_2727 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2727(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2727,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[18]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2734,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* make-f32vector712 */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k2732 */
static void C_ccall f_2734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2734,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2739,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word)li48),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2739(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* doloop716 in k2732 */
static void C_fcall f_2739(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2739,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[4];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2746,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* f32vector-set! */
t6=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[4],t3,C_slot(t2,C_fix(0)));}
else{
/* ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t4,((C_word*)t0)[2]);}}}

/* k2744 in doloop716 in k2732 */
static void C_ccall f_2746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[5])[1];
f_2739(t2,((C_word*)t0)[4],C_slot(((C_word*)t0)[3],C_fix(1)),C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* f_2694 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2694(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2694,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[16]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2701,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* make-s32vector699 */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k2699 */
static void C_ccall f_2701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2701,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2706,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word)li46),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2706(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* doloop703 in k2699 */
static void C_fcall f_2706(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2706,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[4];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2713,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* s32vector-set! */
t6=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[4],t3,C_slot(t2,C_fix(0)));}
else{
/* ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t4,((C_word*)t0)[2]);}}}

/* k2711 in doloop703 in k2699 */
static void C_ccall f_2713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[5])[1];
f_2706(t2,((C_word*)t0)[4],C_slot(((C_word*)t0)[3],C_fix(1)),C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* f_2661 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2661(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2661,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[14]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2668,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* make-u32vector686 */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k2666 */
static void C_ccall f_2668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2668,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2673,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2673(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* doloop690 in k2666 */
static void C_fcall f_2673(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2673,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[4];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2680,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* u32vector-set! */
t6=*((C_word*)lf[28]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[4],t3,C_slot(t2,C_fix(0)));}
else{
/* ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t4,((C_word*)t0)[2]);}}}

/* k2678 in doloop690 in k2666 */
static void C_ccall f_2680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[5])[1];
f_2673(t2,((C_word*)t0)[4],C_slot(((C_word*)t0)[3],C_fix(1)),C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* f_2628 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2628(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2628,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[12]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2635,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* make-s16vector673 */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k2633 */
static void C_ccall f_2635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2635,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2640,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2640(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* doloop677 in k2633 */
static void C_fcall f_2640(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2640,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[4];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2647,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* s16vector-set! */
t6=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[4],t3,C_slot(t2,C_fix(0)));}
else{
/* ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t4,((C_word*)t0)[2]);}}}

/* k2645 in doloop677 in k2633 */
static void C_ccall f_2647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[5])[1];
f_2640(t2,((C_word*)t0)[4],C_slot(((C_word*)t0)[3],C_fix(1)),C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* f_2595 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2595(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2595,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[10]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2602,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* make-u16vector660 */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k2600 */
static void C_ccall f_2602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2602,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2607,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2607(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* doloop664 in k2600 */
static void C_fcall f_2607(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2607,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[4];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2614,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* u16vector-set! */
t6=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[4],t3,C_slot(t2,C_fix(0)));}
else{
/* ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t4,((C_word*)t0)[2]);}}}

/* k2612 in doloop664 in k2600 */
static void C_ccall f_2614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[5])[1];
f_2607(t2,((C_word*)t0)[4],C_slot(((C_word*)t0)[3],C_fix(1)),C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* f_2562 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2562(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2562,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[8]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2569,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* make-s8vector647 */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k2567 */
static void C_ccall f_2569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2569,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2574,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word)li38),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2574(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* doloop651 in k2567 */
static void C_fcall f_2574(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2574,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[4];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2581,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* s8vector-set! */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[4],t3,C_slot(t2,C_fix(0)));}
else{
/* ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t4,((C_word*)t0)[2]);}}}

/* k2579 in doloop651 in k2567 */
static void C_ccall f_2581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[5])[1];
f_2574(t2,((C_word*)t0)[4],C_slot(((C_word*)t0)[3],C_fix(1)),C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* f_2529 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2529,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[6]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2536,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* make-u8vector634 */
t6=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t4);}

/* k2534 */
static void C_ccall f_2536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2536,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2541(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* doloop638 in k2534 */
static void C_fcall f_2541(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2541,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[4];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2548,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* u8vector-set! */
t6=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[4],t3,C_slot(t2,C_fix(0)));}
else{
/* ##sys#error-not-a-proper-list */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t4,((C_word*)t0)[2]);}}}

/* k2546 in doloop638 in k2534 */
static void C_ccall f_2548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[5])[1];
f_2541(t2,((C_word*)t0)[4],C_slot(((C_word*)t0)[3],C_fix(1)),C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* f_2419 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2419(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_2419r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2419r(t0,t1,t2,t3);}}

static void C_ccall f_2419r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(10);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_nullp(t3);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_TRUE:C_i_car(t13));
t16=C_i_nullp(t13);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
if(C_truep(C_i_nullp(t17))){
t18=C_i_check_exact_2(t2,lf[57]);
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2488,a[2]=((C_word*)t0)[3],a[3]=t15,a[4]=t11,a[5]=t1,a[6]=t2,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:382: alloc */
f_1630(t19,lf[57],C_fixnum_shift_left(t2,C_fix(3)),t11);}
else{
/* ##sys#error */
t18=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t1,lf[0],t17);}}

/* k2486 */
static void C_ccall f_2488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2488,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[20],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2453,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep(((C_word*)t0)[3])){
/* srfi-4.scm:383: set-finalizer! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(4,*((C_word*)lf[50]+1),t3,t2,((C_word*)t0)[2]);}
else{
t4=t3;
f_2453(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2453(2,t4,C_SCHEME_UNDEFINED);}}

/* k2451 in k2486 */
static void C_ccall f_2453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2453,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[5])[1];
if(C_truep(t2)){
t3=C_i_check_number_2(((C_word*)((C_word*)t0)[5])[1],lf[57]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2465,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(((C_word*)((C_word*)t0)[5])[1]))){
t5=t4;
f_2465(t5,C_SCHEME_UNDEFINED);}
else{
t5=C_mutate(((C_word *)((C_word*)t0)[5])+1,C_a_i_fix_to_flo(&a,1,((C_word*)((C_word*)t0)[5])[1]));
t6=t4;
f_2465(t6,t5);}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k2463 in k2451 in k2486 */
static void C_fcall f_2465(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2465,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2470,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li34),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2470(t2,C_fix(0)));}

/* doloop605 in k2463 in k2451 in k2486 */
static C_word C_fcall f_2470(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_f64vector_set(((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* f_2309 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2309(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_2309r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2309r(t0,t1,t2,t3);}}

static void C_ccall f_2309r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(10);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_nullp(t3);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_TRUE:C_i_car(t13));
t16=C_i_nullp(t13);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
if(C_truep(C_i_nullp(t17))){
t18=C_i_check_exact_2(t2,lf[56]);
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2378,a[2]=((C_word*)t0)[3],a[3]=t15,a[4]=t11,a[5]=t1,a[6]=t2,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:365: alloc */
f_1630(t19,lf[56],C_fixnum_shift_left(t2,C_fix(2)),t11);}
else{
/* ##sys#error */
t18=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t1,lf[0],t17);}}

/* k2376 */
static void C_ccall f_2378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2378,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[18],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2343,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep(((C_word*)t0)[3])){
/* srfi-4.scm:366: set-finalizer! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(4,*((C_word*)lf[50]+1),t3,t2,((C_word*)t0)[2]);}
else{
t4=t3;
f_2343(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2343(2,t4,C_SCHEME_UNDEFINED);}}

/* k2341 in k2376 */
static void C_ccall f_2343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2343,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[5])[1];
if(C_truep(t2)){
t3=C_i_check_number_2(((C_word*)((C_word*)t0)[5])[1],lf[56]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(((C_word*)((C_word*)t0)[5])[1]))){
t5=t4;
f_2355(t5,C_SCHEME_UNDEFINED);}
else{
t5=C_mutate(((C_word *)((C_word*)t0)[5])+1,C_a_i_fix_to_flo(&a,1,((C_word*)((C_word*)t0)[5])[1]));
t6=t4;
f_2355(t6,t5);}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k2353 in k2341 in k2376 */
static void C_fcall f_2355(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2355,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2360,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li32),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2360(t2,C_fix(0)));}

/* doloop575 in k2353 in k2341 in k2376 */
static C_word C_fcall f_2360(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_f32vector_set(((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* f_2203 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2203(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2203r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2203r(t0,t1,t2,t3);}}

static void C_ccall f_2203r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_TRUE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
if(C_truep(C_i_nullp(t15))){
t16=C_i_check_exact_2(t2,lf[55]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2268,a[2]=((C_word*)t0)[3],a[3]=t13,a[4]=t9,a[5]=t1,a[6]=t2,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:352: alloc */
f_1630(t17,lf[55],C_fixnum_shift_left(t2,C_fix(2)),t9);}
else{
/* ##sys#error */
t16=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,lf[0],t15);}}

/* k2266 */
static void C_ccall f_2268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2268,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[16],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2237,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep(((C_word*)t0)[3])){
/* srfi-4.scm:353: set-finalizer! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(4,*((C_word*)lf[50]+1),t3,t2,((C_word*)t0)[2]);}
else{
t4=t3;
f_2237(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2237(2,t4,C_SCHEME_UNDEFINED);}}

/* k2235 in k2266 */
static void C_ccall f_2237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2237,2,t0,t1);}
if(C_truep(((C_word*)t0)[5])){
t2=C_i_check_exact_2(((C_word*)t0)[5],lf[55]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2251,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li30),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_2251(t3,C_fix(0)));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* doloop546 in k2235 in k2266 */
static C_word C_fcall f_2251(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s32vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[2]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* f_2097 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_2097(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2097r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2097r(t0,t1,t2,t3);}}

static void C_ccall f_2097r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_TRUE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
if(C_truep(C_i_nullp(t15))){
t16=C_i_check_exact_2(t2,lf[54]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2162,a[2]=((C_word*)t0)[3],a[3]=t13,a[4]=t9,a[5]=t1,a[6]=t2,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:339: alloc */
f_1630(t17,lf[54],C_fixnum_shift_left(t2,C_fix(2)),t9);}
else{
/* ##sys#error */
t16=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,lf[0],t15);}}

/* k2160 */
static void C_ccall f_2162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2162,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[14],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2131,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep(((C_word*)t0)[3])){
/* srfi-4.scm:340: set-finalizer! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(4,*((C_word*)lf[50]+1),t3,t2,((C_word*)t0)[2]);}
else{
t4=t3;
f_2131(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2131(2,t4,C_SCHEME_UNDEFINED);}}

/* k2129 in k2160 */
static void C_ccall f_2131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2131,2,t0,t1);}
if(C_truep(((C_word*)t0)[5])){
t2=C_i_check_exact_2(((C_word*)t0)[5],lf[54]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2145,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_2145(t3,C_fix(0)));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* doloop517 in k2129 in k2160 */
static C_word C_fcall f_2145(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u32vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[2]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* f_1991 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_1991(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_1991r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1991r(t0,t1,t2,t3);}}

static void C_ccall f_1991r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_TRUE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
if(C_truep(C_i_nullp(t15))){
t16=C_i_check_exact_2(t2,lf[53]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2056,a[2]=((C_word*)t0)[3],a[3]=t13,a[4]=t9,a[5]=t1,a[6]=t2,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:326: alloc */
f_1630(t17,lf[53],C_fixnum_shift_left(t2,C_fix(1)),t9);}
else{
/* ##sys#error */
t16=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,lf[0],t15);}}

/* k2054 */
static void C_ccall f_2056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2056,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[12],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2025,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep(((C_word*)t0)[3])){
/* srfi-4.scm:327: set-finalizer! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(4,*((C_word*)lf[50]+1),t3,t2,((C_word*)t0)[2]);}
else{
t4=t3;
f_2025(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2025(2,t4,C_SCHEME_UNDEFINED);}}

/* k2023 in k2054 */
static void C_ccall f_2025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2025,2,t0,t1);}
if(C_truep(((C_word*)t0)[5])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:331: ##sys#check-exact-interval */
f_1215(t2,((C_word*)t0)[5],C_fix(-32768),C_fix(32767),lf[53]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* k2032 in k2023 in k2054 */
static void C_ccall f_2034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2034,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2039,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li26),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2039(t2,C_fix(0)));}

/* doloop488 in k2032 in k2023 in k2054 */
static C_word C_fcall f_2039(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s16vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[2]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* f_1885 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_1885(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_1885r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1885r(t0,t1,t2,t3);}}

static void C_ccall f_1885r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_TRUE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
if(C_truep(C_i_nullp(t15))){
t16=C_i_check_exact_2(t2,lf[52]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1950,a[2]=((C_word*)t0)[3],a[3]=t13,a[4]=t9,a[5]=t1,a[6]=t2,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:313: alloc */
f_1630(t17,lf[52],C_fixnum_shift_left(t2,C_fix(1)),t9);}
else{
/* ##sys#error */
t16=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,lf[0],t15);}}

/* k1948 */
static void C_ccall f_1950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1950,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[10],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1919,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep(((C_word*)t0)[3])){
/* srfi-4.scm:314: set-finalizer! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(4,*((C_word*)lf[50]+1),t3,t2,((C_word*)t0)[2]);}
else{
t4=t3;
f_1919(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_1919(2,t4,C_SCHEME_UNDEFINED);}}

/* k1917 in k1948 */
static void C_ccall f_1919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1919,2,t0,t1);}
if(C_truep(((C_word*)t0)[5])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1928,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:318: ##sys#check-exact-interval */
f_1215(t2,((C_word*)t0)[5],C_fix(0),C_fix(65535),lf[52]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* k1926 in k1917 in k1948 */
static void C_ccall f_1928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1928,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1933,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li24),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1933(t2,C_fix(0)));}

/* doloop459 in k1926 in k1917 in k1948 */
static C_word C_fcall f_1933(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u16vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[2]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* f_1779 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_1779(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_1779r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1779r(t0,t1,t2,t3);}}

static void C_ccall f_1779r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_TRUE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
if(C_truep(C_i_nullp(t15))){
t16=C_i_check_exact_2(t2,lf[51]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1844,a[2]=((C_word*)t0)[3],a[3]=t13,a[4]=t9,a[5]=t1,a[6]=t2,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:300: alloc */
f_1630(t17,lf[51],t2,t9);}
else{
/* ##sys#error */
t16=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,lf[0],t15);}}

/* k1842 */
static void C_ccall f_1844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1844,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[8],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1813,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep(((C_word*)t0)[3])){
/* srfi-4.scm:301: set-finalizer! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(4,*((C_word*)lf[50]+1),t3,t2,((C_word*)t0)[2]);}
else{
t4=t3;
f_1813(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_1813(2,t4,C_SCHEME_UNDEFINED);}}

/* k1811 in k1842 */
static void C_ccall f_1813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1813,2,t0,t1);}
if(C_truep(((C_word*)t0)[5])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1822,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:305: ##sys#check-exact-interval */
f_1215(t2,((C_word*)t0)[5],C_fix(-128),C_fix(127),lf[51]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* k1820 in k1811 in k1842 */
static void C_ccall f_1822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1822,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1827,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li22),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1827(t2,C_fix(0)));}

/* doloop430 in k1820 in k1811 in k1842 */
static C_word C_fcall f_1827(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s8vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[2]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* f_1673 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_1673(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_1673r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1673r(t0,t1,t2,t3);}}

static void C_ccall f_1673r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_TRUE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
if(C_truep(C_i_nullp(t15))){
t16=C_i_check_exact_2(t2,lf[49]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1738,a[2]=((C_word*)t0)[3],a[3]=t13,a[4]=t9,a[5]=t1,a[6]=t2,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:287: alloc */
f_1630(t17,lf[49],t2,t9);}
else{
/* ##sys#error */
t16=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,lf[0],t15);}}

/* k1736 */
static void C_ccall f_1738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1738,2,t0,t1);}
t2=C_a_i_record2(&a,2,lf[6],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1707,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep(((C_word*)t0)[3])){
/* srfi-4.scm:288: set-finalizer! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(4,*((C_word*)lf[50]+1),t3,t2,((C_word*)t0)[2]);}
else{
t4=t3;
f_1707(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_1707(2,t4,C_SCHEME_UNDEFINED);}}

/* k1705 in k1736 */
static void C_ccall f_1707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1707,2,t0,t1);}
if(C_truep(((C_word*)t0)[5])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:292: ##sys#check-exact-interval */
f_1215(t2,((C_word*)t0)[5],C_fix(0),C_fix(255),lf[49]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* k1714 in k1705 in k1736 */
static void C_ccall f_1716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1716,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1721,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li20),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1721(t2,C_fix(0)));}

/* doloop400 in k1714 in k1705 in k1736 */
static C_word C_fcall f_1721(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u8vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[2]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* f_1648 in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_1648(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1648,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1655,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_structurep(t2))){
t4=C_slot(t2,C_fix(0));
t5=t3;
f_1655(t5,C_i_memq(t4,lf[48]));}
else{
t4=t3;
f_1655(t4,C_SCHEME_FALSE);}}

/* k1653 */
static void C_fcall f_1655(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub364(C_SCHEME_UNDEFINED,t3));}
else{
/* srfi-4.scm:282: ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[46],lf[47],((C_word*)t0)[2]);}}

/* alloc in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_fcall f_1630(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1630,NULL,4,t1,t2,t3,t4);}
if(C_truep(t4)){
t5=t3;
t6=C_i_foreign_fixnum_argumentp(t5);
t7=stub359(C_SCHEME_UNDEFINED,t6);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
/* srfi-4.scm:271: ##sys#error */
t8=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,t2,lf[44],t3);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1646,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:272: ##sys#allocate-vector */
t6=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,t3,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}}

/* k1644 in alloc in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_1646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_string_to_bytevector(t1);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* ext-free in k1619 in k1615 in k1611 in k1607 in k1603 in k1599 in k1595 in k1591 */
static void C_ccall f_1628(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1628,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub364(C_SCHEME_UNDEFINED,t2));}

/* f_1555 */
static void C_ccall f_1555(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1555,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[20],lf[35]);
t6=C_u_i_64vector_length(t2);
t7=C_i_check_number_2(t4,lf[35]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1585,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t9=t3;
t10=C_i_check_exact_2(t9,lf[35]);
t11=C_fixnum_less_or_equal_p(C_fix(0),t9);
t12=(C_truep(t11)?C_fixnum_lessp(t9,t6):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=C_SCHEME_UNDEFINED;
t14=t8;
f_1585(2,t14,t13);}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t8,C_fix((C_word)C_OUT_OF_RANGE_ERROR),lf[35],t9,C_fix(0),t6);}}

/* k1583 */
static void C_ccall f_1585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1585,2,t0,t1);}
if(C_truep(C_blockp(((C_word*)t0)[5]))){
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_f64vector_set(((C_word*)t0)[3],((C_word*)t0)[2],t2));}
else{
t2=C_a_i_fix_to_flo(&a,1,((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_f64vector_set(((C_word*)t0)[3],((C_word*)t0)[2],t2));}}

/* f_1519 */
static void C_ccall f_1519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1519,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[18],lf[34]);
t6=C_u_i_32vector_length(t2);
t7=C_i_check_number_2(t4,lf[34]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1549,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t9=t3;
t10=C_i_check_exact_2(t9,lf[34]);
t11=C_fixnum_less_or_equal_p(C_fix(0),t9);
t12=(C_truep(t11)?C_fixnum_lessp(t9,t6):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=C_SCHEME_UNDEFINED;
t14=t8;
f_1549(2,t14,t13);}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t8,C_fix((C_word)C_OUT_OF_RANGE_ERROR),lf[34],t9,C_fix(0),t6);}}

/* k1547 */
static void C_ccall f_1549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1549,2,t0,t1);}
if(C_truep(C_blockp(((C_word*)t0)[5]))){
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_f32vector_set(((C_word*)t0)[3],((C_word*)t0)[2],t2));}
else{
t2=C_a_i_fix_to_flo(&a,1,((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_f32vector_set(((C_word*)t0)[3],((C_word*)t0)[2],t2));}}

/* f_1478 */
static void C_ccall f_1478(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1478,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[16],lf[32]);
t6=C_u_i_32vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1485,a[2]=t6,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:144: ##sys#check-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[31]+1)))(4,*((C_word*)lf[31]+1),t7,t4,lf[32]);}

/* k1483 */
static void C_ccall f_1485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1485,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fits_in_int_p(((C_word*)t0)[3]))){
t3=t2;
f_1488(2,t3,C_SCHEME_UNDEFINED);}
else{
/* srfi-4.scm:146: ##sys#error */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[32],lf[33],((C_word*)t0)[3]);}}

/* k1486 in k1483 */
static void C_ccall f_1488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1511,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_exact_2(t3,lf[32]);
t5=C_fixnum_less_or_equal_p(C_fix(0),t3);
t6=(C_truep(t5)?C_fixnum_lessp(t3,((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_u_i_s32vector_set(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]));}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t2,C_fix((C_word)C_OUT_OF_RANGE_ERROR),lf[32],t3,C_fix(0),((C_word*)t0)[2]);}}

/* k1509 in k1486 in k1483 */
static void C_ccall f_1511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_s32vector_set(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]));}

/* f_1424 */
static void C_ccall f_1424(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1424,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[14],lf[28]);
t6=C_u_i_32vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1431,a[2]=t6,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:133: ##sys#check-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[31]+1)))(4,*((C_word*)lf[31]+1),t7,t4,lf[28]);}

/* k1429 */
static void C_ccall f_1431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_negativep(((C_word*)t0)[3]))){
/* srfi-4.scm:135: ##sys#error */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[28],lf[29],((C_word*)t0)[3]);}
else{
if(C_truep(C_fits_in_unsigned_int_p(((C_word*)t0)[3]))){
t3=C_SCHEME_UNDEFINED;
t4=t2;
f_1434(2,t4,t3);}
else{
/* srfi-4.scm:137: ##sys#error */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[28],lf[30],((C_word*)t0)[3]);}}}

/* k1432 in k1429 */
static void C_ccall f_1434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1434,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1457,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_exact_2(t3,lf[28]);
t5=C_fixnum_less_or_equal_p(C_fix(0),t3);
t6=(C_truep(t5)?C_fixnum_lessp(t3,((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_u_i_u32vector_set(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]));}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t2,C_fix((C_word)C_OUT_OF_RANGE_ERROR),lf[28],t3,C_fix(0),((C_word*)t0)[2]);}}

/* k1455 in k1432 in k1429 */
static void C_ccall f_1457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_u32vector_set(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]));}

/* f_1392 */
static void C_ccall f_1392(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1392,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[12],lf[27]);
t6=C_u_i_16vector_length(t2);
t7=C_i_check_exact_2(t4,lf[27]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1422,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=t3;
t10=C_i_check_exact_2(t9,lf[27]);
t11=C_fixnum_less_or_equal_p(C_fix(0),t9);
t12=(C_truep(t11)?C_fixnum_lessp(t9,t6):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_u_i_s16vector_set(t2,t3,t4));}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t8,C_fix((C_word)C_OUT_OF_RANGE_ERROR),lf[27],t9,C_fix(0),t6);}}

/* k1420 */
static void C_ccall f_1422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_s16vector_set(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]));}

/* f_1351 */
static void C_ccall f_1351(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1351,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[10],lf[25]);
t6=C_u_i_16vector_length(t2);
t7=C_i_check_exact_2(t4,lf[25]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1361,a[2]=t6,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* srfi-4.scm:119: ##sys#error */
t9=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[25],lf[26],t4);}
else{
t9=t8;
f_1361(2,t9,C_SCHEME_UNDEFINED);}}

/* k1359 */
static void C_ccall f_1361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1384,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_exact_2(t3,lf[25]);
t5=C_fixnum_less_or_equal_p(C_fix(0),t3);
t6=(C_truep(t5)?C_fixnum_lessp(t3,((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_u_i_u16vector_set(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]));}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t2,C_fix((C_word)C_OUT_OF_RANGE_ERROR),lf[25],t3,C_fix(0),((C_word*)t0)[2]);}}

/* k1382 in k1359 */
static void C_ccall f_1384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_u16vector_set(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]));}

/* f_1319 */
static void C_ccall f_1319(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1319,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[8],lf[24]);
t6=C_u_i_8vector_length(t2);
t7=C_i_check_exact_2(t4,lf[24]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1349,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=t3;
t10=C_i_check_exact_2(t9,lf[24]);
t11=C_fixnum_less_or_equal_p(C_fix(0),t9);
t12=(C_truep(t11)?C_fixnum_lessp(t9,t6):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_u_i_s8vector_set(t2,t3,t4));}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t8,C_fix((C_word)C_OUT_OF_RANGE_ERROR),lf[24],t9,C_fix(0),t6);}}

/* k1347 */
static void C_ccall f_1349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_s8vector_set(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]));}

/* f_1278 */
static void C_ccall f_1278(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1278,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[6],lf[21]);
t6=C_u_i_8vector_length(t2);
t7=C_i_check_exact_2(t4,lf[21]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1288,a[2]=t6,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* srfi-4.scm:103: ##sys#error */
t9=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[21],lf[23],t4);}
else{
t9=t8;
f_1288(2,t9,C_SCHEME_UNDEFINED);}}

/* k1286 */
static void C_ccall f_1288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1288,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1311,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_exact_2(t3,lf[21]);
t5=C_fixnum_less_or_equal_p(C_fix(0),t3);
t6=(C_truep(t5)?C_fixnum_lessp(t3,((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_u_i_u8vector_set(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]));}
else{
/* srfi-4.scm:56: ##sys#error-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[22]+1)))(7,*((C_word*)lf[22]+1),t2,C_fix((C_word)C_OUT_OF_RANGE_ERROR),lf[21],t3,C_fix(0),((C_word*)t0)[2]);}}

/* k1309 in k1286 */
static void C_ccall f_1311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_u_i_u8vector_set(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]));}

/* f_1272 */
static void C_ccall f_1272(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1272,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[20],lf[19]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_64vector_length(t2));}

/* f_1266 */
static void C_ccall f_1266(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1266,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[18],lf[17]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_32vector_length(t2));}

/* f_1260 */
static void C_ccall f_1260(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1260,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[16],lf[15]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_32vector_length(t2));}

/* f_1254 */
static void C_ccall f_1254(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1254,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[14],lf[13]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_32vector_length(t2));}

/* f_1248 */
static void C_ccall f_1248(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1248,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[12],lf[11]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_16vector_length(t2));}

/* f_1242 */
static void C_ccall f_1242(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1242,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[10],lf[9]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_16vector_length(t2));}

/* f_1236 */
static void C_ccall f_1236(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1236,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[8],lf[7]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_8vector_length(t2));}

/* f_1230 */
static void C_ccall f_1230(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1230,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[6],lf[5]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_8vector_length(t2));}

/* ##sys#check-exact-interval */
static void C_fcall f_1215(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1215,NULL,5,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_lessp(t2,t3);
t8=(C_truep(t7)?t7:C_fixnum_greaterp(t2,t4));
if(C_truep(t8)){
/* srfi-4.scm:51: ##sys#error */
t9=*((C_word*)lf[3]+1);
((C_proc7)(void*)(*((C_word*)t9+1)))(7,t9,t1,t5,lf[4],t2,t3,t4);}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[251] = {
{"toplevel:srfi_2d4_2escm",(void*)C_srfi_2d4_toplevel},
{"f_4118:srfi_2d4_2escm",(void*)f_4118},
{"f_4145:srfi_2d4_2escm",(void*)f_4145},
{"f_1593:srfi_2d4_2escm",(void*)f_1593},
{"f_4089:srfi_2d4_2escm",(void*)f_4089},
{"f_4116:srfi_2d4_2escm",(void*)f_4116},
{"f_1597:srfi_2d4_2escm",(void*)f_1597},
{"f_4060:srfi_2d4_2escm",(void*)f_4060},
{"f_4087:srfi_2d4_2escm",(void*)f_4087},
{"f_1601:srfi_2d4_2escm",(void*)f_1601},
{"f_4031:srfi_2d4_2escm",(void*)f_4031},
{"f_4058:srfi_2d4_2escm",(void*)f_4058},
{"f_1605:srfi_2d4_2escm",(void*)f_1605},
{"f_4002:srfi_2d4_2escm",(void*)f_4002},
{"f_4029:srfi_2d4_2escm",(void*)f_4029},
{"f_1609:srfi_2d4_2escm",(void*)f_1609},
{"f_3973:srfi_2d4_2escm",(void*)f_3973},
{"f_4000:srfi_2d4_2escm",(void*)f_4000},
{"f_1613:srfi_2d4_2escm",(void*)f_1613},
{"f_3944:srfi_2d4_2escm",(void*)f_3944},
{"f_3971:srfi_2d4_2escm",(void*)f_3971},
{"f_1617:srfi_2d4_2escm",(void*)f_1617},
{"f_3915:srfi_2d4_2escm",(void*)f_3915},
{"f_3942:srfi_2d4_2escm",(void*)f_3942},
{"f_1621:srfi_2d4_2escm",(void*)f_1621},
{"f_3245:srfi_2d4_2escm",(void*)f_3245},
{"f_3249:srfi_2d4_2escm",(void*)f_3249},
{"f_3253:srfi_2d4_2escm",(void*)f_3253},
{"f_3257:srfi_2d4_2escm",(void*)f_3257},
{"f_3261:srfi_2d4_2escm",(void*)f_3261},
{"f_3265:srfi_2d4_2escm",(void*)f_3265},
{"f_3269:srfi_2d4_2escm",(void*)f_3269},
{"f_3273:srfi_2d4_2escm",(void*)f_3273},
{"f_3277:srfi_2d4_2escm",(void*)f_3277},
{"f_3281:srfi_2d4_2escm",(void*)f_3281},
{"f_3285:srfi_2d4_2escm",(void*)f_3285},
{"f_3289:srfi_2d4_2escm",(void*)f_3289},
{"f_3293:srfi_2d4_2escm",(void*)f_3293},
{"f_3297:srfi_2d4_2escm",(void*)f_3297},
{"f_3301:srfi_2d4_2escm",(void*)f_3301},
{"f_3305:srfi_2d4_2escm",(void*)f_3305},
{"f_3309:srfi_2d4_2escm",(void*)f_3309},
{"f_3313:srfi_2d4_2escm",(void*)f_3313},
{"f_3317:srfi_2d4_2escm",(void*)f_3317},
{"f_3321:srfi_2d4_2escm",(void*)f_3321},
{"f_3325:srfi_2d4_2escm",(void*)f_3325},
{"f_3329:srfi_2d4_2escm",(void*)f_3329},
{"f_3333:srfi_2d4_2escm",(void*)f_3333},
{"f_3337:srfi_2d4_2escm",(void*)f_3337},
{"f_3913:srfi_2d4_2escm",(void*)f_3913},
{"f_3804:srfi_2d4_2escm",(void*)f_3804},
{"f_3826:srfi_2d4_2escm",(void*)f_3826},
{"f_3853:srfi_2d4_2escm",(void*)f_3853},
{"f_3858:srfi_2d4_2escm",(void*)f_3858},
{"f_3862:srfi_2d4_2escm",(void*)f_3862},
{"f_3880:srfi_2d4_2escm",(void*)f_3880},
{"f_3871:srfi_2d4_2escm",(void*)f_3871},
{"f_3835:srfi_2d4_2escm",(void*)f_3835},
{"f_3838:srfi_2d4_2escm",(void*)f_3838},
{"f_3795:srfi_2d4_2escm",(void*)f_3795},
{"f_3803:srfi_2d4_2escm",(void*)f_3803},
{"f_3703:srfi_2d4_2escm",(void*)f_3703},
{"f_3725:srfi_2d4_2escm",(void*)f_3725},
{"f_3602:srfi_2d4_2escm",(void*)f_3602},
{"f_3618:srfi_2d4_2escm",(void*)f_3618},
{"f_3633:srfi_2d4_2escm",(void*)f_3633},
{"f_3638:srfi_2d4_2escm",(void*)f_3638},
{"f_3648:srfi_2d4_2escm",(void*)f_3648},
{"f_3596:srfi_2d4_2escm",(void*)f_3596},
{"f_3590:srfi_2d4_2escm",(void*)f_3590},
{"f_3584:srfi_2d4_2escm",(void*)f_3584},
{"f_3578:srfi_2d4_2escm",(void*)f_3578},
{"f_3572:srfi_2d4_2escm",(void*)f_3572},
{"f_3566:srfi_2d4_2escm",(void*)f_3566},
{"f_3560:srfi_2d4_2escm",(void*)f_3560},
{"f_3554:srfi_2d4_2escm",(void*)f_3554},
{"f_3471:srfi_2d4_2escm",(void*)f_3471},
{"f_3504:srfi_2d4_2escm",(void*)f_3504},
{"f_3527:srfi_2d4_2escm",(void*)f_3527},
{"f_3533:srfi_2d4_2escm",(void*)f_3533},
{"f_3403:srfi_2d4_2escm",(void*)f_3403},
{"f_3413:srfi_2d4_2escm",(void*)f_3413},
{"f_3416:srfi_2d4_2escm",(void*)f_3416},
{"f_3426:srfi_2d4_2escm",(void*)f_3426},
{"f_3342:srfi_2d4_2escm",(void*)f_3342},
{"f_3352:srfi_2d4_2escm",(void*)f_3352},
{"f_3371:srfi_2d4_2escm",(void*)f_3371},
{"f_3382:srfi_2d4_2escm",(void*)f_3382},
{"f4815:srfi_2d4_2escm",(void*)f4815},
{"f4822:srfi_2d4_2escm",(void*)f4822},
{"f4829:srfi_2d4_2escm",(void*)f4829},
{"f4836:srfi_2d4_2escm",(void*)f4836},
{"f4843:srfi_2d4_2escm",(void*)f4843},
{"f4850:srfi_2d4_2escm",(void*)f4850},
{"f4857:srfi_2d4_2escm",(void*)f4857},
{"f4864:srfi_2d4_2escm",(void*)f4864},
{"f_3179:srfi_2d4_2escm",(void*)f_3179},
{"f_3181:srfi_2d4_2escm",(void*)f_3181},
{"f_3191:srfi_2d4_2escm",(void*)f_3191},
{"f_3150:srfi_2d4_2escm",(void*)f_3150},
{"f_3152:srfi_2d4_2escm",(void*)f_3152},
{"f_3132:srfi_2d4_2escm",(void*)f_3132},
{"f_3134:srfi_2d4_2escm",(void*)f_3134},
{"f_3144:srfi_2d4_2escm",(void*)f_3144},
{"f_3115:srfi_2d4_2escm",(void*)f_3115},
{"f_3109:srfi_2d4_2escm",(void*)f_3109},
{"f_3103:srfi_2d4_2escm",(void*)f_3103},
{"f_3097:srfi_2d4_2escm",(void*)f_3097},
{"f_3091:srfi_2d4_2escm",(void*)f_3091},
{"f_3085:srfi_2d4_2escm",(void*)f_3085},
{"f_3079:srfi_2d4_2escm",(void*)f_3079},
{"f_3073:srfi_2d4_2escm",(void*)f_3073},
{"f_3044:srfi_2d4_2escm",(void*)f_3044},
{"f_3053:srfi_2d4_2escm",(void*)f_3053},
{"f_3067:srfi_2d4_2escm",(void*)f_3067},
{"f_3015:srfi_2d4_2escm",(void*)f_3015},
{"f_3024:srfi_2d4_2escm",(void*)f_3024},
{"f_3038:srfi_2d4_2escm",(void*)f_3038},
{"f_2986:srfi_2d4_2escm",(void*)f_2986},
{"f_2995:srfi_2d4_2escm",(void*)f_2995},
{"f_3009:srfi_2d4_2escm",(void*)f_3009},
{"f_2957:srfi_2d4_2escm",(void*)f_2957},
{"f_2966:srfi_2d4_2escm",(void*)f_2966},
{"f_2980:srfi_2d4_2escm",(void*)f_2980},
{"f_2928:srfi_2d4_2escm",(void*)f_2928},
{"f_2937:srfi_2d4_2escm",(void*)f_2937},
{"f_2951:srfi_2d4_2escm",(void*)f_2951},
{"f_2899:srfi_2d4_2escm",(void*)f_2899},
{"f_2908:srfi_2d4_2escm",(void*)f_2908},
{"f_2922:srfi_2d4_2escm",(void*)f_2922},
{"f_2870:srfi_2d4_2escm",(void*)f_2870},
{"f_2879:srfi_2d4_2escm",(void*)f_2879},
{"f_2893:srfi_2d4_2escm",(void*)f_2893},
{"f_2841:srfi_2d4_2escm",(void*)f_2841},
{"f_2850:srfi_2d4_2escm",(void*)f_2850},
{"f_2864:srfi_2d4_2escm",(void*)f_2864},
{"f_2835:srfi_2d4_2escm",(void*)f_2835},
{"f_2829:srfi_2d4_2escm",(void*)f_2829},
{"f_2823:srfi_2d4_2escm",(void*)f_2823},
{"f_2817:srfi_2d4_2escm",(void*)f_2817},
{"f_2811:srfi_2d4_2escm",(void*)f_2811},
{"f_2805:srfi_2d4_2escm",(void*)f_2805},
{"f_2799:srfi_2d4_2escm",(void*)f_2799},
{"f_2793:srfi_2d4_2escm",(void*)f_2793},
{"f_2760:srfi_2d4_2escm",(void*)f_2760},
{"f_2767:srfi_2d4_2escm",(void*)f_2767},
{"f_2772:srfi_2d4_2escm",(void*)f_2772},
{"f_2779:srfi_2d4_2escm",(void*)f_2779},
{"f_2727:srfi_2d4_2escm",(void*)f_2727},
{"f_2734:srfi_2d4_2escm",(void*)f_2734},
{"f_2739:srfi_2d4_2escm",(void*)f_2739},
{"f_2746:srfi_2d4_2escm",(void*)f_2746},
{"f_2694:srfi_2d4_2escm",(void*)f_2694},
{"f_2701:srfi_2d4_2escm",(void*)f_2701},
{"f_2706:srfi_2d4_2escm",(void*)f_2706},
{"f_2713:srfi_2d4_2escm",(void*)f_2713},
{"f_2661:srfi_2d4_2escm",(void*)f_2661},
{"f_2668:srfi_2d4_2escm",(void*)f_2668},
{"f_2673:srfi_2d4_2escm",(void*)f_2673},
{"f_2680:srfi_2d4_2escm",(void*)f_2680},
{"f_2628:srfi_2d4_2escm",(void*)f_2628},
{"f_2635:srfi_2d4_2escm",(void*)f_2635},
{"f_2640:srfi_2d4_2escm",(void*)f_2640},
{"f_2647:srfi_2d4_2escm",(void*)f_2647},
{"f_2595:srfi_2d4_2escm",(void*)f_2595},
{"f_2602:srfi_2d4_2escm",(void*)f_2602},
{"f_2607:srfi_2d4_2escm",(void*)f_2607},
{"f_2614:srfi_2d4_2escm",(void*)f_2614},
{"f_2562:srfi_2d4_2escm",(void*)f_2562},
{"f_2569:srfi_2d4_2escm",(void*)f_2569},
{"f_2574:srfi_2d4_2escm",(void*)f_2574},
{"f_2581:srfi_2d4_2escm",(void*)f_2581},
{"f_2529:srfi_2d4_2escm",(void*)f_2529},
{"f_2536:srfi_2d4_2escm",(void*)f_2536},
{"f_2541:srfi_2d4_2escm",(void*)f_2541},
{"f_2548:srfi_2d4_2escm",(void*)f_2548},
{"f_2419:srfi_2d4_2escm",(void*)f_2419},
{"f_2488:srfi_2d4_2escm",(void*)f_2488},
{"f_2453:srfi_2d4_2escm",(void*)f_2453},
{"f_2465:srfi_2d4_2escm",(void*)f_2465},
{"f_2470:srfi_2d4_2escm",(void*)f_2470},
{"f_2309:srfi_2d4_2escm",(void*)f_2309},
{"f_2378:srfi_2d4_2escm",(void*)f_2378},
{"f_2343:srfi_2d4_2escm",(void*)f_2343},
{"f_2355:srfi_2d4_2escm",(void*)f_2355},
{"f_2360:srfi_2d4_2escm",(void*)f_2360},
{"f_2203:srfi_2d4_2escm",(void*)f_2203},
{"f_2268:srfi_2d4_2escm",(void*)f_2268},
{"f_2237:srfi_2d4_2escm",(void*)f_2237},
{"f_2251:srfi_2d4_2escm",(void*)f_2251},
{"f_2097:srfi_2d4_2escm",(void*)f_2097},
{"f_2162:srfi_2d4_2escm",(void*)f_2162},
{"f_2131:srfi_2d4_2escm",(void*)f_2131},
{"f_2145:srfi_2d4_2escm",(void*)f_2145},
{"f_1991:srfi_2d4_2escm",(void*)f_1991},
{"f_2056:srfi_2d4_2escm",(void*)f_2056},
{"f_2025:srfi_2d4_2escm",(void*)f_2025},
{"f_2034:srfi_2d4_2escm",(void*)f_2034},
{"f_2039:srfi_2d4_2escm",(void*)f_2039},
{"f_1885:srfi_2d4_2escm",(void*)f_1885},
{"f_1950:srfi_2d4_2escm",(void*)f_1950},
{"f_1919:srfi_2d4_2escm",(void*)f_1919},
{"f_1928:srfi_2d4_2escm",(void*)f_1928},
{"f_1933:srfi_2d4_2escm",(void*)f_1933},
{"f_1779:srfi_2d4_2escm",(void*)f_1779},
{"f_1844:srfi_2d4_2escm",(void*)f_1844},
{"f_1813:srfi_2d4_2escm",(void*)f_1813},
{"f_1822:srfi_2d4_2escm",(void*)f_1822},
{"f_1827:srfi_2d4_2escm",(void*)f_1827},
{"f_1673:srfi_2d4_2escm",(void*)f_1673},
{"f_1738:srfi_2d4_2escm",(void*)f_1738},
{"f_1707:srfi_2d4_2escm",(void*)f_1707},
{"f_1716:srfi_2d4_2escm",(void*)f_1716},
{"f_1721:srfi_2d4_2escm",(void*)f_1721},
{"f_1648:srfi_2d4_2escm",(void*)f_1648},
{"f_1655:srfi_2d4_2escm",(void*)f_1655},
{"f_1630:srfi_2d4_2escm",(void*)f_1630},
{"f_1646:srfi_2d4_2escm",(void*)f_1646},
{"f_1628:srfi_2d4_2escm",(void*)f_1628},
{"f_1555:srfi_2d4_2escm",(void*)f_1555},
{"f_1585:srfi_2d4_2escm",(void*)f_1585},
{"f_1519:srfi_2d4_2escm",(void*)f_1519},
{"f_1549:srfi_2d4_2escm",(void*)f_1549},
{"f_1478:srfi_2d4_2escm",(void*)f_1478},
{"f_1485:srfi_2d4_2escm",(void*)f_1485},
{"f_1488:srfi_2d4_2escm",(void*)f_1488},
{"f_1511:srfi_2d4_2escm",(void*)f_1511},
{"f_1424:srfi_2d4_2escm",(void*)f_1424},
{"f_1431:srfi_2d4_2escm",(void*)f_1431},
{"f_1434:srfi_2d4_2escm",(void*)f_1434},
{"f_1457:srfi_2d4_2escm",(void*)f_1457},
{"f_1392:srfi_2d4_2escm",(void*)f_1392},
{"f_1422:srfi_2d4_2escm",(void*)f_1422},
{"f_1351:srfi_2d4_2escm",(void*)f_1351},
{"f_1361:srfi_2d4_2escm",(void*)f_1361},
{"f_1384:srfi_2d4_2escm",(void*)f_1384},
{"f_1319:srfi_2d4_2escm",(void*)f_1319},
{"f_1349:srfi_2d4_2escm",(void*)f_1349},
{"f_1278:srfi_2d4_2escm",(void*)f_1278},
{"f_1288:srfi_2d4_2escm",(void*)f_1288},
{"f_1311:srfi_2d4_2escm",(void*)f_1311},
{"f_1272:srfi_2d4_2escm",(void*)f_1272},
{"f_1266:srfi_2d4_2escm",(void*)f_1266},
{"f_1260:srfi_2d4_2escm",(void*)f_1260},
{"f_1254:srfi_2d4_2escm",(void*)f_1254},
{"f_1248:srfi_2d4_2escm",(void*)f_1248},
{"f_1242:srfi_2d4_2escm",(void*)f_1242},
{"f_1236:srfi_2d4_2escm",(void*)f_1236},
{"f_1230:srfi_2d4_2escm",(void*)f_1230},
{"f_1215:srfi_2d4_2escm",(void*)f_1215},
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
