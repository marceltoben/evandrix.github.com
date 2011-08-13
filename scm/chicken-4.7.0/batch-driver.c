/* Generated from batch-driver.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:18
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: batch-driver.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file batch-driver.c
   unit: driver
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[407];
static double C_possibly_force_alignment;


C_noret_decl(C_driver_toplevel)
C_externexport void C_ccall C_driver_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1364)
static void C_ccall f_1364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1367)
static void C_ccall f_1367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1371)
static void C_ccall f_1371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1375)
static void C_ccall f_1375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1379)
static void C_ccall f_1379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1383)
static void C_ccall f_1383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1387)
static void C_ccall f_1387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1389)
static void C_ccall f_1389(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1389)
static void C_ccall f_1389r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1425)
static void C_ccall f_1425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4715)
static void C_ccall f_4715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4704)
static void C_ccall f_4704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4675)
static void C_fcall f_4675(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4679)
static void C_ccall f_4679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4671)
static void C_ccall f_4671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1444)
static void C_ccall f_1444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4634)
static void C_fcall f_4634(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4663)
static void C_ccall f_4663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1450)
static void C_ccall f_1450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1456)
static void C_fcall f_1456(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4617)
static void C_ccall f_4617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4613)
static void C_ccall f_4613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4609)
static void C_ccall f_4609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1870)
static void C_fcall f_1870(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1873)
static void C_fcall f_1873(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4536)
static void C_ccall f_4536(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4549)
static void C_ccall f_4549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4557)
static void C_fcall f_4557(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4586)
static void C_ccall f_4586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1880)
static void C_ccall f_1880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1901)
static void C_ccall f_1901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4501)
static void C_fcall f_4501(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1907)
static void C_ccall f_1907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1910)
static void C_fcall f_1910(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1917)
static void C_fcall f_1917(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1920)
static void C_ccall f_1920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1923)
static void C_fcall f_1923(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1926)
static void C_ccall f_1926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1929)
static void C_ccall f_1929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1932)
static void C_fcall f_1932(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1935)
static void C_fcall f_1935(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1938)
static void C_fcall f_1938(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1941)
static void C_fcall f_1941(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1944)
static void C_fcall f_1944(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1947)
static void C_fcall f_1947(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4431)
static void C_ccall f_4431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1950)
static void C_fcall f_1950(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1953)
static void C_fcall f_1953(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1956)
static void C_fcall f_1956(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1959)
static void C_fcall f_1959(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1962)
static void C_fcall f_1962(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1965)
static void C_fcall f_1965(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1968)
static void C_fcall f_1968(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1971)
static void C_fcall f_1971(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1974)
static void C_fcall f_1974(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4393)
static void C_ccall f_4393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1980)
static void C_fcall f_1980(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4378)
static void C_ccall f_4378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1986)
static void C_fcall f_1986(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4368)
static void C_ccall f_4368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4371)
static void C_ccall f_4371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1989)
static void C_ccall f_1989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4332)
static void C_ccall f_4332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1992)
static void C_ccall f_1992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4326)
static void C_ccall f_4326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1995)
static void C_ccall f_1995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4317)
static void C_ccall f_4317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1998)
static void C_ccall f_1998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4299)
static void C_ccall f_4299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4302)
static void C_ccall f_4302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4308)
static void C_ccall f_4308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2001)
static void C_ccall f_2001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4252)
static void C_ccall f_4252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4260)
static void C_fcall f_4260(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4289)
static void C_ccall f_4289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2007)
static void C_ccall f_2007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2014)
static void C_ccall f_2014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4203)
static void C_fcall f_4203(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4232)
static void C_ccall f_4232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2023)
static void C_fcall f_2023(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2026)
static void C_fcall f_2026(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2029)
static void C_fcall f_2029(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2032)
static void C_fcall f_2032(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2035)
static void C_fcall f_2035(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4160)
static void C_fcall f_4160(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4006)
static void C_ccall f_4006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4031)
static void C_ccall f_4031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4036)
static void C_ccall f_4036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4170)
static void C_ccall f_4170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4067)
static void C_ccall f_4067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4137)
static void C_fcall f_4137(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4074)
static void C_ccall f_4074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4099)
static void C_ccall f_4099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4104)
static void C_ccall f_4104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4147)
static void C_ccall f_4147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2038)
static void C_ccall f_2038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3996)
static void C_ccall f_3996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3988)
static void C_ccall f_3988(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2041)
static void C_ccall f_2041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3965)
static void C_fcall f_3965(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3975)
static void C_ccall f_3975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2047)
static void C_ccall f_2047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3963)
static void C_ccall f_3963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3955)
static void C_ccall f_3955(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2050)
static void C_ccall f_2050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3932)
static void C_fcall f_3932(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2056)
static void C_ccall f_2056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2063)
static void C_ccall f_2063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2069)
static void C_ccall f_2069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3906)
static void C_fcall f_3906(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2078)
static void C_ccall f_2078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2084)
static void C_ccall f_2084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2088)
static void C_ccall f_2088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2096)
static void C_ccall f_2096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2100)
static void C_ccall f_2100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2103)
static void C_ccall f_2103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3871)
static void C_fcall f_3871(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3900)
static void C_ccall f_3900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2109)
static void C_ccall f_2109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3828)
static void C_ccall f_3828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3836)
static void C_fcall f_3836(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3865)
static void C_ccall f_3865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3834)
static void C_ccall f_3834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3783)
static void C_ccall f_3783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3791)
static void C_fcall f_3791(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3789)
static void C_ccall f_3789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2113)
static void C_ccall f_2113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2120)
static void C_fcall f_2120(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3753)
static void C_ccall f_3753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2124)
static void C_ccall f_2124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3746)
static void C_ccall f_3746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2128)
static void C_ccall f_2128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3739)
static void C_ccall f_3739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2132)
static void C_ccall f_2132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3732)
static void C_ccall f_3732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3712)
static void C_ccall f_3712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2152)
static void C_ccall f_2152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2155)
static void C_ccall f_2155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2158)
static void C_fcall f_2158(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2161)
static void C_ccall f_2161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3662)
static void C_ccall f_3662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2164)
static void C_ccall f_2164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2188)
static void C_fcall f_2188(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2216)
static void C_ccall f_2216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2219)
static void C_ccall f_2219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2222)
static void C_ccall f_2222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2228)
static void C_ccall f_2228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2232)
static void C_ccall f_2232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2235)
static void C_ccall f_2235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2238)
static void C_ccall f_2238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2241)
static void C_ccall f_2241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2249)
static void C_ccall f_2249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3627)
static void C_ccall f_3627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3635)
static void C_ccall f_3635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3470)
static void C_fcall f_3470(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3575)
static void C_ccall f_3575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3620)
static void C_ccall f_3620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3592)
static void C_ccall f_3592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3598)
static void C_fcall f_3598(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3602)
static void C_ccall f_3602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3587)
static void C_ccall f_3587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3536)
static void C_fcall f_3536(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3565)
static void C_ccall f_3565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3488)
static void C_ccall f_3488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3501)
static void C_fcall f_3501(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3530)
static void C_ccall f_3530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3499)
static void C_ccall f_3499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3481)
static void C_ccall f_3481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3461)
static void C_ccall f_3461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3465)
static void C_ccall f_3465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2267)
static void C_ccall f_2267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3416)
static void C_ccall f_3416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3425)
static void C_fcall f_3425(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3454)
static void C_ccall f_3454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3423)
static void C_ccall f_3423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2270)
static void C_fcall f_2270(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2273)
static void C_ccall f_2273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2276)
static void C_ccall f_2276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2279)
static void C_fcall f_2279(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2282)
static void C_ccall f_2282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2285)
static void C_fcall f_2285(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3338)
static void C_fcall f_3338(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3367)
static void C_ccall f_3367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2291)
static void C_ccall f_2291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2294)
static void C_ccall f_2294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3303)
static void C_fcall f_3303(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3145)
static void C_ccall f_3145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3268)
static void C_fcall f_3268(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3157)
static void C_ccall f_3157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3161)
static void C_fcall f_3161(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3204)
static void C_fcall f_3204(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3189)
static void C_ccall f_3189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3094)
static void C_fcall f_3094(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3069)
static void C_ccall f_3069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3104)
static void C_ccall f_3104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2306)
static void C_ccall f_2306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2309)
static void C_ccall f_2309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3034)
static void C_ccall f_3034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3037)
static void C_ccall f_3037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3040)
static void C_ccall f_3040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3043)
static void C_ccall f_3043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2312)
static void C_ccall f_2312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2317)
static void C_ccall f_2317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2320)
static void C_ccall f_2320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2323)
static void C_ccall f_2323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2326)
static void C_ccall f_2326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2985)
static void C_fcall f_2985(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2329)
static void C_ccall f_2329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2963)
static void C_ccall f_2963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2343)
static void C_ccall f_2343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2918)
static void C_fcall f_2918(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2947)
static void C_ccall f_2947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2349)
static void C_ccall f_2349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2906)
static void C_ccall f_2906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2352)
static void C_ccall f_2352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2882)
static void C_fcall f_2882(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2847)
static void C_fcall f_2847(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2851)
static void C_ccall f_2851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2860)
static void C_ccall f_2860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2863)
static void C_ccall f_2863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2355)
static void C_ccall f_2355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2825)
static void C_fcall f_2825(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2810)
static void C_fcall f_2810(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2814)
static void C_ccall f_2814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2361)
static void C_ccall f_2361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2778)
static void C_fcall f_2778(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2788)
static void C_ccall f_2788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2707)
static void C_ccall f_2707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2755)
static void C_fcall f_2755(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2716)
static void C_ccall f_2716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2726)
static void C_ccall f_2726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2729)
static void C_ccall f_2729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2734)
static void C_ccall f_2734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2740)
static void C_ccall f_2740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2743)
static void C_ccall f_2743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2746)
static void C_ccall f_2746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2752)
static void C_ccall f_2752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2364)
static void C_fcall f_2364(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2370)
static void C_ccall f_2370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2376)
static void C_ccall f_2376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2382)
static void C_ccall f_2382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2387)
static void C_fcall f_2387(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2391)
static void C_ccall f_2391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2394)
static void C_ccall f_2394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2650)
static void C_ccall f_2650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2653)
static void C_ccall f_2653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2397)
static void C_ccall f_2397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2401)
static void C_ccall f_2401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2404)
static void C_ccall f_2404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2407)
static void C_ccall f_2407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2499)
static void C_ccall f_2499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2502)
static void C_ccall f_2502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2505)
static void C_ccall f_2505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2515)
static void C_ccall f_2515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2632)
static void C_ccall f_2632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2518)
static void C_ccall f_2518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2597)
static void C_fcall f_2597(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2524)
static void C_ccall f_2524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2527)
static void C_ccall f_2527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2545)
static void C_ccall f_2545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2548)
static void C_ccall f_2548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2554)
static void C_ccall f_2554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5016)
static void C_ccall f5016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2582)
static void C_ccall f_2582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2566)
static void C_ccall f_2566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2413)
static void C_ccall f_2413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2431)
static void C_ccall f_2431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2434)
static void C_ccall f_2434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2453)
static void C_ccall f_2453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2467)
static void C_ccall f_2467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2470)
static void C_ccall f_2470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2473)
static void C_ccall f_2473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2476)
static void C_ccall f_2476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2479)
static void C_ccall f_2479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2482)
static void C_ccall f_2482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2421)
static void C_ccall f_2421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2207)
static void C_ccall f_2207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2200)
static void C_ccall f_2200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2176)
static void C_ccall f_2176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1791)
static void C_fcall f_1791(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1821)
static void C_fcall f_1821(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1816)
static void C_fcall f_1816(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1793)
static void C_fcall f_1793(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1797)
static void C_ccall f_1797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1811)
static void C_ccall f_1811(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1805)
static void C_ccall f_1805(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1800)
static void C_ccall f_1800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1762)
static void C_fcall f_1762(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1772)
static void C_ccall f_1772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1775)
static void C_ccall f_1775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1778)
static void C_ccall f_1778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1752)
static void C_fcall f_1752(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1760)
static void C_ccall f_1760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1717)
static void C_fcall f_1717(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1723)
static void C_fcall f_1723(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1731)
static void C_fcall f_1731(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1739)
static void C_ccall f_1739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1743)
static void C_ccall f_1743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1637)
static void C_fcall f_1637(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1706)
static void C_ccall f_1706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1686)
static void C_ccall f_1686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1591)
static void C_fcall f_1591(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1614)
static void C_fcall f_1614(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1603)
static void C_ccall f_1603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1624)
static void C_ccall f_1624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1567)
static void C_fcall f_1567(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
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
C_noret_decl(f_1545)
static void C_fcall f_1545(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1552)
static void C_ccall f_1552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1565)
static void C_ccall f_1565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1521)
static void C_fcall f_1521(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1525)
static void C_ccall f_1525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1540)
static void C_ccall f_1540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1543)
static void C_ccall f_1543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1506)
static void C_fcall f_1506(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1513)
static void C_ccall f_1513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1516)
static void C_ccall f_1516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1392)
static void C_fcall f_1392(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_4675)
static void C_fcall trf_4675(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4675(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4675(t0,t1,t2);}

C_noret_decl(trf_4634)
static void C_fcall trf_4634(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4634(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4634(t0,t1,t2);}

C_noret_decl(trf_1456)
static void C_fcall trf_1456(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1456(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1456(t0,t1);}

C_noret_decl(trf_1870)
static void C_fcall trf_1870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1870(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1870(t0,t1);}

C_noret_decl(trf_1873)
static void C_fcall trf_1873(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1873(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1873(t0,t1);}

C_noret_decl(trf_4557)
static void C_fcall trf_4557(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4557(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4557(t0,t1,t2);}

C_noret_decl(trf_4501)
static void C_fcall trf_4501(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4501(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4501(t0,t1,t2);}

C_noret_decl(trf_1910)
static void C_fcall trf_1910(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1910(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1910(t0,t1);}

C_noret_decl(trf_1917)
static void C_fcall trf_1917(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1917(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1917(t0,t1);}

C_noret_decl(trf_1923)
static void C_fcall trf_1923(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1923(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1923(t0,t1);}

C_noret_decl(trf_1932)
static void C_fcall trf_1932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1932(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1932(t0,t1);}

C_noret_decl(trf_1935)
static void C_fcall trf_1935(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1935(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1935(t0,t1);}

C_noret_decl(trf_1938)
static void C_fcall trf_1938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1938(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1938(t0,t1);}

C_noret_decl(trf_1941)
static void C_fcall trf_1941(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1941(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1941(t0,t1);}

C_noret_decl(trf_1944)
static void C_fcall trf_1944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1944(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1944(t0,t1);}

C_noret_decl(trf_1947)
static void C_fcall trf_1947(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1947(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1947(t0,t1);}

C_noret_decl(trf_1950)
static void C_fcall trf_1950(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1950(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1950(t0,t1);}

C_noret_decl(trf_1953)
static void C_fcall trf_1953(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1953(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1953(t0,t1);}

C_noret_decl(trf_1956)
static void C_fcall trf_1956(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1956(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1956(t0,t1);}

C_noret_decl(trf_1959)
static void C_fcall trf_1959(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1959(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1959(t0,t1);}

C_noret_decl(trf_1962)
static void C_fcall trf_1962(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1962(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1962(t0,t1);}

C_noret_decl(trf_1965)
static void C_fcall trf_1965(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1965(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1965(t0,t1);}

C_noret_decl(trf_1968)
static void C_fcall trf_1968(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1968(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1968(t0,t1);}

C_noret_decl(trf_1971)
static void C_fcall trf_1971(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1971(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1971(t0,t1);}

C_noret_decl(trf_1974)
static void C_fcall trf_1974(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1974(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1974(t0,t1);}

C_noret_decl(trf_1980)
static void C_fcall trf_1980(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1980(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1980(t0,t1);}

C_noret_decl(trf_1986)
static void C_fcall trf_1986(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1986(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1986(t0,t1);}

C_noret_decl(trf_4260)
static void C_fcall trf_4260(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4260(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4260(t0,t1,t2);}

C_noret_decl(trf_4203)
static void C_fcall trf_4203(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4203(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4203(t0,t1,t2);}

C_noret_decl(trf_2023)
static void C_fcall trf_2023(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2023(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2023(t0,t1);}

C_noret_decl(trf_2026)
static void C_fcall trf_2026(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2026(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2026(t0,t1);}

C_noret_decl(trf_2029)
static void C_fcall trf_2029(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2029(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2029(t0,t1);}

C_noret_decl(trf_2032)
static void C_fcall trf_2032(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2032(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2032(t0,t1);}

C_noret_decl(trf_2035)
static void C_fcall trf_2035(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2035(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2035(t0,t1);}

C_noret_decl(trf_4160)
static void C_fcall trf_4160(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4160(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4160(t0,t1,t2);}

C_noret_decl(trf_4137)
static void C_fcall trf_4137(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4137(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4137(t0,t1,t2);}

C_noret_decl(trf_3965)
static void C_fcall trf_3965(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3965(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3965(t0,t1,t2);}

C_noret_decl(trf_3932)
static void C_fcall trf_3932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3932(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3932(t0,t1,t2);}

C_noret_decl(trf_3906)
static void C_fcall trf_3906(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3906(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3906(t0,t1,t2);}

C_noret_decl(trf_3871)
static void C_fcall trf_3871(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3871(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3871(t0,t1,t2);}

C_noret_decl(trf_3836)
static void C_fcall trf_3836(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3836(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3836(t0,t1,t2);}

C_noret_decl(trf_3791)
static void C_fcall trf_3791(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3791(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3791(t0,t1,t2);}

C_noret_decl(trf_2120)
static void C_fcall trf_2120(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2120(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2120(t0,t1);}

C_noret_decl(trf_2158)
static void C_fcall trf_2158(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2158(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2158(t0,t1);}

C_noret_decl(trf_2188)
static void C_fcall trf_2188(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2188(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2188(t0,t1);}

C_noret_decl(trf_3470)
static void C_fcall trf_3470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3470(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3470(t0,t1,t2);}

C_noret_decl(trf_3598)
static void C_fcall trf_3598(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3598(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3598(t0,t1);}

C_noret_decl(trf_3536)
static void C_fcall trf_3536(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3536(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3536(t0,t1,t2);}

C_noret_decl(trf_3501)
static void C_fcall trf_3501(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3501(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3501(t0,t1,t2);}

C_noret_decl(trf_3425)
static void C_fcall trf_3425(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3425(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3425(t0,t1,t2);}

C_noret_decl(trf_2270)
static void C_fcall trf_2270(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2270(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2270(t0,t1);}

C_noret_decl(trf_2279)
static void C_fcall trf_2279(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2279(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2279(t0,t1);}

C_noret_decl(trf_2285)
static void C_fcall trf_2285(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2285(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2285(t0,t1);}

C_noret_decl(trf_3338)
static void C_fcall trf_3338(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3338(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3338(t0,t1,t2);}

C_noret_decl(trf_3303)
static void C_fcall trf_3303(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3303(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3303(t0,t1,t2);}

C_noret_decl(trf_3268)
static void C_fcall trf_3268(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3268(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3268(t0,t1,t2);}

C_noret_decl(trf_3161)
static void C_fcall trf_3161(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3161(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3161(t0,t1);}

C_noret_decl(trf_3204)
static void C_fcall trf_3204(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3204(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3204(t0,t1,t2);}

C_noret_decl(trf_3094)
static void C_fcall trf_3094(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3094(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3094(t0,t1,t2);}

C_noret_decl(trf_2985)
static void C_fcall trf_2985(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2985(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2985(t0,t1,t2);}

C_noret_decl(trf_2918)
static void C_fcall trf_2918(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2918(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2918(t0,t1,t2);}

C_noret_decl(trf_2882)
static void C_fcall trf_2882(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2882(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2882(t0,t1,t2);}

C_noret_decl(trf_2847)
static void C_fcall trf_2847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2847(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2847(t0,t1,t2);}

C_noret_decl(trf_2825)
static void C_fcall trf_2825(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2825(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2825(t0,t1,t2);}

C_noret_decl(trf_2810)
static void C_fcall trf_2810(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2810(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2810(t0,t1,t2);}

C_noret_decl(trf_2778)
static void C_fcall trf_2778(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2778(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2778(t0,t1,t2);}

C_noret_decl(trf_2755)
static void C_fcall trf_2755(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2755(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2755(t0,t1,t2);}

C_noret_decl(trf_2364)
static void C_fcall trf_2364(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2364(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2364(t0,t1);}

C_noret_decl(trf_2387)
static void C_fcall trf_2387(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2387(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2387(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2597)
static void C_fcall trf_2597(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2597(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2597(t0,t1);}

C_noret_decl(trf_1791)
static void C_fcall trf_1791(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1791(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1791(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1821)
static void C_fcall trf_1821(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1821(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1821(t0,t1);}

C_noret_decl(trf_1816)
static void C_fcall trf_1816(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1816(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1816(t0,t1,t2);}

C_noret_decl(trf_1793)
static void C_fcall trf_1793(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1793(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1793(t0,t1,t2,t3);}

C_noret_decl(trf_1762)
static void C_fcall trf_1762(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1762(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1762(t0,t1,t2);}

C_noret_decl(trf_1752)
static void C_fcall trf_1752(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1752(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1752(t0,t1);}

C_noret_decl(trf_1717)
static void C_fcall trf_1717(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1717(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1717(t0,t1,t2);}

C_noret_decl(trf_1723)
static void C_fcall trf_1723(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1723(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1723(t0,t1,t2);}

C_noret_decl(trf_1731)
static void C_fcall trf_1731(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1731(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1731(t0,t1,t2);}

C_noret_decl(trf_1637)
static void C_fcall trf_1637(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1637(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1637(t0,t1);}

C_noret_decl(trf_1591)
static void C_fcall trf_1591(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1591(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1591(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1614)
static void C_fcall trf_1614(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1614(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1614(t0,t1,t2);}

C_noret_decl(trf_1567)
static void C_fcall trf_1567(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1567(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_1567(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1545)
static void C_fcall trf_1545(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1545(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1545(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1521)
static void C_fcall trf_1521(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1521(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1521(t0,t1,t2,t3);}

C_noret_decl(trf_1506)
static void C_fcall trf_1506(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1506(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1506(t0,t1,t2,t3);}

C_noret_decl(trf_1392)
static void C_fcall trf_1392(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1392(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1392(t0,t1);}

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
C_driver_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_driver_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("driver_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3143)){
C_save(t1);
C_rereclaim2(3143*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,407);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],17,"user-options-pass");
lf[3]=C_h_intern(&lf[3],14,"user-read-pass");
lf[4]=C_h_intern(&lf[4],22,"user-preprocessor-pass");
lf[5]=C_h_intern(&lf[5],9,"user-pass");
lf[6]=C_h_intern(&lf[6],23,"user-post-analysis-pass");
lf[7]=C_h_intern(&lf[7],19,"compile-source-file");
lf[8]=C_h_intern(&lf[8],4,"quit");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000 missing argument to `-~A\047 option");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid argument to `~A\047 option");
lf[11]=C_h_intern(&lf[11],12,"explicit-use");
lf[12]=C_h_intern(&lf[12],26,"\010compilerexplicit-use-flag");
lf[13]=C_h_intern(&lf[13],12,"\004coredeclare");
lf[14]=C_h_intern(&lf[14],7,"verbose");
lf[15]=C_h_intern(&lf[15],11,"output-file");
lf[16]=C_h_intern(&lf[16],23,"\010compilerchop-separator");
lf[17]=C_h_intern(&lf[17],3,"map");
lf[18]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\003sysimplicit-exit-handler\376\377\016\376\377\016\376\377\016");
lf[19]=C_h_intern(&lf[19],7,"profile");
lf[20]=C_h_intern(&lf[20],12,"profile-name");
lf[21]=C_h_intern(&lf[21],9,"heap-size");
lf[22]=C_h_intern(&lf[22],17,"heap-initial-size");
lf[23]=C_h_intern(&lf[23],11,"heap-growth");
lf[24]=C_h_intern(&lf[24],14,"heap-shrinkage");
lf[25]=C_h_intern(&lf[25],13,"keyword-style");
lf[26]=C_h_intern(&lf[26],4,"unit");
lf[27]=C_h_intern(&lf[27],12,"analyze-only");
lf[28]=C_h_intern(&lf[28],7,"dynamic");
lf[29]=C_h_intern(&lf[29],8,"unboxing");
lf[30]=C_h_intern(&lf[30],6,"module");
lf[31]=C_h_intern(&lf[31],7,"nursery");
lf[32]=C_h_intern(&lf[32],10,"stack-size");
lf[33]=C_h_intern(&lf[33],19,"\003sysstandard-output");
lf[34]=C_h_intern(&lf[34],16,"\003sysflush-output");
lf[35]=C_h_intern(&lf[35],19,"\003syswrite-char/port");
lf[36]=C_h_intern(&lf[36],7,"fprintf");
lf[37]=C_h_intern(&lf[37],26,"\010compilerdebugging-chicken");
lf[38]=C_h_intern(&lf[38],7,"display");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\010pass: ~a");
lf[40]=C_h_intern(&lf[40],19,"\010compilerdump-nodes");
lf[41]=C_h_intern(&lf[41],12,"pretty-print");
lf[42]=C_h_intern(&lf[42],30,"\010compilerbuild-expression-tree");
lf[43]=C_h_intern(&lf[43],34,"\010compilerdisplay-analysis-database");
lf[44]=C_h_intern(&lf[44],5,"write");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\013(iteration ");
lf[46]=C_h_intern(&lf[46],8,"for-each");
lf[47]=C_h_intern(&lf[47],7,"newline");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid numeric argument ~S");
lf[49]=C_h_intern(&lf[49],9,"substring");
lf[50]=C_h_intern(&lf[50],20,"current-milliseconds");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\003: \011");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\030milliseconds needed for ");
lf[53]=C_h_intern(&lf[53],12,"\010compilerget");
lf[54]=C_h_intern(&lf[54],13,"\010compilerput!");
lf[55]=C_h_intern(&lf[55],27,"\010compileranalyze-expression");
lf[56]=C_h_intern(&lf[56],9,"\003syserror");
lf[57]=C_h_intern(&lf[57],1,"D");
lf[58]=C_h_intern(&lf[58],25,"\010compilerimport-libraries");
lf[59]=C_h_intern(&lf[59],22,"no-module-registration");
lf[60]=C_h_intern(&lf[60],35,"\010compilerenable-module-registration");
lf[61]=C_h_intern(&lf[61],16,"emit-inline-file");
lf[62]=C_h_intern(&lf[62],12,"inline-limit");
lf[63]=C_h_intern(&lf[63],21,"\010compilerverbose-mode");
lf[64]=C_h_intern(&lf[64],31,"\003sysread-error-with-line-number");
lf[65]=C_h_intern(&lf[65],21,"\003sysinclude-pathnames");
lf[66]=C_h_intern(&lf[66],14,"string->symbol");
lf[67]=C_h_intern(&lf[67],17,"register-feature!");
lf[68]=C_h_intern(&lf[68],19,"unregister-feature!");
lf[69]=C_h_intern(&lf[69],19,"\000compiler-extension");
lf[70]=C_h_intern(&lf[70],12,"\003sysfeatures");
lf[71]=C_h_intern(&lf[71],10,"\000compiling");
lf[72]=C_h_intern(&lf[72],28,"\003sysexplicit-library-modules");
lf[73]=C_h_intern(&lf[73],25,"\010compilertarget-heap-size");
lf[74]=C_h_intern(&lf[74],33,"\010compilertarget-initial-heap-size");
lf[75]=C_h_intern(&lf[75],27,"\010compilertarget-heap-growth");
lf[76]=C_h_intern(&lf[76],30,"\010compilertarget-heap-shrinkage");
lf[77]=C_h_intern(&lf[77],26,"\010compilertarget-stack-size");
lf[78]=C_h_intern(&lf[78],8,"no-trace");
lf[79]=C_h_intern(&lf[79],24,"\010compileremit-trace-info");
lf[80]=C_h_intern(&lf[80],29,"disable-stack-overflow-checks");
lf[81]=C_h_intern(&lf[81],40,"\010compilerdisable-stack-overflow-checking");
lf[82]=C_h_intern(&lf[82],23,"\010compilerbootstrap-mode");
lf[83]=C_h_intern(&lf[83],7,"version");
lf[84]=C_h_intern(&lf[84],22,"\010compilerprint-version");
lf[85]=C_h_intern(&lf[85],4,"help");
lf[86]=C_h_intern(&lf[86],20,"\010compilerprint-usage");
lf[87]=C_h_intern(&lf[87],7,"release");
lf[88]=C_h_intern(&lf[88],15,"chicken-version");
lf[89]=C_h_intern(&lf[89],24,"\010compilersource-filename");
lf[90]=C_h_intern(&lf[90],24,"\003sysline-number-database");
lf[91]=C_h_intern(&lf[91],32,"\010compilercanonicalize-expression");
lf[92]=C_h_intern(&lf[92],28,"\010compilerprofile-lambda-list");
lf[93]=C_h_intern(&lf[93],31,"\010compilerline-number-database-2");
lf[94]=C_h_intern(&lf[94],4,"node");
lf[95]=C_h_intern(&lf[95],6,"lambda");
lf[96]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\016\376\377\016");
lf[97]=C_h_intern(&lf[97],23,"\010compilerconstant-table");
lf[98]=C_h_intern(&lf[98],21,"\010compilerinline-table");
lf[99]=C_h_intern(&lf[99],23,"\010compilerfirst-analysis");
lf[100]=C_h_intern(&lf[100],41,"\010compilerperform-high-level-optimizations");
lf[101]=C_h_intern(&lf[101],37,"\010compilerinline-substitutions-enabled");
lf[102]=C_h_intern(&lf[102],22,"optimize-leaf-routines");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\031leaf routine optimization");
lf[104]=C_h_intern(&lf[104],34,"\010compilertransform-direct-lambdas!");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[106]=C_h_intern(&lf[106],4,"leaf");
lf[107]=C_h_intern(&lf[107],18,"\010compilerdebugging");
lf[108]=C_h_intern(&lf[108],1,"p");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\025rewritings enabled...");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\023optimized-iteration");
lf[111]=C_h_intern(&lf[111],1,"5");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\014optimization");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\021optimization pass");
lf[114]=C_h_intern(&lf[114],36,"\010compilerprepare-for-code-generation");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\025compilation finished.");
lf[116]=C_h_intern(&lf[116],30,"\010compilercompiler-cleanup-hook");
lf[117]=C_h_intern(&lf[117],1,"t");
lf[118]=C_h_intern(&lf[118],17,"\003sysdisplay-times");
lf[119]=C_h_intern(&lf[119],14,"\003sysstop-timer");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\017code generation");
lf[121]=C_h_intern(&lf[121],17,"close-output-port");
lf[122]=C_h_intern(&lf[122],22,"\010compilergenerate-code");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\023generating `~A\047 ...");
lf[124]=C_h_intern(&lf[124],16,"open-output-file");
lf[125]=C_h_intern(&lf[125],19,"current-output-port");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\013preparation");
lf[127]=C_h_intern(&lf[127],4,"exit");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\010unboxing");
lf[129]=C_h_intern(&lf[129],1,"U");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\010unboxing");
lf[131]=C_h_intern(&lf[131],26,"\010compilerperform-unboxing!");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\023performing unboxing");
lf[133]=C_h_intern(&lf[133],6,"unsafe");
lf[134]=C_h_intern(&lf[134],41,"\010compilerunchecked-specialized-arithmetic");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\021closure-converted");
lf[136]=C_h_intern(&lf[136],1,"9");
lf[137]=C_h_intern(&lf[137],20,"\003syswarnings-enabled");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000#(don\047t worry - still compiling...)\012");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\016final-analysis");
lf[140]=C_h_intern(&lf[140],1,"8");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\022closure conversion");
lf[142]=C_h_intern(&lf[142],35,"\010compilerperform-closure-conversion");
lf[143]=C_h_intern(&lf[143],27,"\010compilerinline-output-file");
lf[144]=C_h_intern(&lf[144],28,"\010compilerinsert-timer-checks");
lf[145]=C_h_intern(&lf[145],32,"\010compileremit-global-inline-file");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000&generating global inline file `~a\047 ...");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\011optimized");
lf[148]=C_h_intern(&lf[148],1,"7");
lf[149]=C_h_intern(&lf[149],1,"s");
lf[150]=C_h_intern(&lf[150],33,"\010compilerprint-program-statistics");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[152]=C_h_intern(&lf[152],1,"4");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[154]=C_h_intern(&lf[154],1,"v");
lf[155]=C_h_intern(&lf[155],25,"\010compilerdump-global-refs");
lf[156]=C_h_intern(&lf[156],1,"d");
lf[157]=C_h_intern(&lf[157],29,"\010compilerdump-defined-globals");
lf[158]=C_h_intern(&lf[158],1,"u");
lf[159]=C_h_intern(&lf[159],31,"\010compilerdump-undefined-globals");
lf[160]=C_h_intern(&lf[160],3,"opt");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\003cps");
lf[162]=C_h_intern(&lf[162],1,"3");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\016cps conversion");
lf[164]=C_h_intern(&lf[164],31,"\010compilerperform-cps-conversion");
lf[165]=C_h_intern(&lf[165],34,"\010compilerscan-toplevel-assignments");
lf[166]=C_h_intern(&lf[166],22,"\010compilerdo-scrutinize");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\010scrutiny");
lf[168]=C_h_intern(&lf[168],19,"\010compilerscrutinize");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\023performing scrutiny");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\014pre-analysis");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[172]=C_h_intern(&lf[172],1,"0");
lf[173]=C_h_intern(&lf[173],8,"scrutiny");
lf[174]=C_h_intern(&lf[174],27,"\010compilerload-type-database");
lf[175]=C_h_intern(&lf[175],13,"make-pathname");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\005types");
lf[177]=C_h_intern(&lf[177],14,"symbol->string");
lf[178]=C_h_intern(&lf[178],5,"types");
lf[179]=C_h_intern(&lf[179],17,"ignore-repository");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\010types.db");
lf[181]=C_h_intern(&lf[181],23,"\010compilerinline-locally");
lf[182]=C_h_intern(&lf[182],25,"\010compilerload-inline-file");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\032Loading inline file ~a ...");
lf[184]=C_h_intern(&lf[184],19,"consult-inline-file");
lf[185]=C_h_intern(&lf[185],28,"\010compilerenable-inline-files");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\032Loading inline file ~a ...");
lf[187]=C_h_intern(&lf[187],12,"file-exists\077");
lf[188]=C_h_intern(&lf[188],28,"\003sysresolve-include-filename");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\006inline");
lf[190]=C_h_intern(&lf[190],2,"pp");
lf[191]=C_h_intern(&lf[191],1,"M");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\017; requirements:");
lf[193]=C_h_intern(&lf[193],3,"cdr");
lf[194]=C_h_intern(&lf[194],11,"concatenate");
lf[195]=C_h_intern(&lf[195],12,"vector->list");
lf[196]=C_h_intern(&lf[196],26,"\010compilerfile-requirements");
lf[197]=C_h_intern(&lf[197],37,"\010compilerinitialize-analysis-database");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\021initial node tree");
lf[199]=C_h_intern(&lf[199],1,"T");
lf[200]=C_h_intern(&lf[200],25,"\010compilerbuild-node-graph");
lf[201]=C_h_intern(&lf[201],32,"\010compilercanonicalize-begin-body");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\011user pass");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\014User pass...");
lf[204]=C_h_intern(&lf[204],12,"check-syntax");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\015canonicalized");
lf[206]=C_h_intern(&lf[206],1,"2");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\020canonicalization");
lf[208]=C_h_intern(&lf[208],18,"\010compilerunit-name");
lf[209]=C_h_intern(&lf[209],10,"\003sysnotice");
lf[210]=C_h_intern(&lf[210],17,"get-output-string");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\032\047 compiled in dynamic mode");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\016library unit `");
lf[213]=C_h_intern(&lf[213],18,"open-output-string");
lf[214]=C_h_intern(&lf[214],37,"\010compilerdisplay-line-number-database");
lf[215]=C_h_intern(&lf[215],1,"n");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\025line number database:");
lf[217]=C_h_intern(&lf[217],32,"\010compilerdisplay-real-name-table");
lf[218]=C_h_intern(&lf[218],1,"N");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\020real name table:");
lf[220]=C_h_intern(&lf[220],35,"\010compilercompiler-syntax-statistics");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\002\011\011");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[223]=C_h_intern(&lf[223],1,"S");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\030applied compiler syntax:");
lf[225]=C_h_intern(&lf[225],28,"\010compilerimmutable-constants");
lf[226]=C_h_intern(&lf[226],19,"\010compilerused-units");
lf[227]=C_h_intern(&lf[227],6,"append");
lf[228]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016\376\377\016");
lf[229]=C_h_intern(&lf[229],5,"quote");
lf[230]=C_h_intern(&lf[230],28,"\003sysset-profile-info-vector!");
lf[231]=C_h_intern(&lf[231],33,"\010compilerprofile-info-vector-name");
lf[232]=C_h_intern(&lf[232],21,"\010compileremit-profile");
lf[233]=C_h_intern(&lf[233],25,"\003sysregister-profile-info");
lf[234]=C_h_intern(&lf[234],4,"set!");
lf[235]=C_h_intern(&lf[235],13,"\004corecallunit");
lf[236]=C_h_intern(&lf[236],6,"gensym");
lf[237]=C_h_intern(&lf[237],6,"import");
lf[238]=C_h_intern(&lf[238],6,"scheme");
lf[239]=C_h_intern(&lf[239],7,"chicken");
lf[240]=C_h_intern(&lf[240],4,"main");
lf[241]=C_h_intern(&lf[241],11,"\004coremodule");
lf[242]=C_h_intern(&lf[242],4,"uses");
lf[243]=C_h_intern(&lf[243],7,"declare");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\006source");
lf[245]=C_h_intern(&lf[245],1,"1");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\032User preprocessing pass...");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\021User read pass...");
lf[248]=C_h_intern(&lf[248],21,"\010compilerstring->expr");
lf[249]=C_h_intern(&lf[249],7,"reverse");
lf[250]=C_h_intern(&lf[250],27,"\003syscurrent-source-filename");
lf[251]=C_h_intern(&lf[251],33,"\010compilerclose-checked-input-file");
lf[252]=C_h_intern(&lf[252],25,"\010compilerread/source-info");
lf[253]=C_h_intern(&lf[253],16,"\003sysdynamic-wind");
lf[254]=C_h_intern(&lf[254],34,"\010compilercheck-and-open-input-file");
lf[255]=C_h_intern(&lf[255],8,"epilogue");
lf[256]=C_h_intern(&lf[256],8,"prologue");
lf[257]=C_h_intern(&lf[257],8,"postlude");
lf[258]=C_h_intern(&lf[258],7,"prelude");
lf[259]=C_h_intern(&lf[259],11,"make-vector");
lf[260]=C_h_intern(&lf[260],34,"\010compilerline-number-database-size");
lf[261]=C_h_intern(&lf[261],1,"r");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\021target stack size");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\020target heap size");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\021debugging options");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\007options");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\022compiling `~a\047 ...");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\0001\012Run `csi\047 to start the interactive interpreter.\012");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000.or try `csc\047 for a more convenient interface.\012");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000C\012Enter `chicken -help\047 for information on how to use the compiler,\012");
lf[270]=C_h_intern(&lf[270],5,"-help");
lf[271]=C_h_intern(&lf[271],1,"h");
lf[272]=C_h_intern(&lf[272],2,"-h");
lf[273]=C_h_intern(&lf[273],33,"\010compilerload-identifier-database");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\012modules.db");
lf[275]=C_h_intern(&lf[275],18,"accumulate-profile");
lf[276]=C_h_intern(&lf[276],28,"\010compilerprofiled-procedures");
lf[277]=C_h_intern(&lf[277],3,"all");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\032generating ~aprofiled code");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\015accumulative ");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[281]=C_h_intern(&lf[281],39,"\010compilerdefault-profiling-declarations");
lf[282]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004set!\376\003\000\000\002\376\001\000\000\027\003sysprofile-append-mode\376\003\000\000\002\376\377\006\001\376\377\016\376\377\016");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000Eyou need to specify -profile-name if using accumulated profiling runs");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\022debugging info: ~A");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\011calltrace");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[287]=C_h_intern(&lf[287],21,"no-usual-integrations");
lf[288]=C_h_intern(&lf[288],17,"standard-bindings");
lf[289]=C_h_intern(&lf[289],34,"\010compilerdefault-standard-bindings");
lf[290]=C_h_intern(&lf[290],17,"extended-bindings");
lf[291]=C_h_intern(&lf[291],34,"\010compilerdefault-extended-bindings");
lf[292]=C_h_intern(&lf[292],1,"m");
lf[293]=C_h_intern(&lf[293],14,"set-gc-report!");
lf[294]=C_h_intern(&lf[294],8,"feature\077");
lf[295]=C_h_intern(&lf[295],18,"\000chicken-bootstrap");
lf[296]=C_h_intern(&lf[296],42,"\010compilerdefault-default-target-stack-size");
lf[297]=C_h_intern(&lf[297],41,"\010compilerdefault-default-target-heap-size");
lf[298]=C_h_intern(&lf[298],14,"compile-syntax");
lf[299]=C_h_intern(&lf[299],25,"\003sysenable-runtime-macros");
lf[300]=C_h_intern(&lf[300],22,"\004corerequire-extension");
lf[301]=C_h_intern(&lf[301],17,"require-extension");
lf[302]=C_h_intern(&lf[302],16,"static-extension");
lf[303]=C_h_intern(&lf[303],28,"\010compilerpostponed-initforms");
lf[304]=C_h_intern(&lf[304],6,"delete");
lf[305]=C_h_intern(&lf[305],3,"eq\077");
lf[306]=C_h_intern(&lf[306],4,"load");
lf[307]=C_h_intern(&lf[307],12,"load-verbose");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\036Loading compiler extensions...");
lf[309]=C_h_intern(&lf[309],6,"extend");
lf[310]=C_h_intern(&lf[310],12,"string-split");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[312]=C_h_intern(&lf[312],10,"append-map");
lf[313]=C_h_intern(&lf[313],10,"no-feature");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[315]=C_h_intern(&lf[315],7,"feature");
lf[316]=C_h_intern(&lf[316],38,"no-procedure-checks-for-usual-bindings");
lf[317]=C_h_intern(&lf[317],8,"\003sysput!");
lf[318]=C_h_intern(&lf[318],21,"\010compileralways-bound");
lf[319]=C_h_intern(&lf[319],34,"\010compileralways-bound-to-procedure");
lf[320]=C_h_intern(&lf[320],41,"no-procedure-checks-for-toplevel-bindings");
lf[321]=C_h_intern(&lf[321],35,"\010compilerno-global-procedure-checks");
lf[322]=C_h_intern(&lf[322],19,"no-procedure-checks");
lf[323]=C_h_intern(&lf[323],28,"\010compilerno-procedure-checks");
lf[324]=C_h_intern(&lf[324],15,"no-bound-checks");
lf[325]=C_h_intern(&lf[325],24,"\010compilerno-bound-checks");
lf[326]=C_h_intern(&lf[326],14,"no-argc-checks");
lf[327]=C_h_intern(&lf[327],23,"\010compilerno-argc-checks");
lf[328]=C_h_intern(&lf[328],20,"keep-shadowed-macros");
lf[329]=C_h_intern(&lf[329],33,"\010compilerundefine-shadowed-macros");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000(source- and output-filename are the same");
lf[331]=C_h_intern(&lf[331],12,"include-path");
lf[332]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\377\016");
lf[333]=C_h_intern(&lf[333],13,"symbol-escape");
lf[334]=C_h_intern(&lf[334],20,"parentheses-synonyms");
lf[335]=C_h_intern(&lf[335],5,"\000none");
lf[336]=C_h_intern(&lf[336],14,"case-sensitive");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000.Disabled the Chicken extensions to R5RS syntax");
lf[338]=C_h_intern(&lf[338],16,"no-symbol-escape");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000$Disabled support for escaped symbols");
lf[340]=C_h_intern(&lf[340],23,"no-parenthesis-synonyms");
lf[341]=C_h_intern(&lf[341],20,"parenthesis-synonyms");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000)Disabled support for parenthesis synonyms");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000\006prefix");
lf[344]=C_h_intern(&lf[344],7,"\000prefix");
lf[345]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[346]=C_decode_literal(C_heaptop,"\376B\000\000\006suffix");
lf[347]=C_h_intern(&lf[347],7,"\000suffix");
lf[348]=C_decode_literal(C_heaptop,"\376B\000\000+invalid argument to `-keyword-style\047 option");
lf[349]=C_h_intern(&lf[349],16,"case-insensitive");
lf[350]=C_decode_literal(C_heaptop,"\376B\000\000,Identifiers and symbols are case insensitive");
lf[351]=C_h_intern(&lf[351],24,"\010compilerinline-max-size");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\0000invalid argument to `-inline-limit\047 option: `~A\047");
lf[353]=C_h_intern(&lf[353],26,"\010compilerlocal-definitions");
lf[354]=C_h_intern(&lf[354],6,"inline");
lf[355]=C_h_intern(&lf[355],30,"emit-external-prototypes-first");
lf[356]=C_h_intern(&lf[356],30,"\010compilerexternal-protos-first");
lf[357]=C_h_intern(&lf[357],5,"block");
lf[358]=C_h_intern(&lf[358],26,"\010compilerblock-compilation");
lf[359]=C_h_intern(&lf[359],17,"fixnum-arithmetic");
lf[360]=C_h_intern(&lf[360],11,"number-type");
lf[361]=C_h_intern(&lf[361],6,"fixnum");
lf[362]=C_h_intern(&lf[362],18,"disable-interrupts");
lf[363]=C_h_intern(&lf[363],10,"setup-mode");
lf[364]=C_h_intern(&lf[364],14,"\003syssetup-mode");
lf[365]=C_h_intern(&lf[365],11,"no-warnings");
lf[366]=C_decode_literal(C_heaptop,"\376B\000\000\025Warnings are disabled");
lf[367]=C_h_intern(&lf[367],19,"\003sysnotices-enabled");
lf[368]=C_h_intern(&lf[368],13,"inline-global");
lf[369]=C_h_intern(&lf[369],5,"local");
lf[370]=C_h_intern(&lf[370],18,"no-compiler-syntax");
lf[371]=C_h_intern(&lf[371],32,"\010compilercompiler-syntax-enabled");
lf[372]=C_h_intern(&lf[372],14,"no-lambda-info");
lf[373]=C_h_intern(&lf[373],26,"\010compileremit-closure-info");
lf[374]=C_h_intern(&lf[374],3,"raw");
lf[375]=C_h_intern(&lf[375],11,"lambda-lift");
lf[376]=C_h_intern(&lf[376],7,"warning");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000&obsolete compiler option: -lambda-lift");
lf[378]=C_h_intern(&lf[378],12,"emit-exports");
lf[379]=C_decode_literal(C_heaptop,"\376B\000\000\047obsolete compiler option: -emit-exports");
lf[380]=C_h_intern(&lf[380],1,"b");
lf[381]=C_h_intern(&lf[381],15,"\003sysstart-timer");
lf[382]=C_h_intern(&lf[382],10,"scrutinize");
lf[383]=C_h_intern(&lf[383],25,"emit-all-import-libraries");
lf[384]=C_h_intern(&lf[384],29,"\010compilerall-import-libraries");
lf[385]=C_h_intern(&lf[385],13,"string-append");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000\013.import.scm");
lf[387]=C_h_intern(&lf[387],19,"emit-import-library");
lf[388]=C_h_intern(&lf[388],16,"\003sysstring->list");
lf[389]=C_h_intern(&lf[389],5,"debug");
lf[390]=C_h_intern(&lf[390],18,"\003sysdload-disabled");
lf[391]=C_h_intern(&lf[391],15,"repository-path");
lf[392]=C_h_intern(&lf[392],30,"\010compilerstandalone-executable");
lf[393]=C_h_intern(&lf[393],29,"\010compilerstring->c-identifier");
lf[394]=C_h_intern(&lf[394],18,"\010compilerstringify");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[397]=C_h_intern(&lf[397],24,"get-environment-variable");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\024CHICKEN_INCLUDE_PATH");
lf[399]=C_h_intern(&lf[399],9,"to-stdout");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[401]=C_h_intern(&lf[401],13,"pathname-file");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\003out");
lf[403]=C_h_intern(&lf[403],29,"\010compilerdefault-declarations");
lf[404]=C_h_intern(&lf[404],30,"\010compilerunits-used-by-default");
lf[405]=C_h_intern(&lf[405],28,"\010compilerinitialize-compiler");
lf[406]=C_h_intern(&lf[406],14,"make-parameter");
C_register_lf2(lf,407,create_ptable());
t2=C_mutate(&lf[0] /* (set! c281 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1364,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k1362 */
static void C_ccall f_1364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1364,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1367,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1365 in k1362 */
static void C_ccall f_1367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1371,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:36: make-parameter */
t3=*((C_word*)lf[406]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* k1369 in k1365 in k1362 */
static void C_ccall f_1371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1371,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! user-options-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1375,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:37: make-parameter */
t4=*((C_word*)lf[406]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k1373 in k1369 in k1365 in k1362 */
static void C_ccall f_1375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1375,2,t0,t1);}
t2=C_mutate((C_word*)lf[3]+1 /* (set! user-read-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1379,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:38: make-parameter */
t4=*((C_word*)lf[406]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k1377 in k1373 in k1369 in k1365 in k1362 */
static void C_ccall f_1379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1379,2,t0,t1);}
t2=C_mutate((C_word*)lf[4]+1 /* (set! user-preprocessor-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1383,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:39: make-parameter */
t4=*((C_word*)lf[406]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k1381 in k1377 in k1373 in k1369 in k1365 in k1362 */
static void C_ccall f_1383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1383,2,t0,t1);}
t2=C_mutate((C_word*)lf[5]+1 /* (set! user-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1387,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:40: make-parameter */
t4=*((C_word*)lf[406]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k1362 */
static void C_ccall f_1387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1387,2,t0,t1);}
t2=C_mutate((C_word*)lf[6]+1 /* (set! user-post-analysis-pass ...) */,t1);
t3=C_mutate((C_word*)lf[7]+1 /* (set! compile-source-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1389,tmp=(C_word)a,a+=2,tmp));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k1362 */
static void C_ccall f_1389(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_1389r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1389r(t0,t1,t2,t3);}}

