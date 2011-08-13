/* Generated from setup-download.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:18
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: setup-download.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -feature chicken-compile-shared -dynamic -emit-import-library setup-download -output-file setup-download.c
   used units: library eval extras irregex posix utils srfi_2d1 data_2dstructures tcp srfi_2d13 files
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_tcp_toplevel)
C_externimport void C_ccall C_tcp_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[235];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,34),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,100,32,102,115,116,114,49,56,56,32,97,114,103,115,49,56,57,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,40),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,103,101,116,45,116,101,109,112,111,114,97,114,121,45,100,105,114,101,99,116,111,114,121,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,57),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,101,120,105,115,116,105,110,103,45,118,101,114,115,105,111,110,32,101,103,103,50,48,48,32,118,101,114,115,105,111,110,50,48,49,32,118,115,50,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,7),40,97,49,50,52,52,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,55,54,32,103,51,56,50,51,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,18),40,97,49,52,48,56,32,103,51,54,57,51,55,48,51,55,49,41,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,33),40,97,49,50,56,49,32,115,114,99,51,49,52,51,49,53,51,50,49,32,118,101,114,51,49,54,51,49,55,51,50,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,34),40,102,95,49,50,48,51,32,101,103,103,50,57,49,32,100,105,114,50,57,50,32,46,32,116,109,112,50,57,48,50,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,7),40,97,49,52,57,55,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,7),40,97,49,53,53,53,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,13),40,97,49,53,52,57,32,101,120,52,49,54,41,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,7),40,97,49,53,55,48,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,7),40,97,49,53,56,50,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,20),40,97,49,53,55,54,32,46,32,97,114,103,115,52,49,48,52,49,56,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,7),40,97,49,53,54,52,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,15),40,97,49,53,52,51,32,107,52,48,57,52,49,53,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,17),40,97,49,53,49,56,32,114,101,116,117,114,110,52,48,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,37),40,97,49,53,48,51,32,108,111,99,51,57,56,51,57,57,52,48,50,32,118,101,114,115,105,111,110,52,48,48,52,48,49,52,48,51,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,14),40,97,49,52,57,49,32,101,103,103,51,57,55,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,15),40,102,95,49,52,56,51,32,100,105,114,51,57,53,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,66),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,109,97,107,101,45,115,118,110,45,108,115,45,99,109,100,32,117,97,114,103,52,50,53,32,112,97,114,103,52,50,54,32,112,110,97,109,52,50,55,32,116,109,112,52,50,52,52,50,56,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,7),40,97,49,57,50,57,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,37),40,97,49,57,53,55,32,102,105,108,101,100,105,114,53,54,52,53,54,53,53,54,57,32,118,101,114,53,54,54,53,54,55,53,55,48,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,12),40,97,50,48,50,51,32,102,53,54,50,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,35),40,102,95,49,56,55,54,32,101,103,103,53,52,48,32,114,101,112,111,53,52,49,32,46,32,116,109,112,53,51,57,53,52,50,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,7),40,97,50,49,57,56,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,7),40,97,50,52,52,48,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,50,53,57,49,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,20),40,103,101,116,45,102,105,108,101,115,32,102,105,108,101,115,55,51,53,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,20),40,103,101,116,45,99,104,117,110,107,115,32,100,97,116,97,55,55,51,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,7),40,97,50,54,53,56,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,36),40,97,50,54,54,52,32,105,110,112,120,55,49,51,55,49,52,55,49,55,32,111,117,116,112,120,55,49,53,55,49,54,55,49,56,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,32),40,97,50,52,53,52,32,105,110,54,57,54,54,57,55,55,48,54,32,111,117,116,54,57,56,54,57,57,55,48,55,41};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,49),40,97,50,50,48,52,32,104,111,115,116,54,50,51,54,50,52,54,50,57,32,112,111,114,116,54,50,53,54,50,54,54,51,48,32,108,111,99,110,54,50,55,54,50,56,54,51,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,34),40,102,95,50,49,52,56,32,101,103,103,53,57,56,32,117,114,108,53,57,57,32,46,32,116,109,112,53,57,55,54,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,7),40,97,50,51,56,52,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,50,51,56,55,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,7),40,97,50,51,57,48,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,7),40,97,50,51,57,51,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,78),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,109,97,107,101,45,72,84,84,80,45,71,69,84,47,49,46,49,32,108,111,99,97,116,105,111,110,54,53,49,32,117,115,101,114,45,97,103,101,110,116,54,53,50,32,104,111,115,116,54,53,51,32,116,109,112,54,53,48,54,53,52,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,53),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,114,101,115,112,111,110,115,101,45,109,97,116,99,104,45,99,111,100,101,63,32,109,114,115,112,54,54,54,32,99,111,100,101,54,54,55,41,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,7),40,97,50,56,50,53,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,50,56,51,52,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,50,56,54,55,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,7),40,97,50,56,55,54,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,53),40,102,95,50,55,56,52,32,110,97,109,101,55,57,48,32,116,114,97,110,115,112,111,114,116,55,57,49,32,108,111,99,97,116,105,111,110,55,57,50,32,46,32,116,109,112,55,56,57,55,57,51,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,50,56,57,52,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,49,50,32,103,50,50,52,50,51,56,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,52,53,56,32,103,52,55,48,52,55,55,41,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,7),40,97,50,56,57,57,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,7),40,97,50,57,50,51,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,45),40,102,95,50,56,56,48,32,116,114,97,110,115,112,111,114,116,56,52,55,32,108,111,99,97,116,105,111,110,56,52,56,32,46,32,116,109,112,56,52,54,56,52,57,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,7),40,97,50,57,52,51,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,53,51,32,103,50,54,53,50,55,57,41,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,48,57,32,103,53,50,49,53,50,56,41,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,7),40,97,50,57,52,56,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,7),40,97,50,57,55,50,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,53),40,102,95,50,57,50,57,32,110,97,109,101,56,55,52,32,116,114,97,110,115,112,111,114,116,56,55,53,32,108,111,99,97,116,105,111,110,56,55,54,32,46,32,116,109,112,56,55,51,56,55,55,41,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_952)
static void C_ccall f_952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_955)
static void C_ccall f_955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_958)
static void C_ccall f_958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_961)
static void C_ccall f_961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_964)
static void C_ccall f_964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_967)
static void C_ccall f_967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_970)
static void C_ccall f_970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_973)
static void C_ccall f_973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_976)
static void C_ccall f_976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_979)
static void C_ccall f_979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_982)
static void C_ccall f_982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_985)
static void C_ccall f_985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_989)
static void C_ccall f_989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_992)
static void C_ccall f_992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_995)
static void C_ccall f_995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1000)
static void C_ccall f_1000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1025)
static void C_ccall f_1025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2929)
static void C_ccall f_2929(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2929)
static void C_ccall f_2929r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2949)
static void C_ccall f_2949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1761)
static void C_ccall f_1761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1764)
static void C_ccall f_1764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1837)
static void C_ccall f_1837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1767)
static void C_ccall f_1767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1770)
static void C_ccall f_1770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1792)
static void C_ccall f_1792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1800)
static void C_fcall f_1800(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1829)
static void C_ccall f_1829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1798)
static void C_ccall f_1798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1201)
static void C_ccall f_1201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1138)
static void C_ccall f_1138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1144)
static void C_ccall f_1144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1156)
static void C_ccall f_1156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1164)
static void C_fcall f_1164(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1193)
static void C_ccall f_1193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1162)
static void C_ccall f_1162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2944)
static void C_ccall f_2944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2880)
static void C_ccall f_2880(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2880)
static void C_ccall f_2880r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2900)
static void C_ccall f_2900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1638)
static void C_ccall f_1638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1647)
static void C_ccall f_1647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1663)
static void C_ccall f_1663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1671)
static void C_fcall f_1671(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1660)
static void C_ccall f_1660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1669)
static void C_ccall f_1669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1091)
static void C_ccall f_1091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1099)
static void C_fcall f_1099(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1128)
static void C_ccall f_1128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1097)
static void C_ccall f_1097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2895)
static void C_ccall f_2895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2784)
static void C_ccall f_2784(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2784)
static void C_ccall f_2784r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2877)
static void C_ccall f_2877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2818)
static void C_ccall f_2818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2868)
static void C_ccall f_2868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2826)
static void C_ccall f_2826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2409)
static void C_fcall f_2409(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2424)
static void C_ccall f_2424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2344)
static void C_fcall f_2344(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2394)
static void C_ccall f_2394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2348)
static void C_ccall f_2348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2391)
static void C_ccall f_2391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2351)
static void C_ccall f_2351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2388)
static void C_ccall f_2388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2385)
static void C_ccall f_2385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2377)
static void C_ccall f_2377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2148)
static void C_ccall f_2148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2148)
static void C_ccall f_2148r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2205)
static void C_ccall f_2205(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2235)
static void C_ccall f_2235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2209)
static void C_ccall f_2209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2212)
static void C_ccall f_2212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2228)
static void C_ccall f_2228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2215)
static void C_ccall f_2215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2695)
static void C_ccall f_2695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2698)
static void C_ccall f_2698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2704)
static void C_ccall f_2704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2707)
static void C_ccall f_2707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2710)
static void C_ccall f_2710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2692)
static void C_ccall f_2692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2436)
static void C_ccall f_2436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2455)
static void C_ccall f_2455(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2459)
static void C_ccall f_2459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2688)
static void C_ccall f_2688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2462)
static void C_ccall f_2462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2465)
static void C_ccall f_2465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2468)
static void C_ccall f_2468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2471)
static void C_ccall f_2471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2474)
static void C_ccall f_2474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2654)
static void C_ccall f_2654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2681)
static void C_ccall f_2681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2338)
static void C_ccall f_2338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2665)
static void C_ccall f_2665(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2675)
static void C_ccall f_2675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2659)
static void C_ccall f_2659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2480)
static void C_ccall f_2480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2628)
static void C_fcall f_2628(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2632)
static void C_ccall f_2632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2650)
static void C_ccall f_2650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f3130)
static void C_ccall f3130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f3126)
static void C_ccall f3126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2483)
static void C_ccall f_2483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2616)
static void C_ccall f_2616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2743)
static void C_fcall f_2743(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2782)
static void C_ccall f_2782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2768)
static void C_ccall f_2768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2771)
static void C_ccall f_2771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2759)
static void C_ccall f_2759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2619)
static void C_ccall f_2619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2486)
static void C_fcall f_2486(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2489)
static void C_ccall f_2489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2494)
static void C_fcall f_2494(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2504)
static void C_fcall f_2504(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2548)
static void C_ccall f_2548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2570)
static void C_ccall f_2570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2573)
static void C_ccall f_2573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2592)
static void C_ccall f_2592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2579)
static void C_ccall f_2579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2554)
static void C_ccall f_2554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2564)
static void C_ccall f_2564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2527)
static void C_ccall f_2527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2735)
static void C_ccall f_2735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2731)
static void C_ccall f_2731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2723)
static void C_ccall f_2723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2441)
static void C_ccall f_2441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2218)
static void C_ccall f_2218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2199)
static void C_ccall f_2199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2107)
static void C_ccall f_2107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2128)
static void C_ccall f_2128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2131)
static void C_ccall f_2131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2118)
static void C_ccall f_2118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2122)
static void C_ccall f_2122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1910)
static void C_ccall f_1910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2038)
static void C_ccall f_2038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1919)
static void C_ccall f_1919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1922)
static void C_ccall f_1922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2024)
static void C_ccall f_2024(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2028)
static void C_ccall f_2028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2022)
static void C_ccall f_2022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1925)
static void C_ccall f_1925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1958)
static void C_ccall f_1958(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2015)
static void C_ccall f_2015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1962)
static void C_ccall f_1962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2005)
static void C_ccall f_2005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1988)
static void C_ccall f_1988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1998)
static void C_ccall f_1998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1992)
static void C_ccall f_1992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1965)
static void C_ccall f_1965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1968)
static void C_ccall f_1968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1984)
static void C_ccall f_1984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1930)
static void C_ccall f_1930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1944)
static void C_ccall f_1944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1941)
static void C_ccall f_1941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1589)
static void C_fcall f_1589(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1604)
static void C_ccall f_1604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1487)
static void C_ccall f_1487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1504)
static void C_ccall f_1504(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1508)
static void C_ccall f_1508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1514)
static void C_ccall f_1514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1519)
static void C_ccall f_1519(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1527)
static void C_ccall f_1527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1544)
static void C_ccall f_1544(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1565)
static void C_ccall f_1565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1577)
static void C_ccall f_1577(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1577)
static void C_ccall f_1577r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1583)
static void C_ccall f_1583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1571)
static void C_ccall f_1571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1556)
static void C_ccall f_1556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1539)
static void C_ccall f_1539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1498)
static void C_ccall f_1498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1203)
static void C_ccall f_1203(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1203)
static void C_ccall f_1203r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1231)
static void C_ccall f_1231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1234)
static void C_ccall f_1234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1429)
static void C_ccall f_1429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1435)
static void C_ccall f_1435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1442)
static void C_ccall f_1442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1237)
static void C_ccall f_1237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1240)
static void C_ccall f_1240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1282)
static void C_ccall f_1282(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1417)
static void C_ccall f_1417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1409)
static void C_ccall f_1409(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1370)
static void C_ccall f_1370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1386)
static void C_fcall f_1386(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1375)
static void C_ccall f_1375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1396)
static void C_ccall f_1396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1364)
static void C_ccall f_1364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1289)
static void C_ccall f_1289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1361)
static void C_ccall f_1361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1357)
static void C_ccall f_1357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1338)
static void C_ccall f_1338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1341)
static void C_ccall f_1341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1344)
static void C_ccall f_1344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1347)
static void C_ccall f_1347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1350)
static void C_ccall f_1350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1320)
static void C_ccall f_1320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1323)
static void C_ccall f_1323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1326)
static void C_ccall f_1326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1329)
static void C_ccall f_1329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1332)
static void C_ccall f_1332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1298)
static void C_ccall f_1298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1301)
static void C_ccall f_1301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1245)
static void C_ccall f_1245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1259)
static void C_ccall f_1259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1262)
static void C_ccall f_1262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1268)
static void C_ccall f_1268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1256)
static void C_ccall f_1256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1042)
static void C_fcall f_1042(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1058)
static void C_ccall f_1058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1027)
static void C_fcall f_1027(C_word t0) C_noret;
C_noret_decl(f_1031)
static void C_ccall f_1031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1037)
static void C_ccall f_1037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1040)
static void C_ccall f_1040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1005)
static void C_fcall f_1005(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1009)
static void C_ccall f_1009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1012)
static void C_ccall f_1012(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1800)
static void C_fcall trf_1800(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1800(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1800(t0,t1,t2);}

C_noret_decl(trf_1164)
static void C_fcall trf_1164(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1164(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1164(t0,t1,t2);}

C_noret_decl(trf_1671)
static void C_fcall trf_1671(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1671(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1671(t0,t1,t2);}

C_noret_decl(trf_1099)
static void C_fcall trf_1099(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1099(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1099(t0,t1,t2);}

C_noret_decl(trf_2409)
static void C_fcall trf_2409(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2409(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2409(t0,t1,t2);}

C_noret_decl(trf_2344)
static void C_fcall trf_2344(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2344(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2344(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2628)
static void C_fcall trf_2628(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2628(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2628(t0,t1);}

C_noret_decl(trf_2743)
static void C_fcall trf_2743(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2743(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2743(t0,t1,t2);}

C_noret_decl(trf_2486)
static void C_fcall trf_2486(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2486(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2486(t0,t1);}

C_noret_decl(trf_2494)
static void C_fcall trf_2494(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2494(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2494(t0,t1,t2);}

C_noret_decl(trf_2504)
static void C_fcall trf_2504(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2504(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2504(t0,t1);}

C_noret_decl(trf_1589)
static void C_fcall trf_1589(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1589(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1589(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1386)
static void C_fcall trf_1386(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1386(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1386(t0,t1,t2);}

C_noret_decl(trf_1042)
static void C_fcall trf_1042(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1042(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1042(t0,t1,t2,t3);}

C_noret_decl(trf_1027)
static void C_fcall trf_1027(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1027(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_1027(t0);}

C_noret_decl(trf_1005)
static void C_fcall trf_1005(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1005(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1005(t0,t1,t2);}

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
if(!C_demand_2(1040)){
C_save(t1);
C_rereclaim2(1040*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,235);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[6]=C_h_intern(&lf[6],7,"default");
lf[9]=C_h_intern(&lf[9],12,"flush-output");
lf[10]=C_h_intern(&lf[10],7,"fprintf");
lf[11]=C_h_intern(&lf[11],18,"current-error-port");
lf[12]=C_h_intern(&lf[12],19,"current-output-port");
lf[13]=C_h_intern(&lf[13],34,"setup-download#temporary-directory");
lf[15]=C_h_intern(&lf[15],26,"create-temporary-directory");
lf[17]=C_h_intern(&lf[17],5,"error");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\021version not found");
lf[19]=C_h_intern(&lf[19],4,"sort");
lf[20]=C_h_intern(&lf[20],20,"setup-api#version>=\077");
lf[21]=C_h_intern(&lf[21],31,"setup-download#locate-egg/local");
lf[22]=C_h_intern(&lf[22],13,"make-pathname");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[25]=C_h_intern(&lf[25],10,"directory\077");
lf[26]=C_h_intern(&lf[26],12,"file-exists\077");
lf[27]=C_h_intern(&lf[27],7,"warning");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000-extension has no such version - using default");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[31]=C_h_intern(&lf[31],6,"system");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\006  ~a~%");
lf[33]=C_h_intern(&lf[33],17,"get-output-string");
lf[34]=C_h_intern(&lf[34],7,"display");
lf[35]=C_h_intern(&lf[35],19,"\003syswrite-char/port");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\006xcopy ");
lf[37]=C_h_intern(&lf[37],18,"open-output-string");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\003/* ");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\006cp -r ");
lf[40]=C_h_intern(&lf[40],2,"qs");
lf[41]=C_h_intern(&lf[41],18,"normalize-pathname");
lf[42]=C_h_intern(&lf[42],16,"create-directory");
lf[43]=C_h_intern(&lf[43],8,"for-each");
lf[44]=C_h_intern(&lf[44],12,"delete-file*");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\0006 deleting stale file `~a\047 from local build directory~%");
lf[46]=C_h_intern(&lf[46],14,"string-suffix\077");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\003.so");
lf[48]=C_h_intern(&lf[48],6,"filter");
lf[49]=C_h_intern(&lf[49],9,"directory");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\004tags");
lf[51]=C_h_intern(&lf[51],9,"\003syserror");
lf[52]=C_h_intern(&lf[52],37,"setup-download#gather-egg-information");
lf[53]=C_h_intern(&lf[53],7,"version");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000.extension has syntactically invalid .meta file");
lf[55]=C_h_intern(&lf[55],20,"with-input-from-file");
lf[56]=C_h_intern(&lf[56],4,"read");
lf[57]=C_h_intern(&lf[57],22,"with-exception-handler");
lf[58]=C_h_intern(&lf[58],30,"call-with-current-continuation");
lf[59]=C_h_intern(&lf[59],14,"string->symbol");
lf[60]=C_h_intern(&lf[60],7,"call/cc");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\004meta");
lf[62]=C_h_intern(&lf[62],10,"filter-map");
lf[64]=C_h_intern(&lf[64],11,"\000recursive\077");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\004 -R ");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[67]=C_h_intern(&lf[67],4,"conc");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\007svn ls ");
lf[69]=C_h_intern(&lf[69],29,"setup-download#locate-egg/svn");
lf[70]=C_h_intern(&lf[70],13,"string-append");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\005tags/");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\006trunk/");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\006  ~a~%");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\005 1>&2");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\013svn export ");
lf[82]=C_h_intern(&lf[82],4,"meta");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\005.meta");
lf[84]=C_h_intern(&lf[84],23,"irregex-match-substring");
lf[85]=C_h_intern(&lf[85],14,"irregex-search");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\016^tags/([^/]+)/");
lf[87]=C_h_intern(&lf[87],20,"with-input-from-pipe");
lf[88]=C_h_intern(&lf[88],10,"read-lines");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\047checking available versions ...~%  ~a~%");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\014--password=\047");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\014--username=\047");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[96]=C_h_intern(&lf[96],30,"setup-download#locate-egg/http");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\020not a valid port");
lf[99]=C_h_intern(&lf[99],13,"irregex-match");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000#(http://)\077([^/:]+)(:([^:/]+))\077(/.+)");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[102]=C_h_intern(&lf[102],11,"tcp-connect");
lf[103]=C_h_intern(&lf[103],5,"abort");
lf[104]=C_h_intern(&lf[104],24,"make-composite-condition");
lf[105]=C_h_intern(&lf[105],23,"make-property-condition");
lf[106]=C_h_intern(&lf[106],20,"setup-download-error");
lf[107]=C_h_intern(&lf[107],3,"exn");
lf[108]=C_h_intern(&lf[108],7,"message");
lf[109]=C_h_intern(&lf[109],9,"arguments");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\011[Server] ");
lf[111]=C_h_intern(&lf[111],7,"reverse");
lf[112]=C_h_intern(&lf[112],17,"close-output-port");
lf[113]=C_h_intern(&lf[113],16,"close-input-port");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\006  ~a~%");
lf[115]=C_h_intern(&lf[115],19,"with-output-to-file");
lf[116]=C_h_intern(&lf[116],20,"\003sysread-string/port");
lf[117]=C_h_intern(&lf[117],9,"read-line");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\006  ~a~%");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\0001invalid file name - possibly corrupt transmission");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\023reading files ...~%");
lf[122]=C_h_intern(&lf[122],17,"open-input-string");
lf[123]=C_h_intern(&lf[123],26,"string-concatenate-reverse");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\002~%");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[126]=C_h_intern(&lf[126],12,"string-chomp");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\001\015");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\017reading chunks ");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\004~a~%");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000$[Tt]ransfer-[Ee]ncoding:\134s*chunked.*");
lf[131]=C_h_intern(&lf[131],12,"string-null\077");
lf[133]=C_h_intern(&lf[133],5,"\000port");
lf[134]=C_h_intern(&lf[134],7,"\000accept");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\003*/*");
lf[136]=C_h_intern(&lf[136],11,"\000proxy-host");
lf[137]=C_h_intern(&lf[137],11,"\000proxy-port");
lf[138]=C_h_intern(&lf[138],16,"\000proxy-user-pass");
lf[139]=C_h_intern(&lf[139],6,"signal");
lf[140]=C_h_intern(&lf[140],10,"http-fetch");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\034invalid response from server");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\004~a~%");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\034HTTP/[0-9.]+\134s+([0-9]+)\134s+.*");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\026reading response ...~%");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\003*/*");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\023requesting ~s ...~%");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000&connecting to host ~s, port ~a ~a...~%");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\005(via ");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\006\077name=");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\006&mode=");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\012&tests=yes");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[156]=C_h_intern(&lf[156],8,"->string");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\011&version=");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\004GET ");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\011 HTTP/1.1");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\014Connection: ");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\014User-Agent: ");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\010Accept: ");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\006Host: ");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\020Content-length: ");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\033Proxy-Authorization: Basic ");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\007http://");
lf[177]=C_h_intern(&lf[177],15,"\003sysget-keyword");
lf[178]=C_h_intern(&lf[178],15,"\000content-length");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\005close");
lf[181]=C_h_intern(&lf[181],11,"\000connection");
lf[182]=C_h_intern(&lf[182],33,"setup-download#retrieve-extension");
lf[183]=C_h_intern(&lf[183],8,"\000version");
lf[184]=C_h_intern(&lf[184],6,"\000quiet");
lf[185]=C_h_intern(&lf[185],12,"\000destination");
lf[186]=C_h_intern(&lf[186],9,"\000username");
lf[187]=C_h_intern(&lf[187],9,"\000password");
lf[188]=C_h_intern(&lf[188],6,"\000tests");
lf[189]=C_h_intern(&lf[189],6,"\000trunk");
lf[190]=C_h_intern(&lf[190],6,"\000clean");
lf[191]=C_h_intern(&lf[191],5,"local");
lf[192]=C_h_intern(&lf[192],3,"svn");
lf[193]=C_h_intern(&lf[193],4,"http");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000/cannot retrieve extension unsupported transport");
lf[195]=C_h_intern(&lf[195],16,"\003sysdynamic-wind");
lf[196]=C_h_intern(&lf[196],5,"\000mode");
lf[197]=C_h_intern(&lf[197],30,"setup-download#list-extensions");
lf[198]=C_h_intern(&lf[198],3,"map");
lf[199]=C_h_intern(&lf[199],18,"string-concatenate");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\047listing extension directory ...~%  ~a~%");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000\014--password=\047");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\014--username=\047");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000.cannot list extensions - unsupported transport");
lf[211]=C_h_intern(&lf[211],38,"setup-download#list-extension-versions");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\010unknown\012");
lf[214]=C_h_intern(&lf[214],17,"directory-exists\077");
lf[215]=C_decode_literal(C_heaptop,"\376B\000\000\005/tags");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\010unknown\012");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\005/tags");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\014--password=\047");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\014--username=\047");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000.cannot list extensions - unsupported transport");
lf[227]=C_h_intern(&lf[227],14,"make-parameter");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\020chicken-install ");
lf[229]=C_h_intern(&lf[229],15,"chicken-version");
lf[230]=C_h_intern(&lf[230],17,"tcp-write-timeout");
lf[231]=C_h_intern(&lf[231],16,"tcp-read-timeout");
lf[232]=C_h_intern(&lf[232],19,"tcp-connect-timeout");
lf[233]=C_h_intern(&lf[233],11,"\003sysrequire");
lf[234]=C_h_intern(&lf[234],9,"setup-api");
C_register_lf2(lf,235,create_ptable());
t2=C_mutate(&lf[0] /* (set! c393 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_952,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k950 */
static void C_ccall f_952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_952,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_955,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k953 in k950 */
static void C_ccall f_955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_955,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_958,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k956 in k953 in k950 */
static void C_ccall f_958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_958,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_961,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k959 in k956 in k953 in k950 */
static void C_ccall f_961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_961,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_964,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_964,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_967,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_967,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_970,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_970,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_973,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_973,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_976,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_tcp_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_979,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_979,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_982,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_982,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_985,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#require");
((C_proc3)C_fast_retrieve_symbol_proc(lf[233]))(3,*((C_word*)lf[233]+1),t2,lf[234]);}

