/* Generated from files.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: files.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file files.c
   unit: files
*/

#include "chicken.h"

#include <unistd.h>
#include <errno.h>

#ifndef _WIN32
# include <sys/stat.h>
# define C_mkdir(str)       C_fix(mkdir(C_c_string(str), S_IRWXU | S_IRWXG | S_IRWXO))
#else
# define C_mkdir(str)	    C_fix(mkdir(C_c_string(str)))
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[102];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,14),40,102,95,53,55,54,32,102,105,108,101,54,50,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,100,57,50,32,108,57,51,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,38),40,102,95,53,56,56,32,111,114,105,103,102,105,108,101,55,48,32,110,101,119,102,105,108,101,55,49,32,46,32,116,109,112,54,57,55,50,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,100,49,51,51,32,108,49,51,52,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,42),40,102,95,55,50,54,32,111,114,105,103,102,105,108,101,49,49,49,32,110,101,119,102,105,108,101,49,49,50,32,46,32,116,109,112,49,49,48,49,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,13),40,102,95,56,55,51,32,112,110,49,54,53,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,24),40,99,104,111,112,45,112,100,115,32,115,116,114,49,54,56,32,112,100,115,49,54,57,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,116,114,115,49,56,54,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,26),40,99,111,110,99,45,100,105,114,115,32,100,105,114,115,49,56,51,32,112,100,115,49,56,52,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,34),40,99,97,110,111,110,105,99,97,108,105,122,101,45,100,105,114,115,32,100,105,114,115,49,57,51,32,112,100,115,49,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,52),40,95,109,97,107,101,45,112,97,116,104,110,97,109,101,32,108,111,99,50,48,49,32,100,105,114,50,48,50,32,102,105,108,101,50,48,51,32,101,120,116,50,48,52,32,112,100,115,50,48,53,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,36),40,102,95,49,49,49,53,32,100,105,114,115,50,50,57,32,102,105,108,101,50,51,48,32,46,32,116,109,112,50,50,56,50,51,49,41,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,36),40,102,95,49,49,52,55,32,100,105,114,115,50,52,51,32,102,105,108,101,50,52,52,32,46,32,116,109,112,50,52,50,50,52,53,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,18),40,115,116,114,105,112,45,112,100,115,32,100,105,114,50,54,51,41,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,14),40,102,95,49,50,48,56,32,112,110,50,54,53,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,7),40,97,49,50,56,53,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,47),40,97,49,50,57,49,32,100,105,114,50,55,49,50,55,50,50,55,55,32,102,105,108,101,50,55,51,50,55,52,50,55,56,32,101,120,116,50,55,53,50,55,54,50,55,57,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,14),40,102,95,49,50,56,48,32,112,110,50,55,48,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,7),40,97,49,51,48,48,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,47),40,97,49,51,48,54,32,100,105,114,50,56,53,50,56,54,50,57,49,32,102,105,108,101,50,56,55,50,56,56,50,57,50,32,101,120,116,50,56,57,50,57,48,50,57,51,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,14),40,102,95,49,50,57,53,32,112,110,50,56,52,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,7),40,97,49,51,49,53,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,47),40,97,49,51,50,49,32,100,105,114,50,57,57,51,48,48,51,48,53,32,102,105,108,101,51,48,49,51,48,50,51,48,54,32,101,120,116,51,48,51,51,48,52,51,48,55,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,14),40,102,95,49,51,49,48,32,112,110,50,57,56,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,7),40,97,49,51,51,48,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,47),40,97,49,51,51,54,32,100,105,114,51,49,51,51,49,52,51,49,57,32,102,105,108,101,51,49,53,51,49,54,51,50,48,32,101,120,116,51,49,55,51,49,56,51,50,49,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,14),40,102,95,49,51,50,53,32,112,110,51,49,50,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,49,51,52,56,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,47),40,97,49,51,53,52,32,100,105,114,51,50,55,51,50,56,51,51,51,32,102,105,108,101,51,50,57,51,51,48,51,51,52,32,101,120,116,51,51,49,51,51,50,51,51,53,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,14),40,102,95,49,51,52,51,32,112,110,51,50,54,41,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,7),40,97,49,51,54,54,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,45),40,97,49,51,55,50,32,95,51,52,50,51,52,51,51,52,56,32,102,105,108,101,51,52,52,51,52,53,51,52,57,32,101,120,116,51,52,54,51,52,55,51,53,48,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,21),40,102,95,49,51,54,49,32,112,110,51,52,48,32,100,105,114,51,52,49,41,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,7),40,97,49,51,56,52,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,44),40,97,49,51,57,48,32,100,105,114,51,53,55,51,53,56,51,54,51,32,95,51,53,57,51,54,48,51,54,52,32,101,120,116,51,54,49,51,54,50,51,54,53,41,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,22),40,102,95,49,51,55,57,32,112,110,51,53,53,32,102,105,108,101,51,53,54,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,7),40,97,49,52,48,50,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,45),40,97,49,52,48,56,32,100,105,114,51,55,50,51,55,51,51,55,56,32,102,105,108,101,51,55,52,51,55,53,51,55,57,32,95,51,55,54,51,55,55,51,56,48,41,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,21),40,102,95,49,51,57,55,32,112,110,51,55,48,32,101,120,116,51,55,49,41,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,9),40,116,101,109,112,100,105,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,12),40,97,49,52,54,57,32,112,52,49,56,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,20),40,102,95,49,52,52,48,32,46,32,116,109,112,52,48,55,52,48,56,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,8),40,102,95,49,53,48,52,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,18),40,97,100,100,112,97,114,116,32,112,97,114,116,115,52,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,11),40,103,52,54,56,32,112,52,55,54,41,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,52,54,55,32,103,52,55,51,52,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,28),40,108,111,111,112,32,105,52,53,55,32,112,114,101,118,52,53,56,32,112,97,114,116,115,52,53,57,41,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,28),40,102,95,49,54,48,49,32,112,97,116,104,52,52,52,32,46,32,116,109,112,52,52,51,52,52,53,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,15),40,102,95,49,57,48,48,32,100,105,114,53,48,56,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,15),40,102,95,49,57,52,50,32,100,105,114,53,49,55,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,14),40,102,95,50,48,51,48,32,112,110,49,53,48,41,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,14),40,102,95,50,48,51,54,32,114,116,49,53,49,41,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,14),40,102,95,50,48,52,53,32,114,116,49,53,51,41,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,14),40,102,95,50,48,53,55,32,112,110,49,53,56,41,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,14),40,102,95,50,48,54,51,32,114,116,49,53,57,41,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,14),40,102,95,50,48,54,54,32,114,116,49,54,48,41,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_files_toplevel)
C_externexport void C_ccall C_files_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_568)
static void C_ccall f_568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_571)
static void C_ccall f_571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_574)
static void C_ccall f_574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2055)
static void C_ccall f_2055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2063)
static void C_ccall f_2063(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2057)
static void C_ccall f_2057(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2028)
static void C_ccall f_2028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2045)
static void C_ccall f_2045(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2036)
static void C_ccall f_2036(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_871)
static void C_fcall f_871(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1190)
static void C_ccall f_1190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1193)
static void C_ccall f_1193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2025)
static void C_ccall f_2025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1942)
static void C_ccall f_1942(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1990)
static void C_ccall f_1990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1993)
static void C_ccall f_1993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1996)
static void C_ccall f_1996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2003)
static void C_ccall f_2003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1983)
static void C_ccall f_1983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1910)
static C_word C_fcall f_1910(C_word t0);
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1619)
static void C_fcall f_1619(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1821)
static void C_fcall f_1821(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1825)
static void C_ccall f_1825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1769)
static void C_fcall f_1769(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1805)
static void C_ccall f_1805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1755)
static void C_ccall f_1755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1629)
static void C_fcall f_1629(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1658)
static void C_ccall f_1658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1661)
static void C_ccall f_1661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1719)
static void C_fcall f_1719(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1729)
static void C_ccall f_1729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1678)
static void C_ccall f_1678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1681)
static void C_ccall f_1681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1684)
static void C_ccall f_1684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1687)
static void C_ccall f_1687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1696)
static void C_fcall f_1696(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1703)
static void C_ccall f_1703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1662)
static void C_fcall f_1662(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1666)
static void C_ccall f_1666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1562)
static C_word C_fcall f_1562(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_1504)
static void C_ccall f_1504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1510)
static void C_fcall f_1510(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1548)
static void C_ccall f_1548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1556)
static void C_ccall f_1556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1552)
static void C_ccall f_1552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1514)
static void C_ccall f_1514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1520)
static void C_ccall f_1520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1527)
static void C_ccall f_1527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1544)
static void C_ccall f_1544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1540)
static void C_ccall f_1540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1440)
static void C_ccall f_1440(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1440)
static void C_ccall f_1440r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1444)
static void C_ccall f_1444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1452)
static void C_fcall f_1452(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1475)
static void C_ccall f_1475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1479)
static void C_ccall f_1479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1456)
static void C_ccall f_1456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1462)
static void C_ccall f_1462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1470)
static void C_ccall f_1470(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1415)
static void C_fcall f_1415(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1422)
static void C_ccall f_1422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1429)
static void C_ccall f_1429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1435)
static void C_ccall f_1435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1397)
static void C_ccall f_1397(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1409)
static void C_ccall f_1409(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1403)
static void C_ccall f_1403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1379)
static void C_ccall f_1379(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1391)
static void C_ccall f_1391(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1385)
static void C_ccall f_1385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1361)
static void C_ccall f_1361(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1373)
static void C_ccall f_1373(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1367)
static void C_ccall f_1367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1343)
static void C_ccall f_1343(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1355)
static void C_ccall f_1355(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1349)
static void C_ccall f_1349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1325)
static void C_ccall f_1325(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1337)
static void C_ccall f_1337(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1331)
static void C_ccall f_1331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1310)
static void C_ccall f_1310(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1322)
static void C_ccall f_1322(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1316)
static void C_ccall f_1316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1307)
static void C_ccall f_1307(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1301)
static void C_ccall f_1301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1280)
static void C_ccall f_1280(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1286)
static void C_ccall f_1286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1208)
static void C_ccall f_1208(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1224)
static void C_ccall f_1224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1249)
static void C_ccall f_1249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1267)
static void C_ccall f_1267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1259)
static void C_ccall f_1259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1246)
static void C_ccall f_1246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1234)
static void C_ccall f_1234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1238)
static void C_ccall f_1238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1242)
static void C_ccall f_1242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1194)
static void C_fcall f_1194(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1147)
static void C_ccall f_1147(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1147)
static void C_ccall f_1147r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1151)
static void C_ccall f_1151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1158)
static void C_ccall f_1158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1164)
static void C_ccall f_1164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1161)
static void C_ccall f_1161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1115)
static void C_ccall f_1115(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1115)
static void C_ccall f_1115r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1119)
static void C_ccall f_1119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1126)
static void C_ccall f_1126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1029)
static void C_fcall f_1029(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1082)
static void C_fcall f_1082(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1058)
static void C_ccall f_1058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1065)
static void C_fcall f_1065(C_word t0,C_word t1) C_noret;
C_noret_decl(f_998)
static void C_fcall f_998(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_937)
static void C_fcall f_937(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_946)
static void C_fcall f_946(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_976)
static void C_ccall f_976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_984)
static void C_ccall f_984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_886)
static void C_fcall f_886(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_902)
static void C_fcall f_902(C_word t0,C_word t1) C_noret;
C_noret_decl(f_873)
static void C_ccall f_873(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_884)
static void C_ccall f_884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_726)
static void C_ccall f_726(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_726)
static void C_ccall f_726r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_757)
static void C_ccall f_757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_823)
static void C_ccall f_823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_760)
static void C_ccall f_760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_814)
static void C_ccall f_814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_763)
static void C_ccall f_763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_766)
static void C_ccall f_766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_769)
static void C_ccall f_769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_772)
static void C_ccall f_772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_779)
static void C_ccall f_779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_781)
static void C_fcall f_781(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_800)
static void C_ccall f_800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_807)
static void C_ccall f_807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_791)
static void C_ccall f_791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_794)
static void C_ccall f_794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_797)
static void C_ccall f_797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_588)
static void C_ccall f_588(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_588)
static void C_ccall f_588r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_619)
static void C_ccall f_619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_679)
static void C_ccall f_679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_622)
static void C_ccall f_622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_673)
static void C_ccall f_673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_625)
static void C_ccall f_625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_628)
static void C_ccall f_628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_631)
static void C_ccall f_631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_634)
static void C_ccall f_634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_641)
static void C_ccall f_641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_643)
static void C_fcall f_643(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_659)
static void C_ccall f_659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_666)
static void C_ccall f_666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_653)
static void C_ccall f_653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_656)
static void C_ccall f_656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_576)
static void C_ccall f_576(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_583)
static void C_ccall f_583(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_871)
static void C_fcall trf_871(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_871(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_871(t0,t1);}

C_noret_decl(trf_1619)
static void C_fcall trf_1619(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1619(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1619(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1821)
static void C_fcall trf_1821(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1821(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1821(t0,t1);}

C_noret_decl(trf_1769)
static void C_fcall trf_1769(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1769(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1769(t0,t1);}

C_noret_decl(trf_1629)
static void C_fcall trf_1629(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1629(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1629(t0,t1);}

C_noret_decl(trf_1719)
static void C_fcall trf_1719(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1719(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1719(t0,t1,t2);}

C_noret_decl(trf_1696)
static void C_fcall trf_1696(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1696(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1696(t0,t1);}

C_noret_decl(trf_1662)
static void C_fcall trf_1662(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1662(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1662(t0,t1,t2);}

C_noret_decl(trf_1510)
static void C_fcall trf_1510(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1510(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1510(t0,t1);}

C_noret_decl(trf_1452)
static void C_fcall trf_1452(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1452(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1452(t0,t1);}

C_noret_decl(trf_1415)
static void C_fcall trf_1415(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1415(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1415(t0,t1);}

C_noret_decl(trf_1194)
static void C_fcall trf_1194(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1194(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1194(t0,t1);}

C_noret_decl(trf_1029)
static void C_fcall trf_1029(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1029(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_1029(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1082)
static void C_fcall trf_1082(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1082(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1082(t0,t1);}

C_noret_decl(trf_1065)
static void C_fcall trf_1065(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1065(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1065(t0,t1);}

C_noret_decl(trf_998)
static void C_fcall trf_998(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_998(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_998(t0,t1,t2,t3);}

C_noret_decl(trf_937)
static void C_fcall trf_937(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_937(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_937(t0,t1,t2,t3);}

C_noret_decl(trf_946)
static void C_fcall trf_946(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_946(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_946(t0,t1,t2);}

C_noret_decl(trf_886)
static void C_fcall trf_886(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_886(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_886(t0,t1,t2);}

C_noret_decl(trf_902)
static void C_fcall trf_902(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_902(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_902(t0,t1);}

C_noret_decl(trf_781)
static void C_fcall trf_781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_781(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_781(t0,t1,t2,t3);}

C_noret_decl(trf_643)
static void C_fcall trf_643(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_643(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_643(t0,t1,t2,t3);}

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
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_files_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_files_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("files_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(612)){
C_save(t1);
C_rereclaim2(612*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,102);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],12,"delete-file*");
lf[3]=C_h_intern(&lf[3],11,"delete-file");
lf[4]=C_h_intern(&lf[4],12,"file-exists\077");
lf[5]=C_h_intern(&lf[5],9,"file-copy");
lf[6]=C_h_intern(&lf[6],17,"close-output-port");
lf[7]=C_h_intern(&lf[7],16,"close-input-port");
lf[8]=C_h_intern(&lf[8],12,"read-string!");
lf[9]=C_h_intern(&lf[9],12,"write-string");
lf[10]=C_h_intern(&lf[10],11,"make-string");
lf[11]=C_h_intern(&lf[11],16,"open-output-file");
lf[12]=C_h_intern(&lf[12],15,"open-input-file");
lf[13]=C_h_intern(&lf[13],9,"\003syserror");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\030can not copy directories");
lf[15]=C_h_intern(&lf[15],17,"directory-exists\077");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000#newfile exists but clobber is false");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000/invalid blocksize given: not a positive integer");
lf[18]=C_h_intern(&lf[18],9,"file-move");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000#newfile exists but clobber is false");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\030can not move directories");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000/invalid blocksize given: not a positive integer");
lf[25]=C_h_intern(&lf[25],18,"absolute-pathname\077");
lf[26]=C_h_intern(&lf[26],19,"irregex-match-data\077");
lf[28]=C_h_intern(&lf[28],13,"\003syssubstring");
lf[29]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[31]=C_h_intern(&lf[31],13,"make-pathname");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[33]=C_h_intern(&lf[33],13,"string-append");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[39]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[40]=C_h_intern(&lf[40],22,"make-absolute-pathname");
lf[41]=C_h_intern(&lf[41],17,"\003sysstring-append");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[44]=C_h_intern(&lf[44],18,"decompose-pathname");
lf[45]=C_h_intern(&lf[45],23,"irregex-match-substring");
lf[46]=C_h_intern(&lf[46],14,"irregex-search");
lf[47]=C_h_intern(&lf[47],18,"pathname-directory");
lf[48]=C_h_intern(&lf[48],13,"pathname-file");
lf[49]=C_h_intern(&lf[49],18,"pathname-extension");
lf[50]=C_h_intern(&lf[50],24,"pathname-strip-directory");
lf[51]=C_h_intern(&lf[51],24,"pathname-strip-extension");
lf[52]=C_h_intern(&lf[52],26,"pathname-replace-directory");
lf[53]=C_h_intern(&lf[53],21,"pathname-replace-file");
lf[54]=C_h_intern(&lf[54],26,"pathname-replace-extension");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\004temp");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\004/tmp");
lf[57]=C_h_intern(&lf[57],24,"get-environment-variable");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\003TMP");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\004TEMP");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\006TMPDIR");
lf[61]=C_h_intern(&lf[61],21,"create-temporary-file");
lf[62]=C_h_intern(&lf[62],21,"call-with-output-file");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\003tmp");
lf[64]=C_h_intern(&lf[64],26,"create-temporary-directory");
lf[65]=C_h_intern(&lf[65],15,"\003syssignal-hook");
lf[66]=C_h_intern(&lf[66],11,"\000file-error");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000$cannot create temporary directory - ");
lf[68]=C_h_intern(&lf[68],17,"\003syspeek-c-string");
lf[69]=C_h_intern(&lf[69],17,"\003sysmake-c-string");
lf[70]=C_h_intern(&lf[70],7,"mingw32");
lf[71]=C_h_intern(&lf[71],7,"windows");
lf[72]=C_h_intern(&lf[72],4,"unix");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[76]=C_h_intern(&lf[76],18,"normalize-pathname");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[79]=C_h_intern(&lf[79],7,"display");
lf[80]=C_h_intern(&lf[80],16,"\003syswrite-char-0");
lf[81]=C_h_intern(&lf[81],8,"for-each");
lf[82]=C_h_intern(&lf[82],20,"\003sysexpand-home-path");
lf[83]=C_h_intern(&lf[83],17,"get-output-string");
lf[84]=C_h_intern(&lf[84],7,"reverse");
lf[85]=C_h_intern(&lf[85],18,"open-output-string");
lf[86]=C_h_intern(&lf[86],15,"directory-null\077");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[89]=C_h_intern(&lf[89],12,"string-split");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\002/\134");
lf[91]=C_h_intern(&lf[91],19,"decompose-directory");
lf[92]=C_h_intern(&lf[92],14,"build-platform");
lf[93]=C_h_intern(&lf[93],7,"irregex");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\034^(.*[\134/\134\134])\077((\134.)\077[^\134/\134\134]+)$");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000&^(.*[\134/\134\134])\077([^\134/\134\134]+)(\134.([^\134/\134\134.]+))$");
lf[96]=C_h_intern(&lf[96],20,"\003syswindows-platform");
lf[97]=C_h_intern(&lf[97],13,"irregex-match");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\026([A-Za-z]:)\077([\134/\134\134]).*");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\012([\134/\134\134]).*");
lf[100]=C_h_intern(&lf[100],17,"register-feature!");
lf[101]=C_h_intern(&lf[101],5,"files");
C_register_lf2(lf,102,create_ptable());
t2=C_mutate(&lf[0] /* (set! c104 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_568,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k566 */
static void C_ccall f_568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_568,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_571,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k569 in k566 */
static void C_ccall f_571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_571,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_574,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* files.scm:58: register-feature! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[100]+1)))(3,*((C_word*)lf[100]+1),t2,lf[101]);}

/* k572 in k569 in k566 */
static void C_ccall f_574(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_574,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! delete-file* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_576,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[5]+1 /* (set! file-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_588,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[18]+1 /* (set! file-move ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_726,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t5=lf[22] /* absolute-pathname-root */ =C_SCHEME_UNDEFINED;;
t6=lf[23] /* root-origin */ =C_SCHEME_UNDEFINED;;
t7=lf[24] /* root-directory */ =C_SCHEME_UNDEFINED;;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_871,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[96]+1))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2028,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* files.scm:147: irregex */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(3,*((C_word*)lf[93]+1),t9,lf[98]);}
else{
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2055,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* files.scm:151: irregex */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(3,*((C_word*)lf[93]+1),t9,lf[99]);}}

/* k2053 in k572 in k569 in k566 */
static void C_ccall f_2055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2055,2,t0,t1);}
t2=C_mutate(&lf[22] /* (set! absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2057,a[2]=t1,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate(&lf[23] /* (set! root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2063,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[24] /* (set! root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2066,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];
f_871(t5,t4);}

/* f_2066 in k2053 in k572 in k569 in k566 */
static void C_ccall f_2066(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2066,3,t0,t1,t2);}
if(C_truep(t2)){
/* files.scm:154: irregex-match-substring */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),t1,t2,C_fix(1));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_2063 in k2053 in k572 in k569 in k566 */
static void C_ccall f_2063(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2063,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* f_2057 in k2053 in k572 in k569 in k566 */
static void C_ccall f_2057(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2057,3,t0,t1,t2);}
/* files.scm:152: irregex-match */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t1,((C_word*)t0)[2],t2);}

/* k2026 in k572 in k569 in k566 */
static void C_ccall f_2028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2028,2,t0,t1);}
t2=C_mutate(&lf[22] /* (set! absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2030,a[2]=t1,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate(&lf[23] /* (set! root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2036,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[24] /* (set! root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2045,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];
f_871(t5,t4);}

/* f_2045 in k2026 in k572 in k569 in k566 */
static void C_ccall f_2045(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2045,3,t0,t1,t2);}
if(C_truep(t2)){
/* files.scm:150: irregex-match-substring */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),t1,t2,C_fix(2));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_2036 in k2026 in k572 in k569 in k566 */
static void C_ccall f_2036(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2036,3,t0,t1,t2);}
if(C_truep(t2)){
/* files.scm:149: irregex-match-substring */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),t1,t2,C_fix(1));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_2030 in k2026 in k572 in k569 in k566 */
static void C_ccall f_2030(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2030,3,t0,t1,t2);}
/* files.scm:148: irregex-match */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t1,((C_word*)t0)[2],t2);}