static void C_ccall f_1389r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1392,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1425,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:53: initialize-compiler */
t6=*((C_word*)lf[405]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k1423 */
static void C_ccall f_1425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1425,2,t0,t1);}
t2=C_i_memq(lf[11],((C_word*)t0)[5]);
t3=C_mutate((C_word*)lf[12]+1 /* (set! ##compiler#explicit-use-flag ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4715,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[12]+1))){
/* batch-driver.scm:56: append */
t5=*((C_word*)lf[227]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[403]+1),C_SCHEME_END_OF_LIST);}
else{
t5=C_a_i_cons(&a,2,lf[242],*((C_word*)lf[404]+1));
t6=C_a_i_list(&a,1,t5);
/* batch-driver.scm:56: append */
t7=*((C_word*)lf[227]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,*((C_word*)lf[403]+1),t6);}}

/* k4713 in k1423 */
static void C_ccall f_4715(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4715,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[13],t1);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_memq(lf[14],((C_word*)t0)[5]);
t7=C_i_memq(lf[15],((C_word*)t0)[5]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t6,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t7)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4675,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* g6667 */
t10=t9;
f_4675(t10,t8,t7);}
else{
if(C_truep(C_i_memq(lf[399],((C_word*)t0)[5]))){
t9=t8;
f_1441(2,t9,C_SCHEME_FALSE);}
else{
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4704,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
/* batch-driver.scm:69: pathname-file */
t10=*((C_word*)lf[401]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,((C_word*)t0)[2]);}
else{
/* batch-driver.scm:69: make-pathname */
t10=*((C_word*)lf[175]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t8,C_SCHEME_FALSE,lf[402],lf[400]);}}}}