/* k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_985,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_989,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("tcp-connect-timeout");
((C_proc3)C_fast_retrieve_symbol_proc(lf[232]))(3,*((C_word*)lf[232]+1),t2,C_fix(30000));}

/* k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_989,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_992,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("tcp-read-timeout");
((C_proc3)C_fast_retrieve_symbol_proc(lf[231]))(3,*((C_word*)lf[231]+1),t2,C_fix(30000));}

/* k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_992,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_995,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("tcp-write-timeout");
((C_proc3)C_fast_retrieve_symbol_proc(lf[230]))(3,*((C_word*)lf[230]+1),t2,C_fix(30000));}

/* k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_995,2,t0,t1);}
t2=lf[2] /* setup-download#*quiet* */ =C_SCHEME_FALSE;;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1000,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2980,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("chicken-version");
((C_proc2)C_fast_retrieve_symbol_proc(lf[229]))(2,*((C_word*)lf[229]+1),t4);}

/* k2978 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("conc");
((C_proc4)C_fast_retrieve_symbol_proc(lf[67]))(4,*((C_word*)lf[67]+1),((C_word*)t0)[2],lf[228],t1);}

/* k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_1000(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1000,2,t0,t1);}
t2=C_mutate(&lf[3] /* (set! setup-download#*chicken-install-user-agent* ...) */,t1);
t3=lf[4] /* setup-download#*trunk* */ =C_SCHEME_FALSE;;
t4=C_mutate(&lf[5] /* (set! setup-download#*mode* ...) */,lf[6]);
t5=C_mutate(&lf[7] /* (set! setup-download#*windows-shell* ...) */,C_mk_bool(C_WINDOWS_SHELL));
t6=C_mutate(&lf[8] /* (set! setup-download#d ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1005,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1025,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("make-parameter");
((C_proc3)C_fast_retrieve_symbol_proc(lf[227]))(3,*((C_word*)lf[227]+1),t7,C_SCHEME_FALSE);}

/* k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_1025(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1025,2,t0,t1);}
t2=C_mutate((C_word*)lf[13]+1 /* (set! setup-download#temporary-directory ...) */,t1);
t3=C_mutate(&lf[14] /* (set! setup-download#get-temporary-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1027,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[16] /* (set! setup-download#existing-version ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1042,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[21]+1 /* (set! setup-download#locate-egg/local ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1203,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[52]+1 /* (set! setup-download#gather-egg-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1483,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[63] /* (set! setup-download#make-svn-ls-cmd ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1589,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[69]+1 /* (set! setup-download#locate-egg/svn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1876,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[96]+1 /* (set! setup-download#locate-egg/http ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2148,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate(&lf[132] /* (set! setup-download#make-HTTP-GET/1.1 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2344,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[142] /* (set! setup-download#response-match-code? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2409,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[182]+1 /* (set! setup-download#retrieve-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2784,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[197]+1 /* (set! setup-download#list-extensions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2880,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[211]+1 /* (set! setup-download#list-extension-versions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2929,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t15=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_SCHEME_UNDEFINED);}

/* f_2929 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2929(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+22)){
C_save_and_reclaim((void*)tr5r,(void*)f_2929r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2929r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2929r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(22);
t6=C_i_get_keyword(lf[184],t5,C_SCHEME_FALSE);
t7=C_i_get_keyword(lf[186],t5,C_SCHEME_FALSE);
t8=C_i_get_keyword(lf[187],t5,C_SCHEME_FALSE);
t9=t6;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2944,a[2]=t10,a[3]=t12,a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2949,a[2]=t8,a[3]=t7,a[4]=t4,a[5]=t2,a[6]=t3,a[7]=((C_word)li56),tmp=(C_word)a,a+=8,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2973,a[2]=t12,a[3]=t10,a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#dynamic-wind");
t16=*((C_word*)lf[195]+1);
((C_proc5)(void*)(*((C_word*)t16+1)))(5,t16,t1,t13,t14,t15);}

/* a2972 */
static void C_ccall f_2973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2973,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[2],"setup-download#*quiet*"));
t3=C_mutate(&lf[2] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a2948 */
static void C_ccall f_2949(C_word c,C_word t0,C_word t1){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2949,2,t0,t1);}
t2=((C_word*)t0)[6];
t3=C_eqp(t2,lf[191]);
if(C_truep(t3)){
t4=t1;
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[4];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1138,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1201,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
C_trace("string-append");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t8,t5,lf[215]);}
else{
t4=C_eqp(t2,lf[192]);
if(C_truep(t4)){
t5=t1;
t6=((C_word*)t0)[5];
t7=((C_word*)t0)[4];
t8=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
if(C_truep(C_i_nullp(t16))){
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1761,a[2]=t14,a[3]=t6,a[4]=t7,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t10)){
C_trace("string-append");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t17,lf[223],t10,lf[224]);}
else{
t18=t17;
f_1761(2,t18,lf[225]);}}
else{
C_trace("##sys#error");
t17=*((C_word*)lf[51]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t5,lf[0],t16);}}
else{
C_trace("error");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t1,lf[226],((C_word*)t0)[6]);}}}

