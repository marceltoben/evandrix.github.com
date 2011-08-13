/* Generated from csc.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: csc.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -no-lambda-info -local -no-trace -output-file csc.c
   used units: library eval data_2dstructures ports srfi_2d1 srfi_2d13 utils files extras
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[407];
static double C_possibly_force_alignment;


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_931)
static void C_ccall f_931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_934)
static void C_ccall f_934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_937)
static void C_ccall f_937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_940)
static void C_ccall f_940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_943)
static void C_ccall f_943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_946)
static void C_ccall f_946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_949)
static void C_ccall f_949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_952)
static void C_ccall f_952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_955)
static void C_ccall f_955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4395)
static void C_ccall f_4395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4391)
static void C_ccall f_4391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4387)
static void C_ccall f_4387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4383)
static void C_ccall f_4383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_997)
static void C_ccall f_997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1001)
static void C_ccall f_1001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4373)
static void C_ccall f_4373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5521)
static void C_ccall f5521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5192)
static void C_ccall f5192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1036)
static void C_ccall f_1036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4361)
static void C_ccall f_4361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4365)
static void C_ccall f_4365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4357)
static void C_ccall f_4357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5517)
static void C_ccall f5517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4353)
static void C_ccall f_4353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5187)
static void C_ccall f5187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1040)
static void C_ccall f_1040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5182)
static void C_ccall f5182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1044)
static void C_ccall f_1044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5177)
static void C_ccall f5177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1048)
static void C_ccall f_1048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4323)
static void C_ccall f_4323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5172)
static void C_ccall f5172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1052)
static void C_ccall f_1052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4313)
static void C_ccall f_4313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5167)
static void C_ccall f5167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1056)
static void C_ccall f_1056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4303)
static void C_ccall f_4303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5162)
static void C_ccall f5162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1060)
static void C_ccall f_1060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1078)
static void C_ccall f_1078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1082)
static void C_ccall f_1082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4280)
static void C_ccall f_4280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1087)
static void C_ccall f_1087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4276)
static void C_ccall f_4276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1092)
static void C_ccall f_1092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1123)
static void C_ccall f_1123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4247)
static void C_ccall f_4247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4251)
static void C_ccall f_4251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4243)
static void C_ccall f_4243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5513)
static void C_ccall f5513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5157)
static void C_ccall f5157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4235)
static void C_ccall f_4235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4221)
static void C_ccall f_4221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4211)
static void C_ccall f_4211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1142)
static void C_ccall f_1142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4200)
static void C_ccall f_4200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1150)
static void C_fcall f_1150(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4187)
static void C_ccall f_4187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1158)
static void C_ccall f_1158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4180)
static void C_ccall f_4180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4176)
static void C_ccall f_4176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4172)
static void C_ccall f_4172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1348)
static void C_fcall f_1348(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1585)
static void C_ccall f_1585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2119)
static void C_fcall f_2119(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2355)
static void C_fcall f_2355(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2358)
static void C_fcall f_2358(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2796)
static void C_ccall f_2796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2414)
static void C_fcall f_2414(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2423)
static void C_fcall f_2423(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2637)
static void C_ccall f_2637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2759)
static void C_ccall f_2759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2659)
static void C_ccall f_2659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2724)
static void C_ccall f_2724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2700)
static void C_fcall f_2700(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2705)
static void C_ccall f_2705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2687)
static void C_ccall f_2687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2673)
static void C_ccall f_2673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2642)
static void C_ccall f_2642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2501)
static void C_fcall f_2501(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2586)
static void C_ccall f_2586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2546)
static void C_fcall f_2546(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2528)
static void C_ccall f_2528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2505)
static void C_ccall f_2505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2491)
static void C_ccall f_2491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2478)
static void C_ccall f_2478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2461)
static void C_ccall f_2461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2447)
static void C_ccall f_2447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2433)
static void C_ccall f_2433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2395)
static void C_ccall f_2395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2404)
static void C_ccall f_2404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2365)
static C_word C_fcall f_2365(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2348)
static void C_ccall f_2348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2352)
static void C_ccall f_2352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2332)
static void C_ccall f_2332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2271)
static void C_ccall f_2271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2283)
static void C_ccall f_2283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2275)
static void C_ccall f_2275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2232)
static void C_ccall f_2232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2244)
static void C_ccall f_2244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2236)
static void C_ccall f_2236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2211)
static void C_ccall f_2211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2215)
static void C_ccall f_2215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2177)
static void C_ccall f_2177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2143)
static void C_ccall f_2143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2102)
static void C_ccall f_2102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2092)
static void C_ccall f_2092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2082)
static void C_ccall f_2082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2058)
static void C_ccall f_2058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2072)
static void C_ccall f_2072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2068)
static void C_ccall f_2068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2048)
static void C_ccall f_2048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2038)
static void C_ccall f_2038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2028)
static void C_ccall f_2028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2018)
static void C_ccall f_2018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2008)
static void C_ccall f_2008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1987)
static void C_ccall f_1987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1963)
static void C_ccall f_1963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1939)
static void C_ccall f_1939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1935)
static void C_ccall f_1935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1931)
static void C_ccall f_1931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1874)
static void C_ccall f_1874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1877)
static void C_ccall f_1877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1777)
static void C_ccall f_1777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1762)
static void C_fcall f_1762(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1768)
static void C_ccall f_1768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1739)
static void C_ccall f_1739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1727)
static void C_ccall f_1727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1715)
static void C_ccall f_1715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1703)
static void C_ccall f_1703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1677)
static void C_ccall f_1677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1666)
static void C_ccall f_1666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1635)
static void C_ccall f_1635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1628)
static void C_ccall f_1628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1619)
static void C_ccall f_1619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1612)
static void C_ccall f_1612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1222)
static void C_ccall f_1222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1229)
static void C_ccall f_1229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1600)
static void C_ccall f_1600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1588)
static void C_ccall f_1588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1359)
static void C_ccall f_1359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1206)
static void C_ccall f_1206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1172)
static void C_ccall f_1172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1190)
static void C_ccall f_1190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1180)
static void C_ccall f_1180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1176)
static void C_ccall f_1176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1363)
static void C_ccall f_1363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1572)
static void C_ccall f_1572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1539)
static void C_ccall f_1539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1565)
static void C_ccall f_1565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5148)
static void C_ccall f5148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1558)
static void C_ccall f_1558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1545)
static void C_ccall f_1545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1548)
static void C_ccall f_1548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1366)
static void C_ccall f_1366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1502)
static void C_fcall f_1502(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1505)
static void C_fcall f_1505(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3017)
static void C_fcall f_3017(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2854)
static void C_ccall f_2854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5142)
static void C_ccall f5142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2885)
static void C_ccall f_2885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5137)
static void C_ccall f5137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2959)
static void C_ccall f_2959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2893)
static void C_fcall f_2893(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_fcall f_2909(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2938)
static void C_ccall f_2938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2877)
static void C_ccall f_2877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2861)
static void C_ccall f_2861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2865)
static void C_ccall f_2865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2983)
static void C_ccall f_2983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2994)
static void C_fcall f_2994(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3004)
static void C_ccall f_3004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1464)
static void C_ccall f_1464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1474)
static void C_ccall f_1474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1369)
static void C_ccall f_1369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1372)
static void C_fcall f_1372(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3264)
static void C_fcall f_3264(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3274)
static void C_ccall f_3274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3101)
static void C_ccall f_3101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3237)
static void C_fcall f_3237(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3240)
static void C_ccall f_3240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3255)
static void C_ccall f_3255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4136)
static void C_ccall f_4136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3243)
static void C_ccall f_3243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3104)
static void C_fcall f_3104(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3213)
static void C_fcall f_3213(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3223)
static void C_ccall f_3223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3142)
static void C_ccall f_3142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3211)
static void C_ccall f_3211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3146)
static void C_ccall f_3146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3186)
static void C_fcall f_3186(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3196)
static void C_ccall f_3196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3155)
static void C_ccall f_3155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3163)
static void C_fcall f_3163(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3173)
static void C_ccall f_3173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3105)
static void C_fcall f_3105(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3109)
static void C_ccall f_3109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5114)
static void C_ccall f5114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5109)
static void C_ccall f5109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3136)
static void C_ccall f_3136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3124)
static void C_ccall f_3124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3112)
static void C_ccall f_3112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3042)
static void C_fcall f_3042(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5104)
static void C_ccall f5104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3073)
static void C_ccall f_3073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5099)
static void C_ccall f5099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3077)
static void C_ccall f_3077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3081)
static void C_fcall f_3081(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3085)
static void C_ccall f_3085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1378)
static void C_ccall f_1378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1393)
static void C_ccall f_1393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1396)
static void C_ccall f_1396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1399)
static void C_ccall f_1399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1402)
static void C_ccall f_1402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1405)
static void C_ccall f_1405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1408)
static void C_ccall f_1408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1415)
static void C_ccall f_1415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1421)
static void C_ccall f_1421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5094)
static void C_ccall f5094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1445)
static void C_ccall f_1445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1424)
static void C_ccall f_1424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5089)
static void C_ccall f5089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1437)
static void C_ccall f_1437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1430)
static void C_ccall f_1430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1433)
static void C_ccall f_1433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3621)
static void C_fcall f_3621(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f5082)
static void C_ccall f5082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5077)
static void C_ccall f5077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3355)
static void C_ccall f_3355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3521)
static void C_ccall f_3521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3571)
static void C_ccall f_3571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3602)
static void C_ccall f_3602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3605)
static void C_ccall f_3605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3619)
static void C_ccall f_3619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5072)
static void C_ccall f5072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3615)
static void C_ccall f_3615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3608)
static void C_ccall f_3608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3611)
static void C_ccall f_3611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3574)
static void C_ccall f_3574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3581)
static void C_ccall f_3581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3598)
static void C_ccall f_3598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5067)
static void C_ccall f5067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3594)
static void C_ccall f_3594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3587)
static void C_ccall f_3587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3590)
static void C_ccall f_3590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3561)
static void C_ccall f_3561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3551)
static void C_ccall f_3551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3528)
static void C_ccall f_3528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5062)
static void C_ccall f5062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3532)
static void C_ccall f_3532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3538)
static void C_ccall f_3538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3541)
static void C_ccall f_3541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3358)
static void C_ccall f_3358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5057)
static void C_ccall f5057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3517)
static void C_ccall f_3517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3505)
static void C_ccall f_3505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3509)
static void C_ccall f_3509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3513)
static void C_ccall f_3513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3497)
static void C_ccall f_3497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3485)
static void C_ccall f_3485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3361)
static void C_ccall f_3361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3438)
static void C_fcall f_3438(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3475)
static void C_ccall f_3475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3465)
static void C_ccall f_3465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5052)
static void C_ccall f5052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3461)
static void C_ccall f_3461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3457)
static void C_ccall f_3457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3441)
static void C_ccall f_3441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5047)
static void C_ccall f5047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4057)
static void C_ccall f_4057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4036)
static void C_ccall f_4036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4053)
static void C_ccall f_4053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5042)
static void C_ccall f5042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4049)
static void C_ccall f_4049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4042)
static void C_ccall f_4042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4045)
static void C_ccall f_4045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3364)
static void C_ccall f_3364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3402)
static void C_fcall f_3402(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3422)
static void C_ccall f_3422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3682)
static void C_ccall f_3682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3717)
static void C_ccall f_3717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3731)
static void C_ccall f_3731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3721)
static void C_ccall f_3721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3710)
static void C_ccall f_3710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3405)
static void C_ccall f_3405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3418)
static void C_ccall f_3418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4063)
static void C_ccall f_4063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4066)
static void C_ccall f_4066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4069)
static void C_ccall f_4069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4072)
static void C_ccall f_4072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4118)
static void C_ccall f_4118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4125)
static void C_ccall f_4125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4075)
static void C_ccall f_4075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4087)
static void C_ccall f_4087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4092)
static void C_ccall f_4092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4100)
static void C_ccall f_4100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4081)
static void C_ccall f_4081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3367)
static void C_fcall f_3367(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3378)
static void C_fcall f_3378(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3388)
static void C_ccall f_3388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1331)
static C_word C_fcall f_1331(C_word *a);
C_noret_decl(f_1308)
static void C_fcall f_1308(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1313)
static void C_ccall f_1313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1269)
static void C_fcall f_1269(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1287)
static void C_ccall f_1287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1262)
static void C_fcall f_1262(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1267)
static void C_ccall f_1267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4162)
static void C_ccall f_4162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4165)
static void C_ccall f_4165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4007)
static void C_fcall f_4007(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4011)
static void C_ccall f_4011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3991)
static void C_fcall f_3991(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3946)
static void C_ccall f_3946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3952)
static void C_ccall f_3952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3968)
static void C_ccall f_3968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3974)
static void C_ccall f_3974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3977)
static void C_ccall f_3977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3955)
static void C_ccall f_3955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3905)
static void C_fcall f_3905(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3935)
static void C_ccall f_3935(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3912)
static void C_ccall f_3912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3923)
static void C_ccall f_3923(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3856)
static void C_ccall f_3856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3858)
static void C_fcall f_3858(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3888)
static void C_fcall f_3888(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3895)
static void C_ccall f_3895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3852)
static void C_ccall f_3852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3848)
static void C_ccall f_3848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3803)
static void C_fcall f_3803(C_word t0) C_noret;
C_noret_decl(f_3815)
static void C_fcall f_3815(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3811)
static void C_ccall f_3811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3773)
static void C_fcall f_3773(C_word t0) C_noret;
C_noret_decl(f_3801)
static void C_ccall f_3801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3781)
static void C_ccall f_3781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3733)
static void C_fcall f_3733(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3741)
static void C_ccall f_3741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3744)
static void C_ccall f_3744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3747)
static void C_ccall f_3747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5021)
static void C_ccall f5021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3750)
static void C_ccall f_3750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3753)
static void C_ccall f_3753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5016)
static void C_ccall f5016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3763)
static void C_ccall f_3763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3756)
static void C_ccall f_3756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3656)
static void C_fcall f_3656(C_word t0) C_noret;
C_noret_decl(f_3664)
static void C_ccall f_3664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3287)
static void C_fcall f_3287(C_word t0) C_noret;
C_noret_decl(f_3295)
static void C_ccall f_3295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3303)
static void C_fcall f_3303(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3332)
static void C_ccall f_3332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3301)
static void C_ccall f_3301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_978)
static void C_fcall f_978(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_989)
static void C_ccall f_989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_993)
static void C_ccall f_993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_982)
static void C_ccall f_982(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1150)
static void C_fcall trf_1150(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1150(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1150(t0,t1);}

C_noret_decl(trf_1348)
static void C_fcall trf_1348(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1348(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1348(t0,t1,t2);}

C_noret_decl(trf_2119)
static void C_fcall trf_2119(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2119(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2119(t0,t1);}

C_noret_decl(trf_2355)
static void C_fcall trf_2355(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2355(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2355(t0,t1);}

C_noret_decl(trf_2358)
static void C_fcall trf_2358(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2358(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2358(t0,t1);}

C_noret_decl(trf_2414)
static void C_fcall trf_2414(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2414(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2414(t0,t1);}

C_noret_decl(trf_2423)
static void C_fcall trf_2423(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2423(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2423(t0,t1);}

C_noret_decl(trf_2700)
static void C_fcall trf_2700(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2700(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2700(t0,t1);}

C_noret_decl(trf_2501)
static void C_fcall trf_2501(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2501(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2501(t0,t1);}

C_noret_decl(trf_2546)
static void C_fcall trf_2546(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2546(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2546(t0,t1,t2);}

C_noret_decl(trf_1762)
static void C_fcall trf_1762(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1762(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1762(t0,t1);}

C_noret_decl(trf_1502)
static void C_fcall trf_1502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1502(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1502(t0,t1);}

C_noret_decl(trf_1505)
static void C_fcall trf_1505(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1505(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1505(t0,t1);}

C_noret_decl(trf_3017)
static void C_fcall trf_3017(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3017(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3017(t0,t1,t2);}

C_noret_decl(trf_2893)
static void C_fcall trf_2893(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2893(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2893(t0,t1);}

C_noret_decl(trf_2909)
static void C_fcall trf_2909(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2909(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2909(t0,t1,t2);}

C_noret_decl(trf_2994)
static void C_fcall trf_2994(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2994(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2994(t0,t1,t2);}

C_noret_decl(trf_1372)
static void C_fcall trf_1372(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1372(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1372(t0,t1);}

C_noret_decl(trf_3264)
static void C_fcall trf_3264(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3264(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3264(t0,t1,t2);}

C_noret_decl(trf_3237)
static void C_fcall trf_3237(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3237(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3237(t0,t1);}

C_noret_decl(trf_3104)
static void C_fcall trf_3104(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3104(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3104(t0,t1);}

C_noret_decl(trf_3213)
static void C_fcall trf_3213(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3213(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3213(t0,t1,t2);}

C_noret_decl(trf_3186)
static void C_fcall trf_3186(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3186(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3186(t0,t1,t2);}

C_noret_decl(trf_3163)
static void C_fcall trf_3163(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3163(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3163(t0,t1,t2);}

C_noret_decl(trf_3105)
static void C_fcall trf_3105(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3105(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3105(t0,t1,t2);}

C_noret_decl(trf_3042)
static void C_fcall trf_3042(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3042(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3042(t0,t1,t2);}

C_noret_decl(trf_3081)
static void C_fcall trf_3081(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3081(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3081(t0,t1);}

C_noret_decl(trf_3621)
static void C_fcall trf_3621(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3621(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3621(t0,t1,t2);}

C_noret_decl(trf_3438)
static void C_fcall trf_3438(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3438(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3438(t0,t1);}

C_noret_decl(trf_3402)
static void C_fcall trf_3402(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3402(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3402(t0,t1);}

C_noret_decl(trf_3367)
static void C_fcall trf_3367(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3367(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3367(t0,t1);}

C_noret_decl(trf_3378)
static void C_fcall trf_3378(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3378(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3378(t0,t1,t2);}

C_noret_decl(trf_1308)
static void C_fcall trf_1308(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1308(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1308(t0,t1);}

C_noret_decl(trf_1269)
static void C_fcall trf_1269(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1269(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1269(t0,t1,t2,t3);}

C_noret_decl(trf_1262)
static void C_fcall trf_1262(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1262(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1262(t0,t1);}

C_noret_decl(trf_4007)
static void C_fcall trf_4007(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4007(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4007(t0,t1);}

C_noret_decl(trf_3991)
static void C_fcall trf_3991(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3991(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3991(t0,t1);}

C_noret_decl(trf_3905)
static void C_fcall trf_3905(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3905(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3905(t0,t1);}

C_noret_decl(trf_3858)
static void C_fcall trf_3858(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3858(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3858(t0,t1,t2);}

C_noret_decl(trf_3888)
static void C_fcall trf_3888(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3888(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3888(t0,t1);}

C_noret_decl(trf_3803)
static void C_fcall trf_3803(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3803(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_3803(t0);}

C_noret_decl(trf_3815)
static void C_fcall trf_3815(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3815(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3815(t0,t1);}

C_noret_decl(trf_3773)
static void C_fcall trf_3773(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3773(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_3773(t0);}

C_noret_decl(trf_3733)
static void C_fcall trf_3733(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3733(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3733(t0,t1,t2);}

C_noret_decl(trf_3656)
static void C_fcall trf_3656(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3656(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_3656(t0);}

C_noret_decl(trf_3287)
static void C_fcall trf_3287(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3287(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_3287(t0);}

C_noret_decl(trf_3303)
static void C_fcall trf_3303(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3303(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3303(t0,t1,t2);}

C_noret_decl(trf_978)
static void C_fcall trf_978(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_978(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_978(t0,t1,t2);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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
if(!C_demand_2(2789)){
C_save(t1);
C_rereclaim2(2789*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,407);
lf[0]=C_h_intern(&lf[0],7,"mingw32");
lf[2]=C_h_intern(&lf[2],6,"macosx");
lf[5]=C_h_intern(&lf[5],6,"netbsd");
lf[7]=C_h_intern(&lf[7],6,"cygwin");
lf[9]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005linux\376\003\000\000\002\376\001\000\000\006netbsd\376\003\000\000\002\376\001\000\000\007freebsd\376\003\000\000\002\376\001\000\000\007solaris\376\003\000\000\002\376\001\000\000\007openb"
"sd\376\377\016");
lf[12]=C_h_intern(&lf[12],4,"exit");
lf[13]=C_h_intern(&lf[13],7,"fprintf");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\010~a: ~\077~%");
lf[15]=C_h_intern(&lf[15],17,"\003syspeek-c-string");
lf[16]=C_h_intern(&lf[16],18,"current-error-port");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\001o");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[36]=C_h_intern(&lf[36],26,"\003sysload-dynamic-extension");
lf[37]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005-DPIC\376\377\016");
lf[38]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005-fPIC\376\003\000\000\002\376B\000\000\005-DPIC\376\377\016");
lf[74]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014/usr/include\376\003\000\000\002\376B\000\000\000\376\377\016");
lf[94]=C_h_intern(&lf[94],3,"map");
lf[95]=C_h_intern(&lf[95],18,"string-intersperse");
lf[97]=C_h_intern(&lf[97],6,"append");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[100]=C_h_intern(&lf[100],13,"make-pathname");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[104]=C_h_intern(&lf[104],17,"get-output-string");
lf[105]=C_h_intern(&lf[105],7,"display");
lf[106]=C_h_intern(&lf[106],2,"qs");
lf[107]=C_h_intern(&lf[107],18,"normalize-pathname");
lf[108]=C_h_intern(&lf[108],19,"\003syswrite-char/port");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\007copy /Y");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\002cp");
lf[111]=C_h_intern(&lf[111],18,"open-output-string");
lf[113]=C_h_intern(&lf[113],13,"string-append");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\010 -static");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[118]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000#\376\377\016");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[121]=C_h_intern(&lf[121],17,"string-translate*");
lf[122]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\001\042\376B\000\000\002\134\042\376\377\016");
lf[123]=C_h_intern(&lf[123],16,"\003syslist->string");
lf[124]=C_h_intern(&lf[124],5,"cons*");
lf[125]=C_h_intern(&lf[125],16,"\003sysstring->list");
lf[126]=C_h_intern(&lf[126],10,"string-any");
lf[127]=C_h_intern(&lf[127],6,"char=\077");
lf[129]=C_h_intern(&lf[129],19,"\003sysstandard-output");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[131]=C_h_intern(&lf[131],5,"write");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000;\012Error: shell command terminated with non-zero exit status ");
lf[133]=C_h_intern(&lf[133],6,"system");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[136]=C_h_intern(&lf[136],5,"print");
lf[138]=C_h_intern(&lf[138],11,"delete-file");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\003rm ");
lf[140]=C_h_intern(&lf[140],25,"\003sysimplicit-exit-handler");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000#not enough arguments to option `~A\047");
lf[142]=C_h_intern(&lf[142],9,"\003syserror");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\013-dynamiclib");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\007-bundle");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\007-shared");
lf[147]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012-DC_SHARED\376\377\016");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\026chicken-compile-shared");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\026-DC_PRIVATE_REPOSITORY");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\031-framework CoreFoundation");
lf[152]=C_h_intern(&lf[152],8,"for-each");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\032</string>\012</dict>\012</plist>");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\001\262<\077xml version=\0421.0\042 encoding=\042UTF-8\042\077>\012<!DOCTYPE plist SYSTEM \042file://local"
"host/System/Library/DTDs/PropertyList.dtd\042>\012<plist version=\0420.9\042>\012<dict>\012\011<key>C"
"FBundlePackageType</key>\012\011<string>APPL</string>\012\011<key>CFBundleIconFile</key>\012\011<s"
"tring>CHICKEN.icns</string>\012        <key>CFBundleGetInfoString</key>\012\011<string>Cr"
"eated by CHICKEN</string>\012\011<key>CFBundleSignature</key>\012\011<string>\077\077\077\077</string>\012\011"
"<key>CFBundleExecutable</key>\012\011<string>");
lf[155]=C_h_intern(&lf[155],19,"\003sysprint-to-string");
lf[156]=C_h_intern(&lf[156],19,"with-output-to-file");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\013generating ");
lf[158]=C_h_intern(&lf[158],12,"file-exists\077");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\012Info.plist");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\024chicken/CHICKEN.icns");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\014CHICKEN.icns");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\022Contents/Resources");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\016Contents/MacOS");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\010Contents");
lf[165]=C_h_intern(&lf[165],13,"pathname-file");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\012libchicken");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\005dylib");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\003dll");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\003so.");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\016Contents/MacOS");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\005mac.r");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000 /Developer/Tools/Rez -t APPL -o ");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000+install_name_tool -change libchicken.dylib ");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\020libchicken.dylib");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\020@executable_path");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\003-o ");
lf[179]=C_h_intern(&lf[179],16,"create-directory");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\006mkdir ");
lf[181]=C_h_intern(&lf[181],17,"directory-exists\077");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\017Contents/MacOS/");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\022Contents/Resources");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\011mkdir -p ");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\016Contents/MacOS");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\011mkdir -p ");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\003app");
lf[188]=C_h_intern(&lf[188],24,"pathname-strip-extension");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\004.old");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\004move");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\002mv");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\005.old\047");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\030\047 - renaming source to `");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\0001Warning: output file will overwrite source file `");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\002-c");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\003g++");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\022-Wno-write-strings");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\003-o ");
lf[200]=C_h_intern(&lf[200],26,"pathname-replace-extension");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[202]=C_h_intern(&lf[202],7,"reverse");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\001\232\042\042 type=\042\042win32\042\042/>\134r\134n\042\012  \042  <ms_asmv2:trustInfo xmlns:ms_asmv2=\042\042urn:sche"
"mas-microsoft-com:asm.v2\042\042>\134r\134n\042\012  \042    <ms_asmv2:security>\134r\134n\042\012  \042      <ms_as"
"mv2:requestedPrivileges>\134r\134n\042\012  \042        <ms_asmv2:requestedExecutionLevel level"
"=\042\042asInvoker\042\042 uiAccess=\042\042false\042\042/>\134r\134n\042\012  \042      </ms_asmv2:requestedPrivileges"
">\134r\134n\042\012  \042    </ms_asmv2:security>\134r\134n\042\012  \042  </ms_asmv2:trustInfo>\134r\134n\042\012  \042</ass"
"embly>\134r\134n\042\012END");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\001\0031 24 MOVEABLE PURE\012BEGIN\012  \042<\077xml version=\042\0421.0\042\042 encoding=\042\042UTF-8\042\042 standa"
"lone=\042\042yes\042\042\077>\134r\134n\042\012  \042<assembly xmlns=\042\042urn:schemas-microsoft-com:asm.v1\042\042 mani"
"festVersion=\042\0421.0\042\042>\134r\134n\042\012  \042  <assemblyIdentity version=\042\0421.0.0.0\042\042 processorAr"
"chitecture=\042\042*\042\042 name=\042\042");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\013generating ");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\002rc");
lf[207]=C_h_intern(&lf[207],7,"windows");
lf[208]=C_h_intern(&lf[208],13,"software-type");
lf[209]=C_h_intern(&lf[209],4,"last");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000\031no source files specified");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[212]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\003-:d\376\377\016");
lf[213]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\025chicken-scheme-to-c++\376\377\016");
lf[214]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\026chicken-scheme-to-objc\376\377\016");
lf[215]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012-to-stdout\376\377\016");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\014-output-file");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\003cpp");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\001m");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\010-dynamic");
lf[221]=C_h_intern(&lf[221],7,"newline");
lf[222]=C_h_intern(&lf[222],6,"print*");
lf[223]=C_h_intern(&lf[223],4,"conc");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\010 -Wl,-R\042");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\010\134$ORIGIN");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\003-L\042");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[231]=C_decode_literal(C_heaptop,"\376B\000\000\003-L\042");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[233]=C_h_intern(&lf[233],5,"-help");
lf[234]=C_h_intern(&lf[234],6,"--help");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\003\047.\012");
lf[236]=C_decode_literal(C_heaptop,"\376B\000(+\047 is a driver program for the CHICKEN compiler. Files given on the\012  comman"
"d line are translated, compiled or linked as needed.\012\012  FILENAME is a Scheme sou"
"rce file name with optional extension or a\012  C/C++/Objective-C source, object or"
" library file name with extension. OPTION\012  may be one of the following:\012\012  Gene"
"ral options:\012\012    -h  -help                      display this text and exit\012    "
"-v                             show intermediate compilation stages\012    -vv  -ve"
"rbose                  display information about translation\012                   "
"                 progress\012    -vvv                           display information"
" about all compilation\012                                    stages\012    -V  -versi"
"on                   display Scheme compiler version and exit\012    -release      "
"                 display release number and exit\012\012  File and pathname options:\012\012"
"    -o -output-file FILENAME       specifies target executable name\012    -I -incl"
"ude-path PATHNAME      specifies alternative path for included\012                 "
"                   files\012    -to-stdout                     write compiler to st"
"dout (implies -t)\012    -s -shared -dynamic            generate dynamically loadab"
"le shared object\012                                    file\012\012  Language options:\012\012"
"    -D  -DSYMBOL  -feature SYMBOL  register feature identifier\012    -no-feature S"
"YMBOL             disable builtin feature identifier\012    -c++                   "
"        compile via a C++ source file (.cpp) \012    -objc                         "
" compile via Objective-C source file (.m)\012\012  Syntax related options:\012\012    -i -ca"
"se-insensitive           don\047t preserve case of read symbols    \012    -K -keyword"
"-style STYLE        enable alternative keyword-syntax\012                          "
"          (prefix, suffix or none)\012       -no-parentheses-synonyms    disables l"
"ist delimiter synonyms\012       -no-symbol-escape           disables support for e"
"scaped symbols\012       -r5rs-syntax                disables the Chicken extension"
"s to\012                                    R5RS syntax\012    -compile-syntax        "
"        macros are made available at run-time\012    -j -emit-import-library MODULE"
" write compile-time module information into\012                                    "
"separate file\012    -J -emit-all-import-libraries  emit import-libraries for all d"
"efined modules\012    -no-module-registration        do not generate module registr"
"ation code\012    -no-compiler-syntax            disable expansion of compiler-macr"
"os\012    -M -module                     wrap compiled code into implicit module\012\012 "
" Translation options:\012\012    -x  -explicit-use              do not use units `libr"
"ary\047 and `eval\047 by\012                                    default\012    -P  -check-sy"
"ntax              stop compilation after macro-expansion\012    -A  -analyze-only  "
"            stop compilation after first analysis pass\012\012  Debugging options:\012\012  "
"  -w  -no-warnings               disable warnings\012    -d0 -d1 -d2 -debug-level N"
"UMBER\012                                   set level of available debugging inform"
"ation\012    -no-trace                      disable rudimentary debugging informati"
"on\012    -profile                       executable emits profiling information \012  "
"  -accumulate-profile            executable emits profiling information in\012     "
"                               append mode\012    -profile-name FILENAME         na"
"me of the generated profile information\012                                    file"
"\012    -S  -scrutinize                perform local flow analysis\012    -types FILEN"
"AME                load additional type database\012\012  Optimization options:\012\012    -"
"O -O0 -O1 -O2 -O3 -O4 -O5 -optimize-level NUMBER\012                               "
"    enable certain sets of optimization options\012    -optimize-leaf-routines     "
"   enable leaf routine optimization\012    -no-usual-integrations         standard "
"procedures may be redefined\012    -u  -unsafe                    disable safety ch"
"ecks\012    -local                         assume globals are only modified in curr"
"ent\012                                    file\012    -b  -block                     "
"enable block-compilation\012    -disable-interrupts            disable interrupts i"
"n compiled code\012    -f  -fixnum-arithmetic         assume all numbers are fixnum"
"s\012    -disable-stack-overflow-checks disables detection of stack-overflows\012    -"
"inline                        enable inlining\012    -inline-limit LIMIT           "
" set inlining threshold\012    -inline-global                 enable cross-module i"
"nlining\012    -unboxing                      use unboxed temporaries if possible\012 "
"   -n -emit-inline-file FILENAME  generate file with globally inlinable\012        "
"                            procedures (implies -inline -local)\012    -consult-inl"
"ine-file FILENAME  explicitly load inline file\012    -no-argc-checks              "
"  disable argument count checks\012    -no-bound-checks               disable bound"
" variable checks\012    -no-procedure-checks           disable procedure call check"
"s\012    -no-procedure-checks-for-usual-bindings\012                                  "
" disable procedure call checks only for usual\012                                  "
"  bindings\012    -no-procedure-checks-for-toplevel-bindings\012                      "
"             disable procedure call checks for toplevel\012                        "
"            bindings\012\012  Configuration options:\012\012    -unit NAME                  "
"   compile file as a library unit\012    -uses NAME                     declare lib"
"rary unit as used.\012    -heap-size NUMBER              specifies heap-size of com"
"piled executable\012    -heap-initial-size NUMBER      specifies heap-size at start"
"up time\012    -heap-growth PERCENTAGE        specifies growth-rate of expanding he"
"ap\012    -heap-shrinkage PERCENTAGE     specifies shrink-rate of contracting heap\012"
"    -nursery NUMBER  -stack-size NUMBER\012                                   speci"
"fies nursery size of compiled\012                                   executable\012    "
"-X -extend FILENAME            load file before compilation commences\012    -prelu"
"de EXPRESSION            add expression to beginning of source file\012    -postlud"
"e EXPRESSION           add expression to end of source file\012    -prologue FILENA"
"ME             include file before main source file\012    -epilogue FILENAME      "
"       include file after main source file\012\012    -e  -embedded                  c"
"ompile as embedded\012                                    (don\047t generate `main()\047)"
"\012    -gui                           compile as GUI application\012    -R  -require-"
"extension NAME    require extension and import in compiled\012                     "
"               code\012    -dll -library                  compile multiple units in"
"to a dynamic\012                                    library\012    -deploy            "
"            deploy self-contained application bundle\012\012  Options to other passes:"
"\012\012    -C OPTION                      pass option to C compiler\012    -L OPTION    "
"                  pass option to linker\012    -I<DIR>                        pass "
"\134\042-I<DIR>\134\042 to C compiler\012                                    (add include path)"
"\012    -L<DIR>                        pass \134\042-L<DIR>\134\042 to linker\012                 "
"                   (add library path)\012    -k                             keep in"
"termediate files\012    -c                             stop after compilation to ob"
"ject files\012    -t                             stop after translation to C\012    -c"
"c COMPILER                   select other C compiler than the default\012    -cxx C"
"OMPILER                  select other C++ compiler than the default\012    -ld COMP"
"ILER                   select other linker than the default \012    -lLIBNAME      "
"                link with given library\012                                    (`li"
"bLIBNAME\047 on UNIX,\012                                     `LIBNAME.lib\047 on Windows"
")\012    -static-libs                   link with static CHICKEN libraries\012    -sta"
"tic                        generate completely statically linked\012               "
"                     executable\012    -F<DIR>                        pass \134\042-F<DIR"
">\134\042 to C compiler\012                                    (add framework header path"
" on Mac OS X)\012    -framework NAME                passed to linker on Mac OS X\012  "
"  -rpath PATHNAME                add directory to runtime library search path\012  "
"  -Wl,...                        pass linker options\012    -strip                 "
"        strip resulting binary\012\012  Inquiry options:\012\012    -home                   "
"       show home-directory (where support files go)\012    -cflags                 "
"       show required C-compiler flags and exit\012    -ldflags                     "
"  show required linker flags and exit\012    -libs                          show re"
"quired libraries and exit\012    -cc-name                       show name of defaul"
"t C compiler used\012    -cxx-name                      show name of default C++ co"
"mpiler used\012    -ld-name                       show name of default linker used\012"
"    -dry-run                       just show commands executed, don\047t run them\012 "
"                                   (implies `-v\047)\012\012  Obscure options:\012\012    -debu"
"g MODES                   display debugging output for the given modes\012    -comp"
"iler PATHNAME             use other compiler than default `chicken\047\012    -raw    "
"                       do not generate implicit init- and exit code\012    -emit-ex"
"ternal-prototypes-first\012                                   emit prototypes for c"
"allbacks before foreign\012                                    declarations\012    -ig"
"nore-repository             do not refer to repository for extensions\012    -keep-"
"shadowed-macros          do not remove shadowed macro\012    -host                 "
"         compile for host when configured for\012                                  "
"  cross-compiling\012    -private-repository            load extensions from execut"
"able path\012    -deployed                      compile support file to be used fro"
"m a deployed \012                                    executable\012    -no-elevation  "
"                embed manifest on Windows to supress elevation\012                 "
"                   warnings for programs named `install\047 or `setup\047\012\012  Options c"
"an be collapsed if unambiguous, so\012\012    -vkfO\012\012  is the same as\012\012    -v -k -fixn"
"um-arithmetic -optimize\012\012  The contents of the environment variable CSC_OPTIONS "
"are implicitly passed to\012  every invocation of `");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\033 FILENAME | OPTION ...\012\012  `");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\007Usage: ");
lf[239]=C_h_intern(&lf[239],8,"-release");
lf[240]=C_h_intern(&lf[240],15,"chicken-version");
lf[241]=C_h_intern(&lf[241],8,"-version");
lf[242]=C_h_intern(&lf[242],7,"sprintf");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\011 -version");
lf[244]=C_h_intern(&lf[244],4,"-c++");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\017-no-cpp-precomp");
lf[246]=C_h_intern(&lf[246],5,"-objc");
lf[247]=C_h_intern(&lf[247],7,"-static");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\026chicken-compile-static");
lf[250]=C_h_intern(&lf[250],12,"-static-libs");
lf[251]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\026chicken-compile-static");
lf[253]=C_h_intern(&lf[253],7,"-cflags");
lf[254]=C_h_intern(&lf[254],8,"-ldflags");
lf[255]=C_h_intern(&lf[255],8,"-cc-name");
lf[256]=C_h_intern(&lf[256],9,"-cxx-name");
lf[257]=C_h_intern(&lf[257],8,"-ld-name");
lf[258]=C_h_intern(&lf[258],5,"-home");
lf[259]=C_h_intern(&lf[259],5,"-libs");
lf[260]=C_h_intern(&lf[260],2,"-v");
lf[261]=C_h_intern(&lf[261],8,"-verbose");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\010-verbose");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\002-v");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\002-v");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\002-Q");
lf[266]=C_h_intern(&lf[266],2,"-w");
lf[267]=C_h_intern(&lf[267],12,"-no-warnings");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\002-w");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\014-no-warnings");
lf[270]=C_h_intern(&lf[270],2,"-A");
lf[271]=C_h_intern(&lf[271],13,"-analyze-only");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\015-analyze-only");
lf[273]=C_h_intern(&lf[273],2,"-P");
lf[274]=C_h_intern(&lf[274],13,"-check-syntax");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\015-check-syntax");
lf[276]=C_h_intern(&lf[276],2,"-k");
lf[277]=C_h_intern(&lf[277],2,"-c");
lf[278]=C_h_intern(&lf[278],2,"-t");
lf[279]=C_h_intern(&lf[279],2,"-e");
lf[280]=C_h_intern(&lf[280],9,"-embedded");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\014-DC_EMBEDDED");
lf[282]=C_h_intern(&lf[282],18,"-require-extension");
lf[283]=C_h_intern(&lf[283],2,"-R");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\022-require-extension");
lf[285]=C_h_intern(&lf[285],19,"-private-repository");
lf[286]=C_h_intern(&lf[286],13,"-no-elevation");
lf[287]=C_h_intern(&lf[287],4,"-gui");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\007-DC_GUI");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\012-lkernel32");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\010-luser32");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\007-lgdi32");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\011-mwindows");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000\012chicken.rc");
lf[294]=C_h_intern(&lf[294],7,"-deploy");
lf[295]=C_h_intern(&lf[295],9,"-deployed");
lf[296]=C_h_intern(&lf[296],10,"-framework");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\012-framework");
lf[298]=C_h_intern(&lf[298],2,"-o");
lf[299]=C_h_intern(&lf[299],2,"-O");
lf[300]=C_h_intern(&lf[300],3,"-O1");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\0011");
lf[303]=C_h_intern(&lf[303],3,"-O0");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[306]=C_h_intern(&lf[306],3,"-O2");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\0012");
lf[309]=C_h_intern(&lf[309],3,"-O3");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\0013");
lf[312]=C_h_intern(&lf[312],3,"-O4");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\0014");
lf[315]=C_h_intern(&lf[315],3,"-O5");
lf[316]=C_h_intern(&lf[316],3,"gnu");
lf[317]=C_h_intern(&lf[317],5,"clang");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\003-O3");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\024-fomit-frame-pointer");
lf[320]=C_h_intern(&lf[320],14,"build-platform");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\0015");
lf[323]=C_h_intern(&lf[323],3,"-d0");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\014-debug-level");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[326]=C_h_intern(&lf[326],3,"-d1");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\014-debug-level");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\0011");
lf[329]=C_h_intern(&lf[329],3,"-d2");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\014-debug-level");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\0012");
lf[332]=C_h_intern(&lf[332],8,"-dry-run");
lf[333]=C_h_intern(&lf[333],2,"-s");
lf[334]=C_h_intern(&lf[334],4,"-dll");
lf[335]=C_h_intern(&lf[335],8,"-library");
lf[336]=C_h_intern(&lf[336],9,"-compiler");
lf[337]=C_h_intern(&lf[337],3,"-cc");
lf[338]=C_h_intern(&lf[338],4,"-cxx");
lf[339]=C_h_intern(&lf[339],3,"-ld");
lf[340]=C_h_intern(&lf[340],2,"-I");
lf[341]=C_decode_literal(C_heaptop,"\376B\000\000\015-include-path");
lf[342]=C_h_intern(&lf[342],2,"-C");
lf[343]=C_h_intern(&lf[343],12,"string-split");
lf[344]=C_h_intern(&lf[344],6,"-strip");
lf[345]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[346]=C_h_intern(&lf[346],2,"-L");
lf[347]=C_h_intern(&lf[347],6,"-rpath");
lf[348]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003gnu\376\003\000\000\002\376\001\000\000\005clang\376\377\016");
lf[349]=C_decode_literal(C_heaptop,"\376B\000\000\006-Wl,-R");
lf[350]=C_h_intern(&lf[350],5,"-host");
lf[351]=C_h_intern(&lf[351],1,"-");
lf[352]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\001-\376\377\016");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[354]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-h\376\003\000\000\002\376B\000\000\005-help\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-s\376\003\000\000\002\376B\000\000\007-shared\376\377\016\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\002-S\376\003\000\000\002\376B\000\000\013-scrutinize\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-M\376\003\000\000\002\376B\000\000\007-module\376\377\016\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\002-P\376\003\000\000\002\376B\000\000\015-check-syntax\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-V\376\003\000\000\002\376B\000\000\010-version\376\377\016\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\002-f\376\003\000\000\002\376B\000\000\022-fixnum-arithmetic\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-D\376\003\000\000\002\376B\000\000\010-feature\376\377\016\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-insensitive\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-K\376\003\000\000\002\376B\000\000\016-keyword-"
"style\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-X\376\003\000\000\002\376B\000\000\007-extend\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-J\376\003\000\000\002\376B\000\000\032-emit-al"
"l-import-libraries\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-x\376\003\000\000\002\376B\000\000\015-explicit-use\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-"
"u\376\003\000\000\002\376B\000\000\007-unsafe\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-j\376\003\000\000\002\376B\000\000\024-emit-import-library\376\377\016\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\002-n\376\003\000\000\002\376B\000\000\021-emit-inline-file\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-b\376\003\000\000\002\376B\000\000\006-block\376\377\016\376\377\016");
lf[355]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\015-explicit-use\376\003\000\000\002\376\001\000\000\011-no-trace\376\003\000\000\002\376\001\000\000\014-no-warnings\376\003\000\000\002\376\001\000\000\026-no-us"
"ual-integrations\376\003\000\000\002\376\001\000\000\027-optimize-leaf-routines\376\003\000\000\002\376\001\000\000\007-unsafe\376\003\000\000\002\376\001\000\000\006-blo"
"ck\376\003\000\000\002\376\001\000\000\023-disable-interrupts\376\003\000\000\002\376\001\000\000\022-fixnum-arithmetic\376\003\000\000\002\376\001\000\000\012-to-stdout\376"
"\003\000\000\002\376\001\000\000\010-profile\376\003\000\000\002\376\001\000\000\004-raw\376\003\000\000\002\376\001\000\000\023-accumulate-profile\376\003\000\000\002\376\001\000\000\015-check-syn"
"tax\376\003\000\000\002\376\001\000\000\021-case-insensitive\376\003\000\000\002\376\001\000\000\007-shared\376\003\000\000\002\376\001\000\000\017-compile-syntax\376\003\000\000\002\376\001\000"
"\000\017-no-lambda-info\376\003\000\000\002\376\001\000\000\010-dynamic\376\003\000\000\002\376\001\000\000\036-disable-stack-overflow-checks\376\003\000\000\002"
"\376\001\000\000\006-local\376\003\000\000\002\376\001\000\000\037-emit-external-prototypes-first\376\003\000\000\002\376\001\000\000\007-inline\376\003\000\000\002\376\001\000\000\010-"
"release\376\003\000\000\002\376\001\000\000\013-scrutinize\376\003\000\000\002\376\001\000\000\015-analyze-only\376\003\000\000\002\376\001\000\000\025-keep-shadowed-macr"
"os\376\003\000\000\002\376\001\000\000\016-inline-global\376\003\000\000\002\376\001\000\000\022-ignore-repository\376\003\000\000\002\376\001\000\000\021-no-symbol-escap"
"e\376\003\000\000\002\376\001\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376\001\000\000\014-r5rs-syntax\376\003\000\000\002\376\001\000\000\017-no-argc-chec"
"ks\376\003\000\000\002\376\001\000\000\020-no-bound-checks\376\003\000\000\002\376\001\000\000\024-no-procedure-checks\376\003\000\000\002\376\001\000\000\023-no-compiler"
"-syntax\376\003\000\000\002\376\001\000\000\032-emit-all-import-libraries\376\003\000\000\002\376\001\000\000\013-setup-mode\376\003\000\000\002\376\001\000\000\011-unbox"
"ing\376\003\000\000\002\376\001\000\000\015-no-elevation\376\003\000\000\002\376\001\000\000\027-no-module-registration\376\003\000\000\002\376\001\000\000\047-no-procedu"
"re-checks-for-usual-bindings\376\003\000\000\002\376\001\000\000\007-module\376\003\000\000\002\376\001\000\000\014-lambda-lift\376\003\000\000\002\376\001\000\000*-no"
"-procedure-checks-for-toplevel-bindings\376\377\016");
lf[356]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006-debug\376\003\000\000\002\376\001\000\000\014-output-file\376\003\000\000\002\376\001\000\000\012-heap-size\376\003\000\000\002\376\001\000\000\010-nursery\376\003\000\000"
"\002\376\001\000\000\013-stack-size\376\003\000\000\002\376\001\000\000\011-compiler\376\003\000\000\002\376\001\000\000\005-unit\376\003\000\000\002\376\001\000\000\005-uses\376\003\000\000\002\376\001\000\000\016-key"
"word-style\376\003\000\000\002\376\001\000\000\017-optimize-level\376\003\000\000\002\376\001\000\000\015-include-path\376\003\000\000\002\376\001\000\000\016-database-si"
"ze\376\003\000\000\002\376\001\000\000\007-extend\376\003\000\000\002\376\001\000\000\010-prelude\376\003\000\000\002\376\001\000\000\011-postlude\376\003\000\000\002\376\001\000\000\011-prologue\376\003\000\000\002"
"\376\001\000\000\011-epilogue\376\003\000\000\002\376\001\000\000\015-inline-limit\376\003\000\000\002\376\001\000\000\015-profile-name\376\003\000\000\002\376\001\000\000\021-emit-inli"
"ne-file\376\003\000\000\002\376\001\000\000\006-types\376\003\000\000\002\376\001\000\000\010-feature\376\003\000\000\002\376\001\000\000\014-debug-level\376\003\000\000\002\376\001\000\000\014-heap-g"
"rowth\376\003\000\000\002\376\001\000\000\017-heap-shrinkage\376\003\000\000\002\376\001\000\000\022-heap-initial-size\376\003\000\000\002\376\001\000\000\024-consult-inl"
"ine-file\376\003\000\000\002\376\001\000\000\024-emit-import-library\376\003\000\000\002\376\001\000\000\013-no-feature\376\377\016");
lf[357]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[358]=C_h_intern(&lf[358],9,"substring");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[360]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid option `~A\047");
lf[361]=C_h_intern(&lf[361],15,"lset-difference");
lf[362]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000P\376\003\000\000\002\376\377\012\000\000H\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000s\376\003\000\000\002\376\377\012\000\000f\376\003\000\000\002\376\377\012\000\000i\376\003\000\000\002\376\377\012\000\000E\376\003\000"
"\000\002\376\377\012\000\000N\376\003\000\000\002\376\377\012\000\000x\376\003\000\000\002\376\377\012\000\000u\376\003\000\000\002\376\377\012\000\000b\376\003\000\000\002\376\377\012\000\000v\376\003\000\000\002\376\377\012\000\000w\376\003\000\000\002\376\377\012\000\000A\376\003\000\000\002\376"
"\377\012\000\000O\376\003\000\000\002\376\377\012\000\000e\376\003\000\000\002\376\377\012\000\000W\376\003\000\000\002\376\377\012\000\000k\376\003\000\000\002\376\377\012\000\000c\376\003\000\000\002\376\377\012\000\000t\376\003\000\000\002\376\377\012\000\000g\376\003\000\000\002\376\377\012\000"
"\000S\376\003\000\000\002\376\377\012\000\000J\376\003\000\000\002\376\377\012\000\000M\376\377\016");
lf[363]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid option `~A\047");
lf[364]=C_decode_literal(C_heaptop,"\376B\000\000\004-Wl,");
lf[365]=C_h_intern(&lf[365],18,"decompose-pathname");
lf[366]=C_decode_literal(C_heaptop,"\376B\000\000\001h");
lf[367]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[368]=C_decode_literal(C_heaptop,"\376B\000\000\002rc");
lf[369]=C_decode_literal(C_heaptop,"\376B\000\000\003cpp");
lf[370]=C_decode_literal(C_heaptop,"\376B\000\000\001C");
lf[371]=C_decode_literal(C_heaptop,"\376B\000\000\002cc");
lf[372]=C_decode_literal(C_heaptop,"\376B\000\000\003cxx");
lf[373]=C_decode_literal(C_heaptop,"\376B\000\000\003hpp");
lf[374]=C_decode_literal(C_heaptop,"\376B\000\000\017-no-cpp-precomp");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000\001m");
lf[376]=C_decode_literal(C_heaptop,"\376B\000\000\001M");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000\002mm");
lf[378]=C_decode_literal(C_heaptop,"\376B\000\000\030file `~A\047 does not exist");
lf[379]=C_decode_literal(C_heaptop,"\376B\000\000\004.scm");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000\002-:");
lf[381]=C_h_intern(&lf[381],15,"-optimize-level");
lf[382]=C_h_intern(&lf[382],15,"-benchmark-mode");
lf[383]=C_h_intern(&lf[383],10,"-to-stdout");
lf[384]=C_h_intern(&lf[384],7,"-shared");
lf[385]=C_h_intern(&lf[385],8,"-dynamic");
lf[386]=C_h_intern(&lf[386],14,"string->symbol");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[388]=C_h_intern(&lf[388],24,"get-environment-variable");
lf[389]=C_decode_literal(C_heaptop,"\376B\000\000\013CSC_OPTIONS");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\003-I\042");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\007include");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\002-l");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\013libchicken.");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\005share");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[404]=C_h_intern(&lf[404],22,"command-line-arguments");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[406]=C_h_intern(&lf[406],16,"software-version");
C_register_lf2(lf,407,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_931,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

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
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k932 in k929 */
static void C_ccall f_934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_934,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_937,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k935 in k932 in k929 */
static void C_ccall f_937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_937,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_940,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k938 in k935 in k932 in k929 */
static void C_ccall f_940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_940,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_943,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_943,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_946,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_949,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_949,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_952,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_952,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_955,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_955,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4399,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:68: build-platform */
((C_proc2)C_fast_retrieve_symbol_proc(lf[320]))(2,*((C_word*)lf[320]+1),t2);}

