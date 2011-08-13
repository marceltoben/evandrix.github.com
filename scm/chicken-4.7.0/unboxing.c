/* Generated from unboxing.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: unboxing.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file unboxing.c
   unit: unboxing
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[234];
static double C_possibly_force_alignment;


C_noret_decl(C_unboxing_toplevel)
C_externexport void C_ccall C_unboxing_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_868)
static void C_ccall f_868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_871)
static void C_ccall f_871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2876)
static void C_ccall f_2876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2879)
static void C_ccall f_2879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2882)
static void C_ccall f_2882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2885)
static void C_ccall f_2885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2888)
static void C_ccall f_2888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2894)
static void C_ccall f_2894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2900)
static void C_ccall f_2900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2903)
static void C_ccall f_2903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2906)
static void C_ccall f_2906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2912)
static void C_ccall f_2912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2915)
static void C_ccall f_2915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2918)
static void C_ccall f_2918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2933)
static void C_ccall f_2933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2939)
static void C_ccall f_2939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2960)
static void C_ccall f_2960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2963)
static void C_ccall f_2963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2972)
static void C_ccall f_2972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2987)
static void C_ccall f_2987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3002)
static void C_ccall f_3002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3005)
static void C_ccall f_3005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3008)
static void C_ccall f_3008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3017)
static void C_ccall f_3017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2861)
static void C_ccall f_2861(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2869)
static void C_ccall f_2869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_891)
static void C_ccall f_891(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_895)
static void C_ccall f_895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2829)
static void C_ccall f_2829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2847)
static void C_ccall f_2847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_897)
static void C_fcall f_897(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2014)
static void C_fcall f_2014(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2051)
static void C_fcall f_2051(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2763)
static void C_fcall f_2763(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2773)
static void C_ccall f_2773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2761)
static void C_ccall f_2761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2742)
static void C_fcall f_2742(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2755)
static void C_ccall f_2755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2748)
static void C_fcall f_2748(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2720)
static void C_fcall f_2720(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2715)
static void C_ccall f_2715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2693)
static void C_fcall f_2693(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2706)
static void C_ccall f_2706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2699)
static void C_fcall f_2699(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2679)
static void C_ccall f_2679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2612)
static void C_ccall f_2612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2621)
static void C_fcall f_2621(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2650)
static void C_ccall f_2650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2578)
static void C_ccall f_2578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2581)
static void C_ccall f_2581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2584)
static void C_ccall f_2584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2488)
static void C_ccall f_2488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2540)
static void C_ccall f_2540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2517)
static void C_ccall f_2517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2491)
static void C_ccall f_2491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2411)
static void C_ccall f_2411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2414)
static void C_ccall f_2414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2417)
static void C_ccall f_2417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2395)
static void C_ccall f_2395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2206)
static void C_ccall f_2206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2209)
static void C_fcall f_2209(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2346)
static void C_fcall f_2346(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2220)
static void C_ccall f_2220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2235)
static void C_ccall f_2235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2311)
static void C_fcall f_2311(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2321)
static void C_ccall f_2321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2270)
static void C_fcall f_2270(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2277)
static void C_fcall f_2277(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2266)
static void C_ccall f_2266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2247)
static void C_ccall f_2247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2210)
static void C_fcall f_2210(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2172)
static void C_ccall f_2172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2146)
static void C_ccall f_2146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2069)
static void C_ccall f_2069(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2098)
static void C_fcall f_2098(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2127)
static void C_ccall f_2127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2092)
static void C_ccall f_2092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2073)
static void C_ccall f_2073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1844)
static void C_fcall f_1844(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1999)
static void C_ccall f_1999(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1893)
static void C_fcall f_1893(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1920)
static void C_ccall f_1920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1878)
static void C_ccall f_1878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1718)
static void C_fcall f_1718(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1753)
static void C_ccall f_1753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1592)
static void C_fcall f_1592(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1624)
static void C_ccall f_1624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1627)
static void C_ccall f_1627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1560)
static void C_fcall f_1560(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1564)
static void C_ccall f_1564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1567)
static void C_ccall f_1567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1103)
static void C_fcall f_1103(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_1110)
static void C_ccall f_1110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1555)
static void C_ccall f_1555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1114)
static void C_ccall f_1114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1126)
static void C_fcall f_1126(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1383)
static void C_fcall f_1383(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1409)
static void C_ccall f_1409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1471)
static void C_fcall f_1471(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1438)
static void C_ccall f_1438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1374)
static void C_ccall f_1374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1150)
static void C_ccall f_1150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1170)
static void C_ccall f_1170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1124)
static void C_ccall f_1124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1117)
static void C_ccall f_1117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1035)
static void C_fcall f_1035(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1045)
static void C_fcall f_1045(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1057)
static void C_fcall f_1057(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1060)
static void C_ccall f_1060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1048)
static void C_ccall f_1048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1029)
static void C_fcall f_1029(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1007)
static void C_fcall f_1007(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_998)
static void C_ccall f_998(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_986)
static C_word C_fcall f_986(C_word t0,C_word t1);
C_noret_decl(f_924)
static void C_fcall f_924(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_984)
static void C_ccall f_984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_976)
static void C_ccall f_976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_980)
static void C_ccall f_980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_935)
static void C_fcall f_935(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_969)
static void C_ccall f_969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_955)
static void C_ccall f_955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_900)
static void C_fcall f_900(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_922)
static void C_ccall f_922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_873)
static void C_ccall f_873(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_873)
static void C_ccall f_873r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_883)
static void C_ccall f_883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_886)
static void C_ccall f_886(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_897)
static void C_fcall trf_897(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_897(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_897(t0,t1,t2,t3);}

C_noret_decl(trf_2014)
static void C_fcall trf_2014(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2014(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2014(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2051)
static void C_fcall trf_2051(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2051(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2051(t0,t1);}

C_noret_decl(trf_2763)
static void C_fcall trf_2763(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2763(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2763(t0,t1,t2);}

C_noret_decl(trf_2742)
static void C_fcall trf_2742(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2742(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2742(t0,t1,t2);}

C_noret_decl(trf_2748)
static void C_fcall trf_2748(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2748(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2748(t0,t1,t2);}

C_noret_decl(trf_2720)
static void C_fcall trf_2720(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2720(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2720(t0,t1,t2);}

C_noret_decl(trf_2693)
static void C_fcall trf_2693(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2693(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2693(t0,t1,t2);}

C_noret_decl(trf_2699)
static void C_fcall trf_2699(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2699(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2699(t0,t1,t2);}

C_noret_decl(trf_2621)
static void C_fcall trf_2621(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2621(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2621(t0,t1,t2,t3);}

C_noret_decl(trf_2209)
static void C_fcall trf_2209(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2209(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2209(t0,t1);}

C_noret_decl(trf_2346)
static void C_fcall trf_2346(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2346(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2346(t0,t1,t2);}

C_noret_decl(trf_2311)
static void C_fcall trf_2311(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2311(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2311(t0,t1,t2);}

C_noret_decl(trf_2270)
static void C_fcall trf_2270(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2270(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2270(t0,t1,t2);}

C_noret_decl(trf_2277)
static void C_fcall trf_2277(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2277(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2277(t0,t1);}

C_noret_decl(trf_2210)
static void C_fcall trf_2210(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2210(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2210(t0,t1,t2);}

C_noret_decl(trf_2098)
static void C_fcall trf_2098(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2098(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2098(t0,t1,t2);}

C_noret_decl(trf_1844)
static void C_fcall trf_1844(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1844(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1844(t0,t1,t2);}

C_noret_decl(trf_1893)
static void C_fcall trf_1893(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1893(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1893(t0,t1,t2,t3);}

C_noret_decl(trf_1718)
static void C_fcall trf_1718(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1718(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1718(t0,t1,t2);}

C_noret_decl(trf_1592)
static void C_fcall trf_1592(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1592(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1592(t0,t1,t2);}

C_noret_decl(trf_1560)
static void C_fcall trf_1560(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1560(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1560(t0,t1,t2,t3);}

C_noret_decl(trf_1103)
static void C_fcall trf_1103(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1103(void *dummy){
C_word t8=C_pick(0);
C_word t7=C_pick(1);
C_word t6=C_pick(2);
C_word t5=C_pick(3);
C_word t4=C_pick(4);
C_word t3=C_pick(5);
C_word t2=C_pick(6);
C_word t1=C_pick(7);
C_word t0=C_pick(8);
C_adjust_stack(-9);
f_1103(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_1126)
static void C_fcall trf_1126(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1126(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_1126(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1383)
static void C_fcall trf_1383(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1383(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1383(t0,t1);}

C_noret_decl(trf_1471)
static void C_fcall trf_1471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1471(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1471(t0,t1);}

C_noret_decl(trf_1035)
static void C_fcall trf_1035(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1035(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1035(t0,t1,t2,t3);}

C_noret_decl(trf_1045)
static void C_fcall trf_1045(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1045(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1045(t0,t1);}

C_noret_decl(trf_1057)
static void C_fcall trf_1057(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1057(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1057(t0,t1);}

C_noret_decl(trf_1029)
static void C_fcall trf_1029(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1029(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1029(t0,t1,t2);}

C_noret_decl(trf_1007)
static void C_fcall trf_1007(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1007(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1007(t0,t1,t2);}

C_noret_decl(trf_924)
static void C_fcall trf_924(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_924(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_924(t0,t1,t2,t3);}

C_noret_decl(trf_935)
static void C_fcall trf_935(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_935(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_935(t0,t1,t2);}

C_noret_decl(trf_900)
static void C_fcall trf_900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_900(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_900(t0,t1,t2);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_unboxing_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_unboxing_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("unboxing_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(2147)){
C_save(t1);
C_rereclaim2(2147*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,234);
lf[0]=C_h_intern(&lf[0],1,"d");
lf[1]=C_h_intern(&lf[1],19,"\003sysstandard-output");
lf[2]=C_h_intern(&lf[2],19,"\003syswrite-char/port");
lf[3]=C_h_intern(&lf[3],7,"fprintf");
lf[4]=C_h_intern(&lf[4],7,"display");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000\010[debug] ");
lf[6]=C_h_intern(&lf[6],26,"\010compilerperform-unboxing!");
lf[7]=C_h_intern(&lf[7],10,"alist-cons");
lf[8]=C_h_intern(&lf[8],6,"gensym");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\002tu");
lf[10]=C_h_intern(&lf[10],9,"alist-ref");
lf[11]=C_h_intern(&lf[11],3,"eq\077");
lf[12]=C_h_intern(&lf[12],19,"\010compilercopy-node!");
lf[13]=C_h_intern(&lf[13],4,"node");
lf[14]=C_h_intern(&lf[14],19,"\004coreinline_unboxed");
lf[15]=C_h_intern(&lf[15],16,"\004corelet_unboxed");
lf[16]=C_h_intern(&lf[16],6,"flonum");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_flonum");
lf[18]=C_h_intern(&lf[18],16,"\004coreunboxed_ref");
lf[19]=C_h_intern(&lf[19],20,"\004coreinline_allocate");
lf[20]=C_h_intern(&lf[20],3,"int");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\016C_a_int_to_num");
lf[22]=C_h_intern(&lf[22],7,"pointer");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\016C_a_i_mpointer");
lf[24]=C_h_intern(&lf[24],4,"char");
lf[25]=C_h_intern(&lf[25],6,"fixnum");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\020C_make_character");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\005C_fix");
lf[28]=C_h_intern(&lf[28],11,"\004coreinline");
lf[29]=C_h_intern(&lf[29],4,"bool");
lf[30]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\011C_mk_bool\376\377\016");
lf[31]=C_h_intern(&lf[31],1,"*");
lf[32]=C_h_intern(&lf[32],13,"\010compilerbomb");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000&unboxed type `*\047 not allowed as result");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\024invalid unboxed type");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\002tu");
lf[36]=C_h_intern(&lf[36],7,"reverse");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\020C_character_code");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\007C_unfix");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\022C_flonum_magnitude");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\014C_num_to_int");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\021C_pointer_address");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\007C_truep");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\004C_id");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\035invalid unboxed argument type");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\002tu");
lf[46]=C_h_intern(&lf[46],19,"\003syshash-table-set!");
lf[47]=C_h_intern(&lf[47],18,"\003syshash-table-ref");
lf[48]=C_h_intern(&lf[48],18,"\010compilersymbolify");
lf[49]=C_h_intern(&lf[49],20,"node-parameters-set!");
lf[50]=C_h_intern(&lf[50],15,"node-class-set!");
lf[51]=C_h_intern(&lf[51],3,"let");
lf[52]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003let\376\003\000\000\002\376\001\000\000\020\004corelet_unboxed\376\377\016");
lf[53]=C_h_intern(&lf[53],3,"any");
lf[54]=C_h_intern(&lf[54],14,"\004coreundefined");
lf[55]=C_h_intern(&lf[55],11,"\004corelambda");
lf[56]=C_h_intern(&lf[56],18,"\004coredirect_lambda");
lf[57]=C_h_intern(&lf[57],3,"map");
lf[58]=C_h_intern(&lf[58],4,"cons");
lf[59]=C_h_intern(&lf[59],30,"\010compilerdecompose-lambda-list");
lf[60]=C_h_intern(&lf[60],13,"\004corevariable");
lf[61]=C_h_intern(&lf[61],8,"for-each");
lf[62]=C_h_intern(&lf[62],6,"unsafe");
lf[63]=C_h_intern(&lf[63],41,"\010compilerunchecked-specialized-arithmetic");
lf[64]=C_h_intern(&lf[64],7,"\003sysget");
lf[65]=C_h_intern(&lf[65],19,"\010compilerunboxed-op");
lf[66]=C_h_intern(&lf[66],4,"set!");
lf[67]=C_h_intern(&lf[67],17,"\004coreunboxed_set!");
lf[68]=C_h_intern(&lf[68],5,"quote");
lf[69]=C_h_intern(&lf[69],2,"if");
lf[70]=C_h_intern(&lf[70],9,"\004corecond");
lf[71]=C_h_intern(&lf[71],11,"\004coreswitch");
lf[72]=C_h_intern(&lf[72],4,"none");
lf[73]=C_h_intern(&lf[73],9,"\004corecall");
lf[74]=C_h_intern(&lf[74],16,"\004coredirect_call");
lf[75]=C_h_intern(&lf[75],9,"\004coreproc");
lf[76]=C_h_intern(&lf[76],15,"\004coreglobal-ref");
lf[77]=C_h_intern(&lf[77],15,"\004coreinline_ref");
lf[78]=C_h_intern(&lf[78],19,"\004coreinline_loc_ref");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[80]=C_h_intern(&lf[80],23,"\003syshash-table-for-each");
lf[81]=C_h_intern(&lf[81],18,"\010compilerdebugging");
lf[82]=C_h_intern(&lf[82],1,"o");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\021unboxed rewrites:");
lf[84]=C_h_intern(&lf[84],11,"make-vector");
lf[85]=C_h_intern(&lf[85],28,"\010compilerregister-unboxed-op");
lf[86]=C_h_intern(&lf[86],8,"\003sysput!");
lf[87]=C_h_intern(&lf[87],15,"C_null_pointerp");
lf[88]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\377\016");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\024C_ub_i_null_pointerp");
lf[90]=C_h_intern(&lf[90],21,"C_u_i_pointer_f64_set");
lf[91]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\026C_ub_i_pointer_f64_set");
lf[93]=C_h_intern(&lf[93],21,"C_u_i_pointer_f32_set");
lf[94]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\026C_ub_i_pointer_f32_set");
lf[96]=C_h_intern(&lf[96],21,"C_u_i_pointer_s32_set");
lf[97]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\006fixnum\376\377\016");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\026C_ub_i_pointer_s32_set");
lf[99]=C_h_intern(&lf[99],21,"C_u_i_pointer_u32_set");
lf[100]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\006fixnum\376\377\016");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\026C_ub_i_pointer_u32_set");
lf[102]=C_h_intern(&lf[102],21,"C_u_i_pointer_s16_set");
lf[103]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\006fixnum\376\377\016");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\026C_ub_i_pointer_s16_set");
lf[105]=C_h_intern(&lf[105],21,"C_u_i_pointer_u16_set");
lf[106]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\006fixnum\376\377\016");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\026C_ub_i_pointer_u16_set");
lf[108]=C_h_intern(&lf[108],20,"C_u_i_pointer_s8_set");
lf[109]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\006fixnum\376\377\016");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\025C_ub_i_pointer_s8_set");
lf[111]=C_h_intern(&lf[111],20,"C_u_i_pointer_u8_set");
lf[112]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\006fixnum\376\377\016");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\025C_ub_i_pointer_u8_set");
lf[114]=C_h_intern(&lf[114],21,"C_u_i_pointer_f64_ref");
lf[115]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\377\016");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\026C_ub_i_pointer_f64_ref");
lf[117]=C_h_intern(&lf[117],21,"C_u_i_pointer_f32_ref");
lf[118]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\377\016");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\026C_ub_i_pointer_f32_ref");
lf[120]=C_h_intern(&lf[120],21,"C_u_i_pointer_s32_ref");
lf[121]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\377\016");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\026C_ub_i_pointer_s32_ref");
lf[123]=C_h_intern(&lf[123],21,"C_u_i_pointer_u32_ref");
lf[124]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\377\016");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\026C_ub_i_pointer_u32_ref");
lf[126]=C_h_intern(&lf[126],21,"C_u_i_pointer_s16_ref");
lf[127]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\377\016");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\026C_ub_i_pointer_s16_ref");
lf[129]=C_h_intern(&lf[129],21,"C_u_i_pointer_u16_ref");
lf[130]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\377\016");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\026C_ub_i_pointer_u16_ref");
lf[132]=C_h_intern(&lf[132],20,"C_u_i_pointer_s8_ref");
lf[133]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\377\016");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\025C_ub_i_pointer_s8_ref");
lf[135]=C_h_intern(&lf[135],20,"C_u_i_pointer_u8_ref");
lf[136]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\377\016");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\025C_ub_i_pointer_u8_ref");
lf[138]=C_h_intern(&lf[138],13,"C_pointer_eqp");
lf[139]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\007pointer\376\377\016");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\022C_ub_i_pointer_eqp");
lf[141]=C_h_intern(&lf[141],19,"C_a_u_i_pointer_inc");
lf[142]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\006fixnum\376\377\016");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\022C_ub_i_pointer_inc");
lf[144]=C_h_intern(&lf[144],19,"C_a_i_f64vector_ref");
lf[145]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\006fixnum\376\377\016");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\024C_ub_i_f64vector_ref");
lf[147]=C_h_intern(&lf[147],19,"C_a_i_f32vector_ref");
lf[148]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\006fixnum\376\377\016");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\024C_ub_i_f32vector_ref");
lf[150]=C_h_intern(&lf[150],19,"C_u_i_f64vector_set");
lf[151]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\024C_ub_i_f64vector_set");
lf[153]=C_h_intern(&lf[153],19,"C_u_i_f32vector_set");
lf[154]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\024C_ub_i_f32vector_set");
lf[156]=C_h_intern(&lf[156],18,"C_a_i_flonum_round");
lf[157]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\007C_round");
lf[159]=C_h_intern(&lf[159],18,"C_a_i_flonum_floor");
lf[160]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\007C_floor");
lf[162]=C_h_intern(&lf[162],20,"C_a_i_flonum_ceiling");
lf[163]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\006C_ceil");
lf[165]=C_h_intern(&lf[165],21,"C_a_i_flonum_truncate");
lf[166]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\007C_trunc");
lf[168]=C_h_intern(&lf[168],16,"C_a_i_flonum_abs");
lf[169]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\006C_fabs");
lf[171]=C_h_intern(&lf[171],17,"C_a_i_flonum_sqrt");
lf[172]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\006C_sqrt");
lf[174]=C_h_intern(&lf[174],16,"C_a_i_flonum_log");
lf[175]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\005C_log");
lf[177]=C_h_intern(&lf[177],17,"C_a_i_flonum_expt");
lf[178]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\005C_pow");
lf[180]=C_h_intern(&lf[180],16,"C_a_i_flonum_exp");
lf[181]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\005C_exp");
lf[183]=C_h_intern(&lf[183],18,"C_a_i_flonum_atan2");
lf[184]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\007C_atan2");
lf[186]=C_h_intern(&lf[186],17,"C_a_i_flonum_atan");
lf[187]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\006C_atan");
lf[189]=C_h_intern(&lf[189],17,"C_a_i_flonum_acos");
lf[190]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\006C_acos");
lf[192]=C_h_intern(&lf[192],17,"C_a_i_flonum_asin");
lf[193]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\006C_asin");
lf[195]=C_h_intern(&lf[195],16,"C_a_i_flonum_tan");
lf[196]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\005C_tab");
lf[198]=C_h_intern(&lf[198],16,"C_a_i_flonum_cos");
lf[199]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\005C_cos");
lf[201]=C_h_intern(&lf[201],16,"C_a_i_flonum_sin");
lf[202]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\005C_sin");
lf[204]=C_h_intern(&lf[204],24,"C_flonum_less_or_equal_p");
lf[205]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\035C_ub_i_flonum_less_or_equal_p");
lf[207]=C_h_intern(&lf[207],27,"C_flonum_greater_or_equal_p");
lf[208]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000 C_ub_i_flonum_greater_or_equal_p");
lf[210]=C_h_intern(&lf[210],14,"C_flonum_lessp");
lf[211]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\023C_ub_i_flonum_lessp");
lf[213]=C_h_intern(&lf[213],17,"C_flonum_greaterp");
lf[214]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[215]=C_decode_literal(C_heaptop,"\376B\000\000\026C_ub_i_flonum_greaterp");
lf[216]=C_h_intern(&lf[216],15,"C_flonum_equalp");
lf[217]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\024C_ub_i_flonum_equalp");
lf[219]=C_h_intern(&lf[219],16,"C_u_i_fpintegerp");
lf[220]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\021C_ub_i_fpintegerp");
lf[222]=C_h_intern(&lf[222],21,"C_a_i_flonum_quotient");
lf[223]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\026C_ub_i_flonum_quotient");
lf[225]=C_h_intern(&lf[225],18,"C_a_i_flonum_times");
lf[226]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\023C_ub_i_flonum_times");
lf[228]=C_h_intern(&lf[228],23,"C_a_i_flonum_difference");
lf[229]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\030C_ub_i_flonum_difference");
lf[231]=C_h_intern(&lf[231],17,"C_a_i_flonum_plus");
lf[232]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[233]=C_decode_literal(C_heaptop,"\376B\000\000\022C_ub_i_flonum_plus");
C_register_lf2(lf,234,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_868,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k866 */
static void C_ccall f_868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_868,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_871,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k869 in k866 */
static void C_ccall f_871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_871,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! d ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_873,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate((C_word*)lf[6]+1 /* (set! ##compiler#perform-unboxing! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_891,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[85]+1 /* (set! ##compiler#register-unboxed-op ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2861,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2876,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t6=*((C_word*)lf[85]+1);
f_2861(7,t6,t5,lf[231],lf[232],lf[16],lf[233],C_SCHEME_TRUE);}

/* k2874 in k869 in k866 */
static void C_ccall f_2876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2876,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2879,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[228],lf[229],lf[16],lf[230],C_SCHEME_TRUE);}