/* k869 in k572 in k569 in k566 */
static void C_fcall f_871(C_word t0,C_word t1){
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
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_871,NULL,2,t0,t1);}
t2=C_mutate((C_word*)lf[25]+1 /* (set! absolute-pathname? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_873,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[27] /* (set! chop-pds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_886,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t4=lf[30];
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_937,a[2]=t4,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t12=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_998,a[2]=t6,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t13=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1029,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[31]+1 /* (set! make-pathname ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1115,a[2]=t8,a[3]=t4,a[4]=t10,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp));
t15=C_mutate((C_word*)lf[40]+1 /* (set! make-absolute-pathname ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1147,a[2]=t8,a[3]=t4,a[4]=t10,a[5]=((C_word)li12),tmp=(C_word)a,a+=6,tmp));
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1190,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* files.scm:235: irregex */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(3,*((C_word*)lf[93]+1),t16,lf[95]);}

/* k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1193,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* files.scm:236: irregex */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[93]+1)))(3,*((C_word*)lf[93]+1),t2,lf[94]);}

/* k1191 in k1188 in k869 in k572 in k569 in k566 */
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
C_word ab[52],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1194,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
t3=C_mutate((C_word*)lf[44]+1 /* (set! decompose-pathname ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1208,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp));
t4=C_mutate((C_word*)lf[47]+1 /* (set! pathname-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1280,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[48]+1 /* (set! pathname-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1295,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[49]+1 /* (set! pathname-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1310,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[50]+1 /* (set! pathname-strip-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1325,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[51]+1 /* (set! pathname-strip-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1343,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[52]+1 /* (set! pathname-replace-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1361,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[53]+1 /* (set! pathname-replace-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1379,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[54]+1 /* (set! pathname-replace-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1397,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=lf[55];
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1415,a[2]=t13,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t16=C_mutate((C_word*)lf[61]+1 /* (set! create-temporary-file ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1440,a[2]=t15,a[3]=t14,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp));
t17=C_mutate((C_word*)lf[64]+1 /* (set! create-temporary-directory ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1504,a[2]=t15,a[3]=t14,a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp));
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2025,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* files.scm:351: build-platform */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[92]+1)))(2,*((C_word*)lf[92]+1),t18);}

