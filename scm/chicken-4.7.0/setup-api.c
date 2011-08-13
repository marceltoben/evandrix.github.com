/* Generated from setup-api.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:18
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: setup-api.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -feature chicken-compile-shared -dynamic -emit-import-library setup-api -output-file setup-api.c
   used units: library eval srfi_2d1 irregex utils posix srfi_2d13 extras ports data_2dstructures files
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[349];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,14),40,102,95,49,57,57,49,32,115,116,114,53,54,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,18),40,102,95,50,48,51,48,32,46,32,116,109,112,55,49,55,50,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,18),40,102,95,50,48,54,50,32,46,32,116,109,112,57,48,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,30),40,115,101,116,117,112,45,97,112,105,35,117,115,101,114,45,105,110,115,116,97,108,108,45,115,101,116,117,112,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,18),40,102,95,50,49,53,57,32,46,32,97,114,103,115,49,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,7),40,97,50,50,49,50,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,7),40,97,50,50,48,50,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,32),40,102,95,50,49,56,52,32,119,104,105,99,104,49,55,56,32,114,120,49,55,57,32,115,117,98,115,116,49,56,48,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,28),40,102,95,50,51,48,51,32,110,97,109,101,50,50,51,32,46,32,116,109,112,50,50,50,50,50,52,41,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,16),40,102,95,50,51,52,51,32,110,97,109,101,50,51,50,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,22),40,114,101,103,32,110,97,109,101,50,51,54,32,114,110,97,109,101,50,51,55,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,33),40,115,101,116,117,112,45,97,112,105,35,102,105,120,109,97,107,101,116,97,114,103,101,116,32,102,105,108,101,51,50,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,50,54,32,103,51,51,50,52,48,52,41,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,57,51,32,103,51,48,53,51,49,50,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,54,54,32,103,50,55,56,50,56,53,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,51,56,32,103,51,53,48,51,53,54,41,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,55,57,32,103,51,57,49,51,57,55,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,19),40,102,95,50,54,51,48,32,101,120,112,108,105,115,116,51,50,51,41,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,37),40,115,101,116,117,112,45,97,112,105,35,109,97,107,101,58,102,111,114,109,45,101,114,114,111,114,32,115,52,57,52,32,112,52,57,53,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,42),40,115,101,116,117,112,45,97,112,105,35,109,97,107,101,58,108,105,110,101,45,101,114,114,111,114,32,115,53,49,50,32,112,53,49,51,32,110,53,49,52,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,11),40,103,54,49,49,32,100,54,50,48,41,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,7),40,97,51,49,55,49,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,14),40,97,51,49,54,53,32,101,120,110,54,57,49,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,7),40,97,51,50,49,50,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,7),40,97,51,50,50,55,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,20),40,97,51,50,50,49,32,46,32,97,114,103,115,54,56,53,55,48,55,41,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,51,50,48,54,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,15),40,97,51,49,53,57,32,107,54,56,52,54,57,48,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,14),40,97,51,51,48,49,32,100,101,112,54,51,48,41,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,49,48,32,103,54,49,54,54,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,13),40,109,97,116,99,104,63,32,115,52,56,52,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,108,105,110,101,115,52,56,54,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,23),40,102,95,51,48,57,52,32,115,53,56,57,32,105,110,100,101,110,116,53,57,48,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,52,56,32,103,55,53,52,55,54,57,41,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,11),40,103,55,51,50,32,102,55,52,48,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,51,49,32,103,55,51,55,55,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,14),40,97,50,57,56,55,32,100,101,112,53,54,51,41,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,15),40,97,50,57,49,56,32,108,105,110,101,53,52,50,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,49),40,115,101,116,117,112,45,97,112,105,35,109,97,107,101,58,109,97,107,101,47,112,114,111,99,47,104,101,108,112,101,114,32,115,112,101,99,53,56,51,32,97,114,103,118,53,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,32),40,102,95,51,53,50,52,32,103,55,56,50,55,56,51,55,57,50,32,46,32,114,118,97,114,55,56,52,55,57,51,41};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,8),40,102,95,51,54,48,57,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,13),40,118,101,114,98,32,100,105,114,56,54,53,41,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,15),40,102,95,54,49,50,53,32,100,105,114,56,55,55,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,15),40,102,95,54,49,51,51,32,100,105,114,56,55,57,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,7),40,97,51,55,48,57,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,7),40,97,51,55,49,56,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,45),40,115,101,116,117,112,45,97,112,105,35,119,114,105,116,101,45,105,110,102,111,32,105,100,56,56,57,32,102,105,108,101,115,56,57,48,32,105,110,102,111,56,57,49,41,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,34),40,102,95,51,55,53,52,32,102,114,111,109,57,52,55,32,116,111,57,52,56,32,46,32,116,109,112,57,52,54,57,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,22),40,102,95,51,56,56,50,32,102,114,111,109,57,55,53,32,116,111,57,55,54,41,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,15),40,102,95,51,57,50,57,32,100,105,114,57,56,55,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,46),40,115,101,116,117,112,45,97,112,105,35,109,97,107,101,45,100,101,115,116,45,112,97,116,104,110,97,109,101,32,112,97,116,104,57,57,53,32,102,105,108,101,57,57,54,41,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,48,49,32,103,49,48,49,51,49,48,50,56,41};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,35),40,115,101,116,117,112,45,97,112,105,35,99,104,101,99,107,45,102,105,108,101,108,105,115,116,32,102,108,105,115,116,57,57,56,41,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,47),40,115,101,116,117,112,45,97,112,105,35,115,117,112,112,108,121,45,118,101,114,115,105,111,110,32,105,110,102,111,49,48,54,49,32,118,101,114,115,105,111,110,49,48,54,50,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,7),40,97,52,50,52,56,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,31),40,102,95,52,49,54,55,32,110,97,109,101,49,48,55,50,32,46,32,116,109,112,49,48,55,49,49,48,55,51,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,13),40,103,49,49,52,48,32,102,49,49,53,49,41,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,51,52,32,103,49,49,52,54,49,49,55,54,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,39),40,102,95,52,50,54,52,32,105,100,49,49,49,57,32,102,105,108,101,115,49,49,50,48,32,46,32,116,109,112,49,49,49,56,49,49,50,49,41,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,13),40,101,120,105,102,121,32,102,49,49,57,56,41,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,13),40,103,49,50,51,57,32,102,49,50,53,48,41,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,50,51,51,32,103,49,50,52,53,49,50,54,50,41};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,13),40,103,49,50,49,49,32,102,49,50,50,50,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,50,48,53,32,103,49,50,49,55,49,50,50,52,41};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,39),40,102,95,52,52,54,48,32,105,100,49,49,56,56,32,102,105,108,101,115,49,49,56,57,32,46,32,116,109,112,49,49,56,55,49,49,57,48,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,13),40,103,49,50,57,54,32,102,49,51,48,55,41,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,50,57,48,32,103,49,51,48,50,49,51,49,57,41};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,39),40,102,95,52,54,56,49,32,105,100,49,50,55,53,32,102,105,108,101,115,49,50,55,54,32,46,32,116,109,112,49,50,55,52,49,50,55,55,41,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,33),40,115,101,116,117,112,45,97,112,105,35,114,101,112,111,45,112,97,116,104,32,116,109,112,49,51,51,55,49,51,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,37),40,115,101,116,117,112,45,97,112,105,35,101,110,115,117,114,101,45,100,105,114,101,99,116,111,114,121,32,112,97,116,104,49,51,54,51,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,7),40,97,53,48,48,57,41,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,18),40,97,53,48,48,51,32,101,120,49,51,57,57,49,52,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,7),40,97,53,48,49,56,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,7),40,97,53,48,53,48,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,22),40,97,53,48,52,52,32,46,32,97,114,103,115,49,52,48,49,49,52,50,51,41,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,7),40,97,53,48,49,50,41,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,17),40,97,52,57,57,55,32,107,49,52,48,48,49,52,48,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,7),40,97,53,48,57,53,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,7),40,97,53,49,48,49,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,7),40,97,53,49,48,52,41,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,7),40,97,53,49,49,48,41,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,7),40,97,53,49,49,51,41,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,7),40,97,53,49,49,54,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,31),40,102,95,52,57,53,51,32,99,111,100,101,49,51,55,57,32,46,32,116,109,112,49,51,55,56,49,51,56,48,41,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,14),40,102,95,53,49,50,51,32,118,49,52,50,55,41,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,55),40,115,101,116,117,112,45,97,112,105,35,117,112,103,114,97,100,101,45,109,101,115,115,97,103,101,32,101,120,116,49,52,52,57,32,109,115,103,49,52,53,48,32,116,109,112,49,52,52,56,49,52,53,49,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,97,114,103,115,49,52,56,54,41,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,19),40,102,95,53,50,51,54,32,46,32,97,114,103,115,49,52,56,52,41,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,26),40,102,95,53,51,53,55,32,110,97,109,101,49,53,49,57,32,112,114,111,99,49,53,50,48,41,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,17),40,102,95,53,52,49,54,32,110,97,109,101,49,53,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,53,55,49,32,103,49,53,56,51,49,53,57,51,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,21),40,118,101,114,115,105,111,110,45,62,108,105,115,116,32,118,49,53,54,56,41,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,112,49,49,54,48,48,32,112,50,49,54,48,49,41,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,22),40,102,95,53,52,51,56,32,118,49,49,53,54,53,32,118,50,49,53,54,54,41,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,8),40,102,95,53,54,52,49,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,22),40,102,95,53,54,53,49,32,46,32,116,109,112,49,54,52,53,49,54,52,54,41,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,30),40,102,95,53,54,57,53,32,101,103,103,49,54,54,49,32,46,32,116,109,112,49,54,54,48,49,54,54,50,41,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,7),40,97,53,55,54,56,41,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,18),40,97,53,55,54,50,32,101,120,49,54,56,55,49,54,57,53,41,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,7),40,97,53,55,55,55,41,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,7),40,97,53,56,48,54,41,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,22),40,97,53,56,48,48,32,46,32,97,114,103,115,49,54,56,57,49,55,49,48,41,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,7),40,97,53,55,55,49,41,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,17),40,97,53,55,53,54,32,107,49,54,56,56,49,54,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,13),40,103,49,55,49,55,32,102,49,55,50,53,41,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,55,49,54,32,103,49,55,50,50,49,55,51,49,41,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,14),40,119,97,108,107,32,100,105,114,49,55,49,50,41,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,30),40,102,95,53,55,51,48,32,100,105,114,49,54,55,53,32,46,32,116,109,112,49,54,55,52,49,54,55,54,41,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,55,53,52,32,103,49,55,54,48,49,55,54,52,41,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,30),40,102,95,53,57,48,54,32,101,103,103,49,55,52,51,32,46,32,116,109,112,49,55,52,50,49,55,52,52,41,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,27),40,115,101,116,117,112,45,97,112,105,35,36,115,121,115,116,101,109,32,115,116,114,49,55,55,48,41,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,13),40,97,54,48,51,56,32,99,49,55,57,50,41,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,8),40,102,95,54,48,51,51,41};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,21),40,101,110,115,117,114,101,45,115,116,114,105,110,103,32,120,49,54,51,52,41,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,13),40,97,54,48,53,52,32,120,49,54,50,51,41,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,7),40,97,54,49,56,49,41,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1907)
static void C_ccall f_1907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1910)
static void C_ccall f_1910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1919)
static void C_ccall f_1919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1922)
static void C_ccall f_1922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1925)
static void C_ccall f_1925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1931)
static void C_ccall f_1931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1937)
static void C_ccall f_1937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1942)
static void C_ccall f_1942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1958)
static void C_ccall f_1958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6205)
static void C_ccall f_6205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1965)
static void C_ccall f_1965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1968)
static void C_ccall f_1968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1972)
static void C_ccall f_1972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1979)
static void C_ccall f_1979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1982)
static void C_ccall f_1982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1986)
static void C_ccall f_1986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1989)
static void C_ccall f_1989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2004)
static void C_ccall f_2004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2008)
static void C_ccall f_2008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2016)
static void C_ccall f_2016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2024)
static void C_ccall f_2024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2028)
static void C_ccall f_2028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6182)
static void C_ccall f_6182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2182)
static void C_ccall f_2182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2301)
static void C_ccall f_2301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6180)
static void C_ccall f_6180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6176)
static void C_ccall f_6176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2376)
static void C_ccall f_2376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6172)
static void C_ccall f_6172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6168)
static void C_ccall f_6168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2382)
static void C_ccall f_2382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6164)
static void C_ccall f_6164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2385)
static void C_ccall f_2385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6160)
static void C_ccall f_6160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2388)
static void C_ccall f_2388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6156)
static void C_ccall f_6156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2391)
static void C_ccall f_2391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3600)
static void C_ccall f_3600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3604)
static void C_ccall f_3604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3608)
static void C_ccall f_3608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6055)
static void C_ccall f_6055(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6071)
static void C_fcall f_6071(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6108)
static void C_ccall f_6108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6101)
static void C_ccall f_6101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6105)
static void C_ccall f_6105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6078)
static void C_fcall f_6078(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5639)
static void C_ccall f_5639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6053)
static void C_ccall f_6053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6033)
static void C_ccall f_6033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6039)
static void C_ccall f_6039(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6050)
static void C_ccall f_6050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6043)
static void C_ccall f_6043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5983)
static void C_fcall f_5983(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6028)
static void C_ccall f_6028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5987)
static void C_ccall f_5987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6000)
static void C_ccall f_6000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6003)
static void C_ccall f_6003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6006)
static void C_ccall f_6006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6009)
static void C_ccall f_6009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6012)
static void C_ccall f_6012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6015)
static void C_ccall f_6015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6018)
static void C_ccall f_6018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6021)
static void C_ccall f_6021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6024)
static void C_ccall f_6024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5906)
static void C_ccall f_5906(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5906)
static void C_ccall f_5906r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5910)
static void C_ccall f_5910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5959)
static void C_ccall f_5959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5934)
static void C_fcall f_5934(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5944)
static void C_ccall f_5944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5916)
static void C_ccall f_5916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5923)
static void C_ccall f_5923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5730)
static void C_ccall f_5730(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5730)
static void C_ccall f_5730r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5734)
static void C_ccall f_5734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5885)
static void C_ccall f_5885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5816)
static void C_fcall f_5816(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5820)
static void C_ccall f_5820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5860)
static void C_fcall f_5860(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5870)
static void C_ccall f_5870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5855)
static void C_ccall f_5855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5821)
static void C_fcall f_5821(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5834)
static void C_ccall f_5834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5840)
static void C_ccall f_5840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5757)
static void C_ccall f_5757(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5772)
static void C_ccall f_5772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5801)
static void C_ccall f_5801(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5801)
static void C_ccall f_5801r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5807)
static void C_ccall f_5807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5778)
static void C_ccall f_5778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5786)
static void C_ccall f_5786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5789)
static void C_ccall f_5789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5799)
static void C_ccall f_5799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5792)
static void C_ccall f_5792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5795)
static void C_ccall f_5795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5763)
static void C_ccall f_5763(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5769)
static void C_ccall f_5769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5752)
static void C_ccall f_5752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5695)
static void C_ccall f_5695(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5695)
static void C_ccall f_5695r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5699)
static void C_ccall f_5699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5706)
static void C_ccall f_5706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5651)
static void C_ccall f_5651(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5651)
static void C_ccall f_5651r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5655)
static void C_ccall f_5655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5674)
static void C_ccall f_5674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5664)
static void C_ccall f_5664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5641)
static void C_ccall f_5641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5649)
static void C_ccall f_5649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5438)
static void C_ccall f_5438(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5505)
static void C_ccall f_5505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5509)
static void C_ccall f_5509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5511)
static void C_fcall f_5511(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5591)
static void C_ccall f_5591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5441)
static void C_fcall f_5441(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5498)
static void C_ccall f_5498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5453)
static void C_ccall f_5453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5461)
static void C_fcall f_5461(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5416)
static void C_ccall f_5416(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5424)
static void C_ccall f_5424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5427)
static void C_ccall f_5427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5430)
static void C_ccall f_5430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5433)
static void C_ccall f_5433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5436)
static void C_ccall f_5436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5357)
static void C_ccall f_5357(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5365)
static void C_ccall f_5365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5368)
static void C_ccall f_5368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5371)
static void C_ccall f_5371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5374)
static void C_ccall f_5374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5377)
static void C_ccall f_5377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5383)
static void C_ccall f_5383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5386)
static void C_ccall f_5386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5389)
static void C_ccall f_5389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5392)
static void C_ccall f_5392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5395)
static void C_ccall f_5395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5398)
static void C_ccall f_5398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5401)
static void C_ccall f_5401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5404)
static void C_ccall f_5404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5407)
static void C_ccall f_5407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5410)
static void C_ccall f_5410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5414)
static void C_ccall f_5414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5236)
static void C_ccall f_5236(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5236)
static void C_ccall f_5236r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5242)
static void C_fcall f_5242(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5255)
static void C_fcall f_5255(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5267)
static void C_ccall f_5267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5273)
static void C_fcall f_5273(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5313)
static void C_ccall f_5313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5324)
static void C_ccall f_5324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5328)
static void C_ccall f_5328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5288)
static void C_fcall f_5288(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5295)
static void C_ccall f_5295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5298)
static void C_ccall f_5298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5301)
static void C_ccall f_5301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5304)
static void C_ccall f_5304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5307)
static void C_ccall f_5307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5155)
static void C_fcall f_5155(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5159)
static void C_ccall f_5159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5166)
static void C_ccall f_5166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5169)
static void C_ccall f_5169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5172)
static void C_ccall f_5172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5175)
static void C_ccall f_5175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5178)
static void C_ccall f_5178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5181)
static void C_ccall f_5181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5184)
static void C_ccall f_5184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5187)
static void C_ccall f_5187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5190)
static void C_ccall f_5190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5193)
static void C_ccall f_5193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5212)
static void C_ccall f_5212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5196)
static void C_ccall f_5196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5199)
static void C_ccall f_5199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5202)
static void C_ccall f_5202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5205)
static void C_ccall f_5205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5208)
static void C_ccall f_5208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5123)
static void C_ccall f_5123(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5153)
static void C_ccall f_5153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5130)
static void C_ccall f_5130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5137)
static void C_ccall f_5137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5140)
static void C_ccall f_5140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5143)
static void C_ccall f_5143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5146)
static void C_ccall f_5146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5149)
static void C_ccall f_5149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4953)
static void C_ccall f_4953(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4953)
static void C_ccall f_4953r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5117)
static void C_ccall f_5117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4960)
static void C_ccall f_4960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5114)
static void C_ccall f_5114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4963)
static void C_ccall f_4963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5111)
static void C_ccall f_5111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4966)
static void C_ccall f_4966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5105)
static void C_ccall f_5105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4969)
static void C_ccall f_4969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5102)
static void C_ccall f_5102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4975)
static void C_ccall f_4975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4978)
static void C_ccall f_4978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5096)
static void C_ccall f_5096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4981)
static void C_ccall f_4981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5083)
static void C_ccall f_5083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5069)
static void C_ccall f_5069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5072)
static void C_ccall f_5072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4984)
static void C_ccall f_4984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4987)
static void C_ccall f_4987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4998)
static void C_ccall f_4998(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5013)
static void C_ccall f_5013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5045)
static void C_ccall f_5045(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5045)
static void C_ccall f_5045r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5051)
static void C_ccall f_5051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5019)
static void C_ccall f_5019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5027)
static void C_ccall f_5027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5030)
static void C_ccall f_5030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5033)
static void C_ccall f_5033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5043)
static void C_ccall f_5043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5036)
static void C_ccall f_5036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5039)
static void C_ccall f_5039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5004)
static void C_ccall f_5004(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5010)
static void C_ccall f_5010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4990)
static void C_ccall f_4990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4993)
static void C_ccall f_4993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4908)
static void C_fcall f_4908(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4912)
static void C_ccall f_4912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4921)
static void C_ccall f_4921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4927)
static void C_ccall f_4927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4836)
static void C_fcall f_4836(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4840)
static void C_ccall f_4840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4852)
static void C_ccall f_4852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4858)
static void C_ccall f_4858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4868)
static void C_ccall f_4868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4871)
static void C_ccall f_4871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4874)
static void C_ccall f_4874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4877)
static void C_ccall f_4877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4846)
static void C_ccall f_4846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4681)
static void C_ccall f_4681(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4681)
static void C_ccall f_4681r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4685)
static void C_ccall f_4685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4691)
static void C_ccall f_4691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4694)
static void C_ccall f_4694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4697)
static void C_ccall f_4697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4805)
static void C_ccall f_4805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4700)
static void C_ccall f_4700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4768)
static void C_fcall f_4768(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4797)
static void C_ccall f_4797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4741)
static void C_ccall f_4741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4766)
static void C_ccall f_4766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4744)
static void C_ccall f_4744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4751)
static void C_ccall f_4751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4701)
static void C_fcall f_4701(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4708)
static void C_ccall f_4708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4729)
static void C_ccall f_4729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4714)
static void C_ccall f_4714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4460)
static void C_ccall f_4460(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4460)
static void C_ccall f_4460r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4464)
static void C_ccall f_4464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4483)
static void C_ccall f_4483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4486)
static void C_ccall f_4486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4650)
static void C_ccall f_4650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4489)
static void C_ccall f_4489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4613)
static void C_fcall f_4613(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4642)
static void C_ccall f_4642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4576)
static void C_fcall f_4576(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4590)
static void C_ccall f_4590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4492)
static void C_ccall f_4492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4542)
static void C_fcall f_4542(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4571)
static void C_ccall f_4571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4533)
static void C_ccall f_4533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4540)
static void C_ccall f_4540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4493)
static void C_fcall f_4493(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4500)
static void C_ccall f_4500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4503)
static void C_ccall f_4503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4521)
static void C_ccall f_4521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4506)
static void C_ccall f_4506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4466)
static void C_fcall f_4466(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4063)
static void C_ccall f_4063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4070)
static void C_ccall f_4070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4274)
static void C_ccall f_4274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4277)
static void C_ccall f_4277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4280)
static void C_ccall f_4280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4283)
static void C_ccall f_4283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4396)
static void C_fcall f_4396(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4425)
static void C_ccall f_4425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4387)
static void C_ccall f_4387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4394)
static void C_ccall f_4394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4284)
static void C_fcall f_4284(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4291)
static void C_ccall f_4291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4294)
static void C_ccall f_4294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4375)
static void C_ccall f_4375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4297)
static void C_ccall f_4297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4360)
static void C_ccall f_4360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4352)
static void C_ccall f_4352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4321)
static void C_fcall f_4321(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4336)
static void C_ccall f_4336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4303)
static void C_ccall f_4303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4309)
static void C_ccall f_4309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2397)
static void C_ccall f_2397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4312)
static void C_ccall f_4312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4167)
static void C_ccall f_4167(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4167)
static void C_ccall f_4167r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4249)
static void C_ccall f_4249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4180)
static void C_ccall f_4180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4183)
static void C_ccall f_4183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4186)
static void C_ccall f_4186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4192)
static void C_ccall f_4192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4198)
static void C_ccall f_4198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4213)
static void C_ccall f_4213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4221)
static void C_ccall f_4221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4228)
static void C_ccall f_4228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4217)
static void C_fcall f_4217(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4209)
static void C_ccall f_4209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4147)
static void C_fcall f_4147(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3972)
static void C_fcall f_3972(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4024)
static void C_fcall f_4024(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3987)
static void C_ccall f_3987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3990)
static void C_fcall f_3990(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4053)
static void C_ccall f_4053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4034)
static void C_fcall f_4034(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3947)
static void C_fcall f_3947(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3967)
static void C_ccall f_3967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3929)
static void C_ccall f_3929(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3882)
static void C_ccall f_3882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3889)
static void C_ccall f_3889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3907)
static void C_ccall f_3907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3754)
static void C_ccall f_3754(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3754)
static void C_ccall f_3754r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3764)
static void C_ccall f_3764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3876)
static void C_ccall f_3876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3880)
static void C_ccall f_3880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3785)
static void C_ccall f_3785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3800)
static void C_ccall f_3800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3788)
static void C_ccall f_3788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3646)
static void C_fcall f_3646(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3730)
static void C_ccall f_3730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3739)
static void C_ccall f_3739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3745)
static void C_ccall f_3745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3653)
static void C_ccall f_3653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3727)
static void C_ccall f_3727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3571)
static void C_ccall f_3571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3659)
static void C_ccall f_3659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3662)
static void C_ccall f_3662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3719)
static void C_ccall f_3719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3686)
static void C_ccall f_3686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3710)
static void C_ccall f_3710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3704)
static void C_ccall f_3704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3708)
static void C_ccall f_3708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3665)
static void C_ccall f_3665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6133)
static void C_ccall f_6133(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6137)
static void C_ccall f_6137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6152)
static void C_ccall f_6152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6125)
static void C_ccall f_6125(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6129)
static void C_ccall f_6129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3622)
static void C_fcall f_3622(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3629)
static void C_ccall f_3629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3632)
static void C_ccall f_3632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3635)
static void C_ccall f_3635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3638)
static void C_ccall f_3638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3609)
static void C_ccall f_3609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3613)
static void C_ccall f_3613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3556)
static void C_ccall f_3556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3073)
static void C_fcall f_3073(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3522)
static void C_ccall f_3522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3077)
static void C_fcall f_3077(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2905)
static void C_ccall f_2905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2914)
static void C_ccall f_2914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2926)
static void C_ccall f_2926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2929)
static void C_ccall f_2929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2938)
static void C_ccall f_2938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2941)
static void C_ccall f_2941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2988)
static void C_ccall f_2988(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3065)
static void C_ccall f_3065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3088)
static void C_ccall f_3088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3494)
static void C_fcall f_3494(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3504)
static void C_ccall f_3504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3482)
static void C_fcall f_3482(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3413)
static void C_ccall f_3413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3419)
static void C_ccall f_3419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3433)
static void C_ccall f_3433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3441)
static void C_fcall f_3441(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3424)
static void C_ccall f_3424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3427)
static void C_ccall f_3427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3451)
static void C_ccall f_3451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3094)
static void C_ccall f_3094(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2800)
static void C_fcall f_2800(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2813)
static void C_fcall f_2813(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2791)
static void C_ccall f_2791(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3098)
static void C_ccall f_3098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3101)
static void C_ccall f_3101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3407)
static void C_ccall f_3407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3104)
static void C_ccall f_3104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3389)
static void C_ccall f_3389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3392)
static void C_ccall f_3392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3395)
static void C_ccall f_3395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3398)
static void C_ccall f_3398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3380)
static void C_ccall f_3380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3386)
static void C_ccall f_3386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3116)
static void C_ccall f_3116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3346)
static void C_fcall f_3346(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3356)
static void C_ccall f_3356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3127)
static void C_ccall f_3127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3302)
static void C_ccall f_3302(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3306)
static void C_ccall f_3306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3322)
static void C_ccall f_3322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3332)
static void C_ccall f_3332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3335)
static void C_ccall f_3335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3338)
static void C_ccall f_3338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3309)
static void C_ccall f_3309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3319)
static void C_ccall f_3319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3238)
static void C_ccall f_3238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3241)
static void C_ccall f_3241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3244)
static void C_ccall f_3244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3279)
static void C_ccall f_3279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3285)
static void C_ccall f_3285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3288)
static void C_ccall f_3288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3294)
static void C_ccall f_3294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3257)
static void C_ccall f_3257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3250)
static void C_ccall f_3250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3152)
static void C_ccall f_3152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3160)
static void C_ccall f_3160(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3222)
static void C_ccall f_3222(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3222)
static void C_ccall f_3222r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3228)
static void C_ccall f_3228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3166)
static void C_ccall f_3166(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3172)
static void C_ccall f_3172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3176)
static void C_ccall f_3176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3179)
static void C_ccall f_3179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3182)
static void C_ccall f_3182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3185)
static void C_ccall f_3185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3188)
static void C_ccall f_3188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3155)
static void C_ccall f_3155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3117)
static void C_fcall f_3117(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2867)
static void C_fcall f_2867(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2875)
static void C_ccall f_2875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2878)
static void C_ccall f_2878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2884)
static void C_ccall f_2884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2890)
static void C_ccall f_2890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2893)
static void C_ccall f_2893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2845)
static void C_fcall f_2845(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2859)
static void C_ccall f_2859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2862)
static void C_ccall f_2862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2865)
static void C_ccall f_2865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2630)
static void C_ccall f_2630(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2754)
static void C_fcall f_2754(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2661)
static void C_fcall f_2661(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2690)
static void C_ccall f_2690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2602)
static void C_ccall f_2602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2583)
static void C_ccall f_2583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2566)
static void C_ccall f_2566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2427)
static void C_fcall f_2427(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2554)
static void C_ccall f_2554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2518)
static void C_fcall f_2518(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2453)
static void C_ccall f_2453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2462)
static void C_ccall f_2462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2475)
static void C_ccall f_2475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2483)
static void C_fcall f_2483(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2472)
static void C_ccall f_2472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2443)
static void C_ccall f_2443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2419)
static void C_ccall f_2419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2783)
static void C_ccall f_2783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2723)
static void C_ccall f_2723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2731)
static void C_fcall f_2731(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2705)
static void C_ccall f_2705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2699)
static void C_ccall f_2699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2604)
static void C_fcall f_2604(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2611)
static void C_fcall f_2611(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2362)
static void C_fcall f_2362(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2370)
static void C_ccall f_2370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2343)
static void C_ccall f_2343(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2347)
static void C_ccall f_2347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2325)
static void C_ccall f_2325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2307)
static void C_ccall f_2307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2315)
static void C_ccall f_2315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2311)
static void C_ccall f_2311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2184)
static void C_ccall f_2184(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2285)
static void C_ccall f_2285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2288)
static void C_ccall f_2288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2291)
static void C_ccall f_2291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2294)
static void C_ccall f_2294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2242)
static void C_ccall f_2242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2278)
static void C_ccall f_2278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2274)
static void C_ccall f_2274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2267)
static void C_ccall f_2267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2203)
static void C_ccall f_2203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2213)
static void C_ccall f_2213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2219)
static void C_fcall f_2219(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2223)
static void C_ccall f_2223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2232)
static void C_ccall f_2232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2133)
static void C_fcall f_2133(C_word t0) C_noret;
C_noret_decl(f_2062)
static void C_ccall f_2062(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2062)
static void C_ccall f_2062r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2072)
static void C_ccall f_2072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2034)
static void C_ccall f_2034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2040)
static void C_ccall f_2040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1991)
static void C_ccall f_1991(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1999)
static void C_ccall f_1999(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_6071)
static void C_fcall trf_6071(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6071(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6071(t0,t1);}

C_noret_decl(trf_6078)
static void C_fcall trf_6078(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6078(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6078(t0,t1);}

C_noret_decl(trf_5983)
static void C_fcall trf_5983(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5983(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5983(t0,t1);}

C_noret_decl(trf_5934)
static void C_fcall trf_5934(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5934(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5934(t0,t1,t2);}

C_noret_decl(trf_5816)
static void C_fcall trf_5816(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5816(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5816(t0,t1,t2);}

C_noret_decl(trf_5860)
static void C_fcall trf_5860(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5860(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5860(t0,t1,t2);}

C_noret_decl(trf_5821)
static void C_fcall trf_5821(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5821(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5821(t0,t1,t2);}

C_noret_decl(trf_5511)
static void C_fcall trf_5511(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5511(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5511(t0,t1,t2,t3);}

C_noret_decl(trf_5441)
static void C_fcall trf_5441(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5441(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5441(t0,t1);}

C_noret_decl(trf_5461)
static void C_fcall trf_5461(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5461(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5461(t0,t1,t2);}

C_noret_decl(trf_5242)
static void C_fcall trf_5242(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5242(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5242(t0,t1,t2);}

C_noret_decl(trf_5255)
static void C_fcall trf_5255(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5255(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5255(t0,t1);}

C_noret_decl(trf_5273)
static void C_fcall trf_5273(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5273(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5273(t0,t1);}

C_noret_decl(trf_5288)
static void C_fcall trf_5288(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5288(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5288(t0,t1);}

C_noret_decl(trf_5155)
static void C_fcall trf_5155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5155(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5155(t0,t1,t2,t3);}

C_noret_decl(trf_4908)
static void C_fcall trf_4908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4908(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4908(t0,t1);}

C_noret_decl(trf_4836)
static void C_fcall trf_4836(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4836(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4836(t0,t1);}

C_noret_decl(trf_4768)
static void C_fcall trf_4768(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4768(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4768(t0,t1,t2);}

C_noret_decl(trf_4701)
static void C_fcall trf_4701(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4701(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4701(t0,t1,t2);}

C_noret_decl(trf_4613)
static void C_fcall trf_4613(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4613(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4613(t0,t1,t2);}

C_noret_decl(trf_4576)
static void C_fcall trf_4576(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4576(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4576(t0,t1,t2);}

C_noret_decl(trf_4542)
static void C_fcall trf_4542(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4542(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4542(t0,t1,t2);}

C_noret_decl(trf_4493)
static void C_fcall trf_4493(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4493(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4493(t0,t1,t2);}

C_noret_decl(trf_4466)
static void C_fcall trf_4466(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4466(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4466(t0,t1);}

C_noret_decl(trf_4396)
static void C_fcall trf_4396(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4396(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4396(t0,t1,t2);}

C_noret_decl(trf_4284)
static void C_fcall trf_4284(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4284(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4284(t0,t1,t2);}

C_noret_decl(trf_4321)
static void C_fcall trf_4321(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4321(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4321(t0,t1);}

C_noret_decl(trf_4217)
static void C_fcall trf_4217(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4217(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4217(t0,t1);}

C_noret_decl(trf_4147)
static void C_fcall trf_4147(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4147(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4147(t0,t1,t2);}

C_noret_decl(trf_3972)
static void C_fcall trf_3972(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3972(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3972(t0,t1);}

C_noret_decl(trf_4024)
static void C_fcall trf_4024(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4024(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4024(t0,t1,t2);}

C_noret_decl(trf_3990)
static void C_fcall trf_3990(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3990(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3990(t0,t1);}

C_noret_decl(trf_4034)
static void C_fcall trf_4034(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4034(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4034(t0,t1);}

C_noret_decl(trf_3947)
static void C_fcall trf_3947(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3947(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3947(t0,t1,t2);}

C_noret_decl(trf_3646)
static void C_fcall trf_3646(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3646(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3646(t0,t1,t2,t3);}

C_noret_decl(trf_3622)
static void C_fcall trf_3622(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3622(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3622(t0,t1);}

C_noret_decl(trf_3073)
static void C_fcall trf_3073(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3073(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3073(t0,t1,t2);}

C_noret_decl(trf_3077)
static void C_fcall trf_3077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3077(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3077(t0,t1);}

C_noret_decl(trf_3494)
static void C_fcall trf_3494(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3494(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3494(t0,t1,t2);}

C_noret_decl(trf_3482)
static void C_fcall trf_3482(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3482(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3482(t0,t1,t2);}

C_noret_decl(trf_3441)
static void C_fcall trf_3441(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3441(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3441(t0,t1,t2);}

C_noret_decl(trf_2800)
static void C_fcall trf_2800(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2800(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2800(t0,t1,t2);}

C_noret_decl(trf_2813)
static void C_fcall trf_2813(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2813(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2813(t0,t1);}

C_noret_decl(trf_3346)
static void C_fcall trf_3346(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3346(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3346(t0,t1,t2);}

C_noret_decl(trf_3117)
static void C_fcall trf_3117(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3117(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3117(t0,t1,t2);}

C_noret_decl(trf_2867)
static void C_fcall trf_2867(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2867(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2867(t0,t1,t2,t3);}

C_noret_decl(trf_2845)
static void C_fcall trf_2845(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2845(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2845(t0,t1,t2);}

C_noret_decl(trf_2754)
static void C_fcall trf_2754(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2754(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2754(t0,t1,t2);}

C_noret_decl(trf_2661)
static void C_fcall trf_2661(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2661(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2661(t0,t1,t2);}

C_noret_decl(trf_2427)
static void C_fcall trf_2427(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2427(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2427(t0,t1);}

C_noret_decl(trf_2518)
static void C_fcall trf_2518(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2518(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2518(t0,t1,t2);}

C_noret_decl(trf_2483)
static void C_fcall trf_2483(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2483(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2483(t0,t1,t2);}

C_noret_decl(trf_2731)
static void C_fcall trf_2731(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2731(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2731(t0,t1,t2);}

C_noret_decl(trf_2604)
static void C_fcall trf_2604(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2604(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2604(t0,t1);}

C_noret_decl(trf_2611)
static void C_fcall trf_2611(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2611(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2611(t0,t1);}

C_noret_decl(trf_2362)
static void C_fcall trf_2362(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2362(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2362(t0,t1,t2);}

C_noret_decl(trf_2219)
static void C_fcall trf_2219(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2219(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2219(t0,t1);}

C_noret_decl(trf_2133)
static void C_fcall trf_2133(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2133(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_2133(t0);}

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
C_main_entry_point
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("toplevel"));
C_resize_stack(131072);
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1512)){
C_save(t1);
C_rereclaim2(1512*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,349);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[3]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[13]=C_h_intern(&lf[13],24,"setup-api#host-extension");
lf[15]=C_h_intern(&lf[15],24,"setup-api#chicken-prefix");
lf[16]=C_h_intern(&lf[16],19,"setup-api#shellpath");
lf[17]=C_h_intern(&lf[17],2,"qs");
lf[18]=C_h_intern(&lf[18],18,"normalize-pathname");
lf[20]=C_h_intern(&lf[20],30,"setup-api#setup-root-directory");
lf[21]=C_h_intern(&lf[21],28,"setup-api#setup-verbose-mode");
lf[22]=C_h_intern(&lf[22],28,"setup-api#setup-install-mode");
lf[23]=C_h_intern(&lf[23],25,"setup-api#deployment-mode");
lf[24]=C_h_intern(&lf[24],22,"setup-api#program-path");
lf[25]=C_h_intern(&lf[25],28,"setup-api#keep-intermediates");
lf[26]=C_h_intern(&lf[26],24,"setup-api#extra-features");
lf[27]=C_h_intern(&lf[27],17,"register-feature!");
lf[28]=C_h_intern(&lf[28],9,"\003syserror");
lf[29]=C_h_intern(&lf[29],27,"setup-api#extra-nonfeatures");
lf[30]=C_h_intern(&lf[30],19,"unregister-feature!");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\004copy");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\011del /Q /S");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\004move");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\005chmod");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\006ranlib");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\005cp -r");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\006rm -fr");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\002mv");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\005chmod");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\006ranlib");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\005mkdir");
lf[49]=C_h_intern(&lf[49],22,"setup-api#sudo-install");
lf[50]=C_h_intern(&lf[50],5,"print");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\0001Warning: cannot install as superuser with Windows");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\012sudo cp -r");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\013sudo rm -fr");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\007sudo mv");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\012sudo chmod");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\013sudo ranlib");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\012sudo mkdir");
lf[58]=C_h_intern(&lf[58],21,"setup-api#abort-setup");
lf[59]=C_h_intern(&lf[59],15,"setup-api#patch");
lf[60]=C_h_intern(&lf[60],10,"write-line");
lf[61]=C_h_intern(&lf[61],19,"irregex-replace/all");
lf[62]=C_h_intern(&lf[62],9,"read-line");
lf[63]=C_h_intern(&lf[63],20,"with-input-from-file");
lf[64]=C_h_intern(&lf[64],19,"with-output-to-file");
lf[66]=C_h_intern(&lf[66],17,"get-output-string");
lf[67]=C_h_intern(&lf[67],7,"display");
lf[68]=C_h_intern(&lf[68],19,"\003syswrite-char/port");
lf[69]=C_h_intern(&lf[69],18,"open-output-string");
lf[70]=C_h_intern(&lf[70],21,"create-temporary-file");
lf[71]=C_h_intern(&lf[71],19,"\003sysstandard-output");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\011patching ");
lf[74]=C_h_intern(&lf[74],21,"setup-api#run-verbose");
lf[75]=C_h_intern(&lf[75],26,"setup-api#register-program");
lf[76]=C_h_intern(&lf[76],10,"alist-cons");
lf[77]=C_h_intern(&lf[77],8,"->string");
lf[78]=C_h_intern(&lf[78],13,"make-pathname");
lf[79]=C_h_intern(&lf[79],22,"setup-api#find-program");
lf[81]=C_h_intern(&lf[81],26,"pathname-replace-extension");
lf[82]=C_h_intern(&lf[82],26,"\003sysload-dynamic-extension");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[85]=C_h_intern(&lf[85],18,"pathname-extension");
lf[86]=C_h_intern(&lf[86],17,"setup-api#execute");
lf[87]=C_h_intern(&lf[87],3,"map");
lf[88]=C_h_intern(&lf[88],8,"for-each");
lf[89]=C_h_intern(&lf[89],16,"\003sysflush-output");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[91]=C_h_intern(&lf[91],18,"string-intersperse");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\002-k");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\011-deployed");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[101]=C_h_intern(&lf[101],5,"cons*");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\023compiling-extension");
lf[104]=C_h_intern(&lf[104],6,"append");
lf[105]=C_h_intern(&lf[105],13,"string-append");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\014-no-feature ");
lf[107]=C_h_intern(&lf[107],14,"symbol->string");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\011-feature ");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\013-setup-mode");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[111]=C_h_intern(&lf[111],8,"feature\077");
lf[112]=C_h_intern(&lf[112],14,"\000cross-chicken");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[114]=C_h_intern(&lf[114],9,"substring");
lf[115]=C_h_intern(&lf[115],14,"string-prefix\077");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\002./");
lf[118]=C_h_intern(&lf[118],5,"error");
lf[119]=C_h_intern(&lf[119],5,"write");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\013 for line: ");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[125]=C_h_intern(&lf[125],6,"signal");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\025make: Failed to make ");
lf[128]=C_h_intern(&lf[128],22,"with-exception-handler");
lf[129]=C_h_intern(&lf[129],30,"call-with-current-continuation");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\011 because ");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\010 changed");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\007 date: ");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\027 just because (reason: ");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\011 because ");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\017 does not exist");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\007making ");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\006make: ");
lf[138]=C_h_intern(&lf[138],22,"file-modification-time");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\015 was not made");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\022(make) dependency ");
lf[141]=C_h_intern(&lf[141],12,"file-exists\077");
lf[142]=C_h_intern(&lf[142],3,"any");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\036(make) don\047t know how to make ");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\011checking ");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\006make: ");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\013make: made ");
lf[148]=C_h_intern(&lf[148],7,"reverse");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[152]=C_h_intern(&lf[152],27,"condition-property-accessor");
lf[153]=C_h_intern(&lf[153],3,"exn");
lf[154]=C_h_intern(&lf[154],7,"message");
lf[155]=C_h_intern(&lf[155],19,"condition-predicate");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\0006argument-list to `make\047 is not a string or string list");
lf[157]=C_h_intern(&lf[157],5,"every");
lf[158]=C_h_intern(&lf[158],7,"string\077");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000#command part of line is not a thunk");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\037dependency item is not a string");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000!second part of line is not a list");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\0004line does not start with a string or list of strings");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000$list is not a list with 2 or 3 parts");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\036specification is an empty list");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\033specification is not a list");
lf[166]=C_h_intern(&lf[166],12,"vector->list");
lf[167]=C_h_intern(&lf[167],19,"setup-api#make/proc");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\0000no matching clause in call to \047case-lambda\047 form");
lf[169]=C_h_intern(&lf[169],28,"setup-api#destination-prefix");
lf[170]=C_h_intern(&lf[170],24,"setup-api#runtime-prefix");
lf[171]=C_h_intern(&lf[171],29,"setup-api#installation-prefix");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\010  mkdir ");
lf[173]=C_h_intern(&lf[173],16,"create-directory");
lf[174]=C_h_intern(&lf[174],2,"-p");
lf[175]=C_h_intern(&lf[175],34,"setup-api#create-directory/parents");
lf[177]=C_h_intern(&lf[177],5,"files");
lf[178]=C_h_intern(&lf[178],3,"a+r");
lf[179]=C_h_intern(&lf[179],2,"pp");
lf[181]=C_h_intern(&lf[181],15,"repository-path");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\004 -> ");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\015writing info ");
lf[186]=C_h_intern(&lf[186],19,"setup-api#copy-file");
lf[187]=C_h_intern(&lf[187],18,"absolute-pathname\077");
lf[188]=C_h_intern(&lf[188],19,"setup-api#move-file");
lf[189]=C_h_intern(&lf[189],22,"setup-api#remove-file*");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid file-specification");
lf[194]=C_h_intern(&lf[194],7,"version");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\007unknown");
lf[197]=C_h_intern(&lf[197],36,"setup-api#extension-name-and-version");
lf[198]=C_h_intern(&lf[198],28,"setup-api#standard-extension");
lf[199]=C_h_intern(&lf[199],27,"setup-api#install-extension");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[202]=C_h_intern(&lf[202],3,"csc");
lf[203]=C_h_intern(&lf[203],8,"-dynamic");
lf[204]=C_h_intern(&lf[204],15,"-optimize-level");
lf[205]=C_h_intern(&lf[205],12,"-debug-level");
lf[206]=C_h_intern(&lf[206],20,"-emit-import-library");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\006inline");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\012import.scm");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\003scm");
lf[210]=C_h_intern(&lf[210],15,"\003sysget-keyword");
lf[211]=C_h_intern(&lf[211],5,"\000info");
lf[212]=C_h_intern(&lf[212],6,"static");
lf[213]=C_h_intern(&lf[213],6,"macosx");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[215]=C_h_intern(&lf[215],16,"software-version");
lf[216]=C_h_intern(&lf[216],25,"setup-api#install-program");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\003exe");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[223]=C_h_intern(&lf[223],24,"setup-api#install-script");
lf[224]=C_h_intern(&lf[224],4,"a+rx");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\014lib/chicken/");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000Acannot create directory: a file with the same name already exists");
lf[229]=C_h_intern(&lf[229],10,"directory\077");
lf[230]=C_h_intern(&lf[230],3,"a+x");
lf[231]=C_h_intern(&lf[231],18,"pathname-directory");
lf[232]=C_h_intern(&lf[232],21,"setup-api#try-compile");
lf[233]=C_h_intern(&lf[233],4,"\000c++");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\012succeeded.");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\007failed.");
lf[236]=C_h_intern(&lf[236],6,"system");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\002-c");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\007 >nul: ");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\014 >/dev/null ");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\0042>&1");
lf[244]=C_h_intern(&lf[244],4,"conc");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[251]=C_decode_literal(C_heaptop,"\376B\000\000\002-L");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[253]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\001o");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[256]=C_h_intern(&lf[256],13,"\000compile-only");
lf[257]=C_h_intern(&lf[257],5,"\000verb");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[259]=C_h_intern(&lf[259],8,"\000ldflags");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[261]=C_h_intern(&lf[261],7,"\000cflags");
lf[262]=C_h_intern(&lf[262],3,"\000cc");
lf[263]=C_h_intern(&lf[263],34,"setup-api#required-chicken-version");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\026 or higher is required");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\020CHICKEN version ");
lf[266]=C_h_intern(&lf[266],20,"setup-api#version>=\077");
lf[267]=C_h_intern(&lf[267],15,"chicken-version");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000.and repeat the current installation operation.");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\001:");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\022  chicken-install ");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\015 - please run");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\002\047 ");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000#the currently installed extension `");
lf[276]=C_h_intern(&lf[276],36,"setup-api#required-extension-version");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000;, which is the minimum version that this extension requires");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\016is older than ");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000%has no associated version information");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\020is not installed");
lf[281]=C_h_intern(&lf[281],21,"extension-information");
lf[282]=C_h_intern(&lf[282],30,"required-extension-information");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\023bad argument format");
lf[284]=C_h_intern(&lf[284],22,"setup-api#test-compile");
lf[285]=C_h_intern(&lf[285],22,"setup-api#find-library");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000\002-l");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\017(); return 0; }");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\015int main() { ");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\003();");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\005char ");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\006#endif");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\012extern \042C\042");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000\022#ifdef __cplusplus");
lf[294]=C_h_intern(&lf[294],21,"setup-api#find-header");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\033>\012int main() { return 0; }\012");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\012#include <");
lf[297]=C_h_intern(&lf[297],13,"irregex-split");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\006[-\134._]");
lf[299]=C_h_intern(&lf[299],8,"string>\077");
lf[300]=C_h_intern(&lf[300],24,"setup-api#extension-name");
lf[301]=C_h_intern(&lf[301],27,"setup-api#extension-version");
lf[302]=C_h_intern(&lf[302],12,"string-null\077");
lf[303]=C_h_intern(&lf[303],19,"setup-api#read-info");
lf[304]=C_h_intern(&lf[304],4,"read");
lf[305]=C_h_intern(&lf[305],26,"setup-api#remove-directory");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\014sudo rm -fr ");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[309]=C_h_intern(&lf[309],11,"delete-file");
lf[310]=C_h_intern(&lf[310],16,"delete-directory");
lf[311]=C_h_intern(&lf[311],9,"directory");
lf[312]=C_h_intern(&lf[312],16,"remove-directory");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000#cannot remove - directory not found");
lf[314]=C_h_intern(&lf[314],26,"setup-api#remove-extension");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000.shell command failed with nonzero exit status ");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[319]=C_h_intern(&lf[319],30,"setup-api#setup-error-handling");
lf[320]=C_h_intern(&lf[320],5,"reset");
lf[321]=C_h_intern(&lf[321],19,"print-error-message");
lf[322]=C_h_intern(&lf[322],18,"current-error-port");
lf[323]=C_h_intern(&lf[323],25,"current-exception-handler");
lf[324]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\000\376\003\000\000\002\376B\000\000\000\376\377\016");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[326]=C_h_intern(&lf[326],7,"warning");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\042invalid extension-name-and-version");
lf[328]=C_h_intern(&lf[328],14,"make-parameter");
lf[329]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\000\376\003\000\000\002\376B\000\000\000\376\377\016");
lf[330]=C_h_intern(&lf[330],24,"get-environment-variable");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\026CHICKEN_INSTALL_PREFIX");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\013chicken-bug");
lf[333]=C_h_intern(&lf[333],17,"\003syspeek-c-string");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\016chicken-status");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\021chicken-uninstall");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\017chicken-install");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000\003csi");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[340]=C_h_intern(&lf[340],4,"exit");
lf[341]=C_h_intern(&lf[341],17,"current-directory");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[345]=C_h_intern(&lf[345],13,"chicken-setup");
lf[346]=C_h_intern(&lf[346],7,"windows");
lf[347]=C_h_intern(&lf[347],14,"build-platform");
lf[348]=C_h_intern(&lf[348],13,"software-type");
C_register_lf2(lf,349,create_ptable());
t2=C_mutate(&lf[0] /* (set! c79 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1907,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k1905 */
static void C_ccall f_1907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1907,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1910,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1908 in k1905 */
static void C_ccall f_1910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1910,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1913,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1911 in k1908 in k1905 */
static void C_ccall f_1913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1916,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1919,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1922,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1925,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1928,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1928,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1931,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1931,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1934,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1934,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1937,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1937,2,t0,t1);}
t2=C_mutate(&lf[2] /* (set! setup-api#constant25 ...) */,lf[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1942,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[333]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_CC),C_fix(0));}

