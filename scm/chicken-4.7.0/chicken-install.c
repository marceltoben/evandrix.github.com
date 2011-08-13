/* Generated from chicken-install.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:18
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: chicken-install.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -no-lambda-info -local -no-trace -output-file chicken-install.c
   used units: library eval srfi_2d1 posix data_2dstructures utils irregex ports extras srfi_2d13 files chicken_2dsyntax chicken_2dffi_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dffi_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[366];
static double C_possibly_force_alignment;


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1562)
static void C_ccall f_1562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1565)
static void C_ccall f_1565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1568)
static void C_ccall f_1568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1571)
static void C_ccall f_1571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1574)
static void C_ccall f_1574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1577)
static void C_ccall f_1577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1580)
static void C_ccall f_1580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1583)
static void C_ccall f_1583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1586)
static void C_ccall f_1586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1589)
static void C_ccall f_1589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1592)
static void C_ccall f_1592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1595)
static void C_ccall f_1595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1604)
static void C_ccall f_1604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1611)
static void C_ccall f_1611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1614)
static void C_ccall f_1614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1643)
static void C_ccall f_1643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5697)
static void C_ccall f_5697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5693)
static void C_ccall f_5693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2489)
static void C_ccall f_2489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5607)
static void C_ccall f_5607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5621)
static void C_ccall f_5621(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5660)
static void C_ccall f_5660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5679)
static void C_ccall f_5679(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5679)
static void C_ccall f_5679r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5685)
static void C_ccall f_5685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5666)
static void C_ccall f_5666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5677)
static void C_ccall f_5677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4633)
static void C_ccall f_4633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5604)
static void C_ccall f_5604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4636)
static void C_ccall f_4636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4641)
static void C_fcall f_4641(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4787)
static void C_fcall f_4787(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5355)
static void C_fcall f_5355(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5544)
static void C_ccall f_5544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5502)
static void C_ccall f_5502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5506)
static void C_fcall f_5506(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5522)
static void C_ccall f_5522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5526)
static void C_ccall f_5526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5518)
static void C_ccall f_5518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5457)
static void C_ccall f_5457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5480)
static void C_ccall f_5480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5489)
static void C_ccall f_5489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5496)
static void C_ccall f_5496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5483)
static void C_ccall f_5483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5461)
static void C_ccall f_5461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6122)
static void C_ccall f6122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5441)
static void C_ccall f_5441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5364)
static void C_ccall f_5364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5433)
static void C_ccall f_5433(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5370)
static void C_ccall f_5370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6117)
static void C_ccall f6117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5395)
static void C_fcall f_5395(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5424)
static void C_ccall f_5424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5389)
static void C_ccall f_5389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5377)
static void C_ccall f_5377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6110)
static void C_ccall f6110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5328)
static void C_ccall f_5328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6105)
static void C_ccall f6105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5270)
static void C_ccall f_5270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6100)
static void C_ccall f6100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5162)
static void C_ccall f_5162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5177)
static void C_ccall f_5177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6095)
static void C_ccall f6095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5124)
static void C_ccall f_5124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5139)
static void C_ccall f_5139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6090)
static void C_ccall f6090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5088)
static void C_ccall f_5088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5091)
static void C_ccall f_5091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6085)
static void C_ccall f6085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5059)
static void C_ccall f_5059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2148)
static void C_ccall f_2148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2154)
static void C_ccall f_2154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2179)
static void C_fcall f_2179(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2189)
static void C_ccall f_2189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2155)
static void C_fcall f_2155(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2163)
static void C_ccall f_2163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5062)
static void C_ccall f_5062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5030)
static void C_ccall f_5030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5023)
static void C_ccall f_5023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6078)
static void C_ccall f6078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4955)
static void C_ccall f_4955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4983)
static void C_ccall f_4983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4979)
static void C_ccall f_4979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4962)
static void C_ccall f_4962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6073)
static void C_ccall f6073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4918)
static void C_ccall f_4918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4922)
static void C_ccall f_4922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6068)
static void C_ccall f6068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4885)
static void C_ccall f_4885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4849)
static void C_ccall f_4849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4806)
static void C_ccall f_4806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4799)
static void C_ccall f_4799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6063)
static void C_ccall f6063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2049)
static void C_ccall f_2049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2045)
static void C_ccall f_2045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2020)
static void C_fcall f_2020(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1715)
static void C_fcall f_1715(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1719)
static void C_ccall f_1719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1957)
static void C_fcall f_1957(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1986)
static void C_ccall f_1986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1955)
static void C_ccall f_1955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1909)
static void C_fcall f_1909(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1907)
static void C_ccall f_1907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1864)
static void C_fcall f_1864(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1893)
static void C_ccall f_1893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1862)
static void C_ccall f_1862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1818)
static void C_fcall f_1818(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1849)
static void C_ccall f_1849(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1822)
static void C_ccall f_1822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1825)
static void C_ccall f_1825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1836)
static void C_ccall f_1836(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1816)
static void C_ccall f_1816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1798)
static void C_ccall f_1798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1753)
static void C_ccall f_1753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1756)
static void C_ccall f_1756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1762)
static void C_ccall f_1762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1765)
static void C_ccall f_1765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1768)
static void C_ccall f_1768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1701)
static void C_fcall f_1701(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4666)
static void C_fcall f_4666(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4769)
static void C_ccall f_4769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4733)
static void C_fcall f_4733(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4721)
static void C_ccall f_4721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4731)
static void C_ccall f_4731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4669)
static void C_ccall f_4669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4686)
static void C_ccall f_4686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4672)
static void C_ccall f_4672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4683)
static void C_ccall f_4683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4679)
static void C_ccall f_4679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3540)
static void C_ccall f_3540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4003)
static void C_ccall f_4003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3546)
static void C_ccall f_3546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3552)
static void C_ccall f_3552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3555)
static void C_ccall f_3555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3966)
static void C_fcall f_3966(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3915)
static void C_ccall f_3915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3929)
static void C_fcall f_3929(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3939)
static void C_ccall f_3939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3556)
static void C_fcall f_3556(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3895)
static void C_ccall f_3895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3871)
static void C_fcall f_3871(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3874)
static void C_ccall f_3874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3877)
static void C_ccall f_3877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3563)
static void C_ccall f_3563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3569)
static void C_ccall f_3569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3837)
static void C_ccall f_3837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3848)
static void C_ccall f_3848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3575)
static void C_ccall f_3575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3826)
static void C_ccall f_3826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3786)
static void C_ccall f_3786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3802)
static void C_ccall f_3802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3796)
static void C_ccall f_3796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3791)
static void C_ccall f_3791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3576)
static void C_fcall f_3576(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3580)
static void C_ccall f_3580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3594)
static void C_ccall f_3594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3350)
static void C_fcall f_3350(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3358)
static void C_ccall f_3358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3361)
static void C_ccall f_3361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3364)
static void C_ccall f_3364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3367)
static void C_ccall f_3367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3370)
static void C_ccall f_3370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3376)
static void C_ccall f_3376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3517)
static void C_ccall f_3517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3396)
static void C_ccall f_3396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3508)
static void C_ccall f_3508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3501)
static void C_ccall f_3501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3399)
static void C_ccall f_3399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3403)
static void C_ccall f_3403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3473)
static void C_ccall f_3473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3476)
static void C_ccall f_3476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3479)
static void C_ccall f_3479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3482)
static void C_ccall f_3482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3406)
static void C_ccall f_3406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3461)
static void C_ccall f_3461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3464)
static void C_ccall f_3464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3467)
static void C_ccall f_3467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3443)
static void C_ccall f_3443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3446)
static void C_ccall f_3446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3414)
static void C_ccall f_3414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3426)
static void C_ccall f_3426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3422)
static void C_ccall f_3422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3598)
static void C_ccall f_3598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3604)
static void C_ccall f_3604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3721)
static void C_ccall f_3721(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3745)
static void C_ccall f_3745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3763)
static void C_ccall f_3763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3751)
static void C_ccall f_3751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3727)
static void C_ccall f_3727(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3737)
static void C_ccall f_3737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3740)
static void C_ccall f_3740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3743)
static void C_ccall f_3743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3612)
static void C_ccall f_3612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3704)
static void C_ccall f_3704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3710)
static void C_ccall f_3710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3622)
static void C_ccall f_3622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3643)
static void C_ccall f_3643(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3667)
static void C_ccall f_3667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3679)
static void C_ccall f_3679(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3679)
static void C_ccall f_3679r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3685)
static void C_ccall f_3685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3673)
static void C_ccall f_3673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3649)
static void C_ccall f_3649(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3655)
static void C_ccall f_3655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3659)
static void C_ccall f_3659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3662)
static void C_ccall f_3662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3665)
static void C_ccall f_3665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3638)
static void C_ccall f_3638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3634)
static void C_ccall f_3634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3623)
static void C_fcall f_3623(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3605)
static void C_fcall f_3605(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3581)
static void C_ccall f_3581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3588)
static void C_ccall f_3588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4395)
static void C_ccall f_4395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4391)
static void C_ccall f_4391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4024)
static void C_ccall f_4024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4036)
static void C_ccall f_4036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4267)
static void C_ccall f_4267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4361)
static void C_fcall f_4361(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4371)
static void C_ccall f_4371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4269)
static void C_fcall f_4269(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4273)
static void C_ccall f_4273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4281)
static void C_ccall f_4281(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4319)
static void C_ccall f_4319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4349)
static void C_ccall f_4349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4325)
static void C_ccall f_4325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4341)
static void C_ccall f_4341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4337)
static void C_ccall f_4337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4287)
static void C_ccall f_4287(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4293)
static void C_ccall f_4293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4301)
static void C_ccall f_4301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4308)
static void C_ccall f_4308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4311)
static void C_ccall f_4311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4314)
static void C_ccall f_4314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4317)
static void C_ccall f_4317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4276)
static void C_ccall f_4276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4042)
static void C_ccall f_4042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4133)
static void C_ccall f_4133(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4143)
static void C_ccall f_4143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4154)
static void C_ccall f_4154(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4227)
static void C_fcall f_4227(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4174)
static void C_ccall f_4174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4192)
static void C_fcall f_4192(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4190)
static void C_ccall f_4190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4176)
static C_word C_fcall f_4176(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4160)
static C_word C_fcall f_4160(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4148)
static void C_ccall f_4148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4109)
static void C_ccall f_4109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4123)
static void C_ccall f_4123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4045)
static void C_ccall f_4045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4048)
static void C_ccall f_4048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4067)
static void C_ccall f_4067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4084)
static void C_fcall f_4084(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4073)
static void C_ccall f_4073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4094)
static void C_ccall f_4094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4051)
static void C_ccall f_4051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4065)
static void C_ccall f_4065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4061)
static void C_ccall f_4061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4054)
static void C_ccall f_4054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5670)
static void C_ccall f_5670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5627)
static void C_ccall f_5627(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5633)
static void C_ccall f_5633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5658)
static void C_ccall f_5658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5637)
static void C_ccall f_5637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5654)
static void C_ccall f_5654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5640)
static void C_ccall f_5640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5643)
static void C_ccall f_5643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5610)
static void C_ccall f_5610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5613)
static void C_ccall f_5613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5619)
static void C_ccall f_5619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5616)
static void C_ccall f_5616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4592)
static void C_fcall f_4592(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4603)
static void C_ccall f_4603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4606)
static void C_ccall f_4606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4615)
static void C_ccall f_4615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4623)
static void C_ccall f_4623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4571)
static void C_fcall f_4571(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4575)
static void C_ccall f_4575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4578)
static void C_ccall f_4578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4549)
static void C_fcall f_4549(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4566)
static void C_ccall f_4566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4553)
static void C_ccall f_4553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4397)
static void C_fcall f_4397(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4472)
static void C_ccall f_4472(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4533)
static void C_ccall f_4533(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4539)
static void C_ccall f_4539(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4476)
static void C_ccall f_4476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4492)
static void C_fcall f_4492(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4521)
static void C_ccall f_4521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4470)
static void C_ccall f_4470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4457)
static void C_ccall f_4457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4463)
static void C_ccall f_4463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4460)
static void C_ccall f_4460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4434)
static void C_ccall f_4434(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4454)
static void C_ccall f_4454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4450)
static void C_ccall f_4450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4400)
static void C_fcall f_4400(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4414)
static void C_ccall f_4414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4005)
static void C_fcall f_4005(C_word t0) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2808)
static void C_fcall f_2808(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2812)
static void C_ccall f_2812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3165)
static void C_fcall f_3165(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2854)
static void C_ccall f_2854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2120)
static void C_ccall f_2120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2103)
static void C_fcall f_2103(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2110)
static void C_ccall f_2110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2100)
static void C_ccall f_2100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2642)
static void C_fcall f_2642(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2644)
static void C_fcall f_2644(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2660)
static void C_ccall f_2660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2698)
static void C_ccall f_2698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2663)
static void C_fcall f_2663(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2674)
static void C_ccall f_2674(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2127)
static void C_ccall f_2127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2668)
static void C_ccall f_2668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2500)
static void C_ccall f_2500(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2522)
static void C_fcall f_2522(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2534)
static void C_fcall f_2534(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2546)
static void C_fcall f_2546(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2549)
static void C_ccall f_2549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2552)
static void C_ccall f_2552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2537)
static void C_ccall f_2537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2525)
static void C_ccall f_2525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2495)
static void C_ccall f_2495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2830)
static void C_ccall f_2830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3175)
static void C_ccall f_3175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3142)
static void C_fcall f_3142(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2910)
static void C_ccall f_2910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3114)
static void C_ccall f_3114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3248)
static void C_fcall f_3248(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3277)
static void C_ccall f_3277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3223)
static void C_ccall f_3223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3191)
static void C_fcall f_3191(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2933)
static void C_ccall f_2933(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2938)
static void C_ccall f_2938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3062)
static void C_fcall f_3062(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3072)
static void C_fcall f_3072(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2769)
static void C_fcall f_2769(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2757)
static void C_ccall f_2757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2798)
static void C_ccall f_2798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2725)
static void C_ccall f_2725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2976)
static void C_fcall f_2976(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2971)
static void C_ccall f_2971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2279)
static void C_ccall f_2279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2284)
static void C_fcall f_2284(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2340)
static void C_fcall f_2340(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2343)
static void C_ccall f_2343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2360)
static void C_ccall f_2360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2431)
static void C_ccall f_2431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2406)
static void C_ccall f_2406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2388)
static void C_ccall f_2388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2380)
static void C_ccall f_2380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2327)
static void C_ccall f_2327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2302)
static void C_ccall f_2302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3152)
static void C_ccall f_3152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2202)
static void C_fcall f_2202(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2212)
static void C_fcall f_2212(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2218)
static void C_ccall f_2218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2129)
static C_word C_fcall f_2129(C_word t0,C_word t1);
C_noret_decl(f_2051)
static void C_fcall f_2051(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2059)
static void C_fcall f_2059(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1649)
static void C_fcall f_1649(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1653)
static void C_ccall f_1653(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_4641)
static void C_fcall trf_4641(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4641(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4641(t0,t1,t2,t3);}

C_noret_decl(trf_4787)
static void C_fcall trf_4787(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4787(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4787(t0,t1);}

C_noret_decl(trf_5355)
static void C_fcall trf_5355(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5355(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5355(t0,t1);}

C_noret_decl(trf_5506)
static void C_fcall trf_5506(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5506(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5506(t0,t1,t2);}

C_noret_decl(trf_5395)
static void C_fcall trf_5395(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5395(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5395(t0,t1,t2);}

C_noret_decl(trf_2179)
static void C_fcall trf_2179(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2179(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2179(t0,t1,t2);}

C_noret_decl(trf_2155)
static void C_fcall trf_2155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2155(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2155(t0,t1,t2);}

C_noret_decl(trf_2020)
static void C_fcall trf_2020(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2020(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2020(t0,t1,t2);}

C_noret_decl(trf_1715)
static void C_fcall trf_1715(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1715(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1715(t0,t1,t2);}

C_noret_decl(trf_1957)
static void C_fcall trf_1957(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1957(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1957(t0,t1,t2);}

C_noret_decl(trf_1909)
static void C_fcall trf_1909(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1909(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1909(t0,t1,t2);}

C_noret_decl(trf_1864)
static void C_fcall trf_1864(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1864(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1864(t0,t1,t2);}

C_noret_decl(trf_1818)
static void C_fcall trf_1818(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1818(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1818(t0,t1,t2);}

C_noret_decl(trf_1701)
static void C_fcall trf_1701(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1701(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1701(t0,t1,t2);}

C_noret_decl(trf_4666)
static void C_fcall trf_4666(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4666(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4666(t0,t1);}

C_noret_decl(trf_4733)
static void C_fcall trf_4733(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4733(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4733(t0,t1,t2);}

C_noret_decl(trf_3966)
static void C_fcall trf_3966(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3966(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3966(t0,t1,t2);}

C_noret_decl(trf_3929)
static void C_fcall trf_3929(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3929(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3929(t0,t1,t2,t3);}

C_noret_decl(trf_3556)
static void C_fcall trf_3556(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3556(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3556(t0,t1,t2,t3);}

C_noret_decl(trf_3871)
static void C_fcall trf_3871(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3871(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3871(t0,t1);}

C_noret_decl(trf_3576)
static void C_fcall trf_3576(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3576(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3576(t0,t1,t2);}

C_noret_decl(trf_3350)
static void C_fcall trf_3350(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3350(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3350(t0,t1);}

C_noret_decl(trf_3623)
static void C_fcall trf_3623(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3623(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3623(t0,t1);}

C_noret_decl(trf_3605)
static void C_fcall trf_3605(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3605(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3605(t0,t1);}

C_noret_decl(trf_4361)
static void C_fcall trf_4361(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4361(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4361(t0,t1,t2);}

C_noret_decl(trf_4269)
static void C_fcall trf_4269(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4269(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4269(t0,t1,t2);}

C_noret_decl(trf_4227)
static void C_fcall trf_4227(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4227(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4227(t0,t1,t2);}

C_noret_decl(trf_4192)
static void C_fcall trf_4192(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4192(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4192(t0,t1,t2);}

C_noret_decl(trf_4084)
static void C_fcall trf_4084(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4084(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4084(t0,t1,t2);}

C_noret_decl(trf_4592)
static void C_fcall trf_4592(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4592(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4592(t0,t1);}

C_noret_decl(trf_4571)
static void C_fcall trf_4571(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4571(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4571(t0,t1,t2);}

C_noret_decl(trf_4549)
static void C_fcall trf_4549(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4549(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4549(t0,t1);}

C_noret_decl(trf_4397)
static void C_fcall trf_4397(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4397(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4397(t0,t1);}

C_noret_decl(trf_4492)
static void C_fcall trf_4492(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4492(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4492(t0,t1,t2);}

C_noret_decl(trf_4400)
static void C_fcall trf_4400(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4400(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4400(t0,t1);}

C_noret_decl(trf_4005)
static void C_fcall trf_4005(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4005(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_4005(t0);}

C_noret_decl(trf_2808)
static void C_fcall trf_2808(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2808(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2808(t0,t1);}

C_noret_decl(trf_3165)
static void C_fcall trf_3165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3165(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3165(t0,t1,t2);}

C_noret_decl(trf_2103)
static void C_fcall trf_2103(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2103(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2103(t0,t1);}

C_noret_decl(trf_2642)
static void C_fcall trf_2642(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2642(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2642(t0,t1);}

C_noret_decl(trf_2644)
static void C_fcall trf_2644(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2644(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2644(t0,t1,t2);}

C_noret_decl(trf_2663)
static void C_fcall trf_2663(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2663(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2663(t0,t1);}

C_noret_decl(trf_2522)
static void C_fcall trf_2522(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2522(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2522(t0,t1);}

C_noret_decl(trf_2534)
static void C_fcall trf_2534(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2534(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2534(t0,t1);}

C_noret_decl(trf_2546)
static void C_fcall trf_2546(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2546(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2546(t0,t1);}

C_noret_decl(trf_3142)
static void C_fcall trf_3142(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3142(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3142(t0,t1,t2);}

C_noret_decl(trf_3248)
static void C_fcall trf_3248(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3248(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3248(t0,t1);}

C_noret_decl(trf_3191)
static void C_fcall trf_3191(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3191(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3191(t0,t1);}

C_noret_decl(trf_3062)
static void C_fcall trf_3062(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3062(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3062(t0,t1,t2);}

C_noret_decl(trf_3072)
static void C_fcall trf_3072(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3072(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3072(t0,t1);}

C_noret_decl(trf_2769)
static void C_fcall trf_2769(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2769(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2769(t0,t1,t2);}

C_noret_decl(trf_2976)
static void C_fcall trf_2976(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2976(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2976(t0,t1,t2);}

C_noret_decl(trf_2284)
static void C_fcall trf_2284(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2284(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2284(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2340)
static void C_fcall trf_2340(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2340(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2340(t0,t1);}

C_noret_decl(trf_2202)
static void C_fcall trf_2202(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2202(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2202(t0,t1);}

C_noret_decl(trf_2212)
static void C_fcall trf_2212(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2212(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2212(t0,t1);}

C_noret_decl(trf_2051)
static void C_fcall trf_2051(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2051(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2051(t0,t1);}

C_noret_decl(trf_2059)
static void C_fcall trf_2059(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2059(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2059(t0,t1,t2);}

C_noret_decl(trf_1649)
static void C_fcall trf_1649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1649(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1649(t0,t1);}

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
C_main_entry_point
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("toplevel"));
C_resize_stack(131072);
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1511)){
C_save(t1);
C_rereclaim2(1511*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,366);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\012modules.db");
lf[3]=C_decode_literal(C_heaptop,"\376B\000\000\016setup.defaults");
lf[15]=C_h_intern(&lf[15],4,"http");
lf[34]=C_h_intern(&lf[34],17,"\003syspeek-c-string");
lf[35]=C_h_intern(&lf[35],9,"\003syserror");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[38]=C_h_intern(&lf[38],5,"print");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\021resolving alias `");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\006\047 to: ");
lf[43]=C_h_intern(&lf[43],7,"chicken");
lf[44]=C_h_intern(&lf[44],15,"chicken-version");
lf[45]=C_h_intern(&lf[45],7,"version");
lf[46]=C_h_intern(&lf[46],8,"->string");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\0050.0.0");
lf[48]=C_h_intern(&lf[48],21,"extension-information");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[50]=C_h_intern(&lf[50],24,"\003syscore-library-modules");
lf[56]=C_h_intern(&lf[56],8,"for-each");
lf[57]=C_h_intern(&lf[57],7,"reverse");
lf[58]=C_h_intern(&lf[58],10,"alist-cons");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[60]=C_h_intern(&lf[60],5,"error");
lf[61]=C_h_intern(&lf[61],13,"string-append");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000JYour CHICKEN version is not recent enough to use this extension - version ");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\025 or newer is required");
lf[64]=C_h_intern(&lf[64],20,"setup-api#version>=\077");
lf[65]=C_h_intern(&lf[65],7,"warning");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\0007invalid dependency syntax in extension meta information");
lf[67]=C_h_intern(&lf[67],7,"depends");
lf[68]=C_h_intern(&lf[68],5,"needs");
lf[69]=C_h_intern(&lf[69],12,"test-depends");
lf[70]=C_h_intern(&lf[70],6,"append");
lf[71]=C_h_intern(&lf[71],3,"map");
lf[72]=C_h_intern(&lf[72],26,"setup-api#remove-extension");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000)removing previously installed extension `");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\005\047 ...");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\012 upgrade: ");
lf[76]=C_h_intern(&lf[76],18,"string-intersperse");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[78]=C_h_intern(&lf[78],6,"unzip1");
lf[79]=C_h_intern(&lf[79],10,"yes-or-no\077");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[81]=C_h_intern(&lf[81],6,"\000abort");
lf[82]=C_h_intern(&lf[82],21,"setup-api#abort-setup");
lf[83]=C_h_intern(&lf[83],18,"string-concatenate");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000:The following installed extensions are outdated, because `");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\033\047 requires later versions:\012");
lf[86]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\0000\012Do you want to replace the existing extensions\077\376\377\016");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\003\077\077\077");
lf[88]=C_h_intern(&lf[88],4,"conc");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\002 (");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\004 -> ");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\012 missing: ");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\033checking dependencies for `");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\005\047 ...");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000)extension is not targeted for this system");
lf[99]=C_h_intern(&lf[99],8,"platform");
lf[100]=C_h_intern(&lf[100],8,"feature\077");
lf[101]=C_h_intern(&lf[101],3,"and");
lf[102]=C_h_intern(&lf[102],5,"every");
lf[103]=C_h_intern(&lf[103],2,"or");
lf[104]=C_h_intern(&lf[104],3,"any");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid `platform\047 property");
lf[106]=C_h_intern(&lf[106],3,"not");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid `platform\047 property");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\027checking platform for `");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\005\047 ...");
lf[110]=C_h_intern(&lf[110],20,"with-input-from-file");
lf[111]=C_h_intern(&lf[111],4,"read");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\013extension `");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\024\047 has no .meta file ");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000!- assuming it has no dependencies");
lf[115]=C_h_intern(&lf[115],12,"file-exists\077");
lf[116]=C_h_intern(&lf[116],13,"make-pathname");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000\004meta");
lf[118]=C_h_intern(&lf[118],6,"delete");
lf[119]=C_h_intern(&lf[119],3,"eq\077");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[121]=C_h_intern(&lf[121],9,"condition");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\023TCP connect timeout");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\023HTTP protocol error");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[127]=C_h_intern(&lf[127],19,"print-error-message");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\015Server error:");
lf[129]=C_h_intern(&lf[129],5,"abort");
lf[130]=C_h_intern(&lf[130],3,"exn");
lf[131]=C_h_intern(&lf[131],20,"setup-download-error");
lf[132]=C_h_intern(&lf[132],10,"http-fetch");
lf[133]=C_h_intern(&lf[133],3,"net");
lf[134]=C_h_intern(&lf[134],33,"setup-download#retrieve-extension");
lf[135]=C_h_intern(&lf[135],8,"\000version");
lf[136]=C_h_intern(&lf[136],12,"\000destination");
lf[137]=C_h_intern(&lf[137],6,"\000tests");
lf[138]=C_h_intern(&lf[138],9,"\000username");
lf[139]=C_h_intern(&lf[139],9,"\000password");
lf[140]=C_h_intern(&lf[140],6,"\000trunk");
lf[141]=C_h_intern(&lf[141],11,"\000proxy-host");
lf[142]=C_h_intern(&lf[142],11,"\000proxy-port");
lf[143]=C_h_intern(&lf[143],16,"\000proxy-user-pass");
lf[144]=C_h_intern(&lf[144],6,"\000clean");
lf[145]=C_h_intern(&lf[145],17,"current-directory");
lf[146]=C_h_intern(&lf[146],22,"with-exception-handler");
lf[147]=C_h_intern(&lf[147],30,"call-with-current-continuation");
lf[148]=C_h_intern(&lf[148],9,"transport");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\027missing transport entry");
lf[150]=C_h_intern(&lf[150],8,"location");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\026missing location entry");
lf[152]=C_h_intern(&lf[152],5,"local");
lf[153]=C_h_intern(&lf[153],18,"absolute-pathname\077");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\014 located at ");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\036extension or version not found");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\016retrieving ...");
lf[159]=C_h_intern(&lf[159],26,"setup-api#remove-directory");
lf[160]=C_h_intern(&lf[160],34,"setup-download#temporary-directory");
lf[161]=C_h_intern(&lf[161],14,"symbol->string");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\035internal error - bad egg spec");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\007mapped ");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\004 to ");
lf[165]=C_h_intern(&lf[165],5,"lset=");
lf[166]=C_h_intern(&lf[166],17,"delete-duplicates");
lf[167]=C_h_intern(&lf[167],4,"find");
lf[168]=C_h_intern(&lf[168],10,"append-map");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000/shell command terminated with nonzero exit code");
lf[171]=C_h_intern(&lf[171],6,"system");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[176]=C_h_intern(&lf[176],7,"sprintf");
lf[178]=C_h_intern(&lf[178],23,"irregex-match-substring");
lf[179]=C_h_intern(&lf[179],13,"irregex-match");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\016(.+)\134:([0-9]+)");
lf[181]=C_h_intern(&lf[181],24,"get-environment-variable");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\012proxy_auth");
lf[183]=C_h_intern(&lf[183],25,"\003sysimplicit-exit-handler");
lf[184]=C_h_intern(&lf[184],4,"exit");
lf[185]=C_h_intern(&lf[185],18,"current-error-port");
lf[186]=C_h_intern(&lf[186],7,"newline");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000B`-deploy\047 only makes sense in combination with `-prefix DIRECTORY`");
lf[188]=C_h_intern(&lf[188],19,"setup-api#copy-file");
lf[189]=C_h_intern(&lf[189],15,"repository-path");
lf[190]=C_h_intern(&lf[190],5,"write");
lf[191]=C_h_intern(&lf[191],19,"with-output-to-file");
lf[192]=C_h_intern(&lf[192],8,"string<\077");
lf[193]=C_h_intern(&lf[193],4,"sort");
lf[194]=C_h_intern(&lf[194],18,"\003sysmodule-exports");
lf[195]=C_h_intern(&lf[195],6,"syntax");
lf[196]=C_h_intern(&lf[196],5,"value");
lf[197]=C_h_intern(&lf[197],6,"print*");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[199]=C_h_intern(&lf[199],15,"\003sysmodule-name");
lf[200]=C_h_intern(&lf[200],16,"\003sysmodule-table");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\023generating database");
lf[202]=C_h_intern(&lf[202],20,"\003syswarnings-enabled");
lf[203]=C_h_intern(&lf[203],17,"get-output-string");
lf[204]=C_h_intern(&lf[204],19,"\003syswrite-char/port");
lf[205]=C_h_intern(&lf[205],7,"display");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\027Failed to import from `");
lf[207]=C_h_intern(&lf[207],18,"open-output-string");
lf[208]=C_h_intern(&lf[208],6,"import");
lf[209]=C_h_intern(&lf[209],4,"eval");
lf[210]=C_h_intern(&lf[210],14,"string->symbol");
lf[211]=C_h_intern(&lf[211],16,"\003sysdynamic-wind");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\034loading import libraries ...");
lf[213]=C_h_intern(&lf[213],7,"irregex");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\034.*/([^/]+)\134.import\134.(scm|so)");
lf[215]=C_h_intern(&lf[215],26,"create-temporary-directory");
lf[216]=C_h_intern(&lf[216],4,"glob");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\012*.import.*");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\023~a -s run.scm ~a ~a");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000$\012nevertheless trying to continue ...");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\007testing");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\014 extension `");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\011\047 failed:");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\005tests");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\015tests/run.scm");
lf[225]=C_h_intern(&lf[225],10,"directory\077");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\005tests");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\005tests");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\012installing");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[231]=C_decode_literal(C_heaptop,"\376B\000\000\034-e \042(setup-error-handling)\042 ");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\027 -e \042(sudo-install #t)\042");
lf[233]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\035 -e \042(keep-intermediates #t)\042");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\035 -e \042(setup-install-mode #f)\042");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\031 -e \042(host-extension #t)\042");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\032 -e \042(deployment-mode #t)\042");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\006 -bnq ");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\0009-e \042(require-library setup-api)\042 -e \042(import setup-api)\042 ");
lf[244]=C_h_intern(&lf[244],19,"setup-api#shellpath");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\005setup");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\002)\042");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\031 -e \042(extra-nonfeatures \047");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\002)\042");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\026 -e \042(extra-features \047");
lf[251]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\004\134\042)\042");
lf[253]=C_h_intern(&lf[253],18,"normalize-pathname");
lf[254]=C_h_intern(&lf[254],4,"unix");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\027 -e \042(runtime-prefix \134\042");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\004\134\042)\042");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\033 -e \042(destination-prefix \134\042");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[260]=C_h_intern(&lf[260],22,"setup-api#sudo-install");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\005\134\042))\042");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\005\134\042 \134\042");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000$-e \042(extension-name-and-version \047(\134\042");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\014-setup-mode ");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\036changing current directory to ");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\031installing for target ...");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\005xcopy");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\005cp -r");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\010~a ~a ~a");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\047copying sources for target installation");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\013installing ");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\026aborting installation.");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\203You specified `-no-install\047, but this extension has dependencies that are r"
"equired for building.\012Do you still want to install them\077");
lf[277]=C_h_intern(&lf[277],4,"iota");
lf[278]=C_h_intern(&lf[278],5,"assoc");
lf[279]=C_h_intern(&lf[279],2,"pp");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\016install order:");
lf[281]=C_h_intern(&lf[281],16,"topological-sort");
lf[282]=C_h_intern(&lf[282],8,"string=\077");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000;no default location defined - please use `-location\047 option");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000=no default transport defined - please use `-transport\047 option");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[287]=C_h_intern(&lf[287],13,"pathname-file");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\033no setup-scripts to process");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\007*.setup");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\036invalid entry in defaults file");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000$\047 does not match setup-API version (");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\026version of installed `");
lf[293]=C_h_intern(&lf[293],6,"server");
lf[294]=C_h_intern(&lf[294],8,"split-at");
lf[295]=C_h_intern(&lf[295],2,"->");
lf[296]=C_h_intern(&lf[296],10,"list-index");
lf[297]=C_h_intern(&lf[297],5,"alias");
lf[298]=C_h_intern(&lf[298],7,"string\077");
lf[299]=C_h_intern(&lf[299],9,"read-file");
lf[300]=C_h_intern(&lf[300],12,"chicken-home");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\007\002usage: chicken-install [OPTION | EXTENSION[:VERSION]] ...\012\012  -h   -help    "
"                show this message and exit\012  -v   -version                 show "
"version and exit\012       -force                   don\047t ask, install even if vers"
"ions don\047t match\012  -k   -keep                    keep temporary files\012  -l   -lo"
"cation LOCATION       install from given location instead of default\012  -t   -tra"
"nsport TRANSPORT     use given transport instead of default\012       -proxy HOST[:"
"PORT]       download via HTTP proxy\012  -s   -sudo                    use sudo(1) "
"for filesystem operations\012  -r   -retrieve                only retrieve egg into"
" current directory, don\047t install\012  -n   -no-install              do not install"
", just build (implies `-keep\047)\012  -p   -prefix PREFIX           change installati"
"on prefix to PREFIX\012       -host                    when cross-compiling, compil"
"e extension only for host\012       -target                  when cross-compiling, "
"compile extension only for target\012       -test                    run included t"
"est-cases, if available\012       -username USER           set username for transpo"
"rts that require this\012       -password PASS           set password for transport"
"s that require this\012  -i   -init DIRECTORY          initialize empty alternative"
" repository\012  -u   -update-db               update export database\012       -repos"
"itory              print path used for egg installation\012       -deploy          "
"        build extensions for deployment\012       -trunk                   build tr"
"unk instead of tagged version (only local)\012  -D   -feature FEATURE         featu"
"res to pass to sub-invocations of `csc\047\012       -debug                   enable f"
"ull display of error message information\012       -keep-going              continu"
"e installation even if dependency fails");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\013-repository");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\006-force");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\002-k");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\005-keep");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\005-sudo");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\002-r");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\011-retrieve");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\002-l");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\011-location");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\002-t");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\012-transport");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000\002-p");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000\007-prefix");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\002-n");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-install");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\002-v");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\002-u");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\012-update-db");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\002-i");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\005-init");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\004copy");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\005cp -r");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\010~a ~a ~a");
lf[328]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014setup-api.so\376\003\000\000\002\376B\000\000\023setup-api.import.so\376\003\000\000\002\376B\000\000\021setup-download.so\376\003"
"\000\000\002\376B\000\000\030setup-download.import.so\376\003\000\000\002\376B\000\000\021chicken.import.so\376\003\000\000\002\376B\000\000\021lolevel.imp"
"ort.so\376\003\000\000\002\376B\000\000\020srfi-1.import.so\376\003\000\000\002\376B\000\000\020srfi-4.import.so\376\003\000\000\002\376B\000\000\031data-structu"
"res.import.so\376\003\000\000\002\376B\000\000\017ports.import.so\376\003\000\000\002\376B\000\000\017files.import.so\376\003\000\000\002\376B\000\000\017posix.i"
"mport.so\376\003\000\000\002\376B\000\000\021srfi-13.import.so\376\003\000\000\002\376B\000\000\021srfi-69.import.so\376\003\000\000\002\376B\000\000\020extras.i"
"mport.so\376\003\000\000\002\376B\000\000\021srfi-14.import.so\376\003\000\000\002\376B\000\000\015tcp.import.so\376\003\000\000\002\376B\000\000\021foreign.impo"
"rt.so\376\003\000\000\002\376B\000\000\020scheme.import.so\376\003\000\000\002\376B\000\000\021srfi-18.import.so\376\003\000\000\002\376B\000\000\017utils.import"
".so\376\003\000\000\002\376B\000\000\015csi.import.so\376\003\000\000\002\376B\000\000\021irregex.import.so\376\003\000\000\002\376B\000\000\010types.db\376\377\016");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\032copying required files to ");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\006-proxy");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\002-D");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-feature");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\005-test");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\007-target");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000\006-debug");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\007-deploy");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000\011-username");
lf[341]=C_decode_literal(C_heaptop,"\376B\000\000\006-trunk");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\013-keep-going");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000\011-password");
lf[344]=C_h_intern(&lf[344],6,"string");
lf[345]=C_h_intern(&lf[345],4,"memq");
lf[346]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000k\376\003\000\000\002\376\377\012\000\000l\376\003\000\000\002\376\377\012\000\000t\376\003\000\000\002\376\377\012\000\000s\376\003\000\000\002\376\377\012\000\000p\376\003\000\000\002\376\377\012\000\000r\376\003\000"
"\000\002\376\377\012\000\000n\376\003\000\000\002\376\377\012\000\000v\376\003\000\000\002\376\377\012\000\000i\376\003\000\000\002\376\377\012\000\000u\376\003\000\000\002\376\377\012\000\000D\376\377\016");
lf[347]=C_h_intern(&lf[347],16,"\003sysstring->list");
lf[348]=C_h_intern(&lf[348],9,"substring");
lf[349]=C_decode_literal(C_heaptop,"\376B\000\000\005setup");
lf[350]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[351]=C_h_intern(&lf[351],18,"pathname-directory");
lf[352]=C_h_intern(&lf[352],18,"pathname-extension");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[354]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[355]=C_decode_literal(C_heaptop,"\376B\000\000\012http_proxy");
lf[356]=C_decode_literal(C_heaptop,"\376B\000\000\014([^:]+):(.+)");
lf[357]=C_h_intern(&lf[357],22,"command-line-arguments");
lf[358]=C_h_intern(&lf[358],17,"register-feature!");
lf[359]=C_h_intern(&lf[359],15,"chicken-install");
lf[360]=C_h_intern(&lf[360],14,"\000cross-chicken");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[362]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[363]=C_h_intern(&lf[363],11,"\003sysrequire");
lf[364]=C_h_intern(&lf[364],9,"setup-api");
lf[365]=C_h_intern(&lf[365],14,"setup-download");
C_register_lf2(lf,366,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1562,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1560 */
static void C_ccall f_1562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1562,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1565,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1563 in k1560 */
static void C_ccall f_1565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1568,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1566 in k1563 in k1560 */
static void C_ccall f_1568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1568,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1571,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1571,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1574,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1574,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1577,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1577,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1580,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1583,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1583,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1586,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1586,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1589,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1589,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1592,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1592,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1595,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1595,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1598,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dffi_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1598,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1601,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#require */
((C_proc3)C_fast_retrieve_symbol_proc(lf[363]))(3,*((C_word*)lf[363]+1),t2,lf[365]);}

