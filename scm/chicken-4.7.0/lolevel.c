/* Generated from lolevel.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: lolevel.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file lolevel.c
   unit: lolevel
*/

#include "chicken.h"

#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
# include <sys/types.h>
#endif
#ifndef C_NONUNIX
# include <sys/mman.h>
#endif

#define C_w2b(x)                   C_fix(C_wordstobytes(C_unfix(x)))
#define C_memmove_o(to, from, n, toff, foff) C_memmove((char *)(to) + (toff), (char *)(from) + (foff), (n))

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_srfi_2d69_toplevel)
C_externimport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[146];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,99,104,101,99,107,45,98,108,111,99,107,32,120,54,50,32,108,111,99,54,51,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,99,104,101,99,107,45,103,101,110,101,114,105,99,45,115,116,114,117,99,116,117,114,101,32,120,56,52,32,108,111,99,56,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,22),40,102,95,49,48,55,48,32,120,49,48,51,32,46,32,108,111,99,49,48,52,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,10),40,110,111,115,105,122,101,114,114,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,115,105,122,101,114,114,32,97,114,103,115,50,48,55,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,29),40,99,104,101,99,107,110,49,32,110,50,48,56,32,110,109,97,120,50,48,57,32,111,102,102,50,49,48,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,47),40,99,104,101,99,107,110,50,32,110,50,49,49,32,110,109,97,120,50,49,50,32,110,109,97,120,50,50,49,51,32,111,102,102,49,50,49,52,32,111,102,102,50,50,49,53,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,20),40,109,111,118,101,32,102,114,111,109,50,49,56,32,116,111,50,49,57,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,34),40,102,95,49,50,49,49,32,102,114,111,109,49,56,56,32,116,111,49,56,57,32,46,32,116,109,112,49,56,55,49,57,48,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,51,48,49,32,105,51,48,51,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,11),40,99,111,112,121,32,120,50,57,49,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,13),40,102,95,49,53,54,51,32,120,50,56,57,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,16),40,102,95,49,54,52,52,32,97,51,48,57,51,49,50,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,102,95,49,54,53,49,32,97,51,49,53,51,49,57,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,13),40,102,95,49,54,54,49,32,120,51,50,50,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,13),40,102,95,49,54,54,57,32,120,51,50,55,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,16),40,102,95,49,54,56,48,32,97,100,100,114,51,51,51,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,15),40,102,95,49,54,56,57,32,112,116,114,51,51,54,41,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,15),40,102,95,49,54,57,57,32,112,116,114,51,52,48,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,13),40,102,95,49,55,48,53,32,120,51,52,51,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,15),40,102,95,49,55,49,54,32,112,116,114,51,53,51,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,20),40,102,95,49,55,50,50,32,112,49,51,53,54,32,112,50,51,53,55,41,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,24),40,102,95,49,55,51,49,32,97,51,54,50,51,54,54,32,97,51,54,49,51,54,55,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,13),40,102,95,49,55,53,50,32,120,51,55,56,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,22),40,102,95,49,55,56,57,32,112,116,114,51,56,55,32,116,97,103,51,56,56,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,25),40,102,95,49,56,48,57,32,120,52,48,50,32,46,32,116,109,112,52,48,49,52,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,13),40,102,95,49,56,53,51,32,120,52,49,54,41,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,26),40,102,95,49,56,55,54,32,111,98,106,52,50,52,32,46,32,105,110,100,101,120,52,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,26),40,102,95,49,57,48,53,32,111,98,106,52,51,50,32,46,32,105,110,100,101,120,52,51,51,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,18),40,102,95,49,57,51,52,32,120,52,52,48,32,121,52,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,13),40,102,95,49,57,52,49,32,120,52,52,52,41,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,13),40,102,95,49,57,52,52,32,120,52,52,54,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,18),40,102,95,49,57,53,48,32,112,52,52,57,32,110,52,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,18),40,102,95,49,57,53,51,32,112,52,53,50,32,110,52,53,51,41,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,18),40,102,95,49,57,53,54,32,112,52,53,53,32,110,52,53,54,41,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,18),40,102,95,49,57,53,57,32,112,52,53,56,32,110,52,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,18),40,102,95,49,57,54,50,32,112,52,54,49,32,110,52,54,50,41,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,18),40,102,95,49,57,54,53,32,112,52,54,52,32,110,52,54,53,41,0,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,18),40,102,95,49,57,54,56,32,112,52,54,55,32,110,52,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,18),40,102,95,49,57,55,49,32,112,52,55,48,32,110,52,55,49,41,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,12),40,97,50,48,49,56,32,120,52,57,50,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,17),40,97,50,48,51,52,32,120,52,57,52,32,105,52,57,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,24),40,102,95,50,48,49,48,32,112,114,111,99,52,57,48,32,100,97,116,97,52,57,49,41};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,12),40,97,50,48,54,49,32,120,53,48,54,41,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,13),40,102,95,50,48,52,53,32,120,52,57,57,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,12),40,97,50,48,57,52,32,120,53,49,54,41,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,13),40,102,95,50,48,56,49,32,120,53,48,57,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,21),40,102,95,50,49,50,48,32,112,114,111,99,53,49,57,32,120,53,50,48,41,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,13),40,102,95,50,49,52,48,32,120,53,50,53,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,13),40,102,95,50,49,52,57,32,120,53,50,56,41,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,26),40,102,95,50,49,55,49,32,116,121,112,101,53,51,51,32,46,32,97,114,103,115,53,51,52,41,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,25),40,102,95,50,49,56,48,32,120,53,52,50,32,46,32,116,109,112,53,52,49,53,52,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,13),40,102,95,50,50,50,57,32,120,53,53,57,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,13),40,102,95,50,50,51,56,32,120,53,54,50,41,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,23),40,102,95,50,50,53,49,32,120,53,54,53,32,105,53,54,54,32,121,53,54,55,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,55,57,41,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,13),40,102,95,50,50,55,57,32,120,53,55,54,41,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,13),40,102,95,50,51,49,55,32,120,53,56,54,41,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,16),40,102,95,50,52,51,49,32,97,53,57,50,53,57,53,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,54,48,56,32,105,54,49,48,41};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,53,57,56,41,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,28),40,102,95,50,51,50,48,32,120,53,56,56,32,46,32,97,108,108,111,99,97,116,111,114,53,56,57,41,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,54,52,52,32,105,54,52,54,41};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,54,51,51,41,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,31),40,102,95,50,52,51,56,32,120,54,50,50,32,112,116,114,54,50,51,32,46,32,108,105,109,105,116,54,50,52,41,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,16),40,102,95,50,54,56,52,32,97,54,54,52,54,54,56,41};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,54,55,54,32,105,54,55,56,41};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,14),40,114,101,108,101,97,115,101,32,120,54,55,49,41,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,27),40,102,95,50,54,48,50,32,120,54,54,48,32,46,32,114,101,108,101,97,115,101,114,54,54,49,41,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,54,57,52,32,105,54,57,54,41};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,54,56,56,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,13),40,102,95,50,54,57,52,32,120,54,56,53,41,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,55,51,52,32,105,55,51,54,41};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,11),40,99,111,112,121,32,120,55,50,49,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,25),40,102,95,50,55,55,56,32,120,55,49,49,32,46,32,116,109,112,55,49,48,55,49,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,115,116,55,48,41,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,16),40,102,95,50,57,48,55,32,97,108,115,116,55,52,51,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,23),40,102,95,50,57,49,54,32,111,108,100,55,52,54,32,112,114,111,99,55,52,55,41,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,55,55,50,41,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,25),40,102,95,50,57,53,48,32,110,55,54,49,32,46,32,116,109,112,55,54,48,55,54,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,13),40,102,95,51,48,50,52,32,120,55,56,49,41,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,24),40,100,111,108,111,111,112,55,56,55,32,112,116,114,115,55,56,57,32,105,55,57,48,41};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,18),40,102,95,51,48,51,48,32,46,32,112,116,114,115,55,56,51,41,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,56,48,48,41,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,21),40,102,95,51,48,55,52,32,112,118,55,57,54,32,112,116,114,55,57,55,41,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,29),40,112,118,45,98,117,102,45,115,101,116,33,32,97,56,49,55,56,50,51,32,97,56,49,54,56,50,52,41,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,26),40,102,95,51,49,51,53,32,112,118,56,50,55,32,105,56,50,56,32,112,116,114,56,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,14),40,102,95,51,49,54,56,32,112,118,56,52,49,41,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,18),40,97,51,49,55,54,32,112,118,56,51,53,32,105,56,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,17),40,97,51,49,57,57,32,120,53,55,49,32,105,53,55,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,12),40,97,51,50,50,51,32,112,52,56,55,41,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,12),40,97,51,50,50,54,32,112,52,56,53,41,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,12),40,97,51,50,50,57,32,112,52,56,51,41,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,12),40,97,51,50,51,50,32,112,52,56,49,41,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,12),40,97,51,50,51,53,32,112,52,55,57,41,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,12),40,97,51,50,51,56,32,112,52,55,55,41,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,12),40,97,51,50,52,49,32,112,52,55,53,41,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,12),40,97,51,50,52,52,32,112,52,55,51,41,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,14),67,95,108,111,99,97,116,105,118,101,95,114,101,102,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub819(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub819(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word buf=(C_word )(C_a0);
unsigned int i=(unsigned int )C_unfix(C_a1);
void * ptr=(void * )C_c_pointer_or_null(C_a2);
*((void **)C_data_pointer(buf) + i) = ptr;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer_or_false(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub810(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub810(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word buf=(C_word )(C_a0);
unsigned int i=(unsigned int )C_unfix(C_a1);
C_return(*((void **)C_data_pointer(buf) + i));
C_ret:
#undef return

return C_r;}

/* from k2687 */
static C_word C_fcall stub665(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub665(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k2434 */
static C_word C_fcall stub593(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub593(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from k1749 */
static C_word C_fcall stub374(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub374(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_int_to_num(&C_a,C_align(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub363(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub363(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * ptr=(void * )C_c_pointer_or_null(C_a0);
int off=(int )C_num_to_int(C_a1);
C_return((unsigned char *)ptr + off);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub348(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub348(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word x=(C_word )(C_a0);
C_return((void *)x);
C_ret:
#undef return

return C_r;}

/* from k1654 */
static C_word C_fcall stub316(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub316(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k1647 */
static C_word C_fcall stub310(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub310(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from k1197 */
static C_word C_fcall stub170(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub170(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1169 */
static C_word C_fcall stub154(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub154(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1141 */
static C_word C_fcall stub138(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub138(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1113 */
static C_word C_fcall stub122(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub122(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

C_noret_decl(C_lolevel_toplevel)
C_externexport void C_ccall C_lolevel_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_931)
static void C_ccall f_931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_934)
static void C_ccall f_934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1939)
static void C_ccall f_1939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3245)
static void C_ccall f_3245(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3242)
static void C_ccall f_3242(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1980)
static void C_ccall f_1980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1984)
static void C_ccall f_1984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3236)
static void C_ccall f_3236(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1988)
static void C_ccall f_1988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3233)
static void C_ccall f_3233(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1992)
static void C_ccall f_1992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3230)
static void C_ccall f_3230(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1996)
static void C_ccall f_1996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3227)
static void C_ccall f_3227(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2000)
static void C_ccall f_2000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3224)
static void C_ccall f_3224(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2004)
static void C_ccall f_2004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2138)
static void C_ccall f_2138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3200)
static void C_ccall f_3200(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3204)
static void C_ccall f_3204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2277)
static void C_ccall f_2277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3177)
static void C_ccall f_3177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3166)
static void C_ccall f_3166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3135)
static void C_ccall f_3135(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3145)
static void C_ccall f_3145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3148)
static void C_ccall f_3148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3121)
static C_word C_fcall f_3121(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3074)
static void C_ccall f_3074(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3081)
static void C_ccall f_3081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3092)
static C_word C_fcall f_3092(C_word t0,C_word t1);
C_noret_decl(f_3030)
static void C_ccall f_3030(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3030)
static void C_ccall f_3030r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3037)
static void C_ccall f_3037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3045)
static void C_fcall f_3045(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3058)
static void C_ccall f_3058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2983)
static C_word C_fcall f_2983(C_word t0,C_word t1);
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2920)
static void C_ccall f_2920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2923)
static void C_ccall f_2923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2933)
static void C_ccall f_2933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_964)
static void C_fcall f_964(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_986)
static void C_ccall f_986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_989)
static void C_ccall f_989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2911)
static void C_ccall f_2911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2778)
static void C_ccall f_2778(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2778)
static void C_ccall f_2778r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2782)
static void C_ccall f_2782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2785)
static void C_ccall f_2785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2790)
static void C_fcall f_2790(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2806)
static void C_ccall f_2806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2849)
static void C_ccall f_2849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2852)
static void C_ccall f_2852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2861)
static void C_fcall f_2861(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2882)
static void C_ccall f_2882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2855)
static void C_ccall f_2855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2698)
static void C_ccall f_2698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2703)
static void C_fcall f_2703(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2716)
static void C_ccall f_2716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2773)
static void C_ccall f_2773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2722)
static void C_fcall f_2722(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2725)
static void C_ccall f_2725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2735)
static void C_fcall f_2735(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2737)
static void C_fcall f_2737(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2759)
static void C_ccall f_2759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2728)
static void C_ccall f_2728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2602)
static void C_ccall f_2602(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2602)
static void C_ccall f_2602r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2611)
static void C_fcall f_2611(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2656)
static void C_fcall f_2656(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f3591)
static void C_ccall f3591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2647)
static void C_ccall f_2647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2442)
static void C_ccall f_2442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2445)
static void C_fcall f_2445(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2591)
static void C_ccall f_2591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2448)
static void C_ccall f_2448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2459)
static void C_fcall f_2459(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2469)
static void C_ccall f_2469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2584)
static void C_ccall f_2584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2478)
static void C_fcall f_2478(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2568)
static void C_ccall f_2568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2484)
static void C_fcall f_2484(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2487)
static void C_ccall f_2487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2500)
static void C_fcall f_2500(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2502)
static void C_fcall f_2502(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2320)
static void C_ccall f_2320(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2320)
static void C_ccall f_2320r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2327)
static void C_ccall f_2327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2335)
static void C_fcall f_2335(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2345)
static void C_ccall f_2345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2361)
static void C_fcall f_2361(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2374)
static void C_fcall f_2374(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2376)
static void C_fcall f_2376(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2397)
static void C_ccall f_2397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2431)
static void C_ccall f_2431(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2317)
static void C_ccall f_2317(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2279)
static void C_ccall f_2279(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2283)
static void C_ccall f_2283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2294)
static C_word C_fcall f_2294(C_word t0,C_word t1);
C_noret_decl(f_2251)
static void C_ccall f_2251(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2238)
static void C_ccall f_2238(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2242)
static void C_ccall f_2242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2229)
static void C_ccall f_2229(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2233)
static void C_ccall f_2233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2184)
static void C_ccall f_2184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2195)
static void C_fcall f_2195(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1055)
static void C_fcall f_1055(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2144)
static void C_ccall f_2144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2120)
static void C_ccall f_2120(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2124)
static void C_ccall f_2124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2081)
static void C_ccall f_2081(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2112)
static void C_ccall f_2112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2045)
static void C_ccall f_2045(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2062)
static void C_ccall f_2062(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2079)
static void C_ccall f_2079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2014)
static void C_ccall f_2014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2035)
static void C_ccall f_2035(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2019)
static void C_ccall f_2019(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1971)
static void C_ccall f_1971(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1968)
static void C_ccall f_1968(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1965)
static void C_ccall f_1965(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1962)
static void C_ccall f_1962(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1959)
static void C_ccall f_1959(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1956)
static void C_ccall f_1956(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1953)
static void C_ccall f_1953(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1944)
static void C_ccall f_1944(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1941)
static void C_ccall f_1941(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1905)
static void C_ccall f_1905(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1905)
static void C_ccall f_1905r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1884)
static void C_ccall f_1884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1853)
static void C_ccall f_1853(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1865)
static void C_fcall f_1865(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1809)
static void C_ccall f_1809(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1809)
static void C_ccall f_1809r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1813)
static void C_ccall f_1813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1793)
static void C_ccall f_1793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1804)
static void C_fcall f_1804(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1796)
static void C_ccall f_1796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1752)
static void C_ccall f_1752(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1773)
static void C_fcall f_1773(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1784)
static void C_ccall f_1784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1731)
static void C_ccall f_1731(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1722)
static void C_ccall f_1722(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1726)
static void C_ccall f_1726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1729)
static void C_ccall f_1729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1716)
static void C_ccall f_1716(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1720)
static void C_ccall f_1720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1705)
static void C_ccall f_1705(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1703)
static void C_ccall f_1703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1693)
static void C_ccall f_1693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1680)
static void C_ccall f_1680(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1684)
static void C_ccall f_1684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1669)
static void C_ccall f_1669(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1661)
static void C_ccall f_1661(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1651)
static void C_ccall f_1651(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1563)
static void C_ccall f_1563(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1569)
static void C_fcall f_1569(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1599)
static void C_ccall f_1599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1614)
static void C_fcall f_1614(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1635)
static void C_ccall f_1635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1602)
static void C_ccall f_1602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1211)
static void C_ccall f_1211(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1211)
static void C_ccall f_1211r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1293)
static void C_ccall f_1293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1296)
static void C_ccall f_1296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1299)
static void C_ccall f_1299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1302)
static void C_ccall f_1302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1307)
static void C_fcall f_1307(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1376)
static void C_fcall f_1376(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1463)
static void C_fcall f_1463(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1480)
static void C_ccall f_1480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1490)
static void C_ccall f_1490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1470)
static void C_ccall f_1470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1392)
static void C_fcall f_1392(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1408)
static void C_ccall f_1408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1422)
static void C_ccall f_1422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1399)
static void C_ccall f_1399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1266)
static void C_fcall f_1266(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1273)
static void C_fcall f_1273(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1250)
static void C_fcall f_1250(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1244)
static void C_fcall f_1244(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1238)
static void C_fcall f_1238(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1070)
static void C_ccall f_1070(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1070)
static void C_ccall f_1070r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1009)
static void C_fcall f_1009(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1021)
static void C_fcall f_1021(C_word t0,C_word t1) C_noret;
C_noret_decl(f_936)
static void C_fcall f_936(C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_3045)
static void C_fcall trf_3045(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3045(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3045(t0,t1,t2,t3);}

C_noret_decl(trf_964)
static void C_fcall trf_964(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_964(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_964(t0,t1,t2);}

C_noret_decl(trf_2790)
static void C_fcall trf_2790(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2790(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2790(t0,t1,t2);}

C_noret_decl(trf_2861)
static void C_fcall trf_2861(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2861(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2861(t0,t1,t2);}

C_noret_decl(trf_2703)
static void C_fcall trf_2703(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2703(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2703(t0,t1,t2);}

C_noret_decl(trf_2722)
static void C_fcall trf_2722(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2722(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2722(t0,t1);}

C_noret_decl(trf_2735)
static void C_fcall trf_2735(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2735(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2735(t0,t1);}

C_noret_decl(trf_2737)
static void C_fcall trf_2737(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2737(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2737(t0,t1,t2);}

C_noret_decl(trf_2611)
static void C_fcall trf_2611(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2611(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2611(t0,t1,t2);}

C_noret_decl(trf_2656)
static void C_fcall trf_2656(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2656(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2656(t0,t1,t2);}

C_noret_decl(trf_2445)
static void C_fcall trf_2445(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2445(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2445(t0,t1);}

C_noret_decl(trf_2459)
static void C_fcall trf_2459(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2459(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2459(t0,t1,t2);}

C_noret_decl(trf_2478)
static void C_fcall trf_2478(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2478(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2478(t0,t1);}

C_noret_decl(trf_2484)
static void C_fcall trf_2484(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2484(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2484(t0,t1);}

C_noret_decl(trf_2500)
static void C_fcall trf_2500(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2500(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2500(t0,t1);}

C_noret_decl(trf_2502)
static void C_fcall trf_2502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2502(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2502(t0,t1,t2);}

C_noret_decl(trf_2335)
static void C_fcall trf_2335(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2335(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2335(t0,t1,t2);}

C_noret_decl(trf_2361)
static void C_fcall trf_2361(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2361(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2361(t0,t1);}

C_noret_decl(trf_2374)
static void C_fcall trf_2374(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2374(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2374(t0,t1);}

C_noret_decl(trf_2376)
static void C_fcall trf_2376(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2376(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2376(t0,t1,t2);}

C_noret_decl(trf_2195)
static void C_fcall trf_2195(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2195(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2195(t0,t1);}

C_noret_decl(trf_1055)
static void C_fcall trf_1055(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1055(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1055(t0,t1);}

C_noret_decl(trf_1865)
static void C_fcall trf_1865(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1865(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1865(t0,t1);}

C_noret_decl(trf_1804)
static void C_fcall trf_1804(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1804(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1804(t0,t1);}

C_noret_decl(trf_1773)
static void C_fcall trf_1773(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1773(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1773(t0,t1);}

C_noret_decl(trf_1569)
static void C_fcall trf_1569(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1569(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1569(t0,t1,t2);}

C_noret_decl(trf_1614)
static void C_fcall trf_1614(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1614(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1614(t0,t1,t2);}

C_noret_decl(trf_1307)
static void C_fcall trf_1307(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1307(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1307(t0,t1,t2,t3);}

C_noret_decl(trf_1376)
static void C_fcall trf_1376(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1376(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1376(t0,t1);}

C_noret_decl(trf_1463)
static void C_fcall trf_1463(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1463(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1463(t0,t1);}

C_noret_decl(trf_1392)
static void C_fcall trf_1392(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1392(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1392(t0,t1);}

C_noret_decl(trf_1266)
static void C_fcall trf_1266(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1266(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_1266(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_1273)
static void C_fcall trf_1273(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1273(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1273(t0,t1);}

C_noret_decl(trf_1250)
static void C_fcall trf_1250(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1250(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1250(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1244)
static void C_fcall trf_1244(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1244(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1244(t0,t1,t2);}

C_noret_decl(trf_1238)
static void C_fcall trf_1238(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1238(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1238(t0,t1);}

C_noret_decl(trf_1009)
static void C_fcall trf_1009(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1009(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1009(t0,t1,t2);}

C_noret_decl(trf_1021)
static void C_fcall trf_1021(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1021(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1021(t0,t1);}

C_noret_decl(trf_936)
static void C_fcall trf_936(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_936(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_936(t0,t1,t2);}

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
C_lolevel_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_lolevel_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("lolevel_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1267)){
C_save(t1);
C_rereclaim2(1267*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,146);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[3]=C_h_intern(&lf[3],14,"\003syserror-hook");
lf[5]=C_h_intern(&lf[5],15,"\003syssignal-hook");
lf[6]=C_h_intern(&lf[6],11,"\000type-error");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000#bad argument type - not a structure");
lf[8]=C_h_intern(&lf[8],17,"\003syscheck-pointer");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000!bad argument type - not a pointer");
lf[10]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\004mmap\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000\002\376\001\000\000\011u32vector\376\003\000\000\002\376\001\000\000\010"
"s8vector\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376\001\000\000\011s32vector\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376\001\000\000\011f64ve"
"ctor\376\377\016");
lf[11]=C_h_intern(&lf[11],12,"move-memory!");
lf[12]=C_h_intern(&lf[12],9,"\003syserror");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\034need number of bytes to move");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000!number of bytes to move too large");
lf[15]=C_h_intern(&lf[15],15,"\003sysbytevector\077");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\033negative destination offset");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\026negative source offset");
lf[18]=C_h_intern(&lf[18],11,"object-copy");
lf[19]=C_h_intern(&lf[19],15,"\003sysmake-vector");
lf[20]=C_h_intern(&lf[20],8,"allocate");
lf[21]=C_h_intern(&lf[21],4,"free");
lf[22]=C_h_intern(&lf[22],8,"pointer\077");
lf[23]=C_h_intern(&lf[23],13,"pointer-like\077");
lf[24]=C_h_intern(&lf[24],16,"address->pointer");
lf[25]=C_h_intern(&lf[25],20,"\003sysaddress->pointer");
lf[26]=C_h_intern(&lf[26],17,"\003syscheck-integer");
lf[27]=C_h_intern(&lf[27],16,"pointer->address");
lf[28]=C_h_intern(&lf[28],20,"\003syspointer->address");
lf[29]=C_h_intern(&lf[29],17,"\003syscheck-special");
lf[30]=C_h_intern(&lf[30],12,"null-pointer");
lf[31]=C_h_intern(&lf[31],16,"\003sysnull-pointer");
lf[32]=C_h_intern(&lf[32],13,"null-pointer\077");
lf[33]=C_h_intern(&lf[33],15,"object->pointer");
lf[34]=C_h_intern(&lf[34],15,"pointer->object");
lf[35]=C_h_intern(&lf[35],9,"pointer=\077");
lf[36]=C_h_intern(&lf[36],8,"pointer+");
lf[37]=C_h_intern(&lf[37],14,"pointer-offset");
lf[38]=C_h_intern(&lf[38],13,"align-to-word");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000,bad argument type - not a pointer or integer");
lf[40]=C_h_intern(&lf[40],11,"tag-pointer");
lf[41]=C_h_intern(&lf[41],23,"\003sysmake-tagged-pointer");
lf[42]=C_h_intern(&lf[42],15,"tagged-pointer\077");
lf[43]=C_h_intern(&lf[43],11,"pointer-tag");
lf[44]=C_h_intern(&lf[44],13,"make-locative");
lf[45]=C_h_intern(&lf[45],17,"\003sysmake-locative");
lf[46]=C_h_intern(&lf[46],18,"make-weak-locative");
lf[47]=C_h_intern(&lf[47],13,"locative-set!");
lf[48]=C_h_intern(&lf[48],12,"locative-ref");
lf[49]=C_h_intern(&lf[49],16,"locative->object");
lf[50]=C_h_intern(&lf[50],9,"locative\077");
lf[51]=C_h_intern(&lf[51],15,"pointer-u8-set!");
lf[52]=C_h_intern(&lf[52],15,"pointer-s8-set!");
lf[53]=C_h_intern(&lf[53],16,"pointer-u16-set!");
lf[54]=C_h_intern(&lf[54],16,"pointer-s16-set!");
lf[55]=C_h_intern(&lf[55],16,"pointer-u32-set!");
lf[56]=C_h_intern(&lf[56],16,"pointer-s32-set!");
lf[57]=C_h_intern(&lf[57],16,"pointer-f32-set!");
lf[58]=C_h_intern(&lf[58],16,"pointer-f64-set!");
lf[59]=C_h_intern(&lf[59],14,"pointer-u8-ref");
lf[60]=C_h_intern(&lf[60],14,"pointer-s8-ref");
lf[61]=C_h_intern(&lf[61],15,"pointer-u16-ref");
lf[62]=C_h_intern(&lf[62],15,"pointer-s16-ref");
lf[63]=C_h_intern(&lf[63],15,"pointer-u32-ref");
lf[64]=C_h_intern(&lf[64],15,"pointer-s32-ref");
lf[65]=C_h_intern(&lf[65],15,"pointer-f32-ref");
lf[66]=C_h_intern(&lf[66],15,"pointer-f64-ref");
lf[67]=C_h_intern(&lf[67],8,"extended");
lf[69]=C_h_intern(&lf[69],16,"extend-procedure");
lf[70]=C_h_intern(&lf[70],19,"\003sysdecorate-lambda");
lf[71]=C_h_intern(&lf[71],17,"\003syscheck-closure");
lf[72]=C_h_intern(&lf[72],19,"extended-procedure\077");
lf[73]=C_h_intern(&lf[73],21,"\003syslambda-decoration");
lf[74]=C_h_intern(&lf[74],14,"procedure-data");
lf[75]=C_h_intern(&lf[75],19,"set-procedure-data!");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000-bad argument type - not an extended procedure");
lf[77]=C_h_intern(&lf[77],10,"block-set!");
lf[78]=C_h_intern(&lf[78],14,"\003sysblock-set!");
lf[79]=C_h_intern(&lf[79],9,"block-ref");
lf[80]=C_h_intern(&lf[80],15,"number-of-slots");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000,bad argument type - not a vector-like object");
lf[82]=C_h_intern(&lf[82],15,"number-of-bytes");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\0002cannot compute number of bytes of immediate object");
lf[84]=C_h_intern(&lf[84],20,"make-record-instance");
lf[85]=C_h_intern(&lf[85],18,"\003sysmake-structure");
lf[86]=C_h_intern(&lf[86],16,"record-instance\077");
lf[87]=C_h_intern(&lf[87],20,"record-instance-type");
lf[88]=C_h_intern(&lf[88],22,"record-instance-length");
lf[89]=C_h_intern(&lf[89],25,"record-instance-slot-set!");
lf[90]=C_h_intern(&lf[90],15,"\003syscheck-range");
lf[91]=C_h_intern(&lf[91],20,"record-instance-slot");
lf[92]=C_h_intern(&lf[92],14,"record->vector");
lf[93]=C_h_intern(&lf[93],15,"object-evicted\077");
lf[94]=C_h_intern(&lf[94],12,"object-evict");
lf[95]=C_h_intern(&lf[95],15,"hash-table-set!");
lf[96]=C_h_intern(&lf[96],19,"\003sysundefined-value");
lf[97]=C_h_intern(&lf[97],22,"hash-table-ref/default");
lf[98]=C_h_intern(&lf[98],15,"make-hash-table");
lf[99]=C_h_intern(&lf[99],3,"eq\077");
lf[100]=C_h_intern(&lf[100],24,"object-evict-to-location");
lf[101]=C_h_intern(&lf[101],24,"\003sysset-pointer-address!");
lf[102]=C_h_intern(&lf[102],6,"signal");
lf[103]=C_h_intern(&lf[103],24,"make-composite-condition");
lf[104]=C_h_intern(&lf[104],23,"make-property-condition");
lf[105]=C_h_intern(&lf[105],5,"evict");
lf[106]=C_h_intern(&lf[106],5,"limit");
lf[107]=C_h_intern(&lf[107],3,"exn");
lf[108]=C_h_intern(&lf[108],8,"location");
lf[109]=C_h_intern(&lf[109],7,"message");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000$cannot evict object - limit exceeded");
lf[111]=C_h_intern(&lf[111],9,"arguments");
lf[112]=C_h_intern(&lf[112],14,"object-release");
lf[113]=C_h_intern(&lf[113],11,"object-size");
lf[114]=C_h_intern(&lf[114],14,"object-unevict");
lf[115]=C_h_intern(&lf[115],15,"\003sysmake-string");
lf[116]=C_h_intern(&lf[116],14,"object-become!");
lf[117]=C_h_intern(&lf[117],11,"\003sysbecome!");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000:bad argument type - not an a-list of non-immediate objects");
lf[119]=C_h_intern(&lf[119],16,"mutate-procedure");
lf[120]=C_h_intern(&lf[120],5,"unset");
lf[121]=C_h_intern(&lf[121],19,"make-pointer-vector");
lf[122]=C_h_intern(&lf[122],14,"pointer-vector");
lf[124]=C_h_intern(&lf[124],13,"\003sysmake-blob");
lf[125]=C_h_intern(&lf[125],15,"pointer-vector\077");
lf[126]=C_h_intern(&lf[126],20,"pointer-vector-fill!");
lf[127]=C_h_intern(&lf[127],19,"pointer-vector-set!");
lf[128]=C_h_intern(&lf[128],18,"pointer-vector-ref");
lf[129]=C_h_intern(&lf[129],21,"pointer-vector-length");
lf[130]=C_h_intern(&lf[130],18,"getter-with-setter");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\031(pointer-vector-ref pv i)");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\032(record-instance-slot x i)");
lf[133]=C_h_intern(&lf[133],13,"\003sysblock-ref");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\017(block-ref x i)");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-f64-ref p)");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-f32-ref p)");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-s32-ref p)");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-u32-ref p)");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-s16-ref p)");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-u16-ref p)");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\022(pointer-s8-ref p)");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000\022(pointer-u8-ref p)");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\022(locative-ref loc)");
lf[144]=C_h_intern(&lf[144],17,"register-feature!");
lf[145]=C_h_intern(&lf[145],7,"lolevel");
C_register_lf2(lf,146,create_ptable());
t2=C_mutate(&lf[0] /* (set! c287 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_931,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_srfi_2d69_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k929 */
static void C_ccall f_931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_931,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_934,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:53: register-feature! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[144]+1)))(3,*((C_word*)lf[144]+1),t2,lf[145]);}

/* k932 in k929 */
static void C_ccall f_934(C_word c,C_word t0,C_word t1){
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
C_word ab[76],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_934,2,t0,t1);}
t2=C_mutate(&lf[2] /* (set! ##sys#check-block ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_936,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[4] /* (set! ##sys#check-generic-structure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1009,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[8]+1 /* (set! ##sys#check-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1070,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=lf[10];
t6=C_mutate((C_word*)lf[11]+1 /* (set! move-memory! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1211,a[2]=t5,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t7=C_mutate((C_word*)lf[18]+1 /* (set! object-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1563,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[20]+1 /* (set! allocate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1644,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[21]+1 /* (set! free ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1651,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[22]+1 /* (set! pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1661,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[23]+1 /* (set! pointer-like? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1669,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[24]+1 /* (set! address->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1680,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[27]+1 /* (set! pointer->address ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1689,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[30]+1 /* (set! null-pointer ...) */,*((C_word*)lf[31]+1));
t15=C_mutate((C_word*)lf[32]+1 /* (set! null-pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1699,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[33]+1 /* (set! object->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1705,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[34]+1 /* (set! pointer->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1716,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[35]+1 /* (set! pointer=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1722,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[36]+1 /* (set! pointer+ ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1731,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[37]+1 /* (set! pointer-offset ...) */,*((C_word*)lf[36]+1));
t21=C_mutate((C_word*)lf[38]+1 /* (set! align-to-word ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1752,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[40]+1 /* (set! tag-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1789,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[42]+1 /* (set! tagged-pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1809,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[43]+1 /* (set! pointer-tag ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1853,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[44]+1 /* (set! make-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1876,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[46]+1 /* (set! make-weak-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1905,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[47]+1 /* (set! locative-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1934,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1939,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t29=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)C_locative_ref,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:312: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[130]+1)))(5,*((C_word*)lf[130]+1),t28,t29,*((C_word*)lf[47]+1),lf[143]);}

/* k1937 in k932 in k929 */
static void C_ccall f_1939(C_word c,C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1939,2,t0,t1);}
t2=C_mutate((C_word*)lf[48]+1 /* (set! locative-ref ...) */,t1);
t3=C_mutate((C_word*)lf[49]+1 /* (set! locative->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1941,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[50]+1 /* (set! locative? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1944,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[51]+1 /* (set! pointer-u8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1950,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[52]+1 /* (set! pointer-s8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1953,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[53]+1 /* (set! pointer-u16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1956,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[54]+1 /* (set! pointer-s16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1959,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[55]+1 /* (set! pointer-u32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1962,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[56]+1 /* (set! pointer-s32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1965,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[57]+1 /* (set! pointer-f32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1968,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[58]+1 /* (set! pointer-f64-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1971,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1976,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3245,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:333: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[130]+1)))(5,*((C_word*)lf[130]+1),t13,t14,*((C_word*)lf[51]+1),lf[142]);}

/* a3244 in k1937 in k932 in k929 */
static void C_ccall f_3245(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3245,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_pointer_u8_ref(t2));}

/* k1974 in k1937 in k932 in k929 */
static void C_ccall f_1976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1976,2,t0,t1);}
t2=C_mutate((C_word*)lf[59]+1 /* (set! pointer-u8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1980,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3242,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:339: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[130]+1)))(5,*((C_word*)lf[130]+1),t3,t4,*((C_word*)lf[52]+1),lf[141]);}

/* a3241 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3242(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3242,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_pointer_s8_ref(t2));}

/* k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_1980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1980,2,t0,t1);}
t2=C_mutate((C_word*)lf[60]+1 /* (set! pointer-s8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1984,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3239,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:345: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[130]+1)))(5,*((C_word*)lf[130]+1),t3,t4,*((C_word*)lf[53]+1),lf[140]);}

/* a3238 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3239(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3239,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_pointer_u16_ref(t2));}

/* k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_1984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1984,2,t0,t1);}
t2=C_mutate((C_word*)lf[61]+1 /* (set! pointer-u16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1988,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3236,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:351: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[130]+1)))(5,*((C_word*)lf[130]+1),t3,t4,*((C_word*)lf[54]+1),lf[139]);}

/* a3235 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3236(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3236,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_pointer_s16_ref(t2));}

/* k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_1988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1988,2,t0,t1);}
t2=C_mutate((C_word*)lf[62]+1 /* (set! pointer-s16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1992,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3233,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:357: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[130]+1)))(5,*((C_word*)lf[130]+1),t3,t4,*((C_word*)lf[55]+1),lf[138]);}

/* a3232 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3233(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3233,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_u_i_pointer_u32_ref(&a,1,t2));}

/* k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_1992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1992,2,t0,t1);}
t2=C_mutate((C_word*)lf[63]+1 /* (set! pointer-u32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1996,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3230,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:363: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[130]+1)))(5,*((C_word*)lf[130]+1),t3,t4,*((C_word*)lf[56]+1),lf[137]);}

/* a3229 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3230(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3230,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_u_i_pointer_s32_ref(&a,1,t2));}

/* k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_1996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1996,2,t0,t1);}
t2=C_mutate((C_word*)lf[64]+1 /* (set! pointer-s32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2000,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3227,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:369: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[130]+1)))(5,*((C_word*)lf[130]+1),t3,t4,*((C_word*)lf[57]+1),lf[136]);}

/* a3226 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3227(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3227,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_u_i_pointer_f32_ref(&a,1,t2));}

/* k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2000,2,t0,t1);}
t2=C_mutate((C_word*)lf[65]+1 /* (set! pointer-f32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2004,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3224,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:375: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[130]+1)))(5,*((C_word*)lf[130]+1),t3,t4,*((C_word*)lf[58]+1),lf[135]);}

/* a3223 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3224(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3224,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_u_i_pointer_f64_ref(&a,1,t2));}

/* k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2004(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2004,2,t0,t1);}
t2=C_mutate((C_word*)lf[66]+1 /* (set! pointer-f64-ref ...) */,t1);
t3=C_a_i_vector1(&a,1,lf[67]);
t4=C_mutate(&lf[68] /* (set! xproc-tag ...) */,t3);
t5=C_mutate((C_word*)lf[69]+1 /* (set! extend-procedure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2010,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[72]+1 /* (set! extended-procedure? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2045,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[74]+1 /* (set! procedure-data ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2081,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[75]+1 /* (set! set-procedure-data! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2120,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[77]+1 /* (set! block-set! ...) */,*((C_word*)lf[78]+1));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2138,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:421: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[130]+1)))(5,*((C_word*)lf[130]+1),t10,*((C_word*)lf[133]+1),*((C_word*)lf[78]+1),lf[134]);}

/* k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2138(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2138,2,t0,t1);}
t2=C_mutate((C_word*)lf[79]+1 /* (set! block-ref ...) */,t1);
t3=C_mutate((C_word*)lf[80]+1 /* (set! number-of-slots ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2140,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[82]+1 /* (set! number-of-bytes ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2149,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[84]+1 /* (set! make-record-instance ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2171,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[86]+1 /* (set! record-instance? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2180,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[87]+1 /* (set! record-instance-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2229,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[88]+1 /* (set! record-instance-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2238,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[89]+1 /* (set! record-instance-slot-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2251,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2277,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3200,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:469: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[130]+1)))(5,*((C_word*)lf[130]+1),t10,t11,*((C_word*)lf[89]+1),lf[132]);}

/* a3199 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3200(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3200,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3204,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:471: ##sys#check-generic-structure */
f_1009(t4,t2,C_a_i_list(&a,1,lf[91]));}

/* k3202 in a3199 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3204,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[2]);
t4=C_fixnum_difference(t3,C_fix(1));
/* lolevel.scm:472: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[90]+1)))(6,*((C_word*)lf[90]+1),t2,((C_word*)t0)[4],C_fix(0),t4,lf[91]);}

/* k3205 in k3202 in a3199 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(((C_word*)t0)[2],t2));}

/* k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2277(C_word c,C_word t0,C_word t1){
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
C_word ab[55],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2277,2,t0,t1);}
t2=C_mutate((C_word*)lf[91]+1 /* (set! record-instance-slot ...) */,t1);
t3=C_mutate((C_word*)lf[92]+1 /* (set! record->vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2279,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[93]+1 /* (set! object-evicted? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2317,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[94]+1 /* (set! object-evict ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2320,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[100]+1 /* (set! object-evict-to-location ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2438,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[112]+1 /* (set! object-release ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2602,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[113]+1 /* (set! object-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2694,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[114]+1 /* (set! object-unevict ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2778,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[116]+1 /* (set! object-become! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2907,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[119]+1 /* (set! mutate-procedure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2916,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t12=C_a_i_list1(&a,1,lf[120]);
t13=C_mutate((C_word*)lf[121]+1 /* (set! make-pointer-vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2950,a[2]=t12,a[3]=((C_word)li79),tmp=(C_word)a,a+=4,tmp));
t14=C_mutate((C_word*)lf[125]+1 /* (set! pointer-vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3024,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[122]+1 /* (set! pointer-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3030,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[126]+1 /* (set! pointer-vector-fill! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3074,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate(&lf[123] /* (set! pv-buf-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3121,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[127]+1 /* (set! pointer-vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3135,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3166,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3177,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:685: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[130]+1)))(5,*((C_word*)lf[130]+1),t19,t20,*((C_word*)lf[127]+1),lf[131]);}

/* a3176 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3177,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[122],lf[128]);
t5=C_i_check_exact_2(t3,lf[128]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3187,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(1));
/* lolevel.scm:689: ##sys#check-range */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[90]+1)))(5,*((C_word*)lf[90]+1),t6,t3,C_fix(0),t7);}

/* k3185 in a3176 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3187,2,t0,t1);}
t2=C_slot(((C_word*)t0)[4],C_fix(2));
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=t3;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,stub810(t5,t2,t6));}

/* k3164 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3166,2,t0,t1);}
t2=C_mutate((C_word*)lf[128]+1 /* (set! pointer-vector-ref ...) */,t1);
t3=C_mutate((C_word*)lf[129]+1 /* (set! pointer-vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3168,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_3168 in k3164 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3168(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3168,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[122],lf[129]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f_3135 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3135(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3135,5,t0,t1,t2,t3,t4);}
t5=C_i_check_structure_2(t2,lf[122],lf[128]);
t6=C_i_check_exact_2(t3,lf[128]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3145,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=C_slot(t2,C_fix(1));
/* lolevel.scm:680: ##sys#check-range */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[90]+1)))(5,*((C_word*)lf[90]+1),t7,t3,C_fix(0),t8);}

/* k3143 */
static void C_ccall f_3145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3145,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3148,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
/* lolevel.scm:681: ##sys#check-pointer */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],lf[127]);}
else{
t3=C_slot(((C_word*)t0)[5],C_fix(2));
/* lolevel.scm:682: pv-buf-set! */
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_3121(t3,((C_word*)t0)[3],((C_word*)t0)[2]));}}

/* k3146 in k3143 */
static void C_ccall f_3148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(2));
/* lolevel.scm:682: pv-buf-set! */
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_3121(t2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* pv-buf-set! in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static C_word C_fcall f_3121(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_check;
t4=C_i_foreign_fixnum_argumentp(t2);
if(C_truep(t3)){
t5=C_i_foreign_pointer_argumentp(t3);
return(stub819(C_SCHEME_UNDEFINED,t1,t4,t5));}
else{
return(stub819(C_SCHEME_UNDEFINED,t1,t4,C_SCHEME_FALSE));}}

/* f_3074 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3074(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3074,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[122],lf[126]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3081,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* lolevel.scm:662: ##sys#check-pointer */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[126]);}
else{
t6=t5;
f_3081(2,t6,C_SCHEME_UNDEFINED);}}

/* k3079 */
static void C_ccall f_3081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3081,2,t0,t1);}
t2=C_slot(((C_word*)t0)[4],C_fix(2));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3092,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,a[5]=((C_word)li83),tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_3092(t4,C_fix(0)));}