/* k2877 in k2874 in k869 in k866 */
static void C_ccall f_2879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2879,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2882,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[225],lf[226],lf[16],lf[227],C_SCHEME_TRUE);}

/* k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2882,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2885,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[222],lf[223],lf[16],lf[224],C_SCHEME_TRUE);}

/* k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2885,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2888,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[219],lf[220],lf[29],lf[221],C_SCHEME_TRUE);}

/* k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2888,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2891,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[216],lf[217],lf[29],lf[218],C_SCHEME_TRUE);}

/* k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2891,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2894,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[213],lf[214],lf[29],lf[215],C_SCHEME_TRUE);}

/* k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2894,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2897,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[210],lf[211],lf[29],lf[212],C_SCHEME_TRUE);}

/* k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2900,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[207],lf[208],lf[29],lf[209],C_SCHEME_TRUE);}

/* k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2900,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2903,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[204],lf[205],lf[29],lf[206],C_SCHEME_TRUE);}

/* k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2903,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2906,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[201],lf[202],lf[16],lf[203],C_SCHEME_TRUE);}

/* k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2906,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2909,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[198],lf[199],lf[16],lf[200],C_SCHEME_TRUE);}

/* k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2909,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2912,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[195],lf[196],lf[16],lf[197],C_SCHEME_TRUE);}

/* k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2912,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2915,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[192],lf[193],lf[16],lf[194],C_SCHEME_TRUE);}

/* k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2915,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2918,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[189],lf[190],lf[16],lf[191],C_SCHEME_TRUE);}

/* k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2918,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2921,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[186],lf[187],lf[16],lf[188],C_SCHEME_TRUE);}

/* k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2921,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2924,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[183],lf[184],lf[16],lf[185],C_SCHEME_TRUE);}

/* k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2924,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2927,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[180],lf[181],lf[16],lf[182],C_SCHEME_TRUE);}

/* k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2927,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2930,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[177],lf[178],lf[16],lf[179],C_SCHEME_TRUE);}

/* k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2930,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2933,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[174],lf[175],lf[16],lf[176],C_SCHEME_TRUE);}

/* k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2933,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2936,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[171],lf[172],lf[16],lf[173],C_SCHEME_TRUE);}

/* k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2936,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2939,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[168],lf[169],lf[16],lf[170],C_SCHEME_TRUE);}

/* k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2939,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2942,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[165],lf[166],lf[16],lf[167],C_SCHEME_TRUE);}

/* k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2945,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[162],lf[163],lf[16],lf[164],C_SCHEME_TRUE);}

/* k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2948,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[159],lf[160],lf[16],lf[161],C_SCHEME_TRUE);}

/* k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2951,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[156],lf[157],lf[16],lf[158],C_SCHEME_TRUE);}

/* k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2954,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[153],lf[154],lf[25],lf[155],C_SCHEME_FALSE);}

/* k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2957,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[150],lf[151],lf[25],lf[152],C_SCHEME_FALSE);}

/* k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2960,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[147],lf[148],lf[16],lf[149],C_SCHEME_FALSE);}

/* k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2963,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[144],lf[145],lf[16],lf[146],C_SCHEME_FALSE);}

/* k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2963,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2966,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[141],lf[142],lf[22],lf[143],C_SCHEME_FALSE);}

/* k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2966,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2969,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[138],lf[139],lf[29],lf[140],C_SCHEME_FALSE);}

/* k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2972,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[135],lf[136],lf[25],lf[137],C_SCHEME_FALSE);}

/* k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2972,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2975,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[132],lf[133],lf[25],lf[134],C_SCHEME_FALSE);}

/* k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2978,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[129],lf[130],lf[25],lf[131],C_SCHEME_FALSE);}

/* k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2981,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[126],lf[127],lf[25],lf[128],C_SCHEME_FALSE);}

/* k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2984,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[123],lf[124],lf[25],lf[125],C_SCHEME_FALSE);}

/* k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2984,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2987,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[120],lf[121],lf[25],lf[122],C_SCHEME_FALSE);}

/* k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2990,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[117],lf[118],lf[16],lf[119],C_SCHEME_FALSE);}

/* k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2990,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2993,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[114],lf[115],lf[16],lf[116],C_SCHEME_FALSE);}

/* k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2996,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[111],lf[112],lf[25],lf[113],C_SCHEME_FALSE);}

/* k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2999,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[108],lf[109],lf[25],lf[110],C_SCHEME_FALSE);}

/* k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_2999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2999,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3002,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[105],lf[106],lf[25],lf[107],C_SCHEME_FALSE);}

/* k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_3002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3002,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3005,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[102],lf[103],lf[25],lf[104],C_SCHEME_FALSE);}

/* k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_3005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3005,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3008,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[99],lf[100],lf[25],lf[101],C_SCHEME_FALSE);}

/* k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_3008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3008,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[96],lf[97],lf[25],lf[98],C_SCHEME_FALSE);}

/* k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_3011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3011,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3014,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[93],lf[94],lf[16],lf[95],C_SCHEME_FALSE);}

/* k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_3014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3017,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[90],lf[91],lf[16],lf[92],C_SCHEME_FALSE);}

/* k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_3017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3020,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
t3=*((C_word*)lf[85]+1);
f_2861(7,t3,t2,lf[87],lf[88],lf[29],lf[89],C_SCHEME_FALSE);}

/* k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k869 in k866 */
static void C_ccall f_3020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* f_2861 in k869 in k866 */
static void C_ccall f_2861(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2861,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2869,a[2]=t1,a[3]=t6,a[4]=t4,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* unboxing.scm:408: symbolify */
t8=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k2867 */
static void C_ccall f_2869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2869,2,t0,t1);}
t2=C_a_i_list4(&a,4,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
/* unboxing.scm:408: ##sys#put! */
t3=*((C_word*)lf[86]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,lf[65],t2);}

