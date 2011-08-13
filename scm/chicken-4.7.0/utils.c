/* Generated from utils.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: utils.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file utils.c
   unit: utils
*/

#include "chicken.h"


#if defined(_WIN32) && !defined(__CYGWIN__)
# include <windows.h>
# define C_HAS_MESSAGE_BOX 1
static int
C_confirmation_dialog(char *msg, char *caption, int def, int abort)
{
  int d = 0, r;
  int t = abort ? MB_YESNOCANCEL : MB_YESNO;

  switch(def) {
  case 0: d = MB_DEFBUTTON1; break;
  case 1: d = MB_DEFBUTTON2; break;
  case 2: d = MB_DEFBUTTON3;
  }

  r = MessageBox(NULL, msg, caption, t | MB_ICONQUESTION | d);

  switch(r) {
  case IDYES: return 1;
  case IDNO: return 0;
  default: return -1;
  }
}
#else
# define C_HAS_MESSAGE_BOX 0
static int
C_confirmation_dialog(char *msg, char *caption, int def, int abort) { return -1; }
#endif


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[95];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,23),40,102,95,51,56,49,32,102,115,116,114,54,50,32,46,32,97,114,103,115,54,51,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,6),40,97,52,49,54,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,16),40,102,95,51,57,57,32,46,32,102,105,108,101,54,55,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,49,48,49,32,103,49,49,51,49,50,51,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,23),40,102,95,52,52,50,32,115,116,114,56,54,32,46,32,116,109,112,56,53,56,55,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,6),40,97,54,54,56,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,12),40,97,54,54,50,32,101,120,50,48,51,41,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,6),40,97,54,56,51,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,6),40,97,54,57,53,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,19),40,97,54,56,57,32,46,32,97,114,103,115,49,57,55,50,48,54,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,6),40,97,54,55,55,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,14),40,97,54,53,54,32,107,49,57,54,50,48,50,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,6),40,97,55,50,53,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,12),40,97,55,49,57,32,101,120,49,57,48,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,6),40,97,55,51,52,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,6),40,97,55,52,54,41,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,19),40,97,55,52,48,32,46,32,97,114,103,115,49,56,52,49,57,49,41,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,6),40,97,55,50,56,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,14),40,97,55,49,51,32,107,49,56,51,49,56,57,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,6),40,97,55,48,52,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,97,56,48,53,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,97,56,48,56,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,31),40,102,95,53,54,55,32,102,105,108,101,110,97,109,101,49,52,49,32,46,32,116,109,112,49,52,48,49,52,50,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,18),40,102,95,56,53,52,32,103,50,51,50,50,51,51,50,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,25),40,102,95,56,49,50,32,114,120,50,49,54,32,46,32,116,109,112,50,49,53,50,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,11),40,103,101,116,45,105,110,112,117,116,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,7),40,97,49,48,57,48,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,26),40,102,95,57,48,55,32,115,116,114,50,54,53,32,46,32,116,109,112,50,54,52,50,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k890 */
static C_word C_fcall stub250(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub250(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_truep(C_a3);
C_r=C_fix((C_word)C_confirmation_dialog(t0,t1,t2,t3));
return C_r;}

C_noret_decl(C_utils_toplevel)
C_externexport void C_ccall C_utils_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_364)
static void C_ccall f_364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_367)
static void C_ccall f_367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_370)
static void C_ccall f_370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_373)
static void C_ccall f_373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_376)
static void C_ccall f_376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_379)
static void C_ccall f_379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_559)
static void C_ccall f_559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_563)
static void C_ccall f_563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_566)
static void C_ccall f_566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_907)
static void C_ccall f_907(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_907)
static void C_ccall f_907r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1091)
static void C_ccall f_1091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_917)
static void C_ccall f_917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_920)
static void C_fcall f_920(C_word t0,C_word t1) C_noret;
C_noret_decl(f_976)
static void C_fcall f_976(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1051)
static void C_ccall f_1051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1054)
static void C_ccall f_1054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1057)
static void C_ccall f_1057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1060)
static void C_ccall f_1060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1063)
static void C_ccall f_1063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1072)
static void C_ccall f_1072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1075)
static void C_ccall f_1075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1066)
static void C_ccall f_1066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_980)
static void C_ccall f_980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_983)
static void C_ccall f_983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_986)
static void C_fcall f_986(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1025)
static void C_ccall f_1025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1028)
static void C_ccall f_1028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1016)
static void C_ccall f_1016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1019)
static void C_ccall f_1019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_922)
static void C_fcall f_922(C_word t0,C_word t1) C_noret;
C_noret_decl(f_971)
static void C_ccall f_971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_949)
static void C_fcall f_949(C_word t0,C_word t1) C_noret;
C_noret_decl(f_884)
static void C_ccall f_884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_888)
static void C_ccall f_888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_812)
static void C_ccall f_812(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_812)
static void C_ccall f_812r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_816)
static void C_ccall f_816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_853)
static void C_ccall f_853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_854)
static void C_ccall f_854(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_819)
static void C_fcall f_819(C_word t0,C_word t1) C_noret;
C_noret_decl(f_824)
static void C_fcall f_824(C_word t0,C_word t1) C_noret;
C_noret_decl(f_828)
static void C_ccall f_828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_837)
static void C_ccall f_837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_567)
static void C_ccall f_567(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_567)
static void C_ccall f_567r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_809)
static void C_ccall f_809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_571)
static void C_ccall f_571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_806)
static void C_ccall f_806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_577)
static void C_ccall f_577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_583)
static void C_ccall f_583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_589)
static void C_ccall f_589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_794)
static void C_ccall f_794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_595)
static void C_ccall f_595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_598)
static void C_ccall f_598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_786)
static void C_ccall f_786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_601)
static void C_ccall f_601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_604)
static void C_ccall f_604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_782)
static void C_ccall f_782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_778)
static void C_ccall f_778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_774)
static void C_ccall f_774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_607)
static void C_ccall f_607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_610)
static void C_ccall f_610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_770)
static void C_ccall f_770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_613)
static void C_ccall f_613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_616)
static void C_ccall f_616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_762)
static void C_ccall f_762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_619)
static void C_ccall f_619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_622)
static void C_ccall f_622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_625)
static void C_ccall f_625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_628)
static void C_ccall f_628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_631)
static void C_ccall f_631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_634)
static void C_ccall f_634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_705)
static void C_ccall f_705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_714)
static void C_ccall f_714(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_729)
static void C_ccall f_729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_741)
static void C_ccall f_741(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_741)
static void C_ccall f_741r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_747)
static void C_ccall f_747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_735)
static void C_ccall f_735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_720)
static void C_ccall f_720(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_726)
static void C_ccall f_726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_709)
static void C_ccall f_709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_643)
static void C_ccall f_643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_657)
static void C_ccall f_657(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_678)
static void C_ccall f_678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_690)
static void C_ccall f_690(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_690)
static void C_ccall f_690r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_696)
static void C_ccall f_696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_684)
static void C_ccall f_684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_688)
static void C_ccall f_688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_663)
static void C_ccall f_663(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_669)
static void C_ccall f_669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_673)
static void C_ccall f_673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_652)
static void C_ccall f_652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_442)
static void C_ccall f_442(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_442)
static void C_ccall f_442r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_446)
static void C_ccall f_446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_488)
static void C_ccall f_488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_496)
static void C_fcall f_496(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_525)
static void C_fcall f_525(C_word t0,C_word t1) C_noret;
C_noret_decl(f_494)
static void C_ccall f_494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_399)
static void C_ccall f_399(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_399)
static void C_ccall f_399r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_403)
static void C_ccall f_403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_409)
static void C_ccall f_409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_417)
static void C_ccall f_417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_381)
static void C_ccall f_381(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_381)
static void C_ccall f_381r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_385)
static void C_ccall f_385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_388)
static void C_ccall f_388(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_920)
static void C_fcall trf_920(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_920(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_920(t0,t1);}

C_noret_decl(trf_976)
static void C_fcall trf_976(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_976(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_976(t0,t1);}

C_noret_decl(trf_986)
static void C_fcall trf_986(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_986(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_986(t0,t1);}

C_noret_decl(trf_922)
static void C_fcall trf_922(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_922(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_922(t0,t1);}

C_noret_decl(trf_949)
static void C_fcall trf_949(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_949(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_949(t0,t1);}

C_noret_decl(trf_819)
static void C_fcall trf_819(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_819(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_819(t0,t1);}

C_noret_decl(trf_824)
static void C_fcall trf_824(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_824(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_824(t0,t1);}

C_noret_decl(trf_496)
static void C_fcall trf_496(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_496(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_496(t0,t1,t2);}

C_noret_decl(trf_525)
static void C_fcall trf_525(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_525(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_525(t0,t1);}

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
C_utils_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_utils_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("utils_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(645)){
C_save(t1);
C_rereclaim2(645*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,95);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],7,"system*");
lf[3]=C_h_intern(&lf[3],9,"\003syserror");
lf[4]=C_decode_literal(C_heaptop,"\376B\000\0003shell invocation failed with non-zero return status");
lf[5]=C_h_intern(&lf[5],6,"system");
lf[6]=C_h_intern(&lf[6],7,"sprintf");
lf[7]=C_h_intern(&lf[7],8,"read-all");
lf[8]=C_h_intern(&lf[8],20,"\003sysread-string/port");
lf[9]=C_h_intern(&lf[9],11,"read-string");
lf[10]=C_h_intern(&lf[10],20,"with-input-from-file");
lf[11]=C_h_intern(&lf[11],5,"port\077");
lf[12]=C_h_intern(&lf[12],18,"\003sysstandard-input");
lf[13]=C_h_intern(&lf[13],2,"qs");
lf[14]=C_h_intern(&lf[14],7,"mingw32");
lf[15]=C_h_intern(&lf[15],13,"string-append");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\002\047\047");
lf[19]=C_h_intern(&lf[19],3,"map");
lf[20]=C_h_intern(&lf[20],18,"string-concatenate");
lf[21]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000#\376\003\000\000\002\376\377\012\000\000\042\376\003\000\000\002\376\377\012\000\000\047\376\003\000\000\002\376\377\012\000\000`\376\003\000\000\002\376\377\012\000\000\264\376\003\000\000\002\376\377\012\000\000~\376\003\000\000\002\376\377\012\000\000&\376\003\000"
"\000\002\376\377\012\000\000%\376\003\000\000\002\376\377\012\000\000$\376\003\000\000\002\376\377\012\000\000!\376\003\000\000\002\376\377\012\000\000*\376\003\000\000\002\376\377\012\000\000;\376\003\000\000\002\376\377\012\000\000<\376\003\000\000\002\376\377\012\000\000>\376\003\000\000\002\376"
"\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000(\376\003\000\000\002\376\377\012\000\000)\376\003\000\000\002\376\377\012\000\000[\376\003\000\000\002\376\377\012\000\000]\376\003\000\000\002\376\377\012\000\000{\376\003\000\000\002\376\377\012\000\000}\376\003\000\000\002\376\377\012\000"
"\000\077\376\377\016");
lf[22]=C_h_intern(&lf[22],16,"\003sysstring->list");
lf[23]=C_h_intern(&lf[23],14,"build-platform");
lf[24]=C_h_intern(&lf[24],20,"compile-file-options");
lf[25]=C_h_intern(&lf[25],4,"load");
lf[26]=C_h_intern(&lf[26],12,"compile-file");
lf[27]=C_h_intern(&lf[27],12,"\000output-file");
lf[28]=C_h_intern(&lf[28],8,"\000verbose");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[30]=C_h_intern(&lf[30],5,"abort");
lf[31]=C_h_intern(&lf[31],12,"delete-file*");
lf[32]=C_h_intern(&lf[32],22,"with-exception-handler");
lf[33]=C_h_intern(&lf[33],30,"call-with-current-continuation");
lf[34]=C_h_intern(&lf[34],7,"on-exit");
lf[35]=C_h_intern(&lf[35],5,"print");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\014; compiling ");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[39]=C_h_intern(&lf[39],17,"get-output-string");
lf[40]=C_h_intern(&lf[40],7,"display");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\004 -o ");
lf[44]=C_h_intern(&lf[44],19,"\003syswrite-char/port");
lf[45]=C_h_intern(&lf[45],18,"string-intersperse");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[47]=C_h_intern(&lf[47],6,"append");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\004 -s ");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[51]=C_h_intern(&lf[51],18,"open-output-string");
lf[52]=C_h_intern(&lf[52],21,"create-temporary-file");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[54]=C_h_intern(&lf[54],12,"file-exists\077");
lf[55]=C_h_intern(&lf[55],13,"make-pathname");
lf[56]=C_h_intern(&lf[56],15,"\003sysget-keyword");
lf[57]=C_h_intern(&lf[57],5,"\000load");
lf[58]=C_h_intern(&lf[58],8,"\000options");
lf[59]=C_h_intern(&lf[59],16,"scan-input-lines");
lf[60]=C_h_intern(&lf[60],9,"read-line");
lf[61]=C_h_intern(&lf[61],14,"irregex-search");
lf[62]=C_h_intern(&lf[62],7,"irregex");
lf[63]=C_h_intern(&lf[63],10,"yes-or-no\077");
lf[64]=C_h_intern(&lf[64],8,"\000default");
lf[65]=C_h_intern(&lf[65],6,"\000title");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\017CHICKEN Runtime");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\003yes");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\005abort");
lf[70]=C_h_intern(&lf[70],17,"\003sysmake-c-string");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\003yes");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[73]=C_h_intern(&lf[73],16,"string-trim-both");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\003yes");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\005abort");
lf[77]=C_h_intern(&lf[77],19,"\003sysstandard-output");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000$Please enter \042yes\042, \042no\042 or \042abort\042.");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\033Please enter \042yes\042 or \042no\042.");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\005abort");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[82]=C_h_intern(&lf[82],12,"flush-output");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\002] ");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\006/abort");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\010 (yes/no");
lf[88]=C_h_intern(&lf[88],5,"reset");
lf[89]=C_h_intern(&lf[89],6,"\000abort");
lf[90]=C_h_intern(&lf[90],17,"\003syspeek-c-string");
lf[91]=C_h_intern(&lf[91],14,"make-parameter");
lf[92]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-S\376\003\000\000\002\376B\000\000\003-O2\376\003\000\000\002\376B\000\000\003-d2\376\377\016");
lf[93]=C_h_intern(&lf[93],17,"register-feature!");
lf[94]=C_h_intern(&lf[94],5,"utils");
C_register_lf2(lf,95,create_ptable());
t2=C_mutate(&lf[0] /* (set! c74 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_364,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k362 */
static void C_ccall f_364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_364,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_367,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k365 in k362 */
static void C_ccall f_367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_370,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k368 in k365 in k362 */
static void C_ccall f_370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_373,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k371 in k368 in k365 in k362 */
static void C_ccall f_373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_376,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k374 in k371 in k368 in k365 in k362 */
static void C_ccall f_376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_379,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* utils.scm:37: register-feature! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(3,*((C_word*)lf[93]+1),t2,lf[94]);}

/* k377 in k374 in k371 in k368 in k365 in k362 */
static void C_ccall f_379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_379,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! system* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_381,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[7]+1 /* (set! read-all ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_399,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[13]+1 /* (set! qs ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_442,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_559,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* utils.scm:80: make-parameter */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[91]+1)))(3,*((C_word*)lf[91]+1),t5,lf[92]);}