/* k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4399,2,t0,t1);}
t2=C_eqp(t1,lf[0]);
t3=C_mutate(&lf[1] /* (set! mingw ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4395,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:69: software-version */
((C_proc2)C_fast_retrieve_symbol_proc(lf[406]))(2,*((C_word*)lf[406]+1),t4);}

/* k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4395,2,t0,t1);}
t2=C_eqp(t1,lf[2]);
t3=C_mutate(&lf[3] /* (set! osx ...) */,t2);
t4=C_mutate(&lf[4] /* (set! win ...) */,C_retrieve2(lf[1],"mingw"));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4391,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:71: software-version */
((C_proc2)C_fast_retrieve_symbol_proc(lf[406]))(2,*((C_word*)lf[406]+1),t5);}

/* k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4391,2,t0,t1);}
t2=C_eqp(t1,lf[5]);
t3=C_mutate(&lf[6] /* (set! netbsd ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4387,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:72: build-platform */
((C_proc2)C_fast_retrieve_symbol_proc(lf[320]))(2,*((C_word*)lf[320]+1),t4);}

/* k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4387,2,t0,t1);}
t2=C_eqp(t1,lf[7]);
t3=C_mutate(&lf[8] /* (set! cygwin ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4383,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:75: software-version */
((C_proc2)C_fast_retrieve_symbol_proc(lf[406]))(2,*((C_word*)lf[406]+1),t4);}

