/* Generated from compiler-syntax.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: compiler-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file compiler-syntax.c
   unit: compiler_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[74];
static double C_possibly_force_alignment;


C_noret_decl(C_compiler_2dsyntax_toplevel)
C_externexport void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_802)
static void C_ccall f_802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_805)
static void C_ccall f_805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2780)
static void C_ccall f_2780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2309)
static void C_ccall f_2309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2316)
static void C_ccall f_2316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2325)
static void C_ccall f_2325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2328)
static void C_ccall f_2328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2331)
static void C_ccall f_2331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2768)
static void C_ccall f_2768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2343)
static void C_fcall f_2343(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2725)
static void C_fcall f_2725(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2754)
static void C_ccall f_2754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2672)
static void C_fcall f_2672(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2705)
static void C_ccall f_2705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2685)
static void C_fcall f_2685(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2623)
static void C_fcall f_2623(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2389)
static void C_ccall f_2389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2574)
static void C_fcall f_2574(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2587)
static void C_fcall f_2587(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2407)
static void C_ccall f_2407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2539)
static void C_fcall f_2539(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2537)
static void C_ccall f_2537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2492)
static void C_fcall f_2492(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2445)
static void C_fcall f_2445(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2443)
static void C_ccall f_2443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2527)
static C_word C_fcall f_2527(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2369)
static void C_ccall f_2369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_898)
static void C_ccall f_898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2307)
static void C_ccall f_2307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1766)
static void C_ccall f_1766(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1770)
static void C_ccall f_1770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1773)
static void C_ccall f_1773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1776)
static void C_ccall f_1776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1779)
static void C_ccall f_1779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1782)
static void C_ccall f_1782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1785)
static void C_ccall f_1785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1788)
static void C_ccall f_1788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1791)
static void C_ccall f_1791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1794)
static void C_ccall f_1794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1797)
static void C_ccall f_1797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1800)
static void C_ccall f_1800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1803)
static void C_ccall f_1803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1806)
static void C_ccall f_1806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1809)
static void C_ccall f_1809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2295)
static void C_ccall f_2295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1818)
static void C_fcall f_1818(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2252)
static void C_fcall f_2252(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1829)
static void C_ccall f_1829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2195)
static void C_fcall f_2195(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2228)
static void C_ccall f_2228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2208)
static void C_fcall f_2208(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2130)
static void C_fcall f_2130(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1864)
static void C_ccall f_1864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2081)
static void C_fcall f_2081(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2094)
static void C_fcall f_2094(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1882)
static void C_ccall f_1882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2046)
static void C_fcall f_2046(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2044)
static void C_ccall f_2044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1999)
static void C_fcall f_1999(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1997)
static void C_ccall f_1997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1928)
static void C_fcall f_1928(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1926)
static void C_ccall f_1926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2034)
static C_word C_fcall f_2034(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_1844)
static void C_ccall f_1844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_901)
static void C_ccall f_901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1725)
static void C_ccall f_1725(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1742)
static void C_ccall f_1742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_904)
static void C_ccall f_904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1723)
static void C_ccall f_1723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1719)
static void C_ccall f_1719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1715)
static void C_ccall f_1715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1711)
static void C_ccall f_1711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1703)
static void C_ccall f_1703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1611)
static void C_ccall f_1611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1614)
static void C_ccall f_1614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1624)
static void C_ccall f_1624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1648)
static void C_ccall f_1648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1636)
static void C_ccall f_1636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_907)
static void C_ccall f_907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1597)
static void C_ccall f_1597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1593)
static void C_ccall f_1593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1589)
static void C_ccall f_1589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1585)
static void C_ccall f_1585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1581)
static void C_ccall f_1581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1520)
static void C_ccall f_1520(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1530)
static void C_ccall f_1530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_910)
static void C_ccall f_910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1518)
static void C_ccall f_1518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1514)
static void C_ccall f_1514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1510)
static void C_ccall f_1510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1502)
static void C_ccall f_1502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1498)
static void C_ccall f_1498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1447)
static void C_ccall f_1447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1451)
static void C_ccall f_1451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_913)
static void C_ccall f_913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_915)
static void C_ccall f_915(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_921)
static void C_ccall f_921(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1429)
static void C_ccall f_1429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1425)
static void C_ccall f_1425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_943)
static void C_fcall f_943(C_word t0,C_word t1) C_noret;
C_noret_decl(f_946)
static void C_ccall f_946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1017)
static void C_ccall f_1017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1020)
static void C_ccall f_1020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1023)
static void C_ccall f_1023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1026)
static void C_ccall f_1026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1029)
static void C_ccall f_1029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1032)
static void C_ccall f_1032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1035)
static void C_ccall f_1035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1113)
static void C_fcall f_1113(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1166)
static void C_ccall f_1166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1362)
static void C_fcall f_1362(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1308)
static void C_ccall f_1308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1311)
static void C_ccall f_1311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1286)
static void C_ccall f_1286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1244)
static void C_ccall f_1244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1223)
static void C_ccall f_1223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1206)
static void C_ccall f_1206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1189)
static void C_ccall f_1189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1172)
static void C_ccall f_1172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1123)
static void C_ccall f_1123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1126)
static void C_ccall f_1126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1141)
static void C_ccall f_1141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1103)
static C_word C_fcall f_1103(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_1066)
static void C_fcall f_1066(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1097)
static void C_ccall f_1097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1047)
static void C_fcall f_1047(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1037)
static C_word C_fcall f_1037(C_word t0);
C_noret_decl(f_951)
static void C_fcall f_951(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_955)
static void C_ccall f_955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_968)
static void C_ccall f_968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_971)
static void C_ccall f_971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_974)
static void C_ccall f_974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_977)
static void C_ccall f_977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_980)
static void C_ccall f_980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_999)
static void C_ccall f_999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1002)
static void C_ccall f_1002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1005)
static void C_ccall f_1005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1008)
static void C_ccall f_1008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_996)
static void C_ccall f_996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_983)
static void C_ccall f_983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_986)
static void C_ccall f_986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_989)
static void C_ccall f_989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_992)
static void C_ccall f_992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_958)
static void C_ccall f_958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_822)
static void C_ccall f_822(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_822)
static void C_ccall f_822r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_826)
static void C_ccall f_826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_876)
static void C_ccall f_876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_845)
static void C_fcall f_845(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_855)
static void C_ccall f_855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_830)
static void C_fcall f_830(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_808)
static void C_ccall f_808(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_812)
static void C_ccall f_812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_816)
static void C_ccall f_816(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2343)
static void C_fcall trf_2343(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2343(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2343(t0,t1);}

C_noret_decl(trf_2725)
static void C_fcall trf_2725(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2725(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2725(t0,t1,t2);}

C_noret_decl(trf_2672)
static void C_fcall trf_2672(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2672(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2672(t0,t1,t2,t3);}

C_noret_decl(trf_2685)
static void C_fcall trf_2685(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2685(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2685(t0,t1);}

C_noret_decl(trf_2623)
static void C_fcall trf_2623(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2623(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2623(t0,t1,t2);}

C_noret_decl(trf_2574)
static void C_fcall trf_2574(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2574(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2574(t0,t1,t2,t3);}

C_noret_decl(trf_2587)
static void C_fcall trf_2587(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2587(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2587(t0,t1);}

C_noret_decl(trf_2539)
static void C_fcall trf_2539(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2539(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2539(t0,t1,t2);}

C_noret_decl(trf_2492)
static void C_fcall trf_2492(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2492(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2492(t0,t1,t2);}

C_noret_decl(trf_2445)
static void C_fcall trf_2445(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2445(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2445(t0,t1,t2);}

C_noret_decl(trf_1818)
static void C_fcall trf_1818(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1818(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1818(t0,t1);}

C_noret_decl(trf_2252)
static void C_fcall trf_2252(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2252(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2252(t0,t1,t2);}

C_noret_decl(trf_2195)
static void C_fcall trf_2195(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2195(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2195(t0,t1,t2,t3);}

C_noret_decl(trf_2208)
static void C_fcall trf_2208(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2208(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2208(t0,t1);}

C_noret_decl(trf_2130)
static void C_fcall trf_2130(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2130(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2130(t0,t1,t2);}

C_noret_decl(trf_2081)
static void C_fcall trf_2081(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2081(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2081(t0,t1,t2,t3);}

C_noret_decl(trf_2094)
static void C_fcall trf_2094(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2094(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2094(t0,t1);}

C_noret_decl(trf_2046)
static void C_fcall trf_2046(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2046(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2046(t0,t1,t2);}

C_noret_decl(trf_1999)
static void C_fcall trf_1999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1999(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1999(t0,t1,t2);}

C_noret_decl(trf_1928)
static void C_fcall trf_1928(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1928(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1928(t0,t1,t2);}

C_noret_decl(trf_943)
static void C_fcall trf_943(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_943(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_943(t0,t1);}

C_noret_decl(trf_1113)
static void C_fcall trf_1113(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1113(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1113(t0,t1,t2);}

C_noret_decl(trf_1362)
static void C_fcall trf_1362(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1362(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1362(t0,t1,t2);}

C_noret_decl(trf_1066)
static void C_fcall trf_1066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1066(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1066(t0,t1,t2);}

C_noret_decl(trf_1047)
static void C_fcall trf_1047(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1047(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1047(t0,t1);}

C_noret_decl(trf_951)
static void C_fcall trf_951(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_951(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_951(t0,t1,t2,t3,t4);}

C_noret_decl(trf_845)
static void C_fcall trf_845(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_845(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_845(t0,t1,t2);}

C_noret_decl(trf_830)
static void C_fcall trf_830(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_830(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_830(t0,t1,t2);}

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

C_noret_decl(tr8)
static void C_fcall tr8(C_proc8 k) C_regparm C_noret;
C_regparm static void C_fcall tr8(C_proc8 k){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
(k)(8,t0,t1,t2,t3,t4,t5,t6,t7);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_compiler_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("compiler_2dsyntax_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(834)){
C_save(t1);
C_rereclaim2(834*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,74);
lf[0]=C_h_intern(&lf[0],35,"\010compilercompiler-syntax-statistics");
lf[1]=C_h_intern(&lf[1],24,"\003syscompiler-syntax-hook");
lf[2]=C_h_intern(&lf[2],13,"alist-update!");
lf[3]=C_h_intern(&lf[3],9,"alist-ref");
lf[4]=C_h_intern(&lf[4],3,"eq\077");
lf[5]=C_h_intern(&lf[5],14,"\010compilerr-c-s");
lf[6]=C_h_intern(&lf[6],8,"\003sysput!");
lf[7]=C_h_intern(&lf[7],24,"\010compilercompiler-syntax");
lf[8]=C_h_intern(&lf[8],8,"for-each");
lf[9]=C_h_intern(&lf[9],18,"\003syser-transformer");
lf[10]=C_h_intern(&lf[10],9,"\003syserror");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[12]=C_h_intern(&lf[12],30,"\010compilercompile-format-string");
lf[13]=C_h_intern(&lf[13],17,"extended-bindings");
lf[14]=C_h_intern(&lf[14],7,"warning");
lf[15]=C_h_intern(&lf[15],17,"get-output-string");
lf[16]=C_h_intern(&lf[16],7,"fprintf");
lf[17]=C_h_intern(&lf[17],7,"display");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[19]=C_h_intern(&lf[19],19,"\003syswrite-char/port");
lf[20]=C_h_intern(&lf[20],18,"open-output-string");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[22]=C_h_intern(&lf[22],5,"write");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\024\047, in format string ");
lf[24]=C_h_intern(&lf[24],17,"\010compilerget-line");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000/too few arguments to formatted output procedure");
lf[26]=C_h_intern(&lf[26],20,"reverse-list->string");
lf[27]=C_h_intern(&lf[27],7,"reverse");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\0000too many arguments to formatted output procedure");
lf[29]=C_h_intern(&lf[29],16,"\003sysflush-output");
lf[30]=C_h_intern(&lf[30],9,"\003sysapply");
lf[31]=C_h_intern(&lf[31],10,"write-char");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000$illegal format-string character `~c\047");
lf[33]=C_h_intern(&lf[33],14,"number->string");
lf[34]=C_h_intern(&lf[34],3,"let");
lf[35]=C_h_intern(&lf[35],3,"out");
lf[36]=C_h_intern(&lf[36],5,"cadar");
lf[37]=C_h_intern(&lf[37],5,"quote");
lf[38]=C_h_intern(&lf[38],7,"call/cc");
lf[39]=C_h_intern(&lf[39],6,"printf");
lf[40]=C_h_intern(&lf[40],19,"\003sysstandard-output");
lf[41]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006printf\376\003\000\000\002\376\001\000\000\010#%printf\376\377\016");
lf[42]=C_h_intern(&lf[42],19,"\003sysprimitive-alias");
lf[43]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007fprintf\376\003\000\000\002\376\001\000\000\011#%fprintf\376\377\016");
lf[44]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007sprintf\376\003\000\000\002\376\001\000\000\011#%sprintf\376\377\016");
lf[45]=C_h_intern(&lf[45],7,"sprintf");
lf[46]=C_h_intern(&lf[46],6,"format");
lf[47]=C_h_intern(&lf[47],6,"gensym");
lf[48]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007sprintf\376\003\000\000\002\376\001\000\000\011#%sprintf\376\003\000\000\002\376\001\000\000\006format\376\003\000\000\002\376\001\000\000\010#%format\376\377\016");
lf[49]=C_h_intern(&lf[49],1,"o");
lf[50]=C_h_intern(&lf[50],10,"fold-right");
lf[51]=C_h_intern(&lf[51],4,"list");
lf[52]=C_h_intern(&lf[52],6,"lambda");
lf[53]=C_h_intern(&lf[53],3,"tmp");
lf[54]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\003#%o\376\377\016");
lf[55]=C_h_intern(&lf[55],3,"map");
lf[56]=C_h_intern(&lf[56],11,"\003syssetslot");
lf[57]=C_h_intern(&lf[57],8,"\004coreapp");
lf[58]=C_h_intern(&lf[58],10,"\003sysappend");
lf[59]=C_h_intern(&lf[59],8,"\003sysslot");
lf[60]=C_h_intern(&lf[60],14,"\003syscheck-list");
lf[61]=C_h_intern(&lf[61],10,"\004corecheck");
lf[62]=C_h_intern(&lf[62],17,"standard-bindings");
lf[63]=C_h_intern(&lf[63],7,"length+");
lf[64]=C_h_intern(&lf[64],5,"pair\077");
lf[65]=C_h_intern(&lf[65],3,"and");
lf[66]=C_h_intern(&lf[66],5,"begin");
lf[67]=C_h_intern(&lf[67],4,"set!");
lf[68]=C_h_intern(&lf[68],4,"cons");
lf[69]=C_h_intern(&lf[69],8,"map-loop");
lf[70]=C_h_intern(&lf[70],2,"if");
lf[71]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003map\376\003\000\000\002\376\001\000\000\007\003sysmap\376\003\000\000\002\376\001\000\000\005#%map\376\377\016");
lf[72]=C_h_intern(&lf[72],13,"for-each-loop");
lf[73]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\014\003sysfor-each\376\003\000\000\002\376\001\000\000\012#%for-each\376\377\016");
C_register_lf2(lf,74,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_802,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k800 */
static void C_ccall f_802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_802,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_805,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k803 in k800 */
static void C_ccall f_805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_805,2,t0,t1);}
t2=C_set_block_item(lf[0] /* compiler-syntax-statistics */,0,C_SCHEME_END_OF_LIST);
t3=C_mutate((C_word*)lf[1]+1 /* (set! ##sys#compiler-syntax-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_808,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[5]+1 /* (set! ##compiler#r-c-s ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_822,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_898,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2309,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2780,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* ##sys#primitive-alias */
t8=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[64]);}

