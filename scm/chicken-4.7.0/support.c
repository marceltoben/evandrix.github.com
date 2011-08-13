/* Generated from support.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: support.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file support.c
   unit: support
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[512];
static double C_possibly_force_alignment;


/* from k4341 */
static C_word C_fcall stub248(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub248(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_wordstobytes(t0));
return C_r;}

/* from k4334 */
static C_word C_fcall stub243(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub243(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_bytestowords(t0));
return C_r;}

C_noret_decl(C_support_toplevel)
C_externexport void C_ccall C_support_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4785)
static void C_ccall f_4785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4788)
static void C_ccall f_4788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13245)
static void C_ccall f_13245(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6165)
static void C_ccall f_6165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13233)
static void C_ccall f_13233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13237)
static void C_ccall f_13237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13240)
static void C_ccall f_13240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13195)
static void C_ccall f_13195(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_13195)
static void C_ccall f_13195r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_13199)
static void C_ccall f_13199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f14460)
static void C_ccall f14460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13202)
static void C_ccall f_13202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13209)
static void C_ccall f_13209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13102)
static void C_ccall f_13102(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13106)
static void C_ccall f_13106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13193)
static void C_ccall f_13193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13112)
static void C_ccall f_13112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13180)
static void C_ccall f_13180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13183)
static void C_ccall f_13183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13186)
static void C_ccall f_13186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13118)
static void C_ccall f_13118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13148)
static void C_ccall f_13148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13156)
static void C_fcall f_13156(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13134)
static void C_ccall f_13134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13130)
static void C_ccall f_13130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13166)
static void C_ccall f_13166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13091)
static void C_ccall f_13091(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13080)
static void C_ccall f_13080(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13074)
static void C_ccall f_13074(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13046)
static void C_ccall f_13046(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_13046)
static void C_ccall f_13046r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_13050)
static void C_ccall f_13050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13025)
static void C_ccall f_13025(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13029)
static void C_ccall f_13029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12992)
static void C_ccall f_12992(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12998)
static void C_ccall f_12998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12959)
static void C_ccall f_12959(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12965)
static void C_ccall f_12965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12935)
static void C_ccall f_12935(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12866)
static void C_ccall f_12866(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12870)
static void C_ccall f_12870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12875)
static void C_fcall f_12875(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12879)
static void C_ccall f_12879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12930)
static void C_ccall f_12930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12909)
static void C_ccall f_12909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12921)
static void C_ccall f_12921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12924)
static void C_ccall f_12924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12897)
static void C_ccall f_12897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12841)
static void C_ccall f_12841(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12851)
static void C_ccall f_12851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12854)
static void C_ccall f_12854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12835)
static void C_ccall f_12835(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12790)
static void C_ccall f_12790(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12797)
static void C_fcall f_12797(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12812)
static void C_ccall f_12812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12816)
static void C_ccall f_12816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12808)
static void C_ccall f_12808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12794)
static void C_ccall f_12794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12642)
static void C_ccall f_12642(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12651)
static void C_fcall f_12651(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12679)
static void C_ccall f_12679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12685)
static void C_ccall f_12685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12688)
static void C_ccall f_12688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12691)
static void C_ccall f_12691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12694)
static void C_ccall f_12694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12697)
static void C_ccall f_12697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12700)
static void C_ccall f_12700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12767)
static void C_fcall f_12767(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12777)
static void C_ccall f_12777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12711)
static void C_ccall f_12711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12726)
static void C_ccall f_12726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12729)
static void C_ccall f_12729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12737)
static void C_fcall f_12737(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12747)
static void C_ccall f_12747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12750)
static void C_ccall f_12750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12732)
static void C_ccall f_12732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12717)
static void C_ccall f_12717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12701)
static void C_fcall f_12701(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12646)
static void C_ccall f_12646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12465)
static void C_ccall f_12465(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12607)
static void C_fcall f_12607(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12486)
static void C_ccall f_12486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12572)
static void C_fcall f_12572(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12570)
static void C_ccall f_12570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12497)
static void C_ccall f_12497(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12518)
static void C_ccall f_12518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12548)
static void C_ccall f_12548(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_12548)
static void C_ccall f_12548r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_12554)
static void C_ccall f_12554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12524)
static void C_ccall f_12524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12537)
static void C_ccall f_12537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12540)
static void C_ccall f_12540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12503)
static void C_ccall f_12503(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12509)
static void C_ccall f_12509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12513)
static void C_ccall f_12513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12492)
static void C_ccall f_12492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12462)
static void C_ccall f_12462(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12444)
static void C_ccall f_12444(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12410)
static void C_ccall f_12410(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12434)
static void C_ccall f_12434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12430)
static void C_ccall f_12430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12389)
static void C_ccall f_12389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12395)
static void C_ccall f_12395(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12399)
static void C_ccall f_12399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12402)
static void C_ccall f_12402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12405)
static void C_ccall f_12405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12377)
static void C_ccall f_12377(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12381)
static void C_ccall f_12381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12286)
static void C_ccall f_12286(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_12286)
static void C_ccall f_12286r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_12305)
static void C_ccall f_12305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12330)
static void C_ccall f_12330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12334)
static void C_ccall f_12334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12336)
static void C_fcall f_12336(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12343)
static void C_ccall f_12343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12356)
static void C_ccall f_12356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12359)
static void C_ccall f_12359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12362)
static void C_ccall f_12362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12365)
static void C_ccall f_12365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12368)
static void C_ccall f_12368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12372)
static void C_ccall f_12372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12289)
static void C_fcall f_12289(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12293)
static void C_ccall f_12293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12299)
static void C_ccall f_12299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12280)
static void C_ccall f_12280(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12221)
static void C_ccall f_12221(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_12221)
static void C_ccall f_12221r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_12229)
static void C_ccall f_12229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12256)
static void C_ccall f_12256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12232)
static void C_ccall f_12232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12235)
static void C_ccall f_12235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12252)
static void C_ccall f_12252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12238)
static void C_ccall f_12238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12248)
static void C_ccall f_12248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12241)
static void C_ccall f_12241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12244)
static void C_ccall f_12244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12212)
static void C_ccall f_12212(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12206)
static void C_ccall f_12206(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12200)
static void C_ccall f_12200(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12158)
static void C_ccall f_12158(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12167)
static void C_fcall f_12167(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12129)
static void C_ccall f_12129(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12139)
static void C_fcall f_12139(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11917)
static void C_ccall f_11917(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12124)
static void C_ccall f_12124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12086)
static void C_fcall f_12086(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12100)
static void C_fcall f_12100(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12110)
static void C_ccall f_12110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12088)
static void C_fcall f_12088(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11920)
static void C_fcall f_11920(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11954)
static void C_fcall f_11954(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12048)
static void C_ccall f_12048(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12060)
static void C_ccall f_12060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12018)
static void C_ccall f_12018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12029)
static void C_ccall f_12029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12009)
static void C_ccall f_12009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11973)
static void C_ccall f_11973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11979)
static void C_ccall f_11979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11983)
static void C_ccall f_11983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11772)
static void C_ccall f_11772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11778)
static void C_fcall f_11778(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11874)
static void C_fcall f_11874(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11882)
static void C_fcall f_11882(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11892)
static void C_ccall f_11892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11842)
static void C_fcall f_11842(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11810)
static void C_fcall f_11810(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11818)
static void C_fcall f_11818(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11828)
static void C_ccall f_11828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11776)
static void C_ccall f_11776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11530)
static void C_ccall f_11530(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11534)
static void C_ccall f_11534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11650)
static void C_fcall f_11650(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11678)
static void C_ccall f_11678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11197)
static void C_ccall f_11197(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11524)
static void C_ccall f_11524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11209)
static void C_ccall f_11209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11219)
static void C_fcall f_11219(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11231)
static void C_fcall f_11231(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11237)
static void C_ccall f_11237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11276)
static void C_fcall f_11276(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11241)
static void C_fcall f_11241(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10855)
static void C_ccall f_10855(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11191)
static void C_ccall f_11191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10861)
static void C_ccall f_10861(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10871)
static void C_fcall f_10871(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10880)
static void C_fcall f_10880(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10892)
static void C_fcall f_10892(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10904)
static void C_fcall f_10904(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10910)
static void C_ccall f_10910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10914)
static void C_fcall f_10914(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10810)
static void C_ccall f_10810(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10849)
static void C_ccall f_10849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10816)
static void C_ccall f_10816(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10820)
static void C_ccall f_10820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10824)
static void C_fcall f_10824(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10779)
static void C_ccall f_10779(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10792)
static void C_ccall f_10792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10748)
static void C_ccall f_10748(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10761)
static void C_ccall f_10761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9937)
static void C_ccall f_9937(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10742)
static void C_ccall f_10742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9943)
static void C_ccall f_9943(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9949)
static void C_fcall f_9949(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9974)
static void C_fcall f_9974(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9989)
static void C_fcall f_9989(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10112)
static void C_fcall f_10112(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10154)
static void C_fcall f_10154(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10181)
static void C_fcall f_10181(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10208)
static void C_fcall f_10208(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10235)
static void C_fcall f_10235(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10279)
static void C_fcall f_10279(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10324)
static void C_fcall f_10324(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10367)
static void C_ccall f_10367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10406)
static void C_fcall f_10406(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10444)
static void C_ccall f_10444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10409)
static void C_ccall f_10409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10371)
static void C_fcall f_10371(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10282)
static void C_ccall f_10282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10297)
static void C_fcall f_10297(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10238)
static void C_ccall f_10238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10115)
static void C_ccall f_10115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10130)
static void C_fcall f_10130(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10057)
static void C_ccall f_10057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10072)
static void C_fcall f_10072(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10007)
static void C_ccall f_10007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9876)
static void C_ccall f_9876(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9880)
static void C_ccall f_9880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9891)
static void C_ccall f_9891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9908)
static void C_fcall f_9908(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9897)
static void C_ccall f_9897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9918)
static void C_ccall f_9918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9883)
static void C_ccall f_9883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9795)
static void C_ccall f_9795(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9807)
static void C_ccall f_9807(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_9814)
static void C_ccall f_9814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9817)
static void C_ccall f_9817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9820)
static void C_ccall f_9820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9823)
static void C_ccall f_9823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9826)
static void C_ccall f_9826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9829)
static void C_ccall f_9829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9832)
static void C_ccall f_9832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9835)
static void C_ccall f_9835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9838)
static void C_ccall f_9838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9841)
static void C_ccall f_9841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9844)
static void C_ccall f_9844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9847)
static void C_ccall f_9847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9850)
static void C_ccall f_9850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9853)
static void C_ccall f_9853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9856)
static void C_ccall f_9856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9859)
static void C_ccall f_9859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9862)
static void C_ccall f_9862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9865)
static void C_ccall f_9865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9868)
static void C_ccall f_9868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9871)
static void C_ccall f_9871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9801)
static void C_ccall f_9801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9684)
static void C_ccall f_9684(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9693)
static void C_ccall f_9693(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9772)
static void C_fcall f_9772(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9695)
static C_word C_fcall f_9695(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_9688)
static void C_ccall f_9688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9663)
static void C_ccall f_9663(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9673)
static void C_ccall f_9673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9614)
static void C_ccall f_9614(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9620)
static void C_ccall f_9620(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9661)
static void C_ccall f_9661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9633)
static void C_ccall f_9633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9577)
static void C_ccall f_9577(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9583)
static void C_ccall f_9583(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9612)
static void C_ccall f_9612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9590)
static void C_fcall f_9590(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9593)
static void C_ccall f_9593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9536)
static void C_ccall f_9536(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9542)
static void C_ccall f_9542(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9575)
static void C_ccall f_9575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9549)
static void C_fcall f_9549(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9552)
static void C_ccall f_9552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9414)
static void C_ccall f_9414(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9443)
static void C_ccall f_9443(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9313)
static void C_ccall f_9313(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9319)
static void C_ccall f_9319(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9345)
static void C_fcall f_9345(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9359)
static void C_ccall f_9359(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9367)
static void C_ccall f_9367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9088)
static void C_ccall f_9088(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9287)
static void C_ccall f_9287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9293)
static void C_ccall f_9293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9168)
static void C_fcall f_9168(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9190)
static void C_ccall f_9190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9208)
static void C_fcall f_9208(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9239)
static void C_ccall f_9239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9125)
static void C_fcall f_9125(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9147)
static void C_ccall f_9147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9091)
static void C_fcall f_9091(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9120)
static void C_ccall f_9120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9099)
static C_word C_fcall f_9099(C_word t0,C_word t1);
C_noret_decl(f_9019)
static void C_ccall f_9019(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9025)
static void C_ccall f_9025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9031)
static void C_fcall f_9031(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9035)
static void C_ccall f_9035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9082)
static void C_ccall f_9082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9046)
static void C_ccall f_9046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9071)
static void C_ccall f_9071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8756)
static void C_ccall f_8756(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8876)
static void C_ccall f_8876(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8883)
static void C_ccall f_8883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9017)
static void C_ccall f_9017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8907)
static void C_fcall f_8907(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8984)
static void C_ccall f_8984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8941)
static void C_ccall f_8941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8944)
static void C_fcall f_8944(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8960)
static void C_ccall f_8960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8760)
static void C_ccall f_8760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8823)
static void C_ccall f_8823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8874)
static void C_ccall f_8874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8827)
static void C_ccall f_8827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8838)
static void C_ccall f_8838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8849)
static void C_fcall f_8849(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8832)
static void C_ccall f_8832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8859)
static void C_ccall f_8859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8844)
static void C_ccall f_8844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8763)
static void C_ccall f_8763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8769)
static void C_ccall f_8769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8777)
static void C_ccall f_8777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8785)
static void C_fcall f_8785(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8795)
static void C_ccall f_8795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8686)
static void C_ccall f_8686(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8692)
static void C_fcall f_8692(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8721)
static void C_fcall f_8721(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8750)
static void C_ccall f_8750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8719)
static void C_ccall f_8719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8602)
static void C_ccall f_8602(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8608)
static void C_fcall f_8608(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8651)
static void C_fcall f_8651(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8680)
static void C_ccall f_8680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8649)
static void C_ccall f_8649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8563)
static void C_ccall f_8563(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8567)
static void C_ccall f_8567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8570)
static void C_ccall f_8570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8573)
static void C_ccall f_8573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8529)
static void C_ccall f_8529(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8535)
static void C_fcall f_8535(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8549)
static void C_ccall f_8549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8553)
static void C_ccall f_8553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8041)
static void C_ccall f_8041(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8480)
static void C_fcall f_8480(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8513)
static void C_ccall f_8513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8493)
static void C_fcall f_8493(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8051)
static void C_ccall f_8051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8059)
static void C_fcall f_8059(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8428)
static void C_ccall f_8428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8442)
static void C_fcall f_8442(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8471)
static void C_ccall f_8471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8440)
static void C_ccall f_8440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8430)
static void C_fcall f_8430(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8222)
static void C_ccall f_8222(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8383)
static void C_fcall f_8383(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8412)
static void C_ccall f_8412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8237)
static void C_ccall f_8237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8334)
static void C_fcall f_8334(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8367)
static void C_ccall f_8367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8347)
static void C_fcall f_8347(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8332)
static void C_ccall f_8332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8240)
static void C_ccall f_8240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8303)
static void C_ccall f_8303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8319)
static void C_ccall f_8319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8311)
static void C_ccall f_8311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8266)
static void C_fcall f_8266(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8295)
static void C_ccall f_8295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8264)
static void C_ccall f_8264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8254)
static void C_fcall f_8254(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8224)
static void C_fcall f_8224(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8228)
static void C_ccall f_8228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8231)
static void C_ccall f_8231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8173)
static void C_ccall f_8173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8176)
static void C_ccall f_8176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8179)
static void C_ccall f_8179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8199)
static void C_ccall f_8199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8157)
static void C_ccall f_8157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8149)
static void C_ccall f_8149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8120)
static void C_ccall f_8120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8110)
static void C_ccall f_8110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8117)
static void C_ccall f_8117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7890)
static void C_ccall f_7890(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_7896)
static void C_ccall f_7896(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7908)
static void C_ccall f_7908(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8006)
static void C_fcall f_8006(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8035)
static void C_ccall f_8035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7912)
static void C_ccall f_7912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7915)
static void C_ccall f_7915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7995)
static void C_ccall f_7995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7941)
static void C_fcall f_7941(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7945)
static void C_ccall f_7945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7920)
static void C_ccall f_7920(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7902)
static void C_ccall f_7902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7836)
static void C_ccall f_7836(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7842)
static void C_fcall f_7842(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7868)
static void C_ccall f_7868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7872)
static void C_ccall f_7872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7152)
static void C_ccall f_7152(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7158)
static void C_fcall f_7158(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7192)
static void C_fcall f_7192(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7645)
static void C_fcall f_7645(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7771)
static void C_fcall f_7771(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7800)
static void C_ccall f_7800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7769)
static void C_ccall f_7769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7762)
static void C_ccall f_7762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7722)
static void C_fcall f_7722(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7751)
static void C_ccall f_7751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7720)
static void C_ccall f_7720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7652)
static void C_ccall f_7652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7664)
static void C_fcall f_7664(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7693)
static void C_ccall f_7693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7662)
static void C_ccall f_7662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7591)
static void C_fcall f_7591(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7632)
static void C_ccall f_7632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7605)
static void C_ccall f_7605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7609)
static void C_ccall f_7609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7534)
static void C_fcall f_7534(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7563)
static void C_ccall f_7563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7532)
static void C_ccall f_7532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7479)
static void C_fcall f_7479(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7508)
static void C_ccall f_7508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7458)
static void C_ccall f_7458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7330)
static void C_ccall f_7330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7404)
static void C_fcall f_7404(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7433)
static void C_ccall f_7433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7336)
static void C_ccall f_7336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7355)
static void C_fcall f_7355(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7388)
static void C_ccall f_7388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7368)
static void C_fcall f_7368(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7345)
static void C_ccall f_7345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7353)
static void C_ccall f_7353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7349)
static void C_ccall f_7349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7259)
static void C_fcall f_7259(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7288)
static void C_ccall f_7288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7257)
static void C_ccall f_7257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7204)
static void C_fcall f_7204(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7233)
static void C_ccall f_7233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7202)
static void C_ccall f_7202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6203)
static void C_ccall f_6203(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7141)
static void C_ccall f_7141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7144)
static void C_ccall f_7144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6206)
static void C_fcall f_6206(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7101)
static void C_fcall f_7101(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7130)
static void C_ccall f_7130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7099)
static void C_ccall f_7099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6829)
static void C_fcall f_6829(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6960)
static void C_ccall f_6960(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7047)
static void C_ccall f_7047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7019)
static void C_fcall f_7019(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7026)
static void C_ccall f_7026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7033)
static void C_ccall f_7033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7023)
static void C_ccall f_7023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6982)
static void C_fcall f_6982(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7011)
static void C_ccall f_7011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6980)
static void C_ccall f_6980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6954)
static void C_ccall f_6954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6916)
static void C_fcall f_6916(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6945)
static void C_ccall f_6945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6914)
static void C_ccall f_6914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6857)
static void C_fcall f_6857(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6886)
static void C_ccall f_6886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6855)
static void C_ccall f_6855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6808)
static void C_ccall f_6808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6792)
static void C_ccall f_6792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6788)
static void C_ccall f_6788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6722)
static void C_fcall f_6722(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6751)
static void C_ccall f_6751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6720)
static void C_ccall f_6720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6630)
static void C_fcall f_6630(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6659)
static void C_ccall f_6659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6628)
static void C_ccall f_6628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6528)
static void C_fcall f_6528(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6540)
static void C_fcall f_6540(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6569)
static void C_ccall f_6569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6538)
static void C_ccall f_6538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6495)
static void C_ccall f_6495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6400)
static void C_ccall f_6400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6433)
static void C_fcall f_6433(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6462)
static void C_ccall f_6462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6423)
static void C_ccall f_6423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6431)
static void C_ccall f_6431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6406)
static void C_fcall f_6406(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6404)
static void C_ccall f_6404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6341)
static void C_fcall f_6341(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6344)
static void C_ccall f_6344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6351)
static void C_ccall f_6351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6289)
static void C_fcall f_6289(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6318)
static void C_ccall f_6318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6287)
static void C_ccall f_6287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6188)
static void C_ccall f_6188(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6173)
static void C_ccall f_6173(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6167)
static void C_ccall f_6167(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6155)
static void C_ccall f_6155(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6146)
static void C_ccall f_6146(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6137)
static void C_ccall f_6137(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6128)
static void C_ccall f_6128(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6119)
static void C_ccall f_6119(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6110)
static void C_ccall f_6110(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6098)
static void C_ccall f_6098(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5599)
static void C_ccall f_5599(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6096)
static void C_ccall f_6096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5603)
static void C_fcall f_5603(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5608)
static void C_ccall f_5608(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5618)
static void C_ccall f_5618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5781)
static void C_fcall f_5781(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5807)
static void C_fcall f_5807(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5883)
static void C_fcall f_5883(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5886)
static void C_ccall f_5886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5889)
static void C_ccall f_5889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5892)
static void C_ccall f_5892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5810)
static void C_ccall f_5810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5794)
static void C_ccall f_5794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5621)
static void C_ccall f_5621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5662)
static void C_fcall f_5662(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5696)
static void C_fcall f_5696(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5730)
static void C_fcall f_5730(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5699)
static void C_ccall f_5699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5665)
static void C_ccall f_5665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5624)
static void C_ccall f_5624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5652)
static void C_ccall f_5652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5627)
static void C_ccall f_5627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5639)
static void C_ccall f_5639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5630)
static void C_ccall f_5630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5533)
static void C_ccall f_5533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5539)
static void C_ccall f_5539(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5546)
static void C_ccall f_5546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5549)
static void C_ccall f_5549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5564)
static void C_fcall f_5564(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5593)
static void C_ccall f_5593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5562)
static void C_ccall f_5562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5552)
static void C_ccall f_5552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5509)
static void C_ccall f_5509(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5515)
static void C_fcall f_5515(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5525)
static void C_ccall f_5525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5468)
static void C_ccall f_5468(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5475)
static void C_ccall f_5475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5478)
static void C_fcall f_5478(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5482)
static void C_fcall f_5482(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5458)
static void C_ccall f_5458(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5449)
static void C_ccall f_5449(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5453)
static void C_ccall f_5453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5392)
static void C_ccall f_5392(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_5392)
static void C_ccall f_5392r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_5396)
static void C_ccall f_5396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5426)
static void C_ccall f_5426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5340)
static void C_ccall f_5340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5344)
static void C_ccall f_5344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5371)
static void C_ccall f_5371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5294)
static void C_ccall f_5294(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5298)
static void C_ccall f_5298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5320)
static void C_ccall f_5320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5276)
static void C_ccall f_5276(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5276)
static void C_ccall f_5276r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5280)
static void C_ccall f_5280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5288)
static void C_ccall f_5288(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5258)
static void C_ccall f_5258(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5262)
static void C_ccall f_5262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4996)
static void C_ccall f_4996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5235)
static void C_fcall f_5235(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5008)
static void C_ccall f_5008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5033)
static void C_ccall f_5033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5044)
static void C_ccall f_5044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5245)
static void C_ccall f_5245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5075)
static void C_ccall f_5075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5212)
static void C_fcall f_5212(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5082)
static void C_ccall f_5082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5107)
static void C_ccall f_5107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5118)
static void C_ccall f_5118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5222)
static void C_ccall f_5222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5149)
static void C_ccall f_5149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5189)
static void C_fcall f_5189(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5156)
static void C_ccall f_5156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5199)
static void C_ccall f_5199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5000)
static void C_ccall f_5000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4939)
static void C_ccall f_4939(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4943)
static void C_ccall f_4943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4947)
static void C_ccall f_4947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4895)
static void C_ccall f_4895(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4901)
static C_word C_fcall f_4901(C_word t0,C_word t1);
C_noret_decl(f_4892)
static void C_ccall f_4892(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4789)
static void C_ccall f_4789(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4798)
static void C_ccall f_4798(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4829)
static void C_ccall f_4829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4879)
static void C_ccall f_4879(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4879)
static void C_ccall f_4879r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4885)
static void C_ccall f_4885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4835)
static void C_ccall f_4835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4863)
static void C_ccall f_4863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4877)
static void C_ccall f_4877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4869)
static void C_ccall f_4869(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4839)
static void C_ccall f_4839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4804)
static void C_ccall f_4804(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4810)
static void C_ccall f_4810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4821)
static void C_ccall f_4821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4818)
static void C_ccall f_4818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4793)
static void C_ccall f_4793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4700)
static void C_ccall f_4700(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4706)
static void C_fcall f_4706(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4771)
static void C_ccall f_4771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4734)
static void C_fcall f_4734(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4764)
static void C_ccall f_4764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4752)
static void C_ccall f_4752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4640)
static void C_ccall f_4640(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4656)
static void C_ccall f_4656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4698)
static void C_ccall f_4698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4662)
static void C_ccall f_4662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4677)
static void C_ccall f_4677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4638)
static void C_ccall f_4638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4598)
static void C_fcall f_4598(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4564)
static void C_ccall f_4564(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4518)
static void C_ccall f_4518(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4498)
static void C_ccall f_4498(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4504)
static void C_ccall f_4504(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4512)
static void C_ccall f_4512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4516)
static void C_ccall f_4516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4467)
static void C_ccall f_4467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4473)
static void C_fcall f_4473(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4488)
static void C_ccall f_4488(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4404)
static void C_ccall f_4404(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4418)
static void C_ccall f_4418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4420)
static void C_fcall f_4420(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4449)
static void C_ccall f_4449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4392)
static void C_ccall f_4392(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4345)
static void C_ccall f_4345(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4345)
static void C_ccall f_4345r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4361)
static void C_ccall f_4361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4373)
static void C_fcall f_4373(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4338)
static void C_ccall f_4338(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4275)
static void C_ccall f_4275(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4329)
static void C_ccall f_4329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4279)
static void C_ccall f_4279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4302)
static void C_ccall f_4302(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4181)
static void C_ccall f_4181(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4197)
static void C_ccall f_4197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4199)
static void C_fcall f_4199(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4221)
static void C_fcall f_4221(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4260)
static void C_ccall f_4260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4228)
static void C_fcall f_4228(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4244)
static void C_ccall f_4244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4232)
static void C_ccall f_4232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4236)
static void C_ccall f_4236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4137)
static void C_ccall f_4137(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4143)
static void C_fcall f_4143(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4167)
static void C_ccall f_4167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4106)
static void C_ccall f_4106(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4129)
static void C_ccall f_4129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4132)
static void C_ccall f_4132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4135)
static void C_ccall f_4135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4079)
static void C_ccall f_4079(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4098)
static void C_ccall f_4098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4101)
static void C_ccall f_4101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4043)
static void C_ccall f_4043(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4049)
static void C_fcall f_4049(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3975)
static void C_ccall f_3975(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3999)
static void C_fcall f_3999(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3978)
static void C_fcall f_3978(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3986)
static void C_ccall f_3986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3990)
static void C_ccall f_3990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3932)
static void C_ccall f_3932(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3938)
static void C_fcall f_3938(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3961)
static void C_ccall f_3961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3965)
static void C_ccall f_3965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3929)
static void C_ccall f_3929(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3859)
static void C_ccall f_3859(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3859)
static void C_ccall f_3859r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3863)
static void C_ccall f_3863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3866)
static void C_fcall f_3866(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3869)
static void C_ccall f_3869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3888)
static void C_fcall f_3888(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3898)
static void C_ccall f_3898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3880)
static void C_ccall f_3880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3883)
static void C_ccall f_3883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3870)
static void C_fcall f_3870(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3840)
static void C_ccall f_3840(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3840)
static void C_ccall f_3840r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3857)
static void C_ccall f_3857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3847)
static void C_ccall f_3847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3850)
static void C_ccall f_3850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3772)
static void C_ccall f_3772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3772)
static void C_ccall f_3772r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3797)
static void C_ccall f_3797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3817)
static void C_fcall f_3817(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3809)
static void C_ccall f_3809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3802)
static void C_ccall f_3802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3827)
static void C_ccall f_3827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3785)
static void C_ccall f_3785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3788)
static void C_ccall f_3788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3791)
static void C_ccall f_3791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3745)
static void C_ccall f_3745(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3745)
static void C_ccall f_3745r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3740)
static void C_ccall f_3740(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_13156)
static void C_fcall trf_13156(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13156(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_13156(t0,t1,t2);}

C_noret_decl(trf_12875)
static void C_fcall trf_12875(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12875(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12875(t0,t1);}

C_noret_decl(trf_12797)
static void C_fcall trf_12797(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12797(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12797(t0,t1);}

C_noret_decl(trf_12651)
static void C_fcall trf_12651(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12651(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12651(t0,t1,t2,t3);}

C_noret_decl(trf_12767)
static void C_fcall trf_12767(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12767(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12767(t0,t1,t2);}

C_noret_decl(trf_12737)
static void C_fcall trf_12737(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12737(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12737(t0,t1,t2);}

C_noret_decl(trf_12701)
static void C_fcall trf_12701(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12701(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12701(t0,t1,t2);}

C_noret_decl(trf_12607)
static void C_fcall trf_12607(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12607(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12607(t0,t1,t2);}

C_noret_decl(trf_12572)
static void C_fcall trf_12572(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12572(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12572(t0,t1,t2);}

C_noret_decl(trf_12336)
static void C_fcall trf_12336(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12336(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12336(t0,t1,t2,t3);}

C_noret_decl(trf_12289)
static void C_fcall trf_12289(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12289(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12289(t0,t1);}

C_noret_decl(trf_12167)
static void C_fcall trf_12167(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12167(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12167(t0,t1,t2);}

C_noret_decl(trf_12139)
static void C_fcall trf_12139(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12139(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12139(t0,t1);}

C_noret_decl(trf_12086)
static void C_fcall trf_12086(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12086(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12086(t0,t1,t2,t3);}

C_noret_decl(trf_12100)
static void C_fcall trf_12100(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12100(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12100(t0,t1,t2);}

C_noret_decl(trf_12088)
static void C_fcall trf_12088(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12088(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12088(t0,t1,t2);}

C_noret_decl(trf_11920)
static void C_fcall trf_11920(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11920(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_11920(t0,t1,t2,t3);}

C_noret_decl(trf_11954)
static void C_fcall trf_11954(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11954(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11954(t0,t1);}

C_noret_decl(trf_11778)
static void C_fcall trf_11778(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11778(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11778(t0,t1,t2);}

C_noret_decl(trf_11874)
static void C_fcall trf_11874(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11874(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11874(t0,t1);}

C_noret_decl(trf_11882)
static void C_fcall trf_11882(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11882(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11882(t0,t1,t2);}

C_noret_decl(trf_11842)
static void C_fcall trf_11842(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11842(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11842(t0,t1);}

C_noret_decl(trf_11810)
static void C_fcall trf_11810(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11810(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11810(t0,t1);}

C_noret_decl(trf_11818)
static void C_fcall trf_11818(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11818(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11818(t0,t1,t2);}

C_noret_decl(trf_11650)
static void C_fcall trf_11650(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11650(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11650(t0,t1);}

C_noret_decl(trf_11219)
static void C_fcall trf_11219(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11219(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11219(t0,t1);}

C_noret_decl(trf_11231)
static void C_fcall trf_11231(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11231(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11231(t0,t1);}

C_noret_decl(trf_11276)
static void C_fcall trf_11276(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11276(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11276(t0,t1);}

C_noret_decl(trf_11241)
static void C_fcall trf_11241(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11241(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11241(t0,t1,t2);}

C_noret_decl(trf_10871)
static void C_fcall trf_10871(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10871(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10871(t0,t1);}

C_noret_decl(trf_10880)
static void C_fcall trf_10880(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10880(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10880(t0,t1);}

C_noret_decl(trf_10892)
static void C_fcall trf_10892(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10892(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10892(t0,t1);}

C_noret_decl(trf_10904)
static void C_fcall trf_10904(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10904(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10904(t0,t1);}

C_noret_decl(trf_10914)
static void C_fcall trf_10914(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10914(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10914(t0,t1,t2);}

C_noret_decl(trf_10824)
static void C_fcall trf_10824(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10824(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10824(t0,t1,t2);}

C_noret_decl(trf_9949)
static void C_fcall trf_9949(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9949(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9949(t0,t1,t2);}

C_noret_decl(trf_9974)
static void C_fcall trf_9974(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9974(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9974(t0,t1);}

C_noret_decl(trf_9989)
static void C_fcall trf_9989(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9989(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9989(t0,t1);}

C_noret_decl(trf_10112)
static void C_fcall trf_10112(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10112(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10112(t0,t1);}

C_noret_decl(trf_10154)
static void C_fcall trf_10154(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10154(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10154(t0,t1);}

C_noret_decl(trf_10181)
static void C_fcall trf_10181(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10181(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10181(t0,t1);}

C_noret_decl(trf_10208)
static void C_fcall trf_10208(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10208(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10208(t0,t1);}

C_noret_decl(trf_10235)
static void C_fcall trf_10235(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10235(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10235(t0,t1);}

C_noret_decl(trf_10279)
static void C_fcall trf_10279(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10279(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10279(t0,t1);}

C_noret_decl(trf_10324)
static void C_fcall trf_10324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10324(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10324(t0,t1);}

C_noret_decl(trf_10406)
static void C_fcall trf_10406(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10406(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10406(t0,t1);}

C_noret_decl(trf_10371)
static void C_fcall trf_10371(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10371(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10371(t0,t1,t2);}

C_noret_decl(trf_10297)
static void C_fcall trf_10297(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10297(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10297(t0,t1);}

C_noret_decl(trf_10130)
static void C_fcall trf_10130(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10130(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10130(t0,t1);}

C_noret_decl(trf_10072)
static void C_fcall trf_10072(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10072(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10072(t0,t1);}

C_noret_decl(trf_9908)
static void C_fcall trf_9908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9908(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9908(t0,t1,t2);}

C_noret_decl(trf_9772)
static void C_fcall trf_9772(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9772(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9772(t0,t1,t2);}

C_noret_decl(trf_9590)
static void C_fcall trf_9590(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9590(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9590(t0,t1);}

C_noret_decl(trf_9549)
static void C_fcall trf_9549(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9549(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9549(t0,t1);}

C_noret_decl(trf_9345)
static void C_fcall trf_9345(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9345(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9345(t0,t1);}

C_noret_decl(trf_9168)
static void C_fcall trf_9168(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9168(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9168(t0,t1,t2,t3);}

C_noret_decl(trf_9208)
static void C_fcall trf_9208(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9208(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9208(t0,t1,t2,t3);}

C_noret_decl(trf_9125)
static void C_fcall trf_9125(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9125(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9125(t0,t1,t2,t3);}

C_noret_decl(trf_9091)
static void C_fcall trf_9091(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9091(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9091(t0,t1,t2,t3);}

C_noret_decl(trf_9031)
static void C_fcall trf_9031(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9031(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9031(t0,t1);}

C_noret_decl(trf_8907)
static void C_fcall trf_8907(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8907(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8907(t0,t1);}

C_noret_decl(trf_8944)
static void C_fcall trf_8944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8944(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8944(t0,t1);}

C_noret_decl(trf_8849)
static void C_fcall trf_8849(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8849(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8849(t0,t1,t2);}

C_noret_decl(trf_8785)
static void C_fcall trf_8785(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8785(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8785(t0,t1,t2);}

C_noret_decl(trf_8692)
static void C_fcall trf_8692(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8692(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8692(t0,t1,t2);}

C_noret_decl(trf_8721)
static void C_fcall trf_8721(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8721(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8721(t0,t1,t2);}

C_noret_decl(trf_8608)
static void C_fcall trf_8608(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8608(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8608(t0,t1,t2);}

C_noret_decl(trf_8651)
static void C_fcall trf_8651(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8651(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8651(t0,t1,t2);}

C_noret_decl(trf_8535)
static void C_fcall trf_8535(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8535(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8535(t0,t1,t2);}

C_noret_decl(trf_8480)
static void C_fcall trf_8480(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8480(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8480(t0,t1,t2,t3);}

C_noret_decl(trf_8493)
static void C_fcall trf_8493(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8493(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8493(t0,t1);}

C_noret_decl(trf_8059)
static void C_fcall trf_8059(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8059(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8059(t0,t1,t2,t3);}

C_noret_decl(trf_8442)
static void C_fcall trf_8442(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8442(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8442(t0,t1,t2);}

C_noret_decl(trf_8430)
static void C_fcall trf_8430(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8430(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8430(t0,t1,t2);}

C_noret_decl(trf_8383)
static void C_fcall trf_8383(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8383(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8383(t0,t1,t2);}

C_noret_decl(trf_8334)
static void C_fcall trf_8334(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8334(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8334(t0,t1,t2,t3);}

C_noret_decl(trf_8347)
static void C_fcall trf_8347(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8347(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8347(t0,t1);}

C_noret_decl(trf_8266)
static void C_fcall trf_8266(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8266(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8266(t0,t1,t2);}

C_noret_decl(trf_8254)
static void C_fcall trf_8254(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8254(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8254(t0,t1,t2);}

C_noret_decl(trf_8224)
static void C_fcall trf_8224(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8224(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8224(t0,t1,t2);}

C_noret_decl(trf_8006)
static void C_fcall trf_8006(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8006(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8006(t0,t1,t2);}

C_noret_decl(trf_7941)
static void C_fcall trf_7941(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7941(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7941(t0,t1);}

C_noret_decl(trf_7842)
static void C_fcall trf_7842(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7842(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7842(t0,t1,t2);}

C_noret_decl(trf_7158)
static void C_fcall trf_7158(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7158(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7158(t0,t1,t2);}

C_noret_decl(trf_7192)
static void C_fcall trf_7192(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7192(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7192(t0,t1);}

C_noret_decl(trf_7645)
static void C_fcall trf_7645(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7645(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7645(t0,t1);}

C_noret_decl(trf_7771)
static void C_fcall trf_7771(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7771(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7771(t0,t1,t2);}

C_noret_decl(trf_7722)
static void C_fcall trf_7722(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7722(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7722(t0,t1,t2);}

C_noret_decl(trf_7664)
static void C_fcall trf_7664(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7664(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7664(t0,t1,t2);}

C_noret_decl(trf_7591)
static void C_fcall trf_7591(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7591(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7591(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7534)
static void C_fcall trf_7534(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7534(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7534(t0,t1,t2);}

C_noret_decl(trf_7479)
static void C_fcall trf_7479(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7479(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7479(t0,t1,t2);}

C_noret_decl(trf_7404)
static void C_fcall trf_7404(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7404(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7404(t0,t1,t2);}

C_noret_decl(trf_7355)
static void C_fcall trf_7355(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7355(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7355(t0,t1,t2,t3);}

C_noret_decl(trf_7368)
static void C_fcall trf_7368(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7368(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7368(t0,t1);}

C_noret_decl(trf_7259)
static void C_fcall trf_7259(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7259(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7259(t0,t1,t2);}

C_noret_decl(trf_7204)
static void C_fcall trf_7204(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7204(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7204(t0,t1,t2);}

C_noret_decl(trf_6206)
static void C_fcall trf_6206(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6206(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6206(t0,t1,t2);}

C_noret_decl(trf_7101)
static void C_fcall trf_7101(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7101(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7101(t0,t1,t2);}

C_noret_decl(trf_6829)
static void C_fcall trf_6829(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6829(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6829(t0,t1);}

C_noret_decl(trf_7019)
static void C_fcall trf_7019(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7019(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7019(t0,t1);}

C_noret_decl(trf_6982)
static void C_fcall trf_6982(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6982(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6982(t0,t1,t2);}

C_noret_decl(trf_6916)
static void C_fcall trf_6916(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6916(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6916(t0,t1,t2);}

C_noret_decl(trf_6857)
static void C_fcall trf_6857(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6857(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6857(t0,t1,t2);}

C_noret_decl(trf_6722)
static void C_fcall trf_6722(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6722(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6722(t0,t1,t2);}

C_noret_decl(trf_6630)
static void C_fcall trf_6630(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6630(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6630(t0,t1,t2);}

C_noret_decl(trf_6528)
static void C_fcall trf_6528(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6528(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6528(t0,t1);}

C_noret_decl(trf_6540)
static void C_fcall trf_6540(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6540(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6540(t0,t1,t2);}

C_noret_decl(trf_6433)
static void C_fcall trf_6433(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6433(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6433(t0,t1,t2);}

C_noret_decl(trf_6406)
static void C_fcall trf_6406(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6406(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6406(t0,t1,t2);}

C_noret_decl(trf_6341)
static void C_fcall trf_6341(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6341(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6341(t0,t1);}

C_noret_decl(trf_6289)
static void C_fcall trf_6289(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6289(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6289(t0,t1,t2);}

C_noret_decl(trf_5603)
static void C_fcall trf_5603(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5603(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5603(t0,t1);}

C_noret_decl(trf_5781)
static void C_fcall trf_5781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5781(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5781(t0,t1,t2);}

C_noret_decl(trf_5807)
static void C_fcall trf_5807(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5807(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5807(t0,t1);}

C_noret_decl(trf_5883)
static void C_fcall trf_5883(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5883(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5883(t0,t1);}

C_noret_decl(trf_5662)
static void C_fcall trf_5662(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5662(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5662(t0,t1);}

C_noret_decl(trf_5696)
static void C_fcall trf_5696(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5696(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5696(t0,t1);}

C_noret_decl(trf_5730)
static void C_fcall trf_5730(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5730(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5730(t0,t1);}

C_noret_decl(trf_5564)
static void C_fcall trf_5564(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5564(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5564(t0,t1,t2);}

C_noret_decl(trf_5515)
static void C_fcall trf_5515(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5515(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5515(t0,t1,t2);}

C_noret_decl(trf_5478)
static void C_fcall trf_5478(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5478(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5478(t0,t1);}

C_noret_decl(trf_5482)
static void C_fcall trf_5482(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5482(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5482(t0,t1,t2);}

C_noret_decl(trf_5235)
static void C_fcall trf_5235(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5235(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5235(t0,t1,t2);}

C_noret_decl(trf_5212)
static void C_fcall trf_5212(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5212(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5212(t0,t1,t2);}

C_noret_decl(trf_5189)
static void C_fcall trf_5189(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5189(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5189(t0,t1,t2);}

C_noret_decl(trf_4706)
static void C_fcall trf_4706(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4706(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4706(t0,t1,t2);}

C_noret_decl(trf_4734)
static void C_fcall trf_4734(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4734(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4734(t0,t1);}

C_noret_decl(trf_4598)
static void C_fcall trf_4598(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4598(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4598(t0,t1);}

C_noret_decl(trf_4473)
static void C_fcall trf_4473(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4473(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4473(t0,t1,t2,t3);}

C_noret_decl(trf_4420)
static void C_fcall trf_4420(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4420(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4420(t0,t1,t2);}

C_noret_decl(trf_4373)
static void C_fcall trf_4373(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4373(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4373(t0,t1);}

C_noret_decl(trf_4199)
static void C_fcall trf_4199(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4199(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4199(t0,t1,t2);}

C_noret_decl(trf_4221)
static void C_fcall trf_4221(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4221(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4221(t0,t1);}

C_noret_decl(trf_4228)
static void C_fcall trf_4228(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4228(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4228(t0,t1);}

C_noret_decl(trf_4143)
static void C_fcall trf_4143(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4143(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4143(t0,t1,t2,t3);}

C_noret_decl(trf_4049)
static void C_fcall trf_4049(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4049(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4049(t0,t1,t2,t3);}

C_noret_decl(trf_3999)
static void C_fcall trf_3999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3999(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3999(t0,t1,t2,t3);}

C_noret_decl(trf_3978)
static void C_fcall trf_3978(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3978(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3978(t0,t1);}

C_noret_decl(trf_3938)
static void C_fcall trf_3938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3938(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3938(t0,t1,t2);}

C_noret_decl(trf_3866)
static void C_fcall trf_3866(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3866(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3866(t0,t1);}

C_noret_decl(trf_3888)
static void C_fcall trf_3888(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3888(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3888(t0,t1,t2);}

C_noret_decl(trf_3870)
static void C_fcall trf_3870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3870(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3870(t0,t1,t2);}

C_noret_decl(trf_3817)
static void C_fcall trf_3817(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3817(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3817(t0,t1,t2);}

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

C_noret_decl(tr9)
static void C_fcall tr9(C_proc9 k) C_regparm C_noret;
C_regparm static void C_fcall tr9(C_proc9 k){
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
(k)(9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_support_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_support_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("support_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(5351)){
C_save(t1);
C_rereclaim2(5351*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,512);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],30,"\010compilercompiler-cleanup-hook");
lf[3]=C_h_intern(&lf[3],26,"\010compilerdebugging-chicken");
lf[4]=C_h_intern(&lf[4],26,"\010compilerdisabled-warnings");
lf[5]=C_h_intern(&lf[5],13,"\010compilerbomb");
lf[6]=C_h_intern(&lf[6],5,"error");
lf[7]=C_h_intern(&lf[7],13,"string-append");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000\032[internal compiler error] ");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\031[internal compiler error]");
lf[10]=C_h_intern(&lf[10],18,"\010compilerdebugging");
lf[11]=C_h_intern(&lf[11],19,"\003sysstandard-output");
lf[12]=C_h_intern(&lf[12],12,"flush-output");
lf[13]=C_h_intern(&lf[13],7,"newline");
lf[14]=C_h_intern(&lf[14],8,"for-each");
lf[15]=C_h_intern(&lf[15],19,"\003syswrite-char/port");
lf[16]=C_h_intern(&lf[16],5,"write");
lf[17]=C_h_intern(&lf[17],5,"force");
lf[18]=C_h_intern(&lf[18],7,"display");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[20]=C_h_intern(&lf[20],4,"quit");
lf[21]=C_h_intern(&lf[21],4,"exit");
lf[22]=C_h_intern(&lf[22],7,"fprintf");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\010\012Error: ");
lf[24]=C_h_intern(&lf[24],18,"current-error-port");
lf[25]=C_h_intern(&lf[25],21,"\003syssyntax-error-hook");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\005\011~s~%");
lf[27]=C_h_intern(&lf[27],16,"print-call-chain");
lf[28]=C_h_intern(&lf[28],18,"\003syscurrent-thread");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000\025\012\011Expansion history:\012");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\032\012Syntax error (~a): ~a~%~%");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\025\012Syntax error: ~a~%~%");
lf[32]=C_h_intern(&lf[32],12,"syntax-error");
lf[33]=C_h_intern(&lf[33],31,"\010compileremit-syntax-trace-info");
lf[34]=C_h_intern(&lf[34],9,"map-llist");
lf[35]=C_h_intern(&lf[35],24,"\010compilercheck-signature");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000@Arguments to inlined call of `~A\047 do not match parameter-list ~A");
lf[37]=C_h_intern(&lf[37],18,"\010compilerreal-name");
lf[38]=C_h_intern(&lf[38],13,"\010compilerposq");
lf[39]=C_h_intern(&lf[39],18,"\010compilerstringify");
lf[40]=C_h_intern(&lf[40],14,"symbol->string");
lf[41]=C_h_intern(&lf[41],17,"get-output-string");
lf[42]=C_h_intern(&lf[42],18,"open-output-string");
lf[43]=C_h_intern(&lf[43],18,"\010compilersymbolify");
lf[44]=C_h_intern(&lf[44],14,"string->symbol");
lf[45]=C_h_intern(&lf[45],26,"\010compilerbuild-lambda-list");
lf[46]=C_h_intern(&lf[46],29,"\010compilerstring->c-identifier");
lf[47]=C_h_intern(&lf[47],24,"\003sysstring->c-identifier");
lf[48]=C_h_intern(&lf[48],21,"\010compilerc-ify-string");
lf[49]=C_h_intern(&lf[49],16,"\003syslist->string");
lf[50]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\042\376\377\016");
lf[51]=C_h_intern(&lf[51],6,"append");
lf[52]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\377\016");
lf[53]=C_h_intern(&lf[53],16,"\003sysstring->list");
lf[54]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\0000\376\003\000\000\002\376\377\012\000\0000\376\377\016");
lf[55]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\0000\376\377\016");
lf[56]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\042\376\003\000\000\002\376\377\012\000\000\047\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000\077\376\377\016");
lf[57]=C_h_intern(&lf[57],28,"\010compilervalid-c-identifier\077");
lf[58]=C_h_intern(&lf[58],3,"any");
lf[59]=C_h_intern(&lf[59],8,"->string");
lf[60]=C_h_intern(&lf[60],14,"\010compilerwords");
lf[61]=C_h_intern(&lf[61],21,"\010compilerwords->bytes");
lf[62]=C_h_intern(&lf[62],34,"\010compilercheck-and-open-input-file");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[64]=C_h_intern(&lf[64],18,"current-input-port");
lf[65]=C_h_intern(&lf[65],15,"open-input-file");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\024Can not open file ~s");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\031(~a) can not open file ~s");
lf[68]=C_h_intern(&lf[68],12,"file-exists\077");
lf[69]=C_h_intern(&lf[69],33,"\010compilerclose-checked-input-file");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[71]=C_h_intern(&lf[71],16,"close-input-port");
lf[72]=C_h_intern(&lf[72],19,"\010compilerfold-inner");
lf[73]=C_h_intern(&lf[73],7,"reverse");
lf[74]=C_h_intern(&lf[74],28,"\010compilerfollow-without-loop");
lf[75]=C_h_intern(&lf[75],21,"\010compilersort-symbols");
lf[76]=C_h_intern(&lf[76],8,"string<\077");
lf[77]=C_h_intern(&lf[77],4,"sort");
lf[78]=C_h_intern(&lf[78],18,"\010compilerconstant\077");
lf[79]=C_h_intern(&lf[79],5,"quote");
lf[80]=C_h_intern(&lf[80],29,"\010compilercollapsable-literal\077");
lf[81]=C_h_intern(&lf[81],19,"\010compilerimmediate\077");
lf[82]=C_h_intern(&lf[82],20,"\010compilerbig-fixnum\077");
lf[83]=C_h_intern(&lf[83],23,"\010compilerbasic-literal\077");
lf[84]=C_h_intern(&lf[84],5,"every");
lf[85]=C_h_intern(&lf[85],12,"vector->list");
lf[86]=C_h_intern(&lf[86],32,"\010compilercanonicalize-begin-body");
lf[87]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[88]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[89]=C_h_intern(&lf[89],3,"let");
lf[90]=C_h_intern(&lf[90],6,"gensym");
lf[91]=C_h_intern(&lf[91],1,"t");
lf[92]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003sysvoid\376\377\016");
lf[93]=C_h_intern(&lf[93],21,"\010compilerstring->expr");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot parse expression: ~s [~a]~%");
lf[95]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[96]=C_h_intern(&lf[96],5,"begin");
lf[97]=C_h_intern(&lf[97],4,"read");
lf[98]=C_h_intern(&lf[98],6,"unfold");
lf[99]=C_h_intern(&lf[99],11,"eof-object\077");
lf[100]=C_h_intern(&lf[100],6,"values");
lf[101]=C_h_intern(&lf[101],22,"with-input-from-string");
lf[102]=C_h_intern(&lf[102],22,"with-exception-handler");
lf[103]=C_h_intern(&lf[103],30,"call-with-current-continuation");
lf[104]=C_h_intern(&lf[104],30,"\010compilerdecompose-lambda-list");
lf[105]=C_h_intern(&lf[105],25,"\003sysdecompose-lambda-list");
lf[106]=C_h_intern(&lf[106],21,"\010compilerllist-length");
lf[107]=C_h_intern(&lf[107],21,"\010compilerllist-match\077");
lf[108]=C_h_intern(&lf[108],30,"\010compilerexpand-profile-lambda");
lf[109]=C_h_intern(&lf[109],29,"\010compilerprofile-lambda-index");
lf[110]=C_h_intern(&lf[110],28,"\010compilerprofile-lambda-list");
lf[111]=C_h_intern(&lf[111],17,"\003sysprofile-entry");
lf[112]=C_h_intern(&lf[112],33,"\010compilerprofile-info-vector-name");
lf[113]=C_h_intern(&lf[113],11,"\004corelambda");
lf[114]=C_h_intern(&lf[114],9,"\003sysapply");
lf[115]=C_h_intern(&lf[115],16,"\003sysprofile-exit");
lf[116]=C_h_intern(&lf[116],16,"\003sysdynamic-wind");
lf[117]=C_h_intern(&lf[117],10,"alist-cons");
lf[118]=C_h_intern(&lf[118],37,"\010compilerinitialize-analysis-database");
lf[119]=C_h_intern(&lf[119],17,"standard-bindings");
lf[120]=C_h_intern(&lf[120],17,"extended-bindings");
lf[121]=C_h_intern(&lf[121],26,"\010compilerinternal-bindings");
lf[122]=C_h_intern(&lf[122],8,"internal");
lf[123]=C_h_intern(&lf[123],8,"\003sysput!");
lf[124]=C_h_intern(&lf[124],18,"\010compilerintrinsic");
lf[125]=C_h_intern(&lf[125],9,"\003syserror");
lf[126]=C_h_intern(&lf[126],26,"\010compilerfoldable-bindings");
lf[127]=C_h_intern(&lf[127],17,"\010compilerfoldable");
lf[128]=C_h_intern(&lf[128],8,"extended");
lf[129]=C_h_intern(&lf[129],8,"standard");
lf[130]=C_h_intern(&lf[130],12,"\010compilerget");
lf[131]=C_h_intern(&lf[131],18,"\003syshash-table-ref");
lf[132]=C_h_intern(&lf[132],16,"\010compilerget-all");
lf[133]=C_h_intern(&lf[133],10,"filter-map");
lf[134]=C_h_intern(&lf[134],13,"\010compilerput!");
lf[135]=C_h_intern(&lf[135],19,"\003syshash-table-set!");
lf[136]=C_h_intern(&lf[136],17,"\010compilercollect!");
lf[137]=C_h_intern(&lf[137],15,"\010compilercount!");
lf[138]=C_h_intern(&lf[138],17,"\010compilerget-list");
lf[139]=C_h_intern(&lf[139],17,"\010compilerget-line");
lf[140]=C_h_intern(&lf[140],24,"\003sysline-number-database");
lf[141]=C_h_intern(&lf[141],19,"\010compilerget-line-2");
lf[142]=C_h_intern(&lf[142],30,"\010compilerfind-lambda-container");
lf[143]=C_h_intern(&lf[143],12,"contained-in");
lf[144]=C_h_intern(&lf[144],37,"\010compilerdisplay-line-number-database");
lf[145]=C_h_intern(&lf[145],3,"cdr");
lf[146]=C_h_intern(&lf[146],3,"map");
lf[147]=C_h_intern(&lf[147],23,"\003syshash-table-for-each");
lf[148]=C_h_intern(&lf[148],34,"\010compilerdisplay-analysis-database");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\005\011css=");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\006\011refs=");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\005\011val=");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\006\011lval=");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\006\011pval=");
lf[154]=C_h_intern(&lf[154],7,"unknown");
lf[155]=C_h_intern(&lf[155],8,"captured");
lf[156]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010captured\376\001\000\000\003cpt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010assigned\376\001\000\000\003set\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005box"
"ed\376\001\000\000\003box\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006global\376\001\000\000\003glo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020assigned-locally\376\001\000\000\003stl\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\014contractable\376\001\000\000\003con\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020standard-binding\376\001\000\000\003stb\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\006simple\376\001\000\000\003sim\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011inlinable\376\001\000\000\003inl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013collapsable\376"
"\001\000\000\003col\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011removable\376\001\000\000\003rem\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010constant\376\001\000\000\003con\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\015inline-target\376\001\000\000\003ilt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020inline-transient\376\001\000\000\003itr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011"
"undefined\376\001\000\000\003und\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011replacing\376\001\000\000\003rpg\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006unused\376\001\000\000\003uud\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\020extended-binding\376\001\000\000\003xtb\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015inline-export\376\001\000\000\003ilx\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\013hidden-refs\376\001\000\000\003hrf\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014customizable\376\001\000\000\003cst\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025has"
"-unused-parameters\376\001\000\000\003hup\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012boxed-rest\376\001\000\000\003bxr\376\377\016");
lf[157]=C_h_intern(&lf[157],5,"value");
lf[158]=C_h_intern(&lf[158],11,"local-value");
lf[159]=C_h_intern(&lf[159],15,"potential-value");
lf[160]=C_h_intern(&lf[160],10,"replacable");
lf[161]=C_h_intern(&lf[161],10,"references");
lf[162]=C_h_intern(&lf[162],10,"call-sites");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\020Illegal property");
lf[164]=C_h_intern(&lf[164],4,"home");
lf[165]=C_h_intern(&lf[165],8,"contains");
lf[166]=C_h_intern(&lf[166],8,"use-expr");
lf[167]=C_h_intern(&lf[167],12,"closure-size");
lf[168]=C_h_intern(&lf[168],14,"rest-parameter");
lf[169]=C_h_intern(&lf[169],18,"captured-variables");
lf[170]=C_h_intern(&lf[170],13,"explicit-rest");
lf[171]=C_h_intern(&lf[171],8,"assigned");
lf[172]=C_h_intern(&lf[172],5,"boxed");
lf[173]=C_h_intern(&lf[173],6,"global");
lf[174]=C_h_intern(&lf[174],12,"contractable");
lf[175]=C_h_intern(&lf[175],16,"standard-binding");
lf[176]=C_h_intern(&lf[176],16,"assigned-locally");
lf[177]=C_h_intern(&lf[177],11,"collapsable");
lf[178]=C_h_intern(&lf[178],9,"removable");
lf[179]=C_h_intern(&lf[179],9,"undefined");
lf[180]=C_h_intern(&lf[180],9,"replacing");
lf[181]=C_h_intern(&lf[181],6,"unused");
lf[182]=C_h_intern(&lf[182],6,"simple");
lf[183]=C_h_intern(&lf[183],9,"inlinable");
lf[184]=C_h_intern(&lf[184],13,"inline-export");
lf[185]=C_h_intern(&lf[185],21,"has-unused-parameters");
lf[186]=C_h_intern(&lf[186],16,"extended-binding");
lf[187]=C_h_intern(&lf[187],12,"customizable");
lf[188]=C_h_intern(&lf[188],8,"constant");
lf[189]=C_h_intern(&lf[189],10,"boxed-rest");
lf[190]=C_h_intern(&lf[190],11,"hidden-refs");
lf[191]=C_h_intern(&lf[191],34,"\010compilerdefault-standard-bindings");
lf[192]=C_h_intern(&lf[192],34,"\010compilerdefault-extended-bindings");
lf[193]=C_h_intern(&lf[193],9,"make-node");
lf[194]=C_h_intern(&lf[194],4,"node");
lf[195]=C_h_intern(&lf[195],5,"node\077");
lf[196]=C_h_intern(&lf[196],10,"node-class");
lf[197]=C_h_intern(&lf[197],15,"node-class-set!");
lf[198]=C_h_intern(&lf[198],14,"\003sysblock-set!");
lf[199]=C_h_intern(&lf[199],15,"node-parameters");
lf[200]=C_h_intern(&lf[200],20,"node-parameters-set!");
lf[201]=C_h_intern(&lf[201],19,"node-subexpressions");
lf[202]=C_h_intern(&lf[202],24,"node-subexpressions-set!");
lf[203]=C_h_intern(&lf[203],16,"\010compilervarnode");
lf[204]=C_h_intern(&lf[204],13,"\004corevariable");
lf[205]=C_h_intern(&lf[205],14,"\010compilerqnode");
lf[206]=C_h_intern(&lf[206],25,"\010compilerbuild-node-graph");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\016bad expression");
lf[208]=C_h_intern(&lf[208],15,"\004coreglobal-ref");
lf[209]=C_h_intern(&lf[209],2,"if");
lf[210]=C_h_intern(&lf[210],14,"\004coreundefined");
lf[211]=C_h_intern(&lf[211],8,"truncate");
lf[212]=C_h_intern(&lf[212],7,"warning");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\0006literal is out of range - will be truncated to integer");
lf[214]=C_h_intern(&lf[214],6,"fixnum");
lf[215]=C_h_intern(&lf[215],11,"number-type");
lf[216]=C_h_intern(&lf[216],6,"unzip1");
lf[217]=C_h_intern(&lf[217],6,"lambda");
lf[218]=C_h_intern(&lf[218],14,"\004coreprimitive");
lf[219]=C_h_intern(&lf[219],11,"\004coreinline");
lf[220]=C_h_intern(&lf[220],13,"\004corecallunit");
lf[221]=C_h_intern(&lf[221],9,"\004coreproc");
lf[222]=C_h_intern(&lf[222],4,"set!");
lf[223]=C_h_intern(&lf[223],9,"\004coreset!");
lf[224]=C_h_intern(&lf[224],29,"\004coreforeign-callback-wrapper");
lf[225]=C_h_intern(&lf[225],5,"sixth");
lf[226]=C_h_intern(&lf[226],5,"fifth");
lf[227]=C_h_intern(&lf[227],20,"\004coreinline_allocate");
lf[228]=C_h_intern(&lf[228],8,"\004coreapp");
lf[229]=C_h_intern(&lf[229],9,"\004corecall");
lf[230]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[231]=C_h_intern(&lf[231],28,"\003syssymbol->qualified-string");
lf[232]=C_h_intern(&lf[232],7,"\003sysget");
lf[233]=C_h_intern(&lf[233],34,"\010compileralways-bound-to-procedure");
lf[234]=C_h_intern(&lf[234],15,"\004coreinline_ref");
lf[235]=C_h_intern(&lf[235],18,"\004coreinline_update");
lf[236]=C_h_intern(&lf[236],19,"\004coreinline_loc_ref");
lf[237]=C_h_intern(&lf[237],22,"\004coreinline_loc_update");
lf[238]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\000\376\377\016");
lf[239]=C_h_intern(&lf[239],1,"o");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\033eliminated procedure checks");
lf[241]=C_h_intern(&lf[241],30,"\010compilerbuild-expression-tree");
lf[242]=C_h_intern(&lf[242],12,"\004coreclosure");
lf[243]=C_h_intern(&lf[243],4,"list");
lf[244]=C_h_intern(&lf[244],4,"last");
lf[245]=C_h_intern(&lf[245],7,"butlast");
lf[246]=C_h_intern(&lf[246],5,"cons*");
lf[247]=C_h_intern(&lf[247],9,"\004corebind");
lf[248]=C_h_intern(&lf[248],10,"\004coreunbox");
lf[249]=C_h_intern(&lf[249],16,"\004corelet_unboxed");
lf[250]=C_h_intern(&lf[250],8,"\004coreref");
lf[251]=C_h_intern(&lf[251],11,"\004coreupdate");
lf[252]=C_h_intern(&lf[252],13,"\004coreupdate_i");
lf[253]=C_h_intern(&lf[253],8,"\004corebox");
lf[254]=C_h_intern(&lf[254],9,"\004corecond");
lf[255]=C_h_intern(&lf[255],21,"\010compilerfold-boolean");
lf[256]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005C_and\376\377\016");
lf[257]=C_h_intern(&lf[257],31,"\010compilerinline-lambda-bindings");
lf[258]=C_h_intern(&lf[258],8,"split-at");
lf[259]=C_h_intern(&lf[259],10,"fold-right");
lf[260]=C_h_intern(&lf[260],4,"take");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[262]=C_h_intern(&lf[262],34,"\010compilercopy-node-tree-and-rename");
lf[263]=C_h_intern(&lf[263],4,"cons");
lf[264]=C_h_intern(&lf[264],9,"alist-ref");
lf[265]=C_h_intern(&lf[265],3,"eq\077");
lf[266]=C_h_intern(&lf[266],16,"inline-transient");
lf[267]=C_h_intern(&lf[267],1,"f");
lf[268]=C_h_intern(&lf[268],18,"\010compilertree-copy");
lf[269]=C_h_intern(&lf[269],19,"\010compilercopy-node!");
lf[270]=C_h_intern(&lf[270],20,"\010compilernode->sexpr");
lf[271]=C_h_intern(&lf[271],20,"\010compilersexpr->node");
lf[272]=C_h_intern(&lf[272],32,"\010compileremit-global-inline-file");
lf[273]=C_h_intern(&lf[273],5,"print");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[275]=C_h_intern(&lf[275],1,"i");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\0001the following procedures can be globally inlined:");
lf[277]=C_h_intern(&lf[277],12,"delete-file*");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\015; END OF FILE");
lf[279]=C_h_intern(&lf[279],2,"pp");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\027; GENERATED BY CHICKEN ");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\006 FROM ");
lf[282]=C_h_intern(&lf[282],24,"\010compilersource-filename");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[284]=C_h_intern(&lf[284],15,"chicken-version");
lf[285]=C_h_intern(&lf[285],19,"with-output-to-file");
lf[286]=C_h_intern(&lf[286],3,"yes");
lf[287]=C_h_intern(&lf[287],2,"no");
lf[288]=C_h_intern(&lf[288],24,"\010compilerinline-max-size");
lf[289]=C_h_intern(&lf[289],15,"\010compilerinline");
lf[290]=C_h_intern(&lf[290],22,"\010compilerinline-global");
lf[291]=C_h_intern(&lf[291],26,"\010compilervariable-visible\077");
lf[292]=C_h_intern(&lf[292],25,"\010compilerload-inline-file");
lf[293]=C_h_intern(&lf[293],20,"with-input-from-file");
lf[294]=C_h_intern(&lf[294],19,"\010compilermatch-node");
lf[295]=C_h_intern(&lf[295],1,"a");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\007matched");
lf[297]=C_h_intern(&lf[297],37,"\010compilerexpression-has-side-effects\077");
lf[298]=C_h_intern(&lf[298],24,"foreign-callback-stub-id");
lf[299]=C_h_intern(&lf[299],4,"find");
lf[300]=C_h_intern(&lf[300],22,"foreign-callback-stubs");
lf[301]=C_h_intern(&lf[301],28,"\010compilersimple-lambda-node\077");
lf[302]=C_h_intern(&lf[302],31,"\010compilerdump-undefined-globals");
lf[303]=C_h_intern(&lf[303],8,"keyword\077");
lf[304]=C_h_intern(&lf[304],29,"\010compilerdump-defined-globals");
lf[305]=C_h_intern(&lf[305],25,"\010compilerdump-global-refs");
lf[306]=C_h_intern(&lf[306],28,"\003systoplevel-definition-hook");
lf[307]=C_h_intern(&lf[307],22,"\010compilerhide-variable");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\042hiding nonexported module bindings");
lf[309]=C_h_intern(&lf[309],36,"\010compilercompute-database-statistics");
lf[310]=C_h_intern(&lf[310],29,"\010compilercurrent-program-size");
lf[311]=C_h_intern(&lf[311],30,"\010compileroriginal-program-size");
lf[312]=C_h_intern(&lf[312],33,"\010compilerprint-program-statistics");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\027;   database entries: \011");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\027;   known call sites: \011");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000\027;   global variables: \011");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000\027;   known procedures: \011");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\042;   variables with known values: \011");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\032 \011original program size: \011");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\023;   program size: \011");
lf[320]=C_h_intern(&lf[320],1,"s");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\023program statistics:");
lf[322]=C_h_intern(&lf[322],35,"\010compilerpprint-expressions-to-file");
lf[323]=C_h_intern(&lf[323],17,"close-output-port");
lf[324]=C_h_intern(&lf[324],12,"pretty-print");
lf[325]=C_h_intern(&lf[325],19,"with-output-to-port");
lf[326]=C_h_intern(&lf[326],16,"open-output-file");
lf[327]=C_h_intern(&lf[327],19,"current-output-port");
lf[328]=C_h_intern(&lf[328],27,"\010compilerforeign-type-check");
lf[329]=C_h_intern(&lf[329],4,"char");
lf[330]=C_h_intern(&lf[330],13,"unsigned-char");
lf[331]=C_h_intern(&lf[331],6,"unsafe");
lf[332]=C_h_intern(&lf[332],25,"\003sysforeign-char-argument");
lf[333]=C_h_intern(&lf[333],3,"int");
lf[334]=C_h_intern(&lf[334],27,"\003sysforeign-fixnum-argument");
lf[335]=C_h_intern(&lf[335],5,"float");
lf[336]=C_h_intern(&lf[336],27,"\003sysforeign-flonum-argument");
lf[337]=C_h_intern(&lf[337],4,"blob");
lf[338]=C_h_intern(&lf[338],14,"scheme-pointer");
lf[339]=C_h_intern(&lf[339],26,"\003sysforeign-block-argument");
lf[340]=C_h_intern(&lf[340],22,"nonnull-scheme-pointer");
lf[341]=C_h_intern(&lf[341],12,"nonnull-blob");
lf[342]=C_h_intern(&lf[342],14,"pointer-vector");
lf[343]=C_h_intern(&lf[343],35,"\003sysforeign-struct-wrapper-argument");
lf[344]=C_h_intern(&lf[344],22,"nonnull-pointer-vector");
lf[345]=C_h_intern(&lf[345],8,"u8vector");
lf[346]=C_h_intern(&lf[346],16,"nonnull-u8vector");
lf[347]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020nonnull-u8vector\376\001\000\000\010u8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-u16vector\376\001\000\000"
"\011u16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020nonnull-s8vector\376\001\000\000\010s8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-s16"
"vector\376\001\000\000\011s16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-u32vector\376\001\000\000\011u32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\021nonnull-s32vector\376\001\000\000\011s32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-f32vector\376\001\000\000\011f32vector\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-f64vector\376\001\000\000\011f64vector\376\377\016");
lf[348]=C_h_intern(&lf[348],7,"integer");
lf[349]=C_h_intern(&lf[349],28,"\003sysforeign-integer-argument");
lf[350]=C_h_intern(&lf[350],9,"integer64");
lf[351]=C_h_intern(&lf[351],30,"\003sysforeign-integer64-argument");
lf[352]=C_h_intern(&lf[352],16,"unsigned-integer");
lf[353]=C_h_intern(&lf[353],37,"\003sysforeign-unsigned-integer-argument");
lf[354]=C_h_intern(&lf[354],18,"unsigned-integer32");
lf[355]=C_h_intern(&lf[355],39,"\003sysforeign-unsigned-integer64-argument");
lf[356]=C_h_intern(&lf[356],9,"c-pointer");
lf[357]=C_h_intern(&lf[357],28,"\003sysforeign-pointer-argument");
lf[358]=C_h_intern(&lf[358],17,"nonnull-c-pointer");
lf[359]=C_h_intern(&lf[359],8,"c-string");
lf[360]=C_h_intern(&lf[360],17,"\003sysmake-c-string");
lf[361]=C_h_intern(&lf[361],27,"\003sysforeign-string-argument");
lf[362]=C_h_intern(&lf[362],16,"nonnull-c-string");
lf[363]=C_h_intern(&lf[363],6,"symbol");
lf[364]=C_h_intern(&lf[364],18,"\003syssymbol->string");
lf[365]=C_h_intern(&lf[365],3,"ref");
lf[366]=C_h_intern(&lf[366],8,"instance");
lf[367]=C_h_intern(&lf[367],12,"instance-ref");
lf[368]=C_h_intern(&lf[368],4,"this");
lf[369]=C_h_intern(&lf[369],8,"slot-ref");
lf[370]=C_h_intern(&lf[370],16,"nonnull-instance");
lf[371]=C_h_intern(&lf[371],5,"const");
lf[372]=C_h_intern(&lf[372],4,"enum");
lf[373]=C_h_intern(&lf[373],15,"nonnull-pointer");
lf[374]=C_h_intern(&lf[374],7,"pointer");
lf[375]=C_h_intern(&lf[375],8,"function");
lf[376]=C_h_intern(&lf[376],27,"\010compilerforeign-type-table");
lf[377]=C_h_intern(&lf[377],17,"nonnull-c-string*");
lf[378]=C_h_intern(&lf[378],26,"nonnull-unsigned-c-string*");
lf[379]=C_h_intern(&lf[379],9,"c-string*");
lf[380]=C_h_intern(&lf[380],17,"unsigned-c-string");
lf[381]=C_h_intern(&lf[381],18,"unsigned-c-string*");
lf[382]=C_h_intern(&lf[382],13,"c-string-list");
lf[383]=C_h_intern(&lf[383],14,"c-string-list*");
lf[384]=C_h_intern(&lf[384],13,"unsigned-long");
lf[385]=C_h_intern(&lf[385],4,"long");
lf[386]=C_h_intern(&lf[386],6,"size_t");
lf[387]=C_h_intern(&lf[387],9,"integer32");
lf[388]=C_h_intern(&lf[388],17,"nonnull-u16vector");
lf[389]=C_h_intern(&lf[389],16,"nonnull-s8vector");
lf[390]=C_h_intern(&lf[390],17,"nonnull-s16vector");
lf[391]=C_h_intern(&lf[391],17,"nonnull-u32vector");
lf[392]=C_h_intern(&lf[392],17,"nonnull-s32vector");
lf[393]=C_h_intern(&lf[393],17,"nonnull-f32vector");
lf[394]=C_h_intern(&lf[394],17,"nonnull-f64vector");
lf[395]=C_h_intern(&lf[395],9,"u16vector");
lf[396]=C_h_intern(&lf[396],8,"s8vector");
lf[397]=C_h_intern(&lf[397],9,"s16vector");
lf[398]=C_h_intern(&lf[398],9,"u32vector");
lf[399]=C_h_intern(&lf[399],9,"s32vector");
lf[400]=C_h_intern(&lf[400],9,"f32vector");
lf[401]=C_h_intern(&lf[401],9,"f64vector");
lf[402]=C_h_intern(&lf[402],6,"double");
lf[403]=C_h_intern(&lf[403],6,"number");
lf[404]=C_h_intern(&lf[404],12,"unsigned-int");
lf[405]=C_h_intern(&lf[405],5,"short");
lf[406]=C_h_intern(&lf[406],14,"unsigned-short");
lf[407]=C_h_intern(&lf[407],4,"byte");
lf[408]=C_h_intern(&lf[408],13,"unsigned-byte");
lf[409]=C_h_intern(&lf[409],5,"int32");
lf[410]=C_h_intern(&lf[410],14,"unsigned-int32");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[412]=C_h_intern(&lf[412],36,"\010compilerforeign-type-convert-result");
lf[413]=C_h_intern(&lf[413],38,"\010compilerforeign-type-convert-argument");
lf[414]=C_h_intern(&lf[414],27,"\010compilerfinal-foreign-type");
lf[415]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[416]=C_h_intern(&lf[416],37,"\010compilerestimate-foreign-result-size");
lf[417]=C_h_intern(&lf[417],18,"unsigned-integer64");
lf[418]=C_h_intern(&lf[418],4,"bool");
lf[419]=C_h_intern(&lf[419],4,"void");
lf[420]=C_h_intern(&lf[420],13,"scheme-object");
lf[421]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[422]=C_h_intern(&lf[422],46,"\010compilerestimate-foreign-result-location-size");
lf[423]=C_decode_literal(C_heaptop,"\376B\000\0005cannot compute size of location for foreign type `~S\047");
lf[424]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[425]=C_h_intern(&lf[425],30,"\010compilerfinish-foreign-result");
lf[426]=C_h_intern(&lf[426],17,"\003syspeek-c-string");
lf[427]=C_h_intern(&lf[427],25,"\003syspeek-nonnull-c-string");
lf[428]=C_h_intern(&lf[428],26,"\003syspeek-and-free-c-string");
lf[429]=C_h_intern(&lf[429],34,"\003syspeek-and-free-nonnull-c-string");
lf[430]=C_h_intern(&lf[430],17,"\003sysintern-symbol");
lf[431]=C_h_intern(&lf[431],22,"\003syspeek-c-string-list");
lf[432]=C_h_intern(&lf[432],31,"\003syspeek-and-free-c-string-list");
lf[433]=C_h_intern(&lf[433],17,"\003sysnull-pointer\077");
lf[434]=C_h_intern(&lf[434],3,"not");
lf[435]=C_h_intern(&lf[435],4,"make");
lf[436]=C_h_intern(&lf[436],3,"and");
lf[437]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010c-string\376\003\000\000\002\376\001\000\000\011c-string*\376\003\000\000\002\376\001\000\000\021unsigned-c-string\376\003\000\000\002\376\001\000\000\022unsign"
"ed-c-string*\376\003\000\000\002\376\001\000\000\020nonnull-c-string\376\003\000\000\002\376\001\000\000\021nonnull-c-string*\376\003\000\000\002\376\001\000\000\030nonnu"
"ll-unsigned-string*\376\377\016");
lf[438]=C_h_intern(&lf[438],16,"\003sysstrip-syntax");
lf[439]=C_h_intern(&lf[439],28,"\010compilerscan-used-variables");
lf[440]=C_h_intern(&lf[440],28,"\010compilerscan-free-variables");
lf[441]=C_h_intern(&lf[441],11,"lset-adjoin");
lf[442]=C_h_intern(&lf[442],23,"\010compilerchop-separator");
lf[443]=C_h_intern(&lf[443],9,"substring");
lf[444]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[445]=C_h_intern(&lf[445],23,"\010compilerchop-extension");
lf[446]=C_h_intern(&lf[446],36,"\010compilermake-block-variable-literal");
lf[447]=C_h_intern(&lf[447],22,"block-variable-literal");
lf[448]=C_h_intern(&lf[448],32,"\010compilerblock-variable-literal\077");
lf[449]=C_h_intern(&lf[449],36,"\010compilerblock-variable-literal-name");
lf[450]=C_h_intern(&lf[450],27,"block-variable-literal-name");
lf[451]=C_h_intern(&lf[451],25,"\010compilermake-random-name");
lf[452]=C_h_intern(&lf[452],6,"random");
lf[453]=C_h_intern(&lf[453],15,"current-seconds");
lf[454]=C_h_intern(&lf[454],23,"\010compilerset-real-name!");
lf[455]=C_h_intern(&lf[455],24,"\010compilerreal-name-table");
lf[456]=C_decode_literal(C_heaptop,"\376B\000\000\004 in ");
lf[457]=C_h_intern(&lf[457],19,"\010compilerreal-name2");
lf[458]=C_h_intern(&lf[458],32,"\010compilerdisplay-real-name-table");
lf[459]=C_h_intern(&lf[459],28,"\010compilersource-info->string");
lf[460]=C_h_intern(&lf[460],4,"conc");
lf[461]=C_decode_literal(C_heaptop,"\376B\000\000\001:");
lf[462]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[463]=C_h_intern(&lf[463],11,"make-string");
lf[464]=C_h_intern(&lf[464],3,"max");
lf[465]=C_h_intern(&lf[465],26,"\010compilersource-info->line");
lf[466]=C_h_intern(&lf[466],12,"string-null\077");
lf[467]=C_h_intern(&lf[467],27,"\010compilerconstant-form-eval");
lf[468]=C_decode_literal(C_heaptop,"\376B\000\000\042folding constant expression failed");
lf[469]=C_decode_literal(C_heaptop,"\376B\000\000\032folded constant expression");
lf[470]=C_decode_literal(C_heaptop,"\376B\000\000.attempt to constant-fold call to non-procedure");
lf[471]=C_h_intern(&lf[471],19,"\010compilerdump-nodes");
lf[472]=C_h_intern(&lf[472],23,"\010compilerread-info-hook");
lf[473]=C_h_intern(&lf[473],27,"\003syscurrent-source-filename");
lf[474]=C_decode_literal(C_heaptop,"\376B\000\000\001:");
lf[475]=C_h_intern(&lf[475],9,"list-info");
lf[476]=C_h_intern(&lf[476],25,"\010compilerread/source-info");
lf[477]=C_h_intern(&lf[477],8,"\003sysread");
lf[478]=C_h_intern(&lf[478],18,"\003sysuser-read-hook");
lf[479]=C_h_intern(&lf[479],15,"foreign-declare");
lf[480]=C_h_intern(&lf[480],7,"declare");
lf[481]=C_h_intern(&lf[481],34,"\010compilerscan-sharp-greater-string");
lf[482]=C_h_intern(&lf[482],18,"\003sysread-char/port");
lf[483]=C_decode_literal(C_heaptop,"\376B\000\000&unexpected end of `#> ... <#\047 sequence");
lf[484]=C_h_intern(&lf[484],6,"hidden");
lf[485]=C_h_intern(&lf[485],19,"\010compilervisibility");
lf[486]=C_h_intern(&lf[486],24,"\010compilerexport-variable");
lf[487]=C_h_intern(&lf[487],8,"exported");
lf[488]=C_h_intern(&lf[488],26,"\010compilerblock-compilation");
lf[489]=C_h_intern(&lf[489],22,"\010compilermark-variable");
lf[490]=C_h_intern(&lf[490],22,"\010compilervariable-mark");
lf[491]=C_h_intern(&lf[491],19,"\010compilerintrinsic\077");
lf[492]=C_h_intern(&lf[492],9,"foldable\077");
lf[493]=C_h_intern(&lf[493],33,"\010compilerload-identifier-database");
lf[494]=C_h_intern(&lf[494],7,"\004coredb");
lf[495]=C_h_intern(&lf[495],9,"read-file");
lf[496]=C_h_intern(&lf[496],21,"\010compilerverbose-mode");
lf[497]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[498]=C_decode_literal(C_heaptop,"\376B\000\000\034loading identifier database ");
lf[499]=C_h_intern(&lf[499],13,"make-pathname");
lf[500]=C_h_intern(&lf[500],15,"repository-path");
lf[501]=C_h_intern(&lf[501],22,"\010compilerprint-version");
lf[502]=C_h_intern(&lf[502],6,"print*");
lf[503]=C_decode_literal(C_heaptop,"\376B\000\000\077(c)2008-2011 The Chicken Team\012(c)2000-2007 Felix L. Winkelmann\012");
lf[504]=C_h_intern(&lf[504],20,"\010compilerprint-usage");
lf[505]=C_decode_literal(C_heaptop,"\376B\000\027\313Usage: chicken FILENAME OPTION ...\012\012  `chicken\047 is the CHICKEN compiler.\012  "
"\012  FILENAME should be a complete source file name with extension, or \042-\042 for\012  s"
"tandard input. OPTION may be one of the following:\012\012  General options:\012\012    -hel"
"p                        display this text and exit\012    -version                "
"     display compiler version and exit\012    -release                     print re"
"lease number and exit\012    -verbose                     display information on co"
"mpilation progress\012\012  File and pathname options:\012\012    -output-file FILENAME     "
"   specifies output-filename, default is \047out.c\047\012    -include-path PATHNAME     "
"  specifies alternative path for included files\012    -to-stdout                  "
" write compiled file to stdout instead of file\012\012  Language options:\012\012    -featur"
"e SYMBOL              register feature identifier\012    -no-feature SYMBOL        "
"   disable built-in feature identifier\012\012  Syntax related options:\012\012    -case-ins"
"ensitive            don\047t preserve case of read symbols\012    -keyword-style STYLE"
"         allow alternative keyword syntax\012                                  (pre"
"fix, suffix or none)\012    -no-parentheses-synonyms     disables list delimiter sy"
"nonyms\012    -no-symbol-escape            disables support for escaped symbols\012   "
" -r5rs-syntax                 disables the Chicken extensions to\012               "
"                   R5RS syntax\012    -compile-syntax              macros are made "
"available at run-time\012    -emit-import-library MODULE  write compile-time module"
" information into\012                                  separate file\012    -emit-all-"
"import-libraries   emit import-libraries for all defined modules\012    -no-module-"
"registration      do not generate module registration code\012    -no-compiler-synt"
"ax          disable expansion of compiler-macros\012    -module                    "
"  wrap compiled code into implicit module\012\012  Translation options:\012\012    -explicit"
"-use                do not use units \047library\047 and \047eval\047 by\012                   "
"               default\012    -check-syntax                stop compilation after m"
"acro-expansion\012    -analyze-only                stop compilation after first ana"
"lysis pass\012\012  Debugging options:\012\012    -no-warnings                 disable warni"
"ngs\012    -debug-level NUMBER          set level of available debugging informatio"
"n\012    -no-trace                    disable tracing information\012    -profile     "
"                executable emits profiling information \012    -profile-name FILENA"
"ME       name of the generated profile information file\012    -accumulate-profile "
"         executable emits profiling information in\012                             "
"     append mode\012    -no-lambda-info              omit additional procedure-info"
"rmation\012    -scrutinize                  perform local flow analysis for static "
"checks\012    -types FILENAME              load additional type database\012\012  Optimiz"
"ation options:\012\012    -optimize-level NUMBER       enable certain sets of optimiza"
"tion options\012    -optimize-leaf-routines      enable leaf routine optimization\012 "
"   -no-usual-integrations       standard procedures may be redefined\012    -unsafe"
"                      disable all safety checks\012    -local                      "
" assume globals are only modified in current\012                                  f"
"ile\012    -block                       enable block-compilation\012    -disable-inter"
"rupts          disable interrupts in compiled code\012    -fixnum-arithmetic       "
"    assume all numbers are fixnums\012    -disable-stack-overflow-checks  disables "
"detection of stack-overflows\012    -inline                      enable inlining\012  "
"  -inline-limit LIMIT          set inlining threshold\012    -inline-global        "
"       enable cross-module inlining\012    -unboxing                    use unboxed"
" temporaries if possible\012    -emit-inline-file FILENAME   generate file with glo"
"bally inlinable\012                                  procedures (implies -inline -l"
"ocal)\012    -consult-inline-file FILENAME  explicitly load inline file\012    -no-arg"
"c-checks              disable argument count checks\012    -no-bound-checks        "
"     disable bound variable checks\012    -no-procedure-checks         disable proc"
"edure call checks\012    -no-procedure-checks-for-usual-bindings\012                  "
"               disable procedure call checks only for usual\012                    "
"              bindings\012    -no-procedure-checks-for-toplevel-bindings\012          "
"                         disable procedure call checks for toplevel\012            "
"                        bindings\012\012  Configuration options:\012\012    -unit NAME      "
"             compile file as a library unit\012    -uses NAME                   dec"
"lare library unit as used.\012    -heap-size NUMBER            specifies heap-size "
"of compiled executable\012    -heap-initial-size NUMBER    specifies heap-size at s"
"tartup time\012    -heap-growth PERCENTAGE      specifies growth-rate of expanding "
"heap\012    -heap-shrinkage PERCENTAGE   specifies shrink-rate of contracting heap\012"
"    -nursery NUMBER  -stack-size NUMBER\012                                 specifi"
"es nursery size of compiled executable\012    -extend FILENAME             load fil"
"e before compilation commences\012    -prelude EXPRESSION          add expression t"
"o front of source file\012    -postlude EXPRESSION         add expression to end of"
" source file\012    -prologue FILENAME           include file before main source fi"
"le\012    -epilogue FILENAME           include file after main source file\012    -dyn"
"amic                     compile as dynamically loadable code\012    -require-exten"
"sion NAME      require and import extension NAME\012\012  Obscure options:\012\012    -debug"
" MODES                 display debugging output for the given modes\012    -raw    "
"                     do not generate implicit init- and exit code               "
"            \012    -emit-external-prototypes-first\012                               "
"  emit prototypes for callbacks before foreign\012                                 "
" declarations\012    -ignore-repository           do not refer to repository for ex"
"tensions\012    -setup-mode                  prefer the current directory when loca"
"ting extensions\012");
lf[506]=C_decode_literal(C_heaptop,"\376B\000\000\012#<node ~a>");
lf[507]=C_h_intern(&lf[507],27,"\003sysregister-record-printer");
lf[508]=C_h_intern(&lf[508],27,"condition-property-accessor");
lf[509]=C_h_intern(&lf[509],3,"exn");
lf[510]=C_h_intern(&lf[510],7,"message");
lf[511]=C_h_intern(&lf[511],19,"condition-predicate");
C_register_lf2(lf,512,create_ptable());
t2=C_mutate(&lf[0] /* (set! c449 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3733,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k3731 */
static void C_ccall f_3733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3733,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3736,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3734 in k3731 */
static void C_ccall f_3736(C_word c,C_word t0,C_word t1){
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
C_word ab[55],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3736,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##compiler#compiler-cleanup-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3740,tmp=(C_word)a,a+=2,tmp));
t3=C_set_block_item(lf[3] /* debugging-chicken */,0,C_SCHEME_END_OF_LIST);
t4=C_set_block_item(lf[4] /* disabled-warnings */,0,C_SCHEME_END_OF_LIST);
t5=C_mutate((C_word*)lf[5]+1 /* (set! ##compiler#bomb ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3745,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[10]+1 /* (set! ##compiler#debugging ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3772,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[20]+1 /* (set! quit ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3840,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[25]+1 /* (set! ##sys#syntax-error-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3859,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[32]+1 /* (set! syntax-error ...) */,*((C_word*)lf[25]+1));
t10=C_mutate((C_word*)lf[33]+1 /* (set! ##compiler#emit-syntax-trace-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3929,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[34]+1 /* (set! map-llist ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3932,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[35]+1 /* (set! ##compiler#check-signature ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3975,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[38]+1 /* (set! ##compiler#posq ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4043,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[39]+1 /* (set! ##compiler#stringify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4079,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[43]+1 /* (set! ##compiler#symbolify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4106,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[45]+1 /* (set! ##compiler#build-lambda-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4137,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[46]+1 /* (set! ##compiler#string->c-identifier ...) */,*((C_word*)lf[47]+1));
t18=C_mutate((C_word*)lf[48]+1 /* (set! ##compiler#c-ify-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4181,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[57]+1 /* (set! ##compiler#valid-c-identifier? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4275,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate((C_word*)lf[60]+1 /* (set! ##compiler#words ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4331,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate((C_word*)lf[61]+1 /* (set! ##compiler#words->bytes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4338,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate((C_word*)lf[62]+1 /* (set! ##compiler#check-and-open-input-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4345,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate((C_word*)lf[69]+1 /* (set! ##compiler#close-checked-input-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4392,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[72]+1 /* (set! ##compiler#fold-inner ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4404,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[74]+1 /* (set! ##compiler#follow-without-loop ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4467,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[75]+1 /* (set! ##compiler#sort-symbols ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4498,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[78]+1 /* (set! ##compiler#constant? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4518,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[80]+1 /* (set! ##compiler#collapsable-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4564,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[81]+1 /* (set! ##compiler#immediate? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4594,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate((C_word*)lf[83]+1 /* (set! ##compiler#basic-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4640,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate((C_word*)lf[86]+1 /* (set! ##compiler#canonicalize-begin-body ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4700,tmp=(C_word)a,a+=2,tmp));
t32=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4785,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:249: condition-predicate */
t33=*((C_word*)lf[511]+1);
((C_proc3)(void*)(*((C_word*)t33+1)))(3,t33,t32,lf[509]);}

/* k4783 in k3734 in k3731 */
static void C_ccall f_4785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4785,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4788,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:250: condition-property-accessor */
t3=*((C_word*)lf[508]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[509],lf[510]);}

/* k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_4788(C_word c,C_word t0,C_word t1){
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
C_word ab[61],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4788,2,t0,t1);}
t2=C_mutate((C_word*)lf[93]+1 /* (set! ##compiler#string->expr ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4789,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[104]+1 /* (set! ##compiler#decompose-lambda-list ...) */,*((C_word*)lf[105]+1));
t4=C_mutate((C_word*)lf[106]+1 /* (set! ##compiler#llist-length ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4892,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[107]+1 /* (set! ##compiler#llist-match? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4895,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[108]+1 /* (set! ##compiler#expand-profile-lambda ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4939,tmp=(C_word)a,a+=2,tmp));
t7=C_SCHEME_TRUE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_mutate((C_word*)lf[118]+1 /* (set! ##compiler#initialize-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4996,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[130]+1 /* (set! ##compiler#get ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5258,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[132]+1 /* (set! ##compiler#get-all ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5276,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[134]+1 /* (set! ##compiler#put! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5294,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[136]+1 /* (set! ##compiler#collect! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5340,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[137]+1 /* (set! ##compiler#count! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5392,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[138]+1 /* (set! ##compiler#get-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5449,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[139]+1 /* (set! ##compiler#get-line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5458,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[141]+1 /* (set! ##compiler#get-line-2 ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5468,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[142]+1 /* (set! ##compiler#find-lambda-container ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5509,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[144]+1 /* (set! ##compiler#display-line-number-database ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5533,tmp=(C_word)a,a+=2,tmp));
t20=C_SCHEME_FALSE;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_mutate((C_word*)lf[148]+1 /* (set! ##compiler#display-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5599,a[2]=t21,tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[193]+1 /* (set! make-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6098,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[195]+1 /* (set! node? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6104,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[196]+1 /* (set! node-class ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6110,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[197]+1 /* (set! node-class-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6119,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[199]+1 /* (set! node-parameters ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6128,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[200]+1 /* (set! node-parameters-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6137,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[201]+1 /* (set! node-subexpressions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6146,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate((C_word*)lf[202]+1 /* (set! node-subexpressions-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6155,tmp=(C_word)a,a+=2,tmp));
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6165,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t32=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13245,tmp=(C_word)a,a+=2,tmp);
/* ##sys#register-record-printer */
t33=*((C_word*)lf[507]+1);
((C_proc4)(void*)(*((C_word*)t33+1)))(4,t33,t31,lf[194],t32);}

/* a13244 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_13245(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13245,4,t0,t1,t2,t3);}
t4=C_slot(t2,C_fix(1));
/* support.scm:465: fprintf */
t5=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t3,lf[506],t4);}

/* k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_6165(C_word c,C_word t0,C_word t1){
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
C_word ab[127],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6165,2,t0,t1);}
t2=C_mutate((C_word*)lf[193]+1 /* (set! make-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6167,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate((C_word*)lf[203]+1 /* (set! ##compiler#varnode ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6173,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[205]+1 /* (set! ##compiler#qnode ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6188,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[206]+1 /* (set! ##compiler#build-node-graph ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6203,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[241]+1 /* (set! ##compiler#build-expression-tree ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7152,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[255]+1 /* (set! ##compiler#fold-boolean ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7836,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[257]+1 /* (set! ##compiler#inline-lambda-bindings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7890,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[262]+1 /* (set! ##compiler#copy-node-tree-and-rename ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8041,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[268]+1 /* (set! ##compiler#tree-copy ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8529,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[269]+1 /* (set! ##compiler#copy-node! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8563,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[270]+1 /* (set! ##compiler#node->sexpr ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8602,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[271]+1 /* (set! ##compiler#sexpr->node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8686,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[272]+1 /* (set! ##compiler#emit-global-inline-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8756,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[292]+1 /* (set! ##compiler#load-inline-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9019,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[294]+1 /* (set! ##compiler#match-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9088,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[297]+1 /* (set! ##compiler#expression-has-side-effects? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9313,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[301]+1 /* (set! ##compiler#simple-lambda-node? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9414,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[302]+1 /* (set! ##compiler#dump-undefined-globals ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9536,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate((C_word*)lf[304]+1 /* (set! ##compiler#dump-defined-globals ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9577,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate((C_word*)lf[305]+1 /* (set! ##compiler#dump-global-refs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9614,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate((C_word*)lf[306]+1 /* (set! ##sys#toplevel-definition-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9663,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate((C_word*)lf[309]+1 /* (set! ##compiler#compute-database-statistics ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9684,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[312]+1 /* (set! ##compiler#print-program-statistics ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9795,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[322]+1 /* (set! ##compiler#pprint-expressions-to-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9876,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[328]+1 /* (set! ##compiler#foreign-type-check ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9937,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[412]+1 /* (set! ##compiler#foreign-type-convert-result ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10748,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[413]+1 /* (set! ##compiler#foreign-type-convert-argument ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10779,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[414]+1 /* (set! ##compiler#final-foreign-type ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10810,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate((C_word*)lf[416]+1 /* (set! ##compiler#estimate-foreign-result-size ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10855,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate((C_word*)lf[422]+1 /* (set! ##compiler#estimate-foreign-result-location-size ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11197,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate((C_word*)lf[425]+1 /* (set! ##compiler#finish-foreign-result ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11530,tmp=(C_word)a,a+=2,tmp));
t33=C_mutate((C_word*)lf[439]+1 /* (set! ##compiler#scan-used-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11772,tmp=(C_word)a,a+=2,tmp));
t34=C_mutate((C_word*)lf[440]+1 /* (set! ##compiler#scan-free-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11917,tmp=(C_word)a,a+=2,tmp));
t35=C_mutate((C_word*)lf[442]+1 /* (set! ##compiler#chop-separator ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12129,tmp=(C_word)a,a+=2,tmp));
t36=C_mutate((C_word*)lf[445]+1 /* (set! ##compiler#chop-extension ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12158,tmp=(C_word)a,a+=2,tmp));
t37=C_mutate((C_word*)lf[446]+1 /* (set! ##compiler#make-block-variable-literal ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12200,tmp=(C_word)a,a+=2,tmp));
t38=C_mutate((C_word*)lf[448]+1 /* (set! ##compiler#block-variable-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12206,tmp=(C_word)a,a+=2,tmp));
t39=C_mutate((C_word*)lf[449]+1 /* (set! ##compiler#block-variable-literal-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12212,tmp=(C_word)a,a+=2,tmp));
t40=C_mutate((C_word*)lf[451]+1 /* (set! ##compiler#make-random-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12221,tmp=(C_word)a,a+=2,tmp));
t41=C_mutate((C_word*)lf[454]+1 /* (set! ##compiler#set-real-name! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12280,tmp=(C_word)a,a+=2,tmp));
t42=C_mutate((C_word*)lf[37]+1 /* (set! ##compiler#real-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12286,tmp=(C_word)a,a+=2,tmp));
t43=C_mutate((C_word*)lf[457]+1 /* (set! ##compiler#real-name2 ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12377,tmp=(C_word)a,a+=2,tmp));
t44=C_mutate((C_word*)lf[458]+1 /* (set! ##compiler#display-real-name-table ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12389,tmp=(C_word)a,a+=2,tmp));
t45=C_mutate((C_word*)lf[459]+1 /* (set! ##compiler#source-info->string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12410,tmp=(C_word)a,a+=2,tmp));
t46=C_mutate((C_word*)lf[465]+1 /* (set! ##compiler#source-info->line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12444,tmp=(C_word)a,a+=2,tmp));
t47=C_mutate((C_word*)lf[466]+1 /* (set! string-null? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12462,tmp=(C_word)a,a+=2,tmp));
t48=C_mutate((C_word*)lf[467]+1 /* (set! ##compiler#constant-form-eval ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12465,tmp=(C_word)a,a+=2,tmp));
t49=C_mutate((C_word*)lf[471]+1 /* (set! ##compiler#dump-nodes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12642,tmp=(C_word)a,a+=2,tmp));
t50=C_mutate((C_word*)lf[472]+1 /* (set! ##compiler#read-info-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12790,tmp=(C_word)a,a+=2,tmp));
t51=C_mutate((C_word*)lf[476]+1 /* (set! ##compiler#read/source-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12835,tmp=(C_word)a,a+=2,tmp));
t52=*((C_word*)lf[478]+1);
t53=C_mutate((C_word*)lf[478]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12841,a[2]=t52,tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[481]+1 /* (set! ##compiler#scan-sharp-greater-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12866,tmp=(C_word)a,a+=2,tmp));
t55=C_mutate((C_word*)lf[82]+1 /* (set! ##compiler#big-fixnum? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12935,tmp=(C_word)a,a+=2,tmp));
t56=C_mutate((C_word*)lf[307]+1 /* (set! ##compiler#hide-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12959,tmp=(C_word)a,a+=2,tmp));
t57=C_mutate((C_word*)lf[486]+1 /* (set! ##compiler#export-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12992,tmp=(C_word)a,a+=2,tmp));
t58=C_mutate((C_word*)lf[291]+1 /* (set! ##compiler#variable-visible? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13025,tmp=(C_word)a,a+=2,tmp));
t59=C_mutate((C_word*)lf[489]+1 /* (set! ##compiler#mark-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13046,tmp=(C_word)a,a+=2,tmp));
t60=C_mutate((C_word*)lf[490]+1 /* (set! ##compiler#variable-mark ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13074,tmp=(C_word)a,a+=2,tmp));
t61=C_mutate((C_word*)lf[491]+1 /* (set! ##compiler#intrinsic? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13080,tmp=(C_word)a,a+=2,tmp));
t62=C_mutate((C_word*)lf[492]+1 /* (set! foldable? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13091,tmp=(C_word)a,a+=2,tmp));
t63=C_mutate((C_word*)lf[493]+1 /* (set! ##compiler#load-identifier-database ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13102,tmp=(C_word)a,a+=2,tmp));
t64=C_mutate((C_word*)lf[501]+1 /* (set! ##compiler#print-version ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13195,tmp=(C_word)a,a+=2,tmp));
t65=C_mutate((C_word*)lf[504]+1 /* (set! ##compiler#print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13233,tmp=(C_word)a,a+=2,tmp));
t66=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t66+1)))(2,t66,C_SCHEME_UNDEFINED);}

/* f_13233 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_13233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13233,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13237,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1449: print-version */
t3=*((C_word*)lf[501]+1);
f_13195(2,t3,t2);}

/* k13235 */
static void C_ccall f_13237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13237,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13240,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1450: newline */
t3=*((C_word*)lf[13]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k13238 in k13235 */
static void C_ccall f_13240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1451: display */
t2=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[505]);}

/* f_13195 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_13195(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_13195r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_13195r(t0,t1,t2);}}

static void C_ccall f_13195r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13199,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_13199(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_13199(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k13197 */
static void C_ccall f_13199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13202,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* support.scm:1445: print* */
t3=*((C_word*)lf[502]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[503]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f14460,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1446: chicken-version */
t4=*((C_word*)lf[284]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}}

/* f14460 in k13197 */
static void C_ccall f14460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1446: print */
t2=*((C_word*)lf[273]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k13200 in k13197 */
static void C_ccall f_13202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13202,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13209,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1446: chicken-version */
t3=*((C_word*)lf[284]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_TRUE);}

/* k13207 in k13200 in k13197 */
static void C_ccall f_13209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1446: print */
t2=*((C_word*)lf[273]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_13102 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_13102(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13102,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13106,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1429: repository-path */
t4=*((C_word*)lf[500]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k13104 */
static void C_ccall f_13106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13106,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13112,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13193,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1430: make-pathname */
t4=*((C_word*)lf[499]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k13191 in k13104 */
static void C_ccall f_13193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1430: file-exists? */
t2=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k13110 in k13104 */
static void C_ccall f_13112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13112,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13118,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(*((C_word*)lf[496]+1))){
t3=*((C_word*)lf[11]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13180,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* display */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[498],t3);}
else{
t3=t2;
f_13118(2,t3,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k13178 in k13110 in k13104 */
static void C_ccall f_13180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13180,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13183,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k13181 in k13178 in k13110 in k13104 */
static void C_ccall f_13183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[497],((C_word*)t0)[2]);}

/* k13184 in k13181 in k13178 in k13110 in k13104 */
static void C_ccall f_13186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* k13116 in k13110 in k13104 */
static void C_ccall f_13118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13118,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13148,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1439: read-file */
t3=*((C_word*)lf[495]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k13146 in k13116 in k13110 in k13104 */
static void C_ccall f_13148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13148,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[14]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13156,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_13156(t6,((C_word*)t0)[2],t1);}

/* for-each-loop3577 in k13146 in k13116 in k13110 in k13104 */
static void C_fcall f_13156(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13156,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13166,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13130,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13134,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1438: ##sys#get */
t8=*((C_word*)lf[232]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t5,lf[494]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k13132 in for-each-loop3577 in k13146 in k13116 in k13110 in k13104 */
static void C_ccall f_13134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13134,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_i_cdr(((C_word*)t0)[3]);
t4=C_a_i_list1(&a,1,t3);
/* support.scm:1438: append */
t5=*((C_word*)lf[51]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t2,t4);}

/* k13128 in for-each-loop3577 in k13146 in k13116 in k13110 in k13104 */
static void C_ccall f_13130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1436: ##sys#put! */
t2=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[494],t1);}

/* k13164 in for-each-loop3577 in k13146 in k13116 in k13110 in k13104 */
static void C_ccall f_13166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_13156(t3,((C_word*)t0)[2],t2);}

/* f_13091 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_13091(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13091,3,t0,t1,t2);}
/* tweaks.scm:53: ##sys#get */
t3=*((C_word*)lf[232]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[127]);}

/* f_13080 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_13080(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13080,3,t0,t1,t2);}
/* tweaks.scm:53: ##sys#get */
t3=*((C_word*)lf[232]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[124]);}

/* f_13074 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_13074(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13074,4,t0,t1,t2,t3);}
/* support.scm:1420: ##sys#get */
t4=*((C_word*)lf[232]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* f_13046 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_13046(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_13046r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_13046r(t0,t1,t2,t3,t4);}}

static void C_ccall f_13046r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13050,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
/* support.scm:1417: ##sys#put! */
t6=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,C_SCHEME_TRUE);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=C_i_car(t4);
/* support.scm:1417: ##sys#put! */
t8=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,t2,t3,t7);}
else{
/* ##sys#error */
t7=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k13048 */
static void C_ccall f_13050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1417: ##sys#put! */
t2=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_13025 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_13025(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13025,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13029,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1410: ##sys#get */
t4=*((C_word*)lf[232]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[485]);}

/* k13027 */
static void C_ccall f_13029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(t1,lf[484]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_eqp(t1,lf[487]);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?C_SCHEME_TRUE:C_i_not(*((C_word*)lf[488]+1))));}}

/* f_12992 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12992(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12992,3,t0,t1,t2);}
t3=C_a_i_list(&a,1,lf[487]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12998,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* tweaks.scm:50: ##sys#put! */
t5=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,lf[485],C_SCHEME_TRUE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=C_i_car(t3);
/* tweaks.scm:50: ##sys#put! */
t7=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t1,t2,lf[485],t6);}
else{
/* ##sys#error */
t6=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k12996 */
static void C_ccall f_12998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tweaks.scm:50: ##sys#put! */
t2=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[485],t1);}

/* f_12959 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12959(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12959,3,t0,t1,t2);}
t3=C_a_i_list(&a,1,lf[484]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12965,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* tweaks.scm:50: ##sys#put! */
t5=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,lf[485],C_SCHEME_TRUE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=C_i_car(t3);
/* tweaks.scm:50: ##sys#put! */
t7=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t1,t2,lf[485],t6);}
else{
/* ##sys#error */
t6=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k12963 */
static void C_ccall f_12965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tweaks.scm:50: ##sys#put! */
t2=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[485],t1);}

/* f_12935 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12935(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12935,3,t0,t1,t2);}
if(C_truep(C_fixnump(t2))){
if(C_truep(C_fudge(C_fix(3)))){
t3=C_fixnum_greaterp(t2,C_fix(1073741823));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:C_fixnum_lessp(t2,C_fix(-1073741824))));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_12866 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12866(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12866,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12870,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1372: open-output-string */
t4=*((C_word*)lf[42]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k12868 */
static void C_ccall f_12870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12870,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12875,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_12875(t5,((C_word*)t0)[2]);}

/* loop in k12868 */
static void C_fcall f_12875(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12875,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* read-char/port */
t3=*((C_word*)lf[482]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k12877 in loop in k12868 */
static void C_ccall f_12879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12879,2,t0,t1);}
if(C_truep(C_eofp(t1))){
/* support.scm:1375: quit */
t2=*((C_word*)lf[20]+1);
f_3840(3,t2,((C_word*)t0)[5],lf[483]);}
else{
if(C_truep(C_i_char_equalp(t1,C_make_character(10)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12897,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1377: newline */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
if(C_truep(C_i_char_equalp(t1,C_make_character(60)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12909,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* read-char/port */
t3=*((C_word*)lf[482]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12930,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[3]);}}}}

/* k12928 in k12877 in loop in k12868 */
static void C_ccall f_12930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1389: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_12875(t2,((C_word*)t0)[2]);}

/* k12907 in k12877 in loop in k12868 */
static void C_ccall f_12909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12909,2,t0,t1);}
t2=C_eqp(C_make_character(35),t1);
if(C_truep(t2)){
/* support.scm:1382: get-output-string */
t3=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12921,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t4=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(60),((C_word*)t0)[3]);}}

/* k12919 in k12907 in k12877 in loop in k12868 */
static void C_ccall f_12921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12921,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12924,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k12922 in k12919 in k12907 in k12877 in loop in k12868 */
static void C_ccall f_12924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1386: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_12875(t2,((C_word*)t0)[2]);}

/* k12895 in k12877 in loop in k12868 */
static void C_ccall f_12897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1378: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_12875(t2,((C_word*)t0)[2]);}

/* f_12841 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12841(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12841,4,t0,t1,t2,t3);}
if(C_truep(C_i_char_equalp(C_make_character(62),t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12851,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* read-char/port */
t5=*((C_word*)lf[482]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}
else{
/* support.scm:1369: old-hook */
t4=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}}

/* k12849 */
static void C_ccall f_12851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12851,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12854,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1367: scan-sharp-greater-string */
t3=*((C_word*)lf[481]+1);
f_12866(3,t3,t2,((C_word*)t0)[2]);}

/* k12852 in k12849 */
static void C_ccall f_12854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12854,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[479],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[480],t2));}

/* f_12835 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12835(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12835,3,t0,t1,t2);}
/* support.scm:1357: ##sys#read */
t3=*((C_word*)lf[477]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,*((C_word*)lf[472]+1));}

/* f_12790 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12790(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_12790,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12794,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12797,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=C_eqp(lf[475],t2);
if(C_truep(t7)){
t8=C_i_car(t3);
t9=t6;
f_12797(t9,C_i_symbolp(t8));}
else{
t8=t6;
f_12797(t8,C_SCHEME_FALSE);}}

/* k12795 */
static void C_fcall f_12797(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12797,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12808,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12812,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1351: conc */
t5=*((C_word*)lf[460]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,*((C_word*)lf[473]+1),lf[474],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}}

/* k12810 in k12795 */
static void C_ccall f_12812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12812,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12816,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* support.scm:1352: ##sys#hash-table-ref */
t4=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,*((C_word*)lf[140]+1),t3);}

/* k12814 in k12810 in k12795 */
static void C_ccall f_12816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* support.scm:1350: alist-cons */
t3=*((C_word*)lf[117]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}
else{
/* support.scm:1350: alist-cons */
t2=*((C_word*)lf[117]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}}

/* k12806 in k12795 */
static void C_ccall f_12808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1347: ##sys#hash-table-set! */
t2=*((C_word*)lf[135]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],*((C_word*)lf[140]+1),((C_word*)t0)[2],t1);}

/* k12792 */
static void C_ccall f_12794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_12642 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12642(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12642,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12646,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12651,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_12651(t7,t3,C_fix(0),t2);}

/* loop */
static void C_fcall f_12651(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12651,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=C_slot(t4,C_fix(1));
t6=t3;
t7=C_slot(t6,C_fix(2));
t8=t3;
t9=C_slot(t8,C_fix(3));
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12679,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=t3,a[6]=t9,a[7]=((C_word*)t0)[2],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* support.scm:1328: make-string */
t11=*((C_word*)lf[463]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,t2,C_make_character(32));}

/* k12677 in loop */
static void C_ccall f_12679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12679,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[8],C_fix(2));
t3=*((C_word*)lf[11]+1);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12685,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=t2,a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* write-char/port */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(10),t3);}

/* k12683 in k12677 in loop */
static void C_ccall f_12685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12685,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12688,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* display */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k12686 in k12683 in k12677 in loop */
static void C_ccall f_12688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12688,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12691,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(60),((C_word*)t0)[3]);}

/* k12689 in k12686 in k12683 in k12677 in loop */
static void C_ccall f_12691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12691,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12694,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* display */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k12692 in k12689 in k12686 in k12683 in k12677 in loop */
static void C_ccall f_12694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12694,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12697,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* write-char/port */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[2]);}

/* k12695 in k12692 in k12689 in k12686 in k12683 in k12677 in loop */
static void C_ccall f_12697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12697,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12700,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* write */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k12698 in k12695 in k12692 in k12689 in k12686 in k12683 in k12677 in loop */
static void C_ccall f_12700(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12700,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12701,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[4],lf[14]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12767,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_12767(t8,t4,((C_word*)t0)[4]);}

/* for-each-loop3383 in k12698 in k12695 in k12692 in k12689 in k12686 in k12683 in k12677 in loop */
static void C_fcall f_12767(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12767,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12777,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g33843390 */
t5=((C_word*)t0)[2];
f_12701(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12775 in for-each-loop3383 in k12698 in k12695 in k12692 in k12689 in k12686 in k12683 in k12677 in loop */
static void C_ccall f_12777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12767(t3,((C_word*)t0)[2],t2);}

/* k12709 in k12698 in k12695 in k12692 in k12689 in k12686 in k12683 in k12677 in loop */
static void C_ccall f_12711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12711,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12717,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_greaterp(t2,C_fix(4)))){
t4=*((C_word*)lf[11]+1);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12726,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_make_character(91),t4);}
else{
/* write-char/port */
t4=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],C_make_character(62),*((C_word*)lf[11]+1));}}

/* k12724 in k12709 in k12698 in k12695 in k12692 in k12689 in k12686 in k12683 in k12677 in loop */
static void C_ccall f_12726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12726,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12729,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(4));
/* write */
t4=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* k12727 in k12724 in k12709 in k12698 in k12695 in k12692 in k12689 in k12686 in k12683 in k12677 in loop */
static void C_ccall f_12729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12729,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12732,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12737,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_12737(t6,t2,C_fix(5));}

/* doloop3415 in k12727 in k12724 in k12709 in k12698 in k12695 in k12692 in k12689 in k12686 in k12683 in k12677 in loop */
static void C_fcall f_12737(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12737,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=*((C_word*)lf[11]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12747,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* write-char/port */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(32),t3);}}

/* k12745 in doloop3415 in k12727 in k12724 in k12709 in k12698 in k12695 in k12692 in k12689 in k12686 in k12683 in k12677 in loop */
static void C_ccall f_12747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12750,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[3],((C_word*)t0)[6]);
/* write */
t4=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* k12748 in k12745 in doloop3415 in k12727 in k12724 in k12709 in k12698 in k12695 in k12692 in k12689 in k12686 in k12683 in k12677 in loop */
static void C_ccall f_12750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12737(t3,((C_word*)t0)[2],t2);}

/* k12730 in k12727 in k12724 in k12709 in k12698 in k12695 in k12692 in k12689 in k12686 in k12683 in k12677 in loop */
static void C_ccall f_12732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(93),*((C_word*)lf[11]+1));}

/* k12715 in k12709 in k12698 in k12695 in k12692 in k12689 in k12686 in k12683 in k12677 in loop */
static void C_ccall f_12717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(62),*((C_word*)lf[11]+1));}

/* g3384 in k12698 in k12695 in k12692 in k12689 in k12686 in k12683 in k12677 in loop */
static void C_fcall f_12701(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12701,NULL,3,t0,t1,t2);}
/* g33983399 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_12651(t3,t1,((C_word*)t0)[2],t2);}

/* k12644 */
static void C_ccall f_12646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1340: newline */
t2=*((C_word*)lf[13]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_12465 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12465(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_12465,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_i_check_list_2(t3,lf[146]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12486,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12607,a[2]=t6,a[3]=t12,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_12607(t14,t10,t3);}

/* map-loop3277 */
static void C_fcall f_12607(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_12607,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(2));
t5=C_i_car(t4);
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

/* k12484 */
static void C_ccall f_12486(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12486,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(t1,lf[146]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12570,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12572,a[2]=t3,a[3]=t9,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_12572(t11,t7,t1);}

/* map-loop3308 in k12484 */
static void C_fcall f_12572(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_12572,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[79],t3);
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

/* k12568 in k12484 */
static void C_ccall f_12570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12570,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12492,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* call-with-current-continuation */
t5=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a12496 in k12568 in k12484 */
static void C_ccall f_12497(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12497,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12503,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12518,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* with-exception-handler */
t5=*((C_word*)lf[102]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* a12517 in a12496 in k12568 in k12484 */
static void C_ccall f_12518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12518,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12524,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12548,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a12547 in a12517 in a12496 in k12568 in k12484 */
static void C_ccall f_12548(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_12548r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_12548r(t0,t1,t2);}}

static void C_ccall f_12548r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12554,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* k33363342 */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* a12553 in a12547 in a12517 in a12496 in k12568 in k12484 */
static void C_ccall f_12554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12554,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a12523 in a12517 in a12496 in k12568 in k12484 */
static void C_ccall f_12524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12524,2,t0,t1);}
t2=C_slot(((C_word*)t0)[5],C_fix(0));
if(C_truep(C_i_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12537,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t3,t2,((C_word*)t0)[2]);}
else{
/* support.scm:1318: bomb */
t3=*((C_word*)lf[5]+1);
f_3745(4,t3,t1,lf[470],((C_word*)t0)[3]);}}

/* k12535 in a12523 in a12517 in a12496 in k12568 in k12484 */
static void C_ccall f_12537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12537,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12540,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1316: debugging */
t3=*((C_word*)lf[10]+1);
f_3772(5,t3,t2,lf[239],lf[469],((C_word*)t0)[2]);}

/* k12538 in k12535 in a12523 in a12517 in a12496 in k12568 in k12484 */
static void C_ccall f_12540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1317: k */
t2=((C_word*)t0)[5];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],C_SCHEME_TRUE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a12502 in a12496 in k12568 in k12484 */
static void C_ccall f_12503(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12503,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12509,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* k33363342 */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* a12508 in a12502 in a12496 in k12568 in k12484 */
static void C_ccall f_12509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12509,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12513,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1310: debugging */
t3=*((C_word*)lf[10]+1);
f_3772(5,t3,t2,lf[239],lf[468],((C_word*)t0)[2]);}

/* k12511 in a12508 in a12502 in a12496 in k12568 in k12484 */
static void C_ccall f_12513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1311: k */
t2=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k12490 in k12568 in k12484 */
static void C_ccall f_12492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g33403341 */
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_12462 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12462(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12462,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_string_null_p(*((C_word*)lf[320]+1)));}

/* f_12444 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12444(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12444,3,t0,t1,t2);}
if(C_truep(C_i_listp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_car(t2));}
else{
if(C_truep(t2)){
/* support.scm:1297: ->string */
t3=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}}

/* f_12410 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12410(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12410,3,t0,t1,t2);}
if(C_truep(C_i_listp(t2))){
t3=C_i_car(t2);
t4=C_i_cadr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12430,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12434,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_i_string_length(t3);
t8=C_a_i_minus(&a,2,C_fix(4),t7);
/* support.scm:1291: max */
t9=*((C_word*)lf[464]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,C_fix(0),t8);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12432 */
static void C_ccall f_12434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1291: make-string */
t2=*((C_word*)lf[463]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(32));}

/* k12428 */
static void C_ccall f_12430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1291: conc */
t2=*((C_word*)lf[460]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],((C_word*)t0)[3],lf[461],t1,lf[462],((C_word*)t0)[2]);}

/* f_12389 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12389,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12395,tmp=(C_word)a,a+=2,tmp);
/* support.scm:1282: ##sys#hash-table-for-each */
t3=*((C_word*)lf[147]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,*((C_word*)lf[455]+1));}

/* a12394 */
static void C_ccall f_12395(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12395,4,t0,t1,t2,t3);}
t4=*((C_word*)lf[11]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12399,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* write */
t6=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t4);}

/* k12397 in a12394 */
static void C_ccall f_12399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12399,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(9),((C_word*)t0)[3]);}

/* k12400 in k12397 in a12394 */
static void C_ccall f_12402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12402,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12405,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* write */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k12403 in k12400 in k12397 in a12394 */
static void C_ccall f_12405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* f_12377 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12377(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12377,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12381,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1278: ##sys#hash-table-ref */
t5=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[455]+1),t2);}

/* k12379 */
static void C_ccall f_12381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm:1279: real-name */
t2=*((C_word*)lf[37]+1);
f_12286(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_12286 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12286(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_12286r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_12286r(t0,t1,t2,t3);}}

static void C_ccall f_12286r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12289,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12305,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1262: resolve */
f_12289(t5,t2);}

/* k12303 */
static void C_ccall f_12305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12305,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=C_i_car(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1266: ##sys#symbol->qualified-string */
t5=*((C_word*)lf[231]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t1);}
else{
/* support.scm:1275: ##sys#symbol->qualified-string */
t3=*((C_word*)lf[231]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t1);}}
else{
/* support.scm:1263: ##sys#symbol->qualified-string */
t3=*((C_word*)lf[231]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k12328 in k12303 */
static void C_ccall f_12330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12330,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12334,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1267: get */
t3=*((C_word*)lf[130]+1);
f_5258(5,t3,t2,((C_word*)t0)[5],((C_word*)t0)[2],lf[143]);}

/* k12332 in k12328 in k12303 */
static void C_ccall f_12334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12334,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12336,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_12336(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k12332 in k12328 in k12303 */
static void C_fcall f_12336(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12336,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12343,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:1269: resolve */
f_12289(t4,t3);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k12341 in loop in k12332 in k12328 in k12303 */
static void C_ccall f_12343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12343,2,t0,t1);}
t2=C_eqp(t1,((C_word*)t0)[6]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12356,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* open-output-string */
t4=*((C_word*)lf[42]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12354 in k12341 in loop in k12332 in k12328 in k12303 */
static void C_ccall f_12356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12359,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k12357 in k12354 in k12341 in loop in k12332 in k12328 in k12303 */
static void C_ccall f_12359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[456],((C_word*)t0)[3]);}

/* k12360 in k12357 in k12354 in k12341 in loop in k12332 in k12328 in k12303 */
static void C_ccall f_12362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12362,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12365,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k12363 in k12360 in k12357 in k12354 in k12341 in loop in k12332 in k12328 in k12303 */
static void C_ccall f_12365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12368,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* get-output-string */
t3=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k12366 in k12363 in k12360 in k12357 in k12354 in k12341 in loop in k12332 in k12328 in k12303 */
static void C_ccall f_12368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12372,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1273: get */
t3=*((C_word*)lf[130]+1);
f_5258(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[143]);}

/* k12370 in k12366 in k12363 in k12360 in k12357 in k12354 in k12341 in loop in k12332 in k12328 in k12303 */
static void C_ccall f_12372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1272: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_12336(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* resolve */
static void C_fcall f_12289(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12289,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12293,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1257: ##sys#hash-table-ref */
t4=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[455]+1),t2);}

/* k12291 in resolve */
static void C_ccall f_12293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12293,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12299,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1259: ##sys#hash-table-ref */
t3=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[455]+1),t1);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k12297 in k12291 in resolve */
static void C_ccall f_12299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[2]));}

/* f_12280 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12280(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12280,4,t0,t1,t2,t3);}
/* support.scm:1253: ##sys#hash-table-set! */
t4=*((C_word*)lf[135]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,*((C_word*)lf[455]+1),t2,t3);}

/* f_12221 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12221(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_12221r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_12221r(t0,t1,t2);}}

static void C_ccall f_12221r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12229,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t4=*((C_word*)lf[42]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k12227 */
static void C_ccall f_12229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12229,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12232,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12256,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* support.scm:1240: gensym */
t5=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=C_i_car(t3);
/* display */
t7=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,t1);}
else{
/* ##sys#error */
t6=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k12254 in k12227 */
static void C_ccall f_12256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k12230 in k12227 */
static void C_ccall f_12232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12232,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12235,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(45),((C_word*)t0)[2]);}

/* k12233 in k12230 in k12227 */
static void C_ccall f_12235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12235,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12238,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12252,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1241: current-seconds */
t4=*((C_word*)lf[453]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k12250 in k12233 in k12230 in k12227 */
static void C_ccall f_12252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k12236 in k12233 in k12230 in k12227 */
static void C_ccall f_12238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12238,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12248,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1242: random */
t4=*((C_word*)lf[452]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_fix(1000));}

/* k12246 in k12236 in k12233 in k12230 in k12227 */
static void C_ccall f_12248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k12239 in k12236 in k12233 in k12230 in k12227 */
static void C_ccall f_12241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12241,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12244,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* get-output-string */
t3=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k12242 in k12239 in k12236 in k12233 in k12230 in k12227 */
static void C_ccall f_12244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1238: string->symbol */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_12212 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12212(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12212,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[447],lf[450]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(1)));}

/* f_12206 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12206(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12206,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[447]));}

/* f_12200 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12200(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12200,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record2(&a,2,lf[447],t2));}

/* f_12158 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12158(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12158,3,t0,t1,t2);}
t3=C_i_string_length(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12167,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_12167(t8,t1,t4);}

/* loop */
static void C_fcall f_12167(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_12167,NULL,3,t0,t1,t2);}
if(C_truep(C_i_zerop(t2))){
t3=((C_word*)t0)[3];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t2);
if(C_truep(C_i_char_equalp(C_make_character(46),t3))){
/* support.scm:1223: substring */
t4=*((C_word*)lf[443]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[3],C_fix(0),t2);}
else{
t4=C_a_i_minus(&a,2,t2,C_fix(1));
/* support.scm:1224: loop */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}}

/* f_12129 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_12129(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12129,3,t0,t1,t2);}
t3=C_i_string_length(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12139,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(t4,C_fix(0)))){
t6=C_i_string_ref(t2,t4);
t7=t5;
f_12139(t7,C_i_memq(t6,lf[444]));}
else{
t6=t5;
f_12139(t6,C_SCHEME_FALSE);}}

/* k12137 */
static void C_fcall f_12139(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* support.scm:1216: substring */
t2=*((C_word*)lf[443]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_11917 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_11917(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11917,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11920,a[2]=t10,a[3]=t8,a[4]=t6,a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t12=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12086,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12124,a[2]=t6,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1206: walk */
t14=((C_word*)t8)[1];
f_11920(t14,t13,t2,C_SCHEME_END_OF_LIST);}

/* k12122 */
static void C_ccall f_12124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1207: values */
C_values(4,0,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* walkeach */
static void C_fcall f_12086(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12086,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12088,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_list_2(t2,lf[14]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12100,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_12100(t9,t1,t2);}

/* for-each-loop3138 in walkeach */
static void C_fcall f_12100(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12100,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12110,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g31393145 */
t5=((C_word*)t0)[2];
f_12088(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12108 in for-each-loop3138 in walkeach */
static void C_ccall f_12110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12100(t3,((C_word*)t0)[2],t2);}

/* g3139 in walkeach */
static void C_fcall f_12088(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12088,NULL,3,t0,t1,t2);}
/* support.scm:1204: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_11920(t3,t1,t2,((C_word*)t0)[2]);}

/* walk */
static void C_fcall f_11920(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11920,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_slot(t4,C_fix(3));
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=t2;
t9=C_slot(t8,C_fix(1));
t10=C_eqp(t9,lf[79]);
t11=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=t7,a[9]=t9,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
if(C_truep(t10)){
t12=t11;
f_11954(t12,t10);}
else{
t12=C_eqp(t9,lf[210]);
if(C_truep(t12)){
t13=t11;
f_11954(t13,t12);}
else{
t13=C_eqp(t9,lf[218]);
if(C_truep(t13)){
t14=t11;
f_11954(t14,t13);}
else{
t14=C_eqp(t9,lf[221]);
t15=t11;
f_11954(t15,(C_truep(t14)?t14:C_eqp(t9,lf[234])));}}}}

/* k11952 in walk */
static void C_fcall f_11954(C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11954,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_eqp(((C_word*)t0)[9],lf[204]);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[8]);
if(C_truep(C_i_memq(t3,((C_word*)t0)[7]))){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11973,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1186: lset-adjoin */
t5=*((C_word*)lf[441]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,*((C_word*)lf[265]+1),((C_word*)((C_word*)t0)[6])[1],t3);}}
else{
t3=C_eqp(((C_word*)t0)[9],lf[222]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[8]);
if(C_truep(C_i_memq(t4,((C_word*)t0)[7]))){
t5=C_i_car(((C_word*)t0)[4]);
/* support.scm:1192: walk */
t6=((C_word*)((C_word*)t0)[3])[1];
f_11920(t6,((C_word*)t0)[10],t5,((C_word*)t0)[7]);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12009,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm:1191: lset-adjoin */
t6=*((C_word*)lf[441]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,*((C_word*)lf[265]+1),((C_word*)((C_word*)t0)[6])[1],t4);}}
else{
t4=C_eqp(((C_word*)t0)[9],lf[89]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12018,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(((C_word*)t0)[4]);
/* support.scm:1194: walk */
t7=((C_word*)((C_word*)t0)[3])[1];
f_11920(t7,t5,t6,((C_word*)t0)[7]);}
else{
t5=C_eqp(((C_word*)t0)[9],lf[113]);
if(C_truep(t5)){
t6=C_i_caddr(((C_word*)t0)[8]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12048,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1197: decompose-lambda-list */
t8=*((C_word*)lf[104]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,((C_word*)t0)[10],t6,t7);}
else{
/* support.scm:1201: walkeach */
t6=((C_word*)((C_word*)t0)[2])[1];
f_12086(t6,((C_word*)t0)[10],((C_word*)t0)[4],((C_word*)t0)[7]);}}}}}}

/* a12047 in k11952 in walk */
static void C_ccall f_12048(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_12048,5,t0,t1,t2,t3,t4);}
t5=C_i_car(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12060,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1200: append */
t7=*((C_word*)lf[51]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,((C_word*)t0)[2]);}

/* k12058 in a12047 in k11952 in walk */
static void C_ccall f_12060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1200: walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_11920(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k12016 in k11952 in walk */
static void C_ccall f_12018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12018,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12029,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1195: append */
t4=*((C_word*)lf[51]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k12027 in k12016 in k11952 in walk */
static void C_ccall f_12029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1195: walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_11920(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k12007 in k11952 in walk */
static void C_ccall f_12009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=C_i_car(((C_word*)t0)[5]);
/* support.scm:1192: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_11920(t4,((C_word*)t0)[3],t3,((C_word*)t0)[2]);}

/* k11971 in k11952 in walk */
static void C_ccall f_11973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11973,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1187: variable-visible? */
t4=*((C_word*)lf[291]+1);
f_13025(3,t4,t3,((C_word*)t0)[2]);}

/* k11977 in k11971 in k11952 in walk */
static void C_ccall f_11979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11979,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11983,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1188: lset-adjoin */
t3=*((C_word*)lf[441]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[265]+1),((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}}

/* k11981 in k11977 in k11971 in k11952 in walk */
static void C_ccall f_11983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_11772 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_11772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11772,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11776,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11778,a[2]=t3,a[3]=t5,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_11778(t10,t6,t2);}

/* walk */
static void C_fcall f_11778(C_word t0,C_word t1,C_word t2){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11778,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(3));
t5=t2;
t6=C_slot(t5,C_fix(1));
t7=C_eqp(t6,lf[204]);
t8=(C_truep(t7)?t7:C_eqp(t6,lf[222]));
if(C_truep(t8)){
t9=t2;
t10=C_slot(t9,C_fix(2));
t11=C_i_car(t10);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11810,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11842,a[2]=t12,a[3]=((C_word*)t0)[3],a[4]=t11,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(t11,((C_word*)t0)[2]))){
t14=C_i_memq(t11,((C_word*)((C_word*)t0)[3])[1]);
t15=t13;
f_11842(t15,C_i_not(t14));}
else{
t14=t13;
f_11842(t14,C_SCHEME_FALSE);}}
else{
t9=C_eqp(t6,lf[79]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11874,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t9)){
t11=t10;
f_11874(t11,t9);}
else{
t11=C_eqp(t6,lf[210]);
t12=t10;
f_11874(t12,(C_truep(t11)?t11:C_eqp(t6,lf[218])));}}}

/* k11872 in walk */
static void C_fcall f_11874(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11874,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_i_check_list_2(((C_word*)t0)[3],lf[14]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11882,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11882(t6,((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* for-each-loop3074 in k11872 in walk */
static void C_fcall f_11882(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11882,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11892,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g30753081 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_11778(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11890 in for-each-loop3074 in k11872 in walk */
static void C_ccall f_11892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11882(t3,((C_word*)t0)[2],t2);}

/* k11840 in walk */
static void C_fcall f_11842(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11842,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_11810(t4,t3);}
else{
t2=((C_word*)t0)[2];
f_11810(t2,C_SCHEME_UNDEFINED);}}

/* k11808 in walk */
static void C_fcall f_11810(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11810,NULL,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[4],lf[14]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11818,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11818(t6,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* for-each-loop3051 in k11808 in walk */
static void C_fcall f_11818(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11818,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11828,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g30523058 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_11778(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11826 in for-each-loop3051 in k11808 in walk */
static void C_ccall f_11828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11818(t3,((C_word*)t0)[2],t2);}

/* k11774 */
static void C_ccall f_11776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* f_11530 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_11530(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11530,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11534,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1122: ##sys#strip-syntax */
t5=*((C_word*)lf[438]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k11532 */
static void C_ccall f_11534(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11534,2,t0,t1);}
t2=C_eqp(t1,lf[359]);
t3=(C_truep(t2)?t2:C_eqp(t1,lf[380]));
if(C_truep(t3)){
t4=C_a_i_list(&a,2,lf[79],C_fix(0));
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[426],((C_word*)t0)[2],t4));}
else{
t4=C_eqp(t1,lf[362]);
if(C_truep(t4)){
t5=C_a_i_list(&a,2,lf[79],C_fix(0));
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[427],((C_word*)t0)[2],t5));}
else{
t5=C_eqp(t1,lf[379]);
t6=(C_truep(t5)?t5:C_eqp(t1,lf[381]));
if(C_truep(t6)){
t7=C_a_i_list(&a,2,lf[79],C_fix(0));
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,3,lf[428],((C_word*)t0)[2],t7));}
else{
t7=C_eqp(t1,lf[377]);
t8=(C_truep(t7)?t7:C_eqp(t1,lf[378]));
if(C_truep(t8)){
t9=C_a_i_list(&a,2,lf[79],C_fix(0));
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_list(&a,3,lf[429],((C_word*)t0)[2],t9));}
else{
t9=C_eqp(t1,lf[363]);
if(C_truep(t9)){
t10=C_a_i_list(&a,2,lf[79],C_fix(0));
t11=C_a_i_list(&a,3,lf[426],((C_word*)t0)[2],t10);
t12=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_a_i_list(&a,2,lf[430],t11));}
else{
t10=C_eqp(t1,lf[382]);
if(C_truep(t10)){
t11=C_a_i_list(&a,2,lf[79],C_SCHEME_FALSE);
t12=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_a_i_list(&a,3,lf[431],((C_word*)t0)[2],t11));}
else{
t11=C_eqp(t1,lf[383]);
if(C_truep(t11)){
t12=C_a_i_list(&a,2,lf[79],C_SCHEME_FALSE);
t13=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_a_i_list(&a,3,lf[432],((C_word*)t0)[2],t12));}
else{
if(C_truep(C_i_listp(t1))){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11650,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t13=C_i_car(t1);
t14=C_eqp(t13,lf[371]);
if(C_truep(t14)){
t15=C_i_length(t1);
if(C_truep(C_i_nequalp(C_fix(2),t15))){
t16=C_i_cadr(t1);
t17=t12;
f_11650(t17,C_i_memq(t16,lf[437]));}
else{
t16=t12;
f_11650(t16,C_SCHEME_FALSE);}}
else{
t15=t12;
f_11650(t15,C_SCHEME_FALSE);}}
else{
t12=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,((C_word*)t0)[2]);}}}}}}}}}

/* k11648 in k11532 */
static void C_fcall f_11650(C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11650,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[4]);
/* support.scm:1139: finish-foreign-result */
t3=*((C_word*)lf[425]+1);
f_11530(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=C_i_length(((C_word*)t0)[4]);
if(C_truep(C_i_nequalp(C_fix(3),t2))){
t3=C_i_car(((C_word*)t0)[4]);
t4=C_eqp(t3,lf[366]);
t5=(C_truep(t4)?t4:C_eqp(t3,lf[367]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11678,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1143: gensym */
t7=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_eqp(t3,lf[370]);
if(C_truep(t6)){
t7=C_i_caddr(((C_word*)t0)[4]);
t8=C_a_i_list(&a,2,lf[79],lf[368]);
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,4,lf[435],t7,t8,((C_word*)t0)[2]));}
else{
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,((C_word*)t0)[2]);}}}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}}}

/* k11676 in k11648 in k11532 */
static void C_ccall f_11678(C_word c,C_word t0,C_word t1){
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
C_word ab[60],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11678,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[433],t1);
t5=C_a_i_list(&a,2,lf[434],t4);
t6=C_i_caddr(((C_word*)t0)[3]);
t7=C_a_i_list(&a,2,lf[79],lf[368]);
t8=C_a_i_list(&a,4,lf[435],t6,t7,t1);
t9=C_a_i_list(&a,4,lf[436],t1,t5,t8);
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_list(&a,3,lf[89],t3,t9));}

/* f_11197 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_11197(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11197,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11209,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11524,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1095: follow-without-loop */
t5=*((C_word*)lf[74]+1);
f_4467(5,t5,t1,t2,t3,t4);}

/* a11523 */
static void C_ccall f_11524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11524,2,t0,t1);}
/* support.scm:1116: quit */
t2=*((C_word*)lf[20]+1);
f_3840(4,t2,t1,lf[424],((C_word*)t0)[2]);}

/* a11208 */
static void C_ccall f_11209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11209,4,t0,t1,t2,t3);}
t4=t2;
t5=C_eqp(t4,lf[329]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11219,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_11219(t7,t5);}
else{
t7=C_eqp(t4,lf[333]);
if(C_truep(t7)){
t8=t6;
f_11219(t8,t7);}
else{
t8=C_eqp(t4,lf[405]);
if(C_truep(t8)){
t9=t6;
f_11219(t9,t8);}
else{
t9=C_eqp(t4,lf[418]);
if(C_truep(t9)){
t10=t6;
f_11219(t10,t9);}
else{
t10=C_eqp(t4,lf[406]);
if(C_truep(t10)){
t11=t6;
f_11219(t11,t10);}
else{
t11=C_eqp(t4,lf[330]);
if(C_truep(t11)){
t12=t6;
f_11219(t12,t11);}
else{
t12=C_eqp(t4,lf[404]);
if(C_truep(t12)){
t13=t6;
f_11219(t13,t12);}
else{
t13=C_eqp(t4,lf[385]);
if(C_truep(t13)){
t14=t6;
f_11219(t14,t13);}
else{
t14=C_eqp(t4,lf[384]);
if(C_truep(t14)){
t15=t6;
f_11219(t15,t14);}
else{
t15=C_eqp(t4,lf[407]);
if(C_truep(t15)){
t16=t6;
f_11219(t16,t15);}
else{
t16=C_eqp(t4,lf[408]);
if(C_truep(t16)){
t17=t6;
f_11219(t17,t16);}
else{
t17=C_eqp(t4,lf[356]);
if(C_truep(t17)){
t18=t6;
f_11219(t18,t17);}
else{
t18=C_eqp(t4,lf[358]);
if(C_truep(t18)){
t19=t6;
f_11219(t19,t18);}
else{
t19=C_eqp(t4,lf[352]);
if(C_truep(t19)){
t20=t6;
f_11219(t20,t19);}
else{
t20=C_eqp(t4,lf[348]);
if(C_truep(t20)){
t21=t6;
f_11219(t21,t20);}
else{
t21=C_eqp(t4,lf[335]);
if(C_truep(t21)){
t22=t6;
f_11219(t22,t21);}
else{
t22=C_eqp(t4,lf[359]);
if(C_truep(t22)){
t23=t6;
f_11219(t23,t22);}
else{
t23=C_eqp(t4,lf[363]);
if(C_truep(t23)){
t24=t6;
f_11219(t24,t23);}
else{
t24=C_eqp(t4,lf[338]);
if(C_truep(t24)){
t25=t6;
f_11219(t25,t24);}
else{
t25=C_eqp(t4,lf[340]);
if(C_truep(t25)){
t26=t6;
f_11219(t26,t25);}
else{
t26=C_eqp(t4,lf[409]);
if(C_truep(t26)){
t27=t6;
f_11219(t27,t26);}
else{
t27=C_eqp(t4,lf[410]);
if(C_truep(t27)){
t28=t6;
f_11219(t28,t27);}
else{
t28=C_eqp(t4,lf[387]);
if(C_truep(t28)){
t29=t6;
f_11219(t29,t28);}
else{
t29=C_eqp(t4,lf[354]);
if(C_truep(t29)){
t30=t6;
f_11219(t30,t29);}
else{
t30=C_eqp(t4,lf[380]);
if(C_truep(t30)){
t31=t6;
f_11219(t31,t30);}
else{
t31=C_eqp(t4,lf[381]);
if(C_truep(t31)){
t32=t6;
f_11219(t32,t31);}
else{
t32=C_eqp(t4,lf[378]);
if(C_truep(t32)){
t33=t6;
f_11219(t33,t32);}
else{
t33=C_eqp(t4,lf[386]);
if(C_truep(t33)){
t34=t6;
f_11219(t34,t33);}
else{
t34=C_eqp(t4,lf[362]);
if(C_truep(t34)){
t35=t6;
f_11219(t35,t34);}
else{
t35=C_eqp(t4,lf[379]);
if(C_truep(t35)){
t36=t6;
f_11219(t36,t35);}
else{
t36=C_eqp(t4,lf[377]);
if(C_truep(t36)){
t37=t6;
f_11219(t37,t36);}
else{
t37=C_eqp(t4,lf[382]);
t38=t6;
f_11219(t38,(C_truep(t37)?t37:C_eqp(t4,lf[383])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k11217 in a11208 */
static void C_fcall f_11219(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_11219,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
t3=C_i_foreign_fixnum_argumentp(C_fix(1));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub248(C_SCHEME_UNDEFINED,t3));}
else{
t2=C_eqp(((C_word*)t0)[4],lf[402]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11231,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_11231(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[403]);
if(C_truep(t4)){
t5=t3;
f_11231(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[350]);
t6=t3;
f_11231(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[4],lf[417])));}}}}

/* k11229 in k11217 in a11208 */
static void C_fcall f_11231(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11231,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
t3=C_i_foreign_fixnum_argumentp(C_fix(2));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub248(C_SCHEME_UNDEFINED,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11237,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
/* support.scm:1108: ##sys#hash-table-ref */
t3=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[376]+1),((C_word*)t0)[2]);}
else{
t3=t2;
f_11237(2,t3,C_SCHEME_FALSE);}}}

/* k11235 in k11229 in k11217 in a11208 */
static void C_ccall f_11237(C_word c,C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11237,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11241,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* g29432944 */
t3=t2;
f_11241(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[365]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_11276(t5,t3);}
else{
t5=C_eqp(t2,lf[373]);
if(C_truep(t5)){
t6=t4;
f_11276(t6,t5);}
else{
t6=C_eqp(t2,lf[374]);
if(C_truep(t6)){
t7=t4;
f_11276(t7,t6);}
else{
t7=C_eqp(t2,lf[356]);
if(C_truep(t7)){
t8=t4;
f_11276(t8,t7);}
else{
t8=C_eqp(t2,lf[358]);
t9=t4;
f_11276(t9,(C_truep(t8)?t8:C_eqp(t2,lf[375])));}}}}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
/* support.scm:1094: quit */
t4=*((C_word*)lf[20]+1);
f_3840(4,t4,t2,lf[423],t3);}}}

/* k11274 in k11235 in k11229 in k11217 in a11208 */
static void C_fcall f_11276(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
t3=C_i_foreign_fixnum_argumentp(C_fix(1));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub248(C_SCHEME_UNDEFINED,t3));}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
/* support.scm:1094: quit */
t4=*((C_word*)lf[20]+1);
f_3840(4,t4,t2,lf[423],t3);}}

/* g2943 in k11235 in k11229 in k11217 in a11208 */
static void C_fcall f_11241(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11241,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1110: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t3=t2;
/* support.scm:1110: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* f_10855 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_10855(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10855,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10861,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11191,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1065: follow-without-loop */
t5=*((C_word*)lf[74]+1);
f_4467(5,t5,t1,t2,t3,t4);}

/* a11190 */
static void C_ccall f_11191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11191,2,t0,t1);}
/* support.scm:1090: quit */
t2=*((C_word*)lf[20]+1);
f_3840(4,t2,t1,lf[421],((C_word*)t0)[2]);}

/* a10860 */
static void C_ccall f_10861(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10861,4,t0,t1,t2,t3);}
t4=t2;
t5=C_eqp(t4,lf[329]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10871,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_10871(t7,t5);}
else{
t7=C_eqp(t4,lf[333]);
if(C_truep(t7)){
t8=t6;
f_10871(t8,t7);}
else{
t8=C_eqp(t4,lf[405]);
if(C_truep(t8)){
t9=t6;
f_10871(t9,t8);}
else{
t9=C_eqp(t4,lf[418]);
if(C_truep(t9)){
t10=t6;
f_10871(t10,t9);}
else{
t10=C_eqp(t4,lf[419]);
if(C_truep(t10)){
t11=t6;
f_10871(t11,t10);}
else{
t11=C_eqp(t4,lf[406]);
if(C_truep(t11)){
t12=t6;
f_10871(t12,t11);}
else{
t12=C_eqp(t4,lf[420]);
if(C_truep(t12)){
t13=t6;
f_10871(t13,t12);}
else{
t13=C_eqp(t4,lf[330]);
if(C_truep(t13)){
t14=t6;
f_10871(t14,t13);}
else{
t14=C_eqp(t4,lf[404]);
if(C_truep(t14)){
t15=t6;
f_10871(t15,t14);}
else{
t15=C_eqp(t4,lf[407]);
if(C_truep(t15)){
t16=t6;
f_10871(t16,t15);}
else{
t16=C_eqp(t4,lf[408]);
if(C_truep(t16)){
t17=t6;
f_10871(t17,t16);}
else{
t17=C_eqp(t4,lf[409]);
t18=t6;
f_10871(t18,(C_truep(t17)?t17:C_eqp(t4,lf[410])));}}}}}}}}}}}}

/* k10869 in a10860 */
static void C_fcall f_10871(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10871,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=C_eqp(((C_word*)t0)[4],lf[359]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10880,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_10880(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[362]);
if(C_truep(t4)){
t5=t3;
f_10880(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[356]);
if(C_truep(t5)){
t6=t3;
f_10880(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[358]);
if(C_truep(t6)){
t7=t3;
f_10880(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[363]);
if(C_truep(t7)){
t8=t3;
f_10880(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[379]);
if(C_truep(t8)){
t9=t3;
f_10880(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[377]);
if(C_truep(t9)){
t10=t3;
f_10880(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[380]);
if(C_truep(t10)){
t11=t3;
f_10880(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[381]);
if(C_truep(t11)){
t12=t3;
f_10880(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[378]);
if(C_truep(t12)){
t13=t3;
f_10880(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[382]);
t14=t3;
f_10880(t14,(C_truep(t13)?t13:C_eqp(((C_word*)t0)[4],lf[383])));}}}}}}}}}}}}

/* k10878 in k10869 in a10860 */
static void C_fcall f_10880(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10880,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
t3=C_i_foreign_fixnum_argumentp(C_fix(3));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub248(C_SCHEME_UNDEFINED,t3));}
else{
t2=C_eqp(((C_word*)t0)[4],lf[352]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10892,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_10892(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[385]);
if(C_truep(t4)){
t5=t3;
f_10892(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[348]);
if(C_truep(t5)){
t6=t3;
f_10892(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[386]);
if(C_truep(t6)){
t7=t3;
f_10892(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[384]);
if(C_truep(t7)){
t8=t3;
f_10892(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[387]);
t9=t3;
f_10892(t9,(C_truep(t8)?t8:C_eqp(((C_word*)t0)[4],lf[354])));}}}}}}}

/* k10890 in k10878 in k10869 in a10860 */
static void C_fcall f_10892(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10892,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
t3=C_i_foreign_fixnum_argumentp(C_fix(4));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub248(C_SCHEME_UNDEFINED,t3));}
else{
t2=C_eqp(((C_word*)t0)[4],lf[335]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_10904(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[402]);
if(C_truep(t4)){
t5=t3;
f_10904(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[403]);
if(C_truep(t5)){
t6=t3;
f_10904(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[350]);
t7=t3;
f_10904(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[417])));}}}}}

/* k10902 in k10890 in k10878 in k10869 in a10860 */
static void C_fcall f_10904(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10904,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
t3=C_i_foreign_fixnum_argumentp(C_fix(4));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub248(C_SCHEME_UNDEFINED,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
/* support.scm:1081: ##sys#hash-table-ref */
t3=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[376]+1),((C_word*)t0)[2]);}
else{
t3=t2;
f_10910(2,t3,C_SCHEME_FALSE);}}}

/* k10908 in k10902 in k10890 in k10878 in k10869 in a10860 */
static void C_ccall f_10910(C_word c,C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10910,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10914,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* g27892790 */
t3=t2;
f_10914(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[365]);
if(C_truep(t3)){
if(C_truep(t3)){
t4=((C_word*)t0)[3];
t5=C_i_foreign_fixnum_argumentp(C_fix(3));
t6=t4;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub248(C_SCHEME_UNDEFINED,t5));}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(0));}}
else{
t4=C_eqp(t2,lf[373]);
if(C_truep(t4)){
if(C_truep(t4)){
t5=((C_word*)t0)[3];
t6=C_i_foreign_fixnum_argumentp(C_fix(3));
t7=t5;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,stub248(C_SCHEME_UNDEFINED,t6));}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fix(0));}}
else{
t5=C_eqp(t2,lf[374]);
if(C_truep(t5)){
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=C_i_foreign_fixnum_argumentp(C_fix(3));
t8=t6;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub248(C_SCHEME_UNDEFINED,t7));}
else{
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fix(0));}}
else{
t6=C_eqp(t2,lf[356]);
if(C_truep(t6)){
if(C_truep(t6)){
t7=((C_word*)t0)[3];
t8=C_i_foreign_fixnum_argumentp(C_fix(3));
t9=t7;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,stub248(C_SCHEME_UNDEFINED,t8));}
else{
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_fix(0));}}
else{
t7=C_eqp(t2,lf[358]);
if(C_truep(t7)){
if(C_truep(t7)){
t8=((C_word*)t0)[3];
t9=C_i_foreign_fixnum_argumentp(C_fix(3));
t10=t8;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub248(C_SCHEME_UNDEFINED,t9));}
else{
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_fix(0));}}
else{
t8=C_eqp(t2,lf[375]);
if(C_truep(t8)){
if(C_truep(t8)){
t9=((C_word*)t0)[3];
t10=C_i_foreign_fixnum_argumentp(C_fix(3));
t11=t9;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,stub248(C_SCHEME_UNDEFINED,t10));}
else{
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_fix(0));}}
else{
t9=C_eqp(t2,lf[366]);
if(C_truep(t9)){
if(C_truep(t9)){
t10=((C_word*)t0)[3];
t11=C_i_foreign_fixnum_argumentp(C_fix(3));
t12=t10;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,stub248(C_SCHEME_UNDEFINED,t11));}
else{
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_fix(0));}}
else{
t10=C_eqp(t2,lf[367]);
if(C_truep(t10)){
if(C_truep(t10)){
t11=((C_word*)t0)[3];
t12=C_i_foreign_fixnum_argumentp(C_fix(3));
t13=t11;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,stub248(C_SCHEME_UNDEFINED,t12));}
else{
t11=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_fix(0));}}
else{
t11=C_eqp(t2,lf[370]);
if(C_truep(t11)){
t12=((C_word*)t0)[3];
t13=C_i_foreign_fixnum_argumentp(C_fix(3));
t14=t12;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,stub248(C_SCHEME_UNDEFINED,t13));}
else{
t12=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_fix(0));}}}}}}}}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}}}

/* g2789 in k10908 in k10902 in k10890 in k10878 in k10869 in a10860 */
static void C_fcall f_10914(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10914,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1083: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t3=t2;
/* support.scm:1083: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* f_10810 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_10810(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10810,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10816,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10849,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1052: follow-without-loop */
t5=*((C_word*)lf[74]+1);
f_4467(5,t5,t1,t2,t3,t4);}

/* a10848 */
static void C_ccall f_10849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10849,2,t0,t1);}
/* support.scm:1059: quit */
t2=*((C_word*)lf[20]+1);
f_3840(4,t2,t1,lf[415],((C_word*)t0)[2]);}

/* a10815 */
static void C_ccall f_10816(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10816,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10820,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(t2))){
/* support.scm:1055: ##sys#hash-table-ref */
t5=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[376]+1),t2);}
else{
t5=t4;
f_10820(2,t5,C_SCHEME_FALSE);}}

/* k10818 in a10815 */
static void C_ccall f_10820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10820,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10824,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* g26722673 */
t3=t2;
f_10824(t3,((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* g2672 in k10818 in a10815 */
static void C_fcall f_10824(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10824,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1057: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t3=t2;
/* support.scm:1057: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* f_10779 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_10779(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10779,4,t0,t1,t2,t3);}
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10792,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1046: ##sys#hash-table-ref */
t5=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[376]+1),t3);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k10790 */
static void C_ccall f_10792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10792,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_vectorp(t1))){
t2=C_i_vector_ref(t1,C_fix(1));
t3=C_a_i_list2(&a,2,t2,((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_10748 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_10748(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10748,4,t0,t1,t2,t3);}
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10761,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1039: ##sys#hash-table-ref */
t5=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[376]+1),t3);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k10759 */
static void C_ccall f_10761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10761,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_vectorp(t1))){
t2=C_i_vector_ref(t1,C_fix(2));
t3=C_a_i_list2(&a,2,t2,((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_9937 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_9937(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9937,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9943,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10742,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:921: follow-without-loop */
t6=*((C_word*)lf[74]+1);
f_4467(5,t6,t1,t3,t4,t5);}

/* a10741 */
static void C_ccall f_10742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10742,2,t0,t1);}
/* support.scm:1032: quit */
t2=*((C_word*)lf[20]+1);
f_3840(4,t2,t1,lf[411],((C_word*)t0)[2]);}

/* a9942 */
static void C_ccall f_9943(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9943,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9949,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_9949(t7,t1,t2);}

/* repeat in a9942 */
static void C_fcall f_9949(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_9949,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_eqp(t3,lf[329]);
t5=(C_truep(t4)?t4:C_eqp(t3,lf[330]));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(*((C_word*)lf[331]+1))?((C_word*)t0)[4]:C_a_i_list(&a,2,lf[332],((C_word*)t0)[4])));}
else{
t6=C_eqp(t3,lf[333]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_9974(t8,t6);}
else{
t8=C_eqp(t3,lf[404]);
if(C_truep(t8)){
t9=t7;
f_9974(t9,t8);}
else{
t9=C_eqp(t3,lf[405]);
if(C_truep(t9)){
t10=t7;
f_9974(t10,t9);}
else{
t10=C_eqp(t3,lf[406]);
if(C_truep(t10)){
t11=t7;
f_9974(t11,t10);}
else{
t11=C_eqp(t3,lf[407]);
if(C_truep(t11)){
t12=t7;
f_9974(t12,t11);}
else{
t12=C_eqp(t3,lf[408]);
if(C_truep(t12)){
t13=t7;
f_9974(t13,t12);}
else{
t13=C_eqp(t3,lf[409]);
t14=t7;
f_9974(t14,(C_truep(t13)?t13:C_eqp(t3,lf[410])));}}}}}}}}

/* k9972 in repeat in a9942 */
static void C_fcall f_9974(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9974,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[331]+1))){
t2=((C_word*)t0)[7];
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[334],((C_word*)t0)[7]));}}
else{
t2=C_eqp(((C_word*)t0)[5],lf[335]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_9989(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[402]);
t5=t3;
f_9989(t5,(C_truep(t4)?t4:C_eqp(((C_word*)t0)[5],lf[403])));}}}

/* k9987 in k9972 in repeat in a9942 */
static void C_fcall f_9989(C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9989,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(*((C_word*)lf[331]+1))?((C_word*)t0)[6]:C_a_i_list(&a,2,lf[336],((C_word*)t0)[6])));}
else{
t2=C_eqp(((C_word*)t0)[5],lf[337]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[5],lf[338]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10007,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* support.scm:931: gensym */
t5=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[340]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[5],lf[341]));
if(C_truep(t5)){
t6=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(*((C_word*)lf[331]+1))?((C_word*)t0)[6]:C_a_i_list(&a,2,lf[339],((C_word*)t0)[6])));}
else{
t6=C_eqp(((C_word*)t0)[5],lf[342]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10057,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* support.scm:943: gensym */
t8=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_eqp(((C_word*)t0)[5],lf[344]);
if(C_truep(t7)){
if(C_truep(*((C_word*)lf[331]+1))){
t8=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,((C_word*)t0)[6]);}
else{
t8=C_a_i_list(&a,2,lf[79],lf[342]);
t9=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,3,lf[343],t8,((C_word*)t0)[6]));}}
else{
t8=C_eqp(((C_word*)t0)[5],lf[345]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t8)){
t10=t9;
f_10112(t10,t8);}
else{
t10=C_eqp(((C_word*)t0)[5],lf[395]);
if(C_truep(t10)){
t11=t9;
f_10112(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[5],lf[396]);
if(C_truep(t11)){
t12=t9;
f_10112(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[5],lf[397]);
if(C_truep(t12)){
t13=t9;
f_10112(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[5],lf[398]);
if(C_truep(t13)){
t14=t9;
f_10112(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[5],lf[399]);
if(C_truep(t14)){
t15=t9;
f_10112(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[5],lf[400]);
t16=t9;
f_10112(t16,(C_truep(t15)?t15:C_eqp(((C_word*)t0)[5],lf[401])));}}}}}}}}}}}}

/* k10110 in k9987 in k9972 in repeat in a9942 */
static void C_fcall f_10112(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10112,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10115,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* support.scm:955: gensym */
t3=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[346]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10154(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[388]);
if(C_truep(t4)){
t5=t3;
f_10154(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[389]);
if(C_truep(t5)){
t6=t3;
f_10154(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[390]);
if(C_truep(t6)){
t7=t3;
f_10154(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[391]);
if(C_truep(t7)){
t8=t3;
f_10154(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[392]);
if(C_truep(t8)){
t9=t3;
f_10154(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[393]);
t10=t3;
f_10154(t10,(C_truep(t9)?t9:C_eqp(((C_word*)t0)[4],lf[394])));}}}}}}}}

/* k10152 in k10110 in k9987 in k9972 in repeat in a9942 */
static void C_fcall f_10154(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10154,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[331]+1))){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[6]);}
else{
t2=C_i_assq(((C_word*)t0)[5],lf[347]);
t3=C_slot(t2,C_fix(1));
t4=C_a_i_list(&a,2,lf[79],t3);
t5=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[343],t4,((C_word*)t0)[6]));}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[348]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10181(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[385]);
if(C_truep(t4)){
t5=t3;
f_10181(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[386]);
t6=t3;
f_10181(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[4],lf[387])));}}}}

/* k10179 in k10152 in k10110 in k9987 in k9972 in repeat in a9942 */
static void C_fcall f_10181(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10181,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[331]+1))){
t2=((C_word*)t0)[7];
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[349],((C_word*)t0)[7]));}}
else{
t2=C_eqp(((C_word*)t0)[5],lf[350]);
if(C_truep(t2)){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(*((C_word*)lf[331]+1))?((C_word*)t0)[7]:C_a_i_list(&a,2,lf[351],((C_word*)t0)[7])));}
else{
t3=C_eqp(((C_word*)t0)[5],lf[352]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10208,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_10208(t5,t3);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[354]);
t6=t4;
f_10208(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[5],lf[384])));}}}}

/* k10206 in k10179 in k10152 in k10110 in k9987 in k9972 in repeat in a9942 */
static void C_fcall f_10208(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10208,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[331]+1))){
t2=((C_word*)t0)[7];
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[353],((C_word*)t0)[7]));}}
else{
t2=C_eqp(((C_word*)t0)[5],lf[354]);
if(C_truep(t2)){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(*((C_word*)lf[331]+1))?((C_word*)t0)[7]:C_a_i_list(&a,2,lf[355],((C_word*)t0)[7])));}
else{
t3=C_eqp(((C_word*)t0)[5],lf[356]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10235,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_10235(t5,t3);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[382]);
t6=t4;
f_10235(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[5],lf[383])));}}}}

/* k10233 in k10206 in k10179 in k10152 in k10110 in k9987 in k9972 in repeat in a9942 */
static void C_fcall f_10235(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10235,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10238,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* support.scm:982: gensym */
t3=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[358]);
if(C_truep(t2)){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[357],((C_word*)t0)[7]));}
else{
t3=C_eqp(((C_word*)t0)[5],lf[359]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_10279(t5,t3);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[379]);
if(C_truep(t5)){
t6=t4;
f_10279(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[380]);
t7=t4;
f_10279(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[5],lf[381])));}}}}}

/* k10277 in k10233 in k10206 in k10179 in k10152 in k10110 in k9987 in k9972 in repeat in a9942 */
static void C_fcall f_10279(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10279,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10282,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* support.scm:990: gensym */
t3=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[362]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10324(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[377]);
t5=t3;
f_10324(t5,(C_truep(t4)?t4:C_eqp(((C_word*)t0)[5],lf[378])));}}}

/* k10322 in k10277 in k10233 in k10206 in k10179 in k10152 in k10110 in k9987 in k9972 in repeat in a9942 */
static void C_fcall f_10324(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10324,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[331]+1))){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[360],((C_word*)t0)[6]));}
else{
t2=C_a_i_list(&a,2,lf[361],((C_word*)t0)[6]);
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[360],t2));}}
else{
t2=C_eqp(((C_word*)t0)[5],lf[363]);
if(C_truep(t2)){
if(C_truep(*((C_word*)lf[331]+1))){
t3=C_a_i_list(&a,2,lf[364],((C_word*)t0)[6]);
t4=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[360],t3));}
else{
t3=C_a_i_list(&a,2,lf[364],((C_word*)t0)[6]);
t4=C_a_i_list(&a,2,lf[361],t3);
t5=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,2,lf[360],t4));}}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
/* support.scm:1006: ##sys#hash-table-ref */
t4=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[376]+1),((C_word*)t0)[3]);}
else{
t4=t3;
f_10367(2,t4,C_SCHEME_FALSE);}}}}

/* k10365 in k10322 in k10277 in k10233 in k10206 in k10179 in k10152 in k10110 in k9987 in k9972 in repeat in a9942 */
static void C_ccall f_10367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10367,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10371,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* g26072608 */
t3=t2;
f_10371(t3,((C_word*)t0)[5],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=C_i_car(((C_word*)t0)[4]);
t3=C_eqp(t2,lf[365]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10406,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t3)){
t5=t4;
f_10406(t5,t3);}
else{
t5=C_eqp(t2,lf[374]);
if(C_truep(t5)){
t6=t4;
f_10406(t6,t5);}
else{
t6=C_eqp(t2,lf[375]);
t7=t4;
f_10406(t7,(C_truep(t6)?t6:C_eqp(t2,lf[356])));}}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}}

/* k10404 in k10365 in k10322 in k10277 in k10233 in k10206 in k10179 in k10152 in k10110 in k9987 in k9972 in repeat in a9942 */
static void C_fcall f_10406(C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10406,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10409,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1012: gensym */
t3=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[366]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[367]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10444,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1018: gensym */
t5=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[370]);
if(C_truep(t4)){
t5=C_a_i_list(&a,2,lf[79],lf[368]);
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[369],((C_word*)t0)[6],t5));}
else{
t5=C_eqp(((C_word*)t0)[4],lf[371]);
if(C_truep(t5)){
t6=C_i_cadr(((C_word*)t0)[3]);
/* support.scm:1025: repeat */
t7=((C_word*)((C_word*)t0)[2])[1];
f_9949(t7,((C_word*)t0)[5],t6);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[372]);
if(C_truep(t6)){
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(*((C_word*)lf[331]+1))?((C_word*)t0)[6]:C_a_i_list(&a,2,lf[349],((C_word*)t0)[6])));}
else{
t7=C_eqp(((C_word*)t0)[4],lf[373]);
if(C_truep(t7)){
t8=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_truep(t7)?C_a_i_list(&a,2,lf[357],((C_word*)t0)[6]):((C_word*)t0)[6]));}
else{
t8=C_eqp(((C_word*)t0)[4],lf[358]);
t9=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_truep(t8)?C_a_i_list(&a,2,lf[357],((C_word*)t0)[6]):((C_word*)t0)[6]));}}}}}}}

/* k10442 in k10404 in k10365 in k10322 in k10277 in k10233 in k10206 in k10179 in k10152 in k10110 in k9987 in k9972 in repeat in a9942 */
static void C_ccall f_10444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[51],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10444,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[79],lf[368]);
t5=C_a_i_list(&a,3,lf[369],((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,2,lf[79],C_SCHEME_FALSE);
t7=C_a_i_list(&a,4,lf[209],t1,t5,t6);
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,3,lf[89],t3,t7));}

/* k10407 in k10404 in k10365 in k10322 in k10277 in k10233 in k10206 in k10179 in k10152 in k10110 in k9987 in k9972 in repeat in a9942 */
static void C_ccall f_10409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10409,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[357],t1);
t5=C_a_i_list(&a,2,lf[79],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[209],t1,t4,t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[89],t3,t6));}

/* g2607 in k10365 in k10322 in k10277 in k10233 in k10206 in k10179 in k10152 in k10110 in k9987 in k9972 in repeat in a9942 */
static void C_fcall f_10371(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10371,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1008: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t3=t2;
/* support.scm:1008: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* k10280 in k10277 in k10233 in k10206 in k10179 in k10152 in k10110 in k9987 in k9972 in repeat in a9942 */
static void C_ccall f_10282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10282,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10297,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[331]+1))){
t5=t4;
f_10297(t5,C_a_i_list(&a,2,lf[360],t1));}
else{
t5=C_a_i_list(&a,2,lf[361],t1);
t6=t4;
f_10297(t6,C_a_i_list(&a,2,lf[360],t5));}}

/* k10295 in k10280 in k10277 in k10233 in k10206 in k10179 in k10152 in k10110 in k9987 in k9972 in repeat in a9942 */
static void C_fcall f_10297(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10297,NULL,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[79],C_SCHEME_FALSE);
t3=C_a_i_list(&a,4,lf[209],((C_word*)t0)[4],t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[89],((C_word*)t0)[2],t3));}

/* k10236 in k10233 in k10206 in k10179 in k10152 in k10110 in k9987 in k9972 in repeat in a9942 */
static void C_ccall f_10238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10238,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[357],t1);
t5=C_a_i_list(&a,2,lf[79],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[209],t1,t4,t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[89],t3,t6));}

/* k10113 in k10110 in k9987 in k9972 in repeat in a9942 */
static void C_ccall f_10115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10115,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10130,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[331]+1))){
t5=t4;
f_10130(t5,t1);}
else{
t5=C_a_i_list(&a,2,lf[79],((C_word*)t0)[2]);
t6=t4;
f_10130(t6,C_a_i_list(&a,3,lf[343],t5,t1));}}

/* k10128 in k10113 in k10110 in k9987 in k9972 in repeat in a9942 */
static void C_fcall f_10130(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10130,NULL,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[79],C_SCHEME_FALSE);
t3=C_a_i_list(&a,4,lf[209],((C_word*)t0)[4],t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[89],((C_word*)t0)[2],t3));}

/* k10055 in k9987 in k9972 in repeat in a9942 */
static void C_ccall f_10057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10057,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10072,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[331]+1))){
t5=t4;
f_10072(t5,t1);}
else{
t5=C_a_i_list(&a,2,lf[79],lf[342]);
t6=t4;
f_10072(t6,C_a_i_list(&a,3,lf[343],t5,t1));}}

/* k10070 in k10055 in k9987 in k9972 in repeat in a9942 */
static void C_fcall f_10072(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10072,NULL,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[79],C_SCHEME_FALSE);
t3=C_a_i_list(&a,4,lf[209],((C_word*)t0)[4],t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[89],((C_word*)t0)[2],t3));}

/* k10005 in k9987 in k9972 in repeat in a9942 */
static void C_ccall f_10007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10007,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=(C_truep(*((C_word*)lf[331]+1))?t1:C_a_i_list(&a,2,lf[339],t1));
t5=C_a_i_list(&a,2,lf[79],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[209],t1,t4,t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[89],t3,t6));}

/* f_9876 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_9876(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9876,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9880,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* support.scm:902: open-output-file */
t5=*((C_word*)lf[326]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}
else{
/* support.scm:902: current-output-port */
t5=*((C_word*)lf[327]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k9878 */
static void C_ccall f_9880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9880,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9883,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9891,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:903: with-output-to-port */
t4=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t1,t3);}

/* a9890 in k9878 */
static void C_ccall f_9891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9891,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t2,lf[14]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9908,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_9908(t7,t1,t2);}

/* for-each-loop2377 in a9890 in k9878 */
static void C_fcall f_9908(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9908,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9918,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9897,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:907: pretty-print */
t6=*((C_word*)lf[324]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9895 in for-each-loop2377 in a9890 in k9878 */
static void C_ccall f_9897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:908: newline */
t2=*((C_word*)lf[13]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k9916 in for-each-loop2377 in a9890 in k9878 */
static void C_ccall f_9918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9908(t3,((C_word*)t0)[2],t2);}

/* k9881 in k9878 */
static void C_ccall f_9883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* support.scm:910: close-output-port */
t2=*((C_word*)lf[323]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_9795 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_9795(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9795,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9801,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9807,tmp=(C_word)a,a+=2,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a9806 */
static void C_ccall f_9807(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_9807,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9814,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=t8,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* support.scm:890: debugging */
t10=*((C_word*)lf[10]+1);
f_3772(4,t10,t9,lf[320],lf[321]);}

/* k9812 in a9806 */
static void C_ccall f_9814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9814,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* display */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[319],t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k9815 in k9812 in a9806 */
static void C_ccall f_9817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9817,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9820,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* write */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9820,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9823,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* display */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[318],((C_word*)t0)[3]);}

/* k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9823,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9826,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* write */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9824 in k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9826,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9829,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* write-char/port */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k9827 in k9824 in k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9829,2,t0,t1);}
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9832,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* display */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[317],t2);}

/* k9830 in k9827 in k9824 in k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9832,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9835,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* write */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9833 in k9830 in k9827 in k9824 in k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9835,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9838,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* write-char/port */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k9836 in k9833 in k9830 in k9827 in k9824 in k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9838,2,t0,t1);}
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9841,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* display */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[316],t2);}

/* k9839 in k9836 in k9833 in k9830 in k9827 in k9824 in k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9841,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9844,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* write */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9842 in k9839 in k9836 in k9833 in k9830 in k9827 in k9824 in k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9844,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9847,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k9845 in k9842 in k9839 in k9836 in k9833 in k9830 in k9827 in k9824 in k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9847,2,t0,t1);}
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9850,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* display */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[315],t2);}

/* k9848 in k9845 in k9842 in k9839 in k9836 in k9833 in k9830 in k9827 in k9824 in k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9850,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9853,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* write */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9851 in k9848 in k9845 in k9842 in k9839 in k9836 in k9833 in k9830 in k9827 in k9824 in k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9853,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9856,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k9854 in k9851 in k9848 in k9845 in k9842 in k9839 in k9836 in k9833 in k9830 in k9827 in k9824 in k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9856,2,t0,t1);}
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9859,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* display */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[314],t2);}

/* k9857 in k9854 in k9851 in k9848 in k9845 in k9842 in k9839 in k9836 in k9833 in k9830 in k9827 in k9824 in k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9862,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* write */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9860 in k9857 in k9854 in k9851 in k9848 in k9845 in k9842 in k9839 in k9836 in k9833 in k9830 in k9827 in k9824 in k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9865,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in k9845 in k9842 in k9839 in k9836 in k9833 in k9830 in k9827 in k9824 in k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9865,2,t0,t1);}
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9868,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[313],t2);}

/* k9866 in k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in k9845 in k9842 in k9839 in k9836 in k9833 in k9830 in k9827 in k9824 in k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9868,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9871,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* write */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9869 in k9866 in k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in k9845 in k9842 in k9839 in k9836 in k9833 in k9830 in k9827 in k9824 in k9821 in k9818 in k9815 in k9812 in a9806 */
static void C_ccall f_9871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* a9800 */
static void C_ccall f_9801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9801,2,t0,t1);}
/* support.scm:889: compute-database-statistics */
t2=*((C_word*)lf[309]+1);
f_9684(3,t2,t1,((C_word*)t0)[2]);}

/* f_9684 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_9684(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9684,3,t0,t1,t2);}
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_fix(0);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fix(0);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_fix(0);
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9688,a[2]=t10,a[3]=t12,a[4]=t8,a[5]=t4,a[6]=t6,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9693,a[2]=t12,a[3]=t4,a[4]=t6,a[5]=t8,a[6]=t10,tmp=(C_word)a,a+=7,tmp);
/* support.scm:865: ##sys#hash-table-for-each */
t15=*((C_word*)lf[147]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t13,t14,t2);}

/* a9692 */
static void C_ccall f_9693(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9693,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=C_i_check_list_2(t3,lf[14]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9772,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_9772(t9,t1,t3);}

/* for-each-loop2269 in a9692 */
static void C_fcall f_9772(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
a=C_alloc(20);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9772,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_9695(C_a_i(&a,20),((C_word*)t0)[3],t3);
t5=C_slot(t2,C_fix(1));
t8=t1;
t9=t5;
t1=t8;
t2=t9;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g2270 in a9692 */
static C_word C_fcall f_9695(C_word *a,C_word t0,C_word t1){
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
C_stack_check;
t2=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[6])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_i_car(t1);
t5=C_eqp(t4,lf[173]);
if(C_truep(t5)){
t6=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[5])[1],C_fix(1));
t7=C_mutate(((C_word *)((C_word*)t0)[5])+1,t6);
return(t7);}
else{
t6=C_eqp(t4,lf[157]);
if(C_truep(t6)){
t7=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t9=C_i_cdr(t1);
t10=C_slot(t9,C_fix(1));
t11=C_eqp(lf[113],t10);
if(C_truep(t11)){
t12=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t13=C_mutate(((C_word *)((C_word*)t0)[3])+1,t12);
return(t13);}
else{
t12=C_SCHEME_UNDEFINED;
return(t12);}}
else{
t7=C_eqp(t4,lf[162]);
if(C_truep(t7)){
t8=C_i_cdr(t1);
t9=C_i_length(t8);
t10=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t10);
return(t11);}
else{
t8=C_SCHEME_UNDEFINED;
return(t8);}}}}

/* k9686 */
static void C_ccall f_9688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:879: values */
C_values(9,0,((C_word*)t0)[7],*((C_word*)lf[310]+1),*((C_word*)lf[311]+1),((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* f_9663 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_9663(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_9663,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_not(t4));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9673,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:842: debugging */
t8=*((C_word*)lf[10]+1);
f_3772(5,t8,t7,lf[239],lf[308],t2);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k9671 */
static void C_ccall f_9673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:843: hide-variable */
t2=*((C_word*)lf[307]+1);
f_12959(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_9614 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_9614(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9614,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9620,tmp=(C_word)a,a+=2,tmp);
/* support.scm:828: ##sys#hash-table-for-each */
t4=*((C_word*)lf[147]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* a9619 */
static void C_ccall f_9620(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9620,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9661,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:830: keyword? */
t5=*((C_word*)lf[303]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k9659 in a9619 */
static void C_ccall f_9661(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9661,2,t0,t1);}
t2=(C_truep(t1)?C_SCHEME_FALSE:C_i_assq(lf[173],((C_word*)t0)[4]));
if(C_truep(t2)){
t3=C_i_assq(lf[161],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9633,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t5=C_i_cdr(t3);
t6=C_i_length(t5);
t7=C_a_i_list2(&a,2,((C_word*)t0)[2],t6);
/* support.scm:832: write */
t8=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t4,t7);}
else{
t5=C_a_i_list2(&a,2,((C_word*)t0)[2],C_fix(0));
/* support.scm:832: write */
t6=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9631 in k9659 in a9619 */
static void C_ccall f_9633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:833: newline */
t2=*((C_word*)lf[13]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_9577 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_9577(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9577,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9583,tmp=(C_word)a,a+=2,tmp);
/* support.scm:818: ##sys#hash-table-for-each */
t4=*((C_word*)lf[147]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* a9582 */
static void C_ccall f_9583(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9583,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9590,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9612,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:820: keyword? */
t6=*((C_word*)lf[303]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k9610 in a9582 */
static void C_ccall f_9612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_9590(t2,C_SCHEME_FALSE);}
else{
t2=C_i_assq(lf[173],((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_9590(t3,(C_truep(t2)?C_i_assq(lf[171],((C_word*)t0)[2]):C_SCHEME_FALSE));}}

/* k9588 in a9582 */
static void C_fcall f_9590(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9590,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9593,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm:823: write */
t3=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k9591 in k9588 in a9582 */
static void C_ccall f_9593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:824: newline */
t2=*((C_word*)lf[13]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_9536 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_9536(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9536,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9542,tmp=(C_word)a,a+=2,tmp);
/* support.scm:808: ##sys#hash-table-for-each */
t4=*((C_word*)lf[147]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* a9541 */
static void C_ccall f_9542(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9542,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9549,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9575,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:810: keyword? */
t6=*((C_word*)lf[303]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k9573 in a9541 */
static void C_ccall f_9575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_9549(t2,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_assq(lf[173],((C_word*)t0)[2]))){
t2=C_i_assq(lf[171],((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_9549(t3,C_i_not(t2));}
else{
t2=((C_word*)t0)[3];
f_9549(t2,C_SCHEME_FALSE);}}}

/* k9547 in a9541 */
static void C_fcall f_9549(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9549,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9552,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm:813: write */
t3=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k9550 in k9547 in a9541 */
static void C_ccall f_9552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:814: newline */
t2=*((C_word*)lf[13]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_9414 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_9414(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9414,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(2));
t5=C_i_caddr(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_car(t5):C_SCHEME_FALSE);
if(C_truep(t7)){
if(C_truep(C_i_cadr(t4))){
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9443,a[2]=t9,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_9443(3,t11,t1,t2);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* rec */
static void C_ccall f_9443(C_word c,C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9443,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_eqp(t4,lf[229]);
if(C_truep(t5)){
t6=t2;
t7=C_slot(t6,C_fix(3));
t8=C_i_car(t7);
t9=C_slot(t8,C_fix(1));
t10=C_eqp(lf[204],t9);
if(C_truep(t10)){
t11=C_slot(t8,C_fix(2));
t12=C_i_car(t11);
t13=C_eqp(((C_word*)t0)[3],t12);
if(C_truep(t13)){
t14=C_i_cdr(t7);
/* support.scm:800: every */
t15=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,((C_word*)((C_word*)t0)[2])[1],t14);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t6=C_eqp(t4,lf[220]);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}
else{
t7=t2;
t8=C_slot(t7,C_fix(3));
/* support.scm:802: every */
t9=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t1,((C_word*)((C_word*)t0)[2])[1],t8);}}}

/* f_9313 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_9313(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9313,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9319,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_9319(3,t7,t1,t2);}

/* walk */
static void C_ccall f_9319(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9319,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(3));
t5=t2;
t6=C_slot(t5,C_fix(1));
t7=C_eqp(t6,lf[204]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9345,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t6,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t7)){
t9=t8;
f_9345(t9,t7);}
else{
t9=C_eqp(t6,lf[79]);
if(C_truep(t9)){
t10=t8;
f_9345(t10,t9);}
else{
t10=C_eqp(t6,lf[210]);
if(C_truep(t10)){
t11=t8;
f_9345(t11,t10);}
else{
t11=C_eqp(t6,lf[221]);
t12=t8;
f_9345(t12,(C_truep(t11)?t11:C_eqp(t6,lf[208])));}}}}

/* k9343 in walk */
static void C_fcall f_9345(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_9345,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[113]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(2));
t5=C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9359,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* support.scm:781: find */
t7=*((C_word*)lf[299]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[6],t6,*((C_word*)lf[300]+1));}
else{
t3=C_eqp(((C_word*)t0)[5],lf[209]);
if(C_truep(t3)){
if(C_truep(t3)){
/* support.scm:784: any */
t4=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[6],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}}
else{
t4=C_eqp(((C_word*)t0)[5],lf[89]);
if(C_truep(t4)){
/* support.scm:784: any */
t5=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[6],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}
else{
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}}}}}

/* a9358 in k9343 in walk */
static void C_ccall f_9359(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9359,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9367,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:782: foreign-callback-stub-id */
t4=*((C_word*)lf[298]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k9365 in a9358 in k9343 in walk */
static void C_ccall f_9367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[2],t1));}

/* f_9088 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_9088(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9088,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9091,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9125,a[2]=t10,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9168,a[2]=t10,a[3]=t12,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9287,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* support.scm:765: matchn */
t17=((C_word*)t12)[1];
f_9168(t17,t16,t2,t3);}

/* k9285 */
static void C_ccall f_9287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9287,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9293,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_slot(t3,C_fix(1));
t5=((C_word*)t0)[3];
t6=C_slot(t5,C_fix(2));
/* support.scm:768: debugging */
t7=*((C_word*)lf[10]+1);
f_3772(7,t7,t2,lf[295],lf[296],t4,t6,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9291 in k9285 */
static void C_ccall f_9293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* matchn */
static void C_fcall f_9168(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9168,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_not_pair_p(t3))){
/* support.scm:754: resolve */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9091(t4,t1,t3,t2);}
else{
t4=t2;
t5=C_slot(t4,C_fix(1));
t6=C_i_car(t3);
t7=C_eqp(t5,t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9190,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t9=t2;
t10=C_slot(t9,C_fix(2));
t11=C_i_cadr(t3);
/* support.scm:756: match1 */
t12=((C_word*)((C_word*)t0)[2])[1];
f_9125(t12,t8,t10,t11);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}}

/* k9188 in matchn */
static void C_ccall f_9190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9190,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
t3=C_slot(t2,C_fix(3));
t4=C_i_cddr(((C_word*)t0)[5]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9208,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_9208(t8,((C_word*)t0)[2],t3,t4);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop in k9188 in matchn */
static void C_fcall f_9208(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9208,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_nullp(t2));}
else{
if(C_truep(C_i_not_pair_p(t3))){
/* support.scm:760: resolve */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9091(t4,t1,t3,t2);}
else{
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9239,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t2);
t6=C_i_car(t3);
/* support.scm:762: matchn */
t7=((C_word*)((C_word*)t0)[2])[1];
f_9168(t7,t4,t5,t6);}}}}

/* k9237 in loop in k9188 in matchn */
static void C_ccall f_9239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[4]);
/* support.scm:763: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_9208(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* match1 */
static void C_fcall f_9125(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9125,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_not_pair_p(t3))){
/* support.scm:747: resolve */
t4=((C_word*)((C_word*)t0)[3])[1];
f_9091(t4,t1,t3,t2);}
else{
if(C_truep(C_i_not_pair_p(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9147,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t2);
t6=C_i_car(t3);
/* support.scm:749: match1 */
t8=t4;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}

/* k9145 in match1 */
static void C_ccall f_9147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[4]);
/* support.scm:749: match1 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_9125(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* resolve */
static void C_fcall f_9091(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9091,NULL,4,t0,t1,t2,t3);}
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9099,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* g21132114 */
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_9099(t5,t4));}
else{
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9120,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:742: alist-cons */
t6=*((C_word*)lf[117]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,t2,t3,((C_word*)((C_word*)t0)[3])[1]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_eqp(t2,t3));}}}

/* k9118 in resolve */
static void C_ccall f_9120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* g2113 in resolve */
static C_word C_fcall f_9099(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=C_i_cdr(t1);
return(C_i_equalp(((C_word*)t0)[2],t2));}

/* f_9019 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_9019(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9019,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9025,tmp=(C_word)a,a+=2,tmp);
/* support.scm:722: with-input-from-file */
t4=*((C_word*)lf[293]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* a9024 */
static void C_ccall f_9025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9025,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9031,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_9031(t5,t1);}

/* loop in a9024 */
static void C_fcall f_9031(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9031,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9035,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:725: read */
t3=*((C_word*)lf[97]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9033 in loop in a9024 */
static void C_ccall f_9035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9035,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9071,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9082,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cadr(t1);
/* support.scm:730: sexpr->node */
t6=*((C_word*)lf[271]+1);
f_8686(3,t6,t4,t5);}}

/* k9080 in k9033 in loop in a9024 */
static void C_ccall f_9082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9082,2,t0,t1);}
t2=C_a_i_list(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* tweaks.scm:50: ##sys#put! */
t4=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[290],C_SCHEME_TRUE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
/* tweaks.scm:50: ##sys#put! */
t6=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,((C_word*)t0)[3],((C_word*)t0)[2],lf[290],t5);}
else{
/* ##sys#error */
t5=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k9044 in k9080 in k9033 in loop in a9024 */
static void C_ccall f_9046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tweaks.scm:50: ##sys#put! */
t2=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[290],t1);}

/* k9069 in k9033 in loop in a9024 */
static void C_ccall f_9071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:731: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_9031(t2,((C_word*)t0)[2]);}

/* f_8756 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_8756(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8756,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8760,a[2]=t2,a[3]=t7,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8876,a[2]=t3,a[3]=t7,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* support.scm:686: ##sys#hash-table-for-each */
t10=*((C_word*)lf[147]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,t9,t3);}

/* a8875 */
static void C_ccall f_8876(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8876,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* support.scm:688: variable-visible? */
t5=*((C_word*)lf[291]+1);
f_13025(3,t5,t4,t2);}

/* k8881 in a8875 */
static void C_ccall f_8883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8883,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_assq(lf[158],((C_word*)t0)[7]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t4=((C_word*)t0)[5];
/* tweaks.scm:53: ##sys#get */
t5=*((C_word*)lf[232]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,lf[290]);}
else{
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k9015 in k8881 in a8875 */
static void C_ccall f_9017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9017,2,t0,t1);}
if(C_truep(C_i_structurep(t1,lf[194]))){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_i_assq(lf[157],((C_word*)t0)[7]);
t3=C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8907,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=t4;
f_8907(t5,t3);}
else{
t5=C_i_cdr(t2);
t6=C_eqp(lf[154],t5);
t7=t4;
f_8907(t7,C_i_not(t6));}}}

/* k8905 in k9015 in k8881 in a8875 */
static void C_fcall f_8907(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8907,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_assq(lf[183],((C_word*)t0)[8]))){
t2=C_i_cdr(((C_word*)t0)[7]);
t3=C_slot(t2,C_fix(2));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8984,a[2]=t3,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* support.scm:696: get */
t5=*((C_word*)lf[130]+1);
f_5258(5,t5,t4,((C_word*)t0)[2],((C_word*)t0)[5],lf[190]);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8982 in k8905 in k9015 in k8881 in a8875 */
static void C_ccall f_8984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8984,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[6];
/* tweaks.scm:53: ##sys#get */
t4=*((C_word*)lf[232]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,lf[289]);}}

/* k8939 in k8982 in k8905 in k9015 in k8881 in a8875 */
static void C_ccall f_8941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8941,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8944,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(t1,lf[286]);
if(C_truep(t3)){
t4=t2;
f_8944(t4,C_SCHEME_TRUE);}
else{
t4=C_eqp(t1,lf[287]);
if(C_truep(t4)){
t5=t2;
f_8944(t5,C_SCHEME_FALSE);}
else{
t5=C_i_cadddr(((C_word*)t0)[2]);
t6=t2;
f_8944(t6,C_i_lessp(t5,*((C_word*)lf[288]+1)));}}}

/* k8942 in k8939 in k8982 in k8905 in k9015 in k8881 in a8875 */
static void C_fcall f_8944(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8944,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8960,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t5=C_i_cdr(((C_word*)t0)[2]);
/* support.scm:703: node->sexpr */
t6=*((C_word*)lf[270]+1);
f_8602(3,t6,t4,t5);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8958 in k8942 in k8939 in k8982 in k8905 in k9015 in k8881 in a8875 */
static void C_ccall f_8960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8960,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[4],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k8758 */
static void C_ccall f_8760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8760,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8763,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[3])[1]))){
/* support.scm:706: delete-file* */
t3=*((C_word*)lf[277]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8823,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm:707: with-output-to-file */
t4=*((C_word*)lf[285]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}}

/* a8822 in k8758 */
static void C_ccall f_8823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8823,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8827,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8874,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:709: chicken-version */
t4=*((C_word*)lf[284]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k8872 in a8822 in k8758 */
static void C_ccall f_8874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:709: print */
t2=*((C_word*)lf[273]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[280],t1,lf[281],*((C_word*)lf[282]+1),lf[283]);}

/* k8825 in a8822 in k8758 */
static void C_ccall f_8827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8827,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8838,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm:715: reverse */
t3=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k8836 in k8825 in a8822 in k8758 */
static void C_ccall f_8838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8838,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[14]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8844,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8849,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_8849(t7,t3,t1);}

/* for-each-loop2031 in k8836 in k8825 in a8822 in k8758 */
static void C_fcall f_8849(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8849,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8859,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8832,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:713: pp */
t6=*((C_word*)lf[279]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8830 in for-each-loop2031 in k8836 in k8825 in a8822 in k8758 */
static void C_ccall f_8832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:714: newline */
t2=*((C_word*)lf[13]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k8857 in for-each-loop2031 in k8836 in k8825 in a8822 in k8758 */
static void C_ccall f_8859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8849(t3,((C_word*)t0)[2],t2);}

/* k8842 in k8836 in k8825 in a8822 in k8758 */
static void C_ccall f_8844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:716: print */
t2=*((C_word*)lf[273]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[278]);}

/* k8761 in k8758 */
static void C_ccall f_8763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8763,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
/* support.scm:718: debugging */
t3=*((C_word*)lf[10]+1);
f_3772(4,t3,t2,lf[275],lf[276]);}
else{
t3=t2;
f_8769(2,t3,C_SCHEME_FALSE);}}

/* k8767 in k8761 in k8758 */
static void C_ccall f_8769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8769,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8777,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm:719: sort-symbols */
t3=*((C_word*)lf[75]+1);
f_4498(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k8775 in k8767 in k8761 in k8758 */
static void C_ccall f_8777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8777,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[14]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8785,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_8785(t6,((C_word*)t0)[2],t1);}

/* for-each-loop2052 in k8775 in k8767 in k8761 in k8758 */
static void C_fcall f_8785(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8785,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8795,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[273]+1);
/* g20672068 */
t6=t5;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,lf[274],t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8793 in for-each-loop2052 in k8775 in k8767 in k8761 in k8758 */
static void C_ccall f_8795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8785(t3,((C_word*)t0)[2],t2);}

/* f_8686 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_8686(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8686,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8692,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_8692(t6,t1,t2);}

/* walk */
static void C_fcall f_8692(C_word t0,C_word t1,C_word t2){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8692,NULL,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=C_i_cadr(t2);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_i_cddr(t2);
t10=C_i_check_list_2(t9,lf[146]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8719,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8721,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t13,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_8721(t15,t11,t9);}

/* map-loop1971 in walk */
static void C_fcall f_8721(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8721,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8750,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g19771986 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_8692(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8748 in map-loop1971 in walk */
static void C_ccall f_8750(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8750,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8721(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8721(t6,((C_word*)t0)[3],t5);}}

/* k8717 in walk */
static void C_ccall f_8719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8719,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[194],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* f_8602 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_8602(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8602,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8608,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_8608(t6,t1,t2);}

/* walk */
static void C_fcall f_8608(C_word t0,C_word t1,C_word t2){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8608,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=t2;
t6=C_slot(t5,C_fix(2));
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=t2;
t12=C_slot(t11,C_fix(3));
t13=C_i_check_list_2(t12,lf[146]);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8649,a[2]=t4,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8651,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=t16,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_8651(t18,t14,t12);}

/* map-loop1932 in walk */
static void C_fcall f_8651(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8651,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8680,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g19381947 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_8608(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8678 in map-loop1932 in walk */
static void C_ccall f_8680(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8680,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8651(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8651(t6,((C_word*)t0)[3],t5);}}

/* k8647 in walk */
static void C_ccall f_8649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8649,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* f_8563 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_8563(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8563,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8567,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_slot(t5,C_fix(1));
t7=t3;
t8=C_i_check_structure_2(t7,lf[194],C_SCHEME_FALSE);
/* ##sys#block-set! */
t9=*((C_word*)lf[198]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t4,t7,C_fix(1),t6);}

/* k8565 */
static void C_ccall f_8567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
t4=C_slot(t3,C_fix(2));
t5=((C_word*)t0)[3];
t6=C_i_check_structure_2(t5,lf[194],C_SCHEME_FALSE);
/* ##sys#block-set! */
t7=*((C_word*)lf[198]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t2,t5,C_fix(2),t4);}

/* k8568 in k8565 */
static void C_ccall f_8570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8570,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8573,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=C_slot(t3,C_fix(3));
t5=((C_word*)t0)[3];
t6=C_i_check_structure_2(t5,lf[194],C_SCHEME_FALSE);
/* ##sys#block-set! */
t7=*((C_word*)lf[198]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t2,t5,C_fix(3),t4);}

/* k8571 in k8568 in k8565 */
static void C_ccall f_8573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_8529 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_8529(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8529,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8535,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_8535(t6,t1,t2);}

/* rec */
static void C_fcall f_8535(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8535,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8549,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* support.scm:664: rec */
t7=t3;
t8=t4;
t1=t7;
t2=t8;
goto loop;}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8547 in rec */
static void C_ccall f_8549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8553,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* support.scm:664: rec */
t4=((C_word*)((C_word*)t0)[2])[1];
f_8535(t4,t2,t3);}

/* k8551 in k8547 in rec */
static void C_ccall f_8553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8553,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* f_8041 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_8041(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_8041,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=*((C_word*)lf[263]+1);
t12=C_i_check_list_2(t3,lf[146]);
t13=C_i_check_list_2(t4,lf[146]);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8051,a[2]=t2,a[3]=t1,a[4]=t5,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8480,a[2]=t11,a[3]=t8,a[4]=t16,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_8480(t18,t14,t3,t4);}

/* map-loop1678 */
static void C_fcall f_8480(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_8480,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8513,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g16841694 */
t9=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8511 in map-loop1678 */
static void C_ccall f_8513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8513,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8493,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_8493(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_8493(t5,t4);}}

/* k8491 in k8511 in map-loop1678 */
static void C_fcall f_8493(C_word t0,C_word t1){
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
f_8480(t5,((C_word*)t0)[2],t3,t4);}

/* k8049 */
static void C_ccall f_8051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8051,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8059,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
/* support.scm:659: walk */
t5=((C_word*)t3)[1];
f_8059(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* walk in k8049 */
static void C_fcall f_8059(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8059,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_slot(t4,C_fix(3));
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=t2;
t9=C_slot(t8,C_fix(1));
t10=C_eqp(t9,lf[79]);
if(C_truep(t10)){
t11=t1;
t12=t11;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_a_i_record4(&a,4,lf[194],t9,t7,C_SCHEME_END_OF_LIST));}
else{
t11=C_eqp(t9,lf[204]);
if(C_truep(t11)){
t12=C_i_car(t7);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8110,a[2]=t12,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8120,a[2]=t12,a[3]=t13,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:627: get */
t15=*((C_word*)lf[130]+1);
f_5258(5,t15,t14,((C_word*)t0)[3],t12,lf[174]);}
else{
t12=C_eqp(t9,lf[222]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8157,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t14=C_i_car(t7);
t15=t3;
/* support.scm:617: alist-ref */
t16=*((C_word*)lf[264]+1);
((C_proc6)(void*)(*((C_word*)t16+1)))(6,t16,t13,t14,t15,*((C_word*)lf[265]+1),t14);}
else{
t13=C_eqp(t9,lf[89]);
if(C_truep(t13)){
t14=C_i_car(t7);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8173,a[2]=t3,a[3]=t14,a[4]=((C_word*)t0)[2],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t16=C_i_car(t5);
/* support.scm:636: walk */
t29=t15;
t30=t16;
t31=t3;
t1=t29;
t2=t30;
t3=t31;
goto loop;}
else{
t14=C_eqp(t9,lf[113]);
if(C_truep(t14)){
t15=C_i_caddr(t7);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8222,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=t7,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* support.scm:643: decompose-lambda-list */
t17=*((C_word*)lf[104]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t1,t15,t16);}
else{
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8428,a[2]=t9,a[3]=t1,a[4]=t5,a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* support.scm:658: tree-copy */
t16=*((C_word*)lf[268]+1);
f_8529(3,t16,t15,t7);}}}}}}

/* k8426 in walk in k8049 */
static void C_ccall f_8428(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8428,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8430,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[146]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8440,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8442,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_8442(t12,t8,((C_word*)t0)[4]);}

/* map-loop1863 in k8426 in walk in k8049 */
static void C_fcall f_8442(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8442,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8471,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g18691878 */
t5=((C_word*)t0)[2];
f_8430(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8469 in map-loop1863 in k8426 in walk in k8049 */
static void C_ccall f_8471(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8471,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8442(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8442(t6,((C_word*)t0)[3],t5);}}

/* k8438 in k8426 in walk in k8049 */
static void C_ccall f_8440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8440,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[194],((C_word*)t0)[2],t3,t1));}

/* g1869 in k8426 in walk in k8049 */
static void C_fcall f_8430(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8430,NULL,3,t0,t1,t2);}
/* g18861887 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8059(t3,t1,t2,((C_word*)t0)[2]);}

/* a8221 in walk in k8049 */
static void C_ccall f_8222(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8222,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8224,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t10=t2;
t11=C_i_check_list_2(t10,lf[146]);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8237,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8383,a[2]=t9,a[3]=t6,a[4]=t14,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_8383(t16,t12,t10);}

/* map-loop1757 in a8221 in walk in k8049 */
static void C_fcall f_8383(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8383,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8412,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g17631772 */
t5=((C_word*)t0)[2];
f_8224(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8410 in map-loop1757 in a8221 in walk in k8049 */
static void C_ccall f_8412(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8412,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8383(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8383(t6,((C_word*)t0)[3],t5);}}

/* k8235 in a8221 in walk in k8049 */
static void C_ccall f_8237(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8237,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8240,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[263]+1);
t8=((C_word*)t0)[3];
t9=C_i_check_list_2(t8,lf[146]);
t10=C_i_check_list_2(t1,lf[146]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8332,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8334,a[2]=t7,a[3]=t4,a[4]=t13,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_8334(t15,t11,t8,t1);}

/* map-loop1787 in k8235 in a8221 in walk in k8049 */
static void C_fcall f_8334(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_8334,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8367,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g17931803 */
t9=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8365 in map-loop1787 in k8235 in a8221 in walk in k8049 */
static void C_ccall f_8367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8367,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8347,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_8347(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_8347(t5,t4);}}

/* k8345 in k8365 in map-loop1787 in k8235 in a8221 in walk in k8049 */
static void C_fcall f_8347(C_word t0,C_word t1){
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
f_8334(t5,((C_word*)t0)[2],t3,t4);}

/* k8330 in k8235 in a8221 in walk in k8049 */
static void C_ccall f_8332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:651: append */
t2=*((C_word*)lf[51]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k8238 in k8235 in a8221 in walk in k8049 */
static void C_ccall f_8240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8240,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8303,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* support.scm:654: gensym */
t3=*((C_word*)lf[90]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[267]);}

/* k8301 in k8238 in k8235 in a8221 in walk in k8049 */
static void C_ccall f_8303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8303,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8311,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8319,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t5=((C_word*)t0)[2];
t6=((C_word*)t0)[7];
/* support.scm:617: alist-ref */
t7=*((C_word*)lf[264]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t4,t5,t6,*((C_word*)lf[265]+1),t5);}
else{
/* support.scm:655: build-lambda-list */
t5=*((C_word*)lf[45]+1);
f_4137(5,t5,t3,((C_word*)t0)[4],((C_word*)t0)[3],C_SCHEME_FALSE);}}

/* k8317 in k8301 in k8238 in k8235 in a8221 in walk in k8049 */
static void C_ccall f_8319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:655: build-lambda-list */
t2=*((C_word*)lf[45]+1);
f_4137(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8309 in k8301 in k8238 in k8235 in a8221 in walk in k8049 */
static void C_ccall f_8311(C_word c,C_word t0,C_word t1){
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
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8311,2,t0,t1);}
t2=C_i_cadddr(((C_word*)t0)[8]);
t3=C_a_i_list4(&a,4,((C_word*)t0)[7],((C_word*)t0)[6],t1,t2);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8254,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=C_i_check_list_2(((C_word*)t0)[3],lf[146]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8264,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8266,a[2]=t8,a[3]=t5,a[4]=t12,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_8266(t14,t10,((C_word*)t0)[3]);}

/* map-loop1824 in k8309 in k8301 in k8238 in k8235 in a8221 in walk in k8049 */
static void C_fcall f_8266(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8266,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8295,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g18301839 */
t5=((C_word*)t0)[2];
f_8254(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8293 in map-loop1824 in k8309 in k8301 in k8238 in k8235 in a8221 in walk in k8049 */
static void C_ccall f_8295(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8295,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8266(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8266(t6,((C_word*)t0)[3],t5);}}

/* k8262 in k8309 in k8301 in k8238 in k8235 in a8221 in walk in k8049 */
static void C_ccall f_8264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8264,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[194],lf[113],((C_word*)t0)[2],t1));}

/* g1830 in k8309 in k8301 in k8238 in k8235 in a8221 in walk in k8049 */
static void C_fcall f_8254(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8254,NULL,3,t0,t1,t2);}
/* g18471848 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8059(t3,t1,t2,((C_word*)t0)[2]);}

/* g1763 in a8221 in walk in k8049 */
static void C_fcall f_8224(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8224,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8228,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm:647: gensym */
t4=*((C_word*)lf[90]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k8226 in g1763 in a8221 in walk in k8049 */
static void C_ccall f_8228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8228,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8231,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm:648: put! */
t3=*((C_word*)lf[134]+1);
f_5294(6,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[266],C_SCHEME_TRUE);}

/* k8229 in k8226 in g1763 in a8221 in walk in k8049 */
static void C_ccall f_8231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k8171 in walk in k8049 */
static void C_ccall f_8173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8173,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* support.scm:637: gensym */
t3=*((C_word*)lf[90]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k8174 in k8171 in walk in k8049 */
static void C_ccall f_8176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8176,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8179,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* support.scm:638: alist-cons */
t3=*((C_word*)lf[117]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k8177 in k8174 in k8171 in walk in k8049 */
static void C_ccall f_8179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8179,2,t0,t1);}
t2=C_a_i_list1(&a,1,((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8199,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
/* support.scm:641: walk */
t5=((C_word*)((C_word*)t0)[2])[1];
f_8059(t5,t3,t4,t1);}

/* k8197 in k8177 in k8174 in k8171 in walk in k8049 */
static void C_ccall f_8199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8199,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[194],lf[89],((C_word*)t0)[2],t2));}

/* k8155 in walk in k8049 */
static void C_ccall f_8157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8157,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8149,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* support.scm:633: walk */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8059(t5,t3,t4,((C_word*)t0)[2]);}

/* k8147 in k8155 in walk in k8049 */
static void C_ccall f_8149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8149,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[194],lf[222],((C_word*)t0)[2],t2));}

/* k8118 in walk in k8049 */
static void C_ccall f_8120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm:628: cfk */
t2=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_8110(2,t2,C_SCHEME_UNDEFINED);}}

/* k8108 in walk in k8049 */
static void C_ccall f_8110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8110,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8117,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];
/* support.scm:617: alist-ref */
t4=*((C_word*)lf[264]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,((C_word*)t0)[2],t3,*((C_word*)lf[265]+1),((C_word*)t0)[2]);}

/* k8115 in k8108 in walk in k8049 */
static void C_ccall f_8117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8117,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_a_i_list1(&a,1,t1);
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[194],lf[204],t3,C_SCHEME_END_OF_LIST));}

/* f_7890 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_7890(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_7890,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7896,a[2]=t7,a[3]=t6,a[4]=t4,a[5]=t5,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:591: decompose-lambda-list */
t9=*((C_word*)lf[104]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t1,t2,t8);}

/* a7895 */
static void C_ccall f_7896(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7896,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7902,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7908,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t4,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a7907 in a7895 */
static void C_ccall f_7908(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7908,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7912,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t2,a[11]=t1,tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[6])){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[90]+1);
t10=((C_word*)t0)[4];
t11=C_i_check_list_2(t10,lf[146]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8006,a[2]=t9,a[3]=t6,a[4]=t13,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_8006(t15,t4,t10);}
else{
t5=t4;
f_7912(2,t5,((C_word*)t0)[4]);}}

/* map-loop1626 in a7907 in a7895 */
static void C_fcall f_8006(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8006,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8035,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g16321641 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8033 in map-loop1626 in a7907 in a7895 */
static void C_ccall f_8035(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8035,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8006(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8006(t6,((C_word*)t0)[3],t5);}}

/* k7910 in a7907 in a7895 */
static void C_ccall f_7912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7912,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7915,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t1,a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[6])){
/* support.scm:597: copy-node-tree-and-rename */
t3=*((C_word*)lf[262]+1);
f_8041(7,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=t2;
f_7915(2,t3,((C_word*)t0)[5]);}}

/* k7913 in k7910 in a7907 in a7895 */
static void C_ccall f_7915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7915,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7920,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7941,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7995,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* support.scm:603: last */
t5=*((C_word*)lf[244]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}
else{
t4=t3;
f_7941(t4,t1);}}

/* k7993 in k7913 in k7910 in a7907 in a7895 */
static void C_ccall f_7995(C_word c,C_word t0,C_word t1){
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
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7995,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t3=C_a_i_list1(&a,1,C_SCHEME_END_OF_LIST);
t4=C_a_i_record4(&a,4,lf[194],lf[79],t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_list2(&a,2,t4,((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
f_7941(t6,C_a_i_record4(&a,4,lf[194],lf[89],t2,t5));}
else{
t3=C_i_length(((C_word*)t0)[4]);
t4=C_a_i_times(&a,2,C_fix(3),t3);
t5=C_a_i_list2(&a,2,lf[261],t4);
t6=((C_word*)t0)[4];
t7=C_a_i_record4(&a,4,lf[194],lf[227],t5,t6);
t8=C_a_i_list2(&a,2,t7,((C_word*)t0)[3]);
t9=((C_word*)t0)[2];
f_7941(t9,C_a_i_record4(&a,4,lf[194],lf[89],t2,t8));}}

/* k7939 in k7913 in k7910 in a7907 in a7895 */
static void C_fcall f_7941(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7941,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7945,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* support.scm:612: take */
t3=*((C_word*)lf[260]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7943 in k7939 in k7913 in k7910 in a7907 in a7895 */
static void C_ccall f_7945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:599: fold-right */
t2=*((C_word*)lf[259]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a7919 in k7913 in k7910 in a7907 in a7895 */
static void C_ccall f_7920(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7920,5,t0,t1,t2,t3,t4);}
t5=C_a_i_list1(&a,1,t2);
t6=C_a_i_list2(&a,2,t3,t4);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[194],lf[89],t5,t6));}

/* a7901 in a7895 */
static void C_ccall f_7902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7902,2,t0,t1);}
/* support.scm:594: split-at */
t2=*((C_word*)lf[258]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_7836 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_7836(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7836,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7842,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7842(t7,t1,t3);}

/* fold */
static void C_fcall f_7842(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7842,NULL,3,t0,t1,t2);}
t3=C_i_cddr(t2);
if(C_truep(C_i_nullp(t3))){
C_apply(4,0,t1,((C_word*)t0)[3],t2);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7868,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(t2);
t6=C_i_cadr(t2);
/* support.scm:587: proc */
t7=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,t5,t6);}}

/* k7866 in fold */
static void C_ccall f_7868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7868,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7872,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* support.scm:588: fold */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7842(t4,t2,t3);}

/* k7870 in k7866 in fold */
static void C_ccall f_7872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7872,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[194],lf[219],lf[256],t2));}

/* f_7152 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_7152(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7152,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7158,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_7158(t6,t1,t2);}

/* walk */
static void C_fcall f_7158(C_word t0,C_word t1,C_word t2){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7158,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(3));
t5=t2;
t6=C_slot(t5,C_fix(2));
t7=t2;
t8=C_slot(t7,C_fix(1));
t9=C_eqp(t8,lf[209]);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7192,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t8,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t9)){
t11=t10;
f_7192(t11,t9);}
else{
t11=C_eqp(t8,lf[253]);
t12=t10;
f_7192(t12,(C_truep(t11)?t11:C_eqp(t8,lf[254])));}}

/* k7190 in walk */
static void C_fcall f_7192(C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7192,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(((C_word*)t0)[6],lf[146]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7202,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7204,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t9,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7204(t11,t7,((C_word*)t0)[6]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[242]);
if(C_truep(t2)){
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[6],lf[146]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7257,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7259,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t10,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7259(t12,t8,((C_word*)t0)[6]);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[204]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[4],lf[208]));
if(C_truep(t4)){
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_car(((C_word*)t0)[2]));}
else{
t5=C_eqp(((C_word*)t0)[4],lf[79]);
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[2]);
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,2,lf[79],t6));}
else{
t6=C_eqp(((C_word*)t0)[4],lf[89]);
if(C_truep(t6)){
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=*((C_word*)lf[243]+1);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_FALSE;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7330,a[2]=t13,a[3]=t15,a[4]=t11,a[5]=t8,a[6]=t10,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[2],tmp=(C_word)a,a+=11,tmp);
/* support.scm:559: butlast */
t17=*((C_word*)lf[245]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,((C_word*)t0)[6]);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[113]);
if(C_truep(t7)){
t8=C_i_cadr(((C_word*)t0)[2]);
t9=(C_truep(t8)?lf[217]:lf[113]);
t10=C_i_caddr(((C_word*)t0)[2]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7458,a[2]=t10,a[3]=t9,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t12=C_i_car(((C_word*)t0)[6]);
/* support.scm:566: walk */
t13=((C_word*)((C_word*)t0)[3])[1];
f_7158(t13,t11,t12);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[229]);
if(C_truep(t8)){
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_i_check_list_2(((C_word*)t0)[6],lf[146]);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7479,a[2]=((C_word*)t0)[3],a[3]=t10,a[4]=t15,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_7479(t17,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[220]);
if(C_truep(t9)){
t10=C_i_car(((C_word*)t0)[2]);
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_i_check_list_2(((C_word*)t0)[6],lf[146]);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7532,a[2]=t10,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7534,a[2]=((C_word*)t0)[3],a[3]=t12,a[4]=t18,a[5]=t14,tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_7534(t20,t16,((C_word*)t0)[6]);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[210]);
if(C_truep(t10)){
t11=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_list1(&a,1,((C_word*)t0)[4]));}
else{
t11=C_eqp(((C_word*)t0)[4],lf[247]);
if(C_truep(t11)){
t12=C_i_car(((C_word*)t0)[2]);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7591,a[2]=t14,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t16=((C_word*)t14)[1];
f_7591(t16,((C_word*)t0)[5],t12,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[248]);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7645,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t12)){
t14=t13;
f_7645(t14,t12);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[250]);
if(C_truep(t14)){
t15=t13;
f_7645(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[251]);
t16=t13;
f_7645(t16,(C_truep(t15)?t15:C_eqp(((C_word*)t0)[4],lf[252])));}}}}}}}}}}}}}

/* k7643 in k7190 in walk */
static void C_fcall f_7645(C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7645,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[6]);
/* support.scm:576: walk */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7158(t4,t2,t3);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[227]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[249]));
if(C_truep(t3)){
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_check_list_2(((C_word*)t0)[6],lf[146]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7720,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7722,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t11,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_7722(t13,t9,((C_word*)t0)[6]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7762,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_i_check_list_2(((C_word*)t0)[6],lf[146]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7769,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7771,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t12,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7771(t14,t10,((C_word*)t0)[6]);}}}

/* map-loop1575 in k7643 in k7190 in walk */
static void C_fcall f_7771(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7771,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7800,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g15811590 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7158(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7798 in map-loop1575 in k7643 in k7190 in walk */
static void C_ccall f_7800(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7800,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7771(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7771(t6,((C_word*)t0)[3],t5);}}

/* k7767 in k7643 in k7190 in walk */
static void C_ccall f_7769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:579: append */
t2=*((C_word*)lf[51]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7760 in k7643 in k7190 in walk */
static void C_ccall f_7762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7762,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* map-loop1549 in k7643 in k7190 in walk */
static void C_fcall f_7722(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7722,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7751,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g15551564 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7158(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7749 in map-loop1549 in k7643 in k7190 in walk */
static void C_ccall f_7751(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7751,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7722(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7722(t6,((C_word*)t0)[3],t5);}}

/* k7718 in k7643 in k7190 in walk */
static void C_ccall f_7720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:578: cons* */
t2=*((C_word*)lf[246]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7650 in k7643 in k7190 in walk */
static void C_ccall f_7652(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7652,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_cdr(((C_word*)t0)[6]);
t7=C_i_check_list_2(t6,lf[146]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7662,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7664,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t10,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7664(t12,t8,t6);}

/* map-loop1520 in k7650 in k7643 in k7190 in walk */
static void C_fcall f_7664(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7664,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7693,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g15261535 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7158(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7691 in map-loop1520 in k7650 in k7643 in k7190 in walk */
static void C_ccall f_7693(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7693,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7664(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7664(t6,((C_word*)t0)[3],t5);}}

/* k7660 in k7650 in k7643 in k7190 in walk */
static void C_ccall f_7662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:576: cons* */
t2=*((C_word*)lf[246]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k7190 in walk */
static void C_fcall f_7591(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7591,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_zerop(t2))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7605,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm:573: reverse */
t6=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t5=C_a_i_minus(&a,2,t2,C_fix(1));
t6=C_i_cdr(t3);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7632,a[2]=t6,a[3]=t5,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t8=C_i_car(t3);
/* support.scm:574: walk */
t9=((C_word*)((C_word*)t0)[3])[1];
f_7158(t9,t7,t8);}}

/* k7630 in loop in k7190 in walk */
static void C_ccall f_7632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7632,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* support.scm:574: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_7591(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k7603 in loop in k7190 in walk */
static void C_ccall f_7605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7609,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* support.scm:573: walk */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7158(t4,t2,t3);}

/* k7607 in k7603 in loop in k7190 in walk */
static void C_ccall f_7609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7609,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[247],((C_word*)t0)[2],t1));}

/* map-loop1477 in k7190 in walk */
static void C_fcall f_7534(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7534,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7563,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g14831492 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7158(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7561 in map-loop1477 in k7190 in walk */
static void C_ccall f_7563(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7563,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7534(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7534(t6,((C_word*)t0)[3],t5);}}

/* k7530 in k7190 in walk */
static void C_ccall f_7532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:568: cons* */
t2=*((C_word*)lf[246]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[220],((C_word*)t0)[2],t1);}

/* map-loop1451 in k7190 in walk */
static void C_fcall f_7479(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7479,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7508,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g14571466 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7158(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7506 in map-loop1451 in k7190 in walk */
static void C_ccall f_7508(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7508,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7479(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7479(t6,((C_word*)t0)[3],t5);}}

/* k7456 in k7190 in walk */
static void C_ccall f_7458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7458,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k7328 in k7190 in walk */
static void C_ccall f_7330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7330,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[146]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7336,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7404,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7404(t7,t3,t1);}

/* map-loop1415 in k7328 in k7190 in walk */
static void C_fcall f_7404(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7404,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7433,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g14211430 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7158(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7431 in map-loop1415 in k7328 in k7190 in walk */
static void C_ccall f_7433(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7433,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7404(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7404(t6,((C_word*)t0)[3],t5);}}

/* k7334 in k7328 in k7190 in walk */
static void C_ccall f_7336(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7336,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[8],lf[146]);
t3=C_i_check_list_2(t1,lf[146]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7345,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_7355(t8,t4,((C_word*)t0)[8],t1);}

/* map-loop1394 in k7334 in k7328 in k7190 in walk */
static void C_fcall f_7355(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_7355,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7388,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g14001410 */
t9=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7386 in map-loop1394 in k7334 in k7328 in k7190 in walk */
static void C_ccall f_7388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7388,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7368,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_7368(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_7368(t5,t4);}}

/* k7366 in k7386 in map-loop1394 in k7334 in k7328 in k7190 in walk */
static void C_fcall f_7368(C_word t0,C_word t1){
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
f_7355(t5,((C_word*)t0)[2],t3,t4);}

/* k7343 in k7334 in k7328 in k7190 in walk */
static void C_ccall f_7345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7345,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7349,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7353,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:560: last */
t4=*((C_word*)lf[244]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k7351 in k7343 in k7334 in k7328 in k7190 in walk */
static void C_ccall f_7353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:560: walk */
t2=((C_word*)((C_word*)t0)[3])[1];
f_7158(t2,((C_word*)t0)[2],t1);}

/* k7347 in k7343 in k7334 in k7328 in k7190 in walk */
static void C_ccall f_7349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7349,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[89],((C_word*)t0)[2],t1));}

/* map-loop1359 in k7190 in walk */
static void C_fcall f_7259(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7259,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7288,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g13651374 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7158(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7286 in map-loop1359 in k7190 in walk */
static void C_ccall f_7288(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7288,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7259(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7259(t6,((C_word*)t0)[3],t5);}}

/* k7255 in k7190 in walk */
static void C_ccall f_7257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7257,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[242],t2));}

/* map-loop1330 in k7190 in walk */
static void C_fcall f_7204(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7204,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7233,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g13361345 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7158(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7231 in map-loop1330 in k7190 in walk */
static void C_ccall f_7233(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7233,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7204(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7204(t6,((C_word*)t0)[3],t5);}}

/* k7200 in k7190 in walk */
static void C_ccall f_7202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7202,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* f_6203 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_6203(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6203,3,t0,t1,t2);}
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6206,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7141,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:542: walk */
t9=((C_word*)t6)[1];
f_6206(t9,t8,t2);}

/* k7139 */
static void C_ccall f_7141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7141,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7144,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_positivep(((C_word*)((C_word*)t0)[2])[1]))){
/* support.scm:544: debugging */
t3=*((C_word*)lf[10]+1);
f_3772(5,t3,t2,lf[239],lf[240],((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k7142 in k7139 */
static void C_ccall f_7144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* walk */
static void C_fcall f_6206(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(20);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6206,NULL,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=t1;
t4=t2;
t5=C_a_i_list1(&a,1,t4);
t6=t3;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[194],lf[204],t5,C_SCHEME_END_OF_LIST));}
else{
if(C_truep(C_i_not_pair_p(t2))){
/* support.scm:477: bomb */
t3=*((C_word*)lf[5]+1);
f_3745(4,t3,t1,lf[207],t2);}
else{
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
t4=C_i_car(t2);
t5=C_eqp(t4,lf[208]);
if(C_truep(t5)){
t6=C_i_cadr(t2);
t7=C_a_i_list1(&a,1,t6);
t8=t1;
t9=t8;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_record4(&a,4,lf[194],lf[208],t7,C_SCHEME_END_OF_LIST));}
else{
t6=C_eqp(t4,lf[209]);
t7=(C_truep(t6)?t6:C_eqp(t4,lf[210]));
if(C_truep(t7)){
t8=C_i_car(t2);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_i_cdr(t2);
t14=C_i_check_list_2(t13,lf[146]);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6287,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6289,a[2]=((C_word*)t0)[3],a[3]=t10,a[4]=t17,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_6289(t19,t15,t13);}
else{
t8=C_eqp(t4,lf[79]);
if(C_truep(t8)){
t9=C_i_cadr(t2);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6341,a[2]=t9,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_numberp(t9))){
t11=C_eqp(lf[214],*((C_word*)lf[215]+1));
if(C_truep(t11)){
t12=C_i_integerp(t9);
t13=t10;
f_6341(t13,C_i_not(t12));}
else{
t12=t10;
f_6341(t12,C_SCHEME_FALSE);}}
else{
t11=t10;
f_6341(t11,C_SCHEME_FALSE);}}
else{
t9=C_eqp(t4,lf[89]);
if(C_truep(t9)){
t10=C_i_cadr(t2);
t11=C_i_caddr(t2);
if(C_truep(C_i_nullp(t10))){
/* support.scm:496: walk */
t104=t1;
t105=t11;
t1=t104;
t2=t105;
goto loop;}
else{
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6400,a[2]=t11,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* support.scm:497: unzip1 */
t13=*((C_word*)lf[216]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,t10);}}
else{
t10=C_eqp(t4,lf[217]);
t11=(C_truep(t10)?t10:C_eqp(t4,lf[113]));
if(C_truep(t11)){
t12=C_i_cadr(t2);
t13=C_a_i_list1(&a,1,t12);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6495,a[2]=t13,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t15=C_i_caddr(t2);
/* support.scm:501: walk */
t104=t14;
t105=t15;
t1=t104;
t2=t105;
goto loop;}
else{
t12=C_eqp(t4,lf[218]);
if(C_truep(t12)){
t13=C_i_cadr(t2);
t14=C_i_car(t2);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6528,a[2]=((C_word*)t0)[3],a[3]=t14,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t13))){
t16=C_i_car(t13);
t17=C_eqp(lf[79],t16);
if(C_truep(t17)){
t18=C_i_cadr(t13);
t19=t15;
f_6528(t19,C_a_i_list1(&a,1,t18));}
else{
t18=t15;
f_6528(t18,C_a_i_list1(&a,1,t13));}}
else{
t16=t15;
f_6528(t16,C_a_i_list1(&a,1,t13));}}
else{
t13=C_eqp(t4,lf[219]);
t14=(C_truep(t13)?t13:C_eqp(t4,lf[220]));
if(C_truep(t14)){
t15=C_i_car(t2);
t16=C_i_cadr(t2);
t17=C_a_i_list1(&a,1,t16);
t18=C_SCHEME_END_OF_LIST;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_FALSE;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_i_cddr(t2);
t23=C_i_check_list_2(t22,lf[146]);
t24=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6628,a[2]=t17,a[3]=t15,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6630,a[2]=((C_word*)t0)[3],a[3]=t19,a[4]=t26,a[5]=t21,tmp=(C_word)a,a+=6,tmp));
t28=((C_word*)t26)[1];
f_6630(t28,t24,t22);}
else{
t15=C_eqp(t4,lf[221]);
if(C_truep(t15)){
t16=C_i_cadr(t2);
t17=C_a_i_list2(&a,2,t16,C_SCHEME_TRUE);
t18=t1;
t19=t18;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,C_a_i_record4(&a,4,lf[194],lf[221],t17,C_SCHEME_END_OF_LIST));}
else{
t16=C_eqp(t4,lf[222]);
t17=(C_truep(t16)?t16:C_eqp(t4,lf[223]));
if(C_truep(t17)){
t18=C_i_cadr(t2);
t19=C_a_i_list1(&a,1,t18);
t20=C_SCHEME_END_OF_LIST;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_FALSE;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_i_cddr(t2);
t25=C_i_check_list_2(t24,lf[146]);
t26=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6720,a[2]=t19,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6722,a[2]=((C_word*)t0)[3],a[3]=t21,a[4]=t28,a[5]=t23,tmp=(C_word)a,a+=6,tmp));
t30=((C_word*)t28)[1];
f_6722(t30,t26,t24);}
else{
t18=C_eqp(t4,lf[224]);
if(C_truep(t18)){
t19=C_i_cadr(t2);
t20=C_i_cadr(t19);
t21=C_i_caddr(t2);
t22=C_i_cadr(t21);
t23=C_i_cadddr(t2);
t24=C_i_cadr(t23);
t25=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6808,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t24,a[6]=t22,a[7]=t20,tmp=(C_word)a,a+=8,tmp);
/* support.scm:520: fifth */
t26=*((C_word*)lf[226]+1);
((C_proc3)(void*)(*((C_word*)t26+1)))(3,t26,t25,t2);}
else{
t19=C_eqp(t4,lf[227]);
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6829,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t19)){
t21=t20;
f_6829(t21,t19);}
else{
t21=C_eqp(t4,lf[234]);
if(C_truep(t21)){
t22=t20;
f_6829(t22,t21);}
else{
t22=C_eqp(t4,lf[235]);
if(C_truep(t22)){
t23=t20;
f_6829(t23,t22);}
else{
t23=C_eqp(t4,lf[236]);
t24=t20;
f_6829(t24,(C_truep(t23)?t23:C_eqp(t4,lf[237])));}}}}}}}}}}}}}}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=t2;
t9=C_i_check_list_2(t8,lf[146]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7099,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7101,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t12,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7101(t14,t10,t8);}}}}

/* map-loop1274 in walk */
static void C_fcall f_7101(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7101,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7130,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g12801289 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6206(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7128 in map-loop1274 in walk */
static void C_ccall f_7130(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7130,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7101(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7101(t6,((C_word*)t0)[3],t5);}}

/* k7097 in walk */
static void C_ccall f_7099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7099,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[194],lf[229],lf[238],t1));}

/* k6827 in walk */
static void C_fcall f_6829(C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6829,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[6]);
t3=C_i_cadr(((C_word*)t0)[6]);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_cddr(((C_word*)t0)[6]);
t9=C_i_check_list_2(t8,lf[146]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6855,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6857,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=t12,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_6857(t14,t10,t8);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[228]);
if(C_truep(t2)){
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_cdr(((C_word*)t0)[6]);
t8=C_i_check_list_2(t7,lf[146]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6914,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6916,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t11,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_6916(t13,t9,t7);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6954,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6960,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[5],t3,t4);}}}

/* a6959 in k6827 in walk */
static void C_ccall f_6960(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6960,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7019,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7047,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=t2;
/* tweaks.scm:53: ##sys#get */
t7=*((C_word*)lf[232]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,lf[233]);}

/* k7045 in a6959 in k6827 in walk */
static void C_ccall f_7047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7047,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_7019(t4,C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[2];
f_7019(t2,C_SCHEME_FALSE);}}

/* k7017 in a6959 in k6827 in walk */
static void C_fcall f_7019(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7019,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7023,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7026,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:536: real-name */
t4=*((C_word*)lf[37]+1);
f_12286(3,t4,t3,((C_word*)t0)[2]);}
else{
/* support.scm:539: ##sys#symbol->qualified-string */
t3=*((C_word*)lf[231]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k7024 in k7017 in a6959 in k6827 in walk */
static void C_ccall f_7026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7026,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7033,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t1;
t4=((C_word*)t0)[4];
f_7023(2,t4,C_a_i_list2(&a,2,((C_word*)t0)[3],t3));}
else{
/* support.scm:538: ##sys#symbol->qualified-string */
t3=*((C_word*)lf[231]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k7031 in k7024 in k7017 in a6959 in k6827 in walk */
static void C_ccall f_7033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7033,2,t0,t1);}
t2=((C_word*)t0)[3];
f_7023(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[2],t1));}

/* k7021 in k7017 in a6959 in k6827 in walk */
static void C_ccall f_7023(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7023,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[5],t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t0)[4];
t8=C_i_check_list_2(t7,lf[146]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6980,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6982,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t11,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_6982(t13,t9,t7);}

/* map-loop1243 in k7021 in k7017 in a6959 in k6827 in walk */
static void C_fcall f_6982(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6982,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7011,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g12491258 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6206(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7009 in map-loop1243 in k7021 in k7017 in a6959 in k6827 in walk */
static void C_ccall f_7011(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7011,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6982(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6982(t6,((C_word*)t0)[3],t5);}}

/* k6978 in k7021 in k7017 in a6959 in k6827 in walk */
static void C_ccall f_6980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6980,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[194],lf[229],((C_word*)t0)[2],t1));}

/* a6953 in k6827 in walk */
static void C_ccall f_6954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6954,2,t0,t1);}
/* support.scm:528: get-line-2 */
t2=*((C_word*)lf[141]+1);
f_5468(3,t2,t1,((C_word*)t0)[2]);}

/* map-loop1198 in k6827 in walk */
static void C_fcall f_6916(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6916,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6945,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g12041213 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6206(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6943 in map-loop1198 in k6827 in walk */
static void C_ccall f_6945(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6945,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6916(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6916(t6,((C_word*)t0)[3],t5);}}

/* k6912 in k6827 in walk */
static void C_ccall f_6914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6914,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[194],lf[229],lf[230],t1));}

/* map-loop1167 in k6827 in walk */
static void C_fcall f_6857(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6857,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6886,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g11731182 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6206(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6884 in map-loop1167 in k6827 in walk */
static void C_ccall f_6886(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6886,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6857(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6857(t6,((C_word*)t0)[3],t5);}}

/* k6853 in k6827 in walk */
static void C_ccall f_6855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6855,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[194],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k6806 in walk */
static void C_ccall f_6808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6808,2,t0,t1);}
t2=C_i_cadr(t1);
t3=C_a_i_list4(&a,4,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6788,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6792,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:521: sixth */
t6=*((C_word*)lf[225]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}

/* k6790 in k6806 in walk */
static void C_ccall f_6792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:521: walk */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6206(t2,((C_word*)t0)[2],t1);}

/* k6786 in k6806 in walk */
static void C_ccall f_6788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6788,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[194],lf[224],((C_word*)t0)[2],t2));}

/* map-loop1118 in walk */
static void C_fcall f_6722(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6722,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6751,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g11241133 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6206(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6749 in map-loop1118 in walk */
static void C_ccall f_6751(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6751,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6722(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6722(t6,((C_word*)t0)[3],t5);}}

/* k6718 in walk */
static void C_ccall f_6720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6720,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[194],lf[222],((C_word*)t0)[2],t1));}

/* map-loop1079 in walk */
static void C_fcall f_6630(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6630,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6659,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g10851094 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6206(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6657 in map-loop1079 in walk */
static void C_ccall f_6659(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6659,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6630(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6630(t6,((C_word*)t0)[3],t5);}}

/* k6626 in walk */
static void C_ccall f_6628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6628,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[194],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k6526 in walk */
static void C_fcall f_6528(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6528,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_cddr(((C_word*)t0)[5]);
t7=C_i_check_list_2(t6,lf[146]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6538,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6540,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t10,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_6540(t12,t8,t6);}

/* map-loop1045 in k6526 in walk */
static void C_fcall f_6540(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6540,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6569,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g10511060 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6206(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6567 in map-loop1045 in k6526 in walk */
static void C_ccall f_6569(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6569,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6540(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6540(t6,((C_word*)t0)[3],t5);}}

/* k6536 in k6526 in walk */
static void C_ccall f_6538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6538,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[194],((C_word*)t0)[2],t3,t1));}

/* k6493 in walk */
static void C_ccall f_6495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6495,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[194],lf[217],((C_word*)t0)[2],t2));}

/* k6398 in walk */
static void C_ccall f_6400(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6400,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6404,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6406,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t8=C_i_cadr(((C_word*)t0)[3]);
t9=C_i_check_list_2(t8,lf[146]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6433,a[2]=t7,a[3]=t4,a[4]=t12,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_6433(t14,t10,t8);}

/* map-loop1003 in k6398 in walk */
static void C_fcall f_6433(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6433,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6462,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g10091018 */
t5=((C_word*)t0)[2];
f_6406(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6460 in map-loop1003 in k6398 in walk */
static void C_ccall f_6462(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6462,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6433(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6433(t6,((C_word*)t0)[3],t5);}}

/* k6421 in k6398 in walk */
static void C_ccall f_6423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6423,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6431,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm:499: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6206(t3,t2,((C_word*)t0)[2]);}

/* k6429 in k6421 in k6398 in walk */
static void C_ccall f_6431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6431,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* support.scm:498: append */
t3=*((C_word*)lf[51]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* g1009 in k6398 in walk */
static void C_fcall f_6406(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6406,NULL,3,t0,t1,t2);}
t3=C_i_cadr(t2);
/* support.scm:498: walk */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6206(t4,t1,t3);}

/* k6402 in k6398 in walk */
static void C_ccall f_6404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6404,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[194],lf[89],t3,t1));}

/* k6339 in walk */
static void C_fcall f_6341(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6341,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:488: warning */
t3=*((C_word*)lf[212]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[213],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
t3=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[194],lf[79],t3,C_SCHEME_END_OF_LIST));}}

/* k6342 in k6339 in walk */
static void C_ccall f_6344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6351,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm:490: truncate */
t3=*((C_word*)lf[211]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k6349 in k6342 in k6339 in walk */
static void C_ccall f_6351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6351,2,t0,t1);}
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
t4=C_a_i_list1(&a,1,t2);
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[194],lf[79],t4,C_SCHEME_END_OF_LIST));}

/* map-loop966 in walk */
static void C_fcall f_6289(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6289,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6318,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g972981 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6206(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6316 in map-loop966 in walk */
static void C_ccall f_6318(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6318,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6289(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6289(t6,((C_word*)t0)[3],t5);}}

/* k6285 in walk */
static void C_ccall f_6287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6287,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[194],((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t1));}

/* f_6188 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_6188(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6188,3,t0,t1,t2);}
t3=C_a_i_list1(&a,1,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[194],lf[79],t3,C_SCHEME_END_OF_LIST));}

/* f_6173 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_6173(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6173,3,t0,t1,t2);}
t3=C_a_i_list1(&a,1,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[194],lf[204],t3,C_SCHEME_END_OF_LIST));}

/* f_6167 in k6163 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_6167(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6167,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[194],t2,t3,t4));}

/* f_6155 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_6155(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6155,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[194],C_SCHEME_FALSE);
/* ##sys#block-set! */
t5=*((C_word*)lf[198]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(3),t3);}

/* f_6146 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_6146(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6146,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[194],lf[201]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(3)));}

/* f_6137 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_6137(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6137,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[194],C_SCHEME_FALSE);
/* ##sys#block-set! */
t5=*((C_word*)lf[198]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(2),t3);}

/* f_6128 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_6128(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6128,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[194],lf[199]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(2)));}

/* f_6119 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_6119(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6119,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[194],C_SCHEME_FALSE);
/* ##sys#block-set! */
t5=*((C_word*)lf[198]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(1),t3);}

/* f_6110 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_6110(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6110,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[194],lf[196]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(1)));}

/* f_6104 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_6104(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6104,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[194]));}

/* f_6098 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_6098(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6098,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[194],t2,t3,t4));}

/* f_5599 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_5599(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5599,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5603,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_5603(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6096,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:404: append */
t5=*((C_word*)lf[51]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,*((C_word*)lf[191]+1),*((C_word*)lf[192]+1),*((C_word*)lf[121]+1));}}

/* k6094 */
static void C_ccall f_6096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_5603(t3,t2);}

/* k5601 */
static void C_fcall f_5603(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5603,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5608,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* support.scm:407: ##sys#hash-table-for-each */
t3=*((C_word*)lf[147]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a5607 in k5601 */
static void C_ccall f_5608(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5608,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]))){
t14=C_SCHEME_UNDEFINED;
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}
else{
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5618,a[2]=t3,a[3]=t9,a[4]=t7,a[5]=t5,a[6]=t13,a[7]=t11,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* support.scm:415: write */
t15=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t14,t2);}}

/* k5616 in a5607 in k5601 */
static void C_ccall f_5618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5618,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5621,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5781,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t4,tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_5781(t6,t2,((C_word*)t0)[2]);}

/* loop in k5616 in a5607 in k5601 */
static void C_fcall f_5781(C_word t0,C_word t1,C_word t2){
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
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5781,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_i_caar(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5794,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[155]);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5807,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[6],a[9]=t3,a[10]=t4,a[11]=t2,tmp=(C_word)a,a+=12,tmp);
if(C_truep(t5)){
t7=t6;
f_5807(t7,t5);}
else{
t7=C_eqp(t3,lf[171]);
if(C_truep(t7)){
t8=t6;
f_5807(t8,t7);}
else{
t8=C_eqp(t3,lf[172]);
if(C_truep(t8)){
t9=t6;
f_5807(t9,t8);}
else{
t9=C_eqp(t3,lf[173]);
if(C_truep(t9)){
t10=t6;
f_5807(t10,t9);}
else{
t10=C_eqp(t3,lf[174]);
if(C_truep(t10)){
t11=t6;
f_5807(t11,t10);}
else{
t11=C_eqp(t3,lf[175]);
if(C_truep(t11)){
t12=t6;
f_5807(t12,t11);}
else{
t12=C_eqp(t3,lf[176]);
if(C_truep(t12)){
t13=t6;
f_5807(t13,t12);}
else{
t13=C_eqp(t3,lf[177]);
if(C_truep(t13)){
t14=t6;
f_5807(t14,t13);}
else{
t14=C_eqp(t3,lf[178]);
if(C_truep(t14)){
t15=t6;
f_5807(t15,t14);}
else{
t15=C_eqp(t3,lf[179]);
if(C_truep(t15)){
t16=t6;
f_5807(t16,t15);}
else{
t16=C_eqp(t3,lf[180]);
if(C_truep(t16)){
t17=t6;
f_5807(t17,t16);}
else{
t17=C_eqp(t3,lf[181]);
if(C_truep(t17)){
t18=t6;
f_5807(t18,t17);}
else{
t18=C_eqp(t3,lf[182]);
if(C_truep(t18)){
t19=t6;
f_5807(t19,t18);}
else{
t19=C_eqp(t3,lf[183]);
if(C_truep(t19)){
t20=t6;
f_5807(t20,t19);}
else{
t20=C_eqp(t3,lf[184]);
if(C_truep(t20)){
t21=t6;
f_5807(t21,t20);}
else{
t21=C_eqp(t3,lf[185]);
if(C_truep(t21)){
t22=t6;
f_5807(t22,t21);}
else{
t22=C_eqp(t3,lf[186]);
if(C_truep(t22)){
t23=t6;
f_5807(t23,t22);}
else{
t23=C_eqp(t3,lf[187]);
if(C_truep(t23)){
t24=t6;
f_5807(t24,t23);}
else{
t24=C_eqp(t3,lf[188]);
if(C_truep(t24)){
t25=t6;
f_5807(t25,t24);}
else{
t25=C_eqp(t3,lf[189]);
t26=t6;
f_5807(t26,(C_truep(t25)?t25:C_eqp(t3,lf[190])));}}}}}}}}}}}}}}}}}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5805 in loop in k5616 in a5607 in k5601 */
static void C_fcall f_5807(C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5807,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5810,a[2]=t2,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t4=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(9),t2);}
else{
t2=C_eqp(((C_word*)t0)[9],lf[154]);
if(C_truep(t2)){
t3=C_mutate(((C_word *)((C_word*)t0)[8])+1,lf[154]);
t4=C_i_cdr(((C_word*)t0)[11]);
/* support.scm:440: loop */
t5=((C_word*)((C_word*)t0)[7])[1];
f_5781(t5,((C_word*)t0)[6],t4);}
else{
t3=C_eqp(((C_word*)t0)[9],lf[157]);
if(C_truep(t3)){
t4=C_eqp(((C_word*)((C_word*)t0)[8])[1],lf[154]);
if(C_truep(t4)){
t5=C_i_cdr(((C_word*)t0)[11]);
/* support.scm:440: loop */
t6=((C_word*)((C_word*)t0)[7])[1];
f_5781(t6,((C_word*)t0)[6],t5);}
else{
t5=C_i_cdar(((C_word*)t0)[11]);
t6=C_mutate(((C_word *)((C_word*)t0)[8])+1,t5);
t7=C_i_cdr(((C_word*)t0)[11]);
/* support.scm:440: loop */
t8=((C_word*)((C_word*)t0)[7])[1];
f_5781(t8,((C_word*)t0)[6],t7);}}
else{
t4=C_eqp(((C_word*)t0)[9],lf[158]);
if(C_truep(t4)){
t5=C_eqp(((C_word*)((C_word*)t0)[8])[1],lf[154]);
if(C_truep(t5)){
t6=C_i_cdr(((C_word*)t0)[11]);
/* support.scm:440: loop */
t7=((C_word*)((C_word*)t0)[7])[1];
f_5781(t7,((C_word*)t0)[6],t6);}
else{
t6=C_i_cdar(((C_word*)t0)[11]);
t7=C_mutate(((C_word *)((C_word*)t0)[5])+1,t6);
t8=C_i_cdr(((C_word*)t0)[11]);
/* support.scm:440: loop */
t9=((C_word*)((C_word*)t0)[7])[1];
f_5781(t9,((C_word*)t0)[6],t8);}}
else{
t5=C_eqp(((C_word*)t0)[9],lf[159]);
if(C_truep(t5)){
t6=C_i_cdar(((C_word*)t0)[11]);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t8=C_i_cdr(((C_word*)t0)[11]);
/* support.scm:440: loop */
t9=((C_word*)((C_word*)t0)[7])[1];
f_5781(t9,((C_word*)t0)[6],t8);}
else{
t6=C_eqp(((C_word*)t0)[9],lf[160]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t6)){
t8=t7;
f_5883(t8,t6);}
else{
t8=C_eqp(((C_word*)t0)[9],lf[164]);
if(C_truep(t8)){
t9=t7;
f_5883(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[9],lf[165]);
if(C_truep(t9)){
t10=t7;
f_5883(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[9],lf[143]);
if(C_truep(t10)){
t11=t7;
f_5883(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[9],lf[166]);
if(C_truep(t11)){
t12=t7;
f_5883(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[9],lf[167]);
if(C_truep(t12)){
t13=t7;
f_5883(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[9],lf[168]);
if(C_truep(t13)){
t14=t7;
f_5883(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[9],lf[169]);
t15=t7;
f_5883(t15,(C_truep(t14)?t14:C_eqp(((C_word*)t0)[9],lf[170])));}}}}}}}}}}}}}

/* k5881 in k5805 in loop in k5616 in a5607 in k5601 */
static void C_fcall f_5883(C_word t0,C_word t1){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5883,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5886,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t4=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(9),t2);}
else{
t2=C_eqp(((C_word*)t0)[6],lf[161]);
if(C_truep(t2)){
t3=C_i_cdar(((C_word*)t0)[8]);
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
t5=C_i_cdr(((C_word*)t0)[8]);
/* support.scm:440: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5781(t6,((C_word*)t0)[3],t5);}
else{
t3=C_eqp(((C_word*)t0)[6],lf[162]);
if(C_truep(t3)){
t4=C_i_cdar(((C_word*)t0)[8]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=C_i_cdr(((C_word*)t0)[8]);
/* support.scm:440: loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_5781(t7,((C_word*)t0)[3],t6);}
else{
t4=C_i_car(((C_word*)t0)[8]);
/* support.scm:439: bomb */
t5=*((C_word*)lf[5]+1);
f_3745(4,t5,((C_word*)t0)[7],lf[163],t4);}}}}

/* k5884 in k5881 in k5805 in loop in k5616 in a5607 in k5601 */
static void C_ccall f_5886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5886,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5889,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_caar(((C_word*)t0)[4]);
/* display */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* k5887 in k5884 in k5881 in k5805 in loop in k5616 in a5607 in k5601 */
static void C_ccall f_5889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5889,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5892,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(61),((C_word*)t0)[2]);}

/* k5890 in k5887 in k5884 in k5881 in k5805 in loop in k5616 in a5607 in k5601 */
static void C_ccall f_5892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdar(((C_word*)t0)[4]);
/* write */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k5808 in k5805 in loop in k5616 in a5607 in k5601 */
static void C_ccall f_5810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_caar(((C_word*)t0)[4]);
t3=C_i_assq(t2,lf[156]);
t4=C_i_cdr(t3);
/* display */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],t4,((C_word*)t0)[2]);}

/* k5792 in loop in k5616 in a5607 in k5601 */
static void C_ccall f_5794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[4]);
/* support.scm:440: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5781(t3,((C_word*)t0)[2],t2);}

/* k5619 in k5616 in a5607 in k5601 */
static void C_ccall f_5621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5621,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5624,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t4=C_eqp(((C_word*)((C_word*)t0)[4])[1],lf[154]);
t5=t3;
f_5662(t5,C_i_not(t4));}
else{
t4=t3;
f_5662(t4,C_SCHEME_FALSE);}}

/* k5660 in k5619 in k5616 in a5607 in k5601 */
static void C_fcall f_5662(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5662,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5665,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* display */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[151],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5696,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t3=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[154]);
t4=t2;
f_5696(t4,C_i_not(t3));}
else{
t3=t2;
f_5696(t3,C_SCHEME_FALSE);}}}

/* k5694 in k5660 in k5619 in k5616 in a5607 in k5601 */
static void C_fcall f_5696(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5696,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5699,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* display */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[152],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5730,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t3=C_eqp(((C_word*)((C_word*)t0)[2])[1],lf[154]);
t4=t2;
f_5730(t4,C_i_not(t3));}
else{
t3=t2;
f_5730(t3,C_SCHEME_FALSE);}}}

/* k5728 in k5694 in k5660 in k5619 in k5616 in a5607 in k5601 */
static void C_fcall f_5730(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5730,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5733,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[153],t2);}
else{
t2=((C_word*)t0)[2];
f_5624(2,t2,C_SCHEME_UNDEFINED);}}

/* k5731 in k5728 in k5694 in k5660 in k5619 in k5616 in a5607 in k5601 */
static void C_ccall f_5733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5733,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[4])[1];
t3=C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
t5=C_slot(t4,C_fix(2));
t6=C_a_i_cons(&a,2,t3,t5);
/* write */
t7=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[3],t6,((C_word*)t0)[2]);}

/* k5697 in k5694 in k5660 in k5619 in k5616 in a5607 in k5601 */
static void C_ccall f_5699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5699,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[4])[1];
t3=C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
t5=C_slot(t4,C_fix(2));
t6=C_a_i_cons(&a,2,t3,t5);
/* write */
t7=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[3],t6,((C_word*)t0)[2]);}

/* k5663 in k5660 in k5619 in k5616 in a5607 in k5601 */
static void C_ccall f_5665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5665,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[4])[1];
t3=C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
t5=C_slot(t4,C_fix(2));
t6=C_a_i_cons(&a,2,t3,t5);
/* write */
t7=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[3],t6,((C_word*)t0)[2]);}

/* k5622 in k5619 in k5616 in a5607 in k5601 */
static void C_ccall f_5624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5627,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t3=*((C_word*)lf[11]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5652,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* display */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[150],t3);}
else{
t3=t2;
f_5627(2,t3,C_SCHEME_UNDEFINED);}}

/* k5650 in k5622 in k5619 in k5616 in a5607 in k5601 */
static void C_ccall f_5652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_length(((C_word*)((C_word*)t0)[4])[1]);
/* write */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k5625 in k5622 in k5619 in k5616 in a5607 in k5601 */
static void C_ccall f_5627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5627,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5630,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t3=*((C_word*)lf[11]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5639,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* display */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[149],t3);}
else{
/* support.scm:449: newline */
t3=*((C_word*)lf[13]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k5637 in k5625 in k5622 in k5619 in k5616 in a5607 in k5601 */
static void C_ccall f_5639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_length(((C_word*)((C_word*)t0)[4])[1]);
/* write */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k5628 in k5625 in k5622 in k5619 in k5616 in a5607 in k5601 */
static void C_ccall f_5630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:449: newline */
t2=*((C_word*)lf[13]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_5533 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_5533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5539,tmp=(C_word)a,a+=2,tmp);
/* support.scm:382: ##sys#hash-table-for-each */
t3=*((C_word*)lf[147]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,*((C_word*)lf[140]+1));}

/* a5538 */
static void C_ccall f_5539(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5539,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=*((C_word*)lf[11]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5546,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* write */
t6=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5544 in a5538 */
static void C_ccall f_5546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5546,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[3]);}

/* k5547 in k5544 in a5538 */
static void C_ccall f_5549(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5552,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[145]+1);
t8=((C_word*)t0)[2];
t9=C_i_check_list_2(t8,lf[146]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5562,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5564,a[2]=t7,a[3]=t4,a[4]=t12,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_5564(t14,t10,t8);}

/* map-loop651 in k5547 in k5544 in a5538 */
static void C_fcall f_5564(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5564,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5593,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g657666 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5591 in map-loop651 in k5547 in k5544 in a5538 */
static void C_ccall f_5593(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5593,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5564(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5564(t6,((C_word*)t0)[3],t5);}}

/* k5560 in k5547 in k5544 in a5538 */
static void C_ccall f_5562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5550 in k5547 in k5544 in a5538 */
static void C_ccall f_5552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* f_5509 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_5509(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5509,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5515,a[2]=t4,a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5515(t8,t1,t2);}

/* loop */
static void C_fcall f_5515(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5515,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,((C_word*)t0)[4]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5525,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:378: get */
t5=*((C_word*)lf[130]+1);
f_5258(5,t5,t4,((C_word*)t0)[2],t2,lf[143]);}}

/* k5523 in loop */
static void C_ccall f_5525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm:379: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5515(t2,((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_5468 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_5468(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5468,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5475,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm:370: ##sys#hash-table-ref */
t5=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[140]+1),t3);}

/* k5473 */
static void C_ccall f_5475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5475,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5478,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=C_i_cdr(t1);
t4=t2;
f_5478(t4,C_i_assq(((C_word*)t0)[2],t3));}
else{
t3=t2;
f_5478(t3,C_SCHEME_FALSE);}}

/* k5476 in k5473 */
static void C_fcall f_5478(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5478,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5482,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* g623624 */
t3=t2;
f_5482(t3,((C_word*)t0)[3],t1);}
else{
/* support.scm:373: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}}

/* g623 in k5476 in k5473 */
static void C_fcall f_5482(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5482,NULL,3,t0,t1,t2);}
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_cdr(t2);
/* support.scm:372: values */
C_values(4,0,t1,t3,t4);}

/* f_5458 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_5458(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5458,3,t0,t1,t2);}
t3=C_i_car(t2);
/* support.scm:366: get */
t4=*((C_word*)lf[130]+1);
f_5258(5,t4,t1,*((C_word*)lf[140]+1),t3,t2);}

/* f_5449 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_5449(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5449,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5453,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:359: get */
t6=*((C_word*)lf[130]+1);
f_5258(5,t6,t5,t2,t3,t4);}

/* k5451 */
static void C_ccall f_5453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* f_5392 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_5392(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr5r,(void*)f_5392r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_5392r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_5392r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5396,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* support.scm:350: ##sys#hash-table-ref */
t7=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,t3);}

/* k5394 */
static void C_ccall f_5396(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5396,2,t0,t1);}
t2=C_i_pairp(((C_word*)t0)[6]);
t3=(C_truep(t2)?C_i_car(((C_word*)t0)[6]):C_fix(1));
if(C_truep(t1)){
t4=C_i_assq(((C_word*)t0)[5],t1);
if(C_truep(t4)){
t5=C_slot(t4,C_fix(1));
t6=C_a_i_plus(&a,2,t5,t3);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_setslot(t4,C_fix(1),t6));}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5426,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=C_slot(t1,C_fix(1));
/* support.scm:355: alist-cons */
t7=*((C_word*)lf[117]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,((C_word*)t0)[5],t3,t6);}}
else{
t4=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
t5=C_a_i_list1(&a,1,t4);
/* support.scm:356: ##sys#hash-table-set! */
t6=*((C_word*)lf[135]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t5);}}

/* k5424 in k5394 */
static void C_ccall f_5426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_setslot(((C_word*)t0)[2],C_fix(1),t1));}

/* f_5340 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_5340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5340,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5344,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* support.scm:342: ##sys#hash-table-ref */
t7=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,t3);}

/* k5342 */
static void C_ccall f_5344(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5344,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[6],t1);
if(C_truep(t2)){
t3=C_slot(t2,C_fix(1));
t4=C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(1),t4));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5371,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[5]);
t5=C_slot(t1,C_fix(1));
/* support.scm:346: alist-cons */
t6=*((C_word*)lf[117]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,((C_word*)t0)[6],t4,t5);}}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=C_a_i_list1(&a,1,t2);
/* support.scm:347: ##sys#hash-table-set! */
t4=*((C_word*)lf[135]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t3);}}

/* k5369 in k5342 */
static void C_ccall f_5371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_setslot(((C_word*)t0)[2],C_fix(1),t1));}

/* f_5294 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_5294(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5294,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5298,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* support.scm:334: ##sys#hash-table-ref */
t7=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,t3);}

/* k5296 */
static void C_ccall f_5298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5298,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[6],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_setslot(t2,C_fix(1),((C_word*)t0)[4]));}
else{
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5320,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t1,C_fix(1));
/* support.scm:338: alist-cons */
t5=*((C_word*)lf[117]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,((C_word*)t0)[6],((C_word*)t0)[4],t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[4]);
t3=C_a_i_list1(&a,1,t2);
/* support.scm:339: ##sys#hash-table-set! */
t4=*((C_word*)lf[135]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2],t3);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}}

/* k5318 in k5296 */
static void C_ccall f_5320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_setslot(((C_word*)t0)[2],C_fix(1),t1));}

/* f_5276 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_5276(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_5276r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5276r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5276r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5280,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:328: ##sys#hash-table-ref */
t6=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}

/* k5278 */
static void C_ccall f_5280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5280,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5288,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:330: filter-map */
t3=*((C_word*)lf[133]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* a5287 in k5278 */
static void C_ccall f_5288(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5288,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_assq(t2,((C_word*)t0)[2]));}

/* f_5258 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_5258(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5258,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5262,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:322: ##sys#hash-table-ref */
t6=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}

/* k5260 */
static void C_ccall f_5262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_slot(t2,C_fix(1)):C_SCHEME_FALSE));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_4996 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_4996(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5000,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=*((C_word*)lf[119]+1);
t4=C_i_check_list_2(t3,lf[14]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5075,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5235,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_5235(t9,t5,t3);}
else{
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* for-each-loop423 */
static void C_fcall f_5235(C_word t0,C_word t1,C_word t2){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5235,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5245,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5033,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=C_a_i_list(&a,1,lf[129]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5008,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t6))){
/* tweaks.scm:50: ##sys#put! */
t8=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t5,t4,lf[124],C_SCHEME_TRUE);}
else{
t8=C_i_cdr(t6);
if(C_truep(C_i_nullp(t8))){
t9=C_i_car(t6);
/* tweaks.scm:50: ##sys#put! */
t10=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t5,t4,lf[124],t9);}
else{
/* ##sys#error */
t9=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,lf[0],t6);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5006 in for-each-loop423 */
static void C_ccall f_5008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tweaks.scm:50: ##sys#put! */
t2=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[124],t1);}

/* k5031 in for-each-loop423 */
static void C_ccall f_5033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5033,2,t0,t1);}
if(C_truep(C_i_memq(((C_word*)t0)[6],*((C_word*)lf[126]+1)))){
t2=C_a_i_list(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5044,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* tweaks.scm:50: ##sys#put! */
t4=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[5],((C_word*)t0)[6],lf[127],C_SCHEME_TRUE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
/* tweaks.scm:50: ##sys#put! */
t6=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,((C_word*)t0)[5],((C_word*)t0)[6],lf[127],t5);}
else{
/* ##sys#error */
t5=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5235(t3,((C_word*)t0)[2],t2);}}

/* k5042 in k5031 in for-each-loop423 */
static void C_ccall f_5044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tweaks.scm:50: ##sys#put! */
t2=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[127],t1);}

/* k5243 in for-each-loop423 */
static void C_ccall f_5245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5235(t3,((C_word*)t0)[2],t2);}

/* k5073 */
static void C_ccall f_5075(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5075,2,t0,t1);}
t2=*((C_word*)lf[120]+1);
t3=C_i_check_list_2(t2,lf[14]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5149,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5212,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_5212(t8,t4,t2);}

/* for-each-loop474 in k5073 */
static void C_fcall f_5212(C_word t0,C_word t1,C_word t2){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5212,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5222,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5107,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=C_a_i_list(&a,1,lf[128]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5082,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t6))){
/* tweaks.scm:50: ##sys#put! */
t8=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t5,t4,lf[124],C_SCHEME_TRUE);}
else{
t8=C_i_cdr(t6);
if(C_truep(C_i_nullp(t8))){
t9=C_i_car(t6);
/* tweaks.scm:50: ##sys#put! */
t10=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t5,t4,lf[124],t9);}
else{
/* ##sys#error */
t9=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,lf[0],t6);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5080 in for-each-loop474 in k5073 */
static void C_ccall f_5082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tweaks.scm:50: ##sys#put! */
t2=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[124],t1);}

/* k5105 in for-each-loop474 in k5073 */
static void C_ccall f_5107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5107,2,t0,t1);}
if(C_truep(C_i_memq(((C_word*)t0)[6],*((C_word*)lf[126]+1)))){
t2=C_a_i_list(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5118,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* tweaks.scm:50: ##sys#put! */
t4=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[5],((C_word*)t0)[6],lf[127],C_SCHEME_TRUE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
/* tweaks.scm:50: ##sys#put! */
t6=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,((C_word*)t0)[5],((C_word*)t0)[6],lf[127],t5);}
else{
/* ##sys#error */
t5=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5212(t3,((C_word*)t0)[2],t2);}}

/* k5116 in k5105 in for-each-loop474 in k5073 */
static void C_ccall f_5118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tweaks.scm:50: ##sys#put! */
t2=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[127],t1);}

/* k5220 in for-each-loop474 in k5073 */
static void C_ccall f_5222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5212(t3,((C_word*)t0)[2],t2);}

/* k5147 in k5073 */
static void C_ccall f_5149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5149,2,t0,t1);}
t2=*((C_word*)lf[121]+1);
t3=C_i_check_list_2(t2,lf[14]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5189,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_5189(t7,((C_word*)t0)[2],t2);}

/* for-each-loop524 in k5147 in k5073 */
static void C_fcall f_5189(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5189,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5199,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_list(&a,1,lf[122]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5156,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t5))){
/* tweaks.scm:50: ##sys#put! */
t7=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t3,t4,lf[124],C_SCHEME_TRUE);}
else{
t7=C_i_cdr(t5);
if(C_truep(C_i_nullp(t7))){
t8=C_i_car(t5);
/* tweaks.scm:50: ##sys#put! */
t9=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t3,t4,lf[124],t8);}
else{
/* ##sys#error */
t8=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,lf[0],t5);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5154 in for-each-loop524 in k5147 in k5073 */
static void C_ccall f_5156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tweaks.scm:50: ##sys#put! */
t2=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[124],t1);}

/* k5197 in for-each-loop524 in k5147 in k5073 */
static void C_ccall f_5199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5189(t3,((C_word*)t0)[2],t2);}

/* k4998 */
static void C_ccall f_5000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_4939 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_4939(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4939,5,t0,t1,t2,t3,t4);}
t5=*((C_word*)lf[109]+1);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4943,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* support.scm:282: gensym */
t7=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k4941 */
static void C_ccall f_4943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4943,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4947,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm:283: alist-cons */
t3=*((C_word*)lf[117]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],((C_word*)t0)[2],*((C_word*)lf[110]+1));}

/* k4945 in k4941 */
static void C_ccall f_4947(C_word c,C_word t0,C_word t1){
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
C_word ab[100],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4947,2,t0,t1);}
t2=C_mutate((C_word*)lf[110]+1 /* (set! ##compiler#profile-lambda-list ...) */,t1);
t3=C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(1));
t4=C_mutate((C_word*)lf[109]+1 /* (set! ##compiler#profile-lambda-index ...) */,t3);
t5=C_a_i_list(&a,2,lf[79],((C_word*)t0)[6]);
t6=C_a_i_list(&a,3,lf[111],t5,*((C_word*)lf[112]+1));
t7=C_a_i_list(&a,3,lf[113],C_SCHEME_END_OF_LIST,t6);
t8=C_a_i_list(&a,3,lf[113],((C_word*)t0)[5],((C_word*)t0)[4]);
t9=C_a_i_list(&a,3,lf[114],t8,((C_word*)t0)[3]);
t10=C_a_i_list(&a,3,lf[113],C_SCHEME_END_OF_LIST,t9);
t11=C_a_i_list(&a,2,lf[79],((C_word*)t0)[6]);
t12=C_a_i_list(&a,3,lf[115],t11,*((C_word*)lf[112]+1));
t13=C_a_i_list(&a,3,lf[113],C_SCHEME_END_OF_LIST,t12);
t14=C_a_i_list(&a,4,lf[116],t7,t10,t13);
t15=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_list(&a,3,lf[113],((C_word*)t0)[3],t14));}

/* f_4895 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_4895(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4895,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4901,tmp=(C_word)a,a+=2,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_4901(t2,t3));}

/* loop */
static C_word C_fcall f_4901(C_word t1,C_word t2){
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
return(C_i_nullp(t2));}
else{
t3=C_i_symbolp(t1);
if(C_truep(t3)){
return(t3);}
else{
if(C_truep(C_i_nullp(t2))){
return(C_i_not_pair_p(t1));}
else{
t4=C_i_cdr(t1);
t5=C_i_cdr(t2);
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}}}

/* f_4892 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_4892(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4892,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_length(t2));}

/* f_4789 in k4786 in k4783 in k3734 in k3731 */
static void C_ccall f_4789(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4789,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4793,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* call-with-current-continuation */
t5=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a4797 */
static void C_ccall f_4798(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4798,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4804,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4829,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* with-exception-handler */
t5=*((C_word*)lf[102]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* a4828 in a4797 */
static void C_ccall f_4829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4829,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4835,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4879,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a4878 in a4828 in a4797 */
static void C_ccall f_4879(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_4879r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4879r(t0,t1,t2);}}

static void C_ccall f_4879r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4885,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* k375381 */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* a4884 in a4878 in a4828 in a4797 */
static void C_ccall f_4885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4885,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a4834 in a4828 in a4797 */
static void C_ccall f_4835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4835,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4839,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4863,tmp=(C_word)a,a+=2,tmp);
/* support.scm:258: with-input-from-string */
t4=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}

/* a4862 in a4834 in a4828 in a4797 */
static void C_ccall f_4863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4869,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4877,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:260: read */
t4=*((C_word*)lf[97]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k4875 in a4862 in a4834 in a4828 in a4797 */
static void C_ccall f_4877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:260: unfold */
t2=*((C_word*)lf[98]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],*((C_word*)lf[99]+1),*((C_word*)lf[100]+1),((C_word*)t0)[2],t1);}

/* a4868 in a4862 in a4834 in a4828 in a4797 */
static void C_ccall f_4869(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4869,3,t0,t1,t2);}
/* support.scm:260: read */
t3=*((C_word*)lf[97]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k4837 in a4834 in a4828 in a4797 */
static void C_ccall f_4839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4839,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[95]);}
else{
t2=C_i_cdr(t1);
t3=C_i_nullp(t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?C_i_car(t1):C_a_i_cons(&a,2,lf[96],t1)));}}

/* a4803 in a4797 */
static void C_ccall f_4804(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4804,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4810,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* k375381 */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* a4809 in a4803 in a4797 */
static void C_ccall f_4810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4810,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4818,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4821,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:255: exn? */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k4819 in a4809 in a4803 in a4797 */
static void C_ccall f_4821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm:256: exn-msg */
t2=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* support.scm:257: ->string */
t2=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k4816 in a4809 in a4803 in a4797 */
static void C_ccall f_4818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:253: quit */
t2=*((C_word*)lf[20]+1);
f_3840(5,t2,((C_word*)t0)[3],lf[94],((C_word*)t0)[2],t1);}

/* k4791 */
static void C_ccall f_4793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g379380 */
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_4700 in k3734 in k3731 */
static void C_ccall f_4700(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4700,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4706,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4706(t6,t1,t2);}

/* loop */
static void C_fcall f_4706(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4706,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[87]);}
else{
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_car(t2));}
else{
t4=C_i_car(t2);
t5=C_i_equalp(t4,lf[88]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4734,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=t6;
f_4734(t7,t5);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4771,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* support.scm:242: constant? */
t8=*((C_word*)lf[78]+1);
f_4518(3,t8,t7,t4);}}}}

/* k4769 in loop */
static void C_ccall f_4771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
f_4734(t3,t2);}
else{
t2=((C_word*)t0)[3];
f_4734(t2,C_i_equalp(((C_word*)t0)[2],lf[92]));}}

/* k4732 in loop */
static void C_fcall f_4734(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4734,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[4]);
/* support.scm:244: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4706(t3,((C_word*)t0)[2],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4764,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:245: gensym */
t3=*((C_word*)lf[90]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[91]);}}

/* k4762 in k4732 in loop */
static void C_ccall f_4764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4764,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[4]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4752,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(((C_word*)t0)[4]);
/* support.scm:246: loop */
t7=((C_word*)((C_word*)t0)[2])[1];
f_4706(t7,t5,t6);}

/* k4750 in k4762 in k4732 in loop */
static void C_ccall f_4752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4752,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[89],((C_word*)t0)[2],t1));}

/* f_4640 in k3734 in k3731 */
static void C_ccall f_4640(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4640,3,t0,t1,t2);}
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_symbolp(t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4656,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:227: constant? */
t6=*((C_word*)lf[78]+1);
f_4518(3,t6,t5,t2);}}}

/* k4654 */
static void C_ccall f_4656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4656,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4698,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:228: vector->list */
t4=*((C_word*)lf[85]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_4662(2,t3,C_SCHEME_FALSE);}}}

/* k4696 in k4654 */
static void C_ccall f_4698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:228: every */
t2=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],*((C_word*)lf[83]+1),t1);}

/* k4660 in k4654 */
static void C_ccall f_4662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4662,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4677,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* support.scm:230: basic-literal? */
t4=*((C_word*)lf[83]+1);
f_4640(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* k4675 in k4660 in k4654 */
static void C_ccall f_4677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[3]);
/* support.scm:231: basic-literal? */
t3=*((C_word*)lf[83]+1);
f_4640(3,t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_4594 in k3734 in k3731 */
static void C_ccall f_4594(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4594,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4598,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4638,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:217: big-fixnum? */
t5=*((C_word*)lf[82]+1);
f_12935(3,t5,t4,t2);}
else{
t4=t3;
f_4598(t4,C_SCHEME_FALSE);}}

/* k4636 */
static void C_ccall f_4638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4598(t2,C_i_not(t1));}

/* k4596 */
static void C_fcall f_4598(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(C_SCHEME_UNDEFINED,((C_word*)t0)[2]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=C_i_nullp(((C_word*)t0)[2]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_eofp(((C_word*)t0)[2]);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_charp(((C_word*)t0)[2]);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?t5:C_booleanp(((C_word*)t0)[2])));}}}}}

/* f_4564 in k3734 in k3731 */
static void C_ccall f_4564(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4564,3,t0,t1,t2);}
t3=C_booleanp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_charp(t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_eofp(t2);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_i_numberp(t2);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(t6)?t6:C_i_symbolp(t2)));}}}}

/* f_4518 in k3734 in k3731 */
static void C_ccall f_4518(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4518,3,t0,t1,t2);}
t3=C_i_numberp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_charp(t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_i_stringp(t2);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_booleanp(t2);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=C_eofp(t2);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
if(C_truep(C_i_pairp(t2))){
t8=C_i_car(t2);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_eqp(lf[79],t8));}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}}}}}}

/* f_4498 in k3734 in k3731 */
static void C_ccall f_4498(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4498,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4504,tmp=(C_word)a,a+=2,tmp);
/* support.scm:196: sort */
t4=*((C_word*)lf[77]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* a4503 */
static void C_ccall f_4504(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4504,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4512,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:196: symbol->string */
t5=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4510 in a4503 */
static void C_ccall f_4512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4512,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4516,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:196: symbol->string */
t3=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4514 in k4510 in a4503 */
static void C_ccall f_4516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:196: string<? */
t2=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_4467 in k3734 in k3731 */
static void C_ccall f_4467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4467,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4473,a[2]=t3,a[3]=t6,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4473(t8,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop */
static void C_fcall f_4473(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4473,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_member(t2,t3))){
/* support.scm:192: abort */
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4488,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:193: proc */
t5=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t4);}}

/* a4487 in loop */
static void C_ccall f_4488(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4488,3,t0,t1,t2);}
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
/* support.scm:193: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4473(t4,t1,t2,t3);}

/* f_4404 in k3734 in k3731 */
static void C_ccall f_4404(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4404,4,t0,t1,t2,t3);}
t4=C_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4418,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:182: reverse */
t6=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}}

/* k4416 */
static void C_ccall f_4418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4418,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4420,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4420(t5,((C_word*)t0)[2],t1);}

/* fold in k4416 */
static void C_fcall f_4420(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4420,NULL,3,t0,t1,t2);}
t3=C_i_cddr(t2);
if(C_truep(C_i_nullp(t3))){
t4=C_i_cadr(t2);
t5=C_i_car(t2);
t6=C_a_i_list2(&a,2,t4,t5);
C_apply(4,0,t1,((C_word*)t0)[3],t6);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4449,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_i_cdr(t2);
/* support.scm:187: fold */
t10=t4;
t11=t5;
t1=t10;
t2=t11;
goto loop;}}

/* k4447 in fold in k4416 */
static void C_ccall f_4449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4449,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[4]);
t3=C_a_i_list2(&a,2,t1,t2);
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* f_4392 in k3734 in k3731 */
static void C_ccall f_4392(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4392,4,t0,t1,t2,t3);}
if(C_truep(C_i_string_equal_p(t3,lf[70]))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* support.scm:177: close-input-port */
t4=*((C_word*)lf[71]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}

/* f_4345 in k3734 in k3731 */
static void C_ccall f_4345(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4345r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4345r(t0,t1,t2,t3);}}

static void C_ccall f_4345r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
if(C_truep(C_i_string_equal_p(t2,lf[63]))){
/* support.scm:171: current-input-port */
t4=*((C_word*)lf[64]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4361,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm:172: file-exists? */
t5=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* k4359 */
static void C_ccall f_4361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4361,2,t0,t1);}
if(C_truep(t1)){
/* support.scm:172: open-input-file */
t2=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4373,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_4373(t4,t2);}
else{
t4=C_i_car(((C_word*)t0)[2]);
t5=t3;
f_4373(t5,C_i_not(t4));}}}

/* k4371 in k4359 */
static void C_fcall f_4373(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* support.scm:173: quit */
t2=*((C_word*)lf[20]+1);
f_3840(4,t2,((C_word*)t0)[4],lf[66],((C_word*)t0)[3]);}
else{
t2=C_i_car(((C_word*)t0)[2]);
/* support.scm:174: quit */
t3=*((C_word*)lf[20]+1);
f_3840(5,t3,((C_word*)t0)[4],lf[67],t2,((C_word*)t0)[3]);}}

/* f_4338 in k3734 in k3731 */
static void C_ccall f_4338(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4338,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub248(C_SCHEME_UNDEFINED,t3));}

/* f_4331 in k3734 in k3731 */
static void C_ccall f_4331(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4331,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub243(C_SCHEME_UNDEFINED,t3));}

/* f_4275 in k3734 in k3731 */
static void C_ccall f_4275(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4275,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4279,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4329,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:152: ->string */
t5=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4327 */
static void C_ccall f_4329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4277 */
static void C_ccall f_4279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4279,2,t0,t1);}
if(C_truep(C_i_pairp(t1))){
t2=C_i_car(t1);
t3=C_u_i_char_alphabeticp(t2);
t4=(C_truep(t3)?t3:C_i_char_equalp(C_make_character(95),t2));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4302,tmp=(C_word)a,a+=2,tmp);
t6=C_i_cdr(t1);
/* support.scm:156: any */
t7=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[2],t5,t6);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a4301 in k4277 */
static void C_ccall f_4302(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4302,3,t0,t1,t2);}
t3=C_u_i_char_alphabeticp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_u_i_char_numericp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t4:C_i_char_equalp(C_make_character(95),t2)));}}

/* f_4181 in k3734 in k3731 */
static void C_ccall f_4181(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4181,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4193,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4197,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* string->list */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4195 */
static void C_ccall f_4197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4197,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4199,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4199(t5,((C_word*)t0)[2],t1);}

/* loop in k4195 */
static void C_fcall f_4199(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4199,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[50]);}
else{
t3=C_i_car(t2);
t4=C_fix(C_character_code(t3));
t5=C_i_lessp(t4,C_fix(32));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4221,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_4221(t7,t5);}
else{
t7=C_i_greater_or_equalp(t4,C_fix(127));
t8=t6;
f_4221(t8,(C_truep(t7)?t7:C_i_memq(t3,lf[56])));}}}

/* k4219 in loop in k4195 */
static void C_fcall f_4221(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4221,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4228,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_lessp(((C_word*)t0)[3],C_fix(8)))){
t3=t2;
f_4228(t3,lf[54]);}
else{
t3=C_i_lessp(((C_word*)t0)[3],C_fix(64));
t4=t2;
f_4228(t4,(C_truep(t3)?lf[55]:C_SCHEME_END_OF_LIST));}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4260,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[5]);
/* support.scm:149: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4199(t4,t2,t3);}}

/* k4258 in k4219 in loop in k4195 */
static void C_ccall f_4260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4260,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k4226 in k4219 in loop in k4195 */
static void C_fcall f_4228(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4228,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4232,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4244,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:147: number->string */
C_number_to_string(4,0,t3,((C_word*)t0)[2],C_fix(8));}

/* k4242 in k4226 in k4219 in loop in k4195 */
static void C_ccall f_4244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4230 in k4226 in k4219 in loop in k4195 */
static void C_ccall f_4232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4232,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4236,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* support.scm:148: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4199(t4,t2,t3);}

/* k4234 in k4230 in k4226 in k4219 in loop in k4195 */
static void C_ccall f_4236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:143: append */
t2=*((C_word*)lf[51]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[52],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4191 */
static void C_ccall f_4193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4193,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_make_character(34),t1);
/* list->string */
t3=*((C_word*)lf[49]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* f_4137 in k3734 in k3731 */
static void C_ccall f_4137(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4137,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4143,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4143(t8,t1,t2,t3);}

/* loop */
static void C_fcall f_4143(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4143,NULL,4,t0,t1,t2,t3);}
t4=C_i_zerop(t3);
t5=(C_truep(t4)?t4:C_i_nullp(t2));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(t6)?t6:C_SCHEME_END_OF_LIST));}
else{
t6=C_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4167,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=C_i_cdr(t2);
t9=C_a_i_minus(&a,2,t3,C_fix(1));
/* support.scm:129: loop */
t12=t7;
t13=t8;
t14=t9;
t1=t12;
t2=t13;
t3=t14;
goto loop;}}

/* k4165 in loop */
static void C_ccall f_4167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4167,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* f_4106 in k3734 in k3731 */
static void C_ccall f_4106(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4106,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_stringp(t2))){
/* support.scm:123: string->symbol */
t3=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4129,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t4=*((C_word*)lf[42]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}

/* k4127 */
static void C_ccall f_4129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4129,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4132,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k4130 in k4127 */
static void C_ccall f_4132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4132,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4135,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* get-output-string */
t3=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4133 in k4130 in k4127 */
static void C_ccall f_4135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:124: string->symbol */
t2=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_4079 in k3734 in k3731 */
static void C_ccall f_4079(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4079,3,t0,t1,t2);}
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_symbolp(t2))){
/* support.scm:118: symbol->string */
t3=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4098,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t4=*((C_word*)lf[42]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}

/* k4096 */
static void C_ccall f_4098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4101,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k4099 in k4096 */
static void C_ccall f_4101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_4043 in k3734 in k3731 */
static void C_ccall f_4043(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4043,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4049,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4049(t7,t1,t3,C_fix(0));}

/* loop */
static void C_fcall f_4049(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4049,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_car(t2);
t5=C_eqp(((C_word*)t0)[3],t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t6=C_i_cdr(t2);
t7=C_a_i_plus(&a,2,t3,C_fix(1));
/* support.scm:114: loop */
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}}

/* f_3975 in k3734 in k3731 */
static void C_ccall f_3975(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3975,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3978,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3999,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3999(t9,t1,t3,t4);}

/* loop */
static void C_fcall f_3999(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3999,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
/* support.scm:102: err */
t4=((C_word*)t0)[3];
f_3978(t4,t1);}}
else{
t4=C_i_symbolp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep(C_i_nullp(t2))){
/* support.scm:104: err */
t5=((C_word*)t0)[3];
f_3978(t5,t1);}
else{
t5=C_i_cdr(t2);
t6=C_i_cdr(t3);
/* support.scm:105: loop */
t8=t1;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}}

/* err */
static void C_fcall f_3978(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3978,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3986,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:99: real-name */
t3=*((C_word*)lf[37]+1);
f_12286(3,t3,t2,((C_word*)t0)[2]);}

/* k3984 in err */
static void C_ccall f_3986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3986,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3990,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* support.scm:100: map-llist */
t4=*((C_word*)lf[34]+1);
f_3932(4,t4,t2,*((C_word*)lf[37]+1),t3);}

/* k3988 in k3984 in err */
static void C_ccall f_3990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:98: quit */
t2=*((C_word*)lf[20]+1);
f_3840(5,t2,((C_word*)t0)[3],lf[36],((C_word*)t0)[2],t1);}

/* f_3932 in k3734 in k3731 */
static void C_ccall f_3932(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3932,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3938,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3938(t7,t1,t3);}

/* loop */
static void C_fcall f_3938(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3938,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_i_symbolp(t2))){
/* support.scm:93: proc */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3961,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* support.scm:94: proc */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}}

/* k3959 in loop */
static void C_ccall f_3961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3961,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3965,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* support.scm:94: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3938(t4,t2,t3);}

/* k3963 in k3959 in loop */
static void C_ccall f_3965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3965,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* f_3929 in k3734 in k3731 */
static void C_ccall f_3929(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3929,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_emit_syntax_trace_info(t2,t3,*((C_word*)lf[28]+1)));}

/* f_3859 in k3734 in k3731 */
static void C_ccall f_3859(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_3859r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3859r(t0,t1,t2,t3);}}

static void C_ccall f_3859r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(9);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3863,a[2]=t4,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* support.scm:72: current-error-port */
t7=*((C_word*)lf[24]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k3861 */
static void C_ccall f_3863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_symbolp(((C_word*)((C_word*)t0)[2])[1]))){
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t8=t2;
f_3866(t8,t3);}
else{
t3=t2;
f_3866(t3,C_SCHEME_FALSE);}}

/* k3864 in k3861 */
static void C_fcall f_3866(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3866,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3869,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
/* support.scm:79: fprintf */
t3=*((C_word*)lf[22]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[5],lf[30],t1,((C_word*)((C_word*)t0)[2])[1]);}
else{
/* support.scm:80: fprintf */
t3=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],lf[31],((C_word*)((C_word*)t0)[2])[1]);}}

/* k3867 in k3864 in k3861 */
static void C_ccall f_3869(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3869,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3870,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_i_check_list_2(t3,lf[14]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3880,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3888,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3888(t9,t5,t3);}

/* for-each-loop89 in k3867 in k3864 in k3861 */
static void C_fcall f_3888(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3888,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3898,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g9096 */
t5=((C_word*)t0)[2];
f_3870(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3896 in for-each-loop89 in k3867 in k3864 in k3861 */
static void C_ccall f_3898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3888(t3,((C_word*)t0)[2],t2);}

/* k3878 in k3867 in k3864 in k3861 */
static void C_ccall f_3880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3880,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3883,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm:82: print-call-chain */
t3=*((C_word*)lf[27]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[2],C_fix(0),*((C_word*)lf[28]+1),lf[29]);}

/* k3881 in k3878 in k3867 in k3864 in k3861 */
static void C_ccall f_3883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:83: exit */
t2=*((C_word*)lf[21]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(70));}

/* g90 in k3867 in k3864 in k3861 */
static void C_fcall f_3870(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3870,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[22]+1);
/* g104105 */
t4=t3;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[2],lf[26],t2);}

/* f_3840 in k3734 in k3731 */
static void C_ccall f_3840(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3840r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3840r(t0,t1,t2,t3);}}

static void C_ccall f_3840r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3844,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm:65: current-error-port */
t5=*((C_word*)lf[24]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k3842 */
static void C_ccall f_3844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3844,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3847,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3857,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:66: string-append */
t4=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[23],((C_word*)t0)[2]);}

/* k3855 in k3842 */
static void C_ccall f_3857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(6,0,((C_word*)t0)[4],*((C_word*)lf[22]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3845 in k3842 */
static void C_ccall f_3847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3847,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3850,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm:67: newline */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3848 in k3845 in k3842 */
static void C_ccall f_3850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:68: exit */
t2=*((C_word*)lf[21]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f_3772 in k3734 in k3731 */
static void C_ccall f_3772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_3772r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3772r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3772r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
if(C_truep(C_i_memq(t2,*((C_word*)lf[3]+1)))){
t5=*((C_word*)lf[11]+1);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3782,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* display */
t7=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t3,t5);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k3780 */
static void C_ccall f_3782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3785,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3797,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:58: display */
t4=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[19]);}
else{
t3=t2;
f_3785(2,t3,C_SCHEME_UNDEFINED);}}

/* k3795 in k3780 */
static void C_ccall f_3797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3797,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_i_check_list_2(t2,lf[14]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3817,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3817(t7,((C_word*)t0)[2],t2);}

/* for-each-loop44 in k3795 in k3780 */
static void C_fcall f_3817(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3817,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3827,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[11]+1);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3802,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3809,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* support.scm:59: force */
t8=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3807 in for-each-loop44 in k3795 in k3780 */
static void C_ccall f_3809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3800 in for-each-loop44 in k3795 in k3780 */
static void C_ccall f_3802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(32),((C_word*)t0)[2]);}

/* k3825 in for-each-loop44 in k3795 in k3780 */
static void C_ccall f_3827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3817(t3,((C_word*)t0)[2],t2);}

/* k3783 in k3780 */
static void C_ccall f_3785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3785,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3788,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:60: newline */
t3=*((C_word*)lf[13]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3786 in k3783 in k3780 */
static void C_ccall f_3788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3788,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3791,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:61: flush-output */
t3=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3789 in k3786 in k3783 in k3780 */
static void C_ccall f_3791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_3745 in k3734 in k3731 */
static void C_ccall f_3745(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3745r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3745r(t0,t1,t2);}}

static void C_ccall f_3745r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3759,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
/* support.scm:49: string-append */
t5=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[8],t4);}
else{
/* support.scm:50: error */
t3=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,lf[9]);}}

/* k3757 */
static void C_ccall f_3759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[3]);
C_apply(5,0,((C_word*)t0)[2],*((C_word*)lf[6]+1),t1,t2);}

/* f_3740 in k3734 in k3731 */
static void C_ccall f_3740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3740,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[691] = {
{"toplevel:support_2escm",(void*)C_support_toplevel},
{"f_3733:support_2escm",(void*)f_3733},
{"f_3736:support_2escm",(void*)f_3736},
{"f_4785:support_2escm",(void*)f_4785},
{"f_4788:support_2escm",(void*)f_4788},
{"f_13245:support_2escm",(void*)f_13245},
{"f_6165:support_2escm",(void*)f_6165},
{"f_13233:support_2escm",(void*)f_13233},
{"f_13237:support_2escm",(void*)f_13237},
{"f_13240:support_2escm",(void*)f_13240},
{"f_13195:support_2escm",(void*)f_13195},
{"f_13199:support_2escm",(void*)f_13199},
{"f14460:support_2escm",(void*)f14460},
{"f_13202:support_2escm",(void*)f_13202},
{"f_13209:support_2escm",(void*)f_13209},
{"f_13102:support_2escm",(void*)f_13102},
{"f_13106:support_2escm",(void*)f_13106},
{"f_13193:support_2escm",(void*)f_13193},
{"f_13112:support_2escm",(void*)f_13112},
{"f_13180:support_2escm",(void*)f_13180},
{"f_13183:support_2escm",(void*)f_13183},
{"f_13186:support_2escm",(void*)f_13186},
{"f_13118:support_2escm",(void*)f_13118},
{"f_13148:support_2escm",(void*)f_13148},
{"f_13156:support_2escm",(void*)f_13156},
{"f_13134:support_2escm",(void*)f_13134},
{"f_13130:support_2escm",(void*)f_13130},
{"f_13166:support_2escm",(void*)f_13166},
{"f_13091:support_2escm",(void*)f_13091},
{"f_13080:support_2escm",(void*)f_13080},
{"f_13074:support_2escm",(void*)f_13074},
{"f_13046:support_2escm",(void*)f_13046},
{"f_13050:support_2escm",(void*)f_13050},
{"f_13025:support_2escm",(void*)f_13025},
{"f_13029:support_2escm",(void*)f_13029},
{"f_12992:support_2escm",(void*)f_12992},
{"f_12998:support_2escm",(void*)f_12998},
{"f_12959:support_2escm",(void*)f_12959},
{"f_12965:support_2escm",(void*)f_12965},
{"f_12935:support_2escm",(void*)f_12935},
{"f_12866:support_2escm",(void*)f_12866},
{"f_12870:support_2escm",(void*)f_12870},
{"f_12875:support_2escm",(void*)f_12875},
{"f_12879:support_2escm",(void*)f_12879},
{"f_12930:support_2escm",(void*)f_12930},
{"f_12909:support_2escm",(void*)f_12909},
{"f_12921:support_2escm",(void*)f_12921},
{"f_12924:support_2escm",(void*)f_12924},
{"f_12897:support_2escm",(void*)f_12897},
{"f_12841:support_2escm",(void*)f_12841},
{"f_12851:support_2escm",(void*)f_12851},
{"f_12854:support_2escm",(void*)f_12854},
{"f_12835:support_2escm",(void*)f_12835},
{"f_12790:support_2escm",(void*)f_12790},
{"f_12797:support_2escm",(void*)f_12797},
{"f_12812:support_2escm",(void*)f_12812},
{"f_12816:support_2escm",(void*)f_12816},
{"f_12808:support_2escm",(void*)f_12808},
{"f_12794:support_2escm",(void*)f_12794},
{"f_12642:support_2escm",(void*)f_12642},
{"f_12651:support_2escm",(void*)f_12651},
{"f_12679:support_2escm",(void*)f_12679},
{"f_12685:support_2escm",(void*)f_12685},
{"f_12688:support_2escm",(void*)f_12688},
{"f_12691:support_2escm",(void*)f_12691},
{"f_12694:support_2escm",(void*)f_12694},
{"f_12697:support_2escm",(void*)f_12697},
{"f_12700:support_2escm",(void*)f_12700},
{"f_12767:support_2escm",(void*)f_12767},
{"f_12777:support_2escm",(void*)f_12777},
{"f_12711:support_2escm",(void*)f_12711},
{"f_12726:support_2escm",(void*)f_12726},
{"f_12729:support_2escm",(void*)f_12729},
{"f_12737:support_2escm",(void*)f_12737},
{"f_12747:support_2escm",(void*)f_12747},
{"f_12750:support_2escm",(void*)f_12750},
{"f_12732:support_2escm",(void*)f_12732},
{"f_12717:support_2escm",(void*)f_12717},
{"f_12701:support_2escm",(void*)f_12701},
{"f_12646:support_2escm",(void*)f_12646},
{"f_12465:support_2escm",(void*)f_12465},
{"f_12607:support_2escm",(void*)f_12607},
{"f_12486:support_2escm",(void*)f_12486},
{"f_12572:support_2escm",(void*)f_12572},
{"f_12570:support_2escm",(void*)f_12570},
{"f_12497:support_2escm",(void*)f_12497},
{"f_12518:support_2escm",(void*)f_12518},
{"f_12548:support_2escm",(void*)f_12548},
{"f_12554:support_2escm",(void*)f_12554},
{"f_12524:support_2escm",(void*)f_12524},
{"f_12537:support_2escm",(void*)f_12537},
{"f_12540:support_2escm",(void*)f_12540},
{"f_12503:support_2escm",(void*)f_12503},
{"f_12509:support_2escm",(void*)f_12509},
{"f_12513:support_2escm",(void*)f_12513},
{"f_12492:support_2escm",(void*)f_12492},
{"f_12462:support_2escm",(void*)f_12462},
{"f_12444:support_2escm",(void*)f_12444},
{"f_12410:support_2escm",(void*)f_12410},
{"f_12434:support_2escm",(void*)f_12434},
{"f_12430:support_2escm",(void*)f_12430},
{"f_12389:support_2escm",(void*)f_12389},
{"f_12395:support_2escm",(void*)f_12395},
{"f_12399:support_2escm",(void*)f_12399},
{"f_12402:support_2escm",(void*)f_12402},
{"f_12405:support_2escm",(void*)f_12405},
{"f_12377:support_2escm",(void*)f_12377},
{"f_12381:support_2escm",(void*)f_12381},
{"f_12286:support_2escm",(void*)f_12286},
{"f_12305:support_2escm",(void*)f_12305},
{"f_12330:support_2escm",(void*)f_12330},
{"f_12334:support_2escm",(void*)f_12334},
{"f_12336:support_2escm",(void*)f_12336},
{"f_12343:support_2escm",(void*)f_12343},
{"f_12356:support_2escm",(void*)f_12356},
{"f_12359:support_2escm",(void*)f_12359},
{"f_12362:support_2escm",(void*)f_12362},
{"f_12365:support_2escm",(void*)f_12365},
{"f_12368:support_2escm",(void*)f_12368},
{"f_12372:support_2escm",(void*)f_12372},
{"f_12289:support_2escm",(void*)f_12289},
{"f_12293:support_2escm",(void*)f_12293},
{"f_12299:support_2escm",(void*)f_12299},
{"f_12280:support_2escm",(void*)f_12280},
{"f_12221:support_2escm",(void*)f_12221},
{"f_12229:support_2escm",(void*)f_12229},
{"f_12256:support_2escm",(void*)f_12256},
{"f_12232:support_2escm",(void*)f_12232},
{"f_12235:support_2escm",(void*)f_12235},
{"f_12252:support_2escm",(void*)f_12252},
{"f_12238:support_2escm",(void*)f_12238},
{"f_12248:support_2escm",(void*)f_12248},
{"f_12241:support_2escm",(void*)f_12241},
{"f_12244:support_2escm",(void*)f_12244},
{"f_12212:support_2escm",(void*)f_12212},
{"f_12206:support_2escm",(void*)f_12206},
{"f_12200:support_2escm",(void*)f_12200},
{"f_12158:support_2escm",(void*)f_12158},
{"f_12167:support_2escm",(void*)f_12167},
{"f_12129:support_2escm",(void*)f_12129},
{"f_12139:support_2escm",(void*)f_12139},
{"f_11917:support_2escm",(void*)f_11917},
{"f_12124:support_2escm",(void*)f_12124},
{"f_12086:support_2escm",(void*)f_12086},
{"f_12100:support_2escm",(void*)f_12100},
{"f_12110:support_2escm",(void*)f_12110},
{"f_12088:support_2escm",(void*)f_12088},
{"f_11920:support_2escm",(void*)f_11920},
{"f_11954:support_2escm",(void*)f_11954},
{"f_12048:support_2escm",(void*)f_12048},
{"f_12060:support_2escm",(void*)f_12060},
{"f_12018:support_2escm",(void*)f_12018},
{"f_12029:support_2escm",(void*)f_12029},
{"f_12009:support_2escm",(void*)f_12009},
{"f_11973:support_2escm",(void*)f_11973},
{"f_11979:support_2escm",(void*)f_11979},
{"f_11983:support_2escm",(void*)f_11983},
{"f_11772:support_2escm",(void*)f_11772},
{"f_11778:support_2escm",(void*)f_11778},
{"f_11874:support_2escm",(void*)f_11874},
{"f_11882:support_2escm",(void*)f_11882},
{"f_11892:support_2escm",(void*)f_11892},
{"f_11842:support_2escm",(void*)f_11842},
{"f_11810:support_2escm",(void*)f_11810},
{"f_11818:support_2escm",(void*)f_11818},
{"f_11828:support_2escm",(void*)f_11828},
{"f_11776:support_2escm",(void*)f_11776},
{"f_11530:support_2escm",(void*)f_11530},
{"f_11534:support_2escm",(void*)f_11534},
{"f_11650:support_2escm",(void*)f_11650},
{"f_11678:support_2escm",(void*)f_11678},
{"f_11197:support_2escm",(void*)f_11197},
{"f_11524:support_2escm",(void*)f_11524},
{"f_11209:support_2escm",(void*)f_11209},
{"f_11219:support_2escm",(void*)f_11219},
{"f_11231:support_2escm",(void*)f_11231},
{"f_11237:support_2escm",(void*)f_11237},
{"f_11276:support_2escm",(void*)f_11276},
{"f_11241:support_2escm",(void*)f_11241},
{"f_10855:support_2escm",(void*)f_10855},
{"f_11191:support_2escm",(void*)f_11191},
{"f_10861:support_2escm",(void*)f_10861},
{"f_10871:support_2escm",(void*)f_10871},
{"f_10880:support_2escm",(void*)f_10880},
{"f_10892:support_2escm",(void*)f_10892},
{"f_10904:support_2escm",(void*)f_10904},
{"f_10910:support_2escm",(void*)f_10910},
{"f_10914:support_2escm",(void*)f_10914},
{"f_10810:support_2escm",(void*)f_10810},
{"f_10849:support_2escm",(void*)f_10849},
{"f_10816:support_2escm",(void*)f_10816},
{"f_10820:support_2escm",(void*)f_10820},
{"f_10824:support_2escm",(void*)f_10824},
{"f_10779:support_2escm",(void*)f_10779},
{"f_10792:support_2escm",(void*)f_10792},
{"f_10748:support_2escm",(void*)f_10748},
{"f_10761:support_2escm",(void*)f_10761},
{"f_9937:support_2escm",(void*)f_9937},
{"f_10742:support_2escm",(void*)f_10742},
{"f_9943:support_2escm",(void*)f_9943},
{"f_9949:support_2escm",(void*)f_9949},
{"f_9974:support_2escm",(void*)f_9974},
{"f_9989:support_2escm",(void*)f_9989},
{"f_10112:support_2escm",(void*)f_10112},
{"f_10154:support_2escm",(void*)f_10154},
{"f_10181:support_2escm",(void*)f_10181},
{"f_10208:support_2escm",(void*)f_10208},
{"f_10235:support_2escm",(void*)f_10235},
{"f_10279:support_2escm",(void*)f_10279},
{"f_10324:support_2escm",(void*)f_10324},
{"f_10367:support_2escm",(void*)f_10367},
{"f_10406:support_2escm",(void*)f_10406},
{"f_10444:support_2escm",(void*)f_10444},
{"f_10409:support_2escm",(void*)f_10409},
{"f_10371:support_2escm",(void*)f_10371},
{"f_10282:support_2escm",(void*)f_10282},
{"f_10297:support_2escm",(void*)f_10297},
{"f_10238:support_2escm",(void*)f_10238},
{"f_10115:support_2escm",(void*)f_10115},
{"f_10130:support_2escm",(void*)f_10130},
{"f_10057:support_2escm",(void*)f_10057},
{"f_10072:support_2escm",(void*)f_10072},
{"f_10007:support_2escm",(void*)f_10007},
{"f_9876:support_2escm",(void*)f_9876},
{"f_9880:support_2escm",(void*)f_9880},
{"f_9891:support_2escm",(void*)f_9891},
{"f_9908:support_2escm",(void*)f_9908},
{"f_9897:support_2escm",(void*)f_9897},
{"f_9918:support_2escm",(void*)f_9918},
{"f_9883:support_2escm",(void*)f_9883},
{"f_9795:support_2escm",(void*)f_9795},
{"f_9807:support_2escm",(void*)f_9807},
{"f_9814:support_2escm",(void*)f_9814},
{"f_9817:support_2escm",(void*)f_9817},
{"f_9820:support_2escm",(void*)f_9820},
{"f_9823:support_2escm",(void*)f_9823},
{"f_9826:support_2escm",(void*)f_9826},
{"f_9829:support_2escm",(void*)f_9829},
{"f_9832:support_2escm",(void*)f_9832},
{"f_9835:support_2escm",(void*)f_9835},
{"f_9838:support_2escm",(void*)f_9838},
{"f_9841:support_2escm",(void*)f_9841},
{"f_9844:support_2escm",(void*)f_9844},
{"f_9847:support_2escm",(void*)f_9847},
{"f_9850:support_2escm",(void*)f_9850},
{"f_9853:support_2escm",(void*)f_9853},
{"f_9856:support_2escm",(void*)f_9856},
{"f_9859:support_2escm",(void*)f_9859},
{"f_9862:support_2escm",(void*)f_9862},
{"f_9865:support_2escm",(void*)f_9865},
{"f_9868:support_2escm",(void*)f_9868},
{"f_9871:support_2escm",(void*)f_9871},
{"f_9801:support_2escm",(void*)f_9801},
{"f_9684:support_2escm",(void*)f_9684},
{"f_9693:support_2escm",(void*)f_9693},
{"f_9772:support_2escm",(void*)f_9772},
{"f_9695:support_2escm",(void*)f_9695},
{"f_9688:support_2escm",(void*)f_9688},
{"f_9663:support_2escm",(void*)f_9663},
{"f_9673:support_2escm",(void*)f_9673},
{"f_9614:support_2escm",(void*)f_9614},
{"f_9620:support_2escm",(void*)f_9620},
{"f_9661:support_2escm",(void*)f_9661},
{"f_9633:support_2escm",(void*)f_9633},
{"f_9577:support_2escm",(void*)f_9577},
{"f_9583:support_2escm",(void*)f_9583},
{"f_9612:support_2escm",(void*)f_9612},
{"f_9590:support_2escm",(void*)f_9590},
{"f_9593:support_2escm",(void*)f_9593},
{"f_9536:support_2escm",(void*)f_9536},
{"f_9542:support_2escm",(void*)f_9542},
{"f_9575:support_2escm",(void*)f_9575},
{"f_9549:support_2escm",(void*)f_9549},
{"f_9552:support_2escm",(void*)f_9552},
{"f_9414:support_2escm",(void*)f_9414},
{"f_9443:support_2escm",(void*)f_9443},
{"f_9313:support_2escm",(void*)f_9313},
{"f_9319:support_2escm",(void*)f_9319},
{"f_9345:support_2escm",(void*)f_9345},
{"f_9359:support_2escm",(void*)f_9359},
{"f_9367:support_2escm",(void*)f_9367},
{"f_9088:support_2escm",(void*)f_9088},
{"f_9287:support_2escm",(void*)f_9287},
{"f_9293:support_2escm",(void*)f_9293},
{"f_9168:support_2escm",(void*)f_9168},
{"f_9190:support_2escm",(void*)f_9190},
{"f_9208:support_2escm",(void*)f_9208},
{"f_9239:support_2escm",(void*)f_9239},
{"f_9125:support_2escm",(void*)f_9125},
{"f_9147:support_2escm",(void*)f_9147},
{"f_9091:support_2escm",(void*)f_9091},
{"f_9120:support_2escm",(void*)f_9120},
{"f_9099:support_2escm",(void*)f_9099},
{"f_9019:support_2escm",(void*)f_9019},
{"f_9025:support_2escm",(void*)f_9025},
{"f_9031:support_2escm",(void*)f_9031},
{"f_9035:support_2escm",(void*)f_9035},
{"f_9082:support_2escm",(void*)f_9082},
{"f_9046:support_2escm",(void*)f_9046},
{"f_9071:support_2escm",(void*)f_9071},
{"f_8756:support_2escm",(void*)f_8756},
{"f_8876:support_2escm",(void*)f_8876},
{"f_8883:support_2escm",(void*)f_8883},
{"f_9017:support_2escm",(void*)f_9017},
{"f_8907:support_2escm",(void*)f_8907},
{"f_8984:support_2escm",(void*)f_8984},
{"f_8941:support_2escm",(void*)f_8941},
{"f_8944:support_2escm",(void*)f_8944},
{"f_8960:support_2escm",(void*)f_8960},
{"f_8760:support_2escm",(void*)f_8760},
{"f_8823:support_2escm",(void*)f_8823},
{"f_8874:support_2escm",(void*)f_8874},
{"f_8827:support_2escm",(void*)f_8827},
{"f_8838:support_2escm",(void*)f_8838},
{"f_8849:support_2escm",(void*)f_8849},
{"f_8832:support_2escm",(void*)f_8832},
{"f_8859:support_2escm",(void*)f_8859},
{"f_8844:support_2escm",(void*)f_8844},
{"f_8763:support_2escm",(void*)f_8763},
{"f_8769:support_2escm",(void*)f_8769},
{"f_8777:support_2escm",(void*)f_8777},
{"f_8785:support_2escm",(void*)f_8785},
{"f_8795:support_2escm",(void*)f_8795},
{"f_8686:support_2escm",(void*)f_8686},
{"f_8692:support_2escm",(void*)f_8692},
{"f_8721:support_2escm",(void*)f_8721},
{"f_8750:support_2escm",(void*)f_8750},
{"f_8719:support_2escm",(void*)f_8719},
{"f_8602:support_2escm",(void*)f_8602},
{"f_8608:support_2escm",(void*)f_8608},
{"f_8651:support_2escm",(void*)f_8651},
{"f_8680:support_2escm",(void*)f_8680},
{"f_8649:support_2escm",(void*)f_8649},
{"f_8563:support_2escm",(void*)f_8563},
{"f_8567:support_2escm",(void*)f_8567},
{"f_8570:support_2escm",(void*)f_8570},
{"f_8573:support_2escm",(void*)f_8573},
{"f_8529:support_2escm",(void*)f_8529},
{"f_8535:support_2escm",(void*)f_8535},
{"f_8549:support_2escm",(void*)f_8549},
{"f_8553:support_2escm",(void*)f_8553},
{"f_8041:support_2escm",(void*)f_8041},
{"f_8480:support_2escm",(void*)f_8480},
{"f_8513:support_2escm",(void*)f_8513},
{"f_8493:support_2escm",(void*)f_8493},
{"f_8051:support_2escm",(void*)f_8051},
{"f_8059:support_2escm",(void*)f_8059},
{"f_8428:support_2escm",(void*)f_8428},
{"f_8442:support_2escm",(void*)f_8442},
{"f_8471:support_2escm",(void*)f_8471},
{"f_8440:support_2escm",(void*)f_8440},
{"f_8430:support_2escm",(void*)f_8430},
{"f_8222:support_2escm",(void*)f_8222},
{"f_8383:support_2escm",(void*)f_8383},
{"f_8412:support_2escm",(void*)f_8412},
{"f_8237:support_2escm",(void*)f_8237},
{"f_8334:support_2escm",(void*)f_8334},
{"f_8367:support_2escm",(void*)f_8367},
{"f_8347:support_2escm",(void*)f_8347},
{"f_8332:support_2escm",(void*)f_8332},
{"f_8240:support_2escm",(void*)f_8240},
{"f_8303:support_2escm",(void*)f_8303},
{"f_8319:support_2escm",(void*)f_8319},
{"f_8311:support_2escm",(void*)f_8311},
{"f_8266:support_2escm",(void*)f_8266},
{"f_8295:support_2escm",(void*)f_8295},
{"f_8264:support_2escm",(void*)f_8264},
{"f_8254:support_2escm",(void*)f_8254},
{"f_8224:support_2escm",(void*)f_8224},
{"f_8228:support_2escm",(void*)f_8228},
{"f_8231:support_2escm",(void*)f_8231},
{"f_8173:support_2escm",(void*)f_8173},
{"f_8176:support_2escm",(void*)f_8176},
{"f_8179:support_2escm",(void*)f_8179},
{"f_8199:support_2escm",(void*)f_8199},
{"f_8157:support_2escm",(void*)f_8157},
{"f_8149:support_2escm",(void*)f_8149},
{"f_8120:support_2escm",(void*)f_8120},
{"f_8110:support_2escm",(void*)f_8110},
{"f_8117:support_2escm",(void*)f_8117},
{"f_7890:support_2escm",(void*)f_7890},
{"f_7896:support_2escm",(void*)f_7896},
{"f_7908:support_2escm",(void*)f_7908},
{"f_8006:support_2escm",(void*)f_8006},
{"f_8035:support_2escm",(void*)f_8035},
{"f_7912:support_2escm",(void*)f_7912},
{"f_7915:support_2escm",(void*)f_7915},
{"f_7995:support_2escm",(void*)f_7995},
{"f_7941:support_2escm",(void*)f_7941},
{"f_7945:support_2escm",(void*)f_7945},
{"f_7920:support_2escm",(void*)f_7920},
{"f_7902:support_2escm",(void*)f_7902},
{"f_7836:support_2escm",(void*)f_7836},
{"f_7842:support_2escm",(void*)f_7842},
{"f_7868:support_2escm",(void*)f_7868},
{"f_7872:support_2escm",(void*)f_7872},
{"f_7152:support_2escm",(void*)f_7152},
{"f_7158:support_2escm",(void*)f_7158},
{"f_7192:support_2escm",(void*)f_7192},
{"f_7645:support_2escm",(void*)f_7645},
{"f_7771:support_2escm",(void*)f_7771},
{"f_7800:support_2escm",(void*)f_7800},
{"f_7769:support_2escm",(void*)f_7769},
{"f_7762:support_2escm",(void*)f_7762},
{"f_7722:support_2escm",(void*)f_7722},
{"f_7751:support_2escm",(void*)f_7751},
{"f_7720:support_2escm",(void*)f_7720},
{"f_7652:support_2escm",(void*)f_7652},
{"f_7664:support_2escm",(void*)f_7664},
{"f_7693:support_2escm",(void*)f_7693},
{"f_7662:support_2escm",(void*)f_7662},
{"f_7591:support_2escm",(void*)f_7591},
{"f_7632:support_2escm",(void*)f_7632},
{"f_7605:support_2escm",(void*)f_7605},
{"f_7609:support_2escm",(void*)f_7609},
{"f_7534:support_2escm",(void*)f_7534},
{"f_7563:support_2escm",(void*)f_7563},
{"f_7532:support_2escm",(void*)f_7532},
{"f_7479:support_2escm",(void*)f_7479},
{"f_7508:support_2escm",(void*)f_7508},
{"f_7458:support_2escm",(void*)f_7458},
{"f_7330:support_2escm",(void*)f_7330},
{"f_7404:support_2escm",(void*)f_7404},
{"f_7433:support_2escm",(void*)f_7433},
{"f_7336:support_2escm",(void*)f_7336},
{"f_7355:support_2escm",(void*)f_7355},
{"f_7388:support_2escm",(void*)f_7388},
{"f_7368:support_2escm",(void*)f_7368},
{"f_7345:support_2escm",(void*)f_7345},
{"f_7353:support_2escm",(void*)f_7353},
{"f_7349:support_2escm",(void*)f_7349},
{"f_7259:support_2escm",(void*)f_7259},
{"f_7288:support_2escm",(void*)f_7288},
{"f_7257:support_2escm",(void*)f_7257},
{"f_7204:support_2escm",(void*)f_7204},
{"f_7233:support_2escm",(void*)f_7233},
{"f_7202:support_2escm",(void*)f_7202},
{"f_6203:support_2escm",(void*)f_6203},
{"f_7141:support_2escm",(void*)f_7141},
{"f_7144:support_2escm",(void*)f_7144},
{"f_6206:support_2escm",(void*)f_6206},
{"f_7101:support_2escm",(void*)f_7101},
{"f_7130:support_2escm",(void*)f_7130},
{"f_7099:support_2escm",(void*)f_7099},
{"f_6829:support_2escm",(void*)f_6829},
{"f_6960:support_2escm",(void*)f_6960},
{"f_7047:support_2escm",(void*)f_7047},
{"f_7019:support_2escm",(void*)f_7019},
{"f_7026:support_2escm",(void*)f_7026},
{"f_7033:support_2escm",(void*)f_7033},
{"f_7023:support_2escm",(void*)f_7023},
{"f_6982:support_2escm",(void*)f_6982},
{"f_7011:support_2escm",(void*)f_7011},
{"f_6980:support_2escm",(void*)f_6980},
{"f_6954:support_2escm",(void*)f_6954},
{"f_6916:support_2escm",(void*)f_6916},
{"f_6945:support_2escm",(void*)f_6945},
{"f_6914:support_2escm",(void*)f_6914},
{"f_6857:support_2escm",(void*)f_6857},
{"f_6886:support_2escm",(void*)f_6886},
{"f_6855:support_2escm",(void*)f_6855},
{"f_6808:support_2escm",(void*)f_6808},
{"f_6792:support_2escm",(void*)f_6792},
{"f_6788:support_2escm",(void*)f_6788},
{"f_6722:support_2escm",(void*)f_6722},
{"f_6751:support_2escm",(void*)f_6751},
{"f_6720:support_2escm",(void*)f_6720},
{"f_6630:support_2escm",(void*)f_6630},
{"f_6659:support_2escm",(void*)f_6659},
{"f_6628:support_2escm",(void*)f_6628},
{"f_6528:support_2escm",(void*)f_6528},
{"f_6540:support_2escm",(void*)f_6540},
{"f_6569:support_2escm",(void*)f_6569},
{"f_6538:support_2escm",(void*)f_6538},
{"f_6495:support_2escm",(void*)f_6495},
{"f_6400:support_2escm",(void*)f_6400},
{"f_6433:support_2escm",(void*)f_6433},
{"f_6462:support_2escm",(void*)f_6462},
{"f_6423:support_2escm",(void*)f_6423},
{"f_6431:support_2escm",(void*)f_6431},
{"f_6406:support_2escm",(void*)f_6406},
{"f_6404:support_2escm",(void*)f_6404},
{"f_6341:support_2escm",(void*)f_6341},
{"f_6344:support_2escm",(void*)f_6344},
{"f_6351:support_2escm",(void*)f_6351},
{"f_6289:support_2escm",(void*)f_6289},
{"f_6318:support_2escm",(void*)f_6318},
{"f_6287:support_2escm",(void*)f_6287},
{"f_6188:support_2escm",(void*)f_6188},
{"f_6173:support_2escm",(void*)f_6173},
{"f_6167:support_2escm",(void*)f_6167},
{"f_6155:support_2escm",(void*)f_6155},
{"f_6146:support_2escm",(void*)f_6146},
{"f_6137:support_2escm",(void*)f_6137},
{"f_6128:support_2escm",(void*)f_6128},
{"f_6119:support_2escm",(void*)f_6119},
{"f_6110:support_2escm",(void*)f_6110},
{"f_6104:support_2escm",(void*)f_6104},
{"f_6098:support_2escm",(void*)f_6098},
{"f_5599:support_2escm",(void*)f_5599},
{"f_6096:support_2escm",(void*)f_6096},
{"f_5603:support_2escm",(void*)f_5603},
{"f_5608:support_2escm",(void*)f_5608},
{"f_5618:support_2escm",(void*)f_5618},
{"f_5781:support_2escm",(void*)f_5781},
{"f_5807:support_2escm",(void*)f_5807},
{"f_5883:support_2escm",(void*)f_5883},
{"f_5886:support_2escm",(void*)f_5886},
{"f_5889:support_2escm",(void*)f_5889},
{"f_5892:support_2escm",(void*)f_5892},
{"f_5810:support_2escm",(void*)f_5810},
{"f_5794:support_2escm",(void*)f_5794},
{"f_5621:support_2escm",(void*)f_5621},
{"f_5662:support_2escm",(void*)f_5662},
{"f_5696:support_2escm",(void*)f_5696},
{"f_5730:support_2escm",(void*)f_5730},
{"f_5733:support_2escm",(void*)f_5733},
{"f_5699:support_2escm",(void*)f_5699},
{"f_5665:support_2escm",(void*)f_5665},
{"f_5624:support_2escm",(void*)f_5624},
{"f_5652:support_2escm",(void*)f_5652},
{"f_5627:support_2escm",(void*)f_5627},
{"f_5639:support_2escm",(void*)f_5639},
{"f_5630:support_2escm",(void*)f_5630},
{"f_5533:support_2escm",(void*)f_5533},
{"f_5539:support_2escm",(void*)f_5539},
{"f_5546:support_2escm",(void*)f_5546},
{"f_5549:support_2escm",(void*)f_5549},
{"f_5564:support_2escm",(void*)f_5564},
{"f_5593:support_2escm",(void*)f_5593},
{"f_5562:support_2escm",(void*)f_5562},
{"f_5552:support_2escm",(void*)f_5552},
{"f_5509:support_2escm",(void*)f_5509},
{"f_5515:support_2escm",(void*)f_5515},
{"f_5525:support_2escm",(void*)f_5525},
{"f_5468:support_2escm",(void*)f_5468},
{"f_5475:support_2escm",(void*)f_5475},
{"f_5478:support_2escm",(void*)f_5478},
{"f_5482:support_2escm",(void*)f_5482},
{"f_5458:support_2escm",(void*)f_5458},
{"f_5449:support_2escm",(void*)f_5449},
{"f_5453:support_2escm",(void*)f_5453},
{"f_5392:support_2escm",(void*)f_5392},
{"f_5396:support_2escm",(void*)f_5396},
{"f_5426:support_2escm",(void*)f_5426},
{"f_5340:support_2escm",(void*)f_5340},
{"f_5344:support_2escm",(void*)f_5344},
{"f_5371:support_2escm",(void*)f_5371},
{"f_5294:support_2escm",(void*)f_5294},
{"f_5298:support_2escm",(void*)f_5298},
{"f_5320:support_2escm",(void*)f_5320},
{"f_5276:support_2escm",(void*)f_5276},
{"f_5280:support_2escm",(void*)f_5280},
{"f_5288:support_2escm",(void*)f_5288},
{"f_5258:support_2escm",(void*)f_5258},
{"f_5262:support_2escm",(void*)f_5262},
{"f_4996:support_2escm",(void*)f_4996},
{"f_5235:support_2escm",(void*)f_5235},
{"f_5008:support_2escm",(void*)f_5008},
{"f_5033:support_2escm",(void*)f_5033},
{"f_5044:support_2escm",(void*)f_5044},
{"f_5245:support_2escm",(void*)f_5245},
{"f_5075:support_2escm",(void*)f_5075},
{"f_5212:support_2escm",(void*)f_5212},
{"f_5082:support_2escm",(void*)f_5082},
{"f_5107:support_2escm",(void*)f_5107},
{"f_5118:support_2escm",(void*)f_5118},
{"f_5222:support_2escm",(void*)f_5222},
{"f_5149:support_2escm",(void*)f_5149},
{"f_5189:support_2escm",(void*)f_5189},
{"f_5156:support_2escm",(void*)f_5156},
{"f_5199:support_2escm",(void*)f_5199},
{"f_5000:support_2escm",(void*)f_5000},
{"f_4939:support_2escm",(void*)f_4939},
{"f_4943:support_2escm",(void*)f_4943},
{"f_4947:support_2escm",(void*)f_4947},
{"f_4895:support_2escm",(void*)f_4895},
{"f_4901:support_2escm",(void*)f_4901},
{"f_4892:support_2escm",(void*)f_4892},
{"f_4789:support_2escm",(void*)f_4789},
{"f_4798:support_2escm",(void*)f_4798},
{"f_4829:support_2escm",(void*)f_4829},
{"f_4879:support_2escm",(void*)f_4879},
{"f_4885:support_2escm",(void*)f_4885},
{"f_4835:support_2escm",(void*)f_4835},
{"f_4863:support_2escm",(void*)f_4863},
{"f_4877:support_2escm",(void*)f_4877},
{"f_4869:support_2escm",(void*)f_4869},
{"f_4839:support_2escm",(void*)f_4839},
{"f_4804:support_2escm",(void*)f_4804},
{"f_4810:support_2escm",(void*)f_4810},
{"f_4821:support_2escm",(void*)f_4821},
{"f_4818:support_2escm",(void*)f_4818},
{"f_4793:support_2escm",(void*)f_4793},
{"f_4700:support_2escm",(void*)f_4700},
{"f_4706:support_2escm",(void*)f_4706},
{"f_4771:support_2escm",(void*)f_4771},
{"f_4734:support_2escm",(void*)f_4734},
{"f_4764:support_2escm",(void*)f_4764},
{"f_4752:support_2escm",(void*)f_4752},
{"f_4640:support_2escm",(void*)f_4640},
{"f_4656:support_2escm",(void*)f_4656},
{"f_4698:support_2escm",(void*)f_4698},
{"f_4662:support_2escm",(void*)f_4662},
{"f_4677:support_2escm",(void*)f_4677},
{"f_4594:support_2escm",(void*)f_4594},
{"f_4638:support_2escm",(void*)f_4638},
{"f_4598:support_2escm",(void*)f_4598},
{"f_4564:support_2escm",(void*)f_4564},
{"f_4518:support_2escm",(void*)f_4518},
{"f_4498:support_2escm",(void*)f_4498},
{"f_4504:support_2escm",(void*)f_4504},
{"f_4512:support_2escm",(void*)f_4512},
{"f_4516:support_2escm",(void*)f_4516},
{"f_4467:support_2escm",(void*)f_4467},
{"f_4473:support_2escm",(void*)f_4473},
{"f_4488:support_2escm",(void*)f_4488},
{"f_4404:support_2escm",(void*)f_4404},
{"f_4418:support_2escm",(void*)f_4418},
{"f_4420:support_2escm",(void*)f_4420},
{"f_4449:support_2escm",(void*)f_4449},
{"f_4392:support_2escm",(void*)f_4392},
{"f_4345:support_2escm",(void*)f_4345},
{"f_4361:support_2escm",(void*)f_4361},
{"f_4373:support_2escm",(void*)f_4373},
{"f_4338:support_2escm",(void*)f_4338},
{"f_4331:support_2escm",(void*)f_4331},
{"f_4275:support_2escm",(void*)f_4275},
{"f_4329:support_2escm",(void*)f_4329},
{"f_4279:support_2escm",(void*)f_4279},
{"f_4302:support_2escm",(void*)f_4302},
{"f_4181:support_2escm",(void*)f_4181},
{"f_4197:support_2escm",(void*)f_4197},
{"f_4199:support_2escm",(void*)f_4199},
{"f_4221:support_2escm",(void*)f_4221},
{"f_4260:support_2escm",(void*)f_4260},
{"f_4228:support_2escm",(void*)f_4228},
{"f_4244:support_2escm",(void*)f_4244},
{"f_4232:support_2escm",(void*)f_4232},
{"f_4236:support_2escm",(void*)f_4236},
{"f_4193:support_2escm",(void*)f_4193},
{"f_4137:support_2escm",(void*)f_4137},
{"f_4143:support_2escm",(void*)f_4143},
{"f_4167:support_2escm",(void*)f_4167},
{"f_4106:support_2escm",(void*)f_4106},
{"f_4129:support_2escm",(void*)f_4129},
{"f_4132:support_2escm",(void*)f_4132},
{"f_4135:support_2escm",(void*)f_4135},
{"f_4079:support_2escm",(void*)f_4079},
{"f_4098:support_2escm",(void*)f_4098},
{"f_4101:support_2escm",(void*)f_4101},
{"f_4043:support_2escm",(void*)f_4043},
{"f_4049:support_2escm",(void*)f_4049},
{"f_3975:support_2escm",(void*)f_3975},
{"f_3999:support_2escm",(void*)f_3999},
{"f_3978:support_2escm",(void*)f_3978},
{"f_3986:support_2escm",(void*)f_3986},
{"f_3990:support_2escm",(void*)f_3990},
{"f_3932:support_2escm",(void*)f_3932},
{"f_3938:support_2escm",(void*)f_3938},
{"f_3961:support_2escm",(void*)f_3961},
{"f_3965:support_2escm",(void*)f_3965},
{"f_3929:support_2escm",(void*)f_3929},
{"f_3859:support_2escm",(void*)f_3859},
{"f_3863:support_2escm",(void*)f_3863},
{"f_3866:support_2escm",(void*)f_3866},
{"f_3869:support_2escm",(void*)f_3869},
{"f_3888:support_2escm",(void*)f_3888},
{"f_3898:support_2escm",(void*)f_3898},
{"f_3880:support_2escm",(void*)f_3880},
{"f_3883:support_2escm",(void*)f_3883},
{"f_3870:support_2escm",(void*)f_3870},
{"f_3840:support_2escm",(void*)f_3840},
{"f_3844:support_2escm",(void*)f_3844},
{"f_3857:support_2escm",(void*)f_3857},
{"f_3847:support_2escm",(void*)f_3847},
{"f_3850:support_2escm",(void*)f_3850},
{"f_3772:support_2escm",(void*)f_3772},
{"f_3782:support_2escm",(void*)f_3782},
{"f_3797:support_2escm",(void*)f_3797},
{"f_3817:support_2escm",(void*)f_3817},
{"f_3809:support_2escm",(void*)f_3809},
{"f_3802:support_2escm",(void*)f_3802},
{"f_3827:support_2escm",(void*)f_3827},
{"f_3785:support_2escm",(void*)f_3785},
{"f_3788:support_2escm",(void*)f_3788},
{"f_3791:support_2escm",(void*)f_3791},
{"f_3745:support_2escm",(void*)f_3745},
{"f_3759:support_2escm",(void*)f_3759},
{"f_3740:support_2escm",(void*)f_3740},
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