/* k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1601,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1604,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#require */
((C_proc3)C_fast_retrieve_symbol_proc(lf[363]))(3,*((C_word*)lf[363]+1),t2,lf[364]);}

/* k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1604,2,t0,t1);}
t2=C_mutate(&lf[0] /* (set! main#constant190 ...) */,lf[1]);
t3=C_mutate(&lf[2] /* (set! main#constant194 ...) */,lf[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1611,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* get-environment-variable */
((C_proc3)C_fast_retrieve_symbol_proc(lf[181]))(3,*((C_word*)lf[181]+1),t4,lf[362]);}

/* k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1611,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1614,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),t2,t1,lf[361]);}
else{
t3=t2;
f_1614(2,t3,C_SCHEME_FALSE);}}

/* k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1614,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1617,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_1617(2,t3,t1);}
else{
/* ##sys#peek-c-string */
t3=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}}

/* k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1617(C_word c,C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1617,2,t0,t1);}
t2=C_mutate(&lf[4] /* (set! main#*program-path* ...) */,t1);
t3=lf[5] /* main#*keep* */ =C_SCHEME_FALSE;;
t4=lf[6] /* main#*force* */ =C_SCHEME_FALSE;;
t5=lf[7] /* main#*run-tests* */ =C_SCHEME_FALSE;;
t6=lf[8] /* main#*retrieve-only* */ =C_SCHEME_FALSE;;
t7=lf[9] /* main#*no-install* */ =C_SCHEME_FALSE;;
t8=lf[10] /* main#*username* */ =C_SCHEME_FALSE;;
t9=lf[11] /* main#*password* */ =C_SCHEME_FALSE;;
t10=lf[12] /* main#*default-sources* */ =C_SCHEME_END_OF_LIST;;
t11=lf[13] /* main#*default-location* */ =C_SCHEME_FALSE;;
t12=C_mutate(&lf[14] /* (set! main#*default-transport* ...) */,lf[15]);
t13=C_mutate(&lf[16] /* (set! main#*windows-shell* ...) */,C_mk_bool(C_WINDOWS_SHELL));
t14=lf[17] /* main#*proxy-host* */ =C_SCHEME_FALSE;;
t15=lf[18] /* main#*proxy-port* */ =C_SCHEME_FALSE;;
t16=lf[19] /* main#*proxy-user-pass* */ =C_SCHEME_FALSE;;
t17=lf[20] /* main#*running-test* */ =C_SCHEME_FALSE;;
t18=lf[21] /* main#*mappings* */ =C_SCHEME_END_OF_LIST;;
t19=lf[22] /* main#*deploy* */ =C_SCHEME_FALSE;;
t20=lf[23] /* main#*trunk* */ =C_SCHEME_FALSE;;
t21=lf[24] /* main#*csc-features* */ =C_SCHEME_END_OF_LIST;;
t22=lf[25] /* main#*csc-nonfeatures* */ =C_SCHEME_END_OF_LIST;;
t23=lf[26] /* main#*prefix* */ =C_SCHEME_FALSE;;
t24=lf[27] /* main#*aliases* */ =C_SCHEME_END_OF_LIST;;
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1643,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* feature? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[100]))(3,*((C_word*)lf[100]+1),t25,lf[360]);}

/* k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1643(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1643,2,t0,t1);}
t2=C_mutate(&lf[28] /* (set! main#*cross-chicken* ...) */,t1);
t3=C_mutate(&lf[29] /* (set! main#*host-extension* ...) */,C_retrieve2(lf[28],"main#*cross-chicken*"));
t4=C_mutate(&lf[30] /* (set! main#*target-extension* ...) */,C_retrieve2(lf[28],"main#*cross-chicken*"));
t5=lf[31] /* main#*debug-setup* */ =C_SCHEME_FALSE;;
t6=lf[32] /* main#*keep-going* */ =C_SCHEME_FALSE;;
t7=C_mutate(&lf[33] /* (set! main#get-prefix ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1649,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[37] /* (set! main#resolve-location ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2051,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate(&lf[41] /* (set! main#deps ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2129,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[42] /* (set! main#ext-version ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2202,tmp=(C_word)a,a+=2,tmp));
t11=lf[51] /* main#*eggs+dirs+vers* */ =C_SCHEME_END_OF_LIST;;
t12=lf[52] /* main#*dependencies* */ =C_SCHEME_END_OF_LIST;;
t13=lf[53] /* main#*checked* */ =C_SCHEME_END_OF_LIST;;
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2489,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5693,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5697,a[2]=t15,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t17=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t16,C_mpointer(&a,(void*)C_CSI_PROGRAM),C_fix(0));}