/* k4702 in k4713 in k1423 */
static void C_ccall f_4704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:69: make-pathname */
t2=*((C_word*)lf[175]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_SCHEME_FALSE,t1,lf[400]);}

/* g66 in k4713 in k1423 */
static void C_fcall f_4675(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4675,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4679,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:64: option-arg */
f_1392(t3,t2);}

/* k4677 in g66 in k4713 in k1423 */
static void C_ccall f_4679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_symbolp(t1))){
/* batch-driver.scm:66: symbol->string */
t2=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}
else{
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1439 in k4713 in k1423 */
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1441,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[16]+1);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1444,a[2]=t6,a[3]=t3,a[4]=t5,a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4671,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:72: get-environment-variable */
t9=*((C_word*)lf[397]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[398]);}

/* k4669 in k1439 in k4713 in k1423 */
static void C_ccall f_4671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* batch-driver.scm:71: string-split */
t3=*((C_word*)lf[310]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,lf[395]);}
else{
/* batch-driver.scm:71: string-split */
t2=*((C_word*)lf[310]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[396],lf[395]);}}

/* k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1444,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[17]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1450,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4634(t7,t3,t1);}

/* map-loop72 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_4634(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4634,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4663,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g7887 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4661 in map-loop72 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4663(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4663,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4634(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4634(t6,((C_word*)t0)[3],t5);}}

/* k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1450(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1450,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=lf[18];
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_i_memq(lf[19],((C_word*)t0)[8]);
t11=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1456,a[2]=t1,a[3]=t7,a[4]=t9,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t3,a[10]=t5,a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t10)){
t12=t11;
f_1456(t12,t10);}
else{
t12=C_i_memq(lf[275],((C_word*)t0)[8]);
t13=t11;
f_1456(t13,(C_truep(t12)?t12:C_i_memq(lf[20],((C_word*)t0)[8])));}}

/* k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1456(C_word t0,C_word t1){
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
C_word ab[108],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1456,NULL,2,t0,t1);}
t2=C_i_memq(lf[20],((C_word*)t0)[13]);
t3=(C_truep(t2)?C_i_cadr(t2):C_SCHEME_FALSE);
t4=C_i_memq(lf[21],((C_word*)t0)[13]);
t5=C_i_memq(lf[22],((C_word*)t0)[13]);
t6=C_i_memq(lf[23],((C_word*)t0)[13]);
t7=C_i_memq(lf[24],((C_word*)t0)[13]);
t8=C_i_memq(lf[25],((C_word*)t0)[13]);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_i_memq(lf[26],((C_word*)t0)[13]);
t12=C_i_memq(lf[27],((C_word*)t0)[13]);
t13=C_i_memq(lf[28],((C_word*)t0)[13]);
t14=C_i_memq(lf[29],((C_word*)t0)[13]);
t15=C_SCHEME_FALSE;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_FALSE;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_FALSE;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_i_memq(lf[30],((C_word*)t0)[13]);
t22=C_i_memq(lf[31],((C_word*)t0)[13]);
t23=(C_truep(t22)?t22:C_i_memq(lf[32],((C_word*)t0)[13]));
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_SCHEME_UNDEFINED;
t35=(*a=C_VECTOR_TYPE|1,a[1]=t34,tmp=(C_word)a,a+=2,tmp);
t36=C_SCHEME_UNDEFINED;
t37=(*a=C_VECTOR_TYPE|1,a[1]=t36,tmp=(C_word)a,a+=2,tmp);
t38=C_SCHEME_UNDEFINED;
t39=(*a=C_VECTOR_TYPE|1,a[1]=t38,tmp=(C_word)a,a+=2,tmp);
t40=C_SCHEME_UNDEFINED;
t41=(*a=C_VECTOR_TYPE|1,a[1]=t40,tmp=(C_word)a,a+=2,tmp);
t42=C_SCHEME_UNDEFINED;
t43=(*a=C_VECTOR_TYPE|1,a[1]=t42,tmp=(C_word)a,a+=2,tmp);
t44=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1506,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp));
t45=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1521,a[2]=t25,tmp=(C_word)a,a+=3,tmp));
t46=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1545,a[2]=t27,a[3]=t16,tmp=(C_word)a,a+=4,tmp));
t47=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1567,a[2]=t27,tmp=(C_word)a,a+=3,tmp));
t48=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1591,a[2]=t27,tmp=(C_word)a,a+=3,tmp));
t49=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1637,tmp=(C_word)a,a+=2,tmp));
t50=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1717,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp));
t51=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1752,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp));
t52=C_set_block_item(t41,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1762,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp));
t53=C_set_block_item(t43,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1791,a[2]=t20,tmp=(C_word)a,a+=3,tmp));
t54=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_1870,a[2]=((C_word*)t0)[10],a[3]=t8,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t5,a[7]=t6,a[8]=t7,a[9]=((C_word*)t0)[11],a[10]=t35,a[11]=t23,a[12]=t1,a[13]=((C_word*)t0)[3],a[14]=t21,a[15]=t3,a[16]=((C_word*)t0)[4],a[17]=t33,a[18]=t37,a[19]=t31,a[20]=t14,a[21]=t12,a[22]=t13,a[23]=((C_word*)t0)[5],a[24]=t25,a[25]=t29,a[26]=t43,a[27]=t39,a[28]=t41,a[29]=t18,a[30]=((C_word*)t0)[6],a[31]=((C_word*)t0)[7],a[32]=((C_word*)t0)[8],a[33]=t20,a[34]=t10,a[35]=((C_word*)t0)[12],a[36]=((C_word*)t0)[13],a[37]=t16,tmp=(C_word)a,a+=38,tmp);
if(C_truep(t11)){
t55=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4609,a[2]=t54,tmp=(C_word)a,a+=3,tmp);
t56=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4613,a[2]=t55,tmp=(C_word)a,a+=3,tmp);
t57=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4617,a[2]=t56,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:165: option-arg */
f_1392(t57,t11);}
else{
t55=t54;
f_1870(t55,C_SCHEME_UNDEFINED);}}

/* k4615 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:165: stringify */
t2=*((C_word*)lf[394]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4611 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:165: string->c-identifier */
t2=*((C_word*)lf[393]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4607 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[208]+1 /* (set! ##compiler#unit-name ...) */,t1);
t3=((C_word*)t0)[2];
f_1870(t3,t2);}

/* k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1870(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1870,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_1873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
t3=*((C_word*)lf[208]+1);
if(C_truep(t3)){
if(C_truep(t3)){
t4=C_set_block_item(lf[392] /* standalone-executable */,0,C_SCHEME_FALSE);
t5=t2;
f_1873(t5,t4);}
else{
t4=t2;
f_1873(t4,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(((C_word*)t0)[22])){
t4=C_set_block_item(lf[392] /* standalone-executable */,0,C_SCHEME_FALSE);
t5=t2;
f_1873(t5,t4);}
else{
t4=t2;
f_1873(t4,C_SCHEME_UNDEFINED);}}}

/* k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1873(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1873,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_1876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
if(C_truep(C_i_memq(lf[179],((C_word*)t0)[36]))){
t3=C_set_block_item(lf[390] /* dload-disabled */,0,C_SCHEME_TRUE);
/* batch-driver.scm:170: repository-path */
t4=*((C_word*)lf[391]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,C_SCHEME_FALSE);}
else{
t3=t2;
f_1876(2,t3,C_SCHEME_UNDEFINED);}}

/* k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[44],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1876,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_1880,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4536,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4594,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:176: collect-options */
t5=((C_word*)((C_word*)t0)[18])[1];
f_1717(t5,t4,lf[389]);}

/* k4592 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:172: append-map */
t2=*((C_word*)lf[312]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a4535 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4536(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4536,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4549,a[2]=t1,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* string->list */
t8=*((C_word*)lf[388]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k4547 in a4535 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4549,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[17]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4557,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4557(t6,((C_word*)t0)[2],t1);}

/* map-loop289 in k4547 in a4535 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_4557(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4557,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4586,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_string(&a,1,t4);
/* batch-driver.scm:174: string->symbol */
t6=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4584 in map-loop289 in k4547 in a4535 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4586(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4586,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4557(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4557(t6,((C_word*)t0)[3],t5);}}

/* k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1880(C_word c,C_word t0,C_word t1){
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
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1880,2,t0,t1);}
t2=C_mutate((C_word*)lf[37]+1 /* (set! ##compiler#debugging-chicken ...) */,t1);
t3=C_i_memq(lf[57],*((C_word*)lf[37]+1));
t4=C_mutate(((C_word *)((C_word*)t0)[37])+1,t3);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|38,a[1]=(C_word)f_1901,a[2]=t6,a[3]=t8,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],a[17]=((C_word*)t0)[15],a[18]=((C_word*)t0)[16],a[19]=((C_word*)t0)[17],a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],a[22]=((C_word*)t0)[20],a[23]=((C_word*)t0)[21],a[24]=((C_word*)t0)[22],a[25]=((C_word*)t0)[23],a[26]=((C_word*)t0)[24],a[27]=((C_word*)t0)[25],a[28]=((C_word*)t0)[26],a[29]=((C_word*)t0)[27],a[30]=((C_word*)t0)[28],a[31]=((C_word*)t0)[29],a[32]=((C_word*)t0)[30],a[33]=((C_word*)t0)[31],a[34]=((C_word*)t0)[32],a[35]=((C_word*)t0)[33],a[36]=((C_word*)t0)[34],a[37]=((C_word*)t0)[35],a[38]=((C_word*)t0)[36],tmp=(C_word)a,a+=39,tmp);
/* batch-driver.scm:182: collect-options */
t10=((C_word*)((C_word*)t0)[18])[1];
f_1717(t10,t9,lf[387]);}

/* k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[44],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1901,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[17]);
t3=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_1907,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],a[19]=((C_word*)t0)[21],a[20]=((C_word*)t0)[22],a[21]=((C_word*)t0)[23],a[22]=((C_word*)t0)[24],a[23]=((C_word*)t0)[25],a[24]=((C_word*)t0)[26],a[25]=((C_word*)t0)[27],a[26]=((C_word*)t0)[28],a[27]=((C_word*)t0)[29],a[28]=((C_word*)t0)[30],a[29]=((C_word*)t0)[31],a[30]=((C_word*)t0)[32],a[31]=((C_word*)t0)[33],a[32]=((C_word*)t0)[34],a[33]=((C_word*)t0)[35],a[34]=((C_word*)t0)[36],a[35]=((C_word*)t0)[37],a[36]=((C_word*)t0)[38],tmp=(C_word)a,a+=37,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4501,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4501(t7,t3,t1);}

/* map-loop316 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_4501(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4501,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1894,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:180: string->symbol */
t5=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1892 in map-loop316 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1894,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1898,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:181: string-append */
t3=*((C_word*)lf[385]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],lf[386]);}

/* k1896 in k1892 in map-loop316 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1898(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1898,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t4=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=C_slot(((C_word*)t0)[5],C_fix(1));
t7=((C_word*)((C_word*)t0)[4])[1];
f_4501(t7,((C_word*)t0)[3],t6);}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=C_slot(((C_word*)t0)[5],C_fix(1));
t7=((C_word*)((C_word*)t0)[4])[1];
f_4501(t7,((C_word*)t0)[3],t6);}}

/* k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1907,2,t0,t1);}
t2=C_mutate((C_word*)lf[58]+1 /* (set! ##compiler#import-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_1910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
if(C_truep(C_i_memq(lf[383],((C_word*)t0)[36]))){
if(C_truep(((C_word*)t0)[21])){
t4=t3;
f_1910(t4,C_SCHEME_UNDEFINED);}
else{
t4=C_set_block_item(lf[384] /* all-import-libraries */,0,C_SCHEME_TRUE);
t5=t3;
f_1910(t5,t4);}}
else{
t4=t3;
f_1910(t4,C_SCHEME_UNDEFINED);}}

/* k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1910(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1910,NULL,2,t0,t1);}
t2=C_i_memq(lf[59],((C_word*)t0)[36]);
t3=C_i_not(t2);
t4=C_mutate((C_word*)lf[60]+1 /* (set! ##compiler#enable-module-registration ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_1917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
if(C_truep(C_i_memq(lf[382],((C_word*)t0)[36]))){
t6=C_set_block_item(lf[166] /* do-scrutinize */,0,C_SCHEME_TRUE);
t7=t5;
f_1917(t7,t6);}
else{
t6=t5;
f_1917(t6,C_SCHEME_UNDEFINED);}}

/* k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1917(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1917,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_1920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
if(C_truep(C_i_memq(lf[117],*((C_word*)lf[37]+1)))){
/* batch-driver.scm:189: ##sys#start-timer */
t3=*((C_word*)lf[381]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=t2;
f_1920(2,t3,C_SCHEME_UNDEFINED);}}

/* k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1920,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1923,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[380],*((C_word*)lf[37]+1)))){
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t4=t2;
f_1923(t4,t3);}
else{
t3=t2;
f_1923(t3,C_SCHEME_UNDEFINED);}}

/* k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1923(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1923,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[378],((C_word*)t0)[35]))){
/* batch-driver.scm:192: warning */
t3=*((C_word*)lf[376]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[379]);}
else{
t3=t2;
f_1926(2,t3,C_SCHEME_UNDEFINED);}}