/* f_891 in k869 in k866 */
static void C_ccall f_891(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_891,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_895,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* unboxing.scm:42: make-vector */
t4=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k893 */
static void C_ccall f_895(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_895,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_897,a[2]=t5,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2829,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* unboxing.scm:387: walk-lambda */
t8=((C_word*)t5)[1];
f_897(t8,t7,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);}

/* k2827 in k893 */
static void C_ccall f_2829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2829,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2835,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* unboxing.scm:389: debugging */
t3=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[82],lf[83]);}
else{
t3=t2;
f_2835(2,t3,C_SCHEME_FALSE);}}

/* k2833 in k2827 in k893 */
static void C_ccall f_2835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2835,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2840,tmp=(C_word)a,a+=2,tmp);
/* unboxing.scm:390: ##sys#hash-table-for-each */
t3=*((C_word*)lf[80]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* a2839 in k2833 in k2827 in k893 */
static void C_ccall f_2840(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2840,4,t0,t1,t2,t3);}
t4=*((C_word*)lf[1]+1);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2844,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* display */
t6=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,lf[79],t4);}

/* k2842 in a2839 in k2833 in k2827 in k893 */
static void C_ccall f_2844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2844,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2847,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k2845 in k2842 in a2839 in k2833 in k2827 in k893 */
static void C_ccall f_2847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2847,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(9),((C_word*)t0)[3]);}