/* k557 in k377 in k374 in k371 in k368 in k365 in k362 */
static void C_ccall f_559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_559,2,t0,t1);}
t2=C_mutate((C_word*)lf[24]+1 /* (set! compile-file-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_563,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CSC_PROGRAM),C_fix(0));}

/* k561 in k557 in k377 in k374 in k371 in k368 in k365 in k362 */
static void C_ccall f_563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_563,2,t0,t1);}
t2=*((C_word*)lf[25]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_566,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}

/* k564 in k561 in k557 in k377 in k374 in k371 in k368 in k365 in k362 */
static void C_ccall f_566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_566,2,t0,t1);}
t2=C_mutate((C_word*)lf[26]+1 /* (set! compile-file ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_567,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word)li22),tmp=(C_word)a,a+=6,tmp));
t3=C_mutate((C_word*)lf[59]+1 /* (set! scan-input-lines ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_812,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[63]+1 /* (set! yes-or-no? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_907,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}

/* f_907 in k564 in k561 in k557 in k377 in k374 in k371 in k368 in k365 in k362 */
static void C_ccall f_907(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_907r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_907r(t0,t1,t2,t3);}}

static void C_ccall f_907r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(9);
t4=C_i_get_keyword(lf[64],t3,C_SCHEME_FALSE);
t5=C_i_get_keyword(lf[65],t3,C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_917,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1091,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(5,*((C_word*)lf[56]+1),t6,lf[89],t3,t7);}