/* doloop800 in k3079 */
static C_word C_fcall f_3092(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
t2=C_SCHEME_UNDEFINED;
return(t2);}
else{
t2=f_3121(((C_word*)t0)[3],t1,((C_word*)t0)[2]);
t3=C_fixnum_plus(t1,C_fix(1));
t6=t3;
t1=t6;
goto loop;}}

/* f_3030 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3030(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3030r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3030r(t0,t1,t2);}}

static void C_ccall f_3030r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t3=C_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3037,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:651: make-pointer-vector */
t5=*((C_word*)lf[121]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k3035 */
static void C_ccall f_3037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3037,2,t0,t1);}
t2=C_slot(t1,C_fix(2));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3045,a[2]=t4,a[3]=t2,a[4]=t1,a[5]=((C_word)li81),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3045(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop787 in k3035 */
static void C_fcall f_3045(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3045,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=((C_word*)t0)[4];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3058,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t4,a[6]=t3,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm:657: ##sys#check-pointer */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,lf[122]);}}

/* k3056 in doloop787 in k3035 */
static void C_ccall f_3058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=f_3121(((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[4]);
t4=C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_3045(t5,((C_word*)t0)[2],t3,t4);}

/* f_3024 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_3024(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3024,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[122]));}

/* f_2950 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2950(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_2950r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2950r(t0,t1,t2,t3);}}

static void C_ccall f_2950r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2954,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_2954(2,t5,((C_word*)t0)[2]);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_2954(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2952 */
static void C_ccall f_2954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2954,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[4],lf[121]);
t3=C_fudge(C_fix(7));
t4=C_fixnum_times(((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2966,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:637: ##sys#make-blob */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[124]+1)))(3,*((C_word*)lf[124]+1),t5,t4);}

/* k2964 in k2952 */
static void C_ccall f_2966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2966,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[5],((C_word*)t0)[4]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record3(&a,3,lf[122],((C_word*)t0)[2],t1));}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2978,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* lolevel.scm:640: ##sys#check-pointer */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],lf[121]);}
else{
t4=t3;
f_2978(2,t4,C_SCHEME_UNDEFINED);}}}

/* k2976 in k2964 in k2952 */
static void C_ccall f_2978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2983,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li78),tmp=(C_word)a,a+=6,tmp);
t3=f_2983(t2,C_fix(0));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record3(&a,3,lf[122],((C_word*)t0)[5],((C_word*)t0)[4]));}