/* k5695 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),((C_word*)t0)[2],C_retrieve2(lf[4],"main#*program-path*"),t1);}

/* k5691 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api#shellpath */
((C_proc3)C_fast_retrieve_symbol_proc(lf[244]))(3,*((C_word*)lf[244]+1),((C_word*)t0)[2],t1);}

/* k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2489(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2489,2,t0,t1);}
t2=C_mutate(&lf[54] /* (set! main#*csi* ...) */,t1);
t3=C_mutate(&lf[55] /* (set! main#retrieve ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2808,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[158] /* (set! main#cleanup ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4005,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[95] /* (set! main#apply-mappings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4397,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[169] /* (set! main#$system ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4549,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[174] /* (set! main#command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4571,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[177] /* (set! main#setup-proxy ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4592,tmp=(C_word)a,a+=2,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5607,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* register-feature! */
((C_proc3)C_fast_retrieve_symbol_proc(lf[358]))(3,*((C_word*)lf[358]+1),t9,lf[359]);}

/* k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5607,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5610,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5621,tmp=(C_word)a,a+=2,tmp);
/* call-with-current-continuation */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[147]+1)))(3,*((C_word*)lf[147]+1),t2,t3);}

/* a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5621(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5621,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5627,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5660,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* with-exception-handler */
((C_proc4)C_fast_retrieve_symbol_proc(lf[146]))(4,*((C_word*)lf[146]+1),t1,t3,t4);}

/* a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5660,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5666,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5679,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a5678 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5679(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_5679r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5679r(t0,t1,t2);}}

static void C_ccall f_5679r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5685,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* k14641470 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a5684 in a5678 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5685,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5666,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5670,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5677,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* command-line-arguments */
((C_proc2)C_fast_retrieve_symbol_proc(lf[357]))(2,*((C_word*)lf[357]+1),t3);}

/* k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5677,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4633,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* irregex */
((C_proc3)C_fast_retrieve_symbol_proc(lf[213]))(3,*((C_word*)lf[213]+1),t4,lf[356]);}

/* k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4633,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5604,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* get-environment-variable */
((C_proc3)C_fast_retrieve_symbol_proc(lf[181]))(3,*((C_word*)lf[181]+1),t3,lf[355]);}

/* k5602 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* main#setup-proxy */
f_4592(((C_word*)t0)[2],t1);}

/* k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4636,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4641,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4641(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_4641(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4641,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=(C_truep(C_retrieve2(lf[22],"main#*deploy*"))?C_i_not(C_retrieve2(lf[26],"main#*prefix*")):C_SCHEME_FALSE);
if(C_truep(t4)){
/* error */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(3,*((C_word*)lf[60]+1),t1,lf[187]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t5=t1;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4024,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4391,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4395,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* repository-path */
((C_proc2)C_fast_retrieve_symbol_proc(lf[189]))(2,*((C_word*)lf[189]+1),t8);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4666,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1699,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2049,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-home */
((C_proc2)C_fast_retrieve_symbol_proc(lf[300]))(2,*((C_word*)lf[300]+1),t7);}}}
else{
t4=C_i_car(t2);
t5=C_i_string_equal_p(t4,lf[301]);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t4,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t5)){
t7=t6;
f_4787(t7,t5);}
else{
t7=C_i_string_equal_p(t4,lf[353]);
t8=t6;
f_4787(t8,(C_truep(t7)?t7:C_i_string_equal_p(t4,lf[354])));}}}

/* k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_4787(C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4787,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6063,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t3,lf[302]);}
else{
if(C_truep(C_i_string_equal_p(((C_word*)t0)[7],lf[303]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4799,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4806,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* repository-path */
((C_proc2)C_fast_retrieve_symbol_proc(lf[189]))(2,*((C_word*)lf[189]+1),t3);}
else{
if(C_truep(C_i_string_equal_p(((C_word*)t0)[7],lf[304]))){
t2=lf[6] /* main#*force* */ =C_SCHEME_TRUE;;
t3=C_i_cdr(((C_word*)t0)[6]);
/* loop1286 */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4641(t4,((C_word*)t0)[8],t3,((C_word*)t0)[4]);}
else{
t2=C_i_string_equal_p(((C_word*)t0)[7],lf[305]);
t3=(C_truep(t2)?t2:C_i_string_equal_p(((C_word*)t0)[7],lf[306]));
if(C_truep(t3)){
t4=lf[5] /* main#*keep* */ =C_SCHEME_TRUE;;
t5=C_i_cdr(((C_word*)t0)[6]);
/* loop1286 */
t6=((C_word*)((C_word*)t0)[5])[1];
f_4641(t6,((C_word*)t0)[8],t5,((C_word*)t0)[4]);}
else{
t4=C_i_string_equal_p(((C_word*)t0)[7],lf[307]);
t5=(C_truep(t4)?t4:C_i_string_equal_p(((C_word*)t0)[7],lf[308]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4849,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* setup-api#sudo-install */
((C_proc3)C_fast_retrieve_symbol_proc(lf[260]))(3,*((C_word*)lf[260]+1),t6,C_SCHEME_TRUE);}
else{
t6=C_i_string_equal_p(((C_word*)t0)[7],lf[309]);
t7=(C_truep(t6)?t6:C_i_string_equal_p(((C_word*)t0)[7],lf[310]));
if(C_truep(t7)){
t8=lf[8] /* main#*retrieve-only* */ =C_SCHEME_TRUE;;
t9=C_i_cdr(((C_word*)t0)[6]);
/* loop1286 */
t10=((C_word*)((C_word*)t0)[5])[1];
f_4641(t10,((C_word*)t0)[8],t9,((C_word*)t0)[4]);}
else{
t8=C_i_string_equal_p(((C_word*)t0)[7],lf[311]);
t9=(C_truep(t8)?t8:C_i_string_equal_p(((C_word*)t0)[7],lf[312]));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4885,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t11=C_i_cdr(((C_word*)t0)[6]);
if(C_truep(C_i_pairp(t11))){
t12=t10;
f_4885(2,t12,C_SCHEME_UNDEFINED);}
else{
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6068,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t12,lf[302]);}}
else{
t10=C_i_string_equal_p(((C_word*)t0)[7],lf[313]);
t11=(C_truep(t10)?t10:C_i_string_equal_p(((C_word*)t0)[7],lf[314]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4918,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t13=C_i_cdr(((C_word*)t0)[6]);
if(C_truep(C_i_pairp(t13))){
t14=t12;
f_4918(2,t14,C_SCHEME_UNDEFINED);}
else{
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6073,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t14,lf[302]);}}
else{
t12=C_i_string_equal_p(((C_word*)t0)[7],lf[315]);
t13=(C_truep(t12)?t12:C_i_string_equal_p(((C_word*)t0)[7],lf[316]));
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4955,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t15=C_i_cdr(((C_word*)t0)[6]);
if(C_truep(C_i_pairp(t15))){
t16=t14;
f_4955(2,t16,C_SCHEME_UNDEFINED);}
else{
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6078,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t16,lf[302]);}}
else{
t14=C_i_string_equal_p(((C_word*)t0)[7],lf[317]);
t15=(C_truep(t14)?t14:C_i_string_equal_p(((C_word*)t0)[7],lf[318]));
if(C_truep(t15)){
t16=lf[5] /* main#*keep* */ =C_SCHEME_TRUE;;
t17=lf[9] /* main#*no-install* */ =C_SCHEME_TRUE;;
t18=C_i_cdr(((C_word*)t0)[6]);
/* loop1286 */
t19=((C_word*)((C_word*)t0)[5])[1];
f_4641(t19,((C_word*)t0)[8],t18,((C_word*)t0)[4]);}
else{
t16=C_i_string_equal_p(((C_word*)t0)[7],lf[319]);
t17=(C_truep(t16)?t16:C_i_string_equal_p(((C_word*)t0)[7],lf[320]));
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5023,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5030,a[2]=t18,tmp=(C_word)a,a+=3,tmp);
/* chicken-version */
((C_proc2)C_fast_retrieve_symbol_proc(lf[44]))(2,*((C_word*)lf[44]+1),t19);}
else{
t18=C_i_string_equal_p(((C_word*)t0)[7],lf[321]);
t19=(C_truep(t18)?t18:C_i_string_equal_p(((C_word*)t0)[7],lf[322]));
if(C_truep(t19)){
t20=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t21=C_i_cdr(((C_word*)t0)[6]);
/* loop1286 */
t22=((C_word*)((C_word*)t0)[5])[1];
f_4641(t22,((C_word*)t0)[8],t21,((C_word*)t0)[4]);}
else{
t20=C_i_string_equal_p(((C_word*)t0)[7],lf[323]);
t21=(C_truep(t20)?t20:C_i_string_equal_p(((C_word*)t0)[7],lf[324]));
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5059,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t23=C_i_cdr(((C_word*)t0)[6]);
if(C_truep(C_i_pairp(t23))){
t24=t22;
f_5059(2,t24,C_SCHEME_UNDEFINED);}
else{
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6085,a[2]=t22,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t24,lf[302]);}}
else{
if(C_truep(C_i_string_equal_p(lf[331],((C_word*)t0)[7]))){
t22=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5088,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t23=C_i_cdr(((C_word*)t0)[6]);
if(C_truep(C_i_pairp(t23))){
t24=t22;
f_5088(2,t24,C_SCHEME_UNDEFINED);}
else{
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6090,a[2]=t22,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t24,lf[302]);}}
else{
t22=C_i_string_equal_p(lf[332],((C_word*)t0)[7]);
t23=(C_truep(t22)?t22:C_i_string_equal_p(lf[333],((C_word*)t0)[7]));
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5124,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t25=C_i_cdr(((C_word*)t0)[6]);
if(C_truep(C_i_pairp(t25))){
t26=t24;
f_5124(2,t26,C_SCHEME_UNDEFINED);}
else{
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6095,a[2]=t24,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t26,lf[302]);}}
else{
if(C_truep(C_i_string_equal_p(lf[334],((C_word*)t0)[7]))){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5162,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t25=C_i_cdr(((C_word*)t0)[6]);
if(C_truep(C_i_pairp(t25))){
t26=t24;
f_5162(2,t26,C_SCHEME_UNDEFINED);}
else{
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6100,a[2]=t24,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t26,lf[302]);}}
else{
if(C_truep(C_i_string_equal_p(lf[335],((C_word*)t0)[7]))){
t24=lf[7] /* main#*run-tests* */ =C_SCHEME_TRUE;;
t25=C_i_cdr(((C_word*)t0)[6]);
/* loop1286 */
t26=((C_word*)((C_word*)t0)[5])[1];
f_4641(t26,((C_word*)t0)[8],t25,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_string_equal_p(lf[336],((C_word*)t0)[7]))){
t24=lf[30] /* main#*target-extension* */ =C_SCHEME_FALSE;;
t25=C_i_cdr(((C_word*)t0)[6]);
/* loop1286 */
t26=((C_word*)((C_word*)t0)[5])[1];
f_4641(t26,((C_word*)t0)[8],t25,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_string_equal_p(lf[337],((C_word*)t0)[7]))){
t24=lf[29] /* main#*host-extension* */ =C_SCHEME_FALSE;;
t25=C_i_cdr(((C_word*)t0)[6]);
/* loop1286 */
t26=((C_word*)((C_word*)t0)[5])[1];
f_4641(t26,((C_word*)t0)[8],t25,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_string_equal_p(lf[338],((C_word*)t0)[7]))){
t24=lf[31] /* main#*debug-setup* */ =C_SCHEME_TRUE;;
t25=C_i_cdr(((C_word*)t0)[6]);
/* loop1286 */
t26=((C_word*)((C_word*)t0)[5])[1];
f_4641(t26,((C_word*)t0)[8],t25,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_string_equal_p(lf[339],((C_word*)t0)[7]))){
t24=lf[22] /* main#*deploy* */ =C_SCHEME_TRUE;;
t25=C_i_cdr(((C_word*)t0)[6]);
/* loop1286 */
t26=((C_word*)((C_word*)t0)[5])[1];
f_4641(t26,((C_word*)t0)[8],t25,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_string_equal_p(lf[340],((C_word*)t0)[7]))){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5270,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t25=C_i_cdr(((C_word*)t0)[6]);
if(C_truep(C_i_pairp(t25))){
t26=t24;
f_5270(2,t26,C_SCHEME_UNDEFINED);}
else{
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6105,a[2]=t24,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t26,lf[302]);}}
else{
if(C_truep(C_i_string_equal_p(lf[341],((C_word*)t0)[7]))){
t24=lf[23] /* main#*trunk* */ =C_SCHEME_TRUE;;
t25=C_i_cdr(((C_word*)t0)[6]);
/* loop1286 */
t26=((C_word*)((C_word*)t0)[5])[1];
f_4641(t26,((C_word*)t0)[8],t25,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_string_equal_p(lf[342],((C_word*)t0)[7]))){
t24=lf[32] /* main#*keep-going* */ =C_SCHEME_TRUE;;
t25=C_i_cdr(((C_word*)t0)[6]);
/* loop1286 */
t26=((C_word*)((C_word*)t0)[5])[1];
f_4641(t26,((C_word*)t0)[8],t25,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_string_equal_p(lf[343],((C_word*)t0)[7]))){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5328,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t25=C_i_cdr(((C_word*)t0)[6]);
if(C_truep(C_i_pairp(t25))){
t26=t24;
f_5328(2,t26,C_SCHEME_UNDEFINED);}
else{
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6110,a[2]=t24,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t26,lf[302]);}}
else{
t24=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t25=C_i_string_length(((C_word*)t0)[7]);
if(C_truep(C_i_positivep(t25))){
t26=C_i_string_ref(((C_word*)t0)[7],C_fix(0));
t27=t24;
f_5355(t27,C_i_char_equalp(C_make_character(45),t26));}
else{
t26=t24;
f_5355(t26,C_SCHEME_FALSE);}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_5355(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_5355,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_string_length(((C_word*)t0)[7]);
if(C_truep(C_i_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5364,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5441,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* substring */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[348]+1)))(4,*((C_word*)lf[348]+1),t4,((C_word*)t0)[7],C_fix(1));}
else{
t3=((C_word*)t0)[5];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6122,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t4,lf[302]);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* pathname-extension */
((C_proc3)C_fast_retrieve_symbol_proc(lf[352]))(3,*((C_word*)lf[352]+1),t2,((C_word*)t0)[7]);}}

/* k5542 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5544,2,t0,t1);}
if(C_truep(C_i_equalp(lf[349],t1))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5457,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* pathname-file */
((C_proc3)C_fast_retrieve_symbol_proc(lf[287]))(3,*((C_word*)lf[287]+1),t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5502,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* irregex-match */
((C_proc4)C_fast_retrieve_symbol_proc(lf[179]))(4,*((C_word*)lf[179]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k5500 in k5542 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5502,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5506,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* g14591460 */
t3=t2;
f_5506(t3,((C_word*)t0)[3],t1);}
else{
t2=C_i_cdr(((C_word*)t0)[6]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
/* loop1286 */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4641(t4,((C_word*)t0)[3],t2,t3);}}

/* g1459 in k5500 in k5542 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_5506(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5506,NULL,3,t0,t1,t2);}
t3=C_i_cdr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5518,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5522,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* irregex-match-substring */
((C_proc4)C_fast_retrieve_symbol_proc(lf[178]))(4,*((C_word*)lf[178]+1),t5,t2,C_fix(1));}

/* k5520 in g1459 in k5500 in k5542 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5522,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5526,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* irregex-match-substring */
((C_proc4)C_fast_retrieve_symbol_proc(lf[178]))(4,*((C_word*)lf[178]+1),t2,((C_word*)t0)[2],C_fix(2));}

/* k5524 in k5520 in g1459 in k5500 in k5542 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* alist-cons */
((C_proc5)C_fast_retrieve_symbol_proc(lf[58]))(5,*((C_word*)lf[58]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5516 in g1459 in k5500 in k5542 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* loop1286 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_4641(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5455 in k5542 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5457,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5461,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5480,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname-directory */
((C_proc3)C_fast_retrieve_symbol_proc(lf[351]))(3,*((C_word*)lf[351]+1),t3,((C_word*)t0)[2]);}

/* k5478 in k5455 in k5542 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5480,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5489,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* absolute-pathname? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[153]))(3,*((C_word*)lf[153]+1),t3,t1);}
else{
/* current-directory */
((C_proc2)C_fast_retrieve_symbol_proc(lf[145]))(2,*((C_word*)lf[145]+1),t2);}}

/* k5487 in k5478 in k5455 in k5542 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5489,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
t3=C_a_i_list2(&a,2,t2,lf[350]);
/* alist-cons */
((C_proc5)C_fast_retrieve_symbol_proc(lf[58]))(5,*((C_word*)lf[58]+1),((C_word*)t0)[4],((C_word*)t0)[3],t3,C_retrieve2(lf[51],"main#*eggs+dirs+vers*"));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5496,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* current-directory */
((C_proc2)C_fast_retrieve_symbol_proc(lf[145]))(2,*((C_word*)lf[145]+1),t2);}}

/* k5494 in k5487 in k5478 in k5455 in k5542 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5481 in k5478 in k5455 in k5542 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5483,2,t0,t1);}
t2=C_a_i_list2(&a,2,t1,lf[350]);
/* alist-cons */
((C_proc5)C_fast_retrieve_symbol_proc(lf[58]))(5,*((C_word*)lf[58]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2,C_retrieve2(lf[51],"main#*eggs+dirs+vers*"));}

/* k5459 in k5455 in k5542 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5461,2,t0,t1);}
t2=C_mutate(&lf[51] /* (set! main#*eggs+dirs+vers* ...) */,t1);
t3=C_i_cdr(((C_word*)t0)[6]);
t4=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
/* loop1286 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4641(t5,((C_word*)t0)[2],t3,t4);}

/* f6122 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f6122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(1));}

/* k5439 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=C_fast_retrieve(lf[347]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5362 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5364,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5370,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5433,tmp=(C_word)a,a+=2,tmp);
/* every */
((C_proc4)C_fast_retrieve_symbol_proc(lf[102]))(4,*((C_word*)lf[102]+1),t2,t3,t1);}

/* a5432 in k5362 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5433(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5433,3,t0,t1,t2);}
t3=*((C_word*)lf[345]+1);
/* g14191420 */
t4=t3;
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,t2,lf[346]);}

/* k5368 in k5362 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5370(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5370,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5377,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[71]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5389,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5395,a[2]=t4,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_5395(t12,t8,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[5];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6117,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t3,lf[302]);}}

/* f6117 in k5368 in k5362 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f6117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(1));}

/* map-loop1423 in k5368 in k5362 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_5395(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5395,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5424,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[344]+1);
/* g14461447 */
t6=t5;
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t3,C_make_character(45),t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5422 in map-loop1423 in k5368 in k5362 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5424(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5424,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5395(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5395(t6,((C_word*)t0)[3],t5);}}

/* k5387 in k5368 in k5362 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[3]);
/* append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],t1,t2);}

/* k5375 in k5368 in k5362 in k5353 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* loop1286 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_4641(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* f6110 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f6110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(1));}

/* k5326 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[5]);
t3=C_mutate(&lf[11] /* (set! main#*password* ...) */,t2);
t4=C_i_cddr(((C_word*)t0)[5]);
/* loop1286 */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4641(t5,((C_word*)t0)[3],t4,((C_word*)t0)[2]);}

/* f6105 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f6105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(1));}

/* k5268 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[5]);
t3=C_mutate(&lf[10] /* (set! main#*username* ...) */,t2);
t4=C_i_cddr(((C_word*)t0)[5]);
/* loop1286 */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4641(t5,((C_word*)t0)[3],t4,((C_word*)t0)[2]);}

/* f6100 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f6100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(1));}

/* k5160 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5162,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[5]);
/* string->symbol */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[210]+1)))(3,*((C_word*)lf[210]+1),t2,t3);}

/* k5175 in k5160 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5177,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[25],"main#*csc-nonfeatures*"));
t3=C_mutate(&lf[25] /* (set! main#*csc-nonfeatures* ...) */,t2);
t4=C_i_cddr(((C_word*)t0)[5]);
/* loop1286 */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4641(t5,((C_word*)t0)[3],t4,((C_word*)t0)[2]);}

/* f6095 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f6095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(1));}

/* k5122 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5124,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5139,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[5]);
/* string->symbol */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[210]+1)))(3,*((C_word*)lf[210]+1),t2,t3);}

/* k5137 in k5122 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5139,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[24],"main#*csc-features*"));
t3=C_mutate(&lf[24] /* (set! main#*csc-features* ...) */,t2);
t4=C_i_cddr(((C_word*)t0)[5]);
/* loop1286 */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4641(t5,((C_word*)t0)[3],t4,((C_word*)t0)[2]);}

/* f6090 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f6090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(1));}

/* k5086 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5088,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[5]);
/* main#setup-proxy */
f_4592(t2,t3);}

/* k5089 in k5086 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cddr(((C_word*)t0)[5]);
/* loop1286 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4641(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* f6085 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f6085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(1));}

/* k5057 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5062,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2148,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* repository-path */
((C_proc2)C_fast_retrieve_symbol_proc(lf[189]))(2,*((C_word*)lf[189]+1),t4);}

/* k2146 in k5057 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2148,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[16],"main#*windows-shell*"))?lf[325]:lf[326]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2154,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* print */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(5,*((C_word*)lf[38]+1),t3,lf[329],((C_word*)t0)[3],lf[330]);}

/* k2152 in k2146 in k5057 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2154(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2154,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2155,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_i_check_list_2(lf[328],lf[56]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2179,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2179(t7,((C_word*)t0)[2],lf[328]);}

/* for-each-loop413 in k2152 in k2146 in k5057 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2179(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2179,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2189,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g414420 */
t5=((C_word*)t0)[2];
f_2155(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2187 in for-each-loop413 in k2152 in k2146 in k5057 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2179(t3,((C_word*)t0)[2],t2);}

/* g414 in k2152 in k2146 in k5057 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2155(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2155,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2163,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2171,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),t4,((C_word*)t0)[2],t2);}

/* k2169 in g414 in k2152 in k2146 in k5057 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api#shellpath */
((C_proc3)C_fast_retrieve_symbol_proc(lf[244]))(3,*((C_word*)lf[244]+1),((C_word*)t0)[2],t1);}