/* k2023 in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_2025(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2025,2,t0,t1);}
t2=C_eqp(t1,lf[70]);
t3=(C_truep(t2)?lf[71]:lf[72]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1562,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
t5=C_mutate((C_word*)lf[76]+1 /* (set! normalize-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1601,a[2]=t3,a[3]=t4,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp));
t6=C_mutate((C_word*)lf[86]+1 /* (set! directory-null? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1900,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[91]+1 /* (set! decompose-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1942,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_UNDEFINED);}

/* f_1942 in k2023 in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1942(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1942,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1990,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_i_check_string_2(t4,lf[91]);
/* files.scm:413: string-split */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[89]+1)))(5,*((C_word*)lf[89]+1),t3,t4,lf[90],C_SCHEME_FALSE);}

/* k1988 */
static void C_ccall f_1990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1990,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1993,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* files.scm:446: absolute-pathname-root */
t3=lf[22];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1991 in k1988 */
static void C_ccall f_1993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1996,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm:447: root-origin */
t3=lf[23];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k1994 in k1991 in k1988 */
static void C_ccall f_1996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2003,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* files.scm:448: root-directory */
t3=lf[24];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2001 in k1994 in k1991 in k1988 */
static void C_ccall f_2003(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2003,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[4]);
t3=(C_truep(t2)?C_SCHEME_FALSE:((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
if(C_truep(t4)){
t5=C_i_car(t3);
t6=C_block_size(t4);
if(C_truep(C_substring_compare(t4,t5,C_fix(0),C_fix(0),t6))){
t7=C_i_cdr(t3);
t8=C_block_size(t5);
t9=C_block_size(t8);
t10=C_eqp(t6,t9);
if(C_truep(t10)){
/* files.scm:448: values */
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],t1,t7);}
else{
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1983,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* files.scm:444: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(5,*((C_word*)lf[28]+1),t11,t5,t6,t8);}}
else{
/* files.scm:448: values */
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],t1,t3);}}
else{
/* files.scm:448: values */
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],t1,t3);}}