/* k2848 in k2845 in k2842 in a2839 in k2833 in k2827 in k893 */
static void C_ccall f_2850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2850,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2853,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2851 in k2848 in k2845 in k2842 in a2839 in k2833 in k2827 in k893 */
static void C_ccall f_2853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* walk-lambda in k893 */
static void C_fcall f_897(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[92],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_897,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_900,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t34=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_924,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t35=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_986,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t36=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_998,tmp=(C_word)a,a+=2,tmp));
t37=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1007,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t38=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1029,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t39=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1035,a[2]=t16,tmp=(C_word)a,a+=3,tmp));
t40=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1103,a[2]=((C_word*)t0)[3],a[3]=t26,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t41=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1560,a[2]=t18,a[3]=t26,tmp=(C_word)a,a+=4,tmp));
t42=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1592,a[2]=t26,tmp=(C_word)a,a+=3,tmp));
t43=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1718,a[2]=t28,a[3]=t26,tmp=(C_word)a,a+=4,tmp));
t44=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1844,a[2]=t30,tmp=(C_word)a,a+=3,tmp));
t45=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2014,a[2]=t30,a[3]=t28,a[4]=t20,a[5]=t16,a[6]=t26,a[7]=t24,a[8]=t14,a[9]=t12,a[10]=t10,a[11]=t22,a[12]=t32,a[13]=t8,a[14]=t18,a[15]=t4,a[16]=((C_word*)t0)[2],tmp=(C_word)a,a+=17,tmp));
t46=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2823,a[2]=t3,a[3]=t1,a[4]=t32,tmp=(C_word)a,a+=5,tmp);
/* unboxing.scm:384: walk */
t47=((C_word*)t32)[1];
f_2014(t47,t46,t3,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2821 in walk-lambda in k893 */
static void C_ccall f_2823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm:385: walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2014(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* walk in walk-lambda in k893 */
static void C_fcall f_2014(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2014,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=t2;
t7=C_slot(t6,C_fix(3));
t8=t2;
t9=C_slot(t8,C_fix(2));
t10=t2;
t11=C_slot(t10,C_fix(1));
t12=C_eqp(t11,lf[54]);
t13=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_2051,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t3,a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=t4,a[16]=((C_word*)t0)[14],a[17]=t2,a[18]=((C_word*)t0)[15],a[19]=((C_word*)t0)[16],a[20]=t7,a[21]=t5,a[22]=t9,a[23]=t11,a[24]=t1,tmp=(C_word)a,a+=25,tmp);
if(C_truep(t12)){
t14=t13;
f_2051(t14,t12);}
else{
t14=C_eqp(t11,lf[75]);
if(C_truep(t14)){
t15=t13;
f_2051(t15,t14);}
else{
t15=C_eqp(t11,lf[76]);
if(C_truep(t15)){
t16=t13;
f_2051(t16,t15);}
else{
t16=C_eqp(t11,lf[77]);
t17=t13;
f_2051(t17,(C_truep(t16)?t16:C_eqp(t11,lf[78])));}}}}

/* k2049 in walk in walk-lambda in k893 */
static void C_fcall f_2051(C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2051,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[24];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_eqp(((C_word*)t0)[23],lf[55]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[23],lf[56]));
if(C_truep(t3)){
t4=C_i_caddr(((C_word*)t0)[22]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2069,a[2]=((C_word*)t0)[19],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[22],a[5]=((C_word*)t0)[21],tmp=(C_word)a,a+=6,tmp);
/* unboxing.scm:268: decompose-lambda-list */
t6=*((C_word*)lf[59]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[24],t4,t5);}
else{
t4=C_eqp(((C_word*)t0)[23],lf[60]);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t0)[22]);
t6=C_i_assq(t5,((C_word*)((C_word*)t0)[18])[1]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2146,a[2]=t6,a[3]=((C_word*)t0)[24],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[21])){
t8=(C_truep(t6)?C_i_cdr(t6):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2172,a[2]=((C_word*)t0)[17],a[3]=t7,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* unboxing.scm:284: alias */
t10=((C_word*)((C_word*)t0)[16])[1];
f_1029(t10,t9,t5);}
else{
t9=((C_word*)t0)[24];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t6);}}
else{
if(C_truep(t6)){
t8=((C_word*)t0)[15];
if(C_truep(t8)){
t9=((C_word*)t0)[24];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t6);}
else{
/* unboxing.scm:287: boxed! */
t9=((C_word*)((C_word*)t0)[14])[1];
f_900(t9,t7,t5);}}
else{
t8=((C_word*)t0)[24];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t6);}}}
else{
t5=C_eqp(((C_word*)t0)[23],lf[28]);
t6=(C_truep(t5)?t5:C_eqp(((C_word*)t0)[23],lf[19]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2206,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[17],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[18],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[24],a[10]=((C_word*)t0)[20],a[11]=((C_word*)t0)[21],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2395,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=C_i_car(((C_word*)t0)[22]);
/* unboxing.scm:291: symbolify */
t10=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
t7=C_eqp(((C_word*)t0)[23],lf[51]);
if(C_truep(t7)){
t8=C_i_car(((C_word*)t0)[22]);
t9=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2411,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[22],a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[20],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[17],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[18],a[12]=t8,a[13]=((C_word*)t0)[21],a[14]=((C_word*)t0)[24],tmp=(C_word)a,a+=15,tmp);
t10=C_i_car(((C_word*)t0)[20]);
/* unboxing.scm:326: walk */
t11=((C_word*)((C_word*)t0)[13])[1];
f_2014(t11,t9,t10,t8,C_SCHEME_TRUE,((C_word*)t0)[21]);}
else{
t8=C_eqp(((C_word*)t0)[23],lf[66]);
if(C_truep(t8)){
t9=C_i_car(((C_word*)t0)[22]);
t10=C_i_assq(t9,((C_word*)((C_word*)t0)[18])[1]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2488,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[10],a[5]=t9,a[6]=((C_word*)t0)[16],a[7]=((C_word*)t0)[17],a[8]=((C_word*)t0)[20],a[9]=t10,a[10]=((C_word*)t0)[21],a[11]=((C_word*)t0)[24],tmp=(C_word)a,a+=12,tmp);
t12=C_i_car(((C_word*)t0)[20]);
if(C_truep(t10)){
t13=C_i_cdr(t10);
/* unboxing.scm:340: walk */
t14=((C_word*)((C_word*)t0)[13])[1];
f_2014(t14,t11,t12,t9,t13,((C_word*)t0)[21]);}
else{
/* unboxing.scm:340: walk */
t13=((C_word*)((C_word*)t0)[13])[1];
f_2014(t13,t11,t12,t9,C_SCHEME_FALSE,((C_word*)t0)[21]);}}
else{
t9=C_eqp(((C_word*)t0)[23],lf[68]);
if(C_truep(t9)){
t10=((C_word*)t0)[24];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
else{
t10=C_eqp(((C_word*)t0)[23],lf[69]);
t11=(C_truep(t10)?t10:C_eqp(((C_word*)t0)[23],lf[70]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2575,a[2]=((C_word*)t0)[17],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[21],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[20],a[9]=((C_word*)t0)[24],a[10]=((C_word*)t0)[4],tmp=(C_word)a,a+=11,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2599,a[2]=t12,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t14=C_i_car(((C_word*)t0)[20]);
/* unboxing.scm:357: walk */
t15=((C_word*)((C_word*)t0)[13])[1];
f_2014(t15,t13,t14,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[21]);}
else{
t12=C_eqp(((C_word*)t0)[23],lf[71]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2612,a[2]=((C_word*)t0)[24],a[3]=((C_word*)t0)[21],a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[20],tmp=(C_word)a,a+=9,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2679,a[2]=t13,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t15=C_i_car(((C_word*)t0)[20]);
/* unboxing.scm:364: walk */
t16=((C_word*)((C_word*)t0)[13])[1];
f_2014(t16,t14,t15,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[21]);}
else{
t13=C_eqp(((C_word*)t0)[23],lf[73]);
t14=(C_truep(t13)?t13:C_eqp(((C_word*)t0)[23],lf[74]));
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2693,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[21],a[4]=((C_word*)t0)[13],tmp=(C_word)a,a+=5,tmp);
t16=C_i_check_list_2(((C_word*)t0)[20],lf[61]);
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2712,a[2]=((C_word*)t0)[17],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[21],a[5]=((C_word*)t0)[24],tmp=(C_word)a,a+=6,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2720,a[2]=t15,a[3]=t19,tmp=(C_word)a,a+=4,tmp));
t21=((C_word*)t19)[1];
f_2720(t21,t17,((C_word*)t0)[20]);}
else{
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2742,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[21],a[4]=((C_word*)t0)[13],tmp=(C_word)a,a+=5,tmp);
t16=C_i_check_list_2(((C_word*)t0)[20],lf[61]);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2761,a[2]=((C_word*)t0)[24],tmp=(C_word)a,a+=3,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2763,a[2]=t15,a[3]=t19,tmp=(C_word)a,a+=4,tmp));
t21=((C_word*)t19)[1];
f_2763(t21,t17,((C_word*)t0)[20]);}}}}}}}}}}}

/* for-each-loop626 in k2049 in walk in walk-lambda in k893 */
static void C_fcall f_2763(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2763,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2773,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g627633 */
t5=((C_word*)t0)[2];
f_2742(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2771 in for-each-loop626 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2763(t3,((C_word*)t0)[2],t2);}

/* k2759 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* g627 in k2049 in walk in walk-lambda in k893 */
static void C_fcall f_2742(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2742,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2748,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2755,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* g638639 */
t5=t3;
f_2748(t5,t4,t2);}

/* k2753 in g627 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* invalidate71 */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1007(t2,((C_word*)t0)[2],t1);}

/* g638 in g627 in k2049 in walk in walk-lambda in k893 */
static void C_fcall f_2748(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2748,NULL,3,t0,t1,t2);}
/* g646647 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2014(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* for-each-loop595 in k2049 in walk in walk-lambda in k893 */
static void C_fcall f_2720(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2720,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2730,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g596602 */
t5=((C_word*)t0)[2];
f_2693(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2728 in for-each-loop595 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2720(t3,((C_word*)t0)[2],t2);}

/* k2710 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2712,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2715,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[4])){
/* unboxing.scm:376: straighten-call! */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1844(t3,t2,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2713 in k2710 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* g596 in k2049 in walk in walk-lambda in k893 */
static void C_fcall f_2693(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2693,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2699,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2706,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* g607608 */
t5=t3;
f_2699(t5,t4,t2);}

/* k2704 in g596 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* invalidate71 */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1007(t2,((C_word*)t0)[2],t1);}

/* g607 in g596 in k2049 in walk in walk-lambda in k893 */
static void C_fcall f_2699(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2699,NULL,3,t0,t1,t2);}
/* g615616 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2014(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k2677 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm:364: invalidate */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1007(t2,((C_word*)t0)[2],t1);}