/* k1759 in a2948 */
static void C_ccall f_1761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1761,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1764,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("string-append");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t2,lf[220],((C_word*)t0)[2],lf[221]);}
else{
t3=t2;
f_1764(2,t3,lf[222]);}}

/* k1762 in k1759 in a2948 */
static void C_ccall f_1764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1764,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1767,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1837,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1841,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("string-append");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t4,((C_word*)t0)[2],lf[219]);}

/* k1839 in k1762 in k1759 in a2948 */
static void C_ccall f_1841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1835 in k1762 in k1759 in a2948 */
static void C_ccall f_1837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download#make-svn-ls-cmd");
f_1589(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k1765 in k1762 in k1759 in a2948 */
static void C_ccall f_1767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1770,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("with-input-from-pipe");
((C_proc4)C_fast_retrieve_symbol_proc(lf[87]))(4,*((C_word*)lf[87]+1),t2,t1,C_fast_retrieve(lf[88]));}

/* k1768 in k1765 in k1762 in k1759 in a2948 */
static void C_ccall f_1770(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1770,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[216]);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1792,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("with-input-from-pipe");
((C_proc4)C_fast_retrieve_symbol_proc(lf[87]))(4,*((C_word*)lf[87]+1),t6,((C_word*)t0)[2],C_fast_retrieve(lf[88]));}}

/* k1790 in k1768 in k1765 in k1762 in k1759 in a2948 */
static void C_ccall f_1792(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1792,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[198]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1798,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1800,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1800(t7,t3,t1);}

/* map-loop509 in k1790 in k1768 in k1765 in k1762 in k1759 in a2948 */
static void C_fcall f_1800(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1800,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1829,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1789,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("string-chomp");
((C_proc4)C_fast_retrieve_symbol_proc(lf[126]))(4,*((C_word*)lf[126]+1),t5,t4,lf[218]);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1787 in map-loop509 in k1790 in k1768 in k1765 in k1762 in k1759 in a2948 */
static void C_ccall f_1789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("string-append");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],t1,lf[217]);}

/* k1827 in map-loop509 in k1790 in k1768 in k1765 in k1762 in k1759 in a2948 */
static void C_ccall f_1829(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1829,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1800(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1800(t6,((C_word*)t0)[3],t5);}}

/* k1796 in k1790 in k1768 in k1765 in k1762 in k1759 in a2948 */
static void C_ccall f_1798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("string-concatenate");
((C_proc3)C_fast_retrieve_symbol_proc(lf[199]))(3,*((C_word*)lf[199]+1),((C_word*)t0)[2],t1);}

/* k1199 in a2948 */
static void C_ccall f_1201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1136 in a2948 */
static void C_ccall f_1138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1138,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1144,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("directory-exists?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[214]))(3,*((C_word*)lf[214]+1),t2,t1);}

/* k1142 in k1136 in a2948 */
static void C_ccall f_1144(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1144,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1156,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("directory");
((C_proc3)C_fast_retrieve_symbol_proc(lf[49]))(3,*((C_word*)lf[49]+1),t6,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[213]);}}

/* k1154 in k1142 in k1136 in a2948 */
static void C_ccall f_1156(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1156,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[198]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1162,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1164,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word)li54),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1164(t7,t3,t1);}

/* map-loop253 in k1154 in k1142 in k1136 in a2948 */
static void C_fcall f_1164(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1164,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1193,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[70]+1);
C_trace("g276277");
t6=t5;
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t3,t4,lf[212]);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1191 in map-loop253 in k1154 in k1142 in k1136 in a2948 */
static void C_ccall f_1193(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1193,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1164(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1164(t6,((C_word*)t0)[3],t5);}}

/* k1160 in k1154 in k1142 in k1136 in a2948 */
static void C_ccall f_1162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("string-concatenate");
((C_proc3)C_fast_retrieve_symbol_proc(lf[199]))(3,*((C_word*)lf[199]+1),((C_word*)t0)[2],t1);}

/* a2943 */
static void C_ccall f_2944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2944,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[2],"setup-download#*quiet*"));
t3=C_mutate(&lf[2] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_2880 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2880(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+21)){
C_save_and_reclaim((void*)tr4r,(void*)f_2880r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2880r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2880r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(21);
t5=C_i_get_keyword(lf[184],t4,C_SCHEME_FALSE);
t6=C_i_get_keyword(lf[186],t4,C_SCHEME_FALSE);
t7=C_i_get_keyword(lf[187],t4,C_SCHEME_FALSE);
t8=t5;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2895,a[2]=t9,a[3]=t11,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2900,a[2]=t7,a[3]=t6,a[4]=t3,a[5]=t2,a[6]=((C_word)li50),tmp=(C_word)a,a+=7,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2924,a[2]=t11,a[3]=t9,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#dynamic-wind");
t15=*((C_word*)lf[195]+1);
((C_proc5)(void*)(*((C_word*)t15+1)))(5,t15,t1,t12,t13,t14);}

/* a2923 */
static void C_ccall f_2924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2924,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[2],"setup-download#*quiet*"));
t3=C_mutate(&lf[2] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a2899 */
static void C_ccall f_2900(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2900,2,t0,t1);}
t2=((C_word*)t0)[5];
t3=C_eqp(t2,lf[191]);
if(C_truep(t3)){
t4=t1;
t5=((C_word*)t0)[4];
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1091,a[2]=t7,a[3]=t9,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_trace("directory");
((C_proc3)C_fast_retrieve_symbol_proc(lf[49]))(3,*((C_word*)lf[49]+1),t10,t5);}
else{
t4=C_eqp(t2,lf[192]);
if(C_truep(t4)){
t5=t1;
t6=((C_word*)t0)[4];
t7=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
if(C_truep(C_i_nullp(t15))){
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1638,a[2]=t13,a[3]=t6,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t9)){
C_trace("string-append");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t16,lf[207],t9,lf[208]);}
else{
t17=t16;
f_1638(2,t17,lf[209]);}}
else{
C_trace("##sys#error");
t16=*((C_word*)lf[51]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t5,lf[0],t15);}}
else{
C_trace("error");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t1,lf[210],((C_word*)t0)[5]);}}}

/* k1636 in a2899 */
static void C_ccall f_1638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1638,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1641,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("string-append");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t2,lf[204],((C_word*)t0)[2],lf[205]);}
else{
t3=t2;
f_1641(2,t3,lf[206]);}}

/* k1639 in k1636 in a2899 */
static void C_ccall f_1641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1644,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download#make-svn-ls-cmd");
f_1589(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1642 in k1639 in k1636 in a2899 */
static void C_ccall f_1644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1644,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1647,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download#d");
f_1005(t2,lf[203],C_a_i_list(&a,1,t1));}

/* k1645 in k1642 in k1639 in k1636 in a2899 */
static void C_ccall f_1647(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1647,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1663,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("with-input-from-pipe");
((C_proc4)C_fast_retrieve_symbol_proc(lf[87]))(4,*((C_word*)lf[87]+1),t6,((C_word*)t0)[2],C_fast_retrieve(lf[88]));}

/* k1661 in k1645 in k1642 in k1639 in k1636 in a2899 */
static void C_ccall f_1663(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1663,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[198]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1669,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1671,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1671(t7,t3,t1);}

/* map-loop458 in k1661 in k1645 in k1642 in k1639 in k1636 in a2899 */
static void C_fcall f_1671(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1671,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1700,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1660,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("string-chomp");
((C_proc4)C_fast_retrieve_symbol_proc(lf[126]))(4,*((C_word*)lf[126]+1),t5,t4,lf[202]);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1658 in map-loop458 in k1661 in k1645 in k1642 in k1639 in k1636 in a2899 */
static void C_ccall f_1660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("string-append");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],t1,lf[201]);}

/* k1698 in map-loop458 in k1661 in k1645 in k1642 in k1639 in k1636 in a2899 */
static void C_ccall f_1700(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1700,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1671(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1671(t6,((C_word*)t0)[3],t5);}}

/* k1667 in k1661 in k1645 in k1642 in k1639 in k1636 in a2899 */
static void C_ccall f_1669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("string-concatenate");
((C_proc3)C_fast_retrieve_symbol_proc(lf[199]))(3,*((C_word*)lf[199]+1),((C_word*)t0)[2],t1);}

/* k1089 in a2899 */
static void C_ccall f_1091(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1091,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[198]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1097,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1099,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word)li48),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1099(t7,t3,t1);}

/* map-loop212 in k1089 in a2899 */
static void C_fcall f_1099(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1099,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1128,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[70]+1);
C_trace("g235236");
t6=t5;
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t3,t4,lf[200]);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1126 in map-loop212 in k1089 in a2899 */
static void C_ccall f_1128(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1128,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1099(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1099(t6,((C_word*)t0)[3],t5);}}

/* k1095 in k1089 in a2899 */
static void C_ccall f_1097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("string-concatenate");
((C_proc3)C_fast_retrieve_symbol_proc(lf[199]))(3,*((C_word*)lf[199]+1),((C_word*)t0)[2],t1);}