/* doloop772 in k2976 in k2964 in k2952 */
static C_word C_fcall f_2983(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
t2=C_SCHEME_UNDEFINED;
return(t2);}
else{
t2=f_3121(((C_word*)t0)[3],t1,((C_word*)t0)[2]);
t3=C_fixnum_plus(t1,C_fix(1));
t6=t3;
t1=t6;
goto loop;}}

/* f_2916 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2916(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2916,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2920,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:620: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[71]+1)))(4,*((C_word*)lf[71]+1),t4,t2,lf[119]);}

/* k2918 */
static void C_ccall f_2920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2920,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2923,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:621: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[71]+1)))(4,*((C_word*)lf[71]+1),t2,((C_word*)t0)[2],lf[119]);}

/* k2921 in k2918 */
static void C_ccall f_2923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2923,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[4]);
t3=C_words(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:624: ##sys#make-vector */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t4,t3);}

/* k2928 in k2921 in k2918 */
static void C_ccall f_2930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2930,2,t0,t1);}
t2=C_copy_block(((C_word*)t0)[4],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2933,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2945,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:625: proc */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,t2);}

/* k2943 in k2928 in k2921 in k2918 */
static void C_ccall f_2945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2945,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=C_a_i_list1(&a,1,t2);
/* lolevel.scm:625: ##sys#become! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[117]+1)))(3,*((C_word*)lf[117]+1),((C_word*)t0)[2],t3);}

/* k2931 in k2928 in k2921 in k2918 */
static void C_ccall f_2933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2907 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2907(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_2907,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2911,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_i_check_list_2(t4,lf[116]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_964,a[2]=t4,a[3]=t7,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_964(t9,t3,t4);}

/* loop */
static void C_fcall f_964(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_964,NULL,3,t0,t1,t2);}
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=C_i_check_pair_2(t4,lf[116]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_986,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_i_car(t4);
/* lolevel.scm:94: ##sys#check-block */
f_936(t6,t7,C_a_i_list(&a,1,lf[116]));}
else{
/* lolevel.scm:98: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(6,*((C_word*)lf[5]+1),t1,lf[6],lf[116],lf[118],((C_word*)t0)[2]);}}}

/* k984 in loop */
static void C_ccall f_986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_986,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_989,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* lolevel.scm:95: ##sys#check-block */
f_936(t2,t3,C_a_i_list(&a,1,lf[116]));}

