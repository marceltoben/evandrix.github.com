/* Generated from eval.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: eval.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file eval.c
   unit: eval
*/

#include "chicken.h"


#ifndef C_INSTALL_EGG_HOME
# define C_INSTALL_EGG_HOME    "."
#endif

#ifndef C_INSTALL_SHARE_HOME
# define C_INSTALL_SHARE_HOME NULL
#endif

#ifndef C_BINARY_VERSION
# define C_BINARY_VERSION      0
#endif


#define C_store_result(x, ptr)   (*((C_word *)C_block_item(ptr, 0)) = (x), C_SCHEME_TRUE)


#define C_copy_result_string(str, buf, n)  (C_memcpy((char *)C_block_item(buf, 0), C_c_string(str), C_unfix(n)), ((char *)C_block_item(buf, 0))[ C_unfix(n) ] = '\0', C_SCHEME_TRUE)


C_externexport  void  CHICKEN_get_error_message(char *t0,int t1);

C_externexport  int  CHICKEN_load(char * t0);

C_externexport  int  CHICKEN_read(char * t0,C_word *t1);

C_externexport  int  CHICKEN_apply_to_string(C_word t0,C_word t1,char *t2,int t3);

C_externexport  int  CHICKEN_apply(C_word t0,C_word t1,C_word *t2);

C_externexport  int  CHICKEN_eval_string_to_string(char * t0,char *t1,int t2);

C_externexport  int  CHICKEN_eval_to_string(C_word t0,char *t1,int t2);

C_externexport  int  CHICKEN_eval_string(char * t0,C_word *t1);

C_externexport  int  CHICKEN_eval(C_word t0,C_word *t1);

C_externexport  int  CHICKEN_yield();

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[401];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,20),40,102,95,50,54,51,49,32,46,32,116,109,112,49,54,54,49,54,55,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,8),40,102,95,50,54,54,53,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,18),40,102,95,50,54,55,55,32,115,49,56,51,32,110,49,56,52,41,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,21),40,102,95,50,54,57,50,32,104,116,49,56,56,32,107,101,121,49,56,57,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,50,48,49,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,28),40,102,95,50,55,52,55,32,104,116,49,57,53,32,107,101,121,49,57,54,32,118,97,108,49,57,55,41,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,45),40,102,95,50,56,48,55,32,104,116,50,48,52,32,107,101,121,50,48,53,32,117,112,100,116,102,117,110,99,50,48,54,32,118,97,108,117,102,117,110,99,50,48,55,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,103,50,50,49,32,98,117,99,107,101,116,50,50,57,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,50,48,32,103,50,50,54,50,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,50,49,53,32,105,50,49,55,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,19),40,102,95,50,56,50,55,32,112,50,49,50,32,104,116,50,49,51,41,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,50,52,53,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,29),40,102,95,50,56,57,55,32,104,116,50,51,57,32,107,101,121,50,52,48,32,97,100,100,112,50,52,49,41,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,12),40,97,50,57,54,50,32,120,50,53,56,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,17),40,97,50,57,55,53,32,112,50,54,48,32,105,50,54,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,32),40,102,95,50,57,53,55,32,112,50,53,52,32,108,108,50,53,53,32,104,50,53,54,32,99,110,116,114,50,53,55,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,21),40,102,105,110,100,45,105,100,32,105,100,51,48,50,32,115,101,51,48,51,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,21),40,114,101,110,97,109,101,32,118,97,114,51,48,56,32,115,101,51,48,57,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,51,52,49,41,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,11),40,103,51,51,50,32,112,51,51,52,41,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,101,110,118,115,51,50,53,32,101,105,51,50,54,41,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,27),40,108,111,111,107,117,112,32,118,97,114,48,51,49,57,32,101,51,50,48,32,115,101,51,50,49,41,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,43),40,101,109,105,116,45,116,114,97,99,101,45,105,110,102,111,32,105,110,102,111,51,52,55,32,99,110,116,114,51,52,56,32,101,51,52,57,32,118,51,53,48,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,7),40,97,51,49,57,48,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,7),40,97,51,49,57,57,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,7),40,97,51,50,49,50,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,19),40,101,118,97,108,47,109,101,116,97,32,102,111,114,109,51,53,56,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,15),40,102,95,51,50,53,48,32,46,32,118,51,55,57,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,51,50,54,49,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,13),40,102,95,51,51,54,51,32,118,52,48,54,41,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,13),40,102,95,51,51,55,56,32,118,52,48,55,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,13),40,102,95,51,51,57,55,32,118,52,48,56,41,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,13),40,102,95,51,52,50,48,32,118,52,48,57,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,13),40,102,95,51,52,52,49,32,118,52,49,48,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,15),40,102,95,51,50,57,49,32,46,32,118,51,57,48,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,15),40,102,95,51,50,57,54,32,46,32,118,51,57,49,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,15),40,102,95,51,51,49,54,32,46,32,118,51,57,55,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,20),40,102,49,48,57,50,52,32,46,32,118,51,57,57,49,48,57,50,51,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,20),40,102,49,48,57,50,57,32,46,32,118,51,57,57,49,48,57,50,56,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,17),40,97,51,50,54,55,32,105,51,56,48,32,106,51,56,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,15),40,102,95,51,52,53,56,32,46,32,118,52,49,54,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,15),40,102,95,51,52,54,54,32,46,32,118,52,49,55,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,15),40,102,95,51,52,55,52,32,46,32,118,52,49,56,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,15),40,102,95,51,52,56,50,32,46,32,118,52,49,57,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,15),40,102,95,51,52,56,52,32,46,32,118,52,50,48,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,15),40,102,95,51,52,57,53,32,46,32,118,52,50,49,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,15),40,102,95,51,52,57,55,32,46,32,118,52,50,50,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,15),40,102,95,51,53,48,56,32,46,32,118,52,50,57,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,15),40,102,95,51,53,54,49,32,46,32,118,52,52,52,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,15),40,102,95,51,53,54,57,32,46,32,118,52,52,53,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,15),40,102,95,51,53,55,55,32,46,32,118,52,52,54,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,15),40,102,95,51,53,56,53,32,46,32,118,52,52,55,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,15),40,102,95,51,53,57,51,32,46,32,118,52,52,56,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,15),40,102,95,51,54,48,49,32,46,32,118,52,52,57,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,15),40,102,95,51,54,48,57,32,46,32,118,52,53,48,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,15),40,102,95,51,54,49,49,32,46,32,118,52,53,49,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,15),40,102,95,51,54,50,54,32,46,32,118,52,53,51,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,15),40,102,95,51,54,52,51,32,46,32,118,52,53,54,41,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,15),40,102,95,51,54,52,56,32,46,32,118,52,53,55,41,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,13),40,102,95,51,54,56,50,32,118,52,53,56,41,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,13),40,102,95,51,54,57,57,32,118,52,54,50,41,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,13),40,102,95,51,55,56,55,32,118,52,55,53,41,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,13),40,102,95,51,56,49,50,32,118,52,56,51,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,7),40,97,51,56,53,53,41,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,13),40,102,95,51,57,52,57,32,118,53,48,49,41,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,13),40,102,95,51,57,54,50,32,118,53,48,50,41,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,13),40,102,95,51,56,57,52,32,118,52,57,54,41,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,15),40,102,95,51,57,48,51,32,46,32,118,52,57,55,41,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,13),40,102,95,51,57,49,49,32,118,52,57,57,41,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,17),40,97,51,56,54,49,32,105,52,56,55,32,106,52,56,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,13),40,102,95,52,48,50,50,32,118,53,54,57,41,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,13),40,102,95,52,48,53,57,32,118,53,55,50,41,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,13),40,102,95,52,49,49,52,32,118,53,55,55,41,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,13),40,102,95,52,49,56,52,32,118,53,56,51,41,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,11),40,103,53,57,51,32,120,54,48,52,41,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,25),40,100,111,108,111,111,112,54,49,52,32,105,54,49,54,32,118,108,105,115,116,54,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,13),40,102,95,52,50,54,52,32,118,54,49,50,41,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,56,55,32,103,53,57,57,54,48,54,41,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,51,54,32,103,53,52,56,53,53,52,41,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,48,56,32,103,53,50,48,53,50,55,41,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,54,53,53,32,103,54,54,55,54,55,55,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,54,50,56,32,103,54,52,48,54,52,55,41,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,14),40,97,52,54,50,51,32,46,32,114,55,51,54,41,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,13),40,102,95,52,54,49,56,32,118,55,51,53,41,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,7),40,97,52,54,52,50,41,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,13),40,102,95,52,54,51,55,32,118,55,51,55,41,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,20),40,97,52,54,54,54,32,97,49,55,51,57,32,46,32,114,55,52,48,41,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,13),40,102,95,52,54,54,49,32,118,55,51,56,41,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,13),40,97,52,54,56,53,32,97,49,55,52,50,41,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,13),40,102,95,52,54,56,48,32,118,55,52,49,41,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,26),40,97,52,55,49,51,32,97,49,55,52,52,32,97,50,55,52,53,32,46,32,114,55,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,13),40,102,95,52,55,48,56,32,118,55,52,51,41,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,19),40,97,52,55,51,50,32,97,49,55,52,56,32,97,50,55,52,57,41,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,13),40,102,95,52,55,50,55,32,118,55,52,55,41,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,32),40,97,52,55,54,48,32,97,49,55,53,49,32,97,50,55,53,50,32,97,51,55,53,51,32,46,32,114,55,53,52,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,13),40,102,95,52,55,53,53,32,118,55,53,48,41,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,25),40,97,52,55,55,57,32,97,49,55,53,54,32,97,50,55,53,55,32,97,51,55,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,13),40,102,95,52,55,55,52,32,118,55,53,53,41,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,38),40,97,52,56,48,55,32,97,49,55,54,48,32,97,50,55,54,49,32,97,51,55,54,50,32,97,52,55,54,51,32,46,32,114,55,54,52,41,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,13),40,102,95,52,56,48,50,32,118,55,53,57,41,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,31),40,97,52,56,50,54,32,97,49,55,54,54,32,97,50,55,54,55,32,97,51,55,54,56,32,97,52,55,54,57,41,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,13),40,102,95,52,56,50,49,32,118,55,54,53,41,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,42),40,100,111,108,111,111,112,49,49,48,57,32,110,49,49,49,49,32,99,49,49,49,50,32,97,114,103,115,49,49,49,51,32,108,97,115,116,49,49,49,52,41,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,15),40,97,52,56,52,56,32,46,32,97,115,55,55,49,41,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,13),40,102,95,52,56,52,51,32,118,55,55,48,41,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,15),40,97,52,56,55,49,32,46,32,97,115,55,55,51,41,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,13),40,102,95,52,56,54,54,32,118,55,55,50,41,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,48,48,32,103,55,49,50,55,49,56,41,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,31),40,97,52,53,57,49,32,118,97,114,115,54,57,52,32,97,114,103,99,54,57,53,32,114,101,115,116,54,57,54,41,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,7),40,97,52,57,53,48,41,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,30),40,97,52,57,53,54,32,108,108,105,115,116,54,56,57,54,57,49,32,98,111,100,121,54,57,48,54,57,50,41,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,11),40,103,55,56,54,32,98,55,57,55,41,0,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,56,48,32,103,55,57,50,55,57,57,41,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,11),40,103,56,49,52,32,98,56,50,53,41,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,6),40,103,56,51,55,41,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,18),40,102,111,114,45,101,97,99,104,45,108,111,111,112,56,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,48,56,32,103,56,50,48,56,50,55,41,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,9),40,115,119,97,112,57,48,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,50,32,120,115,57,51,56,41,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,13),40,102,95,53,51,51,54,32,118,57,51,54,41,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,98,111,100,121,57,51,51,32,120,115,57,51,52,41,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,7),40,97,53,51,49,49,41,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,13),40,103,56,55,52,32,101,120,112,56,56,53,41,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,54,56,32,103,56,56,48,56,57,56,41,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,11),40,103,57,54,52,32,120,57,55,53,41,0,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,57,56,57,32,103,49,48,48,49,49,48,49,49,41,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,53,56,32,103,57,55,48,57,55,55,41,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,7),40,97,53,54,56,57,41,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,37),40,97,53,54,57,57,32,101,120,112,49,48,50,49,49,48,50,50,49,48,50,53,32,95,49,48,50,51,49,48,50,52,49,48,50,54,41,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,105,100,115,49,48,50,48,41,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,13),40,103,49,48,52,51,32,100,49,48,53,49,41,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,48,52,50,32,103,49,48,52,56,49,48,53,51,41,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,7),40,97,53,56,55,49,41,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,7),40,97,53,56,55,54,41,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,7),40,97,53,56,56,50,41,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,44),40,99,111,109,112,105,108,101,32,120,51,55,48,32,101,51,55,49,32,104,51,55,50,32,116,102,51,55,51,32,99,110,116,114,51,55,52,32,115,101,51,55,53,41,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,110,49,49,50,48,41,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,14),40,102,95,54,49,48,49,32,118,49,49,51,57,41,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,14),40,102,95,54,49,50,49,32,118,49,49,52,52,41,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,14),40,102,95,54,49,53,50,32,118,49,49,53,48,41,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,14),40,102,95,54,49,57,48,32,118,49,49,53,55,41,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,14),40,102,95,54,50,51,53,32,118,49,49,54,53,41,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,13),40,103,49,49,55,56,32,97,49,49,56,57,41,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,13),40,103,49,50,48,54,32,97,49,50,49,55,41,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,50,48,48,32,103,49,50,49,50,49,50,49,57,41};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,14),40,102,95,54,50,55,55,32,118,49,49,57,55,41,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,55,50,32,103,49,49,56,52,49,49,57,49,41};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,49),40,99,111,109,112,105,108,101,45,99,97,108,108,32,120,49,49,50,53,32,101,49,49,50,54,32,116,102,49,49,50,55,32,99,110,116,114,49,49,50,56,32,115,101,49,49,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,40),40,102,95,51,48,48,53,32,101,120,112,50,55,57,32,101,110,118,50,56,48,32,115,101,50,56,49,32,46,32,116,109,112,50,55,56,50,56,50,41};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,24),40,102,95,54,52,49,49,32,120,49,50,55,50,32,46,32,101,110,118,49,50,55,51,41};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,5),40,101,114,114,41,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,34),40,108,111,111,112,32,108,108,105,115,116,49,50,56,49,32,118,97,114,115,49,50,56,50,32,97,114,103,99,49,50,56,51,41,0,0,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,25),40,102,95,54,52,50,49,32,108,108,105,115,116,48,49,50,55,54,32,107,49,50,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,8),40,102,95,54,53,48,53,41};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,109,111,100,101,49,51,48,48,41,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,17),40,102,95,54,53,49,49,32,109,111,100,101,49,50,57,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,18),40,104,97,115,45,115,101,112,63,32,115,116,114,49,51,50,48,41,0,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,8),40,102,95,54,54,55,57,41};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,7),40,97,54,54,56,55,41,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,7),40,97,54,55,48,55,41,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,7),40,97,54,55,53,57,41,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,19),40,97,54,55,54,53,32,46,32,116,49,52,50,50,49,52,50,51,41,0,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,7),40,97,54,55,52,55,41,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,13),40,103,49,52,51,48,32,114,49,52,51,56,41,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,52,50,57,32,103,49,52,51,53,49,52,52,49,41,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,21),40,97,54,55,56,49,32,46,32,114,101,115,117,108,116,115,49,52,50,54,41,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,52,49,57,32,120,49,52,50,49,41,0,0,0,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,7),40,97,54,55,49,48,41,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,7),40,97,54,56,52,56,41,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,7),40,97,54,54,57,56,41,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,7),40,97,54,56,53,55,41,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,16),40,97,54,54,55,51,32,97,98,114,116,49,51,55,56,41};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,53),40,102,95,54,54,51,50,32,105,110,112,117,116,49,51,51,49,32,101,118,97,108,117,97,116,111,114,49,51,51,50,32,112,102,49,51,51,51,32,46,32,116,109,112,49,51,51,48,49,51,51,52,41,0,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,37),40,102,95,55,48,53,52,32,102,105,108,101,110,97,109,101,49,52,54,48,32,46,32,101,118,97,108,117,97,116,111,114,49,52,54,49,41,0,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,37),40,102,95,55,48,56,51,32,102,105,108,101,110,97,109,101,49,52,54,55,32,46,32,101,118,97,108,117,97,116,111,114,49,52,54,56,41,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,7),40,97,55,49,52,48,41,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,7),40,97,55,49,52,51,41,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,7),40,97,55,49,52,54,41,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,35),40,102,95,55,49,50,54,32,102,105,108,101,110,97,109,101,49,52,55,57,32,46,32,116,109,112,49,52,55,56,49,52,56,48,41,0,0,0,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,24),40,99,111,109,112,108,101,116,101,32,103,49,53,48,56,49,53,48,57,49,53,49,48,41};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,108,105,98,115,49,53,53,54,41,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,26),40,102,95,55,49,55,53,32,117,110,97,109,101,49,53,52,53,32,108,105,98,49,53,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,28),40,102,95,55,50,56,49,32,117,110,97,109,101,49,53,54,52,32,46,32,108,105,98,49,53,54,53,41,0,0,0,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,7),40,97,55,51,50,56,41,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,25),40,100,111,108,111,111,112,49,53,56,54,32,120,49,53,56,56,32,120,115,49,53,56,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,7),40,97,55,51,51,51,41,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,7),40,97,55,51,54,54,41,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,7),40,97,55,51,50,50,41,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,18),40,102,95,55,51,49,49,32,102,110,97,109,101,49,53,55,54,41,0,0,0,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,5),40,101,114,114,41,0,0,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,13),40,99,104,101,99,107,32,112,49,54,49,54,41,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,105,100,49,54,48,57,41,0,0,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,23),40,102,95,55,51,55,56,32,105,100,49,53,57,54,32,108,111,99,49,53,57,55,41,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,22),40,102,95,55,53,51,57,32,46,32,116,109,112,49,54,51,55,49,54,51,56,41,0,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,16),40,99,104,101,99,107,32,112,97,116,104,49,54,53,51,41};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,112,97,116,104,115,49,54,54,51,41};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,23),40,102,95,55,53,55,48,32,112,49,54,52,57,32,105,110,99,63,49,54,53,48,41,0};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,37),40,102,95,55,54,54,57,32,105,100,49,54,55,57,32,108,111,99,49,54,56,48,32,46,32,116,109,112,49,54,55,56,49,54,56,49,41,0,0,0};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,55,49,51,32,103,49,55,49,57,49,55,50,54,41,0,0,0};
static C_char C_TLS li202[] C_aligned={C_lihdr(0,0,18),40,102,95,55,55,53,51,32,46,32,105,100,115,49,55,49,48,41,0,0,0,0,0,0};
static C_char C_TLS li203[] C_aligned={C_lihdr(0,0,15),40,102,95,55,55,57,56,32,105,100,49,55,51,50,41,0};
static C_char C_TLS li204[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,55,51,57,32,103,49,55,52,53,49,55,53,55,41,0,0,0};
static C_char C_TLS li205[] C_aligned={C_lihdr(0,0,18),40,102,95,55,56,49,50,32,46,32,105,100,115,49,55,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li206[] C_aligned={C_lihdr(0,0,21),40,103,49,55,55,54,32,103,49,55,56,49,49,55,56,50,49,55,56,51,41,0,0,0};
static C_char C_TLS li207[] C_aligned={C_lihdr(0,0,23),40,102,95,55,56,53,48,32,105,100,49,55,54,54,32,108,111,99,49,55,54,55,41,0};
static C_char C_TLS li208[] C_aligned={C_lihdr(0,0,16),40,102,95,55,56,56,51,32,101,120,116,49,55,56,55,41};
static C_char C_TLS li209[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,49,32,105,100,115,49,55,57,51,41,0};
static C_char C_TLS li210[] C_aligned={C_lihdr(0,0,16),40,102,95,55,56,56,57,32,105,100,115,49,55,57,49,41};
static C_char C_TLS li211[] C_aligned={C_lihdr(0,0,21),40,97,55,57,53,51,32,103,49,56,49,55,49,56,49,56,49,56,49,57,41,0,0,0};
static C_char C_TLS li212[] C_aligned={C_lihdr(0,0,7),40,97,55,57,53,57,41,0};
static C_char C_TLS li213[] C_aligned={C_lihdr(0,0,28),40,97,100,100,45,114,101,113,32,105,100,49,56,49,50,32,115,121,110,116,97,120,63,49,56,49,51,41,0,0,0,0};
static C_char C_TLS li214[] C_aligned={C_lihdr(0,0,35),40,105,109,112,102,111,114,109,32,120,49,56,50,50,32,105,100,49,56,50,51,32,98,117,105,108,116,105,110,63,49,56,50,52,41,0,0,0,0,0};
static C_char C_TLS li215[] C_aligned={C_lihdr(0,0,15),40,115,114,102,105,45,105,100,32,110,49,56,51,53,41,0};
static C_char C_TLS li216[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,56,56,55,32,103,49,56,57,57,49,57,49,50,41};
static C_char C_TLS li217[] C_aligned={C_lihdr(0,0,23),40,100,111,105,116,32,105,100,49,56,51,54,32,105,109,112,105,100,49,56,51,55,41,0};
static C_char C_TLS li218[] C_aligned={C_lihdr(0,0,7),40,97,56,51,51,49,41,0};
static C_char C_TLS li219[] C_aligned={C_lihdr(0,0,38),40,97,56,51,51,55,32,101,120,112,49,57,53,54,49,57,53,55,49,57,54,48,32,102,50,49,57,53,56,49,57,53,57,49,57,54,49,41,0,0};
static C_char C_TLS li220[] C_aligned={C_lihdr(0,0,13),40,103,49,57,52,51,32,110,49,57,53,52,41,0,0,0};
static C_char C_TLS li221[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,57,51,55,32,103,49,57,52,57,49,57,54,57,41};
static C_char C_TLS li222[] C_aligned={C_lihdr(0,0,16),40,102,111,108,108,111,119,32,105,100,50,49,57,56,53,41};
static C_char C_TLS li223[] C_aligned={C_lihdr(0,0,34),40,102,95,55,57,51,56,32,105,100,49,56,48,50,32,99,111,109,112,63,49,56,48,51,32,105,109,112,63,49,56,48,52,41,0,0,0,0,0,0};
static C_char C_TLS li224[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,57,57,55,32,105,49,57,57,57,41,0,0,0,0,0,0};
static C_char C_TLS li225[] C_aligned={C_lihdr(0,0,16),40,102,95,56,53,48,49,32,115,116,114,49,57,57,52,41};
static C_char C_TLS li226[] C_aligned={C_lihdr(0,0,16),40,102,95,56,53,57,53,32,111,98,106,50,48,49,52,41};
static C_char C_TLS li227[] C_aligned={C_lihdr(0,0,12),40,99,111,112,121,32,98,50,48,50,57,41,0,0,0,0};
static C_char C_TLS li228[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,50,48,50,53,32,105,50,48,50,55,41,0,0,0,0,0,0};
static C_char C_TLS li229[] C_aligned={C_lihdr(0,0,40),40,102,95,56,54,49,49,32,101,50,48,49,55,32,109,102,102,50,48,49,56,32,109,102,50,48,49,57,32,46,32,97,114,103,115,50,48,50,48,41};
static C_char C_TLS li230[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,98,117,99,107,101,116,50,48,53,48,32,115,121,109,115,50,48,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li231[] C_aligned={C_lihdr(0,0,27),40,100,111,108,111,111,112,50,48,52,53,32,105,50,48,52,55,32,115,121,109,115,50,48,52,56,41,0,0,0,0,0};
static C_char C_TLS li232[] C_aligned={C_lihdr(0,0,15),40,97,56,56,49,50,32,115,121,109,50,48,53,57,41,0};
static C_char C_TLS li233[] C_aligned={C_lihdr(0,0,27),40,102,95,56,55,49,57,32,101,110,118,50,48,51,57,32,46,32,97,114,103,115,50,48,52,48,41,0,0,0,0,0};
static C_char C_TLS li234[] C_aligned={C_lihdr(0,0,8),40,102,95,56,56,51,56,41};
static C_char C_TLS li235[] C_aligned={C_lihdr(0,0,28),40,102,95,56,56,52,49,32,110,50,48,54,55,32,46,32,109,117,116,97,98,108,101,50,48,54,56,41,0,0,0,0};
static C_char C_TLS li236[] C_aligned={C_lihdr(0,0,28),40,102,95,56,56,56,53,32,110,50,48,55,57,32,46,32,109,117,116,97,98,108,101,50,48,56,48,41,0,0,0,0};
static C_char C_TLS li237[] C_aligned={C_lihdr(0,0,14),40,102,95,56,57,50,53,32,98,50,48,57,56,41,0,0};
static C_char C_TLS li238[] C_aligned={C_lihdr(0,0,14),40,105,110,105,116,98,32,104,116,50,48,57,55,41,0,0};
static C_char C_TLS li239[] C_aligned={C_lihdr(0,0,19),40,101,120,105,115,116,115,63,32,102,110,97,109,101,50,49,51,49,41,0,0,0,0,0};
static C_char C_TLS li240[] C_aligned={C_lihdr(0,0,25),40,116,101,115,116,50,32,102,110,97,109,101,50,49,53,50,32,108,115,116,50,49,53,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li241[] C_aligned={C_lihdr(0,0,16),40,116,101,115,116,32,102,110,97,109,101,50,49,53,54,41};
static C_char C_TLS li242[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,112,97,116,104,115,50,49,54,50,41};
static C_char C_TLS li243[] C_aligned={C_lihdr(0,0,50),40,102,95,56,57,56,55,32,102,110,97,109,101,50,49,51,57,32,112,114,101,102,101,114,45,115,111,117,114,99,101,50,49,52,48,32,46,32,116,109,112,50,49,51,56,50,49,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li244[] C_aligned={C_lihdr(0,0,7),40,97,57,49,52,56,41,0};
static C_char C_TLS li245[] C_aligned={C_lihdr(0,0,23),40,102,95,57,49,52,48,32,120,50,49,55,57,32,112,111,114,116,50,49,56,48,41,0};
static C_char C_TLS li246[] C_aligned={C_lihdr(0,0,8),40,102,95,57,49,53,57,41};
static C_char C_TLS li247[] C_aligned={C_lihdr(0,0,8),40,102,95,57,49,55,53,41};
static C_char C_TLS li248[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,50,48,54,32,103,50,50,49,50,50,50,50,52,41,0,0,0};
static C_char C_TLS li249[] C_aligned={C_lihdr(0,0,18),40,119,114,105,116,101,45,101,114,114,32,120,115,50,50,48,51,41,0,0,0,0,0,0};
static C_char C_TLS li250[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,50,51,52,32,103,50,50,52,48,50,50,53,50,41,0,0,0};
static C_char C_TLS li251[] C_aligned={C_lihdr(0,0,22),40,119,114,105,116,101,45,114,101,115,117,108,116,115,32,120,115,50,50,50,56,41,0,0};
static C_char C_TLS li252[] C_aligned={C_lihdr(0,0,26),40,97,57,51,51,54,32,109,115,103,50,50,55,48,32,46,32,97,114,103,115,50,50,55,49,41,0,0,0,0,0,0};
static C_char C_TLS li253[] C_aligned={C_lihdr(0,0,7),40,97,57,51,50,51,41,0};
static C_char C_TLS li254[] C_aligned={C_lihdr(0,0,7),40,97,57,52,53,55,41,0};
static C_char C_TLS li255[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,51,49,54,32,103,50,51,50,50,50,51,51,50,41,0,0,0};
static C_char C_TLS li256[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,118,97,114,115,50,51,48,57,32,117,50,51,49,48,41,0,0,0};
static C_char C_TLS li257[] C_aligned={C_lihdr(0,0,20),40,97,57,52,54,54,32,46,32,114,101,115,117,108,116,50,51,48,54,41,0,0,0,0};
static C_char C_TLS li258[] C_aligned={C_lihdr(0,0,7),40,97,57,54,50,57,41,0};
static C_char C_TLS li259[] C_aligned={C_lihdr(0,0,13),40,97,57,54,50,51,32,99,50,50,57,49,41,0,0,0};
static C_char C_TLS li260[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li261[] C_aligned={C_lihdr(0,0,7),40,97,57,52,49,55,41,0};
static C_char C_TLS li262[] C_aligned={C_lihdr(0,0,7),40,97,57,54,52,48,41,0};
static C_char C_TLS li263[] C_aligned={C_lihdr(0,0,8),40,102,95,57,49,55,56,41};
static C_char C_TLS li264[] C_aligned={C_lihdr(0,0,26),40,102,95,57,54,53,56,32,115,112,101,99,50,51,54,49,32,112,114,111,99,50,51,54,50,41,0,0,0,0,0,0};
static C_char C_TLS li265[] C_aligned={C_lihdr(0,0,5),40,101,114,114,41,0,0,0};
static C_char C_TLS li266[] C_aligned={C_lihdr(0,0,26),40,102,95,57,54,54,55,32,99,104,97,114,50,51,54,55,32,112,111,114,116,50,51,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li267[] C_aligned={C_lihdr(0,0,7),40,97,57,55,54,51,41,0};
static C_char C_TLS li268[] C_aligned={C_lihdr(0,0,14),40,97,57,55,53,55,32,101,120,50,51,57,48,41,0,0};
static C_char C_TLS li269[] C_aligned={C_lihdr(0,0,7),40,97,57,55,56,50,41,0};
static C_char C_TLS li270[] C_aligned={C_lihdr(0,0,7),40,97,57,55,57,52,41,0};
static C_char C_TLS li271[] C_aligned={C_lihdr(0,0,22),40,97,57,55,56,56,32,46,32,97,114,103,115,50,51,56,52,50,51,57,52,41,0,0};
static C_char C_TLS li272[] C_aligned={C_lihdr(0,0,7),40,97,57,55,55,54,41,0};
static C_char C_TLS li273[] C_aligned={C_lihdr(0,0,17),40,97,57,55,53,49,32,107,50,51,56,51,50,51,56,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li274[] C_aligned={C_lihdr(0,0,20),40,114,117,110,45,115,97,102,101,32,116,104,117,110,107,50,51,56,50,41,0,0,0,0};
static C_char C_TLS li275[] C_aligned={C_lihdr(0,0,31),40,115,116,111,114,101,45,114,101,115,117,108,116,32,120,50,51,57,55,32,114,101,115,117,108,116,50,51,57,56,41,0};
static C_char C_TLS li276[] C_aligned={C_lihdr(0,0,7),40,97,57,56,49,53,41,0};
static C_char C_TLS li277[] C_aligned={C_lihdr(0,0,15),40,67,72,73,67,75,69,78,95,121,105,101,108,100,41,0};
static C_char C_TLS li278[] C_aligned={C_lihdr(0,0,7),40,97,57,56,50,55,41,0};
static C_char C_TLS li279[] C_aligned={C_lihdr(0,0,33),40,67,72,73,67,75,69,78,95,101,118,97,108,32,101,120,112,50,52,48,56,32,114,101,115,117,108,116,50,52,48,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li280[] C_aligned={C_lihdr(0,0,7),40,97,57,56,52,54,41,0};
static C_char C_TLS li281[] C_aligned={C_lihdr(0,0,40),40,67,72,73,67,75,69,78,95,101,118,97,108,95,115,116,114,105,110,103,32,115,116,114,50,52,49,53,32,114,101,115,117,108,116,50,52,49,54,41};
static C_char C_TLS li282[] C_aligned={C_lihdr(0,0,34),40,115,116,111,114,101,45,115,116,114,105,110,103,32,98,117,102,115,105,122,101,50,52,50,50,32,98,117,102,50,52,50,51,41,0,0,0,0,0,0};
static C_char C_TLS li283[] C_aligned={C_lihdr(0,0,7),40,97,57,56,56,50,41,0};
static C_char C_TLS li284[] C_aligned={C_lihdr(0,0,52),40,67,72,73,67,75,69,78,95,101,118,97,108,95,116,111,95,115,116,114,105,110,103,32,101,120,112,50,52,51,50,32,98,117,102,50,52,51,51,32,98,117,102,115,105,122,101,50,52,51,52,41,0,0,0,0};
static C_char C_TLS li285[] C_aligned={C_lihdr(0,0,7),40,97,57,57,49,49,41,0};
static C_char C_TLS li286[] C_aligned={C_lihdr(0,0,59),40,67,72,73,67,75,69,78,95,101,118,97,108,95,115,116,114,105,110,103,95,116,111,95,115,116,114,105,110,103,32,115,116,114,50,52,52,51,32,98,117,102,50,52,52,52,32,98,117,102,115,105,122,101,50,52,52,53,41,0,0,0,0,0};
static C_char C_TLS li287[] C_aligned={C_lihdr(0,0,7),40,97,57,57,52,53,41,0};
static C_char C_TLS li288[] C_aligned={C_lihdr(0,0,44),40,67,72,73,67,75,69,78,95,97,112,112,108,121,32,102,117,110,99,50,52,53,52,32,97,114,103,115,50,52,53,53,32,114,101,115,117,108,116,50,52,53,54,41,0,0,0,0};
static C_char C_TLS li289[] C_aligned={C_lihdr(0,0,7),40,97,57,57,54,49,41,0};
static C_char C_TLS li290[] C_aligned={C_lihdr(0,0,63),40,67,72,73,67,75,69,78,95,97,112,112,108,121,95,116,111,95,115,116,114,105,110,103,32,102,117,110,99,50,52,54,51,32,97,114,103,115,50,52,54,52,32,98,117,102,50,52,54,53,32,98,117,102,115,105,122,101,50,52,54,54,41,0};
static C_char C_TLS li291[] C_aligned={C_lihdr(0,0,7),40,97,57,57,57,48,41,0};
static C_char C_TLS li292[] C_aligned={C_lihdr(0,0,33),40,67,72,73,67,75,69,78,95,114,101,97,100,32,115,116,114,50,52,55,54,32,114,101,115,117,108,116,50,52,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li293[] C_aligned={C_lihdr(0,0,8),40,97,49,48,48,49,50,41};
static C_char C_TLS li294[] C_aligned={C_lihdr(0,0,22),40,67,72,73,67,75,69,78,95,108,111,97,100,32,115,116,114,50,52,56,52,41,0,0};
static C_char C_TLS li295[] C_aligned={C_lihdr(0,0,47),40,67,72,73,67,75,69,78,95,103,101,116,95,101,114,114,111,114,95,109,101,115,115,97,103,101,32,98,117,102,50,52,57,48,32,98,117,102,115,105,122,101,50,52,57,49,41,0};
static C_char C_TLS li296[] C_aligned={C_lihdr(0,0,8),40,97,49,48,48,50,56,41};
static C_char C_TLS li297[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,49,48,57,32,103,50,49,49,53,50,49,49,57,41,0,0,0};
static C_char C_TLS li298[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,48,56,57,32,103,50,48,57,53,50,49,48,51,41,0,0,0};
static C_char C_TLS li299[] C_aligned={C_lihdr(0,0,14),40,97,49,48,49,50,48,32,120,49,53,51,57,41,0,0};
static C_char C_TLS li300[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,53,49,53,32,103,49,53,50,55,49,53,51,51,41};
static C_char C_TLS li301[] C_aligned={C_lihdr(0,0,8),40,97,49,48,50,52,49,41};
static C_char C_TLS li302[] C_aligned={C_lihdr(0,0,8),40,97,49,48,50,52,56,41};
static C_char C_TLS li303[] C_aligned={C_lihdr(0,0,8),40,97,49,48,50,53,56,41};
static C_char C_TLS li304[] C_aligned={C_lihdr(0,0,24),40,97,49,48,50,50,57,32,120,49,50,52,48,32,46,32,101,110,118,49,50,52,49,41};
static C_char C_TLS li305[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from f_9175 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static C_word C_fcall stub2194(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub2194(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_clear_trace_buffer();
return C_r;}

C_noret_decl(C_eval_toplevel)
C_externexport void C_ccall C_eval_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2627)
static void C_ccall f_2627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2630)
static void C_ccall f_2630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3000)
static void C_ccall f_3000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10230)
static void C_ccall f_10230(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_10230)
static void C_ccall f_10230r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_10234)
static void C_fcall f_10234(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10259)
static void C_ccall f_10259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10249)
static void C_ccall f_10249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10257)
static void C_ccall f_10257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10242)
static void C_ccall f_10242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10237)
static void C_ccall f_10237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6408)
static void C_ccall f_6408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6503)
static void C_ccall f_6503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6584)
static void C_ccall f_6584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10224)
static void C_ccall f_10224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10220)
static void C_ccall f_10220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10216)
static void C_ccall f_10216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10212)
static void C_ccall f_10212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7152)
static void C_fcall f_7152(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7157)
static void C_ccall f_7157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10184)
static void C_ccall f_10184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10163)
static void C_fcall f_10163(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10170)
static void C_ccall f_10170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7164)
static void C_ccall f_7164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10127)
static void C_fcall f_10127(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10156)
static void C_ccall f_10156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10119)
static void C_ccall f_10119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10121)
static void C_ccall f_10121(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7173)
static void C_ccall f_7173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10088)
static void C_ccall f_10088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10108)
static void C_ccall f_10108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10104)
static void C_ccall f_10104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10094)
static void C_ccall f_10094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7538)
static void C_ccall f_7538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8588)
static void C_ccall f_8588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8939)
static void C_ccall f_8939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10058)
static void C_fcall f_10058(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10068)
static void C_ccall f_10068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8945)
static void C_ccall f_8945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8949)
static void C_ccall f_8949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8952)
static void C_ccall f_8952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10035)
static void C_fcall f_10035(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10045)
static void C_ccall f_10045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8958)
static void C_ccall f_8958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8962)
static void C_ccall f_8962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10029)
static void C_ccall f_10029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9157)
static void C_ccall f_9157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9656)
static void C_ccall f_9656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10019)
static void C_ccall f_10019(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10004)
static void C_ccall f_10004(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10008)
static void C_ccall f_10008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10013)
static void C_ccall f_10013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10017)
static void C_ccall f_10017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9982)
static void C_ccall f_9982(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9986)
static void C_ccall f_9986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9991)
static void C_ccall f_9991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9995)
static void C_ccall f_9995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10002)
static void C_ccall f_10002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9956)
static void C_ccall f_9956(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9962)
static void C_ccall f_9962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9966)
static void C_ccall f_9966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9980)
static void C_ccall f_9980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9969)
static void C_ccall f_9969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9976)
static void C_ccall f_9976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9940)
static void C_ccall f_9940(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9946)
static void C_ccall f_9946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9954)
static void C_ccall f_9954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9903)
static void C_ccall f_9903(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9907)
static void C_ccall f_9907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9912)
static void C_ccall f_9912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9916)
static void C_ccall f_9916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9938)
static void C_ccall f_9938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9934)
static void C_ccall f_9934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9930)
static void C_ccall f_9930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9919)
static void C_ccall f_9919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9926)
static void C_ccall f_9926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9877)
static void C_ccall f_9877(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9883)
static void C_ccall f_9883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9887)
static void C_ccall f_9887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9901)
static void C_ccall f_9901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9890)
static void C_ccall f_9890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9897)
static void C_ccall f_9897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9864)
static C_word C_fcall f_9864(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_9838)
static void C_ccall f_9838(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9842)
static void C_ccall f_9842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9847)
static void C_ccall f_9847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9851)
static void C_ccall f_9851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9862)
static void C_ccall f_9862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9858)
static void C_ccall f_9858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9822)
static void C_ccall f_9822(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9828)
static void C_ccall f_9828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9836)
static void C_ccall f_9836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9810)
static void C_ccall f_9810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9816)
static void C_ccall f_9816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9820)
static void C_ccall f_9820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9801)
static void C_fcall f_9801(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9805)
static void C_ccall f_9805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9742)
static void C_fcall f_9742(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9752)
static void C_ccall f_9752(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9777)
static void C_ccall f_9777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9789)
static void C_ccall f_9789(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_9789)
static void C_ccall f_9789r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_9795)
static void C_ccall f_9795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9783)
static void C_ccall f_9783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9758)
static void C_ccall f_9758(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9764)
static void C_ccall f_9764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9768)
static void C_ccall f_9768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9771)
static void C_ccall f_9771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9775)
static void C_ccall f_9775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9747)
static void C_ccall f_9747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9667)
static void C_ccall f_9667(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9677)
static void C_ccall f_9677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9680)
static void C_ccall f_9680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9694)
static void C_fcall f_9694(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9712)
static void C_ccall f_9712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9681)
static void C_fcall f_9681(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9658)
static void C_ccall f_9658(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9178)
static void C_ccall f_9178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9304)
static void C_ccall f_9304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9307)
static void C_ccall f_9307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9641)
static void C_ccall f_9641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9645)
static void C_ccall f_9645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9649)
static void C_ccall f_9649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9418)
static void C_ccall f_9418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9424)
static void C_fcall f_9424(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9624)
static void C_ccall f_9624(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9630)
static void C_ccall f_9630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9431)
static void C_ccall f_9431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9434)
static void C_ccall f_9434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9440)
static void C_ccall f_9440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9622)
static void C_ccall f_9622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9449)
static void C_ccall f_9449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9452)
static void C_ccall f_9452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9467)
static void C_ccall f_9467(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_9467)
static void C_ccall f_9467r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f11264)
static void C_ccall f11264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9485)
static void C_fcall f_9485(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9576)
static void C_ccall f_9576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9501)
static void C_ccall f_9501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9546)
static void C_fcall f_9546(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9506)
static void C_ccall f_9506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9509)
static void C_ccall f_9509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9521)
static void C_ccall f_9521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9524)
static void C_ccall f_9524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9512)
static void C_ccall f_9512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9556)
static void C_ccall f_9556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9541)
static void C_ccall f_9541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9489)
static void C_ccall f_9489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9471)
static void C_ccall f_9471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9474)
static void C_ccall f_9474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9458)
static void C_ccall f_9458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9324)
static void C_ccall f_9324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9329)
static void C_ccall f_9329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9332)
static void C_ccall f_9332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9337)
static void C_ccall f_9337(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_9337)
static void C_ccall f_9337r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_9344)
static void C_ccall f_9344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9413)
static void C_ccall f_9413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9347)
static void C_ccall f_9347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9388)
static void C_fcall f_9388(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9397)
static void C_ccall f_9397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9391)
static void C_ccall f_9391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9350)
static void C_ccall f_9350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9381)
static void C_ccall f_9381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9354)
static void C_fcall f_9354(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9357)
static void C_ccall f_9357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9315)
static C_word C_fcall f_9315(C_word t0);
C_noret_decl(f_9309)
static C_word C_fcall f_9309(C_word t0);
C_noret_decl(f_9218)
static void C_fcall f_9218(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9272)
static void C_fcall f_9272(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9282)
static void C_ccall f_9282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9245)
static void C_ccall f_9245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9262)
static void C_ccall f_9262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9258)
static void C_ccall f_9258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9181)
static void C_fcall f_9181(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9195)
static void C_fcall f_9195(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9205)
static void C_ccall f_9205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9175)
static void C_ccall f_9175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9159)
static void C_ccall f_9159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9170)
static void C_ccall f_9170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9173)
static void C_ccall f_9173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9163)
static void C_ccall f_9163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9140)
static void C_ccall f_9140(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9149)
static void C_ccall f_9149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9144)
static void C_ccall f_9144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8987)
static void C_ccall f_8987(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_8987)
static void C_ccall f_8987r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_8991)
static void C_ccall f_8991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9058)
static void C_ccall f_9058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9105)
static void C_ccall f_9105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9115)
static void C_ccall f_9115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9068)
static void C_ccall f_9068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9070)
static void C_fcall f_9070(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9094)
static void C_ccall f_9094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9080)
static void C_ccall f_9080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9028)
static void C_fcall f_9028(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8993)
static void C_fcall f_8993(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9009)
static void C_ccall f_9009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9015)
static void C_ccall f_9015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9006)
static void C_ccall f_9006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8968)
static void C_fcall f_8968(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8972)
static void C_ccall f_8972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8923)
static void C_fcall f_8923(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8925)
static void C_ccall f_8925(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8929)
static void C_ccall f_8929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8885)
static void C_ccall f_8885(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8885)
static void C_ccall f_8885r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8892)
static void C_ccall f_8892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8899)
static void C_ccall f_8899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8841)
static void C_ccall f_8841(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8841)
static void C_ccall f_8841r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8874)
static void C_ccall f_8874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8861)
static void C_ccall f_8861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8838)
static void C_ccall f_8838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8719)
static void C_ccall f_8719(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8719)
static void C_ccall f_8719r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8813)
static void C_ccall f_8813(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8823)
static void C_ccall f_8823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8811)
static void C_ccall f_8811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8740)
static void C_fcall f_8740(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8764)
static void C_fcall f_8764(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8783)
static void C_ccall f_8783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8758)
static void C_ccall f_8758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8611)
static void C_ccall f_8611(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_8611)
static void C_ccall f_8611r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_8621)
static void C_ccall f_8621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8626)
static void C_fcall f_8626(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8653)
static void C_fcall f_8653(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8682)
static void C_fcall f_8682(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8686)
static void C_ccall f_8686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8647)
static void C_ccall f_8647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8595)
static void C_ccall f_8595(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8501)
static void C_ccall f_8501(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8505)
static void C_ccall f_8505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8513)
static void C_fcall f_8513(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8539)
static void C_fcall f_8539(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8545)
static void C_ccall f_8545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f12100)
static void C_ccall f12100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8548)
static void C_ccall f_8548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8555)
static void C_ccall f_8555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8529)
static void C_ccall f_8529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7938)
static void C_ccall f_7938(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8306)
static void C_fcall f_8306(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8396)
static void C_fcall f_8396(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8401)
static void C_fcall f_8401(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8408)
static void C_fcall f_8408(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8414)
static void C_fcall f_8414(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8421)
static void C_ccall f_8421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8354)
static void C_fcall f_8354(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8383)
static void C_ccall f_8383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8352)
static void C_ccall f_8352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8323)
static void C_fcall f_8323(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8327)
static void C_ccall f_8327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8338)
static void C_ccall f_8338(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8332)
static void C_ccall f_8332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8022)
static void C_fcall f_8022(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8032)
static void C_ccall f_8032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8146)
static void C_ccall f_8146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8276)
static void C_ccall f_8276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8283)
static void C_ccall f_8283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8161)
static void C_ccall f_8161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8180)
static void C_fcall f_8180(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8190)
static void C_ccall f_8190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8214)
static void C_fcall f_8214(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8212)
static void C_ccall f_8212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8176)
static void C_ccall f_8176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8168)
static void C_ccall f_8168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8079)
static void C_ccall f_8079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8100)
static void C_fcall f_8100(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8108)
static void C_ccall f_8108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8096)
static void C_ccall f_8096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8052)
static void C_ccall f_8052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8039)
static void C_ccall f_8039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7999)
static void C_fcall f_7999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8017)
static void C_ccall f_8017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8013)
static void C_ccall f_8013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7966)
static void C_fcall f_7966(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7981)
static void C_ccall f_7981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7941)
static void C_fcall f_7941(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7960)
static void C_ccall f_7960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7954)
static void C_ccall f_7954(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7889)
static void C_ccall f_7889(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7895)
static void C_fcall f_7895(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7909)
static void C_ccall f_7909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7912)
static void C_fcall f_7912(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7919)
static void C_ccall f_7919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7883)
static void C_ccall f_7883(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7850)
static void C_ccall f_7850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7854)
static void C_ccall f_7854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7860)
static void C_ccall f_7860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7863)
static void C_ccall f_7863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7881)
static void C_ccall f_7881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7866)
static void C_ccall f_7866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7870)
static void C_fcall f_7870(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7812)
static void C_ccall f_7812(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7812)
static void C_ccall f_7812r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7826)
static void C_fcall f_7826(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7836)
static void C_ccall f_7836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7798)
static void C_ccall f_7798(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7809)
static void C_ccall f_7809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7753)
static void C_ccall f_7753(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7753)
static void C_ccall f_7753r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7774)
static void C_fcall f_7774(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7762)
static void C_ccall f_7762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7669)
static void C_ccall f_7669(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_7669)
static void C_ccall f_7669r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_7673)
static void C_ccall f_7673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7729)
static void C_ccall f_7729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7676)
static void C_fcall f_7676(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7679)
static void C_ccall f_7679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7706)
static void C_ccall f_7706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7712)
static void C_ccall f_7712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7694)
static void C_ccall f_7694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7570)
static void C_ccall f_7570(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7574)
static void C_ccall f_7574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7622)
static void C_ccall f_7622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7624)
static void C_fcall f_7624(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7637)
static void C_ccall f_7637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7576)
static void C_fcall f_7576(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7580)
static void C_ccall f_7580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7615)
static void C_ccall f_7615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7586)
static void C_ccall f_7586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7596)
static void C_ccall f_7596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7589)
static void C_ccall f_7589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7539)
static void C_ccall f_7539(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7539)
static void C_ccall f_7539r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7543)
static void C_ccall f_7543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7378)
static void C_ccall f_7378(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7483)
static void C_fcall f_7483(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7500)
static void C_ccall f_7500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7508)
static void C_ccall f_7508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7400)
static void C_ccall f_7400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7405)
static void C_fcall f_7405(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7444)
static void C_ccall f_7444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7431)
static void C_ccall f_7431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7381)
static void C_fcall f_7381(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7311)
static void C_ccall f_7311(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7315)
static void C_ccall f_7315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7373)
static void C_ccall f_7373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7318)
static void C_ccall f_7318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7323)
static void C_ccall f_7323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7367)
static void C_ccall f_7367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7334)
static void C_ccall f_7334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7342)
static void C_ccall f_7342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7344)
static void C_fcall f_7344(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7361)
static void C_ccall f_7361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7329)
static void C_ccall f_7329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7281)
static void C_ccall f_7281(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7281)
static void C_ccall f_7281r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7288)
static void C_ccall f_7288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7298)
static void C_ccall f_7298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7175)
static void C_ccall f_7175(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7179)
static void C_ccall f_7179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7271)
static void C_ccall f_7271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7275)
static void C_ccall f_7275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7188)
static void C_fcall f_7188(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7257)
static void C_ccall f_7257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7253)
static void C_ccall f_7253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7191)
static void C_ccall f_7191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7240)
static void C_ccall f_7240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7243)
static void C_ccall f_7243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7246)
static void C_ccall f_7246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7194)
static void C_ccall f_7194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7199)
static void C_fcall f_7199(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7233)
static void C_ccall f_7233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7212)
static void C_ccall f_7212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7166)
static void C_fcall f_7166(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7126)
static void C_ccall f_7126(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7126)
static void C_ccall f_7126r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7147)
static void C_ccall f_7147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7130)
static void C_ccall f_7130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7144)
static void C_ccall f_7144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7133)
static void C_ccall f_7133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7141)
static void C_ccall f_7141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7136)
static void C_ccall f_7136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7083)
static void C_ccall f_7083(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7083)
static void C_ccall f_7083r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7091)
static void C_ccall f_7091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7095)
static void C_ccall f_7095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7054)
static void C_ccall f_7054(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7054)
static void C_ccall f_7054r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7062)
static void C_ccall f_7062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6632)
static void C_ccall f_6632(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_6632)
static void C_ccall f_6632r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_7025)
static void C_ccall f_7025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6654)
static void C_fcall f_6654(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6947)
static void C_ccall f_6947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6962)
static void C_ccall f_6962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6965)
static void C_fcall f_6965(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6968)
static void C_ccall f_6968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6974)
static void C_ccall f_6974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6977)
static void C_ccall f_6977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6983)
static void C_ccall f_6983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6657)
static void C_ccall f_6657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6938)
static void C_ccall f_6938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6926)
static void C_ccall f_6926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6929)
static void C_ccall f_6929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6932)
static void C_ccall f_6932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6663)
static void C_ccall f_6663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6911)
static void C_ccall f_6911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6883)
static void C_ccall f_6883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6907)
static void C_ccall f_6907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6903)
static void C_ccall f_6903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6899)
static void C_ccall f_6899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6666)
static void C_ccall f_6666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6674)
static void C_ccall f_6674(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6870)
static void C_ccall f_6870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6678)
static void C_ccall f_6678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6858)
static void C_ccall f_6858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6699)
static void C_ccall f_6699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6703)
static void C_ccall f_6703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6849)
static void C_ccall f_6849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6711)
static void C_ccall f_6711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6715)
static void C_ccall f_6715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6840)
static void C_ccall f_6840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6836)
static void C_ccall f_6836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6718)
static void C_ccall f_6718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6721)
static void C_ccall f_6721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6726)
static void C_fcall f_6726(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6736)
static void C_ccall f_6736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6782)
static void C_ccall f_6782(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6782)
static void C_ccall f_6782r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6802)
static void C_fcall f_6802(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6812)
static void C_ccall f_6812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6787)
static void C_fcall f_6787(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6791)
static void C_ccall f_6791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6748)
static void C_ccall f_6748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6755)
static void C_ccall f_6755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6766)
static void C_ccall f_6766(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6766)
static void C_ccall f_6766r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6777)
static void C_ccall f_6777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6770)
static void C_ccall f_6770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6760)
static void C_ccall f_6760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6739)
static void C_ccall f_6739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6746)
static void C_ccall f_6746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6708)
static void C_ccall f_6708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6688)
static void C_ccall f_6688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6679)
static void C_ccall f_6679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6669)
static void C_ccall f_6669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6586)
static void C_fcall f_6586(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6596)
static C_word C_fcall f_6596(C_word t0,C_word t1);
C_noret_decl(f_6511)
static void C_ccall f_6511(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6523)
static void C_fcall f_6523(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6536)
static void C_ccall f_6536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6518)
static void C_ccall f_6518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6505)
static void C_ccall f_6505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6421)
static void C_ccall f_6421(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6434)
static void C_fcall f_6434(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6467)
static void C_ccall f_6467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6448)
static void C_ccall f_6448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6424)
static void C_fcall f_6424(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6411)
static void C_ccall f_6411(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6411)
static void C_ccall f_6411r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6419)
static void C_ccall f_6419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3005)
static void C_ccall f_3005(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_3005)
static void C_ccall f_3005r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_3009)
static void C_ccall f_3009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6385)
static void C_ccall f_6385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6075)
static void C_fcall f_6075(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_6079)
static void C_ccall f_6079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6337)
static void C_fcall f_6337(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6366)
static void C_ccall f_6366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6276)
static void C_ccall f_6276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6277)
static void C_ccall f_6277(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6288)
static void C_ccall f_6288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6302)
static void C_fcall f_6302(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6331)
static void C_ccall f_6331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6300)
static void C_ccall f_6300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6290)
static void C_fcall f_6290(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6266)
static void C_fcall f_6266(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6225)
static void C_ccall f_6225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6228)
static void C_ccall f_6228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6231)
static void C_ccall f_6231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6234)
static void C_ccall f_6234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6235)
static void C_ccall f_6235(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6242)
static void C_ccall f_6242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6249)
static void C_ccall f_6249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6253)
static void C_ccall f_6253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6257)
static void C_ccall f_6257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6261)
static void C_ccall f_6261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6183)
static void C_ccall f_6183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6186)
static void C_ccall f_6186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6189)
static void C_ccall f_6189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6190)
static void C_ccall f_6190(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6197)
static void C_ccall f_6197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6204)
static void C_ccall f_6204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6208)
static void C_ccall f_6208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6212)
static void C_ccall f_6212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6148)
static void C_ccall f_6148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6151)
static void C_ccall f_6151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6152)
static void C_ccall f_6152(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6159)
static void C_ccall f_6159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6166)
static void C_ccall f_6166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6170)
static void C_ccall f_6170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6120)
static void C_ccall f_6120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6121)
static void C_ccall f_6121(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6128)
static void C_ccall f_6128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6135)
static void C_ccall f_6135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6101)
static void C_ccall f_6101(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6108)
static void C_ccall f_6108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6049)
static C_word C_fcall f_6049(C_word t0,C_word t1);
C_noret_decl(f_3242)
static void C_fcall f_3242(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_3249)
static void C_ccall f_3249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3451)
static void C_ccall f_3451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3507)
static void C_fcall f_3507(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3527)
static void C_fcall f_3527(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3530)
static void C_ccall f_3530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3545)
static void C_ccall f_3545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5848)
static void C_fcall f_5848(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5883)
static void C_ccall f_5883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5877)
static void C_ccall f_5877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5872)
static void C_ccall f_5872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5835)
static void C_ccall f_5835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5791)
static void C_fcall f_5791(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5801)
static void C_ccall f_5801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5776)
static void C_fcall f_5776(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5769)
static void C_ccall f_5769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5728)
static void C_ccall f_5728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5676)
static void C_ccall f_5676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5678)
static void C_fcall f_5678(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5700)
static void C_ccall f_5700(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5708)
static void C_ccall f_5708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5690)
static void C_ccall f_5690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5672)
static void C_ccall f_5672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5623)
static void C_fcall f_5623(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5652)
static void C_ccall f_5652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5555)
static void C_ccall f_5555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5558)
static void C_ccall f_5558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5561)
static void C_ccall f_5561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5588)
static void C_fcall f_5588(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5586)
static void C_ccall f_5586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5542)
static void C_fcall f_5542(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5531)
static void C_ccall f_5531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5269)
static void C_ccall f_5269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5272)
static void C_ccall f_5272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5461)
static void C_ccall f_5461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5469)
static void C_fcall f_5469(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5498)
static void C_ccall f_5498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5410)
static void C_fcall f_5410(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5434)
static C_word C_fcall f_5434(C_word t0);
C_noret_decl(f_5423)
static void C_fcall f_5423(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5278)
static void C_ccall f_5278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5406)
static void C_ccall f_5406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5281)
static void C_ccall f_5281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5284)
static void C_ccall f_5284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5312)
static void C_ccall f_5312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5322)
static void C_fcall f_5322(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5403)
static void C_ccall f_5403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5395)
static void C_ccall f_5395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5332)
static void C_ccall f_5332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5335)
static void C_ccall f_5335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5336)
static void C_ccall f_5336(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5342)
static void C_fcall f_5342(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5367)
static void C_ccall f_5367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5285)
static void C_ccall f_5285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5289)
static void C_ccall f_5289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5292)
static void C_ccall f_5292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5296)
static void C_ccall f_5296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5299)
static void C_ccall f_5299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5303)
static void C_ccall f_5303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5306)
static void C_ccall f_5306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5235)
static void C_ccall f_5235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5188)
static void C_ccall f_5188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5213)
static void C_ccall f_5213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5191)
static void C_ccall f_5191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5201)
static void C_ccall f_5201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5209)
static void C_ccall f_5209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5205)
static void C_ccall f_5205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5194)
static void C_ccall f_5194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5140)
static void C_fcall f_5140(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5169)
static void C_ccall f_5169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5086)
static void C_ccall f_5086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5089)
static void C_ccall f_5089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5111)
static void C_ccall f_5111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5117)
static C_word C_fcall f_5117(C_word t0,C_word t1);
C_noret_decl(f_5090)
static C_word C_fcall f_5090(C_word t0,C_word t1);
C_noret_decl(f_5057)
static void C_fcall f_5057(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5073)
static void C_ccall f_5073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5069)
static void C_ccall f_5069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5017)
static void C_fcall f_5017(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5046)
static void C_ccall f_5046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5015)
static void C_ccall f_5015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4986)
static void C_fcall f_4986(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5002)
static void C_ccall f_5002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4998)
static void C_ccall f_4998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4973)
static void C_ccall f_4973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4980)
static void C_ccall f_4980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4575)
static void C_ccall f_4575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4946)
static void C_ccall f_4946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4957)
static void C_ccall f_4957(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4587)
static void C_ccall f_4587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4592)
static void C_ccall f_4592(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4910)
static void C_fcall f_4910(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4939)
static void C_ccall f_4939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4599)
static void C_ccall f_4599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4602)
static void C_ccall f_4602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4904)
static void C_ccall f_4904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4608)
static void C_ccall f_4608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4866)
static void C_ccall f_4866(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4872)
static void C_ccall f_4872(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4872)
static void C_ccall f_4872r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4896)
static void C_ccall f_4896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4849)
static void C_ccall f_4849(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4849)
static void C_ccall f_4849r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6003)
static void C_fcall f_6003(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6032)
static void C_ccall f_6032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4865)
static void C_ccall f_4865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4861)
static void C_ccall f_4861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4821)
static void C_ccall f_4821(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4827)
static void C_ccall f_4827(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4839)
static void C_ccall f_4839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4802)
static void C_ccall f_4802(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4808)
static void C_ccall f_4808(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_4808)
static void C_ccall f_4808r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_4774)
static void C_ccall f_4774(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4780)
static void C_ccall f_4780(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4755)
static void C_ccall f_4755(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4761)
static void C_ccall f_4761(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_4761)
static void C_ccall f_4761r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_4727)
static void C_ccall f_4727(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4733)
static void C_ccall f_4733(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4708)
static void C_ccall f_4708(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4714)
static void C_ccall f_4714(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4714)
static void C_ccall f_4714r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4680)
static void C_ccall f_4680(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4686)
static void C_ccall f_4686(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4661)
static void C_ccall f_4661(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4637)
static void C_ccall f_4637(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4643)
static void C_ccall f_4643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4618)
static void C_ccall f_4618(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4624)
static void C_ccall f_4624(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4624)
static void C_ccall f_4624r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4533)
static void C_fcall f_4533(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4460)
static void C_ccall f_4460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4498)
static void C_fcall f_4498(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4464)
static void C_ccall f_4464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4388)
static void C_fcall f_4388(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3997)
static void C_ccall f_3997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4353)
static void C_fcall f_4353(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4382)
static void C_ccall f_4382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4003)
static void C_ccall f_4003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4009)
static void C_ccall f_4009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4347)
static void C_ccall f_4347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4310)
static void C_fcall f_4310(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4263)
static void C_ccall f_4263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4280)
static void C_fcall f_4280(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4271)
static void C_ccall f_4271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4245)
static void C_fcall f_4245(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4240)
static void C_ccall f_4240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4171)
static void C_ccall f_4171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4232)
static void C_ccall f_4232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4174)
static void C_ccall f_4174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4180)
static void C_ccall f_4180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4216)
static void C_ccall f_4216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4183)
static void C_ccall f_4183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4184)
static void C_ccall f_4184(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4200)
static void C_ccall f_4200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4204)
static void C_ccall f_4204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4208)
static void C_ccall f_4208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4158)
static void C_ccall f_4158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4104)
static void C_ccall f_4104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4150)
static void C_ccall f_4150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4107)
static void C_ccall f_4107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4142)
static void C_ccall f_4142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4113)
static void C_ccall f_4113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4130)
static void C_ccall f_4130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4134)
static void C_ccall f_4134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4091)
static void C_ccall f_4091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4055)
static void C_ccall f_4055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4083)
static void C_ccall f_4083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4058)
static void C_ccall f_4058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4059)
static void C_ccall f_4059(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4075)
static void C_ccall f_4075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4079)
static void C_ccall f_4079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4042)
static void C_ccall f_4042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4021)
static void C_ccall f_4021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4038)
static void C_ccall f_4038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3862)
static void C_ccall f_3862(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3875)
static void C_ccall f_3875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3878)
static void C_ccall f_3878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3919)
static void C_ccall f_3919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3884)
static void C_ccall f_3884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3903)
static void C_ccall f_3903(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3894)
static void C_ccall f_3894(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3902)
static void C_ccall f_3902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3962)
static void C_ccall f_3962(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3970)
static void C_ccall f_3970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3961)
static void C_ccall f_3961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3856)
static void C_ccall f_3856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3805)
static void C_ccall f_3805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3808)
static void C_ccall f_3808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3811)
static void C_ccall f_3811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3812)
static void C_ccall f_3812(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3783)
static void C_ccall f_3783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3786)
static void C_ccall f_3786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3787)
static void C_ccall f_3787(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3791)
static void C_ccall f_3791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3692)
static void C_ccall f_3692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3695)
static void C_ccall f_3695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3698)
static void C_ccall f_3698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3699)
static void C_ccall f_3699(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3706)
static void C_ccall f_3706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3682)
static void C_ccall f_3682(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3642)
static void C_ccall f_3642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3643)
static void C_ccall f_3643(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3626)
static void C_ccall f_3626(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3611)
static void C_ccall f_3611(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3609)
static void C_ccall f_3609(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3601)
static void C_ccall f_3601(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3593)
static void C_ccall f_3593(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3577)
static void C_ccall f_3577(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3569)
static void C_ccall f_3569(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3561)
static void C_ccall f_3561(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3508)
static void C_ccall f_3508(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3497)
static void C_ccall f_3497(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3484)
static void C_ccall f_3484(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3482)
static void C_ccall f_3482(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3466)
static void C_ccall f_3466(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3268)
static void C_ccall f_3268(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3349)
static void C_ccall f_3349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3278)
static void C_ccall f_3278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3325)
static void C_fcall f_3325(C_word t0,C_word t1) C_noret;
C_noret_decl(f10929)
static void C_ccall f10929(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f10924)
static void C_ccall f10924(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3316)
static void C_ccall f_3316(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3284)
static void C_ccall f_3284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3287)
static void C_ccall f_3287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3296)
static void C_ccall f_3296(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3441)
static void C_ccall f_3441(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3397)
static void C_ccall f_3397(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3250)
static void C_ccall f_3250(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3176)
static void C_fcall f_3176(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3180)
static void C_ccall f_3180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3186)
static void C_ccall f_3186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3217)
static void C_ccall f_3217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3227)
static void C_ccall f_3227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3220)
static void C_ccall f_3220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3200)
static void C_ccall f_3200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3211)
static void C_ccall f_3211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3204)
static void C_ccall f_3204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3191)
static void C_ccall f_3191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3154)
static C_word C_fcall f_3154(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4);
C_noret_decl(f_3065)
static void C_fcall f_3065(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3069)
static void C_ccall f_3069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3077)
static void C_fcall f_3077(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3094)
static void C_fcall f_3094(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3124)
static C_word C_fcall f_3124(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3050)
static void C_fcall f_3050(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3011)
static void C_fcall f_3011(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3024)
static void C_fcall f_3024(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2976)
static void C_ccall f_2976(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2988)
static void C_ccall f_2988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2991)
static void C_ccall f_2991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2963)
static void C_ccall f_2963(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_fcall f_2909(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2833)
static void C_fcall f_2833(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2871)
static void C_fcall f_2871(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2862)
static void C_ccall f_2862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2841)
static void C_fcall f_2841(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2815)
static void C_ccall f_2815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2751)
static void C_ccall f_2751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2759)
static void C_fcall f_2759(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2692)
static void C_ccall f_2692(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2702)
static C_word C_fcall f_2702(C_word t0,C_word t1);
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2665)
static void C_ccall f_2665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2669)
static void C_ccall f_2669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2631)
static void C_ccall f_2631(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2631)
static void C_ccall f_2631r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word t0,C_word t1) C_noret;

/* from CHICKEN_get_error_message */
 void  CHICKEN_get_error_message(char *t0,int t1){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t0);
C_save(x);
x=C_fix((C_word)t1);
C_save(x);C_callback_wrapper((void *)f_10019,2);}

/* from CHICKEN_load */
 int  CHICKEN_load(char * t0){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0))),*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_10004,1));}

/* from CHICKEN_read */
 int  CHICKEN_read(char * t0,C_word *t1){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer(&a,(void*)t0);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9982,2));}

/* from CHICKEN_apply_to_string */
 int  CHICKEN_apply_to_string(C_word t0,C_word t1,char *t2,int t3){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=((C_word)t0);
C_save(x);
x=((C_word)t1);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t2);
C_save(x);
x=C_fix((C_word)t3);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9956,4));}

/* from CHICKEN_apply */
 int  CHICKEN_apply(C_word t0,C_word t1,C_word *t2){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=((C_word)t0);
C_save(x);
x=((C_word)t1);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t2);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9940,3));}

/* from CHICKEN_eval_string_to_string */
 int  CHICKEN_eval_string_to_string(char * t0,char *t1,int t2){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer(&a,(void*)t0);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=C_fix((C_word)t2);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9903,3));}

/* from CHICKEN_eval_to_string */
 int  CHICKEN_eval_to_string(C_word t0,char *t1,int t2){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=((C_word)t0);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=C_fix((C_word)t2);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9877,3));}

/* from CHICKEN_eval_string */
 int  CHICKEN_eval_string(char * t0,C_word *t1){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer(&a,(void*)t0);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9838,2));}

/* from CHICKEN_eval */
 int  CHICKEN_eval(C_word t0,C_word *t1){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=((C_word)t0);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9822,2));}

/* from CHICKEN_yield */
 int  CHICKEN_yield(){
C_word x,s=0,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
return C_truep(C_callback_wrapper((void *)f_9810,0));}

C_noret_decl(trf_10234)
static void C_fcall trf_10234(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10234(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10234(t0,t1);}

C_noret_decl(trf_7152)
static void C_fcall trf_7152(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7152(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7152(t0,t1);}

C_noret_decl(trf_10163)
static void C_fcall trf_10163(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10163(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10163(t0,t1);}

C_noret_decl(trf_10127)
static void C_fcall trf_10127(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10127(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10127(t0,t1,t2);}

C_noret_decl(trf_10058)
static void C_fcall trf_10058(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10058(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10058(t0,t1,t2);}

C_noret_decl(trf_10035)
static void C_fcall trf_10035(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10035(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10035(t0,t1,t2);}

C_noret_decl(trf_9801)
static void C_fcall trf_9801(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9801(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9801(t0,t1,t2);}

C_noret_decl(trf_9742)
static void C_fcall trf_9742(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9742(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9742(t0,t1);}

C_noret_decl(trf_9694)
static void C_fcall trf_9694(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9694(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9694(t0,t1);}

C_noret_decl(trf_9681)
static void C_fcall trf_9681(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9681(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9681(t0,t1);}

C_noret_decl(trf_9424)
static void C_fcall trf_9424(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9424(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9424(t0,t1);}

C_noret_decl(trf_9485)
static void C_fcall trf_9485(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9485(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9485(t0,t1,t2,t3);}

C_noret_decl(trf_9546)
static void C_fcall trf_9546(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9546(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9546(t0,t1,t2);}

C_noret_decl(trf_9388)
static void C_fcall trf_9388(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9388(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9388(t0,t1);}

C_noret_decl(trf_9354)
static void C_fcall trf_9354(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9354(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9354(t0,t1);}

C_noret_decl(trf_9218)
static void C_fcall trf_9218(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9218(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9218(t0,t1,t2);}

C_noret_decl(trf_9272)
static void C_fcall trf_9272(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9272(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9272(t0,t1,t2);}

C_noret_decl(trf_9181)
static void C_fcall trf_9181(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9181(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9181(t0,t1);}

C_noret_decl(trf_9195)
static void C_fcall trf_9195(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9195(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9195(t0,t1,t2);}

C_noret_decl(trf_9070)
static void C_fcall trf_9070(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9070(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9070(t0,t1,t2);}

C_noret_decl(trf_9028)
static void C_fcall trf_9028(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9028(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9028(t0,t1,t2);}

C_noret_decl(trf_8993)
static void C_fcall trf_8993(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8993(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8993(t0,t1,t2,t3);}

C_noret_decl(trf_8968)
static void C_fcall trf_8968(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8968(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8968(t0,t1);}

C_noret_decl(trf_8923)
static void C_fcall trf_8923(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8923(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8923(t0,t1);}

C_noret_decl(trf_8740)
static void C_fcall trf_8740(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8740(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8740(t0,t1,t2,t3);}

C_noret_decl(trf_8764)
static void C_fcall trf_8764(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8764(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8764(t0,t1,t2,t3);}

C_noret_decl(trf_8626)
static void C_fcall trf_8626(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8626(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8626(t0,t1,t2);}

C_noret_decl(trf_8653)
static void C_fcall trf_8653(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8653(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8653(t0,t1,t2);}

C_noret_decl(trf_8682)
static void C_fcall trf_8682(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8682(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8682(t0,t1);}

C_noret_decl(trf_8513)
static void C_fcall trf_8513(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8513(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8513(t0,t1,t2);}

C_noret_decl(trf_8539)
static void C_fcall trf_8539(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8539(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8539(t0,t1);}

C_noret_decl(trf_8306)
static void C_fcall trf_8306(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8306(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8306(t0,t1);}

C_noret_decl(trf_8396)
static void C_fcall trf_8396(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8396(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8396(t0,t1);}

C_noret_decl(trf_8401)
static void C_fcall trf_8401(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8401(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8401(t0,t1,t2);}

C_noret_decl(trf_8408)
static void C_fcall trf_8408(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8408(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8408(t0,t1);}

C_noret_decl(trf_8414)
static void C_fcall trf_8414(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8414(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8414(t0,t1);}

C_noret_decl(trf_8354)
static void C_fcall trf_8354(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8354(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8354(t0,t1,t2);}

C_noret_decl(trf_8323)
static void C_fcall trf_8323(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8323(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8323(t0,t1,t2);}

C_noret_decl(trf_8022)
static void C_fcall trf_8022(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8022(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8022(t0,t1,t2,t3);}

C_noret_decl(trf_8180)
static void C_fcall trf_8180(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8180(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8180(t0,t1);}

C_noret_decl(trf_8214)
static void C_fcall trf_8214(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8214(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8214(t0,t1,t2);}

C_noret_decl(trf_8100)
static void C_fcall trf_8100(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8100(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8100(t0,t1);}

C_noret_decl(trf_7999)
static void C_fcall trf_7999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7999(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7999(t0,t1);}

C_noret_decl(trf_7966)
static void C_fcall trf_7966(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7966(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7966(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7941)
static void C_fcall trf_7941(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7941(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7941(t0,t1,t2,t3);}

C_noret_decl(trf_7895)
static void C_fcall trf_7895(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7895(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7895(t0,t1,t2);}

C_noret_decl(trf_7912)
static void C_fcall trf_7912(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7912(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7912(t0,t1);}

C_noret_decl(trf_7870)
static void C_fcall trf_7870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7870(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7870(t0,t1,t2);}

C_noret_decl(trf_7826)
static void C_fcall trf_7826(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7826(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7826(t0,t1,t2);}

C_noret_decl(trf_7774)
static void C_fcall trf_7774(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7774(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7774(t0,t1,t2);}

C_noret_decl(trf_7676)
static void C_fcall trf_7676(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7676(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7676(t0,t1);}

C_noret_decl(trf_7624)
static void C_fcall trf_7624(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7624(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7624(t0,t1,t2);}

C_noret_decl(trf_7576)
static void C_fcall trf_7576(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7576(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7576(t0,t1,t2);}

C_noret_decl(trf_7483)
static void C_fcall trf_7483(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7483(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7483(t0,t1,t2);}

C_noret_decl(trf_7405)
static void C_fcall trf_7405(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7405(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7405(t0,t1,t2);}

C_noret_decl(trf_7381)
static void C_fcall trf_7381(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7381(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7381(t0,t1);}

C_noret_decl(trf_7344)
static void C_fcall trf_7344(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7344(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7344(t0,t1,t2,t3);}

C_noret_decl(trf_7188)
static void C_fcall trf_7188(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7188(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7188(t0,t1);}

C_noret_decl(trf_7199)
static void C_fcall trf_7199(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7199(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7199(t0,t1,t2);}

C_noret_decl(trf_7166)
static void C_fcall trf_7166(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7166(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7166(t0,t1,t2);}

C_noret_decl(trf_6654)
static void C_fcall trf_6654(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6654(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6654(t0,t1);}

C_noret_decl(trf_6965)
static void C_fcall trf_6965(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6965(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6965(t0,t1);}

C_noret_decl(trf_6726)
static void C_fcall trf_6726(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6726(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6726(t0,t1,t2);}

C_noret_decl(trf_6802)
static void C_fcall trf_6802(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6802(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6802(t0,t1,t2);}

C_noret_decl(trf_6787)
static void C_fcall trf_6787(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6787(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6787(t0,t1,t2);}

C_noret_decl(trf_6586)
static void C_fcall trf_6586(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6586(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6586(t0,t1);}

C_noret_decl(trf_6523)
static void C_fcall trf_6523(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6523(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6523(t0,t1,t2);}

C_noret_decl(trf_6434)
static void C_fcall trf_6434(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6434(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6434(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6424)
static void C_fcall trf_6424(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6424(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6424(t0,t1);}

C_noret_decl(trf_6075)
static void C_fcall trf_6075(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6075(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_6075(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_6337)
static void C_fcall trf_6337(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6337(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6337(t0,t1,t2);}

C_noret_decl(trf_6302)
static void C_fcall trf_6302(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6302(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6302(t0,t1,t2);}

C_noret_decl(trf_6290)
static void C_fcall trf_6290(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6290(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6290(t0,t1,t2);}

C_noret_decl(trf_6266)
static void C_fcall trf_6266(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6266(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6266(t0,t1,t2);}

C_noret_decl(trf_3242)
static void C_fcall trf_3242(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3242(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_3242(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_3507)
static void C_fcall trf_3507(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3507(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3507(t0,t1);}

C_noret_decl(trf_3527)
static void C_fcall trf_3527(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3527(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3527(t0,t1);}

C_noret_decl(trf_5848)
static void C_fcall trf_5848(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5848(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5848(t0,t1);}

C_noret_decl(trf_5791)
static void C_fcall trf_5791(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5791(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5791(t0,t1,t2);}

C_noret_decl(trf_5776)
static void C_fcall trf_5776(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5776(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5776(t0,t1,t2);}

C_noret_decl(trf_5678)
static void C_fcall trf_5678(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5678(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5678(t0,t1,t2);}

C_noret_decl(trf_5623)
static void C_fcall trf_5623(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5623(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5623(t0,t1,t2);}

C_noret_decl(trf_5588)
static void C_fcall trf_5588(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5588(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5588(t0,t1,t2);}

C_noret_decl(trf_5542)
static void C_fcall trf_5542(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5542(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5542(t0,t1,t2);}

C_noret_decl(trf_5469)
static void C_fcall trf_5469(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5469(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5469(t0,t1,t2);}

C_noret_decl(trf_5410)
static void C_fcall trf_5410(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5410(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5410(t0,t1,t2);}

C_noret_decl(trf_5423)
static void C_fcall trf_5423(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5423(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5423(t0,t1);}

C_noret_decl(trf_5322)
static void C_fcall trf_5322(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5322(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5322(t0,t1,t2,t3);}

C_noret_decl(trf_5342)
static void C_fcall trf_5342(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5342(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5342(t0,t1,t2);}

C_noret_decl(trf_5140)
static void C_fcall trf_5140(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5140(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5140(t0,t1,t2);}

C_noret_decl(trf_5057)
static void C_fcall trf_5057(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5057(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5057(t0,t1,t2);}

C_noret_decl(trf_5017)
static void C_fcall trf_5017(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5017(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5017(t0,t1,t2);}

C_noret_decl(trf_4986)
static void C_fcall trf_4986(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4986(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4986(t0,t1,t2);}

C_noret_decl(trf_4910)
static void C_fcall trf_4910(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4910(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4910(t0,t1,t2);}

C_noret_decl(trf_6003)
static void C_fcall trf_6003(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6003(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_6003(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4533)
static void C_fcall trf_4533(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4533(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4533(t0,t1,t2);}

C_noret_decl(trf_4498)
static void C_fcall trf_4498(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4498(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4498(t0,t1,t2);}

C_noret_decl(trf_4388)
static void C_fcall trf_4388(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4388(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4388(t0,t1,t2);}

C_noret_decl(trf_4353)
static void C_fcall trf_4353(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4353(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4353(t0,t1,t2);}

C_noret_decl(trf_4310)
static void C_fcall trf_4310(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4310(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4310(t0,t1,t2);}

C_noret_decl(trf_4280)
static void C_fcall trf_4280(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4280(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4280(t0,t1,t2,t3);}

C_noret_decl(trf_4245)
static void C_fcall trf_4245(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4245(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4245(t0,t1,t2);}

C_noret_decl(trf_3325)
static void C_fcall trf_3325(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3325(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3325(t0,t1);}

C_noret_decl(trf_3176)
static void C_fcall trf_3176(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3176(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3176(t0,t1);}

C_noret_decl(trf_3065)
static void C_fcall trf_3065(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3065(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3065(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3077)
static void C_fcall trf_3077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3077(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3077(t0,t1,t2,t3);}

C_noret_decl(trf_3094)
static void C_fcall trf_3094(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3094(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3094(t0,t1,t2);}

C_noret_decl(trf_3050)
static void C_fcall trf_3050(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3050(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3050(t0,t1,t2,t3);}

C_noret_decl(trf_3011)
static void C_fcall trf_3011(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3011(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3011(t0,t1,t2,t3);}

C_noret_decl(trf_3024)
static void C_fcall trf_3024(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3024(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3024(t0,t1);}

C_noret_decl(trf_2909)
static void C_fcall trf_2909(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2909(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2909(t0,t1,t2);}

C_noret_decl(trf_2833)
static void C_fcall trf_2833(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2833(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2833(t0,t1,t2);}

C_noret_decl(trf_2871)
static void C_fcall trf_2871(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2871(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2871(t0,t1,t2);}

C_noret_decl(trf_2841)
static void C_fcall trf_2841(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2841(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2841(t0,t1,t2);}

C_noret_decl(trf_2759)
static void C_fcall trf_2759(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2759(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2759(t0,t1,t2);}

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
C_eval_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_eval_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("eval_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(6082)){
C_save(t1);
C_rereclaim2(6082*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,401);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],24,"\003syscore-library-modules");
lf[3]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006extras\376\003\000\000\002\376\001\000\000\007lolevel\376\003\000\000\002\376\001\000\000\005utils\376\003\000\000\002\376\001\000\000\005files\376\003\000\000\002\376\001\000\000\003tcp\376\003\000\000"
"\002\376\001\000\000\007irregex\376\003\000\000\002\376\001\000\000\005posix\376\003\000\000\002\376\001\000\000\006srfi-1\376\003\000\000\002\376\001\000\000\006srfi-4\376\003\000\000\002\376\001\000\000\007srfi-13\376\003\000"
"\000\002\376\001\000\000\007srfi-14\376\003\000\000\002\376\001\000\000\007srfi-18\376\003\000\000\002\376\001\000\000\007srfi-69\376\003\000\000\002\376\001\000\000\017data-structures\376\003\000\000\002\376\001"
"\000\000\005ports\376\003\000\000\002\376\001\000\000\016chicken-syntax\376\003\000\000\002\376\001\000\000\022chicken-ffi-syntax\376\377\016");
lf[4]=C_h_intern(&lf[4],28,"\003sysexplicit-library-modules");
lf[6]=C_decode_literal(C_heaptop,"\376B\000\000\003.so");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000\004.scm");
lf[9]=C_h_intern(&lf[9],18,"\003syschicken-prefix");
lf[10]=C_h_intern(&lf[10],17,"\003sysstring-append");
lf[11]=C_h_intern(&lf[11],9,"\003syserror");
lf[12]=C_h_intern(&lf[12],12,"chicken-home");
lf[13]=C_h_intern(&lf[13],17,"\003syspeek-c-string");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\015share/chicken");
lf[15]=C_h_intern(&lf[15],15,"\003syshash-symbol");
lf[16]=C_h_intern(&lf[16],18,"\003syshash-table-ref");
lf[17]=C_h_intern(&lf[17],19,"\003syshash-table-set!");
lf[18]=C_h_intern(&lf[18],22,"\003syshash-table-update!");
lf[19]=C_h_intern(&lf[19],23,"\003syshash-table-for-each");
lf[20]=C_h_intern(&lf[20],8,"for-each");
lf[21]=C_h_intern(&lf[21],28,"\003sysarbitrary-unbound-symbol");
lf[22]=C_h_intern(&lf[22],23,"\003syshash-table-location");
lf[23]=C_h_intern(&lf[23],20,"\003syseval-environment");
lf[24]=C_h_intern(&lf[24],26,"\003sysenvironment-is-mutable");
lf[25]=C_h_intern(&lf[25],18,"\003syseval-decorator");
lf[26]=C_h_intern(&lf[26],20,"\003sysmake-lambda-info");
lf[27]=C_h_intern(&lf[27],17,"get-output-string");
lf[28]=C_h_intern(&lf[28],5,"write");
lf[29]=C_h_intern(&lf[29],18,"open-output-string");
lf[30]=C_h_intern(&lf[30],19,"\003sysdecorate-lambda");
lf[31]=C_h_intern(&lf[31],19,"\003sysunbound-in-eval");
lf[32]=C_h_intern(&lf[32],15,"\003sysunsafe-eval");
lf[33]=C_h_intern(&lf[33],20,"\003syseval-debug-level");
lf[34]=C_h_intern(&lf[34],7,"reverse");
lf[35]=C_h_intern(&lf[35],22,"\003syscompile-to-closure");
lf[36]=C_h_intern(&lf[36],7,"\003sysget");
lf[37]=C_h_intern(&lf[37],16,"\004coremacro-alias");
lf[38]=C_h_intern(&lf[38],9,"frameinfo");
lf[39]=C_h_intern(&lf[39],18,"\003syscurrent-thread");
lf[40]=C_h_intern(&lf[40],21,"\003sysmacro-environment");
lf[41]=C_h_intern(&lf[41],18,"\003syscurrent-module");
lf[42]=C_h_intern(&lf[42],28,"\003syscurrent-meta-environment");
lf[43]=C_h_intern(&lf[43],26,"\003sysmeta-macro-environment");
lf[44]=C_h_intern(&lf[44],12,"dynamic-wind");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\020unbound variable");
lf[46]=C_h_intern(&lf[46],21,"\003syssyntax-error-hook");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000!reference to undefined identifier");
lf[48]=C_h_intern(&lf[48],32,"\003syssymbol-has-toplevel-binding\077");
lf[49]=C_h_intern(&lf[49],14,"\004coreprimitive");
lf[50]=C_h_intern(&lf[50],21,"\003sysalias-global-hook");
lf[51]=C_h_intern(&lf[51],10,"\004corequote");
lf[52]=C_h_intern(&lf[52],16,"\003sysstrip-syntax");
lf[53]=C_h_intern(&lf[53],11,"\004coresyntax");
lf[54]=C_h_intern(&lf[54],15,"\004coreglobal-ref");
lf[55]=C_h_intern(&lf[55],10,"\004corecheck");
lf[56]=C_h_intern(&lf[56],14,"\004coreimmutable");
lf[57]=C_h_intern(&lf[57],14,"\004coreundefined");
lf[58]=C_h_intern(&lf[58],7,"\004coreif");
lf[59]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[60]=C_h_intern(&lf[60],10,"\004corebegin");
lf[61]=C_h_intern(&lf[61],19,"\004coretoplevel-begin");
lf[62]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[63]=C_h_intern(&lf[63],9,"\004coreset!");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000 assignment to immutable variable");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\042assignment to undefined identifier");
lf[66]=C_h_intern(&lf[66],19,"\003sysnotices-enabled");
lf[67]=C_h_intern(&lf[67],10,"\003sysnotice");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000$assignment to imported value binding");
lf[69]=C_h_intern(&lf[69],23,"\003syscurrent-environment");
lf[70]=C_h_intern(&lf[70],8,"\004corelet");
lf[71]=C_h_intern(&lf[71],3,"map");
lf[72]=C_h_intern(&lf[72],6,"gensym");
lf[73]=C_h_intern(&lf[73],5,"cadar");
lf[74]=C_h_intern(&lf[74],6,"cadadr");
lf[75]=C_h_intern(&lf[75],15,"\003sysmake-vector");
lf[76]=C_h_intern(&lf[76],21,"\003syscanonicalize-body");
lf[77]=C_h_intern(&lf[77],13,"\003sysextend-se");
lf[78]=C_h_intern(&lf[78],11,"\004coreletrec");
lf[79]=C_h_intern(&lf[79],10,"\003sysappend");
lf[80]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[81]=C_h_intern(&lf[81],11,"\004corelambda");
lf[82]=C_h_intern(&lf[82],1,"\077");
lf[83]=C_h_intern(&lf[83],10,"\003sysvector");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\022bad argument count");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\022bad argument count");
lf[86]=C_h_intern(&lf[86],25,"\003sysdecompose-lambda-list");
lf[87]=C_h_intern(&lf[87],31,"\003sysexpand-extended-lambda-list");
lf[88]=C_h_intern(&lf[88],25,"\003sysextended-lambda-list\077");
lf[89]=C_h_intern(&lf[89],16,"\003syscheck-syntax");
lf[90]=C_h_intern(&lf[90],6,"lambda");
lf[91]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[92]=C_h_intern(&lf[92],15,"\004corelet-syntax");
lf[93]=C_h_intern(&lf[93],18,"\003syser-transformer");
lf[94]=C_h_intern(&lf[94],6,"append");
lf[95]=C_h_intern(&lf[95],18,"\004coreletrec-syntax");
lf[96]=C_h_intern(&lf[96],18,"\004coredefine-syntax");
lf[97]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[98]=C_h_intern(&lf[98],28,"\003sysextend-macro-environment");
lf[99]=C_h_intern(&lf[99],26,"\003sysregister-syntax-export");
lf[100]=C_h_intern(&lf[100],27,"\004coredefine-compiler-syntax");
lf[101]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[102]=C_h_intern(&lf[102],24,"\004corelet-compiler-syntax");
lf[103]=C_h_intern(&lf[103],12,"\004coreinclude");
lf[104]=C_h_intern(&lf[104],27,"\003sysinclude-forms-from-file");
lf[105]=C_h_intern(&lf[105],11,"\004coremodule");
lf[106]=C_h_intern(&lf[106],29,"\003sysinitial-macro-environment");
lf[107]=C_h_intern(&lf[107],19,"\003sysundefined-value");
lf[108]=C_h_intern(&lf[108],19,"\003sysfinalize-module");
lf[109]=C_h_intern(&lf[109],16,"\003sysdynamic-wind");
lf[110]=C_h_intern(&lf[110],19,"\003sysregister-module");
lf[111]=C_h_intern(&lf[111],6,"module");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\031modules may not be nested");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid export syntax");
lf[114]=C_h_intern(&lf[114],16,"\004coreloop-lambda");
lf[115]=C_h_intern(&lf[115],23,"\004corerequire-for-syntax");
lf[116]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[117]=C_h_intern(&lf[117],11,"\003sysrequire");
lf[118]=C_h_intern(&lf[118],5,"quote");
lf[119]=C_h_intern(&lf[119],31,"\003syslookup-runtime-requirements");
lf[120]=C_h_intern(&lf[120],22,"\004corerequire-extension");
lf[121]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[122]=C_h_intern(&lf[122],22,"\003sysdo-the-right-thing");
lf[123]=C_h_intern(&lf[123],24,"\004coreelaborationtimeonly");
lf[124]=C_h_intern(&lf[124],23,"\004coreelaborationtimetoo");
lf[125]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[126]=C_h_intern(&lf[126],19,"\004corecompiletimetoo");
lf[127]=C_h_intern(&lf[127],20,"\004corecompiletimeonly");
lf[128]=C_h_intern(&lf[128],13,"\004corecallunit");
lf[129]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[130]=C_h_intern(&lf[130],12,"\004coredeclare");
lf[131]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[132]=C_h_intern(&lf[132],10,"\000compiling");
lf[133]=C_h_intern(&lf[133],12,"\003sysfeatures");
lf[134]=C_h_intern(&lf[134],28,"\010compilerprocess-declaration");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000,declarations are ignored in interpreted code");
lf[136]=C_h_intern(&lf[136],18,"\004coredefine-inline");
lf[137]=C_h_intern(&lf[137],20,"\004coredefine-constant");
lf[138]=C_h_intern(&lf[138],6,"define");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000%cannot evaluate compiler-special-form");
lf[140]=C_h_intern(&lf[140],8,"\004coreapp");
lf[141]=C_h_intern(&lf[141],18,"\003syssyntax-context");
lf[142]=C_h_intern(&lf[142],11,"\004coreinline");
lf[143]=C_h_intern(&lf[143],20,"\004coreinline_allocate");
lf[144]=C_h_intern(&lf[144],19,"\004coreforeign-lambda");
lf[145]=C_h_intern(&lf[145],28,"\004coredefine-foreign-variable");
lf[146]=C_h_intern(&lf[146],29,"\004coredefine-external-variable");
lf[147]=C_h_intern(&lf[147],17,"\004corelet-location");
lf[148]=C_h_intern(&lf[148],22,"\004coreforeign-primitive");
lf[149]=C_h_intern(&lf[149],13,"\004corelocation");
lf[150]=C_h_intern(&lf[150],20,"\004coreforeign-lambda*");
lf[151]=C_h_intern(&lf[151],24,"\004coredefine-foreign-type");
lf[152]=C_h_intern(&lf[152],10,"\003sysexpand");
lf[153]=C_h_intern(&lf[153],24,"\003syssyntax-error/context");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\031illegal non-atomic object");
lf[155]=C_h_intern(&lf[155],11,"\003sysnumber\077");
lf[156]=C_h_intern(&lf[156],8,"keyword\077");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\024malformed expression");
lf[158]=C_h_intern(&lf[158],16,"\003syseval-handler");
lf[159]=C_h_intern(&lf[159],12,"eval-handler");
lf[160]=C_h_intern(&lf[160],4,"eval");
lf[161]=C_h_intern(&lf[161],24,"\003syssyntax-error-culprit");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\032illegal lambda-list syntax");
lf[163]=C_h_intern(&lf[163],12,"load-verbose");
lf[164]=C_h_intern(&lf[164],14,"\003sysabort-load");
lf[165]=C_h_intern(&lf[165],27,"\003syscurrent-source-filename");
lf[166]=C_h_intern(&lf[166],21,"\003syscurrent-load-path");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[168]=C_h_intern(&lf[168],18,"\003sysdload-disabled");
lf[169]=C_h_intern(&lf[169],22,"set-dynamic-load-mode!");
lf[170]=C_h_intern(&lf[170],21,"\003sysset-dlopen-flags!");
lf[171]=C_h_intern(&lf[171],6,"global");
lf[172]=C_h_intern(&lf[172],5,"local");
lf[173]=C_h_intern(&lf[173],4,"lazy");
lf[174]=C_h_intern(&lf[174],3,"now");
lf[175]=C_h_intern(&lf[175],15,"\003syssignal-hook");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\031invalid dynamic-load mode");
lf[177]=C_h_intern(&lf[177],4,"read");
lf[178]=C_h_intern(&lf[178],7,"display");
lf[179]=C_h_intern(&lf[179],7,"newline");
lf[180]=C_h_intern(&lf[180],15,"open-input-file");
lf[181]=C_h_intern(&lf[181],16,"close-input-port");
lf[182]=C_h_intern(&lf[182],8,"\003sysload");
lf[183]=C_h_intern(&lf[183],31,"\003sysread-error-with-line-number");
lf[184]=C_h_intern(&lf[184],17,"\003sysdisplay-times");
lf[185]=C_h_intern(&lf[185],14,"\003sysstop-timer");
lf[186]=C_h_intern(&lf[186],15,"\003sysstart-timer");
lf[187]=C_h_intern(&lf[187],4,"load");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000!unable to load compiled module - ");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\016unknown reason");
lf[190]=C_h_intern(&lf[190],9,"peek-char");
lf[191]=C_h_intern(&lf[191],13,"\003syssubstring");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[193]=C_h_intern(&lf[193],30,"call-with-current-continuation");
lf[194]=C_h_intern(&lf[194],9,"\003sysdload");
lf[195]=C_h_intern(&lf[195],17,"\003sysmake-c-string");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\002./");
lf[197]=C_h_intern(&lf[197],11,"\000file-error");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[199]=C_h_intern(&lf[199],12,"flush-output");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\005 ...\012");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\012; loading ");
lf[202]=C_h_intern(&lf[202],13,"\003sysfile-info");
lf[203]=C_h_intern(&lf[203],26,"\003sysload-dynamic-extension");
lf[204]=C_h_intern(&lf[204],11,"\000type-error");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a port or string");
lf[206]=C_h_intern(&lf[206],5,"port\077");
lf[207]=C_h_intern(&lf[207],20,"\003sysexpand-home-path");
lf[208]=C_h_intern(&lf[208],13,"load-relative");
lf[209]=C_h_intern(&lf[209],12,"load-noisily");
lf[210]=C_h_intern(&lf[210],15,"\003sysget-keyword");
lf[211]=C_h_intern(&lf[211],8,"\000printer");
lf[212]=C_h_intern(&lf[212],5,"\000time");
lf[213]=C_h_intern(&lf[213],10,"\000evaluator");
lf[214]=C_h_intern(&lf[214],26,"\003sysload-library-extension");
lf[215]=C_h_intern(&lf[215],6,"cygwin");
lf[216]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014cygchicken-0\376\377\016");
lf[217]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012libchicken\376\377\016");
lf[218]=C_h_intern(&lf[218],34,"\003sysdefault-dynamic-load-libraries");
lf[219]=C_h_intern(&lf[219],22,"dynamic-load-libraries");
lf[220]=C_h_intern(&lf[220],13,"string-append");
lf[221]=C_h_intern(&lf[221],18,"\003sysload-library-0");
lf[222]=C_h_intern(&lf[222],12,"load-library");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\005 ...\012");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\022; loading library ");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\011_toplevel");
lf[227]=C_h_intern(&lf[227],24,"\003sysstring->c-identifier");
lf[228]=C_h_intern(&lf[228],16,"\003sys->feature-id");
lf[229]=C_h_intern(&lf[229],16,"\003sysload-library");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\026unable to load library");
lf[231]=C_h_intern(&lf[231],20,"with-input-from-file");
lf[232]=C_h_intern(&lf[232],5,"print");
lf[233]=C_decode_literal(C_heaptop,"\376B\000\000\014; including ");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[235]=C_h_intern(&lf[235],28,"\003sysresolve-include-filename");
lf[236]=C_h_intern(&lf[236],31,"\003syscanonicalize-extension-path");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid extension path");
lf[238]=C_h_intern(&lf[238],18,"\003syssymbol->string");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[242]=C_h_intern(&lf[242],19,"\003sysrepository-path");
lf[243]=C_h_intern(&lf[243],15,"repository-path");
lf[244]=C_h_intern(&lf[244],14,"\003syssetup-mode");
lf[245]=C_h_intern(&lf[245],18,"\003sysfind-extension");
lf[246]=C_h_intern(&lf[246],12,"file-exists\077");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[248]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\001.\376\377\016");
lf[249]=C_h_intern(&lf[249],21,"\003sysinclude-pathnames");
lf[250]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\001.\376\377\016");
lf[251]=C_h_intern(&lf[251],21,"\003sysloaded-extensions");
lf[252]=C_h_intern(&lf[252],14,"string->symbol");
lf[253]=C_h_intern(&lf[253],18,"\003sysload-extension");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot load core library");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot load extension");
lf[256]=C_h_intern(&lf[256],11,"\003sysprovide");
lf[257]=C_h_intern(&lf[257],7,"provide");
lf[258]=C_h_intern(&lf[258],13,"\003sysprovided\077");
lf[259]=C_h_intern(&lf[259],9,"provided\077");
lf[260]=C_h_intern(&lf[260],7,"require");
lf[261]=C_h_intern(&lf[261],25,"\003sysextension-information");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[265]=C_h_intern(&lf[265],21,"extension-information");
lf[266]=C_h_intern(&lf[266],18,"require-at-runtime");
lf[267]=C_h_intern(&lf[267],14,"dynamic/syntax");
lf[268]=C_h_intern(&lf[268],7,"dynamic");
lf[269]=C_h_intern(&lf[269],11,"lset-adjoin");
lf[270]=C_h_intern(&lf[270],3,"eq\077");
lf[271]=C_h_intern(&lf[271],26,"\010compilerfile-requirements");
lf[272]=C_h_intern(&lf[272],6,"import");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\005srfi-");
lf[274]=C_h_intern(&lf[274],18,"\003sysnumber->string");
lf[275]=C_h_intern(&lf[275],16,"\003syssyntax-error");
lf[276]=C_h_intern(&lf[276],17,"require-extension");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid SRFI number");
lf[278]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007chicken\376\003\000\000\002\376\001\000\000\006srfi-2\376\003\000\000\002\376\001\000\000\006srfi-6\376\003\000\000\002\376\001\000\000\007srfi-10\376\003\000\000\002\376\001\000\000\007srfi"
"-12\376\003\000\000\002\376\001\000\000\007srfi-23\376\003\000\000\002\376\001\000\000\007srfi-28\376\003\000\000\002\376\001\000\000\007srfi-30\376\003\000\000\002\376\001\000\000\007srfi-31\376\003\000\000\002\376\001\000\000"
"\007srfi-39\376\003\000\000\002\376\001\000\000\007srfi-55\376\003\000\000\002\376\001\000\000\007srfi-88\376\003\000\000\002\376\001\000\000\007srfi-98\376\377\016");
lf[279]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[280]=C_h_intern(&lf[280],4,"uses");
lf[281]=C_h_intern(&lf[281],11,"import-only");
lf[282]=C_h_intern(&lf[282],6,"syntax");
lf[283]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[284]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006srfi-6\376\003\000\000\002\376\001\000\000\006srfi-8\376\003\000\000\002\376\001\000\000\006srfi-9\376\003\000\000\002\376\001\000\000\007srfi-11\376\003\000\000\002\376\001\000\000\007srfi-"
"15\376\003\000\000\002\376\001\000\000\007srfi-16\376\003\000\000\002\376\001\000\000\007srfi-17\376\003\000\000\002\376\001\000\000\007srfi-26\376\377\016");
lf[285]=C_h_intern(&lf[285],12,"\003sysfeature\077");
lf[286]=C_h_intern(&lf[286],4,"srfi");
lf[287]=C_h_intern(&lf[287],6,"rename");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid extension specifier");
lf[289]=C_h_intern(&lf[289],6,"except");
lf[290]=C_h_intern(&lf[290],4,"only");
lf[291]=C_h_intern(&lf[291],6,"prefix");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid extension specifier");
lf[293]=C_h_intern(&lf[293],19,"\003syswrite-char/port");
lf[296]=C_h_intern(&lf[296],11,"environment");
lf[298]=C_h_intern(&lf[298],16,"\003sysenvironment\077");
lf[299]=C_h_intern(&lf[299],18,"\003syscopy-env-table");
lf[300]=C_h_intern(&lf[300],23,"\003sysenvironment-symbols");
lf[301]=C_h_intern(&lf[301],18,"\003syswalk-namespace");
lf[302]=C_h_intern(&lf[302],23,"interaction-environment");
lf[303]=C_h_intern(&lf[303],25,"scheme-report-environment");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\026no support for version");
lf[305]=C_h_intern(&lf[305],11,"make-vector");
lf[306]=C_h_intern(&lf[306],16,"null-environment");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\026no support for version");
lf[308]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003not\376\003\000\000\002\376\001\000\000\010boolean\077\376\003\000\000\002\376\001\000\000\003eq\077\376\003\000\000\002\376\001\000\000\004eqv\077\376\003\000\000\002\376\001\000\000\006equal\077\376\003\000\000\002\376"
"\001\000\000\005pair\077\376\003\000\000\002\376\001\000\000\004cons\376\003\000\000\002\376\001\000\000\003car\376\003\000\000\002\376\001\000\000\003cdr\376\003\000\000\002\376\001\000\000\004caar\376\003\000\000\002\376\001\000\000\004cadr\376\003\000"
"\000\002\376\001\000\000\004cdar\376\003\000\000\002\376\001\000\000\004cddr\376\003\000\000\002\376\001\000\000\005caaar\376\003\000\000\002\376\001\000\000\005caadr\376\003\000\000\002\376\001\000\000\005cadar\376\003\000\000\002\376\001\000\000\005"
"caddr\376\003\000\000\002\376\001\000\000\005cdaar\376\003\000\000\002\376\001\000\000\005cdadr\376\003\000\000\002\376\001\000\000\005cddar\376\003\000\000\002\376\001\000\000\005cdddr\376\003\000\000\002\376\001\000\000\006caaaa"
"r\376\003\000\000\002\376\001\000\000\006caaadr\376\003\000\000\002\376\001\000\000\006caadar\376\003\000\000\002\376\001\000\000\006caaddr\376\003\000\000\002\376\001\000\000\006cadaar\376\003\000\000\002\376\001\000\000\006cadad"
"r\376\003\000\000\002\376\001\000\000\006cadddr\376\003\000\000\002\376\001\000\000\006cdaaar\376\003\000\000\002\376\001\000\000\006cdaadr\376\003\000\000\002\376\001\000\000\006cdadar\376\003\000\000\002\376\001\000\000\006cdadd"
"r\376\003\000\000\002\376\001\000\000\006cddaar\376\003\000\000\002\376\001\000\000\006cddadr\376\003\000\000\002\376\001\000\000\006cdddar\376\003\000\000\002\376\001\000\000\006cddddr\376\003\000\000\002\376\001\000\000\010set-c"
"ar!\376\003\000\000\002\376\001\000\000\010set-cdr!\376\003\000\000\002\376\001\000\000\005null\077\376\003\000\000\002\376\001\000\000\005list\077\376\003\000\000\002\376\001\000\000\004list\376\003\000\000\002\376\001\000\000\006lengt"
"h\376\003\000\000\002\376\001\000\000\011list-tail\376\003\000\000\002\376\001\000\000\010list-ref\376\003\000\000\002\376\001\000\000\006append\376\003\000\000\002\376\001\000\000\007reverse\376\003\000\000\002\376\001\000\000"
"\004memq\376\003\000\000\002\376\001\000\000\004memv\376\003\000\000\002\376\001\000\000\006member\376\003\000\000\002\376\001\000\000\004assq\376\003\000\000\002\376\001\000\000\004assv\376\003\000\000\002\376\001\000\000\005assoc\376\003"
"\000\000\002\376\001\000\000\007symbol\077\376\003\000\000\002\376\001\000\000\016symbol->string\376\003\000\000\002\376\001\000\000\016string->symbol\376\003\000\000\002\376\001\000\000\007number\077"
"\376\003\000\000\002\376\001\000\000\010integer\077\376\003\000\000\002\376\001\000\000\006exact\077\376\003\000\000\002\376\001\000\000\005real\077\376\003\000\000\002\376\001\000\000\010complex\077\376\003\000\000\002\376\001\000\000\010ine"
"xact\077\376\003\000\000\002\376\001\000\000\011rational\077\376\003\000\000\002\376\001\000\000\005zero\077\376\003\000\000\002\376\001\000\000\004odd\077\376\003\000\000\002\376\001\000\000\005even\077\376\003\000\000\002\376\001\000\000\011po"
"sitive\077\376\003\000\000\002\376\001\000\000\011negative\077\376\003\000\000\002\376\001\000\000\003max\376\003\000\000\002\376\001\000\000\003min\376\003\000\000\002\376\001\000\000\001+\376\003\000\000\002\376\001\000\000\001-\376\003\000\000\002\376"
"\001\000\000\001*\376\003\000\000\002\376\001\000\000\001/\376\003\000\000\002\376\001\000\000\001=\376\003\000\000\002\376\001\000\000\001>\376\003\000\000\002\376\001\000\000\001<\376\003\000\000\002\376\001\000\000\002>=\376\003\000\000\002\376\001\000\000\002<=\376\003\000\000\002\376\001"
"\000\000\010quotient\376\003\000\000\002\376\001\000\000\011remainder\376\003\000\000\002\376\001\000\000\006modulo\376\003\000\000\002\376\001\000\000\003gcd\376\003\000\000\002\376\001\000\000\003lcm\376\003\000\000\002\376\001\000"
"\000\003abs\376\003\000\000\002\376\001\000\000\005floor\376\003\000\000\002\376\001\000\000\007ceiling\376\003\000\000\002\376\001\000\000\010truncate\376\003\000\000\002\376\001\000\000\005round\376\003\000\000\002\376\001\000\000\016"
"exact->inexact\376\003\000\000\002\376\001\000\000\016inexact->exact\376\003\000\000\002\376\001\000\000\003exp\376\003\000\000\002\376\001\000\000\003log\376\003\000\000\002\376\001\000\000\004expt\376\003"
"\000\000\002\376\001\000\000\004sqrt\376\003\000\000\002\376\001\000\000\003sin\376\003\000\000\002\376\001\000\000\003cos\376\003\000\000\002\376\001\000\000\003tan\376\003\000\000\002\376\001\000\000\004asin\376\003\000\000\002\376\001\000\000\004acos\376"
"\003\000\000\002\376\001\000\000\004atan\376\003\000\000\002\376\001\000\000\016number->string\376\003\000\000\002\376\001\000\000\016string->number\376\003\000\000\002\376\001\000\000\005char\077\376\003\000\000"
"\002\376\001\000\000\006char=\077\376\003\000\000\002\376\001\000\000\006char>\077\376\003\000\000\002\376\001\000\000\006char<\077\376\003\000\000\002\376\001\000\000\007char>=\077\376\003\000\000\002\376\001\000\000\007char<=\077\376\003"
"\000\000\002\376\001\000\000\011char-ci=\077\376\003\000\000\002\376\001\000\000\011char-ci<\077\376\003\000\000\002\376\001\000\000\011char-ci>\077\376\003\000\000\002\376\001\000\000\012char-ci>=\077\376\003\000\000\002"
"\376\001\000\000\012char-ci<=\077\376\003\000\000\002\376\001\000\000\020char-alphabetic\077\376\003\000\000\002\376\001\000\000\020char-whitespace\077\376\003\000\000\002\376\001\000\000\015cha"
"r-numeric\077\376\003\000\000\002\376\001\000\000\020char-upper-case\077\376\003\000\000\002\376\001\000\000\020char-lower-case\077\376\003\000\000\002\376\001\000\000\013char-upc"
"ase\376\003\000\000\002\376\001\000\000\015char-downcase\376\003\000\000\002\376\001\000\000\015char->integer\376\003\000\000\002\376\001\000\000\015integer->char\376\003\000\000\002\376\001\000"
"\000\007string\077\376\003\000\000\002\376\001\000\000\010string=\077\376\003\000\000\002\376\001\000\000\010string>\077\376\003\000\000\002\376\001\000\000\010string<\077\376\003\000\000\002\376\001\000\000\011string>"
"=\077\376\003\000\000\002\376\001\000\000\011string<=\077\376\003\000\000\002\376\001\000\000\013string-ci=\077\376\003\000\000\002\376\001\000\000\013string-ci<\077\376\003\000\000\002\376\001\000\000\013string-"
"ci>\077\376\003\000\000\002\376\001\000\000\014string-ci>=\077\376\003\000\000\002\376\001\000\000\014string-ci<=\077\376\003\000\000\002\376\001\000\000\013make-string\376\003\000\000\002\376\001\000\000\015s"
"tring-length\376\003\000\000\002\376\001\000\000\012string-ref\376\003\000\000\002\376\001\000\000\013string-set!\376\003\000\000\002\376\001\000\000\015string-append\376\003\000\000"
"\002\376\001\000\000\013string-copy\376\003\000\000\002\376\001\000\000\014string->list\376\003\000\000\002\376\001\000\000\014list->string\376\003\000\000\002\376\001\000\000\011substring"
"\376\003\000\000\002\376\001\000\000\014string-fill!\376\003\000\000\002\376\001\000\000\007vector\077\376\003\000\000\002\376\001\000\000\013make-vector\376\003\000\000\002\376\001\000\000\012vector-ref"
"\376\003\000\000\002\376\001\000\000\013vector-set!\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\001\000\000\006vector\376\003\000\000\002\376\001\000\000\015vector-length\376\003\000\000"
"\002\376\001\000\000\014vector->list\376\003\000\000\002\376\001\000\000\014list->vector\376\003\000\000\002\376\001\000\000\014vector-fill!\376\003\000\000\002\376\001\000\000\012procedur"
"e\077\376\003\000\000\002\376\001\000\000\003map\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\005apply\376\003\000\000\002\376\001\000\000\005force\376\003\000\000\002\376\001\000\000\036call-wi"
"th-current-continuation\376\003\000\000\002\376\001\000\000\013input-port\077\376\003\000\000\002\376\001\000\000\014output-port\077\376\003\000\000\002\376\001\000\000\022curr"
"ent-input-port\376\003\000\000\002\376\001\000\000\023current-output-port\376\003\000\000\002\376\001\000\000\024call-with-input-file\376\003\000\000\002\376\001"
"\000\000\025call-with-output-file\376\003\000\000\002\376\001\000\000\017open-input-file\376\003\000\000\002\376\001\000\000\020open-output-file\376\003\000\000\002"
"\376\001\000\000\020close-input-port\376\003\000\000\002\376\001\000\000\021close-output-port\376\003\000\000\002\376\001\000\000\004load\376\003\000\000\002\376\001\000\000\004read\376\003\000\000"
"\002\376\001\000\000\013eof-object\077\376\003\000\000\002\376\001\000\000\011read-char\376\003\000\000\002\376\001\000\000\011peek-char\376\003\000\000\002\376\001\000\000\005write\376\003\000\000\002\376\001\000\000\007"
"display\376\003\000\000\002\376\001\000\000\012write-char\376\003\000\000\002\376\001\000\000\007newline\376\003\000\000\002\376\001\000\000\024with-input-from-file\376\003\000\000\002\376"
"\001\000\000\023with-output-to-file\376\003\000\000\002\376\001\000\000\024\003syscall-with-values\376\003\000\000\002\376\001\000\000\012\003sysvalues\376\003\000\000\002\376\001"
"\000\000\020\003sysdynamic-wind\376\003\000\000\002\376\001\000\000\010\003sysvoid\376\003\000\000\002\376\001\000\000\020\003syslist->vector\376\003\000\000\002\376\001\000\000\010\003syslis"
"t\376\003\000\000\002\376\001\000\000\012\003sysappend\376\003\000\000\002\376\001\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\020\003sysmake-promise\376\377\016");
lf[309]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\014dynamic-wind\376\003\000\000\002\376\001\000\000\006values\376\003\000\000\002\376\001\000\000\020call-with-values\376\003\000\000\002\376\001\000\000\004eval\376\003"
"\000\000\002\376\001\000\000\031scheme-report-environment\376\003\000\000\002\376\001\000\000\020null-environment\376\003\000\000\002\376\001\000\000\027interaction"
"-environment\376\377\016");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[311]=C_h_intern(&lf[311],18,"\003sysrepl-eval-hook");
lf[312]=C_h_intern(&lf[312],27,"\003sysrepl-print-length-limit");
lf[313]=C_h_intern(&lf[313],18,"\003sysrepl-read-hook");
lf[314]=C_h_intern(&lf[314],26,"\003sysrepl-recent-call-chain");
lf[315]=C_h_intern(&lf[315],19,"\003sysrepl-print-hook");
lf[316]=C_h_intern(&lf[316],16,"\003syswrite-char-0");
lf[317]=C_h_intern(&lf[317],9,"\003sysprint");
lf[318]=C_h_intern(&lf[318],27,"\003syswith-print-length-limit");
lf[319]=C_h_intern(&lf[319],11,"repl-prompt");
lf[320]=C_h_intern(&lf[320],20,"\003sysread-prompt-hook");
lf[321]=C_h_intern(&lf[321],16,"\003sysflush-output");
lf[322]=C_h_intern(&lf[322],19,"\003sysstandard-output");
lf[323]=C_h_intern(&lf[323],22,"\003sysclear-trace-buffer");
lf[324]=C_h_intern(&lf[324],4,"repl");
lf[325]=C_h_intern(&lf[325],18,"\003sysstandard-error");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\014; no values\012");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\002; ");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\010 values\012");
lf[329]=C_h_intern(&lf[329],18,"\003sysstandard-input");
lf[330]=C_h_intern(&lf[330],18,"\003syslast-exception");
lf[331]=C_h_intern(&lf[331],16,"print-call-chain");
lf[332]=C_h_intern(&lf[332],9,"condition");
lf[333]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003exn\376\001\000\000\012call-chain");
lf[334]=C_h_intern(&lf[334],27,"\003sysreally-print-call-chain");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\020\012\011Call history:\012");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000\006\012Error");
lf[339]=C_h_intern(&lf[339],17,"\003syserror-handler");
lf[340]=C_h_intern(&lf[340],20,"\003syswarnings-enabled");
lf[341]=C_decode_literal(C_heaptop,"\376B\000\000\005 (in ");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000=the following toplevel variables are referenced but unbound:\012");
lf[344]=C_h_intern(&lf[344],15,"\003sysread-char-0");
lf[345]=C_h_intern(&lf[345],15,"\003syspeek-char-0");
lf[346]=C_h_intern(&lf[346],21,"\003sysenable-qualifiers");
lf[347]=C_h_intern(&lf[347],17,"\003sysreset-handler");
lf[348]=C_h_intern(&lf[348],28,"\003syssharp-comma-reader-ctors");
lf[349]=C_h_intern(&lf[349],18,"define-reader-ctor");
lf[350]=C_h_intern(&lf[350],18,"\003sysuser-read-hook");
lf[351]=C_h_intern(&lf[351],9,"read-char");
lf[352]=C_h_intern(&lf[352],14,"\003sysread-error");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000!invalid sharp-comma external form");
lf[354]=C_decode_literal(C_heaptop,"\376B\000\000!undefined sharp-comma constructor");
lf[357]=C_h_intern(&lf[357],19,"print-error-message");
lf[358]=C_h_intern(&lf[358],22,"with-exception-handler");
lf[360]=C_h_intern(&lf[360],6,"\003sysgc");
lf[362]=C_h_intern(&lf[362],17,"\003systhread-yield!");
lf[365]=C_h_intern(&lf[365],17,"open-input-string");
lf[367]=C_decode_literal(C_heaptop,"\376B\000\000(Error: not enough room for result string");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000\010No error");
lf[376]=C_decode_literal(C_heaptop,"\376B\000\000\004#;> ");
lf[377]=C_h_intern(&lf[377],14,"make-parameter");
lf[378]=C_decode_literal(C_heaptop,"\376B\000\000\014lib/chicken/");
lf[379]=C_h_intern(&lf[379],24,"get-environment-variable");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000\022CHICKEN_REPOSITORY");
lf[381]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[382]=C_h_intern(&lf[382],5,"linux");
lf[383]=C_h_intern(&lf[383],6,"netbsd");
lf[384]=C_h_intern(&lf[384],7,"openbsd");
lf[385]=C_h_intern(&lf[385],7,"freebsd");
lf[386]=C_h_intern(&lf[386],16,"software-version");
lf[387]=C_h_intern(&lf[387],14,"build-platform");
lf[388]=C_h_intern(&lf[388],7,"windows");
lf[389]=C_decode_literal(C_heaptop,"\376B\000\000\004.dll");
lf[390]=C_h_intern(&lf[390],6,"macosx");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\006.dylib");
lf[392]=C_h_intern(&lf[392],4,"hpux");
lf[393]=C_h_intern(&lf[393],4,"hppa");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\003.sl");
lf[395]=C_h_intern(&lf[395],12,"machine-type");
lf[396]=C_h_intern(&lf[396],13,"software-type");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\012C_toplevel");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
C_register_lf2(lf,401,create_ptable());
t2=C_mutate(&lf[0] /* (set! c174 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2609,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_expand_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k2607 */
static void C_ccall f_2609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2609,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#core-library-modules ...) */,lf[3]);
t3=C_set_block_item(lf[4] /* explicit-library-modules */,0,C_SCHEME_END_OF_LIST);
t4=C_mutate(&lf[5] /* (set! constant88 ...) */,lf[6]);
t5=C_mutate(&lf[7] /* (set! constant97 ...) */,lf[8]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2627,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:88: get-environment-variable */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[379]+1)))(3,*((C_word*)lf[379]+1),t6,lf[400]);}

/* k2625 in k2607 */
static void C_ccall f_2627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2627,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2630,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=C_block_size(t1);
t4=C_fixnum_difference(t3,C_fix(1));
t5=C_i_string_ref(t1,t4);
if(C_truep((C_truep(C_eqp(t5,C_make_character(92)))?C_SCHEME_TRUE:(C_truep(C_eqp(t5,C_make_character(47)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* eval.scm:89: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t2,t1,lf[398]);}
else{
/* eval.scm:89: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t2,t1,lf[399]);}}
else{
t3=t2;
f_2630(2,t3,C_SCHEME_FALSE);}}

/* k2628 in k2625 in k2607 */
static void C_ccall f_2630(C_word c,C_word t0,C_word t1){
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
C_word ab[38],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2630,2,t0,t1);}
t2=C_mutate((C_word*)lf[9]+1 /* (set! ##sys#chicken-prefix ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2631,a[2]=t1,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[12]+1 /* (set! chicken-home ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2665,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_mutate((C_word*)lf[15]+1 /* (set! ##sys#hash-symbol ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2677,a[2]=t7,a[3]=t5,a[4]=((C_word)li2),tmp=(C_word)a,a+=5,tmp));
t9=C_mutate((C_word*)lf[16]+1 /* (set! ##sys#hash-table-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2692,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[17]+1 /* (set! ##sys#hash-table-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2747,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[18]+1 /* (set! ##sys#hash-table-update! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2807,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#hash-table-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2827,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t13=C_slot(lf[21],C_fix(0));
t14=C_mutate((C_word*)lf[22]+1 /* (set! ##sys#hash-table-location ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2897,a[2]=t13,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(lf[23] /* eval-environment */,0,C_SCHEME_FALSE);
t16=C_set_block_item(lf[24] /* environment-is-mutable */,0,C_SCHEME_FALSE);
t17=C_mutate((C_word*)lf[25]+1 /* (set! ##sys#eval-decorator ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2957,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t18=C_set_block_item(lf[31] /* unbound-in-eval */,0,C_SCHEME_FALSE);
t19=C_set_block_item(lf[32] /* unsafe-eval */,0,C_SCHEME_FALSE);
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3000,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:181: make-parameter */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[377]+1)))(3,*((C_word*)lf[377]+1),t20,C_fix(1));}

/* k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_3000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3000,2,t0,t1);}
t2=C_mutate((C_word*)lf[33]+1 /* (set! ##sys#eval-debug-level ...) */,t1);
t3=*((C_word*)lf[34]+1);
t4=C_slot(lf[21],C_fix(0));
t5=C_mutate((C_word*)lf[35]+1 /* (set! ##sys#compile-to-closure ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3005,a[2]=t3,a[3]=t4,a[4]=((C_word)li150),tmp=(C_word)a,a+=5,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6408,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10230,a[2]=((C_word)li304),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:806: make-parameter */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[377]+1)))(3,*((C_word*)lf[377]+1),t6,t7);}

/* a10229 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10230(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_10230r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_10230r(t0,t1,t2,t3);}}

static void C_ccall f_10230r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(10);
t4=*((C_word*)lf[24]+1);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10234,a[2]=t2,a[3]=t1,a[4]=t7,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t3))){
t9=C_i_car(t3);
if(C_truep(t9)){
t10=C_i_check_structure(t9,lf[296]);
t11=C_slot(t9,C_fix(1));
t12=C_set_block_item(t7,0,t11);
t13=C_slot(t9,C_fix(2));
t14=C_set_block_item(t5,0,t13);
t15=t8;
f_10234(t15,t14);}
else{
t10=C_SCHEME_UNDEFINED;
t11=t8;
f_10234(t11,t10);}}
else{
t9=t8;
f_10234(t9,C_SCHEME_UNDEFINED);}}

/* k10232 in a10229 in k2998 in k2628 in k2625 in k2607 */
static void C_fcall f_10234(C_word t0,C_word t1){
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
C_word ab[29],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10234,NULL,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[5])[1];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)((C_word*)t0)[4])[1];
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10237,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10242,a[2]=t5,a[3]=t3,a[4]=t9,a[5]=t7,a[6]=((C_word)li301),tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10249,a[2]=((C_word*)t0)[2],a[3]=((C_word)li302),tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10259,a[2]=t9,a[3]=t7,a[4]=t5,a[5]=t3,a[6]=((C_word)li303),tmp=(C_word)a,a+=7,tmp);
/* ##sys#dynamic-wind */
t14=*((C_word*)lf[109]+1);
((C_proc5)(void*)(*((C_word*)t14+1)))(5,t14,t10,t11,t12,t13);}

/* a10258 in k10232 in a10229 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10259,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,*((C_word*)lf[24]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[23]+1));
t4=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#environment-is-mutable ...) */,((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate((C_word*)lf[23]+1 /* (set! ##sys#eval-environment ...) */,((C_word*)((C_word*)t0)[2])[1]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* a10248 in k10232 in a10229 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10249,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10257,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:818: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(2,*((C_word*)lf[69]+1),t2);}

/* k10255 in a10248 in k10232 in a10229 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:818: ##sys#compile-to-closure */
t2=*((C_word*)lf[35]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t1);}

/* a10241 in k10232 in a10229 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10242,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,*((C_word*)lf[24]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[23]+1));
t4=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#environment-is-mutable ...) */,((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate((C_word*)lf[23]+1 /* (set! ##sys#eval-environment ...) */,((C_word*)((C_word*)t0)[2])[1]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* k10235 in k10232 in a10229 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g12471248 */
t2=t1;
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_6408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6408,2,t0,t1);}
t2=C_mutate((C_word*)lf[158]+1 /* (set! ##sys#eval-handler ...) */,t1);
t3=C_mutate((C_word*)lf[159]+1 /* (set! eval-handler ...) */,*((C_word*)lf[158]+1));
t4=C_mutate((C_word*)lf[160]+1 /* (set! eval ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6411,a[2]=((C_word)li151),tmp=(C_word)a,a+=3,tmp));
t5=*((C_word*)lf[34]+1);
t6=C_mutate((C_word*)lf[86]+1 /* (set! ##sys#decompose-lambda-list ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6421,a[2]=t5,a[3]=((C_word)li154),tmp=(C_word)a,a+=4,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6503,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=C_fudge(C_fix(13));
/* eval.scm:850: make-parameter */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[377]+1)))(3,*((C_word*)lf[377]+1),t7,t8);}

/* k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_6503(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6503,2,t0,t1);}
t2=C_mutate((C_word*)lf[163]+1 /* (set! load-verbose ...) */,t1);
t3=C_mutate((C_word*)lf[164]+1 /* (set! ##sys#abort-load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6505,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp));
t4=C_set_block_item(lf[165] /* current-source-filename */,0,C_SCHEME_FALSE);
t5=C_mutate((C_word*)lf[166]+1 /* (set! ##sys#current-load-path ...) */,lf[167]);
t6=C_set_block_item(lf[168] /* dload-disabled */,0,C_SCHEME_FALSE);
t7=C_mutate((C_word*)lf[169]+1 /* (set! set-dynamic-load-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6511,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp));
t8=*((C_word*)lf[177]+1);
t9=*((C_word*)lf[28]+1);
t10=*((C_word*)lf[178]+1);
t11=*((C_word*)lf[179]+1);
t12=*((C_word*)lf[160]+1);
t13=*((C_word*)lf[180]+1);
t14=*((C_word*)lf[181]+1);
t15=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6584,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t13,a[5]=t14,a[6]=t9,a[7]=t11,a[8]=t8,a[9]=t12,tmp=(C_word)a,a+=10,tmp);
/* eval.scm:882: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[195]+1)))(3,*((C_word*)lf[195]+1),t15,lf[397]);}

/* k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_6584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6584,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6586,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp);
t3=C_mutate((C_word*)lf[182]+1 /* (set! ##sys#load ...) */,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6632,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word)li175),tmp=(C_word)a,a+=12,tmp));
t4=C_mutate((C_word*)lf[187]+1 /* (set! load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7054,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[208]+1 /* (set! load-relative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7083,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[209]+1 /* (set! load-noisily ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7126,a[2]=((C_word)li181),tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7152,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10224,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:984: software-type */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[396]+1)))(2,*((C_word*)lf[396]+1),t8);}

/* k10222 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10224,2,t0,t1);}
t2=C_eqp(t1,lf[388]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_7152(t3,lf[389]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10220,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:985: software-version */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[386]+1)))(2,*((C_word*)lf[386]+1),t3);}}

/* k10218 in k10222 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10220,2,t0,t1);}
t2=C_eqp(t1,lf[390]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_7152(t3,lf[391]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10216,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:986: software-version */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[386]+1)))(2,*((C_word*)lf[386]+1),t3);}}

/* k10214 in k10218 in k10222 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10216,2,t0,t1);}
t2=C_eqp(t1,lf[392]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10212,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:987: machine-type */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[395]+1)))(2,*((C_word*)lf[395]+1),t3);}
else{
t3=((C_word*)t0)[2];
f_7152(t3,lf[5]);}}

/* k10210 in k10214 in k10218 in k10222 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(t1,lf[393]);
t3=((C_word*)t0)[2];
f_7152(t3,(C_truep(t2)?lf[394]:lf[5]));}

/* k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_fcall f_7152(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7152,NULL,2,t0,t1);}
t2=C_mutate((C_word*)lf[214]+1 /* (set! ##sys#load-library-extension ...) */,t1);
t3=C_mutate((C_word*)lf[203]+1 /* (set! ##sys#load-dynamic-extension ...) */,lf[5]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7157,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:993: build-platform */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[387]+1)))(2,*((C_word*)lf[387]+1),t4);}

/* k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7157(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7157,2,t0,t1);}
t2=C_eqp(t1,lf[215]);
t3=(C_truep(t2)?lf[216]:lf[217]);
t4=C_mutate((C_word*)lf[218]+1 /* (set! ##sys#default-dynamic-load-libraries ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7164,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10163,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10184,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:999: software-version */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[386]+1)))(2,*((C_word*)lf[386]+1),t7);}

/* k10182 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_truep(C_eqp(t1,lf[382]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[383]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[384]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[385]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))){
t2=C_i_zerop(C_fix((C_word)C_BINARY_VERSION));
t3=((C_word*)t0)[2];
f_10163(t3,C_i_not(t2));}
else{
t2=((C_word*)t0)[2];
f_10163(t2,C_SCHEME_FALSE);}}

/* k10161 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_fcall f_10163(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10163,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10170,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1004: number->string */
C_number_to_string(3,0,t2,C_fix((C_word)C_BINARY_VERSION));}
else{
t2=((C_word*)t0)[2];
f_7164(2,t2,*((C_word*)lf[214]+1));}}

/* k10168 in k10161 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1001: string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[220]+1)))(5,*((C_word*)lf[220]+1),((C_word*)t0)[2],*((C_word*)lf[214]+1),lf[381],t1);}

/* k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7164(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7164,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7166,a[2]=t1,a[3]=((C_word)li182),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7173,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=*((C_word*)lf[218]+1);
t9=C_i_check_list_2(t8,lf[71]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10119,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10127,a[2]=t2,a[3]=t5,a[4]=t12,a[5]=t7,a[6]=((C_word)li300),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_10127(t14,t10,t8);}

/* map-loop1515 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_fcall f_10127(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10127,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10156,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g15211530 */
t5=((C_word*)t0)[2];
f_7166(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10154 in map-loop1515 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10156(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10156,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10127(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10127(t6,((C_word*)t0)[3],t5);}}

/* k10117 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10119,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10121,a[2]=((C_word)li299),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1008: make-parameter */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[377]+1)))(4,*((C_word*)lf[377]+1),((C_word*)t0)[2],t1,t2);}

/* a10120 in k10117 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10121(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10121,3,t0,t1,t2);}
t3=C_i_check_list(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}

/* k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7173(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7173,2,t0,t1);}
t2=C_mutate((C_word*)lf[219]+1 /* (set! dynamic-load-libraries ...) */,t1);
t3=*((C_word*)lf[220]+1);
t4=*((C_word*)lf[178]+1);
t5=C_mutate((C_word*)lf[221]+1 /* (set! ##sys#load-library-0 ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7175,a[2]=t3,a[3]=t4,a[4]=((C_word)li184),tmp=(C_word)a,a+=5,tmp));
t6=C_mutate((C_word*)lf[229]+1 /* (set! ##sys#load-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7281,a[2]=((C_word)li185),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[222]+1 /* (set! load-library ...) */,*((C_word*)lf[229]+1));
t8=*((C_word*)lf[231]+1);
t9=*((C_word*)lf[177]+1);
t10=*((C_word*)lf[34]+1);
t11=C_mutate((C_word*)lf[104]+1 /* (set! ##sys#include-forms-from-file ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7311,a[2]=t8,a[3]=t9,a[4]=t10,a[5]=((C_word)li191),tmp=(C_word)a,a+=6,tmp));
t12=*((C_word*)lf[220]+1);
t13=C_mutate((C_word*)lf[236]+1 /* (set! ##sys#canonicalize-extension-path ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7378,a[2]=t12,a[3]=((C_word)li195),tmp=(C_word)a,a+=4,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7538,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fudge(C_fix(22)))){
/* ##sys#peek-c-string */
t15=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,C_mpointer(&a,(void*)C_private_repository_path()),C_fix(0));}
else{
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10088,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1101: get-environment-variable */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[379]+1)))(3,*((C_word*)lf[379]+1),t15,lf[380]);}}

/* k10086 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10088,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_7538(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10094,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10104,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10108,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_fudge(C_fix(42));
/* eval.scm:1105: ##sys#number->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[274]+1)))(3,*((C_word*)lf[274]+1),t4,t5);}}

/* k10106 in k10086 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1103: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[378],t1);}

/* k10102 in k10086 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1102: ##sys#chicken-prefix */
t2=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k10092 in k10086 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10094,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_7538(2,t2,t1);}
else{
/* ##sys#peek-c-string */
t2=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_mpointer(&a,(void*)C_INSTALL_EGG_HOME),C_fix(0));}}

/* k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7538(C_word c,C_word t0,C_word t1){
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
C_word ab[44],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7538,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_mutate((C_word*)lf[242]+1 /* (set! ##sys#repository-path ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7539,a[2]=t3,a[3]=((C_word)li196),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[243]+1 /* (set! repository-path ...) */,*((C_word*)lf[242]+1));
t6=C_set_block_item(lf[244] /* setup-mode */,0,C_SCHEME_FALSE);
t7=*((C_word*)lf[220]+1);
t8=C_mutate((C_word*)lf[245]+1 /* (set! ##sys#find-extension ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7570,a[2]=t7,a[3]=((C_word)li199),tmp=(C_word)a,a+=4,tmp));
t9=C_set_block_item(lf[251] /* loaded-extensions */,0,C_SCHEME_END_OF_LIST);
t10=*((C_word*)lf[252]+1);
t11=C_mutate((C_word*)lf[253]+1 /* (set! ##sys#load-extension ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7669,a[2]=t10,a[3]=((C_word)li200),tmp=(C_word)a,a+=4,tmp));
t12=C_mutate((C_word*)lf[256]+1 /* (set! ##sys#provide ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7753,a[2]=((C_word)li202),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[257]+1 /* (set! provide ...) */,*((C_word*)lf[256]+1));
t14=C_mutate((C_word*)lf[258]+1 /* (set! ##sys#provided? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7798,a[2]=((C_word)li203),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[259]+1 /* (set! provided? ...) */,*((C_word*)lf[258]+1));
t16=C_mutate((C_word*)lf[117]+1 /* (set! ##sys#require ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7812,a[2]=((C_word)li205),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[260]+1 /* (set! require ...) */,*((C_word*)lf[117]+1));
t18=*((C_word*)lf[231]+1);
t19=*((C_word*)lf[220]+1);
t20=*((C_word*)lf[177]+1);
t21=C_mutate((C_word*)lf[261]+1 /* (set! ##sys#extension-information ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7850,a[2]=t19,a[3]=t20,a[4]=t18,a[5]=((C_word)li207),tmp=(C_word)a,a+=6,tmp));
t22=C_mutate((C_word*)lf[265]+1 /* (set! extension-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7883,a[2]=((C_word)li208),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[119]+1 /* (set! ##sys#lookup-runtime-requirements ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7889,a[2]=((C_word)li210),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[122]+1 /* (set! ##sys#do-the-right-thing ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7938,a[2]=((C_word)li223),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[227]+1 /* (set! ##sys#string->c-identifier ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8501,a[2]=((C_word)li225),tmp=(C_word)a,a+=3,tmp));
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8588,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1336: make-vector */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[305]+1)))(4,*((C_word*)lf[305]+1),t26,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8588(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8588,2,t0,t1);}
t2=C_mutate(&lf[294] /* (set! ##sys#r4rs-environment ...) */,t1);
t3=lf[295] /* r5rs-environment */ =C_SCHEME_FALSE;;
t4=C_a_i_record3(&a,3,lf[296],C_SCHEME_FALSE,C_SCHEME_TRUE);
t5=C_mutate(&lf[297] /* (set! ##sys#interaction-environment ...) */,t4);
t6=C_mutate((C_word*)lf[298]+1 /* (set! ##sys#environment? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8595,a[2]=((C_word)li226),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[299]+1 /* (set! ##sys#copy-env-table ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8611,a[2]=((C_word)li229),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[300]+1 /* (set! ##sys#environment-symbols ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8719,a[2]=((C_word)li233),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[302]+1 /* (set! interaction-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8838,a[2]=((C_word)li234),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[303]+1 /* (set! scheme-report-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8841,a[2]=((C_word)li235),tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[305]+1);
t12=C_mutate((C_word*)lf[306]+1 /* (set! null-environment ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8885,a[2]=t11,a[3]=((C_word)li236),tmp=(C_word)a,a+=4,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8923,a[2]=((C_word)li238),tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8939,a[2]=t13,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1420: initb */
f_8923(t14,lf[294]);}

/* k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8939,2,t0,t1);}
t2=lf[308];
t3=C_i_check_list_2(t2,lf[20]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10058,a[2]=t1,a[3]=t6,a[4]=((C_word)li298),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_10058(t8,t4,t2);}

/* for-each-loop2089 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_fcall f_10058(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10058,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10068,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g20902100 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10066 in for-each-loop2089 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10058(t3,((C_word*)t0)[2],t2);}

/* k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8949,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1441: ##sys#copy-env-table */
t3=*((C_word*)lf[299]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[294],C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8949,2,t0,t1);}
t2=C_mutate(&lf[295] /* (set! ##sys#r5rs-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8952,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1443: initb */
f_8923(t3,lf[295]);}

/* k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8952(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8952,2,t0,t1);}
t2=lf[309];
t3=C_i_check_list_2(t2,lf[20]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8958,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10035,a[2]=t1,a[3]=t6,a[4]=((C_word)li297),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_10035(t8,t4,t2);}

/* for-each-loop2109 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_fcall f_10035(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10035,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10045,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g21102116 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10043 in for-each-loop2109 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10035(t3,((C_word*)t0)[2],t2);}

/* k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8958,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8962,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1450: chicken-home */
t3=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8962(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8962,2,t0,t1);}
t2=(C_truep(t1)?C_a_i_list1(&a,1,t1):C_SCHEME_END_OF_LIST);
t3=C_mutate((C_word*)lf[249]+1 /* (set! ##sys#include-pathnames ...) */,t2);
t4=*((C_word*)lf[220]+1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8968,a[2]=((C_word)li239),tmp=(C_word)a,a+=3,tmp);
t6=C_mutate((C_word*)lf[235]+1 /* (set! ##sys#resolve-include-filename ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8987,a[2]=t4,a[3]=t5,a[4]=((C_word)li243),tmp=(C_word)a,a+=5,tmp));
t7=C_set_block_item(lf[311] /* repl-eval-hook */,0,C_SCHEME_FALSE);
t8=C_set_block_item(lf[312] /* repl-print-length-limit */,0,C_SCHEME_FALSE);
t9=C_set_block_item(lf[313] /* repl-read-hook */,0,C_SCHEME_FALSE);
t10=C_set_block_item(lf[314] /* repl-recent-call-chain */,0,C_SCHEME_FALSE);
t11=C_mutate((C_word*)lf[315]+1 /* (set! ##sys#repl-print-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9140,a[2]=((C_word)li245),tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9157,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10029,a[2]=((C_word)li296),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1499: make-parameter */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[377]+1)))(3,*((C_word*)lf[377]+1),t12,t13);}

/* a10028 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10029,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[376]);}

/* k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9157(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9157,2,t0,t1);}
t2=C_mutate((C_word*)lf[319]+1 /* (set! repl-prompt ...) */,t1);
t3=*((C_word*)lf[319]+1);
t4=C_mutate((C_word*)lf[320]+1 /* (set! ##sys#read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9159,a[2]=t3,a[3]=((C_word)li246),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[323]+1 /* (set! ##sys#clear-trace-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9175,a[2]=((C_word)li247),tmp=(C_word)a,a+=3,tmp));
t6=*((C_word*)lf[160]+1);
t7=*((C_word*)lf[177]+1);
t8=*((C_word*)lf[193]+1);
t9=*((C_word*)lf[220]+1);
t10=C_mutate((C_word*)lf[324]+1 /* (set! repl ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9178,a[2]=t8,a[3]=t6,a[4]=t7,a[5]=t9,a[6]=((C_word)li263),tmp=(C_word)a,a+=7,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9656,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1627: make-vector */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[305]+1)))(4,*((C_word*)lf[305]+1),t11,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9656(C_word c,C_word t0,C_word t1){
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
C_word ab[48],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9656,2,t0,t1);}
t2=C_mutate((C_word*)lf[348]+1 /* (set! ##sys#sharp-comma-reader-ctors ...) */,t1);
t3=C_mutate((C_word*)lf[349]+1 /* (set! define-reader-ctor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9658,a[2]=((C_word)li264),tmp=(C_word)a,a+=3,tmp));
t4=*((C_word*)lf[350]+1);
t5=*((C_word*)lf[351]+1);
t6=*((C_word*)lf[177]+1);
t7=C_mutate((C_word*)lf[350]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9667,a[2]=t4,a[3]=t5,a[4]=t6,a[5]=((C_word)li266),tmp=(C_word)a,a+=6,tmp));
t8=lf[355] /* last-error */ =C_SCHEME_FALSE;;
t9=C_mutate(&lf[356] /* (set! run-safe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9742,a[2]=((C_word)li274),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate(&lf[359] /* (set! store-result ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9801,a[2]=((C_word)li275),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[361] /* (set! CHICKEN_yield ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9810,a[2]=((C_word)li277),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate(&lf[363] /* (set! CHICKEN_eval ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9822,a[2]=((C_word)li279),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate(&lf[364] /* (set! CHICKEN_eval_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9838,a[2]=((C_word)li281),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate(&lf[366] /* (set! store-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9864,a[2]=((C_word)li282),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate(&lf[368] /* (set! CHICKEN_eval_to_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9877,a[2]=((C_word)li284),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate(&lf[369] /* (set! CHICKEN_eval_string_to_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9903,a[2]=((C_word)li286),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate(&lf[370] /* (set! CHICKEN_apply ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9940,a[2]=((C_word)li288),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate(&lf[371] /* (set! CHICKEN_apply_to_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9956,a[2]=((C_word)li290),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate(&lf[372] /* (set! CHICKEN_read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9982,a[2]=((C_word)li292),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate(&lf[373] /* (set! CHICKEN_load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10004,a[2]=((C_word)li294),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate(&lf[374] /* (set! CHICKEN_get_error_message ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10019,a[2]=((C_word)li295),tmp=(C_word)a,a+=3,tmp));
t22=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,C_SCHEME_UNDEFINED);}

/* CHICKEN_get_error_message in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10019(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10019,4,t0,t1,t2,t3);}
t4=lf[355];
/* eval.scm:1751: store-string */
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?f_9864(t4,t3,t2):f_9864(lf[375],t3,t2)));}

/* CHICKEN_load in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10004(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10004,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10008,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_fix(0));}

/* k10006 in CHICKEN_load in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10008,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10013,a[2]=t1,a[3]=((C_word)li293),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1748: run-safe */
f_9742(((C_word*)t0)[2],t2);}

/* a10012 in k10006 in CHICKEN_load in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10013,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10017,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1748: load */
t3=*((C_word*)lf[187]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k10015 in a10012 in k10006 in CHICKEN_load in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* CHICKEN_read in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9982(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9982,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9986,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_fix(0));}

/* k9984 in CHICKEN_read in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9986,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9991,a[2]=t1,a[3]=t2,a[4]=((C_word)li291),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1742: run-safe */
f_9742(((C_word*)t0)[2],t3);}

/* a9990 in k9984 in CHICKEN_read in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9991,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9995,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1744: open-input-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[365]+1)))(3,*((C_word*)lf[365]+1),t2,((C_word*)t0)[2]);}

/* k9993 in a9990 in k9984 in CHICKEN_read in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9995,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1745: read */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[177]+1)))(3,*((C_word*)lf[177]+1),t2,t1);}

/* k10000 in k9993 in a9990 in k9984 in CHICKEN_read in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_10002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1745: store-result */
f_9801(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* CHICKEN_apply_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9956(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_9956,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9962,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t5,a[6]=((C_word)li289),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1735: run-safe */
f_9742(t1,t6);}

/* a9961 in CHICKEN_apply_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9966,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1737: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(2,*((C_word*)lf[29]+1),t2);}

/* k9964 in a9961 in CHICKEN_apply_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9966,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9969,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9980,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9978 in k9964 in a9961 in CHICKEN_apply_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1738: write */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(4,*((C_word*)lf[28]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k9967 in k9964 in a9961 in CHICKEN_apply_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9976,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1739: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(3,*((C_word*)lf[27]+1),t2,((C_word*)t0)[2]);}

/* k9974 in k9967 in k9964 in a9961 in CHICKEN_apply_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1739: store-string */
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_9864(t1,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* CHICKEN_apply in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9940(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9940,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9946,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=((C_word)li287),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1730: run-safe */
f_9742(t1,t5);}

/* a9945 in CHICKEN_apply in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9954,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9952 in a9945 in CHICKEN_apply in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1730: store-result */
f_9801(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* CHICKEN_eval_string_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9903(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9903,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9907,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,C_fix(0));}

/* k9905 in CHICKEN_eval_string_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9907,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9912,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word)li285),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1721: run-safe */
f_9742(((C_word*)t0)[2],t4);}

/* a9911 in k9905 in CHICKEN_eval_string_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9912,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1723: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(2,*((C_word*)lf[29]+1),t2);}

/* k9914 in a9911 in k9905 in CHICKEN_eval_string_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9919,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9930,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9934,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9938,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1724: open-input-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[365]+1)))(3,*((C_word*)lf[365]+1),t5,((C_word*)t0)[2]);}

/* k9936 in k9914 in a9911 in k9905 in CHICKEN_eval_string_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1724: read */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[177]+1)))(3,*((C_word*)lf[177]+1),((C_word*)t0)[2],t1);}

/* k9932 in k9914 in a9911 in k9905 in CHICKEN_eval_string_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1724: eval */
t2=*((C_word*)lf[160]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9928 in k9914 in a9911 in k9905 in CHICKEN_eval_string_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1724: write */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(4,*((C_word*)lf[28]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k9917 in k9914 in a9911 in k9905 in CHICKEN_eval_string_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9926,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1725: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(3,*((C_word*)lf[27]+1),t2,((C_word*)t0)[2]);}

/* k9924 in k9917 in k9914 in a9911 in k9905 in CHICKEN_eval_string_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1725: store-string */
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_9864(t1,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* CHICKEN_eval_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9877(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9877,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9883,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word)li283),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1712: run-safe */
f_9742(t1,t5);}

/* a9882 in CHICKEN_eval_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9883,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1714: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(2,*((C_word*)lf[29]+1),t2);}

/* k9885 in a9882 in CHICKEN_eval_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9887,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9890,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9901,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1715: eval */
t4=*((C_word*)lf[160]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k9899 in k9885 in a9882 in CHICKEN_eval_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1715: write */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(4,*((C_word*)lf[28]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k9888 in k9885 in a9882 in CHICKEN_eval_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9890,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9897,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1716: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(3,*((C_word*)lf[27]+1),t2,((C_word*)t0)[2]);}

/* k9895 in k9888 in k9885 in a9882 in CHICKEN_eval_to_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1716: store-string */
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_9864(t1,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* store-string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static C_word C_fcall f_9864(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t4=C_block_size(t1);
if(C_truep(C_fixnum_greater_or_equal_p(t4,t2))){
t5=C_mutate(&lf[355] /* (set! last-error ...) */,lf[367]);
return(C_SCHEME_FALSE);}
else{
t5=C_copy_result_string(t1,t3,t4);
return(t5);}}

/* CHICKEN_eval_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9838(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9838,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9842,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_fix(0));}

/* k9840 in CHICKEN_eval_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9842,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9847,a[2]=t1,a[3]=t2,a[4]=((C_word)li280),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1693: run-safe */
f_9742(((C_word*)t0)[2],t3);}

/* a9846 in k9840 in CHICKEN_eval_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9847,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9851,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1695: open-input-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[365]+1)))(3,*((C_word*)lf[365]+1),t2,((C_word*)t0)[2]);}

/* k9849 in a9846 in k9840 in CHICKEN_eval_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9851,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9858,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9862,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1696: read */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[177]+1)))(3,*((C_word*)lf[177]+1),t3,t1);}

/* k9860 in k9849 in a9846 in k9840 in CHICKEN_eval_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1696: eval */
t2=*((C_word*)lf[160]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9856 in k9849 in a9846 in k9840 in CHICKEN_eval_string in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1696: store-result */
f_9801(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* CHICKEN_eval in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9822(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9822,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9828,a[2]=t2,a[3]=t3,a[4]=((C_word)li278),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1688: run-safe */
f_9742(t1,t4);}

/* a9827 in CHICKEN_eval in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9828,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9836,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1690: eval */
t3=*((C_word*)lf[160]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9834 in a9827 in CHICKEN_eval in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1690: store-result */
f_9801(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* CHICKEN_yield in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9810,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9816,a[2]=((C_word)li276),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1685: run-safe */
f_9742(t1,t2);}

/* a9815 in CHICKEN_yield in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9816,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9820,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1685: ##sys#thread-yield! */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[362]+1)))(2,*((C_word*)lf[362]+1),t2);}

/* k9818 in a9815 in CHICKEN_yield in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* store-result in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_fcall f_9801(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9801,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9805,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1679: ##sys#gc */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[360]+1)))(3,*((C_word*)lf[360]+1),t4,C_SCHEME_FALSE);}

/* k9803 in store-result in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
t2=C_store_result(((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}}

/* run-safe in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_fcall f_9742(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9742,NULL,2,t1,t2);}
t3=lf[355] /* last-error */ =C_SCHEME_FALSE;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9747,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9752,a[2]=t2,a[3]=((C_word)li273),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[193]+1)))(3,*((C_word*)lf[193]+1),t4,t5);}

/* a9751 in run-safe in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9752(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9752,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9758,a[2]=t2,a[3]=((C_word)li268),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9777,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li272),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[358]+1)))(4,*((C_word*)lf[358]+1),t1,t3,t4);}

/* a9776 in a9751 in run-safe in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9777,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9783,a[2]=((C_word*)t0)[3],a[3]=((C_word)li269),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9789,a[2]=((C_word*)t0)[2],a[3]=((C_word)li271),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a9788 in a9776 in a9751 in run-safe in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9789(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_9789r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_9789r(t0,t1,t2);}}

static void C_ccall f_9789r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9795,a[2]=t2,a[3]=((C_word)li270),tmp=(C_word)a,a+=4,tmp);
/* k23832389 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a9794 in a9788 in a9776 in a9751 in run-safe in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9795,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a9782 in a9776 in a9751 in run-safe in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9783,2,t0,t1);}
/* eval.scm:1672: thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,t1);}

/* a9757 in a9751 in run-safe in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9758(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9758,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9764,a[2]=t2,a[3]=((C_word)li267),tmp=(C_word)a,a+=4,tmp);
/* k23832389 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a9763 in a9757 in a9751 in run-safe in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9764,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9768,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1668: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(2,*((C_word*)lf[29]+1),t2);}

/* k9766 in a9763 in a9757 in a9751 in run-safe in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9771,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1669: print-error-message */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[357]+1)))(4,*((C_word*)lf[357]+1),t2,((C_word*)t0)[2],t1);}

/* k9769 in k9766 in a9763 in a9757 in a9751 in run-safe in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9775,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1670: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(3,*((C_word*)lf[27]+1),t2,((C_word*)t0)[2]);}

/* k9773 in k9769 in k9766 in a9763 in a9757 in a9751 in run-safe in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[355] /* (set! last-error ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* k9745 in run-safe in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g23872388 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* f_9667 in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9667(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9667,4,t0,t1,t2,t3);}
if(C_truep(C_i_char_equalp(t2,C_make_character(44)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9677,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1639: read-char */
t5=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,t3);}
else{
/* eval.scm:1651: old */
t4=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,t2,t3);}}

/* k9675 */
static void C_ccall f_9677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9677,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9680,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1640: read */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[4]);}

/* k9678 in k9675 */
static void C_ccall f_9680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9680,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9681,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li265),tmp=(C_word)a,a+=5,tmp);
t3=C_i_nullp(t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9694,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_9694(t5,t3);}
else{
t5=C_i_listp(t1);
t6=t4;
f_9694(t6,C_i_not(t5));}}

/* k9692 in k9678 in k9675 */
static void C_fcall f_9694(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9694,NULL,2,t0,t1);}
if(C_truep(t1)){
/* eval.scm:1643: err */
t2=((C_word*)t0)[5];
f_9681(t2,((C_word*)t0)[4]);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(0));
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9712,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1647: ##sys#hash-table-ref */
t4=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[348]+1),t2);}
else{
/* eval.scm:1646: err */
t3=((C_word*)t0)[5];
f_9681(t3,((C_word*)t0)[4]);}}}

/* k9710 in k9692 in k9678 in k9675 */
static void C_ccall f_9712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[5],C_fix(1));
C_apply(4,0,((C_word*)t0)[4],t1,t2);}
else{
/* eval.scm:1650: ##sys#read-error */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[352]+1)))(5,*((C_word*)lf[352]+1),((C_word*)t0)[4],((C_word*)t0)[3],lf[354],((C_word*)t0)[2]);}}

/* err in k9678 in k9675 */
static void C_fcall f_9681(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9681,NULL,2,t0,t1);}
/* eval.scm:1641: ##sys#read-error */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[352]+1)))(5,*((C_word*)lf[352]+1),t1,((C_word*)t0)[3],lf[353],((C_word*)t0)[2]);}

/* f_9658 in k9654 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9658(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9658,4,t0,t1,t2,t3);}
t4=C_i_check_symbol_2(t2,lf[349]);
/* eval.scm:1631: ##sys#hash-table-set! */
t5=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,*((C_word*)lf[348]+1),t2,t3);}

/* f_9178 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9178(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9178,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9181,a[2]=((C_word)li249),tmp=(C_word)a,a+=3,tmp));
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9218,a[2]=((C_word*)t0)[5],a[3]=((C_word)li251),tmp=(C_word)a,a+=4,tmp));
t8=*((C_word*)lf[329]+1);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=*((C_word*)lf[322]+1);
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=*((C_word*)lf[325]+1);
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9304,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=t13,a[9]=t11,a[10]=t9,tmp=(C_word)a,a+=11,tmp);
/* eval.scm:1532: ##sys#error-handler */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[339]+1)))(2,*((C_word*)lf[339]+1),t14);}

/* k9302 */
static void C_ccall f_9304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9307,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:1533: ##sys#reset-handler */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[347]+1)))(2,*((C_word*)lf[347]+1),t2);}

/* k9305 in k9302 */
static void C_ccall f_9307(C_word c,C_word t0,C_word t1){
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
C_word ab[38],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9307,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=*((C_word*)lf[31]+1);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9309,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp));
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9315,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp));
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9324,a[2]=((C_word*)t0)[8],a[3]=t8,a[4]=t3,a[5]=((C_word)li253),tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9418,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t6,a[8]=((C_word)li261),tmp=(C_word)a,a+=9,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9641,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,a[6]=((C_word)li262),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1547: ##sys#dynamic-wind */
t14=*((C_word*)lf[109]+1);
((C_proc5)(void*)(*((C_word*)t14+1)))(5,t14,((C_word*)t0)[2],t11,t12,t13);}

/* a9640 in k9305 in k9302 */
static void C_ccall f_9641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9645,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1619: load-verbose */
t3=*((C_word*)lf[163]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k9643 in a9640 in k9305 in k9302 */
static void C_ccall f_9645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9645,2,t0,t1);}
t2=C_mutate((C_word*)lf[31]+1 /* (set! ##sys#unbound-in-eval ...) */,((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9649,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1621: ##sys#error-handler */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[339]+1)))(3,*((C_word*)lf[339]+1),t3,((C_word*)t0)[2]);}

/* k9647 in k9643 in a9640 in k9305 in k9302 */
static void C_ccall f_9649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1622: ##sys#reset-handler */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[347]+1)))(3,*((C_word*)lf[347]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a9417 in k9305 in k9302 */
static void C_ccall f_9418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9418,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li260),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_9424(t5,t1);}

/* loop in a9417 in k9305 in k9302 */
static void C_fcall f_9424(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9424,NULL,2,t0,t1);}
t2=f_9309(((C_word*)((C_word*)t0)[8])[1]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9431,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9624,a[2]=((C_word*)t0)[3],a[3]=((C_word)li259),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1579: call-with-current-continuation */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}

/* a9623 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9624(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9624,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9630,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li258),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1581: ##sys#reset-handler */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[347]+1)))(3,*((C_word*)lf[347]+1),t1,t3);}

/* a9629 in a9623 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9630,2,t0,t1);}
t2=C_set_block_item(lf[183] /* read-error-with-line-number */,0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[346] /* enable-qualifiers */,0,C_SCHEME_TRUE);
t4=f_9315(((C_word*)((C_word*)t0)[3])[1]);
/* eval.scm:1586: c */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t1,C_SCHEME_FALSE);}

/* k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1587: ##sys#read-prompt-hook */
t3=*((C_word*)lf[320]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9434,2,t0,t1);}
t2=*((C_word*)lf[313]+1);
t3=(C_truep(t2)?t2:((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* g22962297 */
t5=t3;
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t4);}

/* k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9440,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9449,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9622,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1590: ##sys#peek-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[345]+1)))(3,*((C_word*)lf[345]+1),t3,*((C_word*)lf[329]+1));}}

/* k9620 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_char_equalp(C_make_character(10),t1))){
/* eval.scm:1591: ##sys#read-char-0 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[344]+1)))(3,*((C_word*)lf[344]+1),((C_word*)t0)[2],*((C_word*)lf[329]+1));}
else{
t2=((C_word*)t0)[2];
f_9449(2,t2,C_SCHEME_UNDEFINED);}}

/* k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9449,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9452,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1592: ##sys#clear-trace-buffer */
t3=*((C_word*)lf[323]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9452,2,t0,t1);}
t2=C_set_block_item(lf[31] /* unbound-in-eval */,0,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9458,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li254),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9467,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li257),tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t3,t4);}

/* a9466 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9467(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_9467r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_9467r(t0,t1,t2);}}

static void C_ccall f_9467r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9471,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(*((C_word*)lf[340]+1))?C_i_pairp(*((C_word*)lf[31]+1)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9485,a[2]=t6,a[3]=((C_word)li256),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_9485(t8,t3,*((C_word*)lf[31]+1),C_SCHEME_END_OF_LIST);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f11264,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1616: write-results */
t6=((C_word*)((C_word*)t0)[2])[1];
f_9218(t6,t5,t2);}}

/* f11264 in a9466 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f11264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1617: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_9424(t2,((C_word*)t0)[2]);}

/* loop in a9466 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_fcall f_9485(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_9485,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9489,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_pairp(t3))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9501,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1599: ##sys#notice */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(3,*((C_word*)lf[67]+1),t5,lf[343]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fix(9));}}
else{
t5=C_i_caar(t2);
t6=C_i_memq(t5,t3);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9576,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t8=t7;
f_9576(2,t8,t6);}
else{
t8=C_i_caar(t2);
/* eval.scm:1613: ##sys#symbol-has-toplevel-binding? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[48]+1)))(3,*((C_word*)lf[48]+1),t7,t8);}}}

/* k9574 in loop in a9466 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9576,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[5]);
/* eval.scm:1614: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_9485(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=C_i_cdr(((C_word*)t0)[5]);
t3=C_i_car(((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
/* eval.scm:1615: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_9485(t5,((C_word*)t0)[3],t2,t4);}}

/* k9499 in loop in a9466 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9501(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9501,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_i_check_list_2(t2,lf[20]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9541,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9546,a[2]=t6,a[3]=((C_word)li255),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_9546(t8,t4,t2);}

/* for-each-loop2316 in k9499 in loop in a9466 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_fcall f_9546(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9546,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9556,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9506,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1603: ##sys#print */
t6=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[342],C_SCHEME_FALSE,*((C_word*)lf[325]+1));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9504 in for-each-loop2316 in k9499 in loop in a9466 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* eval.scm:1604: ##sys#print */
t4=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_TRUE,*((C_word*)lf[325]+1));}

/* k9507 in k9504 in for-each-loop2316 in k9499 in loop in a9466 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9509,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9512,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_cdr(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9521,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1606: ##sys#print */
t4=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[341],C_SCHEME_FALSE,*((C_word*)lf[325]+1));}
else{
/* eval.scm:1609: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[316]+1)))(4,*((C_word*)lf[316]+1),((C_word*)t0)[3],C_make_character(10),*((C_word*)lf[325]+1));}}

/* k9519 in k9507 in k9504 in for-each-loop2316 in k9499 in loop in a9466 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9521,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9524,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* eval.scm:1607: ##sys#print */
t4=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_TRUE,*((C_word*)lf[325]+1));}

/* k9522 in k9519 in k9507 in k9504 in for-each-loop2316 in k9499 in loop in a9466 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1608: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[316]+1)))(4,*((C_word*)lf[316]+1),((C_word*)t0)[2],C_make_character(41),*((C_word*)lf[325]+1));}

/* k9510 in k9507 in k9504 in for-each-loop2316 in k9499 in loop in a9466 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1609: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[316]+1)))(4,*((C_word*)lf[316]+1),((C_word*)t0)[2],C_make_character(10),*((C_word*)lf[325]+1));}

/* k9554 in for-each-loop2316 in k9499 in loop in a9466 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9546(t3,((C_word*)t0)[2],t2);}

/* k9539 in k9499 in loop in a9466 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1611: ##sys#flush-output */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[321]+1)))(3,*((C_word*)lf[321]+1),((C_word*)t0)[2],*((C_word*)lf[325]+1));}

/* k9487 in loop in a9466 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(9));}

/* k9469 in a9466 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9471,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9474,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1616: write-results */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9218(t3,t2,((C_word*)t0)[2]);}

/* k9472 in k9469 in a9466 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1617: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_9424(t2,((C_word*)t0)[2]);}

/* a9457 in k9450 in k9447 in k9438 in k9432 in k9429 in loop in a9417 in k9305 in k9302 */
static void C_ccall f_9458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9458,2,t0,t1);}
t2=*((C_word*)lf[311]+1);
if(C_truep(t2)){
/* g23012302 */
t3=t2;
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t1,((C_word*)t0)[3]);}
else{
/* g23012302 */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t1,((C_word*)t0)[3]);}}

/* a9323 in k9305 in k9302 */
static void C_ccall f_9324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9329,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1549: load-verbose */
t3=*((C_word*)lf[163]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9327 in a9323 in k9305 in k9302 */
static void C_ccall f_9329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9329,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1550: load-verbose */
t4=*((C_word*)lf[163]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}

/* k9330 in k9327 in a9323 in k9305 in k9302 */
static void C_ccall f_9332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9332,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9337,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li252),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1551: ##sys#error-handler */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[339]+1)))(3,*((C_word*)lf[339]+1),((C_word*)t0)[2],t2);}

/* a9336 in k9330 in k9327 in a9323 in k9305 in k9302 */
static void C_ccall f_9337(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_9337r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_9337r(t0,t1,t2,t3);}}

static void C_ccall f_9337r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t4=f_9315(((C_word*)((C_word*)t0)[3])[1]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9344,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1554: ##sys#print */
t6=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[338],C_SCHEME_FALSE,*((C_word*)lf[325]+1));}

/* k9342 in a9336 in k9330 in k9327 in a9323 in k9305 in k9302 */
static void C_ccall f_9344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9347,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9413,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1556: ##sys#print */
t4=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[337],C_SCHEME_FALSE,*((C_word*)lf[325]+1));}
else{
t3=t2;
f_9347(2,t3,C_SCHEME_UNDEFINED);}}

/* k9411 in k9342 in a9336 in k9330 in k9327 in a9323 in k9305 in k9302 */
static void C_ccall f_9413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1557: ##sys#print */
t2=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,*((C_word*)lf[325]+1));}

/* k9345 in k9342 in a9336 in k9330 in k9327 in a9323 in k9305 in k9302 */
static void C_ccall f_9347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9350,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9388,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t4=C_i_cdr(((C_word*)t0)[2]);
t5=t3;
f_9388(t5,C_i_nullp(t4));}
else{
t4=t3;
f_9388(t4,C_SCHEME_FALSE);}}

/* k9386 in k9345 in k9342 in a9336 in k9330 in k9327 in a9323 in k9305 in k9302 */
static void C_fcall f_9388(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9388,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1560: ##sys#print */
t3=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[336],C_SCHEME_FALSE,*((C_word*)lf[325]+1));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9397,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1563: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[316]+1)))(4,*((C_word*)lf[316]+1),t2,C_make_character(10),*((C_word*)lf[325]+1));}}

/* k9395 in k9386 in k9345 in k9342 in a9336 in k9330 in k9327 in a9323 in k9305 in k9302 */
static void C_ccall f_9397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1564: write-err */
f_9181(((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9389 in k9386 in k9345 in k9342 in a9336 in k9330 in k9327 in a9323 in k9305 in k9302 */
static void C_ccall f_9391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1561: write-err */
f_9181(((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9348 in k9345 in k9342 in a9336 in k9330 in k9327 in a9323 in k9305 in k9302 */
static void C_ccall f_9350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9350,2,t0,t1);}
t2=*((C_word*)lf[330]+1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9354,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
if(C_truep(C_i_structurep(t2,lf[332]))){
t4=C_slot(t2,C_fix(2));
t5=C_i_member(lf[333],t4);
if(C_truep(t5)){
t6=C_i_cadr(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9381,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1570: ##sys#really-print-call-chain */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[334]+1)))(5,*((C_word*)lf[334]+1),t7,*((C_word*)lf[325]+1),t6,lf[335]);}
else{
t6=t3;
f_9354(t6,C_SCHEME_FALSE);}}
else{
t4=t3;
f_9354(t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_9354(t4,C_SCHEME_FALSE);}}

/* k9379 in k9348 in k9345 in k9342 in a9336 in k9330 in k9327 in a9323 in k9305 in k9302 */
static void C_ccall f_9381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_9354(t2,((C_word*)t0)[2]);}

/* k9352 in k9348 in k9345 in k9342 in a9336 in k9330 in k9327 in a9323 in k9305 in k9302 */
static void C_fcall f_9354(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9354,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9357,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t1;
t4=C_mutate((C_word*)lf[314]+1 /* (set! ##sys#repl-recent-call-chain ...) */,t3);
/* eval.scm:1575: flush-output */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[199]+1)))(3,*((C_word*)lf[199]+1),((C_word*)t0)[2],*((C_word*)lf[325]+1));}
else{
/* eval.scm:1574: print-call-chain */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[331]+1)))(3,*((C_word*)lf[331]+1),t2,*((C_word*)lf[325]+1));}}

/* k9355 in k9352 in k9348 in k9345 in k9342 in a9336 in k9330 in k9327 in a9323 in k9305 in k9302 */
static void C_ccall f_9357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[314]+1 /* (set! ##sys#repl-recent-call-chain ...) */,t1);
/* eval.scm:1575: flush-output */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[199]+1)))(3,*((C_word*)lf[199]+1),((C_word*)t0)[2],*((C_word*)lf[325]+1));}

/* resetports in k9305 in k9302 */
static C_word C_fcall f_9315(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t1=C_mutate((C_word*)lf[329]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[4])[1]);
t2=C_mutate((C_word*)lf[322]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate((C_word*)lf[325]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[2])[1]);
return(t3);}

/* saveports in k9305 in k9302 */
static C_word C_fcall f_9309(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t1=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[329]+1));
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[322]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[325]+1));
return(t3);}

/* write-results */
static void C_fcall f_9218(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_9218,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* eval.scm:1521: ##sys#print */
t3=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[326],C_SCHEME_FALSE,*((C_word*)lf[322]+1));}
else{
t3=C_i_car(t2);
t4=C_eqp(C_SCHEME_UNDEFINED,t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=t2;
t6=C_i_check_list_2(t5,lf[20]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9245,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9272,a[2]=t9,a[3]=((C_word)li250),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_9272(t11,t7,t5);}}}

/* for-each-loop2234 in write-results */
static void C_fcall f_9272(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9272,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9282,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[315]+1);
/* g22492250 */
t6=t5;
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t3,t4,*((C_word*)lf[322]+1));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9280 in for-each-loop2234 in write-results */
static void C_ccall f_9282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9272(t3,((C_word*)t0)[2],t2);}

/* k9243 in write-results */
static void C_ccall f_9245(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9245,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[4]);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9258,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9262,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_i_length(((C_word*)t0)[4]);
/* eval.scm:1526: ##sys#number->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[274]+1)))(3,*((C_word*)lf[274]+1),t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9260 in k9243 in write-results */
static void C_ccall f_9262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1526: string-append */
t2=((C_word*)t0)[3];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],lf[327],t1,lf[328]);}

/* k9256 in k9243 in write-results */
static void C_ccall f_9258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1525: ##sys#print */
t2=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,*((C_word*)lf[322]+1));}

/* write-err */
static void C_fcall f_9181(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9181,NULL,2,t1,t2);}
t3=C_i_check_list_2(t2,lf[20]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9195,a[2]=t5,a[3]=((C_word)li248),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_9195(t7,t1,t2);}

/* for-each-loop2206 in write-err */
static void C_fcall f_9195(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9195,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9205,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[315]+1);
/* g22212222 */
t6=t5;
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t3,t4,*((C_word*)lf[325]+1));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9203 in for-each-loop2206 in write-err */
static void C_ccall f_9205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9195(t3,((C_word*)t0)[2],t2);}

/* f_9175 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9175,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub2194(C_SCHEME_UNDEFINED));}

/* f_9159 in k9155 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9159,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9163,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9170,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1504: repl-prompt */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k9168 */
static void C_ccall f_9170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9170,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9173,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* g21902191 */
t3=t1;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k9171 in k9168 */
static void C_ccall f_9173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1504: ##sys#print */
t2=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,*((C_word*)lf[322]+1));}

/* k9161 */
static void C_ccall f_9163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1505: ##sys#flush-output */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[321]+1)))(3,*((C_word*)lf[321]+1),((C_word*)t0)[2],*((C_word*)lf[322]+1));}

/* f_9140 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_9140(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9140,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9144,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9149,a[2]=t3,a[3]=t2,a[4]=((C_word)li244),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1496: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[318]+1)))(4,*((C_word*)lf[318]+1),t4,*((C_word*)lf[312]+1),t5);}

/* a9148 */
static void C_ccall f_9149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9149,2,t0,t1);}
t2=*((C_word*)lf[317]+1);
/* g21842185 */
t3=t2;
((C_proc5)C_fast_retrieve_proc(t3))(5,t3,t1,((C_word*)t0)[3],C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* k9142 */
static void C_ccall f_9144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1497: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[316]+1)))(4,*((C_word*)lf[316]+1),((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* f_8987 in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8987(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_8987r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_8987r(t0,t1,t2,t3,t4);}}

static void C_ccall f_8987r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8991,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_8991(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_8991(2,t7,C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k8989 */
static void C_ccall f_8991(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8991,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8993,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=((C_word)li240),tmp=(C_word)a,a+=5,tmp));
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9028,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word)li241),tmp=(C_word)a,a+=5,tmp));
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9058,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1472: test */
t9=((C_word*)t5)[1];
f_9028(t9,t8,((C_word*)t0)[3]);}

/* k9056 in k8989 */
static void C_ccall f_9058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9058,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9068,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9105,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1476: ##sys#repository-path */
t4=*((C_word*)lf[242]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_9068(2,t3,*((C_word*)lf[249]+1));}}}

/* k9103 in k9056 in k8989 */
static void C_ccall f_9105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9105,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9115,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1478: ##sys#repository-path */
t3=*((C_word*)lf[242]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* eval.scm:1474: ##sys#append */
t2=*((C_word*)lf[79]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],*((C_word*)lf[249]+1),C_SCHEME_END_OF_LIST);}}

/* k9113 in k9103 in k9056 in k8989 */
static void C_ccall f_9115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9115,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* eval.scm:1474: ##sys#append */
t3=*((C_word*)lf[79]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],*((C_word*)lf[249]+1),t2);}

/* k9066 in k9056 in k8989 */
static void C_ccall f_9068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9068,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9070,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word)li242),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_9070(t5,((C_word*)t0)[2],t1);}

/* loop in k9066 in k9056 in k8989 */
static void C_fcall f_9070(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9070,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=((C_word*)t0)[5];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9080,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9094,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=C_slot(t2,C_fix(0));
/* eval.scm:1482: string-append */
t7=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t7))(5,t7,t5,t6,lf[310],((C_word*)t0)[5]);}}

/* k9092 in loop in k9066 in k9056 in k8989 */
static void C_ccall f_9094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1482: test */
t2=((C_word*)((C_word*)t0)[3])[1];
f_9028(t2,((C_word*)t0)[2],t1);}

/* k9078 in loop in k9066 in k9056 in k8989 */
static void C_ccall f_9080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm:1485: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9070(t3,((C_word*)t0)[4],t2);}}

/* test in k8989 */
static void C_fcall f_9028(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9028,NULL,3,t0,t1,t2);}
t3=C_fudge(C_fix(24));
t4=(C_truep(t3)?(C_truep(((C_word*)t0)[3])?C_a_i_list2(&a,2,lf[7],*((C_word*)lf[203]+1)):C_a_i_list2(&a,2,*((C_word*)lf[203]+1),lf[7])):C_a_i_list1(&a,1,lf[7]));
/* eval.scm:1467: test2 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_8993(t5,t1,t2,t4);}

/* test2 in k8989 */
static void C_fcall f_8993(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8993,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9006,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1461: exists? */
f_8968(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9009,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=C_i_car(t3);
/* eval.scm:1462: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,t2,t5);}}

/* k9007 in test2 in k8989 */
static void C_ccall f_9009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9015,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1463: exists? */
f_8968(t2,t1);}

/* k9013 in k9007 in test2 in k8989 */
static void C_ccall f_9015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}
else{
t2=C_i_cdr(((C_word*)t0)[4]);
/* eval.scm:1465: test2 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8993(t3,((C_word*)t0)[6],((C_word*)t0)[2],t2);}}

/* k9004 in test2 in k8989 */
static void C_ccall f_9006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[2]:C_SCHEME_FALSE));}

/* exists? in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_fcall f_8968(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8968,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8972,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1456: ##sys#file-info */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[202]+1)))(3,*((C_word*)lf[202]+1),t3,t2);}

/* k8970 in exists? in k8960 in k8956 in k8950 in k8947 in k8943 in k8937 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_slot(t1,C_fix(4));
t3=C_eqp(C_fix(1),t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_not(t3));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* initb in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_fcall f_8923(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8923,NULL,2,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8925,a[2]=t2,a[3]=((C_word)li237),tmp=(C_word)a,a+=4,tmp));}

/* f_8925 in initb in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8925(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8925,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8929,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1417: ##sys#hash-table-location */
t4=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],t2,C_SCHEME_TRUE);}

/* k8927 */
static void C_ccall f_8929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[3],C_fix(0));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_setslot(t1,C_fix(1),t2));}

/* f_8885 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8885(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_8885r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8885r(t0,t1,t2,t3);}}

static void C_ccall f_8885r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[306]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8892,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=C_fixnum_lessp(t2,C_fix(4));
if(C_truep(t6)){
if(C_truep(t6)){
/* eval.scm:1408: ##sys#error */
t7=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[306],lf[307],t2);}
else{
t7=t5;
f_8892(2,t7,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(C_fixnum_greaterp(t2,C_fix(5)))){
/* eval.scm:1408: ##sys#error */
t7=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[306],lf[307],t2);}
else{
t7=t5;
f_8892(2,t7,C_SCHEME_UNDEFINED);}}}

/* k8890 */
static void C_ccall f_8892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8892,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8899,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1411: make-vector */
t3=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k8897 in k8890 */
static void C_ccall f_8899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8899,2,t0,t1);}
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=C_i_car(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record3(&a,3,lf[296],t1,t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record3(&a,3,lf[296],t1,C_SCHEME_FALSE));}}

/* f_8841 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8841(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_8841r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8841r(t0,t1,t2,t3);}}

static void C_ccall f_8841r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(4);
t4=C_i_check_exact_2(t2,lf[303]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_i_car(t3):C_SCHEME_FALSE);
t7=t2;
switch(t7){
case C_fix(4):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8861,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1399: ##sys#copy-env-table */
t9=*((C_word*)lf[299]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[294],C_SCHEME_TRUE,t6);
case C_fix(5):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8874,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1400: ##sys#copy-env-table */
t9=*((C_word*)lf[299]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[295],C_SCHEME_TRUE,t6);
default:
/* eval.scm:1401: ##sys#error */
t8=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,lf[303],lf[304],t2);}}

/* k8872 */
static void C_ccall f_8874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8874,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record3(&a,3,lf[296],t1,((C_word*)t0)[2]));}

/* k8859 */
static void C_ccall f_8861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8861,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record3(&a,3,lf[296],t1,((C_word*)t0)[2]));}

/* f_8838 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8838,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[297]);}

/* f_8719 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8719(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_8719r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8719r(t0,t1,t2,t3);}}

static void C_ccall f_8719r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(11);
t4=C_i_check_structure(t2,lf[296]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_i_car(t3):C_SCHEME_FALSE);
t7=C_slot(t2,C_fix(1));
if(C_truep(t7)){
t8=C_i_vector_length(t7);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8740,a[2]=t6,a[3]=t7,a[4]=t10,a[5]=t8,a[6]=((C_word)li231),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_8740(t12,t1,C_fix(0),C_SCHEME_END_OF_LIST);}
else{
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8811,a[2]=t1,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8813,a[2]=t9,a[3]=t6,a[4]=((C_word)li232),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1386: ##sys#walk-namespace */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[301]+1)))(3,*((C_word*)lf[301]+1),t10,t11);}}

/* a8812 */
static void C_ccall f_8813(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8813,3,t0,t1,t2);}
t3=C_i_not(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8823,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=t4;
f_8823(2,t5,t3);}
else{
/* eval.scm:1388: pred */
t5=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,t2);}}

/* k8821 in a8812 */
static void C_ccall f_8823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8823,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k8809 */
static void C_ccall f_8811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* doloop2045 */
static void C_fcall f_8740(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_8740,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_fixnum_plus(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8758,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=C_i_vector_ref(((C_word*)t0)[3],t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8764,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=((C_word)li230),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_8764(t10,t5,t6,t3);}}

/* loop in doloop2045 */
static void C_fcall f_8764(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_8764,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=C_i_vector_ref(t4,C_fix(0));
t6=C_i_not(((C_word*)t0)[3]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8783,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t5,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t8=t7;
f_8783(2,t8,t6);}
else{
/* eval.scm:1380: pred */
t8=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t7,t5);}}}

/* k8781 in loop in doloop2045 */
static void C_ccall f_8783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8783,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[6]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
/* eval.scm:1381: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_8764(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=C_i_cdr(((C_word*)t0)[6]);
/* eval.scm:1382: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8764(t3,((C_word*)t0)[2],t2,((C_word*)t0)[4]);}}

/* k8756 in doloop2045 */
static void C_ccall f_8758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_8740(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_8611 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8611(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_8611r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_8611r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_8611r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_car(t5):C_SCHEME_FALSE);
t8=C_block_size(t2);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8621,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t7,a[6]=t2,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
/* eval.scm:1347: ##sys#make-vector */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[75]+1)))(4,*((C_word*)lf[75]+1),t9,t8,C_SCHEME_END_OF_LIST);}

/* k8619 */
static void C_ccall f_8621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8621,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8626,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word)li228),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_8626(t5,((C_word*)t0)[2],C_fix(0));}

/* doloop2025 in k8619 */
static void C_fcall f_8626(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_8626,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[8]))){
t3=((C_word*)t0)[7];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8647,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=((C_word)li227),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_8653(t8,t3,t4);}}

/* copy in doloop2025 in k8619 */
static void C_fcall f_8653(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(9);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8653,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_i_not(((C_word*)t0)[5]);
t6=(C_truep(t5)?t5:C_i_memq(t4,((C_word*)t0)[5]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8682,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=C_slot(t3,C_fix(1));
if(C_truep(((C_word*)t0)[3])){
t9=((C_word*)t0)[2];
t10=t7;
f_8682(t10,C_a_i_vector3(&a,3,t4,t8,t9));}
else{
t9=C_slot(t3,C_fix(2));
t10=t7;
f_8682(t10,C_a_i_vector3(&a,3,t4,t8,t9));}}
else{
t7=C_slot(t2,C_fix(1));
/* eval.scm:1363: copy */
t13=t1;
t14=t7;
t1=t13;
t2=t14;
goto loop;}}}

/* k8680 in copy in doloop2025 in k8619 */
static void C_fcall f_8682(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8682,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8686,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm:1362: copy */
t4=((C_word*)((C_word*)t0)[2])[1];
f_8653(t4,t2,t3);}

/* k8684 in k8680 in copy in doloop2025 in k8619 */
static void C_ccall f_8686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8686,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k8645 in doloop2025 in k8619 */
static void C_ccall f_8647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_8626(t4,((C_word*)t0)[2],t3);}

/* f_8595 in k8586 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8595(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8595,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[296]))){
t3=C_block_size(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(C_fix(3),t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_8501 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_8501(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8501,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8505,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1320: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(2,*((C_word*)lf[29]+1),t3);}

/* k8503 */
static void C_ccall f_8505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8505,2,t0,t1);}
t2=C_i_string_length(((C_word*)t0)[3]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8513,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=((C_word)li224),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_8513(t6,((C_word*)t0)[2],C_fix(0));}

/* doloop1997 in k8503 */
static void C_fcall f_8513(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_8513,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
/* eval.scm:1323: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(3,*((C_word*)lf[27]+1),t1,((C_word*)t0)[4]);}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8529,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8539,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_u_i_char_alphabeticp(t3))){
t6=t5;
f_8539(t6,C_SCHEME_FALSE);}
else{
t6=C_u_i_char_numericp(t3);
t7=C_i_not(t6);
t8=t5;
f_8539(t8,(C_truep(t7)?t7:C_eqp(t2,C_fix(0))));}}}

/* k8537 in doloop1997 in k8503 */
static void C_fcall f_8539(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8539,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_fix(C_character_code(((C_word*)t0)[4]));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8545,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t4=*((C_word*)lf[293]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(95),((C_word*)t0)[2]);}
else{
/* write-char/port */
t2=*((C_word*)lf[293]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k8543 in k8537 in doloop1997 in k8503 */
static void C_ccall f_8545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8548,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[2],C_fix(16)))){
/* write-char/port */
t3=*((C_word*)lf[293]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(48),((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f12100,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1330: number->string */
C_number_to_string(4,0,t3,((C_word*)t0)[2],C_fix(16));}}

/* f12100 in k8543 in k8537 in doloop1997 in k8503 */
static void C_ccall f12100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1330: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[178]+1)))(4,*((C_word*)lf[178]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k8546 in k8543 in k8537 in doloop1997 in k8503 */
static void C_ccall f_8548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8548,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8555,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1330: number->string */
C_number_to_string(4,0,t2,((C_word*)t0)[2],C_fix(16));}

/* k8553 in k8546 in k8543 in k8537 in doloop1997 in k8503 */
static void C_ccall f_8555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1330: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[178]+1)))(4,*((C_word*)lf[178]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k8527 in doloop1997 in k8503 */
static void C_ccall f_8529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8513(t3,((C_word*)t0)[2],t2);}

/* f_7938 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7938(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[31],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7938,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7941,a[2]=t3,a[3]=((C_word)li213),tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7966,a[2]=t4,a[3]=((C_word)li214),tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7999,a[2]=((C_word)li215),tmp=(C_word)a,a+=3,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8022,a[2]=t6,a[3]=t3,a[4]=t8,a[5]=((C_word)li217),tmp=(C_word)a,a+=6,tmp));
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8306,a[2]=t1,a[3]=t10,a[4]=t12,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t18=C_i_car(t2);
t19=t17;
f_8306(t19,C_i_symbolp(t18));}
else{
t18=t17;
f_8306(t18,C_SCHEME_FALSE);}}

/* k8304 */
static void C_fcall f_8306(C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8306,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_eqp(t2,lf[286]);
if(C_truep(t3)){
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8323,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word)li220),tmp=(C_word)a,a+=6,tmp);
t11=C_i_cdr(((C_word*)t0)[5]);
t12=C_i_check_list_2(t11,lf[71]);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8352,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8354,a[2]=t10,a[3]=t7,a[4]=t15,a[5]=t9,a[6]=((C_word)li221),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_8354(t17,t13,t11);}
else{
t4=C_eqp(t2,lf[287]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8396,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_8396(t6,t4);}
else{
t6=C_eqp(t2,lf[289]);
if(C_truep(t6)){
t7=t5;
f_8396(t7,t6);}
else{
t7=C_eqp(t2,lf[290]);
t8=t5;
f_8396(t8,(C_truep(t7)?t7:C_eqp(t2,lf[291])));}}}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[5]))){
/* eval.scm:1313: doit */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8022(t2,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[5]);}
else{
/* eval.scm:1314: ##sys#error */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[292],((C_word*)t0)[5]);}}}

/* k8394 in k8304 */
static void C_fcall f_8396(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8396,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8401,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li222),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_8401(t5,((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
/* eval.scm:1311: ##sys#error */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[288],((C_word*)t0)[4]);}}

/* follow in k8394 in k8304 */
static void C_fcall f_8401(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8401,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_cdr(t2);
t5=t3;
f_8408(t5,C_i_pairp(t4));}
else{
t4=t3;
f_8408(t4,C_SCHEME_FALSE);}}

/* k8406 in follow in k8394 in k8304 */
static void C_fcall f_8408(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8408,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_car(((C_word*)t0)[4]);
t4=C_eqp(lf[286],t3);
if(C_truep(t4)){
t5=C_i_cddr(((C_word*)t0)[4]);
t6=t2;
f_8414(t6,C_i_nullp(t5));}
else{
t5=t2;
f_8414(t5,C_SCHEME_FALSE);}}
else{
/* eval.scm:1310: doit */
t2=((C_word*)((C_word*)t0)[7])[1];
f_8022(t2,((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[5]);}}

/* k8412 in k8406 in follow in k8394 in k8304 */
static void C_fcall f_8414(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8414,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8421,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* eval.scm:1308: srfi-id */
f_7999(t2,t3);}
else{
t2=C_i_cadr(((C_word*)t0)[4]);
/* eval.scm:1309: follow */
t3=((C_word*)((C_word*)t0)[2])[1];
f_8401(t3,((C_word*)t0)[6],t2);}}

/* k8419 in k8412 in k8406 in follow in k8394 in k8304 */
static void C_ccall f_8421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1308: doit */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8022(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* map-loop1937 in k8304 */
static void C_fcall f_8354(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8354,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8383,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g19431952 */
t5=((C_word*)t0)[2];
f_8323(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8381 in map-loop1937 in k8304 */
static void C_ccall f_8383(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8383,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8354(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8354(t6,((C_word*)t0)[3],t5);}}

/* k8350 in k8304 */
static void C_ccall f_8352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8352,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[60],t1);
/* eval.scm:1303: values */
C_values(4,0,((C_word*)t0)[3],t2,((C_word*)((C_word*)t0)[2])[1]);}

/* g1943 in k8304 */
static void C_fcall f_8323(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8323,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8327,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1298: srfi-id */
f_7999(t3,t2);}

/* k8325 in g1943 in k8304 */
static void C_ccall f_8327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8332,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li218),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8338,a[2]=((C_word*)t0)[3],a[3]=((C_word)li219),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a8337 in k8325 in g1943 in k8304 */
static void C_ccall f_8338(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8338,4,t0,t1,t2,t3);}
t4=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t4)){
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}
else{
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}}

/* a8331 in k8325 in g1943 in k8304 */
static void C_ccall f_8332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8332,2,t0,t1);}
/* eval.scm:1299: doit */
t2=((C_word*)((C_word*)t0)[3])[1];
f_8022(t2,t1,((C_word*)t0)[2],((C_word*)t0)[2]);}

/* doit */
static void C_fcall f_8022(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8022,NULL,4,t0,t1,t2,t3);}
t4=C_i_memq(t2,lf[278]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_8032(2,t6,t4);}
else{
if(C_truep(((C_word*)t0)[3])){
t6=t5;
f_8032(2,t6,C_i_memq(t2,lf[284]));}
else{
/* eval.scm:1238: ##sys#feature? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[285]+1)))(3,*((C_word*)lf[285]+1),t5,t2);}}}

/* k8030 in doit */
static void C_ccall f_8032(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8032,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8039,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1239: impform */
t3=((C_word*)((C_word*)t0)[6])[1];
f_7966(t3,t2,lf[279],((C_word*)t0)[5],C_SCHEME_TRUE);}
else{
if(C_truep(C_i_memq(((C_word*)t0)[4],*((C_word*)lf[2]+1)))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8052,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_a_i_list(&a,2,lf[280],((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,lf[130],t3);
/* eval.scm:1242: impform */
t5=((C_word*)((C_word*)t0)[6])[1];
f_7966(t5,t2,t4,((C_word*)t0)[5],C_SCHEME_TRUE);}
else{
t3=C_a_i_list(&a,2,lf[118],((C_word*)t0)[4]);
t4=C_a_i_list(&a,3,lf[229],t3,C_SCHEME_FALSE);
/* eval.scm:1242: impform */
t5=((C_word*)((C_word*)t0)[6])[1];
f_7966(t5,t2,t4,((C_word*)t0)[5],C_SCHEME_TRUE);}}
else{
if(C_truep(C_i_memq(((C_word*)t0)[4],*((C_word*)lf[4]+1)))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8079,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1249: ##sys#extension-information */
t3=*((C_word*)lf[261]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[276]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1264: ##sys#extension-information */
t3=*((C_word*)lf[261]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[276]);}}}}

/* k8144 in k8030 in doit */
static void C_ccall f_8146(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8146,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_assq(lf[282],t1);
t3=C_i_assq(lf[281],t1);
t4=C_i_assq(lf[266],t1);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t4,a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t2)){
/* eval.scm:1269: add-req */
t6=((C_word*)((C_word*)t0)[2])[1];
f_7941(t6,t5,((C_word*)t0)[3],C_SCHEME_TRUE);}
else{
t6=t5;
f_8161(2,t6,C_SCHEME_UNDEFINED);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8276,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1285: add-req */
t3=((C_word*)((C_word*)t0)[2])[1];
f_7941(t3,t2,((C_word*)t0)[3],C_SCHEME_FALSE);}}

/* k8274 in k8144 in k8030 in doit */
static void C_ccall f_8276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8276,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8283,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list(&a,2,lf[118],((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,lf[117],t3);
/* eval.scm:1287: impform */
t5=((C_word*)((C_word*)t0)[3])[1];
f_7966(t5,t2,t4,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k8281 in k8274 in k8144 in k8030 in doit */
static void C_ccall f_8283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1286: values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* k8159 in k8144 in k8030 in doit */
static void C_ccall f_8161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[31],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8161,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8168,a[2]=((C_word*)t0)[9],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8176,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8180,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[4])){
t5=C_a_i_list(&a,2,lf[118],((C_word*)t0)[3]);
t6=C_a_i_list(&a,2,lf[115],t5);
t7=t4;
f_8180(t7,C_a_i_list(&a,1,t6));}
else{
t5=t4;
f_8180(t5,C_SCHEME_END_OF_LIST);}}

/* k8178 in k8159 in k8144 in k8030 in doit */
static void C_fcall f_8180(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8180,NULL,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[7])?((C_word*)t0)[7]:(C_truep(((C_word*)t0)[6])?C_SCHEME_FALSE:((C_word*)t0)[5]));
if(C_truep(t2)){
/* ##sys#append */
t3=*((C_word*)lf[79]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t1,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8190,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1277: add-req */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7941(t4,t3,((C_word*)t0)[3],C_SCHEME_FALSE);}}

/* k8188 in k8178 in k8159 in k8144 in k8030 in doit */
static void C_ccall f_8190(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8190,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(C_truep(((C_word*)t0)[5])?C_i_cdr(((C_word*)t0)[5]):C_a_i_list1(&a,1,((C_word*)t0)[4]));
t7=C_i_check_list_2(t6,lf[71]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8212,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8214,a[2]=t3,a[3]=t10,a[4]=t5,a[5]=((C_word)li216),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_8214(t12,t8,t6);}

/* map-loop1887 in k8188 in k8178 in k8159 in k8144 in k8030 in doit */
static void C_fcall f_8214(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8214,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[118],t3);
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

/* k8210 in k8188 in k8178 in k8159 in k8144 in k8030 in doit */
static void C_ccall f_8212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8212,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[117],t1);
t3=C_a_i_list(&a,1,t2);
/* ##sys#append */
t4=*((C_word*)lf[79]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* k8174 in k8159 in k8144 in k8030 in doit */
static void C_ccall f_8176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8176,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[60],t1);
/* eval.scm:1271: impform */
t3=((C_word*)((C_word*)t0)[4])[1];
f_7966(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k8166 in k8159 in k8144 in k8030 in doit */
static void C_ccall f_8168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1270: values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k8077 in k8030 in doit */
static void C_ccall f_8079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[26],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8079,2,t0,t1);}
t2=C_i_assq(lf[281],t1);
t3=C_i_assq(lf[282],t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8096,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t6=C_a_i_list(&a,2,lf[118],((C_word*)t0)[2]);
t7=C_a_i_list(&a,2,lf[115],t6);
t8=t5;
f_8100(t8,C_a_i_list(&a,1,t7));}
else{
t6=t5;
f_8100(t6,C_SCHEME_END_OF_LIST);}}

/* k8098 in k8077 in k8030 in doit */
static void C_fcall f_8100(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8100,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8108,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[6])){
/* eval.scm:1255: impform */
t3=((C_word*)((C_word*)t0)[5])[1];
f_7966(t3,t2,lf[283],((C_word*)t0)[4],C_SCHEME_FALSE);}
else{
if(C_truep(((C_word*)t0)[3])){
t3=C_a_i_list(&a,2,lf[280],((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,lf[130],t3);
/* eval.scm:1255: impform */
t5=((C_word*)((C_word*)t0)[5])[1];
f_7966(t5,t2,t4,((C_word*)t0)[4],C_SCHEME_FALSE);}
else{
t3=C_a_i_list(&a,2,lf[118],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[229],t3,C_SCHEME_FALSE);
/* eval.scm:1255: impform */
t5=((C_word*)((C_word*)t0)[5])[1];
f_7966(t5,t2,t4,((C_word*)t0)[4],C_SCHEME_FALSE);}}}

/* k8106 in k8098 in k8077 in k8030 in doit */
static void C_ccall f_8108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8108,2,t0,t1);}
t2=C_a_i_list(&a,1,t1);
/* ##sys#append */
t3=*((C_word*)lf[79]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k8094 in k8077 in k8030 in doit */
static void C_ccall f_8096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8096,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[60],t1);
/* eval.scm:1252: values */
C_values(4,0,((C_word*)t0)[2],t2,C_SCHEME_TRUE);}

/* k8050 in k8030 in doit */
static void C_ccall f_8052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1241: values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k8037 in k8030 in doit */
static void C_ccall f_8039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1239: values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* srfi-id */
static void C_fcall f_7999(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7999,NULL,2,t1,t2);}
if(C_truep(C_fixnump(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8013,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8017,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1232: ##sys#number->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[274]+1)))(3,*((C_word*)lf[274]+1),t4,t2);}
else{
/* eval.scm:1233: ##sys#syntax-error */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[275]+1)))(5,*((C_word*)lf[275]+1),t1,lf[276],lf[277],t2);}}

/* k8015 in srfi-id */
static void C_ccall f_8017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1232: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[273],t1);}

/* k8011 in srfi-id */
static void C_ccall f_8013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1231: ##sys#intern-symbol */
C_string_to_symbol(3,0,((C_word*)t0)[2],t1);}

/* impform */
static void C_fcall f_7966(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7966,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7981,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t6=C_i_not(t4);
if(C_truep(t6)){
t7=t5;
f_7981(2,t7,t6);}
else{
/* eval.scm:1226: ##sys#current-module */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(2,*((C_word*)lf[41]+1),t5);}}
else{
t6=t5;
f_7981(2,t6,C_SCHEME_FALSE);}}

/* k7979 in impform */
static void C_ccall f_7981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7981,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list(&a,2,lf[272],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,lf[60],t4));}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[60],t2));}}

/* add-req */
static void C_fcall f_7941(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7941,NULL,4,t0,t1,t2,t3);}
if(C_truep(((C_word*)t0)[2])){
t4=(C_truep(t3)?lf[267]:lf[268]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7954,a[2]=t2,a[3]=((C_word)li211),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7960,a[2]=t2,a[3]=((C_word)li212),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1218: ##sys#hash-table-update! */
t7=*((C_word*)lf[18]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t1,*((C_word*)lf[271]+1),t4,t5,t6);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* a7959 in add-req */
static void C_ccall f_7960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7960,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list1(&a,1,((C_word*)t0)[2]));}

/* a7953 in add-req */
static void C_ccall f_7954(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7954,3,t0,t1,t2);}
t3=*((C_word*)lf[269]+1);
/* g18201821 */
t4=t3;
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t1,*((C_word*)lf[270]+1),t2,((C_word*)t0)[2]);}

/* f_7889 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7889(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7889,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7895,a[2]=t4,a[3]=((C_word)li209),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_7895(t6,t1,t2);}

/* loop1 */
static void C_fcall f_7895(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7895,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7909,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* eval.scm:1207: ##sys#extension-information */
t5=*((C_word*)lf[261]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_SCHEME_FALSE);}}

/* k7907 in loop1 */
static void C_ccall f_7909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7909,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7912,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=C_i_assq(lf[266],t1);
t4=t2;
f_7912(t4,(C_truep(t3)?C_i_cdr(t3):C_SCHEME_FALSE));}
else{
t3=t2;
f_7912(t3,C_SCHEME_FALSE);}}

/* k7910 in k7907 in loop1 */
static void C_fcall f_7912(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7912,NULL,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7919,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
/* eval.scm:1211: loop1 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7895(t5,t3,t4);}

/* k7917 in k7910 in k7907 in loop1 */
static void C_ccall f_7919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1206: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[94]+1)))(4,*((C_word*)lf[94]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_7883 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7883(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7883,3,t0,t1,t2);}
/* eval.scm:1197: ##sys#extension-information */
t3=*((C_word*)lf[261]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[265]);}

/* f_7850 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7850,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7854,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:1189: ##sys#repository-path */
t5=*((C_word*)lf[242]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k7852 */
static void C_ccall f_7854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7854,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7860,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1190: ##sys#canonicalize-extension-path */
t3=*((C_word*)lf[236]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7858 in k7852 */
static void C_ccall f_7860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7860,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7863,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1191: string-append */
t3=((C_word*)t0)[3];
((C_proc6)C_fast_retrieve_proc(t3))(6,t3,t2,((C_word*)t0)[2],lf[263],t1,lf[264]);}

/* k7861 in k7858 in k7852 */
static void C_ccall f_7863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7866,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7881,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1192: string-append */
t4=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t3,t1,lf[262]);}

/* k7879 in k7861 in k7858 in k7852 */
static void C_ccall f_7881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1192: file-exists? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[246]+1)))(3,*((C_word*)lf[246]+1),((C_word*)t0)[2],t1);}

/* k7864 in k7861 in k7858 in k7852 */
static void C_ccall f_7866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7866,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7870,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li206),tmp=(C_word)a,a+=5,tmp);
/* g17761777 */
t3=t2;
f_7870(t3,((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* g1776 in k7864 in k7861 in k7858 in k7852 */
static void C_fcall f_7870(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7870,NULL,3,t0,t1,t2);}
/* g17841785 */
t3=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* f_7812 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7812(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_7812r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7812r(t0,t1,t2);}}

static void C_ccall f_7812r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t3=C_i_check_list_2(t2,lf[20]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7826,a[2]=t5,a[3]=((C_word)li204),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7826(t7,t1,t2);}

/* for-each-loop1739 */
static void C_fcall f_7826(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7826,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7836,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[253]+1);
/* g17541755 */
t6=t5;
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t3,t4,lf[260]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7834 in for-each-loop1739 */
static void C_ccall f_7836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7826(t3,((C_word*)t0)[2],t2);}

/* f_7798 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7798(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7798,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7809,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1171: ##sys#canonicalize-extension-path */
t4=*((C_word*)lf[236]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[259]);}

/* k7807 */
static void C_ccall f_7809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_member(t1,*((C_word*)lf[251]+1));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* f_7753 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7753(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_7753r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7753r(t0,t1,t2);}}

static void C_ccall f_7753r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t3=C_i_check_list_2(t2,lf[20]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7774,a[2]=t5,a[3]=((C_word)li201),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7774(t7,t1,t2);}

/* for-each-loop1713 */
static void C_fcall f_7774(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7774,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_check_symbol_2(t3,lf[257]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7762,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1164: ##sys#canonicalize-extension-path */
t6=*((C_word*)lf[236]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[257]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7760 in for-each-loop1713 */
static void C_ccall f_7762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7762,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,*((C_word*)lf[251]+1));
t3=C_mutate((C_word*)lf[251]+1 /* (set! ##sys#loaded-extensions ...) */,t2);
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_7774(t5,((C_word*)t0)[2],t4);}

/* f_7669 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7669(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_7669r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_7669r(t0,t1,t2,t3,t4);}}

static void C_ccall f_7669r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(8);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7673,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t4))){
t7=t6;
f_7673(2,t7,C_SCHEME_TRUE);}
else{
t7=C_i_cdr(t4);
if(C_truep(C_i_nullp(t7))){
t8=t6;
f_7673(2,t8,C_i_car(t4));}
else{
/* ##sys#error */
t8=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,lf[0],t4);}}}

/* k7671 */
static void C_ccall f_7673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7673,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7676,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_stringp(((C_word*)((C_word*)t0)[4])[1]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7729,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1143: string->symbol */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=t2;
f_7676(t3,C_i_check_symbol_2(((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3]));}}

/* k7727 in k7671 */
static void C_ccall f_7729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_7676(t3,t2);}

/* k7674 in k7671 */
static void C_fcall f_7676(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7676,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1145: ##sys#canonicalize-extension-path */
t3=*((C_word*)lf[236]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[2]);}

/* k7677 in k7674 in k7671 */
static void C_ccall f_7679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7679,2,t0,t1);}
t2=C_i_member(t1,*((C_word*)lf[251]+1));
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_memq(((C_word*)((C_word*)t0)[4])[1],*((C_word*)lf[2]+1)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7694,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1148: ##sys#load-library-0 */
t4=*((C_word*)lf[221]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7706,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1152: ##sys#find-extension */
t4=*((C_word*)lf[245]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,C_SCHEME_FALSE);}}}

/* k7704 in k7677 in k7674 in k7671 */
static void C_ccall f_7706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7706,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7712,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1154: ##sys#load */
t3=*((C_word*)lf[182]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,t1,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
if(C_truep(((C_word*)t0)[4])){
/* eval.scm:1157: ##sys#error */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],((C_word*)t0)[3],lf[255],((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* k7710 in k7704 in k7677 in k7674 in k7671 */
static void C_ccall f_7712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7712,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],*((C_word*)lf[251]+1));
t3=C_mutate((C_word*)lf[251]+1 /* (set! ##sys#loaded-extensions ...) */,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}

/* k7692 in k7677 in k7674 in k7671 */
static void C_ccall f_7694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(((C_word*)t0)[4])){
/* eval.scm:1150: ##sys#error */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],((C_word*)t0)[3],lf[254],((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* f_7570 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7570(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7570,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7574,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1119: ##sys#repository-path */
t5=*((C_word*)lf[242]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k7572 */
static void C_ccall f_7574(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7574,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7576,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word)li197),tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7622,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(*((C_word*)lf[244]+1))?lf[248]:C_SCHEME_END_OF_LIST);
t5=(C_truep(t1)?C_a_i_list1(&a,1,t1):C_SCHEME_END_OF_LIST);
t6=(C_truep(((C_word*)t0)[2])?*((C_word*)lf[249]+1):C_SCHEME_END_OF_LIST);
if(C_truep(*((C_word*)lf[244]+1))){
/* eval.scm:1128: ##sys#append */
t7=*((C_word*)lf[79]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t3,t4,t5,t6,C_SCHEME_END_OF_LIST);}
else{
/* eval.scm:1128: ##sys#append */
t7=*((C_word*)lf[79]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t3,t4,t5,t6,lf[250]);}}

/* k7620 in k7572 */
static void C_ccall f_7622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7622,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7624,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word)li198),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_7624(t5,((C_word*)t0)[2],t1);}

/* loop in k7620 in k7572 */
static void C_fcall f_7624(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7624,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7637,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1135: check */
t5=((C_word*)t0)[2];
f_7576(t5,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k7635 in loop in k7620 in k7572 */
static void C_ccall f_7637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm:1136: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_7624(t3,((C_word*)t0)[4],t2);}}

/* check in k7572 */
static void C_fcall f_7576(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7576,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7580,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1121: string-append */
t4=((C_word*)t0)[3];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t3,t2,lf[247],((C_word*)t0)[2]);}

/* k7578 in check in k7572 */
static void C_ccall f_7580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7586,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=*((C_word*)lf[168]+1);
if(C_truep(t3)){
t4=t2;
f_7586(2,t4,C_SCHEME_FALSE);}
else{
if(C_truep(C_fudge(C_fix(24)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7615,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1125: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,t1,*((C_word*)lf[203]+1));}
else{
t4=t2;
f_7586(2,t4,C_SCHEME_FALSE);}}}
else{
t3=t2;
f_7586(2,t3,C_SCHEME_FALSE);}}

/* k7613 in k7578 in check in k7572 */
static void C_ccall f_7615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1125: file-exists? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[246]+1)))(3,*((C_word*)lf[246]+1),((C_word*)t0)[2],t1);}

/* k7584 in k7578 in check in k7572 */
static void C_ccall f_7586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7586,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t1;
if(C_truep(t3)){
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7596,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1126: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t3,((C_word*)t0)[3],lf[7]);}}

/* k7594 in k7584 in k7578 in check in k7572 */
static void C_ccall f_7596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1126: file-exists? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[246]+1)))(3,*((C_word*)lf[246]+1),((C_word*)t0)[2],t1);}

/* k7587 in k7584 in k7578 in check in k7572 */
static void C_ccall f_7589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_7539 in k7536 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7539(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_7539r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7539r(t0,t1,t2);}}

static void C_ccall f_7539r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7543,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
t4=((C_word*)((C_word*)t0)[2])[1];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
if(C_truep(t5)){
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}
else{
/* ##sys#error */
t5=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k7541 */
static void C_ccall f_7543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_7378 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7378(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[17],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7378,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7381,a[2]=t2,a[3]=t3,a[4]=((C_word)li192),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7400,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(t2))){
t6=t5;
f_7400(2,t6,t2);}
else{
if(C_truep(C_i_symbolp(t2))){
/* eval.scm:1074: ##sys#symbol->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[238]+1)))(3,*((C_word*)lf[238]+1),t5,t2);}
else{
if(C_truep(C_i_listp(t2))){
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7483,a[2]=t4,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word)li194),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_7483(t9,t5,t2);}
else{
t6=t5;
f_7400(2,t6,C_SCHEME_UNDEFINED);}}}}

/* loop */
static void C_fcall f_7483(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7483,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[239]);}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7500,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_symbolp(t3))){
/* eval.scm:1081: ##sys#symbol->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[238]+1)))(3,*((C_word*)lf[238]+1),t4,t3);}
else{
if(C_truep(C_i_stringp(t3))){
t5=t4;
f_7500(2,t5,t3);}
else{
/* eval.scm:1083: err */
t5=((C_word*)t0)[2];
f_7381(t5,t4);}}}}

/* k7498 in loop */
static void C_ccall f_7500(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7500,2,t0,t1);}
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_i_nullp(t2);
t4=(C_truep(t3)?lf[240]:lf[241]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7508,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t6=C_slot(((C_word*)t0)[5],C_fix(1));
/* eval.scm:1087: loop */
t7=((C_word*)((C_word*)t0)[2])[1];
f_7483(t7,t5,t6);}

/* k7506 in k7498 in loop */
static void C_ccall f_7508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1079: string-append */
t2=((C_word*)t0)[5];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7398 */
static void C_ccall f_7400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7400,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7405,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word)li193),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_7405(t5,((C_word*)t0)[2],t1);}

/* check in k7398 */
static void C_fcall f_7405(C_word t0,C_word t1,C_word t2){
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
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7405,NULL,3,t0,t1,t2);}
t3=C_block_size(t2);
t4=C_eqp(C_fix(0),t3);
if(C_truep(t4)){
/* eval.scm:1090: err */
t5=((C_word*)t0)[3];
f_7381(t5,t1);}
else{
t5=C_i_string_ref(t2,C_fix(0));
t6=C_i_char_equalp(C_make_character(92),t5);
t7=(C_truep(t6)?t6:C_i_char_equalp(C_make_character(47),t5));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7431,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1092: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[191]+1)))(5,*((C_word*)lf[191]+1),t8,t2,C_fix(1),t3);}
else{
t8=C_fixnum_difference(t3,C_fix(1));
t9=C_i_string_ref(t2,t8);
t10=C_i_char_equalp(C_make_character(92),t9);
t11=(C_truep(t10)?t10:C_i_char_equalp(C_make_character(47),t9));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7444,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t13=C_fixnum_difference(t3,C_fix(1));
/* eval.scm:1094: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[191]+1)))(5,*((C_word*)lf[191]+1),t12,t2,C_fix(0),t13);}
else{
t12=t2;
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}}}}

/* k7442 in check in k7398 */
static void C_ccall f_7444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1094: check */
t2=((C_word*)((C_word*)t0)[3])[1];
f_7405(t2,((C_word*)t0)[2],t1);}

/* k7429 in check in k7398 */
static void C_ccall f_7431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1092: check */
t2=((C_word*)((C_word*)t0)[3])[1];
f_7405(t2,((C_word*)t0)[2],t1);}

/* err */
static void C_fcall f_7381(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7381,NULL,2,t0,t1);}
/* eval.scm:1071: ##sys#error */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[3],lf[237],((C_word*)t0)[2]);}

/* f_7311 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7311(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7311,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7315,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1055: ##sys#resolve-include-filename */
t4=*((C_word*)lf[235]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_SCHEME_TRUE);}

/* k7313 */
static void C_ccall f_7315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7373,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1056: load-verbose */
t4=*((C_word*)lf[163]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k7371 in k7313 */
static void C_ccall f_7373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* eval.scm:1056: print */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[232]+1)))(5,*((C_word*)lf[232]+1),((C_word*)t0)[3],lf[233],((C_word*)t0)[2],lf[234]);}
else{
t2=((C_word*)t0)[3];
f_7318(2,t2,C_SCHEME_UNDEFINED);}}

/* k7316 in k7313 */
static void C_ccall f_7318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7318,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7323,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li190),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1057: with-input-from-file */
t3=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],((C_word*)t0)[6],t2);}

/* a7322 in k7316 in k7313 */
static void C_ccall f_7323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[19],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7323,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7329,a[2]=t3,a[3]=t5,a[4]=((C_word)li186),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7334,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li188),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7367,a[2]=t5,a[3]=t3,a[4]=((C_word)li189),tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[109]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t1,t6,t7,t8);}

/* a7366 in a7322 in k7316 in k7313 */
static void C_ccall f_7367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7367,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[165]+1));
t3=C_mutate((C_word*)lf[165]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a7333 in a7322 in k7316 in k7313 */
static void C_ccall f_7334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7334,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7342,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1060: read */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k7340 in a7333 in a7322 in k7316 in k7313 */
static void C_ccall f_7342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7342,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7344,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word)li187),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_7344(t5,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* doloop1586 in k7340 in a7333 in a7322 in k7316 in k7313 */
static void C_fcall f_7344(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7344,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eofp(t2))){
/* eval.scm:1063: reverse */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7361,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1060: read */
t5=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t4);}}

/* k7359 in doloop1586 in k7340 in a7333 in a7322 in k7316 in k7313 */
static void C_ccall f_7361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7361,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_7344(t3,((C_word*)t0)[2],t1,t2);}

/* a7328 in a7322 in k7316 in k7313 */
static void C_ccall f_7329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7329,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[165]+1));
t3=C_mutate((C_word*)lf[165]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_7281 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7281(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7281r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7281r(t0,t1,t2,t3);}}

static void C_ccall f_7281r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=C_i_check_symbol_2(t2,lf[222]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7288,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=C_i_car(t3);
/* eval.scm:1045: ##sys#load-library-0 */
t7=*((C_word*)lf[221]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t2,t6);}
else{
/* eval.scm:1045: ##sys#load-library-0 */
t6=*((C_word*)lf[221]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,C_SCHEME_FALSE);}}

/* k7286 */
static void C_ccall f_7288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7288,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_dlerror),C_fix(0));}}

/* k7296 in k7286 */
static void C_ccall f_7298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1046: ##sys#error */
t2=*((C_word*)lf[11]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[222],lf[230],((C_word*)t0)[2],t1);}

/* f_7175 in k7171 in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7175(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7175,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7179,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1018: ##sys#->feature-id */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[228]+1)))(3,*((C_word*)lf[228]+1),t4,t2);}

/* k7177 */
static void C_ccall f_7179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7179,2,t0,t1);}
t2=C_i_memq(t1,*((C_word*)lf[133]+1));
if(C_truep(t2)){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7188,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=t3;
f_7188(t4,C_a_i_list(&a,1,((C_word*)t0)[2]));}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7271,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(((C_word*)t0)[4],C_fix(1));
/* eval.scm:1023: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,t5,*((C_word*)lf[214]+1));}}}

/* k7269 in k7177 */
static void C_ccall f_7271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7271,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7275,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1024: dynamic-load-libraries */
t3=*((C_word*)lf[219]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k7273 in k7269 in k7177 */
static void C_ccall f_7275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7275,2,t0,t1);}
t2=((C_word*)t0)[3];
f_7188(t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7186 in k7177 */
static void C_fcall f_7188(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7188,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7191,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7253,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7257,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm:1029: ##sys#string->c-identifier */
t6=*((C_word*)lf[227]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k7255 in k7186 in k7177 */
static void C_ccall f_7257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1027: string-append */
t2=((C_word*)t0)[3];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],lf[225],t1,lf[226]);}

/* k7251 in k7186 in k7177 */
static void C_ccall f_7253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1026: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[195]+1)))(4,*((C_word*)lf[195]+1),((C_word*)t0)[2],t1,lf[222]);}

/* k7189 in k7186 in k7177 */
static void C_ccall f_7191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7191,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7194,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7240,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1031: load-verbose */
t4=*((C_word*)lf[163]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k7238 in k7189 in k7186 in k7177 */
static void C_ccall f_7240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7240,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1032: display */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[224]);}
else{
t2=((C_word*)t0)[3];
f_7194(2,t2,C_SCHEME_UNDEFINED);}}

/* k7241 in k7238 in k7189 in k7186 in k7177 */
static void C_ccall f_7243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7243,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7246,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1033: display */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k7244 in k7241 in k7238 in k7189 in k7186 in k7177 */
static void C_ccall f_7246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1034: display */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[223]);}

/* k7192 in k7189 in k7186 in k7177 */
static void C_ccall f_7194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7194,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7199,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word)li183),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_7199(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop in k7192 in k7189 in k7186 in k7177 */
static void C_fcall f_7199(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7199,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7212,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7233,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(0));
/* eval.scm:1037: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[195]+1)))(4,*((C_word*)lf[195]+1),t4,t5,lf[222]);}}

/* k7231 in loop in k7192 in k7189 in k7186 in k7177 */
static void C_ccall f_7233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:1037: ##sys#dload */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[194]+1)))(5,*((C_word*)lf[194]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k7210 in loop in k7192 in k7189 in k7186 in k7177 */
static void C_ccall f_7212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7212,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_memq(((C_word*)t0)[5],*((C_word*)lf[133]+1)))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],*((C_word*)lf[133]+1));
t3=C_mutate((C_word*)lf[133]+1 /* (set! ##sys#features ...) */,t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm:1040: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_7199(t3,((C_word*)t0)[4],t2);}}

/* complete in k7162 in k7155 in k7150 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_fcall f_7166(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7166,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[10]+1);
/* g15111512 */
t4=t3;
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,t2,((C_word*)t0)[2]);}

/* f_7126 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7126(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_7126r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7126r(t0,t1,t2,t3);}}

static void C_ccall f_7126r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7130,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7147,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[210]+1)))(5,*((C_word*)lf[210]+1),t4,lf[213],t3,t5);}

/* a7146 */
static void C_ccall f_7147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7147,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k7128 */
static void C_ccall f_7130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7130,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7133,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7144,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[210]+1)))(5,*((C_word*)lf[210]+1),t2,lf[212],((C_word*)t0)[2],t3);}

/* a7143 in k7128 */
static void C_ccall f_7144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7144,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k7131 in k7128 */
static void C_ccall f_7133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7133,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7136,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7141,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[210]+1)))(5,*((C_word*)lf[210]+1),t2,lf[211],((C_word*)t0)[2],t3);}

/* a7140 in k7131 in k7128 */
static void C_ccall f_7141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7141,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k7134 in k7131 in k7128 */
static void C_ccall f_7136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:981: ##sys#load */
t2=*((C_word*)lf[182]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],C_SCHEME_TRUE,((C_word*)t0)[2],t1);}

/* f_7083 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7083(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7083r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7083r(t0,t1,t2,t3);}}

static void C_ccall f_7083r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7091,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_string_ref(t2,C_fix(0));
if(C_truep((C_truep(C_eqp(t5,C_make_character(92)))?C_SCHEME_TRUE:(C_truep(C_eqp(t5,C_make_character(47)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t6=t4;
f_7091(2,t6,t2);}
else{
/* eval.scm:977: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,*((C_word*)lf[166]+1),t2);}}

/* k7089 */
static void C_ccall f_7091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7091,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7095,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* eval.scm:974: ##sys#load */
t4=*((C_word*)lf[182]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],t1,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
/* eval.scm:974: ##sys#load */
t6=*((C_word*)lf[182]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,((C_word*)t0)[2],t1,t5,C_SCHEME_FALSE);}
else{
/* ##sys#error */
t5=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k7093 in k7089 */
static void C_ccall f_7095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:974: ##sys#load */
t2=*((C_word*)lf[182]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* f_7054 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_7054(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7054r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7054r(t0,t1,t2,t3);}}

static void C_ccall f_7054r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7062,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* eval.scm:971: ##sys#load */
t5=*((C_word*)lf[182]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=C_i_car(t3);
/* eval.scm:971: ##sys#load */
t7=*((C_word*)lf[182]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t1,t2,t6,C_SCHEME_FALSE);}
else{
/* ##sys#error */
t6=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k7060 */
static void C_ccall f_7062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:971: ##sys#load */
t2=*((C_word*)lf[182]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* f_6632 in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_6632(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+23)){
C_save_and_reclaim((void*)tr5r,(void*)f_6632r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_6632r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_6632r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(23);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t7=C_i_nullp(t5);
t8=(C_truep(t7)?C_SCHEME_FALSE:C_i_car(t5));
t9=C_i_nullp(t5);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_SCHEME_FALSE:C_i_car(t10));
t13=C_i_nullp(t10);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t10));
if(C_truep(C_i_nullp(t14))){
t15=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6654,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t12,a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=t4,a[12]=t8,a[13]=((C_word*)t0)[9],a[14]=t1,a[15]=((C_word*)t0)[10],a[16]=t3,tmp=(C_word)a,a+=17,tmp);
if(C_truep(C_i_stringp(((C_word*)t6)[1]))){
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7025,a[2]=t15,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:894: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[207]+1)))(3,*((C_word*)lf[207]+1),t16,((C_word*)t6)[1]);}
else{
t16=t15;
f_6654(t16,C_SCHEME_UNDEFINED);}}
else{
/* ##sys#error */
t15=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}

/* k7023 */
static void C_ccall f_7025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_6654(t3,t2);}

/* k6652 */
static void C_fcall f_6654(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6654,NULL,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6947,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:897: port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[206]+1)))(3,*((C_word*)lf[206]+1),t5,((C_word*)((C_word*)t0)[5])[1]);}

/* k6945 in k6652 */
static void C_ccall f_6947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6947,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_6657(2,t2,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_stringp(((C_word*)((C_word*)t0)[3])[1]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:899: ##sys#file-info */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[202]+1)))(3,*((C_word*)lf[202]+1),t2,((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
/* eval.scm:890: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[175]+1)))(6,*((C_word*)lf[175]+1),((C_word*)t0)[4],lf[204],lf[187],lf[205],t2);}}}

/* k6960 in k6945 in k6652 */
static void C_ccall f_6962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=C_slot(t1,C_fix(4));
if(C_truep(t3)){
t4=C_eqp(C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=t2;
f_6965(t6,C_i_not(((C_word*)((C_word*)t0)[2])[1]));}
else{
t4=t2;
f_6965(t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_6965(t3,C_SCHEME_FALSE);}}

/* k6963 in k6960 in k6945 in k6652 */
static void C_fcall f_6965(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6965,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_6657(2,t2,((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6968,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:905: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t2,((C_word*)((C_word*)t0)[3])[1],*((C_word*)lf[203]+1));}}

/* k6966 in k6963 in k6960 in k6945 in k6652 */
static void C_ccall f_6968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=*((C_word*)lf[168]+1);
if(C_truep(t3)){
t4=t2;
f_6974(2,t4,C_SCHEME_FALSE);}
else{
if(C_truep(C_fudge(C_fix(24)))){
/* eval.scm:908: ##sys#file-info */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[202]+1)))(3,*((C_word*)lf[202]+1),t2,t1);}
else{
t4=t2;
f_6974(2,t4,C_SCHEME_FALSE);}}}

/* k6972 in k6966 in k6963 in k6960 in k6945 in k6652 */
static void C_ccall f_6974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6974,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[4];
f_6657(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6977,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:910: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t2,((C_word*)((C_word*)t0)[2])[1],lf[7]);}}

/* k6975 in k6972 in k6966 in k6963 in k6960 in k6945 in k6652 */
static void C_ccall f_6977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6977,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6983,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:911: ##sys#file-info */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[202]+1)))(3,*((C_word*)lf[202]+1),t2,t1);}

/* k6981 in k6975 in k6972 in k6966 in k6963 in k6960 in k6945 in k6652 */
static void C_ccall f_6983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_6657(2,t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t2)){
t3=((C_word*)t0)[5];
f_6657(2,t3,C_SCHEME_FALSE);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=((C_word*)t0)[5];
f_6657(2,t4,t3);}}}

/* k6655 in k6652 */
static void C_ccall f_6657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6657,2,t0,t1);}
t2=((C_word*)t0)[16];
t3=(C_truep(t2)?t2:((C_word*)t0)[15]);
t4=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6663,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t3,a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=t1,a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
t5=C_i_stringp(((C_word*)((C_word*)t0)[5])[1]);
t6=(C_truep(t5)?C_i_not(t1):C_SCHEME_FALSE);
if(C_truep(t6)){
/* eval.scm:916: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[175]+1)))(6,*((C_word*)lf[175]+1),t4,lf[197],lf[187],lf[198],((C_word*)((C_word*)t0)[5])[1]);}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6938,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:917: load-verbose */
t8=*((C_word*)lf[163]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k6936 in k6655 in k6652 */
static void C_ccall f_6938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6938,2,t0,t1);}
t2=(C_truep(t1)?((C_word*)t0)[4]:C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6926,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:918: display */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[201]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_6663(2,t4,t3);}}

/* k6924 in k6936 in k6655 in k6652 */
static void C_ccall f_6926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6926,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6929,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:919: display */
t3=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k6927 in k6924 in k6936 in k6655 in k6652 */
static void C_ccall f_6929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6929,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6932,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:920: display */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[200]);}

/* k6930 in k6927 in k6924 in k6936 in k6655 in k6652 */
static void C_ccall f_6932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:921: flush-output */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[199]+1)))(2,*((C_word*)lf[199]+1),((C_word*)t0)[2]);}

/* k6661 in k6655 in k6652 */
static void C_ccall f_6663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[25],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6663,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6666,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
if(C_truep(((C_word*)t0)[14])){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6883,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6911,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:923: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[195]+1)))(4,*((C_word*)lf[195]+1),t4,((C_word*)t0)[14],lf[187]);}
else{
t3=t2;
f_6666(2,t3,C_SCHEME_FALSE);}}

/* k6909 in k6661 in k6655 in k6652 */
static void C_ccall f_6911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:923: ##sys#dload */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[194]+1)))(5,*((C_word*)lf[194]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k6881 in k6661 in k6655 in k6652 */
static void C_ccall f_6883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6883,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[5];
f_6666(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6907,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:924: has-sep? */
f_6586(t2,((C_word*)t0)[3]);}}

/* k6905 in k6881 in k6661 in k6655 in k6652 */
static void C_ccall f_6907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6907,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_6666(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6899,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6903,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:927: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t3,lf[196],((C_word*)t0)[2]);}}

/* k6901 in k6905 in k6881 in k6661 in k6655 in k6652 */
static void C_ccall f_6903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:926: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[195]+1)))(4,*((C_word*)lf[195]+1),((C_word*)t0)[2],t1,lf[187]);}

/* k6897 in k6905 in k6881 in k6661 in k6655 in k6652 */
static void C_ccall f_6899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:925: ##sys#dload */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[194]+1)))(5,*((C_word*)lf[194]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6666,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6669,a[2]=((C_word*)t0)[14],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[14];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6674,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word)li174),tmp=(C_word)a,a+=15,tmp);
/* eval.scm:930: call-with-current-continuation */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[193]+1)))(3,*((C_word*)lf[193]+1),t2,t3);}}

/* a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6674(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[25],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6674,3,t0,t1,t2);}
t3=C_SCHEME_TRUE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t0)[13];
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6678,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=t6,a[15]=t4,a[16]=t2,tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[13])){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6870,a[2]=((C_word*)t0)[13],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:936: has-sep? */
f_6586(t8,((C_word*)t0)[13]);}
else{
t8=t7;
f_6678(2,t8,C_SCHEME_FALSE);}}

/* k6868 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_fixnum_plus(t1,C_fix(1));
/* eval.scm:937: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[191]+1)))(5,*((C_word*)lf[191]+1),((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2);}
else{
t2=((C_word*)t0)[3];
f_6678(2,t2,lf[192]);}}

/* k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6678(C_word c,C_word t0,C_word t1){
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
C_word ab[52],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6678,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6679,a[2]=((C_word*)t0)[16],a[3]=((C_word)li160),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6688,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=t13,a[7]=t11,a[8]=t9,a[9]=t7,a[10]=((C_word)li161),tmp=(C_word)a,a+=11,tmp);
t15=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6699,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word)li172),tmp=(C_word)a,a+=14,tmp);
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6858,a[2]=t13,a[3]=t11,a[4]=t9,a[5]=t7,a[6]=t5,a[7]=t3,a[8]=((C_word*)t0)[14],a[9]=((C_word*)t0)[15],a[10]=((C_word)li173),tmp=(C_word)a,a+=11,tmp);
/* ##sys#dynamic-wind */
t17=*((C_word*)lf[109]+1);
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,((C_word*)t0)[2],t14,t15,t16);}

/* a6857 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6858(C_word c,C_word t0,C_word t1){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6858,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[9])+1,*((C_word*)lf[183]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[8])+1,*((C_word*)lf[165]+1));
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,*((C_word*)lf[166]+1));
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,*((C_word*)lf[164]+1));
t6=C_mutate((C_word*)lf[183]+1 /* (set! ##sys#read-error-with-line-number ...) */,((C_word*)((C_word*)t0)[5])[1]);
t7=C_mutate((C_word*)lf[165]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[4])[1]);
t8=C_mutate((C_word*)lf[166]+1 /* (set! ##sys#current-load-path ...) */,((C_word*)((C_word*)t0)[3])[1]);
t9=C_mutate((C_word*)lf[164]+1 /* (set! ##sys#abort-load ...) */,((C_word*)((C_word*)t0)[2])[1]);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}

/* a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6699,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6703,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[5])){
/* eval.scm:939: open-input-file */
t3=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[5]);}
else{
t3=t2;
f_6703(2,t3,((C_word*)((C_word*)t0)[2])[1]);}}

/* k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6703,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6708,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6711,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,a[10]=((C_word*)t0)[11],a[11]=((C_word)li170),tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6849,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li171),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:940: ##sys#dynamic-wind */
t5=*((C_word*)lf[109]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[2],t2,t3,t4);}

/* a6848 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6849,2,t0,t1);}
/* eval.scm:967: close-input-port */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6715,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:943: peek-char */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[190]+1)))(3,*((C_word*)lf[190]+1),t2,((C_word*)t0)[9]);}

/* k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6715,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6718,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_char_equalp(t1,C_make_character(127)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6836,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6840,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_dlerror),C_fix(0));}
else{
t3=t2;
f_6718(2,t3,C_SCHEME_UNDEFINED);}}

/* k6838 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* eval.scm:947: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[188],t2);}
else{
/* eval.scm:947: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[188],lf[189]);}}

/* k6834 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:945: ##sys#error */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[187],t1,((C_word*)t0)[2]);}

/* k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6718,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6721,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:951: read */
t3=((C_word*)t0)[10];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[9]);}

/* k6719 in k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6721,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6726,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=t3,a[11]=((C_word)li169),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_6726(t5,((C_word*)t0)[2],t1);}

/* doloop1419 in k6719 in k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_fcall f_6726(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6726,NULL,3,t0,t1,t2);}
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6736,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[2])){
/* eval.scm:954: printer */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,t2);}
else{
t4=t3;
f_6736(2,t4,C_SCHEME_UNDEFINED);}}}

/* k6734 in doloop1419 in k6719 in k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6736,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6739,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6748,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word)li165),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li168),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:955: ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}

/* a6781 in k6734 in doloop1419 in k6719 in k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6782(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_6782r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6782r(t0,t1,t2);}}

static void C_ccall f_6782r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(12);
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li166),tmp=(C_word)a,a+=5,tmp);
t4=C_i_check_list_2(t2,lf[20]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6802,a[2]=t3,a[3]=t6,a[4]=((C_word)li167),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_6802(t8,t1,t2);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* for-each-loop1429 in a6781 in k6734 in doloop1419 in k6719 in k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_fcall f_6802(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6802,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6812,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g14301436 */
t5=((C_word*)t0)[2];
f_6787(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6810 in for-each-loop1429 in a6781 in k6734 in doloop1419 in k6719 in k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6802(t3,((C_word*)t0)[2],t2);}

/* g1430 in a6781 in k6734 in doloop1419 in k6719 in k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_fcall f_6787(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6787,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6791,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:964: write */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,t2);}

/* k6789 in g1430 in a6781 in k6734 in doloop1419 in k6719 in k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:965: newline */
t2=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* a6747 in k6734 in doloop1419 in k6719 in k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6748,2,t0,t1);}
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6755,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#start-timer */
t3=*((C_word*)lf[186]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* eval.scm:959: evproc */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}}

/* k6753 in a6747 in k6734 in doloop1419 in k6719 in k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6755,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6760,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li163),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6766,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a6765 in k6753 in a6747 in k6734 in doloop1419 in k6719 in k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6766(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_6766r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6766r(t0,t1,t2);}}

static void C_ccall f_6766r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6770,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6777,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#stop-timer */
t5=*((C_word*)lf[185]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k6775 in a6765 in k6753 in a6747 in k6734 in doloop1419 in k6719 in k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#display-times */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[184]+1)))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],t1);}

/* k6768 in a6765 in k6753 in a6747 in k6734 in doloop1419 in k6719 in k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a6759 in k6753 in a6747 in k6734 in doloop1419 in k6719 in k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6760,2,t0,t1);}
/* eval.scm:958: evproc */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* k6737 in k6734 in doloop1419 in k6719 in k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6739,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6746,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:952: read */
t3=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k6744 in k6737 in k6734 in doloop1419 in k6719 in k6716 in k6713 in a6710 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
f_6726(t2,((C_word*)t0)[2],t1);}

/* a6707 in k6701 in a6698 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6708,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* a6687 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6688(C_word c,C_word t0,C_word t1){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6688,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[9])+1,*((C_word*)lf[183]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[8])+1,*((C_word*)lf[165]+1));
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,*((C_word*)lf[166]+1));
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,*((C_word*)lf[164]+1));
t6=C_mutate((C_word*)lf[183]+1 /* (set! ##sys#read-error-with-line-number ...) */,((C_word*)((C_word*)t0)[5])[1]);
t7=C_mutate((C_word*)lf[165]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[4])[1]);
t8=C_mutate((C_word*)lf[166]+1 /* (set! ##sys#current-load-path ...) */,((C_word*)((C_word*)t0)[3])[1]);
t9=C_mutate((C_word*)lf[164]+1 /* (set! ##sys#abort-load ...) */,((C_word*)((C_word*)t0)[2])[1]);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}

/* f_6679 in k6676 in a6673 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6679,2,t0,t1);}
/* eval.scm:938: abrt */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_FALSE);}

/* k6667 in k6664 in k6661 in k6655 in k6652 */
static void C_ccall f_6669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* has-sep? in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_fcall f_6586(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6586,NULL,2,t1,t2);}
t3=C_block_size(t2);
t4=C_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6596,a[2]=t2,a[3]=((C_word)li158),tmp=(C_word)a,a+=4,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_6596(t5,t4));}

/* loop in has-sep? in k6582 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static C_word C_fcall f_6596(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_check;
loop:
if(C_truep(C_i_zerop(t1))){
return(C_SCHEME_FALSE);}
else{
t2=C_subchar(((C_word*)t0)[2],t1);
if(C_truep((C_truep(C_eqp(t2,C_make_character(92)))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,C_make_character(47)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
return(t1);}
else{
t3=C_fixnum_difference(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}}

/* f_6511 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_6511(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[20],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6511,3,t0,t1,t2);}
t3=C_i_pairp(t2);
t4=(C_truep(t3)?t2:C_a_i_list1(&a,1,t2));
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_TRUE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6518,a[2]=t8,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6523,a[2]=t6,a[3]=t8,a[4]=t11,a[5]=((C_word)li156),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_6523(t13,t9,t4);}

/* loop */
static void C_fcall f_6523(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6523,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6536,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[171]);
if(C_truep(t5)){
t6=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t7=C_slot(t2,C_fix(1));
/* eval.scm:871: loop */
t20=t1;
t21=t7;
t1=t20;
t2=t21;
goto loop;}
else{
t6=C_eqp(t3,lf[172]);
if(C_truep(t6)){
t7=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
t8=C_slot(t2,C_fix(1));
/* eval.scm:871: loop */
t20=t1;
t21=t8;
t1=t20;
t2=t21;
goto loop;}
else{
t7=C_eqp(t3,lf[173]);
if(C_truep(t7)){
t8=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t9=C_slot(t2,C_fix(1));
/* eval.scm:871: loop */
t20=t1;
t21=t9;
t1=t20;
t2=t21;
goto loop;}
else{
t8=C_eqp(t3,lf[174]);
if(C_truep(t8)){
t9=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t10=C_slot(t2,C_fix(1));
/* eval.scm:871: loop */
t20=t1;
t21=t10;
t1=t20;
t2=t21;
goto loop;}
else{
t9=C_slot(t2,C_fix(0));
/* eval.scm:870: ##sys#signal-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[175]+1)))(5,*((C_word*)lf[175]+1),t4,lf[169],lf[176],t9);}}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6534 in loop */
static void C_ccall f_6536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* eval.scm:871: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6523(t3,((C_word*)t0)[2],t2);}

/* k6516 */
static void C_ccall f_6518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:872: ##sys#set-dlopen-flags! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[170]+1)))(4,*((C_word*)lf[170]+1),((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* f_6505 in k6501 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_6505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6505,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_6421 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_6421(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6421,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6424,a[2]=t2,a[3]=((C_word)li152),tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6434,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word)li153),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_6434(t8,t1,t2,C_SCHEME_END_OF_LIST,C_fix(0));}

/* loop */
static void C_fcall f_6434(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(9);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6434,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6448,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:839: reverse */
t7=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,t3);}
else{
if(C_truep(C_blockp(t2))){
if(C_truep(C_symbolp(t2))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6467,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t7=C_a_i_cons(&a,2,t2,t3);
/* eval.scm:841: reverse */
t8=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t6,t7);}
else{
if(C_truep(C_pairp(t2))){
t6=C_slot(t2,C_fix(1));
t7=C_slot(t2,C_fix(0));
t8=C_a_i_cons(&a,2,t7,t3);
t9=C_fixnum_plus(t4,C_fix(1));
/* eval.scm:843: loop */
t14=t1;
t15=t6;
t16=t8;
t17=t9;
t1=t14;
t2=t15;
t3=t16;
t4=t17;
goto loop;}
else{
/* eval.scm:842: err */
t6=((C_word*)t0)[2];
f_6424(t6,t1);}}}
else{
/* eval.scm:840: err */
t6=((C_word*)t0)[2];
f_6424(t6,t1);}}}

/* k6465 in loop */
static void C_ccall f_6467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:841: k */
t2=((C_word*)t0)[5];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6446 in loop */
static void C_ccall f_6448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:839: k */
t2=((C_word*)t0)[4];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* err */
static void C_fcall f_6424(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6424,NULL,2,t0,t1);}
t2=C_set_block_item(lf[161] /* syntax-error-culprit */,0,C_SCHEME_FALSE);
/* eval.scm:836: ##sys#syntax-error-hook */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[46]+1)))(4,*((C_word*)lf[46]+1),t1,lf[162],((C_word*)t0)[2]);}

/* f_6411 in k6406 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_6411(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6411r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6411r(t0,t1,t2,t3);}}

static void C_ccall f_6411r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6419,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:824: ##sys#eval-handler */
t5=*((C_word*)lf[158]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k6417 */
static void C_ccall f_6419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_3005 in k2998 in k2628 in k2625 in k2607 */
static void C_ccall f_3005(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_3005r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_3005r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_3005r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3009,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(t5))){
t7=t6;
f_3009(2,t7,C_SCHEME_FALSE);}
else{
t7=C_i_cdr(t5);
if(C_truep(C_i_nullp(t7))){
t8=t6;
f_3009(2,t8,C_i_car(t5));}
else{
/* ##sys#error */
t8=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,lf[0],t5);}}}

/* k3007 */
static void C_ccall f_3009(C_word c,C_word t0,C_word t1){
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
C_word ab[55],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3009,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
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
t16=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3011,a[2]=t3,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp));
t17=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3050,a[2]=t3,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp));
t18=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3065,a[2]=t5,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp));
t19=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3154,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t20=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3176,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t21=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3242,a[2]=t15,a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t11,a[6]=t13,a[7]=((C_word*)t0)[7],a[8]=t7,a[9]=((C_word)li137),tmp=(C_word)a,a+=10,tmp));
t22=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6075,a[2]=t13,a[3]=t9,a[4]=((C_word)li149),tmp=(C_word)a,a+=5,tmp));
t23=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6385,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t13,tmp=(C_word)a,a+=8,tmp);
/* eval.scm:803: ##sys#eval-debug-level */
t24=*((C_word*)lf[33]+1);
((C_proc2)(void*)(*((C_word*)t24+1)))(2,t24,t23);}

/* k6383 in k3007 */
static void C_ccall f_6385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_greaterp(t1,C_fix(0));
/* eval.scm:803: compile */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3242(t3,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_FALSE,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* compile-call in k3007 */
static void C_fcall f_6075(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6075,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6079,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t5,a[6]=t4,a[7]=((C_word*)t0)[3],a[8]=t1,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t8=C_slot(t2,C_fix(0));
/* eval.scm:767: compile */
t9=((C_word*)((C_word*)t0)[2])[1];
f_3242(t9,t7,t8,t3,C_SCHEME_FALSE,t4,t5,t6);}

/* k6077 in compile-call in k3007 */
static void C_ccall f_6079(C_word c,C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6079,2,t0,t1);}
t2=C_slot(((C_word*)t0)[9],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6049,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp);
t4=f_6049(t2,C_fix(0));
t5=((C_word*)t0)[9];
switch(t4){
case C_SCHEME_FALSE:
/* eval.scm:772: ##sys#syntax-error/context */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[153]+1)))(4,*((C_word*)lf[153]+1),((C_word*)t0)[8],lf[157],((C_word*)t0)[9]);
case C_fix(0):
t6=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6101,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li139),tmp=(C_word)a,a+=9,tmp));
case C_fix(1):
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6120,a[2]=((C_word*)t0)[8],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t7=C_slot(t2,C_fix(0));
/* eval.scm:776: compile */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3242(t8,t6,t7,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[2]);
case C_fix(2):
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6148,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
t7=C_slot(t2,C_fix(0));
/* eval.scm:780: compile */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3242(t8,t6,t7,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[2]);
case C_fix(3):
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6183,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[8],a[6]=t1,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t5,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t7=C_slot(t2,C_fix(0));
/* eval.scm:785: compile */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3242(t8,t6,t7,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[2]);
case C_fix(4):
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6225,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
t7=C_slot(t2,C_fix(0));
/* eval.scm:791: compile */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3242(t8,t6,t7,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[2]);
default:
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6266,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[3],a[7]=((C_word)li144),tmp=(C_word)a,a+=8,tmp);
t11=C_i_check_list_2(t2,lf[71]);
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6276,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6337,a[2]=t10,a[3]=t7,a[4]=t14,a[5]=t9,a[6]=((C_word)li148),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_6337(t16,t12,t2);}}

/* map-loop1172 in k6077 in compile-call in k3007 */
static void C_fcall f_6337(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6337,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6366,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g11781187 */
t5=((C_word*)t0)[2];
f_6266(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6364 in map-loop1172 in k6077 in compile-call in k3007 */
static void C_ccall f_6366(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6366,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6337(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6337(t6,((C_word*)t0)[3],t5);}}

/* k6274 in k6077 in compile-call in k3007 */
static void C_ccall f_6276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6276,2,t0,t1);}
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6277,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li147),tmp=(C_word)a,a+=10,tmp));}

/* f_6277 in k6274 in k6077 in compile-call in k3007 */
static void C_ccall f_6277(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6277,3,t0,t1,t2);}
t3=f_3154(C_a_i(&a,5),((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6288,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k6286 */
static void C_ccall f_6288(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6288,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6290,a[2]=((C_word*)t0)[4],a[3]=((C_word)li145),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[71]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6300,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6302,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li146),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_6302(t12,t8,((C_word*)t0)[3]);}

/* map-loop1200 in k6286 */
static void C_fcall f_6302(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6302,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6331,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g12061215 */
t5=((C_word*)t0)[2];
f_6290(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6329 in map-loop1200 in k6286 */
static void C_ccall f_6331(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6331,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6302(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6302(t6,((C_word*)t0)[3],t5);}}

/* k6298 in k6286 */
static void C_ccall f_6300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* g1206 in k6286 */
static void C_fcall f_6290(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6290,NULL,3,t0,t1,t2);}
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,((C_word*)t0)[2]);}

/* g1178 in k6077 in compile-call in k3007 */
static void C_fcall f_6266(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6266,NULL,3,t0,t1,t2);}
/* eval.scm:798: compile */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3242(t3,t1,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6223 in k6077 in compile-call in k3007 */
static void C_ccall f_6225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6225,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6228,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:792: compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3242(t3,t2,C_u_i_list_ref(((C_word*)t0)[3],C_fix(1)),((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[7],((C_word*)t0)[2]);}

/* k6226 in k6223 in k6077 in compile-call in k3007 */
static void C_ccall f_6228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6228,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6231,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:793: compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3242(t3,t2,C_u_i_list_ref(((C_word*)t0)[3],C_fix(2)),((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[10],((C_word*)t0)[8],((C_word*)t0)[2]);}

/* k6229 in k6226 in k6223 in k6077 in compile-call in k3007 */
static void C_ccall f_6231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6231,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6234,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:794: compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3242(t3,t2,C_u_i_list_ref(((C_word*)t0)[3],C_fix(3)),((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[11],((C_word*)t0)[9],((C_word*)t0)[2]);}

/* k6232 in k6229 in k6226 in k6223 in k6077 in compile-call in k3007 */
static void C_ccall f_6234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6234,2,t0,t1);}
t2=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6235,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word)li143),tmp=(C_word)a,a+=13,tmp));}

/* f_6235 in k6232 in k6229 in k6226 in k6223 in k6077 in compile-call in k3007 */
static void C_ccall f_6235(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6235,3,t0,t1,t2);}
t3=f_3154(C_a_i(&a,5),((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6242,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k6240 */
static void C_ccall f_6242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6242,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6249,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k6247 in k6240 */
static void C_ccall f_6249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6249,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6253,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k6251 in k6247 in k6240 */
static void C_ccall f_6253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6253,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6257,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k6255 in k6251 in k6247 in k6240 */
static void C_ccall f_6257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6257,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6261,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k6259 in k6255 in k6251 in k6247 in k6240 */
static void C_ccall f_6261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g11661167 */
t2=((C_word*)t0)[6];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6181 in k6077 in compile-call in k3007 */
static void C_ccall f_6183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:786: compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3242(t3,t2,C_u_i_list_ref(((C_word*)t0)[3],C_fix(1)),((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[10],((C_word*)t0)[8],((C_word*)t0)[2]);}

/* k6184 in k6181 in k6077 in compile-call in k3007 */
static void C_ccall f_6186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6186,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6189,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:787: compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3242(t3,t2,C_u_i_list_ref(((C_word*)t0)[3],C_fix(2)),((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[11],((C_word*)t0)[9],((C_word*)t0)[2]);}

/* k6187 in k6184 in k6181 in k6077 in compile-call in k3007 */
static void C_ccall f_6189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6189,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6190,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word)li142),tmp=(C_word)a,a+=12,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_6190 in k6187 in k6184 in k6181 in k6077 in compile-call in k3007 */
static void C_ccall f_6190(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6190,3,t0,t1,t2);}
t3=f_3154(C_a_i(&a,5),((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6197,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k6195 */
static void C_ccall f_6197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6197,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6204,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k6202 in k6195 */
static void C_ccall f_6204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6204,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6208,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k6206 in k6202 in k6195 */
static void C_ccall f_6208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6212,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k6210 in k6206 in k6202 in k6195 */
static void C_ccall f_6212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g11581159 */
t2=((C_word*)t0)[5];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6146 in k6077 in compile-call in k3007 */
static void C_ccall f_6148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6148,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6151,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:781: compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3242(t3,t2,C_u_i_list_ref(((C_word*)t0)[3],C_fix(1)),((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[7],((C_word*)t0)[2]);}

/* k6149 in k6146 in k6077 in compile-call in k3007 */
static void C_ccall f_6151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6151,2,t0,t1);}
t2=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word)li141),tmp=(C_word)a,a+=11,tmp));}

/* f_6152 in k6149 in k6146 in k6077 in compile-call in k3007 */
static void C_ccall f_6152(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6152,3,t0,t1,t2);}
t3=f_3154(C_a_i(&a,5),((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6159,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k6157 */
static void C_ccall f_6159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6159,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6166,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k6164 in k6157 */
static void C_ccall f_6166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6166,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6170,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k6168 in k6164 in k6157 */
static void C_ccall f_6170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g11511152 */
t2=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6118 in k6077 in compile-call in k3007 */
static void C_ccall f_6120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6120,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6121,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li140),tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_6121 in k6118 in k6077 in compile-call in k3007 */
static void C_ccall f_6121(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6121,3,t0,t1,t2);}
t3=f_3154(C_a_i(&a,5),((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6128,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k6126 */
static void C_ccall f_6128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6128,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6135,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k6133 in k6126 */
static void C_ccall f_6135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g11451146 */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* f_6101 in k6077 in compile-call in k3007 */
static void C_ccall f_6101(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6101,3,t0,t1,t2);}
t3=f_3154(C_a_i(&a,5),((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6108,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k6106 */
static void C_ccall f_6108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g11401141 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* loop in k6077 in compile-call in k3007 */
static C_word C_fcall f_6049(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_check;
loop:
if(C_truep(C_i_nullp(t1))){
t3=t2;
return(t3);}
else{
if(C_truep(C_i_pairp(t1))){
t3=C_slot(t1,C_fix(1));
t4=C_fixnum_plus(t2,C_fix(1));
t7=t3;
t8=t4;
t1=t7;
t2=t8;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* compile in k3007 */
static void C_fcall f_3242(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3242,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,a[7]=t4,a[8]=((C_word*)t0)[6],a[9]=t6,a[10]=((C_word*)t0)[7],a[11]=t7,a[12]=t3,a[13]=((C_word*)t0)[8],a[14]=t1,a[15]=t2,tmp=(C_word)a,a+=16,tmp);
/* eval.scm:261: keyword? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[156]+1)))(3,*((C_word*)lf[156]+1),t8,t2);}

/* k3247 in compile in k3007 */
static void C_ccall f_3249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3249,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3250,a[2]=((C_word*)t0)[15],a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[14];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[15]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3262,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[13],a[6]=((C_word)li29),tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3268,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word)li40),tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[14],t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* eval.scm:306: ##sys#number? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[155]+1)))(3,*((C_word*)lf[155]+1),t2,((C_word*)t0)[15]);}}}

/* k3449 in k3247 in compile in k3007 */
static void C_ccall f_3451(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3451,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[14];
switch(t2){
case C_fix(-1):
t3=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3458,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
case C_fix(0):
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3466,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);
case C_fix(1):
t3=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3474,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
case C_fix(2):
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3482,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);
default:
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3484,a[2]=((C_word*)t0)[14],a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}
else{
if(C_truep(C_booleanp(((C_word*)t0)[14]))){
if(C_truep(((C_word*)t0)[14])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3495,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3497,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t2=C_charp(((C_word*)t0)[14]);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
if(C_truep(t2)){
t4=t3;
f_3507(t4,t2);}
else{
t4=C_eofp(((C_word*)t0)[14]);
t5=t3;
f_3507(t5,(C_truep(t4)?t4:C_i_stringp(((C_word*)t0)[14])));}}}}

/* k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_3507(C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3507,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3508,a[2]=((C_word*)t0)[14],a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[14]))){
t2=C_slot(((C_word*)t0)[14],C_fix(0));
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
t4=((C_word*)t0)[9];
t5=((C_word*)t0)[14];
t6=((C_word*)t0)[8];
if(C_truep(t4)){
t7=C_emit_syntax_trace_info(t5,t6,*((C_word*)lf[39]+1));
t8=t3;
f_3527(t8,t7);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t3;
f_3527(t8,t7);}}
else{
t3=((C_word*)t0)[9];
t4=((C_word*)t0)[14];
t5=((C_word*)t0)[8];
if(C_truep(t3)){
t6=C_emit_syntax_trace_info(t4,t5,*((C_word*)lf[39]+1));
/* eval.scm:744: compile-call */
t7=((C_word*)((C_word*)t0)[2])[1];
f_6075(t7,((C_word*)t0)[13],((C_word*)t0)[14],((C_word*)t0)[11],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
/* eval.scm:744: compile-call */
t6=((C_word*)((C_word*)t0)[2])[1];
f_6075(t6,((C_word*)t0)[13],((C_word*)t0)[14],((C_word*)t0)[11],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}}}
else{
/* eval.scm:322: ##sys#syntax-error/context */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[153]+1)))(4,*((C_word*)lf[153]+1),((C_word*)t0)[13],lf[154],((C_word*)t0)[14]);}}}

/* k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_3527(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3527,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* eval.scm:325: ##sys#expand */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[152]+1)))(5,*((C_word*)lf[152]+1),t2,((C_word*)t0)[14],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3530,2,t0,t1);}
t2=C_eqp(t1,((C_word*)t0)[14]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t4=C_slot(((C_word*)t0)[14],C_fix(0));
/* eval.scm:329: rename */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3050(t5,t3,t4,((C_word*)t0)[7]);}
else{
/* eval.scm:328: compile */
t3=((C_word*)((C_word*)t0)[12])[1];
f_3242(t3,((C_word*)t0)[13],t1,((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}}

/* k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
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
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word t110;
C_word t111;
C_word t112;
C_word t113;
C_word t114;
C_word t115;
C_word t116;
C_word t117;
C_word t118;
C_word t119;
C_word t120;
C_word t121;
C_word t122;
C_word t123;
C_word t124;
C_word t125;
C_word t126;
C_word t127;
C_word t128;
C_word t129;
C_word t130;
C_word t131;
C_word t132;
C_word t133;
C_word t134;
C_word t135;
C_word t136;
C_word t137;
C_word t138;
C_word t139;
C_word t140;
C_word t141;
C_word t142;
C_word t143;
C_word t144;
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3545,2,t0,t1);}
t2=C_eqp(t1,lf[51]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3554,a[2]=((C_word*)t0)[14],tmp=(C_word)a,a+=3,tmp);
t4=C_i_cadr(((C_word*)t0)[13]);
/* eval.scm:335: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[52]+1)))(3,*((C_word*)lf[52]+1),t3,t4);}
else{
t3=C_eqp(t1,lf[53]);
if(C_truep(t3)){
t4=C_i_cadr(((C_word*)t0)[13]);
t5=((C_word*)t0)[14];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3626,a[2]=t4,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp));}
else{
t4=C_eqp(t1,lf[54]);
if(C_truep(t4)){
t5=C_i_cadr(((C_word*)t0)[13]);
if(C_truep(*((C_word*)lf[23]+1))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3642,a[2]=((C_word*)t0)[14],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:353: ##sys#hash-table-location */
t7=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,*((C_word*)lf[23]+1),t5,C_SCHEME_TRUE);}
else{
t6=((C_word*)t0)[14];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3648,a[2]=t5,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp));}}
else{
t5=C_eqp(t1,lf[55]);
if(C_truep(t5)){
t6=C_i_cadr(((C_word*)t0)[13]);
/* eval.scm:358: compile */
t7=((C_word*)((C_word*)t0)[12])[1];
f_3242(t7,((C_word*)t0)[14],t6,((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t6=C_eqp(t1,lf[56]);
if(C_truep(t6)){
t7=C_i_cadr(((C_word*)t0)[13]);
/* eval.scm:361: compile */
t8=((C_word*)((C_word*)t0)[12])[1];
f_3242(t8,((C_word*)t0)[14],t7,((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t7=C_eqp(t1,lf[57]);
if(C_truep(t7)){
t8=((C_word*)t0)[14];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3682,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));}
else{
t8=C_eqp(t1,lf[58]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3692,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],tmp=(C_word)a,a+=9,tmp);
t10=C_i_cadr(((C_word*)t0)[13]);
/* eval.scm:366: compile */
t11=((C_word*)((C_word*)t0)[12])[1];
f_3242(t11,t9,t10,((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t9=C_eqp(t1,lf[60]);
t10=(C_truep(t9)?t9:C_eqp(t1,lf[61]));
if(C_truep(t10)){
t11=C_slot(((C_word*)t0)[13],C_fix(1));
t12=C_i_length(t11);
switch(t12){
case C_fix(0):
/* eval.scm:377: compile */
t13=((C_word*)((C_word*)t0)[12])[1];
f_3242(t13,((C_word*)t0)[14],lf[62],((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);
case C_fix(1):
t13=C_slot(t11,C_fix(0));
/* eval.scm:378: compile */
t14=((C_word*)((C_word*)t0)[12])[1];
f_3242(t14,((C_word*)t0)[14],t13,((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);
case C_fix(2):
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3783,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=t11,a[8]=((C_word*)t0)[14],tmp=(C_word)a,a+=9,tmp);
t14=C_slot(t11,C_fix(0));
/* eval.scm:379: compile */
t15=((C_word*)((C_word*)t0)[12])[1];
f_3242(t15,t13,t14,((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);
default:
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3805,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=t11,a[8]=((C_word*)t0)[14],tmp=(C_word)a,a+=9,tmp);
t14=C_slot(t11,C_fix(0));
/* eval.scm:383: compile */
t15=((C_word*)((C_word*)t0)[12])[1];
f_3242(t15,t13,t14,((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}}
else{
t11=C_eqp(t1,lf[63]);
if(C_truep(t11)){
t12=C_i_cadr(((C_word*)t0)[13]);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3856,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[11],a[4]=t12,a[5]=((C_word*)t0)[6],a[6]=((C_word)li64),tmp=(C_word)a,a+=7,tmp);
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3862,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=t12,a[8]=((C_word*)t0)[8],a[9]=((C_word)li70),tmp=(C_word)a,a+=10,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[14],t13,t14);}
else{
t12=C_eqp(t1,lf[70]);
if(C_truep(t12)){
t13=C_i_cadr(((C_word*)t0)[13]);
t14=C_i_length(t13);
t15=C_SCHEME_END_OF_LIST;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_FALSE;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_i_check_list_2(t13,lf[71]);
t20=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3997,a[2]=((C_word*)t0)[13],a[3]=t13,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[14],a[9]=t14,a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4388,a[2]=t16,a[3]=t22,a[4]=t18,a[5]=((C_word)li80),tmp=(C_word)a,a+=6,tmp));
t24=((C_word*)t22)[1];
f_4388(t24,t20,t13);}
else{
t13=C_eqp(t1,lf[78]);
if(C_truep(t13)){
t14=C_i_cadr(((C_word*)t0)[13]);
t15=C_i_cddr(((C_word*)t0)[13]);
t16=C_SCHEME_END_OF_LIST;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_FALSE;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_i_check_list_2(t14,lf[71]);
t21=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4460,a[2]=t15,a[3]=t14,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4533,a[2]=t17,a[3]=t23,a[4]=t19,a[5]=((C_word)li82),tmp=(C_word)a,a+=6,tmp));
t25=((C_word*)t23)[1];
f_4533(t25,t21,t14);}
else{
t14=C_eqp(t1,lf[81]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4575,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:482: ##sys#check-syntax */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[89]+1)))(7,*((C_word*)lf[89]+1),t15,lf[90],((C_word*)t0)[13],lf[91],C_SCHEME_FALSE,((C_word*)t0)[7]);}
else{
t15=C_eqp(t1,lf[92]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4973,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
t17=C_SCHEME_END_OF_LIST;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_FALSE;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4986,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[7],a[4]=((C_word)li112),tmp=(C_word)a,a+=5,tmp);
t22=C_i_cadr(((C_word*)t0)[13]);
t23=C_i_check_list_2(t22,lf[71]);
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5015,a[2]=((C_word*)t0)[7],a[3]=t16,tmp=(C_word)a,a+=4,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5017,a[2]=t21,a[3]=t18,a[4]=t26,a[5]=t20,a[6]=((C_word)li113),tmp=(C_word)a,a+=7,tmp));
t28=((C_word*)t26)[1];
f_5017(t28,t24,t22);}
else{
t16=C_eqp(t1,lf[95]);
if(C_truep(t16)){
t17=C_SCHEME_END_OF_LIST;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_FALSE;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5057,a[2]=((C_word*)t0)[5],a[3]=((C_word)li114),tmp=(C_word)a,a+=4,tmp);
t22=C_i_cadr(((C_word*)t0)[13]);
t23=C_i_check_list_2(t22,lf[71]);
t24=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5086,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[14],a[8]=((C_word*)t0)[12],tmp=(C_word)a,a+=9,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5140,a[2]=t21,a[3]=t18,a[4]=t26,a[5]=t20,a[6]=((C_word)li117),tmp=(C_word)a,a+=7,tmp));
t28=((C_word*)t26)[1];
f_5140(t28,t24,t22);}
else{
t17=C_eqp(t1,lf[96]);
if(C_truep(t17)){
t18=C_i_cadr(((C_word*)t0)[13]);
t19=C_i_caddr(((C_word*)t0)[13]);
t20=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5188,a[2]=t19,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[14],a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:610: rename */
t21=((C_word*)((C_word*)t0)[4])[1];
f_3050(t21,t20,t18,((C_word*)t0)[7]);}
else{
t18=C_eqp(t1,lf[100]);
if(C_truep(t18)){
/* eval.scm:621: compile */
t19=((C_word*)((C_word*)t0)[12])[1];
f_3242(t19,((C_word*)t0)[14],lf[101],((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t19=C_eqp(t1,lf[102]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5235,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
t21=C_i_cddr(((C_word*)t0)[13]);
/* eval.scm:625: ##sys#canonicalize-body */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(5,*((C_word*)lf[76]+1),t20,t21,((C_word*)t0)[7],C_SCHEME_FALSE);}
else{
t20=C_eqp(t1,lf[103]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5256,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
t22=C_i_cadr(((C_word*)t0)[13]);
/* eval.scm:631: ##sys#include-forms-from-file */
t23=*((C_word*)lf[104]+1);
((C_proc3)(void*)(*((C_word*)t23+1)))(3,t23,t21,t22);}
else{
t21=C_eqp(t1,lf[105]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5269,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:635: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[52]+1)))(3,*((C_word*)lf[52]+1),t22,((C_word*)t0)[13]);}
else{
t22=C_eqp(t1,lf[114]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5531,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:681: rename */
t24=((C_word*)((C_word*)t0)[4])[1];
f_3050(t24,t23,lf[90],((C_word*)t0)[7]);}
else{
t23=C_eqp(t1,lf[115]);
if(C_truep(t23)){
t24=C_SCHEME_END_OF_LIST;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_FALSE;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5542,a[2]=((C_word*)t0)[5],a[3]=((C_word)li126),tmp=(C_word)a,a+=4,tmp);
t29=C_i_cdr(((C_word*)t0)[13]);
t30=C_i_check_list_2(t29,lf[71]);
t31=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5555,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5623,a[2]=t28,a[3]=t25,a[4]=t33,a[5]=t27,a[6]=((C_word)li128),tmp=(C_word)a,a+=7,tmp));
t35=((C_word*)t33)[1];
f_5623(t35,t31,t29);}
else{
t24=C_eqp(t1,lf[120]);
if(C_truep(t24)){
t25=C_i_caddr(((C_word*)t0)[13]);
t26=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5672,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
t27=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5676,a[2]=t26,a[3]=t25,tmp=(C_word)a,a+=4,tmp);
t28=C_i_cadr(((C_word*)t0)[13]);
/* eval.scm:698: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[52]+1)))(3,*((C_word*)lf[52]+1),t27,t28);}
else{
t25=C_eqp(t1,lf[123]);
t26=(C_truep(t25)?t25:C_eqp(t1,lf[124]));
if(C_truep(t26)){
t27=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5728,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
t28=C_i_cadr(((C_word*)t0)[13]);
/* eval.scm:708: eval/meta */
f_3176(t27,t28);}
else{
t27=C_eqp(t1,lf[126]);
if(C_truep(t27)){
t28=C_i_cadr(((C_word*)t0)[13]);
/* eval.scm:712: compile */
t29=((C_word*)((C_word*)t0)[12])[1];
f_3242(t29,((C_word*)t0)[14],t28,((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t28=C_eqp(t1,lf[127]);
t29=(C_truep(t28)?t28:C_eqp(t1,lf[128]));
if(C_truep(t29)){
/* eval.scm:715: compile */
t30=((C_word*)((C_word*)t0)[12])[1];
f_3242(t30,((C_word*)t0)[14],lf[129],((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t30=C_eqp(t1,lf[130]);
if(C_truep(t30)){
t31=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5769,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_memq(lf[132],*((C_word*)lf[133]+1)))){
t32=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5776,a[2]=((C_word*)t0)[7],a[3]=((C_word)li132),tmp=(C_word)a,a+=4,tmp);
t33=C_i_cdr(((C_word*)t0)[13]);
t34=C_i_check_list_2(t33,lf[20]);
t35=C_SCHEME_UNDEFINED;
t36=(*a=C_VECTOR_TYPE|1,a[1]=t35,tmp=(C_word)a,a+=2,tmp);
t37=C_set_block_item(t36,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5791,a[2]=t32,a[3]=t36,a[4]=((C_word)li133),tmp=(C_word)a,a+=5,tmp));
t38=((C_word*)t36)[1];
f_5791(t38,t31,t33);}
else{
/* eval.scm:720: ##sys#notice */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),t31,lf[135],((C_word*)t0)[13]);}}
else{
t31=C_eqp(t1,lf[136]);
t32=(C_truep(t31)?t31:C_eqp(t1,lf[137]));
if(C_truep(t32)){
t33=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5835,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:726: rename */
t34=((C_word*)((C_word*)t0)[4])[1];
f_3050(t34,t33,lf[138],((C_word*)t0)[7]);}
else{
t33=C_eqp(t1,lf[49]);
t34=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5848,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[2],a[7]=t1,a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t33)){
t35=t34;
f_5848(t35,t33);}
else{
t35=C_eqp(t1,lf[142]);
if(C_truep(t35)){
t36=t34;
f_5848(t36,t35);}
else{
t36=C_eqp(t1,lf[143]);
if(C_truep(t36)){
t37=t34;
f_5848(t37,t36);}
else{
t37=C_eqp(t1,lf[144]);
if(C_truep(t37)){
t38=t34;
f_5848(t38,t37);}
else{
t38=C_eqp(t1,lf[145]);
if(C_truep(t38)){
t39=t34;
f_5848(t39,t38);}
else{
t39=C_eqp(t1,lf[146]);
if(C_truep(t39)){
t40=t34;
f_5848(t40,t39);}
else{
t40=C_eqp(t1,lf[147]);
if(C_truep(t40)){
t41=t34;
f_5848(t41,t40);}
else{
t41=C_eqp(t1,lf[148]);
if(C_truep(t41)){
t42=t34;
f_5848(t42,t41);}
else{
t42=C_eqp(t1,lf[149]);
if(C_truep(t42)){
t43=t34;
f_5848(t43,t42);}
else{
t43=C_eqp(t1,lf[150]);
t44=t34;
f_5848(t44,(C_truep(t43)?t43:C_eqp(t1,lf[151])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k5846 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_5848(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5848,NULL,2,t0,t1);}
if(C_truep(t1)){
/* eval.scm:733: ##sys#syntax-error-hook */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[46]+1)))(4,*((C_word*)lf[46]+1),((C_word*)t0)[9],lf[139],((C_word*)t0)[8]);}
else{
t2=C_eqp(((C_word*)t0)[7],lf[140]);
if(C_truep(t2)){
t3=C_i_cdr(((C_word*)t0)[8]);
/* eval.scm:736: compile-call */
t4=((C_word*)((C_word*)t0)[6])[1];
f_6075(t4,((C_word*)t0)[9],t3,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[7],*((C_word*)lf[141]+1));
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5872,a[2]=t5,a[3]=t7,a[4]=((C_word)li134),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],a[8]=((C_word)li135),tmp=(C_word)a,a+=9,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5883,a[2]=t7,a[3]=t5,a[4]=((C_word)li136),tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t11=*((C_word*)lf[109]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,((C_word*)t0)[9],t8,t9,t10);}}}

/* a5882 in k5846 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5883,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[141]+1));
t3=C_mutate((C_word*)lf[141]+1 /* (set! ##sys#syntax-context ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a5876 in k5846 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5877,2,t0,t1);}
/* eval.scm:740: compile-call */
t2=((C_word*)((C_word*)t0)[7])[1];
f_6075(t2,t1,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5871 in k5846 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5872,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[141]+1));
t3=C_mutate((C_word*)lf[141]+1 /* (set! ##sys#syntax-context ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k5833 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5835,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[8]);
t3=C_a_i_cons(&a,2,t1,t2);
/* eval.scm:726: compile */
t4=((C_word*)((C_word*)t0)[7])[1];
f_3242(t4,((C_word*)t0)[6],t3,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* for-each-loop1042 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_5791(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5791,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5801,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g10431049 */
t5=((C_word*)t0)[2];
f_5776(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5799 in for-each-loop1042 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5791(t3,((C_word*)t0)[2],t2);}

/* g1043 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_5776(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5776,NULL,3,t0,t1,t2);}
/* eval.scm:719: ##compiler#process-declaration */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[134]+1)))(4,*((C_word*)lf[134]+1),t1,t2,((C_word*)t0)[2]);}

/* k5767 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:723: compile */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3242(t2,((C_word*)t0)[6],lf[131],((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5726 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:709: compile */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3242(t2,((C_word*)t0)[6],lf[125],((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5674 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5676,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5678,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word)li131),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5678(t5,((C_word*)t0)[2],t1);}

/* loop in k5674 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_5678(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5678,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[121]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5690,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word)li129),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5700,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li130),tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}}

/* a5699 in loop in k5674 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5700(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5700,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5708,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cdr(((C_word*)t0)[3]);
/* eval.scm:704: loop */
t6=((C_word*)((C_word*)t0)[2])[1];
f_5678(t6,t4,t5);}

/* k5706 in a5699 in loop in k5674 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5708,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[60],((C_word*)t0)[2],t1));}

/* a5689 in loop in k5674 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5690,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[3]);
/* eval.scm:702: ##sys#do-the-right-thing */
t3=*((C_word*)lf[122]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,t2,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k5670 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:697: compile */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3242(t2,((C_word*)t0)[6],t1,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* map-loop958 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_5623(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5623,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5652,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g964973 */
t5=((C_word*)t0)[2];
f_5542(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5650 in map-loop958 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5652(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5652,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5623(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5623(t6,((C_word*)t0)[3],t5);}}

/* k5553 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5555,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5558,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_apply(4,0,t2,*((C_word*)lf[117]+1),t1);}

/* k5556 in k5553 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5558,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5561,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:688: ##sys#lookup-runtime-requirements */
t3=*((C_word*)lf[119]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5559 in k5556 in k5553 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5561(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5561,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
/* eval.scm:689: compile */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3242(t2,((C_word*)t0)[6],lf[116],((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(t1,lf[71]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5588,a[2]=t3,a[3]=t9,a[4]=t5,a[5]=((C_word)li127),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5588(t11,t7,t1);}}

/* map-loop989 in k5559 in k5556 in k5553 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_5588(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5588,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[118],t3);
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

/* k5584 in k5559 in k5556 in k5553 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5586,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[117],t1);
/* eval.scm:689: compile */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3242(t3,((C_word*)t0)[6],t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* g964 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_5542(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5542,NULL,3,t0,t1,t2);}
/* eval.scm:685: eval/meta */
f_3176(t1,t2);}

/* k5529 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5531,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[8]);
t3=C_a_i_cons(&a,2,t1,t2);
/* eval.scm:681: compile */
t4=((C_word*)((C_word*)t0)[7])[1];
f_3242(t4,((C_word*)t0)[6],t3,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5269,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5272,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=C_i_cadr(t1);
/* eval.scm:636: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[52]+1)))(3,*((C_word*)lf[52]+1),t2,t3);}

/* k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5272(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5272,2,t0,t1);}
t2=C_i_caddr(((C_word*)t0)[7]);
t3=C_eqp(C_SCHEME_TRUE,t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5278,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=t4;
f_5278(2,t5,t3);}
else{
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5410,a[2]=t1,a[3]=((C_word)li124),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5461,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t11=C_i_caddr(((C_word*)t0)[7]);
/* eval.scm:651: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[52]+1)))(3,*((C_word*)lf[52]+1),t10,t11);}}

/* k5459 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5461,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[71]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5469,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],a[6]=((C_word)li125),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_5469(t6,((C_word*)t0)[2],t1);}

/* map-loop868 in k5459 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_5469(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5469,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5498,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g874883 */
t5=((C_word*)t0)[2];
f_5410(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5496 in map-loop868 in k5459 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5498(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5498,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5469(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5469(t6,((C_word*)t0)[3],t5);}}

/* g874 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_5410(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5410,NULL,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5423,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5434,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp);
t5=t3;
f_5423(t5,f_5434(t2));}
else{
t4=t3;
f_5423(t4,C_SCHEME_FALSE);}}}

/* loop in g874 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static C_word C_fcall f_5434(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_check;
loop:
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
if(C_truep(C_i_symbolp(t3))){
t4=C_i_cdr(t1);
t6=t4;
t1=t6;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* k5421 in g874 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_5423(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
/* eval.scm:648: ##sys#syntax-error-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[46]+1)))(6,*((C_word*)lf[46]+1),((C_word*)t0)[4],lf[111],lf[113],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5278,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5281,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5406,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:652: ##sys#current-module */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(2,*((C_word*)lf[41]+1),t3);}

/* k5404 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* eval.scm:653: ##sys#syntax-error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[46]+1)))(5,*((C_word*)lf[46]+1),((C_word*)t0)[3],lf[111],lf[112],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_5281(2,t2,C_SCHEME_UNDEFINED);}}

/* k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5281,2,t0,t1);}
t2=*((C_word*)lf[41]+1);
t3=*((C_word*)lf[69]+1);
t4=*((C_word*)lf[40]+1);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5284,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=t2,a[9]=t3,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
/* eval.scm:655: ##sys#register-module */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[110]+1)))(4,*((C_word*)lf[110]+1),t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5282 in k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5284(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5284,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[106]+1);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5285,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=t7,a[6]=t5,a[7]=t3,a[8]=((C_word)li118),tmp=(C_word)a,a+=9,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5312,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li122),tmp=(C_word)a,a+=8,tmp);
/* ##sys#dynamic-wind */
t10=*((C_word*)lf[109]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,((C_word*)t0)[2],t8,t9,t8);}

/* a5311 in k5282 in k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5312,2,t0,t1);}
t2=C_i_cdddr(((C_word*)t0)[6]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word)li121),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_5322(t6,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop in a5311 in k5282 in k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_5322(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5322,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5332,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:660: reverse */
t5=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,t3);}
else{
t4=C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5395,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5403,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t5,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:677: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(2,*((C_word*)lf[69]+1),t7);}}

/* k5401 in loop in a5311 in k5282 in k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:674: compile */
t2=((C_word*)((C_word*)t0)[6])[1];
f_3242(t2,((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_END_OF_LIST,C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5393 in loop in a5311 in k5282 in k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5395,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* eval.scm:672: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5322(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k5330 in loop in a5311 in k5282 in k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5332,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5335,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5380,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:661: ##sys#current-module */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(2,*((C_word*)lf[41]+1),t3);}

/* k5378 in k5330 in loop in a5311 in k5282 in k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:661: ##sys#finalize-module */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[108]+1)))(3,*((C_word*)lf[108]+1),((C_word*)t0)[2],t1);}

/* k5333 in k5330 in loop in a5311 in k5282 in k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5336,a[2]=((C_word*)t0)[3],a[3]=((C_word)li120),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_5336 in k5333 in k5330 in loop in a5311 in k5282 in k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5336(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5336,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5342,a[2]=t2,a[3]=t4,a[4]=((C_word)li119),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5342(t6,t1,((C_word*)t0)[2]);}

/* loop2 */
static void C_fcall f_5342(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5342,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,*((C_word*)lf[107]+1));}
else{
t3=C_slot(t2,C_fix(1));
if(C_truep(C_i_pairp(t3))){
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5367,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* g943944 */
t6=t4;
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}
else{
t4=C_slot(t2,C_fix(0));
/* g946947 */
t5=t4;
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t1,((C_word*)t0)[2]);}}}

/* k5365 in loop2 */
static void C_ccall f_5367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:669: loop2 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5342(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* swap904 in k5282 in k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5285,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* g905906917 */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k5287 in swap904 in k5282 in k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5292,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* g905906917 */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)((C_word*)t0)[8])[1]);}

/* k5290 in k5287 in swap904 in k5282 in k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5292,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[8])+1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* g907908918 */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k5294 in k5290 in k5287 in swap904 in k5282 in k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5296,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5299,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* g907908918 */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)((C_word*)t0)[6])[1]);}

/* k5297 in k5294 in k5290 in k5287 in swap904 in k5282 in k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5299,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5303,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* g909910919 */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}

/* k5301 in k5297 in k5294 in k5290 in k5287 in swap904 in k5282 in k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5306,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* g909910919 */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)((C_word*)t0)[4])[1]);}

/* k5304 in k5301 in k5297 in k5294 in k5290 in k5287 in swap904 in k5282 in k5279 in k5276 in k5270 in k5267 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5254 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5256,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[60],t1);
/* eval.scm:629: compile */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3242(t3,((C_word*)t0)[6],t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5233 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:624: compile */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3242(t2,((C_word*)t0)[6],t1,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5186 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5188,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5191,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5213,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:612: ##sys#current-module */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(2,*((C_word*)lf[41]+1),t3);}

/* k5211 in k5186 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:611: ##sys#register-syntax-export */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[99]+1)))(5,*((C_word*)lf[99]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5189 in k5186 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5191,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5194,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:616: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(2,*((C_word*)lf[69]+1),t3);}

/* k5199 in k5189 in k5186 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5201,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5205,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5209,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:617: eval/meta */
f_3176(t3,((C_word*)t0)[2]);}

/* k5207 in k5199 in k5189 in k5186 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:617: ##sys#er-transformer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(3,*((C_word*)lf[93]+1),((C_word*)t0)[2],t1);}

/* k5203 in k5199 in k5189 in k5186 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:614: ##sys#extend-macro-environment */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[98]+1)))(5,*((C_word*)lf[98]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5192 in k5189 in k5186 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:618: compile */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3242(t2,((C_word*)t0)[6],lf[97],((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* map-loop808 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_5140(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5140,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5169,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g814823 */
t5=((C_word*)t0)[2];
f_5057(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5167 in map-loop808 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5169(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5169,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5140(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5140(t6,((C_word*)t0)[3],t5);}}

/* k5084 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5086,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5089,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* eval.scm:598: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[94]+1)))(4,*((C_word*)lf[94]+1),t2,t1,((C_word*)t0)[2]);}

/* k5087 in k5084 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5089(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5089,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5090,a[2]=t1,a[3]=((C_word)li115),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[8],lf[20]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5117,a[2]=t2,a[3]=((C_word)li116),tmp=(C_word)a,a+=4,tmp);
t5=f_5117(t4,((C_word*)t0)[8]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5111,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t7=C_i_cddr(((C_word*)t0)[2]);
/* eval.scm:604: ##sys#canonicalize-body */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(5,*((C_word*)lf[76]+1),t6,t7,t1,C_SCHEME_FALSE);}

/* k5109 in k5087 in k5084 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:603: compile */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3242(t2,((C_word*)t0)[6],t1,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* for-each-loop836 in k5087 in k5084 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static C_word C_fcall f_5117(C_word t0,C_word t1){
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
t3=f_5090(((C_word*)t0)[2],t2);
t4=C_slot(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* g837 in k5087 in k5084 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static C_word C_fcall f_5090(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=C_i_cdr(t1);
return(C_i_set_car(t2,((C_word*)t0)[2]));}

/* g814 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_5057(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5057,NULL,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5069,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5073,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cadr(t2);
/* eval.scm:596: eval/meta */
f_3176(t5,t6);}

/* k5071 in g814 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:595: ##sys#er-transformer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(3,*((C_word*)lf[93]+1),((C_word*)t0)[2],t1);}

/* k5067 in g814 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5069,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,((C_word*)t0)[2],C_SCHEME_FALSE,t1));}

/* map-loop780 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_5017(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5017,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5046,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g786795 */
t5=((C_word*)t0)[2];
f_4986(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5044 in map-loop780 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5046(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5046,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5017(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5017(t6,((C_word*)t0)[3],t5);}}

/* k5013 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:577: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[94]+1)))(4,*((C_word*)lf[94]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* g786 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_4986(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4986,NULL,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4998,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5002,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cadr(t2);
/* eval.scm:583: eval/meta */
f_3176(t5,t6);}

/* k5000 in g786 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_5002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:582: ##sys#er-transformer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(3,*((C_word*)lf[93]+1),((C_word*)t0)[2],t1);}

/* k4996 in g786 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4998,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k4971 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4973,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4980,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_cddr(((C_word*)t0)[2]);
/* eval.scm:587: ##sys#canonicalize-body */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(5,*((C_word*)lf[76]+1),t2,t3,t1,C_SCHEME_FALSE);}

/* k4978 in k4971 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:586: compile */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3242(t2,((C_word*)t0)[6],t1,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4575(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4575,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[7]);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_i_cddr(((C_word*)t0)[7]);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t0)[6];
t9=(C_truep(t8)?C_a_i_cons(&a,2,t8,((C_word*)t4)[1]):C_a_i_cons(&a,2,lf[82],((C_word*)t4)[1]));
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4587,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t7,a[6]=t9,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4946,a[2]=t10,a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:486: ##sys#extended-lambda-list? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[88]+1)))(3,*((C_word*)lf[88]+1),t11,((C_word*)t4)[1]);}

/* k4944 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4946,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4951,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li110),tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4957,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li111),tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
f_4587(2,t2,C_SCHEME_UNDEFINED);}}

/* a4956 in k4944 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4957(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4957,4,t0,t1,t2,t3);}
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* a4950 in k4944 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4951,2,t0,t1);}
/* eval.scm:489: ##sys#expand-extended-lambda-list */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[87]+1)))(6,*((C_word*)lf[87]+1),t1,((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],*((C_word*)lf[46]+1),((C_word*)t0)[2]);}

/* k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4587,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4592,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word)li109),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:491: ##sys#decompose-lambda-list */
t3=*((C_word*)lf[86]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t2);}

/* a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4592(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[25],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4592,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[72]+1);
t10=t2;
t11=C_i_check_list_2(t10,lf[71]);
t12=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4599,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t4,a[9]=t1,a[10]=t3,a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4910,a[2]=t9,a[3]=t6,a[4]=t14,a[5]=t8,a[6]=((C_word)li108),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_4910(t16,t12,t10);}

/* map-loop700 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_4910(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4910,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4939,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g706715 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4937 in map-loop700 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4939(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4939,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4910(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4910(t6,((C_word*)t0)[3],t5);}}

/* k4597 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4599,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4602,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* eval.scm:495: ##sys#extend-se */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[77]+1)))(5,*((C_word*)lf[77]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4600 in k4597 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4602,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[10],((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4608,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4904,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:499: ##sys#canonicalize-body */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(5,*((C_word*)lf[76]+1),t4,((C_word*)((C_word*)t0)[2])[1],t1,C_SCHEME_FALSE);}

/* k4902 in k4600 in k4597 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[6];
if(C_truep(t2)){
/* eval.scm:498: ##sys#compile-to-closure */
t3=*((C_word*)lf[35]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],t2);}
else{
t3=((C_word*)t0)[2];
/* eval.scm:498: ##sys#compile-to-closure */
t4=*((C_word*)lf[35]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],t3);}}

/* k4606 in k4600 in k4597 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4608(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4608,2,t0,t1);}
t2=((C_word*)t0)[7];
switch(t2){
case C_fix(0):
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(((C_word*)t0)[5])?(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word)li84),tmp=(C_word)a,a+=7,tmp):(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word)li86),tmp=(C_word)a,a+=7,tmp)));
case C_fix(1):
if(C_truep(((C_word*)t0)[5])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word)li88),tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4680,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word)li90),tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
case C_fix(2):
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(((C_word*)t0)[5])?(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4708,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word)li92),tmp=(C_word)a,a+=7,tmp):(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word)li94),tmp=(C_word)a,a+=7,tmp)));
case C_fix(3):
if(C_truep(((C_word*)t0)[5])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4755,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word)li96),tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word)li98),tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
default:
t3=C_eqp(t2,C_fix(4));
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?(C_truep(((C_word*)t0)[5])?(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word)li100),tmp=(C_word)a,a+=7,tmp):(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4821,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word)li102),tmp=(C_word)a,a+=7,tmp)):(C_truep(((C_word*)t0)[5])?(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4843,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word)li105),tmp=(C_word)a,a+=8,tmp):(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word)li107),tmp=(C_word)a,a+=8,tmp))));}}

/* f_4866 in k4606 in k4600 in k4597 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4866(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4866,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4872,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
/* eval.scm:232: ##sys#eval-decorator */
t6=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,t3,((C_word*)t0)[2],t4,t5);}

/* a4871 */
static void C_ccall f_4872(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_4872r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4872r(t0,t1,t2);}}

static void C_ccall f_4872r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t3=C_i_length(t2);
t4=C_eqp(t3,((C_word*)t0)[4]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4896,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t5,*((C_word*)lf[83]+1),t2);}
else{
/* eval.scm:572: ##sys#error */
t5=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,lf[85],((C_word*)t0)[4],t3);}}

/* k4894 in a4871 */
static void C_ccall f_4896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4896,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* f_4843 in k4606 in k4600 in k4597 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4843(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4843,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4849,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word)li104),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
/* eval.scm:232: ##sys#eval-decorator */
t6=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,t3,((C_word*)t0)[2],t4,t5);}

/* a4848 */
static void C_ccall f_4849(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr2r,(void*)f_4849r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4849r(t0,t1,t2);}}

static void C_ccall f_4849r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(15);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4861,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4865,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[2];
if(C_truep(C_i_nullp(t2))){
t6=C_a_i_list1(&a,1,t2);
C_apply(4,0,t3,*((C_word*)lf[83]+1),t6);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6003,a[2]=t7,a[3]=t2,a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_6003(t9,t4,t5,C_fix(0),t2,C_SCHEME_FALSE);}}

/* doloop1109 in a4848 */
static void C_fcall f_6003(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
loop:
a=C_alloc(7);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6003,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_eqp(t2,C_fix(0));
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,t4);
t8=C_i_setslot(t5,C_fix(1),t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,((C_word*)t0)[3]);}
else{
t7=C_fixnum_difference(t2,C_fix(1));
t8=C_fixnum_plus(t3,C_fix(1));
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6032,a[2]=t4,a[3]=t8,a[4]=t7,a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t10=C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t10)){
/* eval.scm:753: ##sys#error */
t11=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t9,lf[84],t2,t3);}
else{
t11=C_slot(t4,C_fix(1));
t15=t1;
t16=t7;
t17=t8;
t18=t11;
t19=t4;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
t5=t19;
goto loop;}}}

/* k6030 in doloop1109 in a4848 */
static void C_ccall f_6032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[6])[1];
f_6003(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4863 in a4848 */
static void C_ccall f_4865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[83]+1),t1);}

/* k4859 in a4848 */
static void C_ccall f_4861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4861,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* f_4821 in k4606 in k4600 in k4597 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4821(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4821,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4827,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word)li101),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
/* eval.scm:232: ##sys#eval-decorator */
t6=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,t3,((C_word*)t0)[2],t4,t5);}

/* a4826 */
static void C_ccall f_4827(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4827,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4839,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:556: ##sys#vector */
t7=*((C_word*)lf[83]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,t2,t3,t4,t5);}

/* k4837 in a4826 */
static void C_ccall f_4839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4839,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* f_4802 in k4606 in k4600 in k4597 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4802(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4802,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4808,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
/* eval.scm:232: ##sys#eval-decorator */
t6=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,t3,((C_word*)t0)[2],t4,t5);}

/* a4807 */
static void C_ccall f_4808(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr6r,(void*)f_4808r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_4808r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_4808r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(9);
t7=C_a_i_vector5(&a,5,t2,t3,t4,t5,t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[3]);
t9=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t1,t8);}

/* f_4774 in k4606 in k4600 in k4597 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4774(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4774,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4780,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word)li97),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
/* eval.scm:232: ##sys#eval-decorator */
t6=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,t3,((C_word*)t0)[2],t4,t5);}

/* a4779 */
static void C_ccall f_4780(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4780,5,t0,t1,t2,t3,t4);}
t5=C_a_i_vector3(&a,3,t2,t3,t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[3]);
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t1,t6);}

/* f_4755 in k4606 in k4600 in k4597 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4755(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4755,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4761,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word)li95),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
/* eval.scm:232: ##sys#eval-decorator */
t6=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,t3,((C_word*)t0)[2],t4,t5);}

/* a4760 */
static void C_ccall f_4761(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_4761r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_4761r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_4761r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(8);
t6=C_a_i_vector4(&a,4,t2,t3,t4,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t1,t7);}

/* f_4727 in k4606 in k4600 in k4597 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4727(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4727,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4733,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word)li93),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
/* eval.scm:232: ##sys#eval-decorator */
t6=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,t3,((C_word*)t0)[2],t4,t5);}

/* a4732 */
static void C_ccall f_4733(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4733,4,t0,t1,t2,t3);}
t4=C_a_i_vector2(&a,2,t2,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t5);}

/* f_4708 in k4606 in k4600 in k4597 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4708(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4708,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4714,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
/* eval.scm:232: ##sys#eval-decorator */
t6=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,t3,((C_word*)t0)[2],t4,t5);}

/* a4713 */
static void C_ccall f_4714(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_4714r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4714r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4714r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t5=C_a_i_vector3(&a,3,t2,t3,t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[3]);
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t1,t6);}

/* f_4680 in k4606 in k4600 in k4597 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4680(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4680,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4686,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word)li89),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
/* eval.scm:232: ##sys#eval-decorator */
t6=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,t3,((C_word*)t0)[2],t4,t5);}

/* a4685 */
static void C_ccall f_4686(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4686,3,t0,t1,t2);}
t3=C_a_i_vector1(&a,1,t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}

/* f_4661 in k4606 in k4600 in k4597 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4661(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4661,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4667,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word)li87),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
/* eval.scm:232: ##sys#eval-decorator */
t6=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,t3,((C_word*)t0)[2],t4,t5);}

/* a4666 */
static void C_ccall f_4667(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_4667r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4667r(t0,t1,t2,t3);}}

static void C_ccall f_4667r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t4=C_a_i_vector2(&a,2,t2,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t5);}

/* f_4637 in k4606 in k4600 in k4597 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4637(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4637,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4643,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
/* eval.scm:232: ##sys#eval-decorator */
t6=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,t3,((C_word*)t0)[2],t4,t5);}

/* a4642 */
static void C_ccall f_4643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4643,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* f_4618 in k4606 in k4600 in k4597 in a4591 in k4585 in k4573 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4618(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4618,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4624,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
/* eval.scm:232: ##sys#eval-decorator */
t6=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,t3,((C_word*)t0)[2],t4,t5);}

/* a4623 */
static void C_ccall f_4624(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_4624r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4624r(t0,t1,t2);}}

static void C_ccall f_4624r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t3=C_a_i_vector1(&a,1,t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}

/* map-loop628 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_4533(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(9);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4533,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_list2(&a,2,t4,lf[80]);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=C_slot(t2,C_fix(1));
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=C_slot(t2,C_fix(1));
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4458 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4460(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4460,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4464,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[71]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4484,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4498,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=((C_word)li81),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4498(t12,t8,((C_word*)t0)[3]);}

/* map-loop655 in k4458 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_4498(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(12);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4498,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_i_cadr(t3);
t6=C_a_i_list(&a,3,lf[63],t4,t5);
t7=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t8=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t7);
t9=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t10=C_slot(t2,C_fix(1));
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}
else{
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t9=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t10=C_slot(t2,C_fix(1));
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4482 in k4458 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4484,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,lf[70],t2);
t4=C_a_i_list(&a,1,t3);
/* ##sys#append */
t5=*((C_word*)lf[79]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t1,t4);}

/* k4462 in k4458 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4464,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[9],t1);
t3=C_a_i_cons(&a,2,lf[70],t2);
/* eval.scm:470: compile */
t4=((C_word*)((C_word*)t0)[8])[1];
f_3242(t4,((C_word*)t0)[7],t3,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* map-loop508 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_4388(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4388,NULL,3,t0,t1,t2);}
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

/* k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3997(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3997,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[72]+1);
t7=C_i_check_list_2(t1,lf[71]);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4003,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4353,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li79),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_4353(t12,t8,t1);}

/* map-loop536 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_4353(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4353,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4382,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g542551 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4380 in map-loop536 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4382(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4382,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4353(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4353(t6,((C_word*)t0)[3],t5);}}

/* k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4003,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4009,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:422: ##sys#extend-se */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[77]+1)))(5,*((C_word*)lf[77]+1),t3,((C_word*)t0)[4],((C_word*)t0)[8],t1);}

/* k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4012,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4347,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_i_cddr(((C_word*)t0)[2]);
/* eval.scm:424: ##sys#canonicalize-body */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(5,*((C_word*)lf[76]+1),t3,t4,t1,C_SCHEME_FALSE);}

/* k4345 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:423: ##sys#compile-to-closure */
t2=*((C_word*)lf[35]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4012(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4012,2,t0,t1);}
switch(((C_word*)t0)[10]){
case C_fix(1):
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4021,a[2]=((C_word*)t0)[9],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4042,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:429: cadar */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[73]+1)))(3,*((C_word*)lf[73]+1),t3,((C_word*)t0)[2]);
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4091,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:432: cadar */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[73]+1)))(3,*((C_word*)lf[73]+1),t3,((C_word*)t0)[2]);
case C_fix(3):
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4104,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t1,a[10]=((C_word*)t0)[2],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4158,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:436: cadar */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[73]+1)))(3,*((C_word*)lf[73]+1),t3,((C_word*)t0)[2]);
case C_fix(4):
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4171,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[2],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4240,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:444: cadar */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[73]+1)))(3,*((C_word*)lf[73]+1),t3,((C_word*)t0)[2]);
default:
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4245,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li75),tmp=(C_word)a,a+=8,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[71]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4263,a[2]=((C_word*)t0)[10],a[3]=t1,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4310,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,a[6]=((C_word)li78),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_4310(t12,t8,((C_word*)t0)[2]);}}

/* map-loop587 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_4310(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4310,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4339,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g593602 */
t5=((C_word*)t0)[2];
f_4245(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4337 in map-loop587 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4339(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4339,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4310(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4310(t6,((C_word*)t0)[3],t5);}}

/* k4261 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4263,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4264,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li77),tmp=(C_word)a,a+=6,tmp));}

/* f_4264 in k4261 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4264(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4264,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4268,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:460: ##sys#make-vector */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[75]+1)))(3,*((C_word*)lf[75]+1),t3,((C_word*)t0)[3]);}

/* k4266 */
static void C_ccall f_4268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4271,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4280,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word)li76),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_4280(t6,t2,C_fix(0),((C_word*)t0)[2]);}

/* doloop614 in k4266 */
static void C_fcall f_4280(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4280,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4305,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t3,C_fix(0));
t6=t5;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,((C_word*)t0)[2]);}}

/* k4303 in doloop614 in k4266 */
static void C_ccall f_4305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t1);
t3=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_4280(t5,((C_word*)t0)[2],t3,t4);}

/* k4269 in k4266 */
static void C_ccall f_4271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4271,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* g593 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_fcall f_4245(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4245,NULL,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=C_i_car(t2);
/* eval.scm:458: compile */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3242(t5,t1,t3,((C_word*)t0)[5],t4,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4238 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[8]);
/* eval.scm:444: compile */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3242(t3,((C_word*)t0)[6],t1,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4169 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4232,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:445: cadadr */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[74]+1)))(3,*((C_word*)lf[74]+1),t3,((C_word*)t0)[10]);}

/* k4230 in k4169 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[8]);
/* eval.scm:445: compile */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3242(t3,((C_word*)t0)[6],t1,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4172 in k4169 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4174,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4180,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t1,a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],tmp=(C_word)a,a+=13,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4224,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:447: cadar */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[73]+1)))(3,*((C_word*)lf[73]+1),t4,t2);}

/* k4222 in k4172 in k4169 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_caddr(((C_word*)t0)[8]);
/* eval.scm:447: compile */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3242(t3,((C_word*)t0)[6],t1,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4178 in k4172 in k4169 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4180,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4183,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t1,a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4216,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:448: cadadr */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[74]+1)))(3,*((C_word*)lf[74]+1),t3,((C_word*)t0)[2]);}

/* k4214 in k4178 in k4172 in k4169 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadddr(((C_word*)t0)[8]);
/* eval.scm:448: compile */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3242(t3,((C_word*)t0)[6],t1,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4181 in k4178 in k4172 in k4169 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4183,2,t0,t1);}
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word)li74),tmp=(C_word)a,a+=8,tmp));}

/* f_4184 in k4181 in k4178 in k4172 in k4169 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4184(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4184,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4200,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4198 */
static void C_ccall f_4200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4200,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4204,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}

/* k4202 in k4198 */
static void C_ccall f_4204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4204,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4208,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k4206 in k4202 in k4198 */
static void C_ccall f_4208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4212,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k4210 in k4206 in k4202 in k4198 */
static void C_ccall f_4212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4212,2,t0,t1);}
t2=C_a_i_vector4(&a,4,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* k4156 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[8]);
/* eval.scm:436: compile */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3242(t3,((C_word*)t0)[6],t1,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4102 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4104,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:437: cadadr */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[74]+1)))(3,*((C_word*)lf[74]+1),t3,((C_word*)t0)[10]);}

/* k4148 in k4102 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[8]);
/* eval.scm:437: compile */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3242(t3,((C_word*)t0)[6],t1,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4105 in k4102 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4107,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4113,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t1,a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:439: cadar */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[73]+1)))(3,*((C_word*)lf[73]+1),t4,t2);}

/* k4140 in k4105 in k4102 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_caddr(((C_word*)t0)[8]);
/* eval.scm:439: compile */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3242(t3,((C_word*)t0)[6],t1,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4111 in k4105 in k4102 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4113,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4114,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word)li73),tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_4114 in k4111 in k4105 in k4102 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4114(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4114,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4130,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4128 */
static void C_ccall f_4130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4130,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4134,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k4132 in k4128 */
static void C_ccall f_4134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4138,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k4136 in k4132 in k4128 */
static void C_ccall f_4138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4138,2,t0,t1);}
t2=C_a_i_vector3(&a,3,((C_word*)t0)[6],((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* k4089 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[8]);
/* eval.scm:432: compile */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3242(t3,((C_word*)t0)[6],t1,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4053 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4058,a[2]=t1,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4083,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:433: cadadr */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[74]+1)))(3,*((C_word*)lf[74]+1),t3,((C_word*)t0)[2]);}

/* k4081 in k4053 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[8]);
/* eval.scm:433: compile */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3242(t3,((C_word*)t0)[6],t1,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4056 in k4053 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4058,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4059,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word)li72),tmp=(C_word)a,a+=6,tmp));}

/* f_4059 in k4056 in k4053 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4059(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4059,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4075,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4073 */
static void C_ccall f_4075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4075,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4079,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k4077 in k4073 */
static void C_ccall f_4079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4079,2,t0,t1);}
t2=C_a_i_vector2(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* k4040 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[8]);
/* eval.scm:429: compile */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3242(t3,((C_word*)t0)[6],t1,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4019 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4021,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4022,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li71),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_4022 in k4019 in k4010 in k4007 in k4001 in k3995 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_4022(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4022,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4038,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4036 */
static void C_ccall f_4038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4038,2,t0,t1);}
t2=C_a_i_vector1(&a,1,t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* a3861 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3862(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3862,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3866,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t3,a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t5=C_i_caddr(((C_word*)t0)[6]);
/* eval.scm:391: compile */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3242(t6,t4,t5,((C_word*)t0)[4],((C_word*)t0)[7],((C_word*)t0)[3],((C_word*)t0)[8],((C_word*)t0)[2]);}

/* k3864 in a3861 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3866,2,t0,t1);}
t2=((C_word*)t0)[6];
if(C_truep(t2)){
t3=C_i_zerop(((C_word*)t0)[6]);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3949,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li65),tmp=(C_word)a,a+=5,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3962,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word)li66),tmp=(C_word)a,a+=6,tmp)));}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3875,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[66]+1))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3942,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:394: ##sys#current-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(2,*((C_word*)lf[69]+1),t4);}
else{
t4=t3;
f_3875(2,t4,C_SCHEME_UNDEFINED);}}}

/* k3940 in k3864 in a3861 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_assq(((C_word*)t0)[3],t1);
if(C_truep(t2)){
t3=C_i_cdr(t2);
if(C_truep(C_i_symbolp(t3))){
/* eval.scm:396: ##sys#notice */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(4,*((C_word*)lf[67]+1),((C_word*)t0)[2],lf[68],((C_word*)t0)[3]);}
else{
t4=((C_word*)t0)[2];
f_3875(2,t4,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[2];
f_3875(2,t3,C_SCHEME_FALSE);}}

/* k3873 in k3864 in a3861 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3875,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3878,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:397: ##sys#alias-global-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(5,*((C_word*)lf[50]+1),t2,((C_word*)t0)[3],C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* k3876 in k3873 in k3864 in a3861 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3878,2,t0,t1);}
if(C_truep(*((C_word*)lf[23]+1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3884,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:399: ##sys#hash-table-location */
t3=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[23]+1),t1,*((C_word*)lf[24]+1));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3911,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp));}}

/* f_3911 in k3876 in k3873 in k3864 in a3861 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3911(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3911,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3919,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k3917 */
static void C_ccall f_3919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_setslot(((C_word*)t0)[2],C_fix(0),t1));}

/* k3882 in k3876 in k3873 in k3864 in a3861 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3884,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_3887(2,t3,C_SCHEME_UNDEFINED);}
else{
/* eval.scm:404: ##sys#error */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[65],((C_word*)t0)[2]);}}

/* k3885 in k3882 in k3876 in k3873 in k3864 in a3861 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3887,2,t0,t1);}
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(2)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3894,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3903,a[2]=((C_word*)t0)[2],a[3]=((C_word)li68),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_3903 in k3885 in k3882 in k3876 in k3873 in k3864 in a3861 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3903(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3903,2,t0,t1);}
/* eval.scm:407: ##sys#error */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[64],((C_word*)t0)[2]);}

/* f_3894 in k3885 in k3882 in k3876 in k3873 in k3864 in a3861 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3894(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3894,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3902,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k3900 */
static void C_ccall f_3902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_setslot(((C_word*)t0)[2],C_fix(1),t1));}

/* f_3962 in k3864 in a3861 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3962(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3962,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3970,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k3968 */
static void C_ccall f_3970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_setslot(C_u_i_list_ref(((C_word*)t0)[4],((C_word*)t0)[3]),((C_word*)t0)[2],t1));}

/* f_3949 in k3864 in a3861 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3949(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3949,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3961,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3959 */
static void C_ccall f_3961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* a3855 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3856,2,t0,t1);}
/* eval.scm:390: lookup */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3065(t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3803 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3805,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t3=C_i_cadr(((C_word*)t0)[7]);
/* eval.scm:384: compile */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3242(t4,t2,t3,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3806 in k3803 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3808,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3811,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[7],C_fix(1));
t4=C_slot(t3,C_fix(1));
t5=C_a_i_cons(&a,2,lf[60],t4);
/* eval.scm:385: compile */
t6=((C_word*)((C_word*)t0)[6])[1];
f_3242(t6,t2,t5,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3809 in k3806 in k3803 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3811,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3812,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_3812 in k3809 in k3806 in k3803 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3812(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3812,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3816,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k3814 */
static void C_ccall f_3816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3816,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3819,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3817 in k3814 */
static void C_ccall f_3819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3781 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3786,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[7]);
/* eval.scm:380: compile */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3242(t4,t2,t3,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3784 in k3781 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3787,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li62),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_3787 in k3784 in k3781 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3787(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3787,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3791,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k3789 */
static void C_ccall f_3791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3690 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3692,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t3=C_i_caddr(((C_word*)t0)[7]);
/* eval.scm:367: compile */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3242(t4,t2,t3,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3693 in k3690 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3695,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3698,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_cdddr(((C_word*)t0)[7]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_cadddr(((C_word*)t0)[7]);
/* eval.scm:369: compile */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3242(t5,t2,t4,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* eval.scm:370: compile */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3242(t4,t2,lf[59],((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k3696 in k3693 in k3690 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3698,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3699,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_3699 in k3696 in k3693 in k3690 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3699(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3699,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3706,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k3704 */
static void C_ccall f_3706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* f_3682 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3682(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3682,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* f_3648 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3648(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3648,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[2],C_fix(0)));}

/* k3640 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3642,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3643,a[2]=t1,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp));}

/* f_3643 in k3640 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3643(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3643,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[2],C_fix(1)));}

/* f_3626 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3626(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3626,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k3552 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3554,2,t0,t1);}
switch(t1){
case C_fix(-1):
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3561,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
case C_fix(0):
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3569,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);
case C_fix(1):
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3577,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3585,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);
case C_SCHEME_TRUE:
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3593,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
case C_SCHEME_FALSE:
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3601,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);
default:
t2=C_eqp(t1,C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3609,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3611,a[2]=t1,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp)));}}

/* f_3611 in k3552 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3611(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3611,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_3609 in k3552 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3609(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3609,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}

/* f_3601 in k3552 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3601(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3601,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_3593 in k3552 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3593(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3593,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_3585 in k3552 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3585(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3585,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(2));}

/* f_3577 in k3552 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3577(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3577,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(1));}

/* f_3569 in k3552 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3569(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3569,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}

/* f_3561 in k3552 in k3543 in k3528 in k3525 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3561(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3561,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(-1));}

/* f_3508 in k3505 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3508(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3508,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_3497 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3497(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3497,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_3495 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3495(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3495,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_3484 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3484(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3484,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_3482 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3482(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3482,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(2));}

/* f_3474 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3474(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3474,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(1));}

/* f_3466 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3466(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3466,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}

/* f_3458 in k3449 in k3247 in compile in k3007 */
static void C_ccall f_3458(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3458,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(-1));}

/* a3267 in k3247 in compile in k3007 */
static void C_ccall f_3268(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3268,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(t4)){
t5=t2;
switch(t5){
case C_fix(0):
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3363,a[2]=t3,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp));
case C_fix(1):
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3378,a[2]=t3,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);
case C_fix(2):
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3397,a[2]=t3,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp));
case C_fix(3):
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3420,a[2]=t3,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);
default:
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3441,a[2]=t3,a[3]=t2,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3278,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_assq(((C_word*)t0)[3],((C_word*)t0)[2]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3349,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:267: ##sys#get */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[36]+1)))(4,*((C_word*)lf[36]+1),t6,t3,lf[49]);}
else{
/* eval.scm:266: ##sys#alias-global-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(5,*((C_word*)lf[50]+1),t5,t3,C_SCHEME_FALSE,((C_word*)t0)[4]);}}}

/* k3347 in a3267 in k3247 in compile in k3007 */
static void C_ccall f_3349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
f_3278(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
f_3278(2,t3,t2);}}

/* k3276 in a3267 in k3247 in compile in k3007 */
static void C_ccall f_3278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3278,2,t0,t1);}
if(C_truep(*((C_word*)lf[23]+1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3284,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:269: ##sys#hash-table-location */
t3=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[23]+1),t1,C_SCHEME_TRUE);}
else{
if(C_truep(*((C_word*)lf[32]+1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3316,a[2]=t1,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3325,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[31]+1))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3340,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:283: ##sys#symbol-has-toplevel-binding? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[48]+1)))(3,*((C_word*)lf[48]+1),t3,t1);}
else{
t3=t2;
f_3325(t3,C_SCHEME_FALSE);}}}}

/* k3338 in k3276 in a3267 in k3247 in compile in k3007 */
static void C_ccall f_3340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3325(t2,C_i_not(t1));}

/* k3323 in k3276 in a3267 in k3247 in compile in k3007 */
static void C_fcall f_3325(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3325,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[31]+1));
t4=C_mutate((C_word*)lf[31]+1 /* (set! ##sys#unbound-in-eval ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f10924,a[2]=((C_word*)t0)[4],a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f10929,a[2]=((C_word*)t0)[4],a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f10929 in k3323 in k3276 in a3267 in k3247 in compile in k3007 */
static void C_ccall f10929(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f10929,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_retrieve(((C_word*)t0)[2]));}

/* f10924 in k3323 in k3276 in a3267 in k3247 in compile in k3007 */
static void C_ccall f10924(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f10924,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_retrieve(((C_word*)t0)[2]));}

/* f_3316 in k3276 in a3267 in k3247 in compile in k3007 */
static void C_ccall f_3316(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3316,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[2],C_fix(0)));}

/* k3282 in k3276 in a3267 in k3247 in compile in k3007 */
static void C_ccall f_3284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3284,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_3287(2,t3,C_SCHEME_UNDEFINED);}
else{
/* eval.scm:271: ##sys#syntax-error-hook */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[46]+1)))(4,*((C_word*)lf[46]+1),t2,lf[47],((C_word*)t0)[2]);}}

/* k3285 in k3282 in k3276 in a3267 in k3247 in compile in k3007 */
static void C_ccall f_3287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3287,2,t0,t1);}
if(C_truep(*((C_word*)lf[32]+1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3291,a[2]=((C_word*)t0)[5],a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_3296 in k3285 in k3282 in k3276 in a3267 in k3247 in compile in k3007 */
static void C_ccall f_3296(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3296,2,t0,t1);}
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=C_eqp(((C_word*)t0)[3],t2);
if(C_truep(t3)){
/* eval.scm:277: ##sys#error */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,lf[45],((C_word*)t0)[2]);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* f_3291 in k3285 in k3282 in k3276 in a3267 in k3247 in compile in k3007 */
static void C_ccall f_3291(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3291,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[2],C_fix(1)));}

/* f_3441 in a3267 in k3247 in compile in k3007 */
static void C_ccall f_3441(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3441,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(C_u_i_list_ref(t2,((C_word*)t0)[3]),((C_word*)t0)[2]));}

/* f_3420 in a3267 in k3247 in compile in k3007 */
static void C_ccall f_3420(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3420,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(1));
t5=C_slot(t4,C_fix(1));
t6=C_slot(t5,C_fix(0));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_slot(t6,((C_word*)t0)[2]));}

/* f_3397 in a3267 in k3247 in compile in k3007 */
static void C_ccall f_3397(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3397,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(1));
t5=C_slot(t4,C_fix(0));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_slot(t5,((C_word*)t0)[2]));}

/* f_3378 in a3267 in k3247 in compile in k3007 */
static void C_ccall f_3378(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3378,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(0));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_slot(t4,((C_word*)t0)[2]));}

/* f_3363 in a3267 in k3247 in compile in k3007 */
static void C_ccall f_3363(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3363,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t3,((C_word*)t0)[2]));}

/* a3261 in k3247 in compile in k3007 */
static void C_ccall f_3262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3262,2,t0,t1);}
/* eval.scm:263: lookup */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3065(t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_3250 in k3247 in compile in k3007 */
static void C_ccall f_3250(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3250,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* eval/meta in k3007 */
static void C_fcall f_3176(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3176,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3180,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:235: ##sys#current-module */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(2,*((C_word*)lf[41]+1),t3);}

/* k3178 in eval/meta in k3007 */
static void C_ccall f_3180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3180,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3183,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:236: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(2,*((C_word*)lf[40]+1),t2);}

/* k3181 in k3178 in eval/meta in k3007 */
static void C_ccall f_3183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:237: ##sys#meta-macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[43]+1)))(2,*((C_word*)lf[43]+1),t2);}

/* k3184 in k3181 in k3178 in eval/meta in k3007 */
static void C_ccall f_3186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3186,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3191,a[2]=t1,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3200,a[2]=((C_word*)t0)[5],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3213,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li26),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:238: dynamic-wind */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[44]+1)))(5,*((C_word*)lf[44]+1),((C_word*)t0)[2],t2,t3,t4);}

/* a3212 in k3184 in k3181 in k3178 in eval/meta in k3007 */
static void C_ccall f_3213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3213,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3217,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:249: ##sys#current-module */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(3,*((C_word*)lf[41]+1),t2,((C_word*)t0)[2]);}

/* k3215 in a3212 in k3184 in k3181 in k3178 in eval/meta in k3007 */
static void C_ccall f_3217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3227,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:250: ##sys#macro-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(2,*((C_word*)lf[40]+1),t3);}

/* k3225 in k3215 in a3212 in k3184 in k3181 in k3178 in eval/meta in k3007 */
static void C_ccall f_3227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:250: ##sys#meta-macro-environment */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[43]+1)))(3,*((C_word*)lf[43]+1),((C_word*)t0)[2],t1);}

/* k3218 in k3215 in a3212 in k3184 in k3181 in k3178 in eval/meta in k3007 */
static void C_ccall f_3220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:251: ##sys#macro-environment */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3199 in k3184 in k3181 in k3178 in eval/meta in k3007 */
static void C_ccall f_3200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3200,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3204,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3211,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:246: ##sys#current-meta-environment */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[42]+1)))(2,*((C_word*)lf[42]+1),t3);}

/* k3209 in a3199 in k3184 in k3181 in k3178 in eval/meta in k3007 */
static void C_ccall f_3211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:243: ##sys#compile-to-closure */
t2=*((C_word*)lf[35]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t1);}

/* k3202 in a3199 in k3184 in k3181 in k3178 in eval/meta in k3007 */
static void C_ccall f_3204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g363364 */
t2=t1;
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* a3190 in k3184 in k3181 in k3178 in eval/meta in k3007 */
static void C_ccall f_3191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3191,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3195,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:240: ##sys#current-module */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(3,*((C_word*)lf[41]+1),t2,C_SCHEME_FALSE);}

/* k3193 in a3190 in k3184 in k3181 in k3178 in eval/meta in k3007 */
static void C_ccall f_3195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:241: ##sys#macro-environment */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* emit-trace-info in k3007 */
static C_word C_fcall f_3154(C_word *a,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_check;
if(C_truep(t1)){
t6=C_a_i_record4(&a,4,lf[38],t3,t4,t5);
t7=C_emit_eval_trace_info(t2,t6,*((C_word*)lf[39]+1));
return(t7);}
else{
t6=C_SCHEME_UNDEFINED;
return(t6);}}

/* lookup in k3007 */
static void C_fcall f_3065(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3065,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3069,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:202: rename */
t6=((C_word*)((C_word*)t0)[2])[1];
f_3050(t6,t5,t2,t4);}

/* k3067 in lookup in k3007 */
static void C_ccall f_3069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3069,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3077,a[2]=t3,a[3]=t1,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3077(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* loop in k3067 in lookup in k3007 */
static void C_fcall f_3077(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(8);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3077,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* eval.scm:205: values */
C_values(4,0,t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}
else{
t4=C_slot(t2,C_fix(0));
t5=((C_word*)t0)[3];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3124,a[2]=t5,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t7=f_3124(t6,t4,C_fix(0));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3094,a[2]=t3,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
/* g332333 */
t9=t8;
f_3094(t9,t1,t7);}
else{
t8=C_slot(t2,C_fix(1));
t9=C_fixnum_plus(t3,C_fix(1));
/* eval.scm:207: loop */
t12=t1;
t13=t8;
t14=t9;
t1=t12;
t2=t13;
t3=t14;
goto loop;}}}

/* g332 in loop in k3067 in lookup in k3007 */
static void C_fcall f_3094(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3094,NULL,3,t0,t1,t2);}
/* eval.scm:206: values */
C_values(4,0,t1,((C_word*)t0)[2],t2);}

/* loop in loop in k3067 in lookup in k3007 */
static C_word C_fcall f_3124(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_check;
loop:
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t3=C_slot(t1,C_fix(0));
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(t2);}
else{
t5=C_slot(t1,C_fix(1));
t6=C_fixnum_plus(t2,C_fix(1));
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* rename in k3007 */
static void C_fcall f_3050(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3050,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3054,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:197: find-id */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3011(t5,t4,t2,t3);}

/* k3052 in rename in k3007 */
static void C_ccall f_3054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3054,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3060,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:198: ##sys#get */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[36]+1)))(4,*((C_word*)lf[36]+1),t2,((C_word*)t0)[2],lf[37]);}}

/* k3058 in k3052 in rename in k3007 */
static void C_ccall f_3060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[2]));}

/* find-id in k3007 */
static void C_fcall f_3011(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3011,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3024,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_caar(t3);
t6=C_eqp(t2,t5);
if(C_truep(t6)){
t7=C_i_cdar(t3);
t8=t4;
f_3024(t8,C_i_symbolp(t7));}
else{
t7=t4;
f_3024(t7,C_SCHEME_FALSE);}}}

/* k3022 in find-id in k3007 */
static void C_fcall f_3024(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_cdar(((C_word*)t0)[4]));}
else{
t2=C_i_cdr(((C_word*)t0)[4]);
/* eval.scm:194: find-id */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3011(t3,((C_word*)t0)[5],((C_word*)t0)[2],t2);}}

/* f_2957 in k2628 in k2625 in k2607 */
static void C_ccall f_2957(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2957,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2963,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2976,a[2]=t3,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:167: ##sys#decorate-lambda */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[30]+1)))(5,*((C_word*)lf[30]+1),t1,t2,t6,t7);}

/* a2975 */
static void C_ccall f_2976(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2976,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2984,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2988,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:174: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(2,*((C_word*)lf[29]+1),t5);}

/* k2986 in a2975 */
static void C_ccall f_2988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2988,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2991,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:175: write */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(4,*((C_word*)lf[28]+1),t2,((C_word*)t0)[2],t1);}

/* k2989 in k2986 in a2975 */
static void C_ccall f_2991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2991,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2994,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:176: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[27]+1)))(3,*((C_word*)lf[27]+1),t2,((C_word*)t0)[2]);}

/* k2992 in k2989 in k2986 in a2975 */
static void C_ccall f_2994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:173: ##sys#make-lambda-info */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(3,*((C_word*)lf[26]+1),((C_word*)t0)[2],t1);}

/* k2982 in a2975 */
static void C_ccall f_2984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}

/* a2962 */
static void C_ccall f_2963(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2963,3,t0,t1,t2);}
if(C_truep(C_immp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_lambdainfop(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_2897 in k2628 in k2625 in k2607 */
static void C_ccall f_2897(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2897,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2901,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=C_block_size(t2);
/* eval.scm:147: ##sys#hash-symbol */
t7=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t3,t6);}

/* k2899 */
static void C_ccall f_2901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2901,2,t0,t1);}
t2=C_slot(((C_word*)t0)[6],t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2909,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word)li12),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_2909(t6,((C_word*)t0)[2],t2);}

/* loop in k2899 */
static void C_fcall f_2909(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(7);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2909,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(((C_word*)t0)[8])){
t3=C_a_i_vector3(&a,3,((C_word*)t0)[7],((C_word*)t0)[6],C_SCHEME_TRUE);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[5]);
t5=C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[3],t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[7],t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t6=C_slot(t2,C_fix(1));
/* eval.scm:158: loop */
t11=t1;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}}

/* f_2827 in k2628 in k2625 in k2607 */
static void C_ccall f_2827(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2827,4,t0,t1,t2,t3);}
t4=C_block_size(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2833,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t4,a[6]=((C_word)li10),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2833(t8,t1,C_fix(0));}

/* doloop215 */
static void C_fcall f_2833(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2833,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2841,a[2]=((C_word*)t0)[4],a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_i_check_list_2(t4,lf[20]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2862,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2871,a[2]=t3,a[3]=t8,a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2871(t10,t6,t4);}}

/* for-each-loop220 in doloop215 */
static void C_fcall f_2871(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2871,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2881,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g221227 */
t5=((C_word*)t0)[2];
f_2841(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2879 in for-each-loop220 in doloop215 */
static void C_ccall f_2881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2871(t3,((C_word*)t0)[2],t2);}

/* k2860 in doloop215 */
static void C_ccall f_2862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2833(t3,((C_word*)t0)[2],t2);}

/* g221 in doloop215 */
static void C_fcall f_2841(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2841,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
/* eval.scm:141: p */
t5=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t1,t3,t4);}

/* f_2807 in k2628 in k2625 in k2607 */
static void C_ccall f_2807(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2807,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2815,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2819,a[2]=t5,a[3]=t6,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:135: ##sys#hash-table-ref */
t8=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t2,t3);}

/* k2817 */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2819,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2822,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t1;
/* eval.scm:135: updtfunc */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,((C_word*)t0)[3],t3);}
else{
/* eval.scm:135: valufunc */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}}

/* k2820 in k2817 */
static void C_ccall f_2822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:135: updtfunc */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2813 */
static void C_ccall f_2815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm:135: ##sys#hash-table-set! */
t2=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_2747 in k2628 in k2625 in k2607 */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2747,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2751,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:125: ##sys#hash-symbol */
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,C_block_size(t2));}

/* k2749 */
static void C_ccall f_2751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2751,2,t0,t1);}
t2=C_slot(((C_word*)t0)[5],t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2759,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word)li5),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_2759(t6,((C_word*)t0)[2],t2);}

/* loop in k2749 */
static void C_fcall f_2759(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2759,NULL,3,t0,t1,t2);}
t3=C_eqp(C_SCHEME_END_OF_LIST,t2);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[6]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[3],t5));}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t4,C_fix(0));
t6=C_eqp(((C_word*)t0)[7],t5);
if(C_truep(t6)){
t7=C_slot(t2,C_fix(0));
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_setslot(t7,C_fix(1),((C_word*)t0)[6]));}
else{
t7=C_slot(t2,C_fix(1));
/* eval.scm:132: loop */
t12=t1;
t13=t7;
t1=t12;
t2=t13;
goto loop;}}}

/* f_2692 in k2628 in k2625 in k2607 */
static void C_ccall f_2692(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2692,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2745,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:118: ##sys#hash-symbol */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,C_block_size(t2));}

/* k2743 */
static void C_ccall f_2745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2745,2,t0,t1);}
t2=C_slot(((C_word*)t0)[4],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2702,a[2]=((C_word*)t0)[3],a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_2702(t3,t2));}

/* loop in k2743 */
static C_word C_fcall f_2702(C_word t0,C_word t1){
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
t2=C_eqp(C_SCHEME_END_OF_LIST,t1);
if(C_truep(t2)){
return(C_SCHEME_FALSE);}
else{
t3=C_slot(t1,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=C_slot(t1,C_fix(0));
return(C_slot(t6,C_fix(1)));}
else{
t6=C_slot(t1,C_fix(1));
t9=t6;
t1=t9;
goto loop;}}}

/* f_2677 in k2628 in k2625 in k2607 */
static void C_ccall f_2677(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2677,4,t0,t1,t2,t3);}
t4=C_eqp(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=C_fixnum_modulo(((C_word*)((C_word*)t0)[2])[1],t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t6=C_slot(t2,C_fix(1));
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_hash_string(t6));
t8=C_fixnum_modulo(((C_word*)((C_word*)t0)[2])[1],t3);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* f_2665 in k2628 in k2625 in k2607 */
static void C_ccall f_2665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2665,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2669,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:100: ##sys#chicken-prefix */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[14]);}

/* k2667 */
static void C_ccall f_2669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2669,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* ##sys#peek-c-string */
t2=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME),C_fix(0));}}

/* f_2631 in k2628 in k2625 in k2607 */
static void C_ccall f_2631(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2631r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2631r(t0,t1,t2);}}

static void C_ccall f_2631r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2635,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_2635(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_2635(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k2633 */
static void C_ccall f_2635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[3])){
if(C_truep(t1)){
/* eval.scm:94: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[796] = {
{"toplevel:eval_2escm",(void*)C_eval_toplevel},
{"f_2609:eval_2escm",(void*)f_2609},
{"f_2627:eval_2escm",(void*)f_2627},
{"f_2630:eval_2escm",(void*)f_2630},
{"f_3000:eval_2escm",(void*)f_3000},
{"f_10230:eval_2escm",(void*)f_10230},
{"f_10234:eval_2escm",(void*)f_10234},
{"f_10259:eval_2escm",(void*)f_10259},
{"f_10249:eval_2escm",(void*)f_10249},
{"f_10257:eval_2escm",(void*)f_10257},
{"f_10242:eval_2escm",(void*)f_10242},
{"f_10237:eval_2escm",(void*)f_10237},
{"f_6408:eval_2escm",(void*)f_6408},
{"f_6503:eval_2escm",(void*)f_6503},
{"f_6584:eval_2escm",(void*)f_6584},
{"f_10224:eval_2escm",(void*)f_10224},
{"f_10220:eval_2escm",(void*)f_10220},
{"f_10216:eval_2escm",(void*)f_10216},
{"f_10212:eval_2escm",(void*)f_10212},
{"f_7152:eval_2escm",(void*)f_7152},
{"f_7157:eval_2escm",(void*)f_7157},
{"f_10184:eval_2escm",(void*)f_10184},
{"f_10163:eval_2escm",(void*)f_10163},
{"f_10170:eval_2escm",(void*)f_10170},
{"f_7164:eval_2escm",(void*)f_7164},
{"f_10127:eval_2escm",(void*)f_10127},
{"f_10156:eval_2escm",(void*)f_10156},
{"f_10119:eval_2escm",(void*)f_10119},
{"f_10121:eval_2escm",(void*)f_10121},
{"f_7173:eval_2escm",(void*)f_7173},
{"f_10088:eval_2escm",(void*)f_10088},
{"f_10108:eval_2escm",(void*)f_10108},
{"f_10104:eval_2escm",(void*)f_10104},
{"f_10094:eval_2escm",(void*)f_10094},
{"f_7538:eval_2escm",(void*)f_7538},
{"f_8588:eval_2escm",(void*)f_8588},
{"f_8939:eval_2escm",(void*)f_8939},
{"f_10058:eval_2escm",(void*)f_10058},
{"f_10068:eval_2escm",(void*)f_10068},
{"f_8945:eval_2escm",(void*)f_8945},
{"f_8949:eval_2escm",(void*)f_8949},
{"f_8952:eval_2escm",(void*)f_8952},
{"f_10035:eval_2escm",(void*)f_10035},
{"f_10045:eval_2escm",(void*)f_10045},
{"f_8958:eval_2escm",(void*)f_8958},
{"f_8962:eval_2escm",(void*)f_8962},
{"f_10029:eval_2escm",(void*)f_10029},
{"f_9157:eval_2escm",(void*)f_9157},
{"f_9656:eval_2escm",(void*)f_9656},
{"f_10019:eval_2escm",(void*)f_10019},
{"f_10004:eval_2escm",(void*)f_10004},
{"f_10008:eval_2escm",(void*)f_10008},
{"f_10013:eval_2escm",(void*)f_10013},
{"f_10017:eval_2escm",(void*)f_10017},
{"f_9982:eval_2escm",(void*)f_9982},
{"f_9986:eval_2escm",(void*)f_9986},
{"f_9991:eval_2escm",(void*)f_9991},
{"f_9995:eval_2escm",(void*)f_9995},
{"f_10002:eval_2escm",(void*)f_10002},
{"f_9956:eval_2escm",(void*)f_9956},
{"f_9962:eval_2escm",(void*)f_9962},
{"f_9966:eval_2escm",(void*)f_9966},
{"f_9980:eval_2escm",(void*)f_9980},
{"f_9969:eval_2escm",(void*)f_9969},
{"f_9976:eval_2escm",(void*)f_9976},
{"f_9940:eval_2escm",(void*)f_9940},
{"f_9946:eval_2escm",(void*)f_9946},
{"f_9954:eval_2escm",(void*)f_9954},
{"f_9903:eval_2escm",(void*)f_9903},
{"f_9907:eval_2escm",(void*)f_9907},
{"f_9912:eval_2escm",(void*)f_9912},
{"f_9916:eval_2escm",(void*)f_9916},
{"f_9938:eval_2escm",(void*)f_9938},
{"f_9934:eval_2escm",(void*)f_9934},
{"f_9930:eval_2escm",(void*)f_9930},
{"f_9919:eval_2escm",(void*)f_9919},
{"f_9926:eval_2escm",(void*)f_9926},
{"f_9877:eval_2escm",(void*)f_9877},
{"f_9883:eval_2escm",(void*)f_9883},
{"f_9887:eval_2escm",(void*)f_9887},
{"f_9901:eval_2escm",(void*)f_9901},
{"f_9890:eval_2escm",(void*)f_9890},
{"f_9897:eval_2escm",(void*)f_9897},
{"f_9864:eval_2escm",(void*)f_9864},
{"f_9838:eval_2escm",(void*)f_9838},
{"f_9842:eval_2escm",(void*)f_9842},
{"f_9847:eval_2escm",(void*)f_9847},
{"f_9851:eval_2escm",(void*)f_9851},
{"f_9862:eval_2escm",(void*)f_9862},
{"f_9858:eval_2escm",(void*)f_9858},
{"f_9822:eval_2escm",(void*)f_9822},
{"f_9828:eval_2escm",(void*)f_9828},
{"f_9836:eval_2escm",(void*)f_9836},
{"f_9810:eval_2escm",(void*)f_9810},
{"f_9816:eval_2escm",(void*)f_9816},
{"f_9820:eval_2escm",(void*)f_9820},
{"f_9801:eval_2escm",(void*)f_9801},
{"f_9805:eval_2escm",(void*)f_9805},
{"f_9742:eval_2escm",(void*)f_9742},
{"f_9752:eval_2escm",(void*)f_9752},
{"f_9777:eval_2escm",(void*)f_9777},
{"f_9789:eval_2escm",(void*)f_9789},
{"f_9795:eval_2escm",(void*)f_9795},
{"f_9783:eval_2escm",(void*)f_9783},
{"f_9758:eval_2escm",(void*)f_9758},
{"f_9764:eval_2escm",(void*)f_9764},
{"f_9768:eval_2escm",(void*)f_9768},
{"f_9771:eval_2escm",(void*)f_9771},
{"f_9775:eval_2escm",(void*)f_9775},
{"f_9747:eval_2escm",(void*)f_9747},
{"f_9667:eval_2escm",(void*)f_9667},
{"f_9677:eval_2escm",(void*)f_9677},
{"f_9680:eval_2escm",(void*)f_9680},
{"f_9694:eval_2escm",(void*)f_9694},
{"f_9712:eval_2escm",(void*)f_9712},
{"f_9681:eval_2escm",(void*)f_9681},
{"f_9658:eval_2escm",(void*)f_9658},
{"f_9178:eval_2escm",(void*)f_9178},
{"f_9304:eval_2escm",(void*)f_9304},
{"f_9307:eval_2escm",(void*)f_9307},
{"f_9641:eval_2escm",(void*)f_9641},
{"f_9645:eval_2escm",(void*)f_9645},
{"f_9649:eval_2escm",(void*)f_9649},
{"f_9418:eval_2escm",(void*)f_9418},
{"f_9424:eval_2escm",(void*)f_9424},
{"f_9624:eval_2escm",(void*)f_9624},
{"f_9630:eval_2escm",(void*)f_9630},
{"f_9431:eval_2escm",(void*)f_9431},
{"f_9434:eval_2escm",(void*)f_9434},
{"f_9440:eval_2escm",(void*)f_9440},
{"f_9622:eval_2escm",(void*)f_9622},
{"f_9449:eval_2escm",(void*)f_9449},
{"f_9452:eval_2escm",(void*)f_9452},
{"f_9467:eval_2escm",(void*)f_9467},
{"f11264:eval_2escm",(void*)f11264},
{"f_9485:eval_2escm",(void*)f_9485},
{"f_9576:eval_2escm",(void*)f_9576},
{"f_9501:eval_2escm",(void*)f_9501},
{"f_9546:eval_2escm",(void*)f_9546},
{"f_9506:eval_2escm",(void*)f_9506},
{"f_9509:eval_2escm",(void*)f_9509},
{"f_9521:eval_2escm",(void*)f_9521},
{"f_9524:eval_2escm",(void*)f_9524},
{"f_9512:eval_2escm",(void*)f_9512},
{"f_9556:eval_2escm",(void*)f_9556},
{"f_9541:eval_2escm",(void*)f_9541},
{"f_9489:eval_2escm",(void*)f_9489},
{"f_9471:eval_2escm",(void*)f_9471},
{"f_9474:eval_2escm",(void*)f_9474},
{"f_9458:eval_2escm",(void*)f_9458},
{"f_9324:eval_2escm",(void*)f_9324},
{"f_9329:eval_2escm",(void*)f_9329},
{"f_9332:eval_2escm",(void*)f_9332},
{"f_9337:eval_2escm",(void*)f_9337},
{"f_9344:eval_2escm",(void*)f_9344},
{"f_9413:eval_2escm",(void*)f_9413},
{"f_9347:eval_2escm",(void*)f_9347},
{"f_9388:eval_2escm",(void*)f_9388},
{"f_9397:eval_2escm",(void*)f_9397},
{"f_9391:eval_2escm",(void*)f_9391},
{"f_9350:eval_2escm",(void*)f_9350},
{"f_9381:eval_2escm",(void*)f_9381},
{"f_9354:eval_2escm",(void*)f_9354},
{"f_9357:eval_2escm",(void*)f_9357},
{"f_9315:eval_2escm",(void*)f_9315},
{"f_9309:eval_2escm",(void*)f_9309},
{"f_9218:eval_2escm",(void*)f_9218},
{"f_9272:eval_2escm",(void*)f_9272},
{"f_9282:eval_2escm",(void*)f_9282},
{"f_9245:eval_2escm",(void*)f_9245},
{"f_9262:eval_2escm",(void*)f_9262},
{"f_9258:eval_2escm",(void*)f_9258},
{"f_9181:eval_2escm",(void*)f_9181},
{"f_9195:eval_2escm",(void*)f_9195},
{"f_9205:eval_2escm",(void*)f_9205},
{"f_9175:eval_2escm",(void*)f_9175},
{"f_9159:eval_2escm",(void*)f_9159},
{"f_9170:eval_2escm",(void*)f_9170},
{"f_9173:eval_2escm",(void*)f_9173},
{"f_9163:eval_2escm",(void*)f_9163},
{"f_9140:eval_2escm",(void*)f_9140},
{"f_9149:eval_2escm",(void*)f_9149},
{"f_9144:eval_2escm",(void*)f_9144},
{"f_8987:eval_2escm",(void*)f_8987},
{"f_8991:eval_2escm",(void*)f_8991},
{"f_9058:eval_2escm",(void*)f_9058},
{"f_9105:eval_2escm",(void*)f_9105},
{"f_9115:eval_2escm",(void*)f_9115},
{"f_9068:eval_2escm",(void*)f_9068},
{"f_9070:eval_2escm",(void*)f_9070},
{"f_9094:eval_2escm",(void*)f_9094},
{"f_9080:eval_2escm",(void*)f_9080},
{"f_9028:eval_2escm",(void*)f_9028},
{"f_8993:eval_2escm",(void*)f_8993},
{"f_9009:eval_2escm",(void*)f_9009},
{"f_9015:eval_2escm",(void*)f_9015},
{"f_9006:eval_2escm",(void*)f_9006},
{"f_8968:eval_2escm",(void*)f_8968},
{"f_8972:eval_2escm",(void*)f_8972},
{"f_8923:eval_2escm",(void*)f_8923},
{"f_8925:eval_2escm",(void*)f_8925},
{"f_8929:eval_2escm",(void*)f_8929},
{"f_8885:eval_2escm",(void*)f_8885},
{"f_8892:eval_2escm",(void*)f_8892},
{"f_8899:eval_2escm",(void*)f_8899},
{"f_8841:eval_2escm",(void*)f_8841},
{"f_8874:eval_2escm",(void*)f_8874},
{"f_8861:eval_2escm",(void*)f_8861},
{"f_8838:eval_2escm",(void*)f_8838},
{"f_8719:eval_2escm",(void*)f_8719},
{"f_8813:eval_2escm",(void*)f_8813},
{"f_8823:eval_2escm",(void*)f_8823},
{"f_8811:eval_2escm",(void*)f_8811},
{"f_8740:eval_2escm",(void*)f_8740},
{"f_8764:eval_2escm",(void*)f_8764},
{"f_8783:eval_2escm",(void*)f_8783},
{"f_8758:eval_2escm",(void*)f_8758},
{"f_8611:eval_2escm",(void*)f_8611},
{"f_8621:eval_2escm",(void*)f_8621},
{"f_8626:eval_2escm",(void*)f_8626},
{"f_8653:eval_2escm",(void*)f_8653},
{"f_8682:eval_2escm",(void*)f_8682},
{"f_8686:eval_2escm",(void*)f_8686},
{"f_8647:eval_2escm",(void*)f_8647},
{"f_8595:eval_2escm",(void*)f_8595},
{"f_8501:eval_2escm",(void*)f_8501},
{"f_8505:eval_2escm",(void*)f_8505},
{"f_8513:eval_2escm",(void*)f_8513},
{"f_8539:eval_2escm",(void*)f_8539},
{"f_8545:eval_2escm",(void*)f_8545},
{"f12100:eval_2escm",(void*)f12100},
{"f_8548:eval_2escm",(void*)f_8548},
{"f_8555:eval_2escm",(void*)f_8555},
{"f_8529:eval_2escm",(void*)f_8529},
{"f_7938:eval_2escm",(void*)f_7938},
{"f_8306:eval_2escm",(void*)f_8306},
{"f_8396:eval_2escm",(void*)f_8396},
{"f_8401:eval_2escm",(void*)f_8401},
{"f_8408:eval_2escm",(void*)f_8408},
{"f_8414:eval_2escm",(void*)f_8414},
{"f_8421:eval_2escm",(void*)f_8421},
{"f_8354:eval_2escm",(void*)f_8354},
{"f_8383:eval_2escm",(void*)f_8383},
{"f_8352:eval_2escm",(void*)f_8352},
{"f_8323:eval_2escm",(void*)f_8323},
{"f_8327:eval_2escm",(void*)f_8327},
{"f_8338:eval_2escm",(void*)f_8338},
{"f_8332:eval_2escm",(void*)f_8332},
{"f_8022:eval_2escm",(void*)f_8022},
{"f_8032:eval_2escm",(void*)f_8032},
{"f_8146:eval_2escm",(void*)f_8146},
{"f_8276:eval_2escm",(void*)f_8276},
{"f_8283:eval_2escm",(void*)f_8283},
{"f_8161:eval_2escm",(void*)f_8161},
{"f_8180:eval_2escm",(void*)f_8180},
{"f_8190:eval_2escm",(void*)f_8190},
{"f_8214:eval_2escm",(void*)f_8214},
{"f_8212:eval_2escm",(void*)f_8212},
{"f_8176:eval_2escm",(void*)f_8176},
{"f_8168:eval_2escm",(void*)f_8168},
{"f_8079:eval_2escm",(void*)f_8079},
{"f_8100:eval_2escm",(void*)f_8100},
{"f_8108:eval_2escm",(void*)f_8108},
{"f_8096:eval_2escm",(void*)f_8096},
{"f_8052:eval_2escm",(void*)f_8052},
{"f_8039:eval_2escm",(void*)f_8039},
{"f_7999:eval_2escm",(void*)f_7999},
{"f_8017:eval_2escm",(void*)f_8017},
{"f_8013:eval_2escm",(void*)f_8013},
{"f_7966:eval_2escm",(void*)f_7966},
{"f_7981:eval_2escm",(void*)f_7981},
{"f_7941:eval_2escm",(void*)f_7941},
{"f_7960:eval_2escm",(void*)f_7960},
{"f_7954:eval_2escm",(void*)f_7954},
{"f_7889:eval_2escm",(void*)f_7889},
{"f_7895:eval_2escm",(void*)f_7895},
{"f_7909:eval_2escm",(void*)f_7909},
{"f_7912:eval_2escm",(void*)f_7912},
{"f_7919:eval_2escm",(void*)f_7919},
{"f_7883:eval_2escm",(void*)f_7883},
{"f_7850:eval_2escm",(void*)f_7850},
{"f_7854:eval_2escm",(void*)f_7854},
{"f_7860:eval_2escm",(void*)f_7860},
{"f_7863:eval_2escm",(void*)f_7863},
{"f_7881:eval_2escm",(void*)f_7881},
{"f_7866:eval_2escm",(void*)f_7866},
{"f_7870:eval_2escm",(void*)f_7870},
{"f_7812:eval_2escm",(void*)f_7812},
{"f_7826:eval_2escm",(void*)f_7826},
{"f_7836:eval_2escm",(void*)f_7836},
{"f_7798:eval_2escm",(void*)f_7798},
{"f_7809:eval_2escm",(void*)f_7809},
{"f_7753:eval_2escm",(void*)f_7753},
{"f_7774:eval_2escm",(void*)f_7774},
{"f_7762:eval_2escm",(void*)f_7762},
{"f_7669:eval_2escm",(void*)f_7669},
{"f_7673:eval_2escm",(void*)f_7673},
{"f_7729:eval_2escm",(void*)f_7729},
{"f_7676:eval_2escm",(void*)f_7676},
{"f_7679:eval_2escm",(void*)f_7679},
{"f_7706:eval_2escm",(void*)f_7706},
{"f_7712:eval_2escm",(void*)f_7712},
{"f_7694:eval_2escm",(void*)f_7694},
{"f_7570:eval_2escm",(void*)f_7570},
{"f_7574:eval_2escm",(void*)f_7574},
{"f_7622:eval_2escm",(void*)f_7622},
{"f_7624:eval_2escm",(void*)f_7624},
{"f_7637:eval_2escm",(void*)f_7637},
{"f_7576:eval_2escm",(void*)f_7576},
{"f_7580:eval_2escm",(void*)f_7580},
{"f_7615:eval_2escm",(void*)f_7615},
{"f_7586:eval_2escm",(void*)f_7586},
{"f_7596:eval_2escm",(void*)f_7596},
{"f_7589:eval_2escm",(void*)f_7589},
{"f_7539:eval_2escm",(void*)f_7539},
{"f_7543:eval_2escm",(void*)f_7543},
{"f_7378:eval_2escm",(void*)f_7378},
{"f_7483:eval_2escm",(void*)f_7483},
{"f_7500:eval_2escm",(void*)f_7500},
{"f_7508:eval_2escm",(void*)f_7508},
{"f_7400:eval_2escm",(void*)f_7400},
{"f_7405:eval_2escm",(void*)f_7405},
{"f_7444:eval_2escm",(void*)f_7444},
{"f_7431:eval_2escm",(void*)f_7431},
{"f_7381:eval_2escm",(void*)f_7381},
{"f_7311:eval_2escm",(void*)f_7311},
{"f_7315:eval_2escm",(void*)f_7315},
{"f_7373:eval_2escm",(void*)f_7373},
{"f_7318:eval_2escm",(void*)f_7318},
{"f_7323:eval_2escm",(void*)f_7323},
{"f_7367:eval_2escm",(void*)f_7367},
{"f_7334:eval_2escm",(void*)f_7334},
{"f_7342:eval_2escm",(void*)f_7342},
{"f_7344:eval_2escm",(void*)f_7344},
{"f_7361:eval_2escm",(void*)f_7361},
{"f_7329:eval_2escm",(void*)f_7329},
{"f_7281:eval_2escm",(void*)f_7281},
{"f_7288:eval_2escm",(void*)f_7288},
{"f_7298:eval_2escm",(void*)f_7298},
{"f_7175:eval_2escm",(void*)f_7175},
{"f_7179:eval_2escm",(void*)f_7179},
{"f_7271:eval_2escm",(void*)f_7271},
{"f_7275:eval_2escm",(void*)f_7275},
{"f_7188:eval_2escm",(void*)f_7188},
{"f_7257:eval_2escm",(void*)f_7257},
{"f_7253:eval_2escm",(void*)f_7253},
{"f_7191:eval_2escm",(void*)f_7191},
{"f_7240:eval_2escm",(void*)f_7240},
{"f_7243:eval_2escm",(void*)f_7243},
{"f_7246:eval_2escm",(void*)f_7246},
{"f_7194:eval_2escm",(void*)f_7194},
{"f_7199:eval_2escm",(void*)f_7199},
{"f_7233:eval_2escm",(void*)f_7233},
{"f_7212:eval_2escm",(void*)f_7212},
{"f_7166:eval_2escm",(void*)f_7166},
{"f_7126:eval_2escm",(void*)f_7126},
{"f_7147:eval_2escm",(void*)f_7147},
{"f_7130:eval_2escm",(void*)f_7130},
{"f_7144:eval_2escm",(void*)f_7144},
{"f_7133:eval_2escm",(void*)f_7133},
{"f_7141:eval_2escm",(void*)f_7141},
{"f_7136:eval_2escm",(void*)f_7136},
{"f_7083:eval_2escm",(void*)f_7083},
{"f_7091:eval_2escm",(void*)f_7091},
{"f_7095:eval_2escm",(void*)f_7095},
{"f_7054:eval_2escm",(void*)f_7054},
{"f_7062:eval_2escm",(void*)f_7062},
{"f_6632:eval_2escm",(void*)f_6632},
{"f_7025:eval_2escm",(void*)f_7025},
{"f_6654:eval_2escm",(void*)f_6654},
{"f_6947:eval_2escm",(void*)f_6947},
{"f_6962:eval_2escm",(void*)f_6962},
{"f_6965:eval_2escm",(void*)f_6965},
{"f_6968:eval_2escm",(void*)f_6968},
{"f_6974:eval_2escm",(void*)f_6974},
{"f_6977:eval_2escm",(void*)f_6977},
{"f_6983:eval_2escm",(void*)f_6983},
{"f_6657:eval_2escm",(void*)f_6657},
{"f_6938:eval_2escm",(void*)f_6938},
{"f_6926:eval_2escm",(void*)f_6926},
{"f_6929:eval_2escm",(void*)f_6929},
{"f_6932:eval_2escm",(void*)f_6932},
{"f_6663:eval_2escm",(void*)f_6663},
{"f_6911:eval_2escm",(void*)f_6911},
{"f_6883:eval_2escm",(void*)f_6883},
{"f_6907:eval_2escm",(void*)f_6907},
{"f_6903:eval_2escm",(void*)f_6903},
{"f_6899:eval_2escm",(void*)f_6899},
{"f_6666:eval_2escm",(void*)f_6666},
{"f_6674:eval_2escm",(void*)f_6674},
{"f_6870:eval_2escm",(void*)f_6870},
{"f_6678:eval_2escm",(void*)f_6678},
{"f_6858:eval_2escm",(void*)f_6858},
{"f_6699:eval_2escm",(void*)f_6699},
{"f_6703:eval_2escm",(void*)f_6703},
{"f_6849:eval_2escm",(void*)f_6849},
{"f_6711:eval_2escm",(void*)f_6711},
{"f_6715:eval_2escm",(void*)f_6715},
{"f_6840:eval_2escm",(void*)f_6840},
{"f_6836:eval_2escm",(void*)f_6836},
{"f_6718:eval_2escm",(void*)f_6718},
{"f_6721:eval_2escm",(void*)f_6721},
{"f_6726:eval_2escm",(void*)f_6726},
{"f_6736:eval_2escm",(void*)f_6736},
{"f_6782:eval_2escm",(void*)f_6782},
{"f_6802:eval_2escm",(void*)f_6802},
{"f_6812:eval_2escm",(void*)f_6812},
{"f_6787:eval_2escm",(void*)f_6787},
{"f_6791:eval_2escm",(void*)f_6791},
{"f_6748:eval_2escm",(void*)f_6748},
{"f_6755:eval_2escm",(void*)f_6755},
{"f_6766:eval_2escm",(void*)f_6766},
{"f_6777:eval_2escm",(void*)f_6777},
{"f_6770:eval_2escm",(void*)f_6770},
{"f_6760:eval_2escm",(void*)f_6760},
{"f_6739:eval_2escm",(void*)f_6739},
{"f_6746:eval_2escm",(void*)f_6746},
{"f_6708:eval_2escm",(void*)f_6708},
{"f_6688:eval_2escm",(void*)f_6688},
{"f_6679:eval_2escm",(void*)f_6679},
{"f_6669:eval_2escm",(void*)f_6669},
{"f_6586:eval_2escm",(void*)f_6586},
{"f_6596:eval_2escm",(void*)f_6596},
{"f_6511:eval_2escm",(void*)f_6511},
{"f_6523:eval_2escm",(void*)f_6523},
{"f_6536:eval_2escm",(void*)f_6536},
{"f_6518:eval_2escm",(void*)f_6518},
{"f_6505:eval_2escm",(void*)f_6505},
{"f_6421:eval_2escm",(void*)f_6421},
{"f_6434:eval_2escm",(void*)f_6434},
{"f_6467:eval_2escm",(void*)f_6467},
{"f_6448:eval_2escm",(void*)f_6448},
{"f_6424:eval_2escm",(void*)f_6424},
{"f_6411:eval_2escm",(void*)f_6411},
{"f_6419:eval_2escm",(void*)f_6419},
{"f_3005:eval_2escm",(void*)f_3005},
{"f_3009:eval_2escm",(void*)f_3009},
{"f_6385:eval_2escm",(void*)f_6385},
{"f_6075:eval_2escm",(void*)f_6075},
{"f_6079:eval_2escm",(void*)f_6079},
{"f_6337:eval_2escm",(void*)f_6337},
{"f_6366:eval_2escm",(void*)f_6366},
{"f_6276:eval_2escm",(void*)f_6276},
{"f_6277:eval_2escm",(void*)f_6277},
{"f_6288:eval_2escm",(void*)f_6288},
{"f_6302:eval_2escm",(void*)f_6302},
{"f_6331:eval_2escm",(void*)f_6331},
{"f_6300:eval_2escm",(void*)f_6300},
{"f_6290:eval_2escm",(void*)f_6290},
{"f_6266:eval_2escm",(void*)f_6266},
{"f_6225:eval_2escm",(void*)f_6225},
{"f_6228:eval_2escm",(void*)f_6228},
{"f_6231:eval_2escm",(void*)f_6231},
{"f_6234:eval_2escm",(void*)f_6234},
{"f_6235:eval_2escm",(void*)f_6235},
{"f_6242:eval_2escm",(void*)f_6242},
{"f_6249:eval_2escm",(void*)f_6249},
{"f_6253:eval_2escm",(void*)f_6253},
{"f_6257:eval_2escm",(void*)f_6257},
{"f_6261:eval_2escm",(void*)f_6261},
{"f_6183:eval_2escm",(void*)f_6183},
{"f_6186:eval_2escm",(void*)f_6186},
{"f_6189:eval_2escm",(void*)f_6189},
{"f_6190:eval_2escm",(void*)f_6190},
{"f_6197:eval_2escm",(void*)f_6197},
{"f_6204:eval_2escm",(void*)f_6204},
{"f_6208:eval_2escm",(void*)f_6208},
{"f_6212:eval_2escm",(void*)f_6212},
{"f_6148:eval_2escm",(void*)f_6148},
{"f_6151:eval_2escm",(void*)f_6151},
{"f_6152:eval_2escm",(void*)f_6152},
{"f_6159:eval_2escm",(void*)f_6159},
{"f_6166:eval_2escm",(void*)f_6166},
{"f_6170:eval_2escm",(void*)f_6170},
{"f_6120:eval_2escm",(void*)f_6120},
{"f_6121:eval_2escm",(void*)f_6121},
{"f_6128:eval_2escm",(void*)f_6128},
{"f_6135:eval_2escm",(void*)f_6135},
{"f_6101:eval_2escm",(void*)f_6101},
{"f_6108:eval_2escm",(void*)f_6108},
{"f_6049:eval_2escm",(void*)f_6049},
{"f_3242:eval_2escm",(void*)f_3242},
{"f_3249:eval_2escm",(void*)f_3249},
{"f_3451:eval_2escm",(void*)f_3451},
{"f_3507:eval_2escm",(void*)f_3507},
{"f_3527:eval_2escm",(void*)f_3527},
{"f_3530:eval_2escm",(void*)f_3530},
{"f_3545:eval_2escm",(void*)f_3545},
{"f_5848:eval_2escm",(void*)f_5848},
{"f_5883:eval_2escm",(void*)f_5883},
{"f_5877:eval_2escm",(void*)f_5877},
{"f_5872:eval_2escm",(void*)f_5872},
{"f_5835:eval_2escm",(void*)f_5835},
{"f_5791:eval_2escm",(void*)f_5791},
{"f_5801:eval_2escm",(void*)f_5801},
{"f_5776:eval_2escm",(void*)f_5776},
{"f_5769:eval_2escm",(void*)f_5769},
{"f_5728:eval_2escm",(void*)f_5728},
{"f_5676:eval_2escm",(void*)f_5676},
{"f_5678:eval_2escm",(void*)f_5678},
{"f_5700:eval_2escm",(void*)f_5700},
{"f_5708:eval_2escm",(void*)f_5708},
{"f_5690:eval_2escm",(void*)f_5690},
{"f_5672:eval_2escm",(void*)f_5672},
{"f_5623:eval_2escm",(void*)f_5623},
{"f_5652:eval_2escm",(void*)f_5652},
{"f_5555:eval_2escm",(void*)f_5555},
{"f_5558:eval_2escm",(void*)f_5558},
{"f_5561:eval_2escm",(void*)f_5561},
{"f_5588:eval_2escm",(void*)f_5588},
{"f_5586:eval_2escm",(void*)f_5586},
{"f_5542:eval_2escm",(void*)f_5542},
{"f_5531:eval_2escm",(void*)f_5531},
{"f_5269:eval_2escm",(void*)f_5269},
{"f_5272:eval_2escm",(void*)f_5272},
{"f_5461:eval_2escm",(void*)f_5461},
{"f_5469:eval_2escm",(void*)f_5469},
{"f_5498:eval_2escm",(void*)f_5498},
{"f_5410:eval_2escm",(void*)f_5410},
{"f_5434:eval_2escm",(void*)f_5434},
{"f_5423:eval_2escm",(void*)f_5423},
{"f_5278:eval_2escm",(void*)f_5278},
{"f_5406:eval_2escm",(void*)f_5406},
{"f_5281:eval_2escm",(void*)f_5281},
{"f_5284:eval_2escm",(void*)f_5284},
{"f_5312:eval_2escm",(void*)f_5312},
{"f_5322:eval_2escm",(void*)f_5322},
{"f_5403:eval_2escm",(void*)f_5403},
{"f_5395:eval_2escm",(void*)f_5395},
{"f_5332:eval_2escm",(void*)f_5332},
{"f_5380:eval_2escm",(void*)f_5380},
{"f_5335:eval_2escm",(void*)f_5335},
{"f_5336:eval_2escm",(void*)f_5336},
{"f_5342:eval_2escm",(void*)f_5342},
{"f_5367:eval_2escm",(void*)f_5367},
{"f_5285:eval_2escm",(void*)f_5285},
{"f_5289:eval_2escm",(void*)f_5289},
{"f_5292:eval_2escm",(void*)f_5292},
{"f_5296:eval_2escm",(void*)f_5296},
{"f_5299:eval_2escm",(void*)f_5299},
{"f_5303:eval_2escm",(void*)f_5303},
{"f_5306:eval_2escm",(void*)f_5306},
{"f_5256:eval_2escm",(void*)f_5256},
{"f_5235:eval_2escm",(void*)f_5235},
{"f_5188:eval_2escm",(void*)f_5188},
{"f_5213:eval_2escm",(void*)f_5213},
{"f_5191:eval_2escm",(void*)f_5191},
{"f_5201:eval_2escm",(void*)f_5201},
{"f_5209:eval_2escm",(void*)f_5209},
{"f_5205:eval_2escm",(void*)f_5205},
{"f_5194:eval_2escm",(void*)f_5194},
{"f_5140:eval_2escm",(void*)f_5140},
{"f_5169:eval_2escm",(void*)f_5169},
{"f_5086:eval_2escm",(void*)f_5086},
{"f_5089:eval_2escm",(void*)f_5089},
{"f_5111:eval_2escm",(void*)f_5111},
{"f_5117:eval_2escm",(void*)f_5117},
{"f_5090:eval_2escm",(void*)f_5090},
{"f_5057:eval_2escm",(void*)f_5057},
{"f_5073:eval_2escm",(void*)f_5073},
{"f_5069:eval_2escm",(void*)f_5069},
{"f_5017:eval_2escm",(void*)f_5017},
{"f_5046:eval_2escm",(void*)f_5046},
{"f_5015:eval_2escm",(void*)f_5015},
{"f_4986:eval_2escm",(void*)f_4986},
{"f_5002:eval_2escm",(void*)f_5002},
{"f_4998:eval_2escm",(void*)f_4998},
{"f_4973:eval_2escm",(void*)f_4973},
{"f_4980:eval_2escm",(void*)f_4980},
{"f_4575:eval_2escm",(void*)f_4575},
{"f_4946:eval_2escm",(void*)f_4946},
{"f_4957:eval_2escm",(void*)f_4957},
{"f_4951:eval_2escm",(void*)f_4951},
{"f_4587:eval_2escm",(void*)f_4587},
{"f_4592:eval_2escm",(void*)f_4592},
{"f_4910:eval_2escm",(void*)f_4910},
{"f_4939:eval_2escm",(void*)f_4939},
{"f_4599:eval_2escm",(void*)f_4599},
{"f_4602:eval_2escm",(void*)f_4602},
{"f_4904:eval_2escm",(void*)f_4904},
{"f_4608:eval_2escm",(void*)f_4608},
{"f_4866:eval_2escm",(void*)f_4866},
{"f_4872:eval_2escm",(void*)f_4872},
{"f_4896:eval_2escm",(void*)f_4896},
{"f_4843:eval_2escm",(void*)f_4843},
{"f_4849:eval_2escm",(void*)f_4849},
{"f_6003:eval_2escm",(void*)f_6003},
{"f_6032:eval_2escm",(void*)f_6032},
{"f_4865:eval_2escm",(void*)f_4865},
{"f_4861:eval_2escm",(void*)f_4861},
{"f_4821:eval_2escm",(void*)f_4821},
{"f_4827:eval_2escm",(void*)f_4827},
{"f_4839:eval_2escm",(void*)f_4839},
{"f_4802:eval_2escm",(void*)f_4802},
{"f_4808:eval_2escm",(void*)f_4808},
{"f_4774:eval_2escm",(void*)f_4774},
{"f_4780:eval_2escm",(void*)f_4780},
{"f_4755:eval_2escm",(void*)f_4755},
{"f_4761:eval_2escm",(void*)f_4761},
{"f_4727:eval_2escm",(void*)f_4727},
{"f_4733:eval_2escm",(void*)f_4733},
{"f_4708:eval_2escm",(void*)f_4708},
{"f_4714:eval_2escm",(void*)f_4714},
{"f_4680:eval_2escm",(void*)f_4680},
{"f_4686:eval_2escm",(void*)f_4686},
{"f_4661:eval_2escm",(void*)f_4661},
{"f_4667:eval_2escm",(void*)f_4667},
{"f_4637:eval_2escm",(void*)f_4637},
{"f_4643:eval_2escm",(void*)f_4643},
{"f_4618:eval_2escm",(void*)f_4618},
{"f_4624:eval_2escm",(void*)f_4624},
{"f_4533:eval_2escm",(void*)f_4533},
{"f_4460:eval_2escm",(void*)f_4460},
{"f_4498:eval_2escm",(void*)f_4498},
{"f_4484:eval_2escm",(void*)f_4484},
{"f_4464:eval_2escm",(void*)f_4464},
{"f_4388:eval_2escm",(void*)f_4388},
{"f_3997:eval_2escm",(void*)f_3997},
{"f_4353:eval_2escm",(void*)f_4353},
{"f_4382:eval_2escm",(void*)f_4382},
{"f_4003:eval_2escm",(void*)f_4003},
{"f_4009:eval_2escm",(void*)f_4009},
{"f_4347:eval_2escm",(void*)f_4347},
{"f_4012:eval_2escm",(void*)f_4012},
{"f_4310:eval_2escm",(void*)f_4310},
{"f_4339:eval_2escm",(void*)f_4339},
{"f_4263:eval_2escm",(void*)f_4263},
{"f_4264:eval_2escm",(void*)f_4264},
{"f_4268:eval_2escm",(void*)f_4268},
{"f_4280:eval_2escm",(void*)f_4280},
{"f_4305:eval_2escm",(void*)f_4305},
{"f_4271:eval_2escm",(void*)f_4271},
{"f_4245:eval_2escm",(void*)f_4245},
{"f_4240:eval_2escm",(void*)f_4240},
{"f_4171:eval_2escm",(void*)f_4171},
{"f_4232:eval_2escm",(void*)f_4232},
{"f_4174:eval_2escm",(void*)f_4174},
{"f_4224:eval_2escm",(void*)f_4224},
{"f_4180:eval_2escm",(void*)f_4180},
{"f_4216:eval_2escm",(void*)f_4216},
{"f_4183:eval_2escm",(void*)f_4183},
{"f_4184:eval_2escm",(void*)f_4184},
{"f_4200:eval_2escm",(void*)f_4200},
{"f_4204:eval_2escm",(void*)f_4204},
{"f_4208:eval_2escm",(void*)f_4208},
{"f_4212:eval_2escm",(void*)f_4212},
{"f_4158:eval_2escm",(void*)f_4158},
{"f_4104:eval_2escm",(void*)f_4104},
{"f_4150:eval_2escm",(void*)f_4150},
{"f_4107:eval_2escm",(void*)f_4107},
{"f_4142:eval_2escm",(void*)f_4142},
{"f_4113:eval_2escm",(void*)f_4113},
{"f_4114:eval_2escm",(void*)f_4114},
{"f_4130:eval_2escm",(void*)f_4130},
{"f_4134:eval_2escm",(void*)f_4134},
{"f_4138:eval_2escm",(void*)f_4138},
{"f_4091:eval_2escm",(void*)f_4091},
{"f_4055:eval_2escm",(void*)f_4055},
{"f_4083:eval_2escm",(void*)f_4083},
{"f_4058:eval_2escm",(void*)f_4058},
{"f_4059:eval_2escm",(void*)f_4059},
{"f_4075:eval_2escm",(void*)f_4075},
{"f_4079:eval_2escm",(void*)f_4079},
{"f_4042:eval_2escm",(void*)f_4042},
{"f_4021:eval_2escm",(void*)f_4021},
{"f_4022:eval_2escm",(void*)f_4022},
{"f_4038:eval_2escm",(void*)f_4038},
{"f_3862:eval_2escm",(void*)f_3862},
{"f_3866:eval_2escm",(void*)f_3866},
{"f_3942:eval_2escm",(void*)f_3942},
{"f_3875:eval_2escm",(void*)f_3875},
{"f_3878:eval_2escm",(void*)f_3878},
{"f_3911:eval_2escm",(void*)f_3911},
{"f_3919:eval_2escm",(void*)f_3919},
{"f_3884:eval_2escm",(void*)f_3884},
{"f_3887:eval_2escm",(void*)f_3887},
{"f_3903:eval_2escm",(void*)f_3903},
{"f_3894:eval_2escm",(void*)f_3894},
{"f_3902:eval_2escm",(void*)f_3902},
{"f_3962:eval_2escm",(void*)f_3962},
{"f_3970:eval_2escm",(void*)f_3970},
{"f_3949:eval_2escm",(void*)f_3949},
{"f_3961:eval_2escm",(void*)f_3961},
{"f_3856:eval_2escm",(void*)f_3856},
{"f_3805:eval_2escm",(void*)f_3805},
{"f_3808:eval_2escm",(void*)f_3808},
{"f_3811:eval_2escm",(void*)f_3811},
{"f_3812:eval_2escm",(void*)f_3812},
{"f_3816:eval_2escm",(void*)f_3816},
{"f_3819:eval_2escm",(void*)f_3819},
{"f_3783:eval_2escm",(void*)f_3783},
{"f_3786:eval_2escm",(void*)f_3786},
{"f_3787:eval_2escm",(void*)f_3787},
{"f_3791:eval_2escm",(void*)f_3791},
{"f_3692:eval_2escm",(void*)f_3692},
{"f_3695:eval_2escm",(void*)f_3695},
{"f_3698:eval_2escm",(void*)f_3698},
{"f_3699:eval_2escm",(void*)f_3699},
{"f_3706:eval_2escm",(void*)f_3706},
{"f_3682:eval_2escm",(void*)f_3682},
{"f_3648:eval_2escm",(void*)f_3648},
{"f_3642:eval_2escm",(void*)f_3642},
{"f_3643:eval_2escm",(void*)f_3643},
{"f_3626:eval_2escm",(void*)f_3626},
{"f_3554:eval_2escm",(void*)f_3554},
{"f_3611:eval_2escm",(void*)f_3611},
{"f_3609:eval_2escm",(void*)f_3609},
{"f_3601:eval_2escm",(void*)f_3601},
{"f_3593:eval_2escm",(void*)f_3593},
{"f_3585:eval_2escm",(void*)f_3585},
{"f_3577:eval_2escm",(void*)f_3577},
{"f_3569:eval_2escm",(void*)f_3569},
{"f_3561:eval_2escm",(void*)f_3561},
{"f_3508:eval_2escm",(void*)f_3508},
{"f_3497:eval_2escm",(void*)f_3497},
{"f_3495:eval_2escm",(void*)f_3495},
{"f_3484:eval_2escm",(void*)f_3484},
{"f_3482:eval_2escm",(void*)f_3482},
{"f_3474:eval_2escm",(void*)f_3474},
{"f_3466:eval_2escm",(void*)f_3466},
{"f_3458:eval_2escm",(void*)f_3458},
{"f_3268:eval_2escm",(void*)f_3268},
{"f_3349:eval_2escm",(void*)f_3349},
{"f_3278:eval_2escm",(void*)f_3278},
{"f_3340:eval_2escm",(void*)f_3340},
{"f_3325:eval_2escm",(void*)f_3325},
{"f10929:eval_2escm",(void*)f10929},
{"f10924:eval_2escm",(void*)f10924},
{"f_3316:eval_2escm",(void*)f_3316},
{"f_3284:eval_2escm",(void*)f_3284},
{"f_3287:eval_2escm",(void*)f_3287},
{"f_3296:eval_2escm",(void*)f_3296},
{"f_3291:eval_2escm",(void*)f_3291},
{"f_3441:eval_2escm",(void*)f_3441},
{"f_3420:eval_2escm",(void*)f_3420},
{"f_3397:eval_2escm",(void*)f_3397},
{"f_3378:eval_2escm",(void*)f_3378},
{"f_3363:eval_2escm",(void*)f_3363},
{"f_3262:eval_2escm",(void*)f_3262},
{"f_3250:eval_2escm",(void*)f_3250},
{"f_3176:eval_2escm",(void*)f_3176},
{"f_3180:eval_2escm",(void*)f_3180},
{"f_3183:eval_2escm",(void*)f_3183},
{"f_3186:eval_2escm",(void*)f_3186},
{"f_3213:eval_2escm",(void*)f_3213},
{"f_3217:eval_2escm",(void*)f_3217},
{"f_3227:eval_2escm",(void*)f_3227},
{"f_3220:eval_2escm",(void*)f_3220},
{"f_3200:eval_2escm",(void*)f_3200},
{"f_3211:eval_2escm",(void*)f_3211},
{"f_3204:eval_2escm",(void*)f_3204},
{"f_3191:eval_2escm",(void*)f_3191},
{"f_3195:eval_2escm",(void*)f_3195},
{"f_3154:eval_2escm",(void*)f_3154},
{"f_3065:eval_2escm",(void*)f_3065},
{"f_3069:eval_2escm",(void*)f_3069},
{"f_3077:eval_2escm",(void*)f_3077},
{"f_3094:eval_2escm",(void*)f_3094},
{"f_3124:eval_2escm",(void*)f_3124},
{"f_3050:eval_2escm",(void*)f_3050},
{"f_3054:eval_2escm",(void*)f_3054},
{"f_3060:eval_2escm",(void*)f_3060},
{"f_3011:eval_2escm",(void*)f_3011},
{"f_3024:eval_2escm",(void*)f_3024},
{"f_2957:eval_2escm",(void*)f_2957},
{"f_2976:eval_2escm",(void*)f_2976},
{"f_2988:eval_2escm",(void*)f_2988},
{"f_2991:eval_2escm",(void*)f_2991},
{"f_2994:eval_2escm",(void*)f_2994},
{"f_2984:eval_2escm",(void*)f_2984},
{"f_2963:eval_2escm",(void*)f_2963},
{"f_2897:eval_2escm",(void*)f_2897},
{"f_2901:eval_2escm",(void*)f_2901},
{"f_2909:eval_2escm",(void*)f_2909},
{"f_2827:eval_2escm",(void*)f_2827},
{"f_2833:eval_2escm",(void*)f_2833},
{"f_2871:eval_2escm",(void*)f_2871},
{"f_2881:eval_2escm",(void*)f_2881},
{"f_2862:eval_2escm",(void*)f_2862},
{"f_2841:eval_2escm",(void*)f_2841},
{"f_2807:eval_2escm",(void*)f_2807},
{"f_2819:eval_2escm",(void*)f_2819},
{"f_2822:eval_2escm",(void*)f_2822},
{"f_2815:eval_2escm",(void*)f_2815},
{"f_2747:eval_2escm",(void*)f_2747},
{"f_2751:eval_2escm",(void*)f_2751},
{"f_2759:eval_2escm",(void*)f_2759},
{"f_2692:eval_2escm",(void*)f_2692},
{"f_2745:eval_2escm",(void*)f_2745},
{"f_2702:eval_2escm",(void*)f_2702},
{"f_2677:eval_2escm",(void*)f_2677},
{"f_2665:eval_2escm",(void*)f_2665},
{"f_2669:eval_2escm",(void*)f_2669},
{"f_2631:eval_2escm",(void*)f_2631},
{"f_2635:eval_2escm",(void*)f_2635},
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