/* a1090 */
static void C_ccall f_1091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1091,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[88]+1));}

/* k915 */
static void C_ccall f_917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_917,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_mk_bool(C_HAS_MESSAGE_BOX))){
t3=C_fudge(C_fix(4));
t4=t2;
f_920(t4,C_i_not(t3));}
else{
t3=t2;
f_920(t3,C_SCHEME_FALSE);}}

/* k918 in k915 */
static void C_fcall f_920(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_920,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_922,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word)li26),tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_976,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word*)t0)[4],a[8]=((C_word)li27),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_976(t6,((C_word*)t0)[2]);}

/* loop in k918 in k915 */
static void C_fcall f_976(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_976,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_980,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;
f_980(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=*((C_word*)lf[77]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1051,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* write-char/port */
t5=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(10),t3);}}

/* k1049 in loop in k918 in k915 */
static void C_ccall f_1051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1051,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1054,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k1052 in k1049 in loop in k918 in k915 */
static void C_ccall f_1054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1054,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1057,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,lf[87],((C_word*)t0)[3]);}

/* k1055 in k1052 in k1049 in loop in k918 in k915 */
static void C_ccall f_1057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1057,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1060,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,lf[85],((C_word*)t0)[3]);}
else{
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,lf[86],((C_word*)t0)[3]);}}