/* k2778 in k803 in k800 */
static void C_ccall f_2780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2780,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[64],t1);
t3=C_a_i_list(&a,1,t2);
/* ##compiler#r-c-s */
t4=*((C_word*)lf[5]+1);
f_822(5,t4,((C_word*)t0)[3],lf[73],((C_word*)t0)[2],t3);}

/* a2308 in k803 in k800 */
static void C_ccall f_2309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2309,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2313,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:61: r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[34]);}

/* k2311 in a2308 in k803 in k800 */
static void C_ccall f_2313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2313,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2316,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:62: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[70]);}

/* k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2319,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:63: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[72]);}

/* k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2319,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:64: gensym */
t3=*((C_word*)lf[47]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2322,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:65: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[66]);}

/* k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2325,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2328,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:66: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[65]);}

/* k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2328,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2331,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:67: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2331,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2334,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:68: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[52]);}

/* k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2334,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[10]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_memq(lf[8],*((C_word*)lf[62]+1)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2768,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:71: length+ */
t5=*((C_word*)lf[63]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[10]);}
else{
t4=t3;
f_2343(t4,C_SCHEME_FALSE);}}

/* k2766 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2343(t2,C_i_greaterp(t1,C_fix(2)));}

/* k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_fcall f_2343(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2343,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(((C_word*)t0)[11],lf[55]);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2725,a[2]=t3,a[3]=t9,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_2725(t11,t7,((C_word*)t0)[11]);}
else{
t2=((C_word*)t0)[10];
t3=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* map-loop122 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_fcall f_2725(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2725,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2754,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_list(&a,1,t4);
/* compiler-syntax.scm:72: gensym */
t6=*((C_word*)lf[47]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2752 in map-loop122 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2754(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2754,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2725(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2725(t6,((C_word*)t0)[3],t5);}}

/* k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2354(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2354,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[11]);
t3=C_a_i_list(&a,2,((C_word*)t0)[10],t2);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=*((C_word*)lf[51]+1);
t9=C_i_check_list_2(t1,lf[55]);
t10=C_i_check_list_2(((C_word*)t0)[9],lf[55]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2670,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=t3,tmp=(C_word)a,a+=12,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2672,a[2]=t8,a[3]=t5,a[4]=t13,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_2672(t15,t11,t1,((C_word*)t0)[9]);}

/* map-loop152 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_fcall f_2672(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2672,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2705,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g158168 */
t9=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2703 in map-loop152 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2705,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2685,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_2685(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_2685(t5,t4);}}