/* k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1942,2,t0,t1);}
t2=C_mutate(&lf[4] /* (set! setup-api#*cc* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1946,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[333]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_CXX),C_fix(0));}

/* k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1946,2,t0,t1);}
t2=C_mutate(&lf[5] /* (set! setup-api#*cxx* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1950,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[333]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_CFLAGS),C_fix(0));}

/* k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1950,2,t0,t1);}
t2=C_mutate(&lf[6] /* (set! setup-api#*target-cflags* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1954,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[333]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_MORE_LIBS),C_fix(0));}

/* k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1954,2,t0,t1);}
t2=C_mutate(&lf[7] /* (set! setup-api#*target-libs* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1958,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[333]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}

/* k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1958(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1958,2,t0,t1);}
t2=C_mutate(&lf[8] /* (set! setup-api#*target-lib-home* ...) */,t1);
t3=lf[9] /* setup-api#*sudo* */ =C_SCHEME_FALSE;;
t4=C_mutate(&lf[10] /* (set! setup-api#*windows-shell* ...) */,C_mk_bool(C_WINDOWS_SHELL));
t5=lf[11] /* setup-api#*registered-programs* */ =C_SCHEME_END_OF_LIST;;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1965,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6205,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
C_trace("software-type");
((C_proc2)C_fast_retrieve_symbol_proc(lf[348]))(2,*((C_word*)lf[348]+1),t7);}