/* k1058 in k1055 in k1052 in k1049 in loop in k918 in k915 */
static void C_ccall f_1060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1060,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1063,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,lf[84],((C_word*)t0)[2]);}

/* k1061 in k1058 in k1055 in k1052 in k1049 in loop in k918 in k915 */
static void C_ccall f_1063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1063,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1066,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=*((C_word*)lf[77]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1072,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t5=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(91),t3);}
else{
/* utils.scm:192: flush-output */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[82]+1)))(2,*((C_word*)lf[82]+1),((C_word*)t0)[3]);}}

/* k1070 in k1061 in k1058 in k1055 in k1052 in k1049 in loop in k918 in k915 */
static void C_ccall f_1072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1072,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1075,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1073 in k1070 in k1061 in k1058 in k1055 in k1052 in k1049 in loop in k918 in k915 */
static void C_ccall f_1075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),((C_word*)t0)[3],lf[83],((C_word*)t0)[2]);}

/* k1064 in k1061 in k1058 in k1055 in k1052 in k1049 in loop in k918 in k915 */
static void C_ccall f_1066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:192: flush-output */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[82]+1)))(2,*((C_word*)lf[82]+1),((C_word*)t0)[2]);}

/* k978 in loop in k918 in k915 */
static void C_ccall f_980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_983,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* utils.scm:193: get-input */
t3=((C_word*)t0)[2];
f_922(t3,t2);}

/* k981 in k978 in loop in k918 in k915 */
static void C_ccall f_983(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_983,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_986,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_eofp(((C_word*)t3)[1]))){
t5=C_set_block_item(t3,0,lf[80]);
t6=t4;
f_986(t6,t5);}
else{
if(C_truep(((C_word*)t0)[2])){
if(C_truep(C_i_string_equal_p(lf[81],((C_word*)t3)[1]))){
t5=C_set_block_item(t3,0,((C_word*)t0)[2]);
t6=t4;
f_986(t6,t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t4;
f_986(t6,t5);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t4;
f_986(t6,t5);}}}

/* k984 in k981 in k978 in loop in k918 in k915 */
static void C_fcall f_986(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_986,NULL,2,t0,t1);}
if(C_truep(C_i_string_ci_equal_p(lf[74],((C_word*)((C_word*)t0)[5])[1]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}
else{
if(C_truep(C_i_string_ci_equal_p(lf[75],((C_word*)((C_word*)t0)[5])[1]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_truep(((C_word*)t0)[3])?C_i_string_ci_equal_p(lf[76],((C_word*)((C_word*)t0)[5])[1]):C_SCHEME_FALSE);
if(C_truep(t2)){
/* utils.scm:198: abort */
t3=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1010,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=*((C_word*)lf[77]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1016,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t6=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_make_character(10),t4);}
else{
t4=*((C_word*)lf[77]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1025,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t6=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_make_character(10),t4);}}}}}

/* k1023 in k984 in k981 in k978 in loop in k918 in k915 */
static void C_ccall f_1025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1025,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1028,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,lf[79],((C_word*)t0)[2]);}