/* k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4383,2,t0,t1);}
t2=C_i_memq(t1,lf[9]);
t3=C_mutate(&lf[10] /* (set! elf ...) */,t2);
t4=C_mutate(&lf[11] /* (set! quit ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_978,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_997,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:81: get-environment-variable */
((C_proc3)C_fast_retrieve_symbol_proc(lf[388]))(3,*((C_word*)lf[388]+1),t5,lf[405]);}

/* k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_997,2,t0,t1);}
t2=C_mutate(&lf[17] /* (set! chicken-prefix ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1001,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:82: command-line-arguments */
((C_proc2)C_fast_retrieve_symbol_proc(lf[404]))(2,*((C_word*)lf[404]+1),t3);}

/* k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1001(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1001,2,t0,t1);}
t2=C_mutate(&lf[18] /* (set! arguments ...) */,t1);
t3=C_i_member(lf[19],C_retrieve2(lf[18],"arguments"));
t4=C_mutate(&lf[20] /* (set! host-mode ...) */,t3);
t5=C_fudge(C_fix(39));
t6=C_mutate(&lf[21] /* (set! cross-chicken ...) */,t5);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1036,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4369,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4373,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* ##sys#peek-c-string */
t10=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t10=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,C_mpointer(&a,(void*)C_TARGET_SHARE_HOME),C_fix(0));}}

/* k4371 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4373,2,t0,t1);}
if(C_truep(C_retrieve2(lf[17],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[17],"chicken-prefix"),lf[402]);
/* csc.scm:88: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),((C_word*)t0)[3],t2,lf[403]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5521,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t2,t1);}}

/* f5521 in k4371 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k4367 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4369,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5192,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t2,t1);}

/* f5192 in k4367 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1036,2,t0,t1);}
t2=C_mutate(&lf[22] /* (set! home ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1040,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4353,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4357,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4361,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}

/* k4359 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4365,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_CHICKEN_PROGRAM),C_fix(0));}

/* k4363 in k4359 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:101: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4355 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4357,2,t0,t1);}
if(C_truep(C_retrieve2(lf[17],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[17],"chicken-prefix"),lf[400]);
/* csc.scm:88: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),((C_word*)t0)[3],t2,lf[401]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5517,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t2,t1);}}

/* f5517 in k4355 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k4351 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4353,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5187,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t2,t1);}

/* f5187 in k4351 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1040,2,t0,t1);}
t2=C_mutate(&lf[23] /* (set! translator ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1044,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4343,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CC),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CC),C_fix(0));}}

/* k4341 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4343,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5182,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t2,t1);}

/* f5182 in k4341 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1044,2,t0,t1);}
t2=C_mutate(&lf[24] /* (set! compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1048,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4333,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CXX),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CXX),C_fix(0));}}

/* k4331 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5177,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t2,t1);}

/* f5177 in k4331 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1048,2,t0,t1);}
t2=C_mutate(&lf[25] /* (set! c++-compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1052,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4323,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_RC_COMPILER),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_RC_COMPILER),C_fix(0));}}

/* k4321 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5172,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t2,t1);}

/* f5172 in k4321 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1052,2,t0,t1);}
t2=C_mutate(&lf[26] /* (set! rc-compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1056,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4313,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CC),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CC),C_fix(0));}}

/* k4311 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4313,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5167,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t2,t1);}

/* f5167 in k4311 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1056,2,t0,t1);}
t2=C_mutate(&lf[27] /* (set! linker ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1060,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4303,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CXX),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CXX),C_fix(0));}}

/* k4301 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5162,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t2,t1);}

/* f5162 in k4301 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1060(C_word c,C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1060,2,t0,t1);}
t2=C_mutate(&lf[28] /* (set! c++-linker ...) */,t1);
t3=C_mutate(&lf[29] /* (set! object-extension ...) */,lf[30]);
t4=C_mutate(&lf[31] /* (set! library-extension ...) */,lf[32]);
t5=C_mutate(&lf[33] /* (set! executable-extension ...) */,lf[34]);
t6=C_mutate(&lf[35] /* (set! shared-library-extension ...) */,C_fast_retrieve(lf[36]));
t7=(C_truep(C_retrieve2(lf[1],"mingw"))?(C_truep(C_retrieve2(lf[1],"mingw"))?lf[37]:lf[38]):(C_truep(C_retrieve2(lf[8],"cygwin"))?lf[37]:lf[38]));
t8=C_mutate(&lf[39] /* (set! pic-options ...) */,t7);
t9=C_mutate(&lf[40] /* (set! windows-shell ...) */,C_mk_bool(C_WINDOWS_SHELL));
t10=lf[41] /* generate-manifest */ =C_SCHEME_FALSE;;
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1078,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:123: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t11,lf[399],C_retrieve2(lf[31],"library-extension"));}

/* k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1078,2,t0,t1);}
t2=C_mutate(&lf[42] /* (set! default-library ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1082,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4290,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CFLAGS),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CFLAGS),C_fix(0));}}

/* k4288 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:125: string-split */
((C_proc3)C_fast_retrieve_symbol_proc(lf[343]))(3,*((C_word*)lf[343]+1),((C_word*)t0)[2],t1);}

/* k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1082,2,t0,t1);}
t2=C_mutate(&lf[43] /* (set! default-compilation-optimization-options ...) */,t1);
t3=C_mutate(&lf[44] /* (set! best-compilation-optimization-options ...) */,C_retrieve2(lf[43],"default-compilation-optimization-options"));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1087,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4280,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_INSTALL_LDFLAGS),C_fix(0));}
else{
/* ##sys#peek-c-string */
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_TARGET_LDFLAGS),C_fix(0));}}

/* k4278 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:127: string-split */
((C_proc3)C_fast_retrieve_symbol_proc(lf[343]))(3,*((C_word*)lf[343]+1),((C_word*)t0)[2],t1);}

/* k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1087,2,t0,t1);}
t2=C_mutate(&lf[45] /* (set! default-linking-optimization-options ...) */,t1);
t3=C_mutate(&lf[46] /* (set! best-linking-optimization-options ...) */,C_retrieve2(lf[45],"default-linking-optimization-options"));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1092,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
t5=t4;
f_1092(2,t5,C_SCHEME_END_OF_LIST);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4276,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_TARGET_FEATURES),C_fix(0));}}

/* k4274 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:129: string-split */
((C_proc3)C_fast_retrieve_symbol_proc(lf[343]))(3,*((C_word*)lf[343]+1),((C_word*)t0)[2],t1);}

/* k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1092(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1092,2,t0,t1);}
t2=C_mutate(&lf[47] /* (set! extra-features ...) */,t1);
t3=lf[48] /* scheme-files */ =C_SCHEME_END_OF_LIST;;
t4=lf[49] /* c-files */ =C_SCHEME_END_OF_LIST;;
t5=lf[50] /* rc-files */ =C_SCHEME_END_OF_LIST;;
t6=lf[51] /* generated-c-files */ =C_SCHEME_END_OF_LIST;;
t7=lf[52] /* generated-rc-files */ =C_SCHEME_END_OF_LIST;;
t8=lf[53] /* object-files */ =C_SCHEME_END_OF_LIST;;
t9=lf[54] /* generated-object-files */ =C_SCHEME_END_OF_LIST;;
t10=lf[55] /* cpp-mode */ =C_SCHEME_FALSE;;
t11=lf[56] /* objc-mode */ =C_SCHEME_FALSE;;
t12=lf[57] /* embedded */ =C_SCHEME_FALSE;;
t13=lf[58] /* inquiry-only */ =C_SCHEME_FALSE;;
t14=lf[59] /* show-cflags */ =C_SCHEME_FALSE;;
t15=lf[60] /* show-ldflags */ =C_SCHEME_FALSE;;
t16=lf[61] /* show-libs */ =C_SCHEME_FALSE;;
t17=lf[62] /* dry-run */ =C_SCHEME_FALSE;;
t18=lf[63] /* gui */ =C_SCHEME_FALSE;;
t19=lf[64] /* deploy */ =C_SCHEME_FALSE;;
t20=lf[65] /* deployed */ =C_SCHEME_FALSE;;
t21=lf[66] /* rpath */ =C_SCHEME_FALSE;;
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1123,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* ##sys#peek-c-string */
t23=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t23+1)))(4,t23,t22,C_mpointer(&a,(void*)C_INSTALL_MORE_STATIC_LIBS),C_fix(0));}
else{
/* ##sys#peek-c-string */
t23=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t23+1)))(4,t23,t22,C_mpointer(&a,(void*)C_TARGET_MORE_STATIC_LIBS),C_fix(0));}}

/* k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1123,2,t0,t1);}
t2=C_mutate(&lf[67] /* (set! extra-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1127,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* ##sys#peek-c-string */
t4=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_INSTALL_MORE_LIBS),C_fix(0));}
else{
/* ##sys#peek-c-string */
t4=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_MORE_LIBS),C_fix(0));}}

/* k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1127,2,t0,t1);}
t2=C_mutate(&lf[68] /* (set! extra-shared-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4235,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4239,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4243,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4247,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* ##sys#peek-c-string */
t7=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t7=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}

/* k4245 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4247,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4251,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:216: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t2,lf[398],C_retrieve2(lf[42],"default-library"));}

/* k4249 in k4245 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:214: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4241 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4243,2,t0,t1);}
if(C_truep(C_retrieve2(lf[17],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[17],"chicken-prefix"),lf[397]);
/* csc.scm:88: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),((C_word*)t0)[3],t2,C_retrieve2(lf[42],"default-library"));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5513,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t2,t1);}}

/* f5513 in k4241 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k4237 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4239,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5157,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t2,t1);}

/* f5157 in k4237 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4235,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=C_mutate(&lf[69] /* (set! default-library-files ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4221,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4225,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_INSTALL_LIB_NAME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_TARGET_LIB_NAME),C_fix(0));}}

/* k4223 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:219: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[396],t1);}

/* k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
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
C_save_and_reclaim((void*)tr2,(void*)f_4221,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=C_mutate(&lf[70] /* (set! default-shared-library-files ...) */,t2);
t4=C_mutate(&lf[71] /* (set! library-files ...) */,C_retrieve2(lf[69],"default-library-files"));
t5=C_mutate(&lf[72] /* (set! shared-library-files ...) */,C_retrieve2(lf[70],"default-shared-library-files"));
t6=lf[73] /* translate-options */ =C_SCHEME_END_OF_LIST;;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1142,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4211,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* ##sys#peek-c-string */
t9=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t9=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,C_mpointer(&a,(void*)C_TARGET_INCLUDE_HOME),C_fix(0));}}

/* k4209 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4211,2,t0,t1);}
if(C_truep(C_retrieve2(lf[17],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[17],"chicken-prefix"),lf[394]);
/* csc.scm:88: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),((C_word*)t0)[2],t2,lf[395]);}
else{
t2=((C_word*)t0)[2];
f_1142(2,t2,t1);}}

/* k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1142(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1142,2,t0,t1);}
t2=C_i_member(t1,lf[74]);
t3=(C_truep(t2)?C_SCHEME_FALSE:t1);
t4=C_mutate(&lf[75] /* (set! include-dir ...) */,t3);
t5=lf[76] /* compile-options */ =C_SCHEME_END_OF_LIST;;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1150,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[75],"include-dir"))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4200,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:235: conc */
((C_proc5)C_fast_retrieve_symbol_proc(lf[223]))(5,*((C_word*)lf[223]+1),t7,lf[392],C_retrieve2(lf[75],"include-dir"),lf[393]);}
else{
t7=t6;
f_1150(t7,C_SCHEME_END_OF_LIST);}}

/* k4198 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4200,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1150(t2,C_a_i_list1(&a,1,t1));}

/* k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_1150(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1150,NULL,2,t0,t1);}
t2=C_mutate(&lf[77] /* (set! builtin-compile-options ...) */,t1);
t3=lf[78] /* translation-optimization-options */ =C_SCHEME_END_OF_LIST;;
t4=C_mutate(&lf[79] /* (set! compilation-optimization-options ...) */,C_retrieve2(lf[43],"default-compilation-optimization-options"));
t5=C_mutate(&lf[80] /* (set! linking-optimization-options ...) */,C_retrieve2(lf[45],"default-linking-optimization-options"));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1158,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4187,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* ##sys#peek-c-string */
t8=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t8=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}

/* k4185 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4187,2,t0,t1);}
if(C_truep(C_retrieve2(lf[17],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[17],"chicken-prefix"),lf[390]);
/* csc.scm:88: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),((C_word*)t0)[2],t2,lf[391]);}
else{
t2=((C_word*)t0)[2];
f_1158(2,t2,t1);}}

/* k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1158(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1158,2,t0,t1);}
t2=C_mutate(&lf[81] /* (set! library-dir ...) */,t1);
t3=lf[82] /* link-options */ =C_SCHEME_END_OF_LIST;;
t4=lf[83] /* target-filename */ =C_SCHEME_FALSE;;
t5=lf[84] /* verbose */ =C_SCHEME_FALSE;;
t6=lf[85] /* keep-files */ =C_SCHEME_FALSE;;
t7=lf[86] /* translate-only */ =C_SCHEME_FALSE;;
t8=lf[87] /* compile-only */ =C_SCHEME_FALSE;;
t9=lf[88] /* to-stdout */ =C_SCHEME_FALSE;;
t10=lf[89] /* shared */ =C_SCHEME_FALSE;;
t11=lf[90] /* static */ =C_SCHEME_FALSE;;
t12=lf[91] /* static-libs */ =C_SCHEME_FALSE;;
t13=lf[92] /* required-extensions */ =C_SCHEME_END_OF_LIST;;
t14=C_mutate(&lf[93] /* (set! compiler-options ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3287,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate(&lf[98] /* (set! lib-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3656,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate(&lf[102] /* (set! copy-files ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3733,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate(&lf[112] /* (set! linker-options ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3773,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate(&lf[116] /* (set! linker-libraries ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3803,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate(&lf[117] /* (set! constant706 ...) */,lf[118]);
t20=C_mutate(&lf[96] /* (set! quote-option ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3905,tmp=(C_word)a,a+=2,tmp));
t21=lf[128] /* last-exit-code */ =C_SCHEME_FALSE;;
t22=C_mutate(&lf[103] /* (set! command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3991,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate(&lf[137] /* (set! $delete-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4007,tmp=(C_word)a,a+=2,tmp));
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4162,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4172,a[2]=t24,tmp=(C_word)a,a+=3,tmp);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4176,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4180,a[2]=t26,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1098: get-environment-variable */
((C_proc3)C_fast_retrieve_symbol_proc(lf[388]))(3,*((C_word*)lf[388]+1),t27,lf[389]);}

/* k4178 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* csc.scm:1098: string-split */
((C_proc3)C_fast_retrieve_symbol_proc(lf[343]))(3,*((C_word*)lf[343]+1),((C_word*)t0)[2],t2);}
else{
/* csc.scm:1098: string-split */
((C_proc3)C_fast_retrieve_symbol_proc(lf[343]))(3,*((C_word*)lf[343]+1),((C_word*)t0)[2],lf[387]);}}