/* k6203 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(t1,lf[346]);
if(C_truep(t2)){
C_trace("build-platform");
((C_proc2)C_fast_retrieve_symbol_proc(lf[347]))(2,*((C_word*)lf[347]+1),((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[2];
f_1965(2,t3,C_SCHEME_FALSE);}}

/* k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1965,2,t0,t1);}
t2=C_mutate(&lf[12] /* (set! setup-api#*windows* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1968,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("register-feature!");
((C_proc3)C_fast_retrieve_symbol_proc(lf[27]))(3,*((C_word*)lf[27]+1),t3,lf[345]);}

/* k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1972,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("make-parameter");
((C_proc3)C_fast_retrieve_symbol_proc(lf[328]))(3,*((C_word*)lf[328]+1),t2,C_SCHEME_FALSE);}

/* k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1972,2,t0,t1);}
t2=C_mutate((C_word*)lf[13]+1 /* (set! setup-api#host-extension ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1976,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("get-environment-variable");
((C_proc3)C_fast_retrieve_symbol_proc(lf[330]))(3,*((C_word*)lf[330]+1),t3,lf[344]);}

/* k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1979,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),t2,t1,lf[343]);}
else{
t3=t2;
f_1979(2,t3,C_SCHEME_FALSE);}}

/* k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1979,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1982,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_1982(2,t3,t1);}
else{
C_trace("##sys#peek-c-string");
t3=*((C_word*)lf[333]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}}

/* k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1982,2,t0,t1);}
t2=C_mutate(&lf[14] /* (set! setup-api#*chicken-bin-path* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1986,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("get-environment-variable");
((C_proc3)C_fast_retrieve_symbol_proc(lf[330]))(3,*((C_word*)lf[330]+1),t3,lf[342]);}

/* k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1986,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1989,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_1989(2,t3,t1);}
else{
C_trace("##sys#peek-c-string");
t3=*((C_word*)lf[333]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_PREFIX),C_fix(0));}}

/* k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1989,2,t0,t1);}
t2=C_mutate((C_word*)lf[15]+1 /* (set! setup-api#chicken-prefix ...) */,t1);
t3=C_mutate((C_word*)lf[16]+1 /* (set! setup-api#shellpath ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1991,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2004,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("current-directory");
((C_proc2)C_fast_retrieve_symbol_proc(lf[341]))(2,*((C_word*)lf[341]+1),t4);}

/* k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2004,2,t0,t1);}
t2=C_mutate(&lf[19] /* (set! setup-api#*base-directory* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2008,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("make-parameter");
((C_proc3)C_fast_retrieve_symbol_proc(lf[328]))(3,*((C_word*)lf[328]+1),t3,C_retrieve2(lf[19],"setup-api#*base-directory*"));}

/* k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2008,2,t0,t1);}
t2=C_mutate((C_word*)lf[20]+1 /* (set! setup-api#setup-root-directory ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2012,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("make-parameter");
((C_proc3)C_fast_retrieve_symbol_proc(lf[328]))(3,*((C_word*)lf[328]+1),t3,C_SCHEME_FALSE);}

/* k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2012,2,t0,t1);}
t2=C_mutate((C_word*)lf[21]+1 /* (set! setup-api#setup-verbose-mode ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2016,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("make-parameter");
((C_proc3)C_fast_retrieve_symbol_proc(lf[328]))(3,*((C_word*)lf[328]+1),t3,C_SCHEME_TRUE);}

/* k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2016,2,t0,t1);}
t2=C_mutate((C_word*)lf[22]+1 /* (set! setup-api#setup-install-mode ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2020,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("make-parameter");
((C_proc3)C_fast_retrieve_symbol_proc(lf[328]))(3,*((C_word*)lf[328]+1),t3,C_SCHEME_FALSE);}

/* k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2020,2,t0,t1);}
t2=C_mutate((C_word*)lf[23]+1 /* (set! setup-api#deployment-mode ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2024,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("make-parameter");
((C_proc3)C_fast_retrieve_symbol_proc(lf[328]))(3,*((C_word*)lf[328]+1),t3,C_retrieve2(lf[14],"setup-api#*chicken-bin-path*"));}

/* k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2024,2,t0,t1);}
t2=C_mutate((C_word*)lf[24]+1 /* (set! setup-api#program-path ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2028,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("make-parameter");
((C_proc3)C_fast_retrieve_symbol_proc(lf[328]))(3,*((C_word*)lf[328]+1),t3,C_SCHEME_FALSE);}

/* k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2028(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2028,2,t0,t1);}
t2=C_mutate((C_word*)lf[25]+1 /* (set! setup-api#keep-intermediates ...) */,t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_mutate((C_word*)lf[26]+1 /* (set! setup-api#extra-features ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2030,a[2]=t4,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_mutate((C_word*)lf[29]+1 /* (set! setup-api#extra-nonfeatures ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2062,a[2]=t7,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t9=lf[31] /* setup-api#*copy-command* */ =C_SCHEME_UNDEFINED;;
t10=lf[32] /* setup-api#*remove-command* */ =C_SCHEME_UNDEFINED;;
t11=lf[33] /* setup-api#*move-command* */ =C_SCHEME_UNDEFINED;;
t12=lf[34] /* setup-api#*chmod-command* */ =C_SCHEME_UNDEFINED;;
t13=lf[35] /* setup-api#*ranlib-command* */ =C_SCHEME_UNDEFINED;;
t14=lf[36] /* setup-api#*mkdir-command* */ =C_SCHEME_UNDEFINED;;
t15=C_mutate(&lf[37] /* (set! setup-api#user-install-setup ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2133,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[49]+1 /* (set! setup-api#sudo-install ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2159,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2182,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6182,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp);
C_trace("make-parameter");
((C_proc3)C_fast_retrieve_symbol_proc(lf[328]))(3,*((C_word*)lf[328]+1),t17,t18);}

/* a6181 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6182,2,t0,t1);}
t2=C_fast_retrieve(lf[340]);
C_trace("g140141");
t3=t2;
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t1,C_fix(1));}

/* k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2182,2,t0,t1);}
t2=C_mutate((C_word*)lf[58]+1 /* (set! setup-api#abort-setup ...) */,t1);
t3=C_mutate((C_word*)lf[59]+1 /* (set! setup-api#patch ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2184,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2301,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("make-parameter");
((C_proc3)C_fast_retrieve_symbol_proc(lf[328]))(3,*((C_word*)lf[328]+1),t4,C_SCHEME_TRUE);}

/* k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2301,2,t0,t1);}
t2=C_mutate((C_word*)lf[74]+1 /* (set! setup-api#run-verbose ...) */,t1);
t3=C_mutate((C_word*)lf[75]+1 /* (set! setup-api#register-program ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2303,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[79]+1 /* (set! setup-api#find-program ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2343,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2362,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2373,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6180,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t8=*((C_word*)lf[333]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_CHICKEN_PROGRAM),C_fix(0));}

/* k6178 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("reg235");
f_2362(((C_word*)t0)[2],lf[339],t1);}

/* k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6176,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[333]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CSI_PROGRAM),C_fix(0));}

/* k6174 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("reg235");
f_2362(((C_word*)t0)[2],lf[338],t1);}

/* k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2379,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6172,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[333]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CSC_PROGRAM),C_fix(0));}

/* k6170 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("reg235");
f_2362(((C_word*)t0)[2],lf[337],t1);}

/* k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6168,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[333]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CHICKEN_INSTALL_PROGRAM),C_fix(0));}

/* k6166 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("reg235");
f_2362(((C_word*)t0)[2],lf[336],t1);}

/* k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2382,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2385,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6164,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[333]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CHICKEN_UNINSTALL_PROGRAM),C_fix(0));}

/* k6162 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("reg235");
f_2362(((C_word*)t0)[2],lf[335],t1);}

/* k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2385,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2388,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6160,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[333]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CHICKEN_STATUS_PROGRAM),C_fix(0));}

/* k6158 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("reg235");
f_2362(((C_word*)t0)[2],lf[334],t1);}

/* k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2391,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6156,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[333]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CHICKEN_BUG_PROGRAM),C_fix(0));}

/* k6154 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("reg235");
f_2362(((C_word*)t0)[2],lf[332],t1);}

/* k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2391,2,t0,t1);}
t2=C_mutate(&lf[80] /* (set! setup-api#fixmaketarget ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2604,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[86]+1 /* (set! setup-api#execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2630,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[117] /* (set! setup-api#make:form-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2845,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[121] /* (set! setup-api#make:line-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2867,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[124] /* (set! setup-api#make:make/proc/helper ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3073,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[167]+1 /* (set! setup-api#make/proc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3524,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3600,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("make-parameter");
((C_proc3)C_fast_retrieve_symbol_proc(lf[328]))(3,*((C_word*)lf[328]+1),t8,C_SCHEME_FALSE);}

/* k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3600,2,t0,t1);}
t2=C_mutate((C_word*)lf[169]+1 /* (set! setup-api#destination-prefix ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3604,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("make-parameter");
((C_proc3)C_fast_retrieve_symbol_proc(lf[328]))(3,*((C_word*)lf[328]+1),t3,C_SCHEME_FALSE);}

/* k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3604,2,t0,t1);}
t2=C_mutate((C_word*)lf[170]+1 /* (set! setup-api#runtime-prefix ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3608,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("get-environment-variable");
((C_proc3)C_fast_retrieve_symbol_proc(lf[330]))(3,*((C_word*)lf[330]+1),t3,lf[331]);}

/* k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3608(C_word c,C_word t0,C_word t1){
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
C_word ab[77],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3608,2,t0,t1);}
t2=C_mutate((C_word*)lf[171]+1 /* (set! setup-api#installation-prefix ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3609,a[2]=t1,a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3622,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[12],"setup-api#*windows*"))?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6125,a[2]=t3,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6133,a[2]=t3,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[175]+1 /* (set! setup-api#create-directory/parents ...) */,t4);
t6=C_mutate(&lf[176] /* (set! setup-api#write-info ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3646,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[186]+1 /* (set! setup-api#copy-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3754,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[188]+1 /* (set! setup-api#move-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3882,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[189]+1 /* (set! setup-api#remove-file* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3929,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate(&lf[190] /* (set! setup-api#make-dest-pathname ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3947,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[191] /* (set! setup-api#check-filelist ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3972,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate(&lf[193] /* (set! setup-api#supply-version ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4147,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[198]+1 /* (set! setup-api#standard-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4167,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[199]+1 /* (set! setup-api#install-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4264,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[216]+1 /* (set! setup-api#install-program ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4460,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[223]+1 /* (set! setup-api#install-script ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4681,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate(&lf[182] /* (set! setup-api#repo-path ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4836,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate(&lf[180] /* (set! setup-api#ensure-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4908,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[232]+1 /* (set! setup-api#try-compile ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4953,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[263]+1 /* (set! setup-api#required-chicken-version ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5123,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate(&lf[268] /* (set! setup-api#upgrade-message ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5155,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[276]+1 /* (set! setup-api#required-extension-version ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5236,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[284]+1 /* (set! setup-api#test-compile ...) */,C_fast_retrieve(lf[232]));
t24=C_mutate((C_word*)lf[285]+1 /* (set! setup-api#find-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5357,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[294]+1 /* (set! setup-api#find-header ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5416,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[266]+1 /* (set! setup-api#version>=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5438,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5639,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6055,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp);
C_trace("make-parameter");
((C_proc4)C_fast_retrieve_symbol_proc(lf[328]))(4,*((C_word*)lf[328]+1),t27,lf[329],t28);}

/* a6054 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6055(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_6055,3,t0,t1,t2);}
t3=C_i_not(t2);
t4=(C_truep(t3)?t3:C_i_nullp(t2));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[324]);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6071,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_listp(t2))){
t6=C_i_length(t2);
t7=t5;
f_6071(t7,C_i_nequalp(C_fix(2),t6));}
else{
t6=t5;
f_6071(t6,C_SCHEME_FALSE);}}}

/* k6069 in a6054 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_6071(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6071,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[3]);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6078,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6101,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace("ensure-string1633");
f_6078(t5,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6108,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("warning");
((C_proc4)C_fast_retrieve_symbol_proc(lf[326]))(4,*((C_word*)lf[326]+1),t2,lf[327],((C_word*)t0)[3]);}}

/* k6106 in k6069 in a6054 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#extension-name-and-version");
((C_proc2)C_fast_retrieve_symbol_proc(lf[197]))(2,*((C_word*)lf[197]+1),((C_word*)t0)[2]);}

/* k6099 in k6069 in a6054 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6105,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("ensure-string1633");
f_6078(t2,((C_word*)t0)[2]);}

/* k6103 in k6099 in k6069 in a6054 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6105,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[2],t1));}

/* ensure-string in k6069 in a6054 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_6078(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6078,NULL,2,t1,t2);}
t3=C_i_not(t2);
if(C_truep(t3)){
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[325]);}
else{
C_trace("->string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[77]))(3,*((C_word*)lf[77]+1),t1,t2);}}
else{
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[325]);}
else{
C_trace("->string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[77]))(3,*((C_word*)lf[77]+1),t1,t2);}}}

/* k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5639(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5639,2,t0,t1);}
t2=C_mutate((C_word*)lf[197]+1 /* (set! setup-api#extension-name-and-version ...) */,t1);
t3=C_mutate((C_word*)lf[300]+1 /* (set! setup-api#extension-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5641,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[301]+1 /* (set! setup-api#extension-version ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5651,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[303]+1 /* (set! setup-api#read-info ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5695,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[305]+1 /* (set! setup-api#remove-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5730,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[314]+1 /* (set! setup-api#remove-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5906,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[65] /* (set! setup-api#$system ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5983,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[319]+1 /* (set! setup-api#setup-error-handling ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6033,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6053,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api#user-install-setup");
f_2133(t10);}

/* k6051 in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* f_6033 in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6039,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp);
C_trace("current-exception-handler");
((C_proc3)C_fast_retrieve_symbol_proc(lf[323]))(3,*((C_word*)lf[323]+1),t1,t2);}

/* a6038 */
static void C_ccall f_6039(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6039,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6043,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6050,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("current-error-port");
((C_proc2)C_fast_retrieve_symbol_proc(lf[322]))(2,*((C_word*)lf[322]+1),t4);}

/* k6048 in a6038 */
static void C_ccall f_6050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("print-error-message");
((C_proc4)C_fast_retrieve_symbol_proc(lf[321]))(4,*((C_word*)lf[321]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6041 in a6038 */
static void C_ccall f_6043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("reset");
((C_proc2)C_fast_retrieve_symbol_proc(lf[320]))(2,*((C_word*)lf[320]+1),((C_word*)t0)[2]);}

/* setup-api#$system in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_5983(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5983,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5987,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6028,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[10],"setup-api#*windows-shell*"))){
C_trace("string-append");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(5,*((C_word*)lf[105]+1),t4,lf[317],t2,lf[318]);}
else{
t5=t2;
C_trace("system");
((C_proc3)C_fast_retrieve_symbol_proc(lf[236]))(3,*((C_word*)lf[236]+1),t3,t5);}}

/* k6026 in setup-api#$system in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("system");
((C_proc3)C_fast_retrieve_symbol_proc(lf[236]))(3,*((C_word*)lf[236]+1),((C_word*)t0)[2],t1);}

/* k5985 in setup-api#$system in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5987,2,t0,t1);}
if(C_truep(C_i_zerop(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6000,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[69]))(2,*((C_word*)lf[69]+1),t2);}}

/* k5998 in k5985 in setup-api#$system in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6000,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6003,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[316],t1);}

/* k6001 in k5998 in k5985 in setup-api#$system in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6003,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6006,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k6004 in k6001 in k5998 in k5985 in setup-api#$system in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6006,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(58),((C_word*)t0)[3]);}

/* k6007 in k6004 in k6001 in k5998 in k5985 in setup-api#$system in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k6010 in k6007 in k6004 in k6001 in k5998 in k5985 in setup-api#$system in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6012,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6015,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k6013 in k6010 in k6007 in k6004 in k6001 in k5998 in k5985 in setup-api#$system in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6015,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6018,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[315],((C_word*)t0)[3]);}

/* k6016 in k6013 in k6010 in k6007 in k6004 in k6001 in k5998 in k5985 in setup-api#$system in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6018,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6021,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k6019 in k6016 in k6013 in k6010 in k6007 in k6004 in k6001 in k5998 in k5985 in setup-api#$system in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6021,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6024,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[66]))(3,*((C_word*)lf[66]+1),t2,((C_word*)t0)[2]);}

/* k6022 in k6019 in k6016 in k6013 in k6010 in k6007 in k6004 in k6001 in k5998 in k5985 in setup-api#$system in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("error");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(3,*((C_word*)lf[118]+1),((C_word*)t0)[2],t1);}

/* f_5906 in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5906(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5906r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5906r(t0,t1,t2,t3);}}

static void C_ccall f_5906r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5910,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
C_trace("repository-path");
((C_proc2)C_fast_retrieve_symbol_proc(lf[181]))(2,*((C_word*)lf[181]+1),t4);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_5910(2,t6,C_i_car(t3));}
else{
C_trace("##sys#error");
t6=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k5908 */
static void C_ccall f_5910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5910,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5959,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api#read-info");
((C_proc4)C_fast_retrieve_symbol_proc(lf[303]))(4,*((C_word*)lf[303]+1),t2,((C_word*)t0)[2],t1);}

/* k5957 in k5908 */
static void C_ccall f_5959(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5959,2,t0,t1);}
t2=C_i_assq(lf[177],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=C_fast_retrieve(lf[189]);
t5=C_i_cdr(t2);
t6=C_i_check_list_2(t5,lf[88]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5934,a[2]=t4,a[3]=t8,a[4]=((C_word)li109),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_5934(t10,t3,t5);}
else{
t4=t3;
f_5916(2,t4,C_SCHEME_FALSE);}}

/* for-each-loop1754 in k5957 in k5908 */
static void C_fcall f_5934(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5934,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5944,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("g17551761");
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5942 in for-each-loop1754 in k5957 in k5908 */
static void C_ccall f_5944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5934(t3,((C_word*)t0)[2],t2);}

/* k5914 in k5957 in k5908 */
static void C_ccall f_5916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5923,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("make-pathname");
((C_proc5)C_fast_retrieve_symbol_proc(lf[78]))(5,*((C_word*)lf[78]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2],C_retrieve2(lf[2],"setup-api#constant25"));}

/* k5921 in k5914 in k5957 in k5908 */
static void C_ccall f_5923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#remove-file*");
((C_proc3)C_fast_retrieve_symbol_proc(lf[189]))(3,*((C_word*)lf[189]+1),((C_word*)t0)[2],t1);}

/* f_5730 in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5730(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5730r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5730r(t0,t1,t2,t3);}}

static void C_ccall f_5730r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5734,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_5734(2,t5,C_SCHEME_TRUE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_5734(2,t6,C_i_car(t3));}
else{
C_trace("##sys#error");
t6=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k5732 */
static void C_ccall f_5734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5734,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5885,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("file-exists?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[141]))(3,*((C_word*)lf[141]+1),t2,((C_word*)t0)[2]);}

/* k5883 in k5732 */
static void C_ccall f_5885(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5885,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_retrieve2(lf[9],"setup-api#*sudo*"))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5752,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5757,a[2]=((C_word*)t0)[3],a[3]=((C_word)li104),tmp=(C_word)a,a+=4,tmp);
C_trace("call-with-current-continuation");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[129]+1)))(3,*((C_word*)lf[129]+1),t2,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5816,a[2]=t3,a[3]=((C_word)li107),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5816(t5,((C_word*)t0)[4],((C_word*)t0)[3]);}}
else{
if(C_truep(((C_word*)t0)[2])){
C_trace("error");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(5,*((C_word*)lf[118]+1),((C_word*)t0)[4],lf[312],lf[313],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* walk in k5883 in k5732 */
static void C_fcall f_5816(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5816,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5820,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace("directory");
((C_proc4)C_fast_retrieve_symbol_proc(lf[311]))(4,*((C_word*)lf[311]+1),t3,t2,C_SCHEME_TRUE);}

/* k5818 in walk in k5883 in k5732 */
static void C_ccall f_5820(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5820,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5821,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li105),tmp=(C_word)a,a+=5,tmp);
t3=C_i_check_list_2(t1,lf[88]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5855,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5860,a[2]=t2,a[3]=t6,a[4]=((C_word)li106),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5860(t8,t4,t1);}

/* for-each-loop1716 in k5818 in walk in k5883 in k5732 */
static void C_fcall f_5860(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5860,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5870,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("g17171723");
t5=((C_word*)t0)[2];
f_5821(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5868 in for-each-loop1716 in k5818 in walk in k5883 in k5732 */
static void C_ccall f_5870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5860(t3,((C_word*)t0)[2],t2);}

/* k5853 in k5818 in walk in k5883 in k5732 */
static void C_ccall f_5855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("delete-directory");
((C_proc3)C_fast_retrieve_symbol_proc(lf[310]))(3,*((C_word*)lf[310]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* g1717 in k5818 in walk in k5883 in k5732 */
static void C_fcall f_5821(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5821,NULL,3,t0,t1,t2);}
t3=C_i_string_equal_p(lf[307],t2);
t4=(C_truep(t3)?t3:C_i_string_equal_p(lf[308],t2));
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5834,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),t5,((C_word*)t0)[2],t2);}}

/* k5832 in g1717 in k5818 in walk in k5883 in k5732 */
static void C_ccall f_5834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5834,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5840,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("directory?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[229]))(3,*((C_word*)lf[229]+1),t2,t1);}

/* k5838 in k5832 in g1717 in k5818 in walk in k5883 in k5732 */
static void C_ccall f_5840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("walk1711");
t2=((C_word*)((C_word*)t0)[4])[1];
f_5816(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
C_trace("delete-file");
((C_proc3)C_fast_retrieve_symbol_proc(lf[309]))(3,*((C_word*)lf[309]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* a5756 in k5883 in k5732 */
static void C_ccall f_5757(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5757,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5763,a[2]=t2,a[3]=((C_word)li99),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5772,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp);
C_trace("with-exception-handler");
((C_proc4)C_fast_retrieve_symbol_proc(lf[128]))(4,*((C_word*)lf[128]+1),t1,t3,t4);}

/* a5771 in a5756 in k5883 in k5732 */
static void C_ccall f_5772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5772,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5778,a[2]=((C_word*)t0)[3],a[3]=((C_word)li100),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5801,a[2]=((C_word*)t0)[2],a[3]=((C_word)li102),tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,t1,t2,t3);}

/* a5800 in a5771 in a5756 in k5883 in k5732 */
static void C_ccall f_5801(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_5801r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5801r(t0,t1,t2);}}

static void C_ccall f_5801r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5807,a[2]=t2,a[3]=((C_word)li101),tmp=(C_word)a,a+=4,tmp);
C_trace("k16881694");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a5806 in a5800 in a5771 in a5756 in k5883 in k5732 */
static void C_ccall f_5807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5807,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a5777 in a5771 in a5756 in k5883 in k5732 */
static void C_ccall f_5778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5778,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5786,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[69]))(2,*((C_word*)lf[69]+1),t2);}

/* k5784 in a5777 in a5771 in a5756 in k5883 in k5732 */
static void C_ccall f_5786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5789,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[306],t1);}

/* k5787 in k5784 in a5777 in a5771 in a5756 in k5883 in k5732 */
static void C_ccall f_5789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5792,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5799,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t3,((C_word*)t0)[2]);}

/* k5797 in k5787 in k5784 in a5777 in a5771 in a5756 in k5883 in k5732 */
static void C_ccall f_5799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5790 in k5787 in k5784 in a5777 in a5771 in a5756 in k5883 in k5732 */
static void C_ccall f_5792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5792,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5795,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[66]))(3,*((C_word*)lf[66]+1),t2,((C_word*)t0)[2]);}

/* k5793 in k5790 in k5787 in k5784 in a5777 in a5771 in a5756 in k5883 in k5732 */
static void C_ccall f_5795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#$system");
f_5983(((C_word*)t0)[2],t1);}

/* a5762 in a5756 in k5883 in k5732 */
static void C_ccall f_5763(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5763,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5769,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp);
C_trace("k16881694");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a5768 in a5762 in a5756 in k5883 in k5732 */
static void C_ccall f_5769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5769,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k5750 in k5883 in k5732 */
static void C_ccall f_5752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("g16921693");
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* f_5695 in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5695(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5695r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5695r(t0,t1,t2,t3);}}

static void C_ccall f_5695r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5699,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
C_trace("repository-path");
((C_proc2)C_fast_retrieve_symbol_proc(lf[181]))(2,*((C_word*)lf[181]+1),t4);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_5699(2,t6,C_i_car(t3));}
else{
C_trace("##sys#error");
t6=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k5697 */
static void C_ccall f_5699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5699,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5706,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("make-pathname");
((C_proc5)C_fast_retrieve_symbol_proc(lf[78]))(5,*((C_word*)lf[78]+1),t2,t1,((C_word*)t0)[2],C_retrieve2(lf[2],"setup-api#constant25"));}

/* k5704 in k5697 */
static void C_ccall f_5706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("with-input-from-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[63]))(4,*((C_word*)lf[63]+1),((C_word*)t0)[2],t1,*((C_word*)lf[304]+1));}

/* f_5651 in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5651(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_5651r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5651r(t0,t1,t2);}}

static void C_ccall f_5651r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5655,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_5655(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_5655(2,t5,C_i_car(t2));}
else{
C_trace("##sys#error");
t5=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k5653 */
static void C_ccall f_5655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5674,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#extension-name-and-version");
((C_proc2)C_fast_retrieve_symbol_proc(lf[197]))(2,*((C_word*)lf[197]+1),t2);}

/* k5672 in k5653 */
static void C_ccall f_5674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5674,2,t0,t1);}
t2=C_i_cadr(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5664,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("string-null?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[302]))(3,*((C_word*)lf[302]+1),t3,t2);}

/* k5662 in k5672 in k5653 */
static void C_ccall f_5664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[4])){
C_trace("->string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[77]))(3,*((C_word*)lf[77]+1),((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* f_5641 in k5637 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5649,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api#extension-name-and-version");
((C_proc2)C_fast_retrieve_symbol_proc(lf[197]))(2,*((C_word*)lf[197]+1),t2);}

/* k5647 */
static void C_ccall f_5649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_car(t1));}

/* f_5438 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5438(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5438,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5441,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5505,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("version->list1567");
f_5441(t5,t2);}

/* k5503 */
static void C_ccall f_5505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5509,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("version->list1567");
f_5441(t2,((C_word*)t0)[2]);}

/* k5507 in k5503 */
static void C_ccall f_5509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5509,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5511,a[2]=t3,a[3]=((C_word)li93),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5511(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k5507 in k5503 */
static void C_fcall f_5511(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5511,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_nullp(t3));}
else{
t4=C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_i_car(t2);
if(C_truep(C_i_numberp(t5))){
t6=C_i_car(t3);
if(C_truep(C_i_numberp(t6))){
t7=C_i_car(t2);
t8=C_i_car(t3);
t9=C_i_greaterp(t7,t8);
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t10=C_i_car(t2);
t11=C_i_car(t3);
if(C_truep(C_i_nequalp(t10,t11))){
t12=C_i_cdr(t2);
t13=C_i_cdr(t3);
C_trace("loop1599");
t20=t1;
t21=t12;
t22=t13;
t1=t20;
t2=t21;
t3=t22;
goto loop;}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}
else{
t6=C_i_car(t3);
t7=C_i_numberp(t6);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5591,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_i_car(t2);
t10=C_i_car(t3);
C_trace("string>?");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[299]+1)))(4,*((C_word*)lf[299]+1),t8,t9,t10);}}}}}

/* k5589 in loop in k5507 in k5503 */
static void C_ccall f_5591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_i_car(((C_word*)t0)[4]);
t3=C_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_string_equal_p(t2,t3))){
t4=C_i_cdr(((C_word*)t0)[4]);
t5=C_i_cdr(((C_word*)t0)[3]);
C_trace("loop1599");
t6=((C_word*)((C_word*)t0)[2])[1];
f_5511(t6,((C_word*)t0)[5],t4,t5);}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}}

/* version->list */
static void C_fcall f_5441(C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5441,NULL,2,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5453,a[2]=t1,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5498,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
C_trace("->string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[77]))(3,*((C_word*)lf[77]+1),t8,t2);}

/* k5496 in version->list */
static void C_ccall f_5498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("irregex-split");
((C_proc4)C_fast_retrieve_symbol_proc(lf[297]))(4,*((C_word*)lf[297]+1),((C_word*)t0)[2],lf[298],t1);}

/* k5451 in version->list */
static void C_ccall f_5453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5453,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[87]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5461,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5461(t6,((C_word*)t0)[2],t1);}

/* map-loop1571 in k5451 in version->list */
static void C_fcall f_5461(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(7);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5461,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_string_to_number(&a,2,t3,C_fix(10));
t5=(C_truep(t4)?C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST):C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST));
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

/* f_5416 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5416(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5416,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5424,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[69]))(2,*((C_word*)lf[69]+1),t3);}

/* k5422 */
static void C_ccall f_5424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5424,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5427,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[296],t1);}

/* k5425 in k5422 */
static void C_ccall f_5427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5427,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5430,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5428 in k5425 in k5422 */
static void C_ccall f_5430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5430,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[295],((C_word*)t0)[2]);}