/* k1981 in k2001 in k1994 in k1991 in k1988 */
static void C_ccall f_1983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1983,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* files.scm:448: values */
C_values(5,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* f_1900 in k2023 in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1900(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1900,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1908,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_listp(t2))){
t4=t3;
f_1908(2,t4,t2);}
else{
t4=t2;
t5=C_i_check_string_2(t4,lf[86]);
/* files.scm:413: string-split */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[89]+1)))(5,*((C_word*)lf[89]+1),t3,t4,lf[90],C_SCHEME_TRUE);}}

/* k1906 */
static void C_ccall f_1908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1908,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1910,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1910(t1));}

/* loop in k1906 */
static C_word C_fcall f_1910(C_word t1){
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
if(C_truep((C_truep(C_i_equalp(t3,lf[87]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[88]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=C_i_cdr(t1);
t6=t4;
t1=t6;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* f_1601 in k2023 in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1601(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1601r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1601r(t0,t1,t2,t3);}}

static void C_ccall f_1601r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1605,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_1605(2,t5,((C_word*)t0)[2]);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_1605(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1603 */
static void C_ccall f_1605(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1605,2,t0,t1);}
t2=C_eqp(t1,lf[71]);
t3=(C_truep(t2)?C_make_character(92):C_make_character(47));
t4=C_i_check_string_2(((C_word*)t0)[4],lf[76]);
t5=C_block_size(((C_word*)t0)[4]);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1619,a[2]=t1,a[3]=t11,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],a[6]=t9,a[7]=t3,a[8]=t7,a[9]=t5,a[10]=((C_word)li48),tmp=(C_word)a,a+=11,tmp));
t13=((C_word*)t11)[1];
f_1619(t13,((C_word*)t0)[2],C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop in k1603 */
static void C_fcall f_1619(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1619,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[9]))){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1629,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t5,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1755,a[2]=t6,a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* files.scm:369: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(5,*((C_word*)lf[28]+1),t7,((C_word*)t0)[4],t3,t2);}
else{
t7=t6;
f_1629(t7,C_SCHEME_UNDEFINED);}}
else{
t6=C_i_string_ref(((C_word*)t0)[4],t2);
if(C_truep((C_truep(C_eqp(t6,C_make_character(92)))?C_SCHEME_TRUE:(C_truep(C_eqp(t6,C_make_character(47)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1769,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)t5)[1]))){
t8=C_eqp(t2,t3);
if(C_truep(t8)){
t9=C_set_block_item(((C_word*)t0)[8],0,C_SCHEME_TRUE);
t10=t7;
f_1769(t10,t9);}
else{
t9=t7;
f_1769(t9,C_SCHEME_UNDEFINED);}}
else{
t8=t7;
f_1769(t8,C_SCHEME_UNDEFINED);}}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1821,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)t5)[1]))){
t8=C_i_string_ref(((C_word*)t0)[4],t2);
t9=C_i_char_equalp(t8,C_make_character(58));
t10=t7;
f_1821(t10,(C_truep(t9)?C_eqp(lf[71],((C_word*)t0)[2]):C_SCHEME_FALSE));}
else{
t8=t7;
f_1821(t8,C_SCHEME_FALSE);}}}}

/* k1819 in loop in k1603 */
static void C_fcall f_1821(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1821,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1825,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* files.scm:402: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(5,*((C_word*)lf[28]+1),t2,((C_word*)t0)[4],C_fix(0),t3);}
else{
t2=C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* files.scm:404: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1619(t3,((C_word*)t0)[5],t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}}

/* k1823 in k1819 in loop in k1603 */
static void C_ccall f_1825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* files.scm:403: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1619(t5,((C_word*)t0)[2],t3,t4,C_SCHEME_END_OF_LIST);}

/* k1767 in loop in k1603 */
static void C_fcall f_1769(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1769,NULL,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[8],((C_word*)t0)[7]);
if(C_truep(t2)){
t3=C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
/* files.scm:395: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_1619(t5,((C_word*)t0)[5],t3,t4,((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1805,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* files.scm:398: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(5,*((C_word*)lf[28]+1),t5,((C_word*)t0)[2],((C_word*)t0)[7],((C_word*)t0)[8]);}}

/* k1803 in k1767 in loop in k1603 */
static void C_ccall f_1805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1805,2,t0,t1);}
t2=f_1562(C_a_i(&a,9),t1,((C_word*)((C_word*)t0)[6])[1]);
/* files.scm:396: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1619(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k1753 in loop in k1603 */
static void C_ccall f_1755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1755,2,t0,t1);}
t2=f_1562(C_a_i(&a,9),t1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_1629(t4,t3);}

/* k1627 in loop in k1603 */
static void C_fcall f_1629(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1629,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[8])[1]))){
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t2=C_a_i_string(&a,1,((C_word*)t0)[6]);
/* files.scm:372: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(4,*((C_word*)lf[41]+1),((C_word*)t0)[5],t2,lf[77]);}
else{
t2=C_a_i_string(&a,1,((C_word*)t0)[6]);
/* files.scm:373: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(4,*((C_word*)lf[41]+1),((C_word*)t0)[5],lf[78],t2);}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1655,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* files.scm:374: open-output-string */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[85]+1)))(2,*((C_word*)lf[85]+1),t2);}}

/* k1653 in k1627 in loop in k1603 */
static void C_ccall f_1655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1658,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* files.scm:375: reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[84]+1)))(3,*((C_word*)lf[84]+1),t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k1656 in k1653 in k1627 in loop in k1603 */
static void C_ccall f_1658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1658,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_i_car(t1);
/* files.scm:376: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(4,*((C_word*)lf[79]+1),t2,t3,((C_word*)t0)[8]);}

/* k1659 in k1656 in k1653 in k1627 in loop in k1603 */
static void C_ccall f_1661(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1661,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1662,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
t3=C_i_cdr(((C_word*)t0)[7]);
t4=C_i_check_list_2(t3,lf[81]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1678,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1719,a[2]=t2,a[3]=t7,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1719(t9,t5,t3);}

/* for-each-loop467 in k1659 in k1656 in k1653 in k1627 in loop in k1603 */
static void C_fcall f_1719(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1719,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1729,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g468474 */
t5=((C_word*)t0)[2];
f_1662(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1727 in for-each-loop467 in k1659 in k1656 in k1653 in k1627 in loop in k1603 */
static void C_ccall f_1729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1719(t3,((C_word*)t0)[2],t2);}

/* k1676 in k1659 in k1656 in k1653 in k1627 in loop in k1603 */
static void C_ccall f_1678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1678,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1681,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t3)){
/* files.scm:382: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[80]+1)))(4,*((C_word*)lf[80]+1),t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t4=t2;
f_1681(2,t4,C_SCHEME_UNDEFINED);}}

/* k1679 in k1676 in k1659 in k1656 in k1653 in k1627 in loop in k1603 */
static void C_ccall f_1681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1681,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1684,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* files.scm:383: get-output-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(3,*((C_word*)lf[83]+1),t2,((C_word*)t0)[2]);}

/* k1682 in k1679 in k1676 in k1659 in k1656 in k1653 in k1627 in loop in k1603 */
static void C_ccall f_1684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* files.scm:384: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[82]+1)))(3,*((C_word*)lf[82]+1),t2,t1);}

/* k1685 in k1682 in k1679 in k1676 in k1659 in k1656 in k1653 in k1627 in loop in k1603 */
static void C_ccall f_1687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1687,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_string_equal_p(((C_word*)t0)[6],((C_word*)t3)[1]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1696,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1707,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_string(&a,1,((C_word*)t0)[2]);
/* files.scm:387: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(4,*((C_word*)lf[41]+1),t5,t6,((C_word*)t3)[1]);}
else{
t5=t4;
f_1696(t5,C_SCHEME_UNDEFINED);}}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t3)[1]);}}

/* k1705 in k1685 in k1682 in k1679 in k1676 in k1659 in k1656 in k1653 in k1627 in loop in k1603 */
static void C_ccall f_1707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_1696(t3,t2);}