/* k2161 in g414 in k2152 in k2146 in k5057 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2163,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2167,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* setup-api#shellpath */
((C_proc3)C_fast_retrieve_symbol_proc(lf[244]))(3,*((C_word*)lf[244]+1),t2,((C_word*)t0)[2]);}

/* k2165 in k2161 in g414 in k2152 in k2146 in k5057 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2167,2,t0,t1);}
/* main#command */
f_4571(((C_word*)t0)[4],lf[327],C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k5060 in k5057 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(0));}

/* k5028 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),((C_word*)t0)[2],t1);}

/* k5021 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(0));}

/* f6078 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f6078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(1));}

/* k4953 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4955,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4972,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* absolute-pathname? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[153]))(3,*((C_word*)lf[153]+1),t4,t2);}

/* k4970 in k4953 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4972,2,t0,t1);}
if(C_truep(t1)){
t2=C_mutate(&lf[26] /* (set! main#*prefix* ...) */,((C_word*)t0)[7]);
t3=C_i_cddr(((C_word*)t0)[6]);
/* loop1286 */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4641(t4,((C_word*)t0)[4],t3,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4979,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4983,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* current-directory */
((C_proc2)C_fast_retrieve_symbol_proc(lf[145]))(2,*((C_word*)lf[145]+1),t3);}}

/* k4981 in k4970 in k4953 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4977 in k4970 in k4953 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[253]))(3,*((C_word*)lf[253]+1),((C_word*)t0)[2],t1);}

/* k4960 in k4953 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(&lf[26] /* (set! main#*prefix* ...) */,t1);
t3=C_i_cddr(((C_word*)t0)[5]);
/* loop1286 */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4641(t4,((C_word*)t0)[3],t3,((C_word*)t0)[2]);}

/* f6073 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f6073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(1));}

/* k4916 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4918,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[5]);
/* string->symbol */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[210]+1)))(3,*((C_word*)lf[210]+1),t2,t3);}

/* k4920 in k4916 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(&lf[14] /* (set! main#*default-transport* ...) */,t1);
t3=C_i_cddr(((C_word*)t0)[5]);
/* loop1286 */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4641(t4,((C_word*)t0)[3],t3,((C_word*)t0)[2]);}

/* f6068 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f6068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(1));}

/* k4883 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[5]);
t3=C_mutate(&lf[13] /* (set! main#*default-location* ...) */,t2);
t4=C_i_cddr(((C_word*)t0)[5]);
/* loop1286 */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4641(t5,((C_word*)t0)[3],t4,((C_word*)t0)[2]);}

/* k4847 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[5]);
/* loop1286 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4641(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k4804 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),((C_word*)t0)[2],t1);}

/* k4797 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(0));}

/* f6063 in k4785 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f6063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(0));}

/* k2047 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),((C_word*)t0)[2],t1,C_retrieve2(lf[2],"main#constant194"));}

/* k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1699,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1701,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1708,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2045,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* file-exists? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[115]))(3,*((C_word*)lf[115]+1),t4,t1);}

/* k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2045,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1715,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2012,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* read-file */
((C_proc3)C_fast_retrieve_symbol_proc(lf[299]))(3,*((C_word*)lf[299]+1),t3,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_4666(t2,C_i_pairp(C_retrieve2(lf[12],"main#*default-sources*")));}}

/* k2010 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2012,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[56]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2020,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2020(t6,((C_word*)t0)[2],t1);}

/* for-each-loop262 in k2010 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2020(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2020,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2030,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g263269 */
t5=((C_word*)t0)[2];
f_1715(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2028 in for-each-loop262 in k2010 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2020(t3,((C_word*)t0)[2],t2);}

/* g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_1715(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1715,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1719,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t2))){
t4=C_i_length(t2);
if(C_truep(C_i_positivep(t4))){
t5=t3;
f_1719(2,t5,C_SCHEME_UNDEFINED);}
else{
/* broken258 */
t5=((C_word*)t0)[2];
f_1701(t5,t3,t2);}}
else{
/* broken258 */
t4=((C_word*)t0)[2];
f_1701(t4,t3,t2);}}

/* k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1719(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1719,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[4]);
t3=C_eqp(t2,lf[45]);
if(C_truep(t3)){
t4=C_i_cdr(((C_word*)t0)[4]);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cadr(((C_word*)t0)[4]);
if(C_truep(C_i_nequalp(t5,C_fix(1)))){
t6=C_SCHEME_UNDEFINED;
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1750,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
((C_proc2)C_fast_retrieve_symbol_proc(lf[207]))(2,*((C_word*)lf[207]+1),t6);}}
else{
/* broken258 */
t5=((C_word*)t0)[2];
f_1701(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}}
else{
t4=C_eqp(t2,lf[293]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1798,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t6=C_i_cdr(((C_word*)t0)[4]);
t7=C_a_i_list1(&a,1,t6);
/* append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t5,C_retrieve2(lf[12],"main#*default-sources*"),t7);}
else{
t5=C_eqp(t2,lf[71]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1816,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1818,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t12=C_i_cdr(((C_word*)t0)[4]);
t13=C_i_check_list_2(t12,lf[71]);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1862,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1864,a[2]=t11,a[3]=t8,a[4]=t16,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_1864(t18,t14,t12);}
else{
t6=C_eqp(t2,lf[297]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1907,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1909,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t13=C_i_cdr(((C_word*)t0)[4]);
t14=C_i_check_list_2(t13,lf[71]);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1955,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1957,a[2]=t12,a[3]=t9,a[4]=t17,a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_1957(t19,t15,t13);}
else{
/* broken258 */
t7=((C_word*)t0)[2];
f_1701(t7,((C_word*)t0)[3],((C_word*)t0)[4]);}}}}}

/* map-loop345 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_1957(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1957,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1986,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g351360 */
t5=((C_word*)t0)[2];
f_1909(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1984 in map-loop345 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1986(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1986,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1957(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1957(t6,((C_word*)t0)[3],t5);}}

/* k1953 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],C_retrieve2(lf[27],"main#*aliases*"),t1);}

/* g351 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_1909(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1909,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_listp(t2))){
t4=C_i_length(t2);
if(C_truep(C_i_nequalp(C_fix(2),t4))){
/* every */
((C_proc4)C_fast_retrieve_symbol_proc(lf[102]))(4,*((C_word*)lf[102]+1),t3,*((C_word*)lf[298]+1),t2);}
else{
t5=t3;
f_1916(2,t5,C_SCHEME_FALSE);}}
else{
t4=t3;
f_1916(2,t4,C_SCHEME_FALSE);}}

/* k1914 in g351 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1916,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_i_cadr(((C_word*)t0)[5]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}
else{
/* broken258 */
t2=((C_word*)t0)[3];
f_1701(t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k1905 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[27] /* (set! main#*aliases* ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* map-loop300 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_1864(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1864,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1893,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g306315 */
t5=((C_word*)t0)[2];
f_1818(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1891 in map-loop300 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1893(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1893,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1864(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1864(t6,((C_word*)t0)[3],t5);}}

/* k1860 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],C_retrieve2(lf[21],"main#*mappings*"),t1);}

/* g306 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_1818(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1818,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1822,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1849,tmp=(C_word)a,a+=2,tmp);
/* list-index */
((C_proc4)C_fast_retrieve_symbol_proc(lf[296]))(4,*((C_word*)lf[296]+1),t3,t4,t2);}

/* a1848 in g306 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1849(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1849,3,t0,t1,t2);}
t3=*((C_word*)lf[119]+1);
/* g325326 */
t4=t3;
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,lf[295],t2);}

/* k1820 in g306 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1822,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1825,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_1825(2,t3,C_SCHEME_UNDEFINED);}
else{
/* broken258 */
t3=((C_word*)t0)[3];
f_1701(t3,t2,((C_word*)t0)[2]);}}

/* k1823 in k1820 in g306 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1825,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1830,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1836,tmp=(C_word)a,a+=2,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a1835 in k1823 in k1820 in g306 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1836(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1836,4,t0,t1,t2,t3);}
t4=C_i_cdr(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,t2,t4));}

/* a1829 in k1823 in k1820 in g306 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1830,2,t0,t1);}
/* split-at */
((C_proc4)C_fast_retrieve_symbol_proc(lf[294]))(4,*((C_word*)lf[294]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1814 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[21] /* (set! main#*mappings* ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1796 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[12] /* (set! main#*default-sources* ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1748 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1750,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1753,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,lf[292],t1);}

/* k1751 in k1748 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1753,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,C_retrieve2(lf[2],"main#constant194"),((C_word*)t0)[2]);}

/* k1754 in k1751 in k1748 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1756,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1759,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,lf[291],((C_word*)t0)[2]);}

/* k1757 in k1754 in k1751 in k1748 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1762,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,C_fix(1),((C_word*)t0)[2]);}

/* k1760 in k1757 in k1754 in k1751 in k1748 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1762,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[204]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(41),((C_word*)t0)[2]);}

/* k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1768,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* get-output-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[203]))(3,*((C_word*)lf[203]+1),t2,((C_word*)t0)[2]);}

/* k1766 in k1763 in k1760 in k1757 in k1754 in k1751 in k1748 in k1717 in g263 in k2043 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[3]);
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(4,*((C_word*)lf[60]+1),((C_word*)t0)[2],t1,t2);}

/* k1706 in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4666(t2,C_i_pairp(C_retrieve2(lf[12],"main#*default-sources*")));}

/* broken in k1697 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_1701(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1701,NULL,3,t0,t1,t2);}
/* error */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(5,*((C_word*)lf[60]+1),t1,lf[290],((C_word*)t0)[2],t2);}

/* k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_4666(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4666,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4669,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4701,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* glob */
((C_proc3)C_fast_retrieve_symbol_proc(lf[216]))(3,*((C_word*)lf[216]+1),t3,lf[289]);}
else{
t3=t2;
f_4669(2,t3,C_SCHEME_UNDEFINED);}}

/* k4699 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4701(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4701,2,t0,t1);}
if(C_truep(C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4711,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(t1,lf[71]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4731,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4733,a[2]=t4,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_4733(t12,t8,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4769,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t2,lf[288]);}}

/* k4767 in k4699 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(1));}

/* map-loop1303 in k4699 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_4733(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4733,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4721,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* pathname-file */
((C_proc3)C_fast_retrieve_symbol_proc(lf[287]))(3,*((C_word*)lf[287]+1),t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4719 in map-loop1303 in k4699 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4721(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4721,2,t0,t1);}
t2=C_a_i_list2(&a,2,lf[285],lf[286]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t5=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t4);
t6=C_mutate(((C_word *)((C_word*)t0)[6])+1,t4);
t7=C_slot(((C_word*)t0)[5],C_fix(1));
t8=((C_word*)((C_word*)t0)[4])[1];
f_4733(t8,((C_word*)t0)[3],t7);}
else{
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=C_mutate(((C_word *)((C_word*)t0)[6])+1,t4);
t7=C_slot(((C_word*)t0)[5],C_fix(1));
t8=((C_word*)((C_word*)t0)[4])[1];
f_4733(t8,((C_word*)t0)[3],t7);}}

/* k4729 in k4699 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[2],t1,C_retrieve2(lf[51],"main#*eggs+dirs+vers*"));}

/* k4709 in k4699 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[51] /* (set! main#*eggs+dirs+vers* ...) */,t1);
t3=((C_word*)t0)[2];
f_4669(2,t3,t2);}

/* k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4669,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4672,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_4672(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4686,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[14],"main#*default-transport*"))){
if(C_truep(C_retrieve2(lf[13],"main#*default-location*"))){
t4=C_SCHEME_UNDEFINED;
t5=t2;
f_4672(2,t5,t4);}
else{
/* error */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(3,*((C_word*)lf[60]+1),t2,lf[283]);}}
else{
/* error */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(3,*((C_word*)lf[60]+1),t3,lf[284]);}}}

/* k4684 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_retrieve2(lf[13],"main#*default-location*"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_4672(2,t3,t2);}
else{
/* error */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(3,*((C_word*)lf[60]+1),((C_word*)t0)[2],lf[283]);}}

/* k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4672,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4679,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4683,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t3,((C_word*)t0)[2]);}

/* k4681 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* main#apply-mappings */
f_4397(((C_word*)t0)[2],t1);}

/* k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4679,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3540,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* main#retrieve */
f_2808(t3,t1);}

/* k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3540,2,t0,t1);}
if(C_truep(C_retrieve2(lf[8],"main#*retrieve-only*"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3546,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4003,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* topological-sort */
((C_proc4)C_fast_retrieve_symbol_proc(lf[281]))(4,*((C_word*)lf[281]+1),t3,C_retrieve2(lf[52],"main#*dependencies*"),*((C_word*)lf[282]+1));}}

/* k4001 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),((C_word*)t0)[2],t1);}

/* k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3546,2,t0,t1);}
t2=C_i_length(t1);
t3=C_retrieve2(lf[6],"main#*force*");
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3552,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t4,lf[280]);}

/* k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3552,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3555,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* pp */
((C_proc3)C_fast_retrieve_symbol_proc(lf[279]))(3,*((C_word*)lf[279]+1),t2,((C_word*)t0)[3]);}

/* k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3555(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3555,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3556,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[71]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3915,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3966,a[2]=t4,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3966(t12,t8,((C_word*)t0)[3]);}

/* map-loop998 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_3966(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3966,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3995,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[278]+1);
/* g10211022 */
t6=t5;
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t3,t4,C_retrieve2(lf[51],"main#*eggs+dirs+vers*"));}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3993 in map-loop998 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3995(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3995,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3966(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3966(t6,((C_word*)t0)[3],t5);}}

/* k3913 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3915,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3918,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* iota */
((C_proc5)C_fast_retrieve_symbol_proc(lf[277]))(5,*((C_word*)lf[277]+1),t2,((C_word*)t0)[2],((C_word*)t0)[2],C_fix(-1));}

/* k3916 in k3913 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3918(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3918,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[4],lf[56]);
t3=C_i_check_list_2(t1,lf[56]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3929,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3929(t7,((C_word*)t0)[2],((C_word*)t0)[4],t1);}

/* for-each-loop865 in k3916 in k3913 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_3929(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_3929,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3939,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g866873 */
t9=((C_word*)t0)[2];
f_3556(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3937 in for-each-loop865 in k3916 in k3913 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3929(t4,((C_word*)t0)[2],t2,t3);}

/* g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_3556(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_3556,NULL,4,t0,t1,t2,t3);}
t4=C_i_greaterp(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3563,a[2]=t1,a[3]=t3,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=(C_truep(((C_word*)t0)[3])?C_SCHEME_FALSE:(C_truep(t4)?C_i_nequalp(t3,((C_word*)t0)[2]):C_SCHEME_FALSE));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3871,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[9],"main#*no-install*"))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3887,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3895,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* setup-api#abort-setup */
((C_proc2)C_fast_retrieve_symbol_proc(lf[82]))(2,*((C_word*)lf[82]+1),t9);}
else{
t8=t7;
f_3871(t8,C_SCHEME_FALSE);}}
else{
t7=t5;
f_3563(2,t7,C_SCHEME_UNDEFINED);}}

/* k3893 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* yes-or-no? */
((C_proc5)C_fast_retrieve_symbol_proc(lf[79]))(5,*((C_word*)lf[79]+1),((C_word*)t0)[2],lf[276],lf[81],t1);}

/* k3885 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3871(t2,C_i_not(t1));}

/* k3869 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_3871(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3871,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3874,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t2,lf[275]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_3563(2,t3,t2);}}

/* k3872 in k3869 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3874,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3877,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* main#cleanup */
f_4005(t2);}

/* k3875 in k3872 in k3869 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(1));}

/* k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3563,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[5]);
t4=C_i_caddr(((C_word*)t0)[5]);
/* print */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(7,*((C_word*)lf[38]+1),t2,lf[273],t3,C_make_character(58),t4,lf[274]);}

/* k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3566,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[30],"main#*target-extension*"))){
if(C_truep(C_retrieve2(lf[29],"main#*host-extension*"))){
/* create-temporary-directory */
((C_proc2)C_fast_retrieve_symbol_proc(lf[215]))(2,*((C_word*)lf[215]+1),t2);}
else{
t3=t2;
f_3569(2,t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_3569(2,t3,C_SCHEME_FALSE);}}

/* k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3569,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3575,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t1)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3837,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t4,lf[272]);}
else{
t4=t3;
f_3575(2,t4,C_SCHEME_UNDEFINED);}}

/* k3835 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3837,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[16],"main#*windows-shell*"))?lf[268]:lf[269]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3848,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),t3,((C_word*)t0)[2],lf[271]);}

/* k3846 in k3835 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3848,2,t0,t1);}
/* main#command */
f_4571(((C_word*)t0)[4],lf[270],C_a_i_list(&a,3,((C_word*)t0)[3],t1,((C_word*)t0)[2]));}

/* k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3575(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3576,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3777,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(C_retrieve2(lf[30],"main#*target-extension*"))?C_retrieve2(lf[29],"main#*host-extension*"):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3813,a[2]=t8,a[3]=t6,a[4]=t12,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3820,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3826,a[2]=t12,a[3]=t10,a[4]=t8,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* ##sys#dynamic-wind */
t16=*((C_word*)lf[211]+1);
((C_proc5)(void*)(*((C_word*)t16+1)))(5,t16,t3,t13,t14,t15);}
else{
/* setup889 */
t5=t2;
f_3576(t5,t3,((C_word*)t0)[2]);}}

/* a3825 in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3826(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3826,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,C_retrieve2(lf[22],"main#*deploy*"));
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,C_retrieve2(lf[26],"main#*prefix*"));
t4=C_mutate(&lf[22] /* (set! main#*deploy* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(&lf[26] /* (set! main#*prefix* ...) */,((C_word*)((C_word*)t0)[2])[1]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* a3819 in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3820,2,t0,t1);}
/* setup889 */
t2=((C_word*)t0)[3];
f_3576(t2,t1,((C_word*)t0)[2]);}

/* a3812 in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3813(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3813,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,C_retrieve2(lf[22],"main#*deploy*"));
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,C_retrieve2(lf[26],"main#*prefix*"));
t4=C_mutate(&lf[22] /* (set! main#*deploy* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(&lf[26] /* (set! main#*prefix* ...) */,((C_word*)((C_word*)t0)[2])[1]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* k3775 in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3777,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[30],"main#*target-extension*"))?C_retrieve2(lf[29],"main#*host-extension*"):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t3,lf[267]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3784 in k3775 in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3786(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3786,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3791,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3796,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3802,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[211]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a3801 in k3784 in k3775 in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3802,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[29],"main#*host-extension*"));
t3=C_mutate(&lf[29] /* (set! main#*host-extension* ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a3795 in k3784 in k3775 in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3796,2,t0,t1);}
/* setup889 */
t2=((C_word*)t0)[3];
f_3576(t2,t1,((C_word*)t0)[2]);}

/* a3790 in k3784 in k3775 in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3791,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[29],"main#*host-extension*"));
t3=C_mutate(&lf[29] /* (set! main#*host-extension* ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_3576(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3576,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3580,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(4,*((C_word*)lf[38]+1),t3,lf[266],t2);}

/* k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3580(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3580,2,t0,t1);}
t2=C_fast_retrieve(lf[145]);
t3=((C_word*)t0)[6];
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3581,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3594,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t7=*((C_word*)lf[211]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,((C_word*)t0)[2],t5,t6,t5);}

/* a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3594,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3598,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_greaterp(((C_word*)t0)[2],C_fix(1));
t4=((C_word*)t0)[4];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3350,a[2]=t4,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=C_retrieve2(lf[22],"main#*deploy*");
if(C_truep(t6)){
t7=t5;
f_3350(t7,(C_truep(t6)?lf[264]:lf[265]));}
else{
if(C_truep(C_retrieve2(lf[28],"main#*cross-chicken*"))){
t7=C_retrieve2(lf[29],"main#*host-extension*");
t8=t5;
f_3350(t8,(C_truep(t7)?lf[265]:lf[264]));}
else{
t7=t5;
f_3350(t7,lf[265]);}}}

/* k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_3350(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3350,NULL,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[31],"main#*debug-setup*"))?lf[230]:lf[231]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3358,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* open-output-string */
((C_proc2)C_fast_retrieve_symbol_proc(lf[207]))(2,*((C_word*)lf[207]+1),t3);}

/* k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3358,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3361,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,lf[263],t1);}

/* k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3364,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,t3,((C_word*)t0)[2]);}

/* k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3364,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,lf[262],((C_word*)t0)[2]);}

/* k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3370,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_caddr(((C_word*)t0)[3]);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,t3,((C_word*)t0)[2]);}

/* k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3373,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,lf[261],((C_word*)t0)[2]);}

/* k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3376,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* get-output-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[203]))(3,*((C_word*)lf[203]+1),t2,((C_word*)t0)[2]);}

/* k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3517,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* setup-api#sudo-install */
((C_proc2)C_fast_retrieve_symbol_proc(lf[260]))(2,*((C_word*)lf[260]+1),t2);}

/* k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3517(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3517,2,t0,t1);}
t2=(C_truep(t1)?lf[232]:lf[233]);
t3=(C_truep(C_retrieve2(lf[5],"main#*keep*"))?lf[234]:lf[235]);
t4=(C_truep(C_retrieve2(lf[9],"main#*no-install*"))?(C_truep(((C_word*)t0)[7])?lf[236]:lf[237]):lf[236]);
t5=(C_truep(C_retrieve2(lf[29],"main#*host-extension*"))?lf[238]:lf[239]);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3396,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
/* main#get-prefix */
f_1649(t6,C_SCHEME_END_OF_LIST);}

/* k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3396,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3492,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
((C_proc2)C_fast_retrieve_symbol_proc(lf[207]))(2,*((C_word*)lf[207]+1),t3);}
else{
t3=t2;
f_3399(2,t3,lf[259]);}}

/* k3490 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3492,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3495,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,lf[258],t1);}

/* k3493 in k3490 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3495,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3498,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3508,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* normalize-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[253]))(4,*((C_word*)lf[253]+1),t3,((C_word*)t0)[2],lf[254]);}

/* k3506 in k3493 in k3490 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3496 in k3493 in k3490 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,lf[257],((C_word*)t0)[2]);}

/* k3499 in k3496 in k3493 in k3490 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[203]))(3,*((C_word*)lf[203]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3399,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3403,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* main#get-prefix */
f_1649(t2,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3403,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3406,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3473,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
((C_proc2)C_fast_retrieve_symbol_proc(lf[207]))(2,*((C_word*)lf[207]+1),t3);}
else{
t3=t2;
f_3406(2,t3,lf[256]);}}