/* k5431 in k5428 in k5425 in k5422 */
static void C_ccall f_5433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5436,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[66]))(3,*((C_word*)lf[66]+1),t2,((C_word*)t0)[2]);}

/* k5434 in k5431 in k5428 in k5425 in k5422 */
static void C_ccall f_5436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#test-compile");
((C_proc5)C_fast_retrieve_symbol_proc(lf[284]))(5,*((C_word*)lf[284]+1),((C_word*)t0)[2],t1,lf[256],C_SCHEME_TRUE);}

/* f_5357 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5357(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5357,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5365,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[69]))(2,*((C_word*)lf[69]+1),t4);}

/* k5363 */
static void C_ccall f_5365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5368,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[293],t1);}

/* k5366 in k5363 */
static void C_ccall f_5368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k5369 in k5366 in k5363 */
static void C_ccall f_5371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5371,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[292],((C_word*)t0)[3]);}

/* k5372 in k5369 in k5366 in k5363 */
static void C_ccall f_5374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k5375 in k5372 in k5369 in k5366 in k5363 */
static void C_ccall f_5377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5380,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[291],((C_word*)t0)[3]);}

/* k5378 in k5375 in k5372 in k5369 in k5366 in k5363 */
static void C_ccall f_5380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5380,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k5381 in k5378 in k5375 in k5372 in k5369 in k5366 in k5363 */
static void C_ccall f_5383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5383,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[290],((C_word*)t0)[3]);}

/* k5384 in k5381 in k5378 in k5375 in k5372 in k5369 in k5366 in k5363 */
static void C_ccall f_5386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5386,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5389,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 in k5366 in k5363 */
static void C_ccall f_5389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5389,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5392,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[289],((C_word*)t0)[3]);}

/* k5390 in k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 in k5366 in k5363 */
static void C_ccall f_5392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5392,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5395,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k5393 in k5390 in k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 in k5366 in k5363 */
static void C_ccall f_5395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5395,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[288],((C_word*)t0)[3]);}

/* k5396 in k5393 in k5390 in k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 in k5366 in k5363 */
static void C_ccall f_5398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5398,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5401,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5399 in k5396 in k5393 in k5390 in k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 in k5366 in k5363 */
static void C_ccall f_5401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[287],((C_word*)t0)[2]);}

/* k5402 in k5399 in k5396 in k5393 in k5390 in k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 in k5366 in k5363 */
static void C_ccall f_5404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5407,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k5405 in k5402 in k5399 in k5396 in k5393 in k5390 in k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 in k5366 in k5363 */
static void C_ccall f_5407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5407,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5410,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[66]))(3,*((C_word*)lf[66]+1),t2,((C_word*)t0)[2]);}

/* k5408 in k5405 in k5402 in k5399 in k5396 in k5393 in k5390 in k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 in k5366 in k5363 */
static void C_ccall f_5410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5410,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5414,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("conc");
((C_proc4)C_fast_retrieve_symbol_proc(lf[244]))(4,*((C_word*)lf[244]+1),t2,lf[286],((C_word*)t0)[2]);}

/* k5412 in k5408 in k5405 in k5402 in k5399 in k5396 in k5393 in k5390 in k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 in k5366 in k5363 */
static void C_ccall f_5414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#test-compile");
((C_proc5)C_fast_retrieve_symbol_proc(lf[284]))(5,*((C_word*)lf[284]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[259],t1);}

/* f_5236 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5236(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_5236r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5236r(t0,t1,t2);}}

static void C_ccall f_5236r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5242,a[2]=t4,a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5242(t6,t1,t2);}

/* loop */
static void C_fcall f_5242(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5242,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5255,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t2))){
t4=C_i_length(t2);
t5=t3;
f_5255(t5,C_i_greater_or_equalp(t4,C_fix(2)));}
else{
t4=t3;
f_5255(t4,C_SCHEME_FALSE);}}}

/* k5253 in loop */
static void C_fcall f_5255(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5255,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[4]);
t3=C_i_cadr(((C_word*)t0)[4]);
t4=C_i_cddr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5267,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
C_trace("extension-information");
((C_proc3)C_fast_retrieve_symbol_proc(lf[281]))(3,*((C_word*)lf[281]+1),t5,t2);}
else{
C_trace("error");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(5,*((C_word*)lf[118]+1),((C_word*)t0)[3],lf[282],lf[283],((C_word*)t0)[4]);}}

/* k5265 in k5253 in loop */
static void C_ccall f_5267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5267,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_assq(lf[194],t1))){
t3=C_i_assq(lf[194],t1);
t4=t2;
f_5273(t4,C_i_cadr(t3));}
else{
t3=t2;
f_5273(t3,C_SCHEME_FALSE);}}
else{
C_trace("setup-api#upgrade-message");
f_5155(((C_word*)t0)[6],((C_word*)t0)[5],lf[280],C_SCHEME_END_OF_LIST);}}

/* k5271 in k5265 in k5253 in loop */
static void C_fcall f_5273(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5273,NULL,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5313,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api#version>=?");
((C_proc4)C_fast_retrieve_symbol_proc(lf[266]))(4,*((C_word*)lf[266]+1),t4,((C_word*)t0)[4],t1);}
else{
C_trace("setup-api#upgrade-message");
f_5155(((C_word*)t0)[6],((C_word*)t0)[5],lf[279],C_SCHEME_END_OF_LIST);}}

/* k5311 in k5271 in k5265 in k5253 in loop */
static void C_ccall f_5313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5313,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5324,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("->string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[77]))(3,*((C_word*)lf[77]+1),t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
f_5288(t2,C_SCHEME_FALSE);}}

/* k5322 in k5311 in k5271 in k5265 in k5253 in loop */
static void C_ccall f_5324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5328,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("->string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[77]))(3,*((C_word*)lf[77]+1),t2,((C_word*)t0)[2]);}

/* k5326 in k5322 in k5311 in k5271 in k5265 in k5253 in loop */
static void C_ccall f_5328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_string_equal_p(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
f_5288(t3,C_i_not(t2));}

/* k5286 in k5271 in k5265 in k5253 in loop */
static void C_fcall f_5288(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5288,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5295,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[69]))(2,*((C_word*)lf[69]+1),t2);}
else{
C_trace("loop1485");
t2=((C_word*)((C_word*)t0)[3])[1];
f_5242(t2,((C_word*)t0)[6],((C_word*)t0)[2]);}}

/* k5293 in k5286 in k5271 in k5265 in k5253 in loop */
static void C_ccall f_5295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5298,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[278],t1);}

/* k5296 in k5293 in k5286 in k5271 in k5265 in k5253 in loop */
static void C_ccall f_5298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5301,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5299 in k5296 in k5293 in k5286 in k5271 in k5265 in k5253 in loop */
static void C_ccall f_5301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[277],((C_word*)t0)[2]);}

/* k5302 in k5299 in k5296 in k5293 in k5286 in k5271 in k5265 in k5253 in loop */
static void C_ccall f_5304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5307,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[66]))(3,*((C_word*)lf[66]+1),t2,((C_word*)t0)[2]);}

/* k5305 in k5302 in k5299 in k5296 in k5293 in k5286 in k5271 in k5265 in k5253 in loop */
static void C_ccall f_5307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5307,2,t0,t1);}
C_trace("setup-api#upgrade-message");
f_5155(((C_word*)t0)[4],((C_word*)t0)[3],t1,C_a_i_list(&a,1,((C_word*)t0)[2]));}

/* setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_5155(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5155,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5159,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_5159(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_5159(2,t7,C_i_car(t4));}
else{
C_trace("##sys#error");
t7=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5159,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[69]))(2,*((C_word*)lf[69]+1),t2);}

/* k5164 in k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5166,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5169,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[275],t1);}

/* k5167 in k5164 in k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("write");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[119]+1)))(4,*((C_word*)lf[119]+1),t2,((C_word*)t0)[3],((C_word*)t0)[5]);}

/* k5170 in k5167 in k5164 in k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5175,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[274],((C_word*)t0)[5]);}

/* k5173 in k5170 in k5167 in k5164 in k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5175,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5178,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k5176 in k5173 in k5170 in k5167 in k5164 in k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5178,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[273],((C_word*)t0)[4]);}

/* k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5181,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5184,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* k5185 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5187,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[272],((C_word*)t0)[4]);}

/* k5188 in k5185 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5193,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k5191 in k5188 in k5185 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5196,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5212,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("conc");
((C_proc4)C_fast_retrieve_symbol_proc(lf[244]))(4,*((C_word*)lf[244]+1),t3,lf[270],((C_word*)t0)[2]);}
else{
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[271],((C_word*)t0)[3]);}}

/* k5210 in k5191 in k5188 in k5185 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5194 in k5191 in k5188 in k5185 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5196,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k5197 in k5194 in k5191 in k5188 in k5185 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5202,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k5200 in k5197 in k5194 in k5191 in k5188 in k5185 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5202,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[269],((C_word*)t0)[2]);}

/* k5203 in k5200 in k5197 in k5194 in k5191 in k5188 in k5185 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5205,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5208,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[66]))(3,*((C_word*)lf[66]+1),t2,((C_word*)t0)[2]);}

/* k5206 in k5203 in k5200 in k5197 in k5194 in k5191 in k5188 in k5185 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in k5157 in setup-api#upgrade-message in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("error");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(3,*((C_word*)lf[118]+1),((C_word*)t0)[2],t1);}

/* f_5123 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_5123(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5123,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5130,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5153,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("chicken-version");
((C_proc2)C_fast_retrieve_symbol_proc(lf[267]))(2,*((C_word*)lf[267]+1),t4);}

/* k5151 */
static void C_ccall f_5153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#version>=?");
((C_proc4)C_fast_retrieve_symbol_proc(lf[266]))(4,*((C_word*)lf[266]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5128 */
static void C_ccall f_5130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5130,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[69]))(2,*((C_word*)lf[69]+1),t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5135 in k5128 */
static void C_ccall f_5137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5137,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5140,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[265],t1);}

/* k5138 in k5135 in k5128 */
static void C_ccall f_5140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5143,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5141 in k5138 in k5135 in k5128 */
static void C_ccall f_5143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5143,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[264],((C_word*)t0)[2]);}

/* k5144 in k5141 in k5138 in k5135 in k5128 */
static void C_ccall f_5146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5146,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5149,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[66]))(3,*((C_word*)lf[66]+1),t2,((C_word*)t0)[2]);}

/* k5147 in k5144 in k5141 in k5138 in k5135 in k5128 */
static void C_ccall f_5149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("error");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(3,*((C_word*)lf[118]+1),((C_word*)t0)[2],t1);}

/* f_4953 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4953(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_4953r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4953r(t0,t1,t2,t3);}}

static void C_ccall f_4953r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(9);
t4=C_i_get_keyword(lf[233],t3,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4960,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5117,a[2]=t4,a[3]=((C_word)li83),tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[210]+1)))(5,*((C_word*)lf[210]+1),t5,lf[262],t3,t6);}

/* a5116 */
static void C_ccall f_5117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5117,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(((C_word*)t0)[2])?C_retrieve2(lf[5],"setup-api#*cxx*"):C_retrieve2(lf[4],"setup-api#*cc*")));}

/* k4958 */
static void C_ccall f_4960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5114,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[210]+1)))(5,*((C_word*)lf[210]+1),t2,lf[261],((C_word*)t0)[2],t3);}

/* a5113 in k4958 */
static void C_ccall f_5114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5114,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[260]);}

/* k4961 in k4958 */
static void C_ccall f_4963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4963,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4966,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5111,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[210]+1)))(5,*((C_word*)lf[210]+1),t2,lf[259],((C_word*)t0)[2],t3);}

/* a5110 in k4961 in k4958 */
static void C_ccall f_5111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5111,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[258]);}

/* k4964 in k4961 in k4958 */
static void C_ccall f_4966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4966,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5105,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[210]+1)))(5,*((C_word*)lf[210]+1),t2,lf[257],((C_word*)t0)[2],t3);}

/* a5104 in k4964 in k4961 in k4958 */
static void C_ccall f_5105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5105,2,t0,t1);}
C_trace("setup-api#setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[21]))(2,*((C_word*)lf[21]+1),t1);}

/* k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_4969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4972,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5102,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[210]+1)))(5,*((C_word*)lf[210]+1),t2,lf[256],((C_word*)t0)[2],t3);}

/* a5101 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5102,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_4972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4972,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4975,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("create-temporary-file");
((C_proc3)C_fast_retrieve_symbol_proc(lf[70]))(3,*((C_word*)lf[70]+1),t2,lf[255]);}

/* k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_4975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("pathname-replace-extension");
((C_proc4)C_fast_retrieve_symbol_proc(lf[81]))(4,*((C_word*)lf[81]+1),t2,t1,lf[254]);}

/* k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_4978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4981,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5096,a[2]=((C_word*)t0)[2],a[3]=((C_word)li78),tmp=(C_word)a,a+=4,tmp);
C_trace("with-output-to-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[64]))(4,*((C_word*)lf[64]+1),t2,((C_word*)t0)[8],t3);}

/* a5095 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5096,2,t0,t1);}
t2=*((C_word*)lf[67]+1);
C_trace("g13931394");
t3=t2;
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t1,((C_word*)t0)[2]);}

/* k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_4981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4984,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5069,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(((C_word*)t0)[5])?lf[238]:lf[239]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5083,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
t6=t5;
f_5083(2,t6,lf[250]);}
else{
C_trace("conc");
((C_proc8)C_fast_retrieve_symbol_proc(lf[244]))(8,*((C_word*)lf[244]+1),t5,lf[251],C_retrieve2(lf[8],"setup-api#*target-lib-home*"),lf[252],((C_word*)t0)[2],lf[253],C_retrieve2(lf[7],"setup-api#*target-libs*"));}}

/* k5081 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_truep(C_retrieve2(lf[12],"setup-api#*windows*"))?lf[240]:lf[241]);
t3=(C_truep(((C_word*)t0)[7])?lf[242]:lf[243]);
C_trace("conc");
((C_proc15)C_fast_retrieve_symbol_proc(lf[244]))(15,*((C_word*)lf[244]+1),((C_word*)t0)[6],((C_word*)t0)[5],lf[245],((C_word*)t0)[4],lf[246],((C_word*)t0)[3],lf[247],C_retrieve2(lf[6],"setup-api#*target-cflags*"),lf[248],((C_word*)t0)[2],lf[249],t1,t2,t3);}

/* k5067 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5072,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("print");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(4,*((C_word*)lf[50]+1),t2,t1,lf[237]);}
else{
t3=t1;
C_trace("system");
((C_proc3)C_fast_retrieve_symbol_proc(lf[236]))(3,*((C_word*)lf[236]+1),((C_word*)t0)[3],t3);}}

/* k5070 in k5067 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("system");
((C_proc3)C_fast_retrieve_symbol_proc(lf[236]))(3,*((C_word*)lf[236]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_4984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4984,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4987,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
if(C_truep(C_i_zerop(t1))){
C_trace("print");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(3,*((C_word*)lf[50]+1),t2,lf[234]);}
else{
C_trace("print");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(3,*((C_word*)lf[50]+1),t2,lf[235]);}}
else{
t3=t2;
f_4987(2,t3,C_SCHEME_UNDEFINED);}}

/* k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_4987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4990,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4998,a[2]=((C_word*)t0)[2],a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp);
C_trace("call-with-current-continuation");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[129]+1)))(3,*((C_word*)lf[129]+1),t2,t3);}

/* a4997 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_4998(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4998,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5004,a[2]=t2,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5013,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li76),tmp=(C_word)a,a+=5,tmp);
C_trace("with-exception-handler");
((C_proc4)C_fast_retrieve_symbol_proc(lf[128]))(4,*((C_word*)lf[128]+1),t1,t3,t4);}

/* a5012 in a4997 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5013,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5019,a[2]=((C_word*)t0)[3],a[3]=((C_word)li73),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5045,a[2]=((C_word*)t0)[2],a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,t1,t2,t3);}

/* a5044 in a5012 in a4997 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5045(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_5045r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5045r(t0,t1,t2);}}

static void C_ccall f_5045r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5051,a[2]=t2,a[3]=((C_word)li74),tmp=(C_word)a,a+=4,tmp);
C_trace("k14001406");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a5050 in a5044 in a5012 in a4997 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5051,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a5018 in a5012 in a4997 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5019,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5027,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[69]))(2,*((C_word*)lf[69]+1),t2);}

/* k5025 in a5018 in a5012 in a4997 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5027,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5030,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,C_retrieve2(lf[32],"setup-api#*remove-command*"),t1);}

/* k5028 in k5025 in a5018 in a5012 in a4997 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[3]);}

/* k5031 in k5028 in k5025 in a5018 in a5012 in a4997 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5036,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5043,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t3,((C_word*)t0)[2]);}

/* k5041 in k5031 in k5028 in k5025 in a5018 in a5012 in a4997 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5034 in k5031 in k5028 in k5025 in a5018 in a5012 in a4997 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5036,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5039,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[66]))(3,*((C_word*)lf[66]+1),t2,((C_word*)t0)[2]);}

/* k5037 in k5034 in k5031 in k5028 in k5025 in a5018 in a5012 in a4997 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#$system");
f_5983(((C_word*)t0)[2],t1);}

/* a5003 in a4997 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5004(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5004,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5010,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp);
C_trace("k14001406");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a5009 in a5003 in a4997 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_5010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5010,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_4990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4990,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("g14041405");
t3=t1;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 */
static void C_ccall f_4993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_zerop(((C_word*)t0)[2]));}

/* setup-api#ensure-directory in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_4908(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4908,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4912,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("pathname-directory");
((C_proc3)C_fast_retrieve_symbol_proc(lf[231]))(3,*((C_word*)lf[231]+1),t3,t2);}

/* k4910 in setup-api#ensure-directory in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4912,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4921,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("file-exists?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[141]))(3,*((C_word*)lf[141]+1),t3,t1);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}}

/* k4919 in k4910 in setup-api#ensure-directory in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4921,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4927,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("directory?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[229]))(3,*((C_word*)lf[229]+1),t2,((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api#create-directory/parents");
((C_proc3)C_fast_retrieve_symbol_proc(lf[175]))(3,*((C_word*)lf[175]+1),t2,((C_word*)t0)[2]);}}

/* k4931 in k4919 in k4910 in setup-api#ensure-directory in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4933,2,t0,t1);}
if(C_truep(C_retrieve2(lf[10],"setup-api#*windows-shell*"))){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4951,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t2,((C_word*)t0)[2]);}}

/* k4949 in k4931 in k4919 in k4910 in setup-api#ensure-directory in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4951,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[34],"setup-api#*chmod-command*"),lf[230],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api#execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[86]))(3,*((C_word*)lf[86]+1),((C_word*)t0)[2],t3);}

/* k4925 in k4919 in k4910 in setup-api#ensure-directory in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
C_trace("error");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(3,*((C_word*)lf[118]+1),((C_word*)t0)[2],lf[228]);}}

/* k4913 in k4910 in setup-api#ensure-directory in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* setup-api#repo-path in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_4836(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4836,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4840,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_4840(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_4840(2,t5,C_i_car(t2));}
else{
C_trace("##sys#error");
t5=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k4838 in setup-api#repo-path in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4843,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4852,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api#deployment-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[23]))(2,*((C_word*)lf[23]+1),t3);}
else{
C_trace("repository-path");
((C_proc2)C_fast_retrieve_symbol_proc(lf[181]))(2,*((C_word*)lf[181]+1),t2);}}

/* k4850 in k4838 in setup-api#repo-path in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4852,2,t0,t1);}
if(C_truep(t1)){
C_trace("setup-api#installation-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[171]))(2,*((C_word*)lf[171]+1),((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4858,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api#destination-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[169]))(2,*((C_word*)lf[169]+1),t2);}}

/* k4856 in k4850 in k4838 in setup-api#repo-path in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4858,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4868,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[69]))(2,*((C_word*)lf[69]+1),t2);}
else{
C_trace("repository-path");
((C_proc2)C_fast_retrieve_symbol_proc(lf[181]))(2,*((C_word*)lf[181]+1),((C_word*)t0)[2]);}}

/* k4866 in k4856 in k4850 in k4838 in setup-api#repo-path in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4868,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4871,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[227],t1);}

/* k4869 in k4866 in k4856 in k4850 in k4838 in setup-api#repo-path in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4871,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_fudge(C_fix(42));
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,t3,((C_word*)t0)[2]);}

/* k4872 in k4869 in k4866 in k4856 in k4850 in k4838 in setup-api#repo-path in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4874,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4877,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[66]))(3,*((C_word*)lf[66]+1),t2,((C_word*)t0)[2]);}

/* k4875 in k4872 in k4869 in k4866 in k4856 in k4850 in k4838 in setup-api#repo-path in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4841 in k4838 in setup-api#repo-path in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4843,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4846,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#ensure-directory");
f_4908(t2,t1);}

/* k4844 in k4841 in k4838 in setup-api#repo-path in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_4681 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4681(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_4681r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4681r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4681r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4685,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_4685(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_4685(2,t7,C_i_car(t4));}
else{
C_trace("##sys#error");
t7=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k4683 */
static void C_ccall f_4685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4685,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4691,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api#setup-install-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[22]))(2,*((C_word*)lf[22]+1),t2);}

/* k4689 in k4683 */
static void C_ccall f_4691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4691,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4694,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t3=((C_word*)t0)[2];
C_trace("setup-api#check-filelist");
f_3972(t2,t3);}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[2]);
C_trace("setup-api#check-filelist");
f_3972(t2,t3);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4692 in k4689 in k4683 */
static void C_ccall f_4694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4694,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4697,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api#installation-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[171]))(2,*((C_word*)lf[171]+1),t2);}

/* k4695 in k4692 in k4689 in k4683 */
static void C_ccall f_4697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4697,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4700,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4805,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),t3,t1,lf[226]);}

/* k4803 in k4695 in k4692 in k4689 in k4683 */
static void C_ccall f_4805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#ensure-directory");
f_4908(((C_word*)t0)[2],t1);}

/* k4698 in k4695 in k4692 in k4689 in k4683 */
static void C_ccall f_4700(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4700,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4701,a[2]=t1,a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[5],lf[87]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4741,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4768,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li67),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_4768(t12,t8,((C_word*)t0)[5]);}

/* map-loop1290 in k4698 in k4695 in k4692 in k4689 in k4683 */
static void C_fcall f_4768(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4768,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4797,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("g12961305");
t5=((C_word*)t0)[2];
f_4701(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4795 in map-loop1290 in k4698 in k4695 in k4692 in k4689 in k4683 */
static void C_ccall f_4797(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4797,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4768(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4768(t6,((C_word*)t0)[3],t5);}}

/* k4739 in k4698 in k4695 in k4692 in k4689 in k4683 */
static void C_ccall f_4741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4741,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4744,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[10],"setup-api#*windows-shell*"))){
t3=t2;
f_4744(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4766,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("string-intersperse");
((C_proc4)C_fast_retrieve_symbol_proc(lf[91]))(4,*((C_word*)lf[91]+1),t3,t1,lf[225]);}}

/* k4764 in k4739 in k4698 in k4695 in k4692 in k4689 in k4683 */
static void C_ccall f_4766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4766,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[34],"setup-api#*chmod-command*"),lf[224],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api#execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[86]))(3,*((C_word*)lf[86]+1),((C_word*)t0)[2],t3);}

/* k4742 in k4739 in k4698 in k4695 in k4692 in k4689 in k4683 */
static void C_ccall f_4744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4744,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4751,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api#supply-version");
f_4147(t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k4749 in k4742 in k4739 in k4698 in k4695 in k4692 in k4689 in k4683 */
static void C_ccall f_4751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#write-info");
f_3646(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* g1296 in k4698 in k4695 in k4692 in k4689 in k4683 */
static void C_fcall f_4701(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4701,NULL,3,t0,t1,t2);}
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_i_car(t2):t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4708,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#make-dest-pathname");
f_3947(t5,((C_word*)t0)[2],t2);}

/* k4706 in g1296 in k4698 in k4695 in k4692 in k4689 in k4683 */
static void C_ccall f_4708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4711,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#copy-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[186]))(4,*((C_word*)lf[186]+1),t2,((C_word*)t0)[2],t1);}

/* k4709 in k4706 in g1296 in k4698 in k4695 in k4692 in k4689 in k4683 */
static void C_ccall f_4711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[10],"setup-api#*windows-shell*"))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4729,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t3,((C_word*)t0)[2]);}}

/* k4727 in k4709 in k4706 in g1296 in k4698 in k4695 in k4692 in k4689 in k4683 */
static void C_ccall f_4729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4729,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[34],"setup-api#*chmod-command*"),lf[178],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api#execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[86]))(3,*((C_word*)lf[86]+1),((C_word*)t0)[2],t3);}

/* k4712 in k4709 in k4706 in g1296 in k4698 in k4695 in k4692 in k4689 in k4683 */
static void C_ccall f_4714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_4460 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4460(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_4460r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4460r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4460r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4464,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_4464(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_4464(2,t7,C_i_car(t4));}
else{
C_trace("##sys#error");
t7=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k4462 */
static void C_ccall f_4464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4464,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4466,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4480,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api#setup-install-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[22]))(2,*((C_word*)lf[22]+1),t3);}

/* k4478 in k4462 */
static void C_ccall f_4480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4480,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4483,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t3=((C_word*)t0)[2];
C_trace("setup-api#check-filelist");
f_3972(t2,t3);}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[2]);
C_trace("setup-api#check-filelist");
f_3972(t2,t3);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4481 in k4478 in k4462 */
static void C_ccall f_4483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4486,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api#installation-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[171]))(2,*((C_word*)lf[171]+1),t2);}

/* k4484 in k4481 in k4478 in k4462 */
static void C_ccall f_4486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4486,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4489,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4650,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),t3,t1,lf[222]);}

/* k4648 in k4484 in k4481 in k4478 in k4462 */
static void C_ccall f_4650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#ensure-directory");
f_4908(((C_word*)t0)[2],t1);}

/* k4487 in k4484 in k4481 in k4478 in k4462 */
static void C_ccall f_4489(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4489,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4492,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[12],"setup-api#*windows*"))){
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4576,a[2]=((C_word*)t0)[3],a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[87]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4613,a[2]=t7,a[3]=t4,a[4]=t10,a[5]=t6,a[6]=((C_word)li64),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_4613(t12,t2,((C_word*)t0)[2]);}
else{
t3=t2;
f_4492(2,t3,((C_word*)t0)[2]);}}

/* map-loop1205 in k4487 in k4484 in k4481 in k4478 in k4462 */
static void C_fcall f_4613(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4613,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4642,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("g12111220");
t5=((C_word*)t0)[2];
f_4576(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4640 in map-loop1205 in k4487 in k4484 in k4481 in k4478 in k4462 */
static void C_ccall f_4642(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4642,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4613(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4613(t6,((C_word*)t0)[3],t5);}}

/* g1211 in k4487 in k4484 in k4481 in k4478 in k4462 */
static void C_fcall f_4576(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4576,NULL,3,t0,t1,t2);}
if(C_truep(C_i_listp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4590,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
C_trace("exify1197");
f_4466(t3,t4);}
else{
C_trace("exify1197");
f_4466(t1,t2);}}

/* k4588 in g1211 in k4487 in k4484 in k4481 in k4478 in k4462 */
static void C_ccall f_4590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4590,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4594,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
C_trace("exify1197");
f_4466(t2,t3);}