/* k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1926,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[375],((C_word*)t0)[35]))){
/* batch-driver.scm:194: warning */
t3=*((C_word*)lf[376]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[377]);}
else{
t3=t2;
f_1929(2,t3,C_SCHEME_UNDEFINED);}}

/* k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1929,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1932,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[374],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[12] /* explicit-use-flag */,0,C_SCHEME_TRUE);
t4=C_set_block_item(((C_word*)t0)[15],0,C_SCHEME_END_OF_LIST);
t5=C_set_block_item(((C_word*)t0)[31],0,C_SCHEME_END_OF_LIST);
t6=t2;
f_1932(t6,t5);}
else{
t3=t2;
f_1932(t3,C_SCHEME_UNDEFINED);}}

/* k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1932(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1932,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1935,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[372],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[373] /* emit-closure-info */,0,C_SCHEME_FALSE);
t4=t2;
f_1935(t4,t3);}
else{
t3=t2;
f_1935(t3,C_SCHEME_UNDEFINED);}}

/* k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1935(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1935,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[370],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[371] /* compiler-syntax-enabled */,0,C_SCHEME_FALSE);
t4=t2;
f_1938(t4,t3);}
else{
t3=t2;
f_1938(t3,C_SCHEME_UNDEFINED);}}

/* k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1938(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1938,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[369],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[353] /* local-definitions */,0,C_SCHEME_TRUE);
t4=t2;
f_1941(t4,t3);}
else{
t3=t2;
f_1941(t3,C_SCHEME_UNDEFINED);}}

/* k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1941(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1941,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[368],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[185] /* enable-inline-files */,0,C_SCHEME_TRUE);
t4=C_set_block_item(lf[181] /* inline-locally */,0,C_SCHEME_TRUE);
t5=t2;
f_1944(t5,t4);}
else{
t3=t2;
f_1944(t3,C_SCHEME_UNDEFINED);}}

/* k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1944(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1944,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1947,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(((C_word*)t0)[34])){
if(C_truep(((C_word*)t0)[34])){
t3=C_set_block_item(lf[367] /* notices-enabled */,0,C_SCHEME_TRUE);
t4=t2;
f_1947(t4,t3);}
else{
t3=t2;
f_1947(t3,C_SCHEME_UNDEFINED);}}
else{
t3=*((C_word*)lf[166]+1);
if(C_truep(t3)){
t4=C_set_block_item(lf[367] /* notices-enabled */,0,C_SCHEME_TRUE);
t5=t2;
f_1947(t5,t4);}
else{
t4=t2;
f_1947(t4,C_SCHEME_UNDEFINED);}}}

/* k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1947(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1947,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1950,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[365],((C_word*)t0)[35]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4431,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:211: dribble */
t4=((C_word*)((C_word*)t0)[23])[1];
f_1506(t4,t3,lf[366],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_1950(t3,C_SCHEME_UNDEFINED);}}

/* k4429 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[137] /* warnings-enabled */,0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
f_1950(t3,t2);}

/* k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1950(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1950,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[102],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[102] /* optimize-leaf-routines */,0,C_SCHEME_TRUE);
t4=t2;
f_1953(t4,t3);}
else{
t3=t2;
f_1953(t3,C_SCHEME_UNDEFINED);}}

/* k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1953(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1953,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1956,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[133],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[133] /* unsafe */,0,C_SCHEME_TRUE);
t4=t2;
f_1956(t4,t3);}
else{
t3=t2;
f_1956(t3,C_SCHEME_UNDEFINED);}}

/* k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1956(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1956,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[363],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[364] /* setup-mode */,0,C_SCHEME_TRUE);
t4=t2;
f_1959(t4,t3);}
else{
t3=t2;
f_1959(t3,C_SCHEME_UNDEFINED);}}

/* k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1959(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1959,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[362],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[144] /* insert-timer-checks */,0,C_SCHEME_FALSE);
t4=t2;
f_1962(t4,t3);}
else{
t3=t2;
f_1962(t3,C_SCHEME_UNDEFINED);}}

/* k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1962(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1962,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[359],((C_word*)t0)[35]))){
t3=C_mutate((C_word*)lf[360]+1 /* (set! number-type ...) */,lf[361]);
t4=t2;
f_1965(t4,t3);}
else{
t3=t2;
f_1965(t3,C_SCHEME_UNDEFINED);}}

/* k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1965(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1965,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[357],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[358] /* block-compilation */,0,C_SCHEME_TRUE);
t4=t2;
f_1968(t4,t3);}
else{
t3=t2;
f_1968(t3,C_SCHEME_UNDEFINED);}}

/* k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1968(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1968,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[355],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[356] /* external-protos-first */,0,C_SCHEME_TRUE);
t4=t2;
f_1971(t4,t3);}
else{
t3=t2;
f_1971(t3,C_SCHEME_UNDEFINED);}}

/* k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1971(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1971,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[354],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[181] /* inline-locally */,0,C_SCHEME_TRUE);
t4=t2;
f_1974(t4,t3);}
else{
t3=t2;
f_1974(t3,C_SCHEME_UNDEFINED);}}

/* k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1974(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1974,NULL,2,t0,t1);}
t2=C_i_memq(lf[61],((C_word*)t0)[35]);
t3=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(t2)){
t4=C_set_block_item(lf[181] /* inline-locally */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[353] /* local-definitions */,0,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4393,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:227: option-arg */
f_1392(t6,t2);}
else{
t4=t3;
f_1980(t4,C_SCHEME_FALSE);}}

/* k4391 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[143]+1 /* (set! ##compiler#inline-output-file ...) */,t1);
t3=((C_word*)t0)[2];
f_1980(t3,t2);}

/* k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1980(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1980,NULL,2,t0,t1);}
t2=C_i_memq(lf[62],((C_word*)t0)[35]);
t3=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1986,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[35],a[32]=((C_word*)t0)[31],a[33]=((C_word*)t0)[32],a[34]=((C_word*)t0)[33],a[35]=((C_word*)t0)[34],tmp=(C_word)a,a+=36,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4378,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:230: option-arg */
f_1392(t4,t2);}
else{
t4=t3;
f_1986(t4,C_SCHEME_FALSE);}}

/* k4376 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4378,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4384,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
t4=C_mutate((C_word*)lf[351]+1 /* (set! ##compiler#inline-max-size ...) */,t2);
t5=((C_word*)t0)[2];
f_1986(t5,t4);}
else{
/* batch-driver.scm:232: quit */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[352],t1);}}

/* k4382 in k4376 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[351]+1 /* (set! ##compiler#inline-max-size ...) */,t1);
t3=((C_word*)t0)[2];
f_1986(t3,t2);}

/* k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1986(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1986,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_1989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[349],((C_word*)t0)[31]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4368,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:234: dribble */
t4=((C_word*)((C_word*)t0)[23])[1];
f_1506(t4,t3,lf[350],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_1989(2,t3,C_SCHEME_UNDEFINED);}}

/* k4366 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4371,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:235: register-feature! */
t3=*((C_word*)lf[67]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[349]);}

/* k4369 in k4366 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:236: case-sensitive */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1989,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_1992,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],tmp=(C_word)a,a+=35,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4332,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:238: option-arg */
f_1392(t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_1992(2,t3,C_SCHEME_UNDEFINED);}}

/* k4330 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_string_equal_p(lf[343],t1))){
/* batch-driver.scm:239: keyword-style */
t2=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[344]);}
else{
if(C_truep(C_i_string_equal_p(lf[345],t1))){
/* batch-driver.scm:240: keyword-style */
t2=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[335]);}
else{
if(C_truep(C_i_string_equal_p(lf[346],t1))){
/* batch-driver.scm:241: keyword-style */
t2=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[347]);}
else{
/* batch-driver.scm:242: quit */
t2=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[348]);}}}}

/* k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1992,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_1995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_i_memq(lf[340],((C_word*)t0)[30]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4326,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:244: dribble */
t4=((C_word*)((C_word*)t0)[22])[1];
f_1506(t4,t3,lf[342],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_1995(2,t3,C_SCHEME_UNDEFINED);}}

/* k4324 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:245: parenthesis-synonyms */
t2=*((C_word*)lf[341]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1995,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_1998,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_i_memq(lf[338],((C_word*)t0)[30]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4317,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:247: dribble */
t4=((C_word*)((C_word*)t0)[22])[1];
f_1506(t4,t3,lf[339],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_1998(2,t3,C_SCHEME_UNDEFINED);}}

/* k4315 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:248: symbol-escape */
t2=*((C_word*)lf[333]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1998,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2001,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_i_memq(lf[332],((C_word*)t0)[30]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4299,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:250: dribble */
t4=((C_word*)((C_word*)t0)[22])[1];
f_1506(t4,t3,lf[337],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2001(2,t3,C_SCHEME_UNDEFINED);}}

/* k4297 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4299,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4302,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:251: case-sensitive */
t3=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* k4300 in k4297 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4302,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4305,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:252: keyword-style */
t3=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[335]);}

/* k4303 in k4300 in k4297 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4308,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:253: parentheses-synonyms */
t3=*((C_word*)lf[334]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* k4306 in k4303 in k4300 in k4297 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:254: symbol-escape */
t2=*((C_word*)lf[333]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2001(C_word c,C_word t0,C_word t1){
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
C_word ab[45],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2001,2,t0,t1);}
t2=C_mutate((C_word*)lf[63]+1 /* (set! ##compiler#verbose-mode ...) */,((C_word*)t0)[34]);
t3=C_set_block_item(lf[64] /* read-error-with-line-number */,0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2007,a[2]=((C_word*)t0)[34],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[16]+1);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4252,a[2]=t9,a[3]=t6,a[4]=t8,a[5]=((C_word*)t0)[2],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:258: collect-options */
t11=((C_word*)((C_word*)t0)[16])[1];
f_1717(t11,t10,lf[331]);}

/* k4250 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4252,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[17]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4258,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4260,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4260(t7,t3,t1);}

/* map-loop371 in k4250 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_4260(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4260,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4289,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g377386 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4287 in map-loop371 in k4250 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4289(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4289,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4260(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4260(t6,((C_word*)t0)[3],t5);}}

/* k4256 in k4250 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:258: append */
t2=*((C_word*)lf[227]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],t1,*((C_word*)lf[65]+1),((C_word*)t0)[2]);}

/* k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2007,2,t0,t1);}
t2=C_mutate((C_word*)lf[65]+1 /* (set! ##sys#include-pathnames ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2010,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep(((C_word*)t0)[21])){
if(C_truep(((C_word*)t0)[28])){
if(C_truep(C_i_string_equal_p(((C_word*)t0)[21],((C_word*)t0)[28]))){
/* batch-driver.scm:262: quit */
t4=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[330]);}
else{
t4=t3;
f_2010(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2010(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2010(2,t4,C_SCHEME_UNDEFINED);}}

/* k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2010,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[66]+1);
t7=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2014,a[2]=t6,a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[11],a[15]=((C_word*)t0)[12],a[16]=((C_word*)t0)[13],a[17]=((C_word*)t0)[14],a[18]=((C_word*)t0)[15],a[19]=((C_word*)t0)[16],a[20]=((C_word*)t0)[17],a[21]=((C_word*)t0)[18],a[22]=((C_word*)t0)[19],a[23]=((C_word*)t0)[20],a[24]=((C_word*)t0)[21],a[25]=((C_word*)t0)[22],a[26]=((C_word*)t0)[23],a[27]=((C_word*)t0)[24],a[28]=((C_word*)t0)[25],a[29]=((C_word*)t0)[26],a[30]=((C_word*)t0)[27],a[31]=((C_word*)t0)[28],a[32]=((C_word*)t0)[29],a[33]=((C_word*)t0)[30],a[34]=((C_word*)t0)[31],a[35]=((C_word*)t0)[32],a[36]=((C_word*)t0)[33],tmp=(C_word)a,a+=37,tmp);
/* batch-driver.scm:263: collect-options */
t8=((C_word*)((C_word*)t0)[16])[1];
f_1717(t8,t7,lf[242]);}

/* k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2014,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[17]);
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2020,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],a[25]=((C_word*)t0)[28],a[26]=((C_word*)t0)[29],a[27]=((C_word*)t0)[30],a[28]=((C_word*)t0)[31],a[29]=((C_word*)t0)[32],a[30]=((C_word*)t0)[33],a[31]=((C_word*)t0)[34],a[32]=((C_word*)t0)[35],a[33]=((C_word*)t0)[36],tmp=(C_word)a,a+=34,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4203(t7,t3,t1);}

/* map-loop399 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_4203(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4203,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4232,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g405414 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4230 in map-loop399 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4232(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4232,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4203(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4203(t6,((C_word*)t0)[3],t5);}}

/* k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2020,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[33])+1,t1);
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[33],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],a[32]=((C_word*)t0)[31],a[33]=((C_word*)t0)[32],tmp=(C_word)a,a+=34,tmp);
if(C_truep(C_i_memq(lf[328],((C_word*)t0)[30]))){
t4=C_set_block_item(lf[329] /* undefine-shadowed-macros */,0,C_SCHEME_FALSE);
t5=t3;
f_2023(t5,t4);}
else{
t4=t3;
f_2023(t4,C_SCHEME_UNDEFINED);}}

/* k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2023(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2023,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2026,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep(C_i_memq(lf[326],((C_word*)t0)[31]))){
t3=C_set_block_item(lf[327] /* no-argc-checks */,0,C_SCHEME_TRUE);
t4=t2;
f_2026(t4,t3);}
else{
t3=t2;
f_2026(t3,C_SCHEME_UNDEFINED);}}

/* k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2026(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2026,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep(C_i_memq(lf[324],((C_word*)t0)[31]))){
t3=C_set_block_item(lf[325] /* no-bound-checks */,0,C_SCHEME_TRUE);
t4=t2;
f_2029(t4,t3);}
else{
t3=t2;
f_2029(t3,C_SCHEME_UNDEFINED);}}

/* k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2029(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2029,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep(C_i_memq(lf[322],((C_word*)t0)[31]))){
t3=C_set_block_item(lf[323] /* no-procedure-checks */,0,C_SCHEME_TRUE);
t4=t2;
f_2032(t4,t3);}
else{
t3=t2;
f_2032(t3,C_SCHEME_UNDEFINED);}}

/* k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2032(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2032,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2035,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep(C_i_memq(lf[320],((C_word*)t0)[31]))){
t3=C_set_block_item(lf[321] /* no-global-procedure-checks */,0,C_SCHEME_TRUE);
t4=t2;
f_2035(t4,t3);}
else{
t3=t2;
f_2035(t3,C_SCHEME_UNDEFINED);}}

/* k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2035(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2035,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep(C_i_memq(lf[316],((C_word*)t0)[31]))){
t3=*((C_word*)lf[289]+1);
t4=C_i_check_list_2(t3,lf[46]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4067,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4160,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_4160(t9,t5,t3);}
else{
t3=t2;
f_2038(2,t3,C_SCHEME_UNDEFINED);}}

/* for-each-loop425 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_4160(C_word t0,C_word t1,C_word t2){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4160,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4170,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4031,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4006,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t6))){
/* tweaks.scm:50: ##sys#put! */
t8=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t5,t4,lf[319],C_SCHEME_TRUE);}
else{
t8=C_i_cdr(t6);
if(C_truep(C_i_nullp(t8))){
t9=C_i_car(t6);
/* tweaks.scm:50: ##sys#put! */
t10=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t5,t4,lf[319],t9);}
else{
/* ##sys#error */
t9=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,lf[0],t6);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4004 in for-each-loop425 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tweaks.scm:50: ##sys#put! */
t2=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[319],t1);}

/* k4029 in for-each-loop425 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4031,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* tweaks.scm:50: ##sys#put! */
t4=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[318],C_SCHEME_TRUE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
/* tweaks.scm:50: ##sys#put! */
t6=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,((C_word*)t0)[3],((C_word*)t0)[2],lf[318],t5);}
else{
/* ##sys#error */
t5=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k4034 in k4029 in for-each-loop425 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tweaks.scm:50: ##sys#put! */
t2=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[318],t1);}

/* k4168 in for-each-loop425 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4160(t3,((C_word*)t0)[2],t2);}

/* k4065 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4067,2,t0,t1);}
t2=*((C_word*)lf[291]+1);
t3=C_i_check_list_2(t2,lf[46]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4137,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4137(t7,((C_word*)t0)[2],t2);}

/* for-each-loop475 in k4065 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_4137(C_word t0,C_word t1,C_word t2){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4137,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4147,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4099,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4074,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t6))){
/* tweaks.scm:50: ##sys#put! */
t8=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t5,t4,lf[319],C_SCHEME_TRUE);}
else{
t8=C_i_cdr(t6);
if(C_truep(C_i_nullp(t8))){
t9=C_i_car(t6);
/* tweaks.scm:50: ##sys#put! */
t10=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t5,t4,lf[319],t9);}
else{
/* ##sys#error */
t9=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,lf[0],t6);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4072 in for-each-loop475 in k4065 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tweaks.scm:50: ##sys#put! */
t2=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[319],t1);}

/* k4097 in for-each-loop475 in k4065 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4099,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* tweaks.scm:50: ##sys#put! */
t4=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[318],C_SCHEME_TRUE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
/* tweaks.scm:50: ##sys#put! */
t6=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,((C_word*)t0)[3],((C_word*)t0)[2],lf[318],t5);}
else{
/* ##sys#error */
t5=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k4102 in k4097 in for-each-loop475 in k4065 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tweaks.scm:50: ##sys#put! */
t2=*((C_word*)lf[317]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[318],t1);}

/* k4145 in for-each-loop475 in k4065 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_4147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4137(t3,((C_word*)t0)[2],t2);}

/* k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2038,2,t0,t1);}
t2=*((C_word*)lf[67]+1);
t3=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2041,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],a[32]=((C_word*)t0)[31],a[33]=((C_word*)t0)[32],a[34]=((C_word*)t0)[33],tmp=(C_word)a,a+=35,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3988,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3996,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:289: collect-options */
t6=((C_word*)((C_word*)t0)[17])[1];
f_1717(t6,t5,lf[315]);}

/* k3994 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:289: append-map */
t2=*((C_word*)lf[312]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a3987 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3988(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3988,3,t0,t1,t2);}
t3=*((C_word*)lf[310]+1);
/* g541542 */
t4=t3;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,lf[314]);}

/* k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2041,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[46]);
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2047,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],tmp=(C_word)a,a+=34,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3965,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3965(t7,t3,t1);}

/* for-each-loop526 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3965(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3965,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3975,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g527533 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3973 in for-each-loop526 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3965(t3,((C_word*)t0)[2],t2);}

/* k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2047,2,t0,t1);}
t2=*((C_word*)lf[68]+1);
t3=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2050,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],a[32]=((C_word*)t0)[31],a[33]=((C_word*)t0)[32],a[34]=((C_word*)t0)[33],tmp=(C_word)a,a+=35,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3955,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3963,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:292: collect-options */
t6=((C_word*)((C_word*)t0)[17])[1];
f_1717(t6,t5,lf[313]);}

/* k3961 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:292: append-map */
t2=*((C_word*)lf[312]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a3954 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3955(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3955,3,t0,t1,t2);}
t3=*((C_word*)lf[310]+1);
/* g565566 */
t4=t3;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,lf[311]);}

/* k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2050,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[46]);
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2056,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],tmp=(C_word)a,a+=34,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3932,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3932(t7,t3,t1);}

/* for-each-loop550 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3932(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3932,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3942,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g551557 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3940 in for-each-loop550 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3932(t3,((C_word*)t0)[2],t2);}

/* k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2056,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[69],*((C_word*)lf[70]+1));
t3=C_mutate((C_word*)lf[70]+1 /* (set! ##sys#features ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2063,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
/* batch-driver.scm:296: collect-options */
t5=((C_word*)((C_word*)t0)[17])[1];
f_1717(t5,t4,lf[309]);}

/* k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2063,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2066,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=t1,tmp=(C_word)a,a+=35,tmp);
/* batch-driver.scm:297: dribble */
t3=((C_word*)((C_word*)t0)[23])[1];
f_1506(t3,t2,lf[308],C_SCHEME_END_OF_LIST);}

/* k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2066,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2069,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],tmp=(C_word)a,a+=34,tmp);
if(C_truep(((C_word*)t0)[2])){
/* batch-driver.scm:298: load-verbose */
t3=*((C_word*)lf[307]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_TRUE);}
else{
t3=t2;
f_2069(2,t3,C_SCHEME_UNDEFINED);}}

/* k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2069,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[33],lf[46]);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2084,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3906,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3906(t7,t3,((C_word*)t0)[33]);}

/* for-each-loop575 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3906(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3906,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3916,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2078,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:300: ##sys#resolve-include-filename */
t6=*((C_word*)lf[188]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,t4,C_SCHEME_FALSE,C_SCHEME_TRUE);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2076 in for-each-loop575 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:300: load */
t2=*((C_word*)lf[306]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3914 in for-each-loop575 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3906(t3,((C_word*)t0)[2],t2);}

/* k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2084,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
/* batch-driver.scm:302: delete */
t3=*((C_word*)lf[304]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[69],*((C_word*)lf[70]+1),*((C_word*)lf[305]+1));}

/* k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2088,2,t0,t1);}
t2=C_mutate((C_word*)lf[70]+1 /* (set! ##sys#features ...) */,t1);
t3=C_a_i_cons(&a,2,lf[71],*((C_word*)lf[70]+1));
t4=C_mutate((C_word*)lf[70]+1 /* (set! ##sys#features ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2096,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
/* batch-driver.scm:304: user-post-analysis-pass */
t6=*((C_word*)lf[6]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2096,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[32])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
/* batch-driver.scm:307: append */
t4=*((C_word*)lf[227]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[31])[1],*((C_word*)lf[303]+1));}