/* k2683 in k2703 in map-loop152 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_fcall f_2685(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_2672(t5,((C_word*)t0)[2],t3,t4);}

/* k2668 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2670(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2670,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[11],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2369,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_check_list_2(((C_word*)t0)[8],lf[55]);
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2389,a[2]=t3,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2623,a[2]=t5,a[3]=t11,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_2623(t13,t9,((C_word*)t0)[8]);}

/* map-loop183 in k2668 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_fcall f_2623(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(24);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2623,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[37],lf[8]);
t5=C_a_i_list(&a,3,lf[60],t3,t4);
t6=C_a_i_list(&a,2,lf[61],t5);
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

/* k2387 in k2668 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2389(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2389,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[51]+1);
t7=C_i_check_list_2(((C_word*)t0)[10],lf[55]);
t8=C_i_check_list_2(((C_word*)t0)[10],lf[55]);
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2407,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2574,a[2]=t6,a[3]=t3,a[4]=t11,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_2574(t13,t9,((C_word*)t0)[10],((C_word*)t0)[10]);}

/* map-loop213 in k2387 in k2668 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_fcall f_2574(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2574,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2607,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g219229 */
t9=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2605 in map-loop213 in k2387 in k2668 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2607,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2587,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_2587(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_2587(t5,t4);}}

/* k2585 in k2605 in map-loop213 in k2387 in k2668 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_fcall f_2587(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_2574(t5,((C_word*)t0)[2],t3,t4);}

/* k2405 in k2387 in k2668 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2407(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2407,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2527,a[2]=((C_word*)t0)[11],tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_list_2(((C_word*)t0)[10],lf[55]);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2539,a[2]=t3,a[3]=t10,a[4]=t5,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2539(t12,t8,((C_word*)t0)[10]);}

/* map-loop244 in k2405 in k2387 in k2668 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_fcall f_2539(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2539,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_2527(C_a_i(&a,6),((C_word*)t0)[5],t3);
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

/* k2535 in k2405 in k2387 in k2668 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2537(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2537,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[11],t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[10],lf[55]);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2492,a[2]=t4,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_2492(t12,t8,((C_word*)t0)[10]);}

/* map-loop274 in k2535 in k2405 in k2387 in k2668 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_fcall f_2492(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2492,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[59],t3,C_fix(0));
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

/* k2488 in k2535 in k2405 in k2387 in k2668 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2490(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2490,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[11],t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[10],lf[55]);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2445,a[2]=t4,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_2445(t12,t8,((C_word*)t0)[10]);}

/* map-loop304 in k2488 in k2535 in k2405 in k2387 in k2668 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_fcall f_2445(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2445,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[59],t3,C_fix(1));
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

/* k2441 in k2488 in k2535 in k2405 in k2387 in k2668 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2443,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[10],t1);
t3=C_a_i_cons(&a,2,lf[57],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[9],((C_word*)t0)[8],t3);
t5=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[6],t4);
t6=C_a_i_list(&a,4,((C_word*)t0)[5],((C_word*)t0)[10],((C_word*)t0)[4],t5);
t7=C_a_i_list(&a,1,t6);
/* ##sys#append */
t8=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,((C_word*)t0)[3],((C_word*)t0)[2],t7);}

/* g250 in k2405 in k2387 in k2668 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static C_word C_fcall f_2527(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_check;
return(C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k2367 in k2668 in k2352 in k2341 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in a2308 in k803 in k800 */
static void C_ccall f_2369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2369,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k896 in k803 in k800 */
static void C_ccall f_898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_898,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_901,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1766,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2307,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#primitive-alias */
t5=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[64]);}

/* k2305 in k896 in k803 in k800 */
static void C_ccall f_2307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2307,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[64],t1);
t3=C_a_i_list(&a,1,t2);
/* ##compiler#r-c-s */
t4=*((C_word*)lf[5]+1);
f_822(5,t4,((C_word*)t0)[3],lf[71],((C_word*)t0)[2],t3);}

/* a1765 in k896 in k803 in k800 */
static void C_ccall f_1766(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1766,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1770,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:90: r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[34]);}

/* k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1770,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1773,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:91: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[70]);}

/* k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1773,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1776,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:92: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[69]);}

/* k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1776,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1779,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:93: gensym */
t3=*((C_word*)lf[47]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1779,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:94: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[68]);}

/* k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:95: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[67]);}

/* k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1785,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1788,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:96: gensym */
t3=*((C_word*)lf[47]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1788,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1791,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:97: gensym */
t3=*((C_word*)lf[47]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1791,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1794,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler-syntax.scm:98: gensym */
t3=*((C_word*)lf[47]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1794,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* compiler-syntax.scm:99: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[37]);}

/* k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1797,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1800,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t1,a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:100: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[66]);}

/* k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:101: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[52]);}

/* k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:102: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[65]);}

/* k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1806,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1809,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:103: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1809,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[14]);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1818,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=t2,tmp=(C_word)a,a+=17,tmp);
if(C_truep(C_i_memq(lf[55],*((C_word*)lf[62]+1)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2295,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:106: length+ */
t5=*((C_word*)lf[63]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[14]);}
else{
t4=t3;
f_1818(t4,C_SCHEME_FALSE);}}

/* k2293 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_2295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1818(t2,C_i_greaterp(t1,C_fix(2)));}

/* k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_fcall f_1818(C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1818,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(((C_word*)t0)[16],lf[55]);
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1829,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[16],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2252,a[2]=t3,a[3]=t9,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_2252(t11,t7,((C_word*)t0)[16]);}
else{
t2=((C_word*)t0)[12];
t3=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* map-loop362 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_fcall f_2252(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2252,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2281,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_list(&a,1,t4);
/* compiler-syntax.scm:107: gensym */
t6=*((C_word*)lf[47]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2279 in map-loop362 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_2281(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2281,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2252(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2252(t6,((C_word*)t0)[3],t5);}}

/* k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
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
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word ab[55],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1829,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[16],C_SCHEME_END_OF_LIST);
t3=C_a_i_list(&a,2,((C_word*)t0)[15],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[14],C_SCHEME_FALSE);
t5=C_i_cadr(((C_word*)t0)[13]);
t6=C_a_i_list(&a,2,((C_word*)t0)[12],t5);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=*((C_word*)lf[51]+1);
t12=C_i_check_list_2(t1,lf[55]);
t13=C_i_check_list_2(((C_word*)t0)[11],lf[55]);
t14=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[16],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=t1,a[14]=((C_word*)t0)[9],a[15]=((C_word*)t0)[10],a[16]=t3,a[17]=t4,a[18]=t6,tmp=(C_word)a,a+=19,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2195,a[2]=t11,a[3]=t8,a[4]=t16,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_2195(t18,t14,t1,((C_word*)t0)[11]);}

/* map-loop392 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_fcall f_2195(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2195,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2228,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g398408 */
t9=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2226 in map-loop392 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_2228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2228,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2208,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_2208(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_2208(t5,t4);}}