/* a2894 */
static void C_ccall f_2895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2895,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[2],"setup-download#*quiet*"));
t3=C_mutate(&lf[2] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_2784 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2784(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+20)){
C_save_and_reclaim((void*)tr5r,(void*)f_2784r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2784r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2784r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(20);
t6=C_i_get_keyword(lf[183],t5,C_SCHEME_FALSE);
t7=C_i_get_keyword(lf[184],t5,C_SCHEME_FALSE);
t8=C_i_get_keyword(lf[185],t5,C_SCHEME_FALSE);
t9=C_i_get_keyword(lf[186],t5,C_SCHEME_FALSE);
t10=C_i_get_keyword(lf[187],t5,C_SCHEME_FALSE);
t11=C_i_get_keyword(lf[188],t5,C_SCHEME_FALSE);
t12=C_i_get_keyword(lf[136],t5,C_SCHEME_FALSE);
t13=C_i_get_keyword(lf[137],t5,C_SCHEME_FALSE);
t14=C_i_get_keyword(lf[138],t5,C_SCHEME_FALSE);
t15=C_i_get_keyword(lf[189],t5,C_SCHEME_FALSE);
t16=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2818,a[2]=t1,a[3]=t14,a[4]=t13,a[5]=t12,a[6]=t11,a[7]=t10,a[8]=t9,a[9]=t8,a[10]=t6,a[11]=t4,a[12]=t2,a[13]=t3,a[14]=t15,a[15]=t7,a[16]=t5,tmp=(C_word)a,a+=17,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2877,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[177]+1)))(5,*((C_word*)lf[177]+1),t16,lf[196],t5,t17);}

/* a2876 */
static void C_ccall f_2877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2877,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[6]);}

/* k2816 */
static void C_ccall f_2818(C_word c,C_word t0,C_word t1){
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
C_word ab[45],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2818,2,t0,t1);}
t2=C_i_get_keyword(lf[190],((C_word*)t0)[16],C_SCHEME_FALSE);
t3=((C_word*)t0)[15];
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t0)[14];
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=t1;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2826,a[2]=t8,a[3]=t6,a[4]=t4,a[5]=t14,a[6]=t12,a[7]=t10,a[8]=((C_word)li42),tmp=(C_word)a,a+=9,tmp);
t16=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2835,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word)li43),tmp=(C_word)a,a+=15,tmp);
t17=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2868,a[2]=t14,a[3]=t12,a[4]=t10,a[5]=t8,a[6]=t6,a[7]=t4,a[8]=((C_word)li44),tmp=(C_word)a,a+=9,tmp);
C_trace("##sys#dynamic-wind");
t18=*((C_word*)lf[195]+1);
((C_proc5)(void*)(*((C_word*)t18+1)))(5,t18,((C_word*)t0)[2],t15,t16,t17);}

/* a2867 in k2816 */
static void C_ccall f_2868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2868,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,C_retrieve2(lf[2],"setup-download#*quiet*"));
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,C_retrieve2(lf[4],"setup-download#*trunk*"));
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,C_retrieve2(lf[5],"setup-download#*mode*"));
t5=C_mutate(&lf[2] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[4])[1]);
t6=C_mutate(&lf[4] /* (set! setup-download#*trunk* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t7=C_mutate(&lf[5] /* (set! setup-download#*mode* ...) */,((C_word*)((C_word*)t0)[2])[1]);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_UNDEFINED);}

/* a2834 in k2816 */
static void C_ccall f_2835(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2835,2,t0,t1);}
t2=((C_word*)t0)[13];
t3=C_eqp(t2,lf[191]);
if(C_truep(t3)){
C_trace("setup-download#locate-egg/local");
((C_proc7)C_fast_retrieve_symbol_proc(lf[21]))(7,*((C_word*)lf[21]+1),t1,((C_word*)t0)[12],((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t4=C_eqp(t2,lf[192]);
if(C_truep(t4)){
C_trace("setup-download#locate-egg/svn");
((C_proc8)C_fast_retrieve_symbol_proc(lf[69]))(8,*((C_word*)lf[69]+1),t1,((C_word*)t0)[12],((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t5=C_eqp(t2,lf[193]);
if(C_truep(t5)){
C_trace("setup-download#locate-egg/http");
((C_proc10)C_fast_retrieve_symbol_proc(lf[96]))(10,*((C_word*)lf[96]+1),t1,((C_word*)t0)[12],((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
C_trace("error");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t1,lf[194],((C_word*)t0)[13]);}}}}

/* a2825 in k2816 */
static void C_ccall f_2826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2826,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,C_retrieve2(lf[2],"setup-download#*quiet*"));
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,C_retrieve2(lf[4],"setup-download#*trunk*"));
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,C_retrieve2(lf[5],"setup-download#*mode*"));
t5=C_mutate(&lf[2] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[4])[1]);
t6=C_mutate(&lf[4] /* (set! setup-download#*trunk* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t7=C_mutate(&lf[5] /* (set! setup-download#*mode* ...) */,((C_word*)((C_word*)t0)[2])[1]);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_UNDEFINED);}

/* setup-download#response-match-code? in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_fcall f_2409(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2409,NULL,3,t1,t2,t3);}
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2420,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("number->string");
C_number_to_string(3,0,t4,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2418 in setup-download#response-match-code? in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2424,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("irregex-match-substring");
((C_proc4)C_fast_retrieve_symbol_proc(lf[84]))(4,*((C_word*)lf[84]+1),t2,((C_word*)t0)[2],C_fix(1));}

/* k2422 in k2418 in setup-download#response-match-code? in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_string_equal_p(((C_word*)t0)[2],t1));}

/* setup-download#make-HTTP-GET/1.1 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_fcall f_2344(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2344,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2348,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2394,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[177]+1)))(5,*((C_word*)lf[177]+1),t6,lf[133],t5,t7);}

/* a2393 in setup-download#make-HTTP-GET/1.1 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2394,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(80));}

/* k2346 in setup-download#make-HTTP-GET/1.1 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2351,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2391,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[177]+1)))(5,*((C_word*)lf[177]+1),t2,lf[181],((C_word*)t0)[6],t3);}

/* a2390 in k2346 in setup-download#make-HTTP-GET/1.1 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2391,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[180]);}

/* k2349 in k2346 in setup-download#make-HTTP-GET/1.1 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2351,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2388,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[177]+1)))(5,*((C_word*)lf[177]+1),t2,lf[134],((C_word*)t0)[7],t3);}

/* a2387 in k2349 in k2346 in setup-download#make-HTTP-GET/1.1 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2388,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[179]);}

/* k2352 in k2349 in k2346 in setup-download#make-HTTP-GET/1.1 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2385,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#get-keyword");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[177]+1)))(5,*((C_word*)lf[177]+1),t2,lf[178],((C_word*)t0)[8],t3);}

/* a2384 in k2352 in k2349 in k2346 in setup-download#make-HTTP-GET/1.1 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2385,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}

/* k2355 in k2352 in k2349 in k2346 in setup-download#make-HTTP-GET/1.1 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2357,2,t0,t1);}
t2=C_i_get_keyword(lf[136],((C_word*)t0)[9],C_SCHEME_FALSE);
t3=C_i_get_keyword(lf[138],((C_word*)t0)[9],C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2373,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t2)){
C_trace("string-append");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t4,lf[176],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
t5=t4;
f_2373(2,t5,((C_word*)t0)[2]);}}

/* k2371 in k2355 in k2352 in k2349 in k2346 in setup-download#make-HTTP-GET/1.1 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2377,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("string-append");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t2,lf[173],((C_word*)t0)[2],lf[174]);}
else{
t3=t2;
f_2377(2,t3,lf[175]);}}

/* k2375 in k2371 in k2355 in k2352 in k2349 in k2346 in setup-download#make-HTTP-GET/1.1 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("conc");
((C_proc25)C_fast_retrieve_symbol_proc(lf[67]))(25,*((C_word*)lf[67]+1),((C_word*)t0)[9],lf[159],((C_word*)t0)[8],lf[160],lf[161],lf[162],((C_word*)t0)[7],lf[163],lf[164],((C_word*)t0)[6],lf[165],lf[166],((C_word*)t0)[5],lf[167],lf[168],((C_word*)t0)[4],C_make_character(58),((C_word*)t0)[3],lf[169],t1,lf[170],((C_word*)t0)[2],lf[171],lf[172]);}

/* f_2148 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_2148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_2148r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2148r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2148r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(10);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t17=C_i_nullp(t16);
t18=(C_truep(t17)?C_SCHEME_FALSE:C_i_car(t16));
t19=C_i_nullp(t16);
t20=(C_truep(t19)?C_SCHEME_END_OF_LIST:C_i_cdr(t16));
t21=C_i_nullp(t20);
t22=(C_truep(t21)?C_SCHEME_FALSE:C_i_car(t20));
t23=C_i_nullp(t20);
t24=(C_truep(t23)?C_SCHEME_END_OF_LIST:C_i_cdr(t20));
t25=C_i_nullp(t24);
t26=(C_truep(t25)?C_SCHEME_FALSE:C_i_car(t24));
t27=C_i_nullp(t24);
t28=(C_truep(t27)?C_SCHEME_END_OF_LIST:C_i_cdr(t24));
if(C_truep(C_i_nullp(t28))){
t29=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2194,a[2]=t1,a[3]=t14,a[4]=t2,a[5]=t26,a[6]=t22,a[7]=t18,a[8]=t6,a[9]=t3,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t10)){
t30=t29;
f_2194(2,t30,t10);}
else{
C_trace("setup-download#get-temporary-directory");
f_1027(t29);}}
else{
C_trace("##sys#error");
t29=*((C_word*)lf[51]+1);
((C_proc4)(void*)(*((C_word*)t29+1)))(4,t29,t1,lf[0],t28);}}

/* k2192 */
static void C_ccall f_2194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2194,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2199,a[2]=((C_word*)t0)[9],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2205,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li34),tmp=(C_word)a,a+=10,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2204 in k2192 */
static void C_ccall f_2205(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2205,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2209,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t3,a[8]=t2,a[9]=t1,a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2235,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t5,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[8])){
C_trace("string-append");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t6,lf[157],((C_word*)t0)[8]);}
else{
t7=t6;
f_2235(2,t7,lf[158]);}}