/* k2610 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2612,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[8]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2621,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_2621(t6,((C_word*)t0)[2],t2,lf[72]);}

/* doloop584 in k2610 in k2049 in walk in walk-lambda in k893 */
static void C_fcall f_2621(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2621,NULL,4,t0,t1,t2,t3);}
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2635,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t6=C_i_car(t2);
/* unboxing.scm:371: walk */
t7=((C_word*)((C_word*)t0)[6])[1];
f_2014(t7,t5,t6,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t5=C_i_cddr(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2650,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=C_eqp(t3,lf[72]);
if(C_truep(t7)){
t8=C_i_cadr(t2);
/* unboxing.scm:368: walk */
t9=((C_word*)((C_word*)t0)[6])[1];
f_2014(t9,t6,t8,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2667,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t9=C_i_cadr(t2);
/* unboxing.scm:369: walk */
t10=((C_word*)((C_word*)t0)[6])[1];
f_2014(t10,t8,t9,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}}}

/* k2665 in doloop584 in k2610 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm:369: merge */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1035(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2648 in doloop584 in k2610 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_2621(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2633 in doloop584 in k2610 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm:371: merge */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1035(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2597 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm:357: invalidate */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1007(t2,((C_word*)t0)[2],t1);}

/* k2573 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2578,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* unboxing.scm:358: straighten-conditional! */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1718(t3,t2,((C_word*)t0)[2]);}

/* k2576 in k2573 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2578,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cadr(((C_word*)t0)[6]);
/* unboxing.scm:359: walk */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2014(t4,t2,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2579 in k2576 in k2573 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2581,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2584,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=C_i_caddr(((C_word*)t0)[6]);
/* unboxing.scm:360: walk */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2014(t4,t2,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2582 in k2579 in k2576 in k2573 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm:361: merge */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1035(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2486 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2491,a[2]=((C_word*)t0)[11],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[10])){
t3=(C_truep(((C_word*)t0)[9])?C_i_cdr(((C_word*)t0)[9]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2517,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
/* unboxing.scm:345: alias */
t5=((C_word*)((C_word*)t0)[6])[1];
f_1029(t5,t4,((C_word*)t0)[5]);}
else{
t4=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t3=(C_truep(t1)?C_i_cdr(t1):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_i_cdr(t1);
/* unboxing.scm:348: unboxed! */
t5=((C_word*)((C_word*)t0)[4])[1];
f_924(t5,t2,((C_word*)t0)[5],t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2540,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* unboxing.scm:350: boxed! */
t5=((C_word*)((C_word*)t0)[2])[1];
f_900(t5,t4,((C_word*)t0)[5]);}}}

/* k2538 in k2486 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm:351: invalidate */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1007(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2515 in k2486 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2517,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[5]);
t3=C_a_i_list2(&a,2,t1,t2);
t4=C_a_i_record4(&a,4,lf[13],lf[67],t3,((C_word*)t0)[4]);
/* unboxing.scm:343: copy-node! */
t5=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],t4,((C_word*)t0)[2]);}

/* k2489 in k2486 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k2409 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2411,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2414,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],tmp=(C_word)a,a+=13,tmp);
t3=((C_word*)t0)[13];
t4=(C_truep(t3)?C_SCHEME_FALSE:(C_truep(t1)?C_i_cdr(t1):C_SCHEME_FALSE));
if(C_truep(t4)){
t5=C_i_car(((C_word*)t0)[3]);
t6=C_i_cdr(t1);
/* unboxing.scm:328: unboxed! */
t7=((C_word*)((C_word*)t0)[2])[1];
f_924(t7,t2,t5,t6);}
else{
t5=t2;
f_2414(2,t5,C_SCHEME_UNDEFINED);}}

/* k2412 in k2409 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2414,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2417,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cadr(((C_word*)t0)[5]);
/* unboxing.scm:329: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2014(t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[11]);}

/* k2415 in k2412 in k2409 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2417,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2420,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=C_i_assq(((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1]);
t4=(C_truep(t3)?C_i_cdr(t3):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_i_cdr(t3);
/* unboxing.scm:333: rebind-unboxed! */
t6=((C_word*)((C_word*)t0)[4])[1];
f_1560(t6,t2,((C_word*)t0)[3],t5);}
else{
/* unboxing.scm:334: straighten-binding! */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1592(t5,t2,((C_word*)t0)[3]);}}
else{
t3=t1;
t4=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2418 in k2415 in k2412 in k2409 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2393 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm:291: ##sys#get */
t2=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[65]);}

/* k2204 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2206,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(t1)){
t3=*((C_word*)lf[62]+1);
if(C_truep(t3)){
if(C_truep(t3)){
t4=t1;
t5=t2;
f_2209(t5,t4);}
else{
t4=t2;
f_2209(t4,C_SCHEME_FALSE);}}
else{
if(C_truep(C_i_cadddr(t1))){
t4=*((C_word*)lf[63]+1);
if(C_truep(t4)){
t5=t1;
t6=t2;
f_2209(t6,t5);}
else{
t5=t2;
f_2209(t5,C_SCHEME_FALSE);}}
else{
t4=t2;
f_2209(t4,C_SCHEME_FALSE);}}}
else{
t3=t2;
f_2209(t3,C_SCHEME_FALSE);}}

/* k2207 in k2204 in k2049 in walk in walk-lambda in k893 */
static void C_fcall f_2209(C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2209,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2210,a[2]=((C_word*)t0)[11],a[3]=t1,a[4]=((C_word*)t0)[12],tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[10],lf[57]);
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[11],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2346,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2346(t12,t8,((C_word*)t0)[10]);}

/* map-loop483 in k2207 in k2204 in k2049 in walk in walk-lambda in k893 */
static void C_fcall f_2346(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2346,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2375,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g489498 */
t5=((C_word*)t0)[2];
f_2210(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2373 in map-loop483 in k2207 in k2204 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2375(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2375,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2346(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2346(t6,((C_word*)t0)[3],t5);}}

/* k2218 in k2207 in k2204 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2220,2,t0,t1);}
t2=((C_word*)t0)[12];
if(C_truep(t2)){
t3=C_i_not(((C_word*)t0)[11]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2235,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t3)){
t5=t4;
f_2235(2,t5,t3);}
else{
if(C_truep(((C_word*)t0)[9])){
t5=f_986(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[9]);
if(C_truep(t5)){
t6=t4;
f_2235(2,t6,t5);}
else{
/* unboxing.scm:301: any */
t6=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)((C_word*)t0)[2])[1],t1);}}
else{
/* unboxing.scm:301: any */
t5=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)((C_word*)t0)[2])[1],t1);}}}
else{
t3=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2233 in k2218 in k2207 in k2204 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2235(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2235,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[11]);
t3=C_i_cadr(((C_word*)t0)[11]);
t4=C_i_caddr(((C_word*)t0)[11]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2247,a[2]=t4,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[9])){
if(C_truep(((C_word*)t0)[8])){
t6=C_i_assq(((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);
/* unboxing.scm:307: rewrite! */
t7=((C_word*)((C_word*)t0)[6])[1];
f_1103(t7,t5,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],t3,t4,t6);}
else{
/* unboxing.scm:307: rewrite! */
t6=((C_word*)((C_word*)t0)[6])[1];
f_1103(t6,t5,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],t3,t4,C_SCHEME_FALSE);}}
else{
t6=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,C_SCHEME_FALSE,t4));}}
else{
t2=C_i_caddr(((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2266,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[9])){
t4=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,C_SCHEME_FALSE,t2));}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2270,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(((C_word*)t0)[3],lf[61]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2303,a[2]=((C_word*)t0)[10],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2311,a[2]=t4,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_2311(t10,t6,((C_word*)t0)[3]);}}}

/* for-each-loop533 in k2233 in k2218 in k2207 in k2204 in k2049 in walk in walk-lambda in k893 */
static void C_fcall f_2311(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2311,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2321,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g534540 */
t5=((C_word*)t0)[2];
f_2270(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2319 in for-each-loop533 in k2233 in k2218 in k2207 in k2204 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2311(t3,((C_word*)t0)[2],t2);}

/* k2301 in k2233 in k2218 in k2207 in k2204 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2303,2,t0,t1);}
if(C_truep(((C_word*)t0)[6])){
/* unboxing.scm:321: unboxed! */
t2=((C_word*)((C_word*)t0)[5])[1];
f_924(t2,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[3]));}}

/* g534 in k2233 in k2218 in k2207 in k2204 in k2049 in walk in walk-lambda in k893 */
static void C_fcall f_2270(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2270,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2277,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=C_i_car(t2);
t5=t3;
f_2277(t5,(C_truep(t4)?C_i_cdr(t2):C_SCHEME_FALSE));}
else{
t4=t3;
f_2277(t4,C_SCHEME_FALSE);}}

/* k2275 in g534 in k2233 in k2218 in k2207 in k2204 in k2049 in walk in walk-lambda in k893 */
static void C_fcall f_2277(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[4]);
t3=C_i_cdr(((C_word*)t0)[4]);
/* unboxing.scm:318: unboxed! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_924(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2264 in k2233 in k2218 in k2207 in k2204 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2266,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[2]));}

/* k2245 in k2233 in k2218 in k2207 in k2204 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2247,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[2]));}

/* g489 in k2207 in k2204 in k2049 in walk in walk-lambda in k893 */
static void C_fcall f_2210(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2210,NULL,3,t0,t1,t2);}
/* g506507 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2014(t3,t1,t2,C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2170 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2172,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[4]);
t3=C_a_i_list2(&a,2,t1,t2);
t4=C_a_i_record4(&a,4,lf[13],lf[18],t3,C_SCHEME_END_OF_LIST);
/* unboxing.scm:283: copy-node! */
t5=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],t4,((C_word*)t0)[2]);}

/* k2144 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a2068 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2069(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2069,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2073,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[5])){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_car(((C_word*)t0)[4]);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_i_check_list_2(t2,lf[57]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2092,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2098,a[2]=t8,a[3]=t14,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t16=((C_word*)t14)[1];
f_2098(t16,t12,t2);}}

/* map-loop424 in a2068 in k2049 in walk in walk-lambda in k893 */
static void C_fcall f_2098(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2098,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2127,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[58]+1);
/* g447448 */
t6=t5;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,C_SCHEME_FALSE);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2125 in map-loop424 in a2068 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2127(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2127,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2098(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2098(t6,((C_word*)t0)[3],t5);}}

/* k2090 in a2068 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[4]);
/* unboxing.scm:272: walk-lambda */
t3=((C_word*)((C_word*)t0)[3])[1];
f_897(t3,((C_word*)t0)[2],t1,t2);}

/* k2071 in a2068 in k2049 in walk in walk-lambda in k893 */
static void C_ccall f_2073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* straighten-call! in walk-lambda in k893 */
static void C_fcall f_1844(C_word t0,C_word t1,C_word t2){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1844,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=t2;
t6=C_slot(t5,C_fix(3));
t7=t2;
t8=C_slot(t7,C_fix(2));
t9=C_i_car(t6);
t10=C_i_cdr(t6);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1878,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1881,a[2]=t1,a[3]=t10,a[4]=((C_word*)t0)[2],a[5]=t8,a[6]=t4,a[7]=t9,a[8]=t2,a[9]=t11,tmp=(C_word)a,a+=10,tmp);
t13=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1999,tmp=(C_word)a,a+=2,tmp);
/* unboxing.scm:233: any */
t14=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,t10);}

/* a1998 in straighten-call! in walk-lambda in k893 */
static void C_ccall f_1999(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1999,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(t3,lf[52]));}

/* k1879 in straighten-call! in walk-lambda in k893 */
static void C_ccall f_1881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1881,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1891,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1893,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1893(t6,t2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[8]);}}