/* k1694 in k1685 in k1682 in k1679 in k1676 in k1659 in k1656 in k1653 in k1627 in loop in k1603 */
static void C_fcall f_1696(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1696,NULL,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1703,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:389: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(4,*((C_word*)lf[41]+1),t2,((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}}

/* k1701 in k1694 in k1685 in k1682 in k1679 in k1676 in k1659 in k1656 in k1653 in k1627 in loop in k1603 */
static void C_ccall f_1703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[3])[1]);}

/* g468 in k1659 in k1656 in k1653 in k1627 in loop in k1603 */
static void C_fcall f_1662(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1662,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1666,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* files.scm:379: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[80]+1)))(4,*((C_word*)lf[80]+1),t3,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1664 in g468 in k1659 in k1656 in k1653 in k1627 in loop in k1603 */
static void C_ccall f_1666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:380: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(4,*((C_word*)lf[79]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* addpart in k2023 in k1191 in k1188 in k869 in k572 in k569 in k566 */
static C_word C_fcall f_1562(C_word *a,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
if(C_truep(C_i_string_equal_p(lf[73],t1))){
t3=t2;
return(t3);}
else{
if(C_truep(C_i_string_equal_p(lf[74],t1))){
t3=C_i_nullp(t2);
if(C_truep(t3)){
return((C_truep(t3)?C_a_i_cons(&a,2,t1,t2):C_i_cdr(t2)));}
else{
t4=C_i_car(t2);
t5=C_i_string_equal_p(lf[75],t4);
return((C_truep(t5)?C_a_i_cons(&a,2,t1,t2):C_i_cdr(t2)));}}
else{
return(C_a_i_cons(&a,2,t1,t2));}}}

/* f_1504 in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1504,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1510(t5,t1);}

/* loop */
static void C_fcall f_1510(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1510,NULL,2,t0,t1);}
t2=C_random_fixnum(C_fix(65536));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1514,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1548,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* files.scm:333: tempdir */
t5=((C_word*)t0)[2];
f_1415(t5,t4);}

/* k1546 in loop */
static void C_ccall f_1548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1548,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1552,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1556,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* files.scm:336: number->string */
C_number_to_string(4,0,t3,((C_word*)t0)[2],C_fix(16));}

/* k1554 in k1546 in loop */
static void C_ccall f_1556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:334: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(4,*((C_word*)lf[33]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1550 in k1546 in loop */
static void C_ccall f_1552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:332: make-pathname */
t2=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1512 in loop */
static void C_ccall f_1514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1520,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm:337: directory-exists? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,t1);}

/* k1518 in k1512 in loop */
static void C_ccall f_1520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1520,2,t0,t1);}
if(C_truep(t1)){
/* files.scm:338: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1510(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:339: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(4,*((C_word*)lf[69]+1),t2,((C_word*)t0)[2],lf[64]);}}

/* k1525 in k1518 in k1512 in loop */
static void C_ccall f_1527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1527,2,t0,t1);}
t2=C_mkdir(t1);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1544,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k1542 in k1525 in k1518 in k1512 in loop */
static void C_ccall f_1544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:344: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(4,*((C_word*)lf[41]+1),((C_word*)t0)[2],lf[67],t1);}

/* k1538 in k1525 in k1518 in k1512 in loop */
static void C_ccall f_1540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:342: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[65]+1)))(6,*((C_word*)lf[65]+1),((C_word*)t0)[3],lf[66],lf[64],t1,((C_word*)t0)[2]);}

/* f_1440 in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1440(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_1440r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1440r(t0,t1,t2);}}

static void C_ccall f_1440r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1444,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_1444(2,t4,lf[63]);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_1444(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k1442 */
static void C_ccall f_1444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1444,2,t0,t1);}
t2=C_i_check_string_2(t1,lf[61]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1452,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t4,a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1452(t6,((C_word*)t0)[2]);}

/* loop in k1442 */
static void C_fcall f_1452(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1452,NULL,2,t0,t1);}
t2=C_random_fixnum(C_fix(65536));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1456,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1475,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* files.scm:321: tempdir */
t5=((C_word*)t0)[2];
f_1415(t5,t4);}

/* k1473 in loop in k1442 */
static void C_ccall f_1475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1475,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1479,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1483,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* files.scm:324: number->string */
C_number_to_string(4,0,t3,((C_word*)t0)[2],C_fix(16));}

/* k1481 in k1473 in loop in k1442 */
static void C_ccall f_1483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:322: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(4,*((C_word*)lf[41]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1477 in k1473 in loop in k1442 */
static void C_ccall f_1479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:320: make-pathname */
t2=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1454 in loop in k1442 */
static void C_ccall f_1456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1462,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm:325: file-exists? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(3,*((C_word*)lf[4]+1),t2,t1);}

/* k1460 in k1454 in loop in k1442 */
static void C_ccall f_1462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1462,2,t0,t1);}
if(C_truep(t1)){
/* files.scm:326: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1452(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1470,a[2]=((C_word*)t0)[2],a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
/* files.scm:327: call-with-output-file */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(4,*((C_word*)lf[62]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* a1469 in k1460 in k1454 in loop in k1442 */
static void C_ccall f_1470(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1470,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* tempdir in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_fcall f_1415(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1415,NULL,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1422,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* files.scm:309: get-environment-variable */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t3,lf[60]);}}

/* k1420 in tempdir in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1422,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1429,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:310: get-environment-variable */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t2,lf[59]);}}

/* k1427 in k1420 in tempdir in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1429,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:311: get-environment-variable */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t2,lf[58]);}}

/* k1433 in k1427 in k1420 in tempdir in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t2=lf[56];
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* f_1397 in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1397(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1397,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1403,a[2]=t2,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1409,a[2]=t3,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a1408 */
static void C_ccall f_1409(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1409,5,t0,t1,t2,t3,t4);}
/* files.scm:299: make-pathname */
t5=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,((C_word*)t0)[2]);}

/* a1402 */
static void C_ccall f_1403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1403,2,t0,t1);}
/* files.scm:298: decompose-pathname */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* f_1379 in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1379(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1379,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1385,a[2]=t2,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1391,a[2]=t3,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a1390 */
static void C_ccall f_1391(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1391,5,t0,t1,t2,t3,t4);}
/* files.scm:294: make-pathname */
t5=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,((C_word*)t0)[2],t4);}

/* a1384 */
static void C_ccall f_1385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1385,2,t0,t1);}
/* files.scm:293: decompose-pathname */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* f_1361 in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1361(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1361,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1367,a[2]=t2,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1373,a[2]=t3,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a1372 */
static void C_ccall f_1373(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1373,5,t0,t1,t2,t3,t4);}
/* files.scm:289: make-pathname */
t5=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[2],t3,t4);}

/* a1366 */
static void C_ccall f_1367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1367,2,t0,t1);}
/* files.scm:288: decompose-pathname */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* f_1343 in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1343(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1343,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1349,a[2]=t2,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1355,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a1354 */
static void C_ccall f_1355(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1355,5,t0,t1,t2,t3,t4);}
/* files.scm:284: make-pathname */
t5=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t3);}

/* a1348 */
static void C_ccall f_1349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1349,2,t0,t1);}
/* files.scm:283: decompose-pathname */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* f_1325 in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1325(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1325,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1331,a[2]=t2,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1337,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a1336 */
static void C_ccall f_1337(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1337,5,t0,t1,t2,t3,t4);}
/* files.scm:279: make-pathname */
t5=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,C_SCHEME_FALSE,t3,t4);}

/* a1330 */
static void C_ccall f_1331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1331,2,t0,t1);}
/* files.scm:278: decompose-pathname */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* f_1310 in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1310(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1310,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1316,a[2]=t2,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1322,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a1321 */
static void C_ccall f_1322(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1322,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* a1315 */
static void C_ccall f_1316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1316,2,t0,t1);}
/* files.scm:273: decompose-pathname */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* f_1295 in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1295(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1295,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1301,a[2]=t2,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1307,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a1306 */
static void C_ccall f_1307(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1307,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* a1300 */
static void C_ccall f_1301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1301,2,t0,t1);}
/* files.scm:268: decompose-pathname */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* f_1280 in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1280(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1280,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1286,a[2]=t2,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1292,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a1291 */
static void C_ccall f_1292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1292,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* a1285 */
static void C_ccall f_1286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1286,2,t0,t1);}
/* files.scm:263: decompose-pathname */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* f_1208 in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_ccall f_1208(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1208,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[44]);
t4=C_block_size(t2);
t5=C_eqp(C_fix(0),t4);
if(C_truep(t5)){
/* files.scm:246: values */
C_values(5,0,t1,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1224,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* files.scm:247: irregex-search */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[46]+1)))(4,*((C_word*)lf[46]+1),t6,((C_word*)t0)[2],t2);}}