/* k2233 in a2204 in k2192 */
static void C_ccall f_2235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2235,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2239,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("->string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[156]))(3,*((C_word*)lf[156]+1),t2,C_retrieve2(lf[5],"setup-download#*mode*"));}

/* k2237 in k2233 in a2204 in k2192 */
static void C_ccall f_2239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[6])){
C_trace("string-append");
((C_proc9)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(9,*((C_word*)lf[70]+1),((C_word*)t0)[5],((C_word*)t0)[4],lf[152],((C_word*)t0)[3],((C_word*)t0)[2],lf[153],t1,lf[154]);}
else{
C_trace("string-append");
((C_proc9)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(9,*((C_word*)lf[70]+1),((C_word*)t0)[5],((C_word*)t0)[4],lf[152],((C_word*)t0)[3],((C_word*)t0)[2],lf[153],t1,lf[155]);}}

/* k2207 in a2204 in k2192 */
static void C_ccall f_2209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2212,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2212,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2215,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2228,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("file-exists?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[26]))(3,*((C_word*)lf[26]+1),t3,t1);}

/* k2226 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_2215(2,t2,C_SCHEME_UNDEFINED);}
else{
C_trace("create-directory");
((C_proc3)C_fast_retrieve_symbol_proc(lf[42]))(3,*((C_word*)lf[42]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2215(C_word c,C_word t0,C_word t1){
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
C_word ab[29],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2215,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2218,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[8];
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2436,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t6,a[6]=t4,a[7]=((C_word*)t0)[3],a[8]=t3,a[9]=((C_word*)t0)[4],tmp=(C_word)a,a+=10,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2692,a[2]=t4,a[3]=t3,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2695,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[37]))(2,*((C_word*)lf[37]+1),t9);}
else{
C_trace("setup-download#d");
f_1005(t7,lf[148],C_a_i_list(&a,3,t3,t4,lf[151]));}}

/* k2693 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2695,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2698,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t2,lf[150],t1);}

/* k2696 in k2693 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2698,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2701,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k2699 in k2696 in k2693 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2701,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2704,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[35]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(58),((C_word*)t0)[3]);}

/* k2702 in k2699 in k2696 in k2693 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2704,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2707,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2705 in k2702 in k2699 in k2696 in k2693 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2707,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t2,lf[149],((C_word*)t0)[2]);}

/* k2708 in k2705 in k2702 in k2699 in k2696 in k2693 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[33]))(3,*((C_word*)lf[33]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2690 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2692,2,t0,t1);}
C_trace("setup-download#d");
f_1005(((C_word*)t0)[4],lf[148],C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2441,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2455,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[5],a[9]=((C_word)li33),tmp=(C_word)a,a+=10,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2455(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[19],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2455,4,t0,t1,t2,t3);}
t4=t2;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=t3;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2459,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=t5,a[11]=t7,tmp=(C_word)a,a+=12,tmp);
C_trace("setup-download#d");
f_1005(t8,lf[147],C_a_i_list(&a,1,((C_word*)t0)[5]));}

/* k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[40],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2459,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2688,a[2]=((C_word*)t0)[11],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download#make-HTTP-GET/1.1");
f_2344(t3,((C_word*)t0)[5],C_retrieve2(lf[3],"setup-download#*chicken-install-user-agent*"),((C_word*)t0)[4],C_a_i_list(&a,8,lf[133],((C_word*)t0)[3],lf[134],lf[146],lf[136],((C_word*)t0)[7],lf[137],((C_word*)t0)[6]));}

/* k2686 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2462,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2465,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
C_trace("flush-output");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(3,*((C_word*)lf[9]+1),t2,((C_word*)((C_word*)t0)[11])[1]);}

/* k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2465,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
C_trace("setup-download#d");
f_1005(t2,lf[145],C_SCHEME_END_OF_LIST);}

/* k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2468,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
C_trace("read-line");
((C_proc3)C_fast_retrieve_symbol_proc(lf[117]))(3,*((C_word*)lf[117]+1),t4,((C_word*)((C_word*)t0)[10])[1]);}

/* k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2471,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2474,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t3=t1;
if(C_truep(C_i_stringp(t3))){
C_trace("irregex-match");
((C_proc4)C_fast_retrieve_symbol_proc(lf[99]))(4,*((C_word*)lf[99]+1),t2,lf[144],t3);}
else{
t4=t2;
f_2474(2,t4,C_SCHEME_FALSE);}}

/* k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2474,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2477,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
C_trace("setup-download#d");
f_1005(t2,lf[143],C_a_i_list(&a,1,((C_word*)t0)[2]));}

/* k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2477,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2480,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[14],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2654,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],tmp=(C_word)a,a+=13,tmp);
C_trace("setup-download#response-match-code?");
f_2409(t3,((C_word*)t0)[2],C_fix(407));}

/* k2652 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2654,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2659,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word)li31),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2665,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word)li32),tmp=(C_word)a,a+=11,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2681,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download#response-match-code?");
f_2409(t2,((C_word*)t0)[2],C_fix(200));}}

/* k2679 in k2652 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2681,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_2480(2,t3,t2);}
else{
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2334,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2338,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("make-property-condition");
((C_proc7)C_fast_retrieve_symbol_proc(lf[105]))(7,*((C_word*)lf[105]+1),t4,lf[107],lf[108],lf[141],lf[109],t2);}}

/* k2336 in k2679 in k2652 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2342,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("make-property-condition");
((C_proc3)C_fast_retrieve_symbol_proc(lf[105]))(3,*((C_word*)lf[105]+1),t2,lf[140]);}

/* k2340 in k2336 in k2679 in k2652 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("make-composite-condition");
((C_proc4)C_fast_retrieve_symbol_proc(lf[104]))(4,*((C_word*)lf[104]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2332 in k2679 in k2652 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("signal");
((C_proc3)C_fast_retrieve_symbol_proc(lf[139]))(3,*((C_word*)lf[139]+1),((C_word*)t0)[2],t1);}

/* a2664 in k2652 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2665(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[34],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2665,4,t0,t1,t2,t3);}
t4=C_mutate(((C_word *)((C_word*)t0)[9])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[8])+1,t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2675,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download#make-HTTP-GET/1.1");
f_2344(t6,((C_word*)t0)[7],C_retrieve2(lf[3],"setup-download#*chicken-install-user-agent*"),((C_word*)t0)[6],C_a_i_list(&a,10,lf[133],((C_word*)t0)[5],lf[134],lf[135],lf[136],((C_word*)t0)[4],lf[137],((C_word*)t0)[3],lf[138],((C_word*)t0)[2]));}

/* k2673 in a2664 in k2652 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* a2658 in k2652 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2659,2,t0,t1);}
C_trace("tcp-connect");
((C_proc4)C_fast_retrieve_symbol_proc(lf[102]))(4,*((C_word*)lf[102]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2480,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2628,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li30),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2628(t6,t2);}

/* loop in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_fcall f_2628(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2628,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2632,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("read-line");
((C_proc3)C_fast_retrieve_symbol_proc(lf[117]))(3,*((C_word*)lf[117]+1),t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k2630 in loop in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2632,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2638,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("string-null?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[131]))(3,*((C_word*)lf[131]+1),t2,t1);}

/* k2636 in k2630 in loop in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2638,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2650,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
C_trace("irregex-match");
((C_proc4)C_fast_retrieve_symbol_proc(lf[99]))(4,*((C_word*)lf[99]+1),t2,lf[130],t3);}}

/* k2648 in k2636 in k2630 in loop in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2650,2,t0,t1);}
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f3126,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download#d");
f_1005(t3,lf[129],C_a_i_list(&a,1,((C_word*)t0)[2]));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f3130,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download#d");
f_1005(t2,lf[129],C_a_i_list(&a,1,((C_word*)t0)[2]));}}

/* f3130 in k2648 in k2636 in k2630 in loop in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f3130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("loop723");
t2=((C_word*)((C_word*)t0)[3])[1];
f_2628(t2,((C_word*)t0)[2]);}

/* f3126 in k2648 in k2636 in k2630 in loop in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f3126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("loop723");
t2=((C_word*)((C_word*)t0)[3])[1];
f_2628(t2,((C_word*)t0)[2]);}

/* k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2486,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2616,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download#d");
f_1005(t3,lf[128],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2486(t3,C_SCHEME_UNDEFINED);}}

/* k2614 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2616(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2616,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2743,a[2]=t3,a[3]=t5,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2743(t7,t2,C_SCHEME_END_OF_LIST);}

/* get-chunks in k2614 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_fcall f_2743(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2743,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2747,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("read-line");
((C_proc3)C_fast_retrieve_symbol_proc(lf[117]))(3,*((C_word*)lf[117]+1),t3,((C_word*)t0)[2]);}

/* k2745 in get-chunks in k2614 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("string-chomp");
((C_proc4)C_fast_retrieve_symbol_proc(lf[126]))(4,*((C_word*)lf[126]+1),t2,t1,lf[127]);}

/* k2780 in k2745 in get-chunks in k2614 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2782,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(16));
if(C_truep(C_i_zerop(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2759,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download#d");
f_1005(t3,lf[124],C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("read-string/port");
t4=C_fast_retrieve(lf[116]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[2]);}}

/* k2763 in k2780 in k2745 in get-chunks in k2614 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download#d");
f_1005(t2,lf[125],C_SCHEME_END_OF_LIST);}

/* k2766 in k2763 in k2780 in k2745 in get-chunks in k2614 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2771,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("read-line");
((C_proc3)C_fast_retrieve_symbol_proc(lf[117]))(3,*((C_word*)lf[117]+1),t2,((C_word*)t0)[2]);}

/* k2769 in k2766 in k2763 in k2780 in k2745 in get-chunks in k2614 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2771,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
C_trace("get-chunks772");
t3=((C_word*)((C_word*)t0)[3])[1];
f_2743(t3,((C_word*)t0)[2],t2);}

/* k2757 in k2780 in k2745 in get-chunks in k2614 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("string-concatenate-reverse");
((C_proc3)C_fast_retrieve_symbol_proc(lf[123]))(3,*((C_word*)lf[123]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2617 in k2614 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2622,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("close-input-port");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(3,*((C_word*)lf[113]+1),t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k2620 in k2617 in k2614 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2622,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-input-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[122]))(3,*((C_word*)lf[122]+1),t2,((C_word*)t0)[2]);}

/* k2624 in k2620 in k2617 in k2614 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2486(t3,t2);}

/* k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_fcall f_2486(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2486,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2489,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download#d");
f_1005(t2,lf[121],C_SCHEME_END_OF_LIST);}

/* k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2489,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2494,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li28),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2494(t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_fcall f_2494(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2494,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
C_trace("read");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(3,*((C_word*)lf[56]+1),t3,((C_word*)((C_word*)t0)[4])[1]);}

/* k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t1))){
t3=C_i_car(t1);
t4=t2;
f_2504(t4,C_eqp(lf[17],t3));}
else{
t3=t2;
f_2504(t3,C_SCHEME_FALSE);}}

/* k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_fcall f_2504(C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2504,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[8]);
t3=C_i_cddr(((C_word*)t0)[8]);
t4=((C_word*)t0)[7];
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2723,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2727,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2735,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("string-append");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t7,lf[110],t2);}
else{
t2=C_eofp(((C_word*)t0)[8]);
t3=(C_truep(t2)?t2:C_i_not(((C_word*)t0)[8]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2527,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
C_trace("close-input-port");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(3,*((C_word*)lf[113]+1),t4,((C_word*)((C_word*)t0)[4])[1]);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[8]))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2548,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
C_trace("string-suffix?");
((C_proc4)C_fast_retrieve_symbol_proc(lf[46]))(4,*((C_word*)lf[46]+1),t4,lf[119],((C_word*)t0)[8]);}
else{
C_trace("error");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),((C_word*)t0)[7],lf[120],((C_word*)t0)[8]);}}}}

/* k2546 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2548,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2551,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("read");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(3,*((C_word*)lf[56]+1),t2,((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2567,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-download#d");
f_1005(t2,lf[118],C_a_i_list(&a,1,((C_word*)t0)[3]));}}

/* k2565 in k2546 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("read");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(3,*((C_word*)lf[56]+1),t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k2568 in k2565 in k2546 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2570,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2573,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("read-line");
((C_proc3)C_fast_retrieve_symbol_proc(lf[117]))(3,*((C_word*)lf[117]+1),t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k2571 in k2568 in k2565 in k2546 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2573,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2576,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
C_trace("read-string/port");
t3=C_fast_retrieve(lf[116]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k2574 in k2571 in k2568 in k2565 in k2546 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2576,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2579,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2590,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),t3,((C_word*)t0)[2],((C_word*)t0)[6]);}

/* k2588 in k2574 in k2571 in k2568 in k2565 in k2546 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2590,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2592,a[2]=((C_word*)t0)[3],a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
C_trace("with-output-to-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[115]))(4,*((C_word*)lf[115]+1),((C_word*)t0)[2],t1,t2);}

/* a2591 in k2588 in k2574 in k2571 in k2568 in k2565 in k2546 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2592,2,t0,t1);}
t2=*((C_word*)lf[34]+1);
C_trace("g755756");
t3=t2;
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t1,((C_word*)t0)[2]);}

/* k2577 in k2574 in k2571 in k2568 in k2565 in k2546 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2579,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
C_trace("get-files734");
t3=((C_word*)((C_word*)t0)[3])[1];
f_2494(t3,((C_word*)t0)[2],t2);}

/* k2549 in k2546 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download#d");
f_1005(t2,lf[114],C_a_i_list(&a,1,((C_word*)t0)[2]));}

/* k2552 in k2549 in k2546 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2554,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2557,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2564,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2562 in k2552 in k2549 in k2546 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("create-directory");
((C_proc3)C_fast_retrieve_symbol_proc(lf[42]))(3,*((C_word*)lf[42]+1),((C_word*)t0)[2],t1);}

/* k2555 in k2552 in k2549 in k2546 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-files734");
t2=((C_word*)((C_word*)t0)[4])[1];
f_2494(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2525 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2527,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2530,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("close-output-port");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[112]+1)))(3,*((C_word*)lf[112]+1),t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k2528 in k2525 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("reverse");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[111]+1)))(3,*((C_word*)lf[111]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2733 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("make-property-condition");
((C_proc7)C_fast_retrieve_symbol_proc(lf[105]))(7,*((C_word*)lf[105]+1),((C_word*)t0)[3],lf[107],lf[108],t1,lf[109],((C_word*)t0)[2]);}

/* k2725 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2727,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2731,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("make-property-condition");
((C_proc3)C_fast_retrieve_symbol_proc(lf[105]))(3,*((C_word*)lf[105]+1),t2,lf[106]);}

/* k2729 in k2725 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("make-composite-condition");
((C_proc4)C_fast_retrieve_symbol_proc(lf[104]))(4,*((C_word*)lf[104]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2721 in k2502 in k2496 in get-files in k2487 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in a2454 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("abort");
((C_proc3)C_fast_retrieve_symbol_proc(lf[103]))(3,*((C_word*)lf[103]+1),((C_word*)t0)[2],t1);}

/* a2440 in k2434 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2441,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[5])?((C_word*)t0)[5]:((C_word*)t0)[4]);
if(C_truep(((C_word*)t0)[3])){
C_trace("tcp-connect");
((C_proc4)C_fast_retrieve_symbol_proc(lf[102]))(4,*((C_word*)lf[102]+1),t1,t2,((C_word*)t0)[3]);}
else{
C_trace("tcp-connect");
((C_proc4)C_fast_retrieve_symbol_proc(lf[102]))(4,*((C_word*)lf[102]+1),t1,t2,((C_word*)t0)[2]);}}

/* k2216 in k2213 in k2210 in k2207 in a2204 in k2192 */
static void C_ccall f_2218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
C_trace("values");
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
C_trace("values");
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],lf[101]);}}

/* a2198 in k2192 */
static void C_ccall f_2199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2199,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2107,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("irregex-match");
((C_proc4)C_fast_retrieve_symbol_proc(lf[99]))(4,*((C_word*)lf[99]+1),t3,lf[100],t2);}

/* k2105 in a2198 in k2192 */
static void C_ccall f_2107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2107,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2114,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
C_trace("irregex-match-substring");
((C_proc4)C_fast_retrieve_symbol_proc(lf[84]))(4,*((C_word*)lf[84]+1),t2,t1,C_fix(2));}
else{
t3=t2;
f_2114(2,t3,((C_word*)t0)[2]);}}

/* k2112 in k2105 in a2198 in k2192 */
static void C_ccall f_2114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2114,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2118,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2128,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("irregex-match-substring");
((C_proc4)C_fast_retrieve_symbol_proc(lf[84]))(4,*((C_word*)lf[84]+1),t3,((C_word*)t0)[2],C_fix(3));}
else{
t4=t3;
f_2128(2,t4,C_SCHEME_FALSE);}}

/* k2126 in k2112 in k2105 in a2198 in k2192 */
static void C_ccall f_2128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2128,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2131,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("irregex-match-substring");
((C_proc4)C_fast_retrieve_symbol_proc(lf[84]))(4,*((C_word*)lf[84]+1),t2,((C_word*)t0)[2],C_fix(4));}
else{
t2=((C_word*)t0)[3];
f_2118(2,t2,C_fix(80));}}

/* k2129 in k2126 in k2112 in k2105 in a2198 in k2192 */
static void C_ccall f_2131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2131,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_2118(2,t3,t2);}
else{
C_trace("error");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),((C_word*)t0)[2],lf[98],t1);}}