/* k4592 in k4588 in g1211 in k4487 in k4484 in k4481 in k4478 in k4462 */
static void C_ccall f_4594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4594,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[2],t1));}

/* k4490 in k4487 in k4484 in k4481 in k4478 in k4462 */
static void C_ccall f_4492(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4492,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4493,a[2]=((C_word*)t0)[5],a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(t1,lf[87]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4533,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4542,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li62),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_4542(t12,t8,t1);}

/* map-loop1233 in k4490 in k4487 in k4484 in k4481 in k4478 in k4462 */
static void C_fcall f_4542(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4542,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4571,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("g12391248");
t5=((C_word*)t0)[2];
f_4493(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4569 in map-loop1233 in k4490 in k4487 in k4484 in k4481 in k4478 in k4462 */
static void C_ccall f_4571(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4571,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4542(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4542(t6,((C_word*)t0)[3],t5);}}

/* k4531 in k4490 in k4487 in k4484 in k4481 in k4478 in k4462 */
static void C_ccall f_4533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4540,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api#supply-version");
f_4147(t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k4538 in k4531 in k4490 in k4487 in k4484 in k4481 in k4478 in k4462 */
static void C_ccall f_4540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#write-info");
f_3646(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* g1239 in k4490 in k4487 in k4484 in k4481 in k4478 in k4462 */
static void C_fcall f_4493(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4493,NULL,3,t0,t1,t2);}
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_i_car(t2):t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4500,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#make-dest-pathname");
f_3947(t5,((C_word*)t0)[2],t2);}

/* k4498 in g1239 in k4490 in k4487 in k4484 in k4481 in k4478 in k4462 */
static void C_ccall f_4500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4500,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4503,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#copy-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[186]))(4,*((C_word*)lf[186]+1),t2,((C_word*)t0)[2],t1);}

/* k4501 in k4498 in g1239 in k4490 in k4487 in k4484 in k4481 in k4478 in k4462 */
static void C_ccall f_4503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4503,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[10],"setup-api#*windows-shell*"))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4521,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t3,((C_word*)t0)[2]);}}

/* k4519 in k4501 in k4498 in g1239 in k4490 in k4487 in k4484 in k4481 in k4478 in k4462 */
static void C_ccall f_4521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4521,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[34],"setup-api#*chmod-command*"),lf[178],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api#execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[86]))(3,*((C_word*)lf[86]+1),((C_word*)t0)[2],t3);}

/* k4504 in k4501 in k4498 in g1239 in k4490 in k4487 in k4484 in k4481 in k4478 in k4462 */
static void C_ccall f_4506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* exify in k4462 */
static void C_fcall f_4466(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4466,NULL,2,t1,t2);}
t3=(C_truep(C_retrieve2(lf[10],"setup-api#*windows-shell*"))?lf[217]:C_SCHEME_FALSE);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4063,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_4063(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_4063(2,t7,C_i_car(t4));}
else{
C_trace("##sys#error");
t7=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k4061 in exify in k4462 */
static void C_ccall f_4063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4063,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4070,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("pathname-extension");
((C_proc3)C_fast_retrieve_symbol_proc(lf[85]))(3,*((C_word*)lf[85]+1),t2,((C_word*)t0)[2]);}

/* k4068 in k4061 in exify in k4462 */
static void C_ccall f_4070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=t1;
if(C_truep(t2)){
if(C_truep(C_i_equalp(lf[218],t1))){
t3=C_fast_retrieve(lf[82]);
C_trace("pathname-replace-extension");
((C_proc4)C_fast_retrieve_symbol_proc(lf[81]))(4,*((C_word*)lf[81]+1),((C_word*)t0)[4],((C_word*)t0)[3],t3);}
else{
if(C_truep(C_i_equalp(lf[219],t1))){
if(C_truep(C_retrieve2(lf[10],"setup-api#*windows-shell*"))){
C_trace("pathname-replace-extension");
((C_proc4)C_fast_retrieve_symbol_proc(lf[81]))(4,*((C_word*)lf[81]+1),((C_word*)t0)[4],((C_word*)t0)[3],lf[220]);}
else{
C_trace("pathname-replace-extension");
((C_proc4)C_fast_retrieve_symbol_proc(lf[81]))(4,*((C_word*)lf[81]+1),((C_word*)t0)[4],((C_word*)t0)[3],lf[221]);}}
else{
t3=t1;
C_trace("pathname-replace-extension");
((C_proc4)C_fast_retrieve_symbol_proc(lf[81]))(4,*((C_word*)lf[81]+1),((C_word*)t0)[4],((C_word*)t0)[3],t3);}}}
else{
t3=((C_word*)t0)[2];
C_trace("pathname-replace-extension");
((C_proc4)C_fast_retrieve_symbol_proc(lf[81]))(4,*((C_word*)lf[81]+1),((C_word*)t0)[4],((C_word*)t0)[3],t3);}}

/* f_4264 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4264(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_4264r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4264r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4264r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4268,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_4268(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_4268(2,t7,C_i_car(t4));}
else{
C_trace("##sys#error");
t7=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k4266 */
static void C_ccall f_4268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4274,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api#setup-install-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[22]))(2,*((C_word*)lf[22]+1),t2);}

/* k4272 in k4266 */
static void C_ccall f_4274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4274,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4277,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t3=((C_word*)t0)[2];
C_trace("setup-api#check-filelist");
f_3972(t2,t3);}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[2]);
C_trace("setup-api#check-filelist");
f_3972(t2,t3);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4275 in k4272 in k4266 */
static void C_ccall f_4277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4277,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api#repo-path");
f_4836(t2,C_SCHEME_END_OF_LIST);}

/* k4278 in k4275 in k4272 in k4266 */
static void C_ccall f_4280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4280,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4283,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api#repo-path");
f_4836(t2,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_ccall f_4283(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4283,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4284,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[87]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4387,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4396,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li58),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_4396(t12,t8,((C_word*)t0)[4]);}

/* map-loop1134 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_fcall f_4396(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4396,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4425,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("g11401149");
t5=((C_word*)t0)[2];
f_4284(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4423 in map-loop1134 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_ccall f_4425(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4425,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4396(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4396(t6,((C_word*)t0)[3],t5);}}

/* k4385 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_ccall f_4387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4394,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api#supply-version");
f_4147(t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k4392 in k4385 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_ccall f_4394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#write-info");
f_3646(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* g1140 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_fcall f_4284(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4284,NULL,3,t0,t1,t2);}
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_i_car(t2):t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4291,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api#make-dest-pathname");
f_3947(t5,((C_word*)t0)[2],t2);}

/* k4289 in g1140 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_ccall f_4291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4294,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api#copy-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[186]))(4,*((C_word*)lf[186]+1),t2,((C_word*)t0)[2],t1);}

/* k4292 in k4289 in g1140 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_ccall f_4294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4294,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve2(lf[10],"setup-api#*windows-shell*"))){
t3=t2;
f_4297(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4375,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t3,((C_word*)t0)[3]);}}

/* k4373 in k4292 in k4289 in g1140 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_ccall f_4375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4375,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[34],"setup-api#*chmod-command*"),lf[178],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api#execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[86]))(3,*((C_word*)lf[86]+1),((C_word*)t0)[2],t3);}

/* k4295 in k4292 in k4289 in g1140 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_ccall f_4297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4297,2,t0,t1);}
t2=C_i_assq(lf[212],((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4303,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4321,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4360,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("software-version");
((C_proc2)C_fast_retrieve_symbol_proc(lf[215]))(2,*((C_word*)lf[215]+1),t5);}
else{
t4=t3;
f_4303(2,t4,C_SCHEME_FALSE);}}

/* k4358 in k4295 in k4292 in k4289 in g1140 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_ccall f_4360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4360,2,t0,t1);}
t2=C_eqp(t1,lf[213]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[5]);
if(C_truep(C_i_equalp(t3,((C_word*)t0)[4]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4352,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("pathname-extension");
((C_proc3)C_fast_retrieve_symbol_proc(lf[85]))(3,*((C_word*)lf[85]+1),t4,((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[3];
f_4321(t4,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[3];
f_4321(t3,C_SCHEME_FALSE);}}

/* k4350 in k4358 in k4295 in k4292 in k4289 in g1140 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_ccall f_4352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4321(t2,C_i_equalp(t1,lf[214]));}

/* k4319 in k4295 in k4292 in k4289 in g1140 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_fcall f_4321(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4321,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4336,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t2,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_4303(2,t3,t2);}}

/* k4334 in k4319 in k4295 in k4292 in k4289 in g1140 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_ccall f_4336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4336,2,t0,t1);}
t2=C_a_i_list(&a,2,C_retrieve2(lf[35],"setup-api#*ranlib-command*"),t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api#execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[86]))(3,*((C_word*)lf[86]+1),((C_word*)t0)[2],t3);}

/* k4301 in k4295 in k4292 in k4289 in g1140 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_ccall f_4303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api#deployment-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[23]))(2,*((C_word*)lf[23]+1),t2);}

/* k4307 in k4301 in k4295 in k4292 in k4289 in g1140 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_ccall f_4309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4309,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2397,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api#runtime-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[170]))(2,*((C_word*)lf[170]+1),t4);}}

/* k2395 in k4307 in k4301 in k4295 in k4292 in k4289 in g1140 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_ccall f_2397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),((C_word*)t0)[5],t1,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* k4310 in k4307 in k4301 in k4295 in k4292 in k4289 in g1140 in k4281 in k4278 in k4275 in k4272 in k4266 */
static void C_ccall f_4312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[2]));}

/* f_4167 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4167(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_4167r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4167r(t0,t1,t2,t3);}}

static void C_ccall f_4167r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4180,a[2]=t5,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4249,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[210]+1)))(5,*((C_word*)lf[210]+1),t8,lf[211],t7,t9);}

/* a4248 */
static void C_ccall f_4249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4249,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}

/* k4178 */
static void C_ccall f_4180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4180,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4183,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("->string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[77]))(3,*((C_word*)lf[77]+1),t2,((C_word*)t0)[3]);}

/* k4181 in k4178 */
static void C_ccall f_4183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4186,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("make-pathname");
((C_proc5)C_fast_retrieve_symbol_proc(lf[78]))(5,*((C_word*)lf[78]+1),t2,C_SCHEME_FALSE,t1,lf[209]);}

/* k4184 in k4181 in k4178 */
static void C_ccall f_4186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4186,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4189,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("make-pathname");
((C_proc5)C_fast_retrieve_symbol_proc(lf[78]))(5,*((C_word*)lf[78]+1),t2,C_SCHEME_FALSE,((C_word*)t0)[2],lf[208]);}

/* k4187 in k4184 in k4181 in k4178 */
static void C_ccall f_4189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4189,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4192,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("make-pathname");
((C_proc5)C_fast_retrieve_symbol_proc(lf[78]))(5,*((C_word*)lf[78]+1),t2,C_SCHEME_FALSE,((C_word*)t0)[2],lf[207]);}

/* k4190 in k4187 in k4184 in k4181 in k4178 */
static void C_ccall f_4192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[39],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4192,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_list(&a,9,lf[202],lf[203],lf[204],C_fix(3),lf[205],C_fix(1),((C_word*)t0)[2],lf[206],((C_word*)t0)[6]);
t4=C_a_i_list1(&a,1,t3);
C_trace("setup-api#execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[86]))(3,*((C_word*)lf[86]+1),t2,t4);}

/* k4193 in k4190 in k4187 in k4184 in k4181 in k4178 */
static void C_ccall f_4195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[33],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4195,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4198,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_list(&a,7,lf[202],lf[203],lf[204],C_fix(3),lf[205],C_fix(0),((C_word*)t0)[3]);
t4=C_a_i_list1(&a,1,t3);
C_trace("setup-api#execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[86]))(3,*((C_word*)lf[86]+1),t2,t4);}

/* k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 */
static void C_ccall f_4198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4198,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4213,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
C_trace("pathname-replace-extension");
((C_proc4)C_fast_retrieve_symbol_proc(lf[81]))(4,*((C_word*)lf[81]+1),t2,((C_word*)t0)[2],lf[201]);}

/* k4211 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 */
static void C_ccall f_4213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4213,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4217,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4221,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("pathname-replace-extension");
((C_proc4)C_fast_retrieve_symbol_proc(lf[81]))(4,*((C_word*)lf[81]+1),t3,((C_word*)t0)[2],lf[200]);}

/* k4219 in k4211 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 */
static void C_ccall f_4221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4221,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4228,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("file-exists?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[141]))(3,*((C_word*)lf[141]+1),t2,((C_word*)t0)[3]);}

/* k4226 in k4219 in k4211 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 */
static void C_ccall f_4228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4228,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
f_4217(t3,C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}
else{
t2=((C_word*)t0)[3];
f_4217(t2,C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST));}}

/* k4215 in k4211 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 */
static void C_fcall f_4217(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4217,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4209,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api#supply-version");
f_4147(t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4207 in k4215 in k4211 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 */
static void C_ccall f_4209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#install-extension");
((C_proc5)C_fast_retrieve_symbol_proc(lf[199]))(5,*((C_word*)lf[199]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* setup-api#supply-version in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_4147(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4147,NULL,3,t1,t2,t3);}
if(C_truep(C_i_assq(lf[194],t2))){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep(t3)){
t4=C_a_i_list(&a,2,lf[194],t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,t4,t2));}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4119,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#extension-name-and-version");
((C_proc2)C_fast_retrieve_symbol_proc(lf[197]))(2,*((C_word*)lf[197]+1),t4);}}}

/* k4117 in setup-api#supply-version in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4119(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4119,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_pairp(t1))){
t2=C_i_cadr(t1);
if(C_truep(C_i_equalp(lf[195],t2))){
t3=C_a_i_list(&a,2,lf[194],lf[196]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t3,((C_word*)t0)[2]));}
else{
t3=C_i_cadr(t1);
t4=C_a_i_list(&a,2,lf[194],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,t4,((C_word*)t0)[2]));}}
else{
t2=C_a_i_list(&a,2,lf[194],lf[196]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t2,((C_word*)t0)[2]));}}
else{
t2=C_a_i_list(&a,2,lf[194],lf[196]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t2,((C_word*)t0)[2]));}}

/* setup-api#check-filelist in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_3972(C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3972,NULL,2,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(t2,lf[87]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4024,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_4024(t11,t1,t2);}

/* map-loop1001 in setup-api#check-filelist in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_4024(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4024,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4034,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4053,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(0));
if(C_truep(C_i_stringp(t5))){
t6=t3;
f_4034(t6,C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST));}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3987,a[2]=t4,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t5))){
C_trace("every");
((C_proc4)C_fast_retrieve_symbol_proc(lf[157]))(4,*((C_word*)lf[157]+1),t6,*((C_word*)lf[158]+1),t5);}
else{
t7=t6;
f_3987(2,t7,C_SCHEME_FALSE);}}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3985 in map-loop1001 in setup-api#check-filelist in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3987,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_4034(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3990,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=C_i_car(((C_word*)t0)[3]);
t4=C_i_cdr(((C_word*)t0)[3]);
t5=t2;
f_3990(t5,C_a_i_list2(&a,2,t3,t4));}
else{
t3=t2;
f_3990(t3,C_SCHEME_FALSE);}}}

/* k3988 in k3985 in map-loop1001 in setup-api#check-filelist in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_3990(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3990,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[4];
f_4034(t3,C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST));}
else{
C_trace("error");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(4,*((C_word*)lf[118]+1),((C_word*)t0)[3],lf[192],((C_word*)t0)[2]);}}

/* k4051 in map-loop1001 in setup-api#check-filelist in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_4053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4053,2,t0,t1);}
t2=((C_word*)t0)[2];
f_4034(t2,C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}

/* k4032 in map-loop1001 in setup-api#check-filelist in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_4034(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t2=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t1);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_4024(t5,((C_word*)t0)[3],t4);}
else{
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_4024(t5,((C_word*)t0)[3],t4);}}

/* setup-api#make-dest-pathname in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_3947(C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_3947,NULL,3,t1,t2,t3);}
if(C_truep(C_i_listp(t3))){
t4=C_i_cadr(t3);
C_trace("setup-api#make-dest-pathname");
t7=t1;
t8=t2;
t9=t4;
t1=t7;
t2=t8;
t3=t9;
goto loop;}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3967,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("absolute-pathname?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[187]))(3,*((C_word*)lf[187]+1),t4,t3);}}

/* k3965 in setup-api#make-dest-pathname in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* f_3929 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3929(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3929,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3945,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t3,t2);}

/* k3943 */
static void C_ccall f_3945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3945,2,t0,t1);}
t2=C_a_i_list(&a,2,C_retrieve2(lf[32],"setup-api#*remove-command*"),t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api#execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[86]))(3,*((C_word*)lf[86]+1),((C_word*)t0)[2],t3);}

/* f_3882 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_3882,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_car(t2):t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3889,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t2))){
t7=C_i_cadr(t2);
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),t6,t3,t7);}
else{
t7=t6;
f_3889(2,t7,t3);}}

/* k3887 */
static void C_ccall f_3889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3889,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3892,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api#ensure-directory");
f_4908(t2,t1);}

/* k3890 in k3887 */
static void C_ccall f_3892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3892,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3907,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t2,((C_word*)t0)[2]);}

/* k3905 in k3890 in k3887 */
static void C_ccall f_3907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3907,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3911,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t2,((C_word*)t0)[2]);}

/* k3909 in k3905 in k3890 in k3887 */
static void C_ccall f_3911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3911,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[33],"setup-api#*move-command*"),((C_word*)t0)[3],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api#execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[86]))(3,*((C_word*)lf[86]+1),((C_word*)t0)[2],t3);}

/* f_3754 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3754(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3754r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3754r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3754r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_TRUE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3764,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t8))){
C_trace("setup-api#installation-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[171]))(2,*((C_word*)lf[171]+1),t9);}
else{
t10=t9;
f_3764(2,t10,C_i_car(t8));}}

/* k3762 */
static void C_ccall f_3764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3764,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[5]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[5]));
if(C_truep(C_i_nullp(t3))){
t4=C_i_pairp(((C_word*)t0)[4]);
t5=(C_truep(t4)?C_i_car(((C_word*)t0)[4]):((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3779,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t7=C_i_cadr(((C_word*)t0)[4]);
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),t6,((C_word*)t0)[2],t7);}
else{
t7=t6;
f_3779(2,t7,((C_word*)t0)[2]);}}
else{
C_trace("##sys#error");
t4=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],lf[0],t3);}}

/* k3777 in k3762 */
static void C_ccall f_3779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3779,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3782,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3820,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[2];
t5=t1;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3876,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("normalize-pathname");
((C_proc3)C_fast_retrieve_symbol_proc(lf[18]))(3,*((C_word*)lf[18]+1),t6,t4);}

/* k3874 in k3777 in k3762 */
static void C_ccall f_3876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3876,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3880,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("normalize-pathname");
((C_proc3)C_fast_retrieve_symbol_proc(lf[18]))(3,*((C_word*)lf[18]+1),t2,((C_word*)t0)[2]);}

/* k3878 in k3874 in k3777 in k3762 */
static void C_ccall f_3880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("string-prefix?");
((C_proc4)C_fast_retrieve_symbol_proc(lf[115]))(4,*((C_word*)lf[115]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3818 in k3777 in k3762 */
static void C_ccall f_3820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3820,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_3782(2,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3813,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("absolute-pathname?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[187]))(3,*((C_word*)lf[187]+1),t2,((C_word*)t0)[3]);}}

/* k3811 in k3818 in k3777 in k3762 */
static void C_ccall f_3813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
f_3782(2,t3,t2);}
else{
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k3780 in k3777 in k3762 */
static void C_ccall f_3782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api#ensure-directory");
f_4908(t2,t1);}

/* k3783 in k3780 in k3777 in k3762 */
static void C_ccall f_3785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3785,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3788,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3800,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t3,((C_word*)t0)[2]);}

/* k3798 in k3783 in k3780 in k3777 in k3762 */
static void C_ccall f_3800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3804,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t2,((C_word*)t0)[2]);}

/* k3802 in k3798 in k3783 in k3780 in k3777 in k3762 */
static void C_ccall f_3804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3804,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#*copy-command*"),((C_word*)t0)[3],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api#execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[86]))(3,*((C_word*)lf[86]+1),((C_word*)t0)[2],t3);}

/* k3786 in k3783 in k3780 in k3777 in k3762 */
static void C_ccall f_3788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_3646(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3646,NULL,4,t1,t2,t3,t4);}
t5=C_a_i_cons(&a,2,lf[177],t3);
t6=C_a_i_cons(&a,2,t5,t4);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3653,a[2]=t2,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3730,a[2]=t2,a[3]=t6,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api#setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[21]))(2,*((C_word*)lf[21]+1),t8);}

/* k3728 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3730,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[71]+1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t3,lf[185],t2);}
else{
t2=((C_word*)t0)[4];
f_3653(2,t2,C_SCHEME_UNDEFINED);}}

/* k3731 in k3728 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3733,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3736,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k3734 in k3731 in k3728 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3736,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[184],((C_word*)t0)[3]);}

/* k3737 in k3734 in k3731 in k3728 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3739,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3742,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("write");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[119]+1)))(4,*((C_word*)lf[119]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3740 in k3737 in k3734 in k3731 in k3728 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3742,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[183],((C_word*)t0)[2]);}

/* k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* k3651 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3656,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("->string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[77]))(3,*((C_word*)lf[77]+1),t2,((C_word*)t0)[2]);}

/* k3654 in k3651 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3656,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3727,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#repo-path");
f_4836(t3,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k3725 in k3654 in k3651 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3727(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3727,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_a_i_list(&a,1,t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3571,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
C_trace("repository-path");
((C_proc2)C_fast_retrieve_symbol_proc(lf[181]))(2,*((C_word*)lf[181]+1),t4);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=C_i_car(t3);
C_trace("make-pathname");
((C_proc5)C_fast_retrieve_symbol_proc(lf[78]))(5,*((C_word*)lf[78]+1),((C_word*)t0)[2],t6,t2,C_retrieve2(lf[2],"setup-api#constant25"));}
else{
C_trace("##sys#error");
t6=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k3569 in k3725 in k3654 in k3651 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("make-pathname");
((C_proc5)C_fast_retrieve_symbol_proc(lf[78]))(5,*((C_word*)lf[78]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2],C_retrieve2(lf[2],"setup-api#constant25"));}

/* k3657 in k3654 in k3651 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3662,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api#ensure-directory");
f_4908(t2,t1);}

/* k3660 in k3657 in k3654 in k3651 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3662,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3665,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[9],"setup-api#*sudo*"))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3686,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("create-temporary-file");
((C_proc2)C_fast_retrieve_symbol_proc(lf[70]))(2,*((C_word*)lf[70]+1),t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3719,a[2]=((C_word*)t0)[2],a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp);
C_trace("with-output-to-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[64]))(4,*((C_word*)lf[64]+1),t2,((C_word*)t0)[3],t3);}}

/* a3718 in k3660 in k3657 in k3654 in k3651 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3719,2,t0,t1);}
t2=C_fast_retrieve(lf[179]);
C_trace("g930931");
t3=t2;
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t1,((C_word*)t0)[2]);}

/* k3684 in k3660 in k3657 in k3654 in k3651 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3686,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3689,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3710,a[2]=((C_word*)t0)[2],a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp);
C_trace("with-output-to-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[64]))(4,*((C_word*)lf[64]+1),t2,t1,t3);}

/* a3709 in k3684 in k3660 in k3657 in k3654 in k3651 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3710,2,t0,t1);}
t2=C_fast_retrieve(lf[179]);
C_trace("g918919");
t3=t2;
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t1,((C_word*)t0)[2]);}

/* k3687 in k3684 in k3660 in k3657 in k3654 in k3651 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3689,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3704,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t2,((C_word*)t0)[2]);}

/* k3702 in k3687 in k3684 in k3660 in k3657 in k3654 in k3651 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3704,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3708,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t2,((C_word*)t0)[2]);}

/* k3706 in k3702 in k3687 in k3684 in k3660 in k3657 in k3654 in k3651 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3708,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[33],"setup-api#*move-command*"),((C_word*)t0)[3],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api#execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[86]))(3,*((C_word*)lf[86]+1),((C_word*)t0)[2],t3);}

/* k3663 in k3660 in k3657 in k3654 in k3651 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3665,2,t0,t1);}
if(C_truep(C_retrieve2(lf[10],"setup-api#*windows-shell*"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3683,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t2,((C_word*)t0)[2]);}}

/* k3681 in k3663 in k3660 in k3657 in k3654 in k3651 in setup-api#write-info in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3683,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[34],"setup-api#*chmod-command*"),lf[178],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api#execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[86]))(3,*((C_word*)lf[86]+1),((C_word*)t0)[2],t3);}

/* f_6133 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6133(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6133,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6137,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("verb864");
f_3622(t3,t2);}

/* k6135 */
static void C_ccall f_6137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6137,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6152,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t2,((C_word*)t0)[2]);}

/* k6150 in k6135 */
static void C_ccall f_6152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6152,2,t0,t1);}
t2=C_a_i_list(&a,3,C_retrieve2(lf[36],"setup-api#*mkdir-command*"),lf[174],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api#execute");
((C_proc3)C_fast_retrieve_symbol_proc(lf[86]))(3,*((C_word*)lf[86]+1),((C_word*)t0)[2],t3);}

/* f_6125 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_6125(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6125,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6129,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("verb864");
f_3622(t3,t2);}

/* k6127 */
static void C_ccall f_6129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("create-directory");
((C_proc4)C_fast_retrieve_symbol_proc(lf[173]))(4,*((C_word*)lf[173]+1),((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE);}

/* verb in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_3622(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3622,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3629,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[21]))(2,*((C_word*)lf[21]+1),t3);}

/* k3627 in verb in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3629,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[71]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3632,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t3,lf[172],t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3630 in k3627 in verb in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3632,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3635,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3633 in k3630 in k3627 in verb in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3635,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k3636 in k3633 in k3630 in k3627 in verb in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#flush-output");
((C_proc3)C_fast_retrieve_symbol_proc(lf[89]))(3,*((C_word*)lf[89]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_3609 in k3606 in k3602 in k3598 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3609,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3613,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#destination-prefix");
((C_proc2)C_fast_retrieve_symbol_proc(lf[169]))(2,*((C_word*)lf[169]+1),t2);}

/* k3611 */
static void C_ccall f_3613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:C_fast_retrieve(lf[15])));}}

/* f_3524 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3524(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3524r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3524r(t0,t1,t2,t3);}}

static void C_ccall f_3524r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(4);
t4=C_i_length(t3);
switch(t4){
case C_fix(0):
t5=t2;
C_trace("setup-api#make:make/proc/helper");
f_3073(t1,t5,C_SCHEME_END_OF_LIST);
case C_fix(1):
t5=t2;
t6=C_i_car(t3);
t7=C_i_cdr(t3);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3556,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_vectorp(t6))){
C_trace("vector->list");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[166]+1)))(3,*((C_word*)lf[166]+1),t8,t6);}
else{
C_trace("setup-api#make:make/proc/helper");
f_3073(t1,t5,t6);}
default:
C_trace("##sys#error");
t5=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,lf[168]);}}

/* k3554 */
static void C_ccall f_3556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#make:make/proc/helper");
f_3073(((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_3073(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3073,NULL,3,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3077,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_vectorp(((C_word*)t4)[1]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3522,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace("vector->list");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[166]+1)))(3,*((C_word*)lf[166]+1),t6,((C_word*)t4)[1]);}
else{
t6=t5;
f_3077(t6,C_SCHEME_UNDEFINED);}}

