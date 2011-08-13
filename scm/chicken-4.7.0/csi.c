/* Generated from csi.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: csi.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -no-lambda-info -local -no-trace -output-file csi.c -extend ./private-namespace.scm
   used units: library eval chicken_2dsyntax ports extras
*/

#include "chicken.h"

#if defined(HAVE_DIRECT_H)
# include <direct.h>
#else
# define _getcwd(buf, len)       NULL
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[403];
static double C_possibly_force_alignment;


/* from k1644 */
static C_word C_fcall stub75(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub75(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_mpointer(&C_a,(void*)_getcwd(t0,t1));
return C_r;}

C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1474)
static void C_ccall f_1474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1477)
static void C_ccall f_1477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1480)
static void C_ccall f_1480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1496)
static void C_ccall f_1496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6488)
static void C_ccall f_6488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6497)
static void C_ccall f_6497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1504)
static void C_fcall f_1504(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1632)
static void C_ccall f_1632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6467)
static void C_ccall f_6467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6475)
static void C_ccall f_6475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6485)
static void C_ccall f_6485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6478)
static void C_ccall f_6478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1926)
static void C_ccall f_1926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6406)
static void C_ccall f_6406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6410)
static void C_ccall f_6410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6419)
static void C_ccall f_6419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6444)
static void C_ccall f_6444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6448)
static void C_fcall f_6448(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6452)
static void C_ccall f_6452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6432)
static void C_ccall f_6432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2555)
static void C_ccall f_2555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2698)
static void C_ccall f_2698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6395)
static void C_ccall f_6395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6401)
static void C_ccall f_6401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6398)
static void C_ccall f_6398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5333)
static void C_ccall f_5333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6389)
static void C_ccall f_6389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2561)
static void C_ccall f_2561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2627)
static void C_ccall f_2627(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2690)
static void C_ccall f_2690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2659)
static void C_ccall f_2659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2661)
static void C_fcall f_2661(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2678)
static void C_ccall f_2678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2639)
static void C_ccall f_2639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2581)
static void C_ccall f_2581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2584)
static void C_ccall f_2584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2592)
static void C_fcall f_2592(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2621)
static void C_ccall f_2621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2602)
static void C_fcall f_2602(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5337)
static void C_ccall f_5337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6385)
static void C_ccall f_6385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5340)
static void C_ccall f_5340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5343)
static void C_ccall f_5343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5346)
static void C_ccall f_5346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6381)
static void C_ccall f_6381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6368)
static void C_ccall f_6368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6275)
static void C_ccall f_6275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6278)
static void C_ccall f_6278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6281)
static void C_ccall f_6281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6284)
static void C_ccall f_6284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6287)
static void C_ccall f_6287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6296)
static void C_ccall f_6296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5349)
static void C_fcall f_5349(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5352)
static void C_ccall f_5352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6269)
static void C_ccall f_6269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5355)
static void C_fcall f_5355(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5358)
static void C_ccall f_5358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5361)
static void C_fcall f_5361(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6260)
static void C_ccall f_6260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5364)
static void C_ccall f_5364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6223)
static void C_fcall f_6223(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6252)
static void C_ccall f_6252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5370)
static void C_ccall f_5370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6215)
static void C_ccall f_6215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6218)
static void C_ccall f_6218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5527)
static void C_ccall f_5527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6206)
static void C_ccall f_6206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6209)
static void C_ccall f_6209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5530)
static void C_ccall f_5530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5533)
static void C_fcall f_5533(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6199)
static void C_ccall f_6199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6192)
static void C_ccall f_6192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5536)
static void C_ccall f_5536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6179)
static void C_ccall f_6179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6182)
static void C_ccall f_6182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5539)
static void C_fcall f_5539(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6173)
static void C_ccall f_6173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5542)
static void C_ccall f_5542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6158)
static void C_ccall f_6158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7195)
static void C_ccall f7195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6161)
static void C_ccall f_6161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6164)
static void C_ccall f_6164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5548)
static void C_ccall f_5548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6134)
static void C_fcall f_6134(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6144)
static void C_ccall f_6144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5554)
static void C_ccall f_5554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5557)
static void C_ccall f_5557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6111)
static void C_fcall f_6111(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6121)
static void C_ccall f_6121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5563)
static void C_ccall f_5563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5566)
static void C_ccall f_5566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6088)
static void C_fcall f_6088(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6098)
static void C_ccall f_6098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5572)
static void C_ccall f_5572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6000)
static void C_ccall f_6000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6053)
static void C_fcall f_6053(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6082)
static void C_ccall f_6082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6006)
static void C_ccall f_6006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6010)
static void C_ccall f_6010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6018)
static void C_fcall f_6018(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6047)
static void C_ccall f_6047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6016)
static void C_ccall f_6016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5996)
static void C_ccall f_5996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5576)
static void C_ccall f_5576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5579)
static void C_ccall f_5579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5927)
static void C_ccall f_5927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5930)
static void C_ccall f_5930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5582)
static void C_ccall f_5582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5915)
static void C_ccall f_5915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5918)
static void C_ccall f_5918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5585)
static void C_ccall f_5585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5894)
static void C_ccall f_5894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5897)
static void C_ccall f_5897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5900)
static void C_ccall f_5900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5903)
static void C_ccall f_5903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5906)
static void C_ccall f_5906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5588)
static void C_ccall f_5588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5882)
static void C_ccall f_5882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5885)
static void C_fcall f_5885(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5424)
static void C_ccall f_5424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5430)
static void C_ccall f_5430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5452)
static void C_ccall f_5452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5436)
static void C_ccall f_5436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5439)
static void C_ccall f_5439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5445)
static void C_ccall f_5445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5591)
static void C_ccall f_5591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5594)
static void C_fcall f_5594(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5599)
static void C_fcall f_5599(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5804)
static void C_ccall f_5804(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5859)
static void C_ccall f_5859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5808)
static void C_ccall f_5808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5814)
static void C_ccall f_5814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5817)
static void C_ccall f_5817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5828)
static void C_fcall f_5828(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5841)
static void C_ccall f_5841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5844)
static void C_ccall f_5844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5820)
static void C_ccall f_5820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5823)
static void C_ccall f_5823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5751)
static void C_ccall f_5751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5772)
static void C_ccall f_5772(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5772)
static void C_ccall f_5772r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5762)
static void C_ccall f_5762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5770)
static void C_ccall f_5770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5741)
static void C_ccall f_5741(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5741)
static void C_ccall f_5741r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5731)
static void C_ccall f_5731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5715)
static void C_ccall f_5715(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5715)
static void C_ccall f_5715r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5705)
static void C_ccall f_5705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5685)
static void C_ccall f_5685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5669)
static void C_ccall f_5669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5653)
static void C_ccall f_5653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5624)
static void C_ccall f_5624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5612)
static void C_ccall f_5612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5457)
static void C_fcall f_5457(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5504)
static void C_ccall f_5504(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5461)
static void C_ccall f_5461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5464)
static void C_ccall f_5464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5471)
static void C_ccall f_5471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5473)
static void C_fcall f_5473(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5496)
static void C_ccall f_5496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5494)
static void C_ccall f_5494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5483)
static void C_ccall f_5483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5490)
static void C_ccall f_5490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5372)
static void C_fcall f_5372(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5378)
static void C_fcall f_5378(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5386)
static void C_fcall f_5386(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5407)
static void C_ccall f_5407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5151)
static void C_fcall f_5151(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5157)
static void C_fcall f_5157(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5179)
static void C_fcall f_5179(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5273)
static void C_ccall f_5273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5266)
static void C_ccall f_5266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5195)
static void C_ccall f_5195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5226)
static void C_fcall f_5226(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5255)
static void C_ccall f_5255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5216)
static void C_ccall f_5216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5220)
static void C_ccall f_5220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5305)
static C_word C_fcall f_5305(C_word t0);
C_noret_decl(f_5094)
static void C_fcall f_5094(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5100)
static void C_fcall f_5100(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5112)
static void C_fcall f_5112(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5039)
static void C_ccall f_5039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5044)
static void C_fcall f_5044(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5073)
static void C_ccall f_5073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5060)
static void C_ccall f_5060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4997)
static void C_ccall f_4997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5003)
static void C_fcall f_5003(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5019)
static void C_ccall f_5019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5029)
static void C_ccall f_5029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4752)
static void C_fcall f_4752(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4995)
static void C_ccall f_4995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4762)
static void C_fcall f_4762(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4795)
static void C_ccall f_4795(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4817)
static void C_fcall f_4817(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4942)
static void C_fcall f_4942(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4952)
static void C_ccall f_4952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4940)
static void C_ccall f_4940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4853)
static void C_fcall f_4853(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4859)
static void C_fcall f_4859(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4883)
static void C_ccall f_4883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4886)
static void C_ccall f_4886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4889)
static void C_ccall f_4889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4892)
static void C_ccall f_4892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4895)
static void C_ccall f_4895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4869)
static void C_ccall f_4869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4842)
static void C_ccall f_4842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4798)
static void C_fcall f_4798(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4802)
static void C_ccall f_4802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4805)
static void C_ccall f_4805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4764)
static void C_fcall f_4764(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4779)
static void C_ccall f_4779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4775)
static void C_ccall f_4775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4695)
static void C_fcall f_4695(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4705)
static void C_fcall f_4705(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4424)
static void C_fcall f_4424(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4450)
static void C_fcall f_4450(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4459)
static void C_fcall f_4459(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4487)
static void C_ccall f_4487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4490)
static void C_ccall f_4490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4493)
static void C_ccall f_4493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4663)
static void C_fcall f_4663(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4496)
static void C_ccall f_4496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4499)
static void C_ccall f_4499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4502)
static void C_ccall f_4502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4505)
static void C_ccall f_4505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4646)
static void C_ccall f_4646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4649)
static void C_ccall f_4649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4508)
static void C_ccall f_4508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4511)
static void C_ccall f_4511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4514)
static void C_ccall f_4514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4605)
static void C_fcall f_4605(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4615)
static void C_ccall f_4615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4532)
static void C_fcall f_4532(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4542)
static void C_ccall f_4542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4547)
static void C_fcall f_4547(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4557)
static void C_ccall f_4557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4560)
static void C_ccall f_4560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4563)
static void C_ccall f_4563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4566)
static void C_ccall f_4566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4569)
static void C_ccall f_4569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4517)
static void C_ccall f_4517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4427)
static void C_fcall f_4427(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4433)
static void C_ccall f_4433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4222)
static void C_ccall f_4222(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4254)
static void C_fcall f_4254(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4422)
static void C_ccall f_4422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4267)
static void C_ccall f_4267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4339)
static void C_fcall f_4339(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4393)
static void C_ccall f_4393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4415)
static void C_ccall f_4415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4396)
static void C_ccall f_4396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4373)
static void C_fcall f_4373(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4383)
static void C_ccall f_4383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4270)
static void C_ccall f_4270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4273)
static void C_ccall f_4273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4288)
static void C_fcall f_4288(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4301)
static void C_ccall f_4301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4304)
static void C_ccall f_4304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4276)
static void C_ccall f_4276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4279)
static void C_ccall f_4279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4225)
static void C_fcall f_4225(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4229)
static void C_ccall f_4229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4245)
static void C_ccall f_4245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4061)
static void C_ccall f_4061(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4061)
static void C_ccall f_4061r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4174)
static void C_fcall f_4174(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4169)
static void C_fcall f_4169(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4063)
static void C_fcall f_4063(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4088)
static void C_ccall f_4088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4131)
static void C_fcall f_4131(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4141)
static void C_ccall f_4141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4112)
static void C_ccall f_4112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4095)
static void C_ccall f_4095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4066)
static void C_fcall f_4066(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4052)
static void C_ccall f_4052(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4056)
static void C_ccall f_4056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4031)
static void C_ccall f_4031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3322)
static void C_ccall f_3322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3021)
static C_word C_fcall f_3021(C_word t0);
C_noret_decl(f_3434)
static void C_fcall f_3434(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3563)
static void C_ccall f_3563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3591)
static void C_ccall f_3591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3685)
static void C_ccall f_3685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3919)
static void C_ccall f_3919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4000)
static void C_ccall f_4000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3937)
static void C_fcall f_3937(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3961)
static void C_fcall f_3961(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3990)
static void C_ccall f_3990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3955)
static void C_ccall f_3955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3923)
static void C_fcall f_3923(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3882)
static void C_fcall f_3882(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3814)
static void C_fcall f_3814(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3818)
static void C_ccall f_3818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3827)
static void C_fcall f_3827(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3855)
static void C_ccall f_3855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3850)
static void C_ccall f_3850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3837)
static void C_ccall f_3837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3719)
static void C_ccall f_3719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3730)
static void C_fcall f_3730(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3768)
static void C_fcall f_3768(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3778)
static void C_ccall f_3778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3738)
static void C_fcall f_3738(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3704)
static void C_ccall f_3704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3691)
static void C_ccall f_3691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3679)
static void C_ccall f_3679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3598)
static void C_ccall f_3598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3557)
static void C_ccall f_3557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3553)
static void C_ccall f_3553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3437)
static void C_ccall f_3437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3446)
static void C_fcall f_3446(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3477)
static void C_ccall f_3477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2982)
static C_word C_fcall f_2982(C_word t0,C_word t1);
C_noret_decl(f_3422)
static void C_ccall f_3422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3338)
static void C_ccall f_3338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3419)
static void C_ccall f_3419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3356)
static void C_ccall f_3356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3361)
static void C_fcall f_3361(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3386)
static void C_ccall f_3386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3190)
static void C_ccall f_3190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3184)
static void C_ccall f_3184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3073)
static void C_fcall f_3073(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3096)
static void C_ccall f_3096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3105)
static void C_fcall f_3105(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3169)
static void C_ccall f_3169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3118)
static void C_ccall f_3118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2702)
static void C_ccall f_2702(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2702)
static void C_ccall f_2702r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2710)
static void C_ccall f_2710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2716)
static void C_ccall f_2716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2722)
static void C_ccall f_2722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2739)
static void C_ccall f_2739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2931)
static void C_fcall f_2931(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2960)
static void C_ccall f_2960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2929)
static void C_ccall f_2929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2742)
static void C_ccall f_2742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2901)
static void C_fcall f_2901(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2911)
static void C_ccall f_2911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2794)
static void C_ccall f_2794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2830)
static void C_ccall f_2830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2842)
static void C_ccall f_2842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2878)
static void C_ccall f_2878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2797)
static void C_ccall f_2797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2800)
static void C_ccall f_2800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2806)
static void C_ccall f_2806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2743)
static void C_fcall f_2743(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2760)
static void C_fcall f_2760(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2777)
static void C_ccall f_2777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2769)
static void C_ccall f_2769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2724)
static void C_fcall f_2724(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2732)
static void C_ccall f_2732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2017)
static void C_ccall f_2017(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2033)
static void C_fcall f_2033(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2539)
static void C_ccall f_2539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2468)
static void C_ccall f_2468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2497)
static void C_fcall f_2497(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2507)
static void C_ccall f_2507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2492)
static void C_ccall f_2492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2449)
static void C_ccall f_2449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2452)
static void C_ccall f_2452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2455)
static void C_ccall f_2455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2440)
static void C_ccall f_2440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2396)
static void C_ccall f_2396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2368)
static void C_ccall f_2368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7065)
static void C_ccall f7065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7061)
static void C_ccall f7061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2347)
static void C_ccall f_2347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2331)
static void C_ccall f_2331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2279)
static void C_ccall f_2279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2312)
static void C_ccall f_2312(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2312)
static void C_ccall f_2312r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2316)
static void C_ccall f_2316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2284)
static void C_ccall f_2284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2288)
static void C_ccall f_2288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2299)
static void C_ccall f_2299(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2299)
static void C_ccall f_2299r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2220)
static void C_ccall f_2220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2245)
static void C_fcall f_2245(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2240)
static void C_ccall f_2240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2221)
static void C_fcall f_2221(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2211)
static void C_ccall f_2211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2175)
static void C_ccall f_2175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2186)
static void C_fcall f_2186(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2181)
static void C_ccall f_2181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2139)
static void C_ccall f_2139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2142)
static void C_ccall f_2142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2145)
static void C_ccall f_2145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2121)
static void C_ccall f_2121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2124)
static void C_ccall f_2124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2106)
static void C_ccall f_2106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2109)
static void C_ccall f_2109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2088)
static void C_ccall f_2088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2094)
static void C_ccall f_2094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2065)
static void C_ccall f_2065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2079)
static void C_ccall f_2079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2075)
static void C_ccall f_2075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2068)
static void C_ccall f_2068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2050)
static void C_ccall f_2050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1958)
static void C_ccall f_1958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1974)
static C_word C_fcall f_1974(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_1941)
static void C_ccall f_1941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1948)
static void C_ccall f_1948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1901)
static void C_ccall f_1901(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1854)
static void C_ccall f_1854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1860)
static void C_fcall f_1860(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1873)
static void C_ccall f_1873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1879)
static void C_ccall f_1879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1882)
static void C_ccall f_1882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1844)
static void C_ccall f_1844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1805)
static void C_ccall f_1805(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1829)
static void C_ccall f_1829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1815)
static void C_fcall f_1815(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1703)
static void C_ccall f_1703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1757)
static void C_ccall f_1757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1759)
static void C_fcall f_1759(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1786)
static void C_ccall f_1786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1772)
static void C_ccall f_1772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1727)
static void C_ccall f_1727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1741)
static void C_ccall f_1741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1737)
static void C_ccall f_1737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1678)
static C_word C_fcall f_1678(C_word t0,C_word t1);
C_noret_decl(f_1651)
static void C_fcall f_1651(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1658)
static void C_ccall f_1658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1661)
static void C_ccall f_1661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1667)
static void C_ccall f_1667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1614)
static void C_fcall f_1614(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1579)
static void C_ccall f_1579(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1587)
static void C_ccall f_1587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1567)
static void C_ccall f_1567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1538)
static void C_ccall f_1538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1541)
static void C_ccall f_1541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1548)
static void C_ccall f_1548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1510)
static void C_ccall f_1510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1520)
static void C_ccall f_1520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1513)
static void C_ccall f_1513(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1504)
static void C_fcall trf_1504(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1504(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1504(t0,t1);}

C_noret_decl(trf_6448)
static void C_fcall trf_6448(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6448(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6448(t0,t1,t2);}

C_noret_decl(trf_2661)
static void C_fcall trf_2661(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2661(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2661(t0,t1,t2,t3);}

C_noret_decl(trf_2592)
static void C_fcall trf_2592(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2592(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2592(t0,t1,t2);}

C_noret_decl(trf_2602)
static void C_fcall trf_2602(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2602(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2602(t0,t1);}

C_noret_decl(trf_5349)
static void C_fcall trf_5349(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5349(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5349(t0,t1);}

C_noret_decl(trf_5355)
static void C_fcall trf_5355(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5355(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5355(t0,t1);}

C_noret_decl(trf_5361)
static void C_fcall trf_5361(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5361(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5361(t0,t1);}

C_noret_decl(trf_6223)
static void C_fcall trf_6223(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6223(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6223(t0,t1,t2);}

C_noret_decl(trf_5533)
static void C_fcall trf_5533(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5533(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5533(t0,t1);}

C_noret_decl(trf_5539)
static void C_fcall trf_5539(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5539(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5539(t0,t1);}

C_noret_decl(trf_6134)
static void C_fcall trf_6134(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6134(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6134(t0,t1,t2);}

C_noret_decl(trf_6111)
static void C_fcall trf_6111(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6111(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6111(t0,t1,t2);}

C_noret_decl(trf_6088)
static void C_fcall trf_6088(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6088(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6088(t0,t1,t2);}

C_noret_decl(trf_6053)
static void C_fcall trf_6053(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6053(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6053(t0,t1,t2);}

C_noret_decl(trf_6018)
static void C_fcall trf_6018(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6018(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6018(t0,t1,t2);}

C_noret_decl(trf_5885)
static void C_fcall trf_5885(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5885(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5885(t0,t1);}

C_noret_decl(trf_5594)
static void C_fcall trf_5594(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5594(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5594(t0,t1);}

C_noret_decl(trf_5599)
static void C_fcall trf_5599(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5599(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5599(t0,t1,t2);}

C_noret_decl(trf_5828)
static void C_fcall trf_5828(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5828(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5828(t0,t1,t2);}

C_noret_decl(trf_5457)
static void C_fcall trf_5457(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5457(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5457(t0,t1,t2);}

C_noret_decl(trf_5473)
static void C_fcall trf_5473(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5473(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5473(t0,t1,t2);}

C_noret_decl(trf_5372)
static void C_fcall trf_5372(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5372(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5372(t0,t1,t2);}

C_noret_decl(trf_5378)
static void C_fcall trf_5378(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5378(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5378(t0,t1,t2);}

C_noret_decl(trf_5386)
static void C_fcall trf_5386(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5386(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5386(t0,t1,t2);}

C_noret_decl(trf_5151)
static void C_fcall trf_5151(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5151(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5151(t0,t1);}

C_noret_decl(trf_5157)
static void C_fcall trf_5157(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5157(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5157(t0,t1,t2);}

C_noret_decl(trf_5179)
static void C_fcall trf_5179(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5179(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5179(t0,t1);}

C_noret_decl(trf_5226)
static void C_fcall trf_5226(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5226(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5226(t0,t1,t2);}

C_noret_decl(trf_5094)
static void C_fcall trf_5094(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5094(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5094(t0,t1,t2);}

C_noret_decl(trf_5100)
static void C_fcall trf_5100(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5100(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5100(t0,t1,t2);}

C_noret_decl(trf_5112)
static void C_fcall trf_5112(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5112(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5112(t0,t1,t2);}

C_noret_decl(trf_5044)
static void C_fcall trf_5044(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5044(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5044(t0,t1,t2);}

C_noret_decl(trf_5003)
static void C_fcall trf_5003(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5003(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5003(t0,t1,t2);}

C_noret_decl(trf_4752)
static void C_fcall trf_4752(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4752(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4752(t0,t1,t2);}

C_noret_decl(trf_4762)
static void C_fcall trf_4762(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4762(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4762(t0,t1);}

C_noret_decl(trf_4817)
static void C_fcall trf_4817(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4817(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4817(t0,t1,t2);}

C_noret_decl(trf_4942)
static void C_fcall trf_4942(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4942(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4942(t0,t1,t2,t3);}

C_noret_decl(trf_4853)
static void C_fcall trf_4853(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4853(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4853(t0,t1,t2,t3);}

C_noret_decl(trf_4859)
static void C_fcall trf_4859(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4859(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4859(t0,t1,t2,t3);}

C_noret_decl(trf_4798)
static void C_fcall trf_4798(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4798(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4798(t0,t1,t2);}

C_noret_decl(trf_4764)
static void C_fcall trf_4764(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4764(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4764(t0,t1,t2);}

C_noret_decl(trf_4695)
static void C_fcall trf_4695(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4695(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4695(t0,t1,t2);}

C_noret_decl(trf_4705)
static void C_fcall trf_4705(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4705(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4705(t0,t1);}

C_noret_decl(trf_4424)
static void C_fcall trf_4424(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4424(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4424(t0,t1,t2);}

C_noret_decl(trf_4450)
static void C_fcall trf_4450(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4450(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4450(t0,t1);}

C_noret_decl(trf_4459)
static void C_fcall trf_4459(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4459(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4459(t0,t1,t2,t3);}

C_noret_decl(trf_4663)
static void C_fcall trf_4663(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4663(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4663(t0,t1);}

C_noret_decl(trf_4605)
static void C_fcall trf_4605(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4605(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4605(t0,t1,t2,t3);}

C_noret_decl(trf_4532)
static void C_fcall trf_4532(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4532(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4532(t0,t1,t2,t3);}

C_noret_decl(trf_4547)
static void C_fcall trf_4547(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4547(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4547(t0,t1,t2,t3);}

C_noret_decl(trf_4427)
static void C_fcall trf_4427(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4427(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4427(t0,t1);}

C_noret_decl(trf_4254)
static void C_fcall trf_4254(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4254(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4254(t0,t1,t2);}

C_noret_decl(trf_4339)
static void C_fcall trf_4339(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4339(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4339(t0,t1,t2,t3);}

C_noret_decl(trf_4373)
static void C_fcall trf_4373(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4373(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4373(t0,t1,t2);}

C_noret_decl(trf_4288)
static void C_fcall trf_4288(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4288(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4288(t0,t1,t2,t3);}

C_noret_decl(trf_4225)
static void C_fcall trf_4225(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4225(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4225(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4174)
static void C_fcall trf_4174(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4174(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4174(t0,t1);}

C_noret_decl(trf_4169)
static void C_fcall trf_4169(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4169(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4169(t0,t1,t2);}

C_noret_decl(trf_4063)
static void C_fcall trf_4063(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4063(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4063(t0,t1,t2,t3);}

C_noret_decl(trf_4131)
static void C_fcall trf_4131(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4131(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4131(t0,t1);}

C_noret_decl(trf_4066)
static void C_fcall trf_4066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4066(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4066(t0,t1,t2);}

C_noret_decl(trf_3434)
static void C_fcall trf_3434(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3434(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3434(t0,t1);}

C_noret_decl(trf_3937)
static void C_fcall trf_3937(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3937(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3937(t0,t1,t2);}

C_noret_decl(trf_3961)
static void C_fcall trf_3961(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3961(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3961(t0,t1,t2);}

C_noret_decl(trf_3923)
static void C_fcall trf_3923(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3923(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3923(t0,t1,t2);}

C_noret_decl(trf_3882)
static void C_fcall trf_3882(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3882(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3882(t0,t1,t2);}

C_noret_decl(trf_3814)
static void C_fcall trf_3814(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3814(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3814(t0,t1,t2);}

C_noret_decl(trf_3827)
static void C_fcall trf_3827(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3827(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3827(t0,t1,t2);}

C_noret_decl(trf_3730)
static void C_fcall trf_3730(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3730(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3730(t0,t1,t2);}

C_noret_decl(trf_3768)
static void C_fcall trf_3768(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3768(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3768(t0,t1,t2);}

C_noret_decl(trf_3738)
static void C_fcall trf_3738(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3738(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3738(t0,t1,t2);}

C_noret_decl(trf_3446)
static void C_fcall trf_3446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3446(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3446(t0,t1,t2,t3);}

C_noret_decl(trf_3361)
static void C_fcall trf_3361(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3361(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3361(t0,t1,t2);}

C_noret_decl(trf_3073)
static void C_fcall trf_3073(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3073(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3073(t0,t1,t2);}

C_noret_decl(trf_3105)
static void C_fcall trf_3105(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3105(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3105(t0,t1,t2,t3);}

C_noret_decl(trf_2931)
static void C_fcall trf_2931(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2931(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2931(t0,t1,t2);}

C_noret_decl(trf_2901)
static void C_fcall trf_2901(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2901(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2901(t0,t1,t2);}

C_noret_decl(trf_2743)
static void C_fcall trf_2743(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2743(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2743(t0,t1,t2);}

C_noret_decl(trf_2760)
static void C_fcall trf_2760(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2760(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2760(t0,t1);}

C_noret_decl(trf_2724)
static void C_fcall trf_2724(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2724(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2724(t0,t1);}

C_noret_decl(trf_2033)
static void C_fcall trf_2033(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2033(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2033(t0,t1);}

C_noret_decl(trf_2497)
static void C_fcall trf_2497(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2497(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2497(t0,t1,t2);}

C_noret_decl(trf_2245)
static void C_fcall trf_2245(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2245(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2245(t0,t1,t2);}

C_noret_decl(trf_2221)
static void C_fcall trf_2221(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2221(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2221(t0,t1,t2);}

C_noret_decl(trf_2186)
static void C_fcall trf_2186(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2186(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2186(t0,t1,t2);}

C_noret_decl(trf_1860)
static void C_fcall trf_1860(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1860(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1860(t0,t1,t2);}

C_noret_decl(trf_1815)
static void C_fcall trf_1815(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1815(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1815(t0,t1);}

C_noret_decl(trf_1759)
static void C_fcall trf_1759(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1759(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1759(t0,t1,t2);}

C_noret_decl(trf_1651)
static void C_fcall trf_1651(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1651(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1651(t0,t1);}

C_noret_decl(trf_1614)
static void C_fcall trf_1614(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1614(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1614(t0,t1);}

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
if(!C_demand_2(2532)){
C_save(t1);
C_rereclaim2(2532*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,403);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[3]=C_decode_literal(C_heaptop,"\376B\000\000\006.csirc");
lf[4]=C_h_intern(&lf[4],27,"\003sysrepl-print-length-limit");
lf[5]=C_h_intern(&lf[5],4,"\000csi");
lf[6]=C_h_intern(&lf[6],12,"\003sysfeatures");
lf[7]=C_h_intern(&lf[7],19,"\003sysnotices-enabled");
lf[8]=C_h_intern(&lf[8],14,"editor-command");
lf[11]=C_h_intern(&lf[11],15,"\003csiprint-usage");
lf[12]=C_h_intern(&lf[12],7,"display");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\004V    -b  -batch                    terminate after command-line processing\012 "
"   -w  -no-warnings              disable all warnings\012    -K  -keyword-style STY"
"LE      enable alternative keyword-syntax\012                                   (pr"
"efix, suffix or none)\012        -no-parentheses-synonyms  disables list delimiter "
"synonyms\012        -no-symbol-escape         disables support for escaped symbols\012"
"        -r5rs-syntax              disables the Chicken extensions to\012           "
"                        R5RS syntax\012    -s  -script PATHNAME          use interp"
"reter for shell scripts\012        -ss PATHNAME              shell script with `mai"
"n\047 procedure\012        -sx PATHNAME              same as `-s\047, but print each expr"
"ession\012                                   as it is evaluated\012        -setup-mode"
"               prefer the current directory when locating extensions\012    -R  -re"
"quire-extension NAME   require extension and import before\012                     "
"              executing code\012    -I  -include-path PATHNAME    add PATHNAME to i"
"nclude path\012    --                            ignore all following options\012");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\003 \047\012");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000D    -n  -no-init                  do not load initialization file ` ");
lf[16]=C_h_intern(&lf[16],19,"\003sysprint-to-string");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\003*usage: csi [FILENAME | OPTION ...]\012\012  `csi\047 is the CHICKEN interpreter.\012  \012"
"  FILENAME is a Scheme source file name with optional extension. OPTION may be\012 "
" one of the following:\012\012    -h  -help  --help             display this text and "
"exit\012    -v  -version                  display version and exit\012        -release"
"                  print release number and exit\012    -i  -case-insensitive       "
"  enable case-insensitive reading\012    -e  -eval EXPRESSION          evaluate giv"
"en expression\012    -p  -print EXPRESSION         evaluate and print result(s)\012   "
" -P  -pretty-print EXPRESSION  evaluate and print result(s) prettily\012    -D  -fe"
"ature SYMBOL           register feature identifier\012        -no-feature SYMBOL   "
"     disable built-in feature identifier\012    -q  -quiet                    do no"
"t print banner\012");
lf[18]=C_h_intern(&lf[18],16,"\003csiprint-banner");
lf[19]=C_h_intern(&lf[19],5,"print");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\077(c)2008-2011 The Chicken Team\012(c)2000-2007 Felix L. Winkelmann\012");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[22]=C_h_intern(&lf[22],15,"chicken-version");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\007CHICKEN");
lf[24]=C_h_intern(&lf[24],7,"newline");
lf[25]=C_h_intern(&lf[25],18,"\003sysuser-read-hook");
lf[26]=C_h_intern(&lf[26],5,"quote");
lf[27]=C_h_intern(&lf[27],17,"\003csihistory-count");
lf[28]=C_h_intern(&lf[28],15,"\003csihistory-ref");
lf[29]=C_h_intern(&lf[29],21,"\003syssharp-number-hook");
lf[30]=C_h_intern(&lf[30],9,"substring");
lf[31]=C_h_intern(&lf[31],18,"\003csichop-separator");
lf[32]=C_h_intern(&lf[32],1,"@");
lf[33]=C_h_intern(&lf[33],12,"file-exists\077");
lf[34]=C_h_intern(&lf[34],13,"string-append");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\004.bat");
lf[36]=C_h_intern(&lf[36],22,"\003csilookup-script-file");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[38]=C_h_intern(&lf[38],25,"\003syspeek-nonnull-c-string");
lf[39]=C_h_intern(&lf[39],12,"string-split");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[42]=C_h_intern(&lf[42],24,"get-environment-variable");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\004PATH");
lf[44]=C_h_intern(&lf[44],16,"\003csihistory-list");
lf[45]=C_h_intern(&lf[45],13,"vector-resize");
lf[46]=C_h_intern(&lf[46],15,"\003csihistory-add");
lf[47]=C_h_intern(&lf[47],19,"\003sysundefined-value");
lf[48]=C_h_intern(&lf[48],17,"\003csihistory-clear");
lf[49]=C_h_intern(&lf[49],12,"vector-fill!");
lf[50]=C_h_intern(&lf[50],16,"\003csihistory-show");
lf[51]=C_h_intern(&lf[51],19,"\003sysstandard-output");
lf[52]=C_h_intern(&lf[52],9,"\003sysprint");
lf[53]=C_h_intern(&lf[53],27,"\003syswith-print-length-limit");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[55]=C_h_intern(&lf[55],19,"\003syswrite-char/port");
lf[56]=C_h_intern(&lf[56],9,"\003syserror");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000 history entry index out of range");
lf[58]=C_h_intern(&lf[58],14,"\003csitty-input\077");
lf[59]=C_h_intern(&lf[59],13,"\003systty-port\077");
lf[60]=C_h_intern(&lf[60],18,"\003sysstandard-input");
lf[61]=C_h_intern(&lf[61],18,"\003sysbreak-on-error");
lf[62]=C_h_intern(&lf[62],20,"\003sysread-prompt-hook");
lf[64]=C_h_intern(&lf[64],16,"toplevel-command");
lf[65]=C_h_intern(&lf[65],4,"eval");
lf[66]=C_h_intern(&lf[66],12,"load-noisily");
lf[67]=C_h_intern(&lf[67],4,"read");
lf[68]=C_h_intern(&lf[68],9,"read-line");
lf[69]=C_h_intern(&lf[69],6,"printf");
lf[70]=C_h_intern(&lf[70],6,"expand");
lf[71]=C_h_intern(&lf[71],12,"pretty-print");
lf[72]=C_h_intern(&lf[72],6,"values");
lf[73]=C_h_intern(&lf[73],18,"\003sysrepl-eval-hook");
lf[74]=C_h_intern(&lf[74],4,"exit");
lf[75]=C_h_intern(&lf[75],1,"x");
lf[76]=C_h_intern(&lf[76],16,"\003sysstrip-syntax");
lf[77]=C_h_intern(&lf[77],1,"p");
lf[78]=C_h_intern(&lf[78],1,"d");
lf[79]=C_h_intern(&lf[79],12,"\003csidescribe");
lf[80]=C_h_intern(&lf[80],2,"du");
lf[81]=C_h_intern(&lf[81],8,"\003csidump");
lf[82]=C_h_intern(&lf[82],3,"dur");
lf[83]=C_h_intern(&lf[83],1,"r");
lf[84]=C_h_intern(&lf[84],10,"\003csireport");
lf[85]=C_h_intern(&lf[85],1,"q");
lf[86]=C_h_intern(&lf[86],1,"l");
lf[87]=C_h_intern(&lf[87],4,"load");
lf[88]=C_h_intern(&lf[88],8,"for-each");
lf[89]=C_h_intern(&lf[89],2,"ln");
lf[90]=C_h_intern(&lf[90],6,"print*");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\004==> ");
lf[92]=C_h_intern(&lf[92],8,"\000printer");
lf[93]=C_h_intern(&lf[93],1,"t");
lf[94]=C_h_intern(&lf[94],17,"\003sysdisplay-times");
lf[95]=C_h_intern(&lf[95],14,"\003sysstop-timer");
lf[96]=C_h_intern(&lf[96],15,"\003sysstart-timer");
lf[97]=C_h_intern(&lf[97],3,"exn");
lf[98]=C_h_intern(&lf[98],18,"\003syslast-exception");
lf[99]=C_h_intern(&lf[99],1,"e");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000,editor returned with non-zero exit status ~a");
lf[101]=C_h_intern(&lf[101],6,"system");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[103]=C_h_intern(&lf[103],2,"ch");
lf[104]=C_h_intern(&lf[104],1,"h");
lf[105]=C_h_intern(&lf[105],1,"c");
lf[107]=C_h_intern(&lf[107],1,"f");
lf[109]=C_h_intern(&lf[109],1,"g");
lf[111]=C_h_intern(&lf[111],1,"s");
lf[112]=C_h_intern(&lf[112],1,"\077");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\002 ,");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\003\266Toplevel commands:\012\012 ,\077                Show this text\012 ,p EXP            Pr"
"etty print evaluated expression EXP\012 ,d EXP            Describe result of evalua"
"ted expression EXP\012 ,du EXP           Dump data of expression EXP\012 ,dur EXP N   "
"     Dump range\012 ,q                Quit interpreter\012 ,l FILENAME ...   Load one "
"or more files\012 ,ln FILENAME ...  Load one or more files and print result of each"
" top-level expression\012 ,r                Show system information\012 ,h            "
"    Show history of expression results\012 ,ch               Clear history of expre"
"ssion results\012 ,e FILENAME       Run external editor\012 ,s TEXT ...       Execute "
"shell-command\012 ,exn              Describe last exception\012 ,c                Show"
" call-chain of most recent error\012 ,f N              Select frame N\012 ,g NAME     "
"      Get variable NAME from current frame\012 ,t EXP            Evaluate form and "
"print elapsed time\012 ,x EXP            Pretty print expanded expression EXP\012");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\0005undefined toplevel command ~s - enter `,\077\047 for help~%");
lf[116]=C_h_intern(&lf[116],7,"unquote");
lf[117]=C_h_intern(&lf[117],4,"sort");
lf[118]=C_h_intern(&lf[118],19,"with-output-to-port");
lf[119]=C_h_intern(&lf[119],19,"current-output-port");
lf[120]=C_h_intern(&lf[120],4,"argv");
lf[121]=C_h_intern(&lf[121],8,"truncate");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[123]=C_h_intern(&lf[123],11,"make-string");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\004  ~a");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\025symbol gc is enabled\012");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\027interrupts are enabled\012");
lf[127]=C_h_intern(&lf[127],16,"\003syswrite-char-0");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\010(64-bit)");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\010 (fixed)");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\010downward");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\006upward");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\002\207~%~%~\012                   Machine type:    \011~A ~A~%~\012                   Soft"
"ware type:   \011~A~%~\012                   Software version:\011~A~%~\012                 "
"  Build platform:  \011~A~%~\012                   Installation prefix:\011~A~%~\012        "
"           Extension path:  \011~A~%~\012                   Include path:    \011~A~%~\012  "
"                 Symbol-table load:\011~S~%  ~\012                     Avg bucket leng"
"th:\011~S~%  ~\012                     Total symbol count:\011~S~%~\012                   Me"
"mory:\011heap size is ~S bytes~A with ~S bytes currently in use~%~  \012              "
"       nursery size is ~S bytes, stack grows ~A~%~\012                   Command li"
"ne:    \011~S~%");
lf[135]=C_h_intern(&lf[135],21,"\003sysinclude-pathnames");
lf[136]=C_h_intern(&lf[136],15,"repository-path");
lf[137]=C_h_intern(&lf[137],14,"build-platform");
lf[138]=C_h_intern(&lf[138],16,"software-version");
lf[139]=C_h_intern(&lf[139],13,"software-type");
lf[140]=C_h_intern(&lf[140],12,"machine-type");
lf[141]=C_h_intern(&lf[141],15,"keyword->string");
lf[142]=C_h_intern(&lf[142],3,"map");
lf[143]=C_h_intern(&lf[143],8,"string<\077");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\015Features:~%~%");
lf[145]=C_h_intern(&lf[145],17,"memory-statistics");
lf[146]=C_h_intern(&lf[146],21,"\003syssymbol-table-info");
lf[147]=C_h_intern(&lf[147],2,"gc");
lf[149]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376B\000\000\030vector of unsigned bytes\376\003\000\000\002\376\001\000\000\017u8vector-leng"
"th\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010s8vector\376\003\000\000\002\376B\000\000\026vector of signed byt"
"es\376\003\000\000\002\376\001\000\000\017s8vector-length\376\003\000\000\002\376\001\000\000\014s8vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000"
"\002\376B\000\000\037vector of unsigned 16-bit words\376\003\000\000\002\376\001\000\000\020u16vector-length\376\003\000\000\002\376\001\000\000\015u16vect"
"or-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376B\000\000\035vector of signed 16-bit words\376\003\000\000\002\376\001\000"
"\000\020s16vector-length\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011u32vector\376\003\000\000\002\376B\000\000\037ve"
"ctor of unsigned 32-bit words\376\003\000\000\002\376\001\000\000\020u32vector-length\376\003\000\000\002\376\001\000\000\015u32vector-ref\376\377"
"\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011s32vector\376\003\000\000\002\376B\000\000\035vector of signed 32-bit words\376\003\000\000\002\376\001\000\000\020s32vec"
"tor-length\376\003\000\000\002\376\001\000\000\015s32vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376B\000\000\027vector of "
"32-bit floats\376\003\000\000\002\376\001\000\000\020f32vector-length\376\003\000\000\002\376\001\000\000\015f32vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011"
"f64vector\376\003\000\000\002\376B\000\000\027vector of 64-bit floats\376\003\000\000\002\376\001\000\000\020f64vector-length\376\003\000\000\002\376\001\000\000\015f6"
"4vector-ref\376\377\016\376\377\016");
lf[151]=C_h_intern(&lf[151],7,"sprintf");
lf[152]=C_h_intern(&lf[152],7,"fprintf");
lf[153]=C_h_intern(&lf[153],6,"length");
lf[154]=C_h_intern(&lf[154],8,"list-ref");
lf[155]=C_h_intern(&lf[155],10,"string-ref");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000 ~% (~A elements not displayed)~%");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000.\011(followed by ~A identical instance~a)~% ...~%");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\001s");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\007 ~S: ~S");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\021~A of length ~S~%");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000$character ~S, code: ~S, #x~X, #o~O~%");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\016boolean true~%");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\017boolean false~%");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\014empty list~%");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\024end-of-file object~%");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\024unspecified object~%");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\016, character ~S");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000(exact integer ~S~%  #x~X~%  #o~O~%  #b~B");
lf[170]=C_h_intern(&lf[170],28,"\003sysarbitrary-unbound-symbol");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\017unbound value~%");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\023inexact number ~S~%");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\013number ~S~%");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\006string");
lf[175]=C_h_intern(&lf[175],8,"\003syssize");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\006vector");
lf[177]=C_h_intern(&lf[177],8,"\003sysslot");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\035keyword symbol with name ~s~%");
lf[179]=C_h_intern(&lf[179],18,"\003syssymbol->string");
lf[180]=C_h_intern(&lf[180],5,"write");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\005  ~s\011");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\020  \012properties:\012\012");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\013uninterned ");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\012qualified ");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\031~a~asymbol with name ~S~%");
lf[188]=C_h_intern(&lf[188],28,"\003syssymbol->qualified-string");
lf[189]=C_h_intern(&lf[189],20,"\003sysinterned-symbol\077");
lf[190]=C_h_intern(&lf[190],21,"\003sysqualified-symbol\077");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\010unbound ");
lf[192]=C_h_intern(&lf[192],32,"\003syssymbol-has-toplevel-binding\077");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\005eol~%");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\012(circle)~%");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\006~S -> ");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\024circular structure: ");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\004list");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\036pair with car ~S~%and cdr ~S~%");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\036procedure with code pointer ~X");
lf[200]=C_h_intern(&lf[200],25,"\003syspeek-unsigned-integer");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\005input");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\006output");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\0005~A port of type ~A with name ~S and file pointer ~X~%");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000/locative~%  pointer ~X~%  index ~A~%  type ~A~%");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\004slot");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\004char");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\010u8vector");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\010s8vector");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\011u16vector");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000\011s16vector");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\011u32vector");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\011s32vector");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\011f32vector");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\011f64vector");
lf[215]=C_decode_literal(C_heaptop,"\376B\000\000\024machine pointer ~X~%");
lf[216]=C_h_intern(&lf[216],11,"\003csihexdump");
lf[217]=C_h_intern(&lf[217],8,"\003sysbyte");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\022blob of size ~S:~%");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\030lambda information: ~s~%");
lf[220]=C_h_intern(&lf[220],23,"\003syslambda-info->string");
lf[221]=C_h_intern(&lf[221],10,"hash-table");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\013 ~S\011-> ~S~%");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\025  hash function: ~a~%");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\001s");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000:hash-table with ~S element~a~%  comparison procedure: ~A~%");
lf[227]=C_h_intern(&lf[227],9,"condition");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\007\011~s: ~s");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\005 ~s~%");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\017condition: ~s~%");
lf[231]=C_h_intern(&lf[231],6,"append");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\031structure of type `~S\047:~%");
lf[233]=C_h_intern(&lf[233],18,"\003syshash-table-ref");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\020unknown object~%");
lf[235]=C_h_intern(&lf[235],15,"\003sysbytevector\077");
lf[236]=C_h_intern(&lf[236],13,"\003syslocative\077");
lf[237]=C_h_intern(&lf[237],5,"port\077");
lf[238]=C_h_intern(&lf[238],8,"keyword\077");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\034statically allocated (0x~X) ");
lf[240]=C_h_intern(&lf[240],17,"\003sysblock-address");
lf[241]=C_h_intern(&lf[241],14,"set-describer!");
lf[242]=C_h_intern(&lf[242],19,"\003syshash-table-set!");
lf[243]=C_h_intern(&lf[243],16,"\003syscheck-symbol");
lf[244]=C_h_intern(&lf[244],6,"symbol");
lf[245]=C_h_intern(&lf[245],3,"min");
lf[246]=C_h_intern(&lf[246],4,"dump");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot dump immediate object");
lf[248]=C_h_intern(&lf[248],13,"\003syspeek-byte");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot dump object");
lf[250]=C_h_intern(&lf[250],10,"write-char");
lf[251]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[252]=C_h_intern(&lf[252],26,"\003sysrepl-recent-call-chain");
lf[253]=C_h_intern(&lf[253],9,"frameinfo");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\004:\011  ");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\006  ---\012");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\002] ");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\003\011  ");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\002[]");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\016no such frame\012");
lf[262]=C_h_intern(&lf[262],7,"call/cc");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\027no environment in frame");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\012; getting ");
lf[265]=C_h_intern(&lf[265],17,"\003sysstring-append");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\022no such variable: ");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000#string or symbol required for `,g\047\012");
lf[268]=C_h_intern(&lf[268],7,"\003csidel");
lf[269]=C_h_intern(&lf[269],11,"\003csideldups");
lf[270]=C_h_intern(&lf[270],6,"equal\077");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\003-ss");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\007-script");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\003-sx");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\002--");
lf[278]=C_h_intern(&lf[278],6,"string");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid option");
lf[280]=C_h_intern(&lf[280],16,"\003sysstring->list");
lf[281]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\007-script\376\003\000\000\002\376B\000\000\010-version\376\003\000\000\002\376B\000\000\005-help\376\003\000\000"
"\002\376B\000\000\006--help\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\013-no-feature\376\003\000\000\002\376B\000\000\005-eval\376\003\000\000\002\376B\000\000\021-cas"
"e-insensitive\376\003\000\000\002\376B\000\000\016-keyword-style\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376B\000\000"
"\021-no-symbol-escape\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\003\000\000\002\376B\000\000\013-setup-mode\376\003\000\000\002\376B\000\000\022-require-"
"extension\376\003\000\000\002\376B\000\000\006-batch\376\003\000\000\002\376B\000\000\006-quiet\376\003\000\000\002\376B\000\000\014-no-warnings\376\003\000\000\002\376B\000\000\010-no-ini"
"t\376\003\000\000\002\376B\000\000\015-include-path\376\003\000\000\002\376B\000\000\010-release\376\003\000\000\002\376B\000\000\006-print\376\003\000\000\002\376B\000\000\015-pretty-prin"
"t\376\003\000\000\002\376B\000\000\002--\376\377\016");
lf[282]=C_h_intern(&lf[282],7,"\003csirun");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\047missing argument to command-line option");
lf[284]=C_h_intern(&lf[284],8,"\003syslist");
lf[285]=C_h_intern(&lf[285],17,"open-input-string");
lf[286]=C_h_intern(&lf[286],17,"register-feature!");
lf[287]=C_h_intern(&lf[287],19,"unregister-feature!");
lf[288]=C_h_intern(&lf[288],4,"repl");
lf[289]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002--\376\003\000\000\002\376B\000\000\002-b\376\003\000\000\002\376B\000\000\006-batch\376\003\000\000\002\376B\000\000\002-q\376\003\000\000\002\376B\000\000\006-quiet\376\003\000\000\002\376B\000\000\002-n"
"\376\003\000\000\002\376B\000\000\010-no-init\376\003\000\000\002\376B\000\000\002-w\376\003\000\000\002\376B\000\000\014-no-warnings\376\003\000\000\002\376B\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-"
"insensitive\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376B\000\000\021-no-symbol-escape\376\003\000\000\002\376B\000"
"\000\014-r5rs-syntax\376\003\000\000\002\376B\000\000\013-setup-mode\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\002-s\376\003\000\000\002\376B"
"\000\000\007-script\376\377\016");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\002-D");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\002-I");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000\015-include-path");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\002-K");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\016-keyword-style");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-feature");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\002-R");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\022-require-extension");
lf[299]=C_h_intern(&lf[299],22,"\004corerequire-extension");
lf[300]=C_h_intern(&lf[300],14,"string->symbol");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\002-e");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\005-eval");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\002-p");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\006-print");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\002-P");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\015-pretty-print");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\003-ss");
lf[308]=C_h_intern(&lf[308],4,"main");
lf[309]=C_h_intern(&lf[309],22,"command-line-arguments");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\003-sx");
lf[311]=C_h_intern(&lf[311],18,"\003sysstandard-error");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\002; ");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\003\012; ");
lf[314]=C_h_intern(&lf[314],12,"flush-output");
lf[315]=C_h_intern(&lf[315],21,"with-output-to-string");
lf[316]=C_h_intern(&lf[316],8,"\003sysload");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\004HOME");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\002./");
lf[321]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-n\376\003\000\000\002\376B\000\000\010-no-init\376\377\016");
lf[322]=C_h_intern(&lf[322],13,"symbol-escape");
lf[323]=C_h_intern(&lf[323],20,"parentheses-synonyms");
lf[324]=C_h_intern(&lf[324],13,"keyword-style");
lf[325]=C_h_intern(&lf[325],5,"\000none");
lf[326]=C_h_intern(&lf[326],14,"case-sensitive");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000/Disabled the Chicken extensions to R5RS syntax\012");
lf[328]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\377\016");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000%Disabled support for escaped symbols\012");
lf[330]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\021-no-symbol-escape\376\377\016");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000*Disabled support for parentheses synonyms\012");
lf[332]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\377\016");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\006prefix");
lf[334]=C_h_intern(&lf[334],7,"\000prefix");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\006suffix");
lf[337]=C_h_intern(&lf[337],7,"\000suffix");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000+missing argument to `-keyword-style\047 option");
lf[339]=C_h_intern(&lf[339],8,"string=\077");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000\002-I");
lf[341]=C_decode_literal(C_heaptop,"\376B\000\000\015-include-path");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-feature");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000\002-D");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[345]=C_h_intern(&lf[345],16,"case-insensitive");
lf[346]=C_decode_literal(C_heaptop,"\376B\000\000-Identifiers and symbols are case insensitive\012");
lf[347]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-insensitive\376\377\016");
lf[348]=C_h_intern(&lf[348],12,"load-verbose");
lf[349]=C_h_intern(&lf[349],20,"\003syswarnings-enabled");
lf[350]=C_decode_literal(C_heaptop,"\376B\000\000\026Warnings are disabled\012");
lf[351]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-w\376\003\000\000\002\376B\000\000\014-no-warnings\376\377\016");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\000\010-release");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000\013-setup-mode");
lf[354]=C_h_intern(&lf[354],14,"\003syssetup-mode");
lf[355]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-v\376\003\000\000\002\376B\000\000\010-version\376\377\016");
lf[356]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-h\376\003\000\000\002\376B\000\000\005-help\376\003\000\000\002\376B\000\000\006--help\376\377\016");
lf[357]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[358]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\024CHICKEN_INCLUDE_PATH");
lf[360]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-q\376\003\000\000\002\376B\000\000\006-quiet\376\377\016");
lf[361]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-b\376\003\000\000\002\376B\000\000\006-batch\376\377\016");
lf[362]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-e\376\003\000\000\002\376B\000\000\002-p\376\003\000\000\002\376B\000\000\002-P\376\003\000\000\002\376B\000\000\005-eval\376\003\000\000\002\376B\000\000\006-print\376\003\000\000\002\376B\000\000\015-pr"
"etty-print\376\377\016");
lf[363]=C_h_intern(&lf[363],20,"\003syswindows-platform");
lf[364]=C_h_intern(&lf[364],14,"chicken-script");
lf[365]=C_h_intern(&lf[365],6,"script");
lf[366]=C_h_intern(&lf[366],12,"program-name");
lf[367]=C_decode_literal(C_heaptop,"\376B\000\000\042missing or invalid script argument");
lf[368]=C_decode_literal(C_heaptop,"\376B\000\000\002--");
lf[369]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\002-s\376\003\000\000\002\376B\000\000\007-script\376\377\016");
lf[370]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-K\376\003\000\000\002\376B\000\000\016-keyword-style\376\377\016");
lf[371]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[372]=C_h_intern(&lf[372],17,"get-output-string");
lf[373]=C_h_intern(&lf[373],18,"open-output-string");
lf[374]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid option syntax");
lf[375]=C_h_intern(&lf[375],7,"reverse");
lf[376]=C_h_intern(&lf[376],22,"with-exception-handler");
lf[377]=C_h_intern(&lf[377],30,"call-with-current-continuation");
lf[378]=C_decode_literal(C_heaptop,"\376B\000\000\013CSI_OPTIONS");
lf[379]=C_h_intern(&lf[379],25,"\003sysimplicit-exit-handler");
lf[380]=C_h_intern(&lf[380],11,"make-vector");
lf[381]=C_h_intern(&lf[381],17,"\003syspeek-c-string");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[383]=C_h_intern(&lf[383],18,"\003sysstring->symbol");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000$; switching current module to `~a\047~%");
lf[385]=C_h_intern(&lf[385],18,"\003syscurrent-module");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000\027undefined module `~a\047~%");
lf[387]=C_h_intern(&lf[387],15,"\003sysfind-module");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid module name `~a\047~%");
lf[389]=C_decode_literal(C_heaptop,"\376B\000\000(; resetting current module to toplevel~%");
lf[390]=C_h_intern(&lf[390],1,"m");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\0005,m MODULE         switch to module with name `MODULE\047");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\010#;~A~A> ");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\003~a:");
lf[394]=C_h_intern(&lf[394],15,"\003sysmodule-name");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[396]=C_h_intern(&lf[396],11,"repl-prompt");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\013emacsclient");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\002vi");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\005EMACS");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\006VISUAL");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\006EDITOR");
lf[402]=C_h_intern(&lf[402],14,"make-parameter");
C_register_lf2(lf,403,create_ptable());
t2=C_mutate(&lf[0] /* (set! c174 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1471,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k1469 */
static void C_ccall f_1471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1471,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1474,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1472 in k1469 */
static void C_ccall f_1474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1474,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1477,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1475 in k1472 in k1469 */
static void C_ccall f_1477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1477,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1480,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1480,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1483,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1483(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1483,2,t0,t1);}
t2=C_mutate(&lf[2] /* (set! constant22 ...) */,lf[3]);
t3=C_set_block_item(lf[4] /* repl-print-length-limit */,0,C_fix(2048));
t4=C_a_i_cons(&a,2,lf[5],C_fast_retrieve(lf[6]));
t5=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#features ...) */,t4);
t6=C_set_block_item(lf[7] /* notices-enabled */,0,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1496,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:69: make-parameter */
((C_proc3)C_fast_retrieve_symbol_proc(lf[402]))(3,*((C_word*)lf[402]+1),t7,C_SCHEME_FALSE);}

/* k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1496,2,t0,t1);}
t2=C_mutate((C_word*)lf[8]+1 /* (set! editor-command ...) */,t1);
t3=lf[9] /* selected-frame */ =C_SCHEME_FALSE;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1501,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:73: get-environment-variable */
((C_proc3)C_fast_retrieve_symbol_proc(lf[42]))(3,*((C_word*)lf[42]+1),t4,lf[401]);}

/* k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1501,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1504,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_1504(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6488,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:74: get-environment-variable */
((C_proc3)C_fast_retrieve_symbol_proc(lf[42]))(3,*((C_word*)lf[42]+1),t3,lf[400]);}}

/* k6486 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_6488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6488,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_1504(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6497,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:75: get-environment-variable */
((C_proc3)C_fast_retrieve_symbol_proc(lf[42]))(3,*((C_word*)lf[42]+1),t2,lf[399]);}}

/* k6495 in k6486 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_6497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1504(t2,(C_truep(t1)?lf[397]:lf[398]));}

/* k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_1504(C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1504,NULL,2,t0,t1);}
t2=C_mutate(&lf[10] /* (set! default-editor ...) */,t1);
t3=C_mutate((C_word*)lf[11]+1 /* (set! ##csi#print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1506,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[18]+1 /* (set! ##csi#print-banner ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1534,tmp=(C_word)a,a+=2,tmp));
t5=C_fast_retrieve(lf[25]);
t6=C_mutate((C_word*)lf[25]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1550,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[29]+1 /* (set! ##sys#sharp-number-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1579,tmp=(C_word)a,a+=2,tmp));
t8=*((C_word*)lf[30]+1);
t9=C_mutate((C_word*)lf[31]+1 /* (set! ##csi#chop-separator ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1601,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=C_set_block_item(lf[32] /* @ */,0,C_SCHEME_FALSE);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1632,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:190: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[123]+1)))(3,*((C_word*)lf[123]+1),t11,C_fix(256));}

/* k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1632(C_word c,C_word t0,C_word t1){
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
C_word ab[55],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1632,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1651,tmp=(C_word)a,a+=2,tmp);
t3=C_mutate((C_word*)lf[36]+1 /* (set! ##csi#lookup-script-file ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1699,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t4=C_SCHEME_UNDEFINED;
t5=C_a_i_vector(&a,32,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4);
t6=C_mutate((C_word*)lf[44]+1 /* (set! ##csi#history-list ...) */,t5);
t7=C_set_block_item(lf[27] /* history-count */,0,C_fix(1));
t8=C_fast_retrieve(lf[45]);
t9=C_mutate((C_word*)lf[46]+1 /* (set! ##csi#history-add ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1805,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[48]+1 /* (set! ##csi#history-clear ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1844,tmp=(C_word)a,a+=2,tmp));
t11=*((C_word*)lf[24]+1);
t12=C_mutate((C_word*)lf[50]+1 /* (set! ##csi#history-show ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1854,a[2]=t11,tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[28]+1 /* (set! ##csi#history-ref ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1901,tmp=(C_word)a,a+=2,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1926,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t15=*((C_word*)lf[151]+1);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6467,a[2]=t15,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:257: repl-prompt */
((C_proc3)C_fast_retrieve_symbol_proc(lf[396]))(3,*((C_word*)lf[396]+1),t14,t16);}

/* a6466 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_6467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6467,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6475,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:261: ##sys#current-module */
((C_proc2)C_fast_retrieve_symbol_proc(lf[385]))(2,*((C_word*)lf[385]+1),t2);}

/* k6473 in a6466 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_6475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6475,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6478,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6485,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:263: ##sys#module-name */
((C_proc3)C_fast_retrieve_symbol_proc(lf[394]))(3,*((C_word*)lf[394]+1),t3,t1);}
else{
/* csi.scm:260: sprintf */
t3=((C_word*)t0)[3];
((C_proc5)C_fast_retrieve_proc(t3))(5,t3,((C_word*)t0)[2],lf[392],lf[395],C_fast_retrieve(lf[27]));}}

/* k6483 in k6473 in a6466 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_6485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:263: sprintf */
t2=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[393],t1);}

/* k6476 in k6473 in a6466 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_6478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:260: sprintf */
t2=((C_word*)t0)[3];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],lf[392],t1,C_fast_retrieve(lf[27]));}

/* k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1926(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1926,2,t0,t1);}
t2=C_mutate((C_word*)lf[58]+1 /* (set! ##csi#tty-input? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1928,tmp=(C_word)a,a+=2,tmp));
t3=C_set_block_item(lf[61] /* break-on-error */,0,C_SCHEME_FALSE);
t4=C_fast_retrieve(lf[62]);
t5=C_mutate((C_word*)lf[62]+1 /* (set! ##sys#read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1941,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=lf[63] /* command-table */ =C_SCHEME_END_OF_LIST;;
t7=C_mutate((C_word*)lf[64]+1 /* (set! toplevel-command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1954,tmp=(C_word)a,a+=2,tmp));
t8=C_fast_retrieve(lf[65]);
t9=C_fast_retrieve(lf[66]);
t10=*((C_word*)lf[67]+1);
t11=C_fast_retrieve(lf[68]);
t12=*((C_word*)lf[12]+1);
t13=C_fast_retrieve(lf[39]);
t14=*((C_word*)lf[69]+1);
t15=C_fast_retrieve(lf[70]);
t16=C_fast_retrieve(lf[71]);
t17=*((C_word*)lf[72]+1);
t18=C_mutate((C_word*)lf[73]+1 /* (set! ##sys#repl-eval-hook ...) */,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2017,a[2]=t12,a[3]=t14,a[4]=t17,a[5]=t9,a[6]=t11,a[7]=t13,a[8]=t8,a[9]=t10,a[10]=t15,a[11]=t16,tmp=(C_word)a,a+=12,tmp));
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2555,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t20=*((C_word*)lf[69]+1);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6406,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:425: toplevel-command */
t22=C_fast_retrieve(lf[64]);
f_1954(5,t22,t19,lf[390],t21,lf[391]);}

/* a6405 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_6406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6406,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6410,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:429: read */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(2,*((C_word*)lf[67]+1),t2);}

/* k6408 in a6405 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_6410(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6410,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t3)[1];
if(C_truep(t4)){
if(C_truep(C_i_stringp(((C_word*)t3)[1]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6432,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:434: ##sys#string->symbol */
((C_proc3)C_fast_retrieve_symbol_proc(lf[383]))(3,*((C_word*)lf[383]+1),t5,((C_word*)t3)[1]);}
else{
if(C_truep(C_i_symbolp(((C_word*)t3)[1]))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6444,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:437: ##sys#find-module */
((C_proc4)C_fast_retrieve_symbol_proc(lf[387]))(4,*((C_word*)lf[387]+1),t5,((C_word*)t3)[1],C_SCHEME_FALSE);}
else{
/* csi.scm:436: printf */
t5=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,((C_word*)t0)[3],lf[388],((C_word*)t3)[1]);}}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6419,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:431: ##sys#current-module */
((C_proc3)C_fast_retrieve_symbol_proc(lf[385]))(3,*((C_word*)lf[385]+1),t5,C_SCHEME_FALSE);}}

/* k6417 in k6408 in a6405 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_6419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:432: printf */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[389]);}

/* k6442 in k6408 in a6405 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_6444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6444,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6448,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* g330331 */
t3=t2;
f_6448(t3,((C_word*)t0)[2],t1);}
else{
/* csi.scm:442: printf */
t2=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[386],((C_word*)((C_word*)t0)[3])[1]);}}

/* g330 in k6442 in k6408 in a6405 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_6448(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6448,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6452,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:439: ##sys#current-module */
((C_proc3)C_fast_retrieve_symbol_proc(lf[385]))(3,*((C_word*)lf[385]+1),t3,t2);}

/* k6450 in g330 in k6442 in k6408 in a6405 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_6452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:440: printf */
t2=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],lf[384],((C_word*)((C_word*)t0)[2])[1]);}

/* k6430 in k6408 in a6405 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_6432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_2555(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2555,2,t0,t1);}
t2=*((C_word*)lf[69]+1);
t3=C_fast_retrieve(lf[117]);
t4=C_fast_retrieve(lf[118]);
t5=*((C_word*)lf[119]+1);
t6=C_fast_retrieve(lf[120]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2698,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t6,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:472: get-environment-variable */
((C_proc3)C_fast_retrieve_symbol_proc(lf[42]))(3,*((C_word*)lf[42]+1),t7,lf[382]);}

/* k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_2698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2698,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2701,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t1)){
t3=t2;
f_2701(2,t3,t1);}
else{
/* ##sys#peek-c-string */
t3=*((C_word*)lf[381]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_PREFIX),C_fix(0));}}

/* k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_2701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2701,2,t0,t1);}
t2=C_mutate((C_word*)lf[84]+1 /* (set! ##csi#report ...) */,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2702,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp));
t3=C_mutate(&lf[148] /* (set! ##csi#bytevector-data ...) */,lf[149]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3053,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:565: make-vector */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[380]+1)))(4,*((C_word*)lf[380]+1),t4,C_fix(37),C_SCHEME_END_OF_LIST);}

/* k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_3053(C_word c,C_word t0,C_word t1){
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
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3053,2,t0,t1);}
t2=C_mutate(&lf[150] /* (set! describer-table ...) */,t1);
t3=*((C_word*)lf[151]+1);
t4=*((C_word*)lf[69]+1);
t5=C_fast_retrieve(lf[152]);
t6=*((C_word*)lf[153]+1);
t7=*((C_word*)lf[154]+1);
t8=*((C_word*)lf[155]+1);
t9=C_mutate((C_word*)lf[79]+1 /* (set! ##csi#describe ...) */,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3055,a[2]=t3,a[3]=t7,a[4]=t6,a[5]=t4,a[6]=t8,a[7]=t5,tmp=(C_word)a,a+=8,tmp));
t10=C_mutate((C_word*)lf[241]+1 /* (set! set-describer! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4052,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[81]+1 /* (set! ##csi#dump ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4061,tmp=(C_word)a,a+=2,tmp));
t12=*((C_word*)lf[12]+1);
t13=*((C_word*)lf[34]+1);
t14=*((C_word*)lf[123]+1);
t15=*((C_word*)lf[250]+1);
t16=C_mutate((C_word*)lf[216]+1 /* (set! ##csi#hexdump ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4222,a[2]=t12,a[3]=t15,a[4]=t14,a[5]=t13,tmp=(C_word)a,a+=6,tmp));
t17=*((C_word*)lf[24]+1);
t18=*((C_word*)lf[12]+1);
t19=C_mutate(&lf[106] /* (set! show-frameinfo ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4424,a[2]=t18,a[3]=t17,tmp=(C_word)a,a+=4,tmp));
t20=*((C_word*)lf[12]+1);
t21=C_mutate(&lf[108] /* (set! select-frame ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4695,a[2]=t20,tmp=(C_word)a,a+=3,tmp));
t22=*((C_word*)lf[12]+1);
t23=*((C_word*)lf[24]+1);
t24=*((C_word*)lf[262]+1);
t25=C_mutate(&lf[110] /* (set! copy-from-frame ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4752,a[2]=t24,a[3]=t22,a[4]=t23,tmp=(C_word)a,a+=5,tmp));
t26=C_mutate((C_word*)lf[268]+1 /* (set! ##csi#del ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4997,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[269]+1 /* (set! ##csi#deldups ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5035,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate(&lf[271] /* (set! member* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5094,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate(&lf[272] /* (set! canonicalize-args ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5151,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate((C_word*)lf[282]+1 /* (set! ##csi#run ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5333,tmp=(C_word)a,a+=2,tmp));
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6395,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1132: run */
t32=C_fast_retrieve(lf[282]);
f_5333(2,t32,t31);}

/* k6393 in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_6395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6395,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6398,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6401,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[379]))(2,*((C_word*)lf[379]+1),t3);}

/* k6399 in k6393 in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_6401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k6396 in k6393 in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_6398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* f_5333 in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_5333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5337,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6389,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:978: get-environment-variable */
((C_proc3)C_fast_retrieve_symbol_proc(lf[42]))(3,*((C_word*)lf[42]+1),t3,lf[378]);}

/* k6387 */
static void C_ccall f_6389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6389,2,t0,t1);}
t2=(C_truep(t1)?t1:lf[371]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2561,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:449: open-input-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[285]))(3,*((C_word*)lf[285]+1),t3,t2);}

/* k2559 in k6387 */
static void C_ccall f_2561(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2561,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2581,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2627,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[377]+1)))(3,*((C_word*)lf[377]+1),t6,t7);}

/* a2626 in k2559 in k6387 */
static void C_ccall f_2627(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2627,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2633,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2645,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* with-exception-handler */
((C_proc4)C_fast_retrieve_symbol_proc(lf[376]))(4,*((C_word*)lf[376]+1),t1,t3,t4);}

/* a2644 in a2626 in k2559 in k6387 */
static void C_ccall f_2645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2645,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2651,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2684,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a2683 in a2644 in a2626 in k2559 in k6387 */
static void C_ccall f_2684(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_2684r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2684r(t0,t1,t2);}}

static void C_ccall f_2684r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2690,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* k359365 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a2689 in a2683 in a2644 in a2626 in k2559 in k6387 */
static void C_ccall f_2690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2690,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a2650 in a2644 in a2626 in k2559 in k6387 */
static void C_ccall f_2651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2651,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2659,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:457: read */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(3,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2]);}

/* k2657 in a2650 in a2644 in a2626 in k2559 in k6387 */
static void C_ccall f_2659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2659,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2661,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2661(t5,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* doloop367 in k2657 in a2650 in a2644 in a2626 in k2559 in k6387 */
static void C_fcall f_2661(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2661,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eofp(t2))){
/* csi.scm:459: reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[375]+1)))(3,*((C_word*)lf[375]+1),t1,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2678,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:457: read */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(3,*((C_word*)lf[67]+1),t4,((C_word*)t0)[2]);}}

/* k2676 in doloop367 in k2657 in a2650 in a2644 in a2626 in k2559 in k6387 */
static void C_ccall f_2678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2678,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_2661(t3,((C_word*)t0)[2],t1,t2);}

/* a2632 in a2626 in k2559 in k6387 */
static void C_ccall f_2633(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2633,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2639,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* k359365 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a2638 in a2632 in a2626 in k2559 in k6387 */
static void C_ccall f_2639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2639,2,t0,t1);}
/* csi.scm:456: ##sys#error */
t2=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[374],((C_word*)t0)[2]);}

/* k2579 in k2559 in k6387 */
static void C_ccall f_2581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2581,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2584,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* g363364 */
t3=t1;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k2582 in k2579 in k2559 in k6387 */
static void C_ccall f_2584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2584,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[142]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2592,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_2592(t6,((C_word*)t0)[2],t1);}

/* map-loop339 in k2582 in k2579 in k2559 in k6387 */
static void C_fcall f_2592(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2592,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2602,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2621,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(0));
if(C_truep(C_i_stringp(t5))){
t6=t3;
f_2602(t6,C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST));}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2572,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:453: open-output-string */
((C_proc2)C_fast_retrieve_symbol_proc(lf[373]))(2,*((C_word*)lf[373]+1),t6);}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2570 in map-loop339 in k2582 in k2579 in k2559 in k6387 */
static void C_ccall f_2572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2572,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2575,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:454: write */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[180]+1)))(4,*((C_word*)lf[180]+1),t2,((C_word*)t0)[2],t1);}

/* k2573 in k2570 in map-loop339 in k2582 in k2579 in k2559 in k6387 */
static void C_ccall f_2575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:455: get-output-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[372]))(3,*((C_word*)lf[372]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2619 in map-loop339 in k2582 in k2579 in k2559 in k6387 */
static void C_ccall f_2621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2621,2,t0,t1);}
t2=((C_word*)t0)[2];
f_2602(t2,C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}

/* k2600 in map-loop339 in k2582 in k2579 in k2559 in k6387 */
static void C_fcall f_2602(C_word t0,C_word t1){
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
f_2592(t5,((C_word*)t0)[3],t4);}
else{
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_2592(t5,((C_word*)t0)[3],t4);}}

/* k5335 */
static void C_ccall f_5337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5337,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5340,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6385,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:979: command-line-arguments */
((C_proc2)C_fast_retrieve_symbol_proc(lf[309]))(2,*((C_word*)lf[309]+1),t3);}

/* k6383 in k5335 */
static void C_ccall f_6385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:979: canonicalize-args */
f_5151(((C_word*)t0)[2],t1);}

/* k5338 in k5335 */
static void C_ccall f_5340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5340,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:981: member* */
f_5094(t4,lf[370],((C_word*)t3)[1]);}

/* k5341 in k5338 in k5335 */
static void C_ccall f_5343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5343,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5346,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:982: member* */
f_5094(t2,lf[369],((C_word*)((C_word*)t0)[4])[1]);}

/* k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5346(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5346,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5349,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6275,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(t1);
t5=C_i_pairp(t4);
t6=C_i_not(t5);
if(C_truep(t6)){
if(C_truep(t6)){
/* csi.scm:987: ##sys#error */
t7=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t3,lf[367]);}
else{
t7=t3;
f_6275(2,t7,C_SCHEME_UNDEFINED);}}
else{
t7=C_i_cadr(t1);
t8=C_i_string_length(t7);
t9=C_i_zerop(t8);
if(C_truep(t9)){
if(C_truep(t9)){
/* csi.scm:987: ##sys#error */
t10=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t3,lf[367]);}
else{
t10=t3;
f_6275(2,t10,C_SCHEME_UNDEFINED);}}
else{
t10=C_i_cadr(t1);
t11=C_i_string_ref(t10,C_fix(0));
if(C_truep(C_i_char_equalp(C_make_character(45),t11))){
/* csi.scm:987: ##sys#error */
t12=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t3,lf[367]);}
else{
t12=t3;
f_6275(2,t12,C_SCHEME_UNDEFINED);}}}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6368,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6381,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:997: canonicalize-args */
f_5151(t4,((C_word*)t0)[2]);}}

/* k6379 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:997: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[231]+1)))(4,*((C_word*)lf[231]+1),((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k6366 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=C_i_member(lf[368],((C_word*)((C_word*)t0)[3])[1]);
t4=((C_word*)t0)[2];
f_5349(t4,(C_truep(t3)?C_i_set_cdr(t3,C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}

/* k6273 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6275,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6278,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* csi.scm:988: program-name */
((C_proc3)C_fast_retrieve_symbol_proc(lf[366]))(3,*((C_word*)lf[366]+1),t2,t3);}

/* k6276 in k6273 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6278,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6281,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cddr(((C_word*)t0)[3]);
/* csi.scm:989: command-line-arguments */
((C_proc3)C_fast_retrieve_symbol_proc(lf[309]))(3,*((C_word*)lf[309]+1),t2,t3);}

/* k6279 in k6276 in k6273 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6281,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:990: register-feature! */
((C_proc3)C_fast_retrieve_symbol_proc(lf[286]))(3,*((C_word*)lf[286]+1),t2,lf[365]);}

/* k6282 in k6279 in k6276 in k6273 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6284,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:991: register-feature! */
((C_proc3)C_fast_retrieve_symbol_proc(lf[286]))(3,*((C_word*)lf[286]+1),t2,lf[364]);}

/* k6285 in k6282 in k6279 in k6276 in k6273 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6287,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[3]);
t3=C_i_set_cdr(t2,C_SCHEME_END_OF_LIST);
if(C_truep(*((C_word*)lf[363]+1))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_i_cadr(((C_word*)t0)[3]);
/* csi.scm:994: lookup-script-file */
t6=C_fast_retrieve(lf[36]);
f_1699(3,t6,t4,t5);}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
f_5349(t5,t4);}}

/* k6294 in k6285 in k6282 in k6279 in k6276 in k6273 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_5349(t3,C_i_set_car(t2,t1));}
else{
t2=((C_word*)t0)[2];
f_5349(t2,C_SCHEME_FALSE);}}

/* k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_5349(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5349,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1000: member* */
f_5094(t2,lf[362],((C_word*)((C_word*)t0)[5])[1]);}

/* k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5352,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5355,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=t2;
f_5355(t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6269,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1001: member* */
f_5094(t3,lf[361],((C_word*)((C_word*)t0)[5])[1]);}}

/* k6267 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
f_5355(t3,t2);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
f_5355(t3,t2);}}

/* k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_5355(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5355,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1002: member* */
f_5094(t2,lf[360],((C_word*)((C_word*)t0)[6])[1]);}

/* k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5358,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=t2;
f_5361(t3,((C_word*)t0)[5]);}
else{
if(C_truep(t1)){
t3=t1;
t4=t2;
f_5361(t4,t3);}
else{
t3=((C_word*)t0)[3];
t4=t2;
f_5361(t4,t3);}}}

/* k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_5361(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_5361,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fast_retrieve(lf[31]);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5364,a[2]=t6,a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6260,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1006: get-environment-variable */
((C_proc3)C_fast_retrieve_symbol_proc(lf[42]))(3,*((C_word*)lf[42]+1),t8,lf[359]);}

/* k6258 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* csi.scm:1005: string-split */
((C_proc4)C_fast_retrieve_symbol_proc(lf[39]))(4,*((C_word*)lf[39]+1),((C_word*)t0)[2],t2,lf[357]);}
else{
/* csi.scm:1005: string-split */
((C_proc4)C_fast_retrieve_symbol_proc(lf[39]))(4,*((C_word*)lf[39]+1),((C_word*)t0)[2],lf[358],lf[357]);}}

/* k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5364,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[142]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5370,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6223,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6223(t7,t3,t1);}

/* map-loop1119 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_6223(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6223,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6252,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g11251134 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6250 in map-loop1119 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6252(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6252,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6223(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6223(t6,((C_word*)t0)[3],t5);}}

/* k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5370,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5372,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp));
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5457,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5527,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=t5,a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6215,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1029: member* */
f_5094(t9,lf[356],((C_word*)((C_word*)t0)[8])[1]);}

/* k6213 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6215,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6218,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1030: print-usage */
t3=C_fast_retrieve(lf[11]);
f_1506(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
f_5527(2,t2,C_SCHEME_UNDEFINED);}}

/* k6216 in k6213 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1031: exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[74]))(3,*((C_word*)lf[74]+1),((C_word*)t0)[2],C_fix(0));}

/* k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5527,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6206,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1032: member* */
f_5094(t3,lf[355],((C_word*)((C_word*)t0)[7])[1]);}

/* k6204 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6206,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6209,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1033: print-banner */
t3=C_fast_retrieve(lf[18]);
f_1534(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
f_5530(2,t2,C_SCHEME_UNDEFINED);}}

/* k6207 in k6204 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1034: exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[74]))(3,*((C_word*)lf[74]+1),((C_word*)t0)[2],C_fix(0));}

/* k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5530,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5533,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[353],((C_word*)((C_word*)t0)[7])[1]))){
t3=C_set_block_item(lf[354] /* setup-mode */,0,C_SCHEME_TRUE);
t4=t2;
f_5533(t4,t3);}
else{
t3=t2;
f_5533(t3,C_SCHEME_UNDEFINED);}}

/* k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_5533(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5533,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5536,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[352],((C_word*)((C_word*)t0)[7])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6192,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6199,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1038: chicken-version */
((C_proc2)C_fast_retrieve_symbol_proc(lf[22]))(2,*((C_word*)lf[22]+1),t4);}
else{
t3=t2;
f_5536(2,t3,C_SCHEME_UNDEFINED);}}

/* k6197 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1038: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),((C_word*)t0)[2],t1);}

/* k6190 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1039: exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[74]))(3,*((C_word*)lf[74]+1),((C_word*)t0)[2],C_fix(0));}

/* k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5536,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5539,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6179,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1040: member* */
f_5094(t3,lf[351],((C_word*)((C_word*)t0)[7])[1]);}

/* k6177 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6179,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6182,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_set_block_item(lf[349] /* warnings-enabled */,0,C_SCHEME_FALSE);
t4=((C_word*)t0)[3];
f_5539(t4,t3);}
else{
/* csi.scm:1041: display */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t2,lf[350]);}}
else{
t2=((C_word*)t0)[3];
f_5539(t2,C_SCHEME_UNDEFINED);}}

/* k6180 in k6177 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[349] /* warnings-enabled */,0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
f_5539(t3,t2);}

/* k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_5539(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5539,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=t2;
f_5542(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6173,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1044: load-verbose */
((C_proc3)C_fast_retrieve_symbol_proc(lf[348]))(3,*((C_word*)lf[348]+1),t3,C_SCHEME_TRUE);}}

/* k6171 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1045: print-banner */
t2=C_fast_retrieve(lf[18]);
f_1534(2,t2,((C_word*)t0)[2]);}

/* k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5542,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6158,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1046: member* */
f_5094(t3,lf[347],((C_word*)((C_word*)t0)[7])[1]);}

/* k6156 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6158,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6161,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7195,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1048: register-feature! */
((C_proc3)C_fast_retrieve_symbol_proc(lf[286]))(3,*((C_word*)lf[286]+1),t3,lf[345]);}
else{
/* csi.scm:1047: display */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t2,lf[346]);}}
else{
t2=((C_word*)t0)[3];
f_5545(2,t2,C_SCHEME_UNDEFINED);}}

/* f7195 in k6156 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f7195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1049: case-sensitive */
((C_proc3)C_fast_retrieve_symbol_proc(lf[326]))(3,*((C_word*)lf[326]+1),((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k6159 in k6156 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6161,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6164,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1048: register-feature! */
((C_proc3)C_fast_retrieve_symbol_proc(lf[286]))(3,*((C_word*)lf[286]+1),t2,lf[345]);}

/* k6162 in k6159 in k6156 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1049: case-sensitive */
((C_proc3)C_fast_retrieve_symbol_proc(lf[326]))(3,*((C_word*)lf[326]+1),((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5545,2,t0,t1);}
t2=C_fast_retrieve(lf[286]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5548,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1050: collect-options */
t4=((C_word*)((C_word*)t0)[2])[1];
f_5372(t4,t3,lf[344]);}

/* k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5548,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[88]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5554,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6134,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6134(t7,t3,t1);}

/* for-each-loop1196 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_6134(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6134,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6144,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g11971203 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6142 in for-each-loop1196 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6134(t3,((C_word*)t0)[2],t2);}

/* k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5554,2,t0,t1);}
t2=C_fast_retrieve(lf[286]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5557,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1051: collect-options */
t4=((C_word*)((C_word*)t0)[2])[1];
f_5372(t4,t3,lf[343]);}

/* k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5557,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[88]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5563,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6111,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6111(t7,t3,t1);}

/* for-each-loop1212 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_6111(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6111,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6121,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g12131219 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6119 in for-each-loop1212 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6111(t3,((C_word*)t0)[2],t2);}

/* k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5563,2,t0,t1);}
t2=C_fast_retrieve(lf[287]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5566,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1052: collect-options */
t4=((C_word*)((C_word*)t0)[2])[1];
f_5372(t4,t3,lf[342]);}

/* k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5566,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[88]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5572,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6088,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6088(t7,t3,t1);}

/* for-each-loop1228 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_6088(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6088,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6098,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g12291235 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6096 in for-each-loop1228 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6088(t3,((C_word*)t0)[2],t2);}

/* k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5572(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5572,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5576,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5996,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fast_retrieve(lf[31]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6000,a[2]=t8,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1055: collect-options */
t10=((C_word*)((C_word*)t0)[2])[1];
f_5372(t10,t9,lf[341]);}

/* k5998 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6000,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[142]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6006,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6053,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6053(t7,t3,t1);}

/* map-loop1244 in k5998 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_6053(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6053,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6082,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g12501259 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6080 in map-loop1244 in k5998 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6082(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6082,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6053(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6053(t6,((C_word*)t0)[3],t5);}}

/* k6004 in k5998 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6006,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fast_retrieve(lf[31]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6010,a[2]=t6,a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1056: collect-options */
t8=((C_word*)((C_word*)t0)[2])[1];
f_5372(t8,t7,lf[340]);}

/* k6008 in k6004 in k5998 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6010,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[142]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6016,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6018,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6018(t7,t3,t1);}

/* map-loop1270 in k6008 in k6004 in k5998 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_6018(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6018,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6047,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g12761285 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6045 in map-loop1270 in k6008 in k6004 in k5998 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6047(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6047,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6018(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6018(t6,((C_word*)t0)[3],t5);}}

/* k6014 in k6008 in k6004 in k5998 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_6016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1055: append */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[231]+1)))(6,*((C_word*)lf[231]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,C_fast_retrieve(lf[135]),((C_word*)t0)[2]);}

/* k5994 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1054: deldups */
t2=C_fast_retrieve(lf[269]);
f_5035(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[339]+1));}

/* k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5576(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5576,2,t0,t1);}
t2=C_mutate((C_word*)lf[135]+1 /* (set! ##sys#include-pathnames ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5579,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_string_equal_p(lf[333],t5))){
/* csi.scm:1064: keyword-style */
((C_proc3)C_fast_retrieve_symbol_proc(lf[324]))(3,*((C_word*)lf[324]+1),t3,lf[334]);}
else{
t6=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_string_equal_p(lf[335],t6))){
/* csi.scm:1066: keyword-style */
((C_proc3)C_fast_retrieve_symbol_proc(lf[324]))(3,*((C_word*)lf[324]+1),t3,lf[325]);}
else{
t7=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_string_equal_p(lf[336],t7))){
/* csi.scm:1068: keyword-style */
((C_proc3)C_fast_retrieve_symbol_proc(lf[324]))(3,*((C_word*)lf[324]+1),t3,lf[337]);}
else{
t8=t3;
f_5579(2,t8,C_SCHEME_UNDEFINED);}}}}
else{
/* csi.scm:1062: ##sys#error */
t5=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,lf[338]);}}
else{
t4=t3;
f_5579(2,t4,C_SCHEME_UNDEFINED);}}

/* k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5579,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5582,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5927,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1069: member* */
f_5094(t3,lf[332],((C_word*)((C_word*)t0)[4])[1]);}

/* k5925 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5927,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5930,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
/* csi.scm:1071: parentheses-synonyms */
((C_proc3)C_fast_retrieve_symbol_proc(lf[323]))(3,*((C_word*)lf[323]+1),((C_word*)t0)[3],C_SCHEME_FALSE);}
else{
/* csi.scm:1070: display */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t2,lf[331]);}}
else{
t2=((C_word*)t0)[3];
f_5582(2,t2,C_SCHEME_UNDEFINED);}}

/* k5928 in k5925 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1071: parentheses-synonyms */
((C_proc3)C_fast_retrieve_symbol_proc(lf[323]))(3,*((C_word*)lf[323]+1),((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5582,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5915,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1072: member* */
f_5094(t3,lf[330],((C_word*)((C_word*)t0)[4])[1]);}

/* k5913 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5915,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5918,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
/* csi.scm:1074: symbol-escape */
((C_proc3)C_fast_retrieve_symbol_proc(lf[322]))(3,*((C_word*)lf[322]+1),((C_word*)t0)[3],C_SCHEME_FALSE);}
else{
/* csi.scm:1073: display */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t2,lf[329]);}}
else{
t2=((C_word*)t0)[3];
f_5585(2,t2,C_SCHEME_UNDEFINED);}}

/* k5916 in k5913 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1074: symbol-escape */
((C_proc3)C_fast_retrieve_symbol_proc(lf[322]))(3,*((C_word*)lf[322]+1),((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5585,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5588,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5894,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1075: member* */
f_5094(t3,lf[328],((C_word*)((C_word*)t0)[4])[1]);}

/* k5892 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5894,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5897,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_5897(2,t3,C_SCHEME_UNDEFINED);}
else{
/* csi.scm:1076: display */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t2,lf[327]);}}
else{
t2=((C_word*)t0)[3];
f_5588(2,t2,C_SCHEME_UNDEFINED);}}

/* k5895 in k5892 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5900,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1077: case-sensitive */
((C_proc3)C_fast_retrieve_symbol_proc(lf[326]))(3,*((C_word*)lf[326]+1),t2,C_SCHEME_FALSE);}

/* k5898 in k5895 in k5892 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5900,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5903,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1078: keyword-style */
((C_proc3)C_fast_retrieve_symbol_proc(lf[324]))(3,*((C_word*)lf[324]+1),t2,lf[325]);}

/* k5901 in k5898 in k5895 in k5892 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5903,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5906,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1079: parentheses-synonyms */
((C_proc3)C_fast_retrieve_symbol_proc(lf[323]))(3,*((C_word*)lf[323]+1),t2,C_SCHEME_FALSE);}

/* k5904 in k5901 in k5898 in k5895 in k5892 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1080: symbol-escape */
((C_proc3)C_fast_retrieve_symbol_proc(lf[322]))(3,*((C_word*)lf[322]+1),((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5588,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5591,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1081: member* */
f_5094(t3,lf[321],((C_word*)((C_word*)t0)[3])[1]);}

/* k5880 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5882,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5885,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_5885(t3,t1);}
else{
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[3];
t4=t2;
f_5885(t4,t3);}
else{
t3=((C_word*)t0)[2];
t4=t2;
f_5885(t4,t3);}}}

/* k5883 in k5880 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_5885(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5885,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5591(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5424,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1017: ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[265]))(4,*((C_word*)lf[265]+1),t2,lf[320],lf[2]);}}

/* k5422 in k5883 in k5880 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5424,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5430,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1018: file-exists? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[33]))(3,*((C_word*)lf[33]+1),t2,t1);}

/* k5428 in k5422 in k5883 in k5880 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5430,2,t0,t1);}
if(C_truep(t1)){
/* csi.scm:1019: load */
((C_proc3)C_fast_retrieve_symbol_proc(lf[87]))(3,*((C_word*)lf[87]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5436,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5452,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1020: get-environment-variable */
((C_proc3)C_fast_retrieve_symbol_proc(lf[42]))(3,*((C_word*)lf[42]+1),t3,lf[319]);}}

/* k5450 in k5428 in k5422 in k5883 in k5880 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* csi.scm:1020: chop-separator */
t3=C_fast_retrieve(lf[31]);
f_1601(3,t3,((C_word*)t0)[2],t2);}
else{
/* csi.scm:1020: chop-separator */
t2=C_fast_retrieve(lf[31]);
f_1601(3,t2,((C_word*)t0)[2],lf[318]);}}

/* k5434 in k5428 in k5422 in k5883 in k5880 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5439,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1021: string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(5,*((C_word*)lf[34]+1),t2,t1,lf[317],lf[2]);}

/* k5437 in k5434 in k5428 in k5422 in k5883 in k5880 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5445,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1022: file-exists? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[33]))(3,*((C_word*)lf[33]+1),t2,t1);}

/* k5443 in k5437 in k5434 in k5428 in k5422 in k5883 in k5880 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* csi.scm:1023: load */
((C_proc3)C_fast_retrieve_symbol_proc(lf[87]))(3,*((C_word*)lf[87]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_5591(2,t2,C_SCHEME_UNDEFINED);}}

/* k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5591,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=C_set_block_item(lf[7] /* notices-enabled */,0,C_SCHEME_FALSE);
t4=t2;
f_5594(t4,t3);}
else{
t3=t2;
f_5594(t3,C_SCHEME_UNDEFINED);}}

/* k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_5594(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5594,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5599,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5599(t5,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* doloop1309 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_5599(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(17);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5599,NULL,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_nullp(((C_word*)t3)[1]))){
if(C_truep(((C_word*)t0)[5])){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5612,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1087: repl */
((C_proc2)C_fast_retrieve_symbol_proc(lf[288]))(2,*((C_word*)lf[288]+1),t4);}}
else{
t4=C_i_car(((C_word*)t3)[1]);
t5=C_i_member(t4,lf[289]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5624,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=C_i_cdr(((C_word*)t3)[1]);
t35=t1;
t36=t7;
t1=t35;
t2=t36;
goto loop;}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[290]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[291]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[292]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[293]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[294]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[295]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[296]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))))){
t7=C_i_cdr(((C_word*)t3)[1]);
t8=C_set_block_item(t3,0,t7);
t9=C_i_cdr(((C_word*)t3)[1]);
t35=t1;
t36=t9;
t1=t35;
t2=t36;
goto loop;}
else{
t7=C_i_string_equal_p(lf[297],t4);
t8=(C_truep(t7)?t7:C_i_string_equal_p(lf[298],t4));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5653,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5669,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=C_i_cadr(((C_word*)t3)[1]);
/* csi.scm:1094: string->symbol */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[300]+1)))(3,*((C_word*)lf[300]+1),t10,t11);}
else{
t9=C_i_string_equal_p(lf[301],t4);
t10=(C_truep(t9)?t9:C_i_string_equal_p(lf[302],t4));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5685,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t12=C_i_cadr(((C_word*)t3)[1]);
/* csi.scm:1097: evalstring */
f_5457(t11,t12,C_SCHEME_END_OF_LIST);}
else{
t11=C_i_string_equal_p(lf[303],t4);
t12=(C_truep(t11)?t11:C_i_string_equal_p(lf[304],t4));
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5705,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t14=C_i_cadr(((C_word*)t3)[1]);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5715,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1100: evalstring */
f_5457(t13,t14,C_a_i_list(&a,1,t15));}
else{
t13=C_i_string_equal_p(lf[305],t4);
t14=(C_truep(t13)?t13:C_i_string_equal_p(lf[306],t4));
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5731,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t16=C_i_cadr(((C_word*)t3)[1]);
t17=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5741,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1103: evalstring */
f_5457(t15,t16,C_a_i_list(&a,1,t17));}
else{
t15=(C_truep(((C_word*)t0)[2])?C_i_car(((C_word*)t0)[2]):C_SCHEME_FALSE);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5751,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t6,a[6]=t15,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_equalp(lf[310],t15))){
t17=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5804,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1107: ##sys#load */
((C_proc5)C_fast_retrieve_symbol_proc(lf[316]))(5,*((C_word*)lf[316]+1),t16,t4,t17,C_SCHEME_FALSE);}
else{
/* csi.scm:1107: ##sys#load */
((C_proc5)C_fast_retrieve_symbol_proc(lf[316]))(5,*((C_word*)lf[316]+1),t16,t4,C_SCHEME_FALSE,C_SCHEME_FALSE);}}}}}}}}}

/* f_5804 in doloop1309 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5804(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5804,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5808,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5859,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1111: with-output-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[315]))(3,*((C_word*)lf[315]+1),t3,t4);}

/* a5858 */
static void C_ccall f_5859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5859,2,t0,t1);}
t2=C_fast_retrieve(lf[71]);
/* g13591360 */
t3=t2;
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t1,((C_word*)t0)[2]);}

/* k5806 */
static void C_ccall f_5808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5808,2,t0,t1);}
t2=C_i_string_length(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5814,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1113: flush-output */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[314]+1)))(3,*((C_word*)lf[314]+1),t3,*((C_word*)lf[51]+1));}

/* k5812 in k5806 */
static void C_ccall f_5814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5814,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1114: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t2,lf[313],*((C_word*)lf[311]+1));}

/* k5815 in k5812 in k5806 */
static void C_ccall f_5817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5817,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5820,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5828,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5828(t6,t2,C_fix(0));}

/* doloop1362 in k5815 in k5812 in k5806 */
static void C_fcall f_5828(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5828,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5841,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t5=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,*((C_word*)lf[311]+1));}}

/* k5839 in doloop1362 in k5815 in k5812 in k5806 */
static void C_ccall f_5841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5841,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5844,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_char_equalp(C_make_character(10),((C_word*)t0)[2]))){
/* csi.scm:1120: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t2,lf[312],*((C_word*)lf[311]+1));}
else{
t3=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_5828(t4,((C_word*)t0)[3],t3);}}

/* k5842 in k5839 in doloop1362 in k5815 in k5812 in k5806 */
static void C_ccall f_5844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5828(t3,((C_word*)t0)[2],t2);}

/* k5818 in k5815 in k5812 in k5806 */
static void C_ccall f_5820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5820,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5823,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1121: newline */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(3,*((C_word*)lf[24]+1),t2,*((C_word*)lf[311]+1));}

/* k5821 in k5818 in k5815 in k5812 in k5806 */
static void C_ccall f_5823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1122: eval */
((C_proc3)C_fast_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5749 in doloop1309 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5751,2,t0,t1);}
if(C_truep(C_i_equalp(lf[307],((C_word*)t0)[6]))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5762,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5772,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1125: call-with-values */
C_call_with_values(4,0,((C_word*)t0)[5],t2,t3);}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_5599(t3,((C_word*)t0)[2],t2);}}

/* a5771 in k5749 in doloop1309 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5772(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_5772r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5772r(t0,t1,t2);}}

static void C_ccall f_5772r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
if(C_truep(C_i_pairp(t2))){
t3=C_i_car(t2);
if(C_truep(C_fixnump(t3))){
t4=C_i_car(t2);
/* csi.scm:1127: exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[74]))(3,*((C_word*)lf[74]+1),t1,t4);}
else{
/* csi.scm:1127: exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[74]))(3,*((C_word*)lf[74]+1),t1,C_fix(0));}}
else{
/* csi.scm:1127: exit */
((C_proc3)C_fast_retrieve_symbol_proc(lf[74]))(3,*((C_word*)lf[74]+1),t1,C_fix(0));}}

/* a5761 in k5749 in doloop1309 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5762,2,t0,t1);}
t2=C_fast_retrieve(lf[308]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5770,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1125: command-line-arguments */
((C_proc2)C_fast_retrieve_symbol_proc(lf[309]))(2,*((C_word*)lf[309]+1),t3);}

/* k5768 in a5761 in k5749 in doloop1309 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g13761377 */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* a5740 in doloop1309 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5741(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_5741r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5741r(t0,t1,t2);}}

static void C_ccall f_5741r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_apply(5,0,t1,*((C_word*)lf[88]+1),C_fast_retrieve(lf[71]),t2);}

/* k5729 in doloop1309 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5599(t5,((C_word*)t0)[2],t4);}

/* a5714 in doloop1309 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5715(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_5715r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5715r(t0,t1,t2);}}

static void C_ccall f_5715r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_apply(5,0,t1,*((C_word*)lf[88]+1),*((C_word*)lf[19]+1),t2);}

/* k5703 in doloop1309 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5599(t5,((C_word*)t0)[2],t4);}

/* k5683 in doloop1309 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5599(t5,((C_word*)t0)[2],t4);}

/* k5667 in doloop1309 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5669,2,t0,t1);}
t2=C_a_i_list(&a,1,t1);
t3=C_a_i_list(&a,3,lf[299],t2,C_SCHEME_TRUE);
/* csi.scm:1094: eval */
((C_proc3)C_fast_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),((C_word*)t0)[2],t3);}

/* k5651 in doloop1309 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5599(t5,((C_word*)t0)[2],t4);}

/* k5622 in doloop1309 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_5599(t3,((C_word*)t0)[2],t2);}

/* k5610 in doloop1309 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5570 in k5564 in k5561 in k5555 in k5552 in k5546 in k5543 in k5540 in k5537 in k5534 in k5531 in k5528 in k5525 in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1088: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[127]))(4,*((C_word*)lf[127]+1),((C_word*)t0)[2],C_make_character(10),*((C_word*)lf[51]+1));}

/* evalstring in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_5457(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5457,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5461,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_5461(2,t5,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5504,tmp=(C_word)a,a+=2,tmp));}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_5461(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* f_5504 in evalstring in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5504(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5504,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k5459 in evalstring in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5461,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5464,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1025: open-input-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[285]))(3,*((C_word*)lf[285]+1),t2,((C_word*)t0)[2]);}

/* k5462 in k5459 in evalstring in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5464,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1026: read */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(3,*((C_word*)lf[67]+1),t2,t1);}

/* k5469 in k5462 in k5459 in evalstring in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5471,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5473,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5473(t5,((C_word*)t0)[2],t1);}

/* doloop1182 in k5469 in k5462 in k5459 in evalstring in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_5473(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5473,NULL,3,t0,t1,t2);}
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5483,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5494,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5496,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t4,t5,*((C_word*)lf[284]+1));}}

/* a5495 in doloop1182 in k5469 in k5462 in k5459 in evalstring in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5496,2,t0,t1);}
/* csi.scm:1028: eval */
((C_proc3)C_fast_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),t1,((C_word*)t0)[2]);}

/* k5492 in doloop1182 in k5469 in k5462 in k5459 in evalstring in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1028: rec */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k5481 in doloop1182 in k5469 in k5462 in k5459 in evalstring in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5490,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1026: read */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(3,*((C_word*)lf[67]+1),t2,((C_word*)t0)[2]);}

/* k5488 in k5481 in doloop1182 in k5469 in k5462 in k5459 in evalstring in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
f_5473(t2,((C_word*)t0)[2],t1);}

/* collect-options in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_5372(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5372,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5378,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5378(t6,t1,((C_word*)((C_word*)t0)[2])[1]);}

/* loop in collect-options in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_5378(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5378,NULL,3,t0,t1,t2);}
t3=C_i_member(((C_word*)t0)[3],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* g11571158 */
t5=t4;
f_5386(t5,t1,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}}

/* g1157 in loop in collect-options in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_fcall f_5386(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5386,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* csi.scm:1013: ##sys#error */
t4=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,lf[283],((C_word*)t0)[3]);}
else{
t4=C_i_cadr(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5407,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cddr(t2);
/* csi.scm:1014: loop */
t7=((C_word*)((C_word*)t0)[2])[1];
f_5378(t7,t5,t6);}}

/* k5405 in g1157 in loop in collect-options in k5368 in k5362 in k5359 in k5356 in k5353 in k5350 in k5347 in k5344 in k5341 in k5338 in k5335 */
static void C_ccall f_5407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5407,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* canonicalize-args in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_5151(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5151,NULL,2,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5157,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_5157(t6,t1,t2);}

/* loop in canonicalize-args in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_5157(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5157,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
if(C_truep((C_truep(C_i_equalp(t3,lf[273]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[274]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[275]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[276]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[277]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5179,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_block_size(t3);
if(C_truep(C_fixnum_greaterp(t5,C_fix(2)))){
if(C_truep(C_i_char_equalp(C_make_character(45),C_subchar(t3,C_fix(0))))){
t6=C_i_member(t3,lf[281]);
t7=t4;
f_5179(t7,C_i_not(t6));}
else{
t6=t4;
f_5179(t6,C_SCHEME_FALSE);}}
else{
t6=t4;
f_5179(t6,C_SCHEME_FALSE);}}}}

/* k5177 in loop in canonicalize-args in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_5179(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5179,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_char_equalp(C_make_character(58),C_subchar(((C_word*)t0)[5],C_fix(1))))){
t2=C_i_cdr(((C_word*)t0)[4]);
/* csi.scm:954: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5157(t3,((C_word*)t0)[2],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5195,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5266,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:955: substring */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[30]+1)))(4,*((C_word*)lf[30]+1),t3,((C_word*)t0)[5],C_fix(1));}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5273,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[4]);
/* csi.scm:959: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5157(t4,t2,t3);}}

/* k5271 in k5177 in loop in canonicalize-args in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_5273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5273,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k5264 in k5177 in loop in canonicalize-args in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_5266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=C_fast_retrieve(lf[280]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5193 in k5177 in loop in canonicalize-args in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_5195(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5195,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5305,tmp=(C_word)a,a+=2,tmp);
t4=f_5305(t2);
if(C_truep(t4)){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_i_check_list_2(t1,lf[142]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5216,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5226,a[2]=t6,a[3]=t12,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_5226(t14,t10,t1);}
else{
/* csi.scm:958: ##sys#error */
t5=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[5],lf[279],((C_word*)t0)[2]);}}

/* map-loop1014 in k5193 in k5177 in loop in canonicalize-args in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_5226(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5226,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5255,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[278]+1);
/* g10371038 */
t6=t5;
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t3,C_make_character(45),t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5253 in map-loop1014 in k5193 in k5177 in loop in canonicalize-args in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_5255(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5255,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5226(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5226(t6,((C_word*)t0)[3],t5);}}

/* k5214 in k5193 in k5177 in loop in canonicalize-args in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_5216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5216,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5220,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* csi.scm:957: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_5157(t4,t2,t3);}

/* k5218 in k5214 in k5193 in k5177 in loop in canonicalize-args in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_5220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:957: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[231]+1)))(4,*((C_word*)lf[231]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k5193 in k5177 in loop in canonicalize-args in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static C_word C_fcall f_5305(C_word t1){
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
if(C_truep((C_truep(C_eqp(t3,C_make_character(107)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(115)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(118)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(104)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(68)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(101)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(105)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(82)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(98)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(110)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(113)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(119)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(45)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(73)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(112)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(80)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))))))))))))){
t4=C_i_cdr(t1);
t6=t4;
t1=t6;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* member* in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_5094(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5094,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5100,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5100(t7,t1,t3);}

/* loop in member* in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_5100(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5100,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5112,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5112(t6,t1,((C_word*)t0)[2]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* find in loop in member* in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_5112(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5112,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[4]);
/* csi.scm:930: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5100(t4,t1,t3);}
else{
t3=C_i_car(t2);
t4=C_i_car(((C_word*)t0)[4]);
if(C_truep(C_i_equalp(t3,t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[4]);}
else{
t5=C_i_cdr(t2);
/* csi.scm:932: find */
t8=t1;
t9=t5;
t1=t8;
t2=t9;
goto loop;}}}

/* f_5035 in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_5035(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5035r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5035r(t0,t1,t2,t3);}}

static void C_ccall f_5035r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5039,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_5039(2,t5,*((C_word*)lf[270]+1));}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_5039(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k5037 */
static void C_ccall f_5039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5039,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5044,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5044(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* recur in k5037 */
static void C_fcall f_5044(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5044,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_car(t2);
t4=C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5060,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5073,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:923: del */
t7=C_fast_retrieve(lf[268]);
f_4997(5,t7,t6,t3,t4,((C_word*)t0)[2]);}}

/* k5071 in recur in k5037 */
static void C_ccall f_5073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:923: recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5044(t2,((C_word*)t0)[2],t1);}

/* k5058 in recur in k5037 */
static void C_ccall f_5060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5060,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[5],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?((C_word*)t0)[3]:C_a_i_cons(&a,2,((C_word*)t0)[2],t1)));}

/* f_4997 in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4997,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5003,a[2]=t2,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5003(t8,t1,t3);}

/* loop */
static void C_fcall f_5003(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5003,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5019,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:913: tst */
t5=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[2],t3);}}

/* k5017 in loop */
static void C_ccall f_5019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5019,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_cdr(((C_word*)t0)[4]));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5029,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[4]);
/* csi.scm:915: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_5003(t4,t2,t3);}}

/* k5027 in k5017 in loop */
static void C_ccall f_5029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5029,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4752(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4752,NULL,3,t0,t1,t2);}
t3=C_fast_retrieve(lf[252]);
t4=(C_truep(t3)?t3:C_SCHEME_END_OF_LIST);
t5=C_i_length(t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4762,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(t2))){
t7=t6;
f_4762(t7,C_slot(t2,C_fix(1)));}
else{
if(C_truep(C_i_stringp(t2))){
t7=t2;
t8=t6;
f_4762(t8,t7);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4995,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:867: display */
t8=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t8))(3,t8,t7,lf[267]);}}}

/* k4993 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4762(t2,C_SCHEME_FALSE);}

/* k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4762(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4762,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4764,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4795,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:875: call/cc */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,((C_word*)t0)[2],t3);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,*((C_word*)lf[47]+1));}}

/* a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4795(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4795,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4798,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4817,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t5,a[8]=t3,tmp=(C_word)a,a+=9,tmp));
t7=((C_word*)t5)[1];
f_4817(t7,t1,((C_word*)t0)[2]);}

/* doloop902 in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4817(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(22);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4817,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* csi.scm:882: fail */
t3=((C_word*)t0)[8];
f_4798(t3,t1,lf[263]);}
else{
t3=C_i_car(t2);
t4=C_eqp(C_retrieve2(lf[9],"selected-frame"),t3);
t5=C_slot(t3,C_fix(2));
t6=C_i_structurep(t5,lf[253]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4842,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=(C_truep(t4)?t6:C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4853,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t10=C_slot(t5,C_fix(2));
t11=C_slot(t5,C_fix(3));
t12=C_i_check_list_2(t10,lf[88]);
t13=C_i_check_list_2(t11,lf[88]);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4933,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4942,a[2]=t9,a[3]=t16,tmp=(C_word)a,a+=4,tmp));
t18=((C_word*)t16)[1];
f_4942(t18,t14,t10,t11);}
else{
t9=C_i_cdr(t2);
t20=t1;
t21=t9;
t1=t20;
t2=t21;
goto loop;}}}

/* for-each-loop916 in doloop902 in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4942(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4942,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4952,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g917924 */
t9=((C_word*)t0)[2];
f_4853(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4950 in for-each-loop916 in doloop902 in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4942(t4,((C_word*)t0)[2],t2,t3);}

/* k4931 in doloop902 in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4933,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4940,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:902: ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[265]))(4,*((C_word*)lf[265]+1),t2,lf[266],((C_word*)t0)[2]);}

/* k4938 in k4931 in doloop902 in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:902: fail */
t2=((C_word*)t0)[3];
f_4798(t2,((C_word*)t0)[2],t1);}

/* g917 in doloop902 in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4853(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4853,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t5,tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_4859(t7,t1,C_fix(0),t2);}

/* doloop929 in g917 in doloop902 in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4859(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4859,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4869,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4883,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=t4,a[8]=((C_word*)t0)[5],a[9]=t2,a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
t6=C_i_car(t3);
/* csi.scm:894: compare */
t7=((C_word*)t0)[2];
f_4764(t7,t5,t6);}}

/* k4881 in doloop929 in g917 in doloop902 in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4883,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4886,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* csi.scm:895: display */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[264]);}
else{
t2=C_fixnum_plus(((C_word*)t0)[9],C_fix(1));
t3=C_i_cdr(((C_word*)t0)[5]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_4859(t4,((C_word*)t0)[2],t2,t3);}}

/* k4884 in k4881 in doloop929 in g917 in doloop902 in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4886,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4889,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* csi.scm:896: display */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t2,t3);}

/* k4887 in k4884 in k4881 in doloop929 in g917 in doloop902 in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4889,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4892,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:897: newline */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k4890 in k4887 in k4884 in k4881 in doloop929 in g917 in doloop902 in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4892,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=C_a_i_list1(&a,1,t3);
/* csi.scm:898: history-add */
t5=C_fast_retrieve(lf[46]);
f_1805(3,t5,t2,t4);}

/* k4893 in k4890 in k4887 in k4884 in k4881 in doloop929 in g917 in doloop902 in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[5],((C_word*)t0)[4]);
/* csi.scm:899: return */
t3=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],t2);}

/* k4867 in doloop929 in g917 in doloop902 in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=C_i_cdr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_4859(t4,((C_word*)t0)[2],t2,t3);}

/* k4840 in doloop902 in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_4817(t3,((C_word*)t0)[2],t2);}

/* fail in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4798(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4798,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4802,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:878: display */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,t2);}

/* k4800 in fail in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4802,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4805,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:879: newline */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k4803 in k4800 in fail in a4794 in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=*((C_word*)lf[47]+1);
/* csi.scm:880: return */
t3=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],t2);}

/* compare in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4764(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4764,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4775,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4779,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_string_length(((C_word*)t0)[2]);
t7=C_i_string_length(t3);
/* csi.scm:873: min */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[245]+1)))(4,*((C_word*)lf[245]+1),t5,t6,t7);}

/* k4777 in compare in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:873: substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[30]+1)))(5,*((C_word*)lf[30]+1),((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t1);}

/* k4773 in compare in k4760 in copy-from-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_string_equal_p(((C_word*)t0)[2],t1));}

/* select-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4695(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4695,NULL,3,t0,t1,t2);}
t3=C_i_numberp(t2);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4705,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_4705(t6,t4);}
else{
t6=C_i_not(C_fast_retrieve(lf[252]));
if(C_truep(t6)){
t7=t5;
f_4705(t7,t6);}
else{
t7=C_fixnum_lessp(t2,C_fix(0));
if(C_truep(t7)){
t8=t5;
f_4705(t8,t7);}
else{
t8=C_i_length(C_fast_retrieve(lf[252]));
t9=t5;
f_4705(t9,C_fixnum_greater_or_equal_p(t2,t8));}}}}

/* k4703 in select-frame in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4705(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
/* csi.scm:848: display */
t2=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],lf[261]);}
else{
t2=C_i_length(C_fast_retrieve(lf[252]));
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_fixnum_difference(t2,t3);
t5=C_i_list_ref(C_fast_retrieve(lf[252]),t4);
t6=C_mutate(&lf[9] /* (set! selected-frame ...) */,t5);
/* csi.scm:854: show-frameinfo */
t7=C_retrieve2(lf[106],"show-frameinfo");
f_4424(t7,((C_word*)t0)[3],C_retrieve2(lf[9],"selected-frame"));}}

/* show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4424(C_word t0,C_word t1,C_word t2){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4424,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4427,tmp=(C_word)a,a+=2,tmp);
t4=C_fast_retrieve(lf[252]);
t5=(C_truep(t4)?t4:C_SCHEME_END_OF_LIST);
t6=C_i_length(t5);
t7=C_i_memq(t2,t5);
t8=(C_truep(t7)?t2:C_SCHEME_FALSE);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4450,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t6,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t8)){
t10=t9;
f_4450(t10,t8);}
else{
if(C_truep(C_fixnum_greaterp(t6,C_fix(0)))){
t10=C_fixnum_difference(t6,C_fix(1));
t11=t9;
f_4450(t11,C_i_list_ref(t5,t10));}
else{
t10=t9;
f_4450(t10,C_SCHEME_FALSE);}}}

/* k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4450(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4450,NULL,2,t0,t1);}
t2=C_mutate(&lf[9] /* (set! selected-frame ...) */,t1);
t3=C_fixnum_difference(((C_word*)t0)[7],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4459,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4459(t7,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4459(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4459,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=C_eqp(C_retrieve2(lf[9],"selected-frame"),t4);
t6=C_slot(t4,C_fix(1));
t7=C_slot(t4,C_fix(2));
t8=C_i_structurep(t7,lf[253]);
t9=(C_truep(t8)?C_slot(t7,C_fix(1)):t7);
t10=*((C_word*)lf[51]+1);
t11=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4487,a[2]=t4,a[3]=t10,a[4]=t9,a[5]=t6,a[6]=t7,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=t8,a[11]=t5,a[12]=t1,a[13]=((C_word*)t0)[5],a[14]=t3,a[15]=t2,tmp=(C_word)a,a+=16,tmp);
if(C_truep(t5)){
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t11,C_make_character(42),t10);}
else{
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t11,C_make_character(32),t10);}}}

/* k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4487,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t2,((C_word*)t0)[14],((C_word*)t0)[3]);}

/* k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4490,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(58),((C_word*)t0)[3]);}

/* k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4493,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4496,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4663,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[10])){
t4=C_slot(((C_word*)t0)[6],C_fix(2));
t5=t3;
f_4663(t5,C_i_pairp(t4));}
else{
t4=t3;
f_4663(t4,C_SCHEME_FALSE);}}

/* k4661 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4663(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[3],lf[259],((C_word*)t0)[2]);}
else{
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[3],lf[260],((C_word*)t0)[2]);}}

/* k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4496,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(9),((C_word*)t0)[3]);}

/* k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4499,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4502,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(0));
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t2,t3,((C_word*)t0)[3]);}

/* k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4502,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4505,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t2,lf[258],((C_word*)t0)[2]);}

/* k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4508,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=*((C_word*)lf[51]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4646,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t5=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(91),t3);}
else{
t3=t2;
f_4508(2,t3,C_SCHEME_UNDEFINED);}}

/* k4644 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4649,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4647 in k4644 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[3],lf[257],((C_word*)t0)[2]);}

/* k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4511,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[2])){
/* csi.scm:825: prin1 */
f_4427(t2,((C_word*)t0)[2]);}
else{
t3=t2;
f_4511(2,t3,C_SCHEME_UNDEFINED);}}

/* k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4511,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:826: newline */
t3=((C_word*)t0)[5];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4514(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4517,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
t3=(C_truep(((C_word*)t0)[7])?((C_word*)t0)[6]:C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4532,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_slot(((C_word*)t0)[2],C_fix(2));
t6=C_slot(((C_word*)t0)[2],C_fix(3));
t7=C_i_check_list_2(t5,lf[88]);
t8=C_i_check_list_2(t6,lf[88]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4605,a[2]=t4,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_4605(t12,t2,t5,t6);}
else{
t4=C_i_cdr(((C_word*)t0)[11]);
t5=C_fixnum_difference(((C_word*)t0)[10],C_fix(1));
t6=((C_word*)((C_word*)t0)[9])[1];
f_4459(t6,((C_word*)t0)[8],t4,t5);}}

/* for-each-loop819 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4605(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4605,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4615,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g820827 */
t9=((C_word*)t0)[2];
f_4532(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4613 in for-each-loop819 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4605(t4,((C_word*)t0)[2],t2,t3);}

/* g820 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4532(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4532,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4542,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:831: display */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,lf[256]);}}

/* k4540 in g820 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4542,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4547,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_4547(t5,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* doloop832 in k4540 in g820 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4547(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4547,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=*((C_word*)lf[51]+1);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4557,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=t3,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t5,lf[255],t4);}}

/* k4555 in doloop832 in k4540 in g820 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4560,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=C_i_car(((C_word*)t0)[8]);
/* write */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[180]+1)))(4,*((C_word*)lf[180]+1),t2,t3,((C_word*)t0)[2]);}

/* k4558 in k4555 in doloop832 in k4540 in g820 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4560,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4563,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t2,lf[254],((C_word*)t0)[2]);}

/* k4561 in k4558 in k4555 in doloop832 in k4540 in g820 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4563,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4566,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=C_slot(((C_word*)t0)[3],((C_word*)t0)[8]);
/* csi.scm:836: prin1 */
f_4427(t2,t3);}

/* k4564 in k4561 in k4558 in k4555 in doloop832 in k4540 in g820 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4566,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4569,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:837: newline */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k4567 in k4564 in k4561 in k4558 in k4555 in doloop832 in k4540 in g820 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=C_i_cdr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_4547(t4,((C_word*)t0)[2],t2,t3);}

/* k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in doloop781 in k4448 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[5]);
t3=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4459(t4,((C_word*)t0)[2],t2,t3);}

/* prin1 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_4427(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4427,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4433,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:800: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[53]))(4,*((C_word*)lf[53]+1),t1,C_fix(100),t3);}

/* a4432 in prin1 in show-frameinfo in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4433,2,t0,t1);}
/* csi.scm:803: ##sys#print */
t2=*((C_word*)lf[52]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[2],C_SCHEME_TRUE,*((C_word*)lf[51]+1));}

/* f_4222 in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4222(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[16],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4222,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4225,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4254,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t4,a[6]=t5,a[7]=((C_word*)t0)[3],a[8]=t8,a[9]=t3,tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_4254(t10,t1,C_fix(0));}

/* doloop719 */
static void C_fcall f_4254(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4254,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[9]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t1,a[10]=((C_word*)t0)[8],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4422,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:768: justify */
t5=((C_word*)t0)[2];
f_4225(t5,t4,t2,C_fix(4),C_fix(10),C_make_character(32));}}

/* k4420 in doloop719 */
static void C_ccall f_4422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:768: display */
t2=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4262 in doloop719 */
static void C_ccall f_4264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:769: write-char */
t3=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,C_make_character(58),((C_word*)t0)[7]);}

/* k4265 in k4262 in doloop719 */
static void C_ccall f_4267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4267,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4270,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4339,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t4,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_4339(t6,t2,C_fix(0),((C_word*)t0)[11]);}

/* doloop729 in k4265 in k4262 in doloop719 */
static void C_fcall f_4339(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4339,NULL,4,t0,t1,t2,t3);}
t4=C_fixnum_greater_or_equal_p(t2,C_fix(16));
t5=(C_truep(t4)?t4:C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[9]));
if(C_truep(t5)){
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[9]))){
t6=C_fixnum_modulo(((C_word*)t0)[9],C_fix(16));
t7=C_eqp(t6,C_fix(0));
if(C_truep(t7)){
t8=C_SCHEME_UNDEFINED;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=C_fixnum_difference(C_fix(16),t6);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4373,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_4373(t12,t1,t8);}}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}
else{
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4393,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=t3,a[10]=t2,tmp=(C_word)a,a+=11,tmp);
/* csi.scm:779: write-char */
t7=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,C_make_character(32),((C_word*)t0)[7]);}}

/* k4391 in doloop729 in k4265 in k4262 in doloop719 */
static void C_ccall f_4393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4393,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4396,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4411,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4415,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:780: ref */
t5=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[2],((C_word*)t0)[9]);}

/* k4413 in k4391 in doloop729 in k4265 in k4262 in doloop719 */
static void C_ccall f_4415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:780: justify */
t2=((C_word*)t0)[3];
f_4225(t2,((C_word*)t0)[2],t1,C_fix(2),C_fix(16),C_make_character(48));}

/* k4409 in k4391 in doloop729 in k4265 in k4262 in doloop719 */
static void C_ccall f_4411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:780: display */
t2=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4394 in k4391 in doloop729 in k4265 in k4262 in doloop719 */
static void C_ccall f_4396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4339(t4,((C_word*)t0)[2],t2,t3);}

/* doloop737 in doloop729 in k4265 in k4262 in doloop719 */
static void C_fcall f_4373(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4373,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4383,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:778: display */
t5=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t4,lf[251],((C_word*)t0)[2]);}}

/* k4381 in doloop737 in doloop729 in k4265 in k4262 in doloop719 */
static void C_ccall f_4383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4373(t3,((C_word*)t0)[2],t2);}

/* k4268 in k4265 in k4262 in doloop719 */
static void C_ccall f_4270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4270,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* csi.scm:781: write-char */
t3=((C_word*)t0)[6];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,C_make_character(32),((C_word*)t0)[5]);}

/* k4271 in k4268 in k4265 in k4262 in doloop719 */
static void C_ccall f_4273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4276,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_4288(t6,t2,C_fix(0),((C_word*)t0)[9]);}

/* doloop745 in k4271 in k4268 in k4265 in k4262 in doloop719 */
static void C_fcall f_4288(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4288,NULL,4,t0,t1,t2,t3);}
t4=C_fixnum_greater_or_equal_p(t2,C_fix(16));
t5=(C_truep(t4)?t4:C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[7]));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4301,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:785: ref */
t7=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[2],t3);}}

/* k4299 in doloop745 in k4271 in k4268 in k4265 in k4262 in doloop719 */
static void C_ccall f_4301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4304,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_greater_or_equal_p(t1,C_fix(32));
t4=(C_truep(t3)?C_fixnum_lessp(t1,C_fix(128)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_make_character(C_unfix(t1));
/* csi.scm:787: write-char */
t6=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t2,t5,((C_word*)t0)[2]);}
else{
/* csi.scm:788: write-char */
t5=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t2,C_make_character(46),((C_word*)t0)[2]);}}

/* k4302 in k4299 in doloop745 in k4271 in k4268 in k4265 in k4262 in doloop719 */
static void C_ccall f_4304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4288(t4,((C_word*)t0)[2],t2,t3);}

/* k4274 in k4271 in k4268 in k4265 in k4262 in doloop719 */
static void C_ccall f_4276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4276,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4279,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:789: write-char */
t3=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in doloop719 */
static void C_ccall f_4279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(16));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4254(t3,((C_word*)t0)[2],t2);}

/* justify */
static void C_fcall f_4225(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4225,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4229,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* csi.scm:760: number->string */
C_number_to_string(4,0,t6,t2,t4);}

/* k4227 in justify */
static void C_ccall f_4229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4229,2,t0,t1);}
t2=C_block_size(t1);
if(C_truep(C_fixnum_lessp(t2,((C_word*)t0)[6]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4245,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_difference(((C_word*)t0)[6],t2);
/* csi.scm:763: make-string */
t5=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t3,t4,((C_word*)t0)[2]);}
else{
t3=t1;
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4243 in k4227 in justify */
static void C_ccall f_4245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:763: string-append */
t2=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* f_4061 in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4061(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_4061r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4061r(t0,t1,t2,t3);}}

static void C_ccall f_4061r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4063,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4169,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4174,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t3))){
/* def-len684705 */
t7=t6;
f_4174(t7,t1);}
else{
t7=C_i_car(t3);
t8=C_i_cdr(t3);
if(C_truep(C_i_nullp(t8))){
/* def-out685703 */
t9=t5;
f_4169(t9,t1,t7);}
else{
t9=C_i_car(t8);
t10=C_i_cdr(t8);
if(C_truep(C_i_nullp(t10))){
/* body682691 */
t11=t4;
f_4063(t11,t1,t7,t9);}
else{
/* ##sys#error */
t11=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}}}

/* def-len684 */
static void C_fcall f_4174(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4174,NULL,2,t0,t1);}
/* def-out685703 */
t2=((C_word*)t0)[2];
f_4169(t2,t1,C_SCHEME_FALSE);}

/* def-out685 */
static void C_fcall f_4169(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4169,NULL,3,t0,t1,t2);}
/* body682691 */
t3=((C_word*)t0)[2];
f_4063(t3,t1,t2,*((C_word*)lf[51]+1));}

/* body682 */
static void C_fcall f_4063(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4063,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4066,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_immp(((C_word*)t0)[2]))){
/* csi.scm:742: ##sys#error */
t5=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,lf[246],lf[247],((C_word*)t0)[2]);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4088,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:743: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[235]+1)))(3,*((C_word*)lf[235]+1),t5,((C_word*)t0)[2]);}}

/* k4086 in body682 */
static void C_ccall f_4088(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4088,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4095,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[4]);
/* csi.scm:743: bestlen */
t4=((C_word*)t0)[2];
f_4066(t4,t2,t3);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4112,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[4]);
/* csi.scm:744: bestlen */
t4=((C_word*)t0)[2];
f_4066(t4,t2,t3);}
else{
t2=C_immp(((C_word*)t0)[4]);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_anypointerp(((C_word*)t0)[4]));
if(C_truep(t3)){
/* csi.scm:746: hexdump */
t4=C_fast_retrieve(lf[216]);
f_4222(6,t4,((C_word*)t0)[5],((C_word*)t0)[4],C_fix(32),*((C_word*)lf[248]+1),((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_structurep(((C_word*)t0)[4]))){
t5=C_slot(((C_word*)t0)[4],C_fix(0));
t6=t4;
f_4131(t6,C_i_assq(t5,C_retrieve2(lf[148],"bytevector-data")));}
else{
t5=t4;
f_4131(t5,C_SCHEME_FALSE);}}}}}

/* k4129 in k4086 in body682 */
static void C_fcall f_4131(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4131,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4141,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_block_size(t2);
/* csi.scm:749: bestlen */
t5=((C_word*)t0)[2];
f_4066(t5,t3,t4);}
else{
/* csi.scm:750: ##sys#error */
t2=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[246],lf[249],((C_word*)t0)[5]);}}

/* k4139 in k4129 in k4086 in body682 */
static void C_ccall f_4141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:749: hexdump */
t2=C_fast_retrieve(lf[216]);
f_4222(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,*((C_word*)lf[217]+1),((C_word*)t0)[2]);}

/* k4110 in k4086 in body682 */
static void C_ccall f_4112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:744: hexdump */
t2=C_fast_retrieve(lf[216]);
f_4222(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,*((C_word*)lf[217]+1),((C_word*)t0)[2]);}

/* k4093 in k4086 in body682 */
static void C_ccall f_4095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:743: hexdump */
t2=C_fast_retrieve(lf[216]);
f_4222(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,*((C_word*)lf[217]+1),((C_word*)t0)[2]);}

/* bestlen in body682 */
static void C_fcall f_4066(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4066,NULL,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
/* csi.scm:741: min */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[245]+1)))(4,*((C_word*)lf[245]+1),t1,((C_word*)t0)[2],t2);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_4052 in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_4052(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4052,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4056,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:730: ##sys#check-symbol */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[243]+1)))(5,*((C_word*)lf[243]+1),t4,t2,lf[244],lf[241]);}

/* k4054 */
static void C_ccall f_4056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:731: ##sys#hash-table-set! */
((C_proc5)C_fast_retrieve_symbol_proc(lf[242]))(5,*((C_word*)lf[242]+1),((C_word*)t0)[4],C_retrieve2(lf[150],"describer-table"),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_3055 in k3051 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_3055r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3055r(t0,t1,t2,t3);}}

static void C_ccall f_3055r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(10);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=t2,a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_3059(2,t5,*((C_word*)lf[51]+1));}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_3059(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k3057 */
static void C_ccall f_3059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3061,a[2]=((C_word*)t0)[8],a[3]=t1,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_permanentp(((C_word*)t0)[8]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4031,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:596: ##sys#block-address */
((C_proc3)C_fast_retrieve_symbol_proc(lf[240]))(3,*((C_word*)lf[240]+1),t4,((C_word*)t0)[8]);}
else{
t4=t3;
f_3187(2,t4,C_SCHEME_UNDEFINED);}}

/* k4029 in k3057 */
static void C_ccall f_4031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:596: fprintf */
t2=((C_word*)t0)[4];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[239],t1);}

/* k3185 in k3057 */
static void C_ccall f_3187(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3187,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3190,a[2]=((C_word*)t0)[11],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_charp(((C_word*)t0)[10]))){
t3=C_fix(C_character_code(((C_word*)t0)[10]));
/* csi.scm:599: fprintf */
t4=((C_word*)t0)[9];
((C_proc8)C_fast_retrieve_proc(t4))(8,t4,t2,((C_word*)t0)[8],lf[162],((C_word*)t0)[10],t3,t3,t3);}
else{
switch(((C_word*)t0)[10]){
case C_SCHEME_TRUE:
/* csi.scm:600: fprintf */
t3=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[8],lf[163]);
case C_SCHEME_FALSE:
/* csi.scm:601: fprintf */
t3=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[8],lf[164]);
default:
if(C_truep(C_i_nullp(((C_word*)t0)[10]))){
/* csi.scm:602: fprintf */
t3=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[8],lf[165]);}
else{
if(C_truep(C_eofp(((C_word*)t0)[10]))){
/* csi.scm:603: fprintf */
t3=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[8],lf[166]);}
else{
t3=*((C_word*)lf[47]+1);
t4=C_eqp(t3,((C_word*)t0)[10]);
if(C_truep(t4)){
/* csi.scm:604: fprintf */
t5=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t2,((C_word*)t0)[8],lf[167]);}
else{
if(C_truep(C_fixnump(((C_word*)t0)[10]))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3256,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t2,a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:606: fprintf */
t6=((C_word*)t0)[9];
((C_proc8)C_fast_retrieve_proc(t6))(8,t6,t5,((C_word*)t0)[8],lf[169],((C_word*)t0)[10],((C_word*)t0)[10],((C_word*)t0)[10],((C_word*)t0)[10]);}
else{
t5=C_slot(lf[170],C_fix(0));
t6=C_eqp(((C_word*)t0)[10],t5);
if(C_truep(t6)){
/* csi.scm:611: fprintf */
t7=((C_word*)t0)[9];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t2,((C_word*)t0)[8],lf[171]);}
else{
if(C_truep(C_i_flonump(((C_word*)t0)[10]))){
/* csi.scm:612: fprintf */
t7=((C_word*)t0)[9];
((C_proc5)C_fast_retrieve_proc(t7))(5,t7,t2,((C_word*)t0)[8],lf[172],((C_word*)t0)[10]);}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[10]))){
/* csi.scm:613: fprintf */
t7=((C_word*)t0)[9];
((C_proc5)C_fast_retrieve_proc(t7))(5,t7,t2,((C_word*)t0)[8],lf[173],((C_word*)t0)[10]);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[10]))){
/* csi.scm:614: descseq */
t7=((C_word*)t0)[7];
f_3061(6,t7,t2,lf[174],*((C_word*)lf[175]+1),((C_word*)t0)[6],C_fix(0));}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[10]))){
/* csi.scm:615: descseq */
t7=((C_word*)t0)[7];
f_3061(6,t7,t2,lf[176],*((C_word*)lf[175]+1),*((C_word*)lf[177]+1),C_fix(0));}
else{
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[8],a[10]=t2,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:616: keyword? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[238]))(3,*((C_word*)lf[238]+1),t7,((C_word*)t0)[10]);}}}}}}}}}}}}

/* k3320 in k3185 in k3057 */
static void C_ccall f_3322(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3322,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3329,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:618: ##sys#symbol->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[179]))(3,*((C_word*)lf[179]+1),t2,((C_word*)t0)[8]);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[8]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3338,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3422,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:620: ##sys#symbol-has-toplevel-binding? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[192]))(3,*((C_word*)lf[192]+1),t3,((C_word*)t0)[8]);}
else{
t2=((C_word*)t0)[8];
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2982,tmp=(C_word)a,a+=2,tmp);
t4=f_2982(t2,t2);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t4)){
t6=t5;
f_3434(t6,t4);}
else{
t6=((C_word*)t0)[8];
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3021,tmp=(C_word)a,a+=2,tmp);
t8=t5;
f_3434(t8,f_3021(t6));}}}}

/* lp in k3320 in k3185 in k3057 */
static C_word C_fcall f_3021(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_check;
loop:
if(C_truep(C_i_pairp(t1))){
t2=C_i_car(t1);
t3=C_eqp(t1,t2);
if(C_truep(t3)){
return(t3);}
else{
t4=C_i_cdr(t1);
t6=t4;
t1=t6;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}

/* k3432 in k3320 in k3185 in k3057 */
static void C_fcall f_3434(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3434,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3437,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:641: fprintf */
t3=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[7],lf[196]);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[10]))){
/* csi.scm:651: descseq */
t2=((C_word*)t0)[5];
f_3061(6,t2,((C_word*)t0)[6],lf[197],((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0));}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[10]))){
t2=C_i_car(((C_word*)t0)[10]);
t3=C_i_cdr(((C_word*)t0)[10]);
/* csi.scm:652: fprintf */
t4=((C_word*)t0)[8];
((C_proc6)C_fast_retrieve_proc(t4))(6,t4,((C_word*)t0)[6],((C_word*)t0)[7],lf[198],t2,t3);}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[10]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3553,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3557,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:656: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[200]))(4,*((C_word*)lf[200]+1),t3,((C_word*)t0)[10],C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3563,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:658: port? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[237]))(3,*((C_word*)lf[237]+1),t2,((C_word*)t0)[10]);}}}}}

/* k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3563(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3563,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[6],C_fix(1));
t3=(C_truep(t2)?lf[201]:lf[202]);
t4=C_slot(((C_word*)t0)[6],C_fix(7));
t5=C_slot(((C_word*)t0)[6],C_fix(3));
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3582,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:664: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[200]))(4,*((C_word*)lf[200]+1),t6,((C_word*)t0)[6],C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3591,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:665: ##sys#locative? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[236]))(3,*((C_word*)lf[236]+1),t2,((C_word*)t0)[6]);}}

/* k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3591,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3598,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:667: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[200]))(4,*((C_word*)lf[200]+1),t2,((C_word*)t0)[6],C_fix(0));}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[6]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3679,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:680: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[200]))(4,*((C_word*)lf[200]+1),t2,((C_word*)t0)[6],C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3685,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:681: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[235]+1)))(3,*((C_word*)lf[235]+1),t2,((C_word*)t0)[6]);}}}

/* k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3685(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3685,2,t0,t1);}
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3691,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:683: fprintf */
t4=((C_word*)t0)[3];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[4],lf[218],t2);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[6]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3704,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:686: ##sys#lambda-info->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[220]))(3,*((C_word*)lf[220]+1),t2,((C_word*)t0)[6]);}
else{
if(C_truep(C_i_structurep(((C_word*)t0)[6],lf[221]))){
t2=C_slot(((C_word*)t0)[6],C_fix(2));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3716,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(t2,C_fix(1));
t5=(C_truep(t4)?lf[224]:lf[225]);
t6=C_slot(((C_word*)t0)[6],C_fix(3));
/* csi.scm:689: fprintf */
t7=((C_word*)t0)[3];
((C_proc7)C_fast_retrieve_proc(t7))(7,t7,t3,((C_word*)t0)[4],lf[226],t2,t5,t6);}
else{
if(C_truep(C_i_structurep(((C_word*)t0)[6],lf[227]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3813,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[6],C_fix(1));
/* csi.scm:703: fprintf */
t4=((C_word*)t0)[3];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t2,((C_word*)t0)[4],lf[230],t3);}
else{
if(C_truep(C_structurep(((C_word*)t0)[6]))){
t2=C_slot(((C_word*)t0)[6],C_fix(0));
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3919,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:719: ##sys#hash-table-ref */
((C_proc4)C_fast_retrieve_symbol_proc(lf[233]))(4,*((C_word*)lf[233]+1),t3,C_retrieve2(lf[150],"describer-table"),t2);}
else{
/* csi.scm:726: fprintf */
t2=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[5],((C_word*)t0)[4],lf[234]);}}}}}}

/* k3917 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3919,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3923,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* g629630 */
t3=t2;
f_3923(t3,((C_word*)t0)[5],t1);}
else{
t2=C_i_assq(((C_word*)t0)[4],C_retrieve2(lf[148],"bytevector-data"));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3937,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* g640641 */
t4=t3;
f_3937(t4,((C_word*)t0)[5],t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4000,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[7],C_fix(0));
/* csi.scm:724: fprintf */
t5=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t5))(5,t5,t3,((C_word*)t0)[6],lf[232],t4);}}}

/* k3998 in k3917 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_4000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:725: descseq */
t2=((C_word*)t0)[3];
f_3061(6,t2,((C_word*)t0)[2],C_SCHEME_FALSE,*((C_word*)lf[175]+1),*((C_word*)lf[177]+1),C_fix(1));}

/* g640 in k3917 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_fcall f_3937(C_word t0,C_word t1,C_word t2){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3937,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3945,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fast_retrieve(lf[65]);
t9=C_i_cdr(t2);
t10=C_i_check_list_2(t9,lf[142]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3955,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3961,a[2]=t8,a[3]=t5,a[4]=t13,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_3961(t15,t11,t9);}

/* map-loop645 in g640 in k3917 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_fcall f_3961(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3961,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3990,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g651660 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3988 in map-loop645 in g640 in k3917 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3990(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3990,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3961(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3961(t6,((C_word*)t0)[3],t5);}}

/* k3953 in g640 in k3917 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3955,2,t0,t1);}
t2=C_a_i_list1(&a,1,C_fix(0));
/* csi.scm:722: append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[231]+1)))(4,*((C_word*)lf[231]+1),((C_word*)t0)[2],t1,t2);}

/* k3943 in g640 in k3917 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* g629 in k3917 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_fcall f_3923(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3923,NULL,3,t0,t1,t2);}
/* g637638 */
t3=t2;
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3811 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3813,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3814,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_i_check_list_2(t3,lf[88]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3882,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3882(t8,((C_word*)t0)[2],t3);}

/* for-each-loop601 in k3811 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_fcall f_3882(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3882,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3892,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g602608 */
t5=((C_word*)t0)[2];
f_3814(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3890 in for-each-loop601 in k3811 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3882(t3,((C_word*)t0)[2],t2);}

/* g602 in k3811 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_fcall f_3814(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3814,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3818,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:706: fprintf */
t4=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[3],lf[229],t2);}

/* k3816 in g602 in k3811 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3818,2,t0,t1);}
t2=C_slot(((C_word*)t0)[6],C_fix(2));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3827,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3827(t6,((C_word*)t0)[2],t2);}

/* loop in k3816 in g602 in k3811 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_fcall f_3827(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(14);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3827,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3837,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
t5=C_eqp(((C_word*)t0)[4],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3850,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3855,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:710: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[53]))(4,*((C_word*)lf[53]+1),t6,C_fix(100),t7);}
else{
t6=C_i_cddr(t2);
/* csi.scm:715: loop */
t11=t1;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}}

/* a3854 in loop in k3816 in g602 in k3811 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3855,2,t0,t1);}
t2=C_i_cdar(((C_word*)t0)[4]);
t3=C_i_cadr(((C_word*)t0)[4]);
/* csi.scm:713: fprintf */
t4=((C_word*)t0)[3];
((C_proc6)C_fast_retrieve_proc(t4))(6,t4,t1,((C_word*)t0)[2],lf[228],t2,t3);}

/* k3848 in loop in k3816 in g602 in k3811 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:714: newline */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(3,*((C_word*)lf[24]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3835 in loop in k3816 in g602 in k3811 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cddr(((C_word*)t0)[4]);
/* csi.scm:715: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3827(t3,((C_word*)t0)[2],t2);}

/* k3714 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3716,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[5],C_fix(4));
/* csi.scm:691: fprintf */
t4=((C_word*)t0)[4];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t2,((C_word*)t0)[3],lf[223],t3);}

/* k3717 in k3714 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3719,2,t0,t1);}
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3730,a[2]=t5,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_3730(t7,((C_word*)t0)[2],C_fix(0));}

/* doloop575 in k3717 in k3714 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_fcall f_3730(C_word t0,C_word t1,C_word t2){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3730,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3738,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_i_check_list_2(t4,lf[88]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3759,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3768,a[2]=t3,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3768(t10,t6,t4);}}

/* for-each-loop580 in doloop575 in k3717 in k3714 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_fcall f_3768(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3768,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3778,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g581587 */
t5=((C_word*)t0)[2];
f_3738(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3776 in for-each-loop580 in doloop575 in k3717 in k3714 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3768(t3,((C_word*)t0)[2],t2);}

/* k3757 in doloop575 in k3717 in k3714 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3730(t3,((C_word*)t0)[2],t2);}

/* g581 in doloop575 in k3717 in k3714 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_fcall f_3738(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3738,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
/* csi.scm:699: fprintf */
t5=((C_word*)t0)[3];
((C_proc6)C_fast_retrieve_proc(t5))(6,t5,t1,((C_word*)t0)[2],lf[222],t3,t4);}

/* k3702 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:686: fprintf */
t2=((C_word*)t0)[4];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[219],t1);}

/* k3689 in k3683 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:684: hexdump */
t2=C_fast_retrieve(lf[216]);
f_4222(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],*((C_word*)lf[217]+1),((C_word*)t0)[2]);}

/* k3677 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:680: fprintf */
t2=((C_word*)t0)[4];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[215],t1);}

/* k3596 in k3589 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[5],C_fix(2));
switch(t3){
case C_fix(0):
/* csi.scm:666: fprintf */
t4=((C_word*)t0)[4];
((C_proc7)C_fast_retrieve_proc(t4))(7,t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[204],t1,t2,lf[205]);
case C_fix(1):
/* csi.scm:666: fprintf */
t4=((C_word*)t0)[4];
((C_proc7)C_fast_retrieve_proc(t4))(7,t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[204],t1,t2,lf[206]);
case C_fix(2):
/* csi.scm:666: fprintf */
t4=((C_word*)t0)[4];
((C_proc7)C_fast_retrieve_proc(t4))(7,t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[204],t1,t2,lf[207]);
case C_fix(3):
/* csi.scm:666: fprintf */
t4=((C_word*)t0)[4];
((C_proc7)C_fast_retrieve_proc(t4))(7,t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[204],t1,t2,lf[208]);
case C_fix(4):
/* csi.scm:666: fprintf */
t4=((C_word*)t0)[4];
((C_proc7)C_fast_retrieve_proc(t4))(7,t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[204],t1,t2,lf[209]);
case C_fix(5):
/* csi.scm:666: fprintf */
t4=((C_word*)t0)[4];
((C_proc7)C_fast_retrieve_proc(t4))(7,t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[204],t1,t2,lf[210]);
case C_fix(6):
/* csi.scm:666: fprintf */
t4=((C_word*)t0)[4];
((C_proc7)C_fast_retrieve_proc(t4))(7,t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[204],t1,t2,lf[211]);
case C_fix(7):
/* csi.scm:666: fprintf */
t4=((C_word*)t0)[4];
((C_proc7)C_fast_retrieve_proc(t4))(7,t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[204],t1,t2,lf[212]);
case C_fix(8):
/* csi.scm:666: fprintf */
t4=((C_word*)t0)[4];
((C_proc7)C_fast_retrieve_proc(t4))(7,t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[204],t1,t2,lf[213]);
case C_fix(9):
/* csi.scm:666: fprintf */
t4=((C_word*)t0)[4];
((C_proc7)C_fast_retrieve_proc(t4))(7,t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[204],t1,t2,lf[214]);
default:
t4=C_SCHEME_UNDEFINED;
/* csi.scm:666: fprintf */
t5=((C_word*)t0)[4];
((C_proc7)C_fast_retrieve_proc(t5))(7,t5,((C_word*)t0)[3],((C_word*)t0)[2],lf[204],t1,t2,t4);}}

/* k3580 in k3561 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:659: fprintf */
t2=((C_word*)t0)[7];
((C_proc8)C_fast_retrieve_proc(t2))(8,t2,((C_word*)t0)[6],((C_word*)t0)[5],lf[203],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3555 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:656: sprintf */
t2=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[199],t1);}

/* k3551 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:655: descseq */
t2=((C_word*)t0)[3];
f_3061(6,t2,((C_word*)t0)[2],t1,*((C_word*)lf[175]+1),*((C_word*)lf[177]+1),C_fix(1));}

/* k3435 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3437,2,t0,t1);}
t2=C_a_i_list1(&a,1,((C_word*)t0)[6]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3446,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3446(t6,((C_word*)t0)[2],((C_word*)t0)[6],t2);}

/* loop-print in k3435 in k3432 in k3320 in k3185 in k3057 */
static void C_fcall f_3446(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3446,NULL,4,t0,t1,t2,t3);}
t4=C_i_not_pair_p(t2);
t5=(C_truep(t4)?t4:C_i_nullp(t2));
if(C_truep(t5)){
/* csi.scm:645: printf */
t6=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t1,lf[193]);}
else{
t6=C_i_car(t2);
if(C_truep(C_i_memq(t6,t3))){
/* csi.scm:647: fprintf */
t7=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t1,((C_word*)t0)[3],lf[194]);}
else{
t7=C_i_car(t2);
if(C_truep(C_i_memq(t7,t3))){
t8=C_SCHEME_UNDEFINED;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3477,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=C_i_car(t2);
/* csi.scm:649: fprintf */
t10=((C_word*)t0)[4];
((C_proc5)C_fast_retrieve_proc(t10))(5,t10,t8,((C_word*)t0)[3],lf[195],t9);}}}}

/* k3475 in loop-print in k3435 in k3432 in k3320 in k3185 in k3057 */
static void C_ccall f_3477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3477,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[5]);
t3=C_i_car(((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
/* csi.scm:650: loop-print */
t5=((C_word*)((C_word*)t0)[3])[1];
f_3446(t5,((C_word*)t0)[2],t2,t4);}

/* lp in k3320 in k3185 in k3057 */
static C_word C_fcall f_2982(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_check;
loop:
if(C_truep(C_i_pairp(t1))){
t3=C_i_cdr(t1);
if(C_truep(C_i_pairp(t3))){
t4=C_i_cdr(t3);
t5=C_i_cdr(t2);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
return(t6);}
else{
t8=t4;
t9=t5;
t1=t8;
t2=t9;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}

/* k3420 in k3320 in k3185 in k3057 */
static void C_ccall f_3422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_3338(2,t2,C_SCHEME_UNDEFINED);}
else{
/* csi.scm:621: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[3],lf[191],((C_word*)t0)[2]);}}

/* k3336 in k3320 in k3185 in k3057 */
static void C_ccall f_3338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:622: ##sys#qualified-symbol? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[190]))(3,*((C_word*)lf[190]+1),t2,((C_word*)t0)[6]);}

/* k3339 in k3336 in k3320 in k3185 in k3057 */
static void C_ccall f_3341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3341,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3419,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* csi.scm:624: ##sys#interned-symbol? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[189]))(3,*((C_word*)lf[189]+1),t3,((C_word*)t0)[6]);}

/* k3417 in k3339 in k3336 in k3320 in k3185 in k3057 */
static void C_ccall f_3419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3419,2,t0,t1);}
t2=(C_truep(t1)?lf[183]:lf[184]);
t3=(C_truep(((C_word*)t0)[6])?lf[185]:lf[186]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3410,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
/* csi.scm:627: ##sys#symbol->qualified-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[188]))(3,*((C_word*)lf[188]+1),t4,((C_word*)t0)[2]);}
else{
/* csi.scm:628: ##sys#symbol->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[179]))(3,*((C_word*)lf[179]+1),t4,((C_word*)t0)[2]);}}

/* k3408 in k3417 in k3339 in k3336 in k3320 in k3185 in k3057 */
static void C_ccall f_3410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:623: fprintf */
t2=((C_word*)t0)[6];
((C_proc7)C_fast_retrieve_proc(t2))(7,t2,((C_word*)t0)[5],((C_word*)t0)[4],lf[187],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3342 in k3339 in k3336 in k3320 in k3185 in k3057 */
static void C_ccall f_3344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3344,2,t0,t1);}
t2=C_slot(((C_word*)t0)[6],C_fix(2));
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,*((C_word*)lf[47]+1));}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3356,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:631: display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t3,lf[182],((C_word*)t0)[4]);}}

/* k3354 in k3342 in k3339 in k3336 in k3320 in k3185 in k3057 */
static void C_ccall f_3356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3356,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3361,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3361(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* doloop539 in k3354 in k3342 in k3339 in k3336 in k3320 in k3185 in k3057 */
static void C_fcall f_3361(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3361,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3371,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* csi.scm:634: fprintf */
t5=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t5))(5,t5,t3,((C_word*)t0)[3],lf[181],t4);}}

/* k3369 in doloop539 in k3354 in k3342 in k3339 in k3336 in k3320 in k3185 in k3057 */
static void C_ccall f_3371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3371,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:635: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[53]))(4,*((C_word*)lf[53]+1),t2,C_fix(1000),t3);}

/* a3385 in k3369 in doloop539 in k3354 in k3342 in k3339 in k3336 in k3320 in k3185 in k3057 */
static void C_ccall f_3386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3386,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[3]);
/* csi.scm:638: write */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[180]+1)))(4,*((C_word*)lf[180]+1),t1,t2,((C_word*)t0)[2]);}

/* k3372 in k3369 in doloop539 in k3354 in k3342 in k3339 in k3336 in k3320 in k3185 in k3057 */
static void C_ccall f_3374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3377,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:639: newline */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(3,*((C_word*)lf[24]+1),t2,((C_word*)t0)[2]);}

/* k3375 in k3372 in k3369 in doloop539 in k3354 in k3342 in k3339 in k3336 in k3320 in k3185 in k3057 */
static void C_ccall f_3377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cddr(((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_3361(t3,((C_word*)t0)[2],t2);}

/* k3327 in k3320 in k3185 in k3057 */
static void C_ccall f_3329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:617: fprintf */
t2=((C_word*)t0)[4];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[178],t1);}

/* k3254 in k3185 in k3057 */
static void C_ccall f_3256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3256,2,t0,t1);}
t2=C_make_character(C_unfix(((C_word*)t0)[5]));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3262,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(65536)))){
/* csi.scm:608: fprintf */
t4=((C_word*)t0)[3];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[2],lf[168],t2);}
else{
/* csi.scm:609: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[127]))(4,*((C_word*)lf[127]+1),((C_word*)t0)[4],C_make_character(10),*((C_word*)lf[51]+1));}}

/* k3260 in k3254 in k3185 in k3057 */
static void C_ccall f_3262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:609: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[127]))(4,*((C_word*)lf[127]+1),((C_word*)t0)[2],C_make_character(10),*((C_word*)lf[51]+1));}

/* k3188 in k3185 in k3057 */
static void C_ccall f_3190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* descseq in k3057 */
static void C_ccall f_3061(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3061,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3184,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t5,tmp=(C_word)a,a+=9,tmp);
/* csi.scm:576: plen */
t7=t3;
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[2]);}

/* k3182 in descseq in k3057 */
static void C_ccall f_3184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3184,2,t0,t1);}
t2=C_fixnum_difference(t1,((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3068,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[2])){
/* csi.scm:577: fprintf */
t4=((C_word*)t0)[7];
((C_proc6)C_fast_retrieve_proc(t4))(6,t4,t3,((C_word*)t0)[6],lf[161],((C_word*)t0)[2],t2);}
else{
t4=t3;
f_3068(2,t4,C_SCHEME_UNDEFINED);}}

/* k3066 in k3182 in descseq in k3057 */
static void C_ccall f_3068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3068,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3073,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_3073(t5,((C_word*)t0)[2],C_fix(0));}

/* loop1 in k3066 in k3182 in descseq in k3057 */
static void C_fcall f_3073(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3073,NULL,3,t0,t1,t2);}
t3=C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[8]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(40)))){
t4=C_fixnum_difference(((C_word*)t0)[8],t2);
/* csi.scm:581: fprintf */
t5=((C_word*)t0)[7];
((C_proc5)C_fast_retrieve_proc(t5))(5,t5,t1,((C_word*)t0)[6],lf[156],t4);}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3096,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[5],tmp=(C_word)a,a+=11,tmp);
t5=C_fixnum_plus(((C_word*)t0)[5],t2);
/* csi.scm:583: pref */
t6=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[2],t5);}}}

/* k3094 in loop1 in k3066 in k3182 in descseq in k3057 */
static void C_ccall f_3096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3096,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)t0)[10],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[9],t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3105,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp));
t7=((C_word*)t5)[1];
f_3105(t7,((C_word*)t0)[2],C_fix(1),t3);}

/* loop2 in k3094 in loop1 in k3066 in k3182 in descseq in k3057 */
static void C_fcall f_3105(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3105,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[10]))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3115,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=((C_word*)t0)[8],a[6]=t2,a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:586: fprintf */
t5=((C_word*)t0)[7];
((C_proc6)C_fast_retrieve_proc(t5))(6,t5,t4,((C_word*)t0)[6],lf[160],((C_word*)t0)[9],((C_word*)t0)[5]);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3169,a[2]=((C_word*)t0)[10],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:593: pref */
t5=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[2],t3);}}

/* k3167 in loop2 in k3094 in loop1 in k3066 in k3182 in descseq in k3057 */
static void C_ccall f_3169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_eqp(((C_word*)t0)[7],t1);
if(C_truep(t2)){
t3=C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* csi.scm:593: loop2 */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3105(t5,((C_word*)t0)[3],t3,t4);}
else{
/* csi.scm:594: loop2 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3105(t3,((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[2]);}}

/* k3113 in loop2 in k3094 in loop1 in k3066 in k3182 in descseq in k3057 */
static void C_ccall f_3115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3115,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3118,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[6],C_fix(1)))){
t3=C_fixnum_difference(((C_word*)t0)[6],C_fix(1));
t4=C_eqp(((C_word*)t0)[6],C_fix(2));
if(C_truep(t4)){
/* csi.scm:588: fprintf */
t5=((C_word*)t0)[3];
((C_proc6)C_fast_retrieve_proc(t5))(6,t5,t2,((C_word*)t0)[2],lf[157],t3,lf[158]);}
else{
/* csi.scm:588: fprintf */
t5=((C_word*)t0)[3];
((C_proc6)C_fast_retrieve_proc(t5))(6,t5,t2,((C_word*)t0)[2],lf[157],t3,lf[159]);}}
else{
/* csi.scm:591: newline */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(3,*((C_word*)lf[24]+1),t2,((C_word*)t0)[2]);}}

/* k3116 in k3113 in loop2 in k3094 in loop1 in k3066 in k3182 in descseq in k3057 */
static void C_ccall f_3118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[5],((C_word*)t0)[4]);
/* csi.scm:592: loop1 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3073(t3,((C_word*)t0)[2],t2);}

/* f_2702 in k2699 in k2696 in k2553 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_2702(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2r,(void*)f_2702r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2702r(t0,t1,t2);}}

static void C_ccall f_2702r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2710,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t3;
f_2710(2,t4,C_i_car(t2));}
else{
/* csi.scm:475: current-output-port */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}}

/* k2708 */
static void C_ccall f_2710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2710,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2712,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:475: with-output-to-port */
t3=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t1,t2);}

/* a2711 in k2708 */
static void C_ccall f_2712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2712,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:477: gc */
((C_proc2)C_fast_retrieve_symbol_proc(lf[147]))(2,*((C_word*)lf[147]+1),t2);}

/* k2714 in a2711 in k2708 */
static void C_ccall f_2716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2716,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:478: ##sys#symbol-table-info */
((C_proc2)C_fast_retrieve_symbol_proc(lf[146]))(2,*((C_word*)lf[146]+1),t2);}

/* k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:479: memory-statistics */
((C_proc2)C_fast_retrieve_symbol_proc(lf[145]))(2,*((C_word*)lf[145]+1),t2);}

/* k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2724,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2739,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* csi.scm:481: printf */
t4=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[144]);}

/* k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2739(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2739,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2742,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_fast_retrieve(lf[141]);
t8=C_fast_retrieve(lf[6]);
t9=C_i_check_list_2(t8,lf[142]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2929,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2931,a[2]=t7,a[3]=t4,a[4]=t12,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_2931(t14,t10,t8);}

/* map-loop401 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_fcall f_2931(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2931,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2960,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g407416 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2958 in map-loop401 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2960(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2960,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2931(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2931(t6,((C_word*)t0)[3],t5);}}

/* k2927 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:482: sort */
t2=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[143]+1));}

/* k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2742(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2742,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2743,a[2]=((C_word*)t0)[8],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_list_2(t1,lf[88]);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2794,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2901,a[2]=t4,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_2901(t10,t6,t1);}

/* for-each-loop427 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_fcall f_2901(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2901,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2911,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g428434 */
t5=((C_word*)t0)[2];
f_2743(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2909 in for-each-loop427 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2901(t3,((C_word*)t0)[2],t2);}

/* k2792 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2794,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2797,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2822,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* csi.scm:513: machine-type */
((C_proc2)C_fast_retrieve_symbol_proc(lf[140]))(2,*((C_word*)lf[140]+1),t3);}

/* k2820 in k2792 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2822,2,t0,t1);}
t2=C_fudge(C_fix(3));
t3=(C_truep(t2)?lf[128]:lf[129]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2830,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* csi.scm:515: software-type */
((C_proc2)C_fast_retrieve_symbol_proc(lf[139]))(2,*((C_word*)lf[139]+1),t4);}

/* k2828 in k2820 in k2792 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2830,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2834,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:516: software-version */
((C_proc2)C_fast_retrieve_symbol_proc(lf[138]))(2,*((C_word*)lf[138]+1),t2);}

/* k2832 in k2828 in k2820 in k2792 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2834,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* csi.scm:517: build-platform */
((C_proc2)C_fast_retrieve_symbol_proc(lf[137]))(2,*((C_word*)lf[137]+1),t2);}

/* k2836 in k2832 in k2828 in k2820 in k2792 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2838,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:519: repository-path */
((C_proc2)C_fast_retrieve_symbol_proc(lf[136]))(2,*((C_word*)lf[136]+1),t2);}

/* k2840 in k2836 in k2832 in k2828 in k2820 in k2792 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2842,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t3=C_i_vector_ref(((C_word*)t0)[13],C_fix(0));
/* csi.scm:521: shorten */
f_2724(t2,t3);}

/* k2844 in k2840 in k2836 in k2832 in k2828 in k2820 in k2792 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2846,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2850,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
t3=C_i_vector_ref(((C_word*)t0)[14],C_fix(1));
/* csi.scm:522: shorten */
f_2724(t2,t3);}

/* k2848 in k2844 in k2840 in k2836 in k2832 in k2828 in k2820 in k2792 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2850(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2850,2,t0,t1);}
t2=C_i_vector_ref(((C_word*)t0)[14],C_fix(2));
t3=C_i_vector_ref(((C_word*)t0)[13],C_fix(0));
t4=C_fudge(C_fix(17));
t5=(C_truep(t4)?lf[130]:lf[131]);
t6=C_i_vector_ref(((C_word*)t0)[13],C_fix(1));
t7=C_i_vector_ref(((C_word*)t0)[13],C_fix(2));
t8=C_fudge(C_fix(18));
t9=C_i_nequalp(C_fix(1),t8);
t10=(C_truep(t9)?lf[132]:lf[133]);
t11=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2878,a[2]=t10,a[3]=t7,a[4]=t6,a[5]=t5,a[6]=t3,a[7]=t2,a[8]=t1,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[6],a[13]=((C_word*)t0)[7],a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[9],a[16]=((C_word*)t0)[10],a[17]=((C_word*)t0)[11],a[18]=((C_word*)t0)[12],tmp=(C_word)a,a+=19,tmp);
/* csi.scm:529: argv */
t12=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t12))(2,t12,t11);}

/* k2876 in k2848 in k2844 in k2840 in k2836 in k2832 in k2828 in k2820 in k2792 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:499: printf */
t2=((C_word*)t0)[18];
((C_proc20)C_fast_retrieve_proc(t2))(20,t2,((C_word*)t0)[17],lf[134],((C_word*)t0)[16],((C_word*)t0)[15],((C_word*)t0)[14],((C_word*)t0)[13],((C_word*)t0)[12],((C_word*)t0)[11],((C_word*)t0)[10],C_fast_retrieve(lf[135]),((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2795 in k2792 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2797,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2800,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:530: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[127]))(4,*((C_word*)lf[127]+1),t2,C_make_character(10),*((C_word*)lf[51]+1));}

/* k2798 in k2795 in k2792 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2803,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fudge(C_fix(14)))){
/* csi.scm:531: display */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t2,lf[126]);}
else{
t3=t2;
f_2803(2,t3,C_SCHEME_UNDEFINED);}}

/* k2801 in k2798 in k2795 in k2792 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2806,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fudge(C_fix(15)))){
/* csi.scm:532: display */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t2,lf[125]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k2804 in k2801 in k2798 in k2795 in k2792 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* g428 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_fcall f_2743(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2743,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2747,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:486: printf */
t4=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t3,lf[124],t2);}

/* k2745 in g428 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2747,2,t0,t1);}
t2=C_i_string_length(((C_word*)t0)[4]);
t3=C_a_i_minus(&a,2,C_fix(16),t2);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2760,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_less_or_equalp(((C_word*)t5)[1],C_fix(0)))){
t9=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t10=C_mutate(((C_word *)((C_word*)t0)[3])+1,t9);
t11=C_a_i_plus(&a,2,((C_word*)t5)[1],C_fix(18));
t12=C_set_block_item(t5,0,t11);
t13=t8;
f_2760(t13,t12);}
else{
t9=t8;
f_2760(t9,C_SCHEME_UNDEFINED);}}

/* k2758 in k2745 in g428 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_fcall f_2760(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2760,NULL,2,t0,t1);}
if(C_truep(C_i_greater_or_equalp(((C_word*)((C_word*)t0)[4])[1],C_fix(3)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2769,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:494: display */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t2,lf[122]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2777,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:497: make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[123]+1)))(4,*((C_word*)lf[123]+1),t2,((C_word*)((C_word*)t0)[2])[1],C_make_character(32));}}

/* k2775 in k2758 in k2745 in g428 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:497: display */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1);}

/* k2767 in k2758 in k2745 in g428 in k2740 in k2737 in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[3],0,C_fix(0));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* shorten in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_fcall f_2724(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2724,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2732,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_times(&a,2,t2,C_fix(100));
/* csi.scm:480: truncate */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[121]+1)))(3,*((C_word*)lf[121]+1),t3,t4);}

/* k2730 in shorten in k2720 in k2717 in k2714 in a2711 in k2708 */
static void C_ccall f_2732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2732,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_divide(&a,2,t1,C_fix(100)));}

/* f_2017 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_2017(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2017,3,t0,t1,t2);}
if(C_truep(C_eofp(t2))){
/* csi.scm:304: exit */
((C_proc2)C_fast_retrieve_symbol_proc(lf[74]))(2,*((C_word*)lf[74]+1),t1);}
else{
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=t2,tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(0));
t5=t3;
f_2033(t5,C_eqp(lf[116],t4));}
else{
t4=t3;
f_2033(t4,C_SCHEME_FALSE);}}}

/* k2031 */
static void C_fcall f_2033(C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2033,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[13]);
t3=C_i_assq(t2,C_retrieve2(lf[63],"command-table"));
if(C_truep(t3)){
t4=((C_word*)t0)[12];
t5=C_i_cadr(t3);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2050,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* g213214 */
t7=t5;
((C_proc2)C_fast_retrieve_proc(t7))(2,t7,t6);}
else{
t4=C_eqp(t2,lf[75]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2065,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:316: read */
t6=((C_word*)t0)[9];
((C_proc2)C_fast_retrieve_proc(t6))(2,t6,t5);}
else{
t5=C_eqp(t2,lf[77]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2088,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:320: read */
t7=((C_word*)t0)[9];
((C_proc2)C_fast_retrieve_proc(t7))(2,t7,t6);}
else{
t6=C_eqp(t2,lf[78]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2106,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:325: read */
t8=((C_word*)t0)[9];
((C_proc2)C_fast_retrieve_proc(t8))(2,t8,t7);}
else{
t7=C_eqp(t2,lf[80]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2121,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:329: read */
t9=((C_word*)t0)[9];
((C_proc2)C_fast_retrieve_proc(t9))(2,t9,t8);}
else{
t8=C_eqp(t2,lf[82]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2136,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[12],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:333: read */
t10=((C_word*)t0)[9];
((C_proc2)C_fast_retrieve_proc(t10))(2,t10,t9);}
else{
t9=C_eqp(t2,lf[83]);
if(C_truep(t9)){
/* csi.scm:338: report */
t10=C_fast_retrieve(lf[84]);
f_2702(2,t10,((C_word*)t0)[12]);}
else{
t10=C_eqp(t2,lf[85]);
if(C_truep(t10)){
/* csi.scm:339: exit */
((C_proc2)C_fast_retrieve_symbol_proc(lf[74]))(2,*((C_word*)lf[74]+1),((C_word*)t0)[12]);}
else{
t11=C_eqp(t2,lf[86]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2175,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2211,a[2]=t12,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:341: read-line */
t14=((C_word*)t0)[6];
((C_proc2)C_fast_retrieve_proc(t14))(2,t14,t13);}
else{
t12=C_eqp(t2,lf[89]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2220,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2270,a[2]=t13,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:345: read-line */
t15=((C_word*)t0)[6];
((C_proc2)C_fast_retrieve_proc(t15))(2,t15,t14);}
else{
t13=C_eqp(t2,lf[93]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2279,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:349: read */
t15=((C_word*)t0)[9];
((C_proc2)C_fast_retrieve_proc(t15))(2,t15,t14);}
else{
t14=C_eqp(t2,lf[97]);
if(C_truep(t14)){
if(C_truep(C_fast_retrieve(lf[98]))){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2331,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp);
t16=C_a_i_list1(&a,1,C_fast_retrieve(lf[98]));
/* csi.scm:355: history-add */
t17=C_fast_retrieve(lf[46]);
f_1805(3,t17,t15,t16);}
else{
t15=C_SCHEME_UNDEFINED;
t16=((C_word*)t0)[12];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,t15);}}
else{
t15=C_eqp(t2,lf[99]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2347,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2364,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2368,a[2]=((C_word*)t0)[6],a[3]=t17,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:360: editor-command */
((C_proc2)C_fast_retrieve_symbol_proc(lf[8]))(2,*((C_word*)lf[8]+1),t18);}
else{
t16=C_eqp(t2,lf[103]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2384,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp);
t18=*((C_word*)lf[47]+1);
/* csi.scm:237: vector-fill! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[49]+1)))(4,*((C_word*)lf[49]+1),t17,C_fast_retrieve(lf[44]),t18);}
else{
t17=C_eqp(t2,lf[104]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2396,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:368: history-show */
t19=C_fast_retrieve(lf[50]);
f_1854(2,t19,t18);}
else{
t18=C_eqp(t2,lf[105]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2408,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:371: show-frameinfo */
t20=C_retrieve2(lf[106],"show-frameinfo");
f_4424(t20,t19,C_retrieve2(lf[9],"selected-frame"));}
else{
t19=C_eqp(t2,lf[107]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2420,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2427,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:374: read */
t22=((C_word*)t0)[9];
((C_proc2)C_fast_retrieve_proc(t22))(2,t22,t21);}
else{
t20=C_eqp(t2,lf[109]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2440,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:377: read */
t22=((C_word*)t0)[9];
((C_proc2)C_fast_retrieve_proc(t22))(2,t22,t21);}
else{
t21=C_eqp(t2,lf[111]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2449,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:379: read-line */
t23=((C_word*)t0)[6];
((C_proc2)C_fast_retrieve_proc(t23))(2,t23,t22);}
else{
t22=C_eqp(t2,lf[112]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2468,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:384: display */
t24=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t24))(3,t24,t23,lf[114]);}
else{
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2521,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:415: printf */
t24=((C_word*)t0)[3];
((C_proc4)C_fast_retrieve_proc(t24))(4,t24,t23,lf[115],((C_word*)t0)[13]);}}}}}}}}}}}}}}}}}}}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2529,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2535,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[12],t2,t3);}}

/* a2534 in k2031 */
static void C_ccall f_2535(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2535r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2535r(t0,t1,t2);}}

static void C_ccall f_2535r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2539,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:419: history-add */
t4=C_fast_retrieve(lf[46]);
f_1805(3,t4,t3,t2);}

/* k2537 in a2534 in k2031 */
static void C_ccall f_2539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2528 in k2031 */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2529,2,t0,t1);}
/* csi.scm:418: eval */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* k2519 in k2031 */
static void C_ccall f_2521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k2466 in k2031 */
static void C_ccall f_2468(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2468,2,t0,t1);}
t2=C_retrieve2(lf[63],"command-table");
t3=C_i_check_list_2(t2,lf[88]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2492,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2497,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_2497(t8,t4,t2);}

/* for-each-loop301 in k2466 in k2031 */
static void C_fcall f_2497(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2497,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2507,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_caddr(t4);
if(C_truep(t5)){
/* csi.scm:410: print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(4,*((C_word*)lf[19]+1),t3,C_make_character(32),t5);}
else{
t6=C_i_car(t4);
/* csi.scm:411: print */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(4,*((C_word*)lf[19]+1),t3,lf[113],t6);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2505 in for-each-loop301 in k2466 in k2031 */
static void C_ccall f_2507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2497(t3,((C_word*)t0)[2],t2);}

/* k2490 in k2466 in k2031 */
static void C_ccall f_2492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k2447 in k2031 */
static void C_ccall f_2449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2449,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2452,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:380: system */
((C_proc3)C_fast_retrieve_symbol_proc(lf[101]))(3,*((C_word*)lf[101]+1),t2,t1);}

/* k2450 in k2447 in k2031 */
static void C_ccall f_2452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2452,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2455,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_list1(&a,1,t1);
/* csi.scm:381: history-add */
t4=C_fast_retrieve(lf[46]);
f_1805(3,t4,t2,t3);}

/* k2453 in k2450 in k2447 in k2031 */
static void C_ccall f_2455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2438 in k2031 */
static void C_ccall f_2440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:377: copy-from-frame */
t2=C_retrieve2(lf[110],"copy-from-frame");
f_4752(t2,((C_word*)t0)[2],t1);}

/* k2425 in k2031 */
static void C_ccall f_2427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:374: select-frame */
t2=C_retrieve2(lf[108],"select-frame");
f_4695(t2,((C_word*)t0)[2],t1);}

/* k2418 in k2031 */
static void C_ccall f_2420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k2406 in k2031 */
static void C_ccall f_2408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k2394 in k2031 */
static void C_ccall f_2396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k2382 in k2031 */
static void C_ccall f_2384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k2366 in k2031 */
static void C_ccall f_2368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2368,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f7061,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:361: read-line */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7065,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:361: read-line */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}}

/* f7065 in k2366 in k2031 */
static void C_ccall f7065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:359: string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(5,*((C_word*)lf[34]+1),((C_word*)t0)[2],C_retrieve2(lf[10],"default-editor"),lf[102],t1);}

/* f7061 in k2366 in k2031 */
static void C_ccall f7061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:359: string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(5,*((C_word*)lf[34]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[102],t1);}

/* k2362 in k2031 */
static void C_ccall f_2364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:358: system */
((C_proc3)C_fast_retrieve_symbol_proc(lf[101]))(3,*((C_word*)lf[101]+1),((C_word*)t0)[2],t1);}

/* k2345 in k2031 */
static void C_ccall f_2347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_zerop(t1))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
/* csi.scm:363: printf */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],lf[100],t1);}}

/* k2329 in k2031 */
static void C_ccall f_2331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:356: describe */
t2=C_fast_retrieve(lf[79]);
f_3055(3,t2,((C_word*)t0)[2],C_fast_retrieve(lf[98]));}

/* k2277 in k2031 */
static void C_ccall f_2279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2279,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2284,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2312,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2311 in k2277 in k2031 */
static void C_ccall f_2312(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2312r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2312r(t0,t1,t2);}}

static void C_ccall f_2312r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2316,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:351: history-add */
t4=C_fast_retrieve(lf[46]);
f_1805(3,t4,t3,t2);}

/* k2314 in a2311 in k2277 in k2031 */
static void C_ccall f_2316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2283 in k2277 in k2031 */
static void C_ccall f_2284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2284,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2288,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#start-timer */
t3=*((C_word*)lf[96]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2286 in a2283 in k2277 in k2031 */
static void C_ccall f_2288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2288,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2293,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2299,tmp=(C_word)a,a+=2,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2298 in k2286 in a2283 in k2277 in k2031 */
static void C_ccall f_2299(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2299r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2299r(t0,t1,t2);}}

static void C_ccall f_2299r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2303,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2310,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#stop-timer */
t5=*((C_word*)lf[95]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k2308 in a2298 in k2286 in a2283 in k2277 in k2031 */
static void C_ccall f_2310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#display-times */
((C_proc3)C_fast_retrieve_symbol_proc(lf[94]))(3,*((C_word*)lf[94]+1),((C_word*)t0)[2],t1);}

/* k2301 in a2298 in k2286 in a2283 in k2277 in k2031 */
static void C_ccall f_2303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2292 in k2286 in a2283 in k2277 in k2031 */
static void C_ccall f_2293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2293,2,t0,t1);}
/* csi.scm:350: eval */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* k2268 in k2031 */
static void C_ccall f_2270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:345: string-split */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2218 in k2031 */
static void C_ccall f_2220(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2220,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2221,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(t1,lf[88]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2240,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2245,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2245(t8,t4,t1);}

/* for-each-loop255 in k2218 in k2031 */
static void C_fcall f_2245(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2245,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2255,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g256262 */
t5=((C_word*)t0)[2];
f_2221(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2253 in for-each-loop255 in k2218 in k2031 */
static void C_ccall f_2255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2245(t3,((C_word*)t0)[2],t2);}

/* k2238 in k2218 in k2031 */
static void C_ccall f_2240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* g256 in k2218 in k2031 */
static void C_fcall f_2221(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2221,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2227,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* g270271 */
t4=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t1,t2,lf[92],t3);}

/* a2226 in g256 in k2218 in k2031 */
static void C_ccall f_2227(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2227,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2231,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:346: pretty-print */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2229 in a2226 in g256 in k2218 in k2031 */
static void C_ccall f_2231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:346: print* */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[90]+1)))(3,*((C_word*)lf[90]+1),((C_word*)t0)[2],lf[91]);}

/* k2209 in k2031 */
static void C_ccall f_2211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:341: string-split */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2173 in k2031 */
static void C_ccall f_2175(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2175,2,t0,t1);}
t2=C_fast_retrieve(lf[87]);
t3=C_i_check_list_2(t1,lf[88]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2181,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2186,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2186(t8,t4,t1);}

/* for-each-loop237 in k2173 in k2031 */
static void C_fcall f_2186(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2186,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2196,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g238244 */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2194 in for-each-loop237 in k2173 in k2031 */
static void C_ccall f_2196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2186(t3,((C_word*)t0)[2],t2);}

/* k2179 in k2173 in k2031 */
static void C_ccall f_2181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k2134 in k2031 */
static void C_ccall f_2136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2136,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2139,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:334: read */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k2137 in k2134 in k2031 */
static void C_ccall f_2139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2139,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2142,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:335: eval */
t3=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2140 in k2137 in k2134 in k2031 */
static void C_ccall f_2142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2142,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2145,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:336: eval */
t3=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2143 in k2140 in k2137 in k2134 in k2031 */
static void C_ccall f_2145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:337: dump */
t2=C_fast_retrieve(lf[81]);
f_4061(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2119 in k2031 */
static void C_ccall f_2121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2121,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2124,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:330: eval */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}

/* k2122 in k2119 in k2031 */
static void C_ccall f_2124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:331: dump */
t2=C_fast_retrieve(lf[81]);
f_4061(3,t2,((C_word*)t0)[2],t1);}

/* k2104 in k2031 */
static void C_ccall f_2106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2106,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2109,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:326: eval */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}

/* k2107 in k2104 in k2031 */
static void C_ccall f_2109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:327: describe */
t2=C_fast_retrieve(lf[79]);
f_3055(3,t2,((C_word*)t0)[2],t1);}

/* k2086 in k2031 */
static void C_ccall f_2088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2088,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2091,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:321: eval */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}

/* k2089 in k2086 in k2031 */
static void C_ccall f_2091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2091,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2094,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:322: pretty-print */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,t1);}

/* k2092 in k2089 in k2086 in k2031 */
static void C_ccall f_2094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k2063 in k2031 */
static void C_ccall f_2065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2065,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2068,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2075,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2079,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:317: expand */
t5=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,t1);}

/* k2077 in k2063 in k2031 */
static void C_ccall f_2079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:317: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_symbol_proc(lf[76]))(3,*((C_word*)lf[76]+1),((C_word*)t0)[2],t1);}

/* k2073 in k2063 in k2031 */
static void C_ccall f_2075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:317: pretty-print */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2066 in k2063 in k2031 */
static void C_ccall f_2068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k2048 in k2031 */
static void C_ccall f_2050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* f_1954 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1954(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_1954r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1954r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1954r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1958,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_1958(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_1958(2,t7,C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k1956 */
static void C_ccall f_1958(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1958,2,t0,t1);}
t2=C_i_check_symbol_2(((C_word*)t0)[4],lf[64]);
t3=(C_truep(t1)?C_i_check_string_2(t1,lf[64]):C_SCHEME_UNDEFINED);
t4=C_i_assq(((C_word*)t0)[4],C_retrieve2(lf[63],"command-table"));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1974,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=f_1974(C_a_i(&a,6),t5,t4);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,*((C_word*)lf[47]+1));}
else{
t5=C_a_i_list3(&a,3,((C_word*)t0)[4],((C_word*)t0)[3],t1);
t6=C_a_i_cons(&a,2,t5,C_retrieve2(lf[63],"command-table"));
t7=C_mutate(&lf[63] /* (set! command-table ...) */,t6);
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,*((C_word*)lf[47]+1));}}

/* g180 in k1956 */
static C_word C_fcall f_1974(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
return(C_i_set_cdr(t1,t2));}

/* f_1941 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1941,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1948,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_fudge(C_fix(12));
if(C_truep(t3)){
if(C_truep(t3)){
/* csi.scm:275: old */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
/* csi.scm:268: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[59]))(3,*((C_word*)lf[59]+1),t2,*((C_word*)lf[60]+1));}}

/* k1946 */
static void C_ccall f_1948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* csi.scm:275: old */
t2=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_1928 in k1924 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1928,2,t0,t1);}
t2=C_fudge(C_fix(12));
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* csi.scm:268: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[59]))(3,*((C_word*)lf[59]+1),t1,*((C_word*)lf[60]+1));}}

/* f_1901 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1901(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1901,3,t0,t1,t2);}
t3=C_i_inexact_to_exact(t2);
t4=C_fixnum_greaterp(t3,C_fix(0));
t5=(C_truep(t4)?C_fixnum_less_or_equal_p(t3,C_fast_retrieve(lf[27])):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_vector_ref(C_fast_retrieve(lf[44]),t3));}
else{
/* csi.scm:255: ##sys#error */
t6=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[57],t2);}}

/* f_1854 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1854,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1860,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1860(t5,t1,C_fix(1));}

/* doloop130 */
static void C_fcall f_1860(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1860,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greater_or_equalp(t2,C_fast_retrieve(lf[27])))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=*((C_word*)lf[51]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1870,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* write-char/port */
t5=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(35),t3);}}

/* k1868 in doloop130 */
static void C_ccall f_1870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t2,((C_word*)t0)[6],((C_word*)t0)[2]);}

/* k1871 in k1868 in doloop130 */
static void C_ccall f_1873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1873,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1876,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t2,lf[54],((C_word*)t0)[2]);}

/* k1874 in k1871 in k1868 in doloop130 */
static void C_ccall f_1876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1876,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1891,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:245: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[53]))(4,*((C_word*)lf[53]+1),t2,C_fix(80),t3);}

/* a1890 in k1874 in k1871 in k1868 in doloop130 */
static void C_ccall f_1891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1891,2,t0,t1);}
t2=C_i_vector_ref(C_fast_retrieve(lf[44]),((C_word*)t0)[2]);
/* csi.scm:248: ##sys#print */
t3=*((C_word*)lf[52]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,t2,C_SCHEME_TRUE,*((C_word*)lf[51]+1));}

/* k1877 in k1874 in k1871 in k1868 in doloop130 */
static void C_ccall f_1879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1879,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1882,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:249: newline */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k1880 in k1877 in k1874 in k1871 in k1868 in doloop130 */
static void C_ccall f_1882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1860(t3,((C_word*)t0)[2],t2);}

/* f_1844 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1844,2,t0,t1);}
t2=*((C_word*)lf[47]+1);
/* csi.scm:237: vector-fill! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[49]+1)))(4,*((C_word*)lf[49]+1),t1,C_fast_retrieve(lf[44]),t2);}

/* f_1805 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1805(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1805,3,t0,t1,t2);}
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[47]+1):C_slot(t2,C_fix(0)));
t5=C_block_size(C_fast_retrieve(lf[44]));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1815,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(C_fast_retrieve(lf[27]),t5))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1829,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=C_fixnum_times(C_fix(2),t5);
/* csi.scm:231: vector-resize */
t9=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t9))(4,t9,t7,C_fast_retrieve(lf[44]),t8);}
else{
t7=t6;
f_1815(t7,C_SCHEME_UNDEFINED);}}

/* k1827 */
static void C_ccall f_1829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[44]+1 /* (set! ##csi#history-list ...) */,t1);
t3=((C_word*)t0)[2];
f_1815(t3,t2);}

/* k1813 */
static void C_fcall f_1815(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_vector_set(C_fast_retrieve(lf[44]),C_fast_retrieve(lf[27]),((C_word*)t0)[3]);
t3=C_fixnum_plus(C_fast_retrieve(lf[27]),C_fix(1));
t4=C_mutate((C_word*)lf[27]+1 /* (set! ##csi#history-count ...) */,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[3]);}

/* f_1699 in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1699(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1699,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1703,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:204: get-environment-variable */
((C_proc3)C_fast_retrieve_symbol_proc(lf[42]))(3,*((C_word*)lf[42]+1),t3,lf[43]);}

/* k1701 */
static void C_ccall f_1703(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1703,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[5]);
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
t3=C_i_string_ref(((C_word*)t0)[5],C_fix(0));
t4=C_i_char_equalp(t3,C_make_character(92));
t5=(C_truep(t4)?t4:C_i_char_equalp(t3,C_make_character(47)));
if(C_truep(t5)){
/* csi.scm:206: addext */
f_1651(((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
t6=((C_word*)t0)[5];
t7=C_block_size(t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1678,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=f_1678(t8,C_fix(0));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1727,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t11=((C_word*)t0)[2];
t12=C_a_i_bytevector(&a,1,C_fix(3));
t13=(C_truep(t11)?C_i_foreign_block_argumentp(t11):C_SCHEME_FALSE);
t14=C_i_foreign_fixnum_argumentp(C_fix(256));
t15=stub75(t12,t13,t14);
/* ##sys#peek-nonnull-c-string */
t16=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t10,t15,C_fix(0));}
else{
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1744,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:210: addext */
f_1651(t10,((C_word*)t0)[5]);}}}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1742 in k1701 */
static void C_ccall f_1744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1744,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1750,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:212: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t2,lf[41],((C_word*)t0)[2]);}}

/* k1748 in k1742 in k1701 */
static void C_ccall f_1750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1750,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1757,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:213: string-split */
((C_proc4)C_fast_retrieve_symbol_proc(lf[39]))(4,*((C_word*)lf[39]+1),t2,((C_word*)t0)[2],lf[40]);}

/* k1755 in k1748 in k1742 in k1701 */
static void C_ccall f_1757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1757,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1759,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1759(t5,((C_word*)t0)[2],t1);}

/* loop in k1755 in k1748 in k1742 in k1701 */
static void C_fcall f_1759(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1759,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1769,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1786,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(0));
/* csi.scm:215: chop-separator */
t6=C_fast_retrieve(lf[31]);
f_1601(3,t6,t4,t5);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1784 in loop in k1755 in k1748 in k1742 in k1701 */
static void C_ccall f_1786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:215: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1767 in loop in k1755 in k1748 in k1742 in k1701 */
static void C_ccall f_1769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1769,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1772,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:216: addext */
f_1651(t2,t1);}

/* k1770 in k1767 in loop in k1755 in k1748 in k1742 in k1701 */
static void C_ccall f_1772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* csi.scm:217: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1759(t3,((C_word*)t0)[4],t2);}}

/* k1725 in k1701 */
static void C_ccall f_1727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1727,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1737,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1741,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:209: chop-separator */
t4=C_fast_retrieve(lf[31]);
f_1601(3,t4,t3,t1);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k1739 in k1725 in k1701 */
static void C_ccall f_1741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:209: string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(5,*((C_word*)lf[34]+1),((C_word*)t0)[3],t1,lf[37],((C_word*)t0)[2]);}

/* k1735 in k1725 in k1701 */
static void C_ccall f_1737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:209: addext */
f_1651(((C_word*)t0)[2],t1);}

/* loop in k1701 */
static C_word C_fcall f_1678(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[3]))){
return(C_SCHEME_FALSE);}
else{
t2=C_subchar(((C_word*)t0)[2],t1);
t3=C_i_char_equalp(t2,C_make_character(92));
t4=(C_truep(t3)?t3:C_i_char_equalp(t2,C_make_character(47)));
if(C_truep(t4)){
return(t1);}
else{
t5=C_fixnum_plus(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}}}

/* addext in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_fcall f_1651(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1651,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1658,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:193: file-exists? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[33]))(3,*((C_word*)lf[33]+1),t3,t2);}

/* k1656 in addext in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1658,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1661,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:195: string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t2,((C_word*)t0)[3],lf[35]);}}

/* k1659 in k1656 in addext in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1661,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1667,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:196: file-exists? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[33]))(3,*((C_word*)lf[33]+1),t2,t1);}

/* k1665 in k1659 in k1656 in addext in k1630 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[2]:C_SCHEME_FALSE));}

/* f_1601 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1601(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1601,3,t0,t1,t2);}
t3=C_block_size(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
t5=C_i_string_ref(t2,t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1614,a[2]=t4,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
t7=C_i_char_equalp(t5,C_make_character(92));
t8=t6;
f_1614(t8,(C_truep(t7)?t7:C_i_char_equalp(t5,C_make_character(47))));}
else{
t7=t6;
f_1614(t7,C_SCHEME_FALSE);}}

/* k1612 */
static void C_fcall f_1614(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* csi.scm:181: substring */
t2=((C_word*)t0)[5];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_1579 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1579(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1579,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1587,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:167: history-ref */
t5=C_fast_retrieve(lf[28]);
f_1901(3,t5,t4,t3);}

/* k1585 */
static void C_ccall f_1587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1587,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[26],t1));}

/* f_1550 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1550(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1550,4,t0,t1,t2,t3);}
t4=C_i_char_equalp(C_make_character(41),t2);
t5=(C_truep(t4)?t4:C_u_i_char_whitespacep(t2));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1567,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_fixnum_difference(C_fast_retrieve(lf[27]),C_fix(1));
/* csi.scm:162: history-ref */
t8=C_fast_retrieve(lf[28]);
f_1901(3,t8,t6,t7);}
else{
/* csi.scm:163: old-hook */
t6=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t1,t2,t3);}}

/* k1565 */
static void C_ccall f_1567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1567,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[26],t1));}

/* f_1534 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1534,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1538,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:132: newline */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[24]+1)))(2,*((C_word*)lf[24]+1),t2);}

/* k1536 */
static void C_ccall f_1538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1538,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1541,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:150: print */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t2,lf[23]);}

/* k1539 in k1536 */
static void C_ccall f_1541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1541,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1548,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:151: chicken-version */
((C_proc3)C_fast_retrieve_symbol_proc(lf[22]))(3,*((C_word*)lf[22]+1),t2,C_SCHEME_TRUE);}

/* k1546 in k1539 in k1536 */
static void C_ccall f_1548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:151: print */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(5,*((C_word*)lf[19]+1),((C_word*)t0)[2],lf[20],t1,lf[21]);}

/* f_1506 in k1502 in k1499 in k1494 in k1481 in k1478 in k1475 in k1472 in k1469 */
static void C_ccall f_1506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1510,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:83: display */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t2,lf[17]);}

/* k1508 */
static void C_ccall f_1510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1510,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1513,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1520,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[14],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,lf[2],t4);
t6=C_a_i_cons(&a,2,lf[15],t5);
/* csi.scm:104: ##sys#print-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t3,t6);}

/* k1518 in k1508 */
static void C_ccall f_1520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:104: display */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1);}

/* k1511 in k1508 */
static void C_ccall f_1513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:109: display */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),((C_word*)t0)[2],lf[13]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[507] = {
{"toplevel:csi_2escm",(void*)C_toplevel},
{"f_1471:csi_2escm",(void*)f_1471},
{"f_1474:csi_2escm",(void*)f_1474},
{"f_1477:csi_2escm",(void*)f_1477},
{"f_1480:csi_2escm",(void*)f_1480},
{"f_1483:csi_2escm",(void*)f_1483},
{"f_1496:csi_2escm",(void*)f_1496},
{"f_1501:csi_2escm",(void*)f_1501},
{"f_6488:csi_2escm",(void*)f_6488},
{"f_6497:csi_2escm",(void*)f_6497},
{"f_1504:csi_2escm",(void*)f_1504},
{"f_1632:csi_2escm",(void*)f_1632},
{"f_6467:csi_2escm",(void*)f_6467},
{"f_6475:csi_2escm",(void*)f_6475},
{"f_6485:csi_2escm",(void*)f_6485},
{"f_6478:csi_2escm",(void*)f_6478},
{"f_1926:csi_2escm",(void*)f_1926},
{"f_6406:csi_2escm",(void*)f_6406},
{"f_6410:csi_2escm",(void*)f_6410},
{"f_6419:csi_2escm",(void*)f_6419},
{"f_6444:csi_2escm",(void*)f_6444},
{"f_6448:csi_2escm",(void*)f_6448},
{"f_6452:csi_2escm",(void*)f_6452},
{"f_6432:csi_2escm",(void*)f_6432},
{"f_2555:csi_2escm",(void*)f_2555},
{"f_2698:csi_2escm",(void*)f_2698},
{"f_2701:csi_2escm",(void*)f_2701},
{"f_3053:csi_2escm",(void*)f_3053},
{"f_6395:csi_2escm",(void*)f_6395},
{"f_6401:csi_2escm",(void*)f_6401},
{"f_6398:csi_2escm",(void*)f_6398},
{"f_5333:csi_2escm",(void*)f_5333},
{"f_6389:csi_2escm",(void*)f_6389},
{"f_2561:csi_2escm",(void*)f_2561},
{"f_2627:csi_2escm",(void*)f_2627},
{"f_2645:csi_2escm",(void*)f_2645},
{"f_2684:csi_2escm",(void*)f_2684},
{"f_2690:csi_2escm",(void*)f_2690},
{"f_2651:csi_2escm",(void*)f_2651},
{"f_2659:csi_2escm",(void*)f_2659},
{"f_2661:csi_2escm",(void*)f_2661},
{"f_2678:csi_2escm",(void*)f_2678},
{"f_2633:csi_2escm",(void*)f_2633},
{"f_2639:csi_2escm",(void*)f_2639},
{"f_2581:csi_2escm",(void*)f_2581},
{"f_2584:csi_2escm",(void*)f_2584},
{"f_2592:csi_2escm",(void*)f_2592},
{"f_2572:csi_2escm",(void*)f_2572},
{"f_2575:csi_2escm",(void*)f_2575},
{"f_2621:csi_2escm",(void*)f_2621},
{"f_2602:csi_2escm",(void*)f_2602},
{"f_5337:csi_2escm",(void*)f_5337},
{"f_6385:csi_2escm",(void*)f_6385},
{"f_5340:csi_2escm",(void*)f_5340},
{"f_5343:csi_2escm",(void*)f_5343},
{"f_5346:csi_2escm",(void*)f_5346},
{"f_6381:csi_2escm",(void*)f_6381},
{"f_6368:csi_2escm",(void*)f_6368},
{"f_6275:csi_2escm",(void*)f_6275},
{"f_6278:csi_2escm",(void*)f_6278},
{"f_6281:csi_2escm",(void*)f_6281},
{"f_6284:csi_2escm",(void*)f_6284},
{"f_6287:csi_2escm",(void*)f_6287},
{"f_6296:csi_2escm",(void*)f_6296},
{"f_5349:csi_2escm",(void*)f_5349},
{"f_5352:csi_2escm",(void*)f_5352},
{"f_6269:csi_2escm",(void*)f_6269},
{"f_5355:csi_2escm",(void*)f_5355},
{"f_5358:csi_2escm",(void*)f_5358},
{"f_5361:csi_2escm",(void*)f_5361},
{"f_6260:csi_2escm",(void*)f_6260},
{"f_5364:csi_2escm",(void*)f_5364},
{"f_6223:csi_2escm",(void*)f_6223},
{"f_6252:csi_2escm",(void*)f_6252},
{"f_5370:csi_2escm",(void*)f_5370},
{"f_6215:csi_2escm",(void*)f_6215},
{"f_6218:csi_2escm",(void*)f_6218},
{"f_5527:csi_2escm",(void*)f_5527},
{"f_6206:csi_2escm",(void*)f_6206},
{"f_6209:csi_2escm",(void*)f_6209},
{"f_5530:csi_2escm",(void*)f_5530},
{"f_5533:csi_2escm",(void*)f_5533},
{"f_6199:csi_2escm",(void*)f_6199},
{"f_6192:csi_2escm",(void*)f_6192},
{"f_5536:csi_2escm",(void*)f_5536},
{"f_6179:csi_2escm",(void*)f_6179},
{"f_6182:csi_2escm",(void*)f_6182},
{"f_5539:csi_2escm",(void*)f_5539},
{"f_6173:csi_2escm",(void*)f_6173},
{"f_5542:csi_2escm",(void*)f_5542},
{"f_6158:csi_2escm",(void*)f_6158},
{"f7195:csi_2escm",(void*)f7195},
{"f_6161:csi_2escm",(void*)f_6161},
{"f_6164:csi_2escm",(void*)f_6164},
{"f_5545:csi_2escm",(void*)f_5545},
{"f_5548:csi_2escm",(void*)f_5548},
{"f_6134:csi_2escm",(void*)f_6134},
{"f_6144:csi_2escm",(void*)f_6144},
{"f_5554:csi_2escm",(void*)f_5554},
{"f_5557:csi_2escm",(void*)f_5557},
{"f_6111:csi_2escm",(void*)f_6111},
{"f_6121:csi_2escm",(void*)f_6121},
{"f_5563:csi_2escm",(void*)f_5563},
{"f_5566:csi_2escm",(void*)f_5566},
{"f_6088:csi_2escm",(void*)f_6088},
{"f_6098:csi_2escm",(void*)f_6098},
{"f_5572:csi_2escm",(void*)f_5572},
{"f_6000:csi_2escm",(void*)f_6000},
{"f_6053:csi_2escm",(void*)f_6053},
{"f_6082:csi_2escm",(void*)f_6082},
{"f_6006:csi_2escm",(void*)f_6006},
{"f_6010:csi_2escm",(void*)f_6010},
{"f_6018:csi_2escm",(void*)f_6018},
{"f_6047:csi_2escm",(void*)f_6047},
{"f_6016:csi_2escm",(void*)f_6016},
{"f_5996:csi_2escm",(void*)f_5996},
{"f_5576:csi_2escm",(void*)f_5576},
{"f_5579:csi_2escm",(void*)f_5579},
{"f_5927:csi_2escm",(void*)f_5927},
{"f_5930:csi_2escm",(void*)f_5930},
{"f_5582:csi_2escm",(void*)f_5582},
{"f_5915:csi_2escm",(void*)f_5915},
{"f_5918:csi_2escm",(void*)f_5918},
{"f_5585:csi_2escm",(void*)f_5585},
{"f_5894:csi_2escm",(void*)f_5894},
{"f_5897:csi_2escm",(void*)f_5897},
{"f_5900:csi_2escm",(void*)f_5900},
{"f_5903:csi_2escm",(void*)f_5903},
{"f_5906:csi_2escm",(void*)f_5906},
{"f_5588:csi_2escm",(void*)f_5588},
{"f_5882:csi_2escm",(void*)f_5882},
{"f_5885:csi_2escm",(void*)f_5885},
{"f_5424:csi_2escm",(void*)f_5424},
{"f_5430:csi_2escm",(void*)f_5430},
{"f_5452:csi_2escm",(void*)f_5452},
{"f_5436:csi_2escm",(void*)f_5436},
{"f_5439:csi_2escm",(void*)f_5439},
{"f_5445:csi_2escm",(void*)f_5445},
{"f_5591:csi_2escm",(void*)f_5591},
{"f_5594:csi_2escm",(void*)f_5594},
{"f_5599:csi_2escm",(void*)f_5599},
{"f_5804:csi_2escm",(void*)f_5804},
{"f_5859:csi_2escm",(void*)f_5859},
{"f_5808:csi_2escm",(void*)f_5808},
{"f_5814:csi_2escm",(void*)f_5814},
{"f_5817:csi_2escm",(void*)f_5817},
{"f_5828:csi_2escm",(void*)f_5828},
{"f_5841:csi_2escm",(void*)f_5841},
{"f_5844:csi_2escm",(void*)f_5844},
{"f_5820:csi_2escm",(void*)f_5820},
{"f_5823:csi_2escm",(void*)f_5823},
{"f_5751:csi_2escm",(void*)f_5751},
{"f_5772:csi_2escm",(void*)f_5772},
{"f_5762:csi_2escm",(void*)f_5762},
{"f_5770:csi_2escm",(void*)f_5770},
{"f_5741:csi_2escm",(void*)f_5741},
{"f_5731:csi_2escm",(void*)f_5731},
{"f_5715:csi_2escm",(void*)f_5715},
{"f_5705:csi_2escm",(void*)f_5705},
{"f_5685:csi_2escm",(void*)f_5685},
{"f_5669:csi_2escm",(void*)f_5669},
{"f_5653:csi_2escm",(void*)f_5653},
{"f_5624:csi_2escm",(void*)f_5624},
{"f_5612:csi_2escm",(void*)f_5612},
{"f_5457:csi_2escm",(void*)f_5457},
{"f_5504:csi_2escm",(void*)f_5504},
{"f_5461:csi_2escm",(void*)f_5461},
{"f_5464:csi_2escm",(void*)f_5464},
{"f_5471:csi_2escm",(void*)f_5471},
{"f_5473:csi_2escm",(void*)f_5473},
{"f_5496:csi_2escm",(void*)f_5496},
{"f_5494:csi_2escm",(void*)f_5494},
{"f_5483:csi_2escm",(void*)f_5483},
{"f_5490:csi_2escm",(void*)f_5490},
{"f_5372:csi_2escm",(void*)f_5372},
{"f_5378:csi_2escm",(void*)f_5378},
{"f_5386:csi_2escm",(void*)f_5386},
{"f_5407:csi_2escm",(void*)f_5407},
{"f_5151:csi_2escm",(void*)f_5151},
{"f_5157:csi_2escm",(void*)f_5157},
{"f_5179:csi_2escm",(void*)f_5179},
{"f_5273:csi_2escm",(void*)f_5273},
{"f_5266:csi_2escm",(void*)f_5266},
{"f_5195:csi_2escm",(void*)f_5195},
{"f_5226:csi_2escm",(void*)f_5226},
{"f_5255:csi_2escm",(void*)f_5255},
{"f_5216:csi_2escm",(void*)f_5216},
{"f_5220:csi_2escm",(void*)f_5220},
{"f_5305:csi_2escm",(void*)f_5305},
{"f_5094:csi_2escm",(void*)f_5094},
{"f_5100:csi_2escm",(void*)f_5100},
{"f_5112:csi_2escm",(void*)f_5112},
{"f_5035:csi_2escm",(void*)f_5035},
{"f_5039:csi_2escm",(void*)f_5039},
{"f_5044:csi_2escm",(void*)f_5044},
{"f_5073:csi_2escm",(void*)f_5073},
{"f_5060:csi_2escm",(void*)f_5060},
{"f_4997:csi_2escm",(void*)f_4997},
{"f_5003:csi_2escm",(void*)f_5003},
{"f_5019:csi_2escm",(void*)f_5019},
{"f_5029:csi_2escm",(void*)f_5029},
{"f_4752:csi_2escm",(void*)f_4752},
{"f_4995:csi_2escm",(void*)f_4995},
{"f_4762:csi_2escm",(void*)f_4762},
{"f_4795:csi_2escm",(void*)f_4795},
{"f_4817:csi_2escm",(void*)f_4817},
{"f_4942:csi_2escm",(void*)f_4942},
{"f_4952:csi_2escm",(void*)f_4952},
{"f_4933:csi_2escm",(void*)f_4933},
{"f_4940:csi_2escm",(void*)f_4940},
{"f_4853:csi_2escm",(void*)f_4853},
{"f_4859:csi_2escm",(void*)f_4859},
{"f_4883:csi_2escm",(void*)f_4883},
{"f_4886:csi_2escm",(void*)f_4886},
{"f_4889:csi_2escm",(void*)f_4889},
{"f_4892:csi_2escm",(void*)f_4892},
{"f_4895:csi_2escm",(void*)f_4895},
{"f_4869:csi_2escm",(void*)f_4869},
{"f_4842:csi_2escm",(void*)f_4842},
{"f_4798:csi_2escm",(void*)f_4798},
{"f_4802:csi_2escm",(void*)f_4802},
{"f_4805:csi_2escm",(void*)f_4805},
{"f_4764:csi_2escm",(void*)f_4764},
{"f_4779:csi_2escm",(void*)f_4779},
{"f_4775:csi_2escm",(void*)f_4775},
{"f_4695:csi_2escm",(void*)f_4695},
{"f_4705:csi_2escm",(void*)f_4705},
{"f_4424:csi_2escm",(void*)f_4424},
{"f_4450:csi_2escm",(void*)f_4450},
{"f_4459:csi_2escm",(void*)f_4459},
{"f_4487:csi_2escm",(void*)f_4487},
{"f_4490:csi_2escm",(void*)f_4490},
{"f_4493:csi_2escm",(void*)f_4493},
{"f_4663:csi_2escm",(void*)f_4663},
{"f_4496:csi_2escm",(void*)f_4496},
{"f_4499:csi_2escm",(void*)f_4499},
{"f_4502:csi_2escm",(void*)f_4502},
{"f_4505:csi_2escm",(void*)f_4505},
{"f_4646:csi_2escm",(void*)f_4646},
{"f_4649:csi_2escm",(void*)f_4649},
{"f_4508:csi_2escm",(void*)f_4508},
{"f_4511:csi_2escm",(void*)f_4511},
{"f_4514:csi_2escm",(void*)f_4514},
{"f_4605:csi_2escm",(void*)f_4605},
{"f_4615:csi_2escm",(void*)f_4615},
{"f_4532:csi_2escm",(void*)f_4532},
{"f_4542:csi_2escm",(void*)f_4542},
{"f_4547:csi_2escm",(void*)f_4547},
{"f_4557:csi_2escm",(void*)f_4557},
{"f_4560:csi_2escm",(void*)f_4560},
{"f_4563:csi_2escm",(void*)f_4563},
{"f_4566:csi_2escm",(void*)f_4566},
{"f_4569:csi_2escm",(void*)f_4569},
{"f_4517:csi_2escm",(void*)f_4517},
{"f_4427:csi_2escm",(void*)f_4427},
{"f_4433:csi_2escm",(void*)f_4433},
{"f_4222:csi_2escm",(void*)f_4222},
{"f_4254:csi_2escm",(void*)f_4254},
{"f_4422:csi_2escm",(void*)f_4422},
{"f_4264:csi_2escm",(void*)f_4264},
{"f_4267:csi_2escm",(void*)f_4267},
{"f_4339:csi_2escm",(void*)f_4339},
{"f_4393:csi_2escm",(void*)f_4393},
{"f_4415:csi_2escm",(void*)f_4415},
{"f_4411:csi_2escm",(void*)f_4411},
{"f_4396:csi_2escm",(void*)f_4396},
{"f_4373:csi_2escm",(void*)f_4373},
{"f_4383:csi_2escm",(void*)f_4383},
{"f_4270:csi_2escm",(void*)f_4270},
{"f_4273:csi_2escm",(void*)f_4273},
{"f_4288:csi_2escm",(void*)f_4288},
{"f_4301:csi_2escm",(void*)f_4301},
{"f_4304:csi_2escm",(void*)f_4304},
{"f_4276:csi_2escm",(void*)f_4276},
{"f_4279:csi_2escm",(void*)f_4279},
{"f_4225:csi_2escm",(void*)f_4225},
{"f_4229:csi_2escm",(void*)f_4229},
{"f_4245:csi_2escm",(void*)f_4245},
{"f_4061:csi_2escm",(void*)f_4061},
{"f_4174:csi_2escm",(void*)f_4174},
{"f_4169:csi_2escm",(void*)f_4169},
{"f_4063:csi_2escm",(void*)f_4063},
{"f_4088:csi_2escm",(void*)f_4088},
{"f_4131:csi_2escm",(void*)f_4131},
{"f_4141:csi_2escm",(void*)f_4141},
{"f_4112:csi_2escm",(void*)f_4112},
{"f_4095:csi_2escm",(void*)f_4095},
{"f_4066:csi_2escm",(void*)f_4066},
{"f_4052:csi_2escm",(void*)f_4052},
{"f_4056:csi_2escm",(void*)f_4056},
{"f_3055:csi_2escm",(void*)f_3055},
{"f_3059:csi_2escm",(void*)f_3059},
{"f_4031:csi_2escm",(void*)f_4031},
{"f_3187:csi_2escm",(void*)f_3187},
{"f_3322:csi_2escm",(void*)f_3322},
{"f_3021:csi_2escm",(void*)f_3021},
{"f_3434:csi_2escm",(void*)f_3434},
{"f_3563:csi_2escm",(void*)f_3563},
{"f_3591:csi_2escm",(void*)f_3591},
{"f_3685:csi_2escm",(void*)f_3685},
{"f_3919:csi_2escm",(void*)f_3919},
{"f_4000:csi_2escm",(void*)f_4000},
{"f_3937:csi_2escm",(void*)f_3937},
{"f_3961:csi_2escm",(void*)f_3961},
{"f_3990:csi_2escm",(void*)f_3990},
{"f_3955:csi_2escm",(void*)f_3955},
{"f_3945:csi_2escm",(void*)f_3945},
{"f_3923:csi_2escm",(void*)f_3923},
{"f_3813:csi_2escm",(void*)f_3813},
{"f_3882:csi_2escm",(void*)f_3882},
{"f_3892:csi_2escm",(void*)f_3892},
{"f_3814:csi_2escm",(void*)f_3814},
{"f_3818:csi_2escm",(void*)f_3818},
{"f_3827:csi_2escm",(void*)f_3827},
{"f_3855:csi_2escm",(void*)f_3855},
{"f_3850:csi_2escm",(void*)f_3850},
{"f_3837:csi_2escm",(void*)f_3837},
{"f_3716:csi_2escm",(void*)f_3716},
{"f_3719:csi_2escm",(void*)f_3719},
{"f_3730:csi_2escm",(void*)f_3730},
{"f_3768:csi_2escm",(void*)f_3768},
{"f_3778:csi_2escm",(void*)f_3778},
{"f_3759:csi_2escm",(void*)f_3759},
{"f_3738:csi_2escm",(void*)f_3738},
{"f_3704:csi_2escm",(void*)f_3704},
{"f_3691:csi_2escm",(void*)f_3691},
{"f_3679:csi_2escm",(void*)f_3679},
{"f_3598:csi_2escm",(void*)f_3598},
{"f_3582:csi_2escm",(void*)f_3582},
{"f_3557:csi_2escm",(void*)f_3557},
{"f_3553:csi_2escm",(void*)f_3553},
{"f_3437:csi_2escm",(void*)f_3437},
{"f_3446:csi_2escm",(void*)f_3446},
{"f_3477:csi_2escm",(void*)f_3477},
{"f_2982:csi_2escm",(void*)f_2982},
{"f_3422:csi_2escm",(void*)f_3422},
{"f_3338:csi_2escm",(void*)f_3338},
{"f_3341:csi_2escm",(void*)f_3341},
{"f_3419:csi_2escm",(void*)f_3419},
{"f_3410:csi_2escm",(void*)f_3410},
{"f_3344:csi_2escm",(void*)f_3344},
{"f_3356:csi_2escm",(void*)f_3356},
{"f_3361:csi_2escm",(void*)f_3361},
{"f_3371:csi_2escm",(void*)f_3371},
{"f_3386:csi_2escm",(void*)f_3386},
{"f_3374:csi_2escm",(void*)f_3374},
{"f_3377:csi_2escm",(void*)f_3377},
{"f_3329:csi_2escm",(void*)f_3329},
{"f_3256:csi_2escm",(void*)f_3256},
{"f_3262:csi_2escm",(void*)f_3262},
{"f_3190:csi_2escm",(void*)f_3190},
{"f_3061:csi_2escm",(void*)f_3061},
{"f_3184:csi_2escm",(void*)f_3184},
{"f_3068:csi_2escm",(void*)f_3068},
{"f_3073:csi_2escm",(void*)f_3073},
{"f_3096:csi_2escm",(void*)f_3096},
{"f_3105:csi_2escm",(void*)f_3105},
{"f_3169:csi_2escm",(void*)f_3169},
{"f_3115:csi_2escm",(void*)f_3115},
{"f_3118:csi_2escm",(void*)f_3118},
{"f_2702:csi_2escm",(void*)f_2702},
{"f_2710:csi_2escm",(void*)f_2710},
{"f_2712:csi_2escm",(void*)f_2712},
{"f_2716:csi_2escm",(void*)f_2716},
{"f_2719:csi_2escm",(void*)f_2719},
{"f_2722:csi_2escm",(void*)f_2722},
{"f_2739:csi_2escm",(void*)f_2739},
{"f_2931:csi_2escm",(void*)f_2931},
{"f_2960:csi_2escm",(void*)f_2960},
{"f_2929:csi_2escm",(void*)f_2929},
{"f_2742:csi_2escm",(void*)f_2742},
{"f_2901:csi_2escm",(void*)f_2901},
{"f_2911:csi_2escm",(void*)f_2911},
{"f_2794:csi_2escm",(void*)f_2794},
{"f_2822:csi_2escm",(void*)f_2822},
{"f_2830:csi_2escm",(void*)f_2830},
{"f_2834:csi_2escm",(void*)f_2834},
{"f_2838:csi_2escm",(void*)f_2838},
{"f_2842:csi_2escm",(void*)f_2842},
{"f_2846:csi_2escm",(void*)f_2846},
{"f_2850:csi_2escm",(void*)f_2850},
{"f_2878:csi_2escm",(void*)f_2878},
{"f_2797:csi_2escm",(void*)f_2797},
{"f_2800:csi_2escm",(void*)f_2800},
{"f_2803:csi_2escm",(void*)f_2803},
{"f_2806:csi_2escm",(void*)f_2806},
{"f_2743:csi_2escm",(void*)f_2743},
{"f_2747:csi_2escm",(void*)f_2747},
{"f_2760:csi_2escm",(void*)f_2760},
{"f_2777:csi_2escm",(void*)f_2777},
{"f_2769:csi_2escm",(void*)f_2769},
{"f_2724:csi_2escm",(void*)f_2724},
{"f_2732:csi_2escm",(void*)f_2732},
{"f_2017:csi_2escm",(void*)f_2017},
{"f_2033:csi_2escm",(void*)f_2033},
{"f_2535:csi_2escm",(void*)f_2535},
{"f_2539:csi_2escm",(void*)f_2539},
{"f_2529:csi_2escm",(void*)f_2529},
{"f_2521:csi_2escm",(void*)f_2521},
{"f_2468:csi_2escm",(void*)f_2468},
{"f_2497:csi_2escm",(void*)f_2497},
{"f_2507:csi_2escm",(void*)f_2507},
{"f_2492:csi_2escm",(void*)f_2492},
{"f_2449:csi_2escm",(void*)f_2449},
{"f_2452:csi_2escm",(void*)f_2452},
{"f_2455:csi_2escm",(void*)f_2455},
{"f_2440:csi_2escm",(void*)f_2440},
{"f_2427:csi_2escm",(void*)f_2427},
{"f_2420:csi_2escm",(void*)f_2420},
{"f_2408:csi_2escm",(void*)f_2408},
{"f_2396:csi_2escm",(void*)f_2396},
{"f_2384:csi_2escm",(void*)f_2384},
{"f_2368:csi_2escm",(void*)f_2368},
{"f7065:csi_2escm",(void*)f7065},
{"f7061:csi_2escm",(void*)f7061},
{"f_2364:csi_2escm",(void*)f_2364},
{"f_2347:csi_2escm",(void*)f_2347},
{"f_2331:csi_2escm",(void*)f_2331},
{"f_2279:csi_2escm",(void*)f_2279},
{"f_2312:csi_2escm",(void*)f_2312},
{"f_2316:csi_2escm",(void*)f_2316},
{"f_2284:csi_2escm",(void*)f_2284},
{"f_2288:csi_2escm",(void*)f_2288},
{"f_2299:csi_2escm",(void*)f_2299},
{"f_2310:csi_2escm",(void*)f_2310},
{"f_2303:csi_2escm",(void*)f_2303},
{"f_2293:csi_2escm",(void*)f_2293},
{"f_2270:csi_2escm",(void*)f_2270},
{"f_2220:csi_2escm",(void*)f_2220},
{"f_2245:csi_2escm",(void*)f_2245},
{"f_2255:csi_2escm",(void*)f_2255},
{"f_2240:csi_2escm",(void*)f_2240},
{"f_2221:csi_2escm",(void*)f_2221},
{"f_2227:csi_2escm",(void*)f_2227},
{"f_2231:csi_2escm",(void*)f_2231},
{"f_2211:csi_2escm",(void*)f_2211},
{"f_2175:csi_2escm",(void*)f_2175},
{"f_2186:csi_2escm",(void*)f_2186},
{"f_2196:csi_2escm",(void*)f_2196},
{"f_2181:csi_2escm",(void*)f_2181},
{"f_2136:csi_2escm",(void*)f_2136},
{"f_2139:csi_2escm",(void*)f_2139},
{"f_2142:csi_2escm",(void*)f_2142},
{"f_2145:csi_2escm",(void*)f_2145},
{"f_2121:csi_2escm",(void*)f_2121},
{"f_2124:csi_2escm",(void*)f_2124},
{"f_2106:csi_2escm",(void*)f_2106},
{"f_2109:csi_2escm",(void*)f_2109},
{"f_2088:csi_2escm",(void*)f_2088},
{"f_2091:csi_2escm",(void*)f_2091},
{"f_2094:csi_2escm",(void*)f_2094},
{"f_2065:csi_2escm",(void*)f_2065},
{"f_2079:csi_2escm",(void*)f_2079},
{"f_2075:csi_2escm",(void*)f_2075},
{"f_2068:csi_2escm",(void*)f_2068},
{"f_2050:csi_2escm",(void*)f_2050},
{"f_1954:csi_2escm",(void*)f_1954},
{"f_1958:csi_2escm",(void*)f_1958},
{"f_1974:csi_2escm",(void*)f_1974},
{"f_1941:csi_2escm",(void*)f_1941},
{"f_1948:csi_2escm",(void*)f_1948},
{"f_1928:csi_2escm",(void*)f_1928},
{"f_1901:csi_2escm",(void*)f_1901},
{"f_1854:csi_2escm",(void*)f_1854},
{"f_1860:csi_2escm",(void*)f_1860},
{"f_1870:csi_2escm",(void*)f_1870},
{"f_1873:csi_2escm",(void*)f_1873},
{"f_1876:csi_2escm",(void*)f_1876},
{"f_1891:csi_2escm",(void*)f_1891},
{"f_1879:csi_2escm",(void*)f_1879},
{"f_1882:csi_2escm",(void*)f_1882},
{"f_1844:csi_2escm",(void*)f_1844},
{"f_1805:csi_2escm",(void*)f_1805},
{"f_1829:csi_2escm",(void*)f_1829},
{"f_1815:csi_2escm",(void*)f_1815},
{"f_1699:csi_2escm",(void*)f_1699},
{"f_1703:csi_2escm",(void*)f_1703},
{"f_1744:csi_2escm",(void*)f_1744},
{"f_1750:csi_2escm",(void*)f_1750},
{"f_1757:csi_2escm",(void*)f_1757},
{"f_1759:csi_2escm",(void*)f_1759},
{"f_1786:csi_2escm",(void*)f_1786},
{"f_1769:csi_2escm",(void*)f_1769},
{"f_1772:csi_2escm",(void*)f_1772},
{"f_1727:csi_2escm",(void*)f_1727},
{"f_1741:csi_2escm",(void*)f_1741},
{"f_1737:csi_2escm",(void*)f_1737},
{"f_1678:csi_2escm",(void*)f_1678},
{"f_1651:csi_2escm",(void*)f_1651},
{"f_1658:csi_2escm",(void*)f_1658},
{"f_1661:csi_2escm",(void*)f_1661},
{"f_1667:csi_2escm",(void*)f_1667},
{"f_1601:csi_2escm",(void*)f_1601},
{"f_1614:csi_2escm",(void*)f_1614},
{"f_1579:csi_2escm",(void*)f_1579},
{"f_1587:csi_2escm",(void*)f_1587},
{"f_1550:csi_2escm",(void*)f_1550},
{"f_1567:csi_2escm",(void*)f_1567},
{"f_1534:csi_2escm",(void*)f_1534},
{"f_1538:csi_2escm",(void*)f_1538},
{"f_1541:csi_2escm",(void*)f_1541},
{"f_1548:csi_2escm",(void*)f_1548},
{"f_1506:csi_2escm",(void*)f_1506},
{"f_1510:csi_2escm",(void*)f_1510},
{"f_1520:csi_2escm",(void*)f_1520},
{"f_1513:csi_2escm",(void*)f_1513},
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