/* k987 in k984 in loop */
static void C_ccall f_989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[4]);
/* lolevel.scm:96: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_964(t3,((C_word*)t0)[2],t2);}

/* k2909 */
static void C_ccall f_2911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:617: ##sys#become! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[117]+1)))(3,*((C_word*)lf[117]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_2778 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2778(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2778r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2778r(t0,t1,t2,t3);}}

static void C_ccall f_2778r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2782,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_2782(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_2782(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2780 */
static void C_ccall f_2782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:588: make-hash-table */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[98]+1)))(3,*((C_word*)lf[98]+1),t2,*((C_word*)lf[99]+1));}

/* k2783 in k2780 */
static void C_ccall f_2785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2785,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2790,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2790(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* copy in k2783 in k2780 */
static void C_fcall f_2790(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2790,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_permanentp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:592: hash-table-ref/default */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(5,*((C_word*)lf[97]+1),t3,((C_word*)t0)[3],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2804 in copy in k2783 in k2780 */
static void C_ccall f_2806(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2806,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_byteblockp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2819,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[5]);
/* lolevel.scm:595: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[115]+1)))(3,*((C_word*)lf[115]+1),t2,t3);}
else{
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2835,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
/* lolevel.scm:600: ##sys#intern-symbol */
C_string_to_symbol(3,0,t2,t3);}
else{
t2=C_block_size(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2849,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:605: ##sys#make-vector */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t3,t2);}}}}

/* k2847 in k2804 in copy in k2783 in k2780 */
static void C_ccall f_2849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2849,2,t0,t1);}
t2=C_copy_block(((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2852,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:606: hash-table-set! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(5,*((C_word*)lf[95]+1),t3,((C_word*)t0)[2],((C_word*)t0)[6],t2);}

/* k2850 in k2847 in k2804 in copy in k2783 in k2780 */
static void C_ccall f_2852(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2852,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2855,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(C_specialp(((C_word*)t0)[4]))?C_fix(1):C_fix(0));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2861,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word)li72),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2861(t7,t2,t3);}

/* doloop734 in k2850 in k2847 in k2804 in copy in k2783 in k2780 */
static void C_fcall f_2861(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2861,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2882,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
/* lolevel.scm:609: copy */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2790(t5,t3,t4);}}

/* k2880 in doloop734 in k2850 in k2847 in k2804 in copy in k2783 in k2780 */
static void C_ccall f_2882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2861(t4,((C_word*)t0)[2],t3);}

/* k2853 in k2850 in k2847 in k2804 in copy in k2783 in k2780 */
static void C_ccall f_2855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2833 in k2804 in copy in k2783 in k2780 */
static void C_ccall f_2835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2835,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2838,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:601: hash-table-set! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(5,*((C_word*)lf[95]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2836 in k2833 in k2804 in copy in k2783 in k2780 */
static void C_ccall f_2838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2817 in k2804 in copy in k2783 in k2780 */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2819,2,t0,t1);}
t2=C_copy_block(((C_word*)t0)[4],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2822,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:596: hash-table-set! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(5,*((C_word*)lf[95]+1),t3,((C_word*)t0)[2],((C_word*)t0)[4],t2);}

/* k2820 in k2817 in k2804 in copy in k2783 in k2780 */
static void C_ccall f_2822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2694 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2694(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2694,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2698,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:571: make-hash-table */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[98]+1)))(3,*((C_word*)lf[98]+1),t3,*((C_word*)lf[99]+1));}

/* k2696 */
static void C_ccall f_2698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2698,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2703,a[2]=t1,a[3]=t3,a[4]=((C_word)li70),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2703(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* evict in k2696 */
static void C_fcall f_2703(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2703,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:574: hash-table-ref/default */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(5,*((C_word*)lf[97]+1),t3,((C_word*)t0)[2],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fix(0));}}

/* k2714 in evict in k2696 */
static void C_ccall f_2716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2716,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=C_block_size(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2773,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
/* lolevel.scm:578: align-to-word */
t5=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t5=C_bytes(t2);
t6=t3;
f_2722(t6,C_fixnum_plus(t5,C_bytes(C_fix(1))));}}}

/* k2771 in k2714 in evict in k2696 */
static void C_ccall f_2773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2722(t2,C_fixnum_plus(t1,C_bytes(C_fix(1))));}

/* k2720 in k2714 in evict in k2696 */
static void C_fcall f_2722(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2722,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2725,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:580: hash-table-set! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(5,*((C_word*)lf[95]+1),t4,((C_word*)t0)[2],((C_word*)t0)[5],C_SCHEME_TRUE);}

/* k2723 in k2720 in k2714 in evict in k2696 */
static void C_ccall f_2725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2728,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[5])[1]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2735,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t4=C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2735(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2735(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* k2733 in k2723 in k2720 in k2714 in evict in k2696 */
static void C_fcall f_2735(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2735,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2737,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li69),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2737(t5,((C_word*)t0)[2],t1);}

/* doloop694 in k2733 in k2723 in k2720 in k2714 in evict in k2696 */
static void C_fcall f_2737(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2737,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2759,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm:584: evict */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2703(t5,t3,t4);}}