/* k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2100,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[31])+1,t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[66]+1);
t8=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2103,a[2]=t7,a[3]=t4,a[4]=t6,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[11],a[15]=((C_word*)t0)[12],a[16]=((C_word*)t0)[13],a[17]=((C_word*)t0)[14],a[18]=((C_word*)t0)[15],a[19]=((C_word*)t0)[16],a[20]=((C_word*)t0)[17],a[21]=((C_word*)t0)[18],a[22]=((C_word*)t0)[19],a[23]=((C_word*)t0)[20],a[24]=((C_word*)t0)[21],a[25]=((C_word*)t0)[22],a[26]=((C_word*)t0)[23],a[27]=((C_word*)t0)[24],a[28]=((C_word*)t0)[25],a[29]=((C_word*)t0)[26],a[30]=((C_word*)t0)[27],a[31]=((C_word*)t0)[28],a[32]=((C_word*)t0)[29],a[33]=((C_word*)t0)[30],a[34]=((C_word*)t0)[31],tmp=(C_word)a,a+=35,tmp);
/* batch-driver.scm:309: collect-options */
t9=((C_word*)((C_word*)t0)[16])[1];
f_1717(t9,t8,lf[302]);}

/* k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2103,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[17]);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2109,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],a[25]=((C_word*)t0)[28],a[26]=((C_word*)t0)[29],a[27]=((C_word*)t0)[30],a[28]=((C_word*)t0)[31],a[29]=((C_word*)t0)[32],a[30]=((C_word*)t0)[33],a[31]=((C_word*)t0)[34],tmp=(C_word)a,a+=32,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3871,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3871(t7,t3,t1);}

/* map-loop595 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3871(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3871,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3900,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g601610 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3898 in map-loop595 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3900(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3900,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3871(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3871(t6,((C_word*)t0)[3],t5);}}

/* k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2109(C_word c,C_word t0,C_word t1){
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
C_word ab[54],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2109,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2113,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],a[32]=((C_word*)t0)[31],tmp=(C_word)a,a+=33,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3783,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[31],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=*((C_word*)lf[66]+1);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3828,a[2]=t12,a[3]=t9,a[4]=t11,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:315: collect-options */
t14=((C_word*)((C_word*)t0)[16])[1];
f_1717(t14,t13,lf[301]);}

/* k3826 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3828,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[17]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3834,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3836,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3836(t7,t3,t1);}

/* map-loop644 in k3826 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3836(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3836,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3865,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g650659 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3863 in map-loop644 in k3826 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3865(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3865,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3836(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3836(t6,((C_word*)t0)[3],t5);}}

/* k3832 in k3826 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:315: append */
t2=*((C_word*)lf[227]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3781 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3783,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[17]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3789,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3791,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3791(t7,t3,t1);}

/* map-loop621 in k3781 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3791(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(15);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3791,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_list(&a,3,lf[300],t4,C_SCHEME_TRUE);
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

/* k3787 in k3781 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:312: append */
t2=*((C_word*)lf[227]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2113,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[32])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2117,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[32],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
/* batch-driver.scm:319: append */
t4=*((C_word*)lf[227]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[72]+1),((C_word*)t0)[2]);}

/* k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2117,2,t0,t1);}
t2=C_mutate((C_word*)lf[72]+1 /* (set! ##sys#explicit-library-modules ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2120,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
if(C_truep(C_i_memq(lf[298],((C_word*)t0)[31]))){
t4=C_set_block_item(lf[299] /* enable-runtime-macros */,0,C_SCHEME_TRUE);
t5=t3;
f_2120(t5,t4);}
else{
t4=t3;
f_2120(t4,C_SCHEME_UNDEFINED);}}

/* k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2120(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2120,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_2124,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],tmp=(C_word)a,a+=31,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3753,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:325: option-arg */
f_1392(t3,((C_word*)t0)[2]);}
else{
t3=*((C_word*)lf[297]+1);
if(C_truep(t3)){
t4=C_i_zerop(t3);
t5=t2;
f_2124(2,t5,(C_truep(t4)?C_SCHEME_FALSE:t3));}
else{
t4=t2;
f_2124(2,t4,C_SCHEME_FALSE);}}}

/* k3751 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:325: arg-val */
f_1637(((C_word*)t0)[2],t1);}

/* k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2124,2,t0,t1);}
t2=C_mutate((C_word*)lf[73]+1 /* (set! ##compiler#target-heap-size ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|29,a[1]=(C_word)f_2128,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],tmp=(C_word)a,a+=30,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3746,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:329: option-arg */
f_1392(t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_2128(2,t4,C_SCHEME_FALSE);}}

/* k3744 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:329: arg-val */
f_1637(((C_word*)t0)[2],t1);}

/* k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2128,2,t0,t1);}
t2=C_mutate((C_word*)lf[74]+1 /* (set! ##compiler#target-initial-heap-size ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|28,a[1]=(C_word)f_2132,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],tmp=(C_word)a,a+=29,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3739,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:330: option-arg */
f_1392(t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_2132(2,t4,C_SCHEME_FALSE);}}

/* k3737 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:330: arg-val */
f_1637(((C_word*)t0)[2],t1);}

/* k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2132,2,t0,t1);}
t2=C_mutate((C_word*)lf[75]+1 /* (set! ##compiler#target-heap-growth ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_2136,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],tmp=(C_word)a,a+=28,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3732,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:331: option-arg */
f_1392(t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_2136(2,t4,C_SCHEME_FALSE);}}

/* k3730 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:331: arg-val */
f_1637(((C_word*)t0)[2],t1);}

/* k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2136,2,t0,t1);}
t2=C_mutate((C_word*)lf[76]+1 /* (set! ##compiler#target-heap-shrinkage ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_2140,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],tmp=(C_word)a,a+=25,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3712,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:334: option-arg */
f_1392(t4,((C_word*)t0)[4]);}
else{
t4=*((C_word*)lf[296]+1);
if(C_truep(t4)){
t5=C_i_zerop(t4);
t6=t3;
f_2140(2,t6,(C_truep(t5)?C_SCHEME_FALSE:t4));}
else{
t5=t3;
f_2140(2,t5,C_SCHEME_FALSE);}}}

/* k3710 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:334: arg-val */
f_1637(((C_word*)t0)[2],t1);}

/* k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2140,2,t0,t1);}
t2=C_mutate((C_word*)lf[77]+1 /* (set! ##compiler#target-stack-size ...) */,t1);
t3=C_i_memq(lf[78],((C_word*)t0)[24]);
t4=C_i_not(t3);
t5=C_mutate((C_word*)lf[79]+1 /* (set! ##compiler#emit-trace-info ...) */,t4);
t6=C_i_memq(lf[80],((C_word*)t0)[24]);
t7=C_mutate((C_word*)lf[81]+1 /* (set! ##compiler#disable-stack-overflow-checking ...) */,t6);
t8=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_2152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
/* batch-driver.scm:340: feature? */
t9=*((C_word*)lf[294]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[295]);}

/* k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2152,2,t0,t1);}
t2=C_mutate((C_word*)lf[82]+1 /* (set! ##compiler#bootstrap-mode ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_2155,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
if(C_truep(C_i_memq(lf[292],*((C_word*)lf[37]+1)))){
/* batch-driver.scm:341: set-gc-report! */
t4=*((C_word*)lf[293]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}
else{
t4=t3;
f_2155(2,t4,C_SCHEME_UNDEFINED);}}

/* k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2155,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_2158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
if(C_truep(C_i_memq(lf[287],((C_word*)t0)[24]))){
t3=t2;
f_2158(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_mutate((C_word*)lf[288]+1 /* (set! standard-bindings ...) */,*((C_word*)lf[289]+1));
t4=C_mutate((C_word*)lf[290]+1 /* (set! extended-bindings ...) */,*((C_word*)lf[291]+1));
t5=t2;
f_2158(t5,t4);}}

/* k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2158(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2158,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_2161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
if(C_truep(*((C_word*)lf[79]+1))){
/* batch-driver.scm:345: dribble */
t3=((C_word*)((C_word*)t0)[16])[1];
f_1506(t3,t2,lf[284],C_a_i_list(&a,1,lf[285]));}
else{
/* batch-driver.scm:345: dribble */
t3=((C_word*)((C_word*)t0)[16])[1];
f_1506(t3,t2,lf[284],C_a_i_list(&a,1,lf[286]));}}

/* k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2161,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2164,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],tmp=(C_word)a,a+=24,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_i_car(((C_word*)t0)[2]);
t4=C_eqp(lf[275],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3656,a[2]=t2,a[3]=((C_word*)t0)[16],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
if(C_truep(((C_word*)t0)[7])){
t6=t5;
f_3656(2,t6,C_SCHEME_UNDEFINED);}
else{
/* batch-driver.scm:352: quit */
t6=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[283]);}}
else{
t6=t5;
f_3656(2,t6,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_2164(2,t3,C_SCHEME_UNDEFINED);}}

/* k3654 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3656,2,t0,t1);}
t2=C_set_block_item(lf[232] /* emit-profile */,0,C_SCHEME_TRUE);
t3=C_mutate((C_word*)lf[276]+1 /* (set! ##compiler#profiled-procedures ...) */,lf[277]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
/* batch-driver.scm:357: append */
t5=*((C_word*)lf[227]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)((C_word*)t0)[5])[1],*((C_word*)lf[281]+1),lf[282]);}
else{
/* batch-driver.scm:357: append */
t5=*((C_word*)lf[227]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)((C_word*)t0)[5])[1],*((C_word*)lf[281]+1),C_SCHEME_END_OF_LIST);}}

/* k3660 in k3654 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3662,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
if(C_truep(((C_word*)t0)[4])){
/* batch-driver.scm:363: dribble */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1506(t3,((C_word*)t0)[2],lf[278],C_a_i_list(&a,1,lf[279]));}
else{
/* batch-driver.scm:363: dribble */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1506(t3,((C_word*)t0)[2],lf[278],C_a_i_list(&a,1,lf[280]));}}

/* k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2164,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2167,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:366: load-identifier-database */
t3=*((C_word*)lf[273]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[274]);}

/* k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2167,2,t0,t1);}
if(C_truep(C_i_memq(lf[83],((C_word*)t0)[23]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2176,a[2]=((C_word*)t0)[22],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:369: print-version */
t3=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_TRUE);}
else{
t2=C_i_memq(lf[85],((C_word*)t0)[23]);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
if(C_truep(t2)){
t4=t3;
f_2188(t4,t2);}
else{
t4=C_i_memq(lf[270],((C_word*)t0)[23]);
if(C_truep(t4)){
t5=t3;
f_2188(t5,t4);}
else{
t5=C_i_memq(lf[271],((C_word*)t0)[23]);
t6=t3;
f_2188(t6,(C_truep(t5)?t5:C_i_memq(lf[272],((C_word*)t0)[23])));}}}}

/* k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2188(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2188,NULL,2,t0,t1);}
if(C_truep(t1)){
/* batch-driver.scm:372: print-usage */
t2=*((C_word*)lf[86]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[23]);}
else{
if(C_truep(C_i_memq(lf[87],((C_word*)t0)[22]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2200,a[2]=((C_word*)t0)[23],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2207,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:374: chicken-version */
t4=*((C_word*)lf[88]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=((C_word*)t0)[21];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2228,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[22],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[23],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],a[17]=((C_word*)t0)[15],a[18]=((C_word*)t0)[16],a[19]=((C_word*)t0)[17],a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],a[22]=((C_word*)t0)[20],a[23]=((C_word*)t0)[21],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:384: dribble */
t4=((C_word*)((C_word*)t0)[15])[1];
f_1506(t4,t3,lf[266],C_a_i_list(&a,1,((C_word*)t0)[21]));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2216,a[2]=((C_word*)t0)[23],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:377: print-version */
t4=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}}}}

/* k2214 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2216,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2219,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:378: display */
t3=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[269]);}

/* k2217 in k2214 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2219,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2222,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:379: display */
t3=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[268]);}

/* k2220 in k2217 in k2214 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:380: display */
t2=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[267]);}

/* k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2228,2,t0,t1);}
t2=C_mutate((C_word*)lf[89]+1 /* (set! ##compiler#source-filename ...) */,((C_word*)t0)[23]);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2232,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[23],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:386: debugging */
t4=*((C_word*)lf[107]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[261],lf[265],((C_word*)t0)[9]);}

/* k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2232,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2235,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:387: debugging */
t3=*((C_word*)lf[107]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[261],lf[264],*((C_word*)lf[37]+1));}

/* k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2235,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2238,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:388: debugging */
t3=*((C_word*)lf[107]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[261],lf[263],*((C_word*)lf[73]+1));}

/* k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2238,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:389: debugging */
t3=*((C_word*)lf[107]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[261],lf[262],*((C_word*)lf[77]+1));}

/* k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2241,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:100: current-milliseconds */
t3=*((C_word*)lf[50]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2245,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[23])+1,t1);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[23],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:393: make-vector */
t4=*((C_word*)lf[259]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[260]+1),C_SCHEME_END_OF_LIST);}

/* k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2249,2,t0,t1);}
t2=C_mutate((C_word*)lf[90]+1 /* (set! ##sys#line-number-database ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2252,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:394: collect-options */
t4=((C_word*)((C_word*)t0)[10])[1];
f_1717(t4,t3,lf[258]);}

/* k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2252,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_2255,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],tmp=(C_word)a,a+=25,tmp);
/* batch-driver.scm:395: collect-options */
t3=((C_word*)((C_word*)t0)[10])[1];
f_1717(t3,t2,lf[257]);}

/* k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2255,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2258,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],tmp=(C_word)a,a+=26,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3627,a[2]=((C_word*)t0)[11],a[3]=t2,a[4]=((C_word*)t0)[18],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:397: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_1717(t4,t3,lf[256]);}

/* k3625 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3627,2,t0,t1);}
t2=C_a_i_list1(&a,1,((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3635,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:399: collect-options */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1717(t4,t3,lf[255]);}

/* k3633 in k3625 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:396: append */
t2=*((C_word*)lf[227]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2258,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2261,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:401: user-read-pass */
t3=*((C_word*)lf[3]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2261,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2264,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],tmp=(C_word)a,a+=24,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3461,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:403: dribble */
t4=((C_word*)((C_word*)t0)[22])[1];
f_1506(t4,t3,lf[247],C_SCHEME_END_OF_LIST);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3470,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3470(t6,t2,((C_word*)t0)[3]);}}

/* doloop713 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3470(C_word t0,C_word t1,C_word t2){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3470,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3481,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=*((C_word*)lf[248]+1);
t9=C_i_check_list_2(((C_word*)t0)[4],lf[17]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3488,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3536,a[2]=t8,a[3]=t5,a[4]=t12,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_3536(t14,t10,((C_word*)t0)[4]);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3575,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:413: check-and-open-input-file */
t5=*((C_word*)lf[254]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}}

/* k3573 in doloop713 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3575,2,t0,t1);}
t2=((C_word*)t0)[6];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3578,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3587,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3620,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#dynamic-wind */
t10=*((C_word*)lf[253]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t6,t7,t8,t9);}

/* a3619 in k3573 in doloop713 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3620,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[250]+1));
t3=C_mutate((C_word*)lf[250]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a3591 in k3573 in doloop713 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3592,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3598,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3598(t5,t1);}

/* loop in a3591 in k3573 in doloop713 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3598(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3598,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:416: read/source-info */
t3=*((C_word*)lf[252]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k3600 in loop in a3591 in k3573 in doloop713 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3602,2,t0,t1);}
if(C_truep(C_eofp(t1))){
/* batch-driver.scm:418: close-checked-input-file */
t2=*((C_word*)lf[251]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
/* batch-driver.scm:421: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3598(t4,((C_word*)t0)[6]);}}

/* a3586 in k3573 in doloop713 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3587,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[250]+1));
t3=C_mutate((C_word*)lf[250]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k3576 in k3573 in doloop713 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_3470(t3,((C_word*)t0)[2],t2);}

/* map-loop718 in doloop713 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3536(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3536,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3565,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g724733 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3563 in map-loop718 in doloop713 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3565(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3565,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3536(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3536(t6,((C_word*)t0)[3],t5);}}

/* k3486 in doloop713 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3492,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:410: reverse */
t3=*((C_word*)lf[249]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k3490 in k3486 in doloop713 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3492(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3492,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[248]+1);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[17]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3499,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3501,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_3501(t12,t8,((C_word*)t0)[4]);}

/* map-loop744 in k3490 in k3486 in doloop713 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3501(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3501,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3530,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g750759 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3528 in map-loop744 in k3490 in k3486 in doloop713 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3530(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3530,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3501(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3501(t6,((C_word*)t0)[3],t5);}}

/* k3497 in k3490 in k3486 in doloop713 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:409: append */
t2=*((C_word*)lf[227]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3479 in doloop713 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3459 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3461,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3465,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:404: proc */
t3=((C_word*)t0)[5];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3463 in k3459 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2264(2,t3,t2);}

/* k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:424: user-preprocessor-pass */
t3=*((C_word*)lf[4]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2267,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3416,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:426: dribble */
t4=((C_word*)((C_word*)t0)[19])[1];
f_1506(t4,t3,lf[246],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2270(t3,C_SCHEME_UNDEFINED);}}

/* k3414 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3416(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3416,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)((C_word*)t0)[4])[1];
t7=C_i_check_list_2(t6,lf[17]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3423,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3425,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t10,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_3425(t12,t8,t6);}

/* map-loop792 in k3414 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3425(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3425,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3454,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g798807 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3452 in map-loop792 in k3414 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3454(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3454,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3425(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3425(t6,((C_word*)t0)[3],t5);}}

/* k3421 in k3414 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2270(t3,t2);}

/* k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2270(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2270,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:429: print-expr */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1591(t3,t2,lf[244],lf[245],((C_word*)((C_word*)t0)[3])[1]);}

/* k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:430: begin-time */
t3=((C_word*)((C_word*)t0)[22])[1];
f_1752(t3,t2);}

/* k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2276,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2279,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],tmp=(C_word)a,a+=23,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t3=t2;
f_2279(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3401,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:433: append */
t4=*((C_word*)lf[227]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[72]+1),((C_word*)((C_word*)t0)[2])[1]);}}

/* k3399 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3401,2,t0,t1);}
t2=C_mutate((C_word*)lf[72]+1 /* (set! ##sys#explicit-library-modules ...) */,t1);
t3=C_a_i_cons(&a,2,lf[242],((C_word*)((C_word*)t0)[4])[1]);
t4=C_a_i_list(&a,2,lf[243],t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)((C_word*)t0)[3])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
t7=((C_word*)t0)[2];
f_2279(t7,t6);}

/* k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2279(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2279,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[91]+1);
t7=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2282,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=t3,a[5]=t5,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:436: append */
t8=*((C_word*)lf[227]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[47],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2282,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2285,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],tmp=(C_word)a,a+=23,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_a_i_list(&a,3,lf[237],lf[238],lf[239]);
t4=C_a_i_cons(&a,2,t3,t1);
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t4);
t6=C_a_i_cons(&a,2,lf[240],t5);
t7=C_a_i_cons(&a,2,lf[241],t6);
t8=t2;
f_2285(t8,C_a_i_list(&a,1,t7));}
else{
t3=t2;
f_2285(t3,t1);}}

/* k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2285(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2285,NULL,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[17]);
t3=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2291,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],tmp=(C_word)a,a+=20,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3338,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3338(t7,t3,t1);}

/* map-loop824 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3338(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3338,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3367,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g830839 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3365 in map-loop824 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3367(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3367,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3338(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3338(t6,((C_word*)t0)[3],t5);}}

/* k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],tmp=(C_word)a,a+=21,tmp);
/* batch-driver.scm:442: gensym */
t3=*((C_word*)lf[236]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2294(C_word c,C_word t0,C_word t1){
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
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2294,2,t0,t1);}
t2=C_i_length(*((C_word*)lf[92]+1));
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2300,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],tmp=(C_word)a,a+=18,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=*((C_word*)lf[225]+1);
t9=C_i_check_list_2(t8,lf[17]);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3145,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[4],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3303,a[2]=t5,a[3]=t12,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_3303(t14,t10,t8);}

/* map-loop857 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3303(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(18);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3303,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
t5=C_i_car(t3);
t6=C_a_i_list(&a,2,lf[229],t5);
t7=C_a_i_list(&a,3,lf[234],t4,t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t9=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t8);
t10=C_mutate(((C_word *)((C_word*)t0)[4])+1,t8);
t11=C_slot(t2,C_fix(1));
t17=t1;
t18=t11;
t1=t17;
t2=t18;
goto loop;}
else{
t9=C_mutate(((C_word *)((C_word*)t0)[2])+1,t8);
t10=C_mutate(((C_word *)((C_word*)t0)[4])+1,t8);
t11=C_slot(t2,C_fix(1));
t17=t1;
t18=t11;
t1=t17;
t2=t18;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3143 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3145(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3145,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[226]+1);
t7=C_i_check_list_2(t6,lf[17]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3268,a[2]=t3,a[3]=t10,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3268(t12,t8,t6);}

/* map-loop887 in k3143 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3268(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3268,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[235],t3);
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

/* k3155 in k3143 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3157(C_word c,C_word t0,C_word t1){
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
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3157,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3161,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(*((C_word*)lf[232]+1))){
t3=C_a_i_list(&a,2,lf[229],((C_word*)t0)[3]);
t4=*((C_word*)lf[208]+1);
if(C_truep(t4)){
t5=C_a_i_list(&a,2,lf[229],C_SCHEME_FALSE);
t6=C_a_i_list(&a,3,lf[233],t3,t5);
t7=C_a_i_list(&a,3,lf[234],*((C_word*)lf[231]+1),t6);
t8=t2;
f_3161(t8,C_a_i_list(&a,1,t7));}
else{
if(C_truep(((C_word*)t0)[2])){
t5=C_a_i_list(&a,2,lf[229],((C_word*)t0)[2]);
t6=C_a_i_list(&a,3,lf[233],t3,t5);
t7=C_a_i_list(&a,3,lf[234],*((C_word*)lf[231]+1),t6);
t8=t2;
f_3161(t8,C_a_i_list(&a,1,t7));}
else{
t5=C_a_i_list(&a,2,lf[229],C_SCHEME_TRUE);
t6=C_a_i_list(&a,3,lf[233],t3,t5);
t7=C_a_i_list(&a,3,lf[234],*((C_word*)lf[231]+1),t6);
t8=t2;
f_3161(t8,C_a_i_list(&a,1,t7));}}}
else{
t3=t2;
f_3161(t3,C_SCHEME_END_OF_LIST);}}

/* k3159 in k3155 in k3143 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3161(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3161,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[92]+1);
t7=C_i_check_list_2(t6,lf[17]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3189,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3204,a[2]=t3,a[3]=t10,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3204(t12,t8,t6);}

/* map-loop924 in k3159 in k3155 in k3143 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3204(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(27);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3204,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_list(&a,2,lf[229],t4);
t6=C_i_cdr(t3);
t7=C_a_i_list(&a,2,lf[229],t6);
t8=C_a_i_list(&a,4,lf[230],*((C_word*)lf[231]+1),t5,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t10=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
t12=C_slot(t2,C_fix(1));
t18=t1;
t19=t12;
t1=t18;
t2=t19;
goto loop;}
else{
t10=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
t12=C_slot(t2,C_fix(1));
t18=t1;
t19=t12;
t1=t18;
t2=t19;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3187 in k3159 in k3155 in k3143 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=*((C_word*)lf[208]+1);
if(C_truep(t2)){
/* batch-driver.scm:444: append */
t3=*((C_word*)lf[227]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,lf[228]);}
else{
if(C_truep(((C_word*)t0)[3])){
/* batch-driver.scm:444: append */
t3=*((C_word*)lf[227]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,lf[228]);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
/* batch-driver.scm:444: append */
t4=*((C_word*)lf[227]+1);
((C_proc9)(void*)(*((C_word*)t4+1)))(9,t4,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1,((C_word*)t0)[4],t3,lf[228]);}}}