/* k4174 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1097: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),((C_word*)t0)[2],t1,C_retrieve2(lf[18],"arguments"));}

/* k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4172(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4172,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1262,tmp=(C_word)a,a+=2,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1269,tmp=(C_word)a,a+=2,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1308,tmp=(C_word)a,a+=2,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1331,tmp=(C_word)a,a+=2,tmp));
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1348,a[2]=t7,a[3]=t5,a[4]=t3,a[5]=t15,a[6]=t9,tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_1348(t17,((C_word*)t0)[2],t1);}

/* loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_1348(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1348,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1359,a[2]=((C_word*)t0)[6],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:514: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t3,C_retrieve2(lf[76],"compile-options"),C_retrieve2(lf[77],"builtin-compile-options"));}
else{
t3=C_i_car(t2);
t4=C_i_cdr(t2);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1585,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t6,a[8]=t1,a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* csc.scm:560: string->symbol */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[386]+1)))(3,*((C_word*)lf[386]+1),t7,t3);}}

/* k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1585(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1585,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1588,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(t1,lf[233]);
t4=(C_truep(t3)?t3:C_eqp(t1,lf[234]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1600,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1222,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_CSC_PROGRAM),C_fix(0));}
else{
t5=C_eqp(t1,lf[239]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1612,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1619,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:566: chicken-version */
((C_proc2)C_fast_retrieve_symbol_proc(lf[240]))(2,*((C_word*)lf[240]+1),t7);}
else{
t6=C_eqp(t1,lf[241]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1628,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1635,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:569: sprintf */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[242]+1)))(4,*((C_word*)lf[242]+1),t8,C_retrieve2(lf[23],"translator"),lf[243]);}
else{
t7=C_eqp(t1,lf[244]);
if(C_truep(t7)){
t8=lf[55] /* cpp-mode */ =C_SCHEME_TRUE;;
if(C_truep(C_retrieve2(lf[3],"osx"))){
t9=C_a_i_cons(&a,2,lf[245],C_retrieve2(lf[76],"compile-options"));
t10=C_mutate(&lf[76] /* (set! compile-options ...) */,t9);
/* csc.scm:779: loop */
t11=((C_word*)((C_word*)t0)[9])[1];
f_1348(t11,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);}
else{
/* csc.scm:779: loop */
t9=((C_word*)((C_word*)t0)[9])[1];
f_1348(t9,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);}}
else{
t8=C_eqp(t1,lf[246]);
if(C_truep(t8)){
t9=lf[56] /* objc-mode */ =C_SCHEME_TRUE;;
/* csc.scm:779: loop */
t10=((C_word*)((C_word*)t0)[9])[1];
f_1348(t10,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);}
else{
t9=C_eqp(t1,lf[247]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1666,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:578: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t10,lf[248],lf[249],C_retrieve2(lf[73],"translate-options"));}
else{
t10=C_eqp(t1,lf[250]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1677,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:582: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t11,lf[251],lf[252],C_retrieve2(lf[73],"translate-options"));}
else{
t11=C_eqp(t1,lf[253]);
if(C_truep(t11)){
t12=lf[58] /* inquiry-only */ =C_SCHEME_TRUE;;
t13=lf[59] /* show-cflags */ =C_SCHEME_TRUE;;
/* csc.scm:779: loop */
t14=((C_word*)((C_word*)t0)[9])[1];
f_1348(t14,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);}
else{
t12=C_eqp(t1,lf[254]);
if(C_truep(t12)){
t13=lf[58] /* inquiry-only */ =C_SCHEME_TRUE;;
t14=lf[60] /* show-ldflags */ =C_SCHEME_TRUE;;
/* csc.scm:779: loop */
t15=((C_word*)((C_word*)t0)[9])[1];
f_1348(t15,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);}
else{
t13=C_eqp(t1,lf[255]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1703,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:590: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[136]+1)))(3,*((C_word*)lf[136]+1),t14,C_retrieve2(lf[24],"compiler"));}
else{
t14=C_eqp(t1,lf[256]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1715,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:591: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[136]+1)))(3,*((C_word*)lf[136]+1),t15,C_retrieve2(lf[25],"c++-compiler"));}
else{
t15=C_eqp(t1,lf[257]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1727,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:592: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[136]+1)))(3,*((C_word*)lf[136]+1),t16,C_retrieve2(lf[27],"linker"));}
else{
t16=C_eqp(t1,lf[258]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1739,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:593: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[136]+1)))(3,*((C_word*)lf[136]+1),t17,C_retrieve2(lf[22],"home"));}
else{
t17=C_eqp(t1,lf[259]);
if(C_truep(t17)){
t18=lf[58] /* inquiry-only */ =C_SCHEME_TRUE;;
t19=lf[61] /* show-libs */ =C_SCHEME_TRUE;;
/* csc.scm:779: loop */
t20=((C_word*)((C_word*)t0)[9])[1];
f_1348(t20,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);}
else{
t18=C_eqp(t1,lf[260]);
t19=(C_truep(t18)?t18:C_eqp(t1,lf[261]));
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1762,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_numberp(C_retrieve2(lf[84],"verbose")))){
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1777,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:599: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t21,lf[264],lf[265],C_retrieve2(lf[76],"compile-options"));}
else{
t21=t20;
f_1762(t21,C_SCHEME_UNDEFINED);}}
else{
t20=C_eqp(t1,lf[266]);
t21=(C_truep(t20)?t20:C_eqp(t1,lf[267]));
if(C_truep(t21)){
t22=C_a_i_cons(&a,2,lf[268],C_retrieve2(lf[76],"compile-options"));
t23=C_mutate(&lf[76] /* (set! compile-options ...) */,t22);
/* csc.scm:607: t-options */
f_1262(t2,C_a_i_list(&a,1,lf[269]));}
else{
t22=C_eqp(t1,lf[270]);
t23=(C_truep(t22)?t22:C_eqp(t1,lf[271]));
if(C_truep(t23)){
t24=lf[86] /* translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:610: t-options */
f_1262(t2,C_a_i_list(&a,1,lf[272]));}
else{
t24=C_eqp(t1,lf[273]);
t25=(C_truep(t24)?t24:C_eqp(t1,lf[274]));
if(C_truep(t25)){
t26=lf[86] /* translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:613: t-options */
f_1262(t2,C_a_i_list(&a,1,lf[275]));}
else{
t26=C_eqp(t1,lf[276]);
if(C_truep(t26)){
t27=lf[85] /* keep-files */ =C_SCHEME_TRUE;;
/* csc.scm:779: loop */
t28=((C_word*)((C_word*)t0)[9])[1];
f_1348(t28,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);}
else{
t27=C_eqp(t1,lf[277]);
if(C_truep(t27)){
t28=lf[87] /* compile-only */ =C_SCHEME_TRUE;;
/* csc.scm:779: loop */
t29=((C_word*)((C_word*)t0)[9])[1];
f_1348(t29,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);}
else{
t28=C_eqp(t1,lf[278]);
if(C_truep(t28)){
t29=lf[86] /* translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:779: loop */
t30=((C_word*)((C_word*)t0)[9])[1];
f_1348(t30,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);}
else{
t29=C_eqp(t1,lf[279]);
t30=(C_truep(t29)?t29:C_eqp(t1,lf[280]));
if(C_truep(t30)){
t31=lf[57] /* embedded */ =C_SCHEME_TRUE;;
t32=C_a_i_cons(&a,2,lf[281],C_retrieve2(lf[76],"compile-options"));
t33=C_mutate(&lf[76] /* (set! compile-options ...) */,t32);
/* csc.scm:779: loop */
t34=((C_word*)((C_word*)t0)[9])[1];
f_1348(t34,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);}
else{
t31=C_eqp(t1,lf[282]);
t32=(C_truep(t31)?t31:C_eqp(t1,lf[283]));
if(C_truep(t32)){
t33=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1870,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:621: check */
f_1269(t33,t1,((C_word*)((C_word*)t0)[7])[1],C_SCHEME_END_OF_LIST);}
else{
t33=C_eqp(t1,lf[285]);
if(C_truep(t33)){
t34=f_1331(C_a_i(&a,6));
/* csc.scm:779: loop */
t35=((C_word*)((C_word*)t0)[9])[1];
f_1348(t35,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);}
else{
t34=C_eqp(t1,lf[286]);
if(C_truep(t34)){
t35=lf[41] /* generate-manifest */ =C_SCHEME_TRUE;;
/* csc.scm:779: loop */
t36=((C_word*)((C_word*)t0)[9])[1];
f_1348(t36,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);}
else{
t35=C_eqp(t1,lf[287]);
if(C_truep(t35)){
t36=lf[63] /* gui */ =C_SCHEME_TRUE;;
t37=C_a_i_cons(&a,2,lf[288],C_retrieve2(lf[76],"compile-options"));
t38=C_mutate(&lf[76] /* (set! compile-options ...) */,t37);
if(C_truep(C_retrieve2(lf[1],"mingw"))){
t39=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1935,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t40=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1939,a[2]=t39,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t41=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t41+1)))(4,t41,t40,C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME),C_fix(0));}
else{
/* csc.scm:779: loop */
t39=((C_word*)((C_word*)t0)[9])[1];
f_1348(t39,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);}}
else{
t36=C_eqp(t1,lf[294]);
if(C_truep(t36)){
t37=lf[64] /* deploy */ =C_SCHEME_TRUE;;
t38=lf[65] /* deployed */ =C_SCHEME_TRUE;;
/* csc.scm:779: loop */
t39=((C_word*)((C_word*)t0)[9])[1];
f_1348(t39,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);}
else{
t37=C_eqp(t1,lf[295]);
if(C_truep(t37)){
t38=lf[65] /* deployed */ =C_SCHEME_TRUE;;
/* csc.scm:779: loop */
t39=((C_word*)((C_word*)t0)[9])[1];
f_1348(t39,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);}
else{
t38=C_eqp(t1,lf[296]);
if(C_truep(t38)){
t39=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1963,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:647: check */
f_1269(t39,t1,((C_word*)((C_word*)t0)[7])[1],C_SCHEME_END_OF_LIST);}
else{
t39=C_eqp(t1,lf[298]);
if(C_truep(t39)){
t40=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1987,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:652: check */
f_1269(t40,t1,((C_word*)((C_word*)t0)[7])[1],C_SCHEME_END_OF_LIST);}
else{
t40=C_eqp(t1,lf[299]);
t41=(C_truep(t40)?t40:C_eqp(t1,lf[300]));
if(C_truep(t41)){
t42=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2008,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:656: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t42,lf[301],lf[302],((C_word*)((C_word*)t0)[7])[1]);}
else{
t42=C_eqp(t1,lf[303]);
if(C_truep(t42)){
t43=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2018,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:657: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t43,lf[304],lf[305],((C_word*)((C_word*)t0)[7])[1]);}
else{
t43=C_eqp(t1,lf[306]);
if(C_truep(t43)){
t44=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2028,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:658: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t44,lf[307],lf[308],((C_word*)((C_word*)t0)[7])[1]);}
else{
t44=C_eqp(t1,lf[309]);
if(C_truep(t44)){
t45=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2038,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:659: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t45,lf[310],lf[311],((C_word*)((C_word*)t0)[7])[1]);}
else{
t45=C_eqp(t1,lf[312]);
if(C_truep(t45)){
t46=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2048,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:660: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t46,lf[313],lf[314],((C_word*)((C_word*)t0)[7])[1]);}
else{
t46=C_eqp(t1,lf[315]);
if(C_truep(t46)){
t47=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2058,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:662: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t47,lf[321],lf[322],((C_word*)((C_word*)t0)[7])[1]);}
else{
t47=C_eqp(t1,lf[323]);
if(C_truep(t47)){
t48=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2082,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:666: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t48,lf[324],lf[325],((C_word*)((C_word*)t0)[7])[1]);}
else{
t48=C_eqp(t1,lf[326]);
if(C_truep(t48)){
t49=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2092,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:667: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t49,lf[327],lf[328],((C_word*)((C_word*)t0)[7])[1]);}
else{
t49=C_eqp(t1,lf[329]);
if(C_truep(t49)){
t50=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2102,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:668: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t50,lf[330],lf[331],((C_word*)((C_word*)t0)[7])[1]);}
else{
t50=C_eqp(t1,lf[332]);
if(C_truep(t50)){
t51=lf[84] /* verbose */ =C_SCHEME_TRUE;;
t52=lf[62] /* dry-run */ =C_SCHEME_TRUE;;
/* csc.scm:779: loop */
t53=((C_word*)((C_word*)t0)[9])[1];
f_1348(t53,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);}
else{
t51=C_eqp(t1,lf[333]);
t52=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=t2,a[10]=((C_word*)t0)[3],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t51)){
t53=t52;
f_2119(t53,t51);}
else{
t53=C_eqp(t1,lf[384]);
t54=t52;
f_2119(t54,(C_truep(t53)?t53:C_eqp(t1,lf[385])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_2119(C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2119,NULL,2,t0,t1);}
if(C_truep(t1)){
/* csc.scm:673: shared-build */
f_1308(((C_word*)t0)[9],C_SCHEME_FALSE);}
else{
t2=C_eqp(((C_word*)t0)[8],lf[334]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[8],lf[335]));
if(C_truep(t3)){
/* csc.scm:675: shared-build */
f_1308(((C_word*)t0)[9],C_SCHEME_TRUE);}
else{
t4=C_eqp(((C_word*)t0)[8],lf[336]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2143,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:677: check */
f_1269(t5,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1],C_SCHEME_END_OF_LIST);}
else{
t5=C_eqp(((C_word*)t0)[8],lf[337]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2160,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:681: check */
f_1269(t6,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1],C_SCHEME_END_OF_LIST);}
else{
t6=C_eqp(((C_word*)t0)[8],lf[338]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2177,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:685: check */
f_1269(t7,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1],C_SCHEME_END_OF_LIST);}
else{
t7=C_eqp(((C_word*)t0)[8],lf[339]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2194,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:689: check */
f_1269(t8,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1],C_SCHEME_END_OF_LIST);}
else{
t8=C_eqp(((C_word*)t0)[8],lf[340]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2211,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:693: check */
f_1269(t9,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1],C_SCHEME_END_OF_LIST);}
else{
t9=C_eqp(((C_word*)t0)[8],lf[342]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2232,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:696: check */
f_1269(t10,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1],C_SCHEME_END_OF_LIST);}
else{
t10=C_eqp(((C_word*)t0)[8],lf[344]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2258,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=C_a_i_list1(&a,1,lf[345]);
/* csc.scm:700: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t11,C_retrieve2(lf[82],"link-options"),t12);}
else{
t11=C_eqp(((C_word*)t0)[8],lf[346]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2271,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:702: check */
f_1269(t12,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1],C_SCHEME_END_OF_LIST);}
else{
t12=C_eqp(((C_word*)t0)[8],lf[347]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2296,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:706: check */
f_1269(t13,((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1],C_SCHEME_END_OF_LIST);}
else{
t13=C_eqp(((C_word*)t0)[8],lf[350]);
if(C_truep(t13)){
/* csc.scm:779: loop */
t14=((C_word*)((C_word*)t0)[6])[1];
f_1348(t14,((C_word*)t0)[5],((C_word*)((C_word*)t0)[7])[1]);}
else{
t14=C_eqp(((C_word*)t0)[8],lf[351]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2348,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:714: make-pathname */
((C_proc5)C_fast_retrieve_symbol_proc(lf[100]))(5,*((C_word*)lf[100]+1),t15,C_SCHEME_FALSE,lf[353],C_retrieve2(lf[33],"executable-extension"));}
else{
t15=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2355,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t16=C_eqp(((C_word*)t0)[8],lf[383]);
if(C_truep(t16)){
t17=lf[88] /* to-stdout */ =C_SCHEME_TRUE;;
t18=lf[86] /* translate-only */ =C_SCHEME_TRUE;;
t19=t15;
f_2355(t19,t18);}
else{
t17=t15;
f_2355(t17,C_SCHEME_UNDEFINED);}}}}}}}}}}}}}}}

/* k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_2355(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2355,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[9];
if(C_truep((C_truep(C_eqp(t3,lf[381]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[382]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=C_mutate(&lf[79] /* (set! compilation-optimization-options ...) */,C_retrieve2(lf[44],"best-compilation-optimization-options"));
t5=C_mutate(&lf[80] /* (set! linking-optimization-options ...) */,C_retrieve2(lf[46],"best-linking-optimization-options"));
t6=t2;
f_2358(t6,t5);}
else{
t4=t2;
f_2358(t4,C_SCHEME_UNDEFINED);}}

/* k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_2358(C_word t0,C_word t1){
C_word tmp;
C_word t2;
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
C_save_and_reclaim((void*)trf_2358,NULL,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[9],lf[354]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2365,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t4=f_2365(C_a_i(&a,3),t3,t2);
/* csc.scm:779: loop */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1348(t5,((C_word*)t0)[6],((C_word*)((C_word*)t0)[8])[1]);}
else{
if(C_truep(C_i_memq(((C_word*)t0)[9],lf[355]))){
/* csc.scm:724: t-options */
f_1262(((C_word*)t0)[4],C_a_i_list(&a,1,((C_word*)t0)[3]));}
else{
if(C_truep(C_i_memq(((C_word*)t0)[9],lf[356]))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2395,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:726: check */
f_1269(t3,((C_word*)t0)[9],((C_word*)((C_word*)t0)[8])[1],C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2414,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t4=C_i_string_length(((C_word*)t0)[3]);
if(C_truep(C_i_greaterp(t4,C_fix(2)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2796,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:731: substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[358]+1)))(5,*((C_word*)lf[358]+1),t5,((C_word*)t0)[3],C_fix(0),C_fix(2));}
else{
t5=t3;
f_2414(t5,C_SCHEME_FALSE);}}}}}

/* k2794 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2414(t2,C_i_string_equal_p(lf[380],t1));}

/* k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_2414(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2414,NULL,2,t0,t1);}
if(C_truep(t1)){
/* csc.scm:732: t-options */
f_1262(((C_word*)t0)[7],C_a_i_list(&a,1,((C_word*)t0)[6]));}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t3=C_i_string_length(((C_word*)t0)[6]);
if(C_truep(C_i_greaterp(t3,C_fix(1)))){
t4=C_i_string_ref(((C_word*)t0)[6],C_fix(0));
t5=t2;
f_2423(t5,C_i_char_equalp(C_make_character(45),t4));}
else{
t4=t2;
f_2423(t4,C_SCHEME_FALSE);}}}

/* k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_2423(C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2423,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_string_ref(((C_word*)t0)[8],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(108),t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2433,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[8]);
/* csc.scm:736: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t3,C_retrieve2(lf[82],"link-options"),t4);}
else{
t3=C_i_string_ref(((C_word*)t0)[8],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(76),t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2447,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list1(&a,1,((C_word*)t0)[8]);
/* csc.scm:738: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t4,C_retrieve2(lf[82],"link-options"),t5);}
else{
t4=C_i_string_ref(((C_word*)t0)[8],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(73),t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2461,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[8]);
/* csc.scm:740: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t5,C_retrieve2(lf[76],"compile-options"),t6);}
else{
t5=C_i_string_ref(((C_word*)t0)[8],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(68),t5))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2478,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:742: substring */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[358]+1)))(4,*((C_word*)lf[358]+1),t6,((C_word*)t0)[8],C_fix(2));}
else{
t6=C_i_string_ref(((C_word*)t0)[8],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(70),t6))){
if(C_truep(C_retrieve2(lf[3],"osx"))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2491,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t8=C_a_i_list1(&a,1,((C_word*)t0)[8]);
/* csc.scm:745: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t7,C_retrieve2(lf[76],"compile-options"),t8);}
else{
/* csc.scm:779: loop */
t7=((C_word*)((C_word*)t0)[7])[1];
f_1348(t7,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1]);}}
else{
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t8=C_i_string_length(((C_word*)t0)[8]);
if(C_truep(C_i_greaterp(t8,C_fix(3)))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2607,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:746: substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[358]+1)))(5,*((C_word*)lf[358]+1),t9,((C_word*)t0)[8],C_fix(0),C_fix(4));}
else{
t9=t7;
f_2501(t9,C_SCHEME_FALSE);}}}}}}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2637,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:755: file-exists? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[158]))(3,*((C_word*)lf[158]+1),t2,((C_word*)t0)[8]);}}

/* k2635 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2637,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2642,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2648,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[5],t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2759,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:775: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t2,((C_word*)t0)[6],lf[379]);}}

/* k2757 in k2635 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* csc.scm:776: file-exists? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[158]))(3,*((C_word*)lf[158]+1),t2,t1);}

/* k2763 in k2757 in k2635 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2765,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
/* csc.scm:779: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1348(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[6])[1]);}
else{
/* csc.scm:778: quit */
f_978(((C_word*)t0)[3],lf[378],C_a_i_list(&a,1,((C_word*)t0)[2]));}}

/* a2647 in k2635 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2648(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2648,5,t0,t1,t2,t3,t4);}
t5=t4;
if(C_truep(t5)){
t6=t4;
if(C_truep((C_truep(C_i_equalp(t6,lf[366]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t6,lf[367]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2673,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:760: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t7,C_retrieve2(lf[49],"c-files"),t8);}
else{
if(C_truep(C_i_string_ci_equal_p(t4,lf[368]))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2687,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:762: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t7,C_retrieve2(lf[50],"rc-files"),t8);}
else{
t7=t4;
if(C_truep((C_truep(C_i_equalp(t7,lf[369]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t7,lf[370]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t7,lf[371]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t7,lf[372]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t7,lf[373]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2700,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[3],"osx"))){
t9=C_a_i_cons(&a,2,lf[374],C_retrieve2(lf[76],"compile-options"));
t10=C_mutate(&lf[76] /* (set! compile-options ...) */,t9);
t11=t8;
f_2700(t11,t10);}
else{
t9=t8;
f_2700(t9,C_SCHEME_UNDEFINED);}}
else{
t8=t4;
if(C_truep((C_truep(C_i_equalp(t8,lf[375]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t8,lf[376]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t8,lf[377]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t9=lf[56] /* objc-mode */ =C_SCHEME_TRUE;;
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2724,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t11=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:769: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t10,C_retrieve2(lf[49],"c-files"),t11);}
else{
t9=C_i_string_equal_p(t4,C_retrieve2(lf[29],"object-extension"));
t10=(C_truep(t9)?t9:C_i_string_equal_p(t4,C_retrieve2(lf[31],"library-extension")));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2741,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t12=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:772: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t11,C_retrieve2(lf[53],"object-files"),t12);}
else{
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2749,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t12=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:773: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t11,C_retrieve2(lf[48],"scheme-files"),t12);}}}}}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2659,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:758: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t6,C_retrieve2(lf[48],"scheme-files"),t7);}}