/* k2206 in k2226 in map-loop392 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_fcall f_2208(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_2195(t5,((C_word*)t0)[2],t3,t4);}

/* k2191 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_2193(C_word c,C_word t0,C_word t1){
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
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2193,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[18],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[17],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[16],t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1844,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[15],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_i_check_list_2(((C_word*)t0)[13],lf[55]);
t11=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1864,a[2]=t5,a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],tmp=(C_word)a,a+=16,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2130,a[2]=t7,a[3]=t13,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_2130(t15,t11,((C_word*)t0)[13]);}

/* map-loop423 in k2191 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_fcall f_2130(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(24);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2130,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[37],lf[55]);
t5=C_a_i_list(&a,3,lf[60],t3,t4);
t6=C_a_i_list(&a,2,lf[61],t5);
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

/* k1862 in k2191 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1864(C_word c,C_word t0,C_word t1){
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
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1864,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[51]+1);
t7=C_i_check_list_2(((C_word*)t0)[15],lf[55]);
t8=C_i_check_list_2(((C_word*)t0)[15],lf[55]);
t9=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1882,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[14],tmp=(C_word)a,a+=17,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2081,a[2]=t6,a[3]=t3,a[4]=t11,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_2081(t13,t9,((C_word*)t0)[15],((C_word*)t0)[15]);}

/* map-loop453 in k1862 in k2191 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_fcall f_2081(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2081,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2114,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g459469 */
t9=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2112 in map-loop453 in k1862 in k2191 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_2114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2114,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2094,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_2094(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_2094(t5,t4);}}

/* k2092 in k2112 in map-loop453 in k1862 in k2191 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_fcall f_2094(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_2081(t5,((C_word*)t0)[2],t3,t4);}

/* k1880 in k1862 in k2191 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1882(C_word c,C_word t0,C_word t1){
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
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1882,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2034,a[2]=((C_word*)t0)[16],tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_list_2(((C_word*)t0)[15],lf[55]);
t8=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[14],tmp=(C_word)a,a+=17,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2046,a[2]=t3,a[3]=t10,a[4]=t5,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2046(t12,t8,((C_word*)t0)[15]);}

/* map-loop484 in k1880 in k1862 in k2191 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_fcall f_2046(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2046,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_2034(C_a_i(&a,6),((C_word*)t0)[5],t3);
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

/* k2042 in k1880 in k1862 in k2191 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_2044(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2044,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[16],t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[15],lf[55]);
t8=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1997,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[15],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],tmp=(C_word)a,a+=17,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1999,a[2]=t4,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1999(t12,t8,((C_word*)t0)[15]);}

/* map-loop514 in k2042 in k1880 in k1862 in k2191 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_fcall f_1999(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1999,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[59],t3,C_fix(0));
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

/* k1995 in k2042 in k1880 in k1862 in k2191 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1997(C_word c,C_word t0,C_word t1){
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
C_word ab[93],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1997,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[16],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[15],C_SCHEME_END_OF_LIST);
t4=C_a_i_list(&a,3,((C_word*)t0)[14],t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[13],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_list(&a,4,lf[56],((C_word*)t0)[12],C_fix(1),((C_word*)t0)[13]);
t8=C_a_i_list(&a,3,((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[13]);
t9=C_a_i_list(&a,4,((C_word*)t0)[9],((C_word*)t0)[12],t7,t8);
t10=C_a_i_list(&a,3,((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[13]);
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_i_check_list_2(((C_word*)t0)[8],lf[55]);
t16=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[9],a[8]=t10,a[9]=t9,a[10]=t6,a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],tmp=(C_word)a,a+=13,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1928,a[2]=t12,a[3]=t18,a[4]=t14,tmp=(C_word)a,a+=5,tmp));
t20=((C_word*)t18)[1];
f_1928(t20,t16,((C_word*)t0)[8]);}

/* map-loop544 in k1995 in k2042 in k1880 in k1862 in k2191 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_fcall f_1928(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1928,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[59],t3,C_fix(1));
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

/* k1924 in k1995 in k2042 in k1880 in k1862 in k2191 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[48],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1926,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[12],t1);
t3=C_a_i_cons(&a,2,lf[57],t2);
t4=C_a_i_list(&a,5,((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8],t3);
t5=C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[6],t4,((C_word*)t0)[5]);
t6=C_a_i_list(&a,4,((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[4],t5);
t7=C_a_i_list(&a,1,t6);
/* ##sys#append */
t8=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,((C_word*)t0)[3],((C_word*)t0)[2],t7);}

/* g490 in k1880 in k1862 in k2191 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static C_word C_fcall f_2034(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_check;
return(C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k1842 in k2191 in k1827 in k1816 in k1807 in k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1786 in k1783 in k1780 in k1777 in k1774 in k1771 in k1768 in a1765 in k896 in k803 in k800 */
static void C_ccall f_1844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1844,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k899 in k896 in k803 in k800 */
static void C_ccall f_901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_904,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1725,tmp=(C_word)a,a+=2,tmp);
/* ##compiler#r-c-s */
t4=*((C_word*)lf[5]+1);
f_822(5,t4,t2,lf[54],t3,C_SCHEME_END_OF_LIST);}

/* a1724 in k899 in k896 in k803 in k800 */
static void C_ccall f_1725(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1725,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
t6=C_fixnum_greaterp(t5,C_fix(1));
t7=(C_truep(t6)?C_i_memq(lf[49],*((C_word*)lf[13]+1)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1735,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:135: r */
t9=t3;
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[53]);}
else{
t8=t2;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* k1733 in a1724 in k899 in k896 in k803 in k800 */
static void C_ccall f_1735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1735,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1742,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:136: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[52]);}

/* k1740 in k1733 in a1724 in k899 in k896 in k803 in k800 */
static void C_ccall f_1742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1742,2,t0,t1);}
t2=C_a_i_list(&a,1,((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1750,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_cdr(((C_word*)t0)[2]);
/* compiler-syntax.scm:136: fold-right */
t5=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,*((C_word*)lf[51]+1),((C_word*)t0)[4],t4);}

/* k1748 in k1740 in k1733 in a1724 in k899 in k896 in k803 in k800 */
static void C_ccall f_1750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1750,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_904,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_907,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1607,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1723,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#primitive-alias */
t5=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[17]);}

/* k1721 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1723,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[17],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[22]);}

/* k1717 in k1721 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1719,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[22],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1715,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[16]);}

/* k1713 in k1717 in k1721 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1715,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[16],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[33]);}

/* k1709 in k1713 in k1717 in k1721 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1711,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[33],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[31]);}

/* k1705 in k1709 in k1713 in k1717 in k1721 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1707,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[31],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1703,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[20]);}

/* k1701 in k1705 in k1709 in k1713 in k1717 in k1721 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1703,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[20],t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1699,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[15]);}

/* k1697 in k1701 in k1705 in k1709 in k1713 in k1717 in k1721 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1699,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[15],t1);
t3=C_a_i_list(&a,7,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],t2);
/* ##compiler#r-c-s */
t4=*((C_word*)lf[5]+1);
f_822(5,t4,((C_word*)t0)[3],lf[48],((C_word*)t0)[2],t3);}

/* a1606 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1607(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1607,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1611,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:141: gensym */
t6=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[35]);}

/* k1609 in a1606 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1611,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1614,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[3]);
t4=C_i_memq(t3,lf[44]);
t5=(C_truep(t4)?lf[45]:lf[46]);
t6=C_i_cdr(((C_word*)t0)[3]);
/* compiler-syntax.scm:142: compile-format-string */
t7=*((C_word*)lf[12]+1);
f_915(8,t7,t2,t5,t1,((C_word*)t0)[3],t6,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* k1612 in k1609 in a1606 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1614,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1624,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:151: r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[34]);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1622 in k1612 in k1609 in a1606 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:151: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[20]);}

/* k1646 in k1622 in k1612 in k1609 in a1606 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1648,2,t0,t1);}
t2=C_a_i_list(&a,1,t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[6],t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1636,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:153: r */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[15]);}