/* k1026 in k1023 in k984 in k981 in k978 in loop in k918 in k915 */
static void C_ccall f_1028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* k1014 in k984 in k981 in k978 in loop in k918 in k915 */
static void C_ccall f_1016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1016,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1019,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,lf[78],((C_word*)t0)[2]);}

/* k1017 in k1014 in k984 in k981 in k978 in loop in k918 in k915 */
static void C_ccall f_1019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* k1008 in k984 in k981 in k978 in loop in k918 in k915 */
static void C_ccall f_1010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:203: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_976(t2,((C_word*)t0)[2]);}

/* get-input in k918 in k915 */
static void C_fcall f_922(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_922,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[6])){
t2=(C_truep(((C_word*)t0)[5])?((C_word*)t0)[5]:lf[66]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_949,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
if(C_truep(C_i_string_ci_equal_p(((C_word*)t0)[2],lf[71]))){
t4=t3;
f_949(t4,C_fix(0));}
else{
t4=C_i_string_ci_equal_p(((C_word*)t0)[2],lf[72]);
t5=t3;
f_949(t5,(C_truep(t4)?C_fix(1):C_fix(2)));}}
else{
t4=t3;
f_949(t4,C_fix(3));}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_971,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* utils.scm:187: read-line */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(2,*((C_word*)lf[60]+1),t2);}}

/* k969 in get-input in k918 in k915 */
static void C_ccall f_971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:187: string-trim-both */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[73]+1)))(3,*((C_word*)lf[73]+1),((C_word*)t0)[2],t1);}

/* k947 in get-input in k918 in k915 */
static void C_fcall f_949(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_949,NULL,2,t0,t1);}
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_884,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t5=C_i_foreign_string_argumentp(t2);
/* ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(3,*((C_word*)lf[70]+1),t4,t5);}
else{
t5=t4;
f_884(2,t5,C_SCHEME_FALSE);}}

/* k882 in k947 in get-input in k918 in k915 */
static void C_ccall f_884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_884,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_888,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_i_foreign_string_argumentp(((C_word*)t0)[2]);
/* ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(3,*((C_word*)lf[70]+1),t2,t3);}
else{
t3=t2;
f_888(2,t3,C_SCHEME_FALSE);}}

/* k886 in k882 in k947 in get-input in k918 in k915 */
static void C_ccall f_888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t3=stub250(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t2,((C_word*)t0)[3]);
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[67]);}
else{
t5=C_eqp(t3,C_fix(1));
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?lf[68]:lf[69]));}}

/* f_812 in k564 in k561 in k557 in k377 in k374 in k371 in k368 in k365 in k362 */
static void C_ccall f_812(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_812r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_812r(t0,t1,t2,t3);}}

static void C_ccall f_812r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_816,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_816(2,t5,*((C_word*)lf[12]+1));}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_816(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k814 */
static void C_ccall f_816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_816,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_819,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_closurep(((C_word*)t0)[2]))){
t3=t2;
f_819(t3,((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_853,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* utils.scm:122: irregex */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(3,*((C_word*)lf[62]+1),t3,((C_word*)t0)[2]);}}

/* k851 in k814 */
static void C_ccall f_853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_853,2,t0,t1);}
t2=*((C_word*)lf[61]+1);
t3=((C_word*)t0)[2];
f_819(t3,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_854,a[2]=t1,a[3]=t2,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));}

/* f_854 in k851 in k814 */
static void C_ccall f_854(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_854,3,t0,t1,t2);}
/* g228229235 */
t3=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}

/* k817 in k814 */
static void C_fcall f_819(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_819,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_824,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word)li23),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_824(t5,((C_word*)t0)[2]);}

/* loop in k817 in k814 */
static void C_fcall f_824(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_824,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_828,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* utils.scm:124: read-line */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(3,*((C_word*)lf[60]+1),t2,((C_word*)t0)[2]);}

/* k826 in loop in k817 in k814 */
static void C_ccall f_828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_828,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_837,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:126: rx */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}}

/* k835 in k826 in loop in k817 in k814 */
static void C_ccall f_837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* utils.scm:127: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_824(t2,((C_word*)t0)[3]);}}

/* f_567 in k564 in k561 in k557 in k377 in k374 in k371 in k368 in k365 in k362 */
static void C_ccall f_567(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_567r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_567r(t0,t1,t2,t3);}}

static void C_ccall f_567r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(11);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_809,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(5,*((C_word*)lf[56]+1),t4,lf[58],t3,t5);}

/* a808 */
static void C_ccall f_809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_809,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}