/* k2116 in k2112 in k2105 in a2198 in k2192 */
static void C_ccall f_2118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2118,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2122,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("irregex-match-substring");
((C_proc4)C_fast_retrieve_symbol_proc(lf[84]))(4,*((C_word*)lf[84]+1),t2,((C_word*)t0)[2],C_fix(5));}
else{
C_trace("values");
C_values(5,0,((C_word*)t0)[4],((C_word*)t0)[3],t1,lf[97]);}}

/* k2120 in k2116 in k2112 in k2105 in a2198 in k2192 */
static void C_ccall f_2122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("values");
C_values(5,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_1876 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_1876(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_1876r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1876r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1876r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(8);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t17=C_i_nullp(t16);
t18=(C_truep(t17)?C_SCHEME_FALSE:C_i_car(t16));
t19=C_i_nullp(t16);
t20=(C_truep(t19)?C_SCHEME_END_OF_LIST:C_i_cdr(t16));
if(C_truep(C_i_nullp(t20))){
t21=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1910,a[2]=t18,a[3]=t1,a[4]=t10,a[5]=t3,a[6]=t6,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t14)){
C_trace("string-append");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t21,lf[93],t14,lf[94]);}
else{
t22=t21;
f_1910(2,t22,lf[95]);}}
else{
C_trace("##sys#error");
t21=*((C_word*)lf[51]+1);
((C_proc4)(void*)(*((C_word*)t21+1)))(4,t21,t1,lf[0],t20);}}

/* k1908 */
static void C_ccall f_1910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1910,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1913,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("string-append");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t2,lf[90],((C_word*)t0)[2],lf[91]);}
else{
t3=t2;
f_1913(2,t3,lf[92]);}}

/* k1911 in k1908 */
static void C_ccall f_1913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2038,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),t3,((C_word*)t0)[4],((C_word*)t0)[7]);}

/* k2036 in k1911 in k1908 */
static void C_ccall f_2038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2038,2,t0,t1);}
C_trace("setup-download#make-svn-ls-cmd");
f_1589(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,C_a_i_list(&a,2,lf[64],C_SCHEME_TRUE));}

/* k1914 in k1911 in k1908 */
static void C_ccall f_1916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1919,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("setup-download#d");
f_1005(t2,lf[89],C_a_i_list(&a,1,t1));}

/* k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_1919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1922,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
C_trace("with-input-from-pipe");
((C_proc4)C_fast_retrieve_symbol_proc(lf[87]))(4,*((C_word*)lf[87]+1),t2,((C_word*)t0)[2],C_fast_retrieve(lf[88]));}

/* k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_1922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1925,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2022,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2024,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
C_trace("filter-map");
((C_proc4)C_fast_retrieve_symbol_proc(lf[62]))(4,*((C_word*)lf[62]+1),t3,t4,t1);}

/* a2023 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_2024(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2024,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2028,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("irregex-search");
((C_proc4)C_fast_retrieve_symbol_proc(lf[85]))(4,*((C_word*)lf[85]+1),t3,lf[86],t2);}

/* k2026 in a2023 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_2028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("irregex-match-substring");
((C_proc4)C_fast_retrieve_symbol_proc(lf[84]))(4,*((C_word*)lf[84]+1),((C_word*)t0)[2],t1,C_fix(1));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2020 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_2022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download#existing-version");
f_1042(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1923 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_1925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1930,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t1,a[6]=((C_word)li21),tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1958,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li22),tmp=(C_word)a,a+=8,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a1957 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_1958(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1958,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1962,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2015,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),t4,((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
C_trace("setup-download#get-temporary-directory");
f_1027(t5);}}

/* k2013 in a1957 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_2015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1960 in a1957 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_1962(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1965,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1988,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2005,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(C_retrieve2(lf[5],"setup-download#*mode*"),lf[82]);
if(C_truep(t5)){
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[4];
C_trace("conc");
((C_proc6)C_fast_retrieve_symbol_proc(lf[67]))(6,*((C_word*)lf[67]+1),t4,t6,C_make_character(47),t7,lf[83]);}
else{
t6=((C_word*)t0)[2];
C_trace("conc");
((C_proc7)C_fast_retrieve_symbol_proc(lf[67]))(7,*((C_word*)lf[67]+1),t3,((C_word*)t0)[3],C_make_character(47),((C_word*)t0)[4],C_make_character(47),t6);}}

/* k2003 in k1960 in a1957 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_2005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("conc");
((C_proc7)C_fast_retrieve_symbol_proc(lf[67]))(7,*((C_word*)lf[67]+1),((C_word*)t0)[4],((C_word*)t0)[3],C_make_character(47),((C_word*)t0)[2],C_make_character(47),t1);}

/* k1986 in k1960 in a1957 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_1988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1988,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1992,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(C_retrieve2(lf[5],"setup-download#*mode*"),lf[82]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1998,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("create-directory");
((C_proc3)C_fast_retrieve_symbol_proc(lf[42]))(3,*((C_word*)lf[42]+1),t4,((C_word*)t0)[3]);}
else{
t4=t2;
f_1992(2,t4,((C_word*)t0)[3]);}}

/* k1996 in k1986 in k1960 in a1957 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_1998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
C_trace("conc");
((C_proc6)C_fast_retrieve_symbol_proc(lf[67]))(6,*((C_word*)lf[67]+1),((C_word*)t0)[2],t2,C_make_character(47),t3,lf[83]);}

/* k1990 in k1986 in k1960 in a1957 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_1992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[4];
t4=((C_word*)t0)[3];
t5=(C_truep(C_retrieve2(lf[2],"setup-download#*quiet*"))?lf[79]:lf[80]);
C_trace("conc");
((C_proc15)C_fast_retrieve_symbol_proc(lf[67]))(15,*((C_word*)lf[67]+1),((C_word*)t0)[2],lf[81],t2,C_make_character(32),t3,C_make_character(32),C_make_character(34),t4,C_make_character(34),C_make_character(32),C_make_character(34),t1,C_make_character(34),t5);}

/* k1963 in k1960 in a1957 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_1965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1965,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1968,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download#d");
f_1005(t2,lf[78],C_a_i_list(&a,1,t1));}

/* k1966 in k1963 in k1960 in a1957 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_1968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1984,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("system");
((C_proc3)C_fast_retrieve_symbol_proc(lf[31]))(3,*((C_word*)lf[31]+1),t2,((C_word*)t0)[2]);}

/* k1982 in k1966 in k1963 in k1960 in a1957 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_1984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_zerop(t1))){
C_trace("values");
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
C_trace("values");
C_values(4,0,((C_word*)t0)[4],C_SCHEME_FALSE,lf[77]);}}

/* a1929 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_1930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1930,2,t0,t1);}
if(C_truep(((C_word*)t0)[5])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1941,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("string-append");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t2,lf[71],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1944,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
if(C_truep(((C_word*)t0)[2])){
C_trace("warning");
((C_proc5)C_fast_retrieve_symbol_proc(lf[27]))(5,*((C_word*)lf[27]+1),t2,lf[28],t3,((C_word*)t0)[2]);}
else{
if(C_truep(C_i_member(lf[72],((C_word*)t0)[4]))){
C_trace("values");
C_values(4,0,t1,lf[73],lf[74]);}
else{
C_trace("values");
C_values(4,0,t1,lf[75],lf[76]);}}}}

/* k1942 in a1929 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_1944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_member(lf[72],((C_word*)t0)[3]))){
C_trace("values");
C_values(4,0,((C_word*)t0)[2],lf[73],lf[74]);}
else{
C_trace("values");
C_values(4,0,((C_word*)t0)[2],lf[75],lf[76]);}}

/* k1939 in a1929 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 */
static void C_ccall f_1941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("values");
C_values(4,0,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* setup-download#make-svn-ls-cmd in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_fcall f_1589(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1589,NULL,5,t1,t2,t3,t4,t5);}
t6=C_i_get_keyword(lf[64],t5,C_SCHEME_FALSE);
t7=(C_truep(t6)?lf[65]:lf[66]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1604,a[2]=t7,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("qs");
((C_proc3)C_fast_retrieve_symbol_proc(lf[40]))(3,*((C_word*)lf[40]+1),t8,t4);}

/* k1602 in setup-download#make-svn-ls-cmd in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_1604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("conc");
((C_proc8)C_fast_retrieve_symbol_proc(lf[67]))(8,*((C_word*)lf[67]+1),((C_word*)t0)[5],lf[68],((C_word*)t0)[4],C_make_character(32),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_1483 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_1483(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1483,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1487,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("directory");
((C_proc3)C_fast_retrieve_symbol_proc(lf[49]))(3,*((C_word*)lf[49]+1),t3,t2);}

/* k1485 */
static void C_ccall f_1487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1487,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1492,a[2]=((C_word*)t0)[3],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
C_trace("filter-map");
((C_proc4)C_fast_retrieve_symbol_proc(lf[62]))(4,*((C_word*)lf[62]+1),((C_word*)t0)[2],t2,t1);}

/* a1491 in k1485 */
static void C_ccall f_1492(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1492,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1498,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1504,a[2]=t2,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,t1,t3,t4);}

/* a1503 in a1491 in k1485 */
static void C_ccall f_1504(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1504,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1508,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("make-pathname");
((C_proc5)C_fast_retrieve_symbol_proc(lf[22]))(5,*((C_word*)lf[22]+1),t4,t2,((C_word*)t0)[2],lf[61]);}

/* k1506 in a1503 in a1491 in k1485 */
static void C_ccall f_1508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1514,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("file-exists?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[26]))(3,*((C_word*)lf[26]+1),t2,t1);}

/* k1512 in k1506 in a1503 in a1491 in k1485 */
static void C_ccall f_1514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1514,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1519,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp);
C_trace("call/cc");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(3,*((C_word*)lf[60]+1),((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a1518 in k1512 in k1506 in a1503 in a1491 in k1485 */
static void C_ccall f_1519(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1519,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("string->symbol");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t3,((C_word*)t0)[3]);}

/* k1525 in a1518 in k1512 in k1506 in a1503 in a1491 in k1485 */
static void C_ccall f_1527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1527,2,t0,t1);}
t2=C_a_i_list2(&a,2,lf[53],((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1539,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp);
C_trace("call-with-current-continuation");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[58]+1)))(3,*((C_word*)lf[58]+1),t3,t4);}

/* a1543 in k1525 in a1518 in k1512 in k1506 in a1503 in a1491 in k1485 */
static void C_ccall f_1544(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1544,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1550,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1565,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp);
C_trace("with-exception-handler");
((C_proc4)C_fast_retrieve_symbol_proc(lf[57]))(4,*((C_word*)lf[57]+1),t1,t3,t4);}

/* a1564 in a1543 in k1525 in a1518 in k1512 in k1506 in a1503 in a1491 in k1485 */
static void C_ccall f_1565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1571,a[2]=((C_word*)t0)[3],a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1577,a[2]=((C_word*)t0)[2],a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,t1,t2,t3);}

/* a1576 in a1564 in a1543 in k1525 in a1518 in k1512 in k1506 in a1503 in a1491 in k1485 */
static void C_ccall f_1577(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1577r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1577r(t0,t1,t2);}}

static void C_ccall f_1577r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1583,a[2]=t2,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp);
C_trace("k409415");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1582 in a1576 in a1564 in a1543 in k1525 in a1518 in k1512 in k1506 in a1503 in a1491 in k1485 */
static void C_ccall f_1583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1583,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1570 in a1564 in a1543 in k1525 in a1518 in k1512 in k1506 in a1503 in a1491 in k1485 */
static void C_ccall f_1571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1571,2,t0,t1);}
C_trace("with-input-from-file");
((C_proc4)C_fast_retrieve_symbol_proc(lf[55]))(4,*((C_word*)lf[55]+1),t1,((C_word*)t0)[2],*((C_word*)lf[56]+1));}

/* a1549 in a1543 in k1525 in a1518 in k1512 in k1506 in a1503 in a1491 in k1485 */
static void C_ccall f_1550(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1550,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1556,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
C_trace("k409415");
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1555 in a1549 in a1543 in k1525 in a1518 in k1512 in k1506 in a1503 in a1491 in k1485 */
static void C_ccall f_1556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1556,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1560,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("warning");
((C_proc4)C_fast_retrieve_symbol_proc(lf[27]))(4,*((C_word*)lf[27]+1),t2,lf[54],((C_word*)t0)[2]);}

/* k1558 in a1555 in a1549 in a1543 in k1525 in a1518 in k1512 in k1506 in a1503 in a1491 in k1485 */
static void C_ccall f_1560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("return408");
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k1537 in k1525 in a1518 in k1512 in k1506 in a1503 in a1491 in k1485 */
static void C_ccall f_1539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1539,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("g413414");
t3=t1;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k1540 in k1537 in k1525 in a1518 in k1512 in k1506 in a1503 in a1491 in k1485 */
static void C_ccall f_1542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1542,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* a1497 in a1491 in k1485 */
static void C_ccall f_1498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1498,2,t0,t1);}
C_trace("setup-download#locate-egg/local");
((C_proc4)C_fast_retrieve_symbol_proc(lf[21]))(4,*((C_word*)lf[21]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_1203 in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_1203(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_1203r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1203r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1203r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(7);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
if(C_truep(C_i_nullp(t16))){
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1231,a[2]=t10,a[3]=t1,a[4]=t14,a[5]=t6,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),t17,t3,t2);}
else{
C_trace("##sys#error");
t17=*((C_word*)lf[51]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t1,lf[0],t16);}}

/* k1229 */
static void C_ccall f_1231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1231,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1234,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),t2,t1,lf[50]);}