/* k1634 in k1646 in k1622 in k1612 in k1609 in a1606 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1636,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[6]);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,4,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2));}

/* k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_907,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_910,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1520,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1605,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#primitive-alias */
t5=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[17]);}

/* k1603 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1605,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[17],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1601,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[22]);}

/* k1599 in k1603 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1601,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[22],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[16]);}

/* k1595 in k1599 in k1603 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1597,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[16],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[33]);}

/* k1591 in k1595 in k1599 in k1603 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1593,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[33],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[31]);}

/* k1587 in k1591 in k1595 in k1599 in k1603 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1589,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[31],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[20]);}

/* k1583 in k1587 in k1591 in k1595 in k1599 in k1603 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1585,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[20],t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[15]);}

/* k1579 in k1583 in k1587 in k1591 in k1595 in k1599 in k1603 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1581,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[15],t1);
t3=C_a_i_list(&a,7,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],t2);
/* ##compiler#r-c-s */
t4=*((C_word*)lf[5]+1);
f_822(5,t4,((C_word*)t0)[3],lf[43],((C_word*)t0)[2],t3);}

/* a1519 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1520(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1520,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
if(C_truep(C_i_greater_or_equalp(t5,C_fix(3)))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1530,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(t2);
t8=C_i_cddr(t2);
/* compiler-syntax.scm:159: compile-format-string */
t9=*((C_word*)lf[12]+1);
f_915(8,t9,t6,lf[16],t7,t2,t8,t3,t4);}
else{
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k1528 in a1519 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[2]));}

/* k908 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_910,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_913,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1447,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1518,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#primitive-alias */
t5=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[17]);}

/* k1516 in k908 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1518,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[17],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[22]);}

/* k1512 in k1516 in k908 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1514,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[22],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[16]);}

/* k1508 in k1512 in k1516 in k908 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1510,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[16],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[33]);}

/* k1504 in k1508 in k1512 in k1516 in k908 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1506,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[33],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1502,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[31]);}

/* k1500 in k1504 in k1508 in k1512 in k1516 in k908 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1502,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[31],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[20]);}

/* k1496 in k1500 in k1504 in k1508 in k1512 in k1516 in k908 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1498,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[20],t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* ##sys#primitive-alias */
t4=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[15]);}

/* k1492 in k1496 in k1500 in k1504 in k1508 in k1512 in k1516 in k908 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1494,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[15],t1);
t3=C_a_i_list(&a,7,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],t2);
/* ##compiler#r-c-s */
t4=*((C_word*)lf[5]+1);
f_822(5,t4,((C_word*)t0)[3],lf[41],((C_word*)t0)[2],t3);}

/* a1446 in k908 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1447,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1451,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(t2);
/* compiler-syntax.scm:168: compile-format-string */
t7=*((C_word*)lf[12]+1);
f_915(8,t7,t5,lf[39],lf[40],t2,t6,t3,t4);}

/* k1449 in a1446 in k908 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_1451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k911 in k908 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_913,2,t0,t1);}
t2=C_mutate((C_word*)lf[12]+1 /* (set! ##compiler#compile-format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_915,tmp=(C_word)a,a+=2,tmp));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* f_915 in k911 in k908 in k905 in k902 in k899 in k896 in k803 in k800 */
static void C_ccall f_915(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_915,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_921,a[2]=t7,a[3]=t6,a[4]=t3,a[5]=t4,a[6]=t2,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:175: call/cc */
t9=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t1,t8);}

/* a920 */
static void C_ccall f_921(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_921,3,t0,t1,t2);}
t3=C_i_length(((C_word*)t0)[7]);
if(C_truep(C_i_greater_or_equalp(t3,C_fix(1)))){
if(C_truep(C_i_memq(((C_word*)t0)[6],*((C_word*)lf[13]+1)))){
t4=C_i_car(((C_word*)t0)[7]);
t5=C_i_stringp(t4);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_943,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t5)){
t7=t6;
f_943(t7,t5);}
else{
t7=C_i_car(((C_word*)t0)[7]);
if(C_truep(C_i_listp(t7))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1418,a[2]=((C_word*)t0)[7],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1429,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:181: r */
t10=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,lf[37]);}
else{
t8=t6;
f_943(t8,C_SCHEME_FALSE);}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k1427 in a920 */
static void C_ccall f_1429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_caar(((C_word*)t0)[4]);
/* compiler-syntax.scm:181: c */
t3=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* k1416 in a920 */
static void C_ccall f_1418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1418,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1425,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:182: cadar */
t3=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_943(t2,C_SCHEME_FALSE);}}

/* k1423 in k1416 in a920 */
static void C_ccall f_1425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_943(t2,C_i_stringp(t1));}

/* k941 in a920 */
static void C_fcall f_943(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_943,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_i_car(((C_word*)t0)[8]);
if(C_truep(C_i_stringp(t3))){
t4=t2;
f_946(2,t4,C_i_car(((C_word*)t0)[8]));}
else{
/* compiler-syntax.scm:183: cadar */
t4=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,((C_word*)t0)[8]);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k944 in k941 in a920 */
static void C_ccall f_946(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_946,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[8]);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_951,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fix(0);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_i_string_length(t1);
t11=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t10,a[6]=t7,a[7]=t5,a[8]=t4,a[9]=t9,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:196: r */
t12=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,lf[17]);}

/* k1015 in k944 in k941 in a920 */
static void C_ccall f_1017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:197: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

/* k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1020,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler-syntax.scm:198: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[31]);}

/* k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1023,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1026,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* compiler-syntax.scm:199: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[35]);}

/* k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1026,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:200: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[16]);}

/* k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1029,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* compiler-syntax.scm:201: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[34]);}

/* k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1032,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1035,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* compiler-syntax.scm:202: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[33]);}

/* k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1035(C_word c,C_word t0,C_word t1){
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
C_word ab[47],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1035,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1037,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[15],tmp=(C_word)a,a+=4,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1047,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],tmp=(C_word)a,a+=4,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1066,a[2]=((C_word*)t0)[9],a[3]=t9,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1103,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp));
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_1113,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[9],a[6]=t5,a[7]=t9,a[8]=((C_word*)t0)[4],a[9]=t15,a[10]=t3,a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t7,a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[5],a[16]=((C_word*)t0)[6],a[17]=((C_word*)t0)[10],a[18]=((C_word*)t0)[7],a[19]=((C_word*)t0)[14],tmp=(C_word)a,a+=20,tmp));
t17=((C_word*)t15)[1];
f_1113(t17,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* loop in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_fcall f_1113(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(16);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1113,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greater_or_equalp(((C_word*)((C_word*)t0)[19])[1],((C_word*)t0)[18]))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1123,a[2]=t2,a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=t1,a[7]=((C_word*)t0)[16],a[8]=((C_word*)t0)[17],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[12])[1]))){
t4=t3;
f_1123(2,t4,C_SCHEME_UNDEFINED);}
else{
/* compiler-syntax.scm:224: fail */
t4=((C_word*)t0)[11];
f_951(t4,t3,C_SCHEME_FALSE,lf[28],C_SCHEME_END_OF_LIST);}}
else{
t3=f_1037(((C_word*)((C_word*)t0)[10])[1]);
t4=C_eqp(t3,C_make_character(126));
if(C_truep(t4)){
t5=f_1037(((C_word*)((C_word*)t0)[10])[1]);
t6=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1166,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[19],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[17],a[12]=((C_word*)t0)[8],a[13]=t1,a[14]=((C_word*)t0)[9],a[15]=t5,tmp=(C_word)a,a+=16,tmp);
/* compiler-syntax.scm:232: endchunk */
t7=((C_word*)((C_word*)t0)[13])[1];
f_1066(t7,t6,t2);}
else{
t5=C_a_i_cons(&a,2,t3,t2);
/* compiler-syntax.scm:255: loop */
t10=t1;
t11=t5;
t1=t10;
t2=t11;
goto loop;}}}