/* k2757 in doloop694 in k2733 in k2723 in k2720 in k2714 in evict in k2696 */
static void C_ccall f_2759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_fixnum_plus(t1,((C_word*)((C_word*)t0)[5])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,t2);
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_2737(t5,((C_word*)t0)[2],t4);}

/* k2726 in k2723 in k2720 in k2714 in evict in k2696 */
static void C_ccall f_2728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* f_2602 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2602(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3r,(void*)f_2602r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2602r(t0,t1,t2,t3);}}

static void C_ccall f_2602r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(13);
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_i_car(t3):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2684,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2611,a[2]=t9,a[3]=t5,a[4]=t7,a[5]=((C_word)li67),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2611(t11,t1,t2);}

/* release */
static void C_fcall f_2611(C_word t0,C_word t1,C_word t2){
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
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2611,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_permanentp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)((C_word*)t0)[4])[1]))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_block_size(t2);
t4=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2640,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_byteblockp(t2))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f3591,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:568: ##sys#address->pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(3,*((C_word*)lf[25]+1),t7,C_block_address(&a,1,t2));}
else{
t7=(C_truep(C_specialp(t2))?C_fix(1):C_fix(0));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2656,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t9,a[5]=t3,a[6]=((C_word)li66),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_2656(t11,t6,t7);}}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* doloop676 in release */
static void C_fcall f_2656(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2656,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2666,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm:567: release */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2611(t5,t3,t4);}}

/* k2664 in doloop676 in release */
static void C_ccall f_2666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2656(t3,((C_word*)t0)[2],t2);}

/* f3591 in release */
static void C_ccall f3591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:568: free */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2638 in release */
static void C_ccall f_2640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2640,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2647,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:568: ##sys#address->pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(3,*((C_word*)lf[25]+1),t2,C_block_address(&a,1,((C_word*)t0)[2]));}

/* k2645 in k2638 in release */
static void C_ccall f_2647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:568: free */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* f_2684 */
static void C_ccall f_2684(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2684,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub665(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub665(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* f_2438 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2438(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2438r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2438r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2438r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2442,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:515: ##sys#check-special */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(4,*((C_word*)lf[29]+1),t5,t3,lf[100]);}

/* k2440 */
static void C_ccall f_2442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2442,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2445,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_check_exact_2(t3,lf[100]);
t5=t2;
f_2445(t5,t3);}
else{
t3=t2;
f_2445(t3,C_SCHEME_FALSE);}}

/* k2443 in k2440 */
static void C_fcall f_2445(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2445,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2448,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2591,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:520: ##sys#pointer->address */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(3,*((C_word*)lf[28]+1),t5,((C_word*)t0)[2]);}

/* k2589 in k2443 in k2440 */
static void C_ccall f_2591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:520: ##sys#address->pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(3,*((C_word*)lf[25]+1),((C_word*)t0)[2],t1);}

/* k2446 in k2443 in k2440 */
static void C_ccall f_2448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:521: make-hash-table */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[98]+1)))(3,*((C_word*)lf[98]+1),t2,*((C_word*)lf[99]+1));}

/* k2449 in k2446 in k2443 in k2440 */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2451,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2454,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2459,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word)li63),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2459(t6,t2,((C_word*)t0)[2]);}

/* evict in k2449 in k2446 in k2443 in k2440 */
static void C_fcall f_2459(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2459,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm:525: hash-table-ref/default */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(5,*((C_word*)lf[97]+1),t3,((C_word*)t0)[3],t2,C_SCHEME_FALSE);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2467 in evict in k2449 in k2446 in k2443 in k2440 */
static void C_ccall f_2469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2469,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_block_size(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2478,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2584,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[6]))){
/* lolevel.scm:529: align-to-word */
t5=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t5=C_bytes(t2);
t6=t3;
f_2478(t6,C_fixnum_plus(t5,C_bytes(C_fix(1))));}}}

/* k2582 in k2467 in evict in k2449 in k2446 in k2443 in k2440 */
static void C_ccall f_2584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2478(t2,C_fixnum_plus(t1,C_bytes(C_fix(1))));}

/* k2476 in k2467 in evict in k2449 in k2446 in k2443 in k2440 */
static void C_fcall f_2478(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2478,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2481,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_fixnum_difference(((C_word*)((C_word*)t0)[2])[1],t1);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2568,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2572,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_a_i_list2(&a,2,((C_word*)t0)[8],((C_word*)((C_word*)t0)[2])[1]);
/* lolevel.scm:536: make-property-condition */
((C_proc9)C_fast_retrieve_proc(*((C_word*)lf[104]+1)))(9,*((C_word*)lf[104]+1),t6,lf[107],lf[108],lf[100],lf[109],lf[110],lf[111],t7);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t2;
f_2481(2,t6,t5);}}
else{
t3=t2;
f_2481(2,t3,C_SCHEME_UNDEFINED);}}

/* k2570 in k2476 in k2467 in evict in k2449 in k2446 in k2443 in k2440 */
static void C_ccall f_2572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2572,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2576,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:540: make-property-condition */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[104]+1)))(5,*((C_word*)lf[104]+1),t2,lf[105],lf[106],((C_word*)((C_word*)t0)[2])[1]);}

/* k2574 in k2570 in k2476 in k2467 in evict in k2449 in k2446 in k2443 in k2440 */
static void C_ccall f_2576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:535: make-composite-condition */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[103]+1)))(4,*((C_word*)lf[103]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2566 in k2476 in k2467 in evict in k2449 in k2446 in k2443 in k2440 */
static void C_ccall f_2568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:534: signal */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[102]+1)))(3,*((C_word*)lf[102]+1),((C_word*)t0)[2],t1);}

/* k2479 in k2476 in k2467 in evict in k2449 in k2446 in k2443 in k2440 */
static void C_ccall f_2481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2481,2,t0,t1);}
t2=C_evict_block(((C_word*)t0)[8],((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2484,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[8]))){
t4=*((C_word*)lf[96]+1);
t5=t3;
f_2484(t5,C_i_set_i_slot(t2,C_fix(0),t4));}
else{
t4=t3;
f_2484(t4,C_SCHEME_UNDEFINED);}}

/* k2482 in k2479 in k2476 in k2467 in evict in k2449 in k2446 in k2443 in k2440 */
static void C_fcall f_2484(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2484,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2487,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:543: ##sys#pointer->address */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(3,*((C_word*)lf[28]+1),t3,((C_word*)t0)[2]);}

/* k2539 in k2482 in k2479 in k2476 in k2467 in evict in k2449 in k2446 in k2443 in k2440 */
static void C_ccall f_2541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2541,2,t0,t1);}
t2=C_a_i_plus(&a,2,t1,((C_word*)t0)[4]);
/* lolevel.scm:543: ##sys#set-pointer-address! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[101]+1)))(4,*((C_word*)lf[101]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k2485 in k2482 in k2479 in k2476 in k2467 in evict in k2449 in k2446 in k2443 in k2440 */
static void C_ccall f_2487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2487,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2490,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:544: hash-table-set! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(5,*((C_word*)lf[95]+1),t2,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2488 in k2485 in k2482 in k2479 in k2476 in k2467 in evict in k2449 in k2446 in k2443 in k2440 */
static void C_ccall f_2490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2490,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2493,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2500,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t4=C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2500(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2500(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* k2498 in k2488 in k2485 in k2482 in k2479 in k2476 in k2467 in evict in k2449 in k2446 in k2443 in k2440 */
static void C_fcall f_2500(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2500,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2502,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li62),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2502(t5,((C_word*)t0)[2],t1);}

/* doloop644 in k2498 in k2488 in k2485 in k2482 in k2479 in k2476 in k2467 in evict in k2449 in k2446 in k2443 in k2440 */
static void C_fcall f_2502(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2502,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2523,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm:548: evict */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2459(t5,t3,t4);}}

/* k2521 in doloop644 in k2498 in k2488 in k2485 in k2482 in k2479 in k2476 in k2467 in evict in k2449 in k2446 in k2443 in k2440 */
static void C_ccall f_2523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_set_i_slot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2502(t4,((C_word*)t0)[2],t3);}

/* k2491 in k2488 in k2485 in k2482 in k2479 in k2476 in k2467 in evict in k2449 in k2446 in k2443 in k2440 */
static void C_ccall f_2493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2452 in k2449 in k2446 in k2443 in k2440 */
static void C_ccall f_2454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:550: values */
C_values(4,0,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* f_2320 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2320(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2320r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2320r(t0,t1,t2,t3);}}

static void C_ccall f_2320r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_i_car(t3):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2431,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2327,a[2]=t2,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:496: make-hash-table */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[98]+1)))(3,*((C_word*)lf[98]+1),t6,*((C_word*)lf[99]+1));}

/* k2325 */
static void C_ccall f_2327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:497: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[71]+1)))(4,*((C_word*)lf[71]+1),t2,((C_word*)t0)[4],lf[94]);}

/* k2328 in k2325 */
static void C_ccall f_2330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2330,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2335,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word)li60),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2335(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* evict in k2328 in k2325 */
static void C_fcall f_2335(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2335,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:500: hash-table-ref/default */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(5,*((C_word*)lf[97]+1),t3,((C_word*)t0)[3],t2,C_SCHEME_FALSE);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2343 in evict in k2328 in k2325 */
static void C_ccall f_2345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2345,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_block_size(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[5]))){
/* lolevel.scm:503: align-to-word */
t4=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
t4=t3;
f_2354(2,t4,C_bytes(t2));}}}

/* k2352 in k2343 in evict in k2328 in k2325 */
static void C_ccall f_2354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2358,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_fixnum_plus(t1,C_bytes(C_fix(1)));
/* lolevel.scm:504: allocator */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t2,t3);}

/* k2356 in k2352 in k2343 in evict in k2328 in k2325 */
static void C_ccall f_2358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2358,2,t0,t1);}
t2=C_evict_block(((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[6]))){
t4=*((C_word*)lf[96]+1);
t5=t3;
f_2361(t5,C_i_set_i_slot(t2,C_fix(0),t4));}
else{
t4=t3;
f_2361(t4,C_SCHEME_UNDEFINED);}}

/* k2359 in k2356 in k2352 in k2343 in evict in k2328 in k2325 */
static void C_fcall f_2361(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2361,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2364,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:506: hash-table-set! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(5,*((C_word*)lf[95]+1),t2,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2362 in k2359 in k2356 in k2352 in k2343 in evict in k2328 in k2325 */
static void C_ccall f_2364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2364,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2367,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2374,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t4=C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2374(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2374(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* k2372 in k2362 in k2359 in k2356 in k2352 in k2343 in evict in k2328 in k2325 */
static void C_fcall f_2374(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2374,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2376,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li59),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2376(t5,((C_word*)t0)[2],t1);}

/* doloop608 in k2372 in k2362 in k2359 in k2356 in k2352 in k2343 in evict in k2328 in k2325 */
static void C_fcall f_2376(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2376,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2397,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm:511: evict */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2335(t5,t3,t4);}}

/* k2395 in doloop608 in k2372 in k2362 in k2359 in k2356 in k2352 in k2343 in evict in k2328 in k2325 */
static void C_ccall f_2397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_set_i_slot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2376(t4,((C_word*)t0)[2],t3);}

/* k2365 in k2362 in k2359 in k2356 in k2352 in k2343 in evict in k2328 in k2325 */
static void C_ccall f_2367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2431 */
static void C_ccall f_2431(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2431,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub593(t3,t4));}

/* f_2317 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2317(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2317,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_permanentp(t2));}

/* f_2279 in k2275 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2279(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2279,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2283,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:478: ##sys#check-generic-structure */
f_1009(t3,t2,C_a_i_list(&a,1,lf[92]));}

/* k2281 */
static void C_ccall f_2283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2283,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:480: ##sys#make-vector */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t3,t2);}

/* k2287 in k2281 */
static void C_ccall f_2289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2294,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2294(t2,C_fix(0)));}

/* doloop579 in k2287 in k2281 */
static C_word C_fcall f_2294(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
t2=((C_word*)t0)[3];
return(t2);}
else{
t2=C_slot(((C_word*)t0)[2],t1);
t3=C_i_setslot(((C_word*)t0)[3],t1,t2);
t4=C_fixnum_plus(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}}

/* f_2251 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2251(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2251,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2255,a[2]=t4,a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:464: ##sys#check-generic-structure */
f_1009(t5,t2,C_a_i_list(&a,1,lf[89]));}

/* k2253 */
static void C_ccall f_2255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2255,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[3]);
t4=C_fixnum_difference(t3,C_fix(1));
/* lolevel.scm:465: ##sys#check-range */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[90]+1)))(6,*((C_word*)lf[90]+1),t2,((C_word*)t0)[5],C_fix(0),t4,lf[89]);}

/* k2256 in k2253 */
static void C_ccall f_2258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_setslot(((C_word*)t0)[3],t2,((C_word*)t0)[2]));}

/* f_2238 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2238(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2238,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2242,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:460: ##sys#check-generic-structure */
f_1009(t3,t2,C_a_i_list(&a,1,lf[88]));}

/* k2240 */
static void C_ccall f_2242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_block_size(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_difference(t2,C_fix(1)));}

/* f_2229 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2229(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2229,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2233,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:456: ##sys#check-generic-structure */
f_1009(t3,t2,C_a_i_list(&a,1,lf[87]));}

/* k2231 */
static void C_ccall f_2233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[2],C_fix(0)));}