/* k2657 in a2647 in k2635 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[48] /* (set! scheme-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2747 in a2647 in k2635 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[48] /* (set! scheme-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2739 in a2647 in k2635 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[53] /* (set! object-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2722 in a2647 in k2635 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[49] /* (set! c-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2698 in a2647 in k2635 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_2700(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2700,NULL,2,t0,t1);}
t2=lf[55] /* cpp-mode */ =C_SCHEME_TRUE;;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2705,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:766: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t3,C_retrieve2(lf[49],"c-files"),t4);}

/* k2703 in k2698 in a2647 in k2635 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[49] /* (set! c-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2685 in a2647 in k2635 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[50] /* (set! rc-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2671 in a2647 in k2635 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[49] /* (set! c-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* a2641 in k2635 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2642,2,t0,t1);}
/* csc.scm:756: decompose-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[365]))(3,*((C_word*)lf[365]+1),t1,((C_word*)t0)[2]);}

/* k2605 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2501(t2,C_i_string_equal_p(lf[364],t1));}

/* k2499 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_2501(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2501,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2505,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[4]);
/* csc.scm:747: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t2,C_retrieve2(lf[82],"link-options"),t3);}
else{
t2=C_i_string_length(((C_word*)t0)[4]);
if(C_truep(C_i_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2590,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* string->list */
t4=C_fast_retrieve(lf[125]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
/* csc.scm:754: quit */
f_978(((C_word*)t0)[3],lf[363],C_a_i_list(&a,1,((C_word*)t0)[2]));}}}

/* k2588 in k2499 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2590,2,t0,t1);}
t2=C_i_cdr(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csc.scm:750: lset-difference */
((C_proc5)C_fast_retrieve_symbol_proc(lf[361]))(5,*((C_word*)lf[361]+1),t3,*((C_word*)lf[127]+1),t2,lf[362]);}

/* k2584 in k2588 in k2499 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2586(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2586,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2528,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[94]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2544,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2546,a[2]=t4,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_2546(t12,t8,((C_word*)t0)[4]);}
else{
/* csc.scm:753: quit */
f_978(((C_word*)t0)[3],lf[360],C_a_i_list(&a,1,((C_word*)t0)[2]));}}

/* map-loop313 in k2584 in k2588 in k2499 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_2546(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2546,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2575,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_string(&a,1,t4);
/* csc.scm:752: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t3,lf[359],t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2573 in map-loop313 in k2584 in k2588 in k2499 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2575(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2575,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2546(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2546(t6,((C_word*)t0)[3],t5);}}

/* k2542 in k2584 in k2588 in k2499 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:752: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k2526 in k2584 in k2588 in k2499 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1348(t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2503 in k2499 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[82] /* (set! link-options ...) */,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1348(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k2489 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[76] /* (set! compile-options ...) */,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1348(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k2476 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2478,2,t0,t1);}
/* csc.scm:742: t-options */
f_1262(((C_word*)t0)[2],C_a_i_list(&a,2,lf[357],t1));}

/* k2459 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[76] /* (set! compile-options ...) */,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1348(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k2445 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[82] /* (set! link-options ...) */,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1348(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k2431 in k2421 in k2412 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[82] /* (set! link-options ...) */,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1348(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k2393 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2395,2,t0,t1);}
t2=C_i_car(((C_word*)((C_word*)t0)[6])[1]);
t3=C_a_i_string_to_number(&a,2,t2,C_fix(10));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2404,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:729: t-options */
f_1262(t4,C_a_i_list(&a,2,((C_word*)t0)[2],t2));}

/* k2402 in k2393 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
/* csc.scm:779: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1348(t4,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* g297 in k2356 in k2353 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static C_word C_fcall f_2365(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_check;
t2=C_i_cadr(t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
return(t4);}

/* k2346 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2348,2,t0,t1);}
t2=C_mutate(&lf[83] /* (set! target-filename ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:715: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t3,C_retrieve2(lf[48],"scheme-files"),lf[352]);}

/* k2350 in k2346 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[48] /* (set! scheme-files ...) */,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1348(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k2294 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2296,2,t0,t1);}
t2=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(&lf[66] /* (set! rpath ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:708: build-platform */
((C_proc2)C_fast_retrieve_symbol_proc(lf[320]))(2,*((C_word*)lf[320]+1),t4);}

/* k2330 in k2294 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2332,2,t0,t1);}
t2=C_i_memq(t1,lf[348]);
t3=(C_truep(t2)?C_i_not(C_retrieve2(lf[1],"mingw")):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2322,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:710: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t5,lf[349],C_retrieve2(lf[66],"rpath"));}
else{
/* csc.scm:779: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1348(t4,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}}

/* k2320 in k2330 in k2294 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2322,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* csc.scm:710: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),((C_word*)t0)[2],C_retrieve2(lf[82],"link-options"),t2);}

/* k2308 in k2330 in k2294 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(&lf[82] /* (set! link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
/* csc.scm:779: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1348(t5,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2269 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2271,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2275,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2283,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
/* csc.scm:703: string-split */
((C_proc3)C_fast_retrieve_symbol_proc(lf[343]))(3,*((C_word*)lf[343]+1),t3,t4);}

/* k2281 in k2269 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:703: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),((C_word*)t0)[2],C_retrieve2(lf[82],"link-options"),t1);}

/* k2273 in k2269 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(&lf[82] /* (set! link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
/* csc.scm:779: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1348(t5,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2256 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[82] /* (set! link-options ...) */,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1348(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k2230 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2232,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2244,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
/* csc.scm:697: string-split */
((C_proc3)C_fast_retrieve_symbol_proc(lf[343]))(3,*((C_word*)lf[343]+1),t3,t4);}

/* k2242 in k2230 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:697: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),((C_word*)t0)[2],C_retrieve2(lf[76],"compile-options"),t1);}

/* k2234 in k2230 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(&lf[76] /* (set! compile-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
/* csc.scm:779: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1348(t5,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2209 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2211,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2215,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
/* csc.scm:694: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t2,lf[341],t3,t4);}

/* k2213 in k2209 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1348(t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2192 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(&lf[27] /* (set! linker ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
/* csc.scm:779: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1348(t6,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2175 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(&lf[25] /* (set! c++-compiler ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
/* csc.scm:779: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1348(t6,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2158 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(&lf[24] /* (set! compiler ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
/* csc.scm:779: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1348(t6,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2141 in k2117 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(&lf[23] /* (set! translator ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
/* csc.scm:779: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1348(t6,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2100 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1348(t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2090 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1348(t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2080 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1348(t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2056 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2058,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2072,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:663: build-platform */
((C_proc2)C_fast_retrieve_symbol_proc(lf[320]))(2,*((C_word*)lf[320]+1),t3);}

/* k2070 in k2056 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2072,2,t0,t1);}
if(C_truep((C_truep(C_eqp(t1,lf[0]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[7]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[316]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[317]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2068,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:665: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t2,lf[318],lf[319],C_retrieve2(lf[76],"compile-options"));}
else{
/* csc.scm:779: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1348(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}}

/* k2066 in k2070 in k2056 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[76] /* (set! compile-options ...) */,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1348(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k2046 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1348(t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2036 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1348(t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2026 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1348(t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2016 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1348(t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2006 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1348(t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k1985 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
t5=C_mutate(&lf[83] /* (set! target-filename ...) */,t2);
/* csc.scm:779: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1348(t6,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k1961 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1963,2,t0,t1);}
if(C_truep(C_retrieve2(lf[3],"osx"))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
/* csc.scm:649: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t2,lf[297],t3,C_retrieve2(lf[82],"link-options"));}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
/* csc.scm:779: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1348(t4,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}}

/* k1972 in k1961 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(&lf[82] /* (set! link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
/* csc.scm:779: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1348(t5,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k1937 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:634: make-pathname */
((C_proc5)C_fast_retrieve_symbol_proc(lf[100]))(5,*((C_word*)lf[100]+1),((C_word*)t0)[2],t1,lf[293],C_retrieve2(lf[29],"object-extension"));}

/* k1933 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1935,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[53],"object-files"));
t3=C_mutate(&lf[53] /* (set! object-files ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1931,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:639: cons* */
((C_proc7)C_fast_retrieve_symbol_proc(lf[124]))(7,*((C_word*)lf[124]+1),t4,lf[289],lf[290],lf[291],lf[292],C_retrieve2(lf[82],"link-options"));}

/* k1929 in k1933 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[82] /* (set! link-options ...) */,t1);
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1348(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k1868 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[5])[1]);
t4=C_a_i_list1(&a,1,t3);
/* csc.scm:622: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t2,C_retrieve2(lf[92],"required-extensions"),t4);}

/* k1872 in k1868 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1874,2,t0,t1);}
t2=C_mutate(&lf[92] /* (set! required-extensions ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1877,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(((C_word*)((C_word*)t0)[5])[1]);
/* csc.scm:623: t-options */
f_1262(t3,C_a_i_list(&a,2,lf[284],t4));}

/* k1875 in k1872 in k1868 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
/* csc.scm:779: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1348(t4,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k1775 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1777,2,t0,t1);}
t2=C_mutate(&lf[76] /* (set! compile-options ...) */,t1);
t3=C_a_i_cons(&a,2,lf[263],C_retrieve2(lf[82],"link-options"));
t4=C_mutate(&lf[82] /* (set! link-options ...) */,t3);
t5=((C_word*)t0)[2];
f_1762(t5,t4);}

/* k1760 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_1762(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1762,NULL,2,t0,t1);}
if(C_truep(C_retrieve2(lf[84],"verbose"))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1768,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:602: t-options */
f_1262(t2,C_a_i_list(&a,1,lf[262]));}
else{
t2=lf[84] /* verbose */ =C_SCHEME_TRUE;;
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1348(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);}}

/* k1766 in k1760 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=lf[84] /* verbose */ =C_fix(2);;
/* csc.scm:779: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1348(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k1737 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:593: exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[12]))(3,*((C_word*)lf[12]+1),((C_word*)t0)[2],C_fix(0));}

/* k1725 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:592: exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[12]))(3,*((C_word*)lf[12]+1),((C_word*)t0)[2],C_fix(0));}

/* k1713 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:591: exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[12]))(3,*((C_word*)lf[12]+1),((C_word*)t0)[2],C_fix(0));}

/* k1701 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:590: exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[12]))(3,*((C_word*)lf[12]+1),((C_word*)t0)[2],C_fix(0));}

/* k1675 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(&lf[73] /* (set! translate-options ...) */,t1);
t3=lf[91] /* static-libs */ =C_SCHEME_TRUE;;
/* csc.scm:779: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1348(t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k1664 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(&lf[73] /* (set! translate-options ...) */,t1);
t3=lf[90] /* static */ =C_SCHEME_TRUE;;
/* csc.scm:779: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1348(t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k1633 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:569: system */
((C_proc3)C_fast_retrieve_symbol_proc(lf[133]))(3,*((C_word*)lf[133]+1),((C_word*)t0)[2],t1);}

/* k1626 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:570: exit */
((C_proc2)C_fast_retrieve_symbol_proc(lf[12]))(2,*((C_word*)lf[12]+1),((C_word*)t0)[2]);}

/* k1617 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:566: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[136]+1)))(3,*((C_word*)lf[136]+1),((C_word*)t0)[2],t1);}

/* k1610 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:567: exit */
((C_proc2)C_fast_retrieve_symbol_proc(lf[12]))(2,*((C_word*)lf[12]+1),((C_word*)t0)[2]);}

/* k1220 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1222(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1222,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1229,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[235],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,lf[236],t4);
t6=C_a_i_cons(&a,2,t1,t5);
t7=C_a_i_cons(&a,2,lf[237],t6);
t8=C_a_i_cons(&a,2,t1,t7);
t9=C_a_i_cons(&a,2,lf[238],t8);
/* csc.scm:281: ##sys#print-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[155]))(3,*((C_word*)lf[155]+1),t2,t9);}

/* k1227 in k1220 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:281: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[136]+1)))(3,*((C_word*)lf[136]+1),((C_word*)t0)[2],t1);}

/* k1598 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:564: exit */
((C_proc2)C_fast_retrieve_symbol_proc(lf[12]))(2,*((C_word*)lf[12]+1),((C_word*)t0)[2]);}

/* k1586 in k1583 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:779: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1348(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1359,2,t0,t1);}
t2=C_mutate(&lf[76] /* (set! compile-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1363,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[10],"elf"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1172,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:253: conc */
((C_proc5)C_fast_retrieve_symbol_proc(lf[223]))(5,*((C_word*)lf[223]+1),t4,lf[229],C_retrieve2(lf[81],"library-dir"),lf[230]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1206,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:263: conc */
((C_proc5)C_fast_retrieve_symbol_proc(lf[223]))(5,*((C_word*)lf[223]+1),t4,lf[231],C_retrieve2(lf[81],"library-dir"),lf[232]);}}

/* k1204 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1206,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* csc.scm:515: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),((C_word*)t0)[2],C_retrieve2(lf[82],"link-options"),t2);}

/* k1170 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1176,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1180,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[65],"deployed"))?C_i_not(C_retrieve2(lf[6],"netbsd")):C_SCHEME_FALSE);
if(C_truep(t4)){
/* csc.scm:254: conc */
((C_proc5)C_fast_retrieve_symbol_proc(lf[223]))(5,*((C_word*)lf[223]+1),t2,lf[224],lf[226],lf[225]);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1190,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME),C_fix(0));}}}

/* k1188 in k1170 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1190,2,t0,t1);}
if(C_truep(C_retrieve2(lf[17],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[17],"chicken-prefix"),lf[227]);
/* csc.scm:88: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),((C_word*)t0)[3],t2,lf[228]);}
else{
/* csc.scm:254: conc */
((C_proc5)C_fast_retrieve_symbol_proc(lf[223]))(5,*((C_word*)lf[223]+1),((C_word*)t0)[2],lf[224],t1,lf[225]);}}

/* k1178 in k1170 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:254: conc */
((C_proc5)C_fast_retrieve_symbol_proc(lf[223]))(5,*((C_word*)lf[223]+1),((C_word*)t0)[2],lf[224],t1,lf[225]);}

/* k1174 in k1170 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1176,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
/* csc.scm:515: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),((C_word*)t0)[2],C_retrieve2(lf[82],"link-options"),t2);}

/* k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1363,2,t0,t1);}
t2=C_mutate(&lf[82] /* (set! link-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1366,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[58],"inquiry-only"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1539,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[59],"show-cflags"))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1572,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:518: compiler-options */
f_3287(t5);}
else{
t5=t4;
f_1539(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_1366(2,t4,C_SCHEME_UNDEFINED);}}

/* k1570 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:518: print* */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[222]+1)))(4,*((C_word*)lf[222]+1),((C_word*)t0)[2],t1,C_make_character(32));}

/* k1537 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1539,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1542,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[60],"show-ldflags"))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1565,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:519: linker-options */
f_3773(t3);}
else{
t3=t2;
f_1542(2,t3,C_SCHEME_UNDEFINED);}}

/* k1563 in k1537 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:519: print* */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[222]+1)))(4,*((C_word*)lf[222]+1),((C_word*)t0)[2],t1,C_make_character(32));}

/* k1540 in k1537 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1542,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1545,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[61],"show-libs"))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1558,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:520: linker-libraries */
f_3803(t3);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5148,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:521: newline */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[221]+1)))(2,*((C_word*)lf[221]+1),t3);}}

/* f5148 in k1540 in k1537 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:522: exit */
((C_proc2)C_fast_retrieve_symbol_proc(lf[12]))(2,*((C_word*)lf[12]+1),((C_word*)t0)[2]);}

/* k1556 in k1540 in k1537 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:520: print* */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[222]+1)))(4,*((C_word*)lf[222]+1),((C_word*)t0)[2],t1,C_make_character(32));}

/* k1543 in k1540 in k1537 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1548,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:521: newline */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[221]+1)))(2,*((C_word*)lf[221]+1),t2);}

/* k1546 in k1543 in k1540 in k1537 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:522: exit */
((C_proc2)C_fast_retrieve_symbol_proc(lf[12]))(2,*((C_word*)lf[12]+1),((C_word*)t0)[2]);}

/* k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1366(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(C_retrieve2(lf[48],"scheme-files")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1464,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(C_retrieve2(lf[49],"c-files")))){
if(C_truep(C_i_nullp(C_retrieve2(lf[53],"object-files")))){
/* csc.scm:526: quit */
f_978(t3,lf[210],C_SCHEME_END_OF_LIST);}
else{
t4=t3;
f_1464(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_1464(2,t4,C_SCHEME_UNDEFINED);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1502,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[89],"shared"))?C_i_not(C_retrieve2(lf[57],"embedded")):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_a_i_cons(&a,2,lf[220],C_retrieve2(lf[73],"translate-options"));
t6=C_mutate(&lf[73] /* (set! translate-options ...) */,t5);
t7=t3;
f_1502(t7,t6);}
else{
t5=t3;
f_1502(t5,C_SCHEME_UNDEFINED);}}}

/* k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_1502(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1502,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1505,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[83],"target-filename"))){
t3=t2;
f_1505(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1512,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[89],"shared"))){
t4=C_i_car(C_retrieve2(lf[48],"scheme-files"));
/* csc.scm:539: pathname-replace-extension */
((C_proc4)C_fast_retrieve_symbol_proc(lf[200]))(4,*((C_word*)lf[200]+1),t3,t4,C_retrieve2(lf[35],"shared-library-extension"));}
else{
t4=C_i_car(C_retrieve2(lf[48],"scheme-files"));
/* csc.scm:540: pathname-replace-extension */
((C_proc4)C_fast_retrieve_symbol_proc(lf[200]))(4,*((C_word*)lf[200]+1),t3,t4,C_retrieve2(lf[33],"executable-extension"));}}}

/* k1510 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[83] /* (set! target-filename ...) */,t1);
t3=((C_word*)t0)[2];
f_1505(t3,t2);}

/* k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_1505(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1505,NULL,2,t0,t1);}
t2=C_retrieve2(lf[48],"scheme-files");
t3=C_i_check_list_2(t2,lf[152]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2983,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3017,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_3017(t8,t4,t2);}

/* for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3017(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3017,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2854,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_i_length(C_retrieve2(lf[48],"scheme-files"));
t6=C_i_nequalp(C_fix(1),t5);
t7=(C_truep(t6)?C_retrieve2(lf[83],"target-filename"):t3);
if(C_truep(C_retrieve2(lf[55],"cpp-mode"))){
/* csc.scm:787: pathname-replace-extension */
((C_proc4)C_fast_retrieve_symbol_proc(lf[200]))(4,*((C_word*)lf[200]+1),t4,t7,lf[217]);}
else{
if(C_truep(C_retrieve2(lf[56],"objc-mode"))){
/* csc.scm:787: pathname-replace-extension */
((C_proc4)C_fast_retrieve_symbol_proc(lf[200]))(4,*((C_word*)lf[200]+1),t4,t7,lf[218]);}
else{
/* csc.scm:787: pathname-replace-extension */
((C_proc4)C_fast_retrieve_symbol_proc(lf[200]))(4,*((C_word*)lf[200]+1),t4,t7,lf[219]);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2852 in for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2854(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2854,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2857,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2877,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2881,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2885,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5142,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t6,((C_word*)t0)[2]);}

/* f5142 in k2852 in for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k2883 in k2852 in for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2885(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2885,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2889,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2893,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[88],"to-stdout"))){
t4=t3;
f_2893(t4,lf[215]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2959,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[2];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5137,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t6,t5);}}

/* f5137 in k2883 in k2852 in for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k2957 in k2883 in k2852 in for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2959,2,t0,t1);}
t2=((C_word*)t0)[2];
f_2893(t2,C_a_i_list(&a,2,lf[216],t1));}

/* k2891 in k2883 in k2852 in for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_2893(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2893,NULL,2,t0,t1);}
t2=C_fudge(C_fix(13));
t3=(C_truep(t2)?lf[212]:C_SCHEME_END_OF_LIST);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2901,a[2]=t5,a[3]=t7,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve2(lf[55],"cpp-mode"))){
/* csc.scm:805: append */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(6,*((C_word*)lf[97]+1),t8,C_retrieve2(lf[47],"extra-features"),C_retrieve2(lf[73],"translate-options"),lf[213],C_retrieve2(lf[78],"translation-optimization-options"));}
else{
if(C_truep(C_retrieve2(lf[56],"objc-mode"))){
/* csc.scm:805: append */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(6,*((C_word*)lf[97]+1),t8,C_retrieve2(lf[47],"extra-features"),C_retrieve2(lf[73],"translate-options"),lf[214],C_retrieve2(lf[78],"translation-optimization-options"));}
else{
/* csc.scm:805: append */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(6,*((C_word*)lf[97]+1),t8,C_retrieve2(lf[47],"extra-features"),C_retrieve2(lf[73],"translate-options"),C_SCHEME_END_OF_LIST,C_retrieve2(lf[78],"translation-optimization-options"));}}}

/* k2899 in k2891 in k2883 in k2852 in for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2901(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2901,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[94]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2907,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2909,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2909(t7,t3,t1);}

/* map-loop390 in k2899 in k2891 in k2883 in k2852 in for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_2909(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2909,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2938,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g396405 */
f_3905(t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2936 in map-loop390 in k2899 in k2891 in k2883 in k2852 in for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
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
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2938,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2909(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2909(t6,((C_word*)t0)[3],t5);}}

/* k2905 in k2899 in k2891 in k2883 in k2852 in for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:797: append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(5,*((C_word*)lf[97]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2887 in k2883 in k2852 in for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:796: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],C_retrieve2(lf[23],"translator"),((C_word*)t0)[2],t1);}

/* k2879 in k2852 in for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:795: string-intersperse */
((C_proc4)C_fast_retrieve_symbol_proc(lf[95]))(4,*((C_word*)lf[95]+1),((C_word*)t0)[2],t1,lf[211]);}

/* k2875 in k2852 in for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:794: command */
f_3991(((C_word*)t0)[2],t1);}

/* k2855 in k2852 in for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2857,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2861,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:813: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t2,t3,C_retrieve2(lf[49],"c-files"));}

/* k2859 in k2855 in k2852 in for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2861,2,t0,t1);}
t2=C_mutate(&lf[49] /* (set! c-files ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2865,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:814: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t3,t4,C_retrieve2(lf[51],"generated-c-files"));}

/* k2863 in k2859 in k2855 in k2852 in for-each-loop371 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(&lf[51] /* (set! generated-c-files ...) */,t1);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3017(t4,((C_word*)t0)[2],t3);}