/* k1164 in loop in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1166(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1166,2,t0,t1);}
t2=C_u_i_char_upcase(((C_word*)t0)[15]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1172,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[14],tmp=(C_word)a,a+=4,tmp);
switch(t2){
case C_make_character(83):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1189,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:234: next */
t5=((C_word*)((C_word*)t0)[9])[1];
f_1047(t5,t4);
case C_make_character(65):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1206,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:235: next */
t5=((C_word*)((C_word*)t0)[9])[1];
f_1047(t5,t4);
case C_make_character(67):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1223,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:236: next */
t5=((C_word*)((C_word*)t0)[9])[1];
f_1047(t5,t4);
case C_make_character(66):
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1244,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:237: next */
t5=((C_word*)((C_word*)t0)[9])[1];
f_1047(t5,t4);
case C_make_character(79):
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1265,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:238: next */
t5=((C_word*)((C_word*)t0)[9])[1];
f_1047(t5,t4);
case C_make_character(88):
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1286,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:239: next */
t5=((C_word*)((C_word*)t0)[9])[1];
f_1047(t5,t4);
case C_make_character(33):
t4=C_a_i_list(&a,2,lf[29],((C_word*)t0)[11]);
t5=f_1103(C_a_i(&a,3),((C_word*)((C_word*)t0)[10])[1],t4);
/* compiler-syntax.scm:254: loop */
t6=((C_word*)((C_word*)t0)[14])[1];
f_1113(t6,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
case C_make_character(63):
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1308,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:242: next */
t5=((C_word*)((C_word*)t0)[9])[1];
f_1047(t5,t4);
case C_make_character(126):
t4=C_a_i_list(&a,3,*((C_word*)lf[31]+1),C_make_character(126),((C_word*)t0)[11]);
t5=f_1103(C_a_i(&a,3),((C_word*)((C_word*)t0)[10])[1],t4);
/* compiler-syntax.scm:254: loop */
t6=((C_word*)((C_word*)t0)[14])[1];
f_1113(t6,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
default:
t4=C_eqp(t2,C_make_character(37));
t5=(C_truep(t4)?t4:C_eqp(t2,C_make_character(78)));
if(C_truep(t5)){
t6=C_a_i_list(&a,3,((C_word*)t0)[7],C_make_character(10),((C_word*)t0)[11]);
t7=f_1103(C_a_i(&a,3),((C_word*)((C_word*)t0)[10])[1],t6);
/* compiler-syntax.scm:254: loop */
t8=((C_word*)((C_word*)t0)[14])[1];
f_1113(t8,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_u_i_char_whitespacep(((C_word*)t0)[15]))){
t6=f_1037(((C_word*)((C_word*)t0)[4])[1]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1362,a[2]=((C_word*)t0)[3],a[3]=t8,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1362(t10,t3,t6);}
else{
/* compiler-syntax.scm:253: fail */
t6=((C_word*)t0)[2];
f_951(t6,t3,C_SCHEME_TRUE,lf[32],C_a_i_list(&a,1,((C_word*)t0)[15]));}}}}

/* skip in k1164 in loop in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_fcall f_1362(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1362,NULL,3,t0,t1,t2);}
if(C_truep(C_u_i_char_whitespacep(t2))){
t3=f_1037(((C_word*)((C_word*)t0)[4])[1]);
/* compiler-syntax.scm:251: skip */
t7=t1;
t8=t3;
t1=t7;
t2=t8;
goto loop;}
else{
t3=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1306 in k1164 in loop in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1308,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1311,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:243: next */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1047(t3,t2);}

/* k1309 in k1306 in k1164 in loop in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1311,2,t0,t1);}
t2=C_a_i_list(&a,5,lf[30],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1);
t3=f_1103(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t2);
/* compiler-syntax.scm:254: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1113(t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1284 in k1164 in loop in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1286,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[7],t1,C_fix(16));
t3=C_a_i_list(&a,3,((C_word*)t0)[6],t2,((C_word*)t0)[5]);
t4=f_1103(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3);
/* compiler-syntax.scm:254: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1113(t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1263 in k1164 in loop in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1265,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[7],t1,C_fix(8));
t3=C_a_i_list(&a,3,((C_word*)t0)[6],t2,((C_word*)t0)[5]);
t4=f_1103(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3);
/* compiler-syntax.scm:254: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1113(t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1242 in k1164 in loop in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1244,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[7],t1,C_fix(2));
t3=C_a_i_list(&a,3,((C_word*)t0)[6],t2,((C_word*)t0)[5]);
t4=f_1103(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3);
/* compiler-syntax.scm:254: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1113(t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1221 in k1164 in loop in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1223,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[6],t1,((C_word*)t0)[5]);
t3=f_1103(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t2);
/* compiler-syntax.scm:254: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1113(t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1204 in k1164 in loop in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1206,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[6],t1,((C_word*)t0)[5]);
t3=f_1103(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t2);
/* compiler-syntax.scm:254: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1113(t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1187 in k1164 in loop in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1189,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[6],t1,((C_word*)t0)[5]);
t3=f_1103(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t2);
/* compiler-syntax.scm:254: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1113(t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1170 in k1164 in loop in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler-syntax.scm:254: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1113(t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1121 in loop in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1123,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1126,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:225: endchunk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1066(t3,t2,((C_word*)t0)[2]);}

/* k1124 in k1121 in loop in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1126,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1141,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:227: reverse */
t5=*((C_word*)lf[27]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* k1139 in k1124 in k1121 in loop in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1141,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* push in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static C_word C_fcall f_1103(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}

/* endchunk in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_fcall f_1066(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1066,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_i_length(t2);
if(C_truep(C_i_nequalp(C_fix(1),t3))){
t4=C_i_car(t2);
t5=C_a_i_list(&a,3,((C_word*)t0)[5],t4,((C_word*)t0)[4]);
/* compiler-syntax.scm:215: push */
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_1103(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t5));}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1097,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:218: reverse-list->string */
t5=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1095 in endchunk in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_ccall f_1097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1097,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[5],t1,((C_word*)t0)[4]);
/* compiler-syntax.scm:215: push */
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1103(C_a_i(&a,3),((C_word*)((C_word*)t0)[2])[1],t2));}

/* next in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static void C_fcall f_1047(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1047,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[3])[1]))){
/* compiler-syntax.scm:209: fail */
t2=((C_word*)t0)[2];
f_951(t2,t1,C_SCHEME_TRUE,lf[25],C_SCHEME_END_OF_LIST);}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* fetch in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k944 in k941 in a920 */
static C_word C_fcall f_1037(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t1=C_i_string_ref(((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t1);}

/* fail in k944 in k941 in a920 */
static void C_fcall f_951(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_951,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_955,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:186: get-line */
t6=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}

/* k953 in fail in k944 in k941 in a920 */
static void C_ccall f_955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_955,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_958,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* open-output-string */
t4=*((C_word*)lf[20]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k966 in k953 in fail in k944 in k941 in a920 */
static void C_ccall f_968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* write-char/port */
t3=*((C_word*)lf[19]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(96),t1);}

/* k969 in k966 in k953 in fail in k944 in k941 in a920 */
static void C_ccall f_971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_971,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_974,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[7]);}

/* k972 in k969 in k966 in k953 in fail in k944 in k941 in a920 */
static void C_ccall f_974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_974,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_977,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[23],((C_word*)t0)[6]);}

/* k975 in k972 in k969 in k966 in k953 in fail in k944 in k941 in a920 */
static void C_ccall f_977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_977,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_980,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* write */
t3=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[6]);}

/* k978 in k975 in k972 in k969 in k966 in k953 in fail in k944 in k941 in a920 */
static void C_ccall f_980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_983,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_996,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_999,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t5=*((C_word*)lf[20]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* display */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[21],((C_word*)t0)[5]);}}

/* k997 in k978 in k975 in k972 in k969 in k966 in k953 in fail in k944 in k941 in a920 */
static void C_ccall f_999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_999,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1002,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[19]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(40),t1);}

/* k1000 in k997 in k978 in k975 in k972 in k969 in k966 in k953 in fail in k944 in k941 in a920 */
static void C_ccall f_1002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1002,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1005,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1003 in k1000 in k997 in k978 in k975 in k972 in k969 in k966 in k953 in fail in k944 in k941 in a920 */
static void C_ccall f_1005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1005,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[19]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(41),((C_word*)t0)[2]);}

/* k1006 in k1003 in k1000 in k997 in k978 in k975 in k972 in k969 in k966 in k953 in fail in k944 in k941 in a920 */
static void C_ccall f_1008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k994 in k978 in k975 in k972 in k969 in k966 in k953 in fail in k944 in k941 in a920 */
static void C_ccall f_996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k981 in k978 in k975 in k972 in k969 in k966 in k953 in fail in k944 in k941 in a920 */
static void C_ccall f_983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_983,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_986,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[18],((C_word*)t0)[4]);}