/* k569 */
static void C_ccall f_571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_571,2,t0,t1);}
t2=C_i_get_keyword(lf[27],((C_word*)t0)[7],C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_806,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(5,*((C_word*)lf[56]+1),t3,lf[57],((C_word*)t0)[7],t4);}

/* a805 in k569 */
static void C_ccall f_806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_806,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k575 in k569 */
static void C_ccall f_577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_577,2,t0,t1);}
t2=C_i_get_keyword(lf[28],((C_word*)t0)[9],C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_583,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_804,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* utils.scm:87: make-pathname */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[55]+1)))(4,*((C_word*)lf[55]+1),t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k802 in k575 in k569 */
static void C_ccall f_804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:87: file-exists? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[54]+1)))(3,*((C_word*)lf[54]+1),((C_word*)t0)[2],t1);}

/* k581 in k575 in k569 */
static void C_ccall f_583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_583,2,t0,t1);}
t2=(C_truep(t1)?t1:lf[29]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_589,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
t4=t3;
f_589(2,t4,C_SCHEME_FALSE);}
else{
/* utils.scm:88: create-temporary-file */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[52]+1)))(3,*((C_word*)lf[52]+1),t3,lf[53]);}}

/* k587 in k581 in k575 in k569 */
static void C_ccall f_589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_589,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_794,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* utils.scm:89: build-platform */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(2,*((C_word*)lf[23]+1),t2);}

/* k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_794,2,t0,t1);}
t2=C_eqp(t1,lf[14]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_595,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[51]+1)))(2,*((C_word*)lf[51]+1),t3);}

/* k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_595,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[4])){
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,lf[49],t1);}
else{
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,lf[50],t1);}}

/* k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_598,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_601,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_786,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* utils.scm:92: qs */
t4=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k784 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_601,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,lf[48],((C_word*)t0)[4]);}

/* k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_604,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_607,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_774,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_778,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_782,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* utils.scm:93: compile-file-options */
t6=*((C_word*)lf[24]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k780 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:93: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[47]+1)))(4,*((C_word*)lf[47]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k776 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:93: string-intersperse */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),((C_word*)t0)[2],t1,lf[46]);}

/* k772 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_607,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* write-char/port */
t3=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[3]);}

/* k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_610,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_613,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_770,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* utils.scm:94: qs */
t4=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k768 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_613,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,lf[43],((C_word*)t0)[3]);}

/* k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_616,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_762,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[9])){
/* utils.scm:95: qs */
t4=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[9]);}
else{
t4=((C_word*)t0)[8];
/* utils.scm:95: qs */
t5=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}

/* k760 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_622,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[2])){
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,lf[41],((C_word*)t0)[3]);}
else{
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,lf[42],((C_word*)t0)[3]);}}

/* k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_622,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_625,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[39]+1)))(3,*((C_word*)lf[39]+1),t2,((C_word*)t0)[2]);}

/* k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_625,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_628,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* utils.scm:97: print */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(5,*((C_word*)lf[35]+1),t2,lf[37],((C_word*)t0)[2],lf[38]);}

/* k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_628,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_631,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
/* utils.scm:98: print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),t2,lf[36],((C_word*)t0)[3]);}
else{
t3=t2;
f_631(2,t3,C_SCHEME_UNDEFINED);}}

/* k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_631,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_634,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* utils.scm:99: system */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(3,*((C_word*)lf[5]+1),t2,((C_word*)t0)[2]);}

/* k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_634,2,t0,t1);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_643,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[5])){
t4=t3;
f_643(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_705,a[2]=((C_word*)t0)[4],a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
/* utils.scm:102: on-exit */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(3,*((C_word*)lf[34]+1),t3,t4);}}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a704 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_709,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_714,a[2]=((C_word*)t0)[2],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(3,*((C_word*)lf[33]+1),t2,t3);}

/* a713 in a704 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_714(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_714,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_720,a[2]=t2,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_729,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[32]+1)))(4,*((C_word*)lf[32]+1),t1,t3,t4);}

/* a728 in a713 in a704 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_729,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_735,a[2]=((C_word*)t0)[3],a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_741,a[2]=((C_word*)t0)[2],a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a740 in a728 in a713 in a704 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_741(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_741r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_741r(t0,t1,t2);}}

static void C_ccall f_741r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_747,a[2]=t2,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
/* k183189 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a746 in a740 in a728 in a713 in a704 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_747,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a734 in a728 in a713 in a704 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_735,2,t0,t1);}
/* utils.scm:104: delete-file* */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[31]+1)))(3,*((C_word*)lf[31]+1),t1,((C_word*)t0)[2]);}

/* a719 in a713 in a704 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_720(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_720,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_726,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
/* k183189 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a725 in a719 in a713 in a704 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_726,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k707 in a704 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g187188 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k641 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_643,2,t0,t1);}
if(C_truep(((C_word*)t0)[6])){
t2=(C_truep(((C_word*)t0)[5])?((C_word*)t0)[5]:((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_652,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_657,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
/* call-with-current-continuation */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(3,*((C_word*)lf[33]+1),t3,t4);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* a656 in k641 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_657(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_657,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_663,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_678,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp);
/* with-exception-handler */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[32]+1)))(4,*((C_word*)lf[32]+1),t1,t3,t4);}