/* k1232 in k1229 */
static void C_ccall f_1234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1234,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1237,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t3=C_retrieve2(lf[4],"setup-download#*trunk*");
if(C_truep(t3)){
t4=t2;
f_1237(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1429,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("file-exists?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[26]))(3,*((C_word*)lf[26]+1),t4,t1);}}

/* k1427 in k1232 in k1229 */
static void C_ccall f_1429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1429,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("directory?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[25]))(3,*((C_word*)lf[25]+1),t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
f_1237(2,t2,C_SCHEME_FALSE);}}

/* k1433 in k1427 in k1232 in k1229 */
static void C_ccall f_1435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1435,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1442,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("directory");
((C_proc3)C_fast_retrieve_symbol_proc(lf[49]))(3,*((C_word*)lf[49]+1),t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
f_1237(2,t2,C_SCHEME_FALSE);}}

/* k1440 in k1433 in k1427 in k1232 in k1229 */
static void C_ccall f_1442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("setup-download#existing-version");
f_1042(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1235 in k1232 in k1229 */
static void C_ccall f_1237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1237,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1240,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),t2,((C_word*)t0)[2],((C_word*)t0)[6]);}
else{
t3=t2;
f_1240(2,t3,C_SCHEME_FALSE);}}

/* k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1240,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1245,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word)li3),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1282,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1282(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[15],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1282,4,t0,t1,t2,t3);}
if(C_truep(((C_word*)t0)[3])){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1289,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("create-directory");
((C_proc3)C_fast_retrieve_symbol_proc(lf[42]))(3,*((C_word*)lf[42]+1),t4,((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1364,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1370,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1409,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1417,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace("directory");
((C_proc3)C_fast_retrieve_symbol_proc(lf[49]))(3,*((C_word*)lf[49]+1),t7,t2);}
else{
C_trace("values");
C_values(4,0,t1,t2,t3);}}}

/* k1415 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("filter");
((C_proc4)C_fast_retrieve_symbol_proc(lf[48]))(4,*((C_word*)lf[48]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a1408 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1409(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1409,3,t0,t1,t2);}
t3=C_fast_retrieve(lf[46]);
C_trace("g372373");
t4=t3;
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,lf[47],t2);}

/* k1368 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1370,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[43]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1386,a[2]=t4,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1386(t6,((C_word*)t0)[2],t1);}

/* for-each-loop376 in k1368 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_fcall f_1386(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1386,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1396,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1375,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download#d");
f_1005(t5,lf[45],C_a_i_list(&a,1,t4));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1373 in for-each-loop376 in k1368 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("delete-file*");
((C_proc3)C_fast_retrieve_symbol_proc(lf[44]))(3,*((C_word*)lf[44]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1394 in for-each-loop376 in k1368 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1386(t3,((C_word*)t0)[2],t2);}

/* k1362 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("values");
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1292,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1361,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("normalize-pathname");
((C_proc3)C_fast_retrieve_symbol_proc(lf[41]))(3,*((C_word*)lf[41]+1),t3,((C_word*)t0)[4]);}

/* k1359 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("qs");
((C_proc3)C_fast_retrieve_symbol_proc(lf[40]))(3,*((C_word*)lf[40]+1),((C_word*)t0)[2],t1);}

/* k1290 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1292,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1357,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("normalize-pathname");
((C_proc3)C_fast_retrieve_symbol_proc(lf[41]))(3,*((C_word*)lf[41]+1),t3,((C_word*)t0)[2]);}

/* k1355 in k1290 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("qs");
((C_proc3)C_fast_retrieve_symbol_proc(lf[40]))(3,*((C_word*)lf[40]+1),((C_word*)t0)[2],t1);}

/* k1293 in k1290 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1298,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[7],"setup-download#*windows-shell*"))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[37]))(2,*((C_word*)lf[37]+1),t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1338,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("open-output-string");
((C_proc2)C_fast_retrieve_symbol_proc(lf[37]))(2,*((C_word*)lf[37]+1),t3);}}

/* k1336 in k1293 in k1290 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t2,lf[39],t1);}

/* k1339 in k1336 in k1293 in k1290 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1341,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1344,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k1342 in k1339 in k1336 in k1293 in k1290 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t2,lf[38],((C_word*)t0)[3]);}

/* k1345 in k1342 in k1339 in k1336 in k1293 in k1290 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1350,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1348 in k1345 in k1342 in k1339 in k1336 in k1293 in k1290 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[33]))(3,*((C_word*)lf[33]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1318 in k1293 in k1290 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t2,lf[36],t1);}

/* k1321 in k1318 in k1293 in k1290 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1326,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k1324 in k1321 in k1318 in k1293 in k1290 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1326,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_fast_retrieve(lf[35]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[3]);}

/* k1327 in k1324 in k1321 in k1318 in k1293 in k1290 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1332,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1330 in k1327 in k1324 in k1321 in k1318 in k1293 in k1290 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[33]))(3,*((C_word*)lf[33]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1296 in k1293 in k1290 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1301,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download#d");
f_1005(t2,lf[32],C_a_i_list(&a,1,t1));}

/* k1299 in k1296 in k1293 in k1290 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1317,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("system");
((C_proc3)C_fast_retrieve_symbol_proc(lf[31]))(3,*((C_word*)lf[31]+1),t2,((C_word*)t0)[2]);}

/* k1315 in k1299 in k1296 in k1293 in k1290 in k1287 in a1281 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_zerop(t1))){
C_trace("values");
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
C_trace("values");
C_values(4,0,((C_word*)t0)[4],C_SCHEME_FALSE,lf[30]);}}

/* a1244 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1245,2,t0,t1);}
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1256,a[2]=((C_word*)t0)[6],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),t2,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1259,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("make-pathname");
((C_proc4)C_fast_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),t2,((C_word*)t0)[4],lf[29]);}}

/* k1257 in a1244 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1259,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1262,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
if(C_truep(((C_word*)t0)[2])){
C_trace("warning");
((C_proc5)C_fast_retrieve_symbol_proc(lf[27]))(5,*((C_word*)lf[27]+1),t2,lf[28],t3,((C_word*)t0)[2]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t2;
f_1262(2,t5,t4);}}

/* k1260 in k1257 in a1244 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1262,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1268,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("file-exists?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[26]))(3,*((C_word*)lf[26]+1),t3,((C_word*)t0)[3]);}

/* k1275 in k1260 in k1257 in a1244 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("directory?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[25]))(3,*((C_word*)lf[25]+1),((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
C_trace("values");
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],lf[24]);}}

/* k1266 in k1260 in k1257 in a1244 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("values");
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],lf[23]);}
else{
C_trace("values");
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[2],lf[24]);}}

/* k1254 in a1244 in k1238 in k1235 in k1232 in k1229 */
static void C_ccall f_1256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("values");
C_values(4,0,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* setup-download#existing-version in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_fcall f_1042(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1042,NULL,4,t1,t2,t3,t4);}
if(C_truep(t3)){
if(C_truep(C_i_member(t3,t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
C_trace("error");
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[17]+1)))(5,*((C_word*)lf[17]+1),t1,lf[18],t2,t3);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1058,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("sort");
((C_proc4)C_fast_retrieve_symbol_proc(lf[19]))(4,*((C_word*)lf[19]+1),t5,t4,C_fast_retrieve(lf[20]));}}