/* k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2300,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2303,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],tmp=(C_word)a,a+=19,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3061,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(*((C_word*)lf[220]+1)))){
/* batch-driver.scm:467: debugging */
t6=*((C_word*)lf[107]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,lf[223],lf[224]);}
else{
t6=t5;
f_3061(2,t6,C_SCHEME_FALSE);}}

/* k3059 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3061,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[220]+1);
t3=C_i_check_list_2(t2,lf[46]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3094,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3094(t7,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
f_2303(2,t2,C_SCHEME_UNDEFINED);}}

/* for-each-loop956 in k3059 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_3094(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3094,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3104,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[33]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3066,a[2]=t4,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* display */
t7=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,lf[222],t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3064 in for-each-loop956 in k3059 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3066,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* display */
t4=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[3]);}

/* k3067 in k3064 in for-each-loop956 in k3059 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[221],((C_word*)t0)[3]);}

/* k3070 in k3067 in k3064 in for-each-loop956 in k3059 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3072,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3075,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* display */
t4=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[3]);}

/* k3073 in k3070 in k3067 in k3064 in for-each-loop956 in k3059 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* k3102 in for-each-loop956 in k3059 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3094(t3,((C_word*)t0)[2],t2);}

/* k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2306,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3055,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:471: debugging */
t4=*((C_word*)lf[107]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[218],lf[219]);}

/* k3053 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* batch-driver.scm:472: display-real-name-table */
t2=*((C_word*)lf[217]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
f_2306(2,t2,C_SCHEME_UNDEFINED);}}

/* k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2306,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3049,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:473: debugging */
t4=*((C_word*)lf[107]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[215],lf[216]);}

/* k3047 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* batch-driver.scm:474: display-line-number-database */
t2=*((C_word*)lf[214]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
f_2309(2,t2,C_SCHEME_UNDEFINED);}}

/* k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
t3=(C_truep(*((C_word*)lf[208]+1))?((C_word*)t0)[11]:C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3034,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* open-output-string */
t5=*((C_word*)lf[213]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t2;
f_2312(2,t4,C_SCHEME_UNDEFINED);}}

/* k3032 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3034,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3037,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[212],t1);}

/* k3035 in k3032 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3037,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3040,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[208]+1),((C_word*)t0)[2]);}

/* k3038 in k3035 in k3032 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3040,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3043,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[211],((C_word*)t0)[2]);}

/* k3041 in k3038 in k3035 in k3032 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3043,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3046,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* get-output-string */
t3=*((C_word*)lf[210]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3044 in k3041 in k3038 in k3035 in k3032 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:477: ##sys#notice */
t2=*((C_word*)lf[209]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2312,2,t0,t1);}
t2=C_mutate((C_word*)lf[90]+1 /* (set! ##sys#line-number-database ...) */,*((C_word*)lf[93]+1));
t3=C_set_block_item(lf[93] /* line-number-database-2 */,0,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
/* batch-driver.scm:483: end-time */
t5=((C_word*)((C_word*)t0)[18])[1];
f_1762(t5,t4,lf[207]);}

/* k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2320,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm:484: print-expr */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1591(t3,t2,lf[205],lf[206],((C_word*)((C_word*)t0)[3])[1]);}

/* k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
if(C_truep(C_i_memq(lf[204],((C_word*)t0)[3]))){
/* batch-driver.scm:486: exit */
t3=*((C_word*)lf[127]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=t2;
f_2323(2,t3,C_SCHEME_UNDEFINED);}}

/* k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm:488: user-pass */
t3=*((C_word*)lf[5]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2326,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2970,a[2]=((C_word*)t0)[16],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[17],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:490: dribble */
t4=((C_word*)((C_word*)t0)[13])[1];
f_1506(t4,t3,lf[203],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2329(2,t3,C_SCHEME_UNDEFINED);}}

/* k2968 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2970,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2973,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:491: begin-time */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1752(t3,t2);}

/* k2971 in k2968 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2973(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2973,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)((C_word*)t0)[5])[1];
t7=C_i_check_list_2(t6,lf[17]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2980,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2985,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t10,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2985(t12,t8,t6);}

/* map-loop1002 in k2971 in k2968 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2985(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2985,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3014,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g10081017 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3012 in map-loop1002 in k2971 in k2968 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_3014(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3014,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2985(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2985(t6,((C_word*)t0)[3],t5);}}

/* k2978 in k2971 in k2968 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
/* batch-driver.scm:493: end-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1762(t3,((C_word*)t0)[2],lf[202]);}

/* k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2963,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],tmp=(C_word)a,a+=17,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2967,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:498: canonicalize-begin-body */
t4=*((C_word*)lf[201]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k2965 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:497: build-node-graph */
t2=*((C_word*)lf[200]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2963,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=C_a_i_record4(&a,4,lf[94],lf[95],lf[96],t2);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],a[17]=((C_word*)t0)[15],a[18]=((C_word*)t0)[16],tmp=(C_word)a,a+=19,tmp);
/* batch-driver.scm:501: print-node */
t7=((C_word*)((C_word*)t0)[13])[1];
f_1545(t7,t6,lf[198],lf[199],t3);}

/* k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2340,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
/* batch-driver.scm:502: initialize-analysis-database */
t3=*((C_word*)lf[197]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2343,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2955,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:505: vector->list */
t4=*((C_word*)lf[195]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[196]+1));}

/* k2953 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:505: concatenate */
t2=*((C_word*)lf[194]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2346(C_word c,C_word t0,C_word t1){
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
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2346,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2349,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[193]+1);
t8=C_i_check_list_2(t1,lf[17]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2916,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2918,a[2]=t7,a[3]=t4,a[4]=t11,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_2918(t13,t9,t1);}

/* map-loop1040 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2918(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2918,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2947,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g10461055 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2945 in map-loop1040 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2947(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2947,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2918(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2918(t6,((C_word*)t0)[3],t5);}}

/* k2914 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:506: concatenate */
t2=*((C_word*)lf[194]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2349,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2352,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2906,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:507: debugging */
t4=*((C_word*)lf[107]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[191],lf[192]);}

/* k2904 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* batch-driver.scm:508: pp */
t2=*((C_word*)lf[190]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_2352(2,t2,C_SCHEME_UNDEFINED);}}

/* k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2352,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
if(C_truep(*((C_word*)lf[185]+1))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2847,a[2]=((C_word*)t0)[15],tmp=(C_word)a,a+=3,tmp);
t4=C_i_check_list_2(((C_word*)t0)[5],lf[46]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2882,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2882(t8,t2,((C_word*)t0)[5]);}
else{
t3=t2;
f_2355(2,t3,C_SCHEME_UNDEFINED);}}

/* for-each-loop1066 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2882(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2882,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2892,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g10671073 */
t5=((C_word*)t0)[2];
f_2847(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2890 in for-each-loop1066 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2882(t3,((C_word*)t0)[2],t2);}

/* g1067 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2847(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2847,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2851,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2870,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2874,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:513: symbol->string */
t6=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k2872 in g1067 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:513: make-pathname */
t2=*((C_word*)lf[175]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_SCHEME_FALSE,t1,lf[189]);}

/* k2868 in g1067 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:512: ##sys#resolve-include-filename */
t2=*((C_word*)lf[188]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k2849 in g1067 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2851,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2860,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:515: file-exists? */
t3=*((C_word*)lf[187]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2858 in k2849 in g1067 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2860,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2863,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:516: dribble */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1506(t3,t2,lf[186],C_a_i_list(&a,1,((C_word*)t0)[3]));}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2861 in k2858 in k2849 in g1067 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:517: load-inline-file */
t2=*((C_word*)lf[182]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
/* batch-driver.scm:519: collect-options */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1717(t3,t2,lf[184]);}

/* k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2358,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
if(C_truep(C_i_nullp(t1))){
t3=t2;
f_2361(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=C_set_block_item(lf[181] /* inline-locally */,0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2810,a[2]=((C_word*)t0)[15],tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(t1,lf[46]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2825,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_2825(t9,t2,t1);}}

/* for-each-loop1086 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2825(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2825,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2835,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g10871093 */
t5=((C_word*)t0)[2];
f_2810(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2833 in for-each-loop1086 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2825(t3,((C_word*)t0)[2],t2);}

/* g1087 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2810(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2810,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2814,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:524: dribble */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1506(t4,t3,lf[183],C_a_i_list(&a,1,t2));}

/* k2812 in g1087 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:525: load-inline-file */
t2=*((C_word*)lf[182]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2364,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[16],a[13]=((C_word*)t0)[17],a[14]=((C_word*)t0)[18],a[15]=((C_word*)t0)[19],tmp=(C_word)a,a+=16,tmp);
if(C_truep(*((C_word*)lf[166]+1))){
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2693,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[17],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[18],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[19],a[8]=t2,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_memq(lf[179],((C_word*)t0)[2]))){
t4=t3;
f_2693(2,t4,C_SCHEME_UNDEFINED);}
else{
/* batch-driver.scm:530: load-type-database */
t4=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[180]);}}
else{
t3=t2;
f_2364(t3,C_SCHEME_UNDEFINED);}}

/* k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2693,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2701,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:531: collect-options */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1717(t3,t2,lf[178]);}

/* k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2701,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[46]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2778,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_2778(t7,t3,t1);}

/* for-each-loop1105 in k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2778(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2778,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2788,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[174]+1);
/* g11201121 */
t6=t5;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,C_SCHEME_FALSE);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2786 in for-each-loop1105 in k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2778(t3,((C_word*)t0)[2],t2);}

/* k2705 in k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2707,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[9],lf[46]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2755,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_2755(t7,t3,((C_word*)t0)[9]);}

/* for-each-loop1129 in k2705 in k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2755(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2755,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2765,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2716,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2720,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:534: symbol->string */
t7=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2718 in for-each-loop1129 in k2705 in k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:534: make-pathname */
t2=*((C_word*)lf[175]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_SCHEME_FALSE,t1,lf[176]);}

/* k2714 in for-each-loop1129 in k2705 in k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:534: load-type-database */
t2=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2763 in for-each-loop1129 in k2705 in k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2755(t3,((C_word*)t0)[2],t2);}

/* k2724 in k2705 in k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2726,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2729,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:536: begin-time */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1752(t3,t2);}

/* k2727 in k2724 in k2705 in k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2729,2,t0,t1);}
t2=C_set_block_item(lf[99] /* first-analysis */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2734,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:538: analyze */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1791(t4,t3,lf[173],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k2732 in k2727 in k2724 in k2705 in k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2734,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2737,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:539: print-db */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1567(t4,t3,lf[171],lf[172],((C_word*)((C_word*)t0)[7])[1],C_fix(0));}

/* k2735 in k2732 in k2727 in k2724 in k2705 in k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2737,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:540: end-time */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1762(t3,t2,lf[170]);}

/* k2738 in k2735 in k2732 in k2727 in k2724 in k2705 in k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2743,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:541: begin-time */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1752(t3,t2);}

/* k2741 in k2738 in k2735 in k2732 in k2727 in k2724 in k2705 in k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2743,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:542: debugging */
t3=*((C_word*)lf[107]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[108],lf[169]);}

/* k2744 in k2741 in k2738 in k2735 in k2732 in k2727 in k2724 in k2705 in k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2746,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2749,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:543: scrutinize */
t3=*((C_word*)lf[168]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k2747 in k2744 in k2741 in k2738 in k2735 in k2732 in k2727 in k2724 in k2705 in k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2749,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2752,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:544: end-time */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1762(t3,t2,lf[167]);}

/* k2750 in k2747 in k2744 in k2741 in k2738 in k2735 in k2732 in k2727 in k2724 in k2705 in k2699 in k2691 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[99] /* first-analysis */,0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
f_2364(t3,t2);}

/* k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2364(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2364,NULL,2,t0,t1);}
t2=C_set_block_item(lf[90] /* line-number-database */,0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[97] /* constant-table */,0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[98] /* inline-table */,0,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2370,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
if(C_truep(*((C_word*)lf[133]+1))){
t6=t5;
f_2370(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=C_slot(((C_word*)t0)[2],C_fix(3));
t7=C_i_car(t6);
/* batch-driver.scm:551: scan-toplevel-assignments */
t8=*((C_word*)lf[165]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t5,t7);}}

/* k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2373,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm:553: begin-time */
t3=((C_word*)((C_word*)t0)[14])[1];
f_1752(t3,t2);}

/* k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2376,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* batch-driver.scm:554: perform-cps-conversion */
t3=*((C_word*)lf[164]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2379,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm:555: end-time */
t3=((C_word*)((C_word*)t0)[14])[1];
f_1762(t3,t2,lf[163]);}

/* k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm:556: print-node */
t3=((C_word*)((C_word*)t0)[12])[1];
f_1545(t3,t2,lf[161],lf[162],((C_word*)t0)[2]);}

/* k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2382,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2387,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=t3,tmp=(C_word)a,a+=15,tmp));
t5=((C_word*)t3)[1];
f_2387(t5,((C_word*)t0)[3],C_fix(1),((C_word*)t0)[2],C_SCHEME_TRUE);}

/* loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2387(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2387,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=t2,a[17]=t5,a[18]=t4,tmp=(C_word)a,a+=19,tmp);
/* batch-driver.scm:561: begin-time */
t7=((C_word*)((C_word*)t0)[12])[1];
f_1752(t7,t6);}

/* k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2391,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2394,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
/* batch-driver.scm:562: analyze */
t3=((C_word*)((C_word*)t0)[12])[1];
f_1791(t3,t2,lf[160],((C_word*)((C_word*)t0)[17])[1],C_a_i_list(&a,2,((C_word*)t0)[16],((C_word*)t0)[18]));}

/* k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2394,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2397,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=t1,a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
if(C_truep(*((C_word*)lf[99]+1))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2650,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_memq(lf[158],*((C_word*)lf[37]+1)))){
/* batch-driver.scm:565: dump-undefined-globals */
t4=*((C_word*)lf[159]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}
else{
t4=t3;
f_2650(2,t4,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_2397(2,t3,C_SCHEME_UNDEFINED);}}

/* k2648 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2650,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_memq(lf[156],*((C_word*)lf[37]+1)))){
/* batch-driver.scm:567: dump-defined-globals */
t3=*((C_word*)lf[157]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t3=t2;
f_2653(2,t3,C_SCHEME_UNDEFINED);}}

/* k2651 in k2648 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_memq(lf[154],*((C_word*)lf[37]+1)))){
/* batch-driver.scm:569: dump-global-refs */
t2=*((C_word*)lf[155]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_2397(2,t3,t2);}}

/* k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2397,2,t0,t1);}
t2=C_set_block_item(lf[99] /* first-analysis */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2401,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
/* batch-driver.scm:571: end-time */
t4=((C_word*)((C_word*)t0)[14])[1];
f_1762(t4,t3,lf[153]);}

/* k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
/* batch-driver.scm:572: print-db */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1567(t3,t2,lf[151],lf[152],((C_word*)t0)[17],((C_word*)t0)[16]);}

/* k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2407,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
if(C_truep(C_i_memq(lf[149],*((C_word*)lf[37]+1)))){
/* batch-driver.scm:574: print-program-statistics */
t3=*((C_word*)lf[150]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[17]);}
else{
t3=t2;
f_2407(2,t3,C_SCHEME_UNDEFINED);}}

/* k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2407,2,t0,t1);}
if(C_truep(((C_word*)t0)[19])){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2413,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[15],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[17],a[10]=((C_word*)t0)[18],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:577: debugging */
t3=*((C_word*)lf[107]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[108],lf[113],((C_word*)t0)[16]);}
else{
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2499,a[2]=((C_word*)t0)[16],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[9],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm:599: print-node */
t3=((C_word*)((C_word*)t0)[11])[1];
f_1545(t3,t2,lf[147],lf[148],((C_word*)((C_word*)t0)[18])[1]);}}

/* k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2499,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2502,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t3=(C_truep(*((C_word*)lf[143]+1))?*((C_word*)lf[144]+1):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=*((C_word*)lf[143]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2638,a[2]=((C_word*)t0)[15],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:604: dribble */
t6=((C_word*)((C_word*)t0)[14])[1];
f_1506(t6,t5,lf[146],C_a_i_list(&a,1,t4));}
else{
t4=t2;
f_2502(2,t4,C_SCHEME_UNDEFINED);}}

/* k2636 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:605: emit-global-inline-file */
t2=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2502,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2505,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm:606: begin-time */
t3=((C_word*)((C_word*)t0)[9])[1];
f_1752(t3,t2);}

/* k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm:607: perform-closure-conversion */
t3=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[16])[1],((C_word*)t0)[15]);}

/* k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2509,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[16])+1,t1);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm:608: end-time */
t4=((C_word*)((C_word*)t0)[13])[1];
f_1762(t4,t3,lf[141]);}

/* k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2512,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2515,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],tmp=(C_word)a,a+=15,tmp);
/* batch-driver.scm:609: print-db */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1567(t3,t2,lf[139],lf[140],((C_word*)t0)[15],((C_word*)t0)[2]);}

/* k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2515,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2518,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
if(C_truep(*((C_word*)lf[137]+1))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2632,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:100: current-milliseconds */
t4=*((C_word*)lf[50]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_2518(2,t3,C_SCHEME_UNDEFINED);}}

/* k2630 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2632,2,t0,t1);}
t2=C_a_i_minus(&a,2,t1,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(C_i_greaterp(t2,C_fix(60000)))){
/* batch-driver.scm:612: display */
t3=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],lf[138]);}
else{
t3=((C_word*)t0)[2];
f_2518(2,t3,C_SCHEME_UNDEFINED);}}

/* k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2518,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:613: print-node */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1545(t3,t2,lf[135],lf[136],((C_word*)((C_word*)t0)[13])[1]);}

/* k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2521,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2524,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2597,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[13],a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=*((C_word*)lf[133]+1);
if(C_truep(t4)){
t5=t3;
f_2597(t5,t4);}
else{
t5=*((C_word*)lf[134]+1);
t6=t3;
f_2597(t6,t5);}}
else{
t4=t3;
f_2597(t4,C_SCHEME_FALSE);}}

/* k2595 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_2597(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2597,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2600,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:615: debugging */
t3=*((C_word*)lf[107]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[108],lf[132]);}
else{
t2=((C_word*)t0)[5];
f_2524(2,t2,C_SCHEME_UNDEFINED);}}

/* k2598 in k2595 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2600,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:616: begin-time */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1752(t3,t2);}

/* k2601 in k2598 in k2595 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2603,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2606,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:617: perform-unboxing! */
t3=*((C_word*)lf[131]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k2604 in k2601 in k2598 in k2595 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2606,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2609,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:618: end-time */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1762(t3,t2,lf[130]);}

/* k2607 in k2604 in k2601 in k2598 in k2595 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:619: print-node */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1545(t2,((C_word*)t0)[3],lf[128],lf[129],((C_word*)((C_word*)t0)[2])[1]);}

/* k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2527,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[2])){
/* batch-driver.scm:620: exit */
t3=*((C_word*)lf[127]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(0));}
else{
t3=t2;
f_2527(2,t3,C_SCHEME_UNDEFINED);}}

/* k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2527,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:621: begin-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1752(t3,t2);}

/* k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2530,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2535,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2540 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2541(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2541,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,a[7]=t4,a[8]=t3,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=t1,a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm:625: end-time */
t7=((C_word*)((C_word*)t0)[7])[1];
f_1762(t7,t6,lf[126]);}

/* k2543 in a2540 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2548,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* batch-driver.scm:626: begin-time */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1752(t3,t2);}