/* a677 in a656 in k641 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_678,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_684,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_690,a[2]=((C_word*)t0)[2],a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a689 in a677 in a656 in k641 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_690(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_690r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_690r(t0,t1,t2);}}

static void C_ccall f_690r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_696,a[2]=t2,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
/* k196202 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a695 in a689 in a677 in a656 in k641 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_696,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a683 in a677 in a656 in k641 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_688,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* utils.scm:111: load-file */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}

/* k686 in a683 in a677 in a656 in k641 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a662 in a656 in k641 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_663(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_663,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_669,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp);
/* k196202 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a668 in a662 in a656 in k641 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_669,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_673,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* utils.scm:109: delete-file* */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[31]+1)))(3,*((C_word*)lf[31]+1),t2,((C_word*)t0)[2]);}

/* k671 in a668 in a662 in a656 in k641 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:110: abort */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[30]+1)))(3,*((C_word*)lf[30]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k650 in k641 in k632 in k629 in k626 in k623 in k620 in k617 in k614 in k611 in k608 in k605 in k602 in k599 in k596 in k593 in k792 in k587 in k581 in k575 in k569 */
static void C_ccall f_652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g200201 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* f_442 in k377 in k374 in k371 in k368 in k365 in k362 */
static void C_ccall f_442(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_442r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_442r(t0,t1,t2,t3);}}

static void C_ccall f_442r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_446,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* utils.scm:61: build-platform */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(2,*((C_word*)lf[23]+1),t4);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_446(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k444 */
static void C_ccall f_446(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_446,2,t0,t1);}
t2=C_eqp(t1,lf[14]);
if(C_truep(t2)){
/* utils.scm:64: string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(5,*((C_word*)lf[15]+1),((C_word*)t0)[3],lf[16],((C_word*)t0)[2],lf[17]);}
else{
t3=C_i_string_length(((C_word*)t0)[2]);
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[18]);}
else{
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_488,a[2]=t6,a[3]=t8,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* string->list */
t10=*((C_word*)lf[22]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,((C_word*)t0)[2]);}}}

/* k486 in k444 */
static void C_ccall f_488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_488,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[19]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_494,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_496,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_496(t7,t3,t1);}

/* map-loop101 in k486 in k444 */
static void C_fcall f_496(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_496,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_525,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_u_i_char_whitespacep(t4);
if(C_truep(t5)){
t6=t3;
f_525(t6,(C_truep(t5)?C_a_i_string(&a,2,C_make_character(92),t4):C_a_i_string(&a,1,t4)));}
else{
t6=C_i_memq(t4,lf[21]);
t7=t3;
f_525(t7,(C_truep(t6)?C_a_i_string(&a,2,C_make_character(92),t4):C_a_i_string(&a,1,t4)));}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k523 in map-loop101 in k486 in k444 */
static void C_fcall f_525(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_525,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_496(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_496(t6,((C_word*)t0)[3],t5);}}

/* k492 in k486 in k444 */
static void C_ccall f_494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:68: string-concatenate */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[20]+1)))(3,*((C_word*)lf[20]+1),((C_word*)t0)[2],t1);}

/* f_399 in k377 in k374 in k371 in k368 in k365 in k362 */
static void C_ccall f_399(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_399r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_399r(t0,t1,t2);}}

static void C_ccall f_399r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_403,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_403(2,t4,*((C_word*)lf[12]+1));}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_403(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k401 */
static void C_ccall f_403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_403,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_409,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:54: port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t2,t1);}

/* k407 in k401 */
static void C_ccall f_409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_409,2,t0,t1);}
if(C_truep(t1)){
/* read-string/port */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_417,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
/* utils.scm:56: with-input-from-file */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* a416 in k407 in k401 */
static void C_ccall f_417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_417,2,t0,t1);}
t2=*((C_word*)lf[9]+1);
/* g7879 */
t3=t2;
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t1,C_SCHEME_FALSE);}

/* f_381 in k377 in k374 in k371 in k368 in k365 in k362 */
static void C_ccall f_381(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_381r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_381r(t0,t1,t2,t3);}}

static void C_ccall f_381r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_385,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t4,*((C_word*)lf[6]+1),t2,t3);}

/* k383 */
static void C_ccall f_385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_385,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_388,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:45: system */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(3,*((C_word*)lf[5]+1),t2,t1);}