/* k1222 */
static void C_ccall f_1224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1224,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1234,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1246,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm:250: irregex-match-substring */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),t3,t1,C_fix(1));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1249,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* files.scm:253: irregex-search */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[46]+1)))(4,*((C_word*)lf[46]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k1247 in k1222 */
static void C_ccall f_1249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1249,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1259,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1267,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:256: irregex-match-substring */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),t3,t1,C_fix(1));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1274,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* files.scm:259: strip-pds */
f_1194(t2,((C_word*)t0)[2]);}}

/* k1272 in k1247 in k1222 */
static void C_ccall f_1274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:259: values */
C_values(5,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k1265 in k1247 in k1222 */
static void C_ccall f_1267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:256: strip-pds */
f_1194(((C_word*)t0)[2],t1);}

/* k1257 in k1247 in k1222 */
static void C_ccall f_1259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1259,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1263,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:257: irregex-match-substring */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),t2,((C_word*)t0)[2],C_fix(2));}

/* k1261 in k1257 in k1247 in k1222 */
static void C_ccall f_1263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:255: values */
C_values(5,0,((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* k1244 in k1222 */
static void C_ccall f_1246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:250: strip-pds */
f_1194(((C_word*)t0)[2],t1);}

/* k1232 in k1222 */
static void C_ccall f_1234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1234,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1238,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm:251: irregex-match-substring */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),t2,((C_word*)t0)[2],C_fix(2));}

/* k1236 in k1232 in k1222 */
static void C_ccall f_1238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1238,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1242,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* files.scm:252: irregex-match-substring */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),t2,((C_word*)t0)[2],C_fix(4));}

/* k1240 in k1236 in k1232 in k1222 */
static void C_ccall f_1242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:249: values */
C_values(5,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* strip-pds in k1191 in k1188 in k869 in k572 in k569 in k566 */
static void C_fcall f_1194(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1194,NULL,2,t1,t2);}
if(C_truep(t2)){
t3=t2;
if(C_truep((C_truep(C_i_equalp(t3,lf[42]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[43]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
/* files.scm:242: chop-pds */
f_886(t1,t2,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_1147 in k869 in k572 in k569 in k566 */
static void C_ccall f_1147(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_1147r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1147r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1147r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1151,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_1151(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_1151(2,t7,C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k1149 */
static void C_ccall f_1151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1151,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1158,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* files.scm:226: canonicalize-dirs */
t3=((C_word*)((C_word*)t0)[3])[1];
f_998(t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k1156 in k1149 */
static void C_ccall f_1158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1158,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1164,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* files.scm:227: absolute-pathname? */
t4=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k1162 in k1156 in k1149 */
static void C_ccall f_1164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[8];
/* files.scm:224: _make-pathname */
f_1029(((C_word*)t0)[6],lf[40],t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
/* files.scm:229: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[41]+1)))(4,*((C_word*)lf[41]+1),((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[8]);}}

/* k1159 in k1156 in k1149 */
static void C_ccall f_1161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:224: _make-pathname */
f_1029(((C_word*)t0)[5],lf[40],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_1115 in k869 in k572 in k569 in k566 */
static void C_ccall f_1115(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_1115r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1115r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1115r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1119,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_1119(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_1119(2,t7,C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k1117 */
static void C_ccall f_1119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1119,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1126,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* files.scm:220: canonicalize-dirs */
t3=((C_word*)((C_word*)t0)[3])[1];
f_998(t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k1124 in k1117 */
static void C_ccall f_1126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:220: _make-pathname */
f_1029(((C_word*)t0)[5],lf[31],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* _make-pathname in k869 in k572 in k569 in k566 */
static void C_fcall f_1029(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1029,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(C_truep(t5)?t5:lf[35]);
t8=(C_truep(t4)?t4:lf[36]);
t9=(C_truep(t6)?C_block_size(t6):C_fix(1));
t10=C_i_check_string_2(t3,t2);
t11=C_i_check_string_2(t8,t2);
t12=C_i_check_string_2(t7,t2);
t13=(C_truep(t6)?C_i_check_string_2(t6,t2):C_SCHEME_UNDEFINED);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1058,a[2]=t7,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1082,a[2]=t9,a[3]=t14,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t16=C_block_size(t8);
if(C_truep(C_fixnum_greater_or_equal_p(t16,t9))){
if(C_truep(t6)){
t17=C_substring_compare(t6,t8,C_fix(0),C_fix(0),t9);
t18=t15;
f_1082(t18,t17);}
else{
t17=C_subchar(t8,C_fix(0));
t18=t15;
f_1082(t18,C_i_memq(t17,lf[39]));}}
else{
t17=t15;
f_1082(t17,C_SCHEME_FALSE);}}

/* k1080 in _make-pathname in k869 in k572 in k569 in k566 */
static void C_fcall f_1082(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[4]);
/* files.scm:210: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(5,*((C_word*)lf[28]+1),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[3];
f_1058(2,t2,((C_word*)t0)[4]);}}

/* k1056 in _make-pathname in k869 in k572 in k569 in k566 */
static void C_ccall f_1058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1058,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1065,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
t4=C_i_char_equalp(C_subchar(((C_word*)t0)[2],C_fix(0)),C_make_character(46));
t5=t2;
f_1065(t5,C_i_not(t4));}
else{
t4=t2;
f_1065(t4,C_SCHEME_FALSE);}}

/* k1063 in k1056 in _make-pathname in k869 in k572 in k569 in k566 */
static void C_fcall f_1065(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* files.scm:204: string-append */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(6,*((C_word*)lf[33]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],lf[37],((C_word*)t0)[2]);}
else{
/* files.scm:204: string-append */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(6,*((C_word*)lf[33]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],lf[38],((C_word*)t0)[2]);}}

/* canonicalize-dirs in k869 in k572 in k569 in k566 */
static void C_fcall f_998(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_998,NULL,4,t0,t1,t2,t3);}
t4=C_i_not(t2);
t5=(C_truep(t4)?t4:C_i_nullp(t2));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[34]);}
else{
if(C_truep(C_i_stringp(t2))){
t6=C_a_i_list1(&a,1,t2);
/* files.scm:193: conc-dirs */
t7=((C_word*)((C_word*)t0)[2])[1];
f_937(t7,t1,t6,t3);}
else{
/* files.scm:194: conc-dirs */
t6=((C_word*)((C_word*)t0)[2])[1];
f_937(t6,t1,t2,t3);}}}

/* conc-dirs in k869 in k572 in k569 in k566 */
static void C_fcall f_937(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_937,NULL,4,t0,t1,t2,t3);}
t4=C_i_check_list_2(t2,lf[31]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_946,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t6,a[5]=((C_word)li7),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_946(t8,t1,t2);}

/* loop in conc-dirs in k869 in k572 in k569 in k566 */
static void C_fcall f_946(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_946,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[32]);}
else{
t3=C_i_car(t2);
t4=C_i_string_length(t3);
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_i_cdr(t2);
/* files.scm:185: loop */
t10=t1;
t11=t6;
t1=t10;
t2=t11;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_976,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t7=C_i_car(t2);
/* files.scm:187: chop-pds */
f_886(t6,t7,((C_word*)t0)[3]);}}}

/* k974 in loop in conc-dirs in k869 in k572 in k569 in k566 */
static void C_ccall f_976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_976,2,t0,t1);}
t2=((C_word*)t0)[6];
t3=(C_truep(t2)?t2:((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_984,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_i_cdr(((C_word*)t0)[3]);
/* files.scm:189: loop */
t6=((C_word*)((C_word*)t0)[2])[1];
f_946(t6,t4,t5);}

/* k982 in k974 in loop in conc-dirs in k869 in k572 in k569 in k566 */
static void C_ccall f_984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:186: string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[33]+1)))(5,*((C_word*)lf[33]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* chop-pds in k869 in k572 in k569 in k566 */
static void C_fcall f_886(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_886,NULL,3,t1,t2,t3);}
if(C_truep(t2)){
t4=C_block_size(t2);
t5=(C_truep(t3)?C_block_size(t3):C_fix(1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_902,a[2]=t2,a[3]=t1,a[4]=t5,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t4,C_fix(1)))){
if(C_truep(t3)){
t7=C_fixnum_difference(t4,t5);
t8=C_substring_compare(t2,t3,t7,C_fix(0),t5);
t9=t6;
f_902(t9,t8);}
else{
t7=C_fixnum_difference(t4,t5);
t8=C_subchar(t2,t7);
t9=t6;
f_902(t9,C_i_memq(t8,lf[29]));}}
else{
t7=t6;
f_902(t7,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k900 in chop-pds in k869 in k572 in k569 in k566 */
static void C_fcall f_902(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* files.scm:170: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[28]+1)))(5,*((C_word*)lf[28]+1),((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* f_873 in k869 in k572 in k569 in k566 */
static void C_ccall f_873(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_873,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[25]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_884,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm:158: absolute-pathname-root */
t5=lf[22];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k882 */
static void C_ccall f_884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm:158: irregex-match-data? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[26]+1)))(3,*((C_word*)lf[26]+1),((C_word*)t0)[2],t1);}

/* f_726 in k572 in k569 in k566 */
static void C_ccall f_726(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_726r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_726r(t0,t1,t2,t3,t4);}}

static void C_ccall f_726r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(7);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(1024):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
if(C_truep(C_i_nullp(t12))){
t13=C_i_check_string_2(t2,lf[18]);
t14=C_i_check_string_2(t3,lf[18]);
t15=C_i_check_number_2(t10,lf[18]);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_757,a[2]=t6,a[3]=t3,a[4]=t1,a[5]=t10,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t10))){
if(C_truep(C_fixnum_greaterp(t10,C_fix(0)))){
t17=t16;
f_757(2,t17,C_SCHEME_UNDEFINED);}
else{
/* files.scm:108: ##sys#error */
t17=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,t16,lf[18],lf[21],t10);}}
else{
/* files.scm:108: ##sys#error */
t17=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,t16,lf[18],lf[21],t10);}}
else{
/* ##sys#error */
t13=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t1,lf[0],t12);}}