/* f_2180 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2180(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2180r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2180r(t0,t1,t2,t3);}}

static void C_ccall f_2180r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2184,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_2184(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_2184(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2182 */
static void C_ccall f_2184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2184,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_blockp(t3))){
t4=C_structurep(t3);
t5=t2;
f_2195(t5,t4);}
else{
t4=t2;
f_2195(t4,C_SCHEME_FALSE);}}

/* k2193 in k2182 */
static void C_fcall f_2195(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_i_not(((C_word*)t0)[4]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=C_slot(((C_word*)t0)[2],C_fix(0));
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(((C_word*)t0)[4],t3));}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_2171 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2171(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_2171r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2171r(t0,t1,t2,t3);}}

static void C_ccall f_2171r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
t4=C_i_check_symbol_2(t2,lf[84]);
C_apply(5,0,t1,*((C_word*)lf[85]+1),t2,t3);}

/* f_2149 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2149(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2149,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_byteblockp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_block_size(t2));}
else{
t3=C_block_size(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_w2b(t3));}}
else{
/* lolevel.scm:430: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(6,*((C_word*)lf[5]+1),t1,lf[6],lf[82],lf[83],t2);}}

/* f_2140 in k2136 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2140(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2140,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2144,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_a_i_list(&a,1,lf[80]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1055,a[2]=t4,a[3]=t3,a[4]=t5,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_blockp(t4))){
t7=C_specialp(t4);
if(C_truep(t7)){
t8=t6;
f_1055(t8,C_i_not(t7));}
else{
t8=C_byteblockp(t4);
t9=t6;
f_1055(t9,C_i_not(t8));}}
else{
t7=t6;
f_1055(t7,C_SCHEME_FALSE);}}

/* k1053 */
static void C_fcall f_1055(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_block_size(((C_word*)t0)[5]));}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=C_i_car(((C_word*)t0)[4]);
/* lolevel.scm:112: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(6,*((C_word*)lf[5]+1),((C_word*)t0)[3],lf[6],t2,lf[81],((C_word*)t0)[2]);}
else{
/* lolevel.scm:112: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(6,*((C_word*)lf[5]+1),((C_word*)t0)[3],lf[6],C_SCHEME_FALSE,lf[81],((C_word*)t0)[2]);}}}

/* k2142 */
static void C_ccall f_2144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_block_size(((C_word*)t0)[2]));}

/* f_2120 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2120(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2120,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2124,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:408: extend-procedure */
t5=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,t3);}

/* k2122 */
static void C_ccall f_2124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(t1,((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* lolevel.scm:411: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(6,*((C_word*)lf[5]+1),((C_word*)t0)[2],lf[6],lf[75],lf[76],((C_word*)t0)[3]);}}

/* f_2081 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2081(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2081,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2112,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2095,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:394: ##sys#lambda-decoration */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[73]+1)))(4,*((C_word*)lf[73]+1),t3,t4,t5);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a2094 */
static void C_ccall f_2095(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2095,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(lf[68],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2110 */
static void C_ccall f_2112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_slot(t1,C_fix(1)):C_SCHEME_FALSE));}

/* f_2045 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2045(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2045,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2079,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2062,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:394: ##sys#lambda-decoration */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[73]+1)))(4,*((C_word*)lf[73]+1),t3,t4,t5);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a2061 */
static void C_ccall f_2062(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2062,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(lf[68],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2077 */
static void C_ccall f_2079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* f_2010 in k2002 in k1998 in k1994 in k1990 in k1986 in k1982 in k1978 in k1974 in k1937 in k932 in k929 */
static void C_ccall f_2010(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2010,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2014,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:387: ##sys#check-closure */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[71]+1)))(4,*((C_word*)lf[71]+1),t4,t2,lf[69]);}

/* k2012 */
static void C_ccall f_2014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2019,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2035,a[2]=((C_word*)t0)[4],a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:388: ##sys#decorate-lambda */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* a2034 in k2012 */
static void C_ccall f_2035(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2035,4,t0,t1,t2,t3);}
t4=C_a_i_cons(&a,2,lf[68],((C_word*)t0)[2]);
t5=C_i_setslot(t2,t3,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}

/* a2018 in k2012 */
static void C_ccall f_2019(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2019,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(lf[68],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_1971 in k1937 in k932 in k929 */
static void C_ccall f_1971(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1971,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_f64_set(t2,t3));}

/* f_1968 in k1937 in k932 in k929 */
static void C_ccall f_1968(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1968,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_f32_set(t2,t3));}

/* f_1965 in k1937 in k932 in k929 */
static void C_ccall f_1965(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1965,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_s32_set(t2,t3));}

/* f_1962 in k1937 in k932 in k929 */
static void C_ccall f_1962(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1962,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_u32_set(t2,t3));}

/* f_1959 in k1937 in k932 in k929 */
static void C_ccall f_1959(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1959,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_s16_set(t2,t3));}

/* f_1956 in k1937 in k932 in k929 */
static void C_ccall f_1956(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1956,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_u16_set(t2,t3));}

/* f_1953 in k1937 in k932 in k929 */
static void C_ccall f_1953(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1953,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_s8_set(t2,t3));}

/* f_1950 in k1937 in k932 in k929 */
static void C_ccall f_1950(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1950,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_pointer_u8_set(t2,t3));}

/* f_1944 in k1937 in k932 in k929 */
static void C_ccall f_1944(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1944,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=C_locativep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_1941 in k1937 in k932 in k929 */
static void C_ccall f_1941(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1941,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_locative_to_object(t2));}

/* f_1934 in k932 in k929 */
static void C_ccall f_1934(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1934,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_locative_set(t2,t3));}

/* f_1905 in k932 in k929 */
static void C_ccall f_1905(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1905r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1905r(t0,t1,t2,t3);}}

static void C_ccall f_1905r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1913,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* lolevel.scm:307: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(6,*((C_word*)lf[45]+1),t1,t2,C_fix(0),C_SCHEME_TRUE,lf[46]);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=C_i_car(t3);
/* lolevel.scm:307: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(6,*((C_word*)lf[45]+1),t1,t2,t6,C_SCHEME_TRUE,lf[46]);}
else{
/* ##sys#error */
t6=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1911 */
static void C_ccall f_1913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:307: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(6,*((C_word*)lf[45]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_TRUE,lf[46]);}

/* f_1876 in k932 in k929 */
static void C_ccall f_1876(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1876r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1876r(t0,t1,t2,t3);}}

static void C_ccall f_1876r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1884,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* lolevel.scm:304: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(6,*((C_word*)lf[45]+1),t1,t2,C_fix(0),C_SCHEME_FALSE,lf[44]);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=C_i_car(t3);
/* lolevel.scm:304: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(6,*((C_word*)lf[45]+1),t1,t2,t6,C_SCHEME_FALSE,lf[44]);}
else{
/* ##sys#error */
t6=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1882 */
static void C_ccall f_1884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:304: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(6,*((C_word*)lf[45]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_FALSE,lf[44]);}

/* f_1853 in k932 in k929 */
static void C_ccall f_1853(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1853,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1865,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
if(C_truep(C_blockp(t4))){
t5=C_specialp(t4);
t6=t3;
f_1865(t6,t5);}
else{
t5=t3;
f_1865(t5,C_SCHEME_FALSE);}}

/* k1863 */
static void C_fcall f_1865(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(C_taggedpointerp(((C_word*)t0)[2]))?C_slot(((C_word*)t0)[2],C_fix(1)):C_SCHEME_FALSE));}
else{
/* lolevel.scm:281: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(5,*((C_word*)lf[3]+1),((C_word*)t0)[3],C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR),lf[43],((C_word*)t0)[2]);}}

/* f_1809 in k932 in k929 */
static void C_ccall f_1809(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1809r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1809r(t0,t1,t2,t3);}}

static void C_ccall f_1809r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1813,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_1813(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_1813(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1811 */
static void C_ccall f_1813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_blockp(((C_word*)t0)[3]))){
if(C_truep(C_taggedpointerp(((C_word*)t0)[3]))){
t2=C_i_not(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_equalp(t1,t3));}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_1789 in k932 in k929 */
static void C_ccall f_1789(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1789,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1793,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:266: ##sys#make-tagged-pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(3,*((C_word*)lf[41]+1),t4,t3);}

/* k1791 */
static void C_ccall f_1793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1793,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1796,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1804,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
if(C_truep(C_blockp(t4))){
t5=C_specialp(t4);
t6=t3;
f_1804(t6,t5);}
else{
t5=t3;
f_1804(t5,C_SCHEME_FALSE);}}

/* k1802 in k1791 */
static void C_fcall f_1804(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_copy_pointer(((C_word*)t0)[5],((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
/* lolevel.scm:269: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(5,*((C_word*)lf[3]+1),((C_word*)t0)[2],C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR),lf[40],((C_word*)t0)[5]);}}

/* k1794 in k1791 */
static void C_ccall f_1796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_1752 in k932 in k929 */
static void C_ccall f_1752(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1752,3,t0,t1,t2);}
if(C_truep(C_i_integerp(t2))){
t3=t1;
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(4));
t6=C_i_foreign_integer_argumentp(t4);
t7=t3;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,stub374(t5,t6));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1773,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
if(C_truep(C_blockp(t4))){
t5=C_specialp(t4);
t6=t3;
f_1773(t6,t5);}
else{
t5=t3;
f_1773(t5,C_SCHEME_FALSE);}}}

/* k1771 */
static void C_fcall f_1773(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1773,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1784,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:256: ##sys#pointer->address */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(3,*((C_word*)lf[28]+1),t2,((C_word*)t0)[2]);}
else{
/* lolevel.scm:258: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(6,*((C_word*)lf[5]+1),((C_word*)t0)[3],lf[6],lf[38],lf[39],((C_word*)t0)[2]);}}

/* k1782 in k1771 */
static void C_ccall f_1784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1784,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(4));
t3=C_i_foreign_integer_argumentp(t1);
t4=stub374(t2,t3);
/* lolevel.scm:256: ##sys#address->pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(3,*((C_word*)lf[25]+1),((C_word*)t0)[2],t4);}

/* f_1731 in k932 in k929 */
static void C_ccall f_1731(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1731,4,t0,t1,t2,t3);}
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t6=C_i_foreign_integer_argumentp(t3);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,stub363(t4,t5,t6));}

/* f_1722 in k932 in k929 */
static void C_ccall f_1722(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1722,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1726,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:240: ##sys#check-special */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(4,*((C_word*)lf[29]+1),t4,t2,lf[35]);}

/* k1724 */
static void C_ccall f_1726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1726,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1729,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:241: ##sys#check-special */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(4,*((C_word*)lf[29]+1),t2,((C_word*)t0)[2],lf[35]);}

/* k1727 in k1724 */
static void C_ccall f_1729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_pointer_eqp(((C_word*)t0)[3],((C_word*)t0)[2]));}

/* f_1716 in k932 in k929 */
static void C_ccall f_1716(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1716,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1720,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:236: ##sys#check-pointer */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[34]);}

/* k1718 */
static void C_ccall f_1720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_pointer_to_object(((C_word*)t0)[2]));}

/* f_1705 in k932 in k929 */
static void C_ccall f_1705(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1705,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=t1;
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=t3;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub348(t5,t4));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_1699 in k932 in k929 */
static void C_ccall f_1699(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1699,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1703,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:228: ##sys#check-special */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(4,*((C_word*)lf[29]+1),t3,t2,lf[32]);}

/* k1701 */
static void C_ccall f_1703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_null_pointerp(((C_word*)t0)[2]));}

/* f_1689 in k932 in k929 */
static void C_ccall f_1689(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1689,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1693,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:222: ##sys#check-special */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(4,*((C_word*)lf[29]+1),t3,t2,lf[27]);}

/* k1691 */
static void C_ccall f_1693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:223: ##sys#pointer->address */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(3,*((C_word*)lf[28]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_1680 in k932 in k929 */
static void C_ccall f_1680(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1680,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1684,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:218: ##sys#check-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(4,*((C_word*)lf[26]+1),t3,t2,lf[24]);}

/* k1682 */
static void C_ccall f_1684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm:219: ##sys#address->pointer */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(3,*((C_word*)lf[25]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_1669 in k932 in k929 */
static void C_ccall f_1669(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1669,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=C_specialp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_1661 in k932 in k929 */
static void C_ccall f_1661(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1661,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_safe_pointerp(t2));}

/* f_1651 in k932 in k929 */
static void C_ccall f_1651(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1651,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub316(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub316(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* f_1644 in k932 in k929 */
static void C_ccall f_1644(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1644,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub310(t3,t4));}

/* f_1563 in k932 in k929 */
static void C_ccall f_1563(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1563,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1569,a[2]=t4,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1569(t6,t1,t2);}

/* copy */
static void C_fcall f_1569(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1569,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_i_symbolp(t2))){
t3=C_slot(t2,C_fix(1));
/* lolevel.scm:196: ##sys#intern-symbol */
C_string_to_symbol(3,0,t1,t3);}
else{
t3=C_block_size(t2);
t4=(C_truep(C_byteblockp(t2))?C_words(t3):t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1599,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:200: ##sys#make-vector */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t5,t4);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1597 in copy */
static void C_ccall f_1599(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1599,2,t0,t1);}
t2=C_copy_block(((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1602,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_byteblockp(((C_word*)t0)[5]);
t5=(C_truep(t4)?t4:C_i_symbolp(((C_word*)t0)[5]));
if(C_truep(t5)){
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}
else{
t6=(C_truep(C_specialp(((C_word*)t0)[5]))?C_fix(1):C_fix(0));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1614,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word)li9),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_1614(t10,t3,t6);}}

/* doloop301 in k1597 in copy */
static void C_fcall f_1614(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1614,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1635,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
/* lolevel.scm:204: copy */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1569(t5,t3,t4);}}

/* k1633 in doloop301 in k1597 in copy */
static void C_ccall f_1635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_1614(t4,((C_word*)t0)[2],t3);}

/* k1600 in k1597 in copy */
static void C_ccall f_1602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_1211 in k932 in k929 */
static void C_ccall f_1211(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+41)){
C_save_and_reclaim((void*)tr4r,(void*)f_1211r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1211r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1211r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(41);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(0):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_fix(0):C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
if(C_truep(C_i_nullp(t16))){
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1238,a[2]=t3,a[3]=t2,a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp));
t26=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1244,a[2]=t3,a[3]=t2,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t27=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1250,a[2]=t20,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t28=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1266,a[2]=t20,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp));
t29=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1293,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t24,a[6]=t22,a[7]=t18,a[8]=t6,a[9]=t10,a[10]=t14,a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm:156: ##sys#check-block */
f_936(t29,t2,C_a_i_list(&a,1,lf[11]));}
else{
/* ##sys#error */
t17=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t1,lf[0],t16);}}