/* k2981 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_2983(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2983,2,t0,t1);}
if(C_truep(C_retrieve2(lf[85],"keep-files"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_1369(2,t3,t2);}
else{
t2=C_i_check_list_2(C_SCHEME_END_OF_LIST,lf[152]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2994,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_2994(t6,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}}

/* for-each-loop426 in k2981 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_2994(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2994,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3004,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g427433 */
f_4007(t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3002 in for-each-loop426 in k2981 in k1503 in k1500 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2994(t3,((C_word*)t0)[2],t2);}

/* k1462 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1464,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1467,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(C_retrieve2(lf[49],"c-files")))){
t3=C_retrieve2(lf[53],"object-files");
/* csc.scm:527: last */
((C_proc3)C_fast_retrieve_symbol_proc(lf[209]))(3,*((C_word*)lf[209]+1),t2,t3);}
else{
t3=C_retrieve2(lf[49],"c-files");
/* csc.scm:527: last */
((C_proc3)C_fast_retrieve_symbol_proc(lf[209]))(3,*((C_word*)lf[209]+1),t2,t3);}}

/* k1465 in k1462 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1467,2,t0,t1);}
if(C_truep(C_retrieve2(lf[83],"target-filename"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_1369(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1474,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[89],"shared"))){
/* csc.scm:531: pathname-replace-extension */
((C_proc4)C_fast_retrieve_symbol_proc(lf[200]))(4,*((C_word*)lf[200]+1),t2,t1,C_retrieve2(lf[35],"shared-library-extension"));}
else{
/* csc.scm:532: pathname-replace-extension */
((C_proc4)C_fast_retrieve_symbol_proc(lf[200]))(4,*((C_word*)lf[200]+1),t2,t1,C_retrieve2(lf[33],"executable-extension"));}}}

/* k1472 in k1465 in k1462 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[83] /* (set! target-filename ...) */,t1);
t3=((C_word*)t0)[2];
f_1369(2,t3,t2);}

/* k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1369,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1372,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[64],"deploy"))){
t3=C_retrieve2(lf[89],"shared");
t4=t2;
f_1372(t4,(C_truep(t3)?C_SCHEME_UNDEFINED:f_1331(C_a_i(&a,6))));}
else{
t3=t2;
f_1372(t3,C_SCHEME_UNDEFINED);}}

/* k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_1372(C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1372,NULL,2,t0,t1);}
if(C_truep(C_retrieve2(lf[86],"translate-only"))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3042,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_retrieve2(lf[49],"c-files");
t7=C_i_check_list_2(t6,lf[152]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3101,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3264,a[2]=t5,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_3264(t12,t8,t6);}}

/* for-each-loop445 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3264(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3264,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3274,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g446452 */
t5=((C_word*)t0)[2];
f_3042(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3272 in for-each-loop445 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3264(t3,((C_word*)t0)[2],t2);}

/* k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3237,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[41],"generate-manifest"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3262,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:840: software-type */
((C_proc2)C_fast_retrieve_symbol_proc(lf[208]))(2,*((C_word*)lf[208]+1),t4);}
else{
t4=t3;
f_3237(t4,C_SCHEME_FALSE);}}

/* k3260 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3237(t2,C_eqp(lf[207],t1));}

/* k3235 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3237(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3237,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3240,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:841: pathname-replace-extension */
((C_proc4)C_fast_retrieve_symbol_proc(lf[200]))(4,*((C_word*)lf[200]+1),t2,C_retrieve2(lf[83],"target-filename"),lf[206]);}
else{
t2=((C_word*)t0)[2];
f_3104(t2,C_SCHEME_UNDEFINED);}}

/* k3238 in k3235 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3240,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3243,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3255,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:842: pathname-file */
((C_proc3)C_fast_retrieve_symbol_proc(lf[165]))(3,*((C_word*)lf[165]+1),t3,C_retrieve2(lf[83],"target-filename"));}

/* k3253 in k3238 in k3235 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3255,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4131,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[84],"verbose"))){
/* csc.scm:1072: print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[136]+1)))(4,*((C_word*)lf[136]+1),t3,lf[205],t2);}
else{
t4=t3;
f_4131(2,t4,C_SCHEME_UNDEFINED);}}

/* k4129 in k3253 in k3238 in k3235 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4131,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4136,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1073: with-output-to-file */
((C_proc4)C_fast_retrieve_symbol_proc(lf[156]))(4,*((C_word*)lf[156]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a4135 in k4129 in k3253 in k3238 in k3235 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4136,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4144,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[203],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,lf[204],t4);
/* csc.scm:1073: ##sys#print-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[155]))(3,*((C_word*)lf[155]+1),t2,t5);}

/* k4142 in a4135 in k4129 in k3253 in k3238 in k3235 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1075: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[136]+1)))(3,*((C_word*)lf[136]+1),((C_word*)t0)[2],t1);}

/* k3241 in k3238 in k3235 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3243,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],C_retrieve2(lf[50],"rc-files"));
t3=C_mutate(&lf[50] /* (set! rc-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],C_retrieve2(lf[52],"generated-rc-files"));
t5=C_mutate(&lf[52] /* (set! generated-rc-files ...) */,t4);
t6=((C_word*)t0)[2];
f_3104(t6,t5);}

/* k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3104(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3104,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3105,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve2(lf[50],"rc-files");
t4=C_i_check_list_2(t3,lf[152]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3142,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3213,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3213(t9,t5,t3);}

/* for-each-loop473 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3213(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3213,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3223,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g474480 */
t5=((C_word*)t0)[2];
f_3105(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3221 in for-each-loop473 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3213(t3,((C_word*)t0)[2],t2);}

/* k3140 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3142,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3146,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3211,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:854: reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[202]+1)))(3,*((C_word*)lf[202]+1),t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k3209 in k3140 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:854: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),((C_word*)t0)[2],t1,C_retrieve2(lf[53],"object-files"));}

/* k3144 in k3140 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3146(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3146,2,t0,t1);}
t2=C_mutate(&lf[53] /* (set! object-files ...) */,t1);
if(C_truep(C_retrieve2(lf[85],"keep-files"))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
f_1378(2,t4,t3);}
else{
t3=C_retrieve2(lf[51],"generated-c-files");
t4=C_i_check_list_2(t3,lf[152]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3155,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3186,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_3186(t9,t5,t3);}}

/* for-each-loop493 in k3144 in k3140 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3186(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3186,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3196,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g494500 */
f_4007(t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3194 in for-each-loop493 in k3144 in k3140 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3186(t3,((C_word*)t0)[2],t2);}

/* k3153 in k3144 in k3140 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3155(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3155,2,t0,t1);}
t2=C_retrieve2(lf[52],"generated-rc-files");
t3=C_i_check_list_2(t2,lf[152]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3163,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3163(t7,((C_word*)t0)[2],t2);}

/* for-each-loop509 in k3153 in k3144 in k3140 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3163(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3163,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3173,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g510516 */
f_4007(t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3171 in for-each-loop509 in k3153 in k3144 in k3140 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3163(t3,((C_word*)t0)[2],t2);}

/* g474 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3105(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3105,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3109,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:847: string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(5,*((C_word*)lf[113]+1),t3,t2,lf[201],C_retrieve2(lf[29],"object-extension"));}

/* k3107 in g474 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3109,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3112,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3124,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3132,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[2];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5114,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t6,t5);}

/* f5114 in k3107 in g474 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k3130 in k3107 in g474 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3132,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3136,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5109,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t4,t3);}

/* f5109 in k3130 in k3107 in g474 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k3134 in k3130 in k3107 in g474 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3136,2,t0,t1);}
t2=C_a_i_list3(&a,3,C_retrieve2(lf[26],"rc-compiler"),((C_word*)t0)[3],t1);
/* csc.scm:849: string-intersperse */
((C_proc3)C_fast_retrieve_symbol_proc(lf[95]))(3,*((C_word*)lf[95]+1),((C_word*)t0)[2],t2);}

/* k3122 in k3107 in g474 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:848: command */
f_3991(((C_word*)t0)[2],t1);}

/* k3110 in k3107 in g474 in k3102 in k3099 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3112,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],C_retrieve2(lf[54],"generated-object-files"));
t3=C_mutate(&lf[54] /* (set! generated-object-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* g446 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3042(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3042,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3046,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:825: pathname-replace-extension */
((C_proc4)C_fast_retrieve_symbol_proc(lf[200]))(4,*((C_word*)lf[200]+1),t3,t2,C_retrieve2(lf[29],"object-extension"));}

/* k3044 in g446 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3046(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3046,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3049,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3061,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[55],"cpp-mode"))?C_retrieve2(lf[25],"c++-compiler"):C_retrieve2(lf[24],"compiler"));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3073,a[2]=t1,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[2];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5104,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t7,t6);}

/* f5104 in k3044 in g446 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k3071 in k3044 in g446 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3077,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3095,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[2];
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5099,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t5,t4);}

/* f5099 in k3071 in k3044 in g446 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k3093 in k3071 in k3044 in g446 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:831: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[199],t1);}

/* k3075 in k3071 in k3044 in g446 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3077,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3081,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[55],"cpp-mode"))){
t3=C_i_string_equal_p(lf[196],C_retrieve2(lf[25],"c++-compiler"));
t4=t2;
f_3081(t4,(C_truep(t3)?lf[197]:lf[198]));}
else{
t3=t2;
f_3081(t3,lf[198]);}}

/* k3079 in k3075 in k3071 in k3044 in g446 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3081(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3081,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3085,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:836: compiler-options */
f_3287(t2);}

/* k3083 in k3079 in k3075 in k3071 in k3044 in g446 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3085,2,t0,t1);}
t2=C_a_i_list6(&a,6,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],lf[195],((C_word*)t0)[3],t1);
/* csc.scm:827: string-intersperse */
((C_proc3)C_fast_retrieve_symbol_proc(lf[95]))(3,*((C_word*)lf[95]+1),((C_word*)t0)[2],t2);}

/* k3059 in k3044 in g446 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:826: command */
f_3991(((C_word*)t0)[2],t1);}

/* k3047 in k3044 in g446 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3049,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],C_retrieve2(lf[54],"generated-object-files"));
t3=C_mutate(&lf[54] /* (set! generated-object-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1378,2,t0,t1);}
if(C_truep(C_retrieve2(lf[87],"compile-only"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1384,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_member(C_retrieve2(lf[83],"target-filename"),C_retrieve2(lf[48],"scheme-files")))){
t3=*((C_word*)lf[129]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1393,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t4,lf[194],t3);}
else{
t3=t2;
f_1384(2,t3,C_SCHEME_UNDEFINED);}}}

/* k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1393,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1396,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t2,C_retrieve2(lf[83],"target-filename"),((C_word*)t0)[2]);}

/* k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1396,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t2,lf[193],((C_word*)t0)[2]);}

/* k1397 in k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1399,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t2,C_retrieve2(lf[83],"target-filename"),((C_word*)t0)[2]);}

/* k1400 in k1397 in k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1402,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1405,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t2,lf[192],((C_word*)t0)[2]);}

/* k1403 in k1400 in k1397 in k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1405,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1408,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[108]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k1406 in k1403 in k1400 in k1397 in k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1408,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1415,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* open-output-string */
((C_proc2)C_fast_retrieve_symbol_proc(lf[111]))(2,*((C_word*)lf[111]+1),t2);}

/* k1413 in k1406 in k1403 in k1400 in k1397 in k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1415,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1418,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[40],"windows-shell"))){
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t2,lf[190],t1);}
else{
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t2,lf[191],t1);}}

/* k1416 in k1413 in k1406 in k1403 in k1400 in k1397 in k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[108]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[2]);}

/* k1419 in k1416 in k1413 in k1406 in k1403 in k1400 in k1397 in k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1421,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1445,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_retrieve2(lf[83],"target-filename");
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5094,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t5,t4);}

/* f5094 in k1419 in k1416 in k1413 in k1406 in k1403 in k1400 in k1397 in k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k1443 in k1419 in k1416 in k1413 in k1406 in k1403 in k1400 in k1397 in k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1422 in k1419 in k1416 in k1413 in k1406 in k1403 in k1400 in k1397 in k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1424,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[108]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[2]);}

/* k1425 in k1422 in k1419 in k1416 in k1413 in k1406 in k1403 in k1400 in k1397 in k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1427,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1437,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1441,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:555: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t4,C_retrieve2(lf[83],"target-filename"),lf[189]);}

/* k1439 in k1425 in k1422 in k1419 in k1416 in k1413 in k1406 in k1403 in k1400 in k1397 in k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1441,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5089,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t2,t1);}

/* f5089 in k1439 in k1425 in k1422 in k1419 in k1416 in k1413 in k1406 in k1403 in k1400 in k1397 in k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k1435 in k1425 in k1422 in k1419 in k1416 in k1413 in k1406 in k1403 in k1400 in k1397 in k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1428 in k1425 in k1422 in k1419 in k1416 in k1413 in k1406 in k1403 in k1400 in k1397 in k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1430,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1433,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* get-output-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[104]))(3,*((C_word*)lf[104]+1),t2,((C_word*)t0)[2]);}

/* k1431 in k1428 in k1425 in k1422 in k1419 in k1416 in k1413 in k1406 in k1403 in k1400 in k1397 in k1394 in k1391 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:550: command */
f_3991(((C_word*)t0)[2],t1);}

/* k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1384(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1384,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_retrieve2(lf[53],"object-files");
t8=C_i_check_list_2(t7,lf[94]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3352,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3621,a[2]=t4,a[3]=t11,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_3621(t13,t9,t7);}

/* map-loop562 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3621(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3621,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3650,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5082,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t5,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f5082 in map-loop562 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k3648 in map-loop562 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3650(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3650,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3621(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3621(t6,((C_word*)t0)[3],t5);}}

/* k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3352,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3355,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_retrieve2(lf[83],"target-filename");
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5077,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t4,t3);}

/* f5077 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3355,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3358,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[64],"deploy"))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3521,a[2]=t6,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:875: pathname-strip-extension */
((C_proc3)C_fast_retrieve_symbol_proc(lf[188]))(3,*((C_word*)lf[188]+1),t7,C_retrieve2(lf[83],"target-filename"));}
else{
t7=t6;
f_3358(2,t7,C_SCHEME_UNDEFINED);}}

/* k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3521,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3524,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(C_retrieve2(lf[3],"osx"))?C_retrieve2(lf[63],"gui"):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3571,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:877: make-pathname */
((C_proc5)C_fast_retrieve_symbol_proc(lf[100]))(5,*((C_word*)lf[100]+1),t5,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1],lf[187]);}
else{
t5=t3;
f_3524(2,t5,C_SCHEME_UNDEFINED);}}

/* k3569 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3571,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3574,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3602,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
((C_proc2)C_fast_retrieve_symbol_proc(lf[111]))(2,*((C_word*)lf[111]+1),t4);}

/* k3600 in k3569 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3602,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3605,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t2,lf[186],t1);}

/* k3603 in k3600 in k3569 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3608,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3615,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3619,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:878: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),t4,((C_word*)((C_word*)t0)[2])[1],lf[185]);}

/* k3617 in k3603 in k3600 in k3569 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5072,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t2,t1);}

/* f5072 in k3617 in k3603 in k3600 in k3569 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k3613 in k3603 in k3600 in k3569 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3606 in k3603 in k3600 in k3569 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3608,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3611,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* get-output-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[104]))(3,*((C_word*)lf[104]+1),t2,((C_word*)t0)[2]);}

/* k3609 in k3606 in k3603 in k3600 in k3569 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:878: command */
f_3991(((C_word*)t0)[2],t1);}

/* k3572 in k3569 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3574,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
((C_proc2)C_fast_retrieve_symbol_proc(lf[111]))(2,*((C_word*)lf[111]+1),t2);}

/* k3579 in k3572 in k3569 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3581,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3584,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t2,lf[184],t1);}

/* k3582 in k3579 in k3572 in k3569 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3584,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3587,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3594,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3598,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:879: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),t4,((C_word*)((C_word*)t0)[2])[1],lf[183]);}

/* k3596 in k3582 in k3579 in k3572 in k3569 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3598,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5067,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t2,t1);}

/* f5067 in k3596 in k3582 in k3579 in k3572 in k3569 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k3592 in k3582 in k3579 in k3572 in k3569 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3585 in k3582 in k3579 in k3572 in k3569 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3587,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3590,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* get-output-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[104]))(3,*((C_word*)lf[104]+1),t2,((C_word*)t0)[2]);}

/* k3588 in k3585 in k3582 in k3579 in k3572 in k3569 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:879: command */
f_3991(((C_word*)t0)[2],t1);}

/* k3522 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3551,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(C_retrieve2(lf[3],"osx"))?C_retrieve2(lf[63],"gui"):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3561,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:884: pathname-file */
((C_proc3)C_fast_retrieve_symbol_proc(lf[165]))(3,*((C_word*)lf[165]+1),t5,C_retrieve2(lf[83],"target-filename"));}
else{
/* csc.scm:885: pathname-file */
((C_proc3)C_fast_retrieve_symbol_proc(lf[165]))(3,*((C_word*)lf[165]+1),t3,C_retrieve2(lf[83],"target-filename"));}}

/* k3559 in k3522 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:884: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[182],t1);}

/* k3549 in k3522 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:881: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k3526 in k3522 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3528,2,t0,t1);}
t2=C_mutate(&lf[83] /* (set! target-filename ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_retrieve2(lf[83],"target-filename");
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5062,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t5,t4);}

/* f5062 in k3526 in k3522 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k3530 in k3526 in k3522 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3532,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3538,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:887: directory-exists? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[181]))(3,*((C_word*)lf[181]+1),t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k3536 in k3530 in k3526 in k3522 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3538,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_3358(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3541,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[84],"verbose"))){
/* csc.scm:889: print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[136]+1)))(4,*((C_word*)lf[136]+1),t2,lf[180],((C_word*)((C_word*)t0)[2])[1]);}
else{
/* csc.scm:890: create-directory */
((C_proc3)C_fast_retrieve_symbol_proc(lf[179]))(3,*((C_word*)lf[179]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}}}

/* k3539 in k3536 in k3530 in k3526 in k3522 in k3519 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:890: create-directory */
((C_proc3)C_fast_retrieve_symbol_proc(lf[179]))(3,*((C_word*)lf[179]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3358(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3358,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3361,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3485,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3489,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_truep(C_retrieve2(lf[55],"cpp-mode"))?C_retrieve2(lf[28],"c++-linker"):C_retrieve2(lf[27],"linker"));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3497,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3505,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3517,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=C_retrieve2(lf[83],"target-filename");
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5057,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t10,t9);}

/* f5057 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k3515 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:897: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[178],t1);}

/* k3503 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:898: linker-options */
f_3773(t2);}

/* k3507 in k3503 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3509,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:899: linker-libraries */
f_3803(t2);}

/* k3511 in k3507 in k3503 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3513,2,t0,t1);}
t2=C_a_i_list3(&a,3,((C_word*)t0)[5],((C_word*)t0)[4],t1);
/* csc.scm:895: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k3495 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:893: cons* */
((C_proc4)C_fast_retrieve_symbol_proc(lf[124]))(4,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3487 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:892: string-intersperse */
((C_proc3)C_fast_retrieve_symbol_proc(lf[95]))(3,*((C_word*)lf[95]+1),((C_word*)t0)[2],t1);}

/* k3483 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:891: command */
f_3991(((C_word*)t0)[2],t1);}

/* k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3364,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3438,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[3],"osx"))){
t4=C_i_not(C_retrieve2(lf[21],"cross-chicken"));
t5=t3;
f_3438(t5,(C_truep(t4)?t4:C_retrieve2(lf[20],"host-mode")));}
else{
t4=t3;
f_3438(t4,C_SCHEME_FALSE);}}

/* k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3438(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3438,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3457,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3461,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=lf[176];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3465,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[65],"deployed"))){
/* csc.scm:907: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),t6,lf[177],t5);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3475,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:909: lib-path */
f_3656(t7);}}
else{
t2=((C_word*)t0)[2];
f_3364(2,t2,C_SCHEME_UNDEFINED);}}

/* k3473 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:908: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3463 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3465,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5052,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t2,t1);}

/* f5052 in k3463 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k3459 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:902: string-append */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(6,*((C_word*)lf[113]+1),((C_word*)t0)[3],lf[174],t1,lf[175],((C_word*)((C_word*)t0)[2])[1]);}

/* k3455 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:901: command */
f_3991(((C_word*)t0)[2],t1);}

/* k3439 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3441,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[63],"gui"))?C_i_not(C_retrieve2(lf[64],"deploy")):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=((C_word*)((C_word*)t0)[3])[1];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4030,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
((C_proc2)C_fast_retrieve_symbol_proc(lf[111]))(2,*((C_word*)lf[111]+1),t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
f_3364(2,t4,t3);}}

/* k4028 in k3439 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4033,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t2,lf[173],t1);}

/* k4031 in k4028 in k3439 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4036,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4057,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5047,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t4,((C_word*)t0)[2]);}

/* f5047 in k4031 in k4028 in k3439 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k4055 in k4031 in k4028 in k3439 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4034 in k4031 in k4028 in k3439 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4036,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[108]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[2]);}

/* k4037 in k4034 in k4031 in k4028 in k3439 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4039,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4042,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4049,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4053,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1035: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),t4,C_retrieve2(lf[22],"home"),lf[172]);}

/* k4051 in k4037 in k4034 in k4031 in k4028 in k3439 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4053,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5042,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t2,t1);}

/* f5042 in k4051 in k4037 in k4034 in k4031 in k4028 in k3439 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k4047 in k4037 in k4034 in k4031 in k4028 in k3439 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4040 in k4037 in k4034 in k4031 in k4028 in k3439 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4042,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4045,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* get-output-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[104]))(3,*((C_word*)lf[104]+1),t2,((C_word*)t0)[2]);}

/* k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k3439 in k3436 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1032: command */
f_3991(((C_word*)t0)[2],t1);}

/* k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3364,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3367,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3402,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[64],"deploy"))){
t4=C_retrieve2(lf[90],"static");
if(C_truep(t4)){
t5=t3;
f_3402(t5,C_i_not(t4));}
else{
t5=C_retrieve2(lf[91],"static-libs");
t6=t3;
f_3402(t6,C_i_not(t5));}}
else{
t4=t3;
f_3402(t4,C_SCHEME_FALSE);}}

/* k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3402(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3402,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3405,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3422,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[3],"osx"))){
t4=C_retrieve2(lf[63],"gui");
if(C_truep(t4)){
/* csc.scm:918: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),t3,((C_word*)((C_word*)t0)[3])[1],lf[171]);}
else{
t5=t3;
f_3422(2,t5,((C_word*)((C_word*)t0)[3])[1]);}}
else{
t4=t3;
f_3422(2,t4,((C_word*)((C_word*)t0)[3])[1]);}}
else{
t2=((C_word*)t0)[2];
f_3367(t2,C_SCHEME_UNDEFINED);}}

/* k3420 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3422,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3710,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3717,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3682,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}

/* k3680 in k3420 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_string_equal_p(t1,lf[170]))){
/* csc.scm:941: lib-path */
f_3656(((C_word*)t0)[2]);}
else{
if(C_truep(C_retrieve2(lf[21],"cross-chicken"))){
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* csc.scm:941: lib-path */
f_3656(((C_word*)t0)[2]);}
else{
t2=t1;
t3=((C_word*)t0)[2];
f_3717(2,t3,t2);}}
else{
/* csc.scm:941: lib-path */
f_3656(((C_word*)t0)[2]);}}}