/* k984 in k981 in k978 in k975 in k972 in k969 in k966 in k953 in fail in k944 in k941 in a920 */
static void C_ccall f_986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_986,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_989,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_apply(6,0,t2,*((C_word*)lf[16]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k987 in k984 in k981 in k978 in k975 in k972 in k969 in k966 in k953 in fail in k944 in k941 in a920 */
static void C_ccall f_989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_989,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_992,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* get-output-string */
t3=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k990 in k987 in k984 in k981 in k978 in k975 in k972 in k969 in k966 in k953 in fail in k944 in k941 in a920 */
static void C_ccall f_992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler-syntax.scm:187: warning */
t2=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k956 in k953 in fail in k944 in k941 in a920 */
static void C_ccall f_958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* compiler-syntax.scm:192: return */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_822 in k803 in k800 */
static void C_ccall f_822(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_822r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_822r(t0,t1,t2,t3,t4);}}

static void C_ccall f_822r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_826,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_826(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_826(2,t7,C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[11],t4);}}}

/* k824 */
static void C_ccall f_826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_826,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_876,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:46: ##sys#er-transformer */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k874 in k824 */
static void C_ccall f_876(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_876,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_830,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_symbolp(((C_word*)t0)[3]);
t5=(C_truep(t4)?C_a_i_list1(&a,1,((C_word*)t0)[3]):((C_word*)t0)[3]);
t6=C_i_check_list_2(t5,lf[8]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_845,a[2]=t3,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_845(t10,((C_word*)t0)[2],t5);}

/* for-each-loop41 in k874 in k824 */
static void C_fcall f_845(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_845,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_855,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g4248 */
t5=((C_word*)t0)[2];
f_830(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k853 in for-each-loop41 in k874 in k824 */
static void C_ccall f_855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_845(t3,((C_word*)t0)[2],t2);}

/* g42 in k874 in k824 */
static void C_fcall f_830(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_830,NULL,3,t0,t1,t2);}
/* compiler-syntax.scm:49: ##sys#put! */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,t2,lf[7],((C_word*)t0)[2]);}

/* f_808 in k803 in k800 */
static void C_ccall f_808(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_808,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_812,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:41: alist-ref */
t5=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,t2,*((C_word*)lf[0]+1),*((C_word*)lf[4]+1),C_fix(0));}

/* k810 */
static void C_ccall f_812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_812,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_816,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_plus(&a,2,t1,C_fix(1));
/* compiler-syntax.scm:43: alist-update! */
t4=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[2],t3,*((C_word*)lf[0]+1));}