/* k3471 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3473,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3476,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,lf[255],t1);}

/* k3474 in k3471 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3476,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3479,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3489,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* normalize-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[253]))(4,*((C_word*)lf[253]+1),t3,((C_word*)t0)[2],lf[254]);}

/* k3487 in k3474 in k3471 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3477 in k3474 in k3471 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3479,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,lf[252],((C_word*)t0)[2]);}

/* k3480 in k3477 in k3474 in k3471 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[203]))(3,*((C_word*)lf[203]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3404 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3406,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3410,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_pairp(C_retrieve2(lf[24],"main#*csc-features*")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3458,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* open-output-string */
((C_proc2)C_fast_retrieve_symbol_proc(lf[207]))(2,*((C_word*)lf[207]+1),t3);}
else{
t3=t2;
f_3410(2,t3,lf[251]);}}

/* k3456 in k3404 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3461,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,lf[250],t1);}

/* k3459 in k3456 in k3404 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3461,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3464,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[190]+1)))(4,*((C_word*)lf[190]+1),t2,C_retrieve2(lf[24],"main#*csc-features*"),((C_word*)t0)[2]);}

/* k3462 in k3459 in k3456 in k3404 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3464,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,lf[249],((C_word*)t0)[2]);}

/* k3465 in k3462 in k3459 in k3456 in k3404 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[203]))(3,*((C_word*)lf[203]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3408 in k3404 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3410,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3414,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_pairp(C_retrieve2(lf[25],"main#*csc-nonfeatures*")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3440,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* open-output-string */
((C_proc2)C_fast_retrieve_symbol_proc(lf[207]))(2,*((C_word*)lf[207]+1),t3);}
else{
t3=t2;
f_3414(2,t3,lf[248]);}}

/* k3438 in k3408 in k3404 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3443,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,lf[247],t1);}

/* k3441 in k3438 in k3408 in k3404 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3443,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[190]+1)))(4,*((C_word*)lf[190]+1),t2,C_retrieve2(lf[25],"main#*csc-nonfeatures*"),((C_word*)t0)[2]);}

/* k3444 in k3441 in k3438 in k3408 in k3404 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,lf[246],((C_word*)t0)[2]);}

/* k3447 in k3444 in k3441 in k3438 in k3408 in k3404 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[203]))(3,*((C_word*)lf[203]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3412 in k3408 in k3404 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3414,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[22],"main#*deploy*"))?lf[240]:lf[241]);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3422,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3426,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
t6=C_i_car(((C_word*)t0)[2]);
/* make-pathname */
((C_proc5)C_fast_retrieve_symbol_proc(lf[116]))(5,*((C_word*)lf[116]+1),t4,t5,t6,lf[245]);}

/* k3424 in k3412 in k3408 in k3404 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api#shellpath */
((C_proc3)C_fast_retrieve_symbol_proc(lf[244]))(3,*((C_word*)lf[244]+1),((C_word*)t0)[2],t1);}

/* k3420 in k3412 in k3408 in k3404 in k3401 in k3397 in k3394 in k3515 in k3374 in k3371 in k3368 in k3365 in k3362 in k3359 in k3356 in k3348 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* conc */
((C_proc19)C_fast_retrieve_symbol_proc(lf[88]))(19,*((C_word*)lf[88]+1),((C_word*)t0)[14],C_retrieve2(lf[54],"main#*csi*"),lf[242],((C_word*)t0)[13],lf[243],((C_word*)t0)[12],((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],C_make_character(32),t1);}

/* k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3598,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(4,*((C_word*)lf[38]+1),t3,lf[229],t1);}

/* k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3604,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3605,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[32],"main#*keep-going*"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3716,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3721,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[147]+1)))(3,*((C_word*)lf[147]+1),t4,t5);}
else{
/* tmp904913 */
t4=t2;
f_3605(t4,t3);}}

/* a3720 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3721(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3721,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3727,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3745,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* with-exception-handler */
((C_proc4)C_fast_retrieve_symbol_proc(lf[146]))(4,*((C_word*)lf[146]+1),t1,t3,t4);}

/* a3744 in a3720 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3745,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3751,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3757,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a3756 in a3744 in a3720 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3757(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3757r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3757r(t0,t1,t2);}}

static void C_ccall f_3757r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3763,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* k914920 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a3762 in a3756 in a3744 in a3720 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3763,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a3750 in a3744 in a3720 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3751,2,t0,t1);}
/* tmp904913 */
t2=((C_word*)t0)[2];
f_3605(t2,t1);}

/* a3726 in a3720 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3727(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3727,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3733,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* k914920 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a3732 in a3726 in a3720 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3733,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3737,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* print */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(6,*((C_word*)lf[38]+1),t2,lf[228],lf[221],((C_word*)t0)[2],lf[222]);}

/* k3735 in a3732 in a3726 in a3720 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3737,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3740,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* print-error-message */
((C_proc3)C_fast_retrieve_symbol_proc(lf[127]))(3,*((C_word*)lf[127]+1),t2,((C_word*)t0)[2]);}

/* k3738 in k3735 in a3732 in a3726 in a3720 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3743,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t2,lf[219]);}

/* k3741 in k3738 in k3735 in a3732 in a3726 in a3720 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k3714 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g918919 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3612,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3618,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[7],"main#*run-tests*"))){
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_3618(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3704,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* file-exists? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[115]))(3,*((C_word*)lf[115]+1),t3,lf[227]);}}
else{
t3=t2;
f_3618(2,t3,C_SCHEME_FALSE);}}

/* k3702 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3704,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3710,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* directory? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[225]))(3,*((C_word*)lf[225]+1),t2,lf[226]);}
else{
t2=((C_word*)t0)[2];
f_3618(2,t2,C_SCHEME_FALSE);}}

/* k3708 in k3702 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* file-exists? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[115]))(3,*((C_word*)lf[115]+1),((C_word*)t0)[2],lf[224]);}
else{
t2=((C_word*)t0)[2];
f_3618(2,t2,C_SCHEME_FALSE);}}

/* k3616 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3618,2,t0,t1);}
if(C_truep(t1)){
t2=lf[20] /* main#*running-test* */ =C_SCHEME_TRUE;;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* current-directory */
((C_proc3)C_fast_retrieve_symbol_proc(lf[145]))(3,*((C_word*)lf[145]+1),t3,lf[223]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3620 in k3616 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3622,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3623,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3634,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[32],"main#*keep-going*"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3638,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3643,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[147]+1)))(3,*((C_word*)lf[147]+1),t4,t5);}
else{
/* tmp931940 */
t4=t2;
f_3623(t4,t3);}}

/* a3642 in k3620 in k3616 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3643(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3643,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3649,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3667,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* with-exception-handler */
((C_proc4)C_fast_retrieve_symbol_proc(lf[146]))(4,*((C_word*)lf[146]+1),t1,t3,t4);}

/* a3666 in a3642 in k3620 in k3616 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3667,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3673,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3679,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a3678 in a3666 in a3642 in k3620 in k3616 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3679(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3679r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3679r(t0,t1,t2);}}

static void C_ccall f_3679r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3685,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* k941947 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a3684 in a3678 in a3666 in a3642 in k3620 in k3616 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3685,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a3672 in a3666 in a3642 in k3620 in k3616 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3673,2,t0,t1);}
/* tmp931940 */
t2=((C_word*)t0)[2];
f_3623(t2,t1);}

/* a3648 in a3642 in k3620 in k3616 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3649(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3649,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3655,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* k941947 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a3654 in a3648 in a3642 in k3620 in k3616 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3659,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* print */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(6,*((C_word*)lf[38]+1),t2,lf[220],lf[221],((C_word*)t0)[2],lf[222]);}

/* k3657 in a3654 in a3648 in a3642 in k3620 in k3616 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3662,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* print-error-message */
((C_proc3)C_fast_retrieve_symbol_proc(lf[127]))(3,*((C_word*)lf[127]+1),t2,((C_word*)t0)[2]);}

/* k3660 in k3657 in a3654 in a3648 in a3642 in k3620 in k3616 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3662,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3665,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t2,lf[219]);}

/* k3663 in k3660 in k3657 in a3654 in a3648 in a3642 in k3620 in k3616 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k3636 in k3620 in k3616 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g945946 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k3632 in k3620 in k3616 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=lf[20] /* main#*running-test* */ =C_SCHEME_FALSE;;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* tmp931 in k3620 in k3616 in k3610 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_3623(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3623,NULL,2,t0,t1);}
t2=C_i_caddr(((C_word*)t0)[3]);
/* main#command */
f_4571(t1,lf[218],C_a_i_list(&a,3,C_retrieve2(lf[54],"main#*csi*"),((C_word*)t0)[2],t2));}

/* tmp904 in k3602 in k3596 in a3593 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_3605(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3605,NULL,2,t0,t1);}
/* main#$system */
f_4549(t1,((C_word*)t0)[2]);}

/* swap891 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3581,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3585,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* g892893896 */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k3583 in swap891 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3585,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3588,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* g892893896 */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)((C_word*)t0)[4])[1]);}

/* k3586 in k3583 in swap891 in k3578 in setup in k3573 in k3567 in k3564 in k3561 in g866 in k3553 in k3550 in k3544 in k3538 in k4677 in k4670 in k4667 in k4664 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4393 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),((C_word*)t0)[2],t1,lf[217]);}

/* k4389 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* glob */
((C_proc3)C_fast_retrieve_symbol_proc(lf[216]))(3,*((C_word*)lf[216]+1),((C_word*)t0)[2],t1);}

/* k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4024,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4027,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* create-temporary-directory */
((C_proc2)C_fast_retrieve_symbol_proc(lf[215]))(2,*((C_word*)lf[215]+1),t2);}

/* k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4027,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4030,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),t2,t1,C_retrieve2(lf[0],"main#constant190"));}

/* k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4033,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* irregex */
((C_proc3)C_fast_retrieve_symbol_proc(lf[213]))(3,*((C_word*)lf[213]+1),t2,lf[214]);}

/* k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4036,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t2,lf[212]);}

/* k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4036(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4036,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4039,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4262,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4384,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#dynamic-wind */
t10=*((C_word*)lf[211]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t6,t7,t8,t9);}

/* a4383 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4384,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_fast_retrieve(lf[202]));
t3=C_mutate((C_word*)lf[202]+1 /* (set! ##sys#warnings-enabled ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4267,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4269,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[56]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4361,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4361(t7,t1,((C_word*)t0)[2]);}

/* for-each-loop1058 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_4361(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4361,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4371,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g10591065 */
t5=((C_word*)t0)[2];
f_4269(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4369 in for-each-loop1058 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4361(t3,((C_word*)t0)[2],t2);}

/* g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_4269(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4269,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4273,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* irregex-match */
((C_proc4)C_fast_retrieve_symbol_proc(lf[179]))(4,*((C_word*)lf[179]+1),t3,((C_word*)t0)[2],t2);}

/* k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4276,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4281,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[147]+1)))(3,*((C_word*)lf[147]+1),t2,t3);}

/* a4280 in k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4281(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4281,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4287,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4319,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* with-exception-handler */
((C_proc4)C_fast_retrieve_symbol_proc(lf[146]))(4,*((C_word*)lf[146]+1),t1,t3,t4);}

/* a4318 in a4280 in k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4319,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4325,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4343,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a4342 in a4318 in a4280 in k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4343(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_4343r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4343r(t0,t1,t2);}}

static void C_ccall f_4343r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4349,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* k10691075 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a4348 in a4342 in a4318 in a4280 in k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4349,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a4324 in a4318 in a4280 in k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4325,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4337,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4341,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* irregex-match-substring */
((C_proc4)C_fast_retrieve_symbol_proc(lf[178]))(4,*((C_word*)lf[178]+1),t3,((C_word*)t0)[2],C_fix(1));}

/* k4339 in a4324 in a4318 in a4280 in k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->symbol */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[210]+1)))(3,*((C_word*)lf[210]+1),((C_word*)t0)[2],t1);}

/* k4335 in a4324 in a4318 in a4280 in k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4337,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[208],t1);
/* eval */
((C_proc3)C_fast_retrieve_symbol_proc(lf[209]))(3,*((C_word*)lf[209]+1),((C_word*)t0)[2],t2);}

/* a4286 in a4280 in k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4287(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4287,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4293,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* k10691075 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a4292 in a4286 in a4280 in k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4293,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4301,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* current-error-port */
((C_proc2)C_fast_retrieve_symbol_proc(lf[185]))(2,*((C_word*)lf[185]+1),t2);}

/* k4299 in a4292 in a4286 in a4280 in k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4305,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* open-output-string */
((C_proc2)C_fast_retrieve_symbol_proc(lf[207]))(2,*((C_word*)lf[207]+1),t2);}

/* k4303 in k4299 in a4292 in a4286 in a4280 in k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4308,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,lf[206],t1);}

/* k4306 in k4303 in k4299 in a4292 in a4286 in a4280 in k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4308,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4311,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[205]+1)))(4,*((C_word*)lf[205]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4309 in k4306 in k4303 in k4299 in a4292 in a4286 in a4280 in k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[204]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k4312 in k4309 in k4306 in k4303 in k4299 in a4292 in a4286 in a4280 in k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4317,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[203]))(3,*((C_word*)lf[203]+1),t2,((C_word*)t0)[2]);}

/* k4315 in k4312 in k4309 in k4306 in k4303 in k4299 in a4292 in a4286 in a4280 in k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* print-error-message */
((C_proc5)C_fast_retrieve_symbol_proc(lf[127]))(5,*((C_word*)lf[127]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4274 in k4271 in g1059 in a4266 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g10731074 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* a4261 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4262,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_fast_retrieve(lf[202]));
t3=C_mutate((C_word*)lf[202]+1 /* (set! ##sys#warnings-enabled ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4039,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4042,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t2,lf[201]);}

/* k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4042,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4109,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4133,tmp=(C_word)a,a+=2,tmp);
/* append-map */
((C_proc4)C_fast_retrieve_symbol_proc(lf[168]))(4,*((C_word*)lf[168]+1),t3,t4,C_fast_retrieve(lf[200]));}

/* a4132 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4133(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4133,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4140,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#module-name */
((C_proc3)C_fast_retrieve_symbol_proc(lf[199]))(3,*((C_word*)lf[199]+1),t4,t3);}

/* k4138 in a4132 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4143,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* print* */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[197]+1)))(4,*((C_word*)lf[197]+1),t2,lf[198],t1);}

/* k4141 in k4138 in a4132 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4143,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4148,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4154,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a4153 in k4141 in k4138 in a4132 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4154(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[20],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4154,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4160,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=C_i_check_list_2(t4,lf[71]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4174,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4227,a[2]=t6,a[3]=t13,a[4]=t8,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_4227(t15,t11,t4);}

/* map-loop1121 in a4153 in k4141 in k4138 in a4132 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_4227(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4227,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_4160(C_a_i(&a,9),((C_word*)t0)[5],t3);
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

/* k4172 in a4153 in k4141 in k4138 in a4132 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4174(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4174,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4176,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[71]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4190,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4192,a[2]=t3,a[3]=t10,a[4]=t5,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4192(t12,t8,((C_word*)t0)[3]);}

/* map-loop1148 in k4172 in a4153 in k4141 in k4138 in a4132 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_4192(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4192,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_4176(C_a_i(&a,9),((C_word*)t0)[5],t3);
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

/* k4188 in k4172 in a4153 in k4141 in k4138 in a4132 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* g1154 in k4172 in a4153 in k4141 in k4138 in a4132 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static C_word C_fcall f_4176(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=C_i_car(t1);
return(C_a_i_list3(&a,3,t2,lf[196],((C_word*)t0)[2]));}

/* g1127 in a4153 in k4141 in k4138 in a4132 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static C_word C_fcall f_4160(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=C_i_car(t1);
return(C_a_i_list3(&a,3,t2,lf[195],((C_word*)t0)[2]));}

/* a4147 in k4141 in k4138 in a4132 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4148,2,t0,t1);}
/* ##sys#module-exports */
((C_proc3)C_fast_retrieve_symbol_proc(lf[194]))(3,*((C_word*)lf[194]+1),t1,((C_word*)t0)[2]);}

/* k4107 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4109,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4111,tmp=(C_word)a,a+=2,tmp);
/* sort */
((C_proc4)C_fast_retrieve_symbol_proc(lf[193]))(4,*((C_word*)lf[193]+1),((C_word*)t0)[2],t1,t2);}

/* a4110 in k4107 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4111(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4111,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4119,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(t2);
/* symbol->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[161]+1)))(3,*((C_word*)lf[161]+1),t4,t5);}

/* k4117 in a4110 in k4107 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4119,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4123,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* symbol->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[161]+1)))(3,*((C_word*)lf[161]+1),t2,t3);}

/* k4121 in k4117 in a4110 in k4107 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string<? */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[192]+1)))(4,*((C_word*)lf[192]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4045,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4048,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* newline */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[186]+1)))(2,*((C_word*)lf[186]+1),t2);}

/* k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4048,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4051,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4067,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* with-output-to-file */
((C_proc4)C_fast_retrieve_symbol_proc(lf[191]))(4,*((C_word*)lf[191]+1),t2,((C_word*)t0)[3],t3);}

/* a4066 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4067,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[56]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4084,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4084(t6,t1,((C_word*)t0)[2]);}

/* for-each-loop1178 in a4066 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_4084(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4084,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4094,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4073,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* write */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[190]+1)))(3,*((C_word*)lf[190]+1),t5,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4071 in for-each-loop1178 in a4066 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* newline */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[186]+1)))(2,*((C_word*)lf[186]+1),((C_word*)t0)[2]);}

/* k4092 in for-each-loop1178 in a4066 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4084(t3,((C_word*)t0)[2],t2);}

/* k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4051,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4054,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4061,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4065,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* repository-path */
((C_proc2)C_fast_retrieve_symbol_proc(lf[189]))(2,*((C_word*)lf[189]+1),t4);}

/* k4063 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),((C_word*)t0)[2],t1,C_retrieve2(lf[0],"main#constant190"));}

/* k4059 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api#copy-file */
((C_proc4)C_fast_retrieve_symbol_proc(lf[188]))(4,*((C_word*)lf[188]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in loop in k4634 in k4631 in k5675 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api#remove-directory */
((C_proc3)C_fast_retrieve_symbol_proc(lf[159]))(3,*((C_word*)lf[159]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5668 in a5665 in a5659 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* main#cleanup */
f_4005(((C_word*)t0)[2]);}

/* a5626 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5627(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5627,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5633,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* k14641470 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a5632 in a5626 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5633,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5637,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5658,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* current-error-port */
((C_proc2)C_fast_retrieve_symbol_proc(lf[185]))(2,*((C_word*)lf[185]+1),t3);}

/* k5656 in a5632 in a5626 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* newline */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[186]+1)))(3,*((C_word*)lf[186]+1),((C_word*)t0)[2],t1);}

/* k5635 in a5632 in a5626 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5637,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5640,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5654,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* current-error-port */
((C_proc2)C_fast_retrieve_symbol_proc(lf[185]))(2,*((C_word*)lf[185]+1),t3);}

/* k5652 in k5635 in a5632 in a5626 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* print-error-message */
((C_proc4)C_fast_retrieve_symbol_proc(lf[127]))(4,*((C_word*)lf[127]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5638 in k5635 in a5632 in a5626 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5640,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5643,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* main#cleanup */
f_4005(t2);}

/* k5641 in k5638 in k5635 in a5632 in a5626 in a5620 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_retrieve2(lf[20],"main#*running-test*"))){
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(2));}
else{
/* exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),((C_word*)t0)[2],C_fix(1));}}

/* k5608 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5610,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5613,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* g14681469 */
t3=t1;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k5611 in k5608 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5613,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5616,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5619,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[183]))(2,*((C_word*)lf[183]+1),t3);}

/* k5617 in k5611 in k5608 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k5614 in k5611 in k5608 in k5605 in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_5616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* main#setup-proxy in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_4592(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4592,NULL,2,t1,t2);}
if(C_truep(C_i_stringp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4603,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* get-environment-variable */
((C_proc3)C_fast_retrieve_symbol_proc(lf[181]))(3,*((C_word*)lf[181]+1),t3,lf[182]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4601 in main#setup-proxy in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4603,2,t0,t1);}
t2=C_mutate(&lf[19] /* (set! main#*proxy-user-pass* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4606,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* irregex-match */
((C_proc4)C_fast_retrieve_symbol_proc(lf[179]))(4,*((C_word*)lf[179]+1),t3,lf[180],((C_word*)t0)[2]);}

/* k4604 in k4601 in main#setup-proxy in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4606,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=t1;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4615,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* irregex-match-substring */
((C_proc4)C_fast_retrieve_symbol_proc(lf[178]))(4,*((C_word*)lf[178]+1),t4,t3,C_fix(1));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k4613 in k4604 in k4601 in main#setup-proxy in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4615,2,t0,t1);}
t2=C_mutate(&lf[17] /* (set! main#*proxy-host* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4623,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* irregex-match-substring */
((C_proc4)C_fast_retrieve_symbol_proc(lf[178]))(4,*((C_word*)lf[178]+1),t3,((C_word*)t0)[2],C_fix(2));}

/* k4621 in k4613 in k4604 in k4601 in main#setup-proxy in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4623,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
t3=C_mutate(&lf[18] /* (set! main#*proxy-port* ...) */,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* main#command in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_4571(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4571,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4575,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t4,*((C_word*)lf[176]+1),t2,t3);}

/* k4573 in main#command in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4578,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(4,*((C_word*)lf[38]+1),t2,lf[175],t1);}

/* k4576 in k4573 in main#command in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* main#$system */
f_4549(((C_word*)t0)[3],((C_word*)t0)[2]);}