/* k3715 in k3420 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3717,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3721,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[3],"osx"))){
/* csc.scm:944: make-pathname */
((C_proc5)C_fast_retrieve_symbol_proc(lf[100]))(5,*((C_word*)lf[100]+1),((C_word*)t0)[2],t1,lf[166],lf[167]);}
else{
if(C_truep(C_retrieve2(lf[4],"win"))){
/* csc.scm:944: make-pathname */
((C_proc5)C_fast_retrieve_symbol_proc(lf[100]))(5,*((C_word*)lf[100]+1),((C_word*)t0)[2],t1,lf[166],lf[168]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3731,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:951: number->string */
C_number_to_string(3,0,t3,C_fix((C_word)C_BINARY_VERSION));}}}

/* k3729 in k3715 in k3420 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:949: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[169],t1);}

/* k3719 in k3715 in k3420 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:944: make-pathname */
((C_proc5)C_fast_retrieve_symbol_proc(lf[100]))(5,*((C_word*)lf[100]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[166],t1);}

/* k3708 in k3420 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:952: copy-files */
f_3733(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3403 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3405,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[3],"osx"))?C_retrieve2(lf[63],"gui"):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:922: pathname-file */
((C_proc3)C_fast_retrieve_symbol_proc(lf[165]))(3,*((C_word*)lf[165]+1),t3,C_retrieve2(lf[83],"target-filename"));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
f_3367(t4,t3);}}

/* k3416 in k3403 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3418,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[3])[1];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4063,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1038: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),t3,t2,lf[164]);}

/* k4061 in k3416 in k3403 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4063,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4066,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1039: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),t2,((C_word*)t0)[2],lf[163]);}

/* k4064 in k4061 in k3416 in k3403 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4066,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4069,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1040: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),t2,((C_word*)t0)[2],lf[162]);}

/* k4067 in k4064 in k4061 in k3416 in k3403 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4072,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:1041: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),t2,t1,lf[161]);}

/* k4070 in k4067 in k4064 in k4061 in k3416 in k3403 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4072,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4075,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4118,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1042: file-exists? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[158]))(3,*((C_word*)lf[158]+1),t3,t1);}

/* k4116 in k4070 in k4067 in k4064 in k4061 in k3416 in k3403 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4118,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_4075(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1044: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),t2,C_retrieve2(lf[22],"home"),lf[160]);}}

/* k4123 in k4116 in k4070 in k4067 in k4064 in k4061 in k3416 in k3403 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1043: copy-files */
f_3733(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4073 in k4070 in k4067 in k4064 in k4061 in k3416 in k3403 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4075,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4078,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1046: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),t2,((C_word*)t0)[2],lf[159]);}

/* k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k3416 in k3403 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4078,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4081,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4084,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:1047: file-exists? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[158]))(3,*((C_word*)lf[158]+1),t3,t1);}

/* k4082 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k3416 in k3403 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4084,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
f_3367(t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4087,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[84],"verbose"))){
/* csc.scm:1048: print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[136]+1)))(4,*((C_word*)lf[136]+1),t2,lf[157],((C_word*)t0)[2]);}
else{
t3=t2;
f_4087(2,t3,C_SCHEME_UNDEFINED);}}}

/* k4085 in k4082 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k3416 in k3403 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4087,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4092,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1049: with-output-to-file */
((C_proc4)C_fast_retrieve_symbol_proc(lf[156]))(4,*((C_word*)lf[156]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a4091 in k4085 in k4082 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k3416 in k3403 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4092,2,t0,t1);}
t2=*((C_word*)lf[136]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4100,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,lf[153],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],t4);
t6=C_a_i_cons(&a,2,lf[154],t5);
/* csc.scm:1049: ##sys#print-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[155]))(3,*((C_word*)lf[155]+1),t3,t6);}

/* k4098 in a4091 in k4085 in k4082 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k3416 in k3403 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g791792 */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k3416 in k3403 in k3400 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_3367(t2,((C_word*)t0)[2]);}

/* k3365 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3367(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3367,NULL,2,t0,t1);}
if(C_truep(C_retrieve2(lf[85],"keep-files"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_retrieve2(lf[54],"generated-object-files");
t3=C_i_check_list_2(t2,lf[152]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3378,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3378(t7,((C_word*)t0)[2],t2);}}

/* for-each-loop644 in k3365 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3378(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3378,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3388,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g645651 */
f_4007(t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3386 in for-each-loop644 in k3365 in k3362 in k3359 in k3356 in k3353 in k3350 in k1382 in k1376 in k1370 in k1367 in k1364 in k1361 in k1357 in loop in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3378(t3,((C_word*)t0)[2],t2);}

/* use-private-repository in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static C_word C_fcall f_1331(C_word *a){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_check;
t1=C_a_i_cons(&a,2,lf[150],C_retrieve2(lf[76],"compile-options"));
t2=C_mutate(&lf[76] /* (set! compile-options ...) */,t1);
if(C_truep(C_retrieve2(lf[3],"osx"))){
t3=C_a_i_cons(&a,2,lf[151],C_retrieve2(lf[82],"link-options"));
t4=C_mutate(&lf[82] /* (set! link-options ...) */,t3);
return(t4);}
else{
t3=C_SCHEME_UNDEFINED;
return(t3);}}

/* shared-build in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_1308(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1308,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1313,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:497: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t3,lf[148],lf[149],C_retrieve2(lf[73],"translate-options"));}

/* k1311 in shared-build in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1313,2,t0,t1);}
t2=C_mutate(&lf[73] /* (set! translate-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:498: append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(5,*((C_word*)lf[97]+1),t3,C_retrieve2(lf[39],"pic-options"),lf[147],C_retrieve2(lf[76],"compile-options"));}

/* k1315 in k1311 in shared-build in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1317,2,t0,t1);}
t2=C_mutate(&lf[76] /* (set! compile-options ...) */,t1);
t3=(C_truep(C_retrieve2(lf[3],"osx"))?(C_truep(((C_word*)t0)[3])?C_a_i_cons(&a,2,lf[144],C_retrieve2(lf[82],"link-options")):C_a_i_cons(&a,2,lf[145],C_retrieve2(lf[82],"link-options"))):C_a_i_cons(&a,2,lf[146],C_retrieve2(lf[82],"link-options")));
t4=C_mutate(&lf[82] /* (set! link-options ...) */,t3);
t5=lf[89] /* shared */ =C_SCHEME_TRUE;;
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* check in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_1269(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1269,NULL,4,t1,t2,t3,t4);}
t5=C_i_length(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1287,a[2]=t2,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
if(C_truep(C_i_greater_or_equalp(t5,C_fix(1)))){
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
/* csc.scm:494: quit */
f_978(t1,lf[141],C_a_i_list(&a,1,t2));}}
else{
t7=C_i_cdr(t4);
if(C_truep(C_i_nullp(t7))){
t8=t6;
f_1287(2,t8,C_i_car(t4));}
else{
/* ##sys#error */
t8=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,lf[143],t4);}}}

/* k1285 in check in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1287,2,t0,t1);}
if(C_truep(C_i_greater_or_equalp(((C_word*)t0)[4],t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* csc.scm:494: quit */
f_978(((C_word*)t0)[3],lf[141],C_a_i_list(&a,1,((C_word*)t0)[2]));}}

/* t-options in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_1262(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1262,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1267,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:490: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t3,C_retrieve2(lf[73],"translate-options"),t2);}

/* k1265 in t-options in k4170 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_1267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[73] /* (set! translate-options ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4160 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4162,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4165,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4168,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[140]))(2,*((C_word*)lf[140]+1),t3);}

/* k4166 in k4160 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k4163 in k4160 in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* $delete-file in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_4007(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4007,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4011,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[84],"verbose"))){
/* csc.scm:1027: print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[136]+1)))(4,*((C_word*)lf[136]+1),t3,lf[139],t2);}
else{
if(C_truep(C_retrieve2(lf[62],"dry-run"))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* csc.scm:1028: delete-file */
((C_proc3)C_fast_retrieve_symbol_proc(lf[138]))(3,*((C_word*)lf[138]+1),t1,t2);}}}

/* k4009 in $delete-file in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_4011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_retrieve2(lf[62],"dry-run"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* csc.scm:1028: delete-file */
((C_proc3)C_fast_retrieve_symbol_proc(lf[138]))(3,*((C_word*)lf[138]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* command in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3991(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3991,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3946,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[84],"verbose"))){
/* csc.scm:1010: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[136]+1)))(3,*((C_word*)lf[136]+1),t3,t2);}
else{
t4=t3;
f_3946(2,t4,C_SCHEME_UNDEFINED);}}

/* k3944 in command in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3949,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[40],"windows-shell"))){
/* csc.scm:1012: string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(5,*((C_word*)lf[113]+1),t2,lf[134],((C_word*)t0)[2],lf[135]);}
else{
t3=t2;
f_3949(2,t3,((C_word*)t0)[2]);}}

/* k3947 in k3944 in command in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3949,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3952,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[62],"dry-run"))){
t3=t2;
f_3952(2,t3,C_fix(0));}
else{
/* csc.scm:1014: system */
((C_proc3)C_fast_retrieve_symbol_proc(lf[133]))(3,*((C_word*)lf[133]+1),t2,t1);}}

/* k3950 in k3947 in k3944 in command in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3952,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3955,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_zerop(t1))){
t3=t2;
f_3955(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=*((C_word*)lf[129]+1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3968,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t4,lf[132],t3);}}

/* k3966 in k3950 in k3947 in k3944 in command in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3971,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* write */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[131]+1)))(4,*((C_word*)lf[131]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k3969 in k3966 in k3950 in k3947 in k3944 in command in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3971,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t2,lf[130],((C_word*)t0)[3]);}

/* k3972 in k3969 in k3966 in k3950 in k3947 in k3944 in command in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3974,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3977,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3975 in k3972 in k3969 in k3966 in k3950 in k3947 in k3944 in command in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=C_fast_retrieve(lf[108]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* k3953 in k3950 in k3947 in k3944 in command in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_truep(C_i_zerop(((C_word*)t0)[3]))){
t2=lf[128] /* last-exit-code */ =C_fix(0);;
t3=C_retrieve2(lf[128],"last-exit-code");
if(C_truep(C_i_zerop(t3))){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* csc.scm:1023: exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[12]))(3,*((C_word*)lf[12]+1),((C_word*)t0)[2],C_retrieve2(lf[128],"last-exit-code"));}}
else{
t2=lf[128] /* last-exit-code */ =C_fix(1);;
t3=C_retrieve2(lf[128],"last-exit-code");
if(C_truep(C_i_zerop(t3))){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* csc.scm:1023: exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[12]))(3,*((C_word*)lf[12]+1),((C_word*)t0)[2],C_retrieve2(lf[128],"last-exit-code"));}}}

/* quote-option in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3905(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3905,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3912,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3935,tmp=(C_word)a,a+=2,tmp);
/* csc.scm:1000: string-any */
((C_proc4)C_fast_retrieve_symbol_proc(lf[126]))(4,*((C_word*)lf[126]+1),t3,t4,t2);}

/* a3934 in quote-option in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3935(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3935,3,t0,t1,t2);}
t3=*((C_word*)lf[127]+1);
/* g731732 */
t4=t3;
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,C_make_character(34),t2);}

/* k3910 in quote-option in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3912,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3918,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3923,tmp=(C_word)a,a+=2,tmp);
/* csc.scm:1001: string-any */
((C_proc4)C_fast_retrieve_symbol_proc(lf[126]))(4,*((C_word*)lf[126]+1),t2,t3,((C_word*)t0)[3]);}}

/* a3922 in k3910 in quote-option in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3923(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3923,3,t0,t1,t2);}
t3=C_u_i_char_whitespacep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:C_i_memq(t2,lf[117])));}

/* k3916 in k3910 in quote-option in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3918(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3918,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3838,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3852,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3856,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* string->list */
t9=C_fast_retrieve(lf[125]);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* k3854 in k3916 in k3910 in quote-option in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3856,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3858,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3858(t5,((C_word*)t0)[2],t1);}

/* fold in k3854 in k3916 in k3910 in quote-option in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3858(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3858,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
if(C_truep(C_i_memq(t3,lf[117]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3881,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cdr(t2);
/* csc.scm:991: fold */
t9=t4;
t10=t5;
t1=t9;
t2=t10;
goto loop;}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3888,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_u_i_char_whitespacep(t3))){
t5=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t6=t4;
f_3888(t6,t5);}
else{
t5=t4;
f_3888(t5,C_SCHEME_UNDEFINED);}}}}

/* k3886 in fold in k3854 in k3916 in k3910 in quote-option in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3888(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3888,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3895,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* csc.scm:994: fold */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3858(t4,t2,t3);}

/* k3893 in k3886 in fold in k3854 in k3916 in k3910 in quote-option in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3895,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k3879 in fold in k3854 in k3916 in k3910 in quote-option in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:991: cons* */
((C_proc5)C_fast_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],C_make_character(92),((C_word*)t0)[2],t1);}

/* k3850 in k3916 in k3910 in quote-option in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* list->string */
t2=C_fast_retrieve(lf[123]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3836 in k3916 in k3910 in quote-option in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3838,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3848,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:996: string-translate* */
((C_proc4)C_fast_retrieve_symbol_proc(lf[121]))(4,*((C_word*)lf[121]+1),t2,t1,lf[122]);}
else{
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3846 in k3836 in k3916 in k3910 in quote-option in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:996: string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(5,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[119],t1,lf[120]);}

/* linker-libraries in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3803(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3803,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3811,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3815,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[90],"static");
if(C_truep(t4)){
t5=t3;
f_3815(t5,(C_truep(t4)?C_retrieve2(lf[71],"library-files"):C_retrieve2(lf[72],"shared-library-files")));}
else{
t5=C_retrieve2(lf[91],"static-libs");
t6=t3;
f_3815(t6,(C_truep(t5)?C_retrieve2(lf[71],"library-files"):C_retrieve2(lf[72],"shared-library-files")));}}

/* k3813 in linker-libraries in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3815(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3815,NULL,2,t0,t1);}
t2=C_retrieve2(lf[90],"static");
if(C_truep(t2)){
t3=(C_truep(t2)?C_a_i_list1(&a,1,C_retrieve2(lf[67],"extra-libraries")):C_a_i_list1(&a,1,C_retrieve2(lf[68],"extra-shared-libraries")));
/* csc.scm:971: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),((C_word*)t0)[2],t1,t3);}
else{
t3=C_retrieve2(lf[91],"static-libs");
t4=(C_truep(t3)?C_a_i_list1(&a,1,C_retrieve2(lf[67],"extra-libraries")):C_a_i_list1(&a,1,C_retrieve2(lf[68],"extra-shared-libraries")));
/* csc.scm:971: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),((C_word*)t0)[2],t1,t4);}}

/* k3809 in linker-libraries in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:970: string-intersperse */
((C_proc3)C_fast_retrieve_symbol_proc(lf[95]))(3,*((C_word*)lf[95]+1),((C_word*)t0)[2],t1);}

/* linker-options in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3773(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3773,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3781,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3801,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:966: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(4,*((C_word*)lf[97]+1),t3,C_retrieve2(lf[80],"linking-optimization-options"),C_retrieve2(lf[82],"link-options"));}

/* k3799 in linker-options in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:965: string-intersperse */
((C_proc3)C_fast_retrieve_symbol_proc(lf[95]))(3,*((C_word*)lf[95]+1),((C_word*)t0)[2],t1);}

/* k3779 in linker-options in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(C_retrieve2(lf[90],"static"))?(C_truep(C_retrieve2(lf[1],"mingw"))?C_SCHEME_FALSE:C_i_not(C_retrieve2(lf[3],"osx"))):C_SCHEME_FALSE);
if(C_truep(t2)){
/* csc.scm:964: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[2],t1,lf[114]);}
else{
/* csc.scm:964: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[2],t1,lf[115]);}}

/* copy-files in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3733(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3733,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3741,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* open-output-string */
((C_proc2)C_fast_retrieve_symbol_proc(lf[111]))(2,*((C_word*)lf[111]+1),t4);}

/* k3739 in copy-files in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3741,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[40],"windows-shell"))){
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t2,lf[109],t1);}
else{
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),t2,lf[110],t1);}}

/* k3742 in k3739 in copy-files in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3744,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3747,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[108]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[4]);}

/* k3745 in k3742 in k3739 in copy-files in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3750,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3767,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5021,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t5,t4);}

/* f5021 in k3745 in k3742 in k3739 in copy-files in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k3765 in k3745 in k3742 in k3739 in copy-files in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3748 in k3745 in k3742 in k3739 in copy-files in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3750,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3753,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[108]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[3]);}

/* k3751 in k3748 in k3745 in k3742 in k3739 in copy-files in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3753,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3756,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3763,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5016,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
((C_proc3)C_fast_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),t5,t4);}

/* f5016 in k3751 in k3748 in k3745 in k3742 in k3739 in copy-files in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f5016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
((C_proc3)C_fast_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* k3761 in k3751 in k3748 in k3745 in k3742 in k3739 in copy-files in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[105]+1)))(4,*((C_word*)lf[105]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3754 in k3751 in k3748 in k3745 in k3742 in k3739 in copy-files in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3756,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3759,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* get-output-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[104]))(3,*((C_word*)lf[104]+1),t2,((C_word*)t0)[2]);}

/* k3757 in k3754 in k3751 in k3748 in k3745 in k3742 in k3739 in copy-files in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:955: command */
f_3991(((C_word*)t0)[2],t1);}

/* lib-path in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3656(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3656,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3664,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[4],"win"))){
/* ##sys#peek-c-string */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}
else{
if(C_truep(C_retrieve2(lf[20],"host-mode"))){
/* ##sys#peek-c-string */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME),C_fix(0));}}}