/* k1291 */
static void C_ccall f_1293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1293,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm:157: ##sys#check-block */
f_936(t2,((C_word*)t0)[2],C_a_i_list(&a,1,lf[11]));}

/* k1294 in k1291 */
static void C_ccall f_1296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1296,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1299,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[9],C_fix(0)))){
/* lolevel.scm:159: ##sys#error */
t3=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[11],lf[17],((C_word*)t0)[9]);}
else{
t3=t2;
f_1299(2,t3,C_SCHEME_UNDEFINED);}}

/* k1297 in k1294 in k1291 */
static void C_ccall f_1299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1299,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[10],C_fix(0)))){
/* lolevel.scm:161: ##sys#error */
t3=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[11],lf[16],((C_word*)t0)[10]);}
else{
t3=t2;
f_1302(2,t3,C_SCHEME_UNDEFINED);}}

/* k1300 in k1297 in k1294 in k1291 */
static void C_ccall f_1302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1302,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1307,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=t3,a[9]=((C_word*)t0)[11],a[10]=((C_word)li7),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_1307(t5,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* move in k1300 in k1297 in k1294 in k1291 */
static void C_fcall f_1307(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(11);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1307,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_structurep(t2))){
t4=C_slot(t2,C_fix(0));
if(C_truep(C_i_memq(t4,((C_word*)t0)[9]))){
t5=C_slot(t2,C_fix(1));
/* lolevel.scm:165: move */
t17=t1;
t18=t5;
t19=t3;
t1=t17;
t2=t18;
t3=t19;
goto loop;}
else{
t5=t1;
t6=t2;
/* lolevel.scm:132: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(5,*((C_word*)lf[3]+1),t5,C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR),lf[11],t6);}}
else{
if(C_truep(C_structurep(t3))){
t4=C_slot(t3,C_fix(0));
if(C_truep(C_i_memq(t4,((C_word*)t0)[9]))){
t5=C_slot(t3,C_fix(1));
/* lolevel.scm:169: move */
t17=t1;
t18=t2;
t19=t5;
t1=t17;
t2=t18;
t3=t19;
goto loop;}
else{
t5=t1;
t6=t3;
/* lolevel.scm:132: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(5,*((C_word*)lf[3]+1),t5,C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR),lf[11],t6);}}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=t3,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
t5=t2;
t6=C_i_safe_pointerp(t5);
if(C_truep(t6)){
t7=t4;
f_1376(t7,t6);}
else{
t7=C_locativep(t5);
t8=t4;
f_1376(t8,t7);}}}}

/* k1374 in move in k1300 in k1297 in k1294 in k1291 */
static void C_fcall f_1376(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1376,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1392,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[9];
t4=C_i_safe_pointerp(t3);
if(C_truep(t4)){
t5=t2;
f_1392(t5,t4);}
else{
t5=C_locativep(t3);
t6=t2;
f_1392(t6,t5);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:178: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[8]);}}

/* k1439 in k1374 in move in k1300 in k1297 in k1294 in k1291 */
static void C_ccall f_1441(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1441,2,t0,t1);}
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[9]));
if(C_truep(t2)){
t3=C_block_size(((C_word*)t0)[9]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1463,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t5=((C_word*)t0)[7];
t6=C_i_safe_pointerp(t5);
if(C_truep(t6)){
t7=t4;
f_1463(t7,t6);}
else{
t7=C_locativep(t5);
t8=t4;
f_1463(t8,t7);}}
else{
t3=((C_word*)t0)[8];
t4=((C_word*)t0)[9];
/* lolevel.scm:132: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(5,*((C_word*)lf[3]+1),t3,C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR),lf[11],t4);}}

/* k1461 in k1439 in k1374 in move in k1300 in k1297 in k1294 in k1291 */
static void C_fcall f_1463(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1463,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1470,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[5])){
/* lolevel.scm:181: checkn1 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1250(t3,t2,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[6]);}
else{
/* lolevel.scm:181: checkn1 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1250(t3,t2,((C_word*)t0)[3],((C_word*)t0)[3],((C_word*)t0)[6]);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:182: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[9]);}}

/* k1478 in k1461 in k1439 in k1374 in move in k1300 in k1297 in k1294 in k1291 */
static void C_ccall f_1480(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1480,2,t0,t1);}
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[9]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1490,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t4=(C_truep(((C_word*)t0)[4])?((C_word*)t0)[4]:((C_word*)t0)[3]);
t5=C_block_size(((C_word*)t0)[9]);
/* lolevel.scm:183: checkn2 */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1266(t6,t3,t4,((C_word*)t0)[3],t5,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t3=((C_word*)t0)[8];
t4=((C_word*)t0)[9];
/* lolevel.scm:132: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(5,*((C_word*)lf[3]+1),t3,C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR),lf[11],t4);}}

/* k1488 in k1478 in k1461 in k1439 in k1374 in move in k1300 in k1297 in k1294 in k1291 */
static void C_ccall f_1490(C_word c,C_word t0,C_word t1){
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
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
t4=((C_word*)t0)[4];
t5=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?C_i_foreign_block_argumentp(t4):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t10=t2;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub170(C_SCHEME_UNDEFINED,t5,t6,t7,t8,t9));}

/* k1468 in k1461 in k1439 in k1374 in move in k1300 in k1297 in k1294 in k1291 */
static void C_ccall f_1470(C_word c,C_word t0,C_word t1){
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
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
t4=((C_word*)t0)[4];
t5=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?C_i_foreign_block_argumentp(t4):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t10=t2;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub138(C_SCHEME_UNDEFINED,t5,t6,t7,t8,t9));}

/* k1390 in k1374 in move in k1300 in k1297 in k1294 in k1291 */
static void C_fcall f_1392(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1392,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1399,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=t2;
f_1399(2,t3,((C_word*)t0)[4]);}
else{
/* lolevel.scm:173: nosizerr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1238(t3,t2);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1408,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:174: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[8]);}}

/* k1406 in k1390 in k1374 in move in k1300 in k1297 in k1294 in k1291 */
static void C_ccall f_1408(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1408,2,t0,t1);}
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[9]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1418,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1422,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t5=C_block_size(((C_word*)t0)[9]);
/* lolevel.scm:175: checkn1 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_1250(t6,t3,((C_word*)t0)[3],t5,((C_word*)t0)[6]);}
else{
/* lolevel.scm:175: nosizerr */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1238(t5,t4);}}
else{
t3=((C_word*)t0)[8];
t4=((C_word*)t0)[9];
/* lolevel.scm:132: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(5,*((C_word*)lf[3]+1),t3,C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR),lf[11],t4);}}

/* k1420 in k1406 in k1390 in k1374 in move in k1300 in k1297 in k1294 in k1291 */
static void C_ccall f_1422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_block_size(((C_word*)t0)[5]);
/* lolevel.scm:175: checkn1 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1250(t3,((C_word*)t0)[3],t1,t2,((C_word*)t0)[2]);}

/* k1416 in k1406 in k1390 in k1374 in move in k1300 in k1297 in k1294 in k1291 */
static void C_ccall f_1418(C_word c,C_word t0,C_word t1){
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
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
t4=((C_word*)t0)[4];
t5=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t10=t2;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub154(C_SCHEME_UNDEFINED,t5,t6,t7,t8,t9));}

/* k1397 in k1390 in k1374 in move in k1300 in k1297 in k1294 in k1291 */
static void C_ccall f_1399(C_word c,C_word t0,C_word t1){
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
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
t4=((C_word*)t0)[4];
t5=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t10=t2;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub122(C_SCHEME_UNDEFINED,t5,t6,t7,t8,t9));}

/* checkn2 */
static void C_fcall f_1266(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1266,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1273,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t8=C_fixnum_difference(t3,t5);
if(C_truep(C_fixnum_less_or_equal_p(t2,t8))){
t9=C_fixnum_difference(t4,t6);
t10=t7;
f_1273(t10,C_fixnum_less_or_equal_p(t2,t9));}
else{
t9=t7;
f_1273(t9,C_SCHEME_FALSE);}}

/* k1271 in checkn2 */
static void C_fcall f_1273(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1273,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* lolevel.scm:154: sizerr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1244(t2,((C_word*)t0)[5],C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[2]));}}

/* checkn1 */
static void C_fcall f_1250(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1250,NULL,5,t0,t1,t2,t3,t4);}
t5=C_fixnum_difference(t3,t4);
if(C_truep(C_fixnum_less_or_equal_p(t2,t5))){
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
/* lolevel.scm:149: sizerr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1244(t6,t1,C_a_i_list(&a,2,t2,t3));}}

/* sizerr */
static void C_fcall f_1244(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1244,NULL,3,t0,t1,t2);}
C_apply(8,0,t1,*((C_word*)lf[12]+1),lf[11],lf[14],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* nosizerr */
static void C_fcall f_1238(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1238,NULL,2,t0,t1);}
/* lolevel.scm:141: ##sys#error */
t2=*((C_word*)lf[12]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,t1,lf[11],lf[13],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_1070 in k932 in k929 */
static void C_ccall f_1070(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_1070r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1070r(t0,t1,t2,t3);}}