/* k814 in k810 */
static void C_ccall f_816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##compiler#compiler-syntax-statistics ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[177] = {
{"toplevel:compiler_2dsyntax_2escm",(void*)C_compiler_2dsyntax_toplevel},
{"f_802:compiler_2dsyntax_2escm",(void*)f_802},
{"f_805:compiler_2dsyntax_2escm",(void*)f_805},
{"f_2780:compiler_2dsyntax_2escm",(void*)f_2780},
{"f_2309:compiler_2dsyntax_2escm",(void*)f_2309},
{"f_2313:compiler_2dsyntax_2escm",(void*)f_2313},
{"f_2316:compiler_2dsyntax_2escm",(void*)f_2316},
{"f_2319:compiler_2dsyntax_2escm",(void*)f_2319},
{"f_2322:compiler_2dsyntax_2escm",(void*)f_2322},
{"f_2325:compiler_2dsyntax_2escm",(void*)f_2325},
{"f_2328:compiler_2dsyntax_2escm",(void*)f_2328},
{"f_2331:compiler_2dsyntax_2escm",(void*)f_2331},
{"f_2334:compiler_2dsyntax_2escm",(void*)f_2334},
{"f_2768:compiler_2dsyntax_2escm",(void*)f_2768},
{"f_2343:compiler_2dsyntax_2escm",(void*)f_2343},
{"f_2725:compiler_2dsyntax_2escm",(void*)f_2725},
{"f_2754:compiler_2dsyntax_2escm",(void*)f_2754},
{"f_2354:compiler_2dsyntax_2escm",(void*)f_2354},
{"f_2672:compiler_2dsyntax_2escm",(void*)f_2672},
{"f_2705:compiler_2dsyntax_2escm",(void*)f_2705},
{"f_2685:compiler_2dsyntax_2escm",(void*)f_2685},
{"f_2670:compiler_2dsyntax_2escm",(void*)f_2670},
{"f_2623:compiler_2dsyntax_2escm",(void*)f_2623},
{"f_2389:compiler_2dsyntax_2escm",(void*)f_2389},
{"f_2574:compiler_2dsyntax_2escm",(void*)f_2574},
{"f_2607:compiler_2dsyntax_2escm",(void*)f_2607},
{"f_2587:compiler_2dsyntax_2escm",(void*)f_2587},
{"f_2407:compiler_2dsyntax_2escm",(void*)f_2407},
{"f_2539:compiler_2dsyntax_2escm",(void*)f_2539},
{"f_2537:compiler_2dsyntax_2escm",(void*)f_2537},
{"f_2492:compiler_2dsyntax_2escm",(void*)f_2492},
{"f_2490:compiler_2dsyntax_2escm",(void*)f_2490},
{"f_2445:compiler_2dsyntax_2escm",(void*)f_2445},
{"f_2443:compiler_2dsyntax_2escm",(void*)f_2443},
{"f_2527:compiler_2dsyntax_2escm",(void*)f_2527},
{"f_2369:compiler_2dsyntax_2escm",(void*)f_2369},
{"f_898:compiler_2dsyntax_2escm",(void*)f_898},
{"f_2307:compiler_2dsyntax_2escm",(void*)f_2307},
{"f_1766:compiler_2dsyntax_2escm",(void*)f_1766},
{"f_1770:compiler_2dsyntax_2escm",(void*)f_1770},
{"f_1773:compiler_2dsyntax_2escm",(void*)f_1773},
{"f_1776:compiler_2dsyntax_2escm",(void*)f_1776},
{"f_1779:compiler_2dsyntax_2escm",(void*)f_1779},
{"f_1782:compiler_2dsyntax_2escm",(void*)f_1782},
{"f_1785:compiler_2dsyntax_2escm",(void*)f_1785},
{"f_1788:compiler_2dsyntax_2escm",(void*)f_1788},
{"f_1791:compiler_2dsyntax_2escm",(void*)f_1791},
{"f_1794:compiler_2dsyntax_2escm",(void*)f_1794},
{"f_1797:compiler_2dsyntax_2escm",(void*)f_1797},
{"f_1800:compiler_2dsyntax_2escm",(void*)f_1800},
{"f_1803:compiler_2dsyntax_2escm",(void*)f_1803},
{"f_1806:compiler_2dsyntax_2escm",(void*)f_1806},
{"f_1809:compiler_2dsyntax_2escm",(void*)f_1809},
{"f_2295:compiler_2dsyntax_2escm",(void*)f_2295},
{"f_1818:compiler_2dsyntax_2escm",(void*)f_1818},
{"f_2252:compiler_2dsyntax_2escm",(void*)f_2252},
{"f_2281:compiler_2dsyntax_2escm",(void*)f_2281},
{"f_1829:compiler_2dsyntax_2escm",(void*)f_1829},
{"f_2195:compiler_2dsyntax_2escm",(void*)f_2195},
{"f_2228:compiler_2dsyntax_2escm",(void*)f_2228},
{"f_2208:compiler_2dsyntax_2escm",(void*)f_2208},
{"f_2193:compiler_2dsyntax_2escm",(void*)f_2193},
{"f_2130:compiler_2dsyntax_2escm",(void*)f_2130},
{"f_1864:compiler_2dsyntax_2escm",(void*)f_1864},
{"f_2081:compiler_2dsyntax_2escm",(void*)f_2081},
{"f_2114:compiler_2dsyntax_2escm",(void*)f_2114},
{"f_2094:compiler_2dsyntax_2escm",(void*)f_2094},
{"f_1882:compiler_2dsyntax_2escm",(void*)f_1882},
{"f_2046:compiler_2dsyntax_2escm",(void*)f_2046},
{"f_2044:compiler_2dsyntax_2escm",(void*)f_2044},
{"f_1999:compiler_2dsyntax_2escm",(void*)f_1999},
{"f_1997:compiler_2dsyntax_2escm",(void*)f_1997},
{"f_1928:compiler_2dsyntax_2escm",(void*)f_1928},
{"f_1926:compiler_2dsyntax_2escm",(void*)f_1926},
{"f_2034:compiler_2dsyntax_2escm",(void*)f_2034},
{"f_1844:compiler_2dsyntax_2escm",(void*)f_1844},
{"f_901:compiler_2dsyntax_2escm",(void*)f_901},
{"f_1725:compiler_2dsyntax_2escm",(void*)f_1725},
{"f_1735:compiler_2dsyntax_2escm",(void*)f_1735},
{"f_1742:compiler_2dsyntax_2escm",(void*)f_1742},
{"f_1750:compiler_2dsyntax_2escm",(void*)f_1750},
{"f_904:compiler_2dsyntax_2escm",(void*)f_904},
{"f_1723:compiler_2dsyntax_2escm",(void*)f_1723},
{"f_1719:compiler_2dsyntax_2escm",(void*)f_1719},
{"f_1715:compiler_2dsyntax_2escm",(void*)f_1715},
{"f_1711:compiler_2dsyntax_2escm",(void*)f_1711},
{"f_1707:compiler_2dsyntax_2escm",(void*)f_1707},
{"f_1703:compiler_2dsyntax_2escm",(void*)f_1703},
{"f_1699:compiler_2dsyntax_2escm",(void*)f_1699},
{"f_1607:compiler_2dsyntax_2escm",(void*)f_1607},
{"f_1611:compiler_2dsyntax_2escm",(void*)f_1611},
{"f_1614:compiler_2dsyntax_2escm",(void*)f_1614},
{"f_1624:compiler_2dsyntax_2escm",(void*)f_1624},
{"f_1648:compiler_2dsyntax_2escm",(void*)f_1648},
{"f_1636:compiler_2dsyntax_2escm",(void*)f_1636},
{"f_907:compiler_2dsyntax_2escm",(void*)f_907},
{"f_1605:compiler_2dsyntax_2escm",(void*)f_1605},
{"f_1601:compiler_2dsyntax_2escm",(void*)f_1601},
{"f_1597:compiler_2dsyntax_2escm",(void*)f_1597},
{"f_1593:compiler_2dsyntax_2escm",(void*)f_1593},
{"f_1589:compiler_2dsyntax_2escm",(void*)f_1589},
{"f_1585:compiler_2dsyntax_2escm",(void*)f_1585},
{"f_1581:compiler_2dsyntax_2escm",(void*)f_1581},
{"f_1520:compiler_2dsyntax_2escm",(void*)f_1520},
{"f_1530:compiler_2dsyntax_2escm",(void*)f_1530},
{"f_910:compiler_2dsyntax_2escm",(void*)f_910},
{"f_1518:compiler_2dsyntax_2escm",(void*)f_1518},
{"f_1514:compiler_2dsyntax_2escm",(void*)f_1514},
{"f_1510:compiler_2dsyntax_2escm",(void*)f_1510},
{"f_1506:compiler_2dsyntax_2escm",(void*)f_1506},
{"f_1502:compiler_2dsyntax_2escm",(void*)f_1502},
{"f_1498:compiler_2dsyntax_2escm",(void*)f_1498},
{"f_1494:compiler_2dsyntax_2escm",(void*)f_1494},
{"f_1447:compiler_2dsyntax_2escm",(void*)f_1447},
{"f_1451:compiler_2dsyntax_2escm",(void*)f_1451},
{"f_913:compiler_2dsyntax_2escm",(void*)f_913},
{"f_915:compiler_2dsyntax_2escm",(void*)f_915},
{"f_921:compiler_2dsyntax_2escm",(void*)f_921},
{"f_1429:compiler_2dsyntax_2escm",(void*)f_1429},
{"f_1418:compiler_2dsyntax_2escm",(void*)f_1418},
{"f_1425:compiler_2dsyntax_2escm",(void*)f_1425},
{"f_943:compiler_2dsyntax_2escm",(void*)f_943},
{"f_946:compiler_2dsyntax_2escm",(void*)f_946},
{"f_1017:compiler_2dsyntax_2escm",(void*)f_1017},
{"f_1020:compiler_2dsyntax_2escm",(void*)f_1020},
{"f_1023:compiler_2dsyntax_2escm",(void*)f_1023},
{"f_1026:compiler_2dsyntax_2escm",(void*)f_1026},
{"f_1029:compiler_2dsyntax_2escm",(void*)f_1029},
{"f_1032:compiler_2dsyntax_2escm",(void*)f_1032},
{"f_1035:compiler_2dsyntax_2escm",(void*)f_1035},
{"f_1113:compiler_2dsyntax_2escm",(void*)f_1113},
{"f_1166:compiler_2dsyntax_2escm",(void*)f_1166},
{"f_1362:compiler_2dsyntax_2escm",(void*)f_1362},
{"f_1308:compiler_2dsyntax_2escm",(void*)f_1308},
{"f_1311:compiler_2dsyntax_2escm",(void*)f_1311},
{"f_1286:compiler_2dsyntax_2escm",(void*)f_1286},
{"f_1265:compiler_2dsyntax_2escm",(void*)f_1265},
{"f_1244:compiler_2dsyntax_2escm",(void*)f_1244},
{"f_1223:compiler_2dsyntax_2escm",(void*)f_1223},
{"f_1206:compiler_2dsyntax_2escm",(void*)f_1206},
{"f_1189:compiler_2dsyntax_2escm",(void*)f_1189},
{"f_1172:compiler_2dsyntax_2escm",(void*)f_1172},
{"f_1123:compiler_2dsyntax_2escm",(void*)f_1123},
{"f_1126:compiler_2dsyntax_2escm",(void*)f_1126},
{"f_1141:compiler_2dsyntax_2escm",(void*)f_1141},
{"f_1103:compiler_2dsyntax_2escm",(void*)f_1103},
{"f_1066:compiler_2dsyntax_2escm",(void*)f_1066},
{"f_1097:compiler_2dsyntax_2escm",(void*)f_1097},
{"f_1047:compiler_2dsyntax_2escm",(void*)f_1047},
{"f_1037:compiler_2dsyntax_2escm",(void*)f_1037},
{"f_951:compiler_2dsyntax_2escm",(void*)f_951},
{"f_955:compiler_2dsyntax_2escm",(void*)f_955},
{"f_968:compiler_2dsyntax_2escm",(void*)f_968},
{"f_971:compiler_2dsyntax_2escm",(void*)f_971},
{"f_974:compiler_2dsyntax_2escm",(void*)f_974},
{"f_977:compiler_2dsyntax_2escm",(void*)f_977},
{"f_980:compiler_2dsyntax_2escm",(void*)f_980},
{"f_999:compiler_2dsyntax_2escm",(void*)f_999},
{"f_1002:compiler_2dsyntax_2escm",(void*)f_1002},
{"f_1005:compiler_2dsyntax_2escm",(void*)f_1005},
{"f_1008:compiler_2dsyntax_2escm",(void*)f_1008},
{"f_996:compiler_2dsyntax_2escm",(void*)f_996},
{"f_983:compiler_2dsyntax_2escm",(void*)f_983},
{"f_986:compiler_2dsyntax_2escm",(void*)f_986},
{"f_989:compiler_2dsyntax_2escm",(void*)f_989},
{"f_992:compiler_2dsyntax_2escm",(void*)f_992},
{"f_958:compiler_2dsyntax_2escm",(void*)f_958},
{"f_822:compiler_2dsyntax_2escm",(void*)f_822},
{"f_826:compiler_2dsyntax_2escm",(void*)f_826},
{"f_876:compiler_2dsyntax_2escm",(void*)f_876},
{"f_845:compiler_2dsyntax_2escm",(void*)f_845},
{"f_855:compiler_2dsyntax_2escm",(void*)f_855},
{"f_830:compiler_2dsyntax_2escm",(void*)f_830},
{"f_808:compiler_2dsyntax_2escm",(void*)f_808},
{"f_812:compiler_2dsyntax_2escm",(void*)f_812},
{"f_816:compiler_2dsyntax_2escm",(void*)f_816},
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