/* main#$system in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_4549(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4549,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4553,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4566,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[16],"main#*windows-shell*"))){
/* string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[61]+1)))(5,*((C_word*)lf[61]+1),t4,lf[172],t2,lf[173]);}
else{
t5=t2;
/* system */
((C_proc3)C_fast_retrieve_symbol_proc(lf[171]))(3,*((C_word*)lf[171]+1),t3,t5);}}

/* k4564 in main#$system in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* system */
((C_proc3)C_fast_retrieve_symbol_proc(lf[171]))(3,*((C_word*)lf[171]+1),((C_word*)t0)[2],t1);}

/* k4551 in main#$system in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_zerop(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* error */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(5,*((C_word*)lf[60]+1),((C_word*)t0)[3],lf[170],t1,((C_word*)t0)[2]);}}

/* main#apply-mappings in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_4397(C_word t1,C_word t2){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4397,NULL,2,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4400,tmp=(C_word)a,a+=2,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4434,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4457,a[2]=t6,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4470,a[2]=t6,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4472,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* append-map */
((C_proc4)C_fast_retrieve_symbol_proc(lf[168]))(4,*((C_word*)lf[168]+1),t10,t11,t2);}

/* a4471 in main#apply-mappings in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4472(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4472,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4476,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4533,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* find */
((C_proc4)C_fast_retrieve_symbol_proc(lf[167]))(4,*((C_word*)lf[167]+1),t3,t4,C_retrieve2(lf[21],"main#*mappings*"));}

/* a4532 in a4471 in main#apply-mappings in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4533(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4533,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4539,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
/* find */
((C_proc4)C_fast_retrieve_symbol_proc(lf[167]))(4,*((C_word*)lf[167]+1),t1,t3,t4);}

/* a4538 in a4532 in a4471 in main#apply-mappings in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4539(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4539,3,t0,t1,t2);}
/* g12241225 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4434(4,t3,t1,((C_word*)t0)[2],t2);}

/* k4474 in a4471 in main#apply-mappings in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4476(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4476,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
t3=t1;
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fast_retrieve(lf[46]);
t9=C_i_cdr(t3);
t10=C_i_check_list_2(t9,lf[71]);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4492,a[2]=t8,a[3]=t5,a[4]=t12,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_4492(t14,t2,t9);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list1(&a,1,((C_word*)t0)[2]));}}

/* map-loop1231 in k4474 in a4471 in main#apply-mappings in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_4492(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4492,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4521,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g12371246 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4519 in map-loop1231 in k4474 in a4471 in main#apply-mappings in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4521(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4521,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4492(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4492(t6,((C_word*)t0)[3],t5);}}

/* k4468 in main#apply-mappings in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* delete-duplicates */
((C_proc4)C_fast_retrieve_symbol_proc(lf[166]))(4,*((C_word*)lf[166]+1),((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k4455 in main#apply-mappings in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4457,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4460,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4463,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* lset= */
((C_proc5)C_fast_retrieve_symbol_proc(lf[165]))(5,*((C_word*)lf[165]+1),t3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],t1);}

/* k4461 in k4455 in main#apply-mappings in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
/* print */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(6,*((C_word*)lf[38]+1),((C_word*)t0)[3],lf[163],((C_word*)t0)[2],lf[164],((C_word*)t0)[4]);}}

/* k4458 in k4455 in main#apply-mappings in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* same? in main#apply-mappings in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4434(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4434,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4454,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* canonical1202 */
f_4400(t4,t2);}

/* k4452 in same? in main#apply-mappings in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4454,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4450,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* canonical1202 */
f_4400(t3,((C_word*)t0)[2]);}

/* k4448 in k4452 in same? in main#apply-mappings in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_equalp(((C_word*)t0)[2],t2));}

/* canonical in main#apply-mappings in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_4400(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4400,NULL,2,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4414,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* symbol->string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[161]+1)))(3,*((C_word*)lf[161]+1),t3,t2);}
else{
if(C_truep(C_i_stringp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t2,C_SCHEME_FALSE));}
else{
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(4,*((C_word*)lf[60]+1),t1,lf[162],t2);}}}}

/* k4412 in canonical in main#apply-mappings in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4414,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,t1,C_SCHEME_FALSE));}

/* main#cleanup in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_4005(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4005,NULL,1,t1);}
if(C_truep(C_retrieve2(lf[5],"main#*keep*"))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4012,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* setup-download#temporary-directory */
((C_proc2)C_fast_retrieve_symbol_proc(lf[160]))(2,*((C_word*)lf[160]+1),t2);}}

/* k4010 in main#cleanup in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_4012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* setup-api#remove-directory */
((C_proc3)C_fast_retrieve_symbol_proc(lf[159]))(3,*((C_word*)lf[159]+1),((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2808(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2808,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2812,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t3,lf[157]);}

/* k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2812(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2812,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_i_check_list_2(t2,lf[56]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2886,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3165,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_3165(t8,t4,t2);}

/* for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_3165(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3165,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3175,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_assoc(t4,C_retrieve2(lf[51],"main#*eggs+dirs+vers*"));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2830,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* delete */
((C_proc5)C_fast_retrieve_symbol_proc(lf[118]))(5,*((C_word*)lf[118]+1),t6,t5,C_retrieve2(lf[51],"main#*eggs+dirs+vers*"),*((C_word*)lf[119]+1));}
else{
t6=C_i_pairp(t4);
t7=(C_truep(t6)?C_i_car(t4):t4);
t8=C_i_pairp(t4);
t9=(C_truep(t8)?C_i_cdr(t4):C_SCHEME_FALSE);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2844,a[2]=t9,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2850,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t3,t10,t11);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a2849 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2850,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2854,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t5=t4;
f_2854(2,t5,C_SCHEME_UNDEFINED);}
else{
/* error */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(3,*((C_word*)lf[60]+1),t4,lf[156]);}}

/* k2852 in a2849 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2854,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2857,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* print */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(6,*((C_word*)lf[38]+1),t2,lf[154],((C_word*)t0)[5],lf[155],((C_word*)t0)[4]);}

/* k2855 in k2852 in a2849 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2857,2,t0,t1);}
t2=C_a_i_list3(&a,3,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,C_retrieve2(lf[51],"main#*eggs+dirs+vers*"));
t4=C_mutate(&lf[51] /* (set! main#*eggs+dirs+vers* ...) */,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2844(C_word c,C_word t0,C_word t1){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2844,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2642,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(C_truep(C_retrieve2(lf[13],"main#*default-location*"))?C_retrieve2(lf[14],"main#*default-transport*"):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2100,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2103,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_retrieve2(lf[14],"main#*default-transport*"),lf[152]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2120,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* absolute-pathname? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[153]))(3,*((C_word*)lf[153]+1),t7,C_retrieve2(lf[13],"main#*default-location*"));}
else{
t7=t5;
f_2103(t7,C_SCHEME_FALSE);}}
else{
t4=C_retrieve2(lf[12],"main#*default-sources*");
t5=t2;
f_2642(t5,t4);}}

/* k2118 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2103(t2,C_i_not(t1));}

/* k2101 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2103(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2103,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2110,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* current-directory */
((C_proc2)C_fast_retrieve_symbol_proc(lf[145]))(2,*((C_word*)lf[145]+1),t2);}
else{
t2=C_retrieve2(lf[13],"main#*default-location*");
t3=C_a_i_list(&a,2,lf[150],t2);
t4=C_a_i_list(&a,2,lf[148],C_retrieve2(lf[14],"main#*default-transport*"));
t5=C_a_i_list(&a,2,t3,t4);
t6=((C_word*)t0)[2];
f_2642(t6,C_a_i_list(&a,1,t5));}}

/* k2108 in k2101 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),((C_word*)t0)[2],t1,C_retrieve2(lf[13],"main#*default-location*"));}

/* k2098 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2100,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[150],t1);
t3=C_a_i_list(&a,2,lf[148],C_retrieve2(lf[14],"main#*default-transport*"));
t4=C_a_i_list(&a,2,t2,t3);
t5=((C_word*)t0)[2];
f_2642(t5,C_a_i_list(&a,1,t4));}

/* k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2642(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2642,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2644,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2644(t5,((C_word*)t0)[2],t1);}

/* trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2644(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2644,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* values */
C_values(4,0,t1,C_SCHEME_FALSE,lf[120]);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2660,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t5=C_i_assq(lf[150],t3);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2712,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t5)){
t7=C_i_cadr(t5);
/* main#resolve-location */
f_2051(t4,t7);}
else{
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(4,*((C_word*)lf[60]+1),t6,lf[151],t3);}}}

/* k2710 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(t1);
/* main#resolve-location */
f_2051(((C_word*)t0)[2],t2);}

/* k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2660,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2663,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t3=C_i_assq(lf[148],((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2698,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t5=t2;
f_2663(t5,C_i_cadr(t3));}
else{
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(4,*((C_word*)lf[60]+1),t4,lf[149],((C_word*)t0)[3]);}}

/* k2696 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2663(t2,C_i_cadr(t1));}

/* k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2663(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2663,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2668,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2674,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2673 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2674(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2674,4,t0,t1,t2,t3);}
if(C_truep(t2)){
/* values */
C_values(4,0,t1,t2,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2127,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* delete */
((C_proc5)C_fast_retrieve_symbol_proc(lf[118]))(5,*((C_word*)lf[118]+1),t4,((C_word*)t0)[2],C_retrieve2(lf[12],"main#*default-sources*"),*((C_word*)lf[119]+1));}}

/* k2125 in a2673 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(&lf[12] /* (set! main#*default-sources* ...) */,t1);
t3=C_i_cdr(((C_word*)t0)[4]);
/* trying-sources524 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2644(t4,((C_word*)t0)[2],t3);}

/* a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2668,2,t0,t1);}
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2495,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2500,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* call-with-current-continuation */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[147]+1)))(3,*((C_word*)lf[147]+1),t4,t5);}

/* a2499 in a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2500(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2500,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2506,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2593,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* with-exception-handler */
((C_proc4)C_fast_retrieve_symbol_proc(lf[146]))(4,*((C_word*)lf[146]+1),t1,t3,t4);}

/* a2592 in a2499 in a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2593,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2599,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2622,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a2621 in a2592 in a2499 in a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2622(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_2622r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2622r(t0,t1,t2);}}

static void C_ccall f_2622r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2628,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* k493499 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a2627 in a2621 in a2592 in a2499 in a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2628,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a2598 in a2592 in a2499 in a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2599,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve2(lf[8],"main#*retrieve-only*"))){
/* current-directory */
((C_proc2)C_fast_retrieve_symbol_proc(lf[145]))(2,*((C_word*)lf[145]+1),t2);}
else{
t3=t2;
f_2607(2,t3,C_SCHEME_FALSE);}}

/* k2605 in a2598 in a2592 in a2499 in a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_retrieve2(lf[8],"main#*retrieve-only*");
t3=(C_truep(t2)?C_SCHEME_FALSE:C_i_not(C_retrieve2(lf[5],"main#*keep*")));
/* setup-download#retrieve-extension */
((C_proc25)C_fast_retrieve_symbol_proc(lf[134]))(25,*((C_word*)lf[134]+1),((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],lf[135],((C_word*)t0)[2],lf[136],t1,lf[137],C_retrieve2(lf[7],"main#*run-tests*"),lf[138],C_retrieve2(lf[10],"main#*username*"),lf[139],C_retrieve2(lf[11],"main#*password*"),lf[140],C_retrieve2(lf[23],"main#*trunk*"),lf[141],C_retrieve2(lf[17],"main#*proxy-host*"),lf[142],C_retrieve2(lf[18],"main#*proxy-port*"),lf[143],C_retrieve2(lf[19],"main#*proxy-user-pass*"),lf[144],t3);}

/* a2505 in a2499 in a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2506(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2506,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2512,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* k493499 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a2511 in a2505 in a2499 in a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2512,2,t0,t1);}
t2=C_i_structurep(((C_word*)t0)[2],lf[121]);
t3=(C_truep(t2)?C_slot(((C_word*)t0)[2],C_fix(1)):C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2522,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=C_i_memv(lf[130],t3);
t6=t4;
f_2522(t6,(C_truep(t5)?C_i_memv(lf[133],t3):C_SCHEME_FALSE));}
else{
t5=t4;
f_2522(t5,C_SCHEME_FALSE);}}

/* k2520 in a2511 in a2505 in a2499 in a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2522(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2522,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2525,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t2,lf[123]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2534,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_i_memv(lf[130],((C_word*)t0)[2]);
t4=t2;
f_2534(t4,(C_truep(t3)?C_i_memv(lf[132],((C_word*)t0)[2]):C_SCHEME_FALSE));}
else{
t3=t2;
f_2534(t3,C_SCHEME_FALSE);}}}

/* k2532 in k2520 in a2511 in a2505 in a2499 in a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2534(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2534,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2537,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t2,lf[125]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2546,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_i_memv(lf[130],((C_word*)t0)[2]);
t4=t2;
f_2546(t4,(C_truep(t3)?C_i_memv(lf[131],((C_word*)t0)[2]):C_SCHEME_FALSE));}
else{
t3=t2;
f_2546(t3,C_SCHEME_FALSE);}}}

/* k2544 in k2532 in k2520 in a2511 in a2505 in a2499 in a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2546(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2546,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2549,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t3,lf[128]);}
else{
t2=((C_word*)t0)[3];
/* abort */
((C_proc3)C_fast_retrieve_symbol_proc(lf[129]))(3,*((C_word*)lf[129]+1),((C_word*)t0)[2],t2);}}

/* k2547 in k2544 in k2532 in k2520 in a2511 in a2505 in a2499 in a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2552,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* print-error-message */
((C_proc3)C_fast_retrieve_symbol_proc(lf[127]))(3,*((C_word*)lf[127]+1),t2,((C_word*)t0)[2]);}

/* k2550 in k2547 in k2544 in k2532 in k2520 in a2511 in a2505 in a2499 in a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,lf[126]);}

/* k2535 in k2532 in k2520 in a2511 in a2505 in a2499 in a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,lf[124]);}

/* k2523 in k2520 in a2511 in a2505 in a2499 in a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,lf[122]);}

/* k2493 in a2667 in k2661 in k2658 in trying-sources in k2640 in a2843 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g497498 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k2828 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2830,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_mutate(&lf[51] /* (set! main#*eggs+dirs+vers* ...) */,t2);
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_3165(t5,((C_word*)t0)[2],t4);}

/* k3173 in for-each-loop580 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3165(t3,((C_word*)t0)[2],t2);}

/* k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2886(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2886,2,t0,t1);}
if(C_truep(C_retrieve2(lf[8],"main#*retrieve-only*"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_retrieve2(lf[51],"main#*eggs+dirs+vers*");
t3=C_i_check_list_2(t2,lf[56]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3142,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3142(t7,((C_word*)t0)[2],t2);}}

/* for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_3142(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(12);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3142,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3152,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
if(C_truep(C_i_member(t5,C_retrieve2(lf[53],"main#*checked*")))){
t6=C_slot(t2,C_fix(1));
t15=t1;
t16=t6;
t1=t15;
t2=t16;
goto loop;}
else{
t6=C_i_car(t4);
t7=C_a_i_cons(&a,2,t6,C_retrieve2(lf[53],"main#*checked*"));
t8=C_mutate(&lf[53] /* (set! main#*checked* ...) */,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2904,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t10=C_i_cadr(t4);
t11=C_i_car(t4);
/* make-pathname */
((C_proc5)C_fast_retrieve_symbol_proc(lf[116]))(5,*((C_word*)lf[116]+1),t9,t10,t11,lf[117]);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2904,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2910,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* file-exists? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[115]))(3,*((C_word*)lf[115]+1),t2,t1);}

/* k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2910,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2913,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* with-input-from-file */
((C_proc4)C_fast_retrieve_symbol_proc(lf[110]))(4,*((C_word*)lf[110]+1),t2,((C_word*)t0)[2],*((C_word*)lf[111]+1));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3114,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* string-append */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[61]+1)))(6,*((C_word*)lf[61]+1),t2,lf[112],t3,lf[113],lf[114]);}}

/* k3112 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* warning */
((C_proc3)C_fast_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),((C_word*)t0)[2],t1);}

/* k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* print */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(5,*((C_word*)lf[38]+1),t2,lf[108],t3,lf[109]);}

/* k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2916(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2919,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3191,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[28],"main#*cross-chicken*"))){
t6=C_SCHEME_UNDEFINED;
t7=t2;
f_2919(2,t7,t6);}
else{
t6=C_i_assq(lf[99],t4);
if(C_truep(t6)){
t7=C_i_cadr(t6);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3213,a[2]=t3,a[3]=t6,a[4]=t9,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_3213(3,t11,t2,t7);}
else{
t7=t2;
f_2919(2,t7,C_SCHEME_FALSE);}}}

/* loop in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3213(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_3213,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3223,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* feature? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[100]))(3,*((C_word*)lf[100]+1),t3,t2);}
else{
if(C_truep(C_i_listp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3248,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t4=C_i_car(t2);
t5=C_eqp(lf[106],t4);
if(C_truep(t5)){
t6=C_i_cdr(t2);
t7=t3;
f_3248(t7,C_i_pairp(t6));}
else{
t6=t3;
f_3248(t6,C_SCHEME_FALSE);}}
else{
t3=C_i_cadr(((C_word*)t0)[3]);
/* error */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(5,*((C_word*)lf[60]+1),t1,lf[107],((C_word*)t0)[2],t3);}}}

/* k3246 in loop in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_3248(C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3248,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3261,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[5]);
/* loop713 */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3213(3,t4,t2,t3);}
else{
t2=C_i_car(((C_word*)t0)[5]);
t3=C_eqp(lf[101],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3277,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=C_i_cdr(((C_word*)t0)[5]);
/* every */
((C_proc4)C_fast_retrieve_symbol_proc(lf[102]))(4,*((C_word*)lf[102]+1),t4,((C_word*)((C_word*)t0)[4])[1],t5);}
else{
t4=C_i_car(((C_word*)t0)[5]);
t5=C_eqp(lf[103],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3303,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t7=C_i_cdr(((C_word*)t0)[5]);
/* any */
((C_proc4)C_fast_retrieve_symbol_proc(lf[104]))(4,*((C_word*)lf[104]+1),t6,((C_word*)((C_word*)t0)[4])[1],t7);}
else{
t6=C_i_cadr(((C_word*)t0)[3]);
/* error */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(5,*((C_word*)lf[60]+1),((C_word*)t0)[7],lf[105],((C_word*)t0)[2],t6);}}}}

/* k3301 in k3246 in loop in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
/* fail711 */
t2=((C_word*)t0)[2];
f_3191(t2,((C_word*)t0)[3]);}}

/* k3275 in k3246 in loop in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* fail711 */
t2=((C_word*)t0)[3];
f_3191(t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3259 in k3246 in loop in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
/* fail711 */
t2=((C_word*)t0)[2];
f_3191(t2,((C_word*)t0)[3]);}}

/* k3221 in loop in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* fail711 */
t2=((C_word*)t0)[2];
f_3191(t2,((C_word*)t0)[3]);}}

/* fail in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_3191(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3191,NULL,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(4,*((C_word*)lf[60]+1),t1,lf[98],((C_word*)t0)[2]);}

/* k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* print */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(5,*((C_word*)lf[38]+1),t2,lf[96],t3,lf[97]);}

/* k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2927,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2933,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2933(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2933,4,t0,t1,t2,t3);}
t4=t2;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2938,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* main#apply-mappings */
f_4397(t6,((C_word*)t5)[1]);}

/* k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2938,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_i_car(((C_word*)t0)[4]);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3054,a[2]=t5,a[3]=t7,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t3,tmp=(C_word)a,a+=9,tmp);
/* append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(4,*((C_word*)lf[70]+1),t8,((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[2]);}

/* k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3054,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[71]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3060,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3062,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3062(t7,t3,t1);}

/* map-loop643 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_3062(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3062,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3072,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
if(C_truep(C_i_pairp(t4))){
t5=C_i_car(t4);
t6=t3;
f_3072(t6,C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST));}
else{
t5=t3;
f_3072(t5,C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST));}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3070 in map-loop643 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_3072(C_word t0,C_word t1){
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
f_3062(t5,((C_word*)t0)[3],t4);}
else{
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_3062(t5,((C_word*)t0)[3],t4);}}

/* k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3060,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=C_a_i_cons(&a,2,t2,C_retrieve2(lf[52],"main#*dependencies*"));
t4=C_mutate(&lf[52] /* (set! main#*dependencies* ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2945,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3024,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3031,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* string-intersperse */
((C_proc4)C_fast_retrieve_symbol_proc(lf[76]))(4,*((C_word*)lf[76]+1),t7,((C_word*)((C_word*)t0)[2])[1],lf[94]);}
else{
t6=t5;
f_2945(2,t6,C_SCHEME_UNDEFINED);}}

/* k3029 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(4,*((C_word*)lf[38]+1),((C_word*)t0)[2],lf[93],t1);}

/* k3022 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* main#retrieve */
f_2808(((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k2943 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2945(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2951,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=C_retrieve2(lf[6],"main#*force*");
if(C_truep(t3)){
t4=t2;
f_2951(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3014,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[3];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2725,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t7=C_i_car(((C_word*)t0)[2]);
t8=C_a_i_list3(&a,3,lf[84],t7,lf[85]);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_i_check_list_2(t5,lf[71]);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2767,a[2]=t8,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2769,a[2]=t10,a[3]=t16,a[4]=t12,tmp=(C_word)a,a+=5,tmp));
t18=((C_word*)t16)[1];
f_2769(t18,t14,t5);}}
else{
t3=t2;
f_2951(2,t3,C_SCHEME_FALSE);}}

/* map-loop550 in k2943 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2769(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2769,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2798,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2757,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=C_i_car(t4);
/* extension-information */
((C_proc3)C_fast_retrieve_symbol_proc(lf[48]))(3,*((C_word*)lf[48]+1),t6,t7);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2755 in map-loop550 in k2943 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_assq(lf[45],t1);
t3=(C_truep(t2)?C_i_cadr(t2):lf[87]);
t4=C_i_cdr(((C_word*)t0)[4]);
/* conc */
((C_proc10)C_fast_retrieve_symbol_proc(lf[88]))(10,*((C_word*)lf[88]+1),((C_word*)t0)[3],lf[89],((C_word*)t0)[2],lf[90],t3,lf[91],t4,lf[92],C_make_character(10));}