/* loop in k1879 in straighten-call! in walk-lambda in k893 */
static void C_fcall f_1893(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1893,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1920,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* unboxing.scm:240: reverse */
t5=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}
else{
t4=C_i_car(t2);
t5=C_slot(t4,C_fix(1));
t6=C_slot(t4,C_fix(3));
if(C_truep((C_truep(C_eqp(t5,lf[51]))?C_SCHEME_TRUE:(C_truep(C_eqp(t5,lf[15]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t7=C_slot(t4,C_fix(2));
t8=C_i_car(t6);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1974,a[2]=t7,a[3]=t5,a[4]=t1,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t10=C_i_cdr(t2);
t11=C_i_cadr(t6);
t12=C_a_i_cons(&a,2,t11,t3);
/* unboxing.scm:249: loop */
t17=t9;
t18=t10;
t19=t12;
t1=t17;
t2=t18;
t3=t19;
goto loop;}
else{
t7=C_i_cdr(t2);
t8=C_a_i_cons(&a,2,t4,t3);
/* unboxing.scm:250: loop */
t17=t1;
t18=t7;
t19=t8;
t1=t17;
t2=t18;
t3=t19;
goto loop;}}}

/* k1972 in loop in k1879 in straighten-call! in walk-lambda in k893 */
static void C_ccall f_1974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1974,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[5],t1);
t3=((C_word*)t0)[4];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[13],((C_word*)t0)[3],((C_word*)t0)[2],t2));}

/* k1918 in loop in k1879 in straighten-call! in walk-lambda in k893 */
static void C_ccall f_1920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1920,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=C_a_i_record4(&a,4,lf[13],((C_word*)t0)[5],((C_word*)t0)[4],t2);
/* unboxing.scm:239: straighten-call! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1844(t4,((C_word*)t0)[2],t3);}

/* k1889 in k1879 in straighten-call! in walk-lambda in k893 */
static void C_ccall f_1891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm:236: copy-node! */
t2=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1876 in straighten-call! in walk-lambda in k893 */
static void C_ccall f_1878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* straighten-conditional! in walk-lambda in k893 */
static void C_fcall f_1718(C_word t0,C_word t1,C_word t2){
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
C_word t22;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1718,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(3));
t5=C_i_car(t4);
t6=C_slot(t5,C_fix(1));
if(C_truep((C_truep(C_eqp(t6,lf[51]))?C_SCHEME_TRUE:(C_truep(C_eqp(t6,lf[15]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1750,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t8=C_slot(t5,C_fix(2));
t9=C_slot(t5,C_fix(3));
t10=C_i_car(t9);
t11=t2;
t12=C_slot(t11,C_fix(1));
t13=t2;
t14=C_slot(t13,C_fix(2));
t15=C_i_cadr(t9);
t16=C_i_cdr(t4);
t17=C_a_i_cons(&a,2,t15,t16);
t18=C_a_i_record4(&a,4,lf[13],t12,t14,t17);
t19=C_a_i_list2(&a,2,t10,t18);
t20=C_a_i_record4(&a,4,lf[13],t6,t8,t19);
/* unboxing.scm:210: copy-node! */
t21=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t21+1)))(4,t21,t7,t20,t2);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k1748 in straighten-conditional! in walk-lambda in k893 */
static void C_ccall f_1750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1750,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1753,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
t4=C_slot(t3,C_fix(3));
t5=C_i_cadr(t4);
/* unboxing.scm:221: straighten-conditional! */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1718(t6,t2,t5);}

/* k1751 in k1748 in straighten-conditional! in walk-lambda in k893 */
static void C_ccall f_1753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm:223: straighten-binding! */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1592(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* straighten-binding! in walk-lambda in k893 */
static void C_fcall f_1592(C_word t0,C_word t1,C_word t2){
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
C_word t22;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1592,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(3));
t5=C_i_car(t4);
t6=C_slot(t5,C_fix(1));
if(C_truep((C_truep(C_eqp(t6,lf[51]))?C_SCHEME_TRUE:(C_truep(C_eqp(t6,lf[15]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1624,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_slot(t5,C_fix(2));
t9=C_slot(t5,C_fix(3));
t10=C_i_car(t9);
t11=t2;
t12=C_slot(t11,C_fix(1));
t13=t2;
t14=C_slot(t13,C_fix(2));
t15=C_i_cadr(t9);
t16=C_i_cadr(t4);
t17=C_a_i_list2(&a,2,t15,t16);
t18=C_a_i_record4(&a,4,lf[13],t12,t14,t17);
t19=C_a_i_list2(&a,2,t10,t18);
t20=C_a_i_record4(&a,4,lf[13],t6,t8,t19);
/* unboxing.scm:186: copy-node! */
t21=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t21+1)))(4,t21,t7,t20,t2);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k1622 in straighten-binding! in walk-lambda in k893 */
static void C_ccall f_1624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1627,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* unboxing.scm:199: straighten-binding! */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1592(t3,t2,((C_word*)t0)[4]);}

/* k1625 in k1622 in straighten-binding! in walk-lambda in k893 */
static void C_ccall f_1627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[4];
t3=C_slot(t2,C_fix(3));
t4=C_i_cadr(t3);
/* unboxing.scm:200: straighten-binding! */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1592(t5,((C_word*)t0)[2],t4);}

/* rebind-unboxed! in walk-lambda in k893 */
static void C_fcall f_1560(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1560,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1564,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=t2;
t6=C_slot(t5,C_fix(2));
t7=C_i_car(t6);
/* unboxing.scm:173: alias */
t8=((C_word*)((C_word*)t0)[2])[1];
f_1029(t8,t4,t7);}

/* k1562 in rebind-unboxed! in walk-lambda in k893 */
static void C_ccall f_1564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1564,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1567,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* unboxing.scm:174: node-class-set! */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],lf[15]);}

/* k1565 in k1562 in rebind-unboxed! in walk-lambda in k893 */
static void C_ccall f_1567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1570,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
/* unboxing.scm:175: node-parameters-set! */
t4=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[4],t3);}

/* k1568 in k1565 in k1562 in rebind-unboxed! in walk-lambda in k893 */
static void C_ccall f_1570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm:176: straighten-binding! */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1592(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* rewrite! in walk-lambda in k893 */
static void C_fcall f_1103(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1103,NULL,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1110,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t4,a[5]=t5,a[6]=t7,a[7]=t8,a[8]=t3,a[9]=t2,a[10]=t1,a[11]=((C_word*)t0)[3],a[12]=((C_word*)t0)[4],tmp=(C_word)a,a+=13,tmp);
/* unboxing.scm:98: symbolify */
t10=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t3);}

/* k1108 in rewrite! in walk-lambda in k893 */
static void C_ccall f_1110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1110,2,t0,t1);}
t2=C_set_block_item(((C_word*)t0)[12],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1114,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1555,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* unboxing.scm:101: ##sys#hash-table-ref */
t5=*((C_word*)lf[47]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],t1);}

/* k1553 in k1108 in rewrite! in walk-lambda in k893 */
static void C_ccall f_1555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1555,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=C_a_i_plus(&a,2,t2,C_fix(1));
/* unboxing.scm:100: ##sys#hash-table-set! */
t4=*((C_word*)lf[46]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t3);}
else{
/* unboxing.scm:100: ##sys#hash-table-set! */
t2=*((C_word*)lf[46]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],C_fix(1));}}

/* k1112 in k1108 in rewrite! in walk-lambda in k893 */
static void C_ccall f_1114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1114,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1117,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1124,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1126,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1126(t7,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* loop in k1112 in k1108 in rewrite! in walk-lambda in k893 */
static void C_fcall f_1126(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1126,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_nullp(t2))){
t6=C_a_i_list1(&a,1,((C_word*)t0)[5]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1374,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* unboxing.scm:107: reverse */
t8=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t5);}
else{
t6=C_i_car(t4);
t7=C_eqp(t6,lf[31]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1383,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t7)){
t9=t8;
f_1383(t9,t7);}
else{
t9=C_i_car(t2);
t10=t8;
f_1383(t10,(C_truep(t9)?C_i_cdr(t9):C_SCHEME_FALSE));}}}

/* k1381 in loop in k1112 in k1108 in rewrite! in walk-lambda in k893 */
static void C_fcall f_1383(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1383,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[7]);
t3=C_i_cdr(((C_word*)t0)[6]);
t4=C_i_cdr(((C_word*)t0)[5]);
t5=C_i_car(((C_word*)t0)[6]);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[4]);
/* unboxing.scm:143: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_1126(t7,((C_word*)t0)[2],t2,t3,t4,t6);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1409,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* unboxing.scm:149: gensym */
t3=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[45]);}}

/* k1407 in k1381 in loop in k1112 in k1108 in rewrite! in walk-lambda in k893 */
static void C_ccall f_1409(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1409,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[7]);
t3=C_a_i_list2(&a,2,t1,t2);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t5=C_i_car(((C_word*)t0)[7]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1486,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t7=C_eqp(t5,lf[24]);
if(C_truep(t7)){
t8=t4;
f_1471(t8,C_a_i_list1(&a,1,lf[37]));}
else{
t8=C_eqp(t5,lf[25]);
if(C_truep(t8)){
t9=t4;
f_1471(t9,C_a_i_list1(&a,1,lf[38]));}
else{
t9=C_eqp(t5,lf[16]);
if(C_truep(t9)){
t10=t4;
f_1471(t10,C_a_i_list1(&a,1,lf[39]));}
else{
t10=C_eqp(t5,lf[20]);
if(C_truep(t10)){
t11=t4;
f_1471(t11,C_a_i_list1(&a,1,lf[40]));}
else{
t11=C_eqp(t5,lf[22]);
if(C_truep(t11)){
t12=t4;
f_1471(t12,C_a_i_list1(&a,1,lf[41]));}
else{
t12=C_eqp(t5,lf[29]);
if(C_truep(t12)){
t13=t4;
f_1471(t13,C_a_i_list1(&a,1,lf[42]));}
else{
t13=C_eqp(t5,lf[31]);
if(C_truep(t13)){
t14=t4;
f_1471(t14,C_a_i_list1(&a,1,lf[43]));}
else{
t14=C_i_car(((C_word*)t0)[7]);
/* unboxing.scm:162: bomb */
t15=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t6,lf[44],t14);}}}}}}}}

/* k1484 in k1407 in k1381 in loop in k1112 in k1108 in rewrite! in walk-lambda in k893 */
static void C_ccall f_1486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1486,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1471(t2,C_a_i_list1(&a,1,t1));}

/* k1469 in k1407 in k1381 in loop in k1112 in k1108 in rewrite! in walk-lambda in k893 */
static void C_fcall f_1471(C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1471,NULL,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[9]);
t3=C_a_i_list1(&a,1,t2);
t4=C_a_i_record4(&a,4,lf[13],lf[28],t1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1438,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_i_cdr(((C_word*)t0)[6]);
t7=C_i_cdr(((C_word*)t0)[9]);
t8=C_i_cdr(((C_word*)t0)[5]);
t9=C_a_i_list1(&a,1,((C_word*)t0)[4]);
t10=C_a_i_record4(&a,4,lf[13],lf[18],t9,C_SCHEME_END_OF_LIST);
t11=C_a_i_cons(&a,2,t10,((C_word*)t0)[3]);
/* unboxing.scm:164: loop */
t12=((C_word*)((C_word*)t0)[2])[1];
f_1126(t12,t5,t6,t7,t8,t11);}