/* k3520 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_3077(t3,t2);}

/* k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_3077(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3077,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=C_i_listp(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2905,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_2905(2,t6,t4);}
else{
C_trace("setup-api#make:form-error");
f_2845(t5,lf[165],t3);}}

/* k2903 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2905,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_pairp(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2914,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_2914(2,t4,t2);}
else{
C_trace("setup-api#make:form-error");
f_2845(t3,lf[164],((C_word*)t0)[3]);}}
else{
t2=((C_word*)t0)[2];
f_3080(2,t2,C_SCHEME_FALSE);}}

/* k2912 in k2903 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2914,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2919,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp);
C_trace("every");
((C_proc4)C_fast_retrieve_symbol_proc(lf[157]))(4,*((C_word*)lf[157]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_3080(2,t2,C_SCHEME_FALSE);}}

/* a2918 in k2912 in k2903 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2919,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2926,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_listp(t2))){
t4=C_i_length(t2);
C_trace("<=");
C_less_or_equal_p(5,0,t3,C_fix(2),t4,C_fix(3));}
else{
t4=t3;
f_2926(2,t4,C_SCHEME_FALSE);}}

/* k2924 in a2918 in k2912 in k2903 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2926,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_2929(2,t3,t1);}
else{
C_trace("setup-api#make:form-error");
f_2845(t2,lf[163],((C_word*)t0)[3]);}}

/* k2927 in k2924 in a2918 in k2912 in k2903 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2929,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[3]);
t3=C_i_stringp(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_2938(2,t5,t3);}
else{
t5=C_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_listp(t5))){
t6=C_i_car(((C_word*)t0)[3]);
C_trace("every");
((C_proc4)C_fast_retrieve_symbol_proc(lf[157]))(4,*((C_word*)lf[157]+1),t4,*((C_word*)lf[158]+1),t6);}
else{
t6=t4;
f_2938(2,t6,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2936 in k2927 in k2924 in a2918 in k2912 in k2903 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2938,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_2941(2,t3,t1);}
else{
C_trace("setup-api#make:form-error");
f_2845(t2,lf[162],((C_word*)t0)[3]);}}

/* k2939 in k2936 in k2927 in k2924 in a2918 in k2912 in k2903 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2941(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2941,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[3]);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=C_i_listp(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2950,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_2950(2,t6,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2980,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(((C_word*)t0)[3]);
C_trace("setup-api#make:line-error");
f_2867(t6,lf[161],t7,t2);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2978 in k2939 in k2936 in k2927 in k2924 in a2918 in k2912 in k2903 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2980,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
f_2950(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2988,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
C_trace("every");
((C_proc4)C_fast_retrieve_symbol_proc(lf[157]))(4,*((C_word*)lf[157]+1),((C_word*)t0)[3],t2,t3);}}

/* a2987 in k2978 in k2939 in k2936 in k2927 in k2924 in a2918 in k2912 in k2903 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2988(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2988,3,t0,t1,t2);}
t3=C_i_stringp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
C_trace("setup-api#make:form-error");
f_2845(t1,lf[160],t2);}}

/* k2948 in k2939 in k2936 in k2927 in k2924 in a2918 in k2912 in k2903 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_cddr(((C_word*)t0)[4]);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_caddr(((C_word*)t0)[4]);
t5=C_i_closurep(t4);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_i_caddr(((C_word*)t0)[4]);
C_trace("setup-api#make:line-error");
f_2867(((C_word*)t0)[3],lf[159],t6,((C_word*)t0)[2]);}}}

/* k3078 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3080,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3083,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_i_stringp(t3);
if(C_truep(t4)){
t5=t2;
f_3083(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3065,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("every");
((C_proc4)C_fast_retrieve_symbol_proc(lf[157]))(4,*((C_word*)lf[157]+1),t5,*((C_word*)lf[158]+1),t3);}}

/* k3063 in k3078 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_3083(2,t2,t1);}
else{
C_trace("error");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(4,*((C_word*)lf[118]+1),((C_word*)t0)[3],lf[156],((C_word*)t0)[2]);}}

/* k3081 in k3078 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3083(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3083,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,C_SCHEME_END_OF_LIST);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t9,a[7]=t7,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
C_trace("condition-predicate");
((C_proc3)C_fast_retrieve_symbol_proc(lf[155]))(3,*((C_word*)lf[155]+1),t11,lf[153]);}

/* k3086 in k3081 in k3078 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3088,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[8])+1,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3092,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("condition-property-accessor");
((C_proc4)C_fast_retrieve_symbol_proc(lf[152]))(4,*((C_word*)lf[152]+1),t3,lf[153],lf[154]);}

/* k3090 in k3086 in k3081 in k3078 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3092(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3092,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[8])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[7])+1,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3094,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li33),tmp=(C_word)a,a+=8,tmp));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3413,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(((C_word*)((C_word*)t0)[2])[1]))){
C_trace("make-file588");
t5=((C_word*)((C_word*)t0)[7])[1];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t4,((C_word*)((C_word*)t0)[2])[1],lf[149]);}
else{
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t5=C_i_caar(((C_word*)t0)[4]);
C_trace("make-file588");
t6=((C_word*)((C_word*)t0)[7])[1];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,t5,lf[150]);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3482,a[2]=((C_word*)t0)[7],a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(t6,lf[88]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3494,a[2]=t5,a[3]=t9,a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3494(t11,t4,t6);}}}

/* for-each-loop731 in k3090 in k3086 in k3081 in k3078 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_3494(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3494,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3504,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("g732738");
t5=((C_word*)t0)[2];
f_3482(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3502 in for-each-loop731 in k3090 in k3086 in k3081 in k3078 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3494(t3,((C_word*)t0)[2],t2);}

/* g732 in k3090 in k3086 in k3081 in k3078 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_3482(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3482,NULL,3,t0,t1,t2);}
C_trace("make-file588");
t3=((C_word*)((C_word*)t0)[2])[1];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,t2,lf[151]);}

/* k3411 in k3090 in k3086 in k3081 in k3078 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3419,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[21]))(2,*((C_word*)lf[21]+1),t2);}

/* k3417 in k3411 in k3090 in k3086 in k3081 in k3078 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3419,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3433,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("reverse");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[148]+1)))(3,*((C_word*)lf[148]+1),t2,((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3431 in k3417 in k3411 in k3090 in k3086 in k3081 in k3078 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3433,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[88]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3441,a[2]=t4,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3441(t6,((C_word*)t0)[2],t1);}

/* for-each-loop748 in k3431 in k3417 in k3411 in k3090 in k3086 in k3081 in k3078 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_3441(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3441,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3451,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[71]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3424,a[2]=t4,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t6,lf[147],t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3422 in for-each-loop748 in k3431 in k3417 in k3411 in k3090 in k3086 in k3081 in k3078 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3424,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3427,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3425 in k3422 in for-each-loop748 in k3431 in k3417 in k3411 in k3090 in k3086 in k3081 in k3078 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* k3449 in for-each-loop748 in k3431 in k3417 in k3411 in k3090 in k3086 in k3081 in k3078 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3441(t3,((C_word*)t0)[2],t2);}

/* f_3094 in k3090 in k3086 in k3081 in k3078 in k3075 in setup-api#make:make/proc/helper in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_3094(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[20],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3094,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3098,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t5=t2;
t6=((C_word*)t0)[2];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2791,a[2]=t5,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2800,a[2]=t7,a[3]=t9,a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_2800(t11,t4,t6);}

/* loop */
static void C_fcall f_2800(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2800,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2813,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=C_i_car(t3);
if(C_truep(C_i_stringp(t5))){
t6=C_i_car(t3);
t7=t4;
f_2813(t7,C_a_i_list1(&a,1,t6));}
else{
t6=t4;
f_2813(t6,C_i_car(t3));}}}

/* k2811 in loop */
static void C_fcall f_2813(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2813,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2819,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("any");
((C_proc4)C_fast_retrieve_symbol_proc(lf[142]))(4,*((C_word*)lf[142]+1),t2,((C_word*)t0)[2],t1);}

/* k2817 in k2811 in loop */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
C_trace("loop485");
t3=((C_word*)((C_word*)t0)[2])[1];
f_2800(t3,((C_word*)t0)[5],t2);}}

/* match? */
static void C_ccall f_2791(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2791,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_string_equal_p(t2,((C_word*)t0)[2]));}

/* k3096 */
static void C_ccall f_3098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
C_trace("setup-api#fixmaketarget");
f_2604(t2,((C_word*)t0)[6]);}

/* k3099 in k3096 */
static void C_ccall f_3101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3104,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3407,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("file-exists?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[141]))(3,*((C_word*)lf[141]+1),t3,t1);}

/* k3405 in k3099 in k3096 */
static void C_ccall f_3407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("file-modification-time");
((C_proc3)C_fast_retrieve_symbol_proc(lf[138]))(3,*((C_word*)lf[138]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_3104(2,t2,C_SCHEME_FALSE);}}

/* k3102 in k3099 in k3096 */
static void C_ccall f_3104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3104,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3389,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api#setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[21]))(2,*((C_word*)lf[21]+1),t3);}

/* k3387 in k3102 in k3099 in k3096 */
static void C_ccall f_3389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3389,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[71]+1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3392,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t3,lf[146],t2);}
else{
t2=((C_word*)t0)[4];
f_3107(2,t2,C_SCHEME_UNDEFINED);}}

/* k3390 in k3387 in k3102 in k3099 in k3096 */
static void C_ccall f_3392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3392,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3395,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k3393 in k3390 in k3387 in k3102 in k3099 in k3096 */
static void C_ccall f_3395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3395,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[145],((C_word*)t0)[3]);}

/* k3396 in k3393 in k3390 in k3387 in k3102 in k3099 in k3096 */
static void C_ccall f_3398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3398,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3401,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3399 in k3396 in k3393 in k3390 in k3387 in k3102 in k3099 in k3096 */
static void C_ccall f_3401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3107,2,t0,t1);}
if(C_truep(((C_word*)t0)[11])){
t2=C_i_cadr(((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[9],a[11]=t2,a[12]=((C_word*)t0)[10],tmp=(C_word)a,a+=13,tmp);
C_trace("string-append");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t3,lf[143],((C_word*)t0)[2]);}
else{
if(C_truep(((C_word*)t0)[9])){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3377,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[69]))(2,*((C_word*)lf[69]+1),t2);}}}

/* k3375 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3380,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[144],t1);}

/* k3378 in k3375 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3380,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3383,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3381 in k3378 in k3375 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3383,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3386,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[66]))(3,*((C_word*)lf[66]+1),t2,((C_word*)t0)[2]);}

/* k3384 in k3381 in k3378 in k3375 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("error");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(3,*((C_word*)lf[118]+1),((C_word*)t0)[2],t1);}

/* k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3116,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3117,a[2]=t1,a[3]=((C_word*)t0)[12],a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp);
t3=C_i_check_list_2(((C_word*)t0)[11],lf[88]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3127,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3346,a[2]=t2,a[3]=t6,a[4]=((C_word)li30),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3346(t8,t4,((C_word*)t0)[11]);}

/* for-each-loop610 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_fcall f_3346(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3346,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3356,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("g611617");
t5=((C_word*)t0)[2];
f_3117(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3354 in for-each-loop610 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3346(t3,((C_word*)t0)[2],t2);}

/* k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3127,2,t0,t1);}
t2=C_i_not(((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3133,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t2)){
t4=t3;
f_3133(2,t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3302,a[2]=((C_word*)t0)[11],a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
C_trace("any");
((C_proc4)C_fast_retrieve_symbol_proc(lf[142]))(4,*((C_word*)lf[142]+1),t3,t4,((C_word*)t0)[2]);}}

/* a3301 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3302(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3302,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3306,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#fixmaketarget");
f_2604(t3,t2);}

/* k3304 in a3301 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3306,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3309,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3322,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("file-exists?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[141]))(3,*((C_word*)lf[141]+1),t3,t1);}

/* k3320 in k3304 in a3301 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3322,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_3309(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[69]))(2,*((C_word*)lf[69]+1),t2);}}

/* k3327 in k3320 in k3304 in a3301 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3332,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[140],t1);}

/* k3330 in k3327 in k3320 in k3304 in a3301 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3332,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3335,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3333 in k3330 in k3327 in k3320 in k3304 in a3301 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3338,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[139],((C_word*)t0)[2]);}

/* k3336 in k3333 in k3330 in k3327 in k3320 in k3304 in a3301 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k3339 in k3336 in k3333 in k3330 in k3327 in k3320 in k3304 in a3301 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3341,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3344,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[66]))(3,*((C_word*)lf[66]+1),t2,((C_word*)t0)[2]);}

/* k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3320 in k3304 in a3301 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("error");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(3,*((C_word*)lf[118]+1),((C_word*)t0)[2],t1);}

/* k3307 in k3304 in a3301 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("file-modification-time");
((C_proc3)C_fast_retrieve_symbol_proc(lf[138]))(3,*((C_word*)lf[138]+1),t2,((C_word*)t0)[3]);}

/* k3317 in k3307 in k3304 in a3301 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_greaterp(t1,((C_word*)t0)[4]))){
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3133(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3133,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cddr(((C_word*)t0)[10]);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3152,a[2]=t2,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3235,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api#setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[21]))(2,*((C_word*)lf[21]+1),t6);}}
else{
t2=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k3233 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3235,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[71]+1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3238,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t3,lf[137],t2);}
else{
t2=((C_word*)t0)[6];
f_3152(2,t2,C_SCHEME_UNDEFINED);}}

/* k3236 in k3233 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3238,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3241,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[6]);}

/* k3239 in k3236 in k3233 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3241,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3244,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[136],((C_word*)t0)[5]);}

/* k3242 in k3239 in k3236 in k3233 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3244,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k3245 in k3242 in k3239 in k3236 in k3233 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3247,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3250,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3257,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[4];
if(C_truep(t4)){
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
C_trace("string-append");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(5,*((C_word*)lf[105]+1),t3,lf[130],((C_word*)t0)[3],lf[131]);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3279,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[69]))(2,*((C_word*)lf[69]+1),t5);}}
else{
C_trace("string-append");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(5,*((C_word*)lf[105]+1),t3,lf[134],((C_word*)t0)[2],lf[135]);}}

/* k3277 in k3245 in k3242 in k3239 in k3236 in k3233 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3279,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3282,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[133],t1);}

/* k3280 in k3277 in k3245 in k3242 in k3239 in k3236 in k3233 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3282,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3285,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k3283 in k3280 in k3277 in k3245 in k3242 in k3239 in k3236 in k3233 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3285,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[132],((C_word*)t0)[3]);}

/* k3286 in k3283 in k3280 in k3277 in k3245 in k3242 in k3239 in k3236 in k3233 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3288,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3291,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3289 in k3286 in k3283 in k3280 in k3277 in k3245 in k3242 in k3239 in k3236 in k3233 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(41),((C_word*)t0)[2]);}

/* k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3245 in k3242 in k3239 in k3236 in k3233 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3294,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3297,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[66]))(3,*((C_word*)lf[66]+1),t2,((C_word*)t0)[2]);}

/* k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3245 in k3242 in k3239 in k3236 in k3233 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("string-append");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(3,*((C_word*)lf[105]+1),((C_word*)t0)[2],t1);}

/* k3255 in k3245 in k3242 in k3239 in k3236 in k3233 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3248 in k3245 in k3242 in k3239 in k3236 in k3233 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* k3150 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3152,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3155,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li28),tmp=(C_word)a,a+=7,tmp);
C_trace("call-with-current-continuation");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[129]+1)))(3,*((C_word*)lf[129]+1),t2,t3);}

/* a3159 in k3150 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3160(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3160,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3166,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li23),tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3207,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp);
C_trace("with-exception-handler");
((C_proc4)C_fast_retrieve_symbol_proc(lf[128]))(4,*((C_word*)lf[128]+1),t1,t3,t4);}

/* a3206 in a3159 in k3150 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3207,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3213,a[2]=((C_word*)t0)[3],a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3222,a[2]=((C_word*)t0)[2],a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,t1,t2,t3);}

/* a3221 in a3206 in a3159 in k3150 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3222(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3222r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3222r(t0,t1,t2);}}

static void C_ccall f_3222r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3228,a[2]=t2,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
C_trace("k684690");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a3227 in a3221 in a3206 in a3159 in k3150 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3228,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a3212 in a3206 in a3159 in k3150 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3213,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
C_trace("g705706");
t3=t2;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}

/* a3165 in a3159 in k3150 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3166(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3166,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3172,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word)li22),tmp=(C_word)a,a+=7,tmp);
C_trace("k684690");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a3171 in a3165 in a3159 in k3150 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3172,2,t0,t1);}
t2=*((C_word*)lf[71]+1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t3,lf[127],t2);}

/* k3174 in a3171 in a3165 in a3159 in k3150 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3176,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3179,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[2]);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,t3,((C_word*)t0)[5]);}

/* k3177 in k3174 in a3171 in a3165 in a3159 in k3150 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3179,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3182,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[126],((C_word*)t0)[4]);}

/* k3180 in k3177 in k3174 in a3171 in a3165 in a3159 in k3150 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3182,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3185,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3195,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3198,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
C_trace("exn?586");
t5=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[5]);}

/* k3196 in k3180 in k3177 in k3174 in a3171 in a3165 in a3159 in k3150 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
C_trace("exn-message587");
t2=((C_word*)((C_word*)t0)[6])[1];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}}

/* k3193 in k3180 in k3177 in k3174 in a3171 in a3165 in a3159 in k3150 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3183 in k3180 in k3177 in k3174 in a3171 in a3165 in a3159 in k3150 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3188,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k3186 in k3183 in k3180 in k3177 in k3174 in a3171 in a3165 in a3159 in k3150 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("signal");
((C_proc3)C_fast_retrieve_symbol_proc(lf[125]))(3,*((C_word*)lf[125]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3153 in k3150 in k3131 in k3125 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_ccall f_3155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("g688689");
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* g611 in k3114 in k3105 in k3102 in k3099 in k3096 */
static void C_fcall f_3117(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3117,NULL,3,t0,t1,t2);}
C_trace("make-file588");
t3=((C_word*)((C_word*)t0)[3])[1];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* setup-api#make:line-error in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_2867(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2867,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2875,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[69]))(2,*((C_word*)lf[69]+1),t5);}

/* k2873 in setup-api#make:line-error in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2875,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2878,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],t1);}

/* k2876 in k2873 in setup-api#make:line-error in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2878,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[123],((C_word*)t0)[4]);}

/* k2879 in k2876 in k2873 in setup-api#make:line-error in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2884,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("write");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[119]+1)))(4,*((C_word*)lf[119]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k2882 in k2879 in k2876 in k2873 in setup-api#make:line-error in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2884,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[122],((C_word*)t0)[3]);}

/* k2885 in k2882 in k2879 in k2876 in k2873 in setup-api#make:line-error in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2887,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2890,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2888 in k2885 in k2882 in k2879 in k2876 in k2873 in setup-api#make:line-error in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2890,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2893,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[66]))(3,*((C_word*)lf[66]+1),t2,((C_word*)t0)[2]);}

/* k2891 in k2888 in k2885 in k2882 in k2879 in k2876 in k2873 in setup-api#make:line-error in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("error");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(3,*((C_word*)lf[118]+1),((C_word*)t0)[2],t1);}

/* setup-api#make:form-error in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_2845(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2845,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2853,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[69]))(2,*((C_word*)lf[69]+1),t4);}

/* k2851 in setup-api#make:form-error in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2853,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2856,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],t1);}

/* k2854 in k2851 in setup-api#make:form-error in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2856,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[120],((C_word*)t0)[3]);}

/* k2857 in k2854 in k2851 in setup-api#make:form-error in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2862,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("write");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[119]+1)))(4,*((C_word*)lf[119]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2860 in k2857 in k2854 in k2851 in setup-api#make:form-error in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2865,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[66]))(3,*((C_word*)lf[66]+1),t2,((C_word*)t0)[2]);}

/* k2863 in k2860 in k2857 in k2854 in k2851 in setup-api#make:form-error in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("error");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[118]+1)))(3,*((C_word*)lf[118]+1),((C_word*)t0)[2],t1);}

/* f_2630 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2630(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2630,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(t2,lf[87]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2723,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2754,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2754(t12,t8,t2);}

/* map-loop379 */
static void C_fcall f_2754(C_word t0,C_word t1,C_word t2){
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
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2754,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2783,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fast_retrieve(lf[77]);
t10=C_i_check_list_2(t4,lf[87]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2640,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2661,a[2]=t9,a[3]=t6,a[4]=t13,a[5]=t8,a[6]=((C_word)li16),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_2661(t15,t11,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop338 in map-loop379 */
static void C_fcall f_2661(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2661,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2690,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("g344353");
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2688 in map-loop338 in map-loop379 */
static void C_ccall f_2690(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2690,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2661(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2661(t6,((C_word*)t0)[3],t5);}}

/* k2638 in map-loop379 */
static void C_ccall f_2640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2640,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2651,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(t1);
if(C_truep(C_i_string_equal_p(t3,lf[93]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2419,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2423,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2583,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api#find-program");
((C_proc3)C_fast_retrieve_symbol_proc(lf[79]))(3,*((C_word*)lf[79]+1),t6,lf[113]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2602,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("string-prefix?");
((C_proc4)C_fast_retrieve_symbol_proc(lf[115]))(4,*((C_word*)lf[115]+1),t4,lf[116],t3);}}

/* k2600 in k2638 in map-loop379 */
static void C_ccall f_2602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2602,2,t0,t1);}
t2=(C_truep(t1)?C_retrieve2(lf[10],"setup-api#*windows-shell*"):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2596,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("substring");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[114]+1)))(4,*((C_word*)lf[114]+1),t3,((C_word*)t0)[2],C_fix(2));}
else{
C_trace("setup-api#find-program");
((C_proc3)C_fast_retrieve_symbol_proc(lf[79]))(3,*((C_word*)lf[79]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k2594 in k2600 in k2638 in map-loop379 */
static void C_ccall f_2596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),((C_word*)t0)[2],t1);}

/* k2581 in k2638 in map-loop379 */
static void C_ccall f_2583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),((C_word*)t0)[2],t1);}

/* k2421 in k2638 in map-loop379 */
static void C_ccall f_2423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2423,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2427,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2563,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api#deployment-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[23]))(2,*((C_word*)lf[23]+1),t3);}

/* k2561 in k2421 in k2638 in map-loop379 */
static void C_ccall f_2563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2563,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2566,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t1;
t4=((C_word*)t0)[2];
f_2427(t4,(C_truep(t3)?lf[110]:lf[109]));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2572,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("feature?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[111]))(3,*((C_word*)lf[111]+1),t3,lf[112]);}}

/* k2570 in k2561 in k2421 in k2638 in map-loop379 */
static void C_ccall f_2572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("setup-api#host-extension");
((C_proc2)C_fast_retrieve_symbol_proc(lf[13]))(2,*((C_word*)lf[13]+1),((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_2427(t2,lf[109]);}}

/* k2564 in k2561 in k2421 in k2638 in map-loop379 */
static void C_ccall f_2566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2427(t2,(C_truep(t1)?lf[109]:lf[110]));}

/* k2425 in k2421 in k2638 in map-loop379 */
static void C_fcall f_2427(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2427,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2560,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api#keep-intermediates");
((C_proc2)C_fast_retrieve_symbol_proc(lf[25]))(2,*((C_word*)lf[25]+1),t2);}

/* k2558 in k2425 in k2421 in k2638 in map-loop379 */
static void C_ccall f_2560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2560,2,t0,t1);}
t2=(C_truep(t1)?lf[95]:lf[96]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2557,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api#host-extension");
((C_proc2)C_fast_retrieve_symbol_proc(lf[13]))(2,*((C_word*)lf[13]+1),t3);}

/* k2555 in k2558 in k2425 in k2421 in k2638 in map-loop379 */
static void C_ccall f_2557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2557,2,t0,t1);}
t2=(C_truep(t1)?lf[97]:lf[98]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2554,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api#deployment-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[23]))(2,*((C_word*)lf[23]+1),t3);}

/* k2552 in k2555 in k2558 in k2425 in k2421 in k2638 in map-loop379 */
static void C_ccall f_2554(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2554,2,t0,t1);}
t2=(C_truep(t1)?lf[99]:lf[100]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2443,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2456,a[2]=t5,a[3]=t7,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api#extra-features");
((C_proc2)C_fast_retrieve_symbol_proc(lf[26]))(2,*((C_word*)lf[26]+1),t8);}

/* k2454 in k2552 in k2555 in k2558 in k2425 in k2421 in k2638 in map-loop379 */
static void C_ccall f_2456(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2456,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[87]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2462,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2518,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2518(t7,t3,t1);}

/* map-loop266 in k2454 in k2552 in k2555 in k2558 in k2425 in k2421 in k2638 in map-loop379 */
static void C_fcall f_2518(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2518,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2547,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2453,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("symbol->string");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[107]+1)))(3,*((C_word*)lf[107]+1),t5,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2451 in map-loop266 in k2454 in k2552 in k2555 in k2558 in k2425 in k2421 in k2638 in map-loop379 */
static void C_ccall f_2453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("string-append");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),((C_word*)t0)[2],lf[108],t1);}

/* k2545 in map-loop266 in k2454 in k2552 in k2555 in k2558 in k2425 in k2421 in k2638 in map-loop379 */
static void C_ccall f_2547(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2547,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2518(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2518(t6,((C_word*)t0)[3],t5);}}

/* k2460 in k2454 in k2552 in k2555 in k2558 in k2425 in k2421 in k2638 in map-loop379 */
static void C_ccall f_2462(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2462,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2475,a[2]=t3,a[3]=t5,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api#extra-nonfeatures");
((C_proc2)C_fast_retrieve_symbol_proc(lf[29]))(2,*((C_word*)lf[29]+1),t6);}

/* k2473 in k2460 in k2454 in k2552 in k2555 in k2558 in k2425 in k2421 in k2638 in map-loop379 */
static void C_ccall f_2475(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2475,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[87]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2481,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2483,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2483(t7,t3,t1);}

/* map-loop293 in k2473 in k2460 in k2454 in k2552 in k2555 in k2558 in k2425 in k2421 in k2638 in map-loop379 */
static void C_fcall f_2483(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2483,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2512,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2472,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("symbol->string");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[107]+1)))(3,*((C_word*)lf[107]+1),t5,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2470 in map-loop293 in k2473 in k2460 in k2454 in k2552 in k2555 in k2558 in k2425 in k2421 in k2638 in map-loop379 */
static void C_ccall f_2472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("string-append");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),((C_word*)t0)[2],lf[106],t1);}

/* k2510 in map-loop293 in k2473 in k2460 in k2454 in k2552 in k2555 in k2558 in k2425 in k2421 in k2638 in map-loop379 */
static void C_ccall f_2512(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2512,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2483(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2483(t6,((C_word*)t0)[3],t5);}}

