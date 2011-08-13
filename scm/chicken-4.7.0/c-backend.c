/* Generated from c-backend.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:18
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: c-backend.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file c-backend.c
   unit: backend
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[869];
static double C_possibly_force_alignment;


#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub2204(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub2204(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word lit=(C_word )(C_a0);
return(C_header_size(lit));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub2200(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub2200(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word lit=(C_word )(C_a0);

#ifdef C_SIXTY_FOUR
return((C_header_bits(lit) >> (24 + 32)) & 0xff);
#else
return((C_header_bits(lit) >> 24) & 0xff);
#endif

C_ret:
#undef return

return C_r;}

C_noret_decl(C_backend_toplevel)
C_externexport void C_ccall C_backend_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2246)
static void C_ccall f_2246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2249)
static void C_ccall f_2249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10310)
static void C_ccall f_10310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10313)
static void C_ccall f_10313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10340)
static void C_ccall f_10340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10336)
static void C_ccall f_10336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10316)
static void C_ccall f_10316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10319)
static void C_ccall f_10319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10332)
static void C_ccall f_10332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10322)
static void C_ccall f_10322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10325)
static void C_ccall f_10325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10328)
static void C_ccall f_10328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10010)
static void C_ccall f_10010(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10286)
static void C_ccall f_10286(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10284)
static void C_ccall f_10284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10272)
static void C_ccall f_10272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10242)
static void C_ccall f_10242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10203)
static void C_ccall f_10203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10190)
static void C_ccall f_10190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10186)
static void C_ccall f_10186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10072)
static void C_ccall f_10072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10019)
static C_word C_fcall f_10019(C_word *a,C_word t0);
C_noret_decl(f_9376)
static void C_ccall f_9376(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9487)
static void C_fcall f_9487(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9676)
static void C_ccall f_9676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9703)
static void C_fcall f_9703(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9881)
static void C_ccall f_9881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9884)
static void C_ccall f_9884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9887)
static void C_ccall f_9887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9890)
static void C_ccall f_9890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9860)
static void C_ccall f_9860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9863)
static void C_ccall f_9863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9866)
static void C_ccall f_9866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9869)
static void C_ccall f_9869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9839)
static void C_ccall f_9839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9842)
static void C_ccall f_9842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9845)
static void C_ccall f_9845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9848)
static void C_ccall f_9848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9802)
static void C_ccall f_9802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9805)
static void C_ccall f_9805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9808)
static void C_ccall f_9808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9811)
static void C_ccall f_9811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9781)
static void C_ccall f_9781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9784)
static void C_ccall f_9784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9787)
static void C_ccall f_9787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9790)
static void C_ccall f_9790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9760)
static void C_ccall f_9760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9763)
static void C_ccall f_9763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9766)
static void C_ccall f_9766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9769)
static void C_ccall f_9769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9739)
static void C_ccall f_9739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9742)
static void C_ccall f_9742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9745)
static void C_ccall f_9745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9748)
static void C_ccall f_9748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9718)
static void C_ccall f_9718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9721)
static void C_ccall f_9721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9724)
static void C_ccall f_9724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9727)
static void C_ccall f_9727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9680)
static void C_fcall f_9680(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9646)
static void C_ccall f_9646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9649)
static void C_ccall f_9649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9652)
static void C_ccall f_9652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9655)
static void C_ccall f_9655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9625)
static void C_ccall f_9625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9628)
static void C_ccall f_9628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9631)
static void C_ccall f_9631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9634)
static void C_ccall f_9634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9604)
static void C_ccall f_9604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9607)
static void C_ccall f_9607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9610)
static void C_ccall f_9610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9613)
static void C_ccall f_9613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9580)
static void C_ccall f_9580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9583)
static void C_ccall f_9583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9586)
static void C_ccall f_9586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9589)
static void C_ccall f_9589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9559)
static void C_ccall f_9559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9562)
static void C_ccall f_9562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9565)
static void C_ccall f_9565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9568)
static void C_ccall f_9568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9535)
static void C_ccall f_9535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9538)
static void C_ccall f_9538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9541)
static void C_ccall f_9541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9544)
static void C_ccall f_9544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9511)
static void C_ccall f_9511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9514)
static void C_ccall f_9514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9517)
static void C_ccall f_9517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9520)
static void C_ccall f_9520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9490)
static void C_ccall f_9490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9493)
static void C_ccall f_9493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9496)
static void C_ccall f_9496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9499)
static void C_ccall f_9499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9466)
static void C_ccall f_9466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9469)
static void C_ccall f_9469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9472)
static void C_ccall f_9472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9475)
static void C_ccall f_9475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9445)
static void C_ccall f_9445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9448)
static void C_ccall f_9448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9451)
static void C_ccall f_9451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9454)
static void C_ccall f_9454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9378)
static void C_fcall f_9378(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8898)
static void C_ccall f_8898(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8928)
static void C_fcall f_8928(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8955)
static void C_fcall f_8955(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9150)
static void C_fcall f_9150(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9159)
static void C_fcall f_9159(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9168)
static void C_ccall f_9168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9195)
static void C_fcall f_9195(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9260)
static void C_ccall f_9260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8900)
static void C_fcall f_8900(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7972)
static void C_ccall f_7972(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8049)
static void C_fcall f_8049(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8157)
static void C_fcall f_8157(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8178)
static void C_fcall f_8178(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8286)
static void C_fcall f_8286(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8298)
static void C_fcall f_8298(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8313)
static void C_ccall f_8313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8358)
static void C_fcall f_8358(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8375)
static void C_fcall f_8375(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8392)
static void C_fcall f_8392(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8467)
static void C_fcall f_8467(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8484)
static void C_fcall f_8484(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8501)
static void C_fcall f_8501(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8518)
static void C_fcall f_8518(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8535)
static void C_fcall f_8535(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8552)
static void C_fcall f_8552(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8569)
static void C_fcall f_8569(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8581)
static void C_ccall f_8581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8588)
static void C_ccall f_8588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8612)
static void C_fcall f_8612(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8641)
static void C_ccall f_8641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8622)
static void C_fcall f_8622(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8610)
static void C_ccall f_8610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8592)
static void C_ccall f_8592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8559)
static void C_ccall f_8559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8542)
static void C_ccall f_8542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8525)
static void C_ccall f_8525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8508)
static void C_ccall f_8508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8491)
static void C_ccall f_8491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8474)
static void C_ccall f_8474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8403)
static void C_ccall f_8403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8424)
static void C_fcall f_8424(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8453)
static void C_ccall f_8453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8422)
static void C_ccall f_8422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8407)
static void C_ccall f_8407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8399)
static void C_ccall f_8399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8386)
static void C_ccall f_8386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8369)
static void C_ccall f_8369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8317)
static void C_fcall f_8317(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7979)
static void C_fcall f_7979(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7974)
static void C_fcall f_7974(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7907)
static void C_ccall f_7907(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7911)
static void C_ccall f_7911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7914)
static void C_ccall f_7914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7917)
static void C_ccall f_7917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7920)
static void C_ccall f_7920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7926)
static void C_ccall f_7926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7970)
static void C_ccall f_7970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7929)
static void C_ccall f_7929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7937)
static void C_ccall f_7937(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7958)
static void C_ccall f_7958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7941)
static void C_ccall f_7941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7932)
static void C_ccall f_7932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7392)
static void C_ccall f_7392(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7884)
static void C_fcall f_7884(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7894)
static void C_ccall f_7894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7394)
static void C_fcall f_7394(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7398)
static void C_ccall f_7398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7401)
static void C_ccall f_7401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7404)
static void C_ccall f_7404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7407)
static void C_ccall f_7407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7413)
static void C_ccall f_7413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7771)
static void C_ccall f_7771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7774)
static void C_ccall f_7774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7876)
static void C_ccall f_7876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7777)
static void C_ccall f_7777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7780)
static void C_ccall f_7780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7783)
static void C_ccall f_7783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7786)
static void C_ccall f_7786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7834)
static void C_fcall f_7834(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7795)
static void C_ccall f_7795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7844)
static void C_ccall f_7844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7804)
static void C_ccall f_7804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7832)
static void C_ccall f_7832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7807)
static void C_ccall f_7807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7810)
static void C_ccall f_7810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7813)
static void C_ccall f_7813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7415)
static void C_ccall f_7415(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7425)
static void C_fcall f_7425(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7434)
static void C_fcall f_7434(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7446)
static void C_fcall f_7446(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7458)
static void C_fcall f_7458(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7464)
static void C_ccall f_7464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7503)
static void C_fcall f_7503(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7468)
static void C_fcall f_7468(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7067)
static void C_ccall f_7067(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7369)
static void C_fcall f_7369(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7379)
static void C_ccall f_7379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7069)
static void C_fcall f_7069(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7073)
static void C_ccall f_7073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7076)
static void C_ccall f_7076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7079)
static void C_ccall f_7079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7361)
static void C_ccall f_7361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7085)
static void C_ccall f_7085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7088)
static void C_ccall f_7088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7091)
static void C_ccall f_7091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7094)
static void C_ccall f_7094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7097)
static void C_ccall f_7097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7100)
static void C_ccall f_7100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7103)
static void C_ccall f_7103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7106)
static void C_ccall f_7106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7109)
static void C_ccall f_7109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7112)
static void C_ccall f_7112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7350)
static void C_ccall f_7350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7115)
static void C_ccall f_7115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7118)
static void C_ccall f_7118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7121)
static void C_ccall f_7121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7124)
static void C_ccall f_7124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7127)
static void C_ccall f_7127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7130)
static void C_ccall f_7130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7133)
static void C_ccall f_7133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7136)
static void C_ccall f_7136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7175)
static void C_ccall f_7175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7279)
static void C_fcall f_7279(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7286)
static void C_fcall f_7286(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7163)
static void C_ccall f_7163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7166)
static void C_ccall f_7166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7169)
static void C_ccall f_7169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7157)
static void C_ccall f_7157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7145)
static void C_ccall f_7145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7149)
static void C_ccall f_7149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7153)
static void C_ccall f_7153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7289)
static void C_ccall f_7289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7187)
static void C_ccall f_7187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7190)
static void C_ccall f_7190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7220)
static void C_ccall f_7220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7223)
static void C_ccall f_7223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7261)
static void C_ccall f_7261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7257)
static void C_ccall f_7257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7226)
static void C_ccall f_7226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7229)
static void C_ccall f_7229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7232)
static void C_ccall f_7232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7199)
static void C_ccall f_7199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7202)
static void C_ccall f_7202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7193)
static void C_ccall f_7193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7024)
static void C_ccall f_7024(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7044)
static void C_fcall f_7044(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7030)
static void C_ccall f_7030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7033)
static void C_ccall f_7033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7054)
static void C_ccall f_7054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6967)
static void C_ccall f_6967(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6971)
static void C_ccall f_6971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7001)
static void C_fcall f_7001(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6993)
static void C_ccall f_6993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7011)
static void C_ccall f_7011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6951)
static void C_ccall f_6951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6957)
static void C_ccall f_6957(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6965)
static void C_ccall f_6965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6935)
static void C_ccall f_6935(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6941)
static void C_ccall f_6941(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6949)
static void C_ccall f_6949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6846)
static void C_ccall f_6846(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6855)
static void C_fcall f_6855(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6884)
static void C_fcall f_6884(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6894)
static void C_ccall f_6894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6769)
static void C_ccall f_6769(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6773)
static void C_ccall f_6773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6787)
static void C_fcall f_6787(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6800)
static void C_ccall f_6800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6832)
static void C_ccall f_6832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6803)
static void C_ccall f_6803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6806)
static void C_ccall f_6806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6776)
static void C_ccall f_6776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6779)
static void C_ccall f_6779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6782)
static void C_ccall f_6782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_6736)
static void C_ccall f_6736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6740)
static void C_ccall f_6740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6743)
static void C_ccall f_6743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6746)
static void C_ccall f_6746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6749)
static void C_ccall f_6749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6752)
static void C_ccall f_6752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6755)
static void C_ccall f_6755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6758)
static void C_ccall f_6758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6761)
static void C_ccall f_6761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6764)
static void C_ccall f_6764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5945)
static void C_fcall f_5945(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6712)
static void C_fcall f_6712(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6722)
static void C_ccall f_6722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5947)
static void C_fcall f_5947(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5951)
static void C_ccall f_5951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5954)
static void C_ccall f_5954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5957)
static void C_ccall f_5957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5960)
static void C_ccall f_5960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5963)
static void C_ccall f_5963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5966)
static void C_ccall f_5966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6704)
static void C_ccall f_6704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5969)
static void C_fcall f_5969(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5975)
static void C_ccall f_5975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5978)
static void C_ccall f_5978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5981)
static void C_ccall f_5981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5984)
static void C_ccall f_5984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5987)
static void C_ccall f_5987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5990)
static void C_ccall f_5990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5993)
static void C_ccall f_5993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5996)
static void C_ccall f_5996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5999)
static void C_ccall f_5999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6002)
static void C_ccall f_6002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6005)
static void C_ccall f_6005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6008)
static void C_ccall f_6008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6011)
static void C_ccall f_6011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6673)
static void C_ccall f_6673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6014)
static void C_ccall f_6014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6634)
static void C_ccall f_6634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6637)
static void C_ccall f_6637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6640)
static void C_ccall f_6640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6656)
static void C_ccall f_6656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6659)
static void C_ccall f_6659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6017)
static void C_ccall f_6017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6020)
static void C_ccall f_6020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6023)
static void C_ccall f_6023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6606)
static void C_fcall f_6606(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6609)
static void C_ccall f_6609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6026)
static void C_ccall f_6026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6029)
static void C_ccall f_6029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6032)
static void C_ccall f_6032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6035)
static void C_ccall f_6035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6038)
static void C_fcall f_6038(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6041)
static void C_ccall f_6041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6566)
static void C_fcall f_6566(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6568)
static void C_fcall f_6568(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6578)
static void C_ccall f_6578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6516)
static void C_ccall f_6516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6541)
static void C_fcall f_6541(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6525)
static void C_ccall f_6525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6551)
static void C_ccall f_6551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6044)
static void C_ccall f_6044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6477)
static void C_ccall f_6477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6489)
static void C_fcall f_6489(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6480)
static void C_ccall f_6480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6387)
static void C_ccall f_6387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6429)
static void C_fcall f_6429(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6390)
static void C_ccall f_6390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6396)
static void C_fcall f_6396(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6399)
static void C_ccall f_6399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6323)
static void C_ccall f_6323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6326)
static void C_ccall f_6326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6329)
static void C_ccall f_6329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6332)
static void C_ccall f_6332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6335)
static void C_ccall f_6335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6350)
static void C_fcall f_6350(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6338)
static void C_ccall f_6338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6341)
static void C_ccall f_6341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6309)
static void C_ccall f_6309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6317)
static void C_ccall f_6317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6234)
static void C_ccall f_6234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6240)
static void C_ccall f_6240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6243)
static void C_ccall f_6243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6277)
static void C_ccall f_6277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6280)
static void C_ccall f_6280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6283)
static void C_ccall f_6283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6246)
static void C_ccall f_6246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6249)
static void C_ccall f_6249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6252)
static void C_ccall f_6252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6255)
static void C_ccall f_6255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6264)
static void C_ccall f_6264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6267)
static void C_ccall f_6267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6047)
static void C_ccall f_6047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6070)
static void C_fcall f_6070(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6175)
static void C_ccall f_6175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6178)
static void C_ccall f_6178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6190)
static void C_ccall f_6190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6181)
static void C_ccall f_6181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6076)
static void C_ccall f_6076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6079)
static void C_ccall f_6079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6162)
static void C_ccall f_6162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6082)
static void C_ccall f_6082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6085)
static void C_ccall f_6085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6088)
static void C_ccall f_6088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6091)
static void C_ccall f_6091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6156)
static void C_ccall f_6156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6152)
static void C_ccall f_6152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6094)
static void C_ccall f_6094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6097)
static void C_ccall f_6097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6100)
static void C_ccall f_6100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6103)
static void C_ccall f_6103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6106)
static void C_ccall f_6106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6109)
static void C_ccall f_6109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6127)
static void C_fcall f_6127(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6137)
static void C_ccall f_6137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6112)
static void C_ccall f_6112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6050)
static void C_ccall f_6050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6060)
static void C_ccall f_6060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6053)
static void C_ccall f_6053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5891)
static void C_fcall f_5891(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5898)
static void C_ccall f_5898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5901)
static void C_ccall f_5901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5814)
static void C_fcall f_5814(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5824)
static void C_ccall f_5824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5829)
static void C_fcall f_5829(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5885)
static void C_ccall f_5885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5881)
static void C_ccall f_5881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5866)
static void C_ccall f_5866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5845)
static void C_fcall f_5845(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5856)
static void C_ccall f_5856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5852)
static void C_ccall f_5852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5672)
static void C_fcall f_5672(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5812)
static void C_ccall f_5812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5679)
static void C_fcall f_5679(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5685)
static void C_ccall f_5685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5768)
static void C_fcall f_5768(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5771)
static void C_ccall f_5771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5781)
static void C_ccall f_5781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5774)
static void C_ccall f_5774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5735)
static void C_ccall f_5735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5741)
static void C_ccall f_5741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5476)
static void C_fcall f_5476(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5483)
static void C_ccall f_5483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5594)
static void C_ccall f_5594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5612)
static void C_ccall f_5612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5641)
static void C_fcall f_5641(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5663)
static void C_ccall f_5663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5619)
static void C_ccall f_5619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5547)
static void C_ccall f_5547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5555)
static void C_fcall f_5555(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5584)
static void C_ccall f_5584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5553)
static void C_ccall f_5553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5543)
static void C_ccall f_5543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5514)
static void C_ccall f_5514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5518)
static void C_ccall f_5518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5421)
static void C_fcall f_5421(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5427)
static void C_fcall f_5427(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5456)
static void C_ccall f_5456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5459)
static void C_ccall f_5459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5462)
static void C_ccall f_5462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5465)
static void C_ccall f_5465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5468)
static void C_ccall f_5468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5437)
static void C_ccall f_5437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5045)
static void C_fcall f_5045(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5398)
static void C_fcall f_5398(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5408)
static void C_ccall f_5408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5275)
static void C_ccall f_5275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5375)
static void C_fcall f_5375(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5385)
static void C_ccall f_5385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5309)
static void C_ccall f_5309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5312)
static void C_ccall f_5312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5352)
static void C_fcall f_5352(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5362)
static void C_ccall f_5362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5318)
static void C_ccall f_5318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5321)
static void C_ccall f_5321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5329)
static void C_fcall f_5329(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5339)
static void C_ccall f_5339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5276)
static void C_fcall f_5276(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5280)
static void C_ccall f_5280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5283)
static void C_ccall f_5283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5286)
static void C_ccall f_5286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5289)
static void C_ccall f_5289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5303)
static void C_ccall f_5303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5299)
static void C_ccall f_5299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5292)
static void C_ccall f_5292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5162)
static void C_fcall f_5162(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5166)
static void C_ccall f_5166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5169)
static void C_ccall f_5169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5172)
static void C_ccall f_5172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5175)
static void C_ccall f_5175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5178)
static void C_ccall f_5178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5269)
static void C_ccall f_5269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5181)
static void C_fcall f_5181(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5184)
static void C_fcall f_5184(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5190)
static void C_ccall f_5190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5258)
static void C_ccall f_5258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5224)
static void C_ccall f_5224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5230)
static void C_fcall f_5230(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5238)
static void C_ccall f_5238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5234)
static void C_ccall f_5234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5196)
static void C_ccall f_5196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5199)
static void C_ccall f_5199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5202)
static void C_ccall f_5202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5205)
static void C_ccall f_5205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5208)
static void C_ccall f_5208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5218)
static void C_ccall f_5218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5211)
static void C_ccall f_5211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5084)
static void C_fcall f_5084(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5086)
static void C_ccall f_5086(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5090)
static void C_ccall f_5090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5093)
static void C_ccall f_5093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5096)
static void C_ccall f_5096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5099)
static void C_ccall f_5099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5102)
static void C_ccall f_5102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5105)
static void C_ccall f_5105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5108)
static void C_ccall f_5108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5111)
static void C_ccall f_5111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5114)
static void C_ccall f_5114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5117)
static void C_ccall f_5117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5120)
static void C_ccall f_5120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5123)
static void C_ccall f_5123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5137)
static void C_ccall f_5137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5133)
static void C_ccall f_5133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5126)
static void C_ccall f_5126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5048)
static void C_fcall f_5048(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5061)
static void C_fcall f_5061(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5071)
static void C_ccall f_5071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5052)
static void C_ccall f_5052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4701)
static void C_fcall f_4701(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4705)
static void C_ccall f_4705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5022)
static void C_fcall f_5022(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5032)
static void C_ccall f_5032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4999)
static void C_fcall f_4999(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4959)
static void C_ccall f_4959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4970)
static void C_fcall f_4970(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4980)
static void C_ccall f_4980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4965)
static void C_ccall f_4965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5009)
static void C_ccall f_5009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4706)
static void C_fcall f_4706(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4710)
static void C_ccall f_4710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4713)
static void C_ccall f_4713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4945)
static void C_ccall f_4945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4716)
static void C_fcall f_4716(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4931)
static void C_ccall f_4931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4719)
static void C_ccall f_4719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4722)
static void C_ccall f_4722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4725)
static void C_ccall f_4725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4728)
static void C_ccall f_4728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4731)
static void C_ccall f_4731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4734)
static void C_ccall f_4734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4923)
static void C_ccall f_4923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4737)
static void C_fcall f_4737(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4740)
static void C_ccall f_4740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4759)
static void C_ccall f_4759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4895)
static void C_fcall f_4895(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4905)
static void C_ccall f_4905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4765)
static void C_ccall f_4765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4852)
static void C_ccall f_4852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4855)
static void C_ccall f_4855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4858)
static void C_ccall f_4858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4861)
static void C_ccall f_4861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4877)
static void C_ccall f_4877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4883)
static void C_ccall f_4883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4768)
static void C_ccall f_4768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4771)
static void C_ccall f_4771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4774)
static void C_ccall f_4774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4824)
static void C_fcall f_4824(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4827)
static void C_ccall f_4827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4780)
static void C_ccall f_4780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4812)
static void C_ccall f_4812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4815)
static void C_ccall f_4815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4786)
static void C_ccall f_4786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4795)
static void C_ccall f_4795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4798)
static void C_ccall f_4798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4741)
static void C_fcall f_4741(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4752)
static void C_ccall f_4752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4527)
static void C_fcall f_4527(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4534)
static void C_ccall f_4534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4678)
static void C_fcall f_4678(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4688)
static void C_ccall f_4688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4545)
static void C_ccall f_4545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4548)
static void C_ccall f_4548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4551)
static void C_ccall f_4551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4556)
static void C_fcall f_4556(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4566)
static void C_ccall f_4566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4572)
static void C_ccall f_4572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4625)
static void C_fcall f_4625(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4635)
static void C_ccall f_4635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4575)
static void C_ccall f_4575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4598)
static void C_fcall f_4598(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4608)
static void C_ccall f_4608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4578)
static void C_ccall f_4578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4581)
static void C_ccall f_4581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4319)
static void C_fcall f_4319(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4519)
static void C_ccall f_4519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4441)
static void C_ccall f_4441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4445)
static void C_ccall f_4445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4449)
static void C_ccall f_4449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4453)
static void C_ccall f_4453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4511)
static void C_ccall f_4511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4466)
static void C_ccall f_4466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4474)
static void C_fcall f_4474(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4503)
static void C_ccall f_4503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4472)
static void C_ccall f_4472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4457)
static void C_ccall f_4457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4357)
static void C_ccall f_4357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4360)
static void C_ccall f_4360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4363)
static void C_ccall f_4363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4430)
static void C_ccall f_4430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4372)
static void C_ccall f_4372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4387)
static void C_ccall f_4387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4400)
static void C_fcall f_4400(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4410)
static void C_ccall f_4410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4375)
static void C_ccall f_4375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4322)
static void C_fcall f_4322(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4336)
static void C_ccall f_4336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2387)
static void C_fcall f_2387(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4287)
static void C_fcall f_4287(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4293)
static void C_ccall f_4293(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4297)
static void C_ccall f_4297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2390)
static void C_fcall f_2390(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4243)
static void C_ccall f_4243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4246)
static void C_ccall f_4246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4249)
static void C_ccall f_4249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4252)
static void C_ccall f_4252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4255)
static void C_ccall f_4255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4160)
static void C_ccall f_4160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4163)
static void C_ccall f_4163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4179)
static void C_fcall f_4179(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4202)
static void C_ccall f_4202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4205)
static void C_ccall f_4205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4208)
static void C_ccall f_4208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4211)
static void C_ccall f_4211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4192)
static void C_ccall f_4192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4141)
static void C_ccall f_4141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4118)
static void C_ccall f_4118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4121)
static void C_ccall f_4121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4096)
static void C_ccall f_4096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4068)
static void C_ccall f_4068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4071)
static void C_ccall f_4071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4088)
static void C_ccall f_4088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4074)
static void C_ccall f_4074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4077)
static void C_ccall f_4077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4052)
static void C_ccall f_4052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4056)
static void C_ccall f_4056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4038)
static void C_ccall f_4038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4041)
static void C_ccall f_4041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4026)
static void C_ccall f_4026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4007)
static void C_ccall f_4007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3984)
static void C_ccall f_3984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3948)
static void C_ccall f_3948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3960)
static void C_ccall f_3960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3951)
static void C_ccall f_3951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3929)
static void C_ccall f_3929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3932)
static void C_ccall f_3932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3891)
static void C_ccall f_3891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3894)
static void C_ccall f_3894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3872)
static void C_ccall f_3872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3868)
static void C_ccall f_3868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3849)
static void C_ccall f_3849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3837)
static void C_ccall f_3837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3822)
static void C_ccall f_3822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3783)
static void C_ccall f_3783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11159)
static void C_ccall f11159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3770)
static void C_ccall f_3770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3773)
static void C_ccall f_3773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3643)
static void C_ccall f_3643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3646)
static void C_ccall f_3646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3725)
static void C_fcall f_3725(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3735)
static void C_ccall f_3735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3666)
static void C_ccall f_3666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3674)
static void C_ccall f_3674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3688)
static void C_fcall f_3688(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3698)
static void C_ccall f_3698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3647)
static void C_fcall f_3647(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3651)
static void C_ccall f_3651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3654)
static void C_ccall f_3654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3149)
static void C_ccall f_3149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3152)
static void C_fcall f_3152(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3593)
static void C_ccall f_3593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3589)
static void C_ccall f_3589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3158)
static void C_fcall f_3158(C_word t0,C_word t1) C_noret;
C_noret_decl(f11151)
static void C_ccall f11151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3575)
static void C_ccall f_3575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3164)
static void C_ccall f_3164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3379)
static void C_fcall f_3379(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3513)
static void C_fcall f_3513(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3501)
static void C_ccall f_3501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3504)
static void C_ccall f_3504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3507)
static void C_ccall f_3507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3399)
static void C_ccall f_3399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3482)
static void C_ccall f_3482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3478)
static void C_ccall f_3478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3464)
static void C_ccall f_3464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3439)
static void C_ccall f_3439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3432)
static void C_ccall f_3432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3425)
static void C_ccall f_3425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3415)
static void C_ccall f_3415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3402)
static void C_ccall f_3402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3405)
static void C_ccall f_3405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3408)
static void C_ccall f_3408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3200)
static void C_ccall f_3200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3357)
static void C_ccall f_3357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3333)
static void C_ccall f_3333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3339)
static void C_ccall f_3339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11146)
static void C_ccall f11146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3342)
static void C_ccall f_3342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3203)
static void C_ccall f_3203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3291)
static void C_fcall f_3291(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3301)
static void C_ccall f_3301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3226)
static void C_ccall f_3226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3234)
static void C_ccall f_3234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3254)
static void C_fcall f_3254(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3243)
static void C_ccall f_3243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3207)
static void C_fcall f_3207(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3211)
static void C_ccall f_3211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3181)
static void C_ccall f_3181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3184)
static void C_ccall f_3184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3116)
static void C_ccall f_3116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11138)
static void C_ccall f11138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3112)
static void C_ccall f_3112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3098)
static void C_ccall f_3098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3101)
static void C_ccall f_3101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11133)
static void C_ccall f11133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3091)
static void C_ccall f_3091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3077)
static void C_ccall f_3077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11128)
static void C_ccall f11128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3032)
static void C_ccall f_3032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2920)
static void C_ccall f_2920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2923)
static void C_ccall f_2923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2858)
static void C_ccall f_2858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2876)
static void C_fcall f_2876(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2845)
static void C_fcall f_2845(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2849)
static void C_ccall f_2849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2852)
static void C_ccall f_2852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2812)
static void C_ccall f_2812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2815)
static void C_ccall f_2815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2818)
static void C_ccall f_2818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2821)
static void C_ccall f_2821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2783)
static void C_ccall f_2783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2786)
static void C_ccall f_2786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2789)
static void C_ccall f_2789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2792)
static void C_ccall f_2792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2746)
static void C_ccall f_2746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2752)
static void C_ccall f_2752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2755)
static void C_ccall f_2755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2713)
static void C_ccall f_2713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2716)
static void C_ccall f_2716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2722)
static void C_ccall f_2722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2644)
static void C_ccall f_2644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2647)
static void C_ccall f_2647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2587)
static void C_fcall f_2587(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2597)
static void C_ccall f_2597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2532)
static void C_ccall f_2532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2538)
static void C_ccall f_2538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2345)
static void C_fcall f_2345(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2349)
static void C_ccall f_2349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2307)
static void C_ccall f_2307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2315)
static void C_fcall f_2315(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2325)
static void C_ccall f_2325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2275)
static void C_fcall f_2275(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2285)
static void C_ccall f_2285(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_9487)
static void C_fcall trf_9487(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9487(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9487(t0,t1);}

C_noret_decl(trf_9703)
static void C_fcall trf_9703(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9703(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9703(t0,t1);}

C_noret_decl(trf_9680)
static void C_fcall trf_9680(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9680(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9680(t0,t1,t2);}

C_noret_decl(trf_9378)
static void C_fcall trf_9378(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9378(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9378(t0,t1);}

C_noret_decl(trf_8928)
static void C_fcall trf_8928(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8928(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8928(t0,t1);}

C_noret_decl(trf_8955)
static void C_fcall trf_8955(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8955(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8955(t0,t1);}

C_noret_decl(trf_9150)
static void C_fcall trf_9150(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9150(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9150(t0,t1);}

C_noret_decl(trf_9159)
static void C_fcall trf_9159(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9159(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9159(t0,t1);}

C_noret_decl(trf_9195)
static void C_fcall trf_9195(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9195(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9195(t0,t1);}

C_noret_decl(trf_8900)
static void C_fcall trf_8900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8900(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8900(t0,t1);}

C_noret_decl(trf_8049)
static void C_fcall trf_8049(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8049(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8049(t0,t1);}

C_noret_decl(trf_8157)
static void C_fcall trf_8157(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8157(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8157(t0,t1);}

C_noret_decl(trf_8178)
static void C_fcall trf_8178(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8178(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8178(t0,t1);}

C_noret_decl(trf_8286)
static void C_fcall trf_8286(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8286(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8286(t0,t1);}

C_noret_decl(trf_8298)
static void C_fcall trf_8298(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8298(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8298(t0,t1);}

C_noret_decl(trf_8358)
static void C_fcall trf_8358(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8358(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8358(t0,t1);}

C_noret_decl(trf_8375)
static void C_fcall trf_8375(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8375(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8375(t0,t1);}

C_noret_decl(trf_8392)
static void C_fcall trf_8392(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8392(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8392(t0,t1);}

C_noret_decl(trf_8467)
static void C_fcall trf_8467(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8467(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8467(t0,t1);}

C_noret_decl(trf_8484)
static void C_fcall trf_8484(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8484(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8484(t0,t1);}

C_noret_decl(trf_8501)
static void C_fcall trf_8501(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8501(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8501(t0,t1);}

C_noret_decl(trf_8518)
static void C_fcall trf_8518(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8518(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8518(t0,t1);}

C_noret_decl(trf_8535)
static void C_fcall trf_8535(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8535(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8535(t0,t1);}

C_noret_decl(trf_8552)
static void C_fcall trf_8552(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8552(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8552(t0,t1);}

C_noret_decl(trf_8569)
static void C_fcall trf_8569(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8569(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8569(t0,t1);}

C_noret_decl(trf_8612)
static void C_fcall trf_8612(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8612(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8612(t0,t1,t2);}

C_noret_decl(trf_8622)
static void C_fcall trf_8622(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8622(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8622(t0,t1);}

C_noret_decl(trf_8424)
static void C_fcall trf_8424(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8424(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8424(t0,t1,t2);}

C_noret_decl(trf_8317)
static void C_fcall trf_8317(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8317(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8317(t0,t1,t2);}

C_noret_decl(trf_7979)
static void C_fcall trf_7979(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7979(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7979(t0,t1,t2);}

C_noret_decl(trf_7974)
static void C_fcall trf_7974(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7974(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7974(t0,t1);}

C_noret_decl(trf_7884)
static void C_fcall trf_7884(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7884(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7884(t0,t1,t2);}

C_noret_decl(trf_7394)
static void C_fcall trf_7394(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7394(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7394(t0,t1,t2);}

C_noret_decl(trf_7834)
static void C_fcall trf_7834(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7834(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7834(t0,t1,t2,t3);}

C_noret_decl(trf_7425)
static void C_fcall trf_7425(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7425(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7425(t0,t1);}

C_noret_decl(trf_7434)
static void C_fcall trf_7434(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7434(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7434(t0,t1);}

C_noret_decl(trf_7446)
static void C_fcall trf_7446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7446(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7446(t0,t1);}

C_noret_decl(trf_7458)
static void C_fcall trf_7458(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7458(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7458(t0,t1);}

C_noret_decl(trf_7503)
static void C_fcall trf_7503(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7503(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7503(t0,t1);}

C_noret_decl(trf_7468)
static void C_fcall trf_7468(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7468(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7468(t0,t1,t2);}

C_noret_decl(trf_7369)
static void C_fcall trf_7369(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7369(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7369(t0,t1,t2);}

C_noret_decl(trf_7069)
static void C_fcall trf_7069(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7069(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7069(t0,t1,t2);}

C_noret_decl(trf_7279)
static void C_fcall trf_7279(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7279(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7279(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7286)
static void C_fcall trf_7286(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7286(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7286(t0,t1);}

C_noret_decl(trf_7044)
static void C_fcall trf_7044(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7044(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7044(t0,t1,t2);}

C_noret_decl(trf_7001)
static void C_fcall trf_7001(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7001(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7001(t0,t1,t2);}

C_noret_decl(trf_6855)
static void C_fcall trf_6855(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6855(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6855(t0,t1,t2);}

C_noret_decl(trf_6884)
static void C_fcall trf_6884(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6884(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6884(t0,t1);}

C_noret_decl(trf_6787)
static void C_fcall trf_6787(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6787(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6787(t0,t1,t2);}

C_noret_decl(trf_5945)
static void C_fcall trf_5945(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5945(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5945(t0,t1);}

C_noret_decl(trf_6712)
static void C_fcall trf_6712(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6712(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6712(t0,t1,t2);}

C_noret_decl(trf_5947)
static void C_fcall trf_5947(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5947(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5947(t0,t1,t2);}

C_noret_decl(trf_5969)
static void C_fcall trf_5969(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5969(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5969(t0,t1);}

C_noret_decl(trf_6606)
static void C_fcall trf_6606(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6606(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6606(t0,t1);}

C_noret_decl(trf_6038)
static void C_fcall trf_6038(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6038(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6038(t0,t1);}

C_noret_decl(trf_6566)
static void C_fcall trf_6566(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6566(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6566(t0,t1);}

C_noret_decl(trf_6568)
static void C_fcall trf_6568(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6568(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6568(t0,t1,t2,t3);}

C_noret_decl(trf_6541)
static void C_fcall trf_6541(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6541(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6541(t0,t1,t2);}

C_noret_decl(trf_6489)
static void C_fcall trf_6489(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6489(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6489(t0,t1);}

C_noret_decl(trf_6429)
static void C_fcall trf_6429(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6429(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6429(t0,t1);}

C_noret_decl(trf_6396)
static void C_fcall trf_6396(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6396(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6396(t0,t1);}

C_noret_decl(trf_6350)
static void C_fcall trf_6350(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6350(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6350(t0,t1);}

C_noret_decl(trf_6070)
static void C_fcall trf_6070(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6070(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6070(t0,t1);}

C_noret_decl(trf_6127)
static void C_fcall trf_6127(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6127(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6127(t0,t1,t2,t3);}

C_noret_decl(trf_5891)
static void C_fcall trf_5891(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5891(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5891(t0,t1,t2,t3);}

C_noret_decl(trf_5814)
static void C_fcall trf_5814(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5814(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5814(t0,t1,t2);}

C_noret_decl(trf_5829)
static void C_fcall trf_5829(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5829(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5829(t0,t1,t2,t3);}

C_noret_decl(trf_5845)
static void C_fcall trf_5845(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5845(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5845(t0,t1);}

C_noret_decl(trf_5672)
static void C_fcall trf_5672(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5672(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5672(t0,t1,t2,t3);}

C_noret_decl(trf_5679)
static void C_fcall trf_5679(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5679(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5679(t0,t1);}

C_noret_decl(trf_5768)
static void C_fcall trf_5768(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5768(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5768(t0,t1);}

C_noret_decl(trf_5476)
static void C_fcall trf_5476(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5476(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5476(t0,t1,t2);}

C_noret_decl(trf_5641)
static void C_fcall trf_5641(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5641(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5641(t0,t1,t2,t3);}

C_noret_decl(trf_5555)
static void C_fcall trf_5555(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5555(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5555(t0,t1,t2);}

C_noret_decl(trf_5421)
static void C_fcall trf_5421(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5421(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5421(t0,t1);}

C_noret_decl(trf_5427)
static void C_fcall trf_5427(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5427(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5427(t0,t1,t2,t3);}

C_noret_decl(trf_5045)
static void C_fcall trf_5045(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5045(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5045(t0,t1);}

C_noret_decl(trf_5398)
static void C_fcall trf_5398(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5398(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5398(t0,t1,t2);}

C_noret_decl(trf_5375)
static void C_fcall trf_5375(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5375(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5375(t0,t1,t2);}

C_noret_decl(trf_5352)
static void C_fcall trf_5352(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5352(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5352(t0,t1,t2);}

C_noret_decl(trf_5329)
static void C_fcall trf_5329(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5329(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5329(t0,t1,t2);}

C_noret_decl(trf_5276)
static void C_fcall trf_5276(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5276(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5276(t0,t1,t2);}

C_noret_decl(trf_5162)
static void C_fcall trf_5162(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5162(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5162(t0,t1,t2);}

C_noret_decl(trf_5181)
static void C_fcall trf_5181(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5181(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5181(t0,t1);}

C_noret_decl(trf_5184)
static void C_fcall trf_5184(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5184(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5184(t0,t1);}

C_noret_decl(trf_5230)
static void C_fcall trf_5230(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5230(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5230(t0,t1);}

C_noret_decl(trf_5084)
static void C_fcall trf_5084(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5084(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5084(t0,t1,t2);}

C_noret_decl(trf_5048)
static void C_fcall trf_5048(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5048(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5048(t0,t1);}

C_noret_decl(trf_5061)
static void C_fcall trf_5061(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5061(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5061(t0,t1,t2,t3);}

C_noret_decl(trf_4701)
static void C_fcall trf_4701(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4701(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4701(t0,t1);}

C_noret_decl(trf_5022)
static void C_fcall trf_5022(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5022(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5022(t0,t1,t2);}

C_noret_decl(trf_4999)
static void C_fcall trf_4999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4999(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4999(t0,t1,t2);}

C_noret_decl(trf_4970)
static void C_fcall trf_4970(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4970(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4970(t0,t1,t2);}

C_noret_decl(trf_4706)
static void C_fcall trf_4706(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4706(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4706(t0,t1,t2);}

C_noret_decl(trf_4716)
static void C_fcall trf_4716(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4716(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4716(t0,t1);}

C_noret_decl(trf_4737)
static void C_fcall trf_4737(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4737(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4737(t0,t1);}

C_noret_decl(trf_4895)
static void C_fcall trf_4895(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4895(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4895(t0,t1,t2);}

C_noret_decl(trf_4824)
static void C_fcall trf_4824(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4824(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4824(t0,t1);}

C_noret_decl(trf_4741)
static void C_fcall trf_4741(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4741(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4741(t0,t1,t2);}

C_noret_decl(trf_4527)
static void C_fcall trf_4527(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4527(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4527(t0,t1);}

C_noret_decl(trf_4678)
static void C_fcall trf_4678(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4678(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4678(t0,t1,t2);}

C_noret_decl(trf_4556)
static void C_fcall trf_4556(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4556(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4556(t0,t1,t2,t3);}

C_noret_decl(trf_4625)
static void C_fcall trf_4625(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4625(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4625(t0,t1,t2);}

C_noret_decl(trf_4598)
static void C_fcall trf_4598(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4598(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4598(t0,t1,t2);}

C_noret_decl(trf_4319)
static void C_fcall trf_4319(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4319(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4319(t0,t1);}

C_noret_decl(trf_4474)
static void C_fcall trf_4474(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4474(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4474(t0,t1,t2);}

C_noret_decl(trf_4400)
static void C_fcall trf_4400(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4400(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4400(t0,t1,t2);}

C_noret_decl(trf_4322)
static void C_fcall trf_4322(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4322(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4322(t0,t1);}

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

C_noret_decl(trf_4287)
static void C_fcall trf_4287(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4287(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4287(t0,t1,t2,t3);}

C_noret_decl(trf_2390)
static void C_fcall trf_2390(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2390(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2390(t0,t1,t2,t3);}

C_noret_decl(trf_4179)
static void C_fcall trf_4179(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4179(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4179(t0,t1,t2,t3);}

C_noret_decl(trf_3725)
static void C_fcall trf_3725(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3725(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3725(t0,t1,t2,t3);}

C_noret_decl(trf_3688)
static void C_fcall trf_3688(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3688(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3688(t0,t1,t2,t3);}

C_noret_decl(trf_3647)
static void C_fcall trf_3647(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3647(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3647(t0,t1,t2,t3);}

C_noret_decl(trf_3152)
static void C_fcall trf_3152(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3152(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3152(t0,t1);}

C_noret_decl(trf_3158)
static void C_fcall trf_3158(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3158(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3158(t0,t1);}

C_noret_decl(trf_3379)
static void C_fcall trf_3379(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3379(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3379(t0,t1);}

C_noret_decl(trf_3513)
static void C_fcall trf_3513(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3513(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3513(t0,t1);}

C_noret_decl(trf_3291)
static void C_fcall trf_3291(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3291(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3291(t0,t1,t2,t3);}

C_noret_decl(trf_3254)
static void C_fcall trf_3254(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3254(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3254(t0,t1,t2,t3);}

C_noret_decl(trf_3207)
static void C_fcall trf_3207(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3207(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3207(t0,t1,t2,t3);}

C_noret_decl(trf_2876)
static void C_fcall trf_2876(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2876(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2876(t0,t1,t2,t3);}

C_noret_decl(trf_2845)
static void C_fcall trf_2845(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2845(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2845(t0,t1,t2,t3);}

C_noret_decl(trf_2587)
static void C_fcall trf_2587(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2587(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2587(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2345)
static void C_fcall trf_2345(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2345(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2345(t0,t1,t2);}

C_noret_decl(trf_2315)
static void C_fcall trf_2315(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2315(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2315(t0,t1,t2);}

C_noret_decl(trf_2275)
static void C_fcall trf_2275(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2275(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2275(t0,t1,t2);}

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
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_backend_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_backend_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("backend_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(2504)){
C_save(t1);
C_rereclaim2(2504*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,869);
lf[0]=C_h_intern(&lf[0],15,"\010compileroutput");
lf[1]=C_h_intern(&lf[1],12,"\010compilergen");
lf[2]=C_h_intern(&lf[2],8,"for-each");
lf[3]=C_h_intern(&lf[3],7,"newline");
lf[4]=C_h_intern(&lf[4],7,"display");
lf[5]=C_h_intern(&lf[5],17,"\010compilergen-list");
lf[6]=C_h_intern(&lf[6],11,"intersperse");
lf[7]=C_h_intern(&lf[7],18,"\010compilerunique-id");
lf[8]=C_h_intern(&lf[8],22,"\010compilergenerate-code");
lf[9]=C_h_intern(&lf[9],13,"\010compilerbomb");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\021can\047t find lambda");
lf[11]=C_h_intern(&lf[11],17,"lambda-literal-id");
lf[12]=C_h_intern(&lf[12],4,"find");
lf[13]=C_h_intern(&lf[13],14,"\004coreimmediate");
lf[14]=C_h_intern(&lf[14],4,"bool");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\015C_SCHEME_TRUE");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\016C_SCHEME_FALSE");
lf[17]=C_h_intern(&lf[17],4,"char");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\021C_make_character(");
lf[19]=C_h_intern(&lf[19],3,"nil");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\024C_SCHEME_END_OF_LIST");
lf[21]=C_h_intern(&lf[21],3,"fix");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\006C_fix(");
lf[23]=C_h_intern(&lf[23],3,"eof");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\024C_SCHEME_END_OF_FILE");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000\015bad immediate");
lf[26]=C_h_intern(&lf[26],12,"\004coreliteral");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\013((C_word)li");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[30]=C_h_intern(&lf[30],2,"if");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\005else{");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\013if(C_truep(");
lf[34]=C_h_intern(&lf[34],9,"\004coreproc");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\010(C_word)");
lf[36]=C_h_intern(&lf[36],9,"\004corebind");
lf[37]=C_h_intern(&lf[37],16,"\004corelet_unboxed");
lf[38]=C_h_intern(&lf[38],8,"\004coreref");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\002)[");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\012((C_word*)");
lf[41]=C_h_intern(&lf[41],10,"\004coreunbox");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\004)[1]");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\012((C_word*)");
lf[44]=C_h_intern(&lf[44],13,"\004coreupdate_i");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\021C_set_block_item(");
lf[46]=C_h_intern(&lf[46],11,"\004coreupdate");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\002)+");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\024C_mutate(((C_word *)");
lf[50]=C_h_intern(&lf[50],16,"\004coreupdatebox_i");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\003,0,");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\021C_set_block_item(");
lf[53]=C_h_intern(&lf[53],14,"\004coreupdatebox");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\004)+1,");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\024C_mutate(((C_word *)");
lf[56]=C_h_intern(&lf[56],12,"\004coreclosure");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\002a[");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\002]=");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\021tmp=(C_word)a,a+=");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\005,tmp)");
lf[61]=C_h_intern(&lf[61],4,"iota");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\023(*a=C_CLOSURE_TYPE|");
lf[63]=C_h_intern(&lf[63],8,"\004corebox");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\030,tmp=(C_word)a,a+=2,tmp)");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\031(*a=C_VECTOR_TYPE|1,a[1]=");
lf[66]=C_h_intern(&lf[66],10,"\004corelocal");
lf[67]=C_h_intern(&lf[67],13,"\004coresetlocal");
lf[68]=C_h_intern(&lf[68],11,"\004coreglobal");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\017C_retrieve2(lf[");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\002],");
lf[73]=C_h_intern(&lf[73],21,"\010compilerc-ify-string");
lf[74]=C_h_intern(&lf[74],14,"symbol->string");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\016*((C_word*)lf[");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\023C_fast_retrieve(lf[");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\002])");
lf[79]=C_h_intern(&lf[79],14,"\004coresetglobal");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\012 /* (set! ");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\011 ...) */,");
lf[82]=C_h_intern(&lf[82],17,"string-translate*");
lf[83]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\002*/\376B\000\000\003* /\376\377\016");
lf[84]=C_h_intern(&lf[84],8,"->string");
lf[85]=C_h_intern(&lf[85],28,"\003syssymbol->qualified-string");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\015C_mutate(&lf[");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mutate((C_word*)lf[");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\003]+1");
lf[90]=C_h_intern(&lf[90],16,"\004coresetglobal_i");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\005] /* ");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\005 */ =");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\024C_set_block_item(lf[");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\005] /* ");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\006 */,0,");
lf[97]=C_h_intern(&lf[97],14,"\004coreundefined");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\022C_SCHEME_UNDEFINED");
lf[99]=C_h_intern(&lf[99],9,"\004corecall");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\003,0,");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\012goto loop;");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\002c=");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\002=t");
lf[105]=C_h_intern(&lf[105],26,"lambda-literal-temporaries");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[107]=C_h_intern(&lf[107],22,"lambda-literal-looping");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[110]=C_h_intern(&lf[110],35,"\010compilerno-global-procedure-checks");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\024(void*)(*((C_word*)(");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\005)+1))");
lf[113]=C_h_intern(&lf[113],13,"string-append");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\016*((C_word*)lf[");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\025C_fast_retrieve_proc(");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\030C_retrieve2_symbol_proc(");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\025C_fast_retrieve_proc(");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\016*((C_word*)lf[");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\037C_fast_retrieve_symbol_proc(lf[");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\002])");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\016*((C_word*)lf[");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\010((C_proc");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\002,t");
lf[137]=C_h_intern(&lf[137],6,"unsafe");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\024(void*)(*((C_word*)t");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\004+1))");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\026C_fast_retrieve_proc(t");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[142]=C_h_intern(&lf[142],28,"\010compilerno-procedure-checks");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\010((C_proc");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[145]=C_h_intern(&lf[145],24,"\010compileremit-trace-info");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\011C_trace(\042");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\003\042);");
lf[148]=C_h_intern(&lf[148],16,"string-translate");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\003/* ");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\003 */");
lf[153]=C_h_intern(&lf[153],27,"lambda-literal-closure-size");
lf[154]=C_h_intern(&lf[154],28,"\010compilersource-info->string");
lf[155]=C_h_intern(&lf[155],12,"\004corerecurse");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\012goto loop;");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\002=t");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\003t0,");
lf[159]=C_h_intern(&lf[159],16,"\004coredirect_call");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i(&a,");
lf[161]=C_h_intern(&lf[161],13,"\004corecallunit");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\012_toplevel(");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\024,C_SCHEME_UNDEFINED,");
lf[166]=C_h_intern(&lf[166],11,"\004corereturn");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\007return(");
lf[169]=C_h_intern(&lf[169],11,"\004coreinline");
lf[170]=C_h_intern(&lf[170],20,"\004coreinline_allocate");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\004(&a,");
lf[172]=C_h_intern(&lf[172],15,"\004coreinline_ref");
lf[173]=C_h_intern(&lf[173],34,"\010compilerforeign-result-conversion");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[175]=C_h_intern(&lf[175],18,"\004coreinline_update");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\002=(");
lf[178]=C_h_intern(&lf[178],36,"\010compilerforeign-argument-conversion");
lf[179]=C_h_intern(&lf[179],33,"\010compilerforeign-type-declaration");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[181]=C_h_intern(&lf[181],19,"\004coreinline_loc_ref");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\003)))");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\003*((");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\021*)C_data_pointer(");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[187]=C_h_intern(&lf[187],22,"\004coreinline_loc_update");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\003))=");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\004((*(");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\021*)C_data_pointer(");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[193]=C_h_intern(&lf[193],16,"\004coreunboxed_ref");
lf[194]=C_h_intern(&lf[194],17,"\004coreunboxed_set!");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\002((");
lf[197]=C_h_intern(&lf[197],19,"\004coreinline_unboxed");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[199]=C_h_intern(&lf[199],11,"\004coreswitch");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\010default:");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\005case ");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\007switch(");
lf[204]=C_h_intern(&lf[204],9,"\004corecond");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\002)\077");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\011(C_truep(");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\010bad form");
lf[208]=C_h_intern(&lf[208],13,"pair-for-each");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[210]=C_h_intern(&lf[210],30,"\010compilerexternal-protos-first");
lf[211]=C_h_intern(&lf[211],50,"\010compilergenerate-foreign-callback-stub-prototypes");
lf[212]=C_h_intern(&lf[212],22,"foreign-callback-stubs");
lf[213]=C_h_intern(&lf[213],29,"\010compilerforeign-declarations");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\002*/");
lf[215]=C_decode_literal(C_heaptop,"\376B\000\000\012#include \042");
lf[216]=C_h_intern(&lf[216],28,"\010compilertarget-include-file");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[218]=C_h_intern(&lf[218],18,"\010compilerunit-name");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\011   unit: ");
lf[220]=C_h_intern(&lf[220],19,"\010compilerused-units");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\017   used units: ");
lf[222]=C_h_intern(&lf[222],27,"\010compilercompiler-arguments");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\022/* Generated from ");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\030 by the CHICKEN compiler");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\0000   http://www.call-with-current-continuation.org");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\021   command line: ");
lf[228]=C_h_intern(&lf[228],3,"map");
lf[229]=C_h_intern(&lf[229],18,"string-intersperse");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[231]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[233]=C_h_intern(&lf[233],12,"string-split");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[235]=C_h_intern(&lf[235],15,"chicken-version");
lf[236]=C_h_intern(&lf[236],18,"\003sysdecode-seconds");
lf[237]=C_h_intern(&lf[237],15,"current-seconds");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\002};");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\002,0");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\026static C_char C_TLS li");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\026[] C_aligned={C_lihdr(");
lf[242]=C_h_intern(&lf[242],23,"\003syslambda-info->string");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000)static double C_possibly_force_alignment;");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\027static C_TLS C_word lf[");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\002];");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(C_");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\012_toplevel)");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\036C_externimport void C_ccall C_");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000._toplevel(C_word c,C_word d,C_word k) C_noret;");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000+static C_PTABLE_ENTRY *create_ptable(void);");
lf[251]=C_h_intern(&lf[251],21,"small-parameter-limit");
lf[252]=C_h_intern(&lf[252],11,"lset-adjoin");
lf[253]=C_h_intern(&lf[253],1,"=");
lf[254]=C_h_intern(&lf[254],4,"none");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\011,C_word t");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\012) C_noret;");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\002r(");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\016,...) C_noret;");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\010 C_noret");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word *a");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word c,");
lf[265]=C_h_intern(&lf[265],8,"toplevel");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\034C_externexport void C_ccall ");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(C_");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\011_toplevel");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\010toplevel");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\010C_fcall ");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\010C_ccall ");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\005void ");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[279]=C_h_intern(&lf[279],32,"lambda-literal-callee-signatures");
lf[280]=C_h_intern(&lf[280],24,"lambda-literal-allocated");
lf[281]=C_h_intern(&lf[281],21,"lambda-literal-direct");
lf[282]=C_h_intern(&lf[282],33,"lambda-literal-rest-argument-mode");
lf[283]=C_h_intern(&lf[283],28,"lambda-literal-rest-argument");
lf[284]=C_h_intern(&lf[284],27,"\010compilermake-variable-list");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[286]=C_h_intern(&lf[286],27,"lambda-literal-customizable");
lf[287]=C_h_intern(&lf[287],29,"lambda-literal-argument-count");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\012) C_noret;");
lf[289]=C_h_intern(&lf[289],9,"make-list");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\007,C_word");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\025typedef void (*C_proc");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\010)(C_word");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000\020C_adjust_stack(-");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\010=C_pick(");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[299]=C_h_intern(&lf[299],27,"\010compilermake-argument-list");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\004(k)(");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\006(a,n);");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\007_vector");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\017=C_restore_rest");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\017a=C_alloc(n+1);");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\017a=C_alloc(n*3);");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\022n=C_rest_count(0);");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\004 k){");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\006int n;");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word *a,t");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static void C_fcall tr");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\026 k) C_regparm C_noret;");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(tr");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_fcall tr");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static void C_fcall tr");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\016(void *dummy){");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(tr");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_fcall tr");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000 (void *dummy) C_regparm C_noret;");
lf[328]=C_h_intern(&lf[328],23,"lambda-literal-external");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\004(k)(");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static void C_fcall tr");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\004 k){");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(tr");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_fcall tr");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\026 k) C_regparm C_noret;");
lf[340]=C_h_intern(&lf[340],17,"get-output-string");
lf[341]=C_h_intern(&lf[341],19,"\003syswrite-char/port");
lf[342]=C_h_intern(&lf[342],5,"write");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[344]=C_h_intern(&lf[344],18,"open-output-string");
lf[345]=C_h_intern(&lf[345],25,"\010compilerwords-per-flonum");
lf[346]=C_h_intern(&lf[346],6,"reduce");
lf[347]=C_h_intern(&lf[347],1,"+");
lf[348]=C_h_intern(&lf[348],12,"vector->list");
lf[349]=C_decode_literal(C_heaptop,"\376B\000\000\035type of literal not supported");
lf[350]=C_h_intern(&lf[350],14,"\010compilerwords");
lf[351]=C_h_intern(&lf[351],15,"\003sysbytevector\077");
lf[352]=C_h_intern(&lf[352],32,"\010compilerblock-variable-literal\077");
lf[353]=C_h_intern(&lf[353],19,"\010compilerimmediate\077");
lf[354]=C_decode_literal(C_heaptop,"\376B\000\000\007=C_fix(");
lf[355]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[356]=C_h_intern(&lf[356],19,"\003sysundefined-value");
lf[357]=C_decode_literal(C_heaptop,"\376B\000\000\024=C_SCHEME_UNDEFINED;");
lf[358]=C_decode_literal(C_heaptop,"\376B\000\000\015C_SCHEME_TRUE");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\016C_SCHEME_FALSE");
lf[360]=C_decode_literal(C_heaptop,"\376B\000\000\022=C_make_character(");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[362]=C_decode_literal(C_heaptop,"\376B\000\000\014C_h_intern(&");
lf[363]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[364]=C_decode_literal(C_heaptop,"\376B\000\000\001=");
lf[365]=C_decode_literal(C_heaptop,"\376B\000\000\026=C_SCHEME_END_OF_LIST;");
lf[366]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[367]=C_h_intern(&lf[367],23,"\010compilerencode-literal");
lf[368]=C_decode_literal(C_heaptop,"\376B\000\000\034=C_decode_literal(C_heaptop,");
lf[369]=C_h_intern(&lf[369],20,"\010compilerbig-fixnum\077");
lf[370]=C_h_intern(&lf[370],6,"modulo");
lf[371]=C_h_intern(&lf[371],14,"\003syscopy-bytes");
lf[372]=C_h_intern(&lf[372],11,"make-string");
lf[373]=C_h_intern(&lf[373],19,"lambda-literal-body");
lf[374]=C_decode_literal(C_heaptop,"\376B\000\000\022C_word *a=C_alloc(");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[376]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word tmp;");
lf[378]=C_decode_literal(C_heaptop,"\376B\000\000\011,C_word t");
lf[379]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[381]=C_decode_literal(C_heaptop,"\376B\000\000\002r(");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000\002,t");
lf[383]=C_decode_literal(C_heaptop,"\376B\000\000\004);}}");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000\002r(");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000#=C_restore_rest(a,C_rest_count(0));");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[389]=C_decode_literal(C_heaptop,"\376B\000\000\005else{");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000\015a=C_alloc((c-");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\005)*3);");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\022C_save_and_reclaim");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\012((void*)tr");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\011C_reclaim");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\005,NULL");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\022C_save_and_reclaim");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\012((void*)tr");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\011C_reclaim");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\022C_register_lf2(lf,");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\022,create_ptable());");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000\023C_initialize_lf(lf,");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[407]=C_decode_literal(C_heaptop,"\376B\000\000\012a=C_alloc(");
lf[408]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[409]=C_decode_literal(C_heaptop,"\376B\000\000\017if(!C_demand_2(");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\013C_save(t1);");
lf[412]=C_decode_literal(C_heaptop,"\376B\000\000\015C_rereclaim2(");
lf[413]=C_decode_literal(C_heaptop,"\376B\000\000\024*sizeof(C_word), 1);");
lf[414]=C_decode_literal(C_heaptop,"\376B\000\000\016t1=C_restore;}");
lf[415]=C_decode_literal(C_heaptop,"\376B\000\000\030C_check_nursery_minimum(");
lf[416]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000\015if(!C_demand(");
lf[418]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[419]=C_decode_literal(C_heaptop,"\376B\000\000\013C_save(t1);");
lf[420]=C_decode_literal(C_heaptop,"\376B\000\000,C_reclaim((void*)toplevel_trampoline,NULL);}");
lf[421]=C_decode_literal(C_heaptop,"\376B\000\000\027toplevel_initialized=1;");
lf[422]=C_h_intern(&lf[422],26,"\010compilertarget-stack-size");
lf[423]=C_decode_literal(C_heaptop,"\376B\000\000\017C_resize_stack(");
lf[424]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[425]=C_h_intern(&lf[425],30,"\010compilertarget-heap-shrinkage");
lf[426]=C_decode_literal(C_heaptop,"\376B\000\000\021C_heap_shrinkage=");
lf[427]=C_h_intern(&lf[427],27,"\010compilertarget-heap-growth");
lf[428]=C_decode_literal(C_heaptop,"\376B\000\000\016C_heap_growth=");
lf[429]=C_h_intern(&lf[429],33,"\010compilertarget-initial-heap-size");
lf[430]=C_decode_literal(C_heaptop,"\376B\000\000\032C_set_or_change_heap_size(");
lf[431]=C_decode_literal(C_heaptop,"\376B\000\000\004,1);");
lf[432]=C_h_intern(&lf[432],25,"\010compilertarget-heap-size");
lf[433]=C_decode_literal(C_heaptop,"\376B\000\000\032C_set_or_change_heap_size(");
lf[434]=C_decode_literal(C_heaptop,"\376B\000\000\004,1);");
lf[435]=C_decode_literal(C_heaptop,"\376B\000\000\027C_heap_size_is_fixed=1;");
lf[436]=C_h_intern(&lf[436],40,"\010compilerdisable-stack-overflow-checking");
lf[437]=C_decode_literal(C_heaptop,"\376B\000\000\033C_disable_overflow_check=1;");
lf[438]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word *a;");
lf[439]=C_decode_literal(C_heaptop,"\376B\000\000;if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);");
lf[440]=C_decode_literal(C_heaptop,"\376B\000\000\036else C_toplevel_entry(C_text(\042");
lf[441]=C_decode_literal(C_heaptop,"\376B\000\000\004\042));");
lf[442]=C_h_intern(&lf[442],4,"fold");
lf[443]=C_decode_literal(C_heaptop,"\376B\000\000\035if(!C_demand(c*C_SIZEOF_PAIR+");
lf[444]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[445]=C_h_intern(&lf[445],28,"\010compilerinsert-timer-checks");
lf[446]=C_decode_literal(C_heaptop,"\376B\000\000\026C_check_for_interrupt;");
lf[447]=C_decode_literal(C_heaptop,"\376B\000\000\005if(c<");
lf[448]=C_decode_literal(C_heaptop,"\376B\000\000\025) C_bad_min_argc_2(c,");
lf[449]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[450]=C_h_intern(&lf[450],23,"\010compilerno-argc-checks");
lf[451]=C_decode_literal(C_heaptop,"\376B\000\000\004,c2,");
lf[452]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[453]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[454]=C_decode_literal(C_heaptop,"\376B\000\000\014C_save_rest(");
lf[455]=C_decode_literal(C_heaptop,"\376B\000\000\017C_word *a,c2=c;");
lf[456]=C_decode_literal(C_heaptop,"\376B\000\000\012va_list v;");
lf[457]=C_decode_literal(C_heaptop,"\376B\000\000\026if(!C_stack_probe(a)){");
lf[458]=C_decode_literal(C_heaptop,"\376B\000\000\027if(!C_stack_probe(&a)){");
lf[459]=C_decode_literal(C_heaptop,"\376B\000\000\026C_check_for_interrupt;");
lf[460]=C_decode_literal(C_heaptop,"\376B\000\000\005if(c<");
lf[461]=C_decode_literal(C_heaptop,"\376B\000\000\025) C_bad_min_argc_2(c,");
lf[462]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[463]=C_decode_literal(C_heaptop,"\376B\000\000\006if(c!=");
lf[464]=C_decode_literal(C_heaptop,"\376B\000\000\021) C_bad_argc_2(c,");
lf[465]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[466]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word *a;");
lf[467]=C_decode_literal(C_heaptop,"\376B\000\000\005loop:");
lf[468]=C_decode_literal(C_heaptop,"\376B\000\000\012a=C_alloc(");
lf[469]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[470]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word ab[");
lf[471]=C_decode_literal(C_heaptop,"\376B\000\000\010],*a=ab;");
lf[472]=C_decode_literal(C_heaptop,"\376B\000\000\005loop:");
lf[473]=C_decode_literal(C_heaptop,"\376B\000\000\016C_stack_check;");
lf[474]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word *a;");
lf[475]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[476]=C_h_intern(&lf[476],6,"fixnum");
lf[477]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[478]=C_h_intern(&lf[478],6,"flonum");
lf[479]=C_decode_literal(C_heaptop,"\376B\000\000\006double");
lf[480]=C_decode_literal(C_heaptop,"\376B\000\000\004char");
lf[481]=C_h_intern(&lf[481],7,"pointer");
lf[482]=C_decode_literal(C_heaptop,"\376B\000\000\006void *");
lf[483]=C_h_intern(&lf[483],3,"int");
lf[484]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[485]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[486]=C_decode_literal(C_heaptop,"\376B\000\000\024invalid unboxed type");
lf[487]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[488]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word tmp;");
lf[489]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[490]=C_decode_literal(C_heaptop,"\376B\000\000\004,...");
lf[491]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word *a");
lf[492]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word c,");
lf[493]=C_decode_literal(C_heaptop,"\376B\000\000!C_noret_decl(toplevel_trampoline)");
lf[494]=C_decode_literal(C_heaptop,"\376B\000\000Gstatic void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;");
lf[495]=C_decode_literal(C_heaptop,"\376B\000\000\077C_regparm static void C_fcall toplevel_trampoline(void *dummy){");
lf[496]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[497]=C_decode_literal(C_heaptop,"\376B\000\000\042(2,C_SCHEME_UNDEFINED,C_restore);}");
lf[498]=C_decode_literal(C_heaptop,"\376B\000\000\017void C_ccall C_");
lf[499]=C_decode_literal(C_heaptop,"\376B\000\000\022C_main_entry_point");
lf[500]=C_decode_literal(C_heaptop,"\376B\000\000(static C_TLS int toplevel_initialized=0;");
lf[501]=C_decode_literal(C_heaptop,"\376B\000\000\010C_fcall ");
lf[502]=C_decode_literal(C_heaptop,"\376B\000\000\010C_ccall ");
lf[503]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[504]=C_decode_literal(C_heaptop,"\376B\000\000\005void ");
lf[505]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[506]=C_decode_literal(C_heaptop,"\376B\000\000\003/* ");
lf[507]=C_decode_literal(C_heaptop,"\376B\000\000\003 */");
lf[508]=C_h_intern(&lf[508],16,"\010compilercleanup");
lf[509]=C_h_intern(&lf[509],18,"\010compilerdebugging");
lf[510]=C_h_intern(&lf[510],1,"o");
lf[511]=C_decode_literal(C_heaptop,"\376B\000\000 dropping unused closure argument");
lf[512]=C_decode_literal(C_heaptop,"\376B\000\000\011_toplevel");
lf[513]=C_decode_literal(C_heaptop,"\376B\000\000\010toplevel");
lf[514]=C_h_intern(&lf[514],34,"lambda-literal-unboxed-temporaries");
lf[515]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[516]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[517]=C_h_intern(&lf[517],18,"\010compilerreal-name");
lf[518]=C_decode_literal(C_heaptop,"\376B\000\000\021/* end of file */");
lf[519]=C_h_intern(&lf[519],25,"emit-procedure-table-info");
lf[520]=C_h_intern(&lf[520],31,"generate-foreign-callback-stubs");
lf[521]=C_h_intern(&lf[521],31,"\010compilergenerate-foreign-stubs");
lf[522]=C_h_intern(&lf[522],29,"\010compilerforeign-lambda-stubs");
lf[523]=C_h_intern(&lf[523],36,"\010compilergenerate-external-variables");
lf[524]=C_h_intern(&lf[524],27,"\010compilerexternal-variables");
lf[525]=C_h_intern(&lf[525],1,"p");
lf[526]=C_decode_literal(C_heaptop,"\376B\000\000\030code generation phase...");
lf[527]=C_decode_literal(C_heaptop,"\376B\000\000\001{");
lf[528]=C_decode_literal(C_heaptop,"\376B\000\000\027#ifdef C_ENABLE_PTABLES");
lf[529]=C_decode_literal(C_heaptop,"\376B\000\000\016return ptable;");
lf[530]=C_decode_literal(C_heaptop,"\376B\000\000\005#else");
lf[531]=C_decode_literal(C_heaptop,"\376B\000\000\014return NULL;");
lf[532]=C_decode_literal(C_heaptop,"\376B\000\000\006#endif");
lf[533]=C_decode_literal(C_heaptop,"\376B\000\000\001}");
lf[534]=C_decode_literal(C_heaptop,"\376B\000\000*static C_PTABLE_ENTRY *create_ptable(void)");
lf[535]=C_decode_literal(C_heaptop,"\376B\000\000\006#endif");
lf[536]=C_decode_literal(C_heaptop,"\376B\000\000\015{NULL,NULL}};");
lf[537]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[538]=C_decode_literal(C_heaptop,"\376B\000\000\013_toplevel},");
lf[539]=C_decode_literal(C_heaptop,"\376B\000\000\014C_toplevel},");
lf[540]=C_decode_literal(C_heaptop,"\376B\000\000\002},");
lf[541]=C_decode_literal(C_heaptop,"\376B\000\000\002{\042");
lf[542]=C_decode_literal(C_heaptop,"\376B\000\000\011\042,(void*)");
lf[543]=C_h_intern(&lf[543],29,"\010compilerstring->c-identifier");
lf[544]=C_decode_literal(C_heaptop,"\376B\000\000\027#ifdef C_ENABLE_PTABLES");
lf[545]=C_decode_literal(C_heaptop,"\376B\000\000\035static C_PTABLE_ENTRY ptable[");
lf[546]=C_decode_literal(C_heaptop,"\376B\000\000\005] = {");
lf[547]=C_h_intern(&lf[547],11,"string-copy");
lf[548]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[549]=C_h_intern(&lf[549],13,"list-tabulate");
lf[550]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[551]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[552]=C_h_intern(&lf[552],41,"\010compilergenerate-foreign-callback-header");
lf[553]=C_decode_literal(C_heaptop,"\376B\000\000\017C_externexport ");
lf[554]=C_decode_literal(C_heaptop,"\376B\000\000.C_k=C_restore_callback_continuation2(C_level);");
lf[555]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[556]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[557]=C_decode_literal(C_heaptop,"\376B\000\000\013return C_r;");
lf[558]=C_decode_literal(C_heaptop,"\376B\000\000\015#undef return");
lf[559]=C_decode_literal(C_heaptop,"\376B\000\000\006C_ret:");
lf[560]=C_decode_literal(C_heaptop,"\376B\000\000.C_k=C_restore_callback_continuation2(C_level);");
lf[561]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[562]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[563]=C_decode_literal(C_heaptop,"\376B\000\000\013return C_r;");
lf[564]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[565]=C_h_intern(&lf[565],4,"void");
lf[566]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[567]=C_decode_literal(C_heaptop,"\376B\000\000\004C_r=");
lf[568]=C_decode_literal(C_heaptop,"\376B\000\0003int C_level=C_save_callback_continuation(&C_a,C_k);");
lf[569]=C_decode_literal(C_heaptop,"\376B\000\000\002=(");
lf[570]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[571]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[572]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[573]=C_decode_literal(C_heaptop,"\376B\000\0002C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;");
lf[574]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[575]=C_decode_literal(C_heaptop,"\376B\000\000\012) C_noret;");
lf[576]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[577]=C_decode_literal(C_heaptop,"\376B\000\000%(C_word C_c,C_word C_self,C_word C_k,");
lf[578]=C_decode_literal(C_heaptop,"\376B\000\000\014) C_regparm;");
lf[579]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static C_word C_fcall ");
lf[580]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[581]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[582]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[583]=C_decode_literal(C_heaptop,"\376B\000\000%(C_word C_c,C_word C_self,C_word C_k,");
lf[584]=C_decode_literal(C_heaptop,"\376B\000\000\026static C_word C_fcall ");
lf[585]=C_decode_literal(C_heaptop,"\376B\000\000\042#define return(x) C_cblock C_r = (");
lf[586]=C_decode_literal(C_heaptop,"\376B\000\000\036(x))); goto C_ret; C_cblockend");
lf[587]=C_decode_literal(C_heaptop,"\376B\000\000\010/* from ");
lf[588]=C_decode_literal(C_heaptop,"\376B\000\000\003 */");
lf[589]=C_h_intern(&lf[589],21,"foreign-stub-callback");
lf[590]=C_h_intern(&lf[590],16,"foreign-stub-cps");
lf[591]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[592]=C_h_intern(&lf[592],27,"foreign-stub-argument-names");
lf[593]=C_h_intern(&lf[593],17,"foreign-stub-body");
lf[594]=C_h_intern(&lf[594],17,"foreign-stub-name");
lf[595]=C_h_intern(&lf[595],24,"foreign-stub-return-type");
lf[596]=C_decode_literal(C_heaptop,"\376B\000\000\014C_word C_buf");
lf[597]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[598]=C_h_intern(&lf[598],27,"foreign-stub-argument-types");
lf[599]=C_h_intern(&lf[599],19,"\010compilerreal-name2");
lf[600]=C_h_intern(&lf[600],15,"foreign-stub-id");
lf[601]=C_h_intern(&lf[601],5,"float");
lf[602]=C_decode_literal(C_heaptop,"\376B\000\000\002+3");
lf[603]=C_h_intern(&lf[603],8,"c-string");
lf[604]=C_decode_literal(C_heaptop,"\376B\000\000\004+2+(");
lf[605]=C_decode_literal(C_heaptop,"\376B\000\000!==NULL\0771:C_bytestowords(C_strlen(");
lf[606]=C_decode_literal(C_heaptop,"\376B\000\000\003)))");
lf[607]=C_h_intern(&lf[607],16,"nonnull-c-string");
lf[608]=C_decode_literal(C_heaptop,"\376B\000\000\033+2+C_bytestowords(C_strlen(");
lf[609]=C_decode_literal(C_heaptop,"\376B\000\000\002))");
lf[610]=C_h_intern(&lf[610],3,"ref");
lf[611]=C_decode_literal(C_heaptop,"\376B\000\000\002+3");
lf[612]=C_h_intern(&lf[612],5,"const");
lf[613]=C_h_intern(&lf[613],9,"c-pointer");
lf[614]=C_h_intern(&lf[614],15,"nonnull-pointer");
lf[615]=C_h_intern(&lf[615],17,"nonnull-c-pointer");
lf[616]=C_h_intern(&lf[616],8,"function");
lf[617]=C_h_intern(&lf[617],8,"instance");
lf[618]=C_h_intern(&lf[618],16,"nonnull-instance");
lf[619]=C_h_intern(&lf[619],12,"instance-ref");
lf[620]=C_h_intern(&lf[620],18,"\003syshash-table-ref");
lf[621]=C_h_intern(&lf[621],27,"\010compilerforeign-type-table");
lf[622]=C_h_intern(&lf[622],17,"nonnull-c-string*");
lf[623]=C_h_intern(&lf[623],25,"nonnull-unsigned-c-string");
lf[624]=C_h_intern(&lf[624],26,"nonnull-unsigned-c-string*");
lf[625]=C_h_intern(&lf[625],6,"symbol");
lf[626]=C_h_intern(&lf[626],9,"c-string*");
lf[627]=C_h_intern(&lf[627],17,"unsigned-c-string");
lf[628]=C_h_intern(&lf[628],18,"unsigned-c-string*");
lf[629]=C_h_intern(&lf[629],6,"double");
lf[630]=C_h_intern(&lf[630],16,"unsigned-integer");
lf[631]=C_h_intern(&lf[631],18,"unsigned-integer32");
lf[632]=C_h_intern(&lf[632],4,"long");
lf[633]=C_h_intern(&lf[633],7,"integer");
lf[634]=C_h_intern(&lf[634],9,"integer32");
lf[635]=C_h_intern(&lf[635],13,"unsigned-long");
lf[636]=C_h_intern(&lf[636],6,"size_t");
lf[637]=C_h_intern(&lf[637],6,"number");
lf[638]=C_h_intern(&lf[638],18,"unsigned-integer64");
lf[639]=C_h_intern(&lf[639],9,"integer64");
lf[640]=C_h_intern(&lf[640],13,"c-string-list");
lf[641]=C_h_intern(&lf[641],14,"c-string-list*");
lf[642]=C_h_intern(&lf[642],5,"int32");
lf[643]=C_h_intern(&lf[643],5,"short");
lf[644]=C_h_intern(&lf[644],14,"unsigned-short");
lf[645]=C_h_intern(&lf[645],13,"scheme-object");
lf[646]=C_h_intern(&lf[646],13,"unsigned-char");
lf[647]=C_h_intern(&lf[647],12,"unsigned-int");
lf[648]=C_h_intern(&lf[648],14,"unsigned-int32");
lf[649]=C_h_intern(&lf[649],4,"byte");
lf[650]=C_h_intern(&lf[650],13,"unsigned-byte");
lf[651]=C_decode_literal(C_heaptop,"\376B\000\000\002;}");
lf[652]=C_decode_literal(C_heaptop,"\376B\000\000\033C_callback_wrapper((void *)");
lf[653]=C_decode_literal(C_heaptop,"\376B\000\000\007return ");
lf[654]=C_decode_literal(C_heaptop,"\376B\000\000\002x=");
lf[655]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[656]=C_decode_literal(C_heaptop,"\376B\000\000\012C_save(x);");
lf[657]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[658]=C_decode_literal(C_heaptop,"\376B\000\000\035C_callback_adjust_stack(a,s);");
lf[659]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word x,s=");
lf[660]=C_decode_literal(C_heaptop,"\376B\000\000\017,*a=C_alloc(s);");
lf[661]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[662]=C_decode_literal(C_heaptop,"\376B\000\000\010/* from ");
lf[663]=C_decode_literal(C_heaptop,"\376B\000\000\003 */");
lf[664]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[665]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[666]=C_h_intern(&lf[666],36,"foreign-callback-stub-argument-types");
lf[667]=C_h_intern(&lf[667],33,"foreign-callback-stub-return-type");
lf[668]=C_h_intern(&lf[668],24,"foreign-callback-stub-id");
lf[669]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[670]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[671]=C_h_intern(&lf[671],32,"foreign-callback-stub-qualifiers");
lf[672]=C_h_intern(&lf[672],26,"foreign-callback-stub-name");
lf[673]=C_h_intern(&lf[673],4,"quit");
lf[674]=C_decode_literal(C_heaptop,"\376B\000\000\031illegal foreign type `~A\047");
lf[675]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[676]=C_decode_literal(C_heaptop,"\376B\000\000\006C_word");
lf[677]=C_decode_literal(C_heaptop,"\376B\000\000\006C_char");
lf[678]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned C_char");
lf[679]=C_decode_literal(C_heaptop,"\376B\000\000\014unsigned int");
lf[680]=C_decode_literal(C_heaptop,"\376B\000\000\005C_u32");
lf[681]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[682]=C_decode_literal(C_heaptop,"\376B\000\000\006size_t");
lf[683]=C_decode_literal(C_heaptop,"\376B\000\000\005C_s32");
lf[684]=C_decode_literal(C_heaptop,"\376B\000\000\005C_s64");
lf[685]=C_decode_literal(C_heaptop,"\376B\000\000\005C_u64");
lf[686]=C_decode_literal(C_heaptop,"\376B\000\000\005short");
lf[687]=C_decode_literal(C_heaptop,"\376B\000\000\004long");
lf[688]=C_decode_literal(C_heaptop,"\376B\000\000\016unsigned short");
lf[689]=C_decode_literal(C_heaptop,"\376B\000\000\015unsigned long");
lf[690]=C_decode_literal(C_heaptop,"\376B\000\000\005float");
lf[691]=C_decode_literal(C_heaptop,"\376B\000\000\006double");
lf[692]=C_decode_literal(C_heaptop,"\376B\000\000\006void *");
lf[693]=C_decode_literal(C_heaptop,"\376B\000\000\011C_char **");
lf[694]=C_h_intern(&lf[694],4,"blob");
lf[695]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned char *");
lf[696]=C_h_intern(&lf[696],9,"u16vector");
lf[697]=C_h_intern(&lf[697],17,"nonnull-u16vector");
lf[698]=C_decode_literal(C_heaptop,"\376B\000\000\020unsigned short *");
lf[699]=C_h_intern(&lf[699],8,"s8vector");
lf[700]=C_h_intern(&lf[700],16,"nonnull-s8vector");
lf[701]=C_decode_literal(C_heaptop,"\376B\000\000\006char *");
lf[702]=C_h_intern(&lf[702],9,"u32vector");
lf[703]=C_h_intern(&lf[703],17,"nonnull-u32vector");
lf[704]=C_decode_literal(C_heaptop,"\376B\000\000\016unsigned int *");
lf[705]=C_h_intern(&lf[705],9,"s16vector");
lf[706]=C_h_intern(&lf[706],17,"nonnull-s16vector");
lf[707]=C_decode_literal(C_heaptop,"\376B\000\000\007short *");
lf[708]=C_h_intern(&lf[708],9,"s32vector");
lf[709]=C_h_intern(&lf[709],17,"nonnull-s32vector");
lf[710]=C_decode_literal(C_heaptop,"\376B\000\000\005int *");
lf[711]=C_h_intern(&lf[711],9,"f32vector");
lf[712]=C_h_intern(&lf[712],17,"nonnull-f32vector");
lf[713]=C_decode_literal(C_heaptop,"\376B\000\000\007float *");
lf[714]=C_h_intern(&lf[714],9,"f64vector");
lf[715]=C_h_intern(&lf[715],17,"nonnull-f64vector");
lf[716]=C_decode_literal(C_heaptop,"\376B\000\000\010double *");
lf[717]=C_h_intern(&lf[717],14,"pointer-vector");
lf[718]=C_h_intern(&lf[718],22,"nonnull-pointer-vector");
lf[719]=C_decode_literal(C_heaptop,"\376B\000\000\007void **");
lf[720]=C_decode_literal(C_heaptop,"\376B\000\000\006char *");
lf[721]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned char *");
lf[722]=C_decode_literal(C_heaptop,"\376B\000\000\004void");
lf[723]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[724]=C_decode_literal(C_heaptop,"\376B\000\000\001&");
lf[725]=C_decode_literal(C_heaptop,"\376B\000\000\001<");
lf[726]=C_decode_literal(C_heaptop,"\376B\000\000\002> ");
lf[727]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[728]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[729]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[730]=C_decode_literal(C_heaptop,"\376B\000\000\006const ");
lf[731]=C_decode_literal(C_heaptop,"\376B\000\000\007struct ");
lf[732]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[733]=C_decode_literal(C_heaptop,"\376B\000\000\006union ");
lf[734]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[735]=C_decode_literal(C_heaptop,"\376B\000\000\005enum ");
lf[736]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[737]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[738]=C_decode_literal(C_heaptop,"\376B\000\000\001&");
lf[739]=C_decode_literal(C_heaptop,"\376B\000\000\003 (*");
lf[740]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[741]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[742]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[743]=C_h_intern(&lf[743],3,"...");
lf[744]=C_decode_literal(C_heaptop,"\376B\000\000\003...");
lf[745]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[746]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[747]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[748]=C_h_intern(&lf[748],9,"\003syserror");
lf[749]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[750]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010instance\376\003\000\000\002\376\001\000\000\020nonnull-instance\376\377\016");
lf[751]=C_h_intern(&lf[751],4,"enum");
lf[752]=C_h_intern(&lf[752],5,"union");
lf[753]=C_h_intern(&lf[753],6,"struct");
lf[754]=C_h_intern(&lf[754],8,"template");
lf[755]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\017nonnull-pointer\376\003\000\000\002\376\001\000\000\011c-pointer\376\003\000\000\002\376\001\000\000\021nonnull-c"
"-pointer\376\377\016");
lf[756]=C_h_intern(&lf[756],12,"nonnull-blob");
lf[757]=C_h_intern(&lf[757],8,"u8vector");
lf[758]=C_h_intern(&lf[758],16,"nonnull-u8vector");
lf[759]=C_h_intern(&lf[759],14,"scheme-pointer");
lf[760]=C_h_intern(&lf[760],22,"nonnull-scheme-pointer");
lf[761]=C_decode_literal(C_heaptop,"\376B\000\000\042illegal foreign argument type `~A\047");
lf[762]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[763]=C_decode_literal(C_heaptop,"\376B\000\000\031C_character_code((C_word)");
lf[764]=C_decode_literal(C_heaptop,"\376B\000\000\010C_unfix(");
lf[765]=C_decode_literal(C_heaptop,"\376B\000\000\010C_unfix(");
lf[766]=C_decode_literal(C_heaptop,"\376B\000\000\030(unsigned short)C_unfix(");
lf[767]=C_decode_literal(C_heaptop,"\376B\000\000\027C_num_to_unsigned_long(");
lf[768]=C_decode_literal(C_heaptop,"\376B\000\000\013C_c_double(");
lf[769]=C_decode_literal(C_heaptop,"\376B\000\000\015C_num_to_int(");
lf[770]=C_decode_literal(C_heaptop,"\376B\000\000\017C_num_to_int64(");
lf[771]=C_decode_literal(C_heaptop,"\376B\000\000\025(size_t)C_num_to_int(");
lf[772]=C_decode_literal(C_heaptop,"\376B\000\000\020C_num_to_uint64(");
lf[773]=C_decode_literal(C_heaptop,"\376B\000\000\016C_num_to_long(");
lf[774]=C_decode_literal(C_heaptop,"\376B\000\000\026C_num_to_unsigned_int(");
lf[775]=C_decode_literal(C_heaptop,"\376B\000\000\027C_data_pointer_or_null(");
lf[776]=C_decode_literal(C_heaptop,"\376B\000\000\017C_data_pointer(");
lf[777]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[778]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[779]=C_decode_literal(C_heaptop,"\376B\000\000\027C_c_bytevector_or_null(");
lf[780]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_bytevector(");
lf[781]=C_decode_literal(C_heaptop,"\376B\000\000\025C_c_u8vector_or_null(");
lf[782]=C_decode_literal(C_heaptop,"\376B\000\000\015C_c_u8vector(");
lf[783]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_u16vector_or_null(");
lf[784]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_u16vector(");
lf[785]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_u32vector_or_null(");
lf[786]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_u32vector(");
lf[787]=C_decode_literal(C_heaptop,"\376B\000\000\025C_c_s8vector_or_null(");
lf[788]=C_decode_literal(C_heaptop,"\376B\000\000\015C_c_s8vector(");
lf[789]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_s16vector_or_null(");
lf[790]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_s16vector(");
lf[791]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_s32vector_or_null(");
lf[792]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_s32vector(");
lf[793]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_f32vector_or_null(");
lf[794]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_f32vector(");
lf[795]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_f64vector_or_null(");
lf[796]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_f64vector(");
lf[797]=C_decode_literal(C_heaptop,"\376B\000\000\033C_c_pointer_vector_or_null(");
lf[798]=C_decode_literal(C_heaptop,"\376B\000\000\023C_c_pointer_vector(");
lf[799]=C_decode_literal(C_heaptop,"\376B\000\000\021C_string_or_null(");
lf[800]=C_decode_literal(C_heaptop,"\376B\000\000\013C_c_string(");
lf[801]=C_decode_literal(C_heaptop,"\376B\000\000\010C_truep(");
lf[802]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[803]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[804]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[805]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[806]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[807]=C_decode_literal(C_heaptop,"\376B\000\000\015C_num_to_int(");
lf[808]=C_decode_literal(C_heaptop,"\376B\000\000\002*(");
lf[809]=C_decode_literal(C_heaptop,"\376B\000\000\020)C_c_pointer_nn(");
lf[810]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[811]=C_decode_literal(C_heaptop,"\376B\000\000\002*(");
lf[812]=C_decode_literal(C_heaptop,"\376B\000\000\021*)C_c_pointer_nn(");
lf[813]=C_decode_literal(C_heaptop,"\376B\000\000 illegal foreign return type `~A\047");
lf[814]=C_decode_literal(C_heaptop,"\376B\000\000\031C_make_character((C_word)");
lf[815]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fix((C_word)");
lf[816]=C_decode_literal(C_heaptop,"\376B\000\000%C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)");
lf[817]=C_decode_literal(C_heaptop,"\376B\000\000\015C_fix((short)");
lf[818]=C_decode_literal(C_heaptop,"\376B\000\000\025C_fix(0xffff&(C_word)");
lf[819]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fix((char)");
lf[820]=C_decode_literal(C_heaptop,"\376B\000\000\023C_fix(0xff&(C_word)");
lf[821]=C_decode_literal(C_heaptop,"\376B\000\000\012C_flonum(&");
lf[822]=C_decode_literal(C_heaptop,"\376B\000\000\012C_number(&");
lf[823]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[824]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[825]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[826]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[827]=C_decode_literal(C_heaptop,"\376B\000\000\016C_int_to_num(&");
lf[828]=C_decode_literal(C_heaptop,"\376B\000\000\023C_a_double_to_num(&");
lf[829]=C_decode_literal(C_heaptop,"\376B\000\000\006,(int)");
lf[830]=C_decode_literal(C_heaptop,"\376B\000\000\016C_int_to_num(&");
lf[831]=C_decode_literal(C_heaptop,"\376B\000\000\027C_unsigned_int_to_num(&");
lf[832]=C_decode_literal(C_heaptop,"\376B\000\000\017C_long_to_num(&");
lf[833]=C_decode_literal(C_heaptop,"\376B\000\000\030C_unsigned_long_to_num(&");
lf[834]=C_decode_literal(C_heaptop,"\376B\000\000\012C_mk_bool(");
lf[835]=C_decode_literal(C_heaptop,"\376B\000\000\011((C_word)");
lf[836]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[837]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[838]=C_decode_literal(C_heaptop,"\376B\000\000\011,(void*)&");
lf[839]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[840]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[841]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[842]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[843]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[844]=C_decode_literal(C_heaptop,"\376B\000\000\011,(void*)&");
lf[845]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[846]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[847]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[848]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[849]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[850]=C_decode_literal(C_heaptop,"\376B\000\000\016C_int_to_num(&");
lf[851]=C_decode_literal(C_heaptop,"\376B\000\000\003\377\006\001");
lf[852]=C_decode_literal(C_heaptop,"\376B\000\000\003\377\006\000");
lf[853]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\012");
lf[854]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\016");
lf[855]=C_decode_literal(C_heaptop,"\376B\000\000\002\377>");
lf[856]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\036");
lf[857]=C_decode_literal(C_heaptop,"\376B\000\000\002\377U");
lf[858]=C_decode_literal(C_heaptop,"\376B\000\000\001\000");
lf[859]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\001");
lf[860]=C_decode_literal(C_heaptop,"\376B\000\000\001U");
lf[861]=C_decode_literal(C_heaptop,"\376B\000\000\001\000");
lf[862]=C_decode_literal(C_heaptop,"\376B\000\000\001\001");
lf[863]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid literal - cannot encode");
lf[864]=C_h_intern(&lf[864],17,"\003sysstring-append");
lf[865]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[866]=C_h_intern(&lf[866],5,"cons*");
lf[867]=C_h_intern(&lf[867],6,"random");
lf[868]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
C_register_lf2(lf,869,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2246,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2244 */
static void C_ccall f_2246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2246,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2249,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2247 in k2244 */
static void C_ccall f_2249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2249,2,t0,t1);}
t2=C_set_block_item(lf[0] /* output */,0,C_SCHEME_FALSE);
t3=C_mutate((C_word*)lf[1]+1 /* (set! ##compiler#gen ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2252,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[5]+1 /* (set! ##compiler#gen-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2298,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2340,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10310,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* open-output-string */
t7=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k10308 in k2247 in k2244 */
static void C_ccall f_10310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10310,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10313,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[868],t1);}

/* k10311 in k10308 in k2247 in k2244 */
static void C_ccall f_10313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10313,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10336,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10340,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:57: random */
t5=*((C_word*)lf[867]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_fix(16777216));}

/* k10338 in k10311 in k10308 in k2247 in k2244 */
static void C_ccall f_10340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* number->string */
C_number_to_string(4,0,((C_word*)t0)[2],t1,C_fix(16));}

/* k10334 in k10311 in k10308 in k2247 in k2244 */
static void C_ccall f_10336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k10314 in k10311 in k10308 in k2247 in k2244 */
static void C_ccall f_10316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[341]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(95),((C_word*)t0)[2]);}

/* k10317 in k10314 in k10311 in k10308 in k2247 in k2244 */
static void C_ccall f_10319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10319,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10332,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:57: current-seconds */
t4=*((C_word*)lf[237]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k10330 in k10317 in k10314 in k10311 in k10308 in k2247 in k2244 */
static void C_ccall f_10332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k10320 in k10317 in k10314 in k10311 in k10308 in k2247 in k2244 */
static void C_ccall f_10322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10322,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[341]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(95),((C_word*)t0)[2]);}

/* k10323 in k10320 in k10317 in k10314 in k10311 in k10308 in k2247 in k2244 */
static void C_ccall f_10325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10325,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10328,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* get-output-string */
t3=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k10326 in k10323 in k10320 in k10317 in k10314 in k10311 in k10308 in k2247 in k2244 */
static void C_ccall f_10328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:56: string->c-identifier */
t2=*((C_word*)lf[543]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2338 in k2247 in k2244 */
static void C_ccall f_2340(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2340,2,t0,t1);}
t2=C_mutate((C_word*)lf[7]+1 /* (set! ##compiler#unique-id ...) */,t1);
t3=C_mutate((C_word*)lf[8]+1 /* (set! ##compiler#generate-code ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2342,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[519]+1 /* (set! emit-procedure-table-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6769,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[508]+1 /* (set! ##compiler#cleanup ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6846,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[284]+1 /* (set! ##compiler#make-variable-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6935,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[299]+1 /* (set! ##compiler#make-argument-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6951,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[523]+1 /* (set! ##compiler#generate-external-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6967,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[211]+1 /* (set! ##compiler#generate-foreign-callback-stub-prototypes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7024,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[521]+1 /* (set! ##compiler#generate-foreign-stubs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7067,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[520]+1 /* (set! generate-foreign-callback-stubs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7392,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[552]+1 /* (set! ##compiler#generate-foreign-callback-header ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7907,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[179]+1 /* (set! ##compiler#foreign-type-declaration ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7972,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[178]+1 /* (set! ##compiler#foreign-argument-conversion ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8898,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[173]+1 /* (set! ##compiler#foreign-result-conversion ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9376,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[367]+1 /* (set! ##compiler#encode-literal ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10010,tmp=(C_word)a,a+=2,tmp));
t17=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,C_SCHEME_UNDEFINED);}

/* f_10010 in k2338 in k2247 in k2244 */
static void C_ccall f_10010(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10010,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10019,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10072,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_eqp(C_SCHEME_TRUE,t2);
if(C_truep(t5)){
t6=t1;
t7=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1388: string-append */
t8=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,lf[851]);}
else{
t6=C_eqp(C_SCHEME_FALSE,t2);
if(C_truep(t6)){
t7=t1;
t8=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1388: string-append */
t9=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,lf[852]);}
else{
if(C_truep(C_charp(t2))){
t7=C_fix(C_character_code(t2));
t8=f_10019(C_a_i(&a,24),t7);
/* c-backend.scm:1392: string-append */
t9=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t4,lf[853],t8);}
else{
if(C_truep(C_i_nullp(t2))){
t7=t1;
t8=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1388: string-append */
t9=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,lf[854]);}
else{
if(C_truep(C_eofp(t2))){
t7=t1;
t8=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1388: string-append */
t9=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,lf[855]);}
else{
t7=*((C_word*)lf[356]+1);
t8=C_eqp(t7,t2);
if(C_truep(t8)){
t9=t1;
t10=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1388: string-append */
t11=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,lf[856]);}
else{
if(C_truep(C_fixnump(t2))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10190,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1397: big-fixnum? */
t10=*((C_word*)lf[369]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
if(C_truep(C_i_numberp(t2))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10203,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1406: number->string */
C_number_to_string(3,0,t9,t2);}
else{
if(C_truep(C_i_symbolp(t2))){
t9=C_slot(t2,C_fix(1));
t10=C_i_string_length(t9);
t11=f_10019(C_a_i(&a,24),t10);
/* c-backend.scm:1409: string-append */
t12=*((C_word*)lf[113]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t4,lf[862],t11,t9);}
else{
if(C_truep(C_immp(t2))){
/* c-backend.scm:1414: bomb */
t9=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t4,lf[863],t2);}
else{
if(C_truep(C_byteblockp(t2))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10242,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t10=t2;
t11=stub2200(C_SCHEME_UNDEFINED,t10);
t12=C_make_character(C_unfix(t11));
t13=C_a_i_string(&a,1,t12);
t14=t2;
t15=stub2204(C_SCHEME_UNDEFINED,t14);
t16=f_10019(C_a_i(&a,24),t15);
/* c-backend.scm:1417: string-append */
t17=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t9,t13,t16);}
else{
t9=t2;
t10=stub2204(C_SCHEME_UNDEFINED,t9);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10272,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t12=t2;
t13=stub2200(C_SCHEME_UNDEFINED,t12);
t14=C_make_character(C_unfix(t13));
t15=C_a_i_string(&a,1,t14);
t16=f_10019(C_a_i(&a,24),t10);
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10284,a[2]=t16,a[3]=t15,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10286,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1427: list-tabulate */
t19=*((C_word*)lf[549]+1);
((C_proc4)(void*)(*((C_word*)t19+1)))(4,t19,t17,t10,t18);}}}}}}}}}}}}

/* a10285 */
static void C_ccall f_10286(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10286,3,t0,t1,t2);}
t3=C_slot(((C_word*)t0)[2],t2);
/* c-backend.scm:1427: encode-literal */
t4=*((C_word*)lf[367]+1);
f_10010(3,t4,t1,t3);}

/* k10282 */
static void C_ccall f_10284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1424: cons* */
t2=*((C_word*)lf[866]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k10270 */
static void C_ccall f_10272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1423: string-intersperse */
t2=*((C_word*)lf[229]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[865]);}

/* k10240 */
static void C_ccall f_10242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1416: ##sys#string-append */
t2=*((C_word*)lf[864]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k10201 */
static void C_ccall f_10203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1406: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[860],t1,lf[861]);}

/* k10188 */
static void C_ccall f_10190(C_word c,C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10190,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10186,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1404: number->string */
C_number_to_string(3,0,t2,((C_word*)t0)[2]);}
else{
t2=C_a_i_arithmetic_shift(&a,2,((C_word*)t0)[2],C_fix(-24));
t3=C_a_i_bitwise_and(&a,2,C_fix(255),t2);
t4=C_make_character(C_unfix(t3));
t5=C_a_i_arithmetic_shift(&a,2,((C_word*)t0)[2],C_fix(-16));
t6=C_a_i_bitwise_and(&a,2,C_fix(255),t5);
t7=C_make_character(C_unfix(t6));
t8=C_a_i_arithmetic_shift(&a,2,((C_word*)t0)[2],C_fix(-8));
t9=C_a_i_bitwise_and(&a,2,C_fix(255),t8);
t10=C_make_character(C_unfix(t9));
t11=C_a_i_bitwise_and(&a,2,C_fix(255),((C_word*)t0)[2]);
t12=C_make_character(C_unfix(t11));
t13=C_a_i_string(&a,4,t4,t7,t10,t12);
/* c-backend.scm:1398: string-append */
t14=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,((C_word*)t0)[3],lf[859],t13);}}

/* k10184 in k10188 */
static void C_ccall f_10186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1404: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[857],t1,lf[858]);}

/* k10070 */
static void C_ccall f_10072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10072,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1388: string-append */
t4=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}

/* encode-size */
static C_word C_fcall f_10019(C_word *a,C_word t1){
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
C_stack_check;
t2=C_a_i_arithmetic_shift(&a,2,t1,C_fix(-16));
t3=C_a_i_bitwise_and(&a,2,C_fix(255),t2);
t4=C_make_character(C_unfix(t3));
t5=C_a_i_arithmetic_shift(&a,2,t1,C_fix(-8));
t6=C_a_i_bitwise_and(&a,2,C_fix(255),t5);
t7=C_make_character(C_unfix(t6));
t8=C_a_i_bitwise_and(&a,2,C_fix(255),t1);
t9=C_make_character(C_unfix(t8));
return(C_a_i_string(&a,3,t4,t7,t9));}

/* f_9376 in k2338 in k2247 in k2244 */
static void C_ccall f_9376(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9376,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9378,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t2;
t6=C_eqp(t5,lf[17]);
t7=(C_truep(t6)?t6:C_eqp(t5,lf[646]));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[814]);}
else{
t8=C_eqp(t5,lf[483]);
t9=(C_truep(t8)?t8:C_eqp(t5,lf[642]));
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[815]);}
else{
t10=C_eqp(t5,lf[647]);
t11=(C_truep(t10)?t10:C_eqp(t5,lf[648]));
if(C_truep(t11)){
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,lf[816]);}
else{
t12=C_eqp(t5,lf[643]);
if(C_truep(t12)){
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[817]);}
else{
t13=C_eqp(t5,lf[644]);
if(C_truep(t13)){
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,lf[818]);}
else{
t14=C_eqp(t5,lf[649]);
if(C_truep(t14)){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,lf[819]);}
else{
t15=C_eqp(t5,lf[650]);
if(C_truep(t15)){
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,lf[820]);}
else{
t16=C_eqp(t5,lf[601]);
t17=(C_truep(t16)?t16:C_eqp(t5,lf[629]));
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9445,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t19=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,t18);}
else{
t18=C_eqp(t5,lf[637]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9466,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t20=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,t19);}
else{
t19=C_eqp(t5,lf[607]);
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9487,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t19)){
t21=t20;
f_9487(t21,t19);}
else{
t21=C_eqp(t5,lf[603]);
if(C_truep(t21)){
t22=t20;
f_9487(t22,t21);}
else{
t22=C_eqp(t5,lf[615]);
if(C_truep(t22)){
t23=t20;
f_9487(t23,t22);}
else{
t23=C_eqp(t5,lf[626]);
if(C_truep(t23)){
t24=t20;
f_9487(t24,t23);}
else{
t24=C_eqp(t5,lf[622]);
if(C_truep(t24)){
t25=t20;
f_9487(t25,t24);}
else{
t25=C_eqp(t5,lf[627]);
if(C_truep(t25)){
t26=t20;
f_9487(t26,t25);}
else{
t26=C_eqp(t5,lf[628]);
if(C_truep(t26)){
t27=t20;
f_9487(t27,t26);}
else{
t27=C_eqp(t5,lf[623]);
if(C_truep(t27)){
t28=t20;
f_9487(t28,t27);}
else{
t28=C_eqp(t5,lf[624]);
if(C_truep(t28)){
t29=t20;
f_9487(t29,t28);}
else{
t29=C_eqp(t5,lf[625]);
if(C_truep(t29)){
t30=t20;
f_9487(t30,t29);}
else{
t30=C_eqp(t5,lf[640]);
t31=t20;
f_9487(t31,(C_truep(t30)?t30:C_eqp(t5,lf[641])));}}}}}}}}}}}}}}}}}}}}

/* k9485 */
static void C_fcall f_9487(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9487,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9490,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t3=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[613]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9511,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t4=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[633]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[4],lf[634]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9535,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t6=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[639]);
t6=(C_truep(t5)?t5:C_eqp(((C_word*)t0)[4],lf[638]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9559,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t8=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[636]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9580,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t9=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[630]);
t9=(C_truep(t8)?t8:C_eqp(((C_word*)t0)[4],lf[631]));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9604,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t11=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[632]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9625,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t12=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[635]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9646,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t13=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[14]);
if(C_truep(t12)){
t13=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[834]);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[565]);
t14=(C_truep(t13)?t13:C_eqp(((C_word*)t0)[4],lf[645]));
if(C_truep(t14)){
t15=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,lf[835]);}
else{
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9676,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
/* c-backend.scm:1341: ##sys#hash-table-ref */
t16=*((C_word*)lf[620]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t15,*((C_word*)lf[621]+1),((C_word*)t0)[3]);}
else{
t16=t15;
f_9676(2,t16,C_SCHEME_FALSE);}}}}}}}}}}}}

/* k9674 in k9485 */
static void C_ccall f_9676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9676,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9680,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* g20582059 */
t3=t2;
f_9680(t3,((C_word*)t0)[4],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9703,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t3=C_i_length(((C_word*)t0)[3]);
t4=t2;
f_9703(t4,C_i_greater_or_equalp(t3,C_fix(2)));}
else{
t3=t2;
f_9703(t3,C_SCHEME_FALSE);}}}

/* k9701 in k9674 in k9485 */
static void C_fcall f_9703(C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9703,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_eqp(t2,lf[614]);
t4=(C_truep(t3)?t3:C_eqp(t2,lf[615]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9718,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t6=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_eqp(t2,lf[610]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9739,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t7=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_eqp(t2,lf[617]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9760,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t8=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_eqp(t2,lf[618]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9781,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t9=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=C_eqp(t2,lf[619]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9802,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t10=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_eqp(t2,lf[612]);
if(C_truep(t9)){
t10=C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm:1356: foreign-result-conversion */
t11=*((C_word*)lf[173]+1);
f_9376(4,t11,((C_word*)t0)[4],t10,((C_word*)t0)[3]);}
else{
t10=C_eqp(t2,lf[481]);
t11=(C_truep(t10)?t10:C_eqp(t2,lf[613]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9839,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t13=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
t12=C_eqp(t2,lf[616]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9860,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t14=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,t13);}
else{
t13=C_eqp(t2,lf[751]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9881,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t15=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}
else{
/* c-backend.scm:1361: err */
t14=((C_word*)t0)[2];
f_9378(t14,((C_word*)t0)[4]);}}}}}}}}}}
else{
/* c-backend.scm:1362: err */
t2=((C_word*)t0)[2];
f_9378(t2,((C_word*)t0)[4]);}}

/* k9879 in k9701 in k9674 in k9485 */
static void C_ccall f_9881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9884,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[850],t1);}

/* k9882 in k9879 in k9701 in k9674 in k9485 */
static void C_ccall f_9884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9884,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9887,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9885 in k9882 in k9879 in k9701 in k9674 in k9485 */
static void C_ccall f_9887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9887,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[341]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9888 in k9885 in k9882 in k9879 in k9701 in k9674 in k9485 */
static void C_ccall f_9890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9858 in k9701 in k9674 in k9485 */
static void C_ccall f_9860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9860,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9863,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[849],t1);}

/* k9861 in k9858 in k9701 in k9674 in k9485 */
static void C_ccall f_9863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9866,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9864 in k9861 in k9858 in k9701 in k9674 in k9485 */
static void C_ccall f_9866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[848],((C_word*)t0)[2]);}

/* k9867 in k9864 in k9861 in k9858 in k9701 in k9674 in k9485 */
static void C_ccall f_9869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9837 in k9701 in k9674 in k9485 */
static void C_ccall f_9839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9839,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9842,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[847],t1);}

/* k9840 in k9837 in k9701 in k9674 in k9485 */
static void C_ccall f_9842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9842,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9845,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9843 in k9840 in k9837 in k9701 in k9674 in k9485 */
static void C_ccall f_9845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9845,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[846],((C_word*)t0)[2]);}

/* k9846 in k9843 in k9840 in k9837 in k9701 in k9674 in k9485 */
static void C_ccall f_9848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9800 in k9701 in k9674 in k9485 */
static void C_ccall f_9802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9802,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9805,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[845],t1);}

/* k9803 in k9800 in k9701 in k9674 in k9485 */
static void C_ccall f_9805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9805,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9808,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9806 in k9803 in k9800 in k9701 in k9674 in k9485 */
static void C_ccall f_9808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9808,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[844],((C_word*)t0)[2]);}

/* k9809 in k9806 in k9803 in k9800 in k9701 in k9674 in k9485 */
static void C_ccall f_9811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9779 in k9701 in k9674 in k9485 */
static void C_ccall f_9781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9781,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9784,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[843],t1);}

/* k9782 in k9779 in k9701 in k9674 in k9485 */
static void C_ccall f_9784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9784,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9787,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9785 in k9782 in k9779 in k9701 in k9674 in k9485 */
static void C_ccall f_9787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9787,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9790,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[842],((C_word*)t0)[2]);}

/* k9788 in k9785 in k9782 in k9779 in k9701 in k9674 in k9485 */
static void C_ccall f_9790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9758 in k9701 in k9674 in k9485 */
static void C_ccall f_9760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9760,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9763,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[841],t1);}

/* k9761 in k9758 in k9701 in k9674 in k9485 */
static void C_ccall f_9763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9763,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9766,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9764 in k9761 in k9758 in k9701 in k9674 in k9485 */
static void C_ccall f_9766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9766,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[840],((C_word*)t0)[2]);}

/* k9767 in k9764 in k9761 in k9758 in k9701 in k9674 in k9485 */
static void C_ccall f_9769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9737 in k9701 in k9674 in k9485 */
static void C_ccall f_9739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9739,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9742,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[839],t1);}

/* k9740 in k9737 in k9701 in k9674 in k9485 */
static void C_ccall f_9742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9742,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9745,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9743 in k9740 in k9737 in k9701 in k9674 in k9485 */
static void C_ccall f_9745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9745,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9748,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[838],((C_word*)t0)[2]);}

/* k9746 in k9743 in k9740 in k9737 in k9701 in k9674 in k9485 */
static void C_ccall f_9748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9716 in k9701 in k9674 in k9485 */
static void C_ccall f_9718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9718,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9721,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[837],t1);}

/* k9719 in k9716 in k9701 in k9674 in k9485 */
static void C_ccall f_9721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9721,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9724,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9722 in k9719 in k9716 in k9701 in k9674 in k9485 */
static void C_ccall f_9724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9724,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[836],((C_word*)t0)[2]);}

/* k9725 in k9722 in k9719 in k9716 in k9701 in k9674 in k9485 */
static void C_ccall f_9727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* g2058 in k9674 in k9485 */
static void C_fcall f_9680(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9680,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* c-backend.scm:1343: foreign-result-conversion */
t4=*((C_word*)lf[173]+1);
f_9376(4,t4,t1,t3,((C_word*)t0)[2]);}
else{
t3=t2;
/* c-backend.scm:1343: foreign-result-conversion */
t4=*((C_word*)lf[173]+1);
f_9376(4,t4,t1,t3,((C_word*)t0)[2]);}}

/* k9644 in k9485 */
static void C_ccall f_9646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9649,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[833],t1);}

/* k9647 in k9644 in k9485 */
static void C_ccall f_9649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9649,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9652,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9650 in k9647 in k9644 in k9485 */
static void C_ccall f_9652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9652,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[341]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9653 in k9650 in k9647 in k9644 in k9485 */
static void C_ccall f_9655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9623 in k9485 */
static void C_ccall f_9625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9625,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9628,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[832],t1);}

/* k9626 in k9623 in k9485 */
static void C_ccall f_9628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9628,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9631,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9629 in k9626 in k9623 in k9485 */
static void C_ccall f_9631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9631,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[341]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9632 in k9629 in k9626 in k9623 in k9485 */
static void C_ccall f_9634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9602 in k9485 */
static void C_ccall f_9604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9604,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9607,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[831],t1);}

/* k9605 in k9602 in k9485 */
static void C_ccall f_9607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9607,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9610,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9608 in k9605 in k9602 in k9485 */
static void C_ccall f_9610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9610,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9613,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[341]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9611 in k9608 in k9605 in k9602 in k9485 */
static void C_ccall f_9613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9578 in k9485 */
static void C_ccall f_9580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9583,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[830],t1);}

/* k9581 in k9578 in k9485 */
static void C_ccall f_9583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9583,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9586,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9584 in k9581 in k9578 in k9485 */
static void C_ccall f_9586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9586,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[829],((C_word*)t0)[2]);}

/* k9587 in k9584 in k9581 in k9578 in k9485 */
static void C_ccall f_9589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9557 in k9485 */
static void C_ccall f_9559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9559,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9562,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[828],t1);}

/* k9560 in k9557 in k9485 */
static void C_ccall f_9562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9562,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9565,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9563 in k9560 in k9557 in k9485 */
static void C_ccall f_9565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9568,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[341]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9566 in k9563 in k9560 in k9557 in k9485 */
static void C_ccall f_9568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9533 in k9485 */
static void C_ccall f_9535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9535,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9538,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[827],t1);}

/* k9536 in k9533 in k9485 */
static void C_ccall f_9538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9538,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9541,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9539 in k9536 in k9533 in k9485 */
static void C_ccall f_9541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9541,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[341]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9542 in k9539 in k9536 in k9533 in k9485 */
static void C_ccall f_9544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9509 in k9485 */
static void C_ccall f_9511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9511,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9514,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[826],t1);}

/* k9512 in k9509 in k9485 */
static void C_ccall f_9514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9517,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9515 in k9512 in k9509 in k9485 */
static void C_ccall f_9517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9517,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[825],((C_word*)t0)[2]);}

/* k9518 in k9515 in k9512 in k9509 in k9485 */
static void C_ccall f_9520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9488 in k9485 */
static void C_ccall f_9490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9490,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9493,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[824],t1);}

/* k9491 in k9488 in k9485 */
static void C_ccall f_9493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9493,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9496,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9494 in k9491 in k9488 in k9485 */
static void C_ccall f_9496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9496,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[823],((C_word*)t0)[2]);}

/* k9497 in k9494 in k9491 in k9488 in k9485 */
static void C_ccall f_9499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9464 */
static void C_ccall f_9466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9466,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9469,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[822],t1);}

/* k9467 in k9464 */
static void C_ccall f_9469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9469,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9472,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9470 in k9467 in k9464 */
static void C_ccall f_9472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9472,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9475,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[341]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9473 in k9470 in k9467 in k9464 */
static void C_ccall f_9475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9443 */
static void C_ccall f_9445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9445,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9448,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[821],t1);}

/* k9446 in k9443 */
static void C_ccall f_9448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9451,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9449 in k9446 in k9443 */
static void C_ccall f_9451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9451,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9454,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[341]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9452 in k9449 in k9446 in k9443 */
static void C_ccall f_9454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* err */
static void C_fcall f_9378(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9378,NULL,2,t0,t1);}
/* c-backend.scm:1316: quit */
t2=*((C_word*)lf[673]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[813],((C_word*)t0)[2]);}

/* f_8898 in k2338 in k2247 in k2244 */
static void C_ccall f_8898(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8898,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8900,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=C_eqp(t4,lf[645]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[762]);}
else{
t6=C_eqp(t4,lf[17]);
t7=(C_truep(t6)?t6:C_eqp(t4,lf[646]));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[763]);}
else{
t8=C_eqp(t4,lf[649]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8928,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;
f_8928(t10,t8);}
else{
t10=C_eqp(t4,lf[483]);
if(C_truep(t10)){
t11=t9;
f_8928(t11,t10);}
else{
t11=C_eqp(t4,lf[647]);
if(C_truep(t11)){
t12=t9;
f_8928(t12,t11);}
else{
t12=C_eqp(t4,lf[648]);
t13=t9;
f_8928(t13,(C_truep(t12)?t12:C_eqp(t4,lf[650])));}}}}}}

/* k8926 */
static void C_fcall f_8928(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_8928,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[764]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[643]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[765]);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[644]);
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[766]);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[635]);
if(C_truep(t4)){
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[767]);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[629]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_8955(t7,t5);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[637]);
t8=t6;
f_8955(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[4],lf[601])));}}}}}}

/* k8953 in k8926 */
static void C_fcall f_8955(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8955,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[768]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[633]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[634]));
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[769]);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[639]);
if(C_truep(t4)){
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[770]);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[636]);
if(C_truep(t5)){
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[771]);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[638]);
if(C_truep(t6)){
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,lf[772]);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[632]);
if(C_truep(t7)){
t8=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[773]);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[630]);
t9=(C_truep(t8)?t8:C_eqp(((C_word*)t0)[4],lf[631]));
if(C_truep(t9)){
t10=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[774]);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[759]);
if(C_truep(t10)){
t11=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,lf[775]);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[760]);
if(C_truep(t11)){
t12=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,lf[776]);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[613]);
if(C_truep(t12)){
t13=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[777]);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[615]);
if(C_truep(t13)){
t14=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,lf[778]);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[694]);
if(C_truep(t14)){
t15=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,lf[779]);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[756]);
if(C_truep(t15)){
t16=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,lf[780]);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[757]);
if(C_truep(t16)){
t17=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,lf[781]);}
else{
t17=C_eqp(((C_word*)t0)[4],lf[758]);
if(C_truep(t17)){
t18=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,lf[782]);}
else{
t18=C_eqp(((C_word*)t0)[4],lf[696]);
if(C_truep(t18)){
t19=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,lf[783]);}
else{
t19=C_eqp(((C_word*)t0)[4],lf[697]);
if(C_truep(t19)){
t20=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,lf[784]);}
else{
t20=C_eqp(((C_word*)t0)[4],lf[702]);
if(C_truep(t20)){
t21=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t21+1)))(2,t21,lf[785]);}
else{
t21=C_eqp(((C_word*)t0)[4],lf[703]);
if(C_truep(t21)){
t22=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,lf[786]);}
else{
t22=C_eqp(((C_word*)t0)[4],lf[699]);
if(C_truep(t22)){
t23=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,lf[787]);}
else{
t23=C_eqp(((C_word*)t0)[4],lf[700]);
if(C_truep(t23)){
t24=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t24+1)))(2,t24,lf[788]);}
else{
t24=C_eqp(((C_word*)t0)[4],lf[705]);
if(C_truep(t24)){
t25=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t25+1)))(2,t25,lf[789]);}
else{
t25=C_eqp(((C_word*)t0)[4],lf[706]);
if(C_truep(t25)){
t26=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t26+1)))(2,t26,lf[790]);}
else{
t26=C_eqp(((C_word*)t0)[4],lf[708]);
if(C_truep(t26)){
t27=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t27+1)))(2,t27,lf[791]);}
else{
t27=C_eqp(((C_word*)t0)[4],lf[709]);
if(C_truep(t27)){
t28=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t28+1)))(2,t28,lf[792]);}
else{
t28=C_eqp(((C_word*)t0)[4],lf[711]);
if(C_truep(t28)){
t29=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t29+1)))(2,t29,lf[793]);}
else{
t29=C_eqp(((C_word*)t0)[4],lf[712]);
if(C_truep(t29)){
t30=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t30+1)))(2,t30,lf[794]);}
else{
t30=C_eqp(((C_word*)t0)[4],lf[714]);
if(C_truep(t30)){
t31=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t31+1)))(2,t31,lf[795]);}
else{
t31=C_eqp(((C_word*)t0)[4],lf[715]);
if(C_truep(t31)){
t32=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t32+1)))(2,t32,lf[796]);}
else{
t32=C_eqp(((C_word*)t0)[4],lf[717]);
if(C_truep(t32)){
t33=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t33+1)))(2,t33,lf[797]);}
else{
t33=C_eqp(((C_word*)t0)[4],lf[718]);
if(C_truep(t33)){
t34=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t34+1)))(2,t34,lf[798]);}
else{
t34=C_eqp(((C_word*)t0)[4],lf[603]);
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t34)){
t36=t35;
f_9150(t36,t34);}
else{
t36=C_eqp(((C_word*)t0)[4],lf[626]);
if(C_truep(t36)){
t37=t35;
f_9150(t37,t36);}
else{
t37=C_eqp(((C_word*)t0)[4],lf[627]);
t38=t35;
f_9150(t38,(C_truep(t37)?t37:C_eqp(((C_word*)t0)[4],lf[628])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k9148 in k8953 in k8926 */
static void C_fcall f_9150(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9150,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[799]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[607]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_9159(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[622]);
if(C_truep(t4)){
t5=t3;
f_9159(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[623]);
if(C_truep(t5)){
t6=t3;
f_9159(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[624]);
t7=t3;
f_9159(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[625])));}}}}}

/* k9157 in k9148 in k8953 in k8926 */
static void C_fcall f_9159(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9159,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[800]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[14]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[801]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
/* c-backend.scm:1292: ##sys#hash-table-ref */
t4=*((C_word*)lf[620]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[621]+1),((C_word*)t0)[3]);}
else{
t4=t3;
f_9168(2,t4,C_SCHEME_FALSE);}}}}

/* k9166 in k9157 in k9148 in k8953 in k8926 */
static void C_ccall f_9168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9168,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
t3=t1;
if(C_truep(C_i_vectorp(t3))){
t4=C_i_vector_ref(t3,C_fix(0));
/* c-backend.scm:1294: foreign-argument-conversion */
t5=*((C_word*)lf[178]+1);
f_8898(3,t5,t2,t4);}
else{
/* c-backend.scm:1294: foreign-argument-conversion */
t4=*((C_word*)lf[178]+1);
f_8898(3,t4,t2,t3);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t3=C_i_length(((C_word*)t0)[3]);
t4=t2;
f_9195(t4,C_i_greater_or_equalp(t3,C_fix(2)));}
else{
t3=t2;
f_9195(t3,C_SCHEME_FALSE);}}}

/* k9193 in k9166 in k9157 in k9148 in k8953 in k8926 */
static void C_fcall f_9195(C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9195,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[4]);
t3=C_eqp(t2,lf[613]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[802]);}
else{
t4=C_eqp(t2,lf[615]);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[803]);}
else{
t5=C_eqp(t2,lf[617]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[804]);}
else{
t6=C_eqp(t2,lf[618]);
if(C_truep(t6)){
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,lf[805]);}
else{
t7=C_eqp(t2,lf[616]);
if(C_truep(t7)){
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[806]);}
else{
t8=C_eqp(t2,lf[612]);
if(C_truep(t8)){
t9=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1302: foreign-argument-conversion */
t10=*((C_word*)lf[178]+1);
f_8898(3,t10,((C_word*)t0)[3],t9);}
else{
t9=C_eqp(t2,lf[751]);
if(C_truep(t9)){
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[807]);}
else{
t10=C_eqp(t2,lf[610]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9260,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t12=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1305: foreign-type-declaration */
t13=*((C_word*)lf[179]+1);
f_7972(4,t13,t11,t12,lf[810]);}
else{
t11=C_eqp(t2,lf[619]);
if(C_truep(t11)){
t12=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1308: string-append */
t13=*((C_word*)lf[113]+1);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,((C_word*)t0)[3],lf[811],t12,lf[812]);}
else{
/* c-backend.scm:1309: err */
t12=((C_word*)t0)[2];
f_8900(t12,((C_word*)t0)[3]);}}}}}}}}}}
else{
/* c-backend.scm:1310: err */
t2=((C_word*)t0)[2];
f_8900(t2,((C_word*)t0)[3]);}}

/* k9258 in k9193 in k9166 in k9157 in k9148 in k8953 in k8926 */
static void C_ccall f_9260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1305: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[808],t1,lf[809]);}

/* err */
static void C_fcall f_8900(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8900,NULL,2,t0,t1);}
/* c-backend.scm:1248: quit */
t2=*((C_word*)lf[673]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[761],((C_word*)t0)[2]);}

/* f_7972 in k2338 in k2247 in k2244 */
static void C_ccall f_7972(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7972,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7974,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7979,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=t2;
t7=C_eqp(t6,lf[645]);
if(C_truep(t7)){
/* c-backend.scm:1156: str */
t8=t5;
f_7979(t8,t1,lf[676]);}
else{
t8=C_eqp(t6,lf[17]);
t9=(C_truep(t8)?t8:C_eqp(t6,lf[649]));
if(C_truep(t9)){
/* c-backend.scm:1157: str */
t10=t5;
f_7979(t10,t1,lf[677]);}
else{
t10=C_eqp(t6,lf[646]);
t11=(C_truep(t10)?t10:C_eqp(t6,lf[650]));
if(C_truep(t11)){
/* c-backend.scm:1158: str */
t12=t5;
f_7979(t12,t1,lf[678]);}
else{
t12=C_eqp(t6,lf[647]);
t13=(C_truep(t12)?t12:C_eqp(t6,lf[630]));
if(C_truep(t13)){
/* c-backend.scm:1159: str */
t14=t5;
f_7979(t14,t1,lf[679]);}
else{
t14=C_eqp(t6,lf[648]);
t15=(C_truep(t14)?t14:C_eqp(t6,lf[631]));
if(C_truep(t15)){
/* c-backend.scm:1160: str */
t16=t5;
f_7979(t16,t1,lf[680]);}
else{
t16=C_eqp(t6,lf[483]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8049,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t6,a[6]=t1,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t16)){
t18=t17;
f_8049(t18,t16);}
else{
t18=C_eqp(t6,lf[633]);
t19=t17;
f_8049(t19,(C_truep(t18)?t18:C_eqp(t6,lf[14])));}}}}}}}

/* k8047 */
static void C_fcall f_8049(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8049,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1161: str */
t2=((C_word*)t0)[7];
f_7979(t2,((C_word*)t0)[6],lf[681]);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[636]);
if(C_truep(t2)){
/* c-backend.scm:1162: str */
t3=((C_word*)t0)[7];
f_7979(t3,((C_word*)t0)[6],lf[682]);}
else{
t3=C_eqp(((C_word*)t0)[5],lf[642]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[5],lf[634]));
if(C_truep(t4)){
/* c-backend.scm:1163: str */
t5=((C_word*)t0)[7];
f_7979(t5,((C_word*)t0)[6],lf[683]);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[639]);
if(C_truep(t5)){
/* c-backend.scm:1164: str */
t6=((C_word*)t0)[7];
f_7979(t6,((C_word*)t0)[6],lf[684]);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[638]);
if(C_truep(t6)){
/* c-backend.scm:1165: str */
t7=((C_word*)t0)[7];
f_7979(t7,((C_word*)t0)[6],lf[685]);}
else{
t7=C_eqp(((C_word*)t0)[5],lf[643]);
if(C_truep(t7)){
/* c-backend.scm:1166: str */
t8=((C_word*)t0)[7];
f_7979(t8,((C_word*)t0)[6],lf[686]);}
else{
t8=C_eqp(((C_word*)t0)[5],lf[632]);
if(C_truep(t8)){
/* c-backend.scm:1167: str */
t9=((C_word*)t0)[7];
f_7979(t9,((C_word*)t0)[6],lf[687]);}
else{
t9=C_eqp(((C_word*)t0)[5],lf[644]);
if(C_truep(t9)){
/* c-backend.scm:1168: str */
t10=((C_word*)t0)[7];
f_7979(t10,((C_word*)t0)[6],lf[688]);}
else{
t10=C_eqp(((C_word*)t0)[5],lf[635]);
if(C_truep(t10)){
/* c-backend.scm:1169: str */
t11=((C_word*)t0)[7];
f_7979(t11,((C_word*)t0)[6],lf[689]);}
else{
t11=C_eqp(((C_word*)t0)[5],lf[601]);
if(C_truep(t11)){
/* c-backend.scm:1170: str */
t12=((C_word*)t0)[7];
f_7979(t12,((C_word*)t0)[6],lf[690]);}
else{
t12=C_eqp(((C_word*)t0)[5],lf[629]);
t13=(C_truep(t12)?t12:C_eqp(((C_word*)t0)[5],lf[637]));
if(C_truep(t13)){
/* c-backend.scm:1171: str */
t14=((C_word*)t0)[7];
f_7979(t14,((C_word*)t0)[6],lf[691]);}
else{
t14=C_eqp(((C_word*)t0)[5],lf[613]);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t14)){
t16=t15;
f_8157(t16,t14);}
else{
t16=C_eqp(((C_word*)t0)[5],lf[615]);
if(C_truep(t16)){
t17=t15;
f_8157(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[5],lf[759]);
t18=t15;
f_8157(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[5],lf[760])));}}}}}}}}}}}}}}

/* k8155 in k8047 */
static void C_fcall f_8157(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_8157,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1172: str */
t2=((C_word*)t0)[7];
f_7979(t2,((C_word*)t0)[6],lf[692]);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[640]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[5],lf[641]));
if(C_truep(t3)){
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[693]);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[694]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_8178(t6,t4);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[756]);
if(C_truep(t6)){
t7=t5;
f_8178(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[5],lf[757]);
t8=t5;
f_8178(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[5],lf[758])));}}}}}

/* k8176 in k8155 in k8047 */
static void C_fcall f_8178(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8178,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1174: str */
t2=((C_word*)t0)[7];
f_7979(t2,((C_word*)t0)[6],lf[695]);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[696]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[5],lf[697]));
if(C_truep(t3)){
/* c-backend.scm:1175: str */
t4=((C_word*)t0)[7];
f_7979(t4,((C_word*)t0)[6],lf[698]);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[699]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[5],lf[700]));
if(C_truep(t5)){
/* c-backend.scm:1176: str */
t6=((C_word*)t0)[7];
f_7979(t6,((C_word*)t0)[6],lf[701]);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[702]);
t7=(C_truep(t6)?t6:C_eqp(((C_word*)t0)[5],lf[703]));
if(C_truep(t7)){
/* c-backend.scm:1177: str */
t8=((C_word*)t0)[7];
f_7979(t8,((C_word*)t0)[6],lf[704]);}
else{
t8=C_eqp(((C_word*)t0)[5],lf[705]);
t9=(C_truep(t8)?t8:C_eqp(((C_word*)t0)[5],lf[706]));
if(C_truep(t9)){
/* c-backend.scm:1178: str */
t10=((C_word*)t0)[7];
f_7979(t10,((C_word*)t0)[6],lf[707]);}
else{
t10=C_eqp(((C_word*)t0)[5],lf[708]);
t11=(C_truep(t10)?t10:C_eqp(((C_word*)t0)[5],lf[709]));
if(C_truep(t11)){
/* c-backend.scm:1179: str */
t12=((C_word*)t0)[7];
f_7979(t12,((C_word*)t0)[6],lf[710]);}
else{
t12=C_eqp(((C_word*)t0)[5],lf[711]);
t13=(C_truep(t12)?t12:C_eqp(((C_word*)t0)[5],lf[712]));
if(C_truep(t13)){
/* c-backend.scm:1180: str */
t14=((C_word*)t0)[7];
f_7979(t14,((C_word*)t0)[6],lf[713]);}
else{
t14=C_eqp(((C_word*)t0)[5],lf[714]);
t15=(C_truep(t14)?t14:C_eqp(((C_word*)t0)[5],lf[715]));
if(C_truep(t15)){
/* c-backend.scm:1181: str */
t16=((C_word*)t0)[7];
f_7979(t16,((C_word*)t0)[6],lf[716]);}
else{
t16=C_eqp(((C_word*)t0)[5],lf[717]);
t17=(C_truep(t16)?t16:C_eqp(((C_word*)t0)[5],lf[718]));
if(C_truep(t17)){
/* c-backend.scm:1182: str */
t18=((C_word*)t0)[7];
f_7979(t18,((C_word*)t0)[6],lf[719]);}
else{
t18=C_eqp(((C_word*)t0)[5],lf[607]);
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8286,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t18)){
t20=t19;
f_8286(t20,t18);}
else{
t20=C_eqp(((C_word*)t0)[5],lf[603]);
if(C_truep(t20)){
t21=t19;
f_8286(t21,t20);}
else{
t21=C_eqp(((C_word*)t0)[5],lf[622]);
if(C_truep(t21)){
t22=t19;
f_8286(t22,t21);}
else{
t22=C_eqp(((C_word*)t0)[5],lf[626]);
t23=t19;
f_8286(t23,(C_truep(t22)?t22:C_eqp(((C_word*)t0)[5],lf[625])));}}}}}}}}}}}}}

/* k8284 in k8176 in k8155 in k8047 */
static void C_fcall f_8286(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8286,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1184: str */
t2=((C_word*)t0)[7];
f_7979(t2,((C_word*)t0)[6],lf[720]);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[623]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_8298(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[624]);
if(C_truep(t4)){
t5=t3;
f_8298(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[627]);
t6=t3;
f_8298(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[5],lf[628])));}}}}

/* k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_fcall f_8298(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8298,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1186: str */
t2=((C_word*)t0)[7];
f_7979(t2,((C_word*)t0)[6],lf[721]);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[565]);
if(C_truep(t2)){
/* c-backend.scm:1187: str */
t3=((C_word*)t0)[7];
f_7979(t3,((C_word*)t0)[6],lf[722]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
/* c-backend.scm:1189: ##sys#hash-table-ref */
t4=*((C_word*)lf[620]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[621]+1),((C_word*)t0)[3]);}
else{
t4=t3;
f_8313(2,t4,C_SCHEME_FALSE);}}}}

/* k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8313,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8317,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* g16781679 */
t3=t2;
f_8317(t3,((C_word*)t0)[5],t1);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[4]))){
/* c-backend.scm:1192: str */
t2=((C_word*)t0)[3];
f_7979(t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[4]))){
t2=C_i_length(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8358,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nequalp(C_fix(2),t2))){
t4=C_i_car(((C_word*)t0)[4]);
t5=t3;
f_8358(t5,C_i_memq(t4,lf[755]));}
else{
t4=t3;
f_8358(t4,C_SCHEME_FALSE);}}
else{
/* c-backend.scm:1242: err */
t2=((C_word*)t0)[2];
f_7974(t2,((C_word*)t0)[5]);}}}}

/* k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_fcall f_8358(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8358,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8369,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1199: string-append */
t4=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[723],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nequalp(C_fix(2),((C_word*)t0)[2]))){
t3=C_i_car(((C_word*)t0)[7]);
t4=t2;
f_8375(t4,C_eqp(lf[610],t3));}
else{
t3=t2;
f_8375(t3,C_SCHEME_FALSE);}}}

/* k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_fcall f_8375(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8375,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8386,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1202: string-append */
t4=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[724],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8392,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[2],C_fix(2)))){
t3=C_i_car(((C_word*)t0)[7]);
t4=t2;
f_8392(t4,C_eqp(lf[754],t3));}
else{
t3=t2;
f_8392(t3,C_SCHEME_FALSE);}}}

/* k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_fcall f_8392(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8392,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8399,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8403,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm:1207: foreign-type-declaration */
t5=*((C_word*)lf[179]+1);
f_7972(4,t5,t3,t4,lf[729]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nequalp(((C_word*)t0)[2],C_fix(2)))){
t3=C_i_car(((C_word*)t0)[5]);
t4=t2;
f_8467(t4,C_eqp(lf[612],t3));}
else{
t3=t2;
f_8467(t3,C_SCHEME_FALSE);}}}

/* k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_fcall f_8467(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8467,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8474,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm:1214: foreign-type-declaration */
t4=*((C_word*)lf[179]+1);
f_7972(4,t4,t2,t3,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8484,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nequalp(((C_word*)t0)[2],C_fix(2)))){
t3=C_i_car(((C_word*)t0)[5]);
t4=t2;
f_8484(t4,C_eqp(lf[753],t3));}
else{
t3=t2;
f_8484(t3,C_SCHEME_FALSE);}}}

/* k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_fcall f_8484(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8484,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8491,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1216: ->string */
t4=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nequalp(((C_word*)t0)[2],C_fix(2)))){
t3=C_i_car(((C_word*)t0)[4]);
t4=t2;
f_8501(t4,C_eqp(lf[752],t3));}
else{
t3=t2;
f_8501(t3,C_SCHEME_FALSE);}}}

/* k8499 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_fcall f_8501(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8501,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8508,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1218: ->string */
t4=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8518,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nequalp(((C_word*)t0)[2],C_fix(2)))){
t3=C_i_car(((C_word*)t0)[4]);
t4=t2;
f_8518(t4,C_eqp(lf[751],t3));}
else{
t3=t2;
f_8518(t3,C_SCHEME_FALSE);}}}

/* k8516 in k8499 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_fcall f_8518(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8518,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8525,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1220: ->string */
t4=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8535,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nequalp(((C_word*)t0)[2],C_fix(3)))){
t3=C_i_car(((C_word*)t0)[4]);
t4=t2;
f_8535(t4,C_i_memq(t3,lf[750]));}
else{
t3=t2;
f_8535(t3,C_SCHEME_FALSE);}}}

/* k8533 in k8516 in k8499 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_fcall f_8535(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8535,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8542,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1222: ->string */
t4=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8552,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nequalp(((C_word*)t0)[2],C_fix(3)))){
t3=C_i_car(((C_word*)t0)[4]);
t4=t2;
f_8552(t4,C_eqp(lf[619],t3));}
else{
t3=t2;
f_8552(t3,C_SCHEME_FALSE);}}}

/* k8550 in k8533 in k8516 in k8499 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_fcall f_8552(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8552,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8559,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1224: ->string */
t4=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8569,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_greater_or_equalp(((C_word*)t0)[2],C_fix(3)))){
t3=C_i_car(((C_word*)t0)[4]);
t4=t2;
f_8569(t4,C_eqp(lf[616],t3));}
else{
t3=t2;
f_8569(t3,C_SCHEME_FALSE);}}}

/* k8567 in k8550 in k8533 in k8516 in k8499 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_fcall f_8569(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8569,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[5]);
t3=C_i_caddr(((C_word*)t0)[5]);
t4=C_i_cdddr(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8581,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_8581(2,t6,lf[747]);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_8581(2,t7,C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[748]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[749],t4);}}}
else{
/* c-backend.scm:1241: err */
t2=((C_word*)t0)[2];
f_7974(t2,((C_word*)t0)[4]);}}

/* k8579 in k8567 in k8550 in k8533 in k8516 in k8499 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8581,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8588,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1230: foreign-type-declaration */
t3=*((C_word*)lf[179]+1);
f_7972(4,t3,t2,((C_word*)t0)[2],lf[746]);}

/* k8586 in k8579 in k8567 in k8550 in k8533 in k8516 in k8499 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8588(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8588,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8592,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[228]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8610,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8612,a[2]=t4,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_8612(t12,t8,((C_word*)t0)[2]);}

/* map-loop1740 in k8586 in k8579 in k8567 in k8550 in k8533 in k8516 in k8499 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_fcall f_8612(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8612,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8622,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8641,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(0));
t6=C_eqp(lf[743],t5);
if(C_truep(t6)){
t7=t3;
f_8622(t7,C_a_i_cons(&a,2,lf[744],C_SCHEME_END_OF_LIST));}
else{
/* c-backend.scm:1237: foreign-type-declaration */
t7=*((C_word*)lf[179]+1);
f_7972(4,t7,t4,t5,lf[745]);}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8639 in map-loop1740 in k8586 in k8579 in k8567 in k8550 in k8533 in k8516 in k8499 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8641,2,t0,t1);}
t2=((C_word*)t0)[2];
f_8622(t2,C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}

/* k8620 in map-loop1740 in k8586 in k8579 in k8567 in k8550 in k8533 in k8516 in k8499 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_fcall f_8622(C_word t0,C_word t1){
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
f_8612(t5,((C_word*)t0)[3],t4);}
else{
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_8612(t5,((C_word*)t0)[3],t4);}}

/* k8608 in k8586 in k8579 in k8567 in k8550 in k8533 in k8516 in k8499 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1233: string-intersperse */
t2=*((C_word*)lf[229]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[742]);}

/* k8590 in k8586 in k8579 in k8567 in k8550 in k8533 in k8516 in k8499 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1229: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],lf[739],((C_word*)t0)[2],lf[740],t1,lf[741]);}

/* k8557 in k8550 in k8533 in k8516 in k8499 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1224: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],t1,lf[738],((C_word*)t0)[2]);}

/* k8540 in k8533 in k8516 in k8499 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1222: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],t1,lf[737],((C_word*)t0)[2]);}

/* k8523 in k8516 in k8499 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1220: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[735],t1,lf[736],((C_word*)t0)[2]);}

/* k8506 in k8499 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1218: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[733],t1,lf[734],((C_word*)t0)[2]);}

/* k8489 in k8482 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1216: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[731],t1,lf[732],((C_word*)t0)[2]);}

/* k8472 in k8465 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1214: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[730],t1);}

/* k8401 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8403(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8403,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8407,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_cddr(((C_word*)t0)[2]);
t8=C_i_check_list_2(t7,lf[228]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8422,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8424,a[2]=t4,a[3]=t11,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_8424(t13,t9,t7);}

/* map-loop1690 in k8401 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_fcall f_8424(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8424,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8453,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[179]+1);
/* g17131714 */
t6=t5;
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,lf[728]);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8451 in map-loop1690 in k8401 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8453(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8453,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8424(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8424(t6,((C_word*)t0)[3],t5);}}

/* k8420 in k8401 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1209: string-intersperse */
t2=*((C_word*)lf[229]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[727]);}

/* k8405 in k8401 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1206: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[725],t1,lf[726]);}

/* k8397 in k8390 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1205: str */
t2=((C_word*)t0)[3];
f_7979(t2,((C_word*)t0)[2],t1);}

/* k8384 in k8373 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1202: foreign-type-declaration */
t2=*((C_word*)lf[179]+1);
f_7972(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8367 in k8356 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_ccall f_8369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1199: foreign-type-declaration */
t2=*((C_word*)lf[179]+1);
f_7972(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* g1678 in k8311 in k8296 in k8284 in k8176 in k8155 in k8047 */
static void C_fcall f_8317(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8317,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* c-backend.scm:1191: foreign-type-declaration */
t4=*((C_word*)lf[179]+1);
f_7972(4,t4,t1,t3,((C_word*)t0)[2]);}
else{
t3=t2;
/* c-backend.scm:1191: foreign-type-declaration */
t4=*((C_word*)lf[179]+1);
f_7972(4,t4,t1,t3,((C_word*)t0)[2]);}}

/* str */
static void C_fcall f_7979(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7979,NULL,3,t0,t1,t2);}
/* c-backend.scm:1154: string-append */
t3=*((C_word*)lf[113]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,t2,lf[675],((C_word*)t0)[2]);}

/* err */
static void C_fcall f_7974(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7974,NULL,2,t0,t1);}
/* c-backend.scm:1153: quit */
t2=*((C_word*)lf[673]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[674],((C_word*)t0)[2]);}

/* f_7907 in k2338 in k2247 in k2244 */
static void C_ccall f_7907(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7907,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7911,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1135: foreign-callback-stub-name */
t5=*((C_word*)lf[672]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k7909 */
static void C_ccall f_7911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7911,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7914,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1136: foreign-callback-stub-qualifiers */
t3=*((C_word*)lf[671]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k7912 in k7909 */
static void C_ccall f_7914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7914,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1137: foreign-callback-stub-return-type */
t3=*((C_word*)lf[667]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k7915 in k7912 in k7909 */
static void C_ccall f_7917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7917,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7920,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1138: foreign-callback-stub-argument-types */
t3=*((C_word*)lf[666]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k7918 in k7915 in k7912 in k7909 */
static void C_ccall f_7920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7920,2,t0,t1);}
t2=C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:1140: make-argument-list */
t4=*((C_word*)lf[299]+1);
f_6951(4,t4,t3,t2,lf[670]);}

/* k7924 in k7918 in k7915 in k7912 in k7909 */
static void C_ccall f_7926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7926,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7929,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7970,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1141: foreign-type-declaration */
t4=*((C_word*)lf[179]+1);
f_7972(4,t4,t3,((C_word*)t0)[2],lf[669]);}

/* k7968 in k7924 in k7918 in k7915 in k7912 in k7909 */
static void C_ccall f_7970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1141: gen */
t2=*((C_word*)lf[1]+1);
f_2252(10,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4],C_make_character(32),t1,((C_word*)t0)[3],C_make_character(32),((C_word*)t0)[2],C_make_character(40));}

/* k7927 in k7924 in k7918 in k7915 in k7912 in k7909 */
static void C_ccall f_7929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7929,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7932,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7937,tmp=(C_word)a,a+=2,tmp);
/* c-backend.scm:1142: pair-for-each */
t4=*((C_word*)lf[208]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a7936 in k7927 in k7924 in k7918 in k7915 in k7912 in k7909 */
static void C_ccall f_7937(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7937,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7941,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7958,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_car(t3);
t7=C_i_car(t2);
/* c-backend.scm:1144: foreign-type-declaration */
t8=*((C_word*)lf[179]+1);
f_7972(4,t8,t5,t6,t7);}

/* k7956 in a7936 in k7927 in k7924 in k7918 in k7915 in k7912 in k7909 */
static void C_ccall f_7958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1144: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],t1);}

/* k7939 in a7936 in k7927 in k7924 in k7918 in k7915 in k7912 in k7909 */
static void C_ccall f_7941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[3]);
if(C_truep(C_i_pairp(t2))){
/* c-backend.scm:1145: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,((C_word*)t0)[2],C_make_character(44));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7930 in k7927 in k7924 in k7918 in k7915 in k7912 in k7909 */
static void C_ccall f_7932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1147: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* f_7392 in k2338 in k2247 in k2244 */
static void C_ccall f_7392(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7392,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7394,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(t2,lf[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7884,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_7884(t9,t1,t2);}

/* for-each-loop1350 */
static void C_fcall f_7884(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7884,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7894,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g13511357 */
t5=((C_word*)t0)[2];
f_7394(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7892 in for-each-loop1350 */
static void C_ccall f_7894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7884(t3,((C_word*)t0)[2],t2);}

/* g1351 */
static void C_fcall f_7394(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7394,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7398,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1080: foreign-callback-stub-id */
t4=*((C_word*)lf[668]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k7396 in g1351 */
static void C_ccall f_7398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7398,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7401,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1081: real-name2 */
t3=*((C_word*)lf[599]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[2]);}

/* k7399 in k7396 in g1351 */
static void C_ccall f_7401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7404,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1082: foreign-callback-stub-return-type */
t3=*((C_word*)lf[667]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7407,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1083: foreign-callback-stub-argument-types */
t3=*((C_word*)lf[666]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7407,2,t0,t1);}
t2=C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7413,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:1085: make-argument-list */
t4=*((C_word*)lf[299]+1);
f_6951(4,t4,t3,t2,lf[665]);}

/* k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7413,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7415,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:1114: fold */
t6=*((C_word*)lf[442]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,((C_word*)t3)[1],lf[664],((C_word*)t0)[8],t1);}

/* k7769 in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:1115: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,C_SCHEME_TRUE);}

/* k7772 in k7769 in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7774,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7777,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7876,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1117: cleanup */
t4=*((C_word*)lf[508]+1);
f_6846(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_7777(2,t3,C_SCHEME_UNDEFINED);}}

/* k7874 in k7772 in k7769 in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1117: gen */
t2=*((C_word*)lf[1]+1);
f_2252(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[662],t1,lf[663]);}

/* k7775 in k7772 in k7769 in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7777,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7780,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:1118: generate-foreign-callback-header */
t3=*((C_word*)lf[552]+1);
f_7907(4,t3,t2,lf[661],((C_word*)t0)[2]);}

/* k7778 in k7775 in k7772 in k7769 in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7780,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7783,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:1119: gen */
t3=*((C_word*)lf[1]+1);
f_2252(7,t3,t2,C_make_character(123),C_SCHEME_TRUE,lf[659],((C_word*)t0)[2],lf[660]);}

/* k7781 in k7778 in k7775 in k7772 in k7769 in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:1120: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[658]);}

/* k7784 in k7781 in k7778 in k7775 in k7772 in k7769 in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7786(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7786,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[7],lf[2]);
t3=C_i_check_list_2(((C_word*)t0)[6],lf[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7834,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_7834(t8,t4,((C_word*)t0)[7],((C_word*)t0)[6]);}

/* for-each-loop1521 in k7784 in k7781 in k7778 in k7775 in k7772 in k7769 in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_fcall f_7834(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_7834,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7844,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7795,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1123: foreign-result-conversion */
t10=*((C_word*)lf[173]+1);
f_9376(4,t10,t9,t8,lf[657]);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7793 in for-each-loop1521 in k7784 in k7781 in k7778 in k7775 in k7772 in k7769 in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1123: gen */
t2=*((C_word*)lf[1]+1);
f_2252(9,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[654],t1,((C_word*)t0)[2],lf[655],C_SCHEME_TRUE,lf[656]);}

/* k7842 in for-each-loop1521 in k7784 in k7781 in k7778 in k7775 in k7772 in k7769 in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_7834(t4,((C_word*)t0)[2],t2,t3);}

/* k7802 in k7784 in k7781 in k7778 in k7775 in k7772 in k7769 in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7804,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7807,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(lf[565],((C_word*)t0)[4]);
if(C_truep(t3)){
t4=t2;
f_7807(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7832,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1128: foreign-argument-conversion */
t5=*((C_word*)lf[178]+1);
f_8898(3,t5,t4,((C_word*)t0)[4]);}}

/* k7830 in k7802 in k7784 in k7781 in k7778 in k7775 in k7772 in k7769 in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1128: gen */
t2=*((C_word*)lf[1]+1);
f_2252(5,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[653],t1);}

/* k7805 in k7802 in k7784 in k7781 in k7778 in k7775 in k7772 in k7769 in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7807,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7810,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1129: gen */
t3=*((C_word*)lf[1]+1);
f_2252(7,t3,t2,lf[652],((C_word*)t0)[3],C_make_character(44),((C_word*)t0)[2],C_make_character(41));}

/* k7808 in k7805 in k7802 in k7784 in k7781 in k7778 in k7775 in k7772 in k7769 in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7810,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7813,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_eqp(lf[565],((C_word*)t0)[2]);
if(C_truep(t3)){
/* c-backend.scm:1131: gen */
t4=*((C_word*)lf[1]+1);
f_2252(3,t4,((C_word*)t0)[3],lf[651]);}
else{
/* c-backend.scm:1130: gen */
t4=*((C_word*)lf[1]+1);
f_2252(3,t4,t2,C_make_character(41));}}

/* k7811 in k7808 in k7805 in k7802 in k7784 in k7781 in k7778 in k7775 in k7772 in k7769 in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1131: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[651]);}

/* compute-size in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7415(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7415,5,t0,t1,t2,t3,t4);}
t5=t2;
t6=C_eqp(t5,lf[17]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7425,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t5,a[6]=t1,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_7425(t8,t6);}
else{
t8=C_eqp(t5,lf[483]);
if(C_truep(t8)){
t9=t7;
f_7425(t9,t8);}
else{
t9=C_eqp(t5,lf[642]);
if(C_truep(t9)){
t10=t7;
f_7425(t10,t9);}
else{
t10=C_eqp(t5,lf[643]);
if(C_truep(t10)){
t11=t7;
f_7425(t11,t10);}
else{
t11=C_eqp(t5,lf[14]);
if(C_truep(t11)){
t12=t7;
f_7425(t12,t11);}
else{
t12=C_eqp(t5,lf[565]);
if(C_truep(t12)){
t13=t7;
f_7425(t13,t12);}
else{
t13=C_eqp(t5,lf[644]);
if(C_truep(t13)){
t14=t7;
f_7425(t14,t13);}
else{
t14=C_eqp(t5,lf[645]);
if(C_truep(t14)){
t15=t7;
f_7425(t15,t14);}
else{
t15=C_eqp(t5,lf[646]);
if(C_truep(t15)){
t16=t7;
f_7425(t16,t15);}
else{
t16=C_eqp(t5,lf[647]);
if(C_truep(t16)){
t17=t7;
f_7425(t17,t16);}
else{
t17=C_eqp(t5,lf[648]);
if(C_truep(t17)){
t18=t7;
f_7425(t18,t17);}
else{
t18=C_eqp(t5,lf[649]);
t19=t7;
f_7425(t19,(C_truep(t18)?t18:C_eqp(t5,lf[650])));}}}}}}}}}}}}

/* k7423 in compute-size in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_fcall f_7425(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7425,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[601]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_7434(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[629]);
if(C_truep(t4)){
t5=t3;
f_7434(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[613]);
if(C_truep(t5)){
t6=t3;
f_7434(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[630]);
if(C_truep(t6)){
t7=t3;
f_7434(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[5],lf[631]);
if(C_truep(t7)){
t8=t3;
f_7434(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[5],lf[632]);
if(C_truep(t8)){
t9=t3;
f_7434(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[5],lf[633]);
if(C_truep(t9)){
t10=t3;
f_7434(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[5],lf[634]);
if(C_truep(t10)){
t11=t3;
f_7434(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[5],lf[635]);
if(C_truep(t11)){
t12=t3;
f_7434(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[5],lf[636]);
if(C_truep(t12)){
t13=t3;
f_7434(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[5],lf[615]);
if(C_truep(t13)){
t14=t3;
f_7434(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[5],lf[637]);
if(C_truep(t14)){
t15=t3;
f_7434(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[5],lf[638]);
if(C_truep(t15)){
t16=t3;
f_7434(t16,t15);}
else{
t16=C_eqp(((C_word*)t0)[5],lf[639]);
if(C_truep(t16)){
t17=t3;
f_7434(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[5],lf[640]);
t18=t3;
f_7434(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[5],lf[641])));}}}}}}}}}}}}}}}}

/* k7432 in k7423 in compute-size in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_fcall f_7434(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7434,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1096: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[7],((C_word*)t0)[6],lf[602]);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[603]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_7446(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[626]);
if(C_truep(t4)){
t5=t3;
f_7446(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[627]);
if(C_truep(t5)){
t6=t3;
f_7446(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[627]);
t7=t3;
f_7446(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[5],lf[628])));}}}}}

/* k7444 in k7432 in k7423 in compute-size in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_fcall f_7446(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7446,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1098: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[7],((C_word*)t0)[6],lf[604],((C_word*)t0)[5],lf[605],((C_word*)t0)[5],lf[606]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[607]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_7458(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[622]);
if(C_truep(t4)){
t5=t3;
f_7458(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[623]);
if(C_truep(t5)){
t6=t3;
f_7458(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[624]);
t7=t3;
f_7458(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[625])));}}}}}

/* k7456 in k7444 in k7432 in k7423 in compute-size in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_fcall f_7458(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7458,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1100: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[6],((C_word*)t0)[5],lf[608],((C_word*)t0)[4],lf[609]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7464,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
/* c-backend.scm:1102: ##sys#hash-table-ref */
t3=*((C_word*)lf[620]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[621]+1),((C_word*)t0)[2]);}
else{
t3=t2;
f_7464(2,t3,C_SCHEME_FALSE);}}}

/* k7462 in k7456 in k7444 in k7432 in k7423 in compute-size in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_ccall f_7464(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7464,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7468,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* g14861487 */
t3=t2;
f_7468(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[610]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7503,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_7503(t5,t3);}
else{
t5=C_eqp(t2,lf[481]);
if(C_truep(t5)){
t6=t4;
f_7503(t6,t5);}
else{
t6=C_eqp(t2,lf[613]);
if(C_truep(t6)){
t7=t4;
f_7503(t7,t6);}
else{
t7=C_eqp(t2,lf[614]);
if(C_truep(t7)){
t8=t4;
f_7503(t8,t7);}
else{
t8=C_eqp(t2,lf[615]);
if(C_truep(t8)){
t9=t4;
f_7503(t9,t8);}
else{
t9=C_eqp(t2,lf[616]);
if(C_truep(t9)){
t10=t4;
f_7503(t10,t9);}
else{
t10=C_eqp(t2,lf[617]);
if(C_truep(t10)){
t11=t4;
f_7503(t11,t10);}
else{
t11=C_eqp(t2,lf[618]);
t12=t4;
f_7503(t12,(C_truep(t11)?t11:C_eqp(t2,lf[619])));}}}}}}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}}

/* k7501 in k7462 in k7456 in k7444 in k7432 in k7423 in compute-size in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_fcall f_7503(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm:1109: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[7],((C_word*)t0)[6],lf[611]);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[612]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1110: compute-size */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7415(5,t4,((C_word*)t0)[7],t3,((C_word*)t0)[2],((C_word*)t0)[6]);}
else{
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[6]);}}}

/* g1486 in k7462 in k7456 in k7444 in k7432 in k7423 in compute-size in k7411 in k7405 in k7402 in k7399 in k7396 in g1351 */
static void C_fcall f_7468(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7468,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* c-backend.scm:1104: compute-size */
t4=((C_word*)((C_word*)t0)[4])[1];
f_7415(5,t4,t1,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=t2;
/* c-backend.scm:1104: compute-size */
t4=((C_word*)((C_word*)t0)[4])[1];
f_7415(5,t4,t1,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* f_7067 in k2338 in k2247 in k2244 */
static void C_ccall f_7067(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7067,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7069,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(t2,lf[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7369,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_7369(t9,t1,t2);}

/* for-each-loop1244 */
static void C_fcall f_7369(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7369,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7379,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g12451251 */
t5=((C_word*)t0)[2];
f_7069(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7377 in for-each-loop1244 */
static void C_ccall f_7379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7369(t3,((C_word*)t0)[2],t2);}

/* g1245 */
static void C_fcall f_7069(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7069,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7073,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1013: foreign-stub-id */
t4=*((C_word*)lf[600]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k7071 in g1245 */
static void C_ccall f_7073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7076,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1014: real-name2 */
t3=*((C_word*)lf[599]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[2]);}

/* k7074 in k7071 in g1245 */
static void C_ccall f_7076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7076,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7079,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1015: foreign-stub-argument-types */
t3=*((C_word*)lf[598]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7079,2,t0,t1);}
t2=C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7361,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1017: make-variable-list */
t5=*((C_word*)lf[284]+1);
f_6935(4,t5,t4,t2,lf[597]);}

/* k7359 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7361,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[596],t1);
/* c-backend.scm:1017: intersperse */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,C_make_character(44));}

/* k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7085,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:1018: foreign-stub-return-type */
t3=*((C_word*)lf[595]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7088,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:1019: foreign-stub-name */
t3=*((C_word*)lf[594]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7091,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7094,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:1020: foreign-stub-body */
t3=*((C_word*)lf[593]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7094,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:1021: foreign-stub-argument-names */
t3=*((C_word*)lf[592]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=t2;
f_7100(2,t3,t1);}
else{
/* c-backend.scm:1021: make-list */
t3=*((C_word*)lf[289]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],C_SCHEME_FALSE);}}

/* k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7100,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7103,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm:1022: foreign-result-conversion */
t3=*((C_word*)lf[173]+1);
f_9376(4,t3,t2,((C_word*)t0)[8],lf[591]);}

/* k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7103,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* c-backend.scm:1023: foreign-stub-cps */
t3=*((C_word*)lf[590]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7106,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7109,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t1,a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* c-backend.scm:1024: foreign-stub-callback */
t3=*((C_word*)lf[589]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7109,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_7112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* c-backend.scm:1025: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,C_SCHEME_TRUE);}

/* k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7112,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7115,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7350,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1027: cleanup */
t4=*((C_word*)lf[508]+1);
f_6846(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_7115(2,t3,C_SCHEME_UNDEFINED);}}

/* k7348 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1027: gen */
t2=*((C_word*)lf[1]+1);
f_2252(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[587],t1,lf[588]);}

/* k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7115,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[10])){
/* c-backend.scm:1029: gen */
t3=*((C_word*)lf[1]+1);
f_2252(6,t3,t2,C_SCHEME_TRUE,lf[585],((C_word*)t0)[4],lf[586]);}
else{
t3=t2;
f_7118(2,t3,C_SCHEME_UNDEFINED);}}

/* k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7118,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7121,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[8])){
/* c-backend.scm:1032: gen */
t3=*((C_word*)lf[1]+1);
f_2252(10,t3,t2,C_SCHEME_TRUE,lf[580],((C_word*)t0)[2],lf[581],C_SCHEME_TRUE,lf[582],((C_word*)t0)[2],lf[583]);}
else{
/* c-backend.scm:1034: gen */
t3=*((C_word*)lf[1]+1);
f_2252(6,t3,t2,C_SCHEME_TRUE,lf[584],((C_word*)t0)[2],C_make_character(40));}}

/* k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7121,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[3]);}

/* k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7124,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7127,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[8])){
/* c-backend.scm:1037: gen */
t3=*((C_word*)lf[1]+1);
f_2252(7,t3,t2,lf[575],C_SCHEME_TRUE,lf[576],((C_word*)t0)[2],lf[577]);}
else{
/* c-backend.scm:1038: gen */
t3=*((C_word*)lf[1]+1);
f_2252(7,t3,t2,lf[578],C_SCHEME_TRUE,lf[579],((C_word*)t0)[2],C_make_character(40));}}

/* k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7127,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7130,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7130,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7133,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:1040: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[574]);}

/* k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7133,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7136,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:1041: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[573]);}

/* k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7136,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7175,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:1050: iota */
t3=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7175(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7175,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[11],lf[2]);
t3=C_i_check_list_2(t1,lf[2]);
t4=C_i_check_list_2(((C_word*)t0)[10],lf[2]);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7279,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_7279(t9,t5,((C_word*)t0)[11],t1,((C_word*)t0)[10]);}

/* for-each-loop1271 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_fcall f_7279(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7279,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7286,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_7286(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_7286(t6,C_SCHEME_FALSE);}}

/* k7284 in for-each-loop1271 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_fcall f_7286(C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7286,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_slot(((C_word*)t0)[6],C_fix(0));
t4=C_slot(((C_word*)t0)[5],C_fix(0));
t5=C_slot(((C_word*)t0)[4],C_fix(0));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7145,a[2]=t3,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7157,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
/* c-backend.scm:1047: symbol->string */
t8=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t5);}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7163,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t9=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k7161 in k7284 in for-each-loop1271 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7163,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7166,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[341]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(116),t1);}

/* k7164 in k7161 in k7284 in for-each-loop1271 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7166,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7169,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k7167 in k7164 in k7161 in k7284 in for-each-loop1271 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7155 in k7284 in for-each-loop1271 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1045: foreign-type-declaration */
t2=*((C_word*)lf[179]+1);
f_7972(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7143 in k7284 in for-each-loop1271 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7145,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1048: foreign-type-declaration */
t3=*((C_word*)lf[179]+1);
f_7972(4,t3,t2,((C_word*)t0)[2],lf[572]);}

/* k7147 in k7143 in k7284 in for-each-loop1271 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7149,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7153,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1049: foreign-argument-conversion */
t3=*((C_word*)lf[178]+1);
f_8898(3,t3,t2,((C_word*)t0)[2]);}

/* k7151 in k7147 in k7143 in k7284 in for-each-loop1271 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1044: gen */
t2=*((C_word*)lf[1]+1);
f_2252(11,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4],lf[569],((C_word*)t0)[3],C_make_character(41),t1,lf[570],((C_word*)t0)[2],lf[571]);}

/* k7287 in k7284 in for-each-loop1271 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_slot(((C_word*)t0)[6],C_fix(1));
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_7279(t5,((C_word*)t0)[2],t2,t3,t4);}

/* k7185 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7187,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
/* c-backend.scm:1051: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[568]);}
else{
t3=t2;
f_7190(2,t3,C_SCHEME_UNDEFINED);}}

/* k7188 in k7185 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7193,a[2]=((C_word*)t0)[9],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[8])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7199,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1053: gen */
t4=*((C_word*)lf[1]+1);
f_2252(6,t4,t3,C_SCHEME_TRUE,((C_word*)t0)[8],C_SCHEME_TRUE,lf[559]);}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7220,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_eqp(((C_word*)t0)[5],lf[565]);
if(C_truep(t4)){
/* c-backend.scm:1064: gen */
t5=*((C_word*)lf[1]+1);
f_2252(3,t5,t3,C_SCHEME_TRUE);}
else{
/* c-backend.scm:1063: gen */
t5=*((C_word*)lf[1]+1);
f_2252(5,t5,t3,C_SCHEME_TRUE,lf[567],((C_word*)t0)[2]);}}}

/* k7218 in k7188 in k7185 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7220,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7223,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1065: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,((C_word*)t0)[2],C_make_character(40));}

/* k7221 in k7218 in k7188 in k7185 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7223,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7226,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7257,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7261,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1066: make-argument-list */
t5=*((C_word*)lf[299]+1);
f_6951(4,t5,t4,((C_word*)t0)[2],lf[566]);}

/* k7259 in k7221 in k7218 in k7188 in k7185 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1066: intersperse */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k7255 in k7221 in k7218 in k7188 in k7185 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k7224 in k7221 in k7218 in k7188 in k7185 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7226,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7229,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(((C_word*)t0)[2],lf[565]);
if(C_truep(t3)){
t4=t2;
f_7229(2,t4,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:1067: gen */
t4=*((C_word*)lf[1]+1);
f_2252(3,t4,t2,C_make_character(41));}}

/* k7227 in k7224 in k7221 in k7218 in k7188 in k7185 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7229,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7232,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1068: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[564]);}

/* k7230 in k7227 in k7224 in k7221 in k7218 in k7188 in k7185 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:1070: gen */
t2=*((C_word*)lf[1]+1);
f_2252(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[560],C_SCHEME_TRUE,lf[561]);}
else{
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:1072: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[3],lf[562]);}
else{
/* c-backend.scm:1073: gen */
t2=*((C_word*)lf[1]+1);
f_2252(4,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[563]);}}}

/* k7197 in k7188 in k7185 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7202,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1055: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,C_SCHEME_TRUE,lf[558],C_SCHEME_TRUE);}

/* k7200 in k7197 in k7188 in k7185 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:1057: gen */
t2=*((C_word*)lf[1]+1);
f_2252(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[554],C_SCHEME_TRUE,lf[555]);}
else{
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:1059: gen */
t2=*((C_word*)lf[1]+1);
f_2252(4,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[556]);}
else{
/* c-backend.scm:1060: gen */
t2=*((C_word*)lf[1]+1);
f_2252(4,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[557]);}}}

/* k7191 in k7188 in k7185 in k7173 in k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7113 in k7110 in k7107 in k7104 in k7101 in k7098 in k7095 in k7092 in k7089 in k7086 in k7083 in k7077 in k7074 in k7071 in g1245 */
static void C_ccall f_7193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1074: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(125));}

/* f_7024 in k2338 in k2247 in k2244 */
static void C_ccall f_7024(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7024,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7044,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_7044(t7,t1,t2);}

/* for-each-loop1222 */
static void C_fcall f_7044(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7044,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7054,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7030,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1005: gen */
t6=*((C_word*)lf[1]+1);
f_2252(3,t6,t5,C_SCHEME_TRUE);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7028 in for-each-loop1222 */
static void C_ccall f_7030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7033,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1006: generate-foreign-callback-header */
t3=*((C_word*)lf[552]+1);
f_7907(4,t3,t2,lf[553],((C_word*)t0)[2]);}

/* k7031 in k7028 in for-each-loop1222 */
static void C_ccall f_7033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1007: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k7052 in for-each-loop1222 */
static void C_ccall f_7054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7044(t3,((C_word*)t0)[2],t2);}

/* f_6967 in k2338 in k2247 in k2244 */
static void C_ccall f_6967(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6967,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6971,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:990: gen */
t4=*((C_word*)lf[1]+1);
f_2252(3,t4,t3,C_SCHEME_TRUE);}

/* k6969 */
static void C_ccall f_6971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6971,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_i_check_list_2(t2,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7001,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_7001(t7,((C_word*)t0)[2],t2);}

/* for-each-loop1199 in k6969 */
static void C_fcall f_7001(C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7001,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7011,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_vector_ref(t4,C_fix(0));
t6=C_i_vector_ref(t4,C_fix(1));
t7=C_i_vector_ref(t4,C_fix(2));
t8=(C_truep(t7)?lf[550]:lf[551]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6993,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:996: foreign-type-declaration */
t10=*((C_word*)lf[179]+1);
f_7972(4,t10,t9,t6,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6991 in for-each-loop1199 in k6969 */
static void C_ccall f_6993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:996: gen */
t2=*((C_word*)lf[1]+1);
f_2252(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,((C_word*)t0)[2],t1,C_make_character(59));}

/* k7009 in for-each-loop1199 in k6969 */
static void C_ccall f_7011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7001(t3,((C_word*)t0)[2],t2);}

/* f_6951 in k2338 in k2247 in k2244 */
static void C_ccall f_6951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6951,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6957,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:982: list-tabulate */
t5=*((C_word*)lf[549]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t4);}

/* a6956 */
static void C_ccall f_6957(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6957,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6965,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:984: number->string */
C_number_to_string(3,0,t3,t2);}

/* k6963 in a6956 */
static void C_ccall f_6965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:984: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_6935 in k2338 in k2247 in k2244 */
static void C_ccall f_6935(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6935,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6941,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:977: list-tabulate */
t5=*((C_word*)lf[549]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t4);}

/* a6940 */
static void C_ccall f_6941(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6941,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6949,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:979: number->string */
C_number_to_string(3,0,t3,t2);}

/* k6947 in a6940 */
static void C_ccall f_6949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:979: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[548],((C_word*)t0)[2],t1);}

/* f_6846 in k2338 in k2247 in k2244 */
static void C_ccall f_6846(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_6846,3,t0,t1,t2);}
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_i_string_length(t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6855,a[2]=t7,a[3]=t2,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_6855(t9,t1,C_fix(0));}

/* loop */
static void C_fcall f_6855(C_word t0,C_word t1,C_word t2){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6855,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[5]))){
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:((C_word*)t0)[3]));}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t2);
t4=C_i_char_lessp(t3,C_make_character(32));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6884,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_6884(t6,t4);}
else{
t6=C_i_char_greaterp(t3,C_make_character(126));
if(C_truep(t6)){
t7=t5;
f_6884(t7,t6);}
else{
if(C_truep(C_i_char_equalp(t3,C_make_character(42)))){
t7=C_a_i_minus(&a,2,((C_word*)t0)[5],C_fix(1));
if(C_truep(C_i_lessp(t2,t7))){
t8=C_a_i_plus(&a,2,t2,C_fix(1));
t9=C_i_string_ref(((C_word*)t0)[3],t8);
t10=t5;
f_6884(t10,C_i_char_equalp(C_make_character(47),t9));}
else{
t8=t5;
f_6884(t8,C_SCHEME_FALSE);}}
else{
t7=t5;
f_6884(t7,C_SCHEME_FALSE);}}}}}

/* k6882 in loop */
static void C_fcall f_6884(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6884,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t2=C_i_string_set(((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[6],C_make_character(126));
t3=C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(1));
/* c-backend.scm:971: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_6855(t4,((C_word*)t0)[4],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6894,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:968: string-copy */
t3=*((C_word*)lf[547]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}
else{
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t2=C_i_string_set(((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[6],((C_word*)t0)[2]);
t3=C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(1));
/* c-backend.scm:971: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_6855(t4,((C_word*)t0)[4],t3);}
else{
t2=C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(1));
/* c-backend.scm:971: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_6855(t3,((C_word*)t0)[4],t2);}}}

/* k6892 in k6882 in loop */
static void C_ccall f_6894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6894,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_i_string_set(((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[4],C_make_character(126));
t4=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
/* c-backend.scm:971: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_6855(t5,((C_word*)t0)[2],t4);}

/* f_6769 in k2338 in k2247 in k2244 */
static void C_ccall f_6769(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6769,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6773,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_i_length(t2);
t6=C_a_i_plus(&a,2,t5,C_fix(1));
/* c-backend.scm:933: gen */
t7=*((C_word*)lf[1]+1);
f_2252(9,t7,t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[544],C_SCHEME_TRUE,lf[545],t6,lf[546]);}

/* k6771 */
static void C_ccall f_6773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6773,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6776,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6787,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_6787(t6,t2,((C_word*)t0)[2]);}

/* doloop1155 in k6771 */
static void C_fcall f_6787(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6787,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* c-backend.scm:937: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t1,C_SCHEME_TRUE,lf[536]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6800,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* c-backend.scm:938: lambda-literal-id */
t5=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}

/* k6798 in doloop1155 in k6771 */
static void C_ccall f_6800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6803,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6832,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:939: string->c-identifier */
t4=*((C_word*)lf[543]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k6830 in k6798 in doloop1155 in k6771 */
static void C_ccall f_6832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:939: gen */
t2=*((C_word*)lf[1]+1);
f_2252(8,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[541],((C_word*)t0)[2],C_make_character(58),t1,lf[542]);}

/* k6801 in k6798 in doloop1155 in k6771 */
static void C_ccall f_6803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6806,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(lf[265],((C_word*)t0)[2]);
if(C_truep(t3)){
if(C_truep(*((C_word*)lf[218]+1))){
/* c-backend.scm:942: gen */
t4=*((C_word*)lf[1]+1);
f_2252(5,t4,t2,lf[537],*((C_word*)lf[218]+1),lf[538]);}
else{
/* c-backend.scm:943: gen */
t4=*((C_word*)lf[1]+1);
f_2252(3,t4,t2,lf[539]);}}
else{
/* c-backend.scm:944: gen */
t4=*((C_word*)lf[1]+1);
f_2252(4,t4,t2,((C_word*)t0)[2],lf[540]);}}

/* k6804 in k6801 in k6798 in doloop1155 in k6771 */
static void C_ccall f_6806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_6787(t3,((C_word*)t0)[2],t2);}

/* k6774 in k6771 */
static void C_ccall f_6776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6776,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6779,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:945: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[535]);}

/* k6777 in k6774 in k6771 */
static void C_ccall f_6779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6779,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6782,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:946: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[534]);}

/* k6780 in k6777 in k6774 in k6771 */
static void C_ccall f_6782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:947: gen */
t2=*((C_word*)lf[1]+1);
f_2252(15,t2,((C_word*)t0)[2],lf[527],C_SCHEME_TRUE,lf[528],C_SCHEME_TRUE,lf[529],C_SCHEME_TRUE,lf[530],C_SCHEME_TRUE,lf[531],C_SCHEME_TRUE,lf[532],C_SCHEME_TRUE,lf[533]);}

/* f_2342 in k2338 in k2247 in k2244 */
static void C_ccall f_2342(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
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
C_word ab[78],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_2342,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
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
t33=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2345,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t34=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2387,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t35=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4319,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t36=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4527,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t37=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4701,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t38=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5045,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t39=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5421,a[2]=t2,a[3]=t26,tmp=(C_word)a,a+=4,tmp));
t40=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5476,a[2]=t24,tmp=(C_word)a,a+=3,tmp));
t41=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5672,a[2]=t28,tmp=(C_word)a,a+=3,tmp));
t42=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5814,a[2]=t30,tmp=(C_word)a,a+=3,tmp));
t43=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5891,tmp=(C_word)a,a+=2,tmp));
t44=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5945,a[2]=t4,a[3]=t8,a[4]=t24,a[5]=t22,a[6]=t2,a[7]=t12,tmp=(C_word)a,a+=8,tmp));
t45=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6736,a[2]=t14,a[3]=t16,a[4]=t18,a[5]=t8,a[6]=t20,a[7]=t32,a[8]=t6,a[9]=t4,a[10]=t1,a[11]=t5,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:916: debugging */
t46=*((C_word*)lf[509]+1);
((C_proc4)(void*)(*((C_word*)t46+1)))(4,t46,t45,lf[525],lf[526]);}

/* k6734 */
static void C_ccall f_6736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6736,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##compiler#output ...) */,((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6740,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:918: header */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4319(t4,t3);}

/* k6738 in k6734 */
static void C_ccall f_6740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6743,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:919: declarations */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4527(t3,t2);}

/* k6741 in k6738 in k6734 */
static void C_ccall f_6743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6743,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:920: generate-external-variables */
t3=*((C_word*)lf[523]+1);
f_6967(3,t3,t2,*((C_word*)lf[524]+1));}

/* k6744 in k6741 in k6738 in k6734 */
static void C_ccall f_6746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6746,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6749,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:921: generate-foreign-stubs */
t3=*((C_word*)lf[521]+1);
f_7067(4,t3,t2,*((C_word*)lf[522]+1),((C_word*)t0)[3]);}

/* k6747 in k6744 in k6741 in k6738 in k6734 */
static void C_ccall f_6749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6749,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6752,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:922: prototypes */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4701(t3,t2);}

/* k6750 in k6747 in k6744 in k6741 in k6738 in k6734 */
static void C_ccall f_6752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6752,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6755,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:923: generate-foreign-callback-stubs */
t3=*((C_word*)lf[520]+1);
f_7392(4,t3,t2,*((C_word*)lf[212]+1),((C_word*)t0)[2]);}

/* k6753 in k6750 in k6747 in k6744 in k6741 in k6738 in k6734 */
static void C_ccall f_6755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6755,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6758,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:924: trampolines */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5045(t3,t2);}

/* k6756 in k6753 in k6750 in k6747 in k6744 in k6741 in k6738 in k6734 */
static void C_ccall f_6758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6758,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6761,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:925: procedures */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5945(t3,t2);}

/* k6759 in k6756 in k6753 in k6750 in k6747 in k6744 in k6741 in k6738 in k6734 */
static void C_ccall f_6761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6761,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6764,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:926: emit-procedure-table-info */
t3=*((C_word*)lf[519]+1);
f_6769(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6762 in k6759 in k6756 in k6753 in k6750 in k6747 in k6744 in k6741 in k6738 in k6734 */
static void C_ccall f_6764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
/* c-backend.scm:494: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,C_SCHEME_TRUE,lf[518],C_SCHEME_TRUE);}

/* procedures */
static void C_fcall f_5945(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_5945,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5947,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t3,lf[2]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6712,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_6712(t8,t1,t3);}

/* for-each-loop954 in procedures */
static void C_fcall f_6712(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6712,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6722,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g955961 */
t5=((C_word*)t0)[2];
f_5947(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6720 in for-each-loop954 in procedures */
static void C_ccall f_6722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6712(t3,((C_word*)t0)[2],t2);}

/* g955 in procedures */
static void C_fcall f_5947(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5947,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:743: lambda-literal-argument-count */
t4=*((C_word*)lf[287]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k5949 in g955 in procedures */
static void C_ccall f_5951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:744: lambda-literal-id */
t3=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k5952 in k5949 in g955 in procedures */
static void C_ccall f_5954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5957,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:745: real-name */
t3=*((C_word*)lf[517]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[2]);}

/* k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_5957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5960,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:746: lambda-literal-allocated */
t3=*((C_word*)lf[280]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_5960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:747: lambda-literal-rest-argument */
t3=*((C_word*)lf[283]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}

/* k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_5963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5963,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5966,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t3,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm:748: lambda-literal-customizable */
t5=*((C_word*)lf[286]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[8]);}

/* k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_5966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5966,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6704,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:749: lambda-literal-closure-size */
t4=*((C_word*)lf[153]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[8]);}
else{
t3=t2;
f_5969(t3,C_SCHEME_FALSE);}}

/* k6702 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5969(t2,C_i_zerop(t1));}

/* k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_fcall f_5969(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5969,NULL,2,t0,t1);}
t2=(C_truep(t1)?C_a_i_minus(&a,2,((C_word*)t0)[13],C_fix(1)):C_a_i_minus(&a,2,((C_word*)t0)[13],C_fix(0)));
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5975,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[11],a[15]=((C_word*)t0)[12],tmp=(C_word)a,a+=16,tmp);
/* c-backend.scm:751: make-variable-list */
t4=*((C_word*)lf[284]+1);
f_6935(4,t4,t3,((C_word*)t0)[13],lf[516]);}

/* k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_5975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5978,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
/* c-backend.scm:752: make-argument-list */
t3=*((C_word*)lf[299]+1);
f_6951(4,t3,t2,((C_word*)t0)[13],lf[515]);}

/* k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_5978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5981,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=C_i_cdr(((C_word*)t0)[2]);
/* c-backend.scm:753: intersperse */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_make_character(44));}
else{
t3=((C_word*)t0)[2];
/* c-backend.scm:753: intersperse */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_make_character(44));}}

/* k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_5981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5984,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=t1,a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=C_i_cdr(((C_word*)t0)[2]);
/* c-backend.scm:754: intersperse */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_make_character(44));}
else{
t3=((C_word*)t0)[2];
/* c-backend.scm:754: intersperse */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_make_character(44));}}

/* k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_5984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5984,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
/* c-backend.scm:755: lambda-literal-external */
t3=*((C_word*)lf[328]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[12]);}

/* k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_5987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_5990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],tmp=(C_word)a,a+=19,tmp);
/* c-backend.scm:756: lambda-literal-looping */
t3=*((C_word*)lf[107]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[13]);}

/* k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_5990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5990,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_5993,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
/* c-backend.scm:757: lambda-literal-direct */
t3=*((C_word*)lf[281]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[14]);}

/* k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_5993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],tmp=(C_word)a,a+=21,tmp);
/* c-backend.scm:758: lambda-literal-rest-argument-mode */
t3=*((C_word*)lf[282]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[15]);}

/* k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_5996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5999,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],tmp=(C_word)a,a+=22,tmp);
/* c-backend.scm:759: lambda-literal-temporaries */
t3=*((C_word*)lf[105]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[16]);}

/* k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_5999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5999,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_6002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t1,a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
/* c-backend.scm:760: lambda-literal-unboxed-temporaries */
t3=*((C_word*)lf[514]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[17]);}

/* k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6002,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6005,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
if(C_truep(*((C_word*)lf[218]+1))){
/* c-backend.scm:762: string-append */
t3=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[218]+1),lf[512]);}
else{
t3=t2;
f_6005(2,t3,lf[513]);}}

/* k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6005,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_6008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],tmp=(C_word)a,a+=25,tmp);
if(C_truep(((C_word*)t0)[6])){
/* c-backend.scm:764: debugging */
t3=*((C_word*)lf[509]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[510],lf[511],((C_word*)t0)[15]);}
else{
t3=t2;
f_6008(2,t3,C_SCHEME_UNDEFINED);}}

/* k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6008,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_6011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
/* c-backend.scm:765: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6011,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6014,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],tmp=(C_word)a,a+=24,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6673,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:766: cleanup */
t4=*((C_word*)lf[508]+1);
f_6846(3,t4,t3,((C_word*)t0)[2]);}

/* k6671 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:766: gen */
t2=*((C_word*)lf[1]+1);
f_2252(6,t2,((C_word*)t0)[2],lf[506],t1,lf[507],C_SCHEME_TRUE);}

/* k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
t3=C_eqp(lf[265],((C_word*)t0)[15]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6656,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:775: gen */
t5=*((C_word*)lf[1]+1);
f_2252(3,t5,t4,lf[500]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6634,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[15],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:768: gen */
t5=*((C_word*)lf[1]+1);
f_2252(3,t5,t4,lf[505]);}}

/* k6632 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6637,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:769: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[503]);}
else{
/* c-backend.scm:769: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[504]);}}

/* k6635 in k6632 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6637,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6640,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:771: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[501]);}
else{
/* c-backend.scm:772: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[502]);}}

/* k6638 in k6635 in k6632 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:773: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6654 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6656,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(*((C_word*)lf[218]+1))){
t3=t2;
f_6659(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:777: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[499]);}}

/* k6657 in k6654 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:778: gen */
t2=*((C_word*)lf[1]+1);
f_2252(16,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[493],C_SCHEME_TRUE,lf[494],C_SCHEME_TRUE,lf[495],C_SCHEME_TRUE,lf[496],((C_word*)t0)[2],lf[497],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[498],((C_word*)t0)[2]);}

/* k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* c-backend.scm:783: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,C_make_character(40));}

/* k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6020,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep(((C_word*)t0)[12])){
t3=t2;
f_6023(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:784: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[492]);}}

/* k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6023,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6026,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6606,a[2]=t2,a[3]=((C_word*)t0)[16],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[11])){
t4=C_i_zerop(((C_word*)t0)[18]);
t5=t3;
f_6606(t5,C_i_not(t4));}
else{
t4=t3;
f_6606(t4,C_SCHEME_FALSE);}}

/* k6604 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_fcall f_6606(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6606,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:786: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[491]);}
else{
t2=((C_word*)t0)[2];
f_6026(2,t2,C_SCHEME_UNDEFINED);}}

/* k6607 in k6604 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
/* c-backend.scm:787: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(44));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_6026(2,t3,t2);}}

/* k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6026,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[16]);}

/* k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6029,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep(((C_word*)((C_word*)t0)[22])[1])){
/* c-backend.scm:789: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[490]);}
else{
t3=t2;
f_6032(2,t3,C_SCHEME_UNDEFINED);}}

/* k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6032,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6035,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* c-backend.scm:790: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[489]);}

/* k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6035,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
t3=C_eqp(((C_word*)t0)[3],lf[254]);
if(C_truep(t3)){
t4=C_set_block_item(((C_word*)t0)[22],0,C_SCHEME_FALSE);
t5=t2;
f_6038(t5,t4);}
else{
t4=t2;
f_6038(t4,C_SCHEME_UNDEFINED);}}

/* k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_fcall f_6038(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6038,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6041,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* c-backend.scm:792: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[488]);}

/* k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6041,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_6044,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],tmp=(C_word)a,a+=23,tmp);
if(C_truep(((C_word*)((C_word*)t0)[22])[1])){
/* c-backend.scm:794: gen */
t3=*((C_word*)lf[1]+1);
f_2252(6,t3,t2,C_SCHEME_TRUE,lf[475],((C_word*)t0)[21],C_make_character(59));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6516,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6566,a[2]=((C_word*)t0)[21],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
t5=C_a_i_minus(&a,2,((C_word*)t0)[21],C_fix(1));
t6=t4;
f_6566(t6,C_a_i_plus(&a,2,((C_word*)t0)[17],t5));}
else{
t5=t4;
f_6566(t5,((C_word*)t0)[17]);}}}

/* k6564 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_fcall f_6566(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6566,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6568,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_6568(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* doloop994 in k6564 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_fcall f_6568(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6568,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_zerop(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6578,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:799: gen */
t5=*((C_word*)lf[1]+1);
f_2252(6,t5,t4,C_SCHEME_TRUE,lf[487],t2,C_make_character(59));}}

/* k6576 in doloop994 in k6564 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6578,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1));
t3=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_6568(t4,((C_word*)t0)[2],t2,t3);}

/* k6514 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6516,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[3],lf[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6541,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_6541(t6,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* for-each-loop1002 in k6514 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_fcall f_6541(C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6541,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6551,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6525,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(t4);
t7=C_eqp(t6,lf[476]);
if(C_truep(t7)){
t8=C_i_car(t4);
/* c-backend.scm:802: gen */
t9=*((C_word*)lf[1]+1);
f_2252(7,t9,t3,C_SCHEME_TRUE,lf[477],C_make_character(32),t8,C_make_character(59));}
else{
t8=C_eqp(t6,lf[478]);
if(C_truep(t8)){
t9=C_i_car(t4);
/* c-backend.scm:802: gen */
t10=*((C_word*)lf[1]+1);
f_2252(7,t10,t3,C_SCHEME_TRUE,lf[479],C_make_character(32),t9,C_make_character(59));}
else{
t9=C_eqp(t6,lf[17]);
if(C_truep(t9)){
t10=C_i_car(t4);
/* c-backend.scm:802: gen */
t11=*((C_word*)lf[1]+1);
f_2252(7,t11,t3,C_SCHEME_TRUE,lf[480],C_make_character(32),t10,C_make_character(59));}
else{
t10=C_eqp(t6,lf[481]);
if(C_truep(t10)){
t11=C_i_car(t4);
/* c-backend.scm:802: gen */
t12=*((C_word*)lf[1]+1);
f_2252(7,t12,t3,C_SCHEME_TRUE,lf[482],C_make_character(32),t11,C_make_character(59));}
else{
t11=C_eqp(t6,lf[483]);
if(C_truep(t11)){
t12=C_i_car(t4);
/* c-backend.scm:802: gen */
t13=*((C_word*)lf[1]+1);
f_2252(7,t13,t3,C_SCHEME_TRUE,lf[484],C_make_character(32),t12,C_make_character(59));}
else{
t12=C_eqp(t6,lf[14]);
if(C_truep(t12)){
t13=C_i_car(t4);
/* c-backend.scm:802: gen */
t14=*((C_word*)lf[1]+1);
f_2252(7,t14,t3,C_SCHEME_TRUE,lf[485],C_make_character(32),t13,C_make_character(59));}
else{
/* c-backend.scm:738: bomb */
t13=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t5,lf[486],t6);}}}}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6523 in for-each-loop1002 in k6514 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:802: gen */
t3=*((C_word*)lf[1]+1);
f_2252(7,t3,((C_word*)t0)[2],C_SCHEME_TRUE,t1,C_make_character(32),t2,C_make_character(59));}

/* k6549 in for-each-loop1002 in k6514 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6541(t3,((C_word*)t0)[2],t2);}

/* k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6044(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6044,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6047,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[14],a[8]=((C_word*)t0)[15],a[9]=((C_word*)t0)[16],a[10]=((C_word*)t0)[17],a[11]=((C_word*)t0)[18],a[12]=((C_word*)t0)[19],a[13]=((C_word*)t0)[20],a[14]=((C_word*)t0)[21],a[15]=((C_word*)t0)[22],tmp=(C_word)a,a+=16,tmp);
t3=C_eqp(lf[265],((C_word*)t0)[14]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6234,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[17],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6309,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:805: fold */
t6=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,t5,C_fix(0),((C_word*)t0)[8]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[21])[1])){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6323,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[17],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:839: gen */
t5=*((C_word*)lf[1]+1);
f_2252(4,t5,t4,C_SCHEME_TRUE,lf[456]);}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6387,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=t2,a[8]=((C_word*)t0)[17],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
t5=((C_word*)t0)[10];
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_greaterp(((C_word*)t0)[17],C_fix(0)));
if(C_truep(t6)){
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:853: gen */
t7=*((C_word*)lf[1]+1);
f_2252(10,t7,t4,C_SCHEME_TRUE,lf[466],C_SCHEME_TRUE,lf[467],C_SCHEME_TRUE,lf[468],((C_word*)t0)[17],lf[469]);}
else{
/* c-backend.scm:856: gen */
t7=*((C_word*)lf[1]+1);
f_2252(6,t7,t4,C_SCHEME_TRUE,lf[470],((C_word*)t0)[17],lf[471]);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6477,a[2]=((C_word*)t0)[10],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[10])){
t8=t7;
f_6477(2,t8,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:858: gen */
t8=*((C_word*)lf[1]+1);
f_2252(4,t8,t7,C_SCHEME_TRUE,lf[474]);}}}}}

/* k6475 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6477,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6480,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6489,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=*((C_word*)lf[137]+1);
t5=t3;
f_6489(t5,(C_truep(t4)?C_SCHEME_FALSE:C_i_not(*((C_word*)lf[436]+1))));}
else{
t4=t3;
f_6489(t4,C_SCHEME_FALSE);}}

/* k6487 in k6475 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_fcall f_6489(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm:860: gen */
t2=*((C_word*)lf[1]+1);
f_2252(4,t2,((C_word*)t0)[4],C_SCHEME_TRUE,lf[473]);}
else{
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:861: gen */
t2=*((C_word*)lf[1]+1);
f_2252(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[472]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_6387(2,t3,t2);}}}

/* k6478 in k6475 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:861: gen */
t2=*((C_word*)lf[1]+1);
f_2252(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[472]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_6387(2,t3,t2);}}

/* k6385 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6390,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6429,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t4=*((C_word*)lf[137]+1);
if(C_truep(t4)){
t5=t3;
f_6429(t5,C_SCHEME_FALSE);}
else{
t5=*((C_word*)lf[450]+1);
t6=t3;
f_6429(t6,(C_truep(t5)?C_SCHEME_FALSE:C_i_not(((C_word*)t0)[2])));}}
else{
t4=t3;
f_6429(t4,C_SCHEME_FALSE);}}

/* k6427 in k6385 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_fcall f_6429(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[4],lf[254]);
if(C_truep(t2)){
if(C_truep(C_i_greaterp(((C_word*)t0)[3],C_fix(2)))){
/* c-backend.scm:865: gen */
t3=*((C_word*)lf[1]+1);
f_2252(8,t3,((C_word*)t0)[2],C_SCHEME_TRUE,lf[460],((C_word*)t0)[3],lf[461],((C_word*)t0)[3],lf[462]);}
else{
t3=((C_word*)t0)[2];
f_6390(2,t3,C_SCHEME_UNDEFINED);}}
else{
/* c-backend.scm:866: gen */
t3=*((C_word*)lf[1]+1);
f_2252(8,t3,((C_word*)t0)[2],C_SCHEME_TRUE,lf[463],((C_word*)t0)[3],lf[464],((C_word*)t0)[3],lf[465]);}}
else{
t2=((C_word*)t0)[2];
f_6390(2,t2,C_SCHEME_UNDEFINED);}}

/* k6388 in k6385 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6396,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
if(C_truep(t3)){
t4=t2;
f_6396(t4,C_SCHEME_FALSE);}
else{
if(C_truep(((C_word*)t0)[2])){
t4=((C_word*)t0)[2];
t5=t2;
f_6396(t5,t4);}
else{
t4=t2;
f_6396(t4,C_i_greaterp(((C_word*)t0)[5],C_fix(0)));}}}

/* k6394 in k6388 in k6385 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_fcall f_6396(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6396,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[445]+1))){
/* c-backend.scm:868: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[459]);}
else{
t3=t2;
f_6399(2,t3,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[2];
f_6047(2,t2,C_SCHEME_UNDEFINED);}}

/* k6397 in k6394 in k6388 in k6385 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
if(C_truep(C_i_greaterp(((C_word*)t0)[3],C_fix(0)))){
/* c-backend.scm:870: gen */
t2=*((C_word*)lf[1]+1);
f_2252(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[457]);}
else{
/* c-backend.scm:871: gen */
t2=*((C_word*)lf[1]+1);
f_2252(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[458]);}}
else{
/* c-backend.scm:871: gen */
t2=*((C_word*)lf[1]+1);
f_2252(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[458]);}}

/* k6321 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:840: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[455]);}

/* k6324 in k6321 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6326,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:841: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[454]);}

/* k6327 in k6324 in k6321 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[3],C_fix(0)))){
t3=C_a_i_minus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:843: gen */
t4=*((C_word*)lf[1]+1);
f_2252(4,t4,t2,C_make_character(116),t3);}
else{
/* c-backend.scm:844: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[453]);}}

/* k6330 in k6327 in k6324 in k6321 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6332,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:845: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,lf[451],((C_word*)t0)[3],lf[452]);}

/* k6333 in k6330 in k6327 in k6324 in k6321 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6338,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6350,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=*((C_word*)lf[137]+1);
if(C_truep(t4)){
t5=t3;
f_6350(t5,C_SCHEME_FALSE);}
else{
t5=*((C_word*)lf[450]+1);
if(C_truep(t5)){
t6=t3;
f_6350(t6,C_SCHEME_FALSE);}
else{
t6=C_i_greaterp(((C_word*)t0)[3],C_fix(2));
t7=t3;
f_6350(t7,(C_truep(t6)?C_i_not(((C_word*)t0)[2]):C_SCHEME_FALSE));}}}

/* k6348 in k6333 in k6330 in k6327 in k6324 in k6321 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_fcall f_6350(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm:847: gen */
t2=*((C_word*)lf[1]+1);
f_2252(8,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[447],((C_word*)t0)[2],lf[448],((C_word*)t0)[2],lf[449]);}
else{
t2=((C_word*)t0)[3];
f_6338(2,t2,C_SCHEME_UNDEFINED);}}

/* k6336 in k6333 in k6330 in k6327 in k6324 in k6321 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(*((C_word*)lf[445]+1))){
/* c-backend.scm:848: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[446]);}
else{
/* c-backend.scm:849: gen */
t3=*((C_word*)lf[1]+1);
f_2252(6,t3,((C_word*)t0)[3],C_SCHEME_TRUE,lf[443],((C_word*)t0)[2],lf[444]);}}

/* k6339 in k6336 in k6333 in k6330 in k6327 in k6324 in k6321 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:849: gen */
t2=*((C_word*)lf[1]+1);
f_2252(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[443],((C_word*)t0)[2],lf[444]);}

/* a6308 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6309,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6317,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:805: literal-size */
t5=((C_word*)((C_word*)t0)[2])[1];
f_5476(t5,t4,t2);}

/* k6315 in a6308 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6317,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_plus(&a,2,((C_word*)t0)[2],t1));}

/* k6232 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6234,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6240,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:807: gen */
t4=*((C_word*)lf[1]+1);
f_2252(10,t4,t3,C_SCHEME_TRUE,lf[438],C_SCHEME_TRUE,lf[439],C_SCHEME_TRUE,lf[440],((C_word*)t0)[2],lf[441]);}

/* k6238 in k6232 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6240,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(*((C_word*)lf[436]+1))){
/* c-backend.scm:811: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[437]);}
else{
t3=t2;
f_6243(2,t3,C_SCHEME_UNDEFINED);}}

/* k6241 in k6238 in k6232 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6243,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(*((C_word*)lf[218]+1))){
t3=t2;
f_6246(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6277,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[429]+1))){
/* c-backend.scm:814: gen */
t4=*((C_word*)lf[1]+1);
f_2252(6,t4,t3,C_SCHEME_TRUE,lf[430],*((C_word*)lf[429]+1),lf[431]);}
else{
if(C_truep(*((C_word*)lf[432]+1))){
/* c-backend.scm:816: gen */
t4=*((C_word*)lf[1]+1);
f_2252(8,t4,t3,C_SCHEME_TRUE,lf[433],*((C_word*)lf[432]+1),lf[434],C_SCHEME_TRUE,lf[435]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t3;
f_6277(2,t5,t4);}}}}

/* k6275 in k6241 in k6238 in k6232 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6277,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6280,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[427]+1))){
/* c-backend.scm:819: gen */
t3=*((C_word*)lf[1]+1);
f_2252(6,t3,t2,C_SCHEME_TRUE,lf[428],*((C_word*)lf[427]+1),C_make_character(59));}
else{
t3=t2;
f_6280(2,t3,C_SCHEME_UNDEFINED);}}

/* k6278 in k6275 in k6241 in k6238 in k6232 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6280,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6283,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[425]+1))){
/* c-backend.scm:821: gen */
t3=*((C_word*)lf[1]+1);
f_2252(6,t3,t2,C_SCHEME_TRUE,lf[426],*((C_word*)lf[425]+1),C_make_character(59));}
else{
t3=t2;
f_6283(2,t3,C_SCHEME_UNDEFINED);}}

/* k6281 in k6278 in k6275 in k6241 in k6238 in k6232 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(*((C_word*)lf[422]+1))){
/* c-backend.scm:823: gen */
t2=*((C_word*)lf[1]+1);
f_2252(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[423],*((C_word*)lf[422]+1),lf[424]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_6246(2,t3,t2);}}

/* k6244 in k6241 in k6238 in k6232 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6246,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:824: gen */
t3=*((C_word*)lf[1]+1);
f_2252(16,t3,t2,C_SCHEME_TRUE,lf[415],((C_word*)t0)[3],lf[416],C_SCHEME_TRUE,lf[417],((C_word*)t0)[3],lf[418],C_SCHEME_TRUE,lf[419],C_SCHEME_TRUE,lf[420],C_SCHEME_TRUE,lf[421]);}

/* k6247 in k6244 in k6241 in k6238 in k6232 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6249,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6252,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:829: gen */
t3=*((C_word*)lf[1]+1);
f_2252(14,t3,t2,C_SCHEME_TRUE,lf[409],((C_word*)t0)[2],lf[410],C_SCHEME_TRUE,lf[411],C_SCHEME_TRUE,lf[412],((C_word*)t0)[2],lf[413],C_SCHEME_TRUE,lf[414]);}

/* k6250 in k6247 in k6244 in k6241 in k6238 in k6232 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6252,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6255,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:833: gen */
t3=*((C_word*)lf[1]+1);
f_2252(6,t3,t2,C_SCHEME_TRUE,lf[407],((C_word*)t0)[2],lf[408]);}

/* k6253 in k6250 in k6247 in k6244 in k6241 in k6238 in k6232 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6255,2,t0,t1);}
if(C_truep(C_i_zerop(((C_word*)t0)[4]))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_6047(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:835: gen */
t3=*((C_word*)lf[1]+1);
f_2252(6,t3,t2,C_SCHEME_TRUE,lf[405],((C_word*)t0)[4],lf[406]);}}

/* k6262 in k6253 in k6250 in k6247 in k6244 in k6241 in k6238 in k6232 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6267,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:836: literal-frame */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5421(t3,t2);}

/* k6265 in k6262 in k6253 in k6250 in k6247 in k6244 in k6241 in k6238 in k6232 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:837: gen */
t2=*((C_word*)lf[1]+1);
f_2252(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[403],((C_word*)t0)[2],lf[404]);}

/* k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6047,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6050,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[14],a[6]=((C_word*)t0)[15],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6070,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[13],a[9]=t2,a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[14],tmp=(C_word)a,a+=12,tmp);
t4=C_eqp(lf[265],((C_word*)t0)[7]);
if(C_truep(t4)){
t5=t3;
f_6070(t5,C_SCHEME_FALSE);}
else{
t5=((C_word*)t0)[3];
if(C_truep(t5)){
t6=t3;
f_6070(t6,C_SCHEME_FALSE);}
else{
t6=((C_word*)((C_word*)t0)[14])[1];
if(C_truep(t6)){
t7=t3;
f_6070(t7,t6);}
else{
if(C_truep(((C_word*)t0)[2])){
t7=((C_word*)t0)[2];
t8=t3;
f_6070(t8,t7);}
else{
t7=t3;
f_6070(t7,C_i_greaterp(((C_word*)t0)[10],C_fix(0)));}}}}}

/* k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_fcall f_6070(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6070,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[11])[1])){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6076,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[4],C_fix(0)))){
/* c-backend.scm:876: gen */
t3=*((C_word*)lf[1]+1);
f_2252(7,t3,t2,C_SCHEME_TRUE,lf[394],lf[395],((C_word*)t0)[8],C_make_character(114));}
else{
/* c-backend.scm:876: gen */
t3=*((C_word*)lf[1]+1);
f_2252(7,t3,t2,C_SCHEME_TRUE,lf[396],lf[395],((C_word*)t0)[8],C_make_character(114));}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6175,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[4],C_fix(0)))){
/* c-backend.scm:899: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,C_SCHEME_TRUE,lf[400],lf[401]);}
else{
/* c-backend.scm:899: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,C_SCHEME_TRUE,lf[402],lf[401]);}}}
else{
t2=((C_word*)t0)[9];
f_6050(2,t2,C_SCHEME_UNDEFINED);}}

/* k6173 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6175,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6178,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:901: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,((C_word*)t0)[3],lf[398]);}
else{
/* c-backend.scm:902: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,((C_word*)t0)[2],lf[399],((C_word*)t0)[3]);}}

/* k6176 in k6173 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6178,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6181,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[3],C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6190,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:904: gen */
t4=*((C_word*)lf[1]+1);
f_2252(5,t4,t3,C_make_character(44),((C_word*)t0)[3],C_make_character(44));}
else{
/* c-backend.scm:906: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,((C_word*)t0)[4],lf[397]);}}

/* k6188 in k6176 in k6173 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k6179 in k6176 in k6173 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:906: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[397]);}

/* k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6076,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:877: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,lf[392],((C_word*)t0)[4],lf[393]);}

/* k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6079,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6082,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[3],C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6162,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:879: gen */
t4=*((C_word*)lf[1]+1);
f_2252(5,t4,t3,C_make_character(44),((C_word*)t0)[3],C_make_character(44));}
else{
t3=t2;
f_6082(2,t3,C_SCHEME_UNDEFINED);}}

/* k6160 in k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k6080 in k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6082,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:881: gen */
t3=*((C_word*)lf[1]+1);
f_2252(9,t3,t2,lf[388],C_SCHEME_TRUE,lf[389],C_SCHEME_TRUE,lf[390],((C_word*)t0)[5],lf[391]);}

/* k6083 in k6080 in k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6085,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:884: gen */
t3=*((C_word*)lf[1]+1);
f_2252(6,t3,t2,C_SCHEME_TRUE,lf[386],((C_word*)t0)[5],lf[387]);}

/* k6086 in k6083 in k6080 in k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6088,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:885: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[2],lf[385]);}

/* k6089 in k6086 in k6083 in k6080 in k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6091,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6094,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6152,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6156,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:886: make-argument-list */
t5=*((C_word*)lf[299]+1);
f_6951(4,t5,t4,((C_word*)t0)[5],lf[384]);}

/* k6154 in k6089 in k6086 in k6083 in k6080 in k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:886: intersperse */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k6150 in k6089 in k6086 in k6083 in k6080 in k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k6092 in k6089 in k6086 in k6083 in k6080 in k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6094,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:887: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,lf[382],((C_word*)t0)[5],lf[383]);}

/* k6095 in k6092 in k6089 in k6086 in k6083 in k6080 in k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6100,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:889: gen */
t3=*((C_word*)lf[1]+1);
f_2252(7,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[380],((C_word*)t0)[2],lf[381]);}

/* k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6080 in k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6100,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6103,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6080 in k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6103,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:891: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,lf[378],((C_word*)t0)[3],lf[379]);}

/* k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6080 in k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6106,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:892: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[377]);}

/* k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6080 in k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6109,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6112,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6127,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6127(t7,t2,t3,((C_word*)t0)[2]);}

/* doloop1080 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6080 in k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_fcall f_6127(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6127,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_zerop(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6137,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:896: gen */
t5=*((C_word*)lf[1]+1);
f_2252(6,t5,t4,C_SCHEME_TRUE,lf[376],t2,C_make_character(59));}}

/* k6135 in doloop1080 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6080 in k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6137,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1));
t3=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_6127(t4,((C_word*)t0)[2],t2,t3);}

/* k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6080 in k6077 in k6074 in k6068 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_greaterp(((C_word*)t0)[3],C_fix(0)))){
/* c-backend.scm:897: gen */
t2=*((C_word*)lf[1]+1);
f_2252(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[374],((C_word*)t0)[3],lf[375]);}
else{
t2=((C_word*)t0)[2];
f_6050(2,t2,C_SCHEME_UNDEFINED);}}

/* k6048 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6050,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6053,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6060,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:908: lambda-literal-body */
t4=*((C_word*)lf[373]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k6058 in k6048 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6060,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t2=C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1));
/* c-backend.scm:907: expression */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2387(t3,((C_word*)t0)[3],t1,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
/* c-backend.scm:907: expression */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2387(t3,((C_word*)t0)[3],t1,t2,((C_word*)t0)[2]);}}

/* k6051 in k6048 in k6045 in k6042 in k6039 in k6036 in k6033 in k6030 in k6027 in k6024 in k6021 in k6018 in k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in g955 in procedures */
static void C_ccall f_6053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:913: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(125));}

/* string-like-substring */
static void C_fcall f_5891(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5891,NULL,4,t1,t2,t3,t4);}
t5=C_a_i_minus(&a,2,t4,t3);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5898,a[2]=t5,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:726: make-string */
t7=*((C_word*)lf[372]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}

/* k5896 in string-like-substring */
static void C_ccall f_5898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5898,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5901,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:727: ##sys#copy-bytes */
t3=*((C_word*)lf[371]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* k5899 in k5896 in string-like-substring */
static void C_ccall f_5901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* gen-string-constant */
static void C_fcall f_5814(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5814,NULL,3,t0,t1,t2);}
t3=C_block_size(t2);
t4=C_fixnum_divide(t3,C_fix(80));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5824,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:716: modulo */
t6=*((C_word*)lf[370]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,C_fix(80));}

/* k5822 in gen-string-constant */
static void C_ccall f_5824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5824,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5829,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_5829(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop931 in k5822 in gen-string-constant */
static void C_fcall f_5829(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5829,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_zerop(t2))){
t4=C_i_zerop(((C_word*)t0)[6]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5845,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t4)){
t6=t5;
f_5845(t6,t4);}
else{
t6=C_i_zerop(((C_word*)t0)[3]);
t7=t5;
f_5845(t7,C_i_not(t6));}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5866,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5881,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5885,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_plus(&a,2,t3,C_fix(80));
/* c-backend.scm:722: string-like-substring */
f_5891(t6,((C_word*)t0)[4],t3,t7);}}

/* k5883 in doloop931 in k5822 in gen-string-constant */
static void C_ccall f_5885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:722: c-ify-string */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5879 in doloop931 in k5822 in gen-string-constant */
static void C_ccall f_5881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:722: gen */
t2=*((C_word*)lf[1]+1);
f_2252(4,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k5864 in doloop931 in k5822 in gen-string-constant */
static void C_ccall f_5866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5866,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[5],C_fix(1));
t3=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(80));
t4=((C_word*)((C_word*)t0)[3])[1];
f_5829(t4,((C_word*)t0)[2],t2,t3);}

/* k5843 in doloop931 in k5822 in gen-string-constant */
static void C_fcall f_5845(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5845,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5852,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5856,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:721: string-like-substring */
f_5891(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k5854 in k5843 in doloop931 in k5822 in gen-string-constant */
static void C_ccall f_5856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:721: c-ify-string */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5850 in k5843 in doloop931 in k5822 in gen-string-constant */
static void C_ccall f_5852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:721: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],t1);}

/* gen-lit */
static void C_fcall f_5672(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5672,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5679,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5812,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:688: big-fixnum? */
t6=*((C_word*)lf[369]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t5=t4;
f_5679(t5,C_SCHEME_FALSE);}}

/* k5810 in gen-lit */
static void C_ccall f_5812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5679(t2,C_i_not(t1));}

/* k5677 in gen-lit */
static void C_fcall f_5679(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5679,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:689: gen */
t2=*((C_word*)lf[1]+1);
f_2252(7,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4],lf[354],((C_word*)t0)[3],lf[355]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5685,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:690: block-variable-literal? */
t3=*((C_word*)lf[352]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}

/* k5683 in k5677 in gen-lit */
static void C_ccall f_5685(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5685,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=*((C_word*)lf[356]+1);
t3=C_eqp(((C_word*)t0)[4],t2);
if(C_truep(t3)){
/* c-backend.scm:692: gen */
t4=*((C_word*)lf[1]+1);
f_2252(5,t4,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[3],lf[357]);}
else{
if(C_truep(C_booleanp(((C_word*)t0)[4]))){
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:694: gen */
t4=*((C_word*)lf[1]+1);
f_2252(7,t4,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[3],C_make_character(61),lf[358],C_make_character(59));}
else{
/* c-backend.scm:694: gen */
t4=*((C_word*)lf[1]+1);
f_2252(7,t4,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[3],C_make_character(61),lf[359],C_make_character(59));}}
else{
if(C_truep(C_charp(((C_word*)t0)[4]))){
t4=C_fix(C_character_code(((C_word*)t0)[4]));
/* c-backend.scm:696: gen */
t5=*((C_word*)lf[1]+1);
f_2252(7,t5,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[3],lf[360],t4,lf[361]);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5735,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:699: c-ify-string */
t6=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
/* c-backend.scm:704: gen */
t4=*((C_word*)lf[1]+1);
f_2252(5,t4,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[3],lf[365]);}
else{
t4=C_immp(((C_word*)t0)[4]);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_lambdainfop(((C_word*)t0)[4]));
if(C_truep(t5)){
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_fixnump(((C_word*)t0)[4]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5768,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t8=t7;
f_5768(t8,t6);}
else{
t8=C_immp(((C_word*)t0)[4]);
t9=t7;
f_5768(t9,C_i_not(t8));}}}}}}}}}

/* k5766 in k5683 in k5677 in gen-lit */
static void C_fcall f_5768(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5768,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5771,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:708: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[2],lf[368]);}
else{
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[3];
/* c-backend.scm:665: bomb */
t4=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[349],t3);}}

/* k5769 in k5766 in k5683 in k5677 in gen-lit */
static void C_ccall f_5771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5774,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5781,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:709: encode-literal */
t4=*((C_word*)lf[367]+1);
f_10010(3,t4,t3,((C_word*)t0)[2]);}

/* k5779 in k5769 in k5766 in k5683 in k5677 in gen-lit */
static void C_ccall f_5781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:709: gen-string-constant */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5814(t2,((C_word*)t0)[2],t1);}

/* k5772 in k5769 in k5766 in k5683 in k5677 in gen-lit */
static void C_ccall f_5774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:710: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[366]);}

/* k5733 in k5683 in k5677 in gen-lit */
static void C_ccall f_5735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5735,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5741,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:701: gen */
t4=*((C_word*)lf[1]+1);
f_2252(5,t4,t3,C_SCHEME_TRUE,((C_word*)t0)[2],lf[364]);}

/* k5739 in k5733 in k5683 in k5677 in gen-lit */
static void C_ccall f_5741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:702: gen */
t2=*((C_word*)lf[1]+1);
f_2252(9,t2,((C_word*)t0)[5],lf[362],((C_word*)t0)[4],C_make_character(44),((C_word*)t0)[3],C_make_character(44),((C_word*)t0)[2],lf[363]);}

/* literal-size */
static void C_fcall f_5476(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5476,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5483,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:668: immediate? */
t4=*((C_word*)lf[353]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k5481 in literal-size */
static void C_ccall f_5483(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5483,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
t2=*((C_word*)lf[345]+1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(10));}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:672: literal-size */
t4=((C_word*)((C_word*)t0)[2])[1];
f_5476(t4,t2,t3);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
t2=C_i_vector_length(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5543,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5547,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t7,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:673: vector->list */
t9=*((C_word*)lf[348]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:674: block-variable-literal? */
t3=*((C_word*)lf[352]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}}}}}}

/* k5592 in k5481 in literal-size */
static void C_ccall f_5594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5594,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep(C_immp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
/* c-backend.scm:665: bomb */
t4=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[349],t3);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[3]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:677: ##sys#bytevector? */
t3=*((C_word*)lf[351]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}}}

/* k5610 in k5592 in k5481 in literal-size */
static void C_ccall f_5612(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5612,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5619,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* c-backend.scm:677: words */
t4=*((C_word*)lf[350]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
if(C_truep(C_structurep(((C_word*)t0)[3]))){
t2=C_block_size(((C_word*)t0)[3]);
t3=C_a_i_plus(&a,2,C_fix(2),t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5641,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5641(t7,((C_word*)t0)[4],C_fix(0),t3);}
else{
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
/* c-backend.scm:665: bomb */
t4=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[349],t3);}}}

/* loop in k5610 in k5592 in k5481 in literal-size */
static void C_fcall f_5641(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5641,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[5]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_a_i_plus(&a,2,t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5663,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=C_slot(((C_word*)t0)[3],t2);
/* c-backend.scm:683: literal-size */
t7=((C_word*)((C_word*)t0)[2])[1];
f_5476(t7,t5,t6);}}

/* k5661 in loop in k5610 in k5592 in k5481 in literal-size */
static void C_ccall f_5663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5663,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[5],t1);
/* c-backend.scm:683: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5641(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k5617 in k5610 in k5592 in k5481 in literal-size */
static void C_ccall f_5619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5619,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_plus(&a,2,C_fix(2),t1));}

/* k5545 in k5481 in literal-size */
static void C_ccall f_5547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5547,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[228]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5553,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5555,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5555(t7,t3,t1);}

/* map-loop876 in k5545 in k5481 in literal-size */
static void C_fcall f_5555(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5555,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5584,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g882891 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_5476(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5582 in map-loop876 in k5545 in k5481 in literal-size */
static void C_ccall f_5584(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5584,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5555(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5555(t6,((C_word*)t0)[3],t5);}}

/* k5551 in k5545 in k5481 in literal-size */
static void C_ccall f_5553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:673: reduce */
t2=*((C_word*)lf[346]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],*((C_word*)lf[347]+1),C_fix(0),t1);}

/* k5541 in k5481 in literal-size */
static void C_ccall f_5543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:673: + */
C_plus(5,0,((C_word*)t0)[3],C_fix(1),((C_word*)t0)[2],t1);}

/* k5512 in k5481 in literal-size */
static void C_ccall f_5514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5518,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* c-backend.scm:672: literal-size */
t4=((C_word*)((C_word*)t0)[2])[1];
f_5476(t4,t2,t3);}

/* k5516 in k5512 in k5481 in literal-size */
static void C_ccall f_5518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:672: + */
C_plus(5,0,((C_word*)t0)[3],C_fix(3),((C_word*)t0)[2],t1);}

/* literal-frame */
static void C_fcall f_5421(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5421,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5427,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5427(t5,t1,C_fix(0),((C_word*)t0)[2]);}

/* doloop848 in literal-frame */
static void C_fcall f_5427(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5427,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5437,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5456,a[2]=t2,a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* open-output-string */
t7=*((C_word*)lf[344]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5454 in doloop848 in literal-frame */
static void C_ccall f_5456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5459,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[343],t1);}

/* k5457 in k5454 in doloop848 in literal-frame */
static void C_ccall f_5459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5459,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5462,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* write */
t3=*((C_word*)lf[342]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5460 in k5457 in k5454 in doloop848 in literal-frame */
static void C_ccall f_5462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5462,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5465,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[341]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(93),((C_word*)t0)[2]);}

/* k5463 in k5460 in k5457 in k5454 in doloop848 in literal-frame */
static void C_ccall f_5465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5465,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5468,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
t3=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5466 in k5463 in k5460 in k5457 in k5454 in doloop848 in literal-frame */
static void C_ccall f_5468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:662: gen-lit */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5672(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5435 in doloop848 in literal-frame */
static void C_ccall f_5437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5437,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1));
t3=C_i_cdr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_5427(t4,((C_word*)t0)[2],t2,t3);}

/* trampolines */
static void C_fcall f_5045(C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5045,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5048,tmp=(C_word)a,a+=2,tmp));
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5084,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5162,a[2]=t3,a[3]=t5,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t13=((C_word*)t0)[2];
t14=C_i_check_list_2(t13,lf[2]);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5275,a[2]=t9,a[3]=t1,a[4]=t5,a[5]=t3,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5398,a[2]=t12,a[3]=t17,tmp=(C_word)a,a+=4,tmp));
t19=((C_word*)t17)[1];
f_5398(t19,t15,t13);}

/* for-each-loop725 in trampolines */
static void C_fcall f_5398(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5398,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5408,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g726757 */
t5=((C_word*)t0)[2];
f_5162(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5406 in for-each-loop725 in trampolines */
static void C_ccall f_5408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5398(t3,((C_word*)t0)[2],t2);}

/* k5273 in trampolines */
static void C_ccall f_5275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5275,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5276,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)((C_word*)t0)[5])[1];
t4=C_i_check_list_2(t3,lf[2]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5375,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5375(t9,t5,t3);}

/* for-each-loop791 in k5273 in trampolines */
static void C_fcall f_5375(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5375,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5385,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g792798 */
t5=((C_word*)t0)[2];
f_5276(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5383 in for-each-loop791 in k5273 in trampolines */
static void C_ccall f_5385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5375(t3,((C_word*)t0)[2],t2);}

/* k5307 in k5273 in trampolines */
static void C_ccall f_5309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:655: emitter */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5084(t3,t2,C_SCHEME_FALSE);}

/* k5310 in k5307 in k5273 in trampolines */
static void C_ccall f_5312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5312,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[4])[1];
t3=C_i_check_list_2(t2,lf[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5352,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_5352(t8,t4,t2);}

/* for-each-loop813 in k5310 in k5307 in k5273 in trampolines */
static void C_fcall f_5352(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5352,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5362,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g814820 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5360 in for-each-loop813 in k5310 in k5307 in k5273 in trampolines */
static void C_ccall f_5362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5352(t3,((C_word*)t0)[2],t2);}

/* k5316 in k5310 in k5307 in k5273 in trampolines */
static void C_ccall f_5318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5318,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5321,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:656: emitter */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5084(t3,t2,C_SCHEME_TRUE);}

/* k5319 in k5316 in k5310 in k5307 in k5273 in trampolines */
static void C_ccall f_5321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5321,2,t0,t1);}
t2=C_i_check_list_2(C_SCHEME_END_OF_LIST,lf[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5329,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5329(t6,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* for-each-loop829 in k5319 in k5316 in k5310 in k5307 in k5273 in trampolines */
static void C_fcall f_5329(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5329,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5339,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g830836 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5337 in for-each-loop829 in k5319 in k5316 in k5310 in k5307 in k5273 in trampolines */
static void C_ccall f_5339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5329(t3,((C_word*)t0)[2],t2);}

/* g792 in k5273 in trampolines */
static void C_fcall f_5276(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5276,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5280,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:647: gen */
t4=*((C_word*)lf[1]+1);
f_2252(13,t4,t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[335],t2,lf[336],C_SCHEME_TRUE,lf[337],t2,lf[338],t2,lf[339]);}

/* k5278 in g792 in k5273 in trampolines */
static void C_ccall f_5280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5280,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5283,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:649: gen */
t3=*((C_word*)lf[1]+1);
f_2252(8,t3,t2,C_SCHEME_TRUE,lf[332],((C_word*)t0)[3],lf[333],((C_word*)t0)[3],lf[334]);}

/* k5281 in k5278 in g792 in k5273 in trampolines */
static void C_ccall f_5283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5283,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5286,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:650: restore */
f_5048(t2,((C_word*)t0)[3]);}

/* k5284 in k5281 in k5278 in g792 in k5273 in trampolines */
static void C_ccall f_5286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5286,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:651: gen */
t3=*((C_word*)lf[1]+1);
f_2252(6,t3,t2,C_SCHEME_TRUE,lf[331],((C_word*)t0)[2],C_make_character(44));}

/* k5287 in k5284 in k5281 in k5278 in g792 in k5273 in trampolines */
static void C_ccall f_5289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5292,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5299,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5303,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:652: make-argument-list */
t5=*((C_word*)lf[299]+1);
f_6951(4,t5,t4,((C_word*)t0)[2],lf[330]);}

/* k5301 in k5287 in k5284 in k5281 in k5278 in g792 in k5273 in trampolines */
static void C_ccall f_5303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:652: intersperse */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k5297 in k5287 in k5284 in k5281 in k5278 in g792 in k5273 in trampolines */
static void C_ccall f_5299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k5290 in k5287 in k5284 in k5281 in k5278 in g792 in k5273 in trampolines */
static void C_ccall f_5292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:653: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[329]);}

/* g726 in trampolines */
static void C_fcall f_5162(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5162,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5166,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:623: lambda-literal-argument-count */
t4=*((C_word*)lf[287]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k5164 in g726 in trampolines */
static void C_ccall f_5166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5166,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5169,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:624: lambda-literal-rest-argument */
t5=*((C_word*)lf[283]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5172,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:625: lambda-literal-rest-argument-mode */
t3=*((C_word*)lf[282]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5170 in k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5175,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:626: lambda-literal-id */
t3=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5175,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:627: lambda-literal-customizable */
t3=*((C_word*)lf[286]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5178,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5269,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:628: lambda-literal-closure-size */
t4=*((C_word*)lf[153]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_5181(t3,C_SCHEME_FALSE);}}

/* k5267 in k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5181(t2,C_i_zerop(t1));}

/* k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_fcall f_5181(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5181,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[9])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[9])+1,t3);
t5=t2;
f_5184(t5,t4);}
else{
t3=t2;
f_5184(t3,C_SCHEME_UNDEFINED);}}

/* k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_fcall f_5184(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5184,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:630: lambda-literal-direct */
t3=*((C_word*)lf[281]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5188 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5190,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(((C_word*)t0)[10])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5196,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:632: gen */
t3=*((C_word*)lf[1]+1);
f_2252(11,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[324],((C_word*)t0)[8],lf[325],C_SCHEME_TRUE,lf[326],((C_word*)t0)[8],lf[327]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5224,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=t2;
f_5224(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5258,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:640: lambda-literal-allocated */
t4=*((C_word*)lf[280]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}}}}

/* k5256 in k5188 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_greaterp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
f_5224(2,t3,t2);}
else{
/* c-backend.scm:640: lambda-literal-external */
t3=*((C_word*)lf[328]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k5222 in k5188 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5224,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5230,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_eqp(((C_word*)t0)[2],lf[254]);
t4=t2;
f_5230(t4,C_i_not(t3));}
else{
t3=t2;
f_5230(t3,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5228 in k5222 in k5188 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_fcall f_5230(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5230,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5234,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:642: lset-adjoin */
t3=*((C_word*)lf[252]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[253]+1),((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5238,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:643: lset-adjoin */
t3=*((C_word*)lf[252]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[253]+1),((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);}}

/* k5236 in k5228 in k5222 in k5188 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5232 in k5228 in k5222 in k5188 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5194 in k5188 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5196,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:634: gen */
t3=*((C_word*)lf[1]+1);
f_2252(6,t3,t2,C_SCHEME_TRUE,lf[322],((C_word*)t0)[3],lf[323]);}

/* k5197 in k5194 in k5188 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5202,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:635: restore */
f_5048(t2,((C_word*)((C_word*)t0)[4])[1]);}

/* k5200 in k5197 in k5194 in k5188 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5202,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5205,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:636: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[2],C_make_character(40));}

/* k5203 in k5200 in k5197 in k5194 in k5188 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5205,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5208,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:637: make-argument-list */
t3=*((C_word*)lf[299]+1);
f_6951(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],lf[321]);}

/* k5206 in k5203 in k5200 in k5197 in k5194 in k5188 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5211,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5218,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:638: intersperse */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,C_make_character(44));}

/* k5216 in k5206 in k5203 in k5200 in k5197 in k5194 in k5188 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k5209 in k5206 in k5203 in k5200 in k5197 in k5194 in k5188 in k5182 in k5179 in k5176 in k5173 in k5170 in k5167 in k5164 in g726 in trampolines */
static void C_ccall f_5211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:639: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[320]);}

/* emitter in trampolines */
static void C_fcall f_5084(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5084,NULL,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5086,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp));}

/* f_5086 in emitter in trampolines */
static void C_ccall f_5086(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5086,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5090,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[3])?C_make_character(118):lf[315]);
t5=(C_truep(((C_word*)t0)[3])?C_make_character(118):lf[316]);
/* c-backend.scm:601: gen */
t6=*((C_word*)lf[1]+1);
f_2252(14,t6,t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[317],t2,C_make_character(114),t4,lf[318],C_SCHEME_TRUE,lf[319],t2,C_make_character(114),t5);}

/* k5088 */
static void C_ccall f_5090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5090,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5093,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:603: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,lf[313],((C_word*)t0)[4],lf[314]);}

/* k5091 in k5088 */
static void C_ccall f_5093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5093,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5096,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:604: gen */
t3=*((C_word*)lf[1]+1);
f_2252(6,t3,t2,C_SCHEME_TRUE,lf[312],((C_word*)t0)[4],C_make_character(114));}

/* k5094 in k5091 in k5088 */
static void C_ccall f_5096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5096,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:605: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,C_make_character(118));}
else{
t3=t2;
f_5099(2,t3,C_SCHEME_UNDEFINED);}}

/* k5097 in k5094 in k5091 in k5088 */
static void C_ccall f_5099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5099,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:606: gen */
t3=*((C_word*)lf[1]+1);
f_2252(11,t3,t2,lf[308],((C_word*)t0)[4],lf[309],C_SCHEME_TRUE,lf[310],C_SCHEME_TRUE,lf[311],((C_word*)t0)[4],C_make_character(59));}

/* k5100 in k5097 in k5094 in k5091 in k5088 */
static void C_ccall f_5102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5102,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5105,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:609: restore */
f_5048(t2,((C_word*)t0)[4]);}

/* k5103 in k5100 in k5097 in k5094 in k5091 in k5088 */
static void C_ccall f_5105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5105,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5108,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:610: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[307]);}

/* k5106 in k5103 in k5100 in k5097 in k5094 in k5091 in k5088 */
static void C_ccall f_5108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5108,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:612: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[305]);}
else{
/* c-backend.scm:613: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[306]);}}

/* k5109 in k5106 in k5103 in k5100 in k5097 in k5094 in k5091 in k5088 */
static void C_ccall f_5111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5114,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:614: gen */
t3=*((C_word*)lf[1]+1);
f_2252(6,t3,t2,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[3],lf[304]);}

/* k5112 in k5109 in k5106 in k5103 in k5100 in k5097 in k5094 in k5091 in k5088 */
static void C_ccall f_5114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5114,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5117,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:615: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[303]);}
else{
t3=t2;
f_5117(2,t3,C_SCHEME_UNDEFINED);}}

/* k5115 in k5112 in k5109 in k5106 in k5103 in k5100 in k5097 in k5094 in k5091 in k5088 */
static void C_ccall f_5117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5117,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5120,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:616: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[302]);}

/* k5118 in k5115 in k5112 in k5109 in k5106 in k5103 in k5100 in k5097 in k5094 in k5091 in k5088 */
static void C_ccall f_5120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5120,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5123,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:617: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[301]);}

/* k5121 in k5118 in k5115 in k5112 in k5109 in k5106 in k5103 in k5100 in k5097 in k5094 in k5091 in k5088 */
static void C_ccall f_5123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5123,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5126,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5133,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5137,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* c-backend.scm:618: make-argument-list */
t6=*((C_word*)lf[299]+1);
f_6951(4,t6,t4,t5,lf[300]);}

/* k5135 in k5121 in k5118 in k5115 in k5112 in k5109 in k5106 in k5103 in k5100 in k5097 in k5094 in k5091 in k5088 */
static void C_ccall f_5137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:618: intersperse */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k5131 in k5121 in k5118 in k5115 in k5112 in k5109 in k5106 in k5103 in k5100 in k5097 in k5094 in k5091 in k5088 */
static void C_ccall f_5133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k5124 in k5121 in k5118 in k5115 in k5112 in k5109 in k5106 in k5103 in k5100 in k5097 in k5094 in k5091 in k5088 */
static void C_ccall f_5126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:619: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[298]);}

/* restore in trampolines */
static void C_fcall f_5048(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5048,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5052,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_minus(&a,2,t2,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5061,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_5061(t8,t3,t4,C_fix(0));}

/* doloop735 in restore in trampolines */
static void C_fcall f_5061(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5061,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_negativep(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5071,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:596: gen */
t5=*((C_word*)lf[1]+1);
f_2252(8,t5,t4,C_SCHEME_TRUE,lf[295],t2,lf[296],t3,lf[297]);}}

/* k5069 in doloop735 in restore in trampolines */
static void C_ccall f_5071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5071,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[5],C_fix(1));
t3=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_5061(t4,((C_word*)t0)[2],t2,t3);}

/* k5050 in restore in trampolines */
static void C_ccall f_5052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:597: gen */
t2=*((C_word*)lf[1]+1);
f_2252(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[293],((C_word*)t0)[2],lf[294]);}

/* prototypes */
static void C_fcall f_4701(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4701,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4705,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:527: gen */
t5=*((C_word*)lf[1]+1);
f_2252(3,t5,t4,C_SCHEME_TRUE);}

/* k4703 in prototypes */
static void C_ccall f_4705(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4706,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_list_2(t3,lf[2]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5022,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5022(t9,t5,t3);}

/* for-each-loop613 in k4703 in prototypes */
static void C_fcall f_5022(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5022,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5032,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g614620 */
t5=((C_word*)t0)[2];
f_4706(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5030 in for-each-loop613 in k4703 in prototypes */
static void C_ccall f_5032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5022(t3,((C_word*)t0)[2],t2);}

/* k4949 in k4703 in prototypes */
static void C_ccall f_4951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4951,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[3])[1];
t3=C_i_check_list_2(t2,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4999,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4999(t7,((C_word*)t0)[2],t2);}

/* for-each-loop685 in k4949 in k4703 in prototypes */
static void C_fcall f_4999(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4999,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5009,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4956,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:582: gen */
t6=*((C_word*)lf[1]+1);
f_2252(6,t6,t5,C_SCHEME_TRUE,lf[291],t4,lf[292]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4954 in for-each-loop685 in k4949 in k4703 in prototypes */
static void C_ccall f_4956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4956,2,t0,t1);}
t2=*((C_word*)lf[1]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4959,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:583: make-list */
t4=*((C_word*)lf[289]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],lf[290]);}

/* k4957 in k4954 in for-each-loop685 in k4949 in k4703 in prototypes */
static void C_ccall f_4959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4959,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[2]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4965,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4970,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4970(t7,t3,t1);}

/* for-each-loop697 in k4957 in k4954 in for-each-loop685 in k4949 in k4703 in prototypes */
static void C_fcall f_4970(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4970,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4980,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g698704 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4978 in for-each-loop697 in k4957 in k4954 in for-each-loop685 in k4949 in k4703 in prototypes */
static void C_ccall f_4980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4970(t3,((C_word*)t0)[2],t2);}

/* k4963 in k4957 in k4954 in for-each-loop685 in k4949 in k4703 in prototypes */
static void C_ccall f_4965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:584: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[288]);}

/* k5007 in for-each-loop685 in k4949 in k4703 in prototypes */
static void C_ccall f_5009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4999(t3,((C_word*)t0)[2],t2);}

/* g614 in k4703 in prototypes */
static void C_fcall f_4706(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4706,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4710,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:530: lambda-literal-argument-count */
t4=*((C_word*)lf[287]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4710,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4713,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:531: lambda-literal-customizable */
t3=*((C_word*)lf[286]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4713,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4716,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4945,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:532: lambda-literal-closure-size */
t4=*((C_word*)lf[153]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_4716(t3,C_SCHEME_FALSE);}}

/* k4943 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4716(t2,C_i_zerop(t1));}

/* k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_fcall f_4716(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4716,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4931,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t4=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
/* c-backend.scm:533: make-variable-list */
t5=*((C_word*)lf[284]+1);
f_6935(4,t5,t3,t4,lf[285]);}
else{
t4=((C_word*)t0)[4];
/* c-backend.scm:533: make-variable-list */
t5=*((C_word*)lf[284]+1);
f_6935(4,t5,t3,t4,lf[285]);}}

/* k4929 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:533: intersperse */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:534: lambda-literal-id */
t3=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:535: lambda-literal-rest-argument */
t3=*((C_word*)lf[283]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:536: lambda-literal-rest-argument-mode */
t3=*((C_word*)lf[282]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4728,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:537: lambda-literal-direct */
t3=*((C_word*)lf[281]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4731,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:538: lambda-literal-allocated */
t3=*((C_word*)lf[280]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4734,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_greater_or_equalp(((C_word*)t0)[7],*((C_word*)lf[251]+1)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4923,a[2]=t2,a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_plus(&a,2,((C_word*)t0)[7],C_fix(1));
/* c-backend.scm:540: lset-adjoin */
t5=*((C_word*)lf[252]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,*((C_word*)lf[253]+1),((C_word*)((C_word*)t0)[11])[1],t4);}
else{
t3=t2;
f_4737(t3,C_SCHEME_UNDEFINED);}}

/* k4921 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_4737(t3,t2);}

/* k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_fcall f_4737(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4737,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm:541: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,C_SCHEME_TRUE);}

/* k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4741,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4759,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:546: lambda-literal-callee-signatures */
t4=*((C_word*)lf[279]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4759,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[2]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4765,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4895,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4895(t7,t3,t1);}

/* for-each-loop635 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_fcall f_4895(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4895,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4905,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g636642 */
t5=((C_word*)t0)[2];
f_4741(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4903 in for-each-loop635 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4895(t3,((C_word*)t0)[2],t2);}

/* k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_eqp(lf[265],((C_word*)t0)[5]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4877,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[218]+1))){
/* c-backend.scm:556: string-append */
t5=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[218]+1),lf[270]);}
else{
t5=t4;
f_4877(2,t5,lf[271]);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4852,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:548: gen */
t5=*((C_word*)lf[1]+1);
f_2252(6,t5,t4,lf[277],((C_word*)t0)[5],lf[278],C_SCHEME_TRUE);}}

/* k4850 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4852,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:549: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[276]);}

/* k4853 in k4850 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4855,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4858,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:550: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[274]);}
else{
/* c-backend.scm:550: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[275]);}}

/* k4856 in k4853 in k4850 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4858,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4861,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:552: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[272]);}
else{
/* c-backend.scm:553: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[273]);}}

/* k4859 in k4856 in k4853 in k4850 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:554: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4875 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4877,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4880,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:557: gen */
t3=*((C_word*)lf[1]+1);
f_2252(6,t3,t2,lf[268],t1,lf[269],C_SCHEME_TRUE);}

/* k4878 in k4875 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4880,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:558: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[267]);}

/* k4881 in k4878 in k4875 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:559: gen */
t2=*((C_word*)lf[1]+1);
f_2252(4,t2,((C_word*)t0)[3],lf[266],((C_word*)t0)[2]);}

/* k4766 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:560: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,C_make_character(40));}

/* k4769 in k4766 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4774,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_4774(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:561: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[264]);}}

/* k4772 in k4769 in k4766 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4774,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4777,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4824,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=C_i_zerop(((C_word*)t0)[2]);
t5=t3;
f_4824(t5,C_i_not(t4));}
else{
t4=t3;
f_4824(t4,C_SCHEME_FALSE);}}

/* k4822 in k4772 in k4769 in k4766 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_fcall f_4824(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4824,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4827,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:563: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[263]);}
else{
t2=((C_word*)t0)[2];
f_4777(2,t2,C_SCHEME_UNDEFINED);}}

/* k4825 in k4822 in k4772 in k4769 in k4766 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
/* c-backend.scm:564: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(44));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_4777(2,t3,t2);}}

/* k4775 in k4772 in k4769 in k4766 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4777,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[4]);}

/* k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4780,2,t0,t1);}
if(C_truep(((C_word*)t0)[8])){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4786,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:567: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[261]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4812,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:575: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,C_make_character(41));}}

/* k4810 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4812,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4815,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:578: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,((C_word*)t0)[3],C_make_character(59));}
else{
/* c-backend.scm:577: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[262]);}}

/* k4813 in k4810 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:578: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k4784 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4786,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[6],lf[254]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4795,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:570: gen */
t4=*((C_word*)lf[1]+1);
f_2252(10,t4,t3,C_SCHEME_TRUE,lf[257],((C_word*)t0)[2],lf[258],C_SCHEME_TRUE,lf[259],((C_word*)t0)[2],lf[260]);}}

/* k4793 in k4784 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4795,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4798,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k4796 in k4793 in k4784 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4757 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4798,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:573: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,((C_word*)t0)[2],lf[255],t2,lf[256]);}

/* g636 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_fcall f_4741(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4741,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greater_or_equalp(t2,*((C_word*)lf[251]+1)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4752,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_plus(&a,2,t2,C_fix(1));
/* c-backend.scm:545: lset-adjoin */
t5=*((C_word*)lf[252]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,*((C_word*)lf[253]+1),((C_word*)((C_word*)t0)[2])[1],t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4750 in g636 in k4738 in k4735 in k4732 in k4729 in k4726 in k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in g614 in k4703 in prototypes */
static void C_ccall f_4752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* declarations */
static void C_fcall f_4527(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4527,NULL,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4534,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:498: gen */
t4=*((C_word*)lf[1]+1);
f_2252(5,t4,t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[250]);}

/* k4532 in declarations */
static void C_ccall f_4534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4534,2,t0,t1);}
t2=*((C_word*)lf[220]+1);
t3=C_i_check_list_2(t2,lf[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4678,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_4678(t8,t4,t2);}

/* for-each-loop570 in k4532 in declarations */
static void C_fcall f_4678(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4678,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4688,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:501: gen */
t5=*((C_word*)lf[1]+1);
f_2252(10,t5,t3,C_SCHEME_TRUE,lf[246],t4,lf[247],C_SCHEME_TRUE,lf[248],t4,lf[249]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4686 in for-each-loop570 in k4532 in declarations */
static void C_ccall f_4688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4678(t3,((C_word*)t0)[2],t2);}

/* k4543 in k4532 in declarations */
static void C_ccall f_4545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4548,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_zerop(((C_word*)t0)[2]))){
t3=t2;
f_4548(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:505: gen */
t3=*((C_word*)lf[1]+1);
f_2252(7,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[244],((C_word*)t0)[2],lf[245]);}}

/* k4546 in k4543 in k4532 in declarations */
static void C_ccall f_4548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4548,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:506: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,C_SCHEME_TRUE,lf[243]);}

/* k4549 in k4546 in k4543 in k4532 in declarations */
static void C_ccall f_4551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4551,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4556,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4556(t5,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* doloop585 in k4549 in k4546 in k4543 in k4532 in declarations */
static void C_fcall f_4556(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4556,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4566,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
/* c-backend.scm:510: ##sys#lambda-info->string */
t6=*((C_word*)lf[242]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}

/* k4564 in doloop585 in k4549 in k4546 in k4543 in k4532 in declarations */
static void C_ccall f_4566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4566,2,t0,t1);}
t2=C_i_string_length(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4572,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=C_a_i_arithmetic_shift(&a,2,t2,C_fix(-16));
t5=C_a_i_arithmetic_shift(&a,2,t2,C_fix(-8));
t6=C_a_i_bitwise_and(&a,2,C_fix(255),t5);
t7=C_a_i_bitwise_and(&a,2,C_fix(255),t2);
/* c-backend.scm:512: gen */
t8=*((C_word*)lf[1]+1);
f_2252(12,t8,t3,C_SCHEME_TRUE,lf[240],((C_word*)t0)[5],lf[241],t4,C_make_character(44),t6,C_make_character(44),t7,C_make_character(41));}

/* k4570 in k4564 in doloop585 in k4549 in k4546 in k4543 in k4532 in declarations */
static void C_ccall f_4572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4572,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4575,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4625,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4625(t6,t2,C_fix(0));}

/* doloop591 in k4570 in k4564 in doloop585 in k4549 in k4546 in k4543 in k4532 in declarations */
static void C_fcall f_4625(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4625,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[4]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4635,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_string_ref(((C_word*)t0)[2],t2);
t5=C_fix(C_character_code(t4));
/* c-backend.scm:519: gen */
t6=*((C_word*)lf[1]+1);
f_2252(4,t6,t3,C_make_character(44),t5);}}

/* k4633 in doloop591 in k4570 in k4564 in doloop585 in k4549 in k4546 in k4543 in k4532 in declarations */
static void C_ccall f_4635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4635,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4625(t3,((C_word*)t0)[2],t2);}

/* k4573 in k4570 in k4564 in doloop585 in k4549 in k4546 in k4543 in k4532 in declarations */
static void C_ccall f_4575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4578,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(7));
t4=C_a_i_bitwise_and(&a,2,C_fix(16777208),t3);
t5=C_a_i_minus(&a,2,t4,((C_word*)t0)[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4598,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_4598(t9,t2,t5);}

/* doloop596 in k4573 in k4570 in k4564 in doloop585 in k4549 in k4546 in k4543 in k4532 in declarations */
static void C_fcall f_4598(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4598,NULL,3,t0,t1,t2);}
if(C_truep(C_i_zerop(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4608,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:522: gen */
t4=*((C_word*)lf[1]+1);
f_2252(3,t4,t3,lf[239]);}}

/* k4606 in doloop596 in k4573 in k4570 in k4564 in doloop585 in k4549 in k4546 in k4543 in k4532 in declarations */
static void C_ccall f_4608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4608,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4598(t3,((C_word*)t0)[2],t2);}

/* k4576 in k4573 in k4570 in k4564 in doloop585 in k4549 in k4546 in k4543 in k4532 in declarations */
static void C_ccall f_4578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4578,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:523: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[238]);}

/* k4579 in k4576 in k4573 in k4570 in k4564 in doloop585 in k4549 in k4546 in k4543 in k4532 in declarations */
static void C_ccall f_4581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4581,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1));
t3=C_i_cdr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_4556(t4,((C_word*)t0)[2],t2,t3);}

/* header */
static void C_fcall f_4319(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4319,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4322,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4339,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4519,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:464: current-seconds */
t5=*((C_word*)lf[237]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k4517 in header */
static void C_ccall f_4519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:464: ##sys#decode-seconds */
t2=*((C_word*)lf[236]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* k4337 in header */
static void C_ccall f_4339(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4339,2,t0,t1);}
t2=C_i_vector_ref(t1,C_fix(1));
t3=C_i_vector_ref(t1,C_fix(2));
t4=C_i_vector_ref(t1,C_fix(3));
t5=C_i_vector_ref(t1,C_fix(4));
t6=C_i_vector_ref(t1,C_fix(5));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4357,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t8=C_a_i_plus(&a,2,C_fix(1900),t6);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4441,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t8,a[7]=((C_word*)t0)[3],a[8]=t7,tmp=(C_word)a,a+=9,tmp);
t10=C_a_i_plus(&a,2,t5,C_fix(1));
/* c-backend.scm:472: pad0 */
f_4322(t9,t10);}

/* k4439 in k4337 in header */
static void C_ccall f_4441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4441,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4445,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:472: pad0 */
f_4322(t2,((C_word*)t0)[2]);}

/* k4443 in k4439 in k4337 in header */
static void C_ccall f_4445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4445,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4449,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:472: pad0 */
f_4322(t2,((C_word*)t0)[2]);}

/* k4447 in k4443 in k4439 in k4337 in header */
static void C_ccall f_4449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4449,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4453,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:472: pad0 */
f_4322(t2,((C_word*)t0)[2]);}

/* k4451 in k4447 in k4443 in k4439 in k4337 in header */
static void C_ccall f_4453(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4453,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4457,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4466,a[2]=t4,a[3]=t6,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4511,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:475: chicken-version */
t9=*((C_word*)lf[235]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,C_SCHEME_TRUE);}

/* k4509 in k4451 in k4447 in k4443 in k4439 in k4337 in header */
static void C_ccall f_4511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:475: string-split */
t2=*((C_word*)lf[233]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[234]);}

/* k4464 in k4451 in k4447 in k4443 in k4439 in k4337 in header */
static void C_ccall f_4466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4466,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[228]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4472,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4474,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4474(t7,t3,t1);}

/* map-loop505 in k4464 in k4451 in k4447 in k4443 in k4439 in k4337 in header */
static void C_fcall f_4474(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4474,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4503,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[113]+1);
/* g528529 */
t6=t5;
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,lf[231],t4,lf[232]);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4501 in map-loop505 in k4464 in k4451 in k4447 in k4443 in k4439 in k4337 in header */
static void C_ccall f_4503(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4503,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4474(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4474(t6,((C_word*)t0)[3],t5);}}

/* k4470 in k4464 in k4451 in k4447 in k4443 in k4439 in k4337 in header */
static void C_ccall f_4472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:473: string-intersperse */
t2=*((C_word*)lf[229]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[230]);}

/* k4455 in k4451 in k4447 in k4443 in k4439 in k4337 in header */
static void C_ccall f_4457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:470: gen */
t2=*((C_word*)lf[1]+1);
f_2252(21,t2,((C_word*)t0)[8],lf[223],((C_word*)t0)[7],lf[224],C_SCHEME_TRUE,lf[225],C_SCHEME_TRUE,lf[226],((C_word*)t0)[6],C_make_character(45),((C_word*)t0)[5],C_make_character(45),((C_word*)t0)[4],C_make_character(32),((C_word*)t0)[3],C_make_character(58),((C_word*)t0)[2],C_SCHEME_TRUE,t1,lf[227]);}

/* k4355 in k4337 in header */
static void C_ccall f_4357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4360,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:478: gen-list */
t3=*((C_word*)lf[5]+1);
f_2298(3,t3,t2,*((C_word*)lf[222]+1));}

/* k4358 in k4355 in k4337 in header */
static void C_ccall f_4360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4360,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4363,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:479: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,C_SCHEME_TRUE);}

/* k4361 in k4358 in k4355 in k4337 in header */
static void C_ccall f_4363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4363,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4366,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[218]+1))){
/* c-backend.scm:480: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,lf[219],*((C_word*)lf[218]+1));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4430,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:482: gen */
t4=*((C_word*)lf[1]+1);
f_2252(3,t4,t3,lf[221]);}}

/* k4428 in k4361 in k4358 in k4355 in k4337 in header */
static void C_ccall f_4430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:483: gen-list */
t2=*((C_word*)lf[5]+1);
f_2298(3,t2,((C_word*)t0)[2],*((C_word*)lf[220]+1));}

/* k4364 in k4361 in k4358 in k4355 in k4337 in header */
static void C_ccall f_4366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4369,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:484: gen */
t3=*((C_word*)lf[1]+1);
f_2252(9,t3,t2,C_SCHEME_TRUE,lf[214],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[215],*((C_word*)lf[216]+1),lf[217]);}

/* k4367 in k4364 in k4361 in k4358 in k4355 in k4337 in header */
static void C_ccall f_4369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4369,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4372,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[210]+1))){
/* c-backend.scm:486: generate-foreign-callback-stub-prototypes */
t3=*((C_word*)lf[211]+1);
f_7024(3,t3,t2,*((C_word*)lf[212]+1));}
else{
t3=t2;
f_4372(2,t3,C_SCHEME_UNDEFINED);}}

/* k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4337 in header */
static void C_ccall f_4372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4372,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4375,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(*((C_word*)lf[213]+1)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4387,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:488: gen */
t4=*((C_word*)lf[1]+1);
f_2252(3,t4,t3,C_SCHEME_TRUE);}
else{
if(C_truep(*((C_word*)lf[210]+1))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* c-backend.scm:491: generate-foreign-callback-stub-prototypes */
t3=*((C_word*)lf[211]+1);
f_7024(3,t3,((C_word*)t0)[2],*((C_word*)lf[212]+1));}}}

/* k4385 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4337 in header */
static void C_ccall f_4387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4387,2,t0,t1);}
t2=*((C_word*)lf[213]+1);
t3=C_i_check_list_2(t2,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4400,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4400(t7,((C_word*)t0)[2],t2);}

/* for-each-loop543 in k4385 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4337 in header */
static void C_fcall f_4400(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4400,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4410,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:489: gen */
t5=*((C_word*)lf[1]+1);
f_2252(4,t5,t3,C_SCHEME_TRUE,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4408 in for-each-loop543 in k4385 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4337 in header */
static void C_ccall f_4410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4400(t3,((C_word*)t0)[2],t2);}

/* k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4337 in header */
static void C_ccall f_4375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(*((C_word*)lf[210]+1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* c-backend.scm:491: generate-foreign-callback-stub-prototypes */
t2=*((C_word*)lf[211]+1);
f_7024(3,t2,((C_word*)t0)[2],*((C_word*)lf[212]+1));}}

/* pad0 in header */
static void C_fcall f_4322(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4322,NULL,2,t1,t2);}
if(C_truep(C_i_lessp(t2,C_fix(10)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4336,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:462: number->string */
C_number_to_string(3,0,t3,t2);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4334 in pad0 in header */
static void C_ccall f_4336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:462: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[209],t1);}

/* expression */
static void C_fcall f_2387(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2387,NULL,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2390,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t8,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4287,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
/* c-backend.scm:457: expr */
t11=((C_word*)t6)[1];
f_2390(t11,t1,t2,t3);}

/* expr-args in expression */
static void C_fcall f_4287(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4287,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4293,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:451: pair-for-each */
t5=*((C_word*)lf[208]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t2);}

/* a4292 in expr-args in expression */
static void C_ccall f_4293(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4293,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4297,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t4)){
t5=C_i_car(t2);
/* c-backend.scm:454: expr */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2390(t6,t1,t5,((C_word*)t0)[3]);}
else{
/* c-backend.scm:453: gen */
t5=*((C_word*)lf[1]+1);
f_2252(3,t5,t3,C_make_character(44));}}

/* k4295 in a4292 in expr-args in expression */
static void C_ccall f_4297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[5]);
/* c-backend.scm:454: expr */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2390(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* expr in expression */
static void C_fcall f_2390(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t113;
C_word t114;
C_word t115;
C_word t116;
C_word t117;
C_word t118;
C_word t119;
C_word t120;
C_word t121;
C_word t122;
C_word t123;
C_word t124;
C_word t125;
C_word t126;
C_word t127;
C_word t128;
C_word t129;
C_word t130;
C_word t131;
C_word t132;
C_word t133;
C_word t134;
C_word t135;
C_word t136;
C_word t137;
C_word t138;
C_word t139;
C_word t140;
C_word t141;
C_word t142;
C_word t143;
C_word t144;
C_word t145;
C_word t146;
C_word t147;
C_word t148;
C_word t149;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2390,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_slot(t4,C_fix(3));
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=t2;
t9=C_slot(t8,C_fix(1));
t10=C_eqp(t9,lf[13]);
if(C_truep(t10)){
t11=C_i_car(t7);
t12=C_eqp(t11,lf[14]);
if(C_truep(t12)){
if(C_truep(C_i_cadr(t7))){
/* c-backend.scm:84: gen */
t13=*((C_word*)lf[1]+1);
f_2252(3,t13,t1,lf[15]);}
else{
/* c-backend.scm:84: gen */
t13=*((C_word*)lf[1]+1);
f_2252(3,t13,t1,lf[16]);}}
else{
t13=C_eqp(t11,lf[17]);
if(C_truep(t13)){
t14=C_i_cadr(t7);
t15=C_fix(C_character_code(t14));
/* c-backend.scm:85: gen */
t16=*((C_word*)lf[1]+1);
f_2252(5,t16,t1,lf[18],t15,C_make_character(41));}
else{
t14=C_eqp(t11,lf[19]);
if(C_truep(t14)){
/* c-backend.scm:86: gen */
t15=*((C_word*)lf[1]+1);
f_2252(3,t15,t1,lf[20]);}
else{
t15=C_eqp(t11,lf[21]);
if(C_truep(t15)){
t16=C_i_cadr(t7);
/* c-backend.scm:87: gen */
t17=*((C_word*)lf[1]+1);
f_2252(5,t17,t1,lf[22],t16,C_make_character(41));}
else{
t16=C_eqp(t11,lf[23]);
if(C_truep(t16)){
/* c-backend.scm:88: gen */
t17=*((C_word*)lf[1]+1);
f_2252(3,t17,t1,lf[24]);}
else{
/* c-backend.scm:89: bomb */
t17=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t1,lf[25]);}}}}}}
else{
t11=C_eqp(t9,lf[26]);
if(C_truep(t11)){
t12=C_i_car(t7);
if(C_truep(C_i_vectorp(t12))){
t13=C_i_vector_ref(t12,C_fix(0));
/* c-backend.scm:94: gen */
t14=*((C_word*)lf[1]+1);
f_2252(5,t14,t1,lf[27],t13,lf[28]);}
else{
t13=C_i_car(t7);
/* c-backend.scm:95: gen */
t14=*((C_word*)lf[1]+1);
f_2252(5,t14,t1,lf[29],t13,C_make_character(93));}}
else{
t12=C_eqp(t9,lf[30]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2529,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:98: gen */
t14=*((C_word*)lf[1]+1);
f_2252(4,t14,t13,C_SCHEME_TRUE,lf[33]);}
else{
t13=C_eqp(t9,lf[34]);
if(C_truep(t13)){
t14=C_i_car(t7);
/* c-backend.scm:107: gen */
t15=*((C_word*)lf[1]+1);
f_2252(4,t15,t1,lf[35],t14);}
else{
t14=C_eqp(t9,lf[36]);
if(C_truep(t14)){
t15=C_i_car(t7);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2587,a[2]=((C_word*)t0)[5],a[3]=t17,tmp=(C_word)a,a+=4,tmp));
t19=((C_word*)t17)[1];
f_2587(t19,t1,t5,t3,t15);}
else{
t15=C_eqp(t9,lf[37]);
if(C_truep(t15)){
t16=C_i_car(t7);
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2641,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:120: gen */
t18=*((C_word*)lf[1]+1);
f_2252(5,t18,t17,C_SCHEME_TRUE,t16,C_make_character(61));}
else{
t16=C_eqp(t9,lf[38]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2667,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:126: gen */
t18=*((C_word*)lf[1]+1);
f_2252(3,t18,t17,lf[40]);}
else{
t17=C_eqp(t9,lf[41]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2694,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:131: gen */
t19=*((C_word*)lf[1]+1);
f_2252(3,t19,t18,lf[43]);}
else{
t18=C_eqp(t9,lf[44]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2713,a[2]=t7,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:136: gen */
t20=*((C_word*)lf[1]+1);
f_2252(3,t20,t19,lf[45]);}
else{
t19=C_eqp(t9,lf[46]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2746,a[2]=t7,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:143: gen */
t21=*((C_word*)lf[1]+1);
f_2252(3,t21,t20,lf[49]);}
else{
t20=C_eqp(t9,lf[50]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2783,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:150: gen */
t22=*((C_word*)lf[1]+1);
f_2252(3,t22,t21,lf[52]);}
else{
t21=C_eqp(t9,lf[53]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2812,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:157: gen */
t23=*((C_word*)lf[1]+1);
f_2252(3,t23,t22,lf[55]);}
else{
t22=C_eqp(t9,lf[56]);
if(C_truep(t22)){
t23=C_i_car(t7);
t24=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2844,a[2]=t1,a[3]=t23,a[4]=t5,a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:165: gen */
t25=*((C_word*)lf[1]+1);
f_2252(5,t25,t24,lf[62],t23,C_make_character(44));}
else{
t23=C_eqp(t9,lf[63]);
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2920,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:175: gen */
t25=*((C_word*)lf[1]+1);
f_2252(3,t25,t24,lf[65]);}
else{
t24=C_eqp(t9,lf[66]);
if(C_truep(t24)){
t25=C_i_car(t7);
/* c-backend.scm:179: gen */
t26=*((C_word*)lf[1]+1);
f_2252(4,t26,t1,C_make_character(116),t25);}
else{
t25=C_eqp(t9,lf[67]);
if(C_truep(t25)){
t26=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2952,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t27=C_i_car(t7);
/* c-backend.scm:182: gen */
t28=*((C_word*)lf[1]+1);
f_2252(5,t28,t26,C_make_character(116),t27,C_make_character(61));}
else{
t26=C_eqp(t9,lf[68]);
if(C_truep(t26)){
t27=C_i_car(t7);
t28=C_i_cadr(t7);
if(C_truep(C_i_caddr(t7))){
if(C_truep(t28)){
/* c-backend.scm:191: gen */
t29=*((C_word*)lf[1]+1);
f_2252(5,t29,t1,lf[69],t27,lf[70]);}
else{
t29=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2994,a[2]=t27,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t30=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2998,a[2]=t29,tmp=(C_word)a,a+=3,tmp);
t31=C_i_cadddr(t7);
/* c-backend.scm:192: symbol->string */
t32=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t32+1)))(3,t32,t30,t31);}}
else{
if(C_truep(t28)){
/* c-backend.scm:193: gen */
t29=*((C_word*)lf[1]+1);
f_2252(5,t29,t1,lf[75],t27,lf[76]);}
else{
/* c-backend.scm:194: gen */
t29=*((C_word*)lf[1]+1);
f_2252(5,t29,t1,lf[77],t27,lf[78]);}}}
else{
t27=C_eqp(t9,lf[79]);
if(C_truep(t27)){
t28=C_i_car(t7);
t29=C_i_cadr(t7);
t30=C_i_caddr(t7);
t31=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3029,a[2]=t30,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t29)){
/* c-backend.scm:201: gen */
t32=*((C_word*)lf[1]+1);
f_2252(5,t32,t31,lf[86],t28,lf[87]);}
else{
/* c-backend.scm:202: gen */
t32=*((C_word*)lf[1]+1);
f_2252(5,t32,t31,lf[88],t28,lf[89]);}}
else{
t28=C_eqp(t9,lf[90]);
if(C_truep(t28)){
t29=C_i_car(t7);
t30=C_i_cadr(t7);
t31=C_i_caddr(t7);
if(C_truep(t30)){
t32=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3077,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t33=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3091,a[2]=t29,a[3]=t32,tmp=(C_word)a,a+=4,tmp);
t34=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3095,a[2]=t33,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:213: symbol->string */
t35=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t35+1)))(3,t35,t34,t31);}
else{
t32=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3098,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t33=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3112,a[2]=t29,a[3]=t32,tmp=(C_word)a,a+=4,tmp);
t34=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3116,a[2]=t33,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:218: symbol->string */
t35=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t35+1)))(3,t35,t34,t31);}}
else{
t29=C_eqp(t9,lf[97]);
if(C_truep(t29)){
/* c-backend.scm:222: gen */
t30=*((C_word*)lf[1]+1);
f_2252(3,t30,t1,lf[98]);}
else{
t30=C_eqp(t9,lf[99]);
if(C_truep(t30)){
t31=C_i_cdr(t5);
t32=C_i_length(t31);
t33=t3;
t34=C_a_i_plus(&a,2,t32,C_fix(1));
t35=C_i_cdr(t7);
t36=C_i_pairp(t35);
t37=(C_truep(t36)?C_i_cadr(t7):C_SCHEME_FALSE);
t38=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3149,a[2]=t36,a[3]=((C_word*)t0)[2],a[4]=t37,a[5]=t33,a[6]=((C_word*)t0)[3],a[7]=t32,a[8]=((C_word*)t0)[5],a[9]=t34,a[10]=t3,a[11]=t31,a[12]=((C_word*)t0)[4],a[13]=t1,a[14]=t5,a[15]=t7,tmp=(C_word)a,a+=16,tmp);
/* c-backend.scm:231: source-info->string */
t39=*((C_word*)lf[154]+1);
((C_proc3)(void*)(*((C_word*)t39+1)))(3,t39,t38,t37);}
else{
t31=C_eqp(t9,lf[155]);
if(C_truep(t31)){
t32=C_i_length(t5);
t33=C_a_i_plus(&a,2,t32,C_fix(1));
t34=C_i_car(t7);
t35=C_i_cadr(t7);
t36=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3783,a[2]=t35,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t33,a[6]=t32,a[7]=t1,a[8]=t5,a[9]=t3,a[10]=((C_word*)t0)[5],a[11]=t34,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:321: lambda-literal-closure-size */
t37=*((C_word*)lf[153]+1);
((C_proc3)(void*)(*((C_word*)t37+1)))(3,t37,t36,((C_word*)t0)[3]);}
else{
t32=C_eqp(t9,lf[159]);
if(C_truep(t32)){
t33=C_i_cdr(t5);
t34=C_i_length(t33);
t35=C_a_i_plus(&a,2,t34,C_fix(1));
t36=C_i_caddr(t7);
t37=C_i_cadddr(t7);
t38=C_i_zerop(t37);
t39=C_i_not(t38);
t40=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3868,a[2]=t36,a[3]=t37,a[4]=t39,a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=t33,a[9]=t1,a[10]=t5,tmp=(C_word)a,a+=11,tmp);
t41=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3872,a[2]=t40,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:349: find-lambda */
t42=((C_word*)((C_word*)t0)[2])[1];
f_2345(t42,t41,t36);}
else{
t33=C_eqp(t9,lf[161]);
if(C_truep(t33)){
t34=C_i_length(t5);
t35=C_a_i_plus(&a,2,t34,C_fix(1));
t36=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3891,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t37=C_i_car(t7);
/* c-backend.scm:366: gen */
t38=*((C_word*)lf[1]+1);
f_2252(8,t38,t36,C_SCHEME_TRUE,lf[163],t37,lf[164],t35,lf[165]);}
else{
t34=C_eqp(t9,lf[166]);
if(C_truep(t34)){
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3910,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:371: gen */
t36=*((C_word*)lf[1]+1);
f_2252(4,t36,t35,C_SCHEME_TRUE,lf[168]);}
else{
t35=C_eqp(t9,lf[169]);
if(C_truep(t35)){
t36=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3929,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t37=C_i_car(t7);
/* c-backend.scm:376: gen */
t38=*((C_word*)lf[1]+1);
f_2252(4,t38,t36,t37,C_make_character(40));}
else{
t36=C_eqp(t9,lf[170]);
if(C_truep(t36)){
t37=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3948,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t38=C_i_car(t7);
t39=C_i_length(t5);
/* c-backend.scm:381: gen */
t40=*((C_word*)lf[1]+1);
f_2252(5,t40,t37,t38,lf[171],t39);}
else{
t37=C_eqp(t9,lf[172]);
if(C_truep(t37)){
t38=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3984,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t39=C_i_cadr(t7);
/* c-backend.scm:389: foreign-result-conversion */
t40=*((C_word*)lf[173]+1);
f_9376(4,t40,t38,t39,lf[174]);}
else{
t38=C_eqp(t9,lf[175]);
if(C_truep(t38)){
t39=C_i_cadr(t7);
t40=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4004,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t41=C_i_car(t7);
t42=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4022,a[2]=t39,a[3]=t41,a[4]=t40,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:393: foreign-type-declaration */
t43=*((C_word*)lf[179]+1);
f_7972(4,t43,t42,t39,lf[180]);}
else{
t39=C_eqp(t9,lf[181]);
if(C_truep(t39)){
t40=C_i_car(t7);
t41=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4038,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t42=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4052,a[2]=t40,a[3]=t41,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:399: foreign-result-conversion */
t43=*((C_word*)lf[173]+1);
f_9376(4,t43,t42,t40,lf[186]);}
else{
t40=C_eqp(t9,lf[187]);
if(C_truep(t40)){
t41=C_i_car(t7);
t42=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4068,a[2]=t41,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t43=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4096,a[2]=t42,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:405: foreign-type-declaration */
t44=*((C_word*)lf[179]+1);
f_7972(4,t44,t43,t41,lf[192]);}
else{
t41=C_eqp(t9,lf[193]);
if(C_truep(t41)){
t42=C_i_car(t7);
/* c-backend.scm:412: gen */
t43=*((C_word*)lf[1]+1);
f_2252(3,t43,t1,t42);}
else{
t42=C_eqp(t9,lf[194]);
if(C_truep(t42)){
t43=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4118,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t44=C_i_car(t7);
/* c-backend.scm:415: gen */
t45=*((C_word*)lf[1]+1);
f_2252(5,t45,t43,lf[196],t44,C_make_character(61));}
else{
t43=C_eqp(t9,lf[197]);
if(C_truep(t43)){
t44=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4141,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t45=C_i_car(t7);
/* c-backend.scm:420: gen */
t46=*((C_word*)lf[1]+1);
f_2252(4,t46,t44,t45,lf[198]);}
else{
t44=C_eqp(t9,lf[199]);
if(C_truep(t44)){
t45=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4160,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:425: gen */
t46=*((C_word*)lf[1]+1);
f_2252(4,t46,t45,C_SCHEME_TRUE,lf[203]);}
else{
t45=C_eqp(t9,lf[204]);
if(C_truep(t45)){
t46=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4243,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:440: gen */
t47=*((C_word*)lf[1]+1);
f_2252(3,t47,t46,lf[206]);}
else{
t46=t2;
t47=C_slot(t46,C_fix(1));
/* c-backend.scm:448: bomb */
t48=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t48+1)))(4,t48,t1,lf[207],t47);}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k4241 in expr in expression */
static void C_ccall f_4243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4243,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:441: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k4244 in k4241 in expr in expression */
static void C_ccall f_4246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4246,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:442: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[205]);}

/* k4247 in k4244 in k4241 in expr in expression */
static void C_ccall f_4249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4249,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4252,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:443: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k4250 in k4247 in k4244 in k4241 in expr in expression */
static void C_ccall f_4252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4252,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:444: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,C_make_character(58));}

/* k4253 in k4250 in k4247 in k4244 in k4241 in expr in expression */
static void C_ccall f_4255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4255,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4258,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_caddr(((C_word*)t0)[4]);
/* c-backend.scm:445: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in expr in expression */
static void C_ccall f_4258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:446: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k4158 in expr in expression */
static void C_ccall f_4160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4160,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[5]);
/* c-backend.scm:426: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2390(t4,t2,t3,((C_word*)t0)[3]);}

/* k4161 in k4158 in expr in expression */
static void C_ccall f_4163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4163,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:427: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[202]);}

/* k4164 in k4161 in k4158 in expr in expression */
static void C_ccall f_4166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4166,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[6]);
t3=C_i_cdr(((C_word*)t0)[5]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4179,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4179(t7,((C_word*)t0)[2],t2,t3);}

/* doloop466 in k4164 in k4161 in k4158 in expr in expression */
static void C_fcall f_4179(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4179,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_zerop(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4189,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:431: gen */
t5=*((C_word*)lf[1]+1);
f_2252(4,t5,t4,C_SCHEME_TRUE,lf[200]);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4202,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:434: gen */
t5=*((C_word*)lf[1]+1);
f_2252(4,t5,t4,C_SCHEME_TRUE,lf[201]);}}

/* k4200 in doloop466 in k4164 in k4161 in k4158 in expr in expression */
static void C_ccall f_4202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4202,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_car(((C_word*)t0)[6]);
/* c-backend.scm:435: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k4203 in k4200 in doloop466 in k4164 in k4161 in k4158 in expr in expression */
static void C_ccall f_4205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4205,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4208,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:436: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,C_make_character(58));}

/* k4206 in k4203 in k4200 in doloop466 in k4164 in k4161 in k4158 in expr in expression */
static void C_ccall f_4208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4211,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[6]);
/* c-backend.scm:437: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k4209 in k4206 in k4203 in k4200 in doloop466 in k4164 in k4161 in k4158 in expr in expression */
static void C_ccall f_4211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4211,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[5],C_fix(1));
t3=C_i_cddr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_4179(t4,((C_word*)t0)[2],t2,t3);}

/* k4187 in doloop466 in k4164 in k4161 in k4158 in expr in expression */
static void C_ccall f_4189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4189,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4192,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:432: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k4190 in k4187 in doloop466 in k4164 in k4161 in k4158 in expr in expression */
static void C_ccall f_4192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:433: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(125));}

/* k4139 in expr in expression */
static void C_ccall f_4141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4141,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4144,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:421: expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4287(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4142 in k4139 in expr in expression */
static void C_ccall f_4144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:422: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k4116 in expr in expression */
static void C_ccall f_4118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4118,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4121,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:416: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k4119 in k4116 in expr in expression */
static void C_ccall f_4121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:417: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[195]);}

/* k4094 in expr in expression */
static void C_ccall f_4096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:405: gen */
t2=*((C_word*)lf[1]+1);
f_2252(5,t2,((C_word*)t0)[2],lf[190],t1,lf[191]);}

/* k4066 in expr in expression */
static void C_ccall f_4068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4068,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[5]);
/* c-backend.scm:406: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2390(t4,t2,t3,((C_word*)t0)[3]);}

/* k4069 in k4066 in expr in expression */
static void C_ccall f_4071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4071,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4074,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4088,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:407: foreign-argument-conversion */
t4=*((C_word*)lf[178]+1);
f_8898(3,t4,t3,((C_word*)t0)[2]);}

/* k4086 in k4069 in k4066 in expr in expression */
static void C_ccall f_4088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:407: gen */
t2=*((C_word*)lf[1]+1);
f_2252(4,t2,((C_word*)t0)[2],lf[189],t1);}

/* k4072 in k4069 in k4066 in expr in expression */
static void C_ccall f_4074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4074,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4077,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:408: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k4075 in k4072 in k4069 in k4066 in expr in expression */
static void C_ccall f_4077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:409: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[188]);}

/* k4050 in expr in expression */
static void C_ccall f_4052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4052,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4056,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:399: foreign-type-declaration */
t3=*((C_word*)lf[179]+1);
f_7972(4,t3,t2,((C_word*)t0)[2],lf[185]);}

/* k4054 in k4050 in expr in expression */
static void C_ccall f_4056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:399: gen */
t2=*((C_word*)lf[1]+1);
f_2252(6,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[183],t1,lf[184]);}

/* k4036 in expr in expression */
static void C_ccall f_4038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4038,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4041,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:400: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k4039 in k4036 in expr in expression */
static void C_ccall f_4041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:401: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[182]);}

/* k4020 in expr in expression */
static void C_ccall f_4022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4022,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4026,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:393: foreign-argument-conversion */
t3=*((C_word*)lf[178]+1);
f_8898(3,t3,t2,((C_word*)t0)[2]);}

/* k4024 in k4020 in expr in expression */
static void C_ccall f_4026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:393: gen */
t2=*((C_word*)lf[1]+1);
f_2252(8,t2,((C_word*)t0)[4],C_make_character(40),((C_word*)t0)[3],lf[177],((C_word*)t0)[2],C_make_character(41),t1);}

/* k4002 in expr in expression */
static void C_ccall f_4004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4004,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4007,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:394: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k4005 in k4002 in expr in expression */
static void C_ccall f_4007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:395: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[176]);}

/* k3982 in expr in expression */
static void C_ccall f_3984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:389: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,((C_word*)t0)[2],t1,t2,C_make_character(41));}

/* k3946 in expr in expression */
static void C_ccall f_3948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3951,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3960,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:384: gen */
t4=*((C_word*)lf[1]+1);
f_2252(3,t4,t3,C_make_character(44));}
else{
/* c-backend.scm:386: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,((C_word*)t0)[5],C_make_character(41));}}

/* k3958 in k3946 in expr in expression */
static void C_ccall f_3960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:385: expr-args */
t2=((C_word*)((C_word*)t0)[5])[1];
f_4287(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3949 in k3946 in expr in expression */
static void C_ccall f_3951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:386: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3927 in expr in expression */
static void C_ccall f_3929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3929,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3932,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:377: expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4287(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3930 in k3927 in expr in expression */
static void C_ccall f_3932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:378: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3908 in expr in expression */
static void C_ccall f_3910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3910,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3913,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:372: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k3911 in k3908 in expr in expression */
static void C_ccall f_3913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:373: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[167]);}

/* k3889 in expr in expression */
static void C_ccall f_3891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3891,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3894,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:367: expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4287(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3892 in k3889 in expr in expression */
static void C_ccall f_3894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:368: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[162]);}

/* k3870 in expr in expression */
static void C_ccall f_3872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:349: lambda-literal-closure-size */
t2=*((C_word*)lf[153]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3866 in expr in expression */
static void C_ccall f_3868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3868,2,t0,t1);}
t2=C_i_zerop(t1);
t3=C_i_car(((C_word*)t0)[10]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3816,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:351: gen */
t5=*((C_word*)lf[1]+1);
f_2252(4,t5,t4,((C_word*)t0)[2],C_make_character(40));}

/* k3814 in k3866 in expr in expression */
static void C_ccall f_3816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3816,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3819,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3849,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:353: gen */
t4=*((C_word*)lf[1]+1);
f_2252(5,t4,t3,lf[160],((C_word*)t0)[2],C_make_character(41));}
else{
t3=t2;
f_3819(2,t3,C_SCHEME_UNDEFINED);}}

/* k3847 in k3814 in k3866 in expr in expression */
static void C_ccall f_3849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_not(((C_word*)t0)[4]);
if(C_truep(t2)){
if(C_truep(t2)){
/* c-backend.scm:354: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,((C_word*)t0)[3],C_make_character(44));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_3819(2,t4,t3);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* c-backend.scm:354: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,((C_word*)t0)[3],C_make_character(44));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_3819(2,t4,t3);}}}

/* k3817 in k3814 in k3866 in expr in expression */
static void C_ccall f_3819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3819,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3822,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=t2;
f_3822(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3837,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:356: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t3,((C_word*)t0)[2],((C_word*)t0)[5]);}}

/* k3835 in k3817 in k3814 in k3866 in expr in expression */
static void C_ccall f_3837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
/* c-backend.scm:357: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(44));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_3822(2,t3,t2);}}

/* k3820 in k3817 in k3814 in k3866 in expr in expression */
static void C_ccall f_3822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3822,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3825,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
/* c-backend.scm:358: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4287(t3,t2,((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
/* c-backend.scm:359: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,((C_word*)t0)[5],C_make_character(41));}}

/* k3823 in k3820 in k3817 in k3814 in k3866 in expr in expression */
static void C_ccall f_3825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:359: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3781 in expr in expression */
static void C_ccall f_3783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3783,2,t0,t1);}
t2=C_i_zerop(t1);
if(C_truep(((C_word*)t0)[11])){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3643,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:323: lambda-literal-temporaries */
t4=*((C_word*)lf[105]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3767,a[2]=t2,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:336: gen */
t4=*((C_word*)lf[1]+1);
f_2252(4,t4,t3,((C_word*)t0)[2],C_make_character(40));}}

/* k3765 in k3781 in expr in expression */
static void C_ccall f_3767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3770,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11159,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:338: expr-args */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4287(t4,t3,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
/* c-backend.scm:337: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[158]);}}

/* f11159 in k3765 in k3781 in expr in expression */
static void C_ccall f11159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:339: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3768 in k3765 in k3781 in expr in expression */
static void C_ccall f_3770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3770,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3773,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:338: expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4287(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3771 in k3768 in k3765 in k3781 in expr in expression */
static void C_ccall f_3773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:339: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3641 in k3781 in expr in expression */
static void C_ccall f_3643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3643,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3646,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_a_i_plus(&a,2,t1,((C_word*)t0)[2]);
/* c-backend.scm:324: iota */
t4=*((C_word*)lf[61]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[3],t3,C_fix(1));}

/* k3644 in k3641 in k3781 in expr in expression */
static void C_ccall f_3646(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3647,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[4],lf[2]);
t4=C_i_check_list_2(t1,lf[2]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3666,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3725,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3725(t9,t5,((C_word*)t0)[4],t1);}

/* for-each-loop372 in k3644 in k3641 in k3781 in expr in expression */
static void C_fcall f_3725(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3725,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3735,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g373380 */
t9=((C_word*)t0)[2];
f_3647(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3733 in for-each-loop372 in k3644 in k3641 in k3781 in expr in expression */
static void C_ccall f_3735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3725(t4,((C_word*)t0)[2],t2,t3);}

/* k3664 in k3644 in k3641 in k3781 in expr in expression */
static void C_ccall f_3666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3666,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3674,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:333: iota */
t3=*((C_word*)lf[61]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],C_fix(1),C_fix(1));}

/* k3672 in k3664 in k3644 in k3641 in k3781 in expr in expression */
static void C_ccall f_3674(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3674,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[3],lf[2]);
t3=C_i_check_list_2(t1,lf[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3683,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3688,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_3688(t8,t4,((C_word*)t0)[3],t1);}

/* for-each-loop397 in k3672 in k3664 in k3644 in k3641 in k3781 in expr in expression */
static void C_fcall f_3688(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3688,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3698,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:332: gen */
t9=*((C_word*)lf[1]+1);
f_2252(8,t9,t6,C_SCHEME_TRUE,C_make_character(116),t8,lf[157],t7,C_make_character(59));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3696 in for-each-loop397 in k3672 in k3664 in k3644 in k3641 in k3781 in expr in expression */
static void C_ccall f_3698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3688(t4,((C_word*)t0)[2],t2,t3);}

/* k3681 in k3672 in k3664 in k3644 in k3641 in k3781 in expr in expression */
static void C_ccall f_3683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:334: gen */
t2=*((C_word*)lf[1]+1);
f_2252(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[156]);}

/* g373 in k3644 in k3641 in k3781 in expr in expression */
static void C_fcall f_3647(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3647,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3651,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:327: gen */
t5=*((C_word*)lf[1]+1);
f_2252(6,t5,t4,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}

/* k3649 in g373 in k3644 in k3641 in k3781 in expr in expression */
static void C_ccall f_3651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3651,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3654,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:328: expr */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2390(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3652 in k3649 in g373 in k3644 in k3641 in k3781 in expr in expression */
static void C_ccall f_3654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:329: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k3147 in expr in expression */
static void C_ccall f_3149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3149,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3152,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_i_cddr(((C_word*)t0)[15]);
t4=C_i_pairp(t3);
t5=t2;
f_3152(t5,(C_truep(t4)?C_i_caddr(((C_word*)t0)[15]):C_SCHEME_FALSE));}
else{
t3=t2;
f_3152(t3,C_SCHEME_FALSE);}}

/* k3150 in k3147 in expr in expression */
static void C_fcall f_3152(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3152,NULL,2,t0,t1);}
t2=(C_truep(t1)?C_i_cadddr(((C_word*)t0)[15]):C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3158,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=t1,a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],tmp=(C_word)a,a+=17,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3589,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3593,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:234: find-lambda */
t6=((C_word*)((C_word*)t0)[2])[1];
f_2345(t6,t5,t1);}
else{
t4=t3;
f_3158(t4,C_SCHEME_FALSE);}}

/* k3591 in k3150 in k3147 in expr in expression */
static void C_ccall f_3593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:234: lambda-literal-closure-size */
t2=*((C_word*)lf[153]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3587 in k3150 in k3147 in expr in expression */
static void C_ccall f_3589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3158(t2,C_i_zerop(t1));}

/* k3156 in k3150 in k3147 in expr in expression */
static void C_fcall f_3158(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3158,NULL,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[16]);
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3164,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=t2,tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep(*((C_word*)lf[145]+1))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3575,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[2];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2375,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:71: ->string */
t7=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3582,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[2];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11151,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:72: ->string */
t7=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}}
else{
t4=t3;
f_3164(2,t4,C_SCHEME_UNDEFINED);}}

/* f11151 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f11151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:72: string-translate* */
t2=*((C_word*)lf[82]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[83]);}

/* k3580 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:239: gen */
t2=*((C_word*)lf[1]+1);
f_2252(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[151],t1,lf[152]);}

/* k2373 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_2375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:71: string-translate */
t2=*((C_word*)lf[148]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[149],lf[150]);}

/* k3573 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:238: gen */
t2=*((C_word*)lf[1]+1);
f_2252(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[146],t1,lf[147]);}

/* k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3164(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3164,2,t0,t1);}
t2=C_slot(((C_word*)t0)[15],C_fix(1));
t3=C_eqp(lf[34],t2);
if(C_truep(t3)){
t4=C_slot(((C_word*)t0)[15],C_fix(2));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3181,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[14],tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t4);
/* c-backend.scm:242: gen */
t7=*((C_word*)lf[1]+1);
f_2252(7,t7,t5,C_SCHEME_TRUE,t6,C_make_character(40),((C_word*)t0)[10],lf[101]);}
else{
if(C_truep(((C_word*)t0)[9])){
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3200,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[8],tmp=(C_word)a,a+=15,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3373,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:246: lambda-literal-id */
t6=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[5]);}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3379,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[15],tmp=(C_word)a,a+=11,tmp);
t5=C_slot(((C_word*)t0)[15],C_fix(1));
t6=C_eqp(lf[68],t5);
if(C_truep(t6)){
t7=*((C_word*)lf[137]+1);
if(C_truep(t7)){
t8=t4;
f_3379(t8,C_SCHEME_FALSE);}
else{
t8=*((C_word*)lf[142]+1);
if(C_truep(t8)){
t9=t4;
f_3379(t9,C_SCHEME_FALSE);}
else{
t9=C_i_car(((C_word*)t0)[2]);
t10=t4;
f_3379(t10,C_i_not(t9));}}}
else{
t7=t4;
f_3379(t7,C_SCHEME_FALSE);}}}}

/* k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_fcall f_3379(C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3379,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[10],C_fix(2));
t3=C_i_car(t2);
t4=C_i_cadr(t2);
t5=C_i_caddr(t2);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3399,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t5,a[6]=t7,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:280: gen */
t9=*((C_word*)lf[1]+1);
f_2252(6,t9,t8,C_SCHEME_TRUE,lf[132],((C_word*)t0)[5],lf[133]);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3492,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:305: gen */
t3=*((C_word*)lf[1]+1);
f_2252(6,t3,t2,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[4],C_make_character(61));}}

/* k3490 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3492,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3495,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:306: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2390(t3,t2,((C_word*)t0)[2],((C_word*)t0)[7]);}

/* k3493 in k3490 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3495,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:307: gen */
t3=*((C_word*)lf[1]+1);
f_2252(7,t3,t2,C_make_character(59),C_SCHEME_TRUE,lf[143],((C_word*)t0)[4],lf[144]);}

/* k3496 in k3493 in k3490 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3501,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=*((C_word*)lf[137]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3513,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_3513(t5,t3);}
else{
t5=*((C_word*)lf[142]+1);
t6=t4;
f_3513(t6,(C_truep(t5)?t5:C_i_car(((C_word*)t0)[2])));}}

/* k3511 in k3496 in k3493 in k3490 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_fcall f_3513(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm:310: gen */
t2=*((C_word*)lf[1]+1);
f_2252(5,t2,((C_word*)t0)[3],lf[138],((C_word*)t0)[2],lf[139]);}
else{
/* c-backend.scm:311: gen */
t2=*((C_word*)lf[1]+1);
f_2252(5,t2,((C_word*)t0)[3],lf[140],((C_word*)t0)[2],lf[141]);}}

/* k3499 in k3496 in k3493 in k3490 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3501,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3504,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:312: gen */
t3=*((C_word*)lf[1]+1);
f_2252(7,t3,t2,lf[135],((C_word*)t0)[3],lf[136],((C_word*)t0)[2],C_make_character(44));}

/* k3502 in k3499 in k3496 in k3493 in k3490 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3507,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:313: expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4287(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:314: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[134]);}

/* k3397 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3399(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3399,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3402,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
if(C_truep(*((C_word*)lf[110]+1))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3415,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[5])){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3425,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:284: number->string */
C_number_to_string(3,0,t4,((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3432,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:285: number->string */
C_number_to_string(3,0,t4,((C_word*)t0)[4]);}}
else{
if(C_truep(((C_word*)t0)[5])){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3439,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3464,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:288: number->string */
C_number_to_string(3,0,t4,((C_word*)t0)[4]);}
else{
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3471,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3478,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:295: number->string */
C_number_to_string(3,0,t4,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3482,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3489,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:299: number->string */
C_number_to_string(3,0,t4,((C_word*)t0)[4]);}}}}

/* k3487 in k3397 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:299: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[130],t1,lf[131]);}

/* k3480 in k3397 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
/* c-backend.scm:300: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,((C_word*)t0)[3],lf[128],((C_word*)t0)[2],lf[129]);}

/* k3476 in k3397 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:295: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[126],t1,lf[127]);}

/* k3469 in k3397 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
/* c-backend.scm:296: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,((C_word*)t0)[2],lf[124],((C_word*)((C_word*)t0)[3])[1],lf[125]);}

/* k3462 in k3397 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:288: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[122],t1,lf[123]);}

/* k3437 in k3397 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3439,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:290: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,((C_word*)t0)[3],lf[118],((C_word*)((C_word*)t0)[5])[1],lf[119]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3452,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3456,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadddr(((C_word*)t0)[2]);
/* c-backend.scm:292: symbol->string */
t6=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}

/* k3454 in k3437 in k3397 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:292: c-ify-string */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3450 in k3437 in k3397 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:291: gen */
t2=*((C_word*)lf[1]+1);
f_2252(7,t2,((C_word*)t0)[3],lf[120],((C_word*)((C_word*)t0)[2])[1],lf[121],t1,C_make_character(41));}

/* k3430 in k3397 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:285: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[116],t1,lf[117]);}

/* k3423 in k3397 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:284: string-append */
t2=*((C_word*)lf[113]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[114],t1,lf[115]);}

/* k3413 in k3397 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
/* c-backend.scm:286: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,((C_word*)t0)[2],lf[111],((C_word*)((C_word*)t0)[3])[1],lf[112]);}

/* k3400 in k3397 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3402,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3405,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:301: gen */
t3=*((C_word*)lf[1]+1);
f_2252(7,t3,t2,lf[109],((C_word*)t0)[3],C_make_character(44),((C_word*)((C_word*)t0)[2])[1],C_make_character(44));}

/* k3403 in k3400 in k3397 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3405,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3408,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:302: expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4287(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3406 in k3403 in k3400 in k3397 in k3377 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:303: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[108]);}

/* k3371 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(((C_word*)t0)[4],t1);
if(C_truep(t2)){
/* c-backend.scm:247: lambda-literal-looping */
t3=*((C_word*)lf[107]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
f_3200(2,t3,C_SCHEME_FALSE);}}

/* k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3200,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3203,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:248: lambda-literal-temporaries */
t3=*((C_word*)lf[105]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3333,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=t2;
f_3333(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3357,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[14],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:263: gen */
t4=*((C_word*)lf[1]+1);
f_2252(6,t4,t3,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[4],C_make_character(61));}}}

/* k3355 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3360,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:264: expr */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2390(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3358 in k3355 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:265: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k3331 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3336,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:266: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[2],C_make_character(40));}

/* k3334 in k3331 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3336,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3339,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;
f_3339(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:267: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,t2,((C_word*)t0)[2],C_make_character(44));}}

/* k3337 in k3334 in k3331 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3339,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3342,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11146,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:269: expr-args */
t4=((C_word*)((C_word*)t0)[6])[1];
f_4287(t4,t3,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
/* c-backend.scm:268: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,C_make_character(116),((C_word*)t0)[2],C_make_character(44));}}

/* f11146 in k3337 in k3334 in k3331 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f11146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:270: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[106]);}

/* k3340 in k3337 in k3334 in k3331 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3342,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3345,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:269: expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4287(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3343 in k3340 in k3337 in k3334 in k3331 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:270: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[106]);}

/* k3201 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3203,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3206,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_plus(&a,2,t1,((C_word*)t0)[3]);
/* c-backend.scm:249: iota */
t4=*((C_word*)lf[61]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[2],t3,C_fix(1));}

/* k3204 in k3201 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3206(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3206,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3207,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[6],lf[2]);
t4=C_i_check_list_2(t1,lf[2]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3291,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3291(t9,t5,((C_word*)t0)[6],t1);}

/* for-each-loop266 in k3204 in k3201 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_fcall f_3291(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3291,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3301,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g267274 */
t9=((C_word*)t0)[2];
f_3207(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3299 in for-each-loop266 in k3204 in k3201 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3291(t4,((C_word*)t0)[2],t2,t3);}

/* k3224 in k3204 in k3201 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3226,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3234,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:258: iota */
t3=*((C_word*)lf[61]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],C_fix(1),C_fix(1));}

/* k3232 in k3224 in k3204 in k3201 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3234,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[5],lf[2]);
t3=C_i_check_list_2(t1,lf[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3254,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_3254(t8,t4,((C_word*)t0)[5],t1);}

/* for-each-loop291 in k3232 in k3224 in k3204 in k3201 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_fcall f_3254(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3254,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3264,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:257: gen */
t9=*((C_word*)lf[1]+1);
f_2252(8,t9,t6,C_SCHEME_TRUE,C_make_character(116),t8,lf[104],t7,C_make_character(59));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3262 in for-each-loop291 in k3232 in k3224 in k3204 in k3201 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3254(t4,((C_word*)t0)[2],t2,t3);}

/* k3241 in k3232 in k3224 in k3204 in k3201 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3243,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3246,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:260: gen */
t3=*((C_word*)lf[1]+1);
f_2252(4,t3,((C_word*)t0)[4],C_SCHEME_TRUE,lf[102]);}
else{
/* c-backend.scm:259: gen */
t3=*((C_word*)lf[1]+1);
f_2252(6,t3,t2,C_SCHEME_TRUE,lf[103],((C_word*)t0)[2],C_make_character(59));}}

/* k3244 in k3241 in k3232 in k3224 in k3204 in k3201 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:260: gen */
t2=*((C_word*)lf[1]+1);
f_2252(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[102]);}

/* g267 in k3204 in k3201 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_fcall f_3207(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3207,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3211,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:252: gen */
t5=*((C_word*)lf[1]+1);
f_2252(6,t5,t4,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}

/* k3209 in g267 in k3204 in k3201 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3211,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3214,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:253: expr */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2390(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3212 in k3209 in g267 in k3204 in k3201 in k3198 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:254: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k3179 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3181,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3184,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:243: expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4287(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3182 in k3179 in k3162 in k3156 in k3150 in k3147 in expr in expression */
static void C_ccall f_3184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:244: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[100]);}

/* k3114 in expr in expression */
static void C_ccall f_3116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3116,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11138,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:72: ->string */
t3=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* f11138 in k3114 in expr in expression */
static void C_ccall f11138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:72: string-translate* */
t2=*((C_word*)lf[82]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[83]);}

/* k3110 in expr in expression */
static void C_ccall f_3112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:217: gen */
t2=*((C_word*)lf[1]+1);
f_2252(7,t2,((C_word*)t0)[3],lf[94],((C_word*)t0)[2],lf[95],t1,lf[96]);}

/* k3096 in expr in expression */
static void C_ccall f_3098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3101,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:219: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k3099 in k3096 in expr in expression */
static void C_ccall f_3101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:220: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3093 in expr in expression */
static void C_ccall f_3095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11133,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:72: ->string */
t3=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* f11133 in k3093 in expr in expression */
static void C_ccall f11133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:72: string-translate* */
t2=*((C_word*)lf[82]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[83]);}

/* k3089 in expr in expression */
static void C_ccall f_3091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:212: gen */
t2=*((C_word*)lf[1]+1);
f_2252(7,t2,((C_word*)t0)[3],lf[91],((C_word*)t0)[2],lf[92],t1,lf[93]);}

/* k3075 in expr in expression */
static void C_ccall f_3077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3077,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3080,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:214: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k3078 in k3075 in expr in expression */
static void C_ccall f_3080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:215: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k3027 in expr in expression */
static void C_ccall f_3029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3029,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3032,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3046,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3050,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:203: ##sys#symbol->qualified-string */
t5=*((C_word*)lf[85]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k3048 in k3027 in expr in expression */
static void C_ccall f_3050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3050,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11128,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:72: ->string */
t3=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* f11128 in k3048 in k3027 in expr in expression */
static void C_ccall f11128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:72: string-translate* */
t2=*((C_word*)lf[82]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[83]);}

/* k3044 in k3027 in expr in expression */
static void C_ccall f_3046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:203: gen */
t2=*((C_word*)lf[1]+1);
f_2252(5,t2,((C_word*)t0)[2],lf[80],t1,lf[81]);}

/* k3030 in k3027 in expr in expression */
static void C_ccall f_3032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3032,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3035,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:204: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k3033 in k3030 in k3027 in expr in expression */
static void C_ccall f_3035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:205: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k2996 in expr in expression */
static void C_ccall f_2998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:192: c-ify-string */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2992 in expr in expression */
static void C_ccall f_2994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:192: gen */
t2=*((C_word*)lf[1]+1);
f_2252(7,t2,((C_word*)t0)[3],lf[71],((C_word*)t0)[2],lf[72],t1,C_make_character(41));}

/* k2950 in expr in expression */
static void C_ccall f_2952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[5]);
/* c-backend.scm:183: expr */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2390(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k2918 in expr in expression */
static void C_ccall f_2920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2920,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2923,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:176: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k2921 in k2918 in expr in expression */
static void C_ccall f_2923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:177: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[64]);}

/* k2842 in expr in expression */
static void C_ccall f_2844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2844,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2845,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2858,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:171: iota */
t4=*((C_word*)lf[61]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],C_fix(1),C_fix(1));}

/* k2856 in k2842 in expr in expression */
static void C_ccall f_2858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2858,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[5],lf[2]);
t3=C_i_check_list_2(t1,lf[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2867,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2876,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2876(t8,t4,((C_word*)t0)[5],t1);}

/* for-each-loop180 in k2856 in k2842 in expr in expression */
static void C_fcall f_2876(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_2876,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2886,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g181188 */
t9=((C_word*)t0)[2];
f_2845(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2884 in for-each-loop180 in k2856 in k2842 in expr in expression */
static void C_ccall f_2886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2876(t4,((C_word*)t0)[2],t2,t3);}

/* k2865 in k2856 in k2842 in expr in expression */
static void C_ccall f_2867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2867,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:172: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,((C_word*)t0)[2],lf[59],t2,lf[60]);}

/* g181 in k2842 in expr in expression */
static void C_fcall f_2845(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2845,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2849,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:168: gen */
t5=*((C_word*)lf[1]+1);
f_2252(5,t5,t4,lf[57],t3,lf[58]);}

/* k2847 in g181 in k2842 in expr in expression */
static void C_ccall f_2849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2849,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2852,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:169: expr */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2390(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2850 in k2847 in g181 in k2842 in expr in expression */
static void C_ccall f_2852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:170: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(44));}

/* k2810 in expr in expression */
static void C_ccall f_2812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2812,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2815,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:158: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k2813 in k2810 in expr in expression */
static void C_ccall f_2815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2815,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2818,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:159: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[54]);}

/* k2816 in k2813 in k2810 in expr in expression */
static void C_ccall f_2818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2818,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2821,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:160: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k2819 in k2816 in k2813 in k2810 in expr in expression */
static void C_ccall f_2821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:161: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k2781 in expr in expression */
static void C_ccall f_2783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:151: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k2784 in k2781 in expr in expression */
static void C_ccall f_2786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:152: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[51]);}

/* k2787 in k2784 in k2781 in expr in expression */
static void C_ccall f_2789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2792,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:153: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k2790 in k2787 in k2784 in k2781 in expr in expression */
static void C_ccall f_2792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:154: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k2744 in expr in expression */
static void C_ccall f_2746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2746,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2749,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[5]);
/* c-backend.scm:144: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2390(t4,t2,t3,((C_word*)t0)[3]);}

/* k2747 in k2744 in expr in expression */
static void C_ccall f_2749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2749,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2752,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_a_i_plus(&a,2,t3,C_fix(1));
/* c-backend.scm:145: gen */
t5=*((C_word*)lf[1]+1);
f_2252(5,t5,t2,lf[47],t4,lf[48]);}

/* k2750 in k2747 in k2744 in expr in expression */
static void C_ccall f_2752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2752,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2755,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:146: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k2753 in k2750 in k2747 in k2744 in expr in expression */
static void C_ccall f_2755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:147: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k2711 in expr in expression */
static void C_ccall f_2713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2713,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[5]);
/* c-backend.scm:137: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2390(t4,t2,t3,((C_word*)t0)[3]);}

/* k2714 in k2711 in expr in expression */
static void C_ccall f_2716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2716,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2719,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:138: gen */
t4=*((C_word*)lf[1]+1);
f_2252(5,t4,t2,C_make_character(44),t3,C_make_character(44));}

/* k2717 in k2714 in k2711 in expr in expression */
static void C_ccall f_2719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2722,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:139: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k2720 in k2717 in k2714 in k2711 in expr in expression */
static void C_ccall f_2722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:140: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k2692 in expr in expression */
static void C_ccall f_2694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2694,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2697,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:132: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k2695 in k2692 in expr in expression */
static void C_ccall f_2697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:133: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],lf[42]);}

/* k2665 in expr in expression */
static void C_ccall f_2667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2667,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2670,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:127: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k2668 in k2665 in expr in expression */
static void C_ccall f_2670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2670,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[3]);
t3=C_a_i_plus(&a,2,t2,C_fix(1));
/* c-backend.scm:128: gen */
t4=*((C_word*)lf[1]+1);
f_2252(5,t4,((C_word*)t0)[2],lf[39],t3,C_make_character(93));}

/* k2639 in expr in expression */
static void C_ccall f_2641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2644,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[5]);
/* c-backend.scm:121: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k2642 in k2639 in expr in expression */
static void C_ccall f_2644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2644,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:122: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,C_make_character(59));}

/* k2645 in k2642 in k2639 in expr in expression */
static void C_ccall f_2647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm:123: expr */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2390(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* loop in expr in expression */
static void C_fcall f_2587(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2587,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_greaterp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2597,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:112: gen */
t6=*((C_word*)lf[1]+1);
f_2252(6,t6,t5,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}
else{
t5=C_i_car(t2);
/* c-backend.scm:116: expr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_2390(t6,t1,t5,t3);}}

/* k2595 in loop in expr in expression */
static void C_ccall f_2597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2597,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2600,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[7]);
/* c-backend.scm:113: expr */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2390(t4,t2,t3,((C_word*)t0)[6]);}

/* k2598 in k2595 in loop in expr in expression */
static void C_ccall f_2600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2600,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:114: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,C_make_character(59));}

/* k2601 in k2598 in k2595 in loop in expr in expression */
static void C_ccall f_2603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2603,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[6]);
t3=C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1));
t4=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
/* c-backend.scm:115: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2587(t5,((C_word*)t0)[2],t2,t3,t4);}

/* k2527 in expr in expression */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2529,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:99: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k2530 in k2527 in expr in expression */
static void C_ccall f_2532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2535,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:100: gen */
t3=*((C_word*)lf[1]+1);
f_2252(3,t3,t2,lf[32]);}

/* k2533 in k2530 in k2527 in expr in expression */
static void C_ccall f_2535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2535,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2538,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:101: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k2536 in k2533 in k2530 in k2527 in expr in expression */
static void C_ccall f_2538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2538,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:102: gen */
t3=*((C_word*)lf[1]+1);
f_2252(5,t3,t2,C_make_character(125),C_SCHEME_TRUE,lf[31]);}

/* k2539 in k2536 in k2533 in k2530 in k2527 in expr in expression */
static void C_ccall f_2541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2541,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2544,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_caddr(((C_word*)t0)[4]);
/* c-backend.scm:103: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2390(t4,t2,t3,((C_word*)t0)[2]);}

/* k2542 in k2539 in k2536 in k2533 in k2530 in k2527 in expr in expression */
static void C_ccall f_2544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:104: gen */
t2=*((C_word*)lf[1]+1);
f_2252(3,t2,((C_word*)t0)[2],C_make_character(125));}

/* find-lambda */
static void C_fcall f_2345(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2345,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2349,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2357,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:68: find */
t5=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a2356 in find-lambda */
static void C_ccall f_2357(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2357,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2365,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:68: lambda-literal-id */
t4=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2363 in a2356 in find-lambda */
static void C_ccall f_2365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[2],t1));}

/* k2347 in find-lambda */
static void C_ccall f_2349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* c-backend.scm:69: bomb */
t2=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[10],((C_word*)t0)[2]);}}

/* f_2298 in k2247 in k2244 */
static void C_ccall f_2298(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2298,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2307,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:50: intersperse */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_make_character(32));}

/* k2305 */
static void C_ccall f_2307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2307,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2315,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_2315(t6,((C_word*)t0)[2],t1);}

/* for-each-loop42 in k2305 */
static void C_fcall f_2315(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2315,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2325,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:49: display */
t5=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,*((C_word*)lf[0]+1));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2323 in for-each-loop42 in k2305 */
static void C_ccall f_2325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2315(t3,((C_word*)t0)[2],t2);}

/* f_2252 in k2247 in k2244 */
static void C_ccall f_2252(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2252r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2252r(t0,t1,t2);}}

static void C_ccall f_2252r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t3=C_i_check_list_2(t2,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2275,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_2275(t7,t1,t2);}

/* for-each-loop23 */
static void C_fcall f_2275(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2275,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2285,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_eqp(C_SCHEME_TRUE,t4);
if(C_truep(t5)){
/* c-backend.scm:43: newline */
t6=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,*((C_word*)lf[0]+1));}
else{
/* c-backend.scm:44: display */
t6=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,*((C_word*)lf[0]+1));}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2283 in for-each-loop23 */
static void C_ccall f_2285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2275(t3,((C_word*)t0)[2],t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[805] = {
{"toplevel:c_2dbackend_2escm",(void*)C_backend_toplevel},
{"f_2246:c_2dbackend_2escm",(void*)f_2246},
{"f_2249:c_2dbackend_2escm",(void*)f_2249},
{"f_10310:c_2dbackend_2escm",(void*)f_10310},
{"f_10313:c_2dbackend_2escm",(void*)f_10313},
{"f_10340:c_2dbackend_2escm",(void*)f_10340},
{"f_10336:c_2dbackend_2escm",(void*)f_10336},
{"f_10316:c_2dbackend_2escm",(void*)f_10316},
{"f_10319:c_2dbackend_2escm",(void*)f_10319},
{"f_10332:c_2dbackend_2escm",(void*)f_10332},
{"f_10322:c_2dbackend_2escm",(void*)f_10322},
{"f_10325:c_2dbackend_2escm",(void*)f_10325},
{"f_10328:c_2dbackend_2escm",(void*)f_10328},
{"f_2340:c_2dbackend_2escm",(void*)f_2340},
{"f_10010:c_2dbackend_2escm",(void*)f_10010},
{"f_10286:c_2dbackend_2escm",(void*)f_10286},
{"f_10284:c_2dbackend_2escm",(void*)f_10284},
{"f_10272:c_2dbackend_2escm",(void*)f_10272},
{"f_10242:c_2dbackend_2escm",(void*)f_10242},
{"f_10203:c_2dbackend_2escm",(void*)f_10203},
{"f_10190:c_2dbackend_2escm",(void*)f_10190},
{"f_10186:c_2dbackend_2escm",(void*)f_10186},
{"f_10072:c_2dbackend_2escm",(void*)f_10072},
{"f_10019:c_2dbackend_2escm",(void*)f_10019},
{"f_9376:c_2dbackend_2escm",(void*)f_9376},
{"f_9487:c_2dbackend_2escm",(void*)f_9487},
{"f_9676:c_2dbackend_2escm",(void*)f_9676},
{"f_9703:c_2dbackend_2escm",(void*)f_9703},
{"f_9881:c_2dbackend_2escm",(void*)f_9881},
{"f_9884:c_2dbackend_2escm",(void*)f_9884},
{"f_9887:c_2dbackend_2escm",(void*)f_9887},
{"f_9890:c_2dbackend_2escm",(void*)f_9890},
{"f_9860:c_2dbackend_2escm",(void*)f_9860},
{"f_9863:c_2dbackend_2escm",(void*)f_9863},
{"f_9866:c_2dbackend_2escm",(void*)f_9866},
{"f_9869:c_2dbackend_2escm",(void*)f_9869},
{"f_9839:c_2dbackend_2escm",(void*)f_9839},
{"f_9842:c_2dbackend_2escm",(void*)f_9842},
{"f_9845:c_2dbackend_2escm",(void*)f_9845},
{"f_9848:c_2dbackend_2escm",(void*)f_9848},
{"f_9802:c_2dbackend_2escm",(void*)f_9802},
{"f_9805:c_2dbackend_2escm",(void*)f_9805},
{"f_9808:c_2dbackend_2escm",(void*)f_9808},
{"f_9811:c_2dbackend_2escm",(void*)f_9811},
{"f_9781:c_2dbackend_2escm",(void*)f_9781},
{"f_9784:c_2dbackend_2escm",(void*)f_9784},
{"f_9787:c_2dbackend_2escm",(void*)f_9787},
{"f_9790:c_2dbackend_2escm",(void*)f_9790},
{"f_9760:c_2dbackend_2escm",(void*)f_9760},
{"f_9763:c_2dbackend_2escm",(void*)f_9763},
{"f_9766:c_2dbackend_2escm",(void*)f_9766},
{"f_9769:c_2dbackend_2escm",(void*)f_9769},
{"f_9739:c_2dbackend_2escm",(void*)f_9739},
{"f_9742:c_2dbackend_2escm",(void*)f_9742},
{"f_9745:c_2dbackend_2escm",(void*)f_9745},
{"f_9748:c_2dbackend_2escm",(void*)f_9748},
{"f_9718:c_2dbackend_2escm",(void*)f_9718},
{"f_9721:c_2dbackend_2escm",(void*)f_9721},
{"f_9724:c_2dbackend_2escm",(void*)f_9724},
{"f_9727:c_2dbackend_2escm",(void*)f_9727},
{"f_9680:c_2dbackend_2escm",(void*)f_9680},
{"f_9646:c_2dbackend_2escm",(void*)f_9646},
{"f_9649:c_2dbackend_2escm",(void*)f_9649},
{"f_9652:c_2dbackend_2escm",(void*)f_9652},
{"f_9655:c_2dbackend_2escm",(void*)f_9655},
{"f_9625:c_2dbackend_2escm",(void*)f_9625},
{"f_9628:c_2dbackend_2escm",(void*)f_9628},
{"f_9631:c_2dbackend_2escm",(void*)f_9631},
{"f_9634:c_2dbackend_2escm",(void*)f_9634},
{"f_9604:c_2dbackend_2escm",(void*)f_9604},
{"f_9607:c_2dbackend_2escm",(void*)f_9607},
{"f_9610:c_2dbackend_2escm",(void*)f_9610},
{"f_9613:c_2dbackend_2escm",(void*)f_9613},
{"f_9580:c_2dbackend_2escm",(void*)f_9580},
{"f_9583:c_2dbackend_2escm",(void*)f_9583},
{"f_9586:c_2dbackend_2escm",(void*)f_9586},
{"f_9589:c_2dbackend_2escm",(void*)f_9589},
{"f_9559:c_2dbackend_2escm",(void*)f_9559},
{"f_9562:c_2dbackend_2escm",(void*)f_9562},
{"f_9565:c_2dbackend_2escm",(void*)f_9565},
{"f_9568:c_2dbackend_2escm",(void*)f_9568},
{"f_9535:c_2dbackend_2escm",(void*)f_9535},
{"f_9538:c_2dbackend_2escm",(void*)f_9538},
{"f_9541:c_2dbackend_2escm",(void*)f_9541},
{"f_9544:c_2dbackend_2escm",(void*)f_9544},
{"f_9511:c_2dbackend_2escm",(void*)f_9511},
{"f_9514:c_2dbackend_2escm",(void*)f_9514},
{"f_9517:c_2dbackend_2escm",(void*)f_9517},
{"f_9520:c_2dbackend_2escm",(void*)f_9520},
{"f_9490:c_2dbackend_2escm",(void*)f_9490},
{"f_9493:c_2dbackend_2escm",(void*)f_9493},
{"f_9496:c_2dbackend_2escm",(void*)f_9496},
{"f_9499:c_2dbackend_2escm",(void*)f_9499},
{"f_9466:c_2dbackend_2escm",(void*)f_9466},
{"f_9469:c_2dbackend_2escm",(void*)f_9469},
{"f_9472:c_2dbackend_2escm",(void*)f_9472},
{"f_9475:c_2dbackend_2escm",(void*)f_9475},
{"f_9445:c_2dbackend_2escm",(void*)f_9445},
{"f_9448:c_2dbackend_2escm",(void*)f_9448},
{"f_9451:c_2dbackend_2escm",(void*)f_9451},
{"f_9454:c_2dbackend_2escm",(void*)f_9454},
{"f_9378:c_2dbackend_2escm",(void*)f_9378},
{"f_8898:c_2dbackend_2escm",(void*)f_8898},
{"f_8928:c_2dbackend_2escm",(void*)f_8928},
{"f_8955:c_2dbackend_2escm",(void*)f_8955},
{"f_9150:c_2dbackend_2escm",(void*)f_9150},
{"f_9159:c_2dbackend_2escm",(void*)f_9159},
{"f_9168:c_2dbackend_2escm",(void*)f_9168},
{"f_9195:c_2dbackend_2escm",(void*)f_9195},
{"f_9260:c_2dbackend_2escm",(void*)f_9260},
{"f_8900:c_2dbackend_2escm",(void*)f_8900},
{"f_7972:c_2dbackend_2escm",(void*)f_7972},
{"f_8049:c_2dbackend_2escm",(void*)f_8049},
{"f_8157:c_2dbackend_2escm",(void*)f_8157},
{"f_8178:c_2dbackend_2escm",(void*)f_8178},
{"f_8286:c_2dbackend_2escm",(void*)f_8286},
{"f_8298:c_2dbackend_2escm",(void*)f_8298},
{"f_8313:c_2dbackend_2escm",(void*)f_8313},
{"f_8358:c_2dbackend_2escm",(void*)f_8358},
{"f_8375:c_2dbackend_2escm",(void*)f_8375},
{"f_8392:c_2dbackend_2escm",(void*)f_8392},
{"f_8467:c_2dbackend_2escm",(void*)f_8467},
{"f_8484:c_2dbackend_2escm",(void*)f_8484},
{"f_8501:c_2dbackend_2escm",(void*)f_8501},
{"f_8518:c_2dbackend_2escm",(void*)f_8518},
{"f_8535:c_2dbackend_2escm",(void*)f_8535},
{"f_8552:c_2dbackend_2escm",(void*)f_8552},
{"f_8569:c_2dbackend_2escm",(void*)f_8569},
{"f_8581:c_2dbackend_2escm",(void*)f_8581},
{"f_8588:c_2dbackend_2escm",(void*)f_8588},
{"f_8612:c_2dbackend_2escm",(void*)f_8612},
{"f_8641:c_2dbackend_2escm",(void*)f_8641},
{"f_8622:c_2dbackend_2escm",(void*)f_8622},
{"f_8610:c_2dbackend_2escm",(void*)f_8610},
{"f_8592:c_2dbackend_2escm",(void*)f_8592},
{"f_8559:c_2dbackend_2escm",(void*)f_8559},
{"f_8542:c_2dbackend_2escm",(void*)f_8542},
{"f_8525:c_2dbackend_2escm",(void*)f_8525},
{"f_8508:c_2dbackend_2escm",(void*)f_8508},
{"f_8491:c_2dbackend_2escm",(void*)f_8491},
{"f_8474:c_2dbackend_2escm",(void*)f_8474},
{"f_8403:c_2dbackend_2escm",(void*)f_8403},
{"f_8424:c_2dbackend_2escm",(void*)f_8424},
{"f_8453:c_2dbackend_2escm",(void*)f_8453},
{"f_8422:c_2dbackend_2escm",(void*)f_8422},
{"f_8407:c_2dbackend_2escm",(void*)f_8407},
{"f_8399:c_2dbackend_2escm",(void*)f_8399},
{"f_8386:c_2dbackend_2escm",(void*)f_8386},
{"f_8369:c_2dbackend_2escm",(void*)f_8369},
{"f_8317:c_2dbackend_2escm",(void*)f_8317},
{"f_7979:c_2dbackend_2escm",(void*)f_7979},
{"f_7974:c_2dbackend_2escm",(void*)f_7974},
{"f_7907:c_2dbackend_2escm",(void*)f_7907},
{"f_7911:c_2dbackend_2escm",(void*)f_7911},
{"f_7914:c_2dbackend_2escm",(void*)f_7914},
{"f_7917:c_2dbackend_2escm",(void*)f_7917},
{"f_7920:c_2dbackend_2escm",(void*)f_7920},
{"f_7926:c_2dbackend_2escm",(void*)f_7926},
{"f_7970:c_2dbackend_2escm",(void*)f_7970},
{"f_7929:c_2dbackend_2escm",(void*)f_7929},
{"f_7937:c_2dbackend_2escm",(void*)f_7937},
{"f_7958:c_2dbackend_2escm",(void*)f_7958},
{"f_7941:c_2dbackend_2escm",(void*)f_7941},
{"f_7932:c_2dbackend_2escm",(void*)f_7932},
{"f_7392:c_2dbackend_2escm",(void*)f_7392},
{"f_7884:c_2dbackend_2escm",(void*)f_7884},
{"f_7894:c_2dbackend_2escm",(void*)f_7894},
{"f_7394:c_2dbackend_2escm",(void*)f_7394},
{"f_7398:c_2dbackend_2escm",(void*)f_7398},
{"f_7401:c_2dbackend_2escm",(void*)f_7401},
{"f_7404:c_2dbackend_2escm",(void*)f_7404},
{"f_7407:c_2dbackend_2escm",(void*)f_7407},
{"f_7413:c_2dbackend_2escm",(void*)f_7413},
{"f_7771:c_2dbackend_2escm",(void*)f_7771},
{"f_7774:c_2dbackend_2escm",(void*)f_7774},
{"f_7876:c_2dbackend_2escm",(void*)f_7876},
{"f_7777:c_2dbackend_2escm",(void*)f_7777},
{"f_7780:c_2dbackend_2escm",(void*)f_7780},
{"f_7783:c_2dbackend_2escm",(void*)f_7783},
{"f_7786:c_2dbackend_2escm",(void*)f_7786},
{"f_7834:c_2dbackend_2escm",(void*)f_7834},
{"f_7795:c_2dbackend_2escm",(void*)f_7795},
{"f_7844:c_2dbackend_2escm",(void*)f_7844},
{"f_7804:c_2dbackend_2escm",(void*)f_7804},
{"f_7832:c_2dbackend_2escm",(void*)f_7832},
{"f_7807:c_2dbackend_2escm",(void*)f_7807},
{"f_7810:c_2dbackend_2escm",(void*)f_7810},
{"f_7813:c_2dbackend_2escm",(void*)f_7813},
{"f_7415:c_2dbackend_2escm",(void*)f_7415},
{"f_7425:c_2dbackend_2escm",(void*)f_7425},
{"f_7434:c_2dbackend_2escm",(void*)f_7434},
{"f_7446:c_2dbackend_2escm",(void*)f_7446},
{"f_7458:c_2dbackend_2escm",(void*)f_7458},
{"f_7464:c_2dbackend_2escm",(void*)f_7464},
{"f_7503:c_2dbackend_2escm",(void*)f_7503},
{"f_7468:c_2dbackend_2escm",(void*)f_7468},
{"f_7067:c_2dbackend_2escm",(void*)f_7067},
{"f_7369:c_2dbackend_2escm",(void*)f_7369},
{"f_7379:c_2dbackend_2escm",(void*)f_7379},
{"f_7069:c_2dbackend_2escm",(void*)f_7069},
{"f_7073:c_2dbackend_2escm",(void*)f_7073},
{"f_7076:c_2dbackend_2escm",(void*)f_7076},
{"f_7079:c_2dbackend_2escm",(void*)f_7079},
{"f_7361:c_2dbackend_2escm",(void*)f_7361},
{"f_7085:c_2dbackend_2escm",(void*)f_7085},
{"f_7088:c_2dbackend_2escm",(void*)f_7088},
{"f_7091:c_2dbackend_2escm",(void*)f_7091},
{"f_7094:c_2dbackend_2escm",(void*)f_7094},
{"f_7097:c_2dbackend_2escm",(void*)f_7097},
{"f_7100:c_2dbackend_2escm",(void*)f_7100},
{"f_7103:c_2dbackend_2escm",(void*)f_7103},
{"f_7106:c_2dbackend_2escm",(void*)f_7106},
{"f_7109:c_2dbackend_2escm",(void*)f_7109},
{"f_7112:c_2dbackend_2escm",(void*)f_7112},
{"f_7350:c_2dbackend_2escm",(void*)f_7350},
{"f_7115:c_2dbackend_2escm",(void*)f_7115},
{"f_7118:c_2dbackend_2escm",(void*)f_7118},
{"f_7121:c_2dbackend_2escm",(void*)f_7121},
{"f_7124:c_2dbackend_2escm",(void*)f_7124},
{"f_7127:c_2dbackend_2escm",(void*)f_7127},
{"f_7130:c_2dbackend_2escm",(void*)f_7130},
{"f_7133:c_2dbackend_2escm",(void*)f_7133},
{"f_7136:c_2dbackend_2escm",(void*)f_7136},
{"f_7175:c_2dbackend_2escm",(void*)f_7175},
{"f_7279:c_2dbackend_2escm",(void*)f_7279},
{"f_7286:c_2dbackend_2escm",(void*)f_7286},
{"f_7163:c_2dbackend_2escm",(void*)f_7163},
{"f_7166:c_2dbackend_2escm",(void*)f_7166},
{"f_7169:c_2dbackend_2escm",(void*)f_7169},
{"f_7157:c_2dbackend_2escm",(void*)f_7157},
{"f_7145:c_2dbackend_2escm",(void*)f_7145},
{"f_7149:c_2dbackend_2escm",(void*)f_7149},
{"f_7153:c_2dbackend_2escm",(void*)f_7153},
{"f_7289:c_2dbackend_2escm",(void*)f_7289},
{"f_7187:c_2dbackend_2escm",(void*)f_7187},
{"f_7190:c_2dbackend_2escm",(void*)f_7190},
{"f_7220:c_2dbackend_2escm",(void*)f_7220},
{"f_7223:c_2dbackend_2escm",(void*)f_7223},
{"f_7261:c_2dbackend_2escm",(void*)f_7261},
{"f_7257:c_2dbackend_2escm",(void*)f_7257},
{"f_7226:c_2dbackend_2escm",(void*)f_7226},
{"f_7229:c_2dbackend_2escm",(void*)f_7229},
{"f_7232:c_2dbackend_2escm",(void*)f_7232},
{"f_7199:c_2dbackend_2escm",(void*)f_7199},
{"f_7202:c_2dbackend_2escm",(void*)f_7202},
{"f_7193:c_2dbackend_2escm",(void*)f_7193},
{"f_7024:c_2dbackend_2escm",(void*)f_7024},
{"f_7044:c_2dbackend_2escm",(void*)f_7044},
{"f_7030:c_2dbackend_2escm",(void*)f_7030},
{"f_7033:c_2dbackend_2escm",(void*)f_7033},
{"f_7054:c_2dbackend_2escm",(void*)f_7054},
{"f_6967:c_2dbackend_2escm",(void*)f_6967},
{"f_6971:c_2dbackend_2escm",(void*)f_6971},
{"f_7001:c_2dbackend_2escm",(void*)f_7001},
{"f_6993:c_2dbackend_2escm",(void*)f_6993},
{"f_7011:c_2dbackend_2escm",(void*)f_7011},
{"f_6951:c_2dbackend_2escm",(void*)f_6951},
{"f_6957:c_2dbackend_2escm",(void*)f_6957},
{"f_6965:c_2dbackend_2escm",(void*)f_6965},
{"f_6935:c_2dbackend_2escm",(void*)f_6935},
{"f_6941:c_2dbackend_2escm",(void*)f_6941},
{"f_6949:c_2dbackend_2escm",(void*)f_6949},
{"f_6846:c_2dbackend_2escm",(void*)f_6846},
{"f_6855:c_2dbackend_2escm",(void*)f_6855},
{"f_6884:c_2dbackend_2escm",(void*)f_6884},
{"f_6894:c_2dbackend_2escm",(void*)f_6894},
{"f_6769:c_2dbackend_2escm",(void*)f_6769},
{"f_6773:c_2dbackend_2escm",(void*)f_6773},
{"f_6787:c_2dbackend_2escm",(void*)f_6787},
{"f_6800:c_2dbackend_2escm",(void*)f_6800},
{"f_6832:c_2dbackend_2escm",(void*)f_6832},
{"f_6803:c_2dbackend_2escm",(void*)f_6803},
{"f_6806:c_2dbackend_2escm",(void*)f_6806},
{"f_6776:c_2dbackend_2escm",(void*)f_6776},
{"f_6779:c_2dbackend_2escm",(void*)f_6779},
{"f_6782:c_2dbackend_2escm",(void*)f_6782},
{"f_2342:c_2dbackend_2escm",(void*)f_2342},
{"f_6736:c_2dbackend_2escm",(void*)f_6736},
{"f_6740:c_2dbackend_2escm",(void*)f_6740},
{"f_6743:c_2dbackend_2escm",(void*)f_6743},
{"f_6746:c_2dbackend_2escm",(void*)f_6746},
{"f_6749:c_2dbackend_2escm",(void*)f_6749},
{"f_6752:c_2dbackend_2escm",(void*)f_6752},
{"f_6755:c_2dbackend_2escm",(void*)f_6755},
{"f_6758:c_2dbackend_2escm",(void*)f_6758},
{"f_6761:c_2dbackend_2escm",(void*)f_6761},
{"f_6764:c_2dbackend_2escm",(void*)f_6764},
{"f_5945:c_2dbackend_2escm",(void*)f_5945},
{"f_6712:c_2dbackend_2escm",(void*)f_6712},
{"f_6722:c_2dbackend_2escm",(void*)f_6722},
{"f_5947:c_2dbackend_2escm",(void*)f_5947},
{"f_5951:c_2dbackend_2escm",(void*)f_5951},
{"f_5954:c_2dbackend_2escm",(void*)f_5954},
{"f_5957:c_2dbackend_2escm",(void*)f_5957},
{"f_5960:c_2dbackend_2escm",(void*)f_5960},
{"f_5963:c_2dbackend_2escm",(void*)f_5963},
{"f_5966:c_2dbackend_2escm",(void*)f_5966},
{"f_6704:c_2dbackend_2escm",(void*)f_6704},
{"f_5969:c_2dbackend_2escm",(void*)f_5969},
{"f_5975:c_2dbackend_2escm",(void*)f_5975},
{"f_5978:c_2dbackend_2escm",(void*)f_5978},
{"f_5981:c_2dbackend_2escm",(void*)f_5981},
{"f_5984:c_2dbackend_2escm",(void*)f_5984},
{"f_5987:c_2dbackend_2escm",(void*)f_5987},
{"f_5990:c_2dbackend_2escm",(void*)f_5990},
{"f_5993:c_2dbackend_2escm",(void*)f_5993},
{"f_5996:c_2dbackend_2escm",(void*)f_5996},
{"f_5999:c_2dbackend_2escm",(void*)f_5999},
{"f_6002:c_2dbackend_2escm",(void*)f_6002},
{"f_6005:c_2dbackend_2escm",(void*)f_6005},
{"f_6008:c_2dbackend_2escm",(void*)f_6008},
{"f_6011:c_2dbackend_2escm",(void*)f_6011},
{"f_6673:c_2dbackend_2escm",(void*)f_6673},
{"f_6014:c_2dbackend_2escm",(void*)f_6014},
{"f_6634:c_2dbackend_2escm",(void*)f_6634},
{"f_6637:c_2dbackend_2escm",(void*)f_6637},
{"f_6640:c_2dbackend_2escm",(void*)f_6640},
{"f_6656:c_2dbackend_2escm",(void*)f_6656},
{"f_6659:c_2dbackend_2escm",(void*)f_6659},
{"f_6017:c_2dbackend_2escm",(void*)f_6017},
{"f_6020:c_2dbackend_2escm",(void*)f_6020},
{"f_6023:c_2dbackend_2escm",(void*)f_6023},
{"f_6606:c_2dbackend_2escm",(void*)f_6606},
{"f_6609:c_2dbackend_2escm",(void*)f_6609},
{"f_6026:c_2dbackend_2escm",(void*)f_6026},
{"f_6029:c_2dbackend_2escm",(void*)f_6029},
{"f_6032:c_2dbackend_2escm",(void*)f_6032},
{"f_6035:c_2dbackend_2escm",(void*)f_6035},
{"f_6038:c_2dbackend_2escm",(void*)f_6038},
{"f_6041:c_2dbackend_2escm",(void*)f_6041},
{"f_6566:c_2dbackend_2escm",(void*)f_6566},
{"f_6568:c_2dbackend_2escm",(void*)f_6568},
{"f_6578:c_2dbackend_2escm",(void*)f_6578},
{"f_6516:c_2dbackend_2escm",(void*)f_6516},
{"f_6541:c_2dbackend_2escm",(void*)f_6541},
{"f_6525:c_2dbackend_2escm",(void*)f_6525},
{"f_6551:c_2dbackend_2escm",(void*)f_6551},
{"f_6044:c_2dbackend_2escm",(void*)f_6044},
{"f_6477:c_2dbackend_2escm",(void*)f_6477},
{"f_6489:c_2dbackend_2escm",(void*)f_6489},
{"f_6480:c_2dbackend_2escm",(void*)f_6480},
{"f_6387:c_2dbackend_2escm",(void*)f_6387},
{"f_6429:c_2dbackend_2escm",(void*)f_6429},
{"f_6390:c_2dbackend_2escm",(void*)f_6390},
{"f_6396:c_2dbackend_2escm",(void*)f_6396},
{"f_6399:c_2dbackend_2escm",(void*)f_6399},
{"f_6323:c_2dbackend_2escm",(void*)f_6323},
{"f_6326:c_2dbackend_2escm",(void*)f_6326},
{"f_6329:c_2dbackend_2escm",(void*)f_6329},
{"f_6332:c_2dbackend_2escm",(void*)f_6332},
{"f_6335:c_2dbackend_2escm",(void*)f_6335},
{"f_6350:c_2dbackend_2escm",(void*)f_6350},
{"f_6338:c_2dbackend_2escm",(void*)f_6338},
{"f_6341:c_2dbackend_2escm",(void*)f_6341},
{"f_6309:c_2dbackend_2escm",(void*)f_6309},
{"f_6317:c_2dbackend_2escm",(void*)f_6317},
{"f_6234:c_2dbackend_2escm",(void*)f_6234},
{"f_6240:c_2dbackend_2escm",(void*)f_6240},
{"f_6243:c_2dbackend_2escm",(void*)f_6243},
{"f_6277:c_2dbackend_2escm",(void*)f_6277},
{"f_6280:c_2dbackend_2escm",(void*)f_6280},
{"f_6283:c_2dbackend_2escm",(void*)f_6283},
{"f_6246:c_2dbackend_2escm",(void*)f_6246},
{"f_6249:c_2dbackend_2escm",(void*)f_6249},
{"f_6252:c_2dbackend_2escm",(void*)f_6252},
{"f_6255:c_2dbackend_2escm",(void*)f_6255},
{"f_6264:c_2dbackend_2escm",(void*)f_6264},
{"f_6267:c_2dbackend_2escm",(void*)f_6267},
{"f_6047:c_2dbackend_2escm",(void*)f_6047},
{"f_6070:c_2dbackend_2escm",(void*)f_6070},
{"f_6175:c_2dbackend_2escm",(void*)f_6175},
{"f_6178:c_2dbackend_2escm",(void*)f_6178},
{"f_6190:c_2dbackend_2escm",(void*)f_6190},
{"f_6181:c_2dbackend_2escm",(void*)f_6181},
{"f_6076:c_2dbackend_2escm",(void*)f_6076},
{"f_6079:c_2dbackend_2escm",(void*)f_6079},
{"f_6162:c_2dbackend_2escm",(void*)f_6162},
{"f_6082:c_2dbackend_2escm",(void*)f_6082},
{"f_6085:c_2dbackend_2escm",(void*)f_6085},
{"f_6088:c_2dbackend_2escm",(void*)f_6088},
{"f_6091:c_2dbackend_2escm",(void*)f_6091},
{"f_6156:c_2dbackend_2escm",(void*)f_6156},
{"f_6152:c_2dbackend_2escm",(void*)f_6152},
{"f_6094:c_2dbackend_2escm",(void*)f_6094},
{"f_6097:c_2dbackend_2escm",(void*)f_6097},
{"f_6100:c_2dbackend_2escm",(void*)f_6100},
{"f_6103:c_2dbackend_2escm",(void*)f_6103},
{"f_6106:c_2dbackend_2escm",(void*)f_6106},
{"f_6109:c_2dbackend_2escm",(void*)f_6109},
{"f_6127:c_2dbackend_2escm",(void*)f_6127},
{"f_6137:c_2dbackend_2escm",(void*)f_6137},
{"f_6112:c_2dbackend_2escm",(void*)f_6112},
{"f_6050:c_2dbackend_2escm",(void*)f_6050},
{"f_6060:c_2dbackend_2escm",(void*)f_6060},
{"f_6053:c_2dbackend_2escm",(void*)f_6053},
{"f_5891:c_2dbackend_2escm",(void*)f_5891},
{"f_5898:c_2dbackend_2escm",(void*)f_5898},
{"f_5901:c_2dbackend_2escm",(void*)f_5901},
{"f_5814:c_2dbackend_2escm",(void*)f_5814},
{"f_5824:c_2dbackend_2escm",(void*)f_5824},
{"f_5829:c_2dbackend_2escm",(void*)f_5829},
{"f_5885:c_2dbackend_2escm",(void*)f_5885},
{"f_5881:c_2dbackend_2escm",(void*)f_5881},
{"f_5866:c_2dbackend_2escm",(void*)f_5866},
{"f_5845:c_2dbackend_2escm",(void*)f_5845},
{"f_5856:c_2dbackend_2escm",(void*)f_5856},
{"f_5852:c_2dbackend_2escm",(void*)f_5852},
{"f_5672:c_2dbackend_2escm",(void*)f_5672},
{"f_5812:c_2dbackend_2escm",(void*)f_5812},
{"f_5679:c_2dbackend_2escm",(void*)f_5679},
{"f_5685:c_2dbackend_2escm",(void*)f_5685},
{"f_5768:c_2dbackend_2escm",(void*)f_5768},
{"f_5771:c_2dbackend_2escm",(void*)f_5771},
{"f_5781:c_2dbackend_2escm",(void*)f_5781},
{"f_5774:c_2dbackend_2escm",(void*)f_5774},
{"f_5735:c_2dbackend_2escm",(void*)f_5735},
{"f_5741:c_2dbackend_2escm",(void*)f_5741},
{"f_5476:c_2dbackend_2escm",(void*)f_5476},
{"f_5483:c_2dbackend_2escm",(void*)f_5483},
{"f_5594:c_2dbackend_2escm",(void*)f_5594},
{"f_5612:c_2dbackend_2escm",(void*)f_5612},
{"f_5641:c_2dbackend_2escm",(void*)f_5641},
{"f_5663:c_2dbackend_2escm",(void*)f_5663},
{"f_5619:c_2dbackend_2escm",(void*)f_5619},
{"f_5547:c_2dbackend_2escm",(void*)f_5547},
{"f_5555:c_2dbackend_2escm",(void*)f_5555},
{"f_5584:c_2dbackend_2escm",(void*)f_5584},
{"f_5553:c_2dbackend_2escm",(void*)f_5553},
{"f_5543:c_2dbackend_2escm",(void*)f_5543},
{"f_5514:c_2dbackend_2escm",(void*)f_5514},
{"f_5518:c_2dbackend_2escm",(void*)f_5518},
{"f_5421:c_2dbackend_2escm",(void*)f_5421},
{"f_5427:c_2dbackend_2escm",(void*)f_5427},
{"f_5456:c_2dbackend_2escm",(void*)f_5456},
{"f_5459:c_2dbackend_2escm",(void*)f_5459},
{"f_5462:c_2dbackend_2escm",(void*)f_5462},
{"f_5465:c_2dbackend_2escm",(void*)f_5465},
{"f_5468:c_2dbackend_2escm",(void*)f_5468},
{"f_5437:c_2dbackend_2escm",(void*)f_5437},
{"f_5045:c_2dbackend_2escm",(void*)f_5045},
{"f_5398:c_2dbackend_2escm",(void*)f_5398},
{"f_5408:c_2dbackend_2escm",(void*)f_5408},
{"f_5275:c_2dbackend_2escm",(void*)f_5275},
{"f_5375:c_2dbackend_2escm",(void*)f_5375},
{"f_5385:c_2dbackend_2escm",(void*)f_5385},
{"f_5309:c_2dbackend_2escm",(void*)f_5309},
{"f_5312:c_2dbackend_2escm",(void*)f_5312},
{"f_5352:c_2dbackend_2escm",(void*)f_5352},
{"f_5362:c_2dbackend_2escm",(void*)f_5362},
{"f_5318:c_2dbackend_2escm",(void*)f_5318},
{"f_5321:c_2dbackend_2escm",(void*)f_5321},
{"f_5329:c_2dbackend_2escm",(void*)f_5329},
{"f_5339:c_2dbackend_2escm",(void*)f_5339},
{"f_5276:c_2dbackend_2escm",(void*)f_5276},
{"f_5280:c_2dbackend_2escm",(void*)f_5280},
{"f_5283:c_2dbackend_2escm",(void*)f_5283},
{"f_5286:c_2dbackend_2escm",(void*)f_5286},
{"f_5289:c_2dbackend_2escm",(void*)f_5289},
{"f_5303:c_2dbackend_2escm",(void*)f_5303},
{"f_5299:c_2dbackend_2escm",(void*)f_5299},
{"f_5292:c_2dbackend_2escm",(void*)f_5292},
{"f_5162:c_2dbackend_2escm",(void*)f_5162},
{"f_5166:c_2dbackend_2escm",(void*)f_5166},
{"f_5169:c_2dbackend_2escm",(void*)f_5169},
{"f_5172:c_2dbackend_2escm",(void*)f_5172},
{"f_5175:c_2dbackend_2escm",(void*)f_5175},
{"f_5178:c_2dbackend_2escm",(void*)f_5178},
{"f_5269:c_2dbackend_2escm",(void*)f_5269},
{"f_5181:c_2dbackend_2escm",(void*)f_5181},
{"f_5184:c_2dbackend_2escm",(void*)f_5184},
{"f_5190:c_2dbackend_2escm",(void*)f_5190},
{"f_5258:c_2dbackend_2escm",(void*)f_5258},
{"f_5224:c_2dbackend_2escm",(void*)f_5224},
{"f_5230:c_2dbackend_2escm",(void*)f_5230},
{"f_5238:c_2dbackend_2escm",(void*)f_5238},
{"f_5234:c_2dbackend_2escm",(void*)f_5234},
{"f_5196:c_2dbackend_2escm",(void*)f_5196},
{"f_5199:c_2dbackend_2escm",(void*)f_5199},
{"f_5202:c_2dbackend_2escm",(void*)f_5202},
{"f_5205:c_2dbackend_2escm",(void*)f_5205},
{"f_5208:c_2dbackend_2escm",(void*)f_5208},
{"f_5218:c_2dbackend_2escm",(void*)f_5218},
{"f_5211:c_2dbackend_2escm",(void*)f_5211},
{"f_5084:c_2dbackend_2escm",(void*)f_5084},
{"f_5086:c_2dbackend_2escm",(void*)f_5086},
{"f_5090:c_2dbackend_2escm",(void*)f_5090},
{"f_5093:c_2dbackend_2escm",(void*)f_5093},
{"f_5096:c_2dbackend_2escm",(void*)f_5096},
{"f_5099:c_2dbackend_2escm",(void*)f_5099},
{"f_5102:c_2dbackend_2escm",(void*)f_5102},
{"f_5105:c_2dbackend_2escm",(void*)f_5105},
{"f_5108:c_2dbackend_2escm",(void*)f_5108},
{"f_5111:c_2dbackend_2escm",(void*)f_5111},
{"f_5114:c_2dbackend_2escm",(void*)f_5114},
{"f_5117:c_2dbackend_2escm",(void*)f_5117},
{"f_5120:c_2dbackend_2escm",(void*)f_5120},
{"f_5123:c_2dbackend_2escm",(void*)f_5123},
{"f_5137:c_2dbackend_2escm",(void*)f_5137},
{"f_5133:c_2dbackend_2escm",(void*)f_5133},
{"f_5126:c_2dbackend_2escm",(void*)f_5126},
{"f_5048:c_2dbackend_2escm",(void*)f_5048},
{"f_5061:c_2dbackend_2escm",(void*)f_5061},
{"f_5071:c_2dbackend_2escm",(void*)f_5071},
{"f_5052:c_2dbackend_2escm",(void*)f_5052},
{"f_4701:c_2dbackend_2escm",(void*)f_4701},
{"f_4705:c_2dbackend_2escm",(void*)f_4705},
{"f_5022:c_2dbackend_2escm",(void*)f_5022},
{"f_5032:c_2dbackend_2escm",(void*)f_5032},
{"f_4951:c_2dbackend_2escm",(void*)f_4951},
{"f_4999:c_2dbackend_2escm",(void*)f_4999},
{"f_4956:c_2dbackend_2escm",(void*)f_4956},
{"f_4959:c_2dbackend_2escm",(void*)f_4959},
{"f_4970:c_2dbackend_2escm",(void*)f_4970},
{"f_4980:c_2dbackend_2escm",(void*)f_4980},
{"f_4965:c_2dbackend_2escm",(void*)f_4965},
{"f_5009:c_2dbackend_2escm",(void*)f_5009},
{"f_4706:c_2dbackend_2escm",(void*)f_4706},
{"f_4710:c_2dbackend_2escm",(void*)f_4710},
{"f_4713:c_2dbackend_2escm",(void*)f_4713},
{"f_4945:c_2dbackend_2escm",(void*)f_4945},
{"f_4716:c_2dbackend_2escm",(void*)f_4716},
{"f_4931:c_2dbackend_2escm",(void*)f_4931},
{"f_4719:c_2dbackend_2escm",(void*)f_4719},
{"f_4722:c_2dbackend_2escm",(void*)f_4722},
{"f_4725:c_2dbackend_2escm",(void*)f_4725},
{"f_4728:c_2dbackend_2escm",(void*)f_4728},
{"f_4731:c_2dbackend_2escm",(void*)f_4731},
{"f_4734:c_2dbackend_2escm",(void*)f_4734},
{"f_4923:c_2dbackend_2escm",(void*)f_4923},
{"f_4737:c_2dbackend_2escm",(void*)f_4737},
{"f_4740:c_2dbackend_2escm",(void*)f_4740},
{"f_4759:c_2dbackend_2escm",(void*)f_4759},
{"f_4895:c_2dbackend_2escm",(void*)f_4895},
{"f_4905:c_2dbackend_2escm",(void*)f_4905},
{"f_4765:c_2dbackend_2escm",(void*)f_4765},
{"f_4852:c_2dbackend_2escm",(void*)f_4852},
{"f_4855:c_2dbackend_2escm",(void*)f_4855},
{"f_4858:c_2dbackend_2escm",(void*)f_4858},
{"f_4861:c_2dbackend_2escm",(void*)f_4861},
{"f_4877:c_2dbackend_2escm",(void*)f_4877},
{"f_4880:c_2dbackend_2escm",(void*)f_4880},
{"f_4883:c_2dbackend_2escm",(void*)f_4883},
{"f_4768:c_2dbackend_2escm",(void*)f_4768},
{"f_4771:c_2dbackend_2escm",(void*)f_4771},
{"f_4774:c_2dbackend_2escm",(void*)f_4774},
{"f_4824:c_2dbackend_2escm",(void*)f_4824},
{"f_4827:c_2dbackend_2escm",(void*)f_4827},
{"f_4777:c_2dbackend_2escm",(void*)f_4777},
{"f_4780:c_2dbackend_2escm",(void*)f_4780},
{"f_4812:c_2dbackend_2escm",(void*)f_4812},
{"f_4815:c_2dbackend_2escm",(void*)f_4815},
{"f_4786:c_2dbackend_2escm",(void*)f_4786},
{"f_4795:c_2dbackend_2escm",(void*)f_4795},
{"f_4798:c_2dbackend_2escm",(void*)f_4798},
{"f_4741:c_2dbackend_2escm",(void*)f_4741},
{"f_4752:c_2dbackend_2escm",(void*)f_4752},
{"f_4527:c_2dbackend_2escm",(void*)f_4527},
{"f_4534:c_2dbackend_2escm",(void*)f_4534},
{"f_4678:c_2dbackend_2escm",(void*)f_4678},
{"f_4688:c_2dbackend_2escm",(void*)f_4688},
{"f_4545:c_2dbackend_2escm",(void*)f_4545},
{"f_4548:c_2dbackend_2escm",(void*)f_4548},
{"f_4551:c_2dbackend_2escm",(void*)f_4551},
{"f_4556:c_2dbackend_2escm",(void*)f_4556},
{"f_4566:c_2dbackend_2escm",(void*)f_4566},
{"f_4572:c_2dbackend_2escm",(void*)f_4572},
{"f_4625:c_2dbackend_2escm",(void*)f_4625},
{"f_4635:c_2dbackend_2escm",(void*)f_4635},
{"f_4575:c_2dbackend_2escm",(void*)f_4575},
{"f_4598:c_2dbackend_2escm",(void*)f_4598},
{"f_4608:c_2dbackend_2escm",(void*)f_4608},
{"f_4578:c_2dbackend_2escm",(void*)f_4578},
{"f_4581:c_2dbackend_2escm",(void*)f_4581},
{"f_4319:c_2dbackend_2escm",(void*)f_4319},
{"f_4519:c_2dbackend_2escm",(void*)f_4519},
{"f_4339:c_2dbackend_2escm",(void*)f_4339},
{"f_4441:c_2dbackend_2escm",(void*)f_4441},
{"f_4445:c_2dbackend_2escm",(void*)f_4445},
{"f_4449:c_2dbackend_2escm",(void*)f_4449},
{"f_4453:c_2dbackend_2escm",(void*)f_4453},
{"f_4511:c_2dbackend_2escm",(void*)f_4511},
{"f_4466:c_2dbackend_2escm",(void*)f_4466},
{"f_4474:c_2dbackend_2escm",(void*)f_4474},
{"f_4503:c_2dbackend_2escm",(void*)f_4503},
{"f_4472:c_2dbackend_2escm",(void*)f_4472},
{"f_4457:c_2dbackend_2escm",(void*)f_4457},
{"f_4357:c_2dbackend_2escm",(void*)f_4357},
{"f_4360:c_2dbackend_2escm",(void*)f_4360},
{"f_4363:c_2dbackend_2escm",(void*)f_4363},
{"f_4430:c_2dbackend_2escm",(void*)f_4430},
{"f_4366:c_2dbackend_2escm",(void*)f_4366},
{"f_4369:c_2dbackend_2escm",(void*)f_4369},
{"f_4372:c_2dbackend_2escm",(void*)f_4372},
{"f_4387:c_2dbackend_2escm",(void*)f_4387},
{"f_4400:c_2dbackend_2escm",(void*)f_4400},
{"f_4410:c_2dbackend_2escm",(void*)f_4410},
{"f_4375:c_2dbackend_2escm",(void*)f_4375},
{"f_4322:c_2dbackend_2escm",(void*)f_4322},
{"f_4336:c_2dbackend_2escm",(void*)f_4336},
{"f_2387:c_2dbackend_2escm",(void*)f_2387},
{"f_4287:c_2dbackend_2escm",(void*)f_4287},
{"f_4293:c_2dbackend_2escm",(void*)f_4293},
{"f_4297:c_2dbackend_2escm",(void*)f_4297},
{"f_2390:c_2dbackend_2escm",(void*)f_2390},
{"f_4243:c_2dbackend_2escm",(void*)f_4243},
{"f_4246:c_2dbackend_2escm",(void*)f_4246},
{"f_4249:c_2dbackend_2escm",(void*)f_4249},
{"f_4252:c_2dbackend_2escm",(void*)f_4252},
{"f_4255:c_2dbackend_2escm",(void*)f_4255},
{"f_4258:c_2dbackend_2escm",(void*)f_4258},
{"f_4160:c_2dbackend_2escm",(void*)f_4160},
{"f_4163:c_2dbackend_2escm",(void*)f_4163},
{"f_4166:c_2dbackend_2escm",(void*)f_4166},
{"f_4179:c_2dbackend_2escm",(void*)f_4179},
{"f_4202:c_2dbackend_2escm",(void*)f_4202},
{"f_4205:c_2dbackend_2escm",(void*)f_4205},
{"f_4208:c_2dbackend_2escm",(void*)f_4208},
{"f_4211:c_2dbackend_2escm",(void*)f_4211},
{"f_4189:c_2dbackend_2escm",(void*)f_4189},
{"f_4192:c_2dbackend_2escm",(void*)f_4192},
{"f_4141:c_2dbackend_2escm",(void*)f_4141},
{"f_4144:c_2dbackend_2escm",(void*)f_4144},
{"f_4118:c_2dbackend_2escm",(void*)f_4118},
{"f_4121:c_2dbackend_2escm",(void*)f_4121},
{"f_4096:c_2dbackend_2escm",(void*)f_4096},
{"f_4068:c_2dbackend_2escm",(void*)f_4068},
{"f_4071:c_2dbackend_2escm",(void*)f_4071},
{"f_4088:c_2dbackend_2escm",(void*)f_4088},
{"f_4074:c_2dbackend_2escm",(void*)f_4074},
{"f_4077:c_2dbackend_2escm",(void*)f_4077},
{"f_4052:c_2dbackend_2escm",(void*)f_4052},
{"f_4056:c_2dbackend_2escm",(void*)f_4056},
{"f_4038:c_2dbackend_2escm",(void*)f_4038},
{"f_4041:c_2dbackend_2escm",(void*)f_4041},
{"f_4022:c_2dbackend_2escm",(void*)f_4022},
{"f_4026:c_2dbackend_2escm",(void*)f_4026},
{"f_4004:c_2dbackend_2escm",(void*)f_4004},
{"f_4007:c_2dbackend_2escm",(void*)f_4007},
{"f_3984:c_2dbackend_2escm",(void*)f_3984},
{"f_3948:c_2dbackend_2escm",(void*)f_3948},
{"f_3960:c_2dbackend_2escm",(void*)f_3960},
{"f_3951:c_2dbackend_2escm",(void*)f_3951},
{"f_3929:c_2dbackend_2escm",(void*)f_3929},
{"f_3932:c_2dbackend_2escm",(void*)f_3932},
{"f_3910:c_2dbackend_2escm",(void*)f_3910},
{"f_3913:c_2dbackend_2escm",(void*)f_3913},
{"f_3891:c_2dbackend_2escm",(void*)f_3891},
{"f_3894:c_2dbackend_2escm",(void*)f_3894},
{"f_3872:c_2dbackend_2escm",(void*)f_3872},
{"f_3868:c_2dbackend_2escm",(void*)f_3868},
{"f_3816:c_2dbackend_2escm",(void*)f_3816},
{"f_3849:c_2dbackend_2escm",(void*)f_3849},
{"f_3819:c_2dbackend_2escm",(void*)f_3819},
{"f_3837:c_2dbackend_2escm",(void*)f_3837},
{"f_3822:c_2dbackend_2escm",(void*)f_3822},
{"f_3825:c_2dbackend_2escm",(void*)f_3825},
{"f_3783:c_2dbackend_2escm",(void*)f_3783},
{"f_3767:c_2dbackend_2escm",(void*)f_3767},
{"f11159:c_2dbackend_2escm",(void*)f11159},
{"f_3770:c_2dbackend_2escm",(void*)f_3770},
{"f_3773:c_2dbackend_2escm",(void*)f_3773},
{"f_3643:c_2dbackend_2escm",(void*)f_3643},
{"f_3646:c_2dbackend_2escm",(void*)f_3646},
{"f_3725:c_2dbackend_2escm",(void*)f_3725},
{"f_3735:c_2dbackend_2escm",(void*)f_3735},
{"f_3666:c_2dbackend_2escm",(void*)f_3666},
{"f_3674:c_2dbackend_2escm",(void*)f_3674},
{"f_3688:c_2dbackend_2escm",(void*)f_3688},
{"f_3698:c_2dbackend_2escm",(void*)f_3698},
{"f_3683:c_2dbackend_2escm",(void*)f_3683},
{"f_3647:c_2dbackend_2escm",(void*)f_3647},
{"f_3651:c_2dbackend_2escm",(void*)f_3651},
{"f_3654:c_2dbackend_2escm",(void*)f_3654},
{"f_3149:c_2dbackend_2escm",(void*)f_3149},
{"f_3152:c_2dbackend_2escm",(void*)f_3152},
{"f_3593:c_2dbackend_2escm",(void*)f_3593},
{"f_3589:c_2dbackend_2escm",(void*)f_3589},
{"f_3158:c_2dbackend_2escm",(void*)f_3158},
{"f11151:c_2dbackend_2escm",(void*)f11151},
{"f_3582:c_2dbackend_2escm",(void*)f_3582},
{"f_2375:c_2dbackend_2escm",(void*)f_2375},
{"f_3575:c_2dbackend_2escm",(void*)f_3575},
{"f_3164:c_2dbackend_2escm",(void*)f_3164},
{"f_3379:c_2dbackend_2escm",(void*)f_3379},
{"f_3492:c_2dbackend_2escm",(void*)f_3492},
{"f_3495:c_2dbackend_2escm",(void*)f_3495},
{"f_3498:c_2dbackend_2escm",(void*)f_3498},
{"f_3513:c_2dbackend_2escm",(void*)f_3513},
{"f_3501:c_2dbackend_2escm",(void*)f_3501},
{"f_3504:c_2dbackend_2escm",(void*)f_3504},
{"f_3507:c_2dbackend_2escm",(void*)f_3507},
{"f_3399:c_2dbackend_2escm",(void*)f_3399},
{"f_3489:c_2dbackend_2escm",(void*)f_3489},
{"f_3482:c_2dbackend_2escm",(void*)f_3482},
{"f_3478:c_2dbackend_2escm",(void*)f_3478},
{"f_3471:c_2dbackend_2escm",(void*)f_3471},
{"f_3464:c_2dbackend_2escm",(void*)f_3464},
{"f_3439:c_2dbackend_2escm",(void*)f_3439},
{"f_3456:c_2dbackend_2escm",(void*)f_3456},
{"f_3452:c_2dbackend_2escm",(void*)f_3452},
{"f_3432:c_2dbackend_2escm",(void*)f_3432},
{"f_3425:c_2dbackend_2escm",(void*)f_3425},
{"f_3415:c_2dbackend_2escm",(void*)f_3415},
{"f_3402:c_2dbackend_2escm",(void*)f_3402},
{"f_3405:c_2dbackend_2escm",(void*)f_3405},
{"f_3408:c_2dbackend_2escm",(void*)f_3408},
{"f_3373:c_2dbackend_2escm",(void*)f_3373},
{"f_3200:c_2dbackend_2escm",(void*)f_3200},
{"f_3357:c_2dbackend_2escm",(void*)f_3357},
{"f_3360:c_2dbackend_2escm",(void*)f_3360},
{"f_3333:c_2dbackend_2escm",(void*)f_3333},
{"f_3336:c_2dbackend_2escm",(void*)f_3336},
{"f_3339:c_2dbackend_2escm",(void*)f_3339},
{"f11146:c_2dbackend_2escm",(void*)f11146},
{"f_3342:c_2dbackend_2escm",(void*)f_3342},
{"f_3345:c_2dbackend_2escm",(void*)f_3345},
{"f_3203:c_2dbackend_2escm",(void*)f_3203},
{"f_3206:c_2dbackend_2escm",(void*)f_3206},
{"f_3291:c_2dbackend_2escm",(void*)f_3291},
{"f_3301:c_2dbackend_2escm",(void*)f_3301},
{"f_3226:c_2dbackend_2escm",(void*)f_3226},
{"f_3234:c_2dbackend_2escm",(void*)f_3234},
{"f_3254:c_2dbackend_2escm",(void*)f_3254},
{"f_3264:c_2dbackend_2escm",(void*)f_3264},
{"f_3243:c_2dbackend_2escm",(void*)f_3243},
{"f_3246:c_2dbackend_2escm",(void*)f_3246},
{"f_3207:c_2dbackend_2escm",(void*)f_3207},
{"f_3211:c_2dbackend_2escm",(void*)f_3211},
{"f_3214:c_2dbackend_2escm",(void*)f_3214},
{"f_3181:c_2dbackend_2escm",(void*)f_3181},
{"f_3184:c_2dbackend_2escm",(void*)f_3184},
{"f_3116:c_2dbackend_2escm",(void*)f_3116},
{"f11138:c_2dbackend_2escm",(void*)f11138},
{"f_3112:c_2dbackend_2escm",(void*)f_3112},
{"f_3098:c_2dbackend_2escm",(void*)f_3098},
{"f_3101:c_2dbackend_2escm",(void*)f_3101},
{"f_3095:c_2dbackend_2escm",(void*)f_3095},
{"f11133:c_2dbackend_2escm",(void*)f11133},
{"f_3091:c_2dbackend_2escm",(void*)f_3091},
{"f_3077:c_2dbackend_2escm",(void*)f_3077},
{"f_3080:c_2dbackend_2escm",(void*)f_3080},
{"f_3029:c_2dbackend_2escm",(void*)f_3029},
{"f_3050:c_2dbackend_2escm",(void*)f_3050},
{"f11128:c_2dbackend_2escm",(void*)f11128},
{"f_3046:c_2dbackend_2escm",(void*)f_3046},
{"f_3032:c_2dbackend_2escm",(void*)f_3032},
{"f_3035:c_2dbackend_2escm",(void*)f_3035},
{"f_2998:c_2dbackend_2escm",(void*)f_2998},
{"f_2994:c_2dbackend_2escm",(void*)f_2994},
{"f_2952:c_2dbackend_2escm",(void*)f_2952},
{"f_2920:c_2dbackend_2escm",(void*)f_2920},
{"f_2923:c_2dbackend_2escm",(void*)f_2923},
{"f_2844:c_2dbackend_2escm",(void*)f_2844},
{"f_2858:c_2dbackend_2escm",(void*)f_2858},
{"f_2876:c_2dbackend_2escm",(void*)f_2876},
{"f_2886:c_2dbackend_2escm",(void*)f_2886},
{"f_2867:c_2dbackend_2escm",(void*)f_2867},
{"f_2845:c_2dbackend_2escm",(void*)f_2845},
{"f_2849:c_2dbackend_2escm",(void*)f_2849},
{"f_2852:c_2dbackend_2escm",(void*)f_2852},
{"f_2812:c_2dbackend_2escm",(void*)f_2812},
{"f_2815:c_2dbackend_2escm",(void*)f_2815},
{"f_2818:c_2dbackend_2escm",(void*)f_2818},
{"f_2821:c_2dbackend_2escm",(void*)f_2821},
{"f_2783:c_2dbackend_2escm",(void*)f_2783},
{"f_2786:c_2dbackend_2escm",(void*)f_2786},
{"f_2789:c_2dbackend_2escm",(void*)f_2789},
{"f_2792:c_2dbackend_2escm",(void*)f_2792},
{"f_2746:c_2dbackend_2escm",(void*)f_2746},
{"f_2749:c_2dbackend_2escm",(void*)f_2749},
{"f_2752:c_2dbackend_2escm",(void*)f_2752},
{"f_2755:c_2dbackend_2escm",(void*)f_2755},
{"f_2713:c_2dbackend_2escm",(void*)f_2713},
{"f_2716:c_2dbackend_2escm",(void*)f_2716},
{"f_2719:c_2dbackend_2escm",(void*)f_2719},
{"f_2722:c_2dbackend_2escm",(void*)f_2722},
{"f_2694:c_2dbackend_2escm",(void*)f_2694},
{"f_2697:c_2dbackend_2escm",(void*)f_2697},
{"f_2667:c_2dbackend_2escm",(void*)f_2667},
{"f_2670:c_2dbackend_2escm",(void*)f_2670},
{"f_2641:c_2dbackend_2escm",(void*)f_2641},
{"f_2644:c_2dbackend_2escm",(void*)f_2644},
{"f_2647:c_2dbackend_2escm",(void*)f_2647},
{"f_2587:c_2dbackend_2escm",(void*)f_2587},
{"f_2597:c_2dbackend_2escm",(void*)f_2597},
{"f_2600:c_2dbackend_2escm",(void*)f_2600},
{"f_2603:c_2dbackend_2escm",(void*)f_2603},
{"f_2529:c_2dbackend_2escm",(void*)f_2529},
{"f_2532:c_2dbackend_2escm",(void*)f_2532},
{"f_2535:c_2dbackend_2escm",(void*)f_2535},
{"f_2538:c_2dbackend_2escm",(void*)f_2538},
{"f_2541:c_2dbackend_2escm",(void*)f_2541},
{"f_2544:c_2dbackend_2escm",(void*)f_2544},
{"f_2345:c_2dbackend_2escm",(void*)f_2345},
{"f_2357:c_2dbackend_2escm",(void*)f_2357},
{"f_2365:c_2dbackend_2escm",(void*)f_2365},
{"f_2349:c_2dbackend_2escm",(void*)f_2349},
{"f_2298:c_2dbackend_2escm",(void*)f_2298},
{"f_2307:c_2dbackend_2escm",(void*)f_2307},
{"f_2315:c_2dbackend_2escm",(void*)f_2315},
{"f_2325:c_2dbackend_2escm",(void*)f_2325},
{"f_2252:c_2dbackend_2escm",(void*)f_2252},
{"f_2275:c_2dbackend_2escm",(void*)f_2275},
{"f_2285:c_2dbackend_2escm",(void*)f_2285},
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