/* k1436 in k1469 in k1407 in k1381 in loop in k1112 in k1108 in rewrite! in walk-lambda in k893 */
static void C_ccall f_1438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1438,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[13],lf[15],((C_word*)t0)[2],t2));}

/* k1372 in loop in k1112 in k1108 in rewrite! in walk-lambda in k893 */
static void C_ccall f_1374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1374,2,t0,t1);}
t2=C_a_i_record4(&a,4,lf[13],lf[14],((C_word*)t0)[5],t1);
t3=(C_truep(((C_word*)t0)[4])?C_i_cdr(((C_word*)t0)[4]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1150,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* unboxing.scm:110: gensym */
t5=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[35]);}}

/* k1148 in k1372 in loop in k1112 in k1108 in rewrite! in walk-lambda in k893 */
static void C_ccall f_1150(C_word c,C_word t0,C_word t1){
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
C_word ab[47],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1150,2,t0,t1);}
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[4]);
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1170,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[16]);
if(C_truep(t5)){
t6=C_a_i_list2(&a,2,lf[17],C_fix(4));
t7=C_a_i_list2(&a,2,t1,((C_word*)t0)[4]);
t8=C_a_i_record4(&a,4,lf[13],lf[18],t7,C_SCHEME_END_OF_LIST);
t9=C_a_i_list1(&a,1,t8);
t10=C_a_i_record4(&a,4,lf[13],lf[19],t6,t9);
t11=C_a_i_list2(&a,2,((C_word*)t0)[3],t10);
t12=((C_word*)t0)[2];
t13=t12;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_a_i_record4(&a,4,lf[13],lf[15],t2,t11));}
else{
t6=C_eqp(t3,lf[20]);
if(C_truep(t6)){
t7=C_a_i_list2(&a,2,lf[21],C_fix(4));
t8=C_a_i_list2(&a,2,t1,((C_word*)t0)[4]);
t9=C_a_i_record4(&a,4,lf[13],lf[18],t8,C_SCHEME_END_OF_LIST);
t10=C_a_i_list1(&a,1,t9);
t11=C_a_i_record4(&a,4,lf[13],lf[19],t7,t10);
t12=C_a_i_list2(&a,2,((C_word*)t0)[3],t11);
t13=((C_word*)t0)[2];
t14=t13;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_a_i_record4(&a,4,lf[13],lf[15],t2,t12));}
else{
t7=C_eqp(t3,lf[22]);
if(C_truep(t7)){
t8=C_a_i_list2(&a,2,lf[23],C_fix(2));
t9=C_a_i_list2(&a,2,t1,((C_word*)t0)[4]);
t10=C_a_i_record4(&a,4,lf[13],lf[18],t9,C_SCHEME_END_OF_LIST);
t11=C_a_i_list1(&a,1,t10);
t12=C_a_i_record4(&a,4,lf[13],lf[19],t8,t11);
t13=C_a_i_list2(&a,2,((C_word*)t0)[3],t12);
t14=((C_word*)t0)[2];
t15=t14;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_record4(&a,4,lf[13],lf[15],t2,t13));}
else{
t8=C_eqp(t3,lf[24]);
t9=(C_truep(t8)?t8:C_eqp(t3,lf[25]));
if(C_truep(t9)){
t10=C_eqp(((C_word*)t0)[4],lf[24]);
t11=(C_truep(t10)?C_a_i_list1(&a,1,lf[26]):C_a_i_list1(&a,1,lf[27]));
t12=C_a_i_list2(&a,2,t1,((C_word*)t0)[4]);
t13=C_a_i_record4(&a,4,lf[13],lf[18],t12,C_SCHEME_END_OF_LIST);
t14=C_a_i_list1(&a,1,t13);
t15=C_a_i_record4(&a,4,lf[13],lf[28],t11,t14);
t16=C_a_i_list2(&a,2,((C_word*)t0)[3],t15);
t17=((C_word*)t0)[2];
t18=t17;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,C_a_i_record4(&a,4,lf[13],lf[15],t2,t16));}
else{
t10=C_eqp(t3,lf[29]);
if(C_truep(t10)){
t11=C_a_i_list2(&a,2,t1,((C_word*)t0)[4]);
t12=C_a_i_record4(&a,4,lf[13],lf[18],t11,C_SCHEME_END_OF_LIST);
t13=C_a_i_list1(&a,1,t12);
t14=C_a_i_record4(&a,4,lf[13],lf[28],lf[30],t13);
t15=C_a_i_list2(&a,2,((C_word*)t0)[3],t14);
t16=((C_word*)t0)[2];
t17=t16;
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,C_a_i_record4(&a,4,lf[13],lf[15],t2,t15));}
else{
t11=C_eqp(t3,lf[31]);
if(C_truep(t11)){
/* unboxing.scm:139: bomb */
t12=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t4,lf[33]);}
else{
/* unboxing.scm:140: bomb */
t12=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t4,lf[34],((C_word*)t0)[4]);}}}}}}}

/* k1168 in k1148 in k1372 in loop in k1112 in k1108 in rewrite! in walk-lambda in k893 */
static void C_ccall f_1170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1170,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[13],lf[15],((C_word*)t0)[2],t2));}

/* k1122 in k1112 in k1108 in rewrite! in walk-lambda in k893 */
static void C_ccall f_1124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm:102: copy-node! */
t2=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1115 in k1112 in k1108 in rewrite! in walk-lambda in k893 */
static void C_ccall f_1117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm:170: straighten-binding! */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1592(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* merge in walk-lambda in k893 */
static void C_fcall f_1035(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1035,NULL,4,t0,t1,t2,t3);}
t4=C_i_not(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1045,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_1045(t6,t4);}
else{
t6=C_i_cdr(t2);
t7=t5;
f_1045(t7,C_i_not(t6));}}

/* k1043 in merge in walk-lambda in k893 */
static void C_fcall f_1045(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1045,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1048,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* unboxing.scm:86: invalidate */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1007(t3,t2,((C_word*)t0)[3]);}
else{
t2=C_i_not(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1057,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_1057(t4,t2);}
else{
t4=C_i_cdr(((C_word*)t0)[3]);
t5=t3;
f_1057(t5,C_i_not(t4));}}}

/* k1055 in k1043 in merge in walk-lambda in k893 */
static void C_fcall f_1057(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1057,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1060,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* unboxing.scm:89: invalidate */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1007(t3,t2,((C_word*)t0)[3]);}
else{
if(C_truep(C_i_equalp(((C_word*)t0)[3],((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_eqp(t2,t3);
if(C_truep(t4)){
t5=C_i_cdr(((C_word*)t0)[3]);
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,C_SCHEME_FALSE,t5));}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}}}

/* k1058 in k1055 in k1043 in merge in walk-lambda in k893 */
static void C_ccall f_1060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k1046 in k1043 in merge in walk-lambda in k893 */
static void C_ccall f_1048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* alias in walk-lambda in k893 */
static void C_fcall f_1029(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1029,NULL,3,t0,t1,t2);}
/* unboxing.scm:82: alist-ref */
t3=*((C_word*)lf[10]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t1,t2,((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[11]+1),t2);}

/* invalidate in walk-lambda in k893 */
static void C_fcall f_1007(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1007,NULL,3,t0,t1,t2);}
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_i_car(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_i_car(t2);
/* unboxing.scm:79: boxed! */
t6=((C_word*)((C_word*)t0)[2])[1];
f_900(t6,t1,t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* unboxed-value? in walk-lambda in k893 */
static void C_ccall f_998(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_998,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_i_cdr(t2):C_SCHEME_FALSE));}

/* unboxed? in walk-lambda in k893 */
static C_word C_fcall f_986(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=C_i_assq(t1,((C_word*)((C_word*)t0)[2])[1]);
return((C_truep(t2)?C_i_cdr(t2):C_SCHEME_FALSE));}

/* unboxed! in walk-lambda in k893 */
static void C_fcall f_924(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_924,NULL,4,t0,t1,t2,t3);}
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_935,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* g99100 */
t6=t5;
f_935(t6,t1,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_976,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_984,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* unboxing.scm:67: gensym */
t7=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[9]);}}

/* k982 in unboxed! in walk-lambda in k893 */
static void C_ccall f_984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm:67: alist-cons */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k974 in unboxed! in walk-lambda in k893 */
static void C_ccall f_976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_976,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_980,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* unboxing.scm:68: alist-cons */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}

/* k978 in k974 in unboxed! in walk-lambda in k893 */
static void C_ccall f_980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* g99 in unboxed! in walk-lambda in k893 */
static void C_fcall f_935(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_935,NULL,3,t0,t1,t2);}
if(C_truep(C_i_cdr(t2))){
t3=C_i_cdr(t2);
t4=C_eqp(t3,((C_word*)t0)[4]);
t5=(C_truep(t4)?((C_word*)t0)[4]:C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_set_cdr(t2,t5));}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_955,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* unboxing.scm:64: alist-cons */
t7=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_969,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* unboxing.scm:65: alist-cons */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}}

/* k967 in g99 in unboxed! in walk-lambda in k893 */
static void C_ccall f_969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_cdr(((C_word*)((C_word*)t0)[2])[1],t1));}

/* k953 in g99 in unboxed! in walk-lambda in k893 */
static void C_ccall f_955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* boxed! in walk-lambda in k893 */
static void C_fcall f_900(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_900,NULL,3,t0,t1,t2);}
t3=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t3)){
t4=t1;
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_set_cdr(t3,C_SCHEME_FALSE));}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_922,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* unboxing.scm:54: alist-cons */
t5=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t2,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}}

/* k920 in boxed! in walk-lambda in k893 */
static void C_ccall f_922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_873 in k869 in k866 */
static void C_ccall f_873(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_873r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_873r(t0,t1,t2,t3);}}