/* k755 */
static void C_ccall f_757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_757,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_760,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_823,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* files.scm:112: directory-exists? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t3,((C_word*)t0)[6]);}

/* k821 in k755 */
static void C_ccall f_823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* files.scm:113: ##sys#error */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[18],lf[20],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_760(2,t2,C_SCHEME_UNDEFINED);}}

/* k758 in k755 */
static void C_ccall f_760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_760,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_763,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_814,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* files.scm:114: file-exists? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(3,*((C_word*)lf[4]+1),t3,((C_word*)t0)[3]);}

/* k812 in k758 in k755 */
static void C_ccall f_814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[4])){
t2=((C_word*)t0)[3];
f_763(2,t2,((C_word*)t0)[4]);}
else{
/* files.scm:116: ##sys#error */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[18],lf[19],((C_word*)t0)[2]);}}
else{
t2=((C_word*)t0)[3];
f_763(2,t2,C_SCHEME_FALSE);}}

/* k761 in k758 in k755 */
static void C_ccall f_763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_763,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* files.scm:120: open-input-file */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t2,((C_word*)t0)[5]);}

/* k764 in k761 in k758 in k755 */
static void C_ccall f_766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_766,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_769,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* files.scm:121: open-output-file */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t2,((C_word*)t0)[2]);}

/* k767 in k764 in k761 in k758 in k755 */
static void C_ccall f_769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_769,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_772,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* files.scm:122: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t2,((C_word*)t0)[3]);}

/* k770 in k767 in k764 in k761 in k758 in k755 */
static void C_ccall f_772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_772,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_779,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* files.scm:123: read-string! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k777 in k770 in k767 in k764 in k761 in k758 in k755 */
static void C_ccall f_779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_779,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_781,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li3),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_781(t5,((C_word*)t0)[2],t1,C_fix(0));}

/* loop in k777 in k770 in k767 in k764 in k761 in k758 in k755 */
static void C_fcall f_781(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_781,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_791,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* files.scm:127: close-input-port */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(3,*((C_word*)lf[7]+1),t5,((C_word*)t0)[5]);}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_800,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* files.scm:132: write-string */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(5,*((C_word*)lf[9]+1),t5,((C_word*)t0)[2],t2,((C_word*)t0)[6]);}}

/* k798 in loop in k777 in k770 in k767 in k764 in k761 in k758 in k755 */
static void C_ccall f_800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_807,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* files.scm:133: read-string! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k805 in k798 in loop in k777 in k770 in k767 in k764 in k761 in k758 in k755 */
static void C_ccall f_807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[5],((C_word*)t0)[4]);
/* files.scm:133: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_781(t3,((C_word*)t0)[2],t1,t2);}

/* k789 in loop in k777 in k770 in k767 in k764 in k761 in k758 in k755 */
static void C_ccall f_791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_791,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_794,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* files.scm:128: close-output-port */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(3,*((C_word*)lf[6]+1),t2,((C_word*)t0)[2]);}

/* k792 in k789 in loop in k777 in k770 in k767 in k764 in k761 in k758 in k755 */
static void C_ccall f_794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_794,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_797,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm:129: delete-file */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(3,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2]);}

/* k795 in k792 in k789 in loop in k777 in k770 in k767 in k764 in k761 in k758 in k755 */
static void C_ccall f_797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_588 in k572 in k569 in k566 */
static void C_ccall f_588(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_588r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_588r(t0,t1,t2,t3,t4);}}

static void C_ccall f_588r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(7);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(1024):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
if(C_truep(C_i_nullp(t12))){
t13=C_i_check_string_2(t2,lf[5]);
t14=C_i_check_string_2(t3,lf[5]);
t15=C_i_check_number_2(t10,lf[5]);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_619,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t1,a[6]=t10,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t10))){
if(C_truep(C_fixnum_greaterp(t10,C_fix(0)))){
t17=t16;
f_619(2,t17,C_SCHEME_UNDEFINED);}
else{
/* files.scm:77: ##sys#error */
t17=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,t16,lf[5],lf[17],t10);}}
else{
/* files.scm:77: ##sys#error */
t17=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,t16,lf[5],lf[17],t10);}}
else{
/* ##sys#error */
t13=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t1,lf[0],t12);}}

/* k617 */
static void C_ccall f_619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_622,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_679,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* files.scm:81: file-exists? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(3,*((C_word*)lf[4]+1),t3,((C_word*)t0)[4]);}

/* k677 in k617 */
static void C_ccall f_679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[4])){
t2=((C_word*)t0)[3];
f_622(2,t2,((C_word*)t0)[4]);}
else{
/* files.scm:83: ##sys#error */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[5],lf[16],((C_word*)t0)[2]);}}
else{
t2=((C_word*)t0)[3];
f_622(2,t2,C_SCHEME_FALSE);}}

/* k620 in k617 */
static void C_ccall f_622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_622,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_673,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* files.scm:87: directory-exists? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t3,((C_word*)t0)[2]);}

/* k671 in k620 in k617 */
static void C_ccall f_673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* files.scm:88: ##sys#error */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[5],lf[14],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_625(2,t2,C_SCHEME_UNDEFINED);}}

/* k623 in k620 in k617 */
static void C_ccall f_625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_625,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_628,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* files.scm:89: open-input-file */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t2,((C_word*)t0)[2]);}

/* k626 in k623 in k620 in k617 */
static void C_ccall f_628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_628,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_631,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* files.scm:90: open-output-file */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t2,((C_word*)t0)[2]);}

/* k629 in k626 in k623 in k620 in k617 */
static void C_ccall f_631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_631,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* files.scm:91: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t2,((C_word*)t0)[3]);}

/* k632 in k629 in k626 in k623 in k620 in k617 */
static void C_ccall f_634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_641,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* files.scm:92: read-string! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k639 in k632 in k629 in k626 in k623 in k620 in k617 */
static void C_ccall f_641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_641,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_643,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li1),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_643(t5,((C_word*)t0)[2],t1,C_fix(0));}

/* loop in k639 in k632 in k629 in k626 in k623 in k620 in k617 */
static void C_fcall f_643(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_643,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_653,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* files.scm:96: close-input-port */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(3,*((C_word*)lf[7]+1),t5,((C_word*)t0)[5]);}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_659,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* files.scm:100: write-string */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(5,*((C_word*)lf[9]+1),t5,((C_word*)t0)[2],t2,((C_word*)t0)[6]);}}

/* k657 in loop in k639 in k632 in k629 in k626 in k623 in k620 in k617 */
static void C_ccall f_659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_666,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* files.scm:101: read-string! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k664 in k657 in loop in k639 in k632 in k629 in k626 in k623 in k620 in k617 */
static void C_ccall f_666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[5],((C_word*)t0)[4]);
/* files.scm:101: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_643(t3,((C_word*)t0)[2],t1,t2);}

/* k651 in loop in k639 in k632 in k629 in k626 in k623 in k620 in k617 */
static void C_ccall f_653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_656,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm:97: close-output-port */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(3,*((C_word*)lf[6]+1),t2,((C_word*)t0)[2]);}

/* k654 in k651 in loop in k639 in k632 in k629 in k626 in k623 in k620 in k617 */
static void C_ccall f_656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_576 in k572 in k569 in k566 */
static void C_ccall f_576(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_576,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_583,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* files.scm:68: file-exists? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(3,*((C_word*)lf[4]+1),t3,t2);}