/* k2796 in map-loop550 in k2943 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2798(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2798,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2769(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2769(t6,((C_word*)t0)[3],t5);}}

/* k2765 in k2943 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[86]);}

/* k2723 in k2943 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string-concatenate */
((C_proc3)C_fast_retrieve_symbol_proc(lf[83]))(3,*((C_word*)lf[83]+1),((C_word*)t0)[2],t1);}

/* k3012 in k2943 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3018,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* setup-api#abort-setup */
((C_proc2)C_fast_retrieve_symbol_proc(lf[82]))(2,*((C_word*)lf[82]+1),t2);}

/* k3016 in k3012 in k2943 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* yes-or-no? */
((C_proc6)C_fast_retrieve_symbol_proc(lf[79]))(6,*((C_word*)lf[79]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[80],lf[81],t1);}

/* k2949 in k2943 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2951,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2954,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* unzip1 */
((C_proc3)C_fast_retrieve_symbol_proc(lf[78]))(3,*((C_word*)lf[78]+1),t2,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2952 in k2949 in k2943 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2957,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3001,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* string-intersperse */
((C_proc4)C_fast_retrieve_symbol_proc(lf[76]))(4,*((C_word*)lf[76]+1),t3,t1,lf[77]);}

/* k2999 in k2952 in k2949 in k2943 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(4,*((C_word*)lf[38]+1),((C_word*)t0)[2],lf[75],t1);}

/* k2955 in k2952 in k2949 in k2943 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2957(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2957,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[3],lf[56]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2971,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2976,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_2976(t7,t3,((C_word*)t0)[3]);}

/* for-each-loop676 in k2955 in k2952 in k2949 in k2943 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2976(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2976,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2986,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2962,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* print */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(5,*((C_word*)lf[38]+1),t5,lf[73],t4,lf[74]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2960 in for-each-loop676 in k2955 in k2952 in k2949 in k2943 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api#remove-extension */
((C_proc3)C_fast_retrieve_symbol_proc(lf[72]))(3,*((C_word*)lf[72]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2984 in for-each-loop676 in k2955 in k2952 in k2949 in k2943 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2976(t3,((C_word*)t0)[2],t2);}

/* k2969 in k2955 in k2952 in k2949 in k2943 in k3058 in k3052 in k2936 in a2932 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* main#retrieve */
f_2808(((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2927,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2279,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=f_2129(lf[67],t2);
t5=f_2129(lf[68],t2);
if(C_truep(C_retrieve2(lf[7],"main#*run-tests*"))){
t6=f_2129(lf[69],t2);
/* append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t3,t4,t5,t6);}
else{
/* append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t3,t4,t5,C_SCHEME_END_OF_LIST);}}

/* k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2279,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2284,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2284(t5,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2284(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2284,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2298,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t5,t3);}
else{
t5=C_i_car(t2);
t6=C_i_cdr(t2);
t7=C_i_symbolp(t5);
t8=(C_truep(t7)?t7:C_i_stringp(t5));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2327,a[2]=t5,a[3]=t4,a[4]=t6,a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* main#ext-version */
f_2202(t9,t5);}
else{
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2340,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t6,a[6]=t1,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_listp(t5))){
t10=C_i_length(t5);
if(C_truep(C_i_nequalp(C_fix(2),t10))){
t11=C_i_car(t5);
t12=C_i_stringp(t11);
if(C_truep(t12)){
t13=t9;
f_2340(t13,t12);}
else{
t13=C_i_car(t5);
t14=t9;
f_2340(t14,C_i_symbolp(t13));}}
else{
t11=t9;
f_2340(t11,C_SCHEME_FALSE);}}
else{
t10=t9;
f_2340(t10,C_SCHEME_FALSE);}}}}

/* k2338 in loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2340(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2340,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* main#ext-version */
f_2202(t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2446,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* warning */
((C_proc4)C_fast_retrieve_symbol_proc(lf[65]))(4,*((C_word*)lf[65]+1),t2,lf[66],((C_word*)t0)[2]);}}

/* k2444 in k2338 in loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* loop451 */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2284(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2341 in k2338 in loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2343,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2431,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2435,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* ->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t4,t5);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2360,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_i_car(((C_word*)t0)[2]);
/* ->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t3,t4);}}

/* k2358 in k2341 in k2338 in loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2360,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* loop451 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2284(t3,((C_word*)t0)[4],((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k2433 in k2341 in k2338 in loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api#version>=? */
((C_proc4)C_fast_retrieve_symbol_proc(lf[64]))(4,*((C_word*)lf[64]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2429 in k2341 in k2338 in loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2431,2,t0,t1);}
if(C_truep(t1)){
/* loop451 */
t2=((C_word*)((C_word*)t0)[7])[1];
f_2284(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2373,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2420,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[2]);
/* ->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t3,t4);}}

/* k2418 in k2429 in k2341 in k2338 in loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2420,2,t0,t1);}
t2=C_i_string_equal_p(lf[59],t1);
t3=(C_truep(t2)?C_i_not(C_retrieve2(lf[6],"main#*force*")):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2406,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[61]+1)))(5,*((C_word*)lf[61]+1),t4,lf[62],t5,lf[63]);}
else{
t4=((C_word*)t0)[3];
f_2373(2,t4,C_SCHEME_UNDEFINED);}}

/* k2404 in k2418 in k2429 in k2341 in k2338 in loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* error */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(3,*((C_word*)lf[60]+1),((C_word*)t0)[2],t1);}