/* k2546 in k2543 in a2540 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2548,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[8])){
/* batch-driver.scm:627: open-output-file */
t3=*((C_word*)lf[124]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}
else{
/* batch-driver.scm:627: current-output-port */
t3=*((C_word*)lf[125]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2549 in k2546 in k2543 in a2540 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm:628: dribble */
t3=((C_word*)((C_word*)t0)[11])[1];
f_1506(t3,t2,lf[123],C_a_i_list(&a,1,((C_word*)t0)[8]));}

/* k2552 in k2549 in k2546 in k2543 in a2540 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2554,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2557,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:629: generate-code */
t3=*((C_word*)lf[122]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[8],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2555 in k2552 in k2549 in k2546 in k2543 in a2540 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2560,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
/* batch-driver.scm:630: close-output-port */
t3=*((C_word*)lf[121]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t3=t2;
f_2560(2,t3,C_SCHEME_UNDEFINED);}}

/* k2558 in k2555 in k2552 in k2549 in k2546 in k2543 in a2540 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2560,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2563,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:631: end-time */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1762(t3,t2,lf[120]);}

/* k2561 in k2558 in k2555 in k2552 in k2549 in k2546 in k2543 in a2540 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2563,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_memq(lf[117],*((C_word*)lf[37]+1)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2582,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:633: ##sys#stop-timer */
t4=*((C_word*)lf[119]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f5016,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:634: compiler-cleanup-hook */
t4=*((C_word*)lf[116]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f5016 in k2561 in k2558 in k2555 in k2552 in k2549 in k2546 in k2543 in a2540 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f5016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:635: dribble */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1506(t2,((C_word*)t0)[2],lf[115],C_SCHEME_END_OF_LIST);}

/* k2580 in k2561 in k2558 in k2555 in k2552 in k2549 in k2546 in k2543 in a2540 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:633: ##sys#display-times */
t2=*((C_word*)lf[118]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2564 in k2561 in k2558 in k2555 in k2552 in k2549 in k2546 in k2543 in a2540 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2566,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:634: compiler-cleanup-hook */
t3=*((C_word*)lf[116]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2567 in k2564 in k2561 in k2558 in k2555 in k2552 in k2549 in k2546 in k2543 in a2540 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:635: dribble */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1506(t2,((C_word*)t0)[2],lf[115],C_SCHEME_END_OF_LIST);}

/* a2534 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2503 in k2500 in k2497 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2535,2,t0,t1);}
/* batch-driver.scm:624: prepare-for-code-generation */
t2=*((C_word*)lf[114]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* k2411 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2416,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:578: begin-time */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1752(t3,t2);}

/* k2414 in k2411 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2416,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2421,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2427,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2426 in k2414 in k2411 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2427,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2431,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t3,tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:581: end-time */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1762(t5,t4,lf[112]);}

/* k2429 in a2426 in k2414 in k2411 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2434,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:582: print-node */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1545(t3,t2,lf[110],lf[111],((C_word*)t0)[6]);}

/* k2432 in k2429 in a2426 in k2414 in k2411 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2434,2,t0,t1);}
if(C_truep(((C_word*)t0)[9])){
t2=C_a_i_plus(&a,2,((C_word*)t0)[8],C_fix(1));
/* batch-driver.scm:583: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_2387(t3,((C_word*)t0)[6],t2,((C_word*)t0)[5],C_SCHEME_TRUE);}
else{
t2=*((C_word*)lf[101]+1);
if(C_truep(t2)){
if(C_truep(*((C_word*)lf[102]+1))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:589: begin-time */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1752(t4,t3);}
else{
t3=C_a_i_plus(&a,2,((C_word*)t0)[8],C_fix(1));
/* batch-driver.scm:596: loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_2387(t4,((C_word*)t0)[6],t3,((C_word*)t0)[5],C_SCHEME_FALSE);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2453,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:585: debugging */
t4=*((C_word*)lf[107]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[108],lf[109]);}}}

/* k2451 in k2432 in k2429 in a2426 in k2414 in k2411 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2453,2,t0,t1);}
t2=C_set_block_item(lf[101] /* inline-substitutions-enabled */,0,C_SCHEME_TRUE);
t3=C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1));
/* batch-driver.scm:587: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2387(t4,((C_word*)t0)[3],t3,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k2465 in k2432 in k2429 in a2426 in k2414 in k2411 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2467,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2470,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:590: analyze */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1791(t3,t2,lf[106],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k2468 in k2465 in k2432 in k2429 in a2426 in k2414 in k2411 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2470,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2473,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:591: end-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1762(t3,t2,lf[105]);}

/* k2471 in k2468 in k2465 in k2432 in k2429 in a2426 in k2414 in k2411 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2473,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2476,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:592: begin-time */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1752(t3,t2);}

/* k2474 in k2471 in k2468 in k2465 in k2432 in k2429 in a2426 in k2414 in k2411 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2476,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2479,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:593: transform-direct-lambdas! */
t3=*((C_word*)lf[104]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* k2477 in k2474 in k2471 in k2468 in k2465 in k2432 in k2429 in a2426 in k2414 in k2411 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2479,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2482,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:594: end-time */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1762(t3,t2,lf[103]);}

/* k2480 in k2477 in k2474 in k2471 in k2468 in k2465 in k2432 in k2429 in a2426 in k2414 in k2411 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2482,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(1));
/* batch-driver.scm:595: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2387(t3,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2420 in k2414 in k2411 in k2405 in k2402 in k2399 in k2395 in k2392 in k2389 in loop in k2380 in k2377 in k2374 in k2371 in k2368 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2961 in k2327 in k2324 in k2321 in k2318 in k2315 in k2310 in k2307 in k2304 in k2301 in k2298 in k2292 in k2289 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2243 in k2239 in k2236 in k2233 in k2230 in k2226 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2421,2,t0,t1);}
/* batch-driver.scm:580: perform-high-level-optimizations */
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* k2205 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:374: display */
t2=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2198 in k2186 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:375: newline */
t2=*((C_word*)lf[47]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2174 in k2165 in k2162 in k2159 in k2156 in k2153 in k2150 in k2138 in k2134 in k2130 in k2126 in k2122 in k2118 in k2115 in k2111 in k2107 in k2101 in k2098 in k2094 in k2086 in k2082 in k2067 in k2064 in k2061 in k2054 in k2048 in k2045 in k2039 in k2036 in k2033 in k2030 in k2027 in k2024 in k2021 in k2018 in k2012 in k2008 in k2005 in k1999 in k1996 in k1993 in k1990 in k1987 in k1984 in k1978 in k1972 in k1969 in k1966 in k1963 in k1960 in k1957 in k1954 in k1951 in k1948 in k1945 in k1942 in k1939 in k1936 in k1933 in k1930 in k1927 in k1924 in k1921 in k1918 in k1915 in k1908 in k1905 in k1899 in k1878 in k1874 in k1871 in k1868 in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_2176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:370: newline */
t2=*((C_word*)lf[47]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* analyze in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1791(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1791,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1793,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1816,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1821,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t4))){
/* def-no237276 */
t8=t7;
f_1821(t8,t1);}
else{
t8=C_i_car(t4);
t9=C_i_cdr(t4);
if(C_truep(C_i_nullp(t9))){
/* def-contf238274 */
t10=t6;
f_1816(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_i_cdr(t9);
if(C_truep(C_i_nullp(t11))){
/* body235244 */
t12=t5;
f_1793(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-no237 in analyze in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1821(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1821,NULL,2,t0,t1);}
/* def-contf238274 */
t2=((C_word*)t0)[2];
f_1816(t2,t1,C_fix(0));}

/* def-contf238 in analyze in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1816(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1816,NULL,3,t0,t1,t2);}
/* body235244 */
t3=((C_word*)t0)[2];
f_1793(t3,t1,t2,C_SCHEME_TRUE);}

/* body235 in analyze in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1793(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1793,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1797,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:156: analyze-expression */
t5=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k1795 in body235 in analyze in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1797,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1800,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1805,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1811,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:158: upap */
t5=((C_word*)((C_word*)t0)[6])[1];
((C_proc9)(void*)(*((C_word*)t5+1)))(9,t5,t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],t3,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* a1810 in k1795 in body235 in analyze in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1811(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1811,5,t0,t1,t2,t3,t4);}
t5=*((C_word*)lf[54]+1);
/* g271272 */
t6=t5;
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,((C_word*)t0)[2],t2,t3,t4);}

/* a1804 in k1795 in body235 in analyze in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1805(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1805,4,t0,t1,t2,t3);}
t4=*((C_word*)lf[53]+1);
/* g257258 */
t5=t4;
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[2],t2,t3);}

/* k1798 in k1795 in body235 in analyze in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* end-time in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1762(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1762,NULL,3,t0,t1,t2);}
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t3=*((C_word*)lf[33]+1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1769,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* display */
t5=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[52],t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1767 in end-time in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1769,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1772,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k1770 in k1767 in end-time in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1772,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[51],((C_word*)t0)[3]);}

/* k1773 in k1770 in k1767 in end-time in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1775,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1778,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1789,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:100: current-milliseconds */
t4=*((C_word*)lf[50]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1787 in k1773 in k1770 in k1767 in end-time in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1789,2,t0,t1);}
t2=C_a_i_minus(&a,2,t1,((C_word*)((C_word*)t0)[4])[1]);
/* write */
t3=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k1776 in k1773 in k1770 in k1767 in end-time in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* begin-time in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1752(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1752,NULL,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1760,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:100: current-milliseconds */
t3=*((C_word*)lf[50]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1758 in begin-time in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* collect-options in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1717(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1717,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1723,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1723(t6,t1,((C_word*)t0)[2]);}

/* loop in collect-options in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1723(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1723,NULL,3,t0,t1,t2);}
t3=C_i_memq(((C_word*)t0)[4],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* g213214 */
t5=t4;
f_1731(t5,t1,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}}

/* g213 in loop in collect-options in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1731(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1731,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1739,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:144: option-arg */
f_1392(t3,t2);}

/* k1737 in g213 in loop in collect-options in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1739,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1743,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cddr(((C_word*)t0)[3]);
/* batch-driver.scm:144: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1723(t4,t2,t3);}

/* k1741 in k1737 in g213 in loop in collect-options in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1743,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* arg-val in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1637(C_word t1,C_word t2){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1637,NULL,2,t1,t2);}
t3=C_i_string_length(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
if(C_truep(C_i_lessp(t3,C_fix(2)))){
t5=C_a_i_string_to_number(&a,2,t2,C_fix(10));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* batch-driver.scm:140: quit */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[48],t2);}}
else{
t5=C_i_string_ref(t2,t4);
t6=C_eqp(t5,C_make_character(109));
t7=(C_truep(t6)?t6:C_eqp(t5,C_make_character(77)));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1686,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:137: substring */
t9=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,t2,C_fix(0),t4);}
else{
t8=C_eqp(t5,C_make_character(107));
t9=(C_truep(t8)?t8:C_eqp(t5,C_make_character(75)));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1706,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:138: substring */
t11=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t10,t2,C_fix(0),t4);}
else{
t10=C_a_i_string_to_number(&a,2,t2,C_fix(10));
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
/* batch-driver.scm:140: quit */
t11=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[48],t2);}}}}}

/* k1704 in arg-val in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1706,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
t3=C_a_i_times(&a,2,t2,C_fix(1024));
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* batch-driver.scm:140: quit */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],lf[48],((C_word*)t0)[2]);}}

/* k1684 in arg-val in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1686,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
t3=C_a_i_times(&a,2,t2,C_fix(1048576));
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* batch-driver.scm:140: quit */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],lf[48],((C_word*)t0)[2]);}}

/* print-expr in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1591(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1591,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1598,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:124: print-header */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1521(t6,t5,t2,t3);}

/* k1596 in print-expr in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1598,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
t3=C_i_check_list_2(t2,lf[46]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1614,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_1614(t7,((C_word*)t0)[2],t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* for-each-loop172 in k1596 in print-expr in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1614(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1614,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1624,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1603,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:127: pretty-print */
t6=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1601 in for-each-loop172 in k1596 in print-expr in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:128: newline */
t2=*((C_word*)lf[47]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k1622 in for-each-loop172 in k1596 in print-expr in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1614(t3,((C_word*)t0)[2],t2);}

/* print-db in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1567(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1567,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1574,a[2]=t5,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:119: print-header */
t7=((C_word*)((C_word*)t0)[2])[1];
f_1521(t7,t6,t2,t3);}

/* k1572 in print-db in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1574,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[33]+1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1577,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* display */
t4=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[45],t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1575 in k1572 in print-db in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1577,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1580,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* write */
t3=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1578 in k1575 in k1572 in print-db in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(41),((C_word*)t0)[2]);}

/* k1581 in k1578 in k1575 in k1572 in print-db in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1583,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1586,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k1584 in k1581 in k1578 in k1575 in k1572 in print-db in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:121: display-analysis-database */
t2=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* print-node in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1545(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1545,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1552,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:113: print-header */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1521(t6,t5,t2,t3);}

/* k1550 in print-node in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1552,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* batch-driver.scm:115: dump-nodes */
t2=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1565,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:116: build-expression-tree */
t3=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1563 in k1550 in print-node in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:116: pretty-print */
t2=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* print-header in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1521(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1521,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1525,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:106: dribble */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1506(t5,t4,lf[39],C_a_i_list(&a,1,t2));}