/* k581 */
static void C_ccall f_583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* files.scm:68: delete-file */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(3,*((C_word*)lf[3]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[163] = {
{"toplevel:files_2escm",(void*)C_files_toplevel},
{"f_568:files_2escm",(void*)f_568},
{"f_571:files_2escm",(void*)f_571},
{"f_574:files_2escm",(void*)f_574},
{"f_2055:files_2escm",(void*)f_2055},
{"f_2066:files_2escm",(void*)f_2066},
{"f_2063:files_2escm",(void*)f_2063},
{"f_2057:files_2escm",(void*)f_2057},
{"f_2028:files_2escm",(void*)f_2028},
{"f_2045:files_2escm",(void*)f_2045},
{"f_2036:files_2escm",(void*)f_2036},
{"f_2030:files_2escm",(void*)f_2030},
{"f_871:files_2escm",(void*)f_871},
{"f_1190:files_2escm",(void*)f_1190},
{"f_1193:files_2escm",(void*)f_1193},
{"f_2025:files_2escm",(void*)f_2025},
{"f_1942:files_2escm",(void*)f_1942},
{"f_1990:files_2escm",(void*)f_1990},
{"f_1993:files_2escm",(void*)f_1993},
{"f_1996:files_2escm",(void*)f_1996},
{"f_2003:files_2escm",(void*)f_2003},
{"f_1983:files_2escm",(void*)f_1983},
{"f_1900:files_2escm",(void*)f_1900},
{"f_1908:files_2escm",(void*)f_1908},
{"f_1910:files_2escm",(void*)f_1910},
{"f_1601:files_2escm",(void*)f_1601},
{"f_1605:files_2escm",(void*)f_1605},
{"f_1619:files_2escm",(void*)f_1619},
{"f_1821:files_2escm",(void*)f_1821},
{"f_1825:files_2escm",(void*)f_1825},
{"f_1769:files_2escm",(void*)f_1769},
{"f_1805:files_2escm",(void*)f_1805},
{"f_1755:files_2escm",(void*)f_1755},
{"f_1629:files_2escm",(void*)f_1629},
{"f_1655:files_2escm",(void*)f_1655},
{"f_1658:files_2escm",(void*)f_1658},
{"f_1661:files_2escm",(void*)f_1661},
{"f_1719:files_2escm",(void*)f_1719},
{"f_1729:files_2escm",(void*)f_1729},
{"f_1678:files_2escm",(void*)f_1678},
{"f_1681:files_2escm",(void*)f_1681},
{"f_1684:files_2escm",(void*)f_1684},
{"f_1687:files_2escm",(void*)f_1687},
{"f_1707:files_2escm",(void*)f_1707},
{"f_1696:files_2escm",(void*)f_1696},
{"f_1703:files_2escm",(void*)f_1703},
{"f_1662:files_2escm",(void*)f_1662},
{"f_1666:files_2escm",(void*)f_1666},
{"f_1562:files_2escm",(void*)f_1562},
{"f_1504:files_2escm",(void*)f_1504},
{"f_1510:files_2escm",(void*)f_1510},
{"f_1548:files_2escm",(void*)f_1548},
{"f_1556:files_2escm",(void*)f_1556},
{"f_1552:files_2escm",(void*)f_1552},
{"f_1514:files_2escm",(void*)f_1514},
{"f_1520:files_2escm",(void*)f_1520},
{"f_1527:files_2escm",(void*)f_1527},
{"f_1544:files_2escm",(void*)f_1544},
{"f_1540:files_2escm",(void*)f_1540},
{"f_1440:files_2escm",(void*)f_1440},
{"f_1444:files_2escm",(void*)f_1444},
{"f_1452:files_2escm",(void*)f_1452},
{"f_1475:files_2escm",(void*)f_1475},
{"f_1483:files_2escm",(void*)f_1483},
{"f_1479:files_2escm",(void*)f_1479},
{"f_1456:files_2escm",(void*)f_1456},
{"f_1462:files_2escm",(void*)f_1462},
{"f_1470:files_2escm",(void*)f_1470},
{"f_1415:files_2escm",(void*)f_1415},
{"f_1422:files_2escm",(void*)f_1422},
{"f_1429:files_2escm",(void*)f_1429},
{"f_1435:files_2escm",(void*)f_1435},
{"f_1397:files_2escm",(void*)f_1397},
{"f_1409:files_2escm",(void*)f_1409},
{"f_1403:files_2escm",(void*)f_1403},
{"f_1379:files_2escm",(void*)f_1379},
{"f_1391:files_2escm",(void*)f_1391},
{"f_1385:files_2escm",(void*)f_1385},
{"f_1361:files_2escm",(void*)f_1361},
{"f_1373:files_2escm",(void*)f_1373},
{"f_1367:files_2escm",(void*)f_1367},
{"f_1343:files_2escm",(void*)f_1343},
{"f_1355:files_2escm",(void*)f_1355},
{"f_1349:files_2escm",(void*)f_1349},
{"f_1325:files_2escm",(void*)f_1325},
{"f_1337:files_2escm",(void*)f_1337},
{"f_1331:files_2escm",(void*)f_1331},
{"f_1310:files_2escm",(void*)f_1310},
{"f_1322:files_2escm",(void*)f_1322},
{"f_1316:files_2escm",(void*)f_1316},
{"f_1295:files_2escm",(void*)f_1295},
{"f_1307:files_2escm",(void*)f_1307},
{"f_1301:files_2escm",(void*)f_1301},
{"f_1280:files_2escm",(void*)f_1280},
{"f_1292:files_2escm",(void*)f_1292},
{"f_1286:files_2escm",(void*)f_1286},
{"f_1208:files_2escm",(void*)f_1208},
{"f_1224:files_2escm",(void*)f_1224},
{"f_1249:files_2escm",(void*)f_1249},
{"f_1274:files_2escm",(void*)f_1274},
{"f_1267:files_2escm",(void*)f_1267},
{"f_1259:files_2escm",(void*)f_1259},
{"f_1263:files_2escm",(void*)f_1263},
{"f_1246:files_2escm",(void*)f_1246},
{"f_1234:files_2escm",(void*)f_1234},
{"f_1238:files_2escm",(void*)f_1238},
{"f_1242:files_2escm",(void*)f_1242},
{"f_1194:files_2escm",(void*)f_1194},
{"f_1147:files_2escm",(void*)f_1147},
{"f_1151:files_2escm",(void*)f_1151},
{"f_1158:files_2escm",(void*)f_1158},
{"f_1164:files_2escm",(void*)f_1164},
{"f_1161:files_2escm",(void*)f_1161},
{"f_1115:files_2escm",(void*)f_1115},
{"f_1119:files_2escm",(void*)f_1119},
{"f_1126:files_2escm",(void*)f_1126},
{"f_1029:files_2escm",(void*)f_1029},
{"f_1082:files_2escm",(void*)f_1082},
{"f_1058:files_2escm",(void*)f_1058},
{"f_1065:files_2escm",(void*)f_1065},
{"f_998:files_2escm",(void*)f_998},
{"f_937:files_2escm",(void*)f_937},
{"f_946:files_2escm",(void*)f_946},
{"f_976:files_2escm",(void*)f_976},
{"f_984:files_2escm",(void*)f_984},
{"f_886:files_2escm",(void*)f_886},
{"f_902:files_2escm",(void*)f_902},
{"f_873:files_2escm",(void*)f_873},
{"f_884:files_2escm",(void*)f_884},
{"f_726:files_2escm",(void*)f_726},
{"f_757:files_2escm",(void*)f_757},
{"f_823:files_2escm",(void*)f_823},
{"f_760:files_2escm",(void*)f_760},
{"f_814:files_2escm",(void*)f_814},
{"f_763:files_2escm",(void*)f_763},
{"f_766:files_2escm",(void*)f_766},
{"f_769:files_2escm",(void*)f_769},
{"f_772:files_2escm",(void*)f_772},
{"f_779:files_2escm",(void*)f_779},
{"f_781:files_2escm",(void*)f_781},
{"f_800:files_2escm",(void*)f_800},
{"f_807:files_2escm",(void*)f_807},
{"f_791:files_2escm",(void*)f_791},
{"f_794:files_2escm",(void*)f_794},
{"f_797:files_2escm",(void*)f_797},
{"f_588:files_2escm",(void*)f_588},
{"f_619:files_2escm",(void*)f_619},
{"f_679:files_2escm",(void*)f_679},
{"f_622:files_2escm",(void*)f_622},
{"f_673:files_2escm",(void*)f_673},
{"f_625:files_2escm",(void*)f_625},
{"f_628:files_2escm",(void*)f_628},
{"f_631:files_2escm",(void*)f_631},
{"f_634:files_2escm",(void*)f_634},
{"f_641:files_2escm",(void*)f_641},
{"f_643:files_2escm",(void*)f_643},
{"f_659:files_2escm",(void*)f_659},
{"f_666:files_2escm",(void*)f_666},
{"f_653:files_2escm",(void*)f_653},
{"f_656:files_2escm",(void*)f_656},
{"f_576:files_2escm",(void*)f_576},
{"f_583:files_2escm",(void*)f_583},
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