/* k1056 in setup-download#existing-version in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_1058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_pairp(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_i_car(t1):C_SCHEME_FALSE));}

/* setup-download#get-temporary-directory in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_fcall f_1027(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1027,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1031,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download#temporary-directory");
((C_proc2)C_fast_retrieve_symbol_proc(lf[13]))(2,*((C_word*)lf[13]+1),t2);}

/* k1029 in setup-download#get-temporary-directory in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_1031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1031,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1037,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("create-temporary-directory");
((C_proc2)C_fast_retrieve_symbol_proc(lf[15]))(2,*((C_word*)lf[15]+1),t2);}}

/* k1035 in k1029 in setup-download#get-temporary-directory in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_1037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1037,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1040,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download#temporary-directory");
((C_proc3)C_fast_retrieve_symbol_proc(lf[13]))(3,*((C_word*)lf[13]+1),t2,t1);}

/* k1038 in k1035 in k1029 in setup-download#get-temporary-directory in k1023 in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_1040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* setup-download#d in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_fcall f_1005(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1005,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1009,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[2],"setup-download#*quiet*"))){
C_trace("current-error-port");
((C_proc2)C_fast_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t4);}
else{
C_trace("current-output-port");
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t4);}}

/* k1007 in setup-download#d in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_1009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1012,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_apply(6,0,t2,C_fast_retrieve(lf[10]),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1010 in k1007 in setup-download#d in k998 in k993 in k990 in k987 in k983 in k980 in k977 in k974 in k971 in k968 in k965 in k962 in k959 in k956 in k953 in k950 */
static void C_ccall f_1012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("flush-output");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(3,*((C_word*)lf[9]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[258] = {
{"toplevel:setup_2ddownload_2escm",(void*)C_toplevel},
{"f_952:setup_2ddownload_2escm",(void*)f_952},
{"f_955:setup_2ddownload_2escm",(void*)f_955},
{"f_958:setup_2ddownload_2escm",(void*)f_958},
{"f_961:setup_2ddownload_2escm",(void*)f_961},
{"f_964:setup_2ddownload_2escm",(void*)f_964},
{"f_967:setup_2ddownload_2escm",(void*)f_967},
{"f_970:setup_2ddownload_2escm",(void*)f_970},
{"f_973:setup_2ddownload_2escm",(void*)f_973},
{"f_976:setup_2ddownload_2escm",(void*)f_976},
{"f_979:setup_2ddownload_2escm",(void*)f_979},
{"f_982:setup_2ddownload_2escm",(void*)f_982},
{"f_985:setup_2ddownload_2escm",(void*)f_985},
{"f_989:setup_2ddownload_2escm",(void*)f_989},
{"f_992:setup_2ddownload_2escm",(void*)f_992},
{"f_995:setup_2ddownload_2escm",(void*)f_995},
{"f_2980:setup_2ddownload_2escm",(void*)f_2980},
{"f_1000:setup_2ddownload_2escm",(void*)f_1000},
{"f_1025:setup_2ddownload_2escm",(void*)f_1025},
{"f_2929:setup_2ddownload_2escm",(void*)f_2929},
{"f_2973:setup_2ddownload_2escm",(void*)f_2973},
{"f_2949:setup_2ddownload_2escm",(void*)f_2949},
{"f_1761:setup_2ddownload_2escm",(void*)f_1761},
{"f_1764:setup_2ddownload_2escm",(void*)f_1764},
{"f_1841:setup_2ddownload_2escm",(void*)f_1841},
{"f_1837:setup_2ddownload_2escm",(void*)f_1837},
{"f_1767:setup_2ddownload_2escm",(void*)f_1767},
{"f_1770:setup_2ddownload_2escm",(void*)f_1770},
{"f_1792:setup_2ddownload_2escm",(void*)f_1792},
{"f_1800:setup_2ddownload_2escm",(void*)f_1800},
{"f_1789:setup_2ddownload_2escm",(void*)f_1789},
{"f_1829:setup_2ddownload_2escm",(void*)f_1829},
{"f_1798:setup_2ddownload_2escm",(void*)f_1798},
{"f_1201:setup_2ddownload_2escm",(void*)f_1201},
{"f_1138:setup_2ddownload_2escm",(void*)f_1138},
{"f_1144:setup_2ddownload_2escm",(void*)f_1144},
{"f_1156:setup_2ddownload_2escm",(void*)f_1156},
{"f_1164:setup_2ddownload_2escm",(void*)f_1164},
{"f_1193:setup_2ddownload_2escm",(void*)f_1193},
{"f_1162:setup_2ddownload_2escm",(void*)f_1162},
{"f_2944:setup_2ddownload_2escm",(void*)f_2944},
{"f_2880:setup_2ddownload_2escm",(void*)f_2880},
{"f_2924:setup_2ddownload_2escm",(void*)f_2924},
{"f_2900:setup_2ddownload_2escm",(void*)f_2900},
{"f_1638:setup_2ddownload_2escm",(void*)f_1638},
{"f_1641:setup_2ddownload_2escm",(void*)f_1641},
{"f_1644:setup_2ddownload_2escm",(void*)f_1644},
{"f_1647:setup_2ddownload_2escm",(void*)f_1647},
{"f_1663:setup_2ddownload_2escm",(void*)f_1663},
{"f_1671:setup_2ddownload_2escm",(void*)f_1671},
{"f_1660:setup_2ddownload_2escm",(void*)f_1660},
{"f_1700:setup_2ddownload_2escm",(void*)f_1700},
{"f_1669:setup_2ddownload_2escm",(void*)f_1669},
{"f_1091:setup_2ddownload_2escm",(void*)f_1091},
{"f_1099:setup_2ddownload_2escm",(void*)f_1099},
{"f_1128:setup_2ddownload_2escm",(void*)f_1128},
{"f_1097:setup_2ddownload_2escm",(void*)f_1097},
{"f_2895:setup_2ddownload_2escm",(void*)f_2895},
{"f_2784:setup_2ddownload_2escm",(void*)f_2784},
{"f_2877:setup_2ddownload_2escm",(void*)f_2877},
{"f_2818:setup_2ddownload_2escm",(void*)f_2818},
{"f_2868:setup_2ddownload_2escm",(void*)f_2868},
{"f_2835:setup_2ddownload_2escm",(void*)f_2835},
{"f_2826:setup_2ddownload_2escm",(void*)f_2826},
{"f_2409:setup_2ddownload_2escm",(void*)f_2409},
{"f_2420:setup_2ddownload_2escm",(void*)f_2420},
{"f_2424:setup_2ddownload_2escm",(void*)f_2424},
{"f_2344:setup_2ddownload_2escm",(void*)f_2344},
{"f_2394:setup_2ddownload_2escm",(void*)f_2394},
{"f_2348:setup_2ddownload_2escm",(void*)f_2348},
{"f_2391:setup_2ddownload_2escm",(void*)f_2391},
{"f_2351:setup_2ddownload_2escm",(void*)f_2351},
{"f_2388:setup_2ddownload_2escm",(void*)f_2388},
{"f_2354:setup_2ddownload_2escm",(void*)f_2354},
{"f_2385:setup_2ddownload_2escm",(void*)f_2385},
{"f_2357:setup_2ddownload_2escm",(void*)f_2357},
{"f_2373:setup_2ddownload_2escm",(void*)f_2373},
{"f_2377:setup_2ddownload_2escm",(void*)f_2377},
{"f_2148:setup_2ddownload_2escm",(void*)f_2148},
{"f_2194:setup_2ddownload_2escm",(void*)f_2194},
{"f_2205:setup_2ddownload_2escm",(void*)f_2205},
{"f_2235:setup_2ddownload_2escm",(void*)f_2235},
{"f_2239:setup_2ddownload_2escm",(void*)f_2239},
{"f_2209:setup_2ddownload_2escm",(void*)f_2209},
{"f_2212:setup_2ddownload_2escm",(void*)f_2212},
{"f_2228:setup_2ddownload_2escm",(void*)f_2228},
{"f_2215:setup_2ddownload_2escm",(void*)f_2215},
{"f_2695:setup_2ddownload_2escm",(void*)f_2695},
{"f_2698:setup_2ddownload_2escm",(void*)f_2698},
{"f_2701:setup_2ddownload_2escm",(void*)f_2701},
{"f_2704:setup_2ddownload_2escm",(void*)f_2704},
{"f_2707:setup_2ddownload_2escm",(void*)f_2707},
{"f_2710:setup_2ddownload_2escm",(void*)f_2710},
{"f_2692:setup_2ddownload_2escm",(void*)f_2692},
{"f_2436:setup_2ddownload_2escm",(void*)f_2436},
{"f_2455:setup_2ddownload_2escm",(void*)f_2455},
{"f_2459:setup_2ddownload_2escm",(void*)f_2459},
{"f_2688:setup_2ddownload_2escm",(void*)f_2688},
{"f_2462:setup_2ddownload_2escm",(void*)f_2462},
{"f_2465:setup_2ddownload_2escm",(void*)f_2465},
{"f_2468:setup_2ddownload_2escm",(void*)f_2468},
{"f_2471:setup_2ddownload_2escm",(void*)f_2471},
{"f_2474:setup_2ddownload_2escm",(void*)f_2474},
{"f_2477:setup_2ddownload_2escm",(void*)f_2477},
{"f_2654:setup_2ddownload_2escm",(void*)f_2654},
{"f_2681:setup_2ddownload_2escm",(void*)f_2681},
{"f_2338:setup_2ddownload_2escm",(void*)f_2338},
{"f_2342:setup_2ddownload_2escm",(void*)f_2342},
{"f_2334:setup_2ddownload_2escm",(void*)f_2334},
{"f_2665:setup_2ddownload_2escm",(void*)f_2665},
{"f_2675:setup_2ddownload_2escm",(void*)f_2675},
{"f_2659:setup_2ddownload_2escm",(void*)f_2659},
{"f_2480:setup_2ddownload_2escm",(void*)f_2480},
{"f_2628:setup_2ddownload_2escm",(void*)f_2628},
{"f_2632:setup_2ddownload_2escm",(void*)f_2632},
{"f_2638:setup_2ddownload_2escm",(void*)f_2638},
{"f_2650:setup_2ddownload_2escm",(void*)f_2650},
{"f3130:setup_2ddownload_2escm",(void*)f3130},
{"f3126:setup_2ddownload_2escm",(void*)f3126},
{"f_2483:setup_2ddownload_2escm",(void*)f_2483},
{"f_2616:setup_2ddownload_2escm",(void*)f_2616},
{"f_2743:setup_2ddownload_2escm",(void*)f_2743},
{"f_2747:setup_2ddownload_2escm",(void*)f_2747},
{"f_2782:setup_2ddownload_2escm",(void*)f_2782},
{"f_2765:setup_2ddownload_2escm",(void*)f_2765},
{"f_2768:setup_2ddownload_2escm",(void*)f_2768},
{"f_2771:setup_2ddownload_2escm",(void*)f_2771},
{"f_2759:setup_2ddownload_2escm",(void*)f_2759},
{"f_2619:setup_2ddownload_2escm",(void*)f_2619},
{"f_2622:setup_2ddownload_2escm",(void*)f_2622},
{"f_2626:setup_2ddownload_2escm",(void*)f_2626},
{"f_2486:setup_2ddownload_2escm",(void*)f_2486},
{"f_2489:setup_2ddownload_2escm",(void*)f_2489},
{"f_2494:setup_2ddownload_2escm",(void*)f_2494},
{"f_2498:setup_2ddownload_2escm",(void*)f_2498},
{"f_2504:setup_2ddownload_2escm",(void*)f_2504},
{"f_2548:setup_2ddownload_2escm",(void*)f_2548},
{"f_2567:setup_2ddownload_2escm",(void*)f_2567},
{"f_2570:setup_2ddownload_2escm",(void*)f_2570},
{"f_2573:setup_2ddownload_2escm",(void*)f_2573},
{"f_2576:setup_2ddownload_2escm",(void*)f_2576},
{"f_2590:setup_2ddownload_2escm",(void*)f_2590},
{"f_2592:setup_2ddownload_2escm",(void*)f_2592},
{"f_2579:setup_2ddownload_2escm",(void*)f_2579},
{"f_2551:setup_2ddownload_2escm",(void*)f_2551},
{"f_2554:setup_2ddownload_2escm",(void*)f_2554},
{"f_2564:setup_2ddownload_2escm",(void*)f_2564},
{"f_2557:setup_2ddownload_2escm",(void*)f_2557},
{"f_2527:setup_2ddownload_2escm",(void*)f_2527},
{"f_2530:setup_2ddownload_2escm",(void*)f_2530},
{"f_2735:setup_2ddownload_2escm",(void*)f_2735},
{"f_2727:setup_2ddownload_2escm",(void*)f_2727},
{"f_2731:setup_2ddownload_2escm",(void*)f_2731},
{"f_2723:setup_2ddownload_2escm",(void*)f_2723},
{"f_2441:setup_2ddownload_2escm",(void*)f_2441},
{"f_2218:setup_2ddownload_2escm",(void*)f_2218},
{"f_2199:setup_2ddownload_2escm",(void*)f_2199},
{"f_2107:setup_2ddownload_2escm",(void*)f_2107},
{"f_2114:setup_2ddownload_2escm",(void*)f_2114},
{"f_2128:setup_2ddownload_2escm",(void*)f_2128},
{"f_2131:setup_2ddownload_2escm",(void*)f_2131},
{"f_2118:setup_2ddownload_2escm",(void*)f_2118},
{"f_2122:setup_2ddownload_2escm",(void*)f_2122},
{"f_1876:setup_2ddownload_2escm",(void*)f_1876},
{"f_1910:setup_2ddownload_2escm",(void*)f_1910},
{"f_1913:setup_2ddownload_2escm",(void*)f_1913},
{"f_2038:setup_2ddownload_2escm",(void*)f_2038},
{"f_1916:setup_2ddownload_2escm",(void*)f_1916},
{"f_1919:setup_2ddownload_2escm",(void*)f_1919},
{"f_1922:setup_2ddownload_2escm",(void*)f_1922},
{"f_2024:setup_2ddownload_2escm",(void*)f_2024},
{"f_2028:setup_2ddownload_2escm",(void*)f_2028},
{"f_2022:setup_2ddownload_2escm",(void*)f_2022},
{"f_1925:setup_2ddownload_2escm",(void*)f_1925},
{"f_1958:setup_2ddownload_2escm",(void*)f_1958},
{"f_2015:setup_2ddownload_2escm",(void*)f_2015},
{"f_1962:setup_2ddownload_2escm",(void*)f_1962},
{"f_2005:setup_2ddownload_2escm",(void*)f_2005},
{"f_1988:setup_2ddownload_2escm",(void*)f_1988},
{"f_1998:setup_2ddownload_2escm",(void*)f_1998},
{"f_1992:setup_2ddownload_2escm",(void*)f_1992},
{"f_1965:setup_2ddownload_2escm",(void*)f_1965},
{"f_1968:setup_2ddownload_2escm",(void*)f_1968},
{"f_1984:setup_2ddownload_2escm",(void*)f_1984},
{"f_1930:setup_2ddownload_2escm",(void*)f_1930},
{"f_1944:setup_2ddownload_2escm",(void*)f_1944},
{"f_1941:setup_2ddownload_2escm",(void*)f_1941},
{"f_1589:setup_2ddownload_2escm",(void*)f_1589},
{"f_1604:setup_2ddownload_2escm",(void*)f_1604},
{"f_1483:setup_2ddownload_2escm",(void*)f_1483},
{"f_1487:setup_2ddownload_2escm",(void*)f_1487},
{"f_1492:setup_2ddownload_2escm",(void*)f_1492},
{"f_1504:setup_2ddownload_2escm",(void*)f_1504},
{"f_1508:setup_2ddownload_2escm",(void*)f_1508},
{"f_1514:setup_2ddownload_2escm",(void*)f_1514},
{"f_1519:setup_2ddownload_2escm",(void*)f_1519},
{"f_1527:setup_2ddownload_2escm",(void*)f_1527},
{"f_1544:setup_2ddownload_2escm",(void*)f_1544},
{"f_1565:setup_2ddownload_2escm",(void*)f_1565},
{"f_1577:setup_2ddownload_2escm",(void*)f_1577},
{"f_1583:setup_2ddownload_2escm",(void*)f_1583},
{"f_1571:setup_2ddownload_2escm",(void*)f_1571},
{"f_1550:setup_2ddownload_2escm",(void*)f_1550},
{"f_1556:setup_2ddownload_2escm",(void*)f_1556},
{"f_1560:setup_2ddownload_2escm",(void*)f_1560},
{"f_1539:setup_2ddownload_2escm",(void*)f_1539},
{"f_1542:setup_2ddownload_2escm",(void*)f_1542},
{"f_1498:setup_2ddownload_2escm",(void*)f_1498},
{"f_1203:setup_2ddownload_2escm",(void*)f_1203},
{"f_1231:setup_2ddownload_2escm",(void*)f_1231},
{"f_1234:setup_2ddownload_2escm",(void*)f_1234},
{"f_1429:setup_2ddownload_2escm",(void*)f_1429},
{"f_1435:setup_2ddownload_2escm",(void*)f_1435},
{"f_1442:setup_2ddownload_2escm",(void*)f_1442},
{"f_1237:setup_2ddownload_2escm",(void*)f_1237},
{"f_1240:setup_2ddownload_2escm",(void*)f_1240},
{"f_1282:setup_2ddownload_2escm",(void*)f_1282},
{"f_1417:setup_2ddownload_2escm",(void*)f_1417},
{"f_1409:setup_2ddownload_2escm",(void*)f_1409},
{"f_1370:setup_2ddownload_2escm",(void*)f_1370},
{"f_1386:setup_2ddownload_2escm",(void*)f_1386},
{"f_1375:setup_2ddownload_2escm",(void*)f_1375},
{"f_1396:setup_2ddownload_2escm",(void*)f_1396},
{"f_1364:setup_2ddownload_2escm",(void*)f_1364},
{"f_1289:setup_2ddownload_2escm",(void*)f_1289},
{"f_1361:setup_2ddownload_2escm",(void*)f_1361},
{"f_1292:setup_2ddownload_2escm",(void*)f_1292},
{"f_1357:setup_2ddownload_2escm",(void*)f_1357},
{"f_1295:setup_2ddownload_2escm",(void*)f_1295},
{"f_1338:setup_2ddownload_2escm",(void*)f_1338},
{"f_1341:setup_2ddownload_2escm",(void*)f_1341},
{"f_1344:setup_2ddownload_2escm",(void*)f_1344},
{"f_1347:setup_2ddownload_2escm",(void*)f_1347},
{"f_1350:setup_2ddownload_2escm",(void*)f_1350},
{"f_1320:setup_2ddownload_2escm",(void*)f_1320},
{"f_1323:setup_2ddownload_2escm",(void*)f_1323},
{"f_1326:setup_2ddownload_2escm",(void*)f_1326},
{"f_1329:setup_2ddownload_2escm",(void*)f_1329},
{"f_1332:setup_2ddownload_2escm",(void*)f_1332},
{"f_1298:setup_2ddownload_2escm",(void*)f_1298},
{"f_1301:setup_2ddownload_2escm",(void*)f_1301},
{"f_1317:setup_2ddownload_2escm",(void*)f_1317},
{"f_1245:setup_2ddownload_2escm",(void*)f_1245},
{"f_1259:setup_2ddownload_2escm",(void*)f_1259},
{"f_1262:setup_2ddownload_2escm",(void*)f_1262},
{"f_1277:setup_2ddownload_2escm",(void*)f_1277},
{"f_1268:setup_2ddownload_2escm",(void*)f_1268},
{"f_1256:setup_2ddownload_2escm",(void*)f_1256},
{"f_1042:setup_2ddownload_2escm",(void*)f_1042},
{"f_1058:setup_2ddownload_2escm",(void*)f_1058},
{"f_1027:setup_2ddownload_2escm",(void*)f_1027},
{"f_1031:setup_2ddownload_2escm",(void*)f_1031},
{"f_1037:setup_2ddownload_2escm",(void*)f_1037},
{"f_1040:setup_2ddownload_2escm",(void*)f_1040},
{"f_1005:setup_2ddownload_2escm",(void*)f_1005},
{"f_1009:setup_2ddownload_2escm",(void*)f_1009},
{"f_1012:setup_2ddownload_2escm",(void*)f_1012},
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