/* k2479 in k2473 in k2460 in k2454 in k2552 in k2555 in k2558 in k2425 in k2421 in k2638 in map-loop379 */
static void C_ccall f_2481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("append");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[104]+1)))(5,*((C_word*)lf[104]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k2441 in k2552 in k2555 in k2558 in k2425 in k2421 in k2638 in map-loop379 */
static void C_ccall f_2443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("cons*");
((C_proc10)C_fast_retrieve_symbol_proc(lf[101]))(10,*((C_word*)lf[101]+1),((C_word*)t0)[7],((C_word*)t0)[6],lf[102],lf[103],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2417 in k2638 in map-loop379 */
static void C_ccall f_2419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("string-intersperse");
((C_proc4)C_fast_retrieve_symbol_proc(lf[91]))(4,*((C_word*)lf[91]+1),((C_word*)t0)[2],t1,lf[94]);}

/* k2649 in k2638 in map-loop379 */
static void C_ccall f_2651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2651,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t1,t2);
C_trace("string-intersperse");
((C_proc4)C_fast_retrieve_symbol_proc(lf[91]))(4,*((C_word*)lf[91]+1),((C_word*)t0)[2],t3,lf[92]);}

/* k2781 in map-loop379 */
static void C_ccall f_2783(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2783,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2754(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2754(t6,((C_word*)t0)[3],t5);}}

/* k2721 */
static void C_ccall f_2723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2723,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[88]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2731,a[2]=t4,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2731(t6,((C_word*)t0)[2],t1);}

/* for-each-loop326 in k2721 */
static void C_fcall f_2731(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2731,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2741,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2699,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2705,a[2]=t3,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api#run-verbose");
((C_proc2)C_fast_retrieve_symbol_proc(lf[74]))(2,*((C_word*)lf[74]+1),t6);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2703 in for-each-loop326 in k2721 */
static void C_ccall f_2705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2705,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[71]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2708,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t3,lf[90],t2);}
else{
C_trace("setup-api#$system");
f_5983(((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k2706 in k2703 in for-each-loop326 in k2721 */
static void C_ccall f_2708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2711,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2709 in k2706 in k2703 in for-each-loop326 in k2721 */
static void C_ccall f_2711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k2712 in k2709 in k2706 in k2703 in for-each-loop326 in k2721 */
static void C_ccall f_2714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#flush-output");
((C_proc3)C_fast_retrieve_symbol_proc(lf[89]))(3,*((C_word*)lf[89]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2697 in for-each-loop326 in k2721 */
static void C_ccall f_2699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#$system");
f_5983(((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2739 in for-each-loop326 in k2721 */
static void C_ccall f_2741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2731(t3,((C_word*)t0)[2],t2);}

/* setup-api#fixmaketarget in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_2604(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2604,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2611,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2628,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("pathname-extension");
((C_proc3)C_fast_retrieve_symbol_proc(lf[85]))(3,*((C_word*)lf[85]+1),t4,t2);}

/* k2626 in setup-api#fixmaketarget in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_equalp(lf[83],t1))){
t2=C_i_string_equal_p(lf[84],C_fast_retrieve(lf[82]));
t3=((C_word*)t0)[2];
f_2611(t3,C_i_not(t2));}
else{
t2=((C_word*)t0)[2];
f_2611(t2,C_SCHEME_FALSE);}}

/* k2609 in setup-api#fixmaketarget in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_2611(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
C_trace("pathname-replace-extension");
((C_proc4)C_fast_retrieve_symbol_proc(lf[81]))(4,*((C_word*)lf[81]+1),((C_word*)t0)[3],((C_word*)t0)[2],C_fast_retrieve(lf[82]));}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* reg in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_2362(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2362,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2370,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),t4,C_retrieve2(lf[14],"setup-api#*chicken-bin-path*"),t3);}

/* k2368 in reg in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#register-program");
((C_proc4)C_fast_retrieve_symbol_proc(lf[75]))(4,*((C_word*)lf[75]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_2343 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2343(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2343,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2347,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("->string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[77]))(3,*((C_word*)lf[77]+1),t3,t2);}

/* k2345 */
static void C_ccall f_2347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_assoc(t1,C_retrieve2(lf[11],"setup-api#*registered-programs*"));
if(C_truep(t2)){
t3=C_i_cdr(t2);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),((C_word*)t0)[2],t3);}
else{
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_2303 in k2299 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2303(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_2303r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2303r(t0,t1,t2,t3);}}

static void C_ccall f_2303r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2307,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2325,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("->string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[77]))(3,*((C_word*)lf[77]+1),t5,t2);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_2307(2,t6,C_i_car(t3));}
else{
C_trace("##sys#error");
t6=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2323 */
static void C_ccall f_2325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),((C_word*)t0)[2],C_retrieve2(lf[14],"setup-api#*chicken-bin-path*"),t1);}

/* k2305 */
static void C_ccall f_2307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2307,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2311,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2315,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("->string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[77]))(3,*((C_word*)lf[77]+1),t3,((C_word*)t0)[2]);}

/* k2313 in k2305 */
static void C_ccall f_2315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("alist-cons");
((C_proc5)C_fast_retrieve_symbol_proc(lf[76]))(5,*((C_word*)lf[76]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2],C_retrieve2(lf[11],"setup-api#*registered-programs*"));}

/* k2309 in k2305 */
static void C_ccall f_2311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[11] /* (set! setup-api#*registered-programs* ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_2184 in k2180 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2184(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2184,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2188,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2285,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#setup-verbose-mode");
((C_proc2)C_fast_retrieve_symbol_proc(lf[21]))(2,*((C_word*)lf[21]+1),t6);}

/* k2283 */
static void C_ccall f_2285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2285,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[71]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2288,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t3,lf[73],t2);}
else{
t2=((C_word*)t0)[3];
f_2188(2,t2,C_SCHEME_UNDEFINED);}}

/* k2286 in k2283 */
static void C_ccall f_2288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2288,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2291,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2289 in k2286 in k2283 */
static void C_ccall f_2291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,lf[72],((C_word*)t0)[2]);}

/* k2292 in k2289 in k2286 in k2283 */
static void C_ccall f_2294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* k2186 */
static void C_ccall f_2188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2188,2,t0,t1);}
if(C_truep(C_i_listp(((C_word*)t0)[5]))){
t2=C_i_cadr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2203,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li7),tmp=(C_word)a,a+=6,tmp);
C_trace("with-output-to-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[64]))(4,*((C_word*)lf[64]+1),((C_word*)t0)[2],t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2242,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("create-temporary-file");
((C_proc2)C_fast_retrieve_symbol_proc(lf[70]))(2,*((C_word*)lf[70]+1),t2);}}

/* k2240 in k2186 */
static void C_ccall f_2242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2242,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2245,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list2(&a,2,t1,t1);
C_trace("setup-api#patch");
((C_proc5)C_fast_retrieve_symbol_proc(lf[59]))(5,*((C_word*)lf[59]+1),t2,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2243 in k2240 in k2186 */
static void C_ccall f_2245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2245,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2252,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[69]))(2,*((C_word*)lf[69]+1),t2);}

/* k2250 in k2243 in k2240 in k2186 */
static void C_ccall f_2252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2252,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t2,C_retrieve2(lf[33],"setup-api#*move-command*"),t1);}

/* k2253 in k2250 in k2243 in k2240 in k2186 */
static void C_ccall f_2255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2255,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[4]);}

/* k2256 in k2253 in k2250 in k2243 in k2240 in k2186 */
static void C_ccall f_2258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2258,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2261,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2278,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t3,((C_word*)t0)[2]);}

/* k2276 in k2256 in k2253 in k2250 in k2243 in k2240 in k2186 */
static void C_ccall f_2278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2259 in k2256 in k2253 in k2250 in k2243 in k2240 in k2186 */
static void C_ccall f_2261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2261,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[68]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[3]);}

/* k2262 in k2259 in k2256 in k2253 in k2250 in k2243 in k2240 in k2186 */
static void C_ccall f_2264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2267,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2274,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api#shellpath");
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t3,((C_word*)t0)[2]);}

/* k2272 in k2262 in k2259 in k2256 in k2253 in k2250 in k2243 in k2240 in k2186 */
static void C_ccall f_2274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2243 in k2240 in k2186 */
static void C_ccall f_2267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2267,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2270,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[66]))(3,*((C_word*)lf[66]+1),t2,((C_word*)t0)[2]);}

/* k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2243 in k2240 in k2186 */
static void C_ccall f_2270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-api#$system");
f_5983(((C_word*)t0)[2],t1);}

/* a2202 in k2186 */
static void C_ccall f_2203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2203,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp);
C_trace("with-input-from-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[63]))(4,*((C_word*)lf[63]+1),t1,t2,t3);}

/* a2212 in a2202 in k2186 */
static void C_ccall f_2213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2213,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2219(t5,t1);}

/* loop in a2212 in a2202 in k2186 */
static void C_fcall f_2219(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2219,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2223,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("read-line");
((C_proc2)C_fast_retrieve_symbol_proc(lf[62]))(2,*((C_word*)lf[62]+1),t2);}

/* k2221 in loop in a2212 in a2202 in k2186 */
static void C_ccall f_2223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2223,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2232,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2239,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("irregex-replace/all");
((C_proc5)C_fast_retrieve_symbol_proc(lf[61]))(5,*((C_word*)lf[61]+1),t3,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}}

/* k2237 in k2221 in loop in a2212 in a2202 in k2186 */
static void C_ccall f_2239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-line");
((C_proc3)C_fast_retrieve_symbol_proc(lf[60]))(3,*((C_word*)lf[60]+1),((C_word*)t0)[2],t1);}

/* k2230 in k2221 in loop in a2212 in a2202 in k2186 */
static void C_ccall f_2232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("loop192");
t2=((C_word*)((C_word*)t0)[3])[1];
f_2219(t2,((C_word*)t0)[2]);}

/* f_2159 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2159(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2159r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2159r(t0,t1,t2);}}

static void C_ccall f_2159r(C_word t0,C_word t1,C_word t2){
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
if(C_truep(C_i_nullp(t2))){
t3=C_retrieve2(lf[9],"setup-api#*sudo*");
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_car(t2))){
t3=t1;
t4=lf[9] /* setup-api#*sudo* */ =C_SCHEME_TRUE;;
if(C_truep(C_retrieve2(lf[10],"setup-api#*windows-shell*"))){
t5=lf[9] /* setup-api#*sudo* */ =C_SCHEME_FALSE;;
C_trace("print");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(3,*((C_word*)lf[50]+1),t3,lf[51]);}
else{
t5=C_mutate(&lf[31] /* (set! setup-api#*copy-command* ...) */,lf[52]);
t6=C_mutate(&lf[32] /* (set! setup-api#*remove-command* ...) */,lf[53]);
t7=C_mutate(&lf[33] /* (set! setup-api#*move-command* ...) */,lf[54]);
t8=C_mutate(&lf[34] /* (set! setup-api#*chmod-command* ...) */,lf[55]);
t9=C_mutate(&lf[35] /* (set! setup-api#*ranlib-command* ...) */,lf[56]);
t10=C_mutate(&lf[36] /* (set! setup-api#*mkdir-command* ...) */,lf[57]);
t11=t3;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}}
else{
C_trace("setup-api#user-install-setup");
f_2133(t1);}}}

/* setup-api#user-install-setup in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_fcall f_2133(C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2133,NULL,1,t1);}
t2=lf[9] /* setup-api#*sudo* */ =C_SCHEME_FALSE;;
if(C_truep(C_retrieve2(lf[10],"setup-api#*windows-shell*"))){
t3=t1;
t4=C_mutate(&lf[31] /* (set! setup-api#*copy-command* ...) */,lf[38]);
t5=C_mutate(&lf[32] /* (set! setup-api#*remove-command* ...) */,lf[39]);
t6=C_mutate(&lf[33] /* (set! setup-api#*move-command* ...) */,lf[40]);
t7=C_mutate(&lf[34] /* (set! setup-api#*chmod-command* ...) */,lf[41]);
t8=C_mutate(&lf[35] /* (set! setup-api#*ranlib-command* ...) */,lf[42]);
t9=t3;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t3=t1;
t4=C_mutate(&lf[31] /* (set! setup-api#*copy-command* ...) */,lf[43]);
t5=C_mutate(&lf[32] /* (set! setup-api#*remove-command* ...) */,lf[44]);
t6=C_mutate(&lf[33] /* (set! setup-api#*move-command* ...) */,lf[45]);
t7=C_mutate(&lf[34] /* (set! setup-api#*chmod-command* ...) */,lf[46]);
t8=C_mutate(&lf[35] /* (set! setup-api#*ranlib-command* ...) */,lf[47]);
t9=C_mutate(&lf[36] /* (set! setup-api#*mkdir-command* ...) */,lf[48]);
t10=t3;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* f_2062 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2062(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2062r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2062r(t0,t1,t2);}}

static void C_ccall f_2062r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2066,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_2066(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_2066(2,t5,C_i_car(t2));}
else{
C_trace("##sys#error");
t5=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k2064 */
static void C_ccall f_2066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2066,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2072,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t2,C_fast_retrieve(lf[30]),t1);}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2070 in k2064 */
static void C_ccall f_2072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_2030 in k2026 in k2022 in k2018 in k2014 in k2010 in k2006 in k2002 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_2030(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2030r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2030r(t0,t1,t2);}}

static void C_ccall f_2030r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2034,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_2034(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_2034(2,t5,C_i_car(t2));}
else{
C_trace("##sys#error");
t5=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k2032 */
static void C_ccall f_2034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2034,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2040,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t2,C_fast_retrieve(lf[27]),t1);}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2038 in k2032 */
static void C_ccall f_2040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_1991 in k1987 in k1984 in k1980 in k1977 in k1974 in k1970 in k1966 in k1963 in k1956 in k1952 in k1948 in k1944 in k1940 in k1935 in k1932 in k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 */
static void C_ccall f_1991(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1991,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1999,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("normalize-pathname");
((C_proc3)C_fast_retrieve_symbol_proc(lf[18]))(3,*((C_word*)lf[18]+1),t3,t2);}