/* k3662 in lib-path in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3664,2,t0,t1);}
t2=((C_word*)t0)[2];
if(C_truep(C_retrieve2(lf[17],"chicken-prefix"))){
t3=C_a_i_list2(&a,2,C_retrieve2(lf[17],"chicken-prefix"),lf[99]);
/* csc.scm:88: make-pathname */
((C_proc4)C_fast_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),t2,t3,lf[101]);}
else{
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* compiler-options in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3287(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3287,NULL,1,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3295,a[2]=t3,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_retrieve2(lf[90],"static");
t8=(C_truep(t7)?t7:C_retrieve2(lf[91],"static-libs"));
if(C_truep(t8)){
/* csc.scm:862: append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(5,*((C_word*)lf[97]+1),t6,C_SCHEME_END_OF_LIST,C_retrieve2(lf[79],"compilation-optimization-options"),C_retrieve2(lf[76],"compile-options"));}
else{
/* csc.scm:862: append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(5,*((C_word*)lf[97]+1),t6,C_SCHEME_END_OF_LIST,C_retrieve2(lf[79],"compilation-optimization-options"),C_retrieve2(lf[76],"compile-options"));}}

/* k3293 in compiler-options in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3295(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3295,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[94]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3301,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3303,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3303(t7,t3,t1);}

/* map-loop531 in k3293 in compiler-options in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_3303(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3303,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3332,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g537546 */
f_3905(t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3330 in map-loop531 in k3293 in compiler-options in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3332(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3332,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3303(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3303(t6,((C_word*)t0)[3],t5);}}

/* k3299 in k3293 in compiler-options in k1156 in k1148 in k1140 in k4219 in k4233 in k1125 in k1121 in k1090 in k1085 in k1080 in k1076 in k1058 in k1054 in k1050 in k1046 in k1042 in k1038 in k1034 in k999 in k995 in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_3301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:860: string-intersperse */
((C_proc3)C_fast_retrieve_symbol_proc(lf[95]))(3,*((C_word*)lf[95]+1),((C_word*)t0)[2],t1);}

/* quit in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_fcall f_978(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_978,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_982,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_989,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:78: current-error-port */
((C_proc2)C_fast_retrieve_symbol_proc(lf[16]))(2,*((C_word*)lf[16]+1),t5);}

/* k987 in quit in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_989,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_CSC_PROGRAM),C_fix(0));}

/* k991 in k987 in quit in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:78: fprintf */
((C_proc7)C_fast_retrieve_symbol_proc(lf[13]))(7,*((C_word*)lf[13]+1),((C_word*)t0)[5],((C_word*)t0)[4],lf[14],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k980 in quit in k4381 in k4385 in k4389 in k4393 in k4397 in k953 in k950 in k947 in k944 in k941 in k938 in k935 in k932 in k929 */
static void C_ccall f_982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:79: exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[12]))(3,*((C_word*)lf[12]+1),((C_word*)t0)[2],C_fix(64));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[420] = {
{"toplevel:csc_2escm",(void*)C_toplevel},
{"f_931:csc_2escm",(void*)f_931},
{"f_934:csc_2escm",(void*)f_934},
{"f_937:csc_2escm",(void*)f_937},
{"f_940:csc_2escm",(void*)f_940},
{"f_943:csc_2escm",(void*)f_943},
{"f_946:csc_2escm",(void*)f_946},
{"f_949:csc_2escm",(void*)f_949},
{"f_952:csc_2escm",(void*)f_952},
{"f_955:csc_2escm",(void*)f_955},
{"f_4399:csc_2escm",(void*)f_4399},
{"f_4395:csc_2escm",(void*)f_4395},
{"f_4391:csc_2escm",(void*)f_4391},
{"f_4387:csc_2escm",(void*)f_4387},
{"f_4383:csc_2escm",(void*)f_4383},
{"f_997:csc_2escm",(void*)f_997},
{"f_1001:csc_2escm",(void*)f_1001},
{"f_4373:csc_2escm",(void*)f_4373},
{"f5521:csc_2escm",(void*)f5521},
{"f_4369:csc_2escm",(void*)f_4369},
{"f5192:csc_2escm",(void*)f5192},
{"f_1036:csc_2escm",(void*)f_1036},
{"f_4361:csc_2escm",(void*)f_4361},
{"f_4365:csc_2escm",(void*)f_4365},
{"f_4357:csc_2escm",(void*)f_4357},
{"f5517:csc_2escm",(void*)f5517},
{"f_4353:csc_2escm",(void*)f_4353},
{"f5187:csc_2escm",(void*)f5187},
{"f_1040:csc_2escm",(void*)f_1040},
{"f_4343:csc_2escm",(void*)f_4343},
{"f5182:csc_2escm",(void*)f5182},
{"f_1044:csc_2escm",(void*)f_1044},
{"f_4333:csc_2escm",(void*)f_4333},
{"f5177:csc_2escm",(void*)f5177},
{"f_1048:csc_2escm",(void*)f_1048},
{"f_4323:csc_2escm",(void*)f_4323},
{"f5172:csc_2escm",(void*)f5172},
{"f_1052:csc_2escm",(void*)f_1052},
{"f_4313:csc_2escm",(void*)f_4313},
{"f5167:csc_2escm",(void*)f5167},
{"f_1056:csc_2escm",(void*)f_1056},
{"f_4303:csc_2escm",(void*)f_4303},
{"f5162:csc_2escm",(void*)f5162},
{"f_1060:csc_2escm",(void*)f_1060},
{"f_1078:csc_2escm",(void*)f_1078},
{"f_4290:csc_2escm",(void*)f_4290},
{"f_1082:csc_2escm",(void*)f_1082},
{"f_4280:csc_2escm",(void*)f_4280},
{"f_1087:csc_2escm",(void*)f_1087},
{"f_4276:csc_2escm",(void*)f_4276},
{"f_1092:csc_2escm",(void*)f_1092},
{"f_1123:csc_2escm",(void*)f_1123},
{"f_1127:csc_2escm",(void*)f_1127},
{"f_4247:csc_2escm",(void*)f_4247},
{"f_4251:csc_2escm",(void*)f_4251},
{"f_4243:csc_2escm",(void*)f_4243},
{"f5513:csc_2escm",(void*)f5513},
{"f_4239:csc_2escm",(void*)f_4239},
{"f5157:csc_2escm",(void*)f5157},
{"f_4235:csc_2escm",(void*)f_4235},
{"f_4225:csc_2escm",(void*)f_4225},
{"f_4221:csc_2escm",(void*)f_4221},
{"f_4211:csc_2escm",(void*)f_4211},
{"f_1142:csc_2escm",(void*)f_1142},
{"f_4200:csc_2escm",(void*)f_4200},
{"f_1150:csc_2escm",(void*)f_1150},
{"f_4187:csc_2escm",(void*)f_4187},
{"f_1158:csc_2escm",(void*)f_1158},
{"f_4180:csc_2escm",(void*)f_4180},
{"f_4176:csc_2escm",(void*)f_4176},
{"f_4172:csc_2escm",(void*)f_4172},
{"f_1348:csc_2escm",(void*)f_1348},
{"f_1585:csc_2escm",(void*)f_1585},
{"f_2119:csc_2escm",(void*)f_2119},
{"f_2355:csc_2escm",(void*)f_2355},
{"f_2358:csc_2escm",(void*)f_2358},
{"f_2796:csc_2escm",(void*)f_2796},
{"f_2414:csc_2escm",(void*)f_2414},
{"f_2423:csc_2escm",(void*)f_2423},
{"f_2637:csc_2escm",(void*)f_2637},
{"f_2759:csc_2escm",(void*)f_2759},
{"f_2765:csc_2escm",(void*)f_2765},
{"f_2648:csc_2escm",(void*)f_2648},
{"f_2659:csc_2escm",(void*)f_2659},
{"f_2749:csc_2escm",(void*)f_2749},
{"f_2741:csc_2escm",(void*)f_2741},
{"f_2724:csc_2escm",(void*)f_2724},
{"f_2700:csc_2escm",(void*)f_2700},
{"f_2705:csc_2escm",(void*)f_2705},
{"f_2687:csc_2escm",(void*)f_2687},
{"f_2673:csc_2escm",(void*)f_2673},
{"f_2642:csc_2escm",(void*)f_2642},
{"f_2607:csc_2escm",(void*)f_2607},
{"f_2501:csc_2escm",(void*)f_2501},
{"f_2590:csc_2escm",(void*)f_2590},
{"f_2586:csc_2escm",(void*)f_2586},
{"f_2546:csc_2escm",(void*)f_2546},
{"f_2575:csc_2escm",(void*)f_2575},
{"f_2544:csc_2escm",(void*)f_2544},
{"f_2528:csc_2escm",(void*)f_2528},
{"f_2505:csc_2escm",(void*)f_2505},
{"f_2491:csc_2escm",(void*)f_2491},
{"f_2478:csc_2escm",(void*)f_2478},
{"f_2461:csc_2escm",(void*)f_2461},
{"f_2447:csc_2escm",(void*)f_2447},
{"f_2433:csc_2escm",(void*)f_2433},
{"f_2395:csc_2escm",(void*)f_2395},
{"f_2404:csc_2escm",(void*)f_2404},
{"f_2365:csc_2escm",(void*)f_2365},
{"f_2348:csc_2escm",(void*)f_2348},
{"f_2352:csc_2escm",(void*)f_2352},
{"f_2296:csc_2escm",(void*)f_2296},
{"f_2332:csc_2escm",(void*)f_2332},
{"f_2322:csc_2escm",(void*)f_2322},
{"f_2310:csc_2escm",(void*)f_2310},
{"f_2271:csc_2escm",(void*)f_2271},
{"f_2283:csc_2escm",(void*)f_2283},
{"f_2275:csc_2escm",(void*)f_2275},
{"f_2258:csc_2escm",(void*)f_2258},
{"f_2232:csc_2escm",(void*)f_2232},
{"f_2244:csc_2escm",(void*)f_2244},
{"f_2236:csc_2escm",(void*)f_2236},
{"f_2211:csc_2escm",(void*)f_2211},
{"f_2215:csc_2escm",(void*)f_2215},
{"f_2194:csc_2escm",(void*)f_2194},
{"f_2177:csc_2escm",(void*)f_2177},
{"f_2160:csc_2escm",(void*)f_2160},
{"f_2143:csc_2escm",(void*)f_2143},
{"f_2102:csc_2escm",(void*)f_2102},
{"f_2092:csc_2escm",(void*)f_2092},
{"f_2082:csc_2escm",(void*)f_2082},
{"f_2058:csc_2escm",(void*)f_2058},
{"f_2072:csc_2escm",(void*)f_2072},
{"f_2068:csc_2escm",(void*)f_2068},
{"f_2048:csc_2escm",(void*)f_2048},
{"f_2038:csc_2escm",(void*)f_2038},
{"f_2028:csc_2escm",(void*)f_2028},
{"f_2018:csc_2escm",(void*)f_2018},
{"f_2008:csc_2escm",(void*)f_2008},
{"f_1987:csc_2escm",(void*)f_1987},
{"f_1963:csc_2escm",(void*)f_1963},
{"f_1974:csc_2escm",(void*)f_1974},
{"f_1939:csc_2escm",(void*)f_1939},
{"f_1935:csc_2escm",(void*)f_1935},
{"f_1931:csc_2escm",(void*)f_1931},
{"f_1870:csc_2escm",(void*)f_1870},
{"f_1874:csc_2escm",(void*)f_1874},
{"f_1877:csc_2escm",(void*)f_1877},
{"f_1777:csc_2escm",(void*)f_1777},
{"f_1762:csc_2escm",(void*)f_1762},
{"f_1768:csc_2escm",(void*)f_1768},
{"f_1739:csc_2escm",(void*)f_1739},
{"f_1727:csc_2escm",(void*)f_1727},
{"f_1715:csc_2escm",(void*)f_1715},
{"f_1703:csc_2escm",(void*)f_1703},
{"f_1677:csc_2escm",(void*)f_1677},
{"f_1666:csc_2escm",(void*)f_1666},
{"f_1635:csc_2escm",(void*)f_1635},
{"f_1628:csc_2escm",(void*)f_1628},
{"f_1619:csc_2escm",(void*)f_1619},
{"f_1612:csc_2escm",(void*)f_1612},
{"f_1222:csc_2escm",(void*)f_1222},
{"f_1229:csc_2escm",(void*)f_1229},
{"f_1600:csc_2escm",(void*)f_1600},
{"f_1588:csc_2escm",(void*)f_1588},
{"f_1359:csc_2escm",(void*)f_1359},
{"f_1206:csc_2escm",(void*)f_1206},
{"f_1172:csc_2escm",(void*)f_1172},
{"f_1190:csc_2escm",(void*)f_1190},
{"f_1180:csc_2escm",(void*)f_1180},
{"f_1176:csc_2escm",(void*)f_1176},
{"f_1363:csc_2escm",(void*)f_1363},
{"f_1572:csc_2escm",(void*)f_1572},
{"f_1539:csc_2escm",(void*)f_1539},
{"f_1565:csc_2escm",(void*)f_1565},
{"f_1542:csc_2escm",(void*)f_1542},
{"f5148:csc_2escm",(void*)f5148},
{"f_1558:csc_2escm",(void*)f_1558},
{"f_1545:csc_2escm",(void*)f_1545},
{"f_1548:csc_2escm",(void*)f_1548},
{"f_1366:csc_2escm",(void*)f_1366},
{"f_1502:csc_2escm",(void*)f_1502},
{"f_1512:csc_2escm",(void*)f_1512},
{"f_1505:csc_2escm",(void*)f_1505},
{"f_3017:csc_2escm",(void*)f_3017},
{"f_2854:csc_2escm",(void*)f_2854},
{"f5142:csc_2escm",(void*)f5142},
{"f_2885:csc_2escm",(void*)f_2885},
{"f5137:csc_2escm",(void*)f5137},
{"f_2959:csc_2escm",(void*)f_2959},
{"f_2893:csc_2escm",(void*)f_2893},
{"f_2901:csc_2escm",(void*)f_2901},
{"f_2909:csc_2escm",(void*)f_2909},
{"f_2938:csc_2escm",(void*)f_2938},
{"f_2907:csc_2escm",(void*)f_2907},
{"f_2889:csc_2escm",(void*)f_2889},
{"f_2881:csc_2escm",(void*)f_2881},
{"f_2877:csc_2escm",(void*)f_2877},
{"f_2857:csc_2escm",(void*)f_2857},
{"f_2861:csc_2escm",(void*)f_2861},
{"f_2865:csc_2escm",(void*)f_2865},
{"f_2983:csc_2escm",(void*)f_2983},
{"f_2994:csc_2escm",(void*)f_2994},
{"f_3004:csc_2escm",(void*)f_3004},
{"f_1464:csc_2escm",(void*)f_1464},
{"f_1467:csc_2escm",(void*)f_1467},
{"f_1474:csc_2escm",(void*)f_1474},
{"f_1369:csc_2escm",(void*)f_1369},
{"f_1372:csc_2escm",(void*)f_1372},
{"f_3264:csc_2escm",(void*)f_3264},
{"f_3274:csc_2escm",(void*)f_3274},
{"f_3101:csc_2escm",(void*)f_3101},
{"f_3262:csc_2escm",(void*)f_3262},
{"f_3237:csc_2escm",(void*)f_3237},
{"f_3240:csc_2escm",(void*)f_3240},
{"f_3255:csc_2escm",(void*)f_3255},
{"f_4131:csc_2escm",(void*)f_4131},
{"f_4136:csc_2escm",(void*)f_4136},
{"f_4144:csc_2escm",(void*)f_4144},
{"f_3243:csc_2escm",(void*)f_3243},
{"f_3104:csc_2escm",(void*)f_3104},
{"f_3213:csc_2escm",(void*)f_3213},
{"f_3223:csc_2escm",(void*)f_3223},
{"f_3142:csc_2escm",(void*)f_3142},
{"f_3211:csc_2escm",(void*)f_3211},
{"f_3146:csc_2escm",(void*)f_3146},
{"f_3186:csc_2escm",(void*)f_3186},
{"f_3196:csc_2escm",(void*)f_3196},
{"f_3155:csc_2escm",(void*)f_3155},
{"f_3163:csc_2escm",(void*)f_3163},
{"f_3173:csc_2escm",(void*)f_3173},
{"f_3105:csc_2escm",(void*)f_3105},
{"f_3109:csc_2escm",(void*)f_3109},
{"f5114:csc_2escm",(void*)f5114},
{"f_3132:csc_2escm",(void*)f_3132},
{"f5109:csc_2escm",(void*)f5109},
{"f_3136:csc_2escm",(void*)f_3136},
{"f_3124:csc_2escm",(void*)f_3124},
{"f_3112:csc_2escm",(void*)f_3112},
{"f_3042:csc_2escm",(void*)f_3042},
{"f_3046:csc_2escm",(void*)f_3046},
{"f5104:csc_2escm",(void*)f5104},
{"f_3073:csc_2escm",(void*)f_3073},
{"f5099:csc_2escm",(void*)f5099},
{"f_3095:csc_2escm",(void*)f_3095},
{"f_3077:csc_2escm",(void*)f_3077},
{"f_3081:csc_2escm",(void*)f_3081},
{"f_3085:csc_2escm",(void*)f_3085},
{"f_3061:csc_2escm",(void*)f_3061},
{"f_3049:csc_2escm",(void*)f_3049},
{"f_1378:csc_2escm",(void*)f_1378},
{"f_1393:csc_2escm",(void*)f_1393},
{"f_1396:csc_2escm",(void*)f_1396},
{"f_1399:csc_2escm",(void*)f_1399},
{"f_1402:csc_2escm",(void*)f_1402},
{"f_1405:csc_2escm",(void*)f_1405},
{"f_1408:csc_2escm",(void*)f_1408},
{"f_1415:csc_2escm",(void*)f_1415},
{"f_1418:csc_2escm",(void*)f_1418},
{"f_1421:csc_2escm",(void*)f_1421},
{"f5094:csc_2escm",(void*)f5094},
{"f_1445:csc_2escm",(void*)f_1445},
{"f_1424:csc_2escm",(void*)f_1424},
{"f_1427:csc_2escm",(void*)f_1427},
{"f_1441:csc_2escm",(void*)f_1441},
{"f5089:csc_2escm",(void*)f5089},
{"f_1437:csc_2escm",(void*)f_1437},
{"f_1430:csc_2escm",(void*)f_1430},
{"f_1433:csc_2escm",(void*)f_1433},
{"f_1384:csc_2escm",(void*)f_1384},
{"f_3621:csc_2escm",(void*)f_3621},
{"f5082:csc_2escm",(void*)f5082},
{"f_3650:csc_2escm",(void*)f_3650},
{"f_3352:csc_2escm",(void*)f_3352},
{"f5077:csc_2escm",(void*)f5077},
{"f_3355:csc_2escm",(void*)f_3355},
{"f_3521:csc_2escm",(void*)f_3521},
{"f_3571:csc_2escm",(void*)f_3571},
{"f_3602:csc_2escm",(void*)f_3602},
{"f_3605:csc_2escm",(void*)f_3605},
{"f_3619:csc_2escm",(void*)f_3619},
{"f5072:csc_2escm",(void*)f5072},
{"f_3615:csc_2escm",(void*)f_3615},
{"f_3608:csc_2escm",(void*)f_3608},
{"f_3611:csc_2escm",(void*)f_3611},
{"f_3574:csc_2escm",(void*)f_3574},
{"f_3581:csc_2escm",(void*)f_3581},
{"f_3584:csc_2escm",(void*)f_3584},
{"f_3598:csc_2escm",(void*)f_3598},
{"f5067:csc_2escm",(void*)f5067},
{"f_3594:csc_2escm",(void*)f_3594},
{"f_3587:csc_2escm",(void*)f_3587},
{"f_3590:csc_2escm",(void*)f_3590},
{"f_3524:csc_2escm",(void*)f_3524},
{"f_3561:csc_2escm",(void*)f_3561},
{"f_3551:csc_2escm",(void*)f_3551},
{"f_3528:csc_2escm",(void*)f_3528},
{"f5062:csc_2escm",(void*)f5062},
{"f_3532:csc_2escm",(void*)f_3532},
{"f_3538:csc_2escm",(void*)f_3538},
{"f_3541:csc_2escm",(void*)f_3541},
{"f_3358:csc_2escm",(void*)f_3358},
{"f5057:csc_2escm",(void*)f5057},
{"f_3517:csc_2escm",(void*)f_3517},
{"f_3505:csc_2escm",(void*)f_3505},
{"f_3509:csc_2escm",(void*)f_3509},
{"f_3513:csc_2escm",(void*)f_3513},
{"f_3497:csc_2escm",(void*)f_3497},
{"f_3489:csc_2escm",(void*)f_3489},
{"f_3485:csc_2escm",(void*)f_3485},
{"f_3361:csc_2escm",(void*)f_3361},
{"f_3438:csc_2escm",(void*)f_3438},
{"f_3475:csc_2escm",(void*)f_3475},
{"f_3465:csc_2escm",(void*)f_3465},
{"f5052:csc_2escm",(void*)f5052},
{"f_3461:csc_2escm",(void*)f_3461},
{"f_3457:csc_2escm",(void*)f_3457},
{"f_3441:csc_2escm",(void*)f_3441},
{"f_4030:csc_2escm",(void*)f_4030},
{"f_4033:csc_2escm",(void*)f_4033},
{"f5047:csc_2escm",(void*)f5047},
{"f_4057:csc_2escm",(void*)f_4057},
{"f_4036:csc_2escm",(void*)f_4036},
{"f_4039:csc_2escm",(void*)f_4039},
{"f_4053:csc_2escm",(void*)f_4053},
{"f5042:csc_2escm",(void*)f5042},
{"f_4049:csc_2escm",(void*)f_4049},
{"f_4042:csc_2escm",(void*)f_4042},
{"f_4045:csc_2escm",(void*)f_4045},
{"f_3364:csc_2escm",(void*)f_3364},
{"f_3402:csc_2escm",(void*)f_3402},
{"f_3422:csc_2escm",(void*)f_3422},
{"f_3682:csc_2escm",(void*)f_3682},
{"f_3717:csc_2escm",(void*)f_3717},
{"f_3731:csc_2escm",(void*)f_3731},
{"f_3721:csc_2escm",(void*)f_3721},
{"f_3710:csc_2escm",(void*)f_3710},
{"f_3405:csc_2escm",(void*)f_3405},
{"f_3418:csc_2escm",(void*)f_3418},
{"f_4063:csc_2escm",(void*)f_4063},
{"f_4066:csc_2escm",(void*)f_4066},
{"f_4069:csc_2escm",(void*)f_4069},
{"f_4072:csc_2escm",(void*)f_4072},
{"f_4118:csc_2escm",(void*)f_4118},
{"f_4125:csc_2escm",(void*)f_4125},
{"f_4075:csc_2escm",(void*)f_4075},
{"f_4078:csc_2escm",(void*)f_4078},
{"f_4084:csc_2escm",(void*)f_4084},
{"f_4087:csc_2escm",(void*)f_4087},
{"f_4092:csc_2escm",(void*)f_4092},
{"f_4100:csc_2escm",(void*)f_4100},
{"f_4081:csc_2escm",(void*)f_4081},
{"f_3367:csc_2escm",(void*)f_3367},
{"f_3378:csc_2escm",(void*)f_3378},
{"f_3388:csc_2escm",(void*)f_3388},
{"f_1331:csc_2escm",(void*)f_1331},
{"f_1308:csc_2escm",(void*)f_1308},
{"f_1313:csc_2escm",(void*)f_1313},
{"f_1317:csc_2escm",(void*)f_1317},
{"f_1269:csc_2escm",(void*)f_1269},
{"f_1287:csc_2escm",(void*)f_1287},
{"f_1262:csc_2escm",(void*)f_1262},
{"f_1267:csc_2escm",(void*)f_1267},
{"f_4162:csc_2escm",(void*)f_4162},
{"f_4168:csc_2escm",(void*)f_4168},
{"f_4165:csc_2escm",(void*)f_4165},
{"f_4007:csc_2escm",(void*)f_4007},
{"f_4011:csc_2escm",(void*)f_4011},
{"f_3991:csc_2escm",(void*)f_3991},
{"f_3946:csc_2escm",(void*)f_3946},
{"f_3949:csc_2escm",(void*)f_3949},
{"f_3952:csc_2escm",(void*)f_3952},
{"f_3968:csc_2escm",(void*)f_3968},
{"f_3971:csc_2escm",(void*)f_3971},
{"f_3974:csc_2escm",(void*)f_3974},
{"f_3977:csc_2escm",(void*)f_3977},
{"f_3955:csc_2escm",(void*)f_3955},
{"f_3905:csc_2escm",(void*)f_3905},
{"f_3935:csc_2escm",(void*)f_3935},
{"f_3912:csc_2escm",(void*)f_3912},
{"f_3923:csc_2escm",(void*)f_3923},
{"f_3918:csc_2escm",(void*)f_3918},
{"f_3856:csc_2escm",(void*)f_3856},
{"f_3858:csc_2escm",(void*)f_3858},
{"f_3888:csc_2escm",(void*)f_3888},
{"f_3895:csc_2escm",(void*)f_3895},
{"f_3881:csc_2escm",(void*)f_3881},
{"f_3852:csc_2escm",(void*)f_3852},
{"f_3838:csc_2escm",(void*)f_3838},
{"f_3848:csc_2escm",(void*)f_3848},
{"f_3803:csc_2escm",(void*)f_3803},
{"f_3815:csc_2escm",(void*)f_3815},
{"f_3811:csc_2escm",(void*)f_3811},
{"f_3773:csc_2escm",(void*)f_3773},
{"f_3801:csc_2escm",(void*)f_3801},
{"f_3781:csc_2escm",(void*)f_3781},
{"f_3733:csc_2escm",(void*)f_3733},
{"f_3741:csc_2escm",(void*)f_3741},
{"f_3744:csc_2escm",(void*)f_3744},
{"f_3747:csc_2escm",(void*)f_3747},
{"f5021:csc_2escm",(void*)f5021},
{"f_3767:csc_2escm",(void*)f_3767},
{"f_3750:csc_2escm",(void*)f_3750},
{"f_3753:csc_2escm",(void*)f_3753},
{"f5016:csc_2escm",(void*)f5016},
{"f_3763:csc_2escm",(void*)f_3763},
{"f_3756:csc_2escm",(void*)f_3756},
{"f_3759:csc_2escm",(void*)f_3759},
{"f_3656:csc_2escm",(void*)f_3656},
{"f_3664:csc_2escm",(void*)f_3664},
{"f_3287:csc_2escm",(void*)f_3287},
{"f_3295:csc_2escm",(void*)f_3295},
{"f_3303:csc_2escm",(void*)f_3303},
{"f_3332:csc_2escm",(void*)f_3332},
{"f_3301:csc_2escm",(void*)f_3301},
{"f_978:csc_2escm",(void*)f_978},
{"f_989:csc_2escm",(void*)f_989},
{"f_993:csc_2escm",(void*)f_993},
{"f_982:csc_2escm",(void*)f_982},
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