static void C_ccall f_1070r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=t2;
if(C_truep(C_i_safe_pointerp(t4))){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
if(C_truep(C_i_pairp(t3))){
t5=C_i_car(t3);
/* lolevel.scm:118: ##sys#error-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(6,*((C_word*)lf[3]+1),t1,C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR),t5,lf[9],t2);}
else{
/* lolevel.scm:118: ##sys#error-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(6,*((C_word*)lf[3]+1),t1,C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR),C_SCHEME_FALSE,lf[9],t2);}}}

/* ##sys#check-generic-structure in k932 in k929 */
static void C_fcall f_1009(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1009,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1021,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
if(C_truep(C_blockp(t5))){
t6=C_structurep(t5);
t7=t4;
f_1021(t7,t6);}
else{
t6=t4;
f_1021(t6,C_SCHEME_FALSE);}}

/* k1019 in ##sys#check-generic-structure in k932 in k929 */
static void C_fcall f_1021(C_word t0,C_word t1){
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
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=C_i_car(((C_word*)t0)[3]);
/* lolevel.scm:104: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(6,*((C_word*)lf[5]+1),((C_word*)t0)[4],lf[6],t2,lf[7],((C_word*)t0)[2]);}
else{
/* lolevel.scm:104: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(6,*((C_word*)lf[5]+1),((C_word*)t0)[4],lf[6],C_SCHEME_FALSE,lf[7],((C_word*)t0)[2]);}}}

/* ##sys#check-block in k932 in k929 */
static void C_fcall f_936(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_936,NULL,3,t1,t2,t3);}
if(C_truep(C_blockp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep(C_i_pairp(t3))){
t4=C_i_car(t3);
/* lolevel.scm:83: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(5,*((C_word*)lf[3]+1),t1,C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR),t4,t2);}
else{
/* lolevel.scm:83: ##sys#error-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(5,*((C_word*)lf[3]+1),t1,C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR),C_SCHEME_FALSE,t2);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[235] = {
{"toplevel:lolevel_2escm",(void*)C_lolevel_toplevel},
{"f_931:lolevel_2escm",(void*)f_931},
{"f_934:lolevel_2escm",(void*)f_934},
{"f_1939:lolevel_2escm",(void*)f_1939},
{"f_3245:lolevel_2escm",(void*)f_3245},
{"f_1976:lolevel_2escm",(void*)f_1976},
{"f_3242:lolevel_2escm",(void*)f_3242},
{"f_1980:lolevel_2escm",(void*)f_1980},
{"f_3239:lolevel_2escm",(void*)f_3239},
{"f_1984:lolevel_2escm",(void*)f_1984},
{"f_3236:lolevel_2escm",(void*)f_3236},
{"f_1988:lolevel_2escm",(void*)f_1988},
{"f_3233:lolevel_2escm",(void*)f_3233},
{"f_1992:lolevel_2escm",(void*)f_1992},
{"f_3230:lolevel_2escm",(void*)f_3230},
{"f_1996:lolevel_2escm",(void*)f_1996},
{"f_3227:lolevel_2escm",(void*)f_3227},
{"f_2000:lolevel_2escm",(void*)f_2000},
{"f_3224:lolevel_2escm",(void*)f_3224},
{"f_2004:lolevel_2escm",(void*)f_2004},
{"f_2138:lolevel_2escm",(void*)f_2138},
{"f_3200:lolevel_2escm",(void*)f_3200},
{"f_3204:lolevel_2escm",(void*)f_3204},
{"f_3207:lolevel_2escm",(void*)f_3207},
{"f_2277:lolevel_2escm",(void*)f_2277},
{"f_3177:lolevel_2escm",(void*)f_3177},
{"f_3187:lolevel_2escm",(void*)f_3187},
{"f_3166:lolevel_2escm",(void*)f_3166},
{"f_3168:lolevel_2escm",(void*)f_3168},
{"f_3135:lolevel_2escm",(void*)f_3135},
{"f_3145:lolevel_2escm",(void*)f_3145},
{"f_3148:lolevel_2escm",(void*)f_3148},
{"f_3121:lolevel_2escm",(void*)f_3121},
{"f_3074:lolevel_2escm",(void*)f_3074},
{"f_3081:lolevel_2escm",(void*)f_3081},
{"f_3092:lolevel_2escm",(void*)f_3092},
{"f_3030:lolevel_2escm",(void*)f_3030},
{"f_3037:lolevel_2escm",(void*)f_3037},
{"f_3045:lolevel_2escm",(void*)f_3045},
{"f_3058:lolevel_2escm",(void*)f_3058},
{"f_3024:lolevel_2escm",(void*)f_3024},
{"f_2950:lolevel_2escm",(void*)f_2950},
{"f_2954:lolevel_2escm",(void*)f_2954},
{"f_2966:lolevel_2escm",(void*)f_2966},
{"f_2978:lolevel_2escm",(void*)f_2978},
{"f_2983:lolevel_2escm",(void*)f_2983},
{"f_2916:lolevel_2escm",(void*)f_2916},
{"f_2920:lolevel_2escm",(void*)f_2920},
{"f_2923:lolevel_2escm",(void*)f_2923},
{"f_2930:lolevel_2escm",(void*)f_2930},
{"f_2945:lolevel_2escm",(void*)f_2945},
{"f_2933:lolevel_2escm",(void*)f_2933},
{"f_2907:lolevel_2escm",(void*)f_2907},
{"f_964:lolevel_2escm",(void*)f_964},
{"f_986:lolevel_2escm",(void*)f_986},
{"f_989:lolevel_2escm",(void*)f_989},
{"f_2911:lolevel_2escm",(void*)f_2911},
{"f_2778:lolevel_2escm",(void*)f_2778},
{"f_2782:lolevel_2escm",(void*)f_2782},
{"f_2785:lolevel_2escm",(void*)f_2785},
{"f_2790:lolevel_2escm",(void*)f_2790},
{"f_2806:lolevel_2escm",(void*)f_2806},
{"f_2849:lolevel_2escm",(void*)f_2849},
{"f_2852:lolevel_2escm",(void*)f_2852},
{"f_2861:lolevel_2escm",(void*)f_2861},
{"f_2882:lolevel_2escm",(void*)f_2882},
{"f_2855:lolevel_2escm",(void*)f_2855},
{"f_2835:lolevel_2escm",(void*)f_2835},
{"f_2838:lolevel_2escm",(void*)f_2838},
{"f_2819:lolevel_2escm",(void*)f_2819},
{"f_2822:lolevel_2escm",(void*)f_2822},
{"f_2694:lolevel_2escm",(void*)f_2694},
{"f_2698:lolevel_2escm",(void*)f_2698},
{"f_2703:lolevel_2escm",(void*)f_2703},
{"f_2716:lolevel_2escm",(void*)f_2716},
{"f_2773:lolevel_2escm",(void*)f_2773},
{"f_2722:lolevel_2escm",(void*)f_2722},
{"f_2725:lolevel_2escm",(void*)f_2725},
{"f_2735:lolevel_2escm",(void*)f_2735},
{"f_2737:lolevel_2escm",(void*)f_2737},
{"f_2759:lolevel_2escm",(void*)f_2759},
{"f_2728:lolevel_2escm",(void*)f_2728},
{"f_2602:lolevel_2escm",(void*)f_2602},
{"f_2611:lolevel_2escm",(void*)f_2611},
{"f_2656:lolevel_2escm",(void*)f_2656},
{"f_2666:lolevel_2escm",(void*)f_2666},
{"f3591:lolevel_2escm",(void*)f3591},
{"f_2640:lolevel_2escm",(void*)f_2640},
{"f_2647:lolevel_2escm",(void*)f_2647},
{"f_2684:lolevel_2escm",(void*)f_2684},
{"f_2438:lolevel_2escm",(void*)f_2438},
{"f_2442:lolevel_2escm",(void*)f_2442},
{"f_2445:lolevel_2escm",(void*)f_2445},
{"f_2591:lolevel_2escm",(void*)f_2591},
{"f_2448:lolevel_2escm",(void*)f_2448},
{"f_2451:lolevel_2escm",(void*)f_2451},
{"f_2459:lolevel_2escm",(void*)f_2459},
{"f_2469:lolevel_2escm",(void*)f_2469},
{"f_2584:lolevel_2escm",(void*)f_2584},
{"f_2478:lolevel_2escm",(void*)f_2478},
{"f_2572:lolevel_2escm",(void*)f_2572},
{"f_2576:lolevel_2escm",(void*)f_2576},
{"f_2568:lolevel_2escm",(void*)f_2568},
{"f_2481:lolevel_2escm",(void*)f_2481},
{"f_2484:lolevel_2escm",(void*)f_2484},
{"f_2541:lolevel_2escm",(void*)f_2541},
{"f_2487:lolevel_2escm",(void*)f_2487},
{"f_2490:lolevel_2escm",(void*)f_2490},
{"f_2500:lolevel_2escm",(void*)f_2500},
{"f_2502:lolevel_2escm",(void*)f_2502},
{"f_2523:lolevel_2escm",(void*)f_2523},
{"f_2493:lolevel_2escm",(void*)f_2493},
{"f_2454:lolevel_2escm",(void*)f_2454},
{"f_2320:lolevel_2escm",(void*)f_2320},
{"f_2327:lolevel_2escm",(void*)f_2327},
{"f_2330:lolevel_2escm",(void*)f_2330},
{"f_2335:lolevel_2escm",(void*)f_2335},
{"f_2345:lolevel_2escm",(void*)f_2345},
{"f_2354:lolevel_2escm",(void*)f_2354},
{"f_2358:lolevel_2escm",(void*)f_2358},
{"f_2361:lolevel_2escm",(void*)f_2361},
{"f_2364:lolevel_2escm",(void*)f_2364},
{"f_2374:lolevel_2escm",(void*)f_2374},
{"f_2376:lolevel_2escm",(void*)f_2376},
{"f_2397:lolevel_2escm",(void*)f_2397},
{"f_2367:lolevel_2escm",(void*)f_2367},
{"f_2431:lolevel_2escm",(void*)f_2431},
{"f_2317:lolevel_2escm",(void*)f_2317},
{"f_2279:lolevel_2escm",(void*)f_2279},
{"f_2283:lolevel_2escm",(void*)f_2283},
{"f_2289:lolevel_2escm",(void*)f_2289},
{"f_2294:lolevel_2escm",(void*)f_2294},
{"f_2251:lolevel_2escm",(void*)f_2251},
{"f_2255:lolevel_2escm",(void*)f_2255},
{"f_2258:lolevel_2escm",(void*)f_2258},
{"f_2238:lolevel_2escm",(void*)f_2238},
{"f_2242:lolevel_2escm",(void*)f_2242},
{"f_2229:lolevel_2escm",(void*)f_2229},
{"f_2233:lolevel_2escm",(void*)f_2233},
{"f_2180:lolevel_2escm",(void*)f_2180},
{"f_2184:lolevel_2escm",(void*)f_2184},
{"f_2195:lolevel_2escm",(void*)f_2195},
{"f_2171:lolevel_2escm",(void*)f_2171},
{"f_2149:lolevel_2escm",(void*)f_2149},
{"f_2140:lolevel_2escm",(void*)f_2140},
{"f_1055:lolevel_2escm",(void*)f_1055},
{"f_2144:lolevel_2escm",(void*)f_2144},
{"f_2120:lolevel_2escm",(void*)f_2120},
{"f_2124:lolevel_2escm",(void*)f_2124},
{"f_2081:lolevel_2escm",(void*)f_2081},
{"f_2095:lolevel_2escm",(void*)f_2095},
{"f_2112:lolevel_2escm",(void*)f_2112},
{"f_2045:lolevel_2escm",(void*)f_2045},
{"f_2062:lolevel_2escm",(void*)f_2062},
{"f_2079:lolevel_2escm",(void*)f_2079},
{"f_2010:lolevel_2escm",(void*)f_2010},
{"f_2014:lolevel_2escm",(void*)f_2014},
{"f_2035:lolevel_2escm",(void*)f_2035},
{"f_2019:lolevel_2escm",(void*)f_2019},
{"f_1971:lolevel_2escm",(void*)f_1971},
{"f_1968:lolevel_2escm",(void*)f_1968},
{"f_1965:lolevel_2escm",(void*)f_1965},
{"f_1962:lolevel_2escm",(void*)f_1962},
{"f_1959:lolevel_2escm",(void*)f_1959},
{"f_1956:lolevel_2escm",(void*)f_1956},
{"f_1953:lolevel_2escm",(void*)f_1953},
{"f_1950:lolevel_2escm",(void*)f_1950},
{"f_1944:lolevel_2escm",(void*)f_1944},
{"f_1941:lolevel_2escm",(void*)f_1941},
{"f_1934:lolevel_2escm",(void*)f_1934},
{"f_1905:lolevel_2escm",(void*)f_1905},
{"f_1913:lolevel_2escm",(void*)f_1913},
{"f_1876:lolevel_2escm",(void*)f_1876},
{"f_1884:lolevel_2escm",(void*)f_1884},
{"f_1853:lolevel_2escm",(void*)f_1853},
{"f_1865:lolevel_2escm",(void*)f_1865},
{"f_1809:lolevel_2escm",(void*)f_1809},
{"f_1813:lolevel_2escm",(void*)f_1813},
{"f_1789:lolevel_2escm",(void*)f_1789},
{"f_1793:lolevel_2escm",(void*)f_1793},
{"f_1804:lolevel_2escm",(void*)f_1804},
{"f_1796:lolevel_2escm",(void*)f_1796},
{"f_1752:lolevel_2escm",(void*)f_1752},
{"f_1773:lolevel_2escm",(void*)f_1773},
{"f_1784:lolevel_2escm",(void*)f_1784},
{"f_1731:lolevel_2escm",(void*)f_1731},
{"f_1722:lolevel_2escm",(void*)f_1722},
{"f_1726:lolevel_2escm",(void*)f_1726},
{"f_1729:lolevel_2escm",(void*)f_1729},
{"f_1716:lolevel_2escm",(void*)f_1716},
{"f_1720:lolevel_2escm",(void*)f_1720},
{"f_1705:lolevel_2escm",(void*)f_1705},
{"f_1699:lolevel_2escm",(void*)f_1699},
{"f_1703:lolevel_2escm",(void*)f_1703},
{"f_1689:lolevel_2escm",(void*)f_1689},
{"f_1693:lolevel_2escm",(void*)f_1693},
{"f_1680:lolevel_2escm",(void*)f_1680},
{"f_1684:lolevel_2escm",(void*)f_1684},
{"f_1669:lolevel_2escm",(void*)f_1669},
{"f_1661:lolevel_2escm",(void*)f_1661},
{"f_1651:lolevel_2escm",(void*)f_1651},
{"f_1644:lolevel_2escm",(void*)f_1644},
{"f_1563:lolevel_2escm",(void*)f_1563},
{"f_1569:lolevel_2escm",(void*)f_1569},
{"f_1599:lolevel_2escm",(void*)f_1599},
{"f_1614:lolevel_2escm",(void*)f_1614},
{"f_1635:lolevel_2escm",(void*)f_1635},
{"f_1602:lolevel_2escm",(void*)f_1602},
{"f_1211:lolevel_2escm",(void*)f_1211},
{"f_1293:lolevel_2escm",(void*)f_1293},
{"f_1296:lolevel_2escm",(void*)f_1296},
{"f_1299:lolevel_2escm",(void*)f_1299},
{"f_1302:lolevel_2escm",(void*)f_1302},
{"f_1307:lolevel_2escm",(void*)f_1307},
{"f_1376:lolevel_2escm",(void*)f_1376},
{"f_1441:lolevel_2escm",(void*)f_1441},
{"f_1463:lolevel_2escm",(void*)f_1463},
{"f_1480:lolevel_2escm",(void*)f_1480},
{"f_1490:lolevel_2escm",(void*)f_1490},
{"f_1470:lolevel_2escm",(void*)f_1470},
{"f_1392:lolevel_2escm",(void*)f_1392},
{"f_1408:lolevel_2escm",(void*)f_1408},
{"f_1422:lolevel_2escm",(void*)f_1422},
{"f_1418:lolevel_2escm",(void*)f_1418},
{"f_1399:lolevel_2escm",(void*)f_1399},
{"f_1266:lolevel_2escm",(void*)f_1266},
{"f_1273:lolevel_2escm",(void*)f_1273},
{"f_1250:lolevel_2escm",(void*)f_1250},
{"f_1244:lolevel_2escm",(void*)f_1244},
{"f_1238:lolevel_2escm",(void*)f_1238},
{"f_1070:lolevel_2escm",(void*)f_1070},
{"f_1009:lolevel_2escm",(void*)f_1009},
{"f_1021:lolevel_2escm",(void*)f_1021},
{"f_936:lolevel_2escm",(void*)f_936},
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