/* k386 in k383 */
static void C_ccall f_388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* utils.scm:47: ##sys#error */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[4],((C_word*)t0)[2],t1);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[107] = {
{"toplevel:utils_2escm",(void*)C_utils_toplevel},
{"f_364:utils_2escm",(void*)f_364},
{"f_367:utils_2escm",(void*)f_367},
{"f_370:utils_2escm",(void*)f_370},
{"f_373:utils_2escm",(void*)f_373},
{"f_376:utils_2escm",(void*)f_376},
{"f_379:utils_2escm",(void*)f_379},
{"f_559:utils_2escm",(void*)f_559},
{"f_563:utils_2escm",(void*)f_563},
{"f_566:utils_2escm",(void*)f_566},
{"f_907:utils_2escm",(void*)f_907},
{"f_1091:utils_2escm",(void*)f_1091},
{"f_917:utils_2escm",(void*)f_917},
{"f_920:utils_2escm",(void*)f_920},
{"f_976:utils_2escm",(void*)f_976},
{"f_1051:utils_2escm",(void*)f_1051},
{"f_1054:utils_2escm",(void*)f_1054},
{"f_1057:utils_2escm",(void*)f_1057},
{"f_1060:utils_2escm",(void*)f_1060},
{"f_1063:utils_2escm",(void*)f_1063},
{"f_1072:utils_2escm",(void*)f_1072},
{"f_1075:utils_2escm",(void*)f_1075},
{"f_1066:utils_2escm",(void*)f_1066},
{"f_980:utils_2escm",(void*)f_980},
{"f_983:utils_2escm",(void*)f_983},
{"f_986:utils_2escm",(void*)f_986},
{"f_1025:utils_2escm",(void*)f_1025},
{"f_1028:utils_2escm",(void*)f_1028},
{"f_1016:utils_2escm",(void*)f_1016},
{"f_1019:utils_2escm",(void*)f_1019},
{"f_1010:utils_2escm",(void*)f_1010},
{"f_922:utils_2escm",(void*)f_922},
{"f_971:utils_2escm",(void*)f_971},
{"f_949:utils_2escm",(void*)f_949},
{"f_884:utils_2escm",(void*)f_884},
{"f_888:utils_2escm",(void*)f_888},
{"f_812:utils_2escm",(void*)f_812},
{"f_816:utils_2escm",(void*)f_816},
{"f_853:utils_2escm",(void*)f_853},
{"f_854:utils_2escm",(void*)f_854},
{"f_819:utils_2escm",(void*)f_819},
{"f_824:utils_2escm",(void*)f_824},
{"f_828:utils_2escm",(void*)f_828},
{"f_837:utils_2escm",(void*)f_837},
{"f_567:utils_2escm",(void*)f_567},
{"f_809:utils_2escm",(void*)f_809},
{"f_571:utils_2escm",(void*)f_571},
{"f_806:utils_2escm",(void*)f_806},
{"f_577:utils_2escm",(void*)f_577},
{"f_804:utils_2escm",(void*)f_804},
{"f_583:utils_2escm",(void*)f_583},
{"f_589:utils_2escm",(void*)f_589},
{"f_794:utils_2escm",(void*)f_794},
{"f_595:utils_2escm",(void*)f_595},
{"f_598:utils_2escm",(void*)f_598},
{"f_786:utils_2escm",(void*)f_786},
{"f_601:utils_2escm",(void*)f_601},
{"f_604:utils_2escm",(void*)f_604},
{"f_782:utils_2escm",(void*)f_782},
{"f_778:utils_2escm",(void*)f_778},
{"f_774:utils_2escm",(void*)f_774},
{"f_607:utils_2escm",(void*)f_607},
{"f_610:utils_2escm",(void*)f_610},
{"f_770:utils_2escm",(void*)f_770},
{"f_613:utils_2escm",(void*)f_613},
{"f_616:utils_2escm",(void*)f_616},
{"f_762:utils_2escm",(void*)f_762},
{"f_619:utils_2escm",(void*)f_619},
{"f_622:utils_2escm",(void*)f_622},
{"f_625:utils_2escm",(void*)f_625},
{"f_628:utils_2escm",(void*)f_628},
{"f_631:utils_2escm",(void*)f_631},
{"f_634:utils_2escm",(void*)f_634},
{"f_705:utils_2escm",(void*)f_705},
{"f_714:utils_2escm",(void*)f_714},
{"f_729:utils_2escm",(void*)f_729},
{"f_741:utils_2escm",(void*)f_741},
{"f_747:utils_2escm",(void*)f_747},
{"f_735:utils_2escm",(void*)f_735},
{"f_720:utils_2escm",(void*)f_720},
{"f_726:utils_2escm",(void*)f_726},
{"f_709:utils_2escm",(void*)f_709},
{"f_643:utils_2escm",(void*)f_643},
{"f_657:utils_2escm",(void*)f_657},
{"f_678:utils_2escm",(void*)f_678},
{"f_690:utils_2escm",(void*)f_690},
{"f_696:utils_2escm",(void*)f_696},
{"f_684:utils_2escm",(void*)f_684},
{"f_688:utils_2escm",(void*)f_688},
{"f_663:utils_2escm",(void*)f_663},
{"f_669:utils_2escm",(void*)f_669},
{"f_673:utils_2escm",(void*)f_673},
{"f_652:utils_2escm",(void*)f_652},
{"f_442:utils_2escm",(void*)f_442},
{"f_446:utils_2escm",(void*)f_446},
{"f_488:utils_2escm",(void*)f_488},
{"f_496:utils_2escm",(void*)f_496},
{"f_525:utils_2escm",(void*)f_525},
{"f_494:utils_2escm",(void*)f_494},
{"f_399:utils_2escm",(void*)f_399},
{"f_403:utils_2escm",(void*)f_403},
{"f_409:utils_2escm",(void*)f_409},
{"f_417:utils_2escm",(void*)f_417},
{"f_381:utils_2escm",(void*)f_381},
{"f_385:utils_2escm",(void*)f_385},
{"f_388:utils_2escm",(void*)f_388},
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