/* k2371 in k2429 in k2341 in k2338 in loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2380,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(((C_word*)t0)[2]);
/* ->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t3,t4);}

/* k2382 in k2371 in k2429 in k2341 in k2338 in loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2384,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2388,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* ->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t2,t3);}

/* k2386 in k2382 in k2371 in k2429 in k2341 in k2338 in loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* alist-cons */
((C_proc5)C_fast_retrieve_symbol_proc(lf[58]))(5,*((C_word*)lf[58]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2378 in k2371 in k2429 in k2341 in k2338 in loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* loop451 */
t2=((C_word*)((C_word*)t0)[5])[1];
f_2284(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2325 in loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2327,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
/* loop451 */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2284(t3,((C_word*)t0)[5],((C_word*)t0)[4],t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2334,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* ->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t2,((C_word*)t0)[2]);}}

/* k2332 in k2325 in loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2334,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* loop451 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2284(t3,((C_word*)t0)[4],((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k2296 in loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2302,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t2,((C_word*)t0)[2]);}

/* k2300 in k2296 in loop in k2277 in a2926 in k2920 in k2917 in k2914 in k2911 in k2908 in k2902 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3150 in for-each-loop618 in k2884 in k2810 in main#retrieve in k2487 in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_3152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3142(t3,((C_word*)t0)[2],t2);}

/* main#ext-version in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2202(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2202,NULL,2,t1,t2);}
t3=C_eqp(t2,lf[43]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2212,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_2212(t5,t3);}
else{
t5=C_i_equalp(t2,lf[49]);
if(C_truep(t5)){
t6=t4;
f_2212(t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2252,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t6,t2);}}}

/* k2250 in main#ext-version in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2212(t2,C_i_member(t1,C_fast_retrieve(lf[50])));}

/* k2210 in main#ext-version in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2212(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2212,NULL,2,t0,t1);}
if(C_truep(t1)){
/* chicken-version */
((C_proc2)C_fast_retrieve_symbol_proc(lf[44]))(2,*((C_word*)lf[44]+1),((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2218,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* extension-information */
((C_proc3)C_fast_retrieve_symbol_proc(lf[48]))(3,*((C_word*)lf[48]+1),t2,((C_word*)t0)[2]);}}

/* k2216 in k2210 in main#ext-version in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=t1;
t4=C_i_assq(lf[45],t3);
if(C_truep(t4)){
t5=C_i_cadr(t4);
/* ->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t2,t5);}
else{
t5=t2;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[47]);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* main#deps in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static C_word C_fcall f_2129(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_stack_check;
t3=C_i_assq(t1,t2);
if(C_truep(t3)){
t4=C_i_cdr(t3);
return((C_truep(t4)?t4:C_SCHEME_END_OF_LIST));}
else{
return(C_SCHEME_END_OF_LIST);}}

/* main#resolve-location in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2051(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2051,NULL,2,t1,t2);}
t3=C_i_assoc(t2,C_retrieve2(lf[27],"main#*aliases*"));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2059,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* g387388 */
t5=t4;
f_2059(t5,t1,t3);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* g387 in main#resolve-location in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_2059(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2059,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2066,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* print */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[38]+1)))(6,*((C_word*)lf[38]+1),t4,lf[39],((C_word*)t0)[2],lf[40],t3);}

/* k2064 in g387 in main#resolve-location in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_2066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* main#resolve-location */
f_2051(((C_word*)t0)[3],((C_word*)t0)[2]);}

/* main#get-prefix in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_fcall f_1649(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1649,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1653,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_1653(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_1653(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[36],t2);}}}

/* k1651 in main#get-prefix in k1641 in k1615 in k1612 in k1609 in k1602 in k1599 in k1596 in k1593 in k1590 in k1587 in k1584 in k1581 in k1578 in k1575 in k1572 in k1569 in k1566 in k1563 in k1560 */
static void C_ccall f_1653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1653,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[28],"main#*cross-chicken*"))?C_i_not(C_retrieve2(lf[29],"main#*host-extension*")):C_SCHEME_FALSE);
if(C_truep(t2)){
if(C_truep(t1)){
/* ##sys#peek-c-string */
t3=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],C_mpointer(&a,(void*)C_TARGET_PREFIX),C_fix(0));}
else{
t3=C_retrieve2(lf[26],"main#*prefix*");
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* ##sys#peek-c-string */
t4=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],C_mpointer(&a,(void*)C_TARGET_PREFIX),C_fix(0));}}}
else{
t3=C_retrieve2(lf[26],"main#*prefix*");
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[456] = {
{"toplevel:chicken_2dinstall_2escm",(void*)C_toplevel},
{"f_1562:chicken_2dinstall_2escm",(void*)f_1562},
{"f_1565:chicken_2dinstall_2escm",(void*)f_1565},
{"f_1568:chicken_2dinstall_2escm",(void*)f_1568},
{"f_1571:chicken_2dinstall_2escm",(void*)f_1571},
{"f_1574:chicken_2dinstall_2escm",(void*)f_1574},
{"f_1577:chicken_2dinstall_2escm",(void*)f_1577},
{"f_1580:chicken_2dinstall_2escm",(void*)f_1580},
{"f_1583:chicken_2dinstall_2escm",(void*)f_1583},
{"f_1586:chicken_2dinstall_2escm",(void*)f_1586},
{"f_1589:chicken_2dinstall_2escm",(void*)f_1589},
{"f_1592:chicken_2dinstall_2escm",(void*)f_1592},
{"f_1595:chicken_2dinstall_2escm",(void*)f_1595},
{"f_1598:chicken_2dinstall_2escm",(void*)f_1598},
{"f_1601:chicken_2dinstall_2escm",(void*)f_1601},
{"f_1604:chicken_2dinstall_2escm",(void*)f_1604},
{"f_1611:chicken_2dinstall_2escm",(void*)f_1611},
{"f_1614:chicken_2dinstall_2escm",(void*)f_1614},
{"f_1617:chicken_2dinstall_2escm",(void*)f_1617},
{"f_1643:chicken_2dinstall_2escm",(void*)f_1643},
{"f_5697:chicken_2dinstall_2escm",(void*)f_5697},
{"f_5693:chicken_2dinstall_2escm",(void*)f_5693},
{"f_2489:chicken_2dinstall_2escm",(void*)f_2489},
{"f_5607:chicken_2dinstall_2escm",(void*)f_5607},
{"f_5621:chicken_2dinstall_2escm",(void*)f_5621},
{"f_5660:chicken_2dinstall_2escm",(void*)f_5660},
{"f_5679:chicken_2dinstall_2escm",(void*)f_5679},
{"f_5685:chicken_2dinstall_2escm",(void*)f_5685},
{"f_5666:chicken_2dinstall_2escm",(void*)f_5666},
{"f_5677:chicken_2dinstall_2escm",(void*)f_5677},
{"f_4633:chicken_2dinstall_2escm",(void*)f_4633},
{"f_5604:chicken_2dinstall_2escm",(void*)f_5604},
{"f_4636:chicken_2dinstall_2escm",(void*)f_4636},
{"f_4641:chicken_2dinstall_2escm",(void*)f_4641},
{"f_4787:chicken_2dinstall_2escm",(void*)f_4787},
{"f_5355:chicken_2dinstall_2escm",(void*)f_5355},
{"f_5544:chicken_2dinstall_2escm",(void*)f_5544},
{"f_5502:chicken_2dinstall_2escm",(void*)f_5502},
{"f_5506:chicken_2dinstall_2escm",(void*)f_5506},
{"f_5522:chicken_2dinstall_2escm",(void*)f_5522},
{"f_5526:chicken_2dinstall_2escm",(void*)f_5526},
{"f_5518:chicken_2dinstall_2escm",(void*)f_5518},
{"f_5457:chicken_2dinstall_2escm",(void*)f_5457},
{"f_5480:chicken_2dinstall_2escm",(void*)f_5480},
{"f_5489:chicken_2dinstall_2escm",(void*)f_5489},
{"f_5496:chicken_2dinstall_2escm",(void*)f_5496},
{"f_5483:chicken_2dinstall_2escm",(void*)f_5483},
{"f_5461:chicken_2dinstall_2escm",(void*)f_5461},
{"f6122:chicken_2dinstall_2escm",(void*)f6122},
{"f_5441:chicken_2dinstall_2escm",(void*)f_5441},
{"f_5364:chicken_2dinstall_2escm",(void*)f_5364},
{"f_5433:chicken_2dinstall_2escm",(void*)f_5433},
{"f_5370:chicken_2dinstall_2escm",(void*)f_5370},
{"f6117:chicken_2dinstall_2escm",(void*)f6117},
{"f_5395:chicken_2dinstall_2escm",(void*)f_5395},
{"f_5424:chicken_2dinstall_2escm",(void*)f_5424},
{"f_5389:chicken_2dinstall_2escm",(void*)f_5389},
{"f_5377:chicken_2dinstall_2escm",(void*)f_5377},
{"f6110:chicken_2dinstall_2escm",(void*)f6110},
{"f_5328:chicken_2dinstall_2escm",(void*)f_5328},
{"f6105:chicken_2dinstall_2escm",(void*)f6105},
{"f_5270:chicken_2dinstall_2escm",(void*)f_5270},
{"f6100:chicken_2dinstall_2escm",(void*)f6100},
{"f_5162:chicken_2dinstall_2escm",(void*)f_5162},
{"f_5177:chicken_2dinstall_2escm",(void*)f_5177},
{"f6095:chicken_2dinstall_2escm",(void*)f6095},
{"f_5124:chicken_2dinstall_2escm",(void*)f_5124},
{"f_5139:chicken_2dinstall_2escm",(void*)f_5139},
{"f6090:chicken_2dinstall_2escm",(void*)f6090},
{"f_5088:chicken_2dinstall_2escm",(void*)f_5088},
{"f_5091:chicken_2dinstall_2escm",(void*)f_5091},
{"f6085:chicken_2dinstall_2escm",(void*)f6085},
{"f_5059:chicken_2dinstall_2escm",(void*)f_5059},
{"f_2148:chicken_2dinstall_2escm",(void*)f_2148},
{"f_2154:chicken_2dinstall_2escm",(void*)f_2154},
{"f_2179:chicken_2dinstall_2escm",(void*)f_2179},
{"f_2189:chicken_2dinstall_2escm",(void*)f_2189},
{"f_2155:chicken_2dinstall_2escm",(void*)f_2155},
{"f_2171:chicken_2dinstall_2escm",(void*)f_2171},
{"f_2163:chicken_2dinstall_2escm",(void*)f_2163},
{"f_2167:chicken_2dinstall_2escm",(void*)f_2167},
{"f_5062:chicken_2dinstall_2escm",(void*)f_5062},
{"f_5030:chicken_2dinstall_2escm",(void*)f_5030},
{"f_5023:chicken_2dinstall_2escm",(void*)f_5023},
{"f6078:chicken_2dinstall_2escm",(void*)f6078},
{"f_4955:chicken_2dinstall_2escm",(void*)f_4955},
{"f_4972:chicken_2dinstall_2escm",(void*)f_4972},
{"f_4983:chicken_2dinstall_2escm",(void*)f_4983},
{"f_4979:chicken_2dinstall_2escm",(void*)f_4979},
{"f_4962:chicken_2dinstall_2escm",(void*)f_4962},
{"f6073:chicken_2dinstall_2escm",(void*)f6073},
{"f_4918:chicken_2dinstall_2escm",(void*)f_4918},
{"f_4922:chicken_2dinstall_2escm",(void*)f_4922},
{"f6068:chicken_2dinstall_2escm",(void*)f6068},
{"f_4885:chicken_2dinstall_2escm",(void*)f_4885},
{"f_4849:chicken_2dinstall_2escm",(void*)f_4849},
{"f_4806:chicken_2dinstall_2escm",(void*)f_4806},
{"f_4799:chicken_2dinstall_2escm",(void*)f_4799},
{"f6063:chicken_2dinstall_2escm",(void*)f6063},
{"f_2049:chicken_2dinstall_2escm",(void*)f_2049},
{"f_1699:chicken_2dinstall_2escm",(void*)f_1699},
{"f_2045:chicken_2dinstall_2escm",(void*)f_2045},
{"f_2012:chicken_2dinstall_2escm",(void*)f_2012},
{"f_2020:chicken_2dinstall_2escm",(void*)f_2020},
{"f_2030:chicken_2dinstall_2escm",(void*)f_2030},
{"f_1715:chicken_2dinstall_2escm",(void*)f_1715},
{"f_1719:chicken_2dinstall_2escm",(void*)f_1719},
{"f_1957:chicken_2dinstall_2escm",(void*)f_1957},
{"f_1986:chicken_2dinstall_2escm",(void*)f_1986},
{"f_1955:chicken_2dinstall_2escm",(void*)f_1955},
{"f_1909:chicken_2dinstall_2escm",(void*)f_1909},
{"f_1916:chicken_2dinstall_2escm",(void*)f_1916},
{"f_1907:chicken_2dinstall_2escm",(void*)f_1907},
{"f_1864:chicken_2dinstall_2escm",(void*)f_1864},
{"f_1893:chicken_2dinstall_2escm",(void*)f_1893},
{"f_1862:chicken_2dinstall_2escm",(void*)f_1862},
{"f_1818:chicken_2dinstall_2escm",(void*)f_1818},
{"f_1849:chicken_2dinstall_2escm",(void*)f_1849},
{"f_1822:chicken_2dinstall_2escm",(void*)f_1822},
{"f_1825:chicken_2dinstall_2escm",(void*)f_1825},
{"f_1836:chicken_2dinstall_2escm",(void*)f_1836},
{"f_1830:chicken_2dinstall_2escm",(void*)f_1830},
{"f_1816:chicken_2dinstall_2escm",(void*)f_1816},
{"f_1798:chicken_2dinstall_2escm",(void*)f_1798},
{"f_1750:chicken_2dinstall_2escm",(void*)f_1750},
{"f_1753:chicken_2dinstall_2escm",(void*)f_1753},
{"f_1756:chicken_2dinstall_2escm",(void*)f_1756},
{"f_1759:chicken_2dinstall_2escm",(void*)f_1759},
{"f_1762:chicken_2dinstall_2escm",(void*)f_1762},
{"f_1765:chicken_2dinstall_2escm",(void*)f_1765},
{"f_1768:chicken_2dinstall_2escm",(void*)f_1768},
{"f_1708:chicken_2dinstall_2escm",(void*)f_1708},
{"f_1701:chicken_2dinstall_2escm",(void*)f_1701},
{"f_4666:chicken_2dinstall_2escm",(void*)f_4666},
{"f_4701:chicken_2dinstall_2escm",(void*)f_4701},
{"f_4769:chicken_2dinstall_2escm",(void*)f_4769},
{"f_4733:chicken_2dinstall_2escm",(void*)f_4733},
{"f_4721:chicken_2dinstall_2escm",(void*)f_4721},
{"f_4731:chicken_2dinstall_2escm",(void*)f_4731},
{"f_4711:chicken_2dinstall_2escm",(void*)f_4711},
{"f_4669:chicken_2dinstall_2escm",(void*)f_4669},
{"f_4686:chicken_2dinstall_2escm",(void*)f_4686},
{"f_4672:chicken_2dinstall_2escm",(void*)f_4672},
{"f_4683:chicken_2dinstall_2escm",(void*)f_4683},
{"f_4679:chicken_2dinstall_2escm",(void*)f_4679},
{"f_3540:chicken_2dinstall_2escm",(void*)f_3540},
{"f_4003:chicken_2dinstall_2escm",(void*)f_4003},
{"f_3546:chicken_2dinstall_2escm",(void*)f_3546},
{"f_3552:chicken_2dinstall_2escm",(void*)f_3552},
{"f_3555:chicken_2dinstall_2escm",(void*)f_3555},
{"f_3966:chicken_2dinstall_2escm",(void*)f_3966},
{"f_3995:chicken_2dinstall_2escm",(void*)f_3995},
{"f_3915:chicken_2dinstall_2escm",(void*)f_3915},
{"f_3918:chicken_2dinstall_2escm",(void*)f_3918},
{"f_3929:chicken_2dinstall_2escm",(void*)f_3929},
{"f_3939:chicken_2dinstall_2escm",(void*)f_3939},
{"f_3556:chicken_2dinstall_2escm",(void*)f_3556},
{"f_3895:chicken_2dinstall_2escm",(void*)f_3895},
{"f_3887:chicken_2dinstall_2escm",(void*)f_3887},
{"f_3871:chicken_2dinstall_2escm",(void*)f_3871},
{"f_3874:chicken_2dinstall_2escm",(void*)f_3874},
{"f_3877:chicken_2dinstall_2escm",(void*)f_3877},
{"f_3563:chicken_2dinstall_2escm",(void*)f_3563},
{"f_3566:chicken_2dinstall_2escm",(void*)f_3566},
{"f_3569:chicken_2dinstall_2escm",(void*)f_3569},
{"f_3837:chicken_2dinstall_2escm",(void*)f_3837},
{"f_3848:chicken_2dinstall_2escm",(void*)f_3848},
{"f_3575:chicken_2dinstall_2escm",(void*)f_3575},
{"f_3826:chicken_2dinstall_2escm",(void*)f_3826},
{"f_3820:chicken_2dinstall_2escm",(void*)f_3820},
{"f_3813:chicken_2dinstall_2escm",(void*)f_3813},
{"f_3777:chicken_2dinstall_2escm",(void*)f_3777},
{"f_3786:chicken_2dinstall_2escm",(void*)f_3786},
{"f_3802:chicken_2dinstall_2escm",(void*)f_3802},
{"f_3796:chicken_2dinstall_2escm",(void*)f_3796},
{"f_3791:chicken_2dinstall_2escm",(void*)f_3791},
{"f_3576:chicken_2dinstall_2escm",(void*)f_3576},
{"f_3580:chicken_2dinstall_2escm",(void*)f_3580},
{"f_3594:chicken_2dinstall_2escm",(void*)f_3594},
{"f_3350:chicken_2dinstall_2escm",(void*)f_3350},
{"f_3358:chicken_2dinstall_2escm",(void*)f_3358},
{"f_3361:chicken_2dinstall_2escm",(void*)f_3361},
{"f_3364:chicken_2dinstall_2escm",(void*)f_3364},
{"f_3367:chicken_2dinstall_2escm",(void*)f_3367},
{"f_3370:chicken_2dinstall_2escm",(void*)f_3370},
{"f_3373:chicken_2dinstall_2escm",(void*)f_3373},
{"f_3376:chicken_2dinstall_2escm",(void*)f_3376},
{"f_3517:chicken_2dinstall_2escm",(void*)f_3517},
{"f_3396:chicken_2dinstall_2escm",(void*)f_3396},
{"f_3492:chicken_2dinstall_2escm",(void*)f_3492},
{"f_3495:chicken_2dinstall_2escm",(void*)f_3495},
{"f_3508:chicken_2dinstall_2escm",(void*)f_3508},
{"f_3498:chicken_2dinstall_2escm",(void*)f_3498},
{"f_3501:chicken_2dinstall_2escm",(void*)f_3501},
{"f_3399:chicken_2dinstall_2escm",(void*)f_3399},
{"f_3403:chicken_2dinstall_2escm",(void*)f_3403},
{"f_3473:chicken_2dinstall_2escm",(void*)f_3473},
{"f_3476:chicken_2dinstall_2escm",(void*)f_3476},
{"f_3489:chicken_2dinstall_2escm",(void*)f_3489},
{"f_3479:chicken_2dinstall_2escm",(void*)f_3479},
{"f_3482:chicken_2dinstall_2escm",(void*)f_3482},
{"f_3406:chicken_2dinstall_2escm",(void*)f_3406},
{"f_3458:chicken_2dinstall_2escm",(void*)f_3458},
{"f_3461:chicken_2dinstall_2escm",(void*)f_3461},
{"f_3464:chicken_2dinstall_2escm",(void*)f_3464},
{"f_3467:chicken_2dinstall_2escm",(void*)f_3467},
{"f_3410:chicken_2dinstall_2escm",(void*)f_3410},
{"f_3440:chicken_2dinstall_2escm",(void*)f_3440},
{"f_3443:chicken_2dinstall_2escm",(void*)f_3443},
{"f_3446:chicken_2dinstall_2escm",(void*)f_3446},
{"f_3449:chicken_2dinstall_2escm",(void*)f_3449},
{"f_3414:chicken_2dinstall_2escm",(void*)f_3414},
{"f_3426:chicken_2dinstall_2escm",(void*)f_3426},
{"f_3422:chicken_2dinstall_2escm",(void*)f_3422},
{"f_3598:chicken_2dinstall_2escm",(void*)f_3598},
{"f_3604:chicken_2dinstall_2escm",(void*)f_3604},
{"f_3721:chicken_2dinstall_2escm",(void*)f_3721},
{"f_3745:chicken_2dinstall_2escm",(void*)f_3745},
{"f_3757:chicken_2dinstall_2escm",(void*)f_3757},
{"f_3763:chicken_2dinstall_2escm",(void*)f_3763},
{"f_3751:chicken_2dinstall_2escm",(void*)f_3751},
{"f_3727:chicken_2dinstall_2escm",(void*)f_3727},
{"f_3733:chicken_2dinstall_2escm",(void*)f_3733},
{"f_3737:chicken_2dinstall_2escm",(void*)f_3737},
{"f_3740:chicken_2dinstall_2escm",(void*)f_3740},
{"f_3743:chicken_2dinstall_2escm",(void*)f_3743},
{"f_3716:chicken_2dinstall_2escm",(void*)f_3716},
{"f_3612:chicken_2dinstall_2escm",(void*)f_3612},
{"f_3704:chicken_2dinstall_2escm",(void*)f_3704},
{"f_3710:chicken_2dinstall_2escm",(void*)f_3710},
{"f_3618:chicken_2dinstall_2escm",(void*)f_3618},
{"f_3622:chicken_2dinstall_2escm",(void*)f_3622},
{"f_3643:chicken_2dinstall_2escm",(void*)f_3643},
{"f_3667:chicken_2dinstall_2escm",(void*)f_3667},
{"f_3679:chicken_2dinstall_2escm",(void*)f_3679},
{"f_3685:chicken_2dinstall_2escm",(void*)f_3685},
{"f_3673:chicken_2dinstall_2escm",(void*)f_3673},
{"f_3649:chicken_2dinstall_2escm",(void*)f_3649},
{"f_3655:chicken_2dinstall_2escm",(void*)f_3655},
{"f_3659:chicken_2dinstall_2escm",(void*)f_3659},
{"f_3662:chicken_2dinstall_2escm",(void*)f_3662},
{"f_3665:chicken_2dinstall_2escm",(void*)f_3665},
{"f_3638:chicken_2dinstall_2escm",(void*)f_3638},
{"f_3634:chicken_2dinstall_2escm",(void*)f_3634},
{"f_3623:chicken_2dinstall_2escm",(void*)f_3623},
{"f_3605:chicken_2dinstall_2escm",(void*)f_3605},
{"f_3581:chicken_2dinstall_2escm",(void*)f_3581},
{"f_3585:chicken_2dinstall_2escm",(void*)f_3585},
{"f_3588:chicken_2dinstall_2escm",(void*)f_3588},
{"f_4395:chicken_2dinstall_2escm",(void*)f_4395},
{"f_4391:chicken_2dinstall_2escm",(void*)f_4391},
{"f_4024:chicken_2dinstall_2escm",(void*)f_4024},
{"f_4027:chicken_2dinstall_2escm",(void*)f_4027},
{"f_4030:chicken_2dinstall_2escm",(void*)f_4030},
{"f_4033:chicken_2dinstall_2escm",(void*)f_4033},
{"f_4036:chicken_2dinstall_2escm",(void*)f_4036},
{"f_4384:chicken_2dinstall_2escm",(void*)f_4384},
{"f_4267:chicken_2dinstall_2escm",(void*)f_4267},
{"f_4361:chicken_2dinstall_2escm",(void*)f_4361},
{"f_4371:chicken_2dinstall_2escm",(void*)f_4371},
{"f_4269:chicken_2dinstall_2escm",(void*)f_4269},
{"f_4273:chicken_2dinstall_2escm",(void*)f_4273},
{"f_4281:chicken_2dinstall_2escm",(void*)f_4281},
{"f_4319:chicken_2dinstall_2escm",(void*)f_4319},
{"f_4343:chicken_2dinstall_2escm",(void*)f_4343},
{"f_4349:chicken_2dinstall_2escm",(void*)f_4349},
{"f_4325:chicken_2dinstall_2escm",(void*)f_4325},
{"f_4341:chicken_2dinstall_2escm",(void*)f_4341},
{"f_4337:chicken_2dinstall_2escm",(void*)f_4337},
{"f_4287:chicken_2dinstall_2escm",(void*)f_4287},
{"f_4293:chicken_2dinstall_2escm",(void*)f_4293},
{"f_4301:chicken_2dinstall_2escm",(void*)f_4301},
{"f_4305:chicken_2dinstall_2escm",(void*)f_4305},
{"f_4308:chicken_2dinstall_2escm",(void*)f_4308},
{"f_4311:chicken_2dinstall_2escm",(void*)f_4311},
{"f_4314:chicken_2dinstall_2escm",(void*)f_4314},
{"f_4317:chicken_2dinstall_2escm",(void*)f_4317},
{"f_4276:chicken_2dinstall_2escm",(void*)f_4276},
{"f_4262:chicken_2dinstall_2escm",(void*)f_4262},
{"f_4039:chicken_2dinstall_2escm",(void*)f_4039},
{"f_4042:chicken_2dinstall_2escm",(void*)f_4042},
{"f_4133:chicken_2dinstall_2escm",(void*)f_4133},
{"f_4140:chicken_2dinstall_2escm",(void*)f_4140},
{"f_4143:chicken_2dinstall_2escm",(void*)f_4143},
{"f_4154:chicken_2dinstall_2escm",(void*)f_4154},
{"f_4227:chicken_2dinstall_2escm",(void*)f_4227},
{"f_4174:chicken_2dinstall_2escm",(void*)f_4174},
{"f_4192:chicken_2dinstall_2escm",(void*)f_4192},
{"f_4190:chicken_2dinstall_2escm",(void*)f_4190},
{"f_4176:chicken_2dinstall_2escm",(void*)f_4176},
{"f_4160:chicken_2dinstall_2escm",(void*)f_4160},
{"f_4148:chicken_2dinstall_2escm",(void*)f_4148},
{"f_4109:chicken_2dinstall_2escm",(void*)f_4109},
{"f_4111:chicken_2dinstall_2escm",(void*)f_4111},
{"f_4119:chicken_2dinstall_2escm",(void*)f_4119},
{"f_4123:chicken_2dinstall_2escm",(void*)f_4123},
{"f_4045:chicken_2dinstall_2escm",(void*)f_4045},
{"f_4048:chicken_2dinstall_2escm",(void*)f_4048},
{"f_4067:chicken_2dinstall_2escm",(void*)f_4067},
{"f_4084:chicken_2dinstall_2escm",(void*)f_4084},
{"f_4073:chicken_2dinstall_2escm",(void*)f_4073},
{"f_4094:chicken_2dinstall_2escm",(void*)f_4094},
{"f_4051:chicken_2dinstall_2escm",(void*)f_4051},
{"f_4065:chicken_2dinstall_2escm",(void*)f_4065},
{"f_4061:chicken_2dinstall_2escm",(void*)f_4061},
{"f_4054:chicken_2dinstall_2escm",(void*)f_4054},
{"f_5670:chicken_2dinstall_2escm",(void*)f_5670},
{"f_5627:chicken_2dinstall_2escm",(void*)f_5627},
{"f_5633:chicken_2dinstall_2escm",(void*)f_5633},
{"f_5658:chicken_2dinstall_2escm",(void*)f_5658},
{"f_5637:chicken_2dinstall_2escm",(void*)f_5637},
{"f_5654:chicken_2dinstall_2escm",(void*)f_5654},
{"f_5640:chicken_2dinstall_2escm",(void*)f_5640},
{"f_5643:chicken_2dinstall_2escm",(void*)f_5643},
{"f_5610:chicken_2dinstall_2escm",(void*)f_5610},
{"f_5613:chicken_2dinstall_2escm",(void*)f_5613},
{"f_5619:chicken_2dinstall_2escm",(void*)f_5619},
{"f_5616:chicken_2dinstall_2escm",(void*)f_5616},
{"f_4592:chicken_2dinstall_2escm",(void*)f_4592},
{"f_4603:chicken_2dinstall_2escm",(void*)f_4603},
{"f_4606:chicken_2dinstall_2escm",(void*)f_4606},
{"f_4615:chicken_2dinstall_2escm",(void*)f_4615},
{"f_4623:chicken_2dinstall_2escm",(void*)f_4623},
{"f_4571:chicken_2dinstall_2escm",(void*)f_4571},
{"f_4575:chicken_2dinstall_2escm",(void*)f_4575},
{"f_4578:chicken_2dinstall_2escm",(void*)f_4578},
{"f_4549:chicken_2dinstall_2escm",(void*)f_4549},
{"f_4566:chicken_2dinstall_2escm",(void*)f_4566},
{"f_4553:chicken_2dinstall_2escm",(void*)f_4553},
{"f_4397:chicken_2dinstall_2escm",(void*)f_4397},
{"f_4472:chicken_2dinstall_2escm",(void*)f_4472},
{"f_4533:chicken_2dinstall_2escm",(void*)f_4533},
{"f_4539:chicken_2dinstall_2escm",(void*)f_4539},
{"f_4476:chicken_2dinstall_2escm",(void*)f_4476},
{"f_4492:chicken_2dinstall_2escm",(void*)f_4492},
{"f_4521:chicken_2dinstall_2escm",(void*)f_4521},
{"f_4470:chicken_2dinstall_2escm",(void*)f_4470},
{"f_4457:chicken_2dinstall_2escm",(void*)f_4457},
{"f_4463:chicken_2dinstall_2escm",(void*)f_4463},
{"f_4460:chicken_2dinstall_2escm",(void*)f_4460},
{"f_4434:chicken_2dinstall_2escm",(void*)f_4434},
{"f_4454:chicken_2dinstall_2escm",(void*)f_4454},
{"f_4450:chicken_2dinstall_2escm",(void*)f_4450},
{"f_4400:chicken_2dinstall_2escm",(void*)f_4400},
{"f_4414:chicken_2dinstall_2escm",(void*)f_4414},
{"f_4005:chicken_2dinstall_2escm",(void*)f_4005},
{"f_4012:chicken_2dinstall_2escm",(void*)f_4012},
{"f_2808:chicken_2dinstall_2escm",(void*)f_2808},
{"f_2812:chicken_2dinstall_2escm",(void*)f_2812},
{"f_3165:chicken_2dinstall_2escm",(void*)f_3165},
{"f_2850:chicken_2dinstall_2escm",(void*)f_2850},
{"f_2854:chicken_2dinstall_2escm",(void*)f_2854},
{"f_2857:chicken_2dinstall_2escm",(void*)f_2857},
{"f_2844:chicken_2dinstall_2escm",(void*)f_2844},
{"f_2120:chicken_2dinstall_2escm",(void*)f_2120},
{"f_2103:chicken_2dinstall_2escm",(void*)f_2103},
{"f_2110:chicken_2dinstall_2escm",(void*)f_2110},
{"f_2100:chicken_2dinstall_2escm",(void*)f_2100},
{"f_2642:chicken_2dinstall_2escm",(void*)f_2642},
{"f_2644:chicken_2dinstall_2escm",(void*)f_2644},
{"f_2712:chicken_2dinstall_2escm",(void*)f_2712},
{"f_2660:chicken_2dinstall_2escm",(void*)f_2660},
{"f_2698:chicken_2dinstall_2escm",(void*)f_2698},
{"f_2663:chicken_2dinstall_2escm",(void*)f_2663},
{"f_2674:chicken_2dinstall_2escm",(void*)f_2674},
{"f_2127:chicken_2dinstall_2escm",(void*)f_2127},
{"f_2668:chicken_2dinstall_2escm",(void*)f_2668},
{"f_2500:chicken_2dinstall_2escm",(void*)f_2500},
{"f_2593:chicken_2dinstall_2escm",(void*)f_2593},
{"f_2622:chicken_2dinstall_2escm",(void*)f_2622},
{"f_2628:chicken_2dinstall_2escm",(void*)f_2628},
{"f_2599:chicken_2dinstall_2escm",(void*)f_2599},
{"f_2607:chicken_2dinstall_2escm",(void*)f_2607},
{"f_2506:chicken_2dinstall_2escm",(void*)f_2506},
{"f_2512:chicken_2dinstall_2escm",(void*)f_2512},
{"f_2522:chicken_2dinstall_2escm",(void*)f_2522},
{"f_2534:chicken_2dinstall_2escm",(void*)f_2534},
{"f_2546:chicken_2dinstall_2escm",(void*)f_2546},
{"f_2549:chicken_2dinstall_2escm",(void*)f_2549},
{"f_2552:chicken_2dinstall_2escm",(void*)f_2552},
{"f_2537:chicken_2dinstall_2escm",(void*)f_2537},
{"f_2525:chicken_2dinstall_2escm",(void*)f_2525},
{"f_2495:chicken_2dinstall_2escm",(void*)f_2495},
{"f_2830:chicken_2dinstall_2escm",(void*)f_2830},
{"f_3175:chicken_2dinstall_2escm",(void*)f_3175},
{"f_2886:chicken_2dinstall_2escm",(void*)f_2886},
{"f_3142:chicken_2dinstall_2escm",(void*)f_3142},
{"f_2904:chicken_2dinstall_2escm",(void*)f_2904},
{"f_2910:chicken_2dinstall_2escm",(void*)f_2910},
{"f_3114:chicken_2dinstall_2escm",(void*)f_3114},
{"f_2913:chicken_2dinstall_2escm",(void*)f_2913},
{"f_2916:chicken_2dinstall_2escm",(void*)f_2916},
{"f_3213:chicken_2dinstall_2escm",(void*)f_3213},
{"f_3248:chicken_2dinstall_2escm",(void*)f_3248},
{"f_3303:chicken_2dinstall_2escm",(void*)f_3303},
{"f_3277:chicken_2dinstall_2escm",(void*)f_3277},
{"f_3261:chicken_2dinstall_2escm",(void*)f_3261},
{"f_3223:chicken_2dinstall_2escm",(void*)f_3223},
{"f_3191:chicken_2dinstall_2escm",(void*)f_3191},
{"f_2919:chicken_2dinstall_2escm",(void*)f_2919},
{"f_2922:chicken_2dinstall_2escm",(void*)f_2922},
{"f_2933:chicken_2dinstall_2escm",(void*)f_2933},
{"f_2938:chicken_2dinstall_2escm",(void*)f_2938},
{"f_3054:chicken_2dinstall_2escm",(void*)f_3054},
{"f_3062:chicken_2dinstall_2escm",(void*)f_3062},
{"f_3072:chicken_2dinstall_2escm",(void*)f_3072},
{"f_3060:chicken_2dinstall_2escm",(void*)f_3060},
{"f_3031:chicken_2dinstall_2escm",(void*)f_3031},
{"f_3024:chicken_2dinstall_2escm",(void*)f_3024},
{"f_2945:chicken_2dinstall_2escm",(void*)f_2945},
{"f_2769:chicken_2dinstall_2escm",(void*)f_2769},
{"f_2757:chicken_2dinstall_2escm",(void*)f_2757},
{"f_2798:chicken_2dinstall_2escm",(void*)f_2798},
{"f_2767:chicken_2dinstall_2escm",(void*)f_2767},
{"f_2725:chicken_2dinstall_2escm",(void*)f_2725},
{"f_3014:chicken_2dinstall_2escm",(void*)f_3014},
{"f_3018:chicken_2dinstall_2escm",(void*)f_3018},
{"f_2951:chicken_2dinstall_2escm",(void*)f_2951},
{"f_2954:chicken_2dinstall_2escm",(void*)f_2954},
{"f_3001:chicken_2dinstall_2escm",(void*)f_3001},
{"f_2957:chicken_2dinstall_2escm",(void*)f_2957},
{"f_2976:chicken_2dinstall_2escm",(void*)f_2976},
{"f_2962:chicken_2dinstall_2escm",(void*)f_2962},
{"f_2986:chicken_2dinstall_2escm",(void*)f_2986},
{"f_2971:chicken_2dinstall_2escm",(void*)f_2971},
{"f_2927:chicken_2dinstall_2escm",(void*)f_2927},
{"f_2279:chicken_2dinstall_2escm",(void*)f_2279},
{"f_2284:chicken_2dinstall_2escm",(void*)f_2284},
{"f_2340:chicken_2dinstall_2escm",(void*)f_2340},
{"f_2446:chicken_2dinstall_2escm",(void*)f_2446},
{"f_2343:chicken_2dinstall_2escm",(void*)f_2343},
{"f_2360:chicken_2dinstall_2escm",(void*)f_2360},
{"f_2435:chicken_2dinstall_2escm",(void*)f_2435},
{"f_2431:chicken_2dinstall_2escm",(void*)f_2431},
{"f_2420:chicken_2dinstall_2escm",(void*)f_2420},
{"f_2406:chicken_2dinstall_2escm",(void*)f_2406},
{"f_2373:chicken_2dinstall_2escm",(void*)f_2373},
{"f_2384:chicken_2dinstall_2escm",(void*)f_2384},
{"f_2388:chicken_2dinstall_2escm",(void*)f_2388},
{"f_2380:chicken_2dinstall_2escm",(void*)f_2380},
{"f_2327:chicken_2dinstall_2escm",(void*)f_2327},
{"f_2334:chicken_2dinstall_2escm",(void*)f_2334},
{"f_2298:chicken_2dinstall_2escm",(void*)f_2298},
{"f_2302:chicken_2dinstall_2escm",(void*)f_2302},
{"f_3152:chicken_2dinstall_2escm",(void*)f_3152},
{"f_2202:chicken_2dinstall_2escm",(void*)f_2202},
{"f_2252:chicken_2dinstall_2escm",(void*)f_2252},
{"f_2212:chicken_2dinstall_2escm",(void*)f_2212},
{"f_2218:chicken_2dinstall_2escm",(void*)f_2218},
{"f_2129:chicken_2dinstall_2escm",(void*)f_2129},
{"f_2051:chicken_2dinstall_2escm",(void*)f_2051},
{"f_2059:chicken_2dinstall_2escm",(void*)f_2059},
{"f_2066:chicken_2dinstall_2escm",(void*)f_2066},
{"f_1649:chicken_2dinstall_2escm",(void*)f_1649},
{"f_1653:chicken_2dinstall_2escm",(void*)f_1653},
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