/* k1523 in print-header in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1525,2,t0,t1);}
if(C_truep(C_i_memq(((C_word*)t0)[4],*((C_word*)lf[37]+1)))){
t2=*((C_word*)lf[33]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1534,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t4=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(91),t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k1532 in k1523 in print-header in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1534,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1537,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1535 in k1532 in k1523 in print-header in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1537,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(93),((C_word*)t0)[2]);}

/* k1538 in k1535 in k1532 in k1523 in print-header in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1540,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1543,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* write-char/port */
t3=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k1541 in k1538 in k1535 in k1532 in k1523 in print-header in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* dribble in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_fcall f_1506(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1506,NULL,4,t0,t1,t2,t3);}
if(C_truep(((C_word*)t0)[2])){
t4=*((C_word*)lf[33]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1513,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(6,0,t5,*((C_word*)lf[36]+1),t4,t2,t3);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1511 in dribble in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1513,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k1514 in k1511 in dribble in k1454 in k1448 in k1442 in k1439 in k4713 in k1423 */
static void C_ccall f_1516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#flush-output */
t2=*((C_word*)lf[34]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* option-arg */
static void C_fcall f_1392(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1392,NULL,2,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
t4=C_i_car(t2);
/* batch-driver.scm:48: quit */
t5=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,lf[9],t4);}
else{
t4=C_i_cadr(t2);
if(C_truep(C_i_symbolp(t4))){
/* batch-driver.scm:51: quit */
t5=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,lf[10],t4);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[404] = {
{"toplevel:batch_2ddriver_2escm",(void*)C_driver_toplevel},
{"f_1364:batch_2ddriver_2escm",(void*)f_1364},
{"f_1367:batch_2ddriver_2escm",(void*)f_1367},
{"f_1371:batch_2ddriver_2escm",(void*)f_1371},
{"f_1375:batch_2ddriver_2escm",(void*)f_1375},
{"f_1379:batch_2ddriver_2escm",(void*)f_1379},
{"f_1383:batch_2ddriver_2escm",(void*)f_1383},
{"f_1387:batch_2ddriver_2escm",(void*)f_1387},
{"f_1389:batch_2ddriver_2escm",(void*)f_1389},
{"f_1425:batch_2ddriver_2escm",(void*)f_1425},
{"f_4715:batch_2ddriver_2escm",(void*)f_4715},
{"f_4704:batch_2ddriver_2escm",(void*)f_4704},
{"f_4675:batch_2ddriver_2escm",(void*)f_4675},
{"f_4679:batch_2ddriver_2escm",(void*)f_4679},
{"f_1441:batch_2ddriver_2escm",(void*)f_1441},
{"f_4671:batch_2ddriver_2escm",(void*)f_4671},
{"f_1444:batch_2ddriver_2escm",(void*)f_1444},
{"f_4634:batch_2ddriver_2escm",(void*)f_4634},
{"f_4663:batch_2ddriver_2escm",(void*)f_4663},
{"f_1450:batch_2ddriver_2escm",(void*)f_1450},
{"f_1456:batch_2ddriver_2escm",(void*)f_1456},
{"f_4617:batch_2ddriver_2escm",(void*)f_4617},
{"f_4613:batch_2ddriver_2escm",(void*)f_4613},
{"f_4609:batch_2ddriver_2escm",(void*)f_4609},
{"f_1870:batch_2ddriver_2escm",(void*)f_1870},
{"f_1873:batch_2ddriver_2escm",(void*)f_1873},
{"f_1876:batch_2ddriver_2escm",(void*)f_1876},
{"f_4594:batch_2ddriver_2escm",(void*)f_4594},
{"f_4536:batch_2ddriver_2escm",(void*)f_4536},
{"f_4549:batch_2ddriver_2escm",(void*)f_4549},
{"f_4557:batch_2ddriver_2escm",(void*)f_4557},
{"f_4586:batch_2ddriver_2escm",(void*)f_4586},
{"f_1880:batch_2ddriver_2escm",(void*)f_1880},
{"f_1901:batch_2ddriver_2escm",(void*)f_1901},
{"f_4501:batch_2ddriver_2escm",(void*)f_4501},
{"f_1894:batch_2ddriver_2escm",(void*)f_1894},
{"f_1898:batch_2ddriver_2escm",(void*)f_1898},
{"f_1907:batch_2ddriver_2escm",(void*)f_1907},
{"f_1910:batch_2ddriver_2escm",(void*)f_1910},
{"f_1917:batch_2ddriver_2escm",(void*)f_1917},
{"f_1920:batch_2ddriver_2escm",(void*)f_1920},
{"f_1923:batch_2ddriver_2escm",(void*)f_1923},
{"f_1926:batch_2ddriver_2escm",(void*)f_1926},
{"f_1929:batch_2ddriver_2escm",(void*)f_1929},
{"f_1932:batch_2ddriver_2escm",(void*)f_1932},
{"f_1935:batch_2ddriver_2escm",(void*)f_1935},
{"f_1938:batch_2ddriver_2escm",(void*)f_1938},
{"f_1941:batch_2ddriver_2escm",(void*)f_1941},
{"f_1944:batch_2ddriver_2escm",(void*)f_1944},
{"f_1947:batch_2ddriver_2escm",(void*)f_1947},
{"f_4431:batch_2ddriver_2escm",(void*)f_4431},
{"f_1950:batch_2ddriver_2escm",(void*)f_1950},
{"f_1953:batch_2ddriver_2escm",(void*)f_1953},
{"f_1956:batch_2ddriver_2escm",(void*)f_1956},
{"f_1959:batch_2ddriver_2escm",(void*)f_1959},
{"f_1962:batch_2ddriver_2escm",(void*)f_1962},
{"f_1965:batch_2ddriver_2escm",(void*)f_1965},
{"f_1968:batch_2ddriver_2escm",(void*)f_1968},
{"f_1971:batch_2ddriver_2escm",(void*)f_1971},
{"f_1974:batch_2ddriver_2escm",(void*)f_1974},
{"f_4393:batch_2ddriver_2escm",(void*)f_4393},
{"f_1980:batch_2ddriver_2escm",(void*)f_1980},
{"f_4378:batch_2ddriver_2escm",(void*)f_4378},
{"f_4384:batch_2ddriver_2escm",(void*)f_4384},
{"f_1986:batch_2ddriver_2escm",(void*)f_1986},
{"f_4368:batch_2ddriver_2escm",(void*)f_4368},
{"f_4371:batch_2ddriver_2escm",(void*)f_4371},
{"f_1989:batch_2ddriver_2escm",(void*)f_1989},
{"f_4332:batch_2ddriver_2escm",(void*)f_4332},
{"f_1992:batch_2ddriver_2escm",(void*)f_1992},
{"f_4326:batch_2ddriver_2escm",(void*)f_4326},
{"f_1995:batch_2ddriver_2escm",(void*)f_1995},
{"f_4317:batch_2ddriver_2escm",(void*)f_4317},
{"f_1998:batch_2ddriver_2escm",(void*)f_1998},
{"f_4299:batch_2ddriver_2escm",(void*)f_4299},
{"f_4302:batch_2ddriver_2escm",(void*)f_4302},
{"f_4305:batch_2ddriver_2escm",(void*)f_4305},
{"f_4308:batch_2ddriver_2escm",(void*)f_4308},
{"f_2001:batch_2ddriver_2escm",(void*)f_2001},
{"f_4252:batch_2ddriver_2escm",(void*)f_4252},
{"f_4260:batch_2ddriver_2escm",(void*)f_4260},
{"f_4289:batch_2ddriver_2escm",(void*)f_4289},
{"f_4258:batch_2ddriver_2escm",(void*)f_4258},
{"f_2007:batch_2ddriver_2escm",(void*)f_2007},
{"f_2010:batch_2ddriver_2escm",(void*)f_2010},
{"f_2014:batch_2ddriver_2escm",(void*)f_2014},
{"f_4203:batch_2ddriver_2escm",(void*)f_4203},
{"f_4232:batch_2ddriver_2escm",(void*)f_4232},
{"f_2020:batch_2ddriver_2escm",(void*)f_2020},
{"f_2023:batch_2ddriver_2escm",(void*)f_2023},
{"f_2026:batch_2ddriver_2escm",(void*)f_2026},
{"f_2029:batch_2ddriver_2escm",(void*)f_2029},
{"f_2032:batch_2ddriver_2escm",(void*)f_2032},
{"f_2035:batch_2ddriver_2escm",(void*)f_2035},
{"f_4160:batch_2ddriver_2escm",(void*)f_4160},
{"f_4006:batch_2ddriver_2escm",(void*)f_4006},
{"f_4031:batch_2ddriver_2escm",(void*)f_4031},
{"f_4036:batch_2ddriver_2escm",(void*)f_4036},
{"f_4170:batch_2ddriver_2escm",(void*)f_4170},
{"f_4067:batch_2ddriver_2escm",(void*)f_4067},
{"f_4137:batch_2ddriver_2escm",(void*)f_4137},
{"f_4074:batch_2ddriver_2escm",(void*)f_4074},
{"f_4099:batch_2ddriver_2escm",(void*)f_4099},
{"f_4104:batch_2ddriver_2escm",(void*)f_4104},
{"f_4147:batch_2ddriver_2escm",(void*)f_4147},
{"f_2038:batch_2ddriver_2escm",(void*)f_2038},
{"f_3996:batch_2ddriver_2escm",(void*)f_3996},
{"f_3988:batch_2ddriver_2escm",(void*)f_3988},
{"f_2041:batch_2ddriver_2escm",(void*)f_2041},
{"f_3965:batch_2ddriver_2escm",(void*)f_3965},
{"f_3975:batch_2ddriver_2escm",(void*)f_3975},
{"f_2047:batch_2ddriver_2escm",(void*)f_2047},
{"f_3963:batch_2ddriver_2escm",(void*)f_3963},
{"f_3955:batch_2ddriver_2escm",(void*)f_3955},
{"f_2050:batch_2ddriver_2escm",(void*)f_2050},
{"f_3932:batch_2ddriver_2escm",(void*)f_3932},
{"f_3942:batch_2ddriver_2escm",(void*)f_3942},
{"f_2056:batch_2ddriver_2escm",(void*)f_2056},
{"f_2063:batch_2ddriver_2escm",(void*)f_2063},
{"f_2066:batch_2ddriver_2escm",(void*)f_2066},
{"f_2069:batch_2ddriver_2escm",(void*)f_2069},
{"f_3906:batch_2ddriver_2escm",(void*)f_3906},
{"f_2078:batch_2ddriver_2escm",(void*)f_2078},
{"f_3916:batch_2ddriver_2escm",(void*)f_3916},
{"f_2084:batch_2ddriver_2escm",(void*)f_2084},
{"f_2088:batch_2ddriver_2escm",(void*)f_2088},
{"f_2096:batch_2ddriver_2escm",(void*)f_2096},
{"f_2100:batch_2ddriver_2escm",(void*)f_2100},
{"f_2103:batch_2ddriver_2escm",(void*)f_2103},
{"f_3871:batch_2ddriver_2escm",(void*)f_3871},
{"f_3900:batch_2ddriver_2escm",(void*)f_3900},
{"f_2109:batch_2ddriver_2escm",(void*)f_2109},
{"f_3828:batch_2ddriver_2escm",(void*)f_3828},
{"f_3836:batch_2ddriver_2escm",(void*)f_3836},
{"f_3865:batch_2ddriver_2escm",(void*)f_3865},
{"f_3834:batch_2ddriver_2escm",(void*)f_3834},
{"f_3783:batch_2ddriver_2escm",(void*)f_3783},
{"f_3791:batch_2ddriver_2escm",(void*)f_3791},
{"f_3789:batch_2ddriver_2escm",(void*)f_3789},
{"f_2113:batch_2ddriver_2escm",(void*)f_2113},
{"f_2117:batch_2ddriver_2escm",(void*)f_2117},
{"f_2120:batch_2ddriver_2escm",(void*)f_2120},
{"f_3753:batch_2ddriver_2escm",(void*)f_3753},
{"f_2124:batch_2ddriver_2escm",(void*)f_2124},
{"f_3746:batch_2ddriver_2escm",(void*)f_3746},
{"f_2128:batch_2ddriver_2escm",(void*)f_2128},
{"f_3739:batch_2ddriver_2escm",(void*)f_3739},
{"f_2132:batch_2ddriver_2escm",(void*)f_2132},
{"f_3732:batch_2ddriver_2escm",(void*)f_3732},
{"f_2136:batch_2ddriver_2escm",(void*)f_2136},
{"f_3712:batch_2ddriver_2escm",(void*)f_3712},
{"f_2140:batch_2ddriver_2escm",(void*)f_2140},
{"f_2152:batch_2ddriver_2escm",(void*)f_2152},
{"f_2155:batch_2ddriver_2escm",(void*)f_2155},
{"f_2158:batch_2ddriver_2escm",(void*)f_2158},
{"f_2161:batch_2ddriver_2escm",(void*)f_2161},
{"f_3656:batch_2ddriver_2escm",(void*)f_3656},
{"f_3662:batch_2ddriver_2escm",(void*)f_3662},
{"f_2164:batch_2ddriver_2escm",(void*)f_2164},
{"f_2167:batch_2ddriver_2escm",(void*)f_2167},
{"f_2188:batch_2ddriver_2escm",(void*)f_2188},
{"f_2216:batch_2ddriver_2escm",(void*)f_2216},
{"f_2219:batch_2ddriver_2escm",(void*)f_2219},
{"f_2222:batch_2ddriver_2escm",(void*)f_2222},
{"f_2228:batch_2ddriver_2escm",(void*)f_2228},
{"f_2232:batch_2ddriver_2escm",(void*)f_2232},
{"f_2235:batch_2ddriver_2escm",(void*)f_2235},
{"f_2238:batch_2ddriver_2escm",(void*)f_2238},
{"f_2241:batch_2ddriver_2escm",(void*)f_2241},
{"f_2245:batch_2ddriver_2escm",(void*)f_2245},
{"f_2249:batch_2ddriver_2escm",(void*)f_2249},
{"f_2252:batch_2ddriver_2escm",(void*)f_2252},
{"f_2255:batch_2ddriver_2escm",(void*)f_2255},
{"f_3627:batch_2ddriver_2escm",(void*)f_3627},
{"f_3635:batch_2ddriver_2escm",(void*)f_3635},
{"f_2258:batch_2ddriver_2escm",(void*)f_2258},
{"f_2261:batch_2ddriver_2escm",(void*)f_2261},
{"f_3470:batch_2ddriver_2escm",(void*)f_3470},
{"f_3575:batch_2ddriver_2escm",(void*)f_3575},
{"f_3620:batch_2ddriver_2escm",(void*)f_3620},
{"f_3592:batch_2ddriver_2escm",(void*)f_3592},
{"f_3598:batch_2ddriver_2escm",(void*)f_3598},
{"f_3602:batch_2ddriver_2escm",(void*)f_3602},
{"f_3587:batch_2ddriver_2escm",(void*)f_3587},
{"f_3578:batch_2ddriver_2escm",(void*)f_3578},
{"f_3536:batch_2ddriver_2escm",(void*)f_3536},
{"f_3565:batch_2ddriver_2escm",(void*)f_3565},
{"f_3488:batch_2ddriver_2escm",(void*)f_3488},
{"f_3492:batch_2ddriver_2escm",(void*)f_3492},
{"f_3501:batch_2ddriver_2escm",(void*)f_3501},
{"f_3530:batch_2ddriver_2escm",(void*)f_3530},
{"f_3499:batch_2ddriver_2escm",(void*)f_3499},
{"f_3481:batch_2ddriver_2escm",(void*)f_3481},
{"f_3461:batch_2ddriver_2escm",(void*)f_3461},
{"f_3465:batch_2ddriver_2escm",(void*)f_3465},
{"f_2264:batch_2ddriver_2escm",(void*)f_2264},
{"f_2267:batch_2ddriver_2escm",(void*)f_2267},
{"f_3416:batch_2ddriver_2escm",(void*)f_3416},
{"f_3425:batch_2ddriver_2escm",(void*)f_3425},
{"f_3454:batch_2ddriver_2escm",(void*)f_3454},
{"f_3423:batch_2ddriver_2escm",(void*)f_3423},
{"f_2270:batch_2ddriver_2escm",(void*)f_2270},
{"f_2273:batch_2ddriver_2escm",(void*)f_2273},
{"f_2276:batch_2ddriver_2escm",(void*)f_2276},
{"f_3401:batch_2ddriver_2escm",(void*)f_3401},
{"f_2279:batch_2ddriver_2escm",(void*)f_2279},
{"f_2282:batch_2ddriver_2escm",(void*)f_2282},
{"f_2285:batch_2ddriver_2escm",(void*)f_2285},
{"f_3338:batch_2ddriver_2escm",(void*)f_3338},
{"f_3367:batch_2ddriver_2escm",(void*)f_3367},
{"f_2291:batch_2ddriver_2escm",(void*)f_2291},
{"f_2294:batch_2ddriver_2escm",(void*)f_2294},
{"f_3303:batch_2ddriver_2escm",(void*)f_3303},
{"f_3145:batch_2ddriver_2escm",(void*)f_3145},
{"f_3268:batch_2ddriver_2escm",(void*)f_3268},
{"f_3157:batch_2ddriver_2escm",(void*)f_3157},
{"f_3161:batch_2ddriver_2escm",(void*)f_3161},
{"f_3204:batch_2ddriver_2escm",(void*)f_3204},
{"f_3189:batch_2ddriver_2escm",(void*)f_3189},
{"f_2300:batch_2ddriver_2escm",(void*)f_2300},
{"f_3061:batch_2ddriver_2escm",(void*)f_3061},
{"f_3094:batch_2ddriver_2escm",(void*)f_3094},
{"f_3066:batch_2ddriver_2escm",(void*)f_3066},
{"f_3069:batch_2ddriver_2escm",(void*)f_3069},
{"f_3072:batch_2ddriver_2escm",(void*)f_3072},
{"f_3075:batch_2ddriver_2escm",(void*)f_3075},
{"f_3104:batch_2ddriver_2escm",(void*)f_3104},
{"f_2303:batch_2ddriver_2escm",(void*)f_2303},
{"f_3055:batch_2ddriver_2escm",(void*)f_3055},
{"f_2306:batch_2ddriver_2escm",(void*)f_2306},
{"f_3049:batch_2ddriver_2escm",(void*)f_3049},
{"f_2309:batch_2ddriver_2escm",(void*)f_2309},
{"f_3034:batch_2ddriver_2escm",(void*)f_3034},
{"f_3037:batch_2ddriver_2escm",(void*)f_3037},
{"f_3040:batch_2ddriver_2escm",(void*)f_3040},
{"f_3043:batch_2ddriver_2escm",(void*)f_3043},
{"f_3046:batch_2ddriver_2escm",(void*)f_3046},
{"f_2312:batch_2ddriver_2escm",(void*)f_2312},
{"f_2317:batch_2ddriver_2escm",(void*)f_2317},
{"f_2320:batch_2ddriver_2escm",(void*)f_2320},
{"f_2323:batch_2ddriver_2escm",(void*)f_2323},
{"f_2326:batch_2ddriver_2escm",(void*)f_2326},
{"f_2970:batch_2ddriver_2escm",(void*)f_2970},
{"f_2973:batch_2ddriver_2escm",(void*)f_2973},
{"f_2985:batch_2ddriver_2escm",(void*)f_2985},
{"f_3014:batch_2ddriver_2escm",(void*)f_3014},
{"f_2980:batch_2ddriver_2escm",(void*)f_2980},
{"f_2329:batch_2ddriver_2escm",(void*)f_2329},
{"f_2967:batch_2ddriver_2escm",(void*)f_2967},
{"f_2963:batch_2ddriver_2escm",(void*)f_2963},
{"f_2340:batch_2ddriver_2escm",(void*)f_2340},
{"f_2343:batch_2ddriver_2escm",(void*)f_2343},
{"f_2955:batch_2ddriver_2escm",(void*)f_2955},
{"f_2346:batch_2ddriver_2escm",(void*)f_2346},
{"f_2918:batch_2ddriver_2escm",(void*)f_2918},
{"f_2947:batch_2ddriver_2escm",(void*)f_2947},
{"f_2916:batch_2ddriver_2escm",(void*)f_2916},
{"f_2349:batch_2ddriver_2escm",(void*)f_2349},
{"f_2906:batch_2ddriver_2escm",(void*)f_2906},
{"f_2352:batch_2ddriver_2escm",(void*)f_2352},
{"f_2882:batch_2ddriver_2escm",(void*)f_2882},
{"f_2892:batch_2ddriver_2escm",(void*)f_2892},
{"f_2847:batch_2ddriver_2escm",(void*)f_2847},
{"f_2874:batch_2ddriver_2escm",(void*)f_2874},
{"f_2870:batch_2ddriver_2escm",(void*)f_2870},
{"f_2851:batch_2ddriver_2escm",(void*)f_2851},
{"f_2860:batch_2ddriver_2escm",(void*)f_2860},
{"f_2863:batch_2ddriver_2escm",(void*)f_2863},
{"f_2355:batch_2ddriver_2escm",(void*)f_2355},
{"f_2358:batch_2ddriver_2escm",(void*)f_2358},
{"f_2825:batch_2ddriver_2escm",(void*)f_2825},
{"f_2835:batch_2ddriver_2escm",(void*)f_2835},
{"f_2810:batch_2ddriver_2escm",(void*)f_2810},
{"f_2814:batch_2ddriver_2escm",(void*)f_2814},
{"f_2361:batch_2ddriver_2escm",(void*)f_2361},
{"f_2693:batch_2ddriver_2escm",(void*)f_2693},
{"f_2701:batch_2ddriver_2escm",(void*)f_2701},
{"f_2778:batch_2ddriver_2escm",(void*)f_2778},
{"f_2788:batch_2ddriver_2escm",(void*)f_2788},
{"f_2707:batch_2ddriver_2escm",(void*)f_2707},
{"f_2755:batch_2ddriver_2escm",(void*)f_2755},
{"f_2720:batch_2ddriver_2escm",(void*)f_2720},
{"f_2716:batch_2ddriver_2escm",(void*)f_2716},
{"f_2765:batch_2ddriver_2escm",(void*)f_2765},
{"f_2726:batch_2ddriver_2escm",(void*)f_2726},
{"f_2729:batch_2ddriver_2escm",(void*)f_2729},
{"f_2734:batch_2ddriver_2escm",(void*)f_2734},
{"f_2737:batch_2ddriver_2escm",(void*)f_2737},
{"f_2740:batch_2ddriver_2escm",(void*)f_2740},
{"f_2743:batch_2ddriver_2escm",(void*)f_2743},
{"f_2746:batch_2ddriver_2escm",(void*)f_2746},
{"f_2749:batch_2ddriver_2escm",(void*)f_2749},
{"f_2752:batch_2ddriver_2escm",(void*)f_2752},
{"f_2364:batch_2ddriver_2escm",(void*)f_2364},
{"f_2370:batch_2ddriver_2escm",(void*)f_2370},
{"f_2373:batch_2ddriver_2escm",(void*)f_2373},
{"f_2376:batch_2ddriver_2escm",(void*)f_2376},
{"f_2379:batch_2ddriver_2escm",(void*)f_2379},
{"f_2382:batch_2ddriver_2escm",(void*)f_2382},
{"f_2387:batch_2ddriver_2escm",(void*)f_2387},
{"f_2391:batch_2ddriver_2escm",(void*)f_2391},
{"f_2394:batch_2ddriver_2escm",(void*)f_2394},
{"f_2650:batch_2ddriver_2escm",(void*)f_2650},
{"f_2653:batch_2ddriver_2escm",(void*)f_2653},
{"f_2397:batch_2ddriver_2escm",(void*)f_2397},
{"f_2401:batch_2ddriver_2escm",(void*)f_2401},
{"f_2404:batch_2ddriver_2escm",(void*)f_2404},
{"f_2407:batch_2ddriver_2escm",(void*)f_2407},
{"f_2499:batch_2ddriver_2escm",(void*)f_2499},
{"f_2638:batch_2ddriver_2escm",(void*)f_2638},
{"f_2502:batch_2ddriver_2escm",(void*)f_2502},
{"f_2505:batch_2ddriver_2escm",(void*)f_2505},
{"f_2509:batch_2ddriver_2escm",(void*)f_2509},
{"f_2512:batch_2ddriver_2escm",(void*)f_2512},
{"f_2515:batch_2ddriver_2escm",(void*)f_2515},
{"f_2632:batch_2ddriver_2escm",(void*)f_2632},
{"f_2518:batch_2ddriver_2escm",(void*)f_2518},
{"f_2521:batch_2ddriver_2escm",(void*)f_2521},
{"f_2597:batch_2ddriver_2escm",(void*)f_2597},
{"f_2600:batch_2ddriver_2escm",(void*)f_2600},
{"f_2603:batch_2ddriver_2escm",(void*)f_2603},
{"f_2606:batch_2ddriver_2escm",(void*)f_2606},
{"f_2609:batch_2ddriver_2escm",(void*)f_2609},
{"f_2524:batch_2ddriver_2escm",(void*)f_2524},
{"f_2527:batch_2ddriver_2escm",(void*)f_2527},
{"f_2530:batch_2ddriver_2escm",(void*)f_2530},
{"f_2541:batch_2ddriver_2escm",(void*)f_2541},
{"f_2545:batch_2ddriver_2escm",(void*)f_2545},
{"f_2548:batch_2ddriver_2escm",(void*)f_2548},
{"f_2551:batch_2ddriver_2escm",(void*)f_2551},
{"f_2554:batch_2ddriver_2escm",(void*)f_2554},
{"f_2557:batch_2ddriver_2escm",(void*)f_2557},
{"f_2560:batch_2ddriver_2escm",(void*)f_2560},
{"f_2563:batch_2ddriver_2escm",(void*)f_2563},
{"f5016:batch_2ddriver_2escm",(void*)f5016},
{"f_2582:batch_2ddriver_2escm",(void*)f_2582},
{"f_2566:batch_2ddriver_2escm",(void*)f_2566},
{"f_2569:batch_2ddriver_2escm",(void*)f_2569},
{"f_2535:batch_2ddriver_2escm",(void*)f_2535},
{"f_2413:batch_2ddriver_2escm",(void*)f_2413},
{"f_2416:batch_2ddriver_2escm",(void*)f_2416},
{"f_2427:batch_2ddriver_2escm",(void*)f_2427},
{"f_2431:batch_2ddriver_2escm",(void*)f_2431},
{"f_2434:batch_2ddriver_2escm",(void*)f_2434},
{"f_2453:batch_2ddriver_2escm",(void*)f_2453},
{"f_2467:batch_2ddriver_2escm",(void*)f_2467},
{"f_2470:batch_2ddriver_2escm",(void*)f_2470},
{"f_2473:batch_2ddriver_2escm",(void*)f_2473},
{"f_2476:batch_2ddriver_2escm",(void*)f_2476},
{"f_2479:batch_2ddriver_2escm",(void*)f_2479},
{"f_2482:batch_2ddriver_2escm",(void*)f_2482},
{"f_2421:batch_2ddriver_2escm",(void*)f_2421},
{"f_2207:batch_2ddriver_2escm",(void*)f_2207},
{"f_2200:batch_2ddriver_2escm",(void*)f_2200},
{"f_2176:batch_2ddriver_2escm",(void*)f_2176},
{"f_1791:batch_2ddriver_2escm",(void*)f_1791},
{"f_1821:batch_2ddriver_2escm",(void*)f_1821},
{"f_1816:batch_2ddriver_2escm",(void*)f_1816},
{"f_1793:batch_2ddriver_2escm",(void*)f_1793},
{"f_1797:batch_2ddriver_2escm",(void*)f_1797},
{"f_1811:batch_2ddriver_2escm",(void*)f_1811},
{"f_1805:batch_2ddriver_2escm",(void*)f_1805},
{"f_1800:batch_2ddriver_2escm",(void*)f_1800},
{"f_1762:batch_2ddriver_2escm",(void*)f_1762},
{"f_1769:batch_2ddriver_2escm",(void*)f_1769},
{"f_1772:batch_2ddriver_2escm",(void*)f_1772},
{"f_1775:batch_2ddriver_2escm",(void*)f_1775},
{"f_1789:batch_2ddriver_2escm",(void*)f_1789},
{"f_1778:batch_2ddriver_2escm",(void*)f_1778},
{"f_1752:batch_2ddriver_2escm",(void*)f_1752},
{"f_1760:batch_2ddriver_2escm",(void*)f_1760},
{"f_1717:batch_2ddriver_2escm",(void*)f_1717},
{"f_1723:batch_2ddriver_2escm",(void*)f_1723},
{"f_1731:batch_2ddriver_2escm",(void*)f_1731},
{"f_1739:batch_2ddriver_2escm",(void*)f_1739},
{"f_1743:batch_2ddriver_2escm",(void*)f_1743},
{"f_1637:batch_2ddriver_2escm",(void*)f_1637},
{"f_1706:batch_2ddriver_2escm",(void*)f_1706},
{"f_1686:batch_2ddriver_2escm",(void*)f_1686},
{"f_1591:batch_2ddriver_2escm",(void*)f_1591},
{"f_1598:batch_2ddriver_2escm",(void*)f_1598},
{"f_1614:batch_2ddriver_2escm",(void*)f_1614},
{"f_1603:batch_2ddriver_2escm",(void*)f_1603},
{"f_1624:batch_2ddriver_2escm",(void*)f_1624},
{"f_1567:batch_2ddriver_2escm",(void*)f_1567},
{"f_1574:batch_2ddriver_2escm",(void*)f_1574},
{"f_1577:batch_2ddriver_2escm",(void*)f_1577},
{"f_1580:batch_2ddriver_2escm",(void*)f_1580},
{"f_1583:batch_2ddriver_2escm",(void*)f_1583},
{"f_1586:batch_2ddriver_2escm",(void*)f_1586},
{"f_1545:batch_2ddriver_2escm",(void*)f_1545},
{"f_1552:batch_2ddriver_2escm",(void*)f_1552},
{"f_1565:batch_2ddriver_2escm",(void*)f_1565},
{"f_1521:batch_2ddriver_2escm",(void*)f_1521},
{"f_1525:batch_2ddriver_2escm",(void*)f_1525},
{"f_1534:batch_2ddriver_2escm",(void*)f_1534},
{"f_1537:batch_2ddriver_2escm",(void*)f_1537},
{"f_1540:batch_2ddriver_2escm",(void*)f_1540},
{"f_1543:batch_2ddriver_2escm",(void*)f_1543},
{"f_1506:batch_2ddriver_2escm",(void*)f_1506},
{"f_1513:batch_2ddriver_2escm",(void*)f_1513},
{"f_1516:batch_2ddriver_2escm",(void*)f_1516},
{"f_1392:batch_2ddriver_2escm",(void*)f_1392},
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