static void C_ccall f_873r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
if(C_truep(C_fudge(C_fix(13)))){
t4=*((C_word*)lf[1]+1);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_883,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* display */
t6=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,lf[5],t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k881 */
static void C_ccall f_883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_883,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_886,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_apply(6,0,t2,*((C_word*)lf[3]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k884 in k881 */
static void C_ccall f_886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[176] = {
{"toplevel:unboxing_2escm",(void*)C_unboxing_toplevel},
{"f_868:unboxing_2escm",(void*)f_868},
{"f_871:unboxing_2escm",(void*)f_871},
{"f_2876:unboxing_2escm",(void*)f_2876},
{"f_2879:unboxing_2escm",(void*)f_2879},
{"f_2882:unboxing_2escm",(void*)f_2882},
{"f_2885:unboxing_2escm",(void*)f_2885},
{"f_2888:unboxing_2escm",(void*)f_2888},
{"f_2891:unboxing_2escm",(void*)f_2891},
{"f_2894:unboxing_2escm",(void*)f_2894},
{"f_2897:unboxing_2escm",(void*)f_2897},
{"f_2900:unboxing_2escm",(void*)f_2900},
{"f_2903:unboxing_2escm",(void*)f_2903},
{"f_2906:unboxing_2escm",(void*)f_2906},
{"f_2909:unboxing_2escm",(void*)f_2909},
{"f_2912:unboxing_2escm",(void*)f_2912},
{"f_2915:unboxing_2escm",(void*)f_2915},
{"f_2918:unboxing_2escm",(void*)f_2918},
{"f_2921:unboxing_2escm",(void*)f_2921},
{"f_2924:unboxing_2escm",(void*)f_2924},
{"f_2927:unboxing_2escm",(void*)f_2927},
{"f_2930:unboxing_2escm",(void*)f_2930},
{"f_2933:unboxing_2escm",(void*)f_2933},
{"f_2936:unboxing_2escm",(void*)f_2936},
{"f_2939:unboxing_2escm",(void*)f_2939},
{"f_2942:unboxing_2escm",(void*)f_2942},
{"f_2945:unboxing_2escm",(void*)f_2945},
{"f_2948:unboxing_2escm",(void*)f_2948},
{"f_2951:unboxing_2escm",(void*)f_2951},
{"f_2954:unboxing_2escm",(void*)f_2954},
{"f_2957:unboxing_2escm",(void*)f_2957},
{"f_2960:unboxing_2escm",(void*)f_2960},
{"f_2963:unboxing_2escm",(void*)f_2963},
{"f_2966:unboxing_2escm",(void*)f_2966},
{"f_2969:unboxing_2escm",(void*)f_2969},
{"f_2972:unboxing_2escm",(void*)f_2972},
{"f_2975:unboxing_2escm",(void*)f_2975},
{"f_2978:unboxing_2escm",(void*)f_2978},
{"f_2981:unboxing_2escm",(void*)f_2981},
{"f_2984:unboxing_2escm",(void*)f_2984},
{"f_2987:unboxing_2escm",(void*)f_2987},
{"f_2990:unboxing_2escm",(void*)f_2990},
{"f_2993:unboxing_2escm",(void*)f_2993},
{"f_2996:unboxing_2escm",(void*)f_2996},
{"f_2999:unboxing_2escm",(void*)f_2999},
{"f_3002:unboxing_2escm",(void*)f_3002},
{"f_3005:unboxing_2escm",(void*)f_3005},
{"f_3008:unboxing_2escm",(void*)f_3008},
{"f_3011:unboxing_2escm",(void*)f_3011},
{"f_3014:unboxing_2escm",(void*)f_3014},
{"f_3017:unboxing_2escm",(void*)f_3017},
{"f_3020:unboxing_2escm",(void*)f_3020},
{"f_2861:unboxing_2escm",(void*)f_2861},
{"f_2869:unboxing_2escm",(void*)f_2869},
{"f_891:unboxing_2escm",(void*)f_891},
{"f_895:unboxing_2escm",(void*)f_895},
{"f_2829:unboxing_2escm",(void*)f_2829},
{"f_2835:unboxing_2escm",(void*)f_2835},
{"f_2840:unboxing_2escm",(void*)f_2840},
{"f_2844:unboxing_2escm",(void*)f_2844},
{"f_2847:unboxing_2escm",(void*)f_2847},
{"f_2850:unboxing_2escm",(void*)f_2850},
{"f_2853:unboxing_2escm",(void*)f_2853},
{"f_897:unboxing_2escm",(void*)f_897},
{"f_2823:unboxing_2escm",(void*)f_2823},
{"f_2014:unboxing_2escm",(void*)f_2014},
{"f_2051:unboxing_2escm",(void*)f_2051},
{"f_2763:unboxing_2escm",(void*)f_2763},
{"f_2773:unboxing_2escm",(void*)f_2773},
{"f_2761:unboxing_2escm",(void*)f_2761},
{"f_2742:unboxing_2escm",(void*)f_2742},
{"f_2755:unboxing_2escm",(void*)f_2755},
{"f_2748:unboxing_2escm",(void*)f_2748},
{"f_2720:unboxing_2escm",(void*)f_2720},
{"f_2730:unboxing_2escm",(void*)f_2730},
{"f_2712:unboxing_2escm",(void*)f_2712},
{"f_2715:unboxing_2escm",(void*)f_2715},
{"f_2693:unboxing_2escm",(void*)f_2693},
{"f_2706:unboxing_2escm",(void*)f_2706},
{"f_2699:unboxing_2escm",(void*)f_2699},
{"f_2679:unboxing_2escm",(void*)f_2679},
{"f_2612:unboxing_2escm",(void*)f_2612},
{"f_2621:unboxing_2escm",(void*)f_2621},
{"f_2667:unboxing_2escm",(void*)f_2667},
{"f_2650:unboxing_2escm",(void*)f_2650},
{"f_2635:unboxing_2escm",(void*)f_2635},
{"f_2599:unboxing_2escm",(void*)f_2599},
{"f_2575:unboxing_2escm",(void*)f_2575},
{"f_2578:unboxing_2escm",(void*)f_2578},
{"f_2581:unboxing_2escm",(void*)f_2581},
{"f_2584:unboxing_2escm",(void*)f_2584},
{"f_2488:unboxing_2escm",(void*)f_2488},
{"f_2540:unboxing_2escm",(void*)f_2540},
{"f_2517:unboxing_2escm",(void*)f_2517},
{"f_2491:unboxing_2escm",(void*)f_2491},
{"f_2411:unboxing_2escm",(void*)f_2411},
{"f_2414:unboxing_2escm",(void*)f_2414},
{"f_2417:unboxing_2escm",(void*)f_2417},
{"f_2420:unboxing_2escm",(void*)f_2420},
{"f_2395:unboxing_2escm",(void*)f_2395},
{"f_2206:unboxing_2escm",(void*)f_2206},
{"f_2209:unboxing_2escm",(void*)f_2209},
{"f_2346:unboxing_2escm",(void*)f_2346},
{"f_2375:unboxing_2escm",(void*)f_2375},
{"f_2220:unboxing_2escm",(void*)f_2220},
{"f_2235:unboxing_2escm",(void*)f_2235},
{"f_2311:unboxing_2escm",(void*)f_2311},
{"f_2321:unboxing_2escm",(void*)f_2321},
{"f_2303:unboxing_2escm",(void*)f_2303},
{"f_2270:unboxing_2escm",(void*)f_2270},
{"f_2277:unboxing_2escm",(void*)f_2277},
{"f_2266:unboxing_2escm",(void*)f_2266},
{"f_2247:unboxing_2escm",(void*)f_2247},
{"f_2210:unboxing_2escm",(void*)f_2210},
{"f_2172:unboxing_2escm",(void*)f_2172},
{"f_2146:unboxing_2escm",(void*)f_2146},
{"f_2069:unboxing_2escm",(void*)f_2069},
{"f_2098:unboxing_2escm",(void*)f_2098},
{"f_2127:unboxing_2escm",(void*)f_2127},
{"f_2092:unboxing_2escm",(void*)f_2092},
{"f_2073:unboxing_2escm",(void*)f_2073},
{"f_1844:unboxing_2escm",(void*)f_1844},
{"f_1999:unboxing_2escm",(void*)f_1999},
{"f_1881:unboxing_2escm",(void*)f_1881},
{"f_1893:unboxing_2escm",(void*)f_1893},
{"f_1974:unboxing_2escm",(void*)f_1974},
{"f_1920:unboxing_2escm",(void*)f_1920},
{"f_1891:unboxing_2escm",(void*)f_1891},
{"f_1878:unboxing_2escm",(void*)f_1878},
{"f_1718:unboxing_2escm",(void*)f_1718},
{"f_1750:unboxing_2escm",(void*)f_1750},
{"f_1753:unboxing_2escm",(void*)f_1753},
{"f_1592:unboxing_2escm",(void*)f_1592},
{"f_1624:unboxing_2escm",(void*)f_1624},
{"f_1627:unboxing_2escm",(void*)f_1627},
{"f_1560:unboxing_2escm",(void*)f_1560},
{"f_1564:unboxing_2escm",(void*)f_1564},
{"f_1567:unboxing_2escm",(void*)f_1567},
{"f_1570:unboxing_2escm",(void*)f_1570},
{"f_1103:unboxing_2escm",(void*)f_1103},
{"f_1110:unboxing_2escm",(void*)f_1110},
{"f_1555:unboxing_2escm",(void*)f_1555},
{"f_1114:unboxing_2escm",(void*)f_1114},
{"f_1126:unboxing_2escm",(void*)f_1126},
{"f_1383:unboxing_2escm",(void*)f_1383},
{"f_1409:unboxing_2escm",(void*)f_1409},
{"f_1486:unboxing_2escm",(void*)f_1486},
{"f_1471:unboxing_2escm",(void*)f_1471},
{"f_1438:unboxing_2escm",(void*)f_1438},
{"f_1374:unboxing_2escm",(void*)f_1374},
{"f_1150:unboxing_2escm",(void*)f_1150},
{"f_1170:unboxing_2escm",(void*)f_1170},
{"f_1124:unboxing_2escm",(void*)f_1124},
{"f_1117:unboxing_2escm",(void*)f_1117},
{"f_1035:unboxing_2escm",(void*)f_1035},
{"f_1045:unboxing_2escm",(void*)f_1045},
{"f_1057:unboxing_2escm",(void*)f_1057},
{"f_1060:unboxing_2escm",(void*)f_1060},
{"f_1048:unboxing_2escm",(void*)f_1048},
{"f_1029:unboxing_2escm",(void*)f_1029},
{"f_1007:unboxing_2escm",(void*)f_1007},
{"f_998:unboxing_2escm",(void*)f_998},
{"f_986:unboxing_2escm",(void*)f_986},
{"f_924:unboxing_2escm",(void*)f_924},
{"f_984:unboxing_2escm",(void*)f_984},
{"f_976:unboxing_2escm",(void*)f_976},
{"f_980:unboxing_2escm",(void*)f_980},
{"f_935:unboxing_2escm",(void*)f_935},
{"f_969:unboxing_2escm",(void*)f_969},
{"f_955:unboxing_2escm",(void*)f_955},
{"f_900:unboxing_2escm",(void*)f_900},
{"f_922:unboxing_2escm",(void*)f_922},
{"f_873:unboxing_2escm",(void*)f_873},
{"f_883:unboxing_2escm",(void*)f_883},
{"f_886:unboxing_2escm",(void*)f_886},
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