/* k1997 */
static void C_ccall f_1999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("qs");
((C_proc3)C_fast_retrieve_symbol_proc(lf[17]))(3,*((C_word*)lf[17]+1),((C_word*)t0)[2],t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[578] = {
{"toplevel:setup_2dapi_2escm",(void*)C_toplevel},
{"f_1907:setup_2dapi_2escm",(void*)f_1907},
{"f_1910:setup_2dapi_2escm",(void*)f_1910},
{"f_1913:setup_2dapi_2escm",(void*)f_1913},
{"f_1916:setup_2dapi_2escm",(void*)f_1916},
{"f_1919:setup_2dapi_2escm",(void*)f_1919},
{"f_1922:setup_2dapi_2escm",(void*)f_1922},
{"f_1925:setup_2dapi_2escm",(void*)f_1925},
{"f_1928:setup_2dapi_2escm",(void*)f_1928},
{"f_1931:setup_2dapi_2escm",(void*)f_1931},
{"f_1934:setup_2dapi_2escm",(void*)f_1934},
{"f_1937:setup_2dapi_2escm",(void*)f_1937},
{"f_1942:setup_2dapi_2escm",(void*)f_1942},
{"f_1946:setup_2dapi_2escm",(void*)f_1946},
{"f_1950:setup_2dapi_2escm",(void*)f_1950},
{"f_1954:setup_2dapi_2escm",(void*)f_1954},
{"f_1958:setup_2dapi_2escm",(void*)f_1958},
{"f_6205:setup_2dapi_2escm",(void*)f_6205},
{"f_1965:setup_2dapi_2escm",(void*)f_1965},
{"f_1968:setup_2dapi_2escm",(void*)f_1968},
{"f_1972:setup_2dapi_2escm",(void*)f_1972},
{"f_1976:setup_2dapi_2escm",(void*)f_1976},
{"f_1979:setup_2dapi_2escm",(void*)f_1979},
{"f_1982:setup_2dapi_2escm",(void*)f_1982},
{"f_1986:setup_2dapi_2escm",(void*)f_1986},
{"f_1989:setup_2dapi_2escm",(void*)f_1989},
{"f_2004:setup_2dapi_2escm",(void*)f_2004},
{"f_2008:setup_2dapi_2escm",(void*)f_2008},
{"f_2012:setup_2dapi_2escm",(void*)f_2012},
{"f_2016:setup_2dapi_2escm",(void*)f_2016},
{"f_2020:setup_2dapi_2escm",(void*)f_2020},
{"f_2024:setup_2dapi_2escm",(void*)f_2024},
{"f_2028:setup_2dapi_2escm",(void*)f_2028},
{"f_6182:setup_2dapi_2escm",(void*)f_6182},
{"f_2182:setup_2dapi_2escm",(void*)f_2182},
{"f_2301:setup_2dapi_2escm",(void*)f_2301},
{"f_6180:setup_2dapi_2escm",(void*)f_6180},
{"f_2373:setup_2dapi_2escm",(void*)f_2373},
{"f_6176:setup_2dapi_2escm",(void*)f_6176},
{"f_2376:setup_2dapi_2escm",(void*)f_2376},
{"f_6172:setup_2dapi_2escm",(void*)f_6172},
{"f_2379:setup_2dapi_2escm",(void*)f_2379},
{"f_6168:setup_2dapi_2escm",(void*)f_6168},
{"f_2382:setup_2dapi_2escm",(void*)f_2382},
{"f_6164:setup_2dapi_2escm",(void*)f_6164},
{"f_2385:setup_2dapi_2escm",(void*)f_2385},
{"f_6160:setup_2dapi_2escm",(void*)f_6160},
{"f_2388:setup_2dapi_2escm",(void*)f_2388},
{"f_6156:setup_2dapi_2escm",(void*)f_6156},
{"f_2391:setup_2dapi_2escm",(void*)f_2391},
{"f_3600:setup_2dapi_2escm",(void*)f_3600},
{"f_3604:setup_2dapi_2escm",(void*)f_3604},
{"f_3608:setup_2dapi_2escm",(void*)f_3608},
{"f_6055:setup_2dapi_2escm",(void*)f_6055},
{"f_6071:setup_2dapi_2escm",(void*)f_6071},
{"f_6108:setup_2dapi_2escm",(void*)f_6108},
{"f_6101:setup_2dapi_2escm",(void*)f_6101},
{"f_6105:setup_2dapi_2escm",(void*)f_6105},
{"f_6078:setup_2dapi_2escm",(void*)f_6078},
{"f_5639:setup_2dapi_2escm",(void*)f_5639},
{"f_6053:setup_2dapi_2escm",(void*)f_6053},
{"f_6033:setup_2dapi_2escm",(void*)f_6033},
{"f_6039:setup_2dapi_2escm",(void*)f_6039},
{"f_6050:setup_2dapi_2escm",(void*)f_6050},
{"f_6043:setup_2dapi_2escm",(void*)f_6043},
{"f_5983:setup_2dapi_2escm",(void*)f_5983},
{"f_6028:setup_2dapi_2escm",(void*)f_6028},
{"f_5987:setup_2dapi_2escm",(void*)f_5987},
{"f_6000:setup_2dapi_2escm",(void*)f_6000},
{"f_6003:setup_2dapi_2escm",(void*)f_6003},
{"f_6006:setup_2dapi_2escm",(void*)f_6006},
{"f_6009:setup_2dapi_2escm",(void*)f_6009},
{"f_6012:setup_2dapi_2escm",(void*)f_6012},
{"f_6015:setup_2dapi_2escm",(void*)f_6015},
{"f_6018:setup_2dapi_2escm",(void*)f_6018},
{"f_6021:setup_2dapi_2escm",(void*)f_6021},
{"f_6024:setup_2dapi_2escm",(void*)f_6024},
{"f_5906:setup_2dapi_2escm",(void*)f_5906},
{"f_5910:setup_2dapi_2escm",(void*)f_5910},
{"f_5959:setup_2dapi_2escm",(void*)f_5959},
{"f_5934:setup_2dapi_2escm",(void*)f_5934},
{"f_5944:setup_2dapi_2escm",(void*)f_5944},
{"f_5916:setup_2dapi_2escm",(void*)f_5916},
{"f_5923:setup_2dapi_2escm",(void*)f_5923},
{"f_5730:setup_2dapi_2escm",(void*)f_5730},
{"f_5734:setup_2dapi_2escm",(void*)f_5734},
{"f_5885:setup_2dapi_2escm",(void*)f_5885},
{"f_5816:setup_2dapi_2escm",(void*)f_5816},
{"f_5820:setup_2dapi_2escm",(void*)f_5820},
{"f_5860:setup_2dapi_2escm",(void*)f_5860},
{"f_5870:setup_2dapi_2escm",(void*)f_5870},
{"f_5855:setup_2dapi_2escm",(void*)f_5855},
{"f_5821:setup_2dapi_2escm",(void*)f_5821},
{"f_5834:setup_2dapi_2escm",(void*)f_5834},
{"f_5840:setup_2dapi_2escm",(void*)f_5840},
{"f_5757:setup_2dapi_2escm",(void*)f_5757},
{"f_5772:setup_2dapi_2escm",(void*)f_5772},
{"f_5801:setup_2dapi_2escm",(void*)f_5801},
{"f_5807:setup_2dapi_2escm",(void*)f_5807},
{"f_5778:setup_2dapi_2escm",(void*)f_5778},
{"f_5786:setup_2dapi_2escm",(void*)f_5786},
{"f_5789:setup_2dapi_2escm",(void*)f_5789},
{"f_5799:setup_2dapi_2escm",(void*)f_5799},
{"f_5792:setup_2dapi_2escm",(void*)f_5792},
{"f_5795:setup_2dapi_2escm",(void*)f_5795},
{"f_5763:setup_2dapi_2escm",(void*)f_5763},
{"f_5769:setup_2dapi_2escm",(void*)f_5769},
{"f_5752:setup_2dapi_2escm",(void*)f_5752},
{"f_5695:setup_2dapi_2escm",(void*)f_5695},
{"f_5699:setup_2dapi_2escm",(void*)f_5699},
{"f_5706:setup_2dapi_2escm",(void*)f_5706},
{"f_5651:setup_2dapi_2escm",(void*)f_5651},
{"f_5655:setup_2dapi_2escm",(void*)f_5655},
{"f_5674:setup_2dapi_2escm",(void*)f_5674},
{"f_5664:setup_2dapi_2escm",(void*)f_5664},
{"f_5641:setup_2dapi_2escm",(void*)f_5641},
{"f_5649:setup_2dapi_2escm",(void*)f_5649},
{"f_5438:setup_2dapi_2escm",(void*)f_5438},
{"f_5505:setup_2dapi_2escm",(void*)f_5505},
{"f_5509:setup_2dapi_2escm",(void*)f_5509},
{"f_5511:setup_2dapi_2escm",(void*)f_5511},
{"f_5591:setup_2dapi_2escm",(void*)f_5591},
{"f_5441:setup_2dapi_2escm",(void*)f_5441},
{"f_5498:setup_2dapi_2escm",(void*)f_5498},
{"f_5453:setup_2dapi_2escm",(void*)f_5453},
{"f_5461:setup_2dapi_2escm",(void*)f_5461},
{"f_5416:setup_2dapi_2escm",(void*)f_5416},
{"f_5424:setup_2dapi_2escm",(void*)f_5424},
{"f_5427:setup_2dapi_2escm",(void*)f_5427},
{"f_5430:setup_2dapi_2escm",(void*)f_5430},
{"f_5433:setup_2dapi_2escm",(void*)f_5433},
{"f_5436:setup_2dapi_2escm",(void*)f_5436},
{"f_5357:setup_2dapi_2escm",(void*)f_5357},
{"f_5365:setup_2dapi_2escm",(void*)f_5365},
{"f_5368:setup_2dapi_2escm",(void*)f_5368},
{"f_5371:setup_2dapi_2escm",(void*)f_5371},
{"f_5374:setup_2dapi_2escm",(void*)f_5374},
{"f_5377:setup_2dapi_2escm",(void*)f_5377},
{"f_5380:setup_2dapi_2escm",(void*)f_5380},
{"f_5383:setup_2dapi_2escm",(void*)f_5383},
{"f_5386:setup_2dapi_2escm",(void*)f_5386},
{"f_5389:setup_2dapi_2escm",(void*)f_5389},
{"f_5392:setup_2dapi_2escm",(void*)f_5392},
{"f_5395:setup_2dapi_2escm",(void*)f_5395},
{"f_5398:setup_2dapi_2escm",(void*)f_5398},
{"f_5401:setup_2dapi_2escm",(void*)f_5401},
{"f_5404:setup_2dapi_2escm",(void*)f_5404},
{"f_5407:setup_2dapi_2escm",(void*)f_5407},
{"f_5410:setup_2dapi_2escm",(void*)f_5410},
{"f_5414:setup_2dapi_2escm",(void*)f_5414},
{"f_5236:setup_2dapi_2escm",(void*)f_5236},
{"f_5242:setup_2dapi_2escm",(void*)f_5242},
{"f_5255:setup_2dapi_2escm",(void*)f_5255},
{"f_5267:setup_2dapi_2escm",(void*)f_5267},
{"f_5273:setup_2dapi_2escm",(void*)f_5273},
{"f_5313:setup_2dapi_2escm",(void*)f_5313},
{"f_5324:setup_2dapi_2escm",(void*)f_5324},
{"f_5328:setup_2dapi_2escm",(void*)f_5328},
{"f_5288:setup_2dapi_2escm",(void*)f_5288},
{"f_5295:setup_2dapi_2escm",(void*)f_5295},
{"f_5298:setup_2dapi_2escm",(void*)f_5298},
{"f_5301:setup_2dapi_2escm",(void*)f_5301},
{"f_5304:setup_2dapi_2escm",(void*)f_5304},
{"f_5307:setup_2dapi_2escm",(void*)f_5307},
{"f_5155:setup_2dapi_2escm",(void*)f_5155},
{"f_5159:setup_2dapi_2escm",(void*)f_5159},
{"f_5166:setup_2dapi_2escm",(void*)f_5166},
{"f_5169:setup_2dapi_2escm",(void*)f_5169},
{"f_5172:setup_2dapi_2escm",(void*)f_5172},
{"f_5175:setup_2dapi_2escm",(void*)f_5175},
{"f_5178:setup_2dapi_2escm",(void*)f_5178},
{"f_5181:setup_2dapi_2escm",(void*)f_5181},
{"f_5184:setup_2dapi_2escm",(void*)f_5184},
{"f_5187:setup_2dapi_2escm",(void*)f_5187},
{"f_5190:setup_2dapi_2escm",(void*)f_5190},
{"f_5193:setup_2dapi_2escm",(void*)f_5193},
{"f_5212:setup_2dapi_2escm",(void*)f_5212},
{"f_5196:setup_2dapi_2escm",(void*)f_5196},
{"f_5199:setup_2dapi_2escm",(void*)f_5199},
{"f_5202:setup_2dapi_2escm",(void*)f_5202},
{"f_5205:setup_2dapi_2escm",(void*)f_5205},
{"f_5208:setup_2dapi_2escm",(void*)f_5208},
{"f_5123:setup_2dapi_2escm",(void*)f_5123},
{"f_5153:setup_2dapi_2escm",(void*)f_5153},
{"f_5130:setup_2dapi_2escm",(void*)f_5130},
{"f_5137:setup_2dapi_2escm",(void*)f_5137},
{"f_5140:setup_2dapi_2escm",(void*)f_5140},
{"f_5143:setup_2dapi_2escm",(void*)f_5143},
{"f_5146:setup_2dapi_2escm",(void*)f_5146},
{"f_5149:setup_2dapi_2escm",(void*)f_5149},
{"f_4953:setup_2dapi_2escm",(void*)f_4953},
{"f_5117:setup_2dapi_2escm",(void*)f_5117},
{"f_4960:setup_2dapi_2escm",(void*)f_4960},
{"f_5114:setup_2dapi_2escm",(void*)f_5114},
{"f_4963:setup_2dapi_2escm",(void*)f_4963},
{"f_5111:setup_2dapi_2escm",(void*)f_5111},
{"f_4966:setup_2dapi_2escm",(void*)f_4966},
{"f_5105:setup_2dapi_2escm",(void*)f_5105},
{"f_4969:setup_2dapi_2escm",(void*)f_4969},
{"f_5102:setup_2dapi_2escm",(void*)f_5102},
{"f_4972:setup_2dapi_2escm",(void*)f_4972},
{"f_4975:setup_2dapi_2escm",(void*)f_4975},
{"f_4978:setup_2dapi_2escm",(void*)f_4978},
{"f_5096:setup_2dapi_2escm",(void*)f_5096},
{"f_4981:setup_2dapi_2escm",(void*)f_4981},
{"f_5083:setup_2dapi_2escm",(void*)f_5083},
{"f_5069:setup_2dapi_2escm",(void*)f_5069},
{"f_5072:setup_2dapi_2escm",(void*)f_5072},
{"f_4984:setup_2dapi_2escm",(void*)f_4984},
{"f_4987:setup_2dapi_2escm",(void*)f_4987},
{"f_4998:setup_2dapi_2escm",(void*)f_4998},
{"f_5013:setup_2dapi_2escm",(void*)f_5013},
{"f_5045:setup_2dapi_2escm",(void*)f_5045},
{"f_5051:setup_2dapi_2escm",(void*)f_5051},
{"f_5019:setup_2dapi_2escm",(void*)f_5019},
{"f_5027:setup_2dapi_2escm",(void*)f_5027},
{"f_5030:setup_2dapi_2escm",(void*)f_5030},
{"f_5033:setup_2dapi_2escm",(void*)f_5033},
{"f_5043:setup_2dapi_2escm",(void*)f_5043},
{"f_5036:setup_2dapi_2escm",(void*)f_5036},
{"f_5039:setup_2dapi_2escm",(void*)f_5039},
{"f_5004:setup_2dapi_2escm",(void*)f_5004},
{"f_5010:setup_2dapi_2escm",(void*)f_5010},
{"f_4990:setup_2dapi_2escm",(void*)f_4990},
{"f_4993:setup_2dapi_2escm",(void*)f_4993},
{"f_4908:setup_2dapi_2escm",(void*)f_4908},
{"f_4912:setup_2dapi_2escm",(void*)f_4912},
{"f_4921:setup_2dapi_2escm",(void*)f_4921},
{"f_4933:setup_2dapi_2escm",(void*)f_4933},
{"f_4951:setup_2dapi_2escm",(void*)f_4951},
{"f_4927:setup_2dapi_2escm",(void*)f_4927},
{"f_4915:setup_2dapi_2escm",(void*)f_4915},
{"f_4836:setup_2dapi_2escm",(void*)f_4836},
{"f_4840:setup_2dapi_2escm",(void*)f_4840},
{"f_4852:setup_2dapi_2escm",(void*)f_4852},
{"f_4858:setup_2dapi_2escm",(void*)f_4858},
{"f_4868:setup_2dapi_2escm",(void*)f_4868},
{"f_4871:setup_2dapi_2escm",(void*)f_4871},
{"f_4874:setup_2dapi_2escm",(void*)f_4874},
{"f_4877:setup_2dapi_2escm",(void*)f_4877},
{"f_4843:setup_2dapi_2escm",(void*)f_4843},
{"f_4846:setup_2dapi_2escm",(void*)f_4846},
{"f_4681:setup_2dapi_2escm",(void*)f_4681},
{"f_4685:setup_2dapi_2escm",(void*)f_4685},
{"f_4691:setup_2dapi_2escm",(void*)f_4691},
{"f_4694:setup_2dapi_2escm",(void*)f_4694},
{"f_4697:setup_2dapi_2escm",(void*)f_4697},
{"f_4805:setup_2dapi_2escm",(void*)f_4805},
{"f_4700:setup_2dapi_2escm",(void*)f_4700},
{"f_4768:setup_2dapi_2escm",(void*)f_4768},
{"f_4797:setup_2dapi_2escm",(void*)f_4797},
{"f_4741:setup_2dapi_2escm",(void*)f_4741},
{"f_4766:setup_2dapi_2escm",(void*)f_4766},
{"f_4744:setup_2dapi_2escm",(void*)f_4744},
{"f_4751:setup_2dapi_2escm",(void*)f_4751},
{"f_4701:setup_2dapi_2escm",(void*)f_4701},
{"f_4708:setup_2dapi_2escm",(void*)f_4708},
{"f_4711:setup_2dapi_2escm",(void*)f_4711},
{"f_4729:setup_2dapi_2escm",(void*)f_4729},
{"f_4714:setup_2dapi_2escm",(void*)f_4714},
{"f_4460:setup_2dapi_2escm",(void*)f_4460},
{"f_4464:setup_2dapi_2escm",(void*)f_4464},
{"f_4480:setup_2dapi_2escm",(void*)f_4480},
{"f_4483:setup_2dapi_2escm",(void*)f_4483},
{"f_4486:setup_2dapi_2escm",(void*)f_4486},
{"f_4650:setup_2dapi_2escm",(void*)f_4650},
{"f_4489:setup_2dapi_2escm",(void*)f_4489},
{"f_4613:setup_2dapi_2escm",(void*)f_4613},
{"f_4642:setup_2dapi_2escm",(void*)f_4642},
{"f_4576:setup_2dapi_2escm",(void*)f_4576},
{"f_4590:setup_2dapi_2escm",(void*)f_4590},
{"f_4594:setup_2dapi_2escm",(void*)f_4594},
{"f_4492:setup_2dapi_2escm",(void*)f_4492},
{"f_4542:setup_2dapi_2escm",(void*)f_4542},
{"f_4571:setup_2dapi_2escm",(void*)f_4571},
{"f_4533:setup_2dapi_2escm",(void*)f_4533},
{"f_4540:setup_2dapi_2escm",(void*)f_4540},
{"f_4493:setup_2dapi_2escm",(void*)f_4493},
{"f_4500:setup_2dapi_2escm",(void*)f_4500},
{"f_4503:setup_2dapi_2escm",(void*)f_4503},
{"f_4521:setup_2dapi_2escm",(void*)f_4521},
{"f_4506:setup_2dapi_2escm",(void*)f_4506},
{"f_4466:setup_2dapi_2escm",(void*)f_4466},
{"f_4063:setup_2dapi_2escm",(void*)f_4063},
{"f_4070:setup_2dapi_2escm",(void*)f_4070},
{"f_4264:setup_2dapi_2escm",(void*)f_4264},
{"f_4268:setup_2dapi_2escm",(void*)f_4268},
{"f_4274:setup_2dapi_2escm",(void*)f_4274},
{"f_4277:setup_2dapi_2escm",(void*)f_4277},
{"f_4280:setup_2dapi_2escm",(void*)f_4280},
{"f_4283:setup_2dapi_2escm",(void*)f_4283},
{"f_4396:setup_2dapi_2escm",(void*)f_4396},
{"f_4425:setup_2dapi_2escm",(void*)f_4425},
{"f_4387:setup_2dapi_2escm",(void*)f_4387},
{"f_4394:setup_2dapi_2escm",(void*)f_4394},
{"f_4284:setup_2dapi_2escm",(void*)f_4284},
{"f_4291:setup_2dapi_2escm",(void*)f_4291},
{"f_4294:setup_2dapi_2escm",(void*)f_4294},
{"f_4375:setup_2dapi_2escm",(void*)f_4375},
{"f_4297:setup_2dapi_2escm",(void*)f_4297},
{"f_4360:setup_2dapi_2escm",(void*)f_4360},
{"f_4352:setup_2dapi_2escm",(void*)f_4352},
{"f_4321:setup_2dapi_2escm",(void*)f_4321},
{"f_4336:setup_2dapi_2escm",(void*)f_4336},
{"f_4303:setup_2dapi_2escm",(void*)f_4303},
{"f_4309:setup_2dapi_2escm",(void*)f_4309},
{"f_2397:setup_2dapi_2escm",(void*)f_2397},
{"f_4312:setup_2dapi_2escm",(void*)f_4312},
{"f_4167:setup_2dapi_2escm",(void*)f_4167},
{"f_4249:setup_2dapi_2escm",(void*)f_4249},
{"f_4180:setup_2dapi_2escm",(void*)f_4180},
{"f_4183:setup_2dapi_2escm",(void*)f_4183},
{"f_4186:setup_2dapi_2escm",(void*)f_4186},
{"f_4189:setup_2dapi_2escm",(void*)f_4189},
{"f_4192:setup_2dapi_2escm",(void*)f_4192},
{"f_4195:setup_2dapi_2escm",(void*)f_4195},
{"f_4198:setup_2dapi_2escm",(void*)f_4198},
{"f_4213:setup_2dapi_2escm",(void*)f_4213},
{"f_4221:setup_2dapi_2escm",(void*)f_4221},
{"f_4228:setup_2dapi_2escm",(void*)f_4228},
{"f_4217:setup_2dapi_2escm",(void*)f_4217},
{"f_4209:setup_2dapi_2escm",(void*)f_4209},
{"f_4147:setup_2dapi_2escm",(void*)f_4147},
{"f_4119:setup_2dapi_2escm",(void*)f_4119},
{"f_3972:setup_2dapi_2escm",(void*)f_3972},
{"f_4024:setup_2dapi_2escm",(void*)f_4024},
{"f_3987:setup_2dapi_2escm",(void*)f_3987},
{"f_3990:setup_2dapi_2escm",(void*)f_3990},
{"f_4053:setup_2dapi_2escm",(void*)f_4053},
{"f_4034:setup_2dapi_2escm",(void*)f_4034},
{"f_3947:setup_2dapi_2escm",(void*)f_3947},
{"f_3967:setup_2dapi_2escm",(void*)f_3967},
{"f_3929:setup_2dapi_2escm",(void*)f_3929},
{"f_3945:setup_2dapi_2escm",(void*)f_3945},
{"f_3882:setup_2dapi_2escm",(void*)f_3882},
{"f_3889:setup_2dapi_2escm",(void*)f_3889},
{"f_3892:setup_2dapi_2escm",(void*)f_3892},
{"f_3907:setup_2dapi_2escm",(void*)f_3907},
{"f_3911:setup_2dapi_2escm",(void*)f_3911},
{"f_3754:setup_2dapi_2escm",(void*)f_3754},
{"f_3764:setup_2dapi_2escm",(void*)f_3764},
{"f_3779:setup_2dapi_2escm",(void*)f_3779},
{"f_3876:setup_2dapi_2escm",(void*)f_3876},
{"f_3880:setup_2dapi_2escm",(void*)f_3880},
{"f_3820:setup_2dapi_2escm",(void*)f_3820},
{"f_3813:setup_2dapi_2escm",(void*)f_3813},
{"f_3782:setup_2dapi_2escm",(void*)f_3782},
{"f_3785:setup_2dapi_2escm",(void*)f_3785},
{"f_3800:setup_2dapi_2escm",(void*)f_3800},
{"f_3804:setup_2dapi_2escm",(void*)f_3804},
{"f_3788:setup_2dapi_2escm",(void*)f_3788},
{"f_3646:setup_2dapi_2escm",(void*)f_3646},
{"f_3730:setup_2dapi_2escm",(void*)f_3730},
{"f_3733:setup_2dapi_2escm",(void*)f_3733},
{"f_3736:setup_2dapi_2escm",(void*)f_3736},
{"f_3739:setup_2dapi_2escm",(void*)f_3739},
{"f_3742:setup_2dapi_2escm",(void*)f_3742},
{"f_3745:setup_2dapi_2escm",(void*)f_3745},
{"f_3653:setup_2dapi_2escm",(void*)f_3653},
{"f_3656:setup_2dapi_2escm",(void*)f_3656},
{"f_3727:setup_2dapi_2escm",(void*)f_3727},
{"f_3571:setup_2dapi_2escm",(void*)f_3571},
{"f_3659:setup_2dapi_2escm",(void*)f_3659},
{"f_3662:setup_2dapi_2escm",(void*)f_3662},
{"f_3719:setup_2dapi_2escm",(void*)f_3719},
{"f_3686:setup_2dapi_2escm",(void*)f_3686},
{"f_3710:setup_2dapi_2escm",(void*)f_3710},
{"f_3689:setup_2dapi_2escm",(void*)f_3689},
{"f_3704:setup_2dapi_2escm",(void*)f_3704},
{"f_3708:setup_2dapi_2escm",(void*)f_3708},
{"f_3665:setup_2dapi_2escm",(void*)f_3665},
{"f_3683:setup_2dapi_2escm",(void*)f_3683},
{"f_6133:setup_2dapi_2escm",(void*)f_6133},
{"f_6137:setup_2dapi_2escm",(void*)f_6137},
{"f_6152:setup_2dapi_2escm",(void*)f_6152},
{"f_6125:setup_2dapi_2escm",(void*)f_6125},
{"f_6129:setup_2dapi_2escm",(void*)f_6129},
{"f_3622:setup_2dapi_2escm",(void*)f_3622},
{"f_3629:setup_2dapi_2escm",(void*)f_3629},
{"f_3632:setup_2dapi_2escm",(void*)f_3632},
{"f_3635:setup_2dapi_2escm",(void*)f_3635},
{"f_3638:setup_2dapi_2escm",(void*)f_3638},
{"f_3609:setup_2dapi_2escm",(void*)f_3609},
{"f_3613:setup_2dapi_2escm",(void*)f_3613},
{"f_3524:setup_2dapi_2escm",(void*)f_3524},
{"f_3556:setup_2dapi_2escm",(void*)f_3556},
{"f_3073:setup_2dapi_2escm",(void*)f_3073},
{"f_3522:setup_2dapi_2escm",(void*)f_3522},
{"f_3077:setup_2dapi_2escm",(void*)f_3077},
{"f_2905:setup_2dapi_2escm",(void*)f_2905},
{"f_2914:setup_2dapi_2escm",(void*)f_2914},
{"f_2919:setup_2dapi_2escm",(void*)f_2919},
{"f_2926:setup_2dapi_2escm",(void*)f_2926},
{"f_2929:setup_2dapi_2escm",(void*)f_2929},
{"f_2938:setup_2dapi_2escm",(void*)f_2938},
{"f_2941:setup_2dapi_2escm",(void*)f_2941},
{"f_2980:setup_2dapi_2escm",(void*)f_2980},
{"f_2988:setup_2dapi_2escm",(void*)f_2988},
{"f_2950:setup_2dapi_2escm",(void*)f_2950},
{"f_3080:setup_2dapi_2escm",(void*)f_3080},
{"f_3065:setup_2dapi_2escm",(void*)f_3065},
{"f_3083:setup_2dapi_2escm",(void*)f_3083},
{"f_3088:setup_2dapi_2escm",(void*)f_3088},
{"f_3092:setup_2dapi_2escm",(void*)f_3092},
{"f_3494:setup_2dapi_2escm",(void*)f_3494},
{"f_3504:setup_2dapi_2escm",(void*)f_3504},
{"f_3482:setup_2dapi_2escm",(void*)f_3482},
{"f_3413:setup_2dapi_2escm",(void*)f_3413},
{"f_3419:setup_2dapi_2escm",(void*)f_3419},
{"f_3433:setup_2dapi_2escm",(void*)f_3433},
{"f_3441:setup_2dapi_2escm",(void*)f_3441},
{"f_3424:setup_2dapi_2escm",(void*)f_3424},
{"f_3427:setup_2dapi_2escm",(void*)f_3427},
{"f_3451:setup_2dapi_2escm",(void*)f_3451},
{"f_3094:setup_2dapi_2escm",(void*)f_3094},
{"f_2800:setup_2dapi_2escm",(void*)f_2800},
{"f_2813:setup_2dapi_2escm",(void*)f_2813},
{"f_2819:setup_2dapi_2escm",(void*)f_2819},
{"f_2791:setup_2dapi_2escm",(void*)f_2791},
{"f_3098:setup_2dapi_2escm",(void*)f_3098},
{"f_3101:setup_2dapi_2escm",(void*)f_3101},
{"f_3407:setup_2dapi_2escm",(void*)f_3407},
{"f_3104:setup_2dapi_2escm",(void*)f_3104},
{"f_3389:setup_2dapi_2escm",(void*)f_3389},
{"f_3392:setup_2dapi_2escm",(void*)f_3392},
{"f_3395:setup_2dapi_2escm",(void*)f_3395},
{"f_3398:setup_2dapi_2escm",(void*)f_3398},
{"f_3401:setup_2dapi_2escm",(void*)f_3401},
{"f_3107:setup_2dapi_2escm",(void*)f_3107},
{"f_3377:setup_2dapi_2escm",(void*)f_3377},
{"f_3380:setup_2dapi_2escm",(void*)f_3380},
{"f_3383:setup_2dapi_2escm",(void*)f_3383},
{"f_3386:setup_2dapi_2escm",(void*)f_3386},
{"f_3116:setup_2dapi_2escm",(void*)f_3116},
{"f_3346:setup_2dapi_2escm",(void*)f_3346},
{"f_3356:setup_2dapi_2escm",(void*)f_3356},
{"f_3127:setup_2dapi_2escm",(void*)f_3127},
{"f_3302:setup_2dapi_2escm",(void*)f_3302},
{"f_3306:setup_2dapi_2escm",(void*)f_3306},
{"f_3322:setup_2dapi_2escm",(void*)f_3322},
{"f_3329:setup_2dapi_2escm",(void*)f_3329},
{"f_3332:setup_2dapi_2escm",(void*)f_3332},
{"f_3335:setup_2dapi_2escm",(void*)f_3335},
{"f_3338:setup_2dapi_2escm",(void*)f_3338},
{"f_3341:setup_2dapi_2escm",(void*)f_3341},
{"f_3344:setup_2dapi_2escm",(void*)f_3344},
{"f_3309:setup_2dapi_2escm",(void*)f_3309},
{"f_3319:setup_2dapi_2escm",(void*)f_3319},
{"f_3133:setup_2dapi_2escm",(void*)f_3133},
{"f_3235:setup_2dapi_2escm",(void*)f_3235},
{"f_3238:setup_2dapi_2escm",(void*)f_3238},
{"f_3241:setup_2dapi_2escm",(void*)f_3241},
{"f_3244:setup_2dapi_2escm",(void*)f_3244},
{"f_3247:setup_2dapi_2escm",(void*)f_3247},
{"f_3279:setup_2dapi_2escm",(void*)f_3279},
{"f_3282:setup_2dapi_2escm",(void*)f_3282},
{"f_3285:setup_2dapi_2escm",(void*)f_3285},
{"f_3288:setup_2dapi_2escm",(void*)f_3288},
{"f_3291:setup_2dapi_2escm",(void*)f_3291},
{"f_3294:setup_2dapi_2escm",(void*)f_3294},
{"f_3297:setup_2dapi_2escm",(void*)f_3297},
{"f_3257:setup_2dapi_2escm",(void*)f_3257},
{"f_3250:setup_2dapi_2escm",(void*)f_3250},
{"f_3152:setup_2dapi_2escm",(void*)f_3152},
{"f_3160:setup_2dapi_2escm",(void*)f_3160},
{"f_3207:setup_2dapi_2escm",(void*)f_3207},
{"f_3222:setup_2dapi_2escm",(void*)f_3222},
{"f_3228:setup_2dapi_2escm",(void*)f_3228},
{"f_3213:setup_2dapi_2escm",(void*)f_3213},
{"f_3166:setup_2dapi_2escm",(void*)f_3166},
{"f_3172:setup_2dapi_2escm",(void*)f_3172},
{"f_3176:setup_2dapi_2escm",(void*)f_3176},
{"f_3179:setup_2dapi_2escm",(void*)f_3179},
{"f_3182:setup_2dapi_2escm",(void*)f_3182},
{"f_3198:setup_2dapi_2escm",(void*)f_3198},
{"f_3195:setup_2dapi_2escm",(void*)f_3195},
{"f_3185:setup_2dapi_2escm",(void*)f_3185},
{"f_3188:setup_2dapi_2escm",(void*)f_3188},
{"f_3155:setup_2dapi_2escm",(void*)f_3155},
{"f_3117:setup_2dapi_2escm",(void*)f_3117},
{"f_2867:setup_2dapi_2escm",(void*)f_2867},
{"f_2875:setup_2dapi_2escm",(void*)f_2875},
{"f_2878:setup_2dapi_2escm",(void*)f_2878},
{"f_2881:setup_2dapi_2escm",(void*)f_2881},
{"f_2884:setup_2dapi_2escm",(void*)f_2884},
{"f_2887:setup_2dapi_2escm",(void*)f_2887},
{"f_2890:setup_2dapi_2escm",(void*)f_2890},
{"f_2893:setup_2dapi_2escm",(void*)f_2893},
{"f_2845:setup_2dapi_2escm",(void*)f_2845},
{"f_2853:setup_2dapi_2escm",(void*)f_2853},
{"f_2856:setup_2dapi_2escm",(void*)f_2856},
{"f_2859:setup_2dapi_2escm",(void*)f_2859},
{"f_2862:setup_2dapi_2escm",(void*)f_2862},
{"f_2865:setup_2dapi_2escm",(void*)f_2865},
{"f_2630:setup_2dapi_2escm",(void*)f_2630},
{"f_2754:setup_2dapi_2escm",(void*)f_2754},
{"f_2661:setup_2dapi_2escm",(void*)f_2661},
{"f_2690:setup_2dapi_2escm",(void*)f_2690},
{"f_2640:setup_2dapi_2escm",(void*)f_2640},
{"f_2602:setup_2dapi_2escm",(void*)f_2602},
{"f_2596:setup_2dapi_2escm",(void*)f_2596},
{"f_2583:setup_2dapi_2escm",(void*)f_2583},
{"f_2423:setup_2dapi_2escm",(void*)f_2423},
{"f_2563:setup_2dapi_2escm",(void*)f_2563},
{"f_2572:setup_2dapi_2escm",(void*)f_2572},
{"f_2566:setup_2dapi_2escm",(void*)f_2566},
{"f_2427:setup_2dapi_2escm",(void*)f_2427},
{"f_2560:setup_2dapi_2escm",(void*)f_2560},
{"f_2557:setup_2dapi_2escm",(void*)f_2557},
{"f_2554:setup_2dapi_2escm",(void*)f_2554},
{"f_2456:setup_2dapi_2escm",(void*)f_2456},
{"f_2518:setup_2dapi_2escm",(void*)f_2518},
{"f_2453:setup_2dapi_2escm",(void*)f_2453},
{"f_2547:setup_2dapi_2escm",(void*)f_2547},
{"f_2462:setup_2dapi_2escm",(void*)f_2462},
{"f_2475:setup_2dapi_2escm",(void*)f_2475},
{"f_2483:setup_2dapi_2escm",(void*)f_2483},
{"f_2472:setup_2dapi_2escm",(void*)f_2472},
{"f_2512:setup_2dapi_2escm",(void*)f_2512},
{"f_2481:setup_2dapi_2escm",(void*)f_2481},
{"f_2443:setup_2dapi_2escm",(void*)f_2443},
{"f_2419:setup_2dapi_2escm",(void*)f_2419},
{"f_2651:setup_2dapi_2escm",(void*)f_2651},
{"f_2783:setup_2dapi_2escm",(void*)f_2783},
{"f_2723:setup_2dapi_2escm",(void*)f_2723},
{"f_2731:setup_2dapi_2escm",(void*)f_2731},
{"f_2705:setup_2dapi_2escm",(void*)f_2705},
{"f_2708:setup_2dapi_2escm",(void*)f_2708},
{"f_2711:setup_2dapi_2escm",(void*)f_2711},
{"f_2714:setup_2dapi_2escm",(void*)f_2714},
{"f_2699:setup_2dapi_2escm",(void*)f_2699},
{"f_2741:setup_2dapi_2escm",(void*)f_2741},
{"f_2604:setup_2dapi_2escm",(void*)f_2604},
{"f_2628:setup_2dapi_2escm",(void*)f_2628},
{"f_2611:setup_2dapi_2escm",(void*)f_2611},
{"f_2362:setup_2dapi_2escm",(void*)f_2362},
{"f_2370:setup_2dapi_2escm",(void*)f_2370},
{"f_2343:setup_2dapi_2escm",(void*)f_2343},
{"f_2347:setup_2dapi_2escm",(void*)f_2347},
{"f_2303:setup_2dapi_2escm",(void*)f_2303},
{"f_2325:setup_2dapi_2escm",(void*)f_2325},
{"f_2307:setup_2dapi_2escm",(void*)f_2307},
{"f_2315:setup_2dapi_2escm",(void*)f_2315},
{"f_2311:setup_2dapi_2escm",(void*)f_2311},
{"f_2184:setup_2dapi_2escm",(void*)f_2184},
{"f_2285:setup_2dapi_2escm",(void*)f_2285},
{"f_2288:setup_2dapi_2escm",(void*)f_2288},
{"f_2291:setup_2dapi_2escm",(void*)f_2291},
{"f_2294:setup_2dapi_2escm",(void*)f_2294},
{"f_2188:setup_2dapi_2escm",(void*)f_2188},
{"f_2242:setup_2dapi_2escm",(void*)f_2242},
{"f_2245:setup_2dapi_2escm",(void*)f_2245},
{"f_2252:setup_2dapi_2escm",(void*)f_2252},
{"f_2255:setup_2dapi_2escm",(void*)f_2255},
{"f_2258:setup_2dapi_2escm",(void*)f_2258},
{"f_2278:setup_2dapi_2escm",(void*)f_2278},
{"f_2261:setup_2dapi_2escm",(void*)f_2261},
{"f_2264:setup_2dapi_2escm",(void*)f_2264},
{"f_2274:setup_2dapi_2escm",(void*)f_2274},
{"f_2267:setup_2dapi_2escm",(void*)f_2267},
{"f_2270:setup_2dapi_2escm",(void*)f_2270},
{"f_2203:setup_2dapi_2escm",(void*)f_2203},
{"f_2213:setup_2dapi_2escm",(void*)f_2213},
{"f_2219:setup_2dapi_2escm",(void*)f_2219},
{"f_2223:setup_2dapi_2escm",(void*)f_2223},
{"f_2239:setup_2dapi_2escm",(void*)f_2239},
{"f_2232:setup_2dapi_2escm",(void*)f_2232},
{"f_2159:setup_2dapi_2escm",(void*)f_2159},
{"f_2133:setup_2dapi_2escm",(void*)f_2133},
{"f_2062:setup_2dapi_2escm",(void*)f_2062},
{"f_2066:setup_2dapi_2escm",(void*)f_2066},
{"f_2072:setup_2dapi_2escm",(void*)f_2072},
{"f_2030:setup_2dapi_2escm",(void*)f_2030},
{"f_2034:setup_2dapi_2escm",(void*)f_2034},
{"f_2040:setup_2dapi_2escm",(void*)f_2040},
{"f_1991:setup_2dapi_2escm",(void*)f_1991},
{"f_1999:setup_2dapi_2escm",(void*)f_1999},
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
