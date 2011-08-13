/* Generated from optimizer.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: optimizer.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file optimizer.c
   unit: optimizer
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[250];
static double C_possibly_force_alignment;


C_noret_decl(C_optimizer_toplevel)
C_externexport void C_ccall C_optimizer_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2442)
static void C_ccall f_2442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10651)
static void C_ccall f_10651(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_10659)
static void C_ccall f_10659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10664)
static void C_fcall f_10664(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10674)
static void C_ccall f_10674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10678)
static void C_fcall f_10678(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10700)
static void C_ccall f_10700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5268)
static void C_ccall f_5268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9892)
static void C_ccall f_9892(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_9938)
static void C_ccall f_9938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9980)
static void C_ccall f_9980(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9990)
static void C_fcall f_9990(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10327)
static void C_ccall f_10327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10319)
static void C_ccall f_10319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10096)
static void C_ccall f_10096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10125)
static void C_fcall f_10125(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10295)
static void C_ccall f_10295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10287)
static void C_ccall f_10287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10156)
static void C_fcall f_10156(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10209)
static void C_ccall f_10209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10199)
static void C_ccall f_10199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10207)
static void C_ccall f_10207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10353)
static void C_ccall f_10353(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10) C_noret;
C_noret_decl(f_10366)
static void C_ccall f_10366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10408)
static void C_ccall f_10408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10392)
static void C_ccall f_10392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10396)
static void C_ccall f_10396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10388)
static void C_ccall f_10388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10482)
static void C_ccall f_10482(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13) C_noret;
C_noret_decl(f_10495)
static void C_ccall f_10495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10501)
static void C_ccall f_10501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10553)
static void C_ccall f_10553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10545)
static void C_ccall f_10545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10529)
static void C_ccall f_10529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10533)
static void C_ccall f_10533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10537)
static void C_ccall f_10537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5271)
static void C_ccall f_5271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9673)
static void C_ccall f_9673(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_9695)
static void C_ccall f_9695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9775)
static void C_ccall f_9775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9733)
static void C_ccall f_9733(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9767)
static void C_ccall f_9767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9771)
static void C_ccall f_9771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9759)
static void C_ccall f_9759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9731)
static void C_ccall f_9731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9809)
static void C_ccall f_9809(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9) C_noret;
C_noret_decl(f_9829)
static void C_ccall f_9829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5274)
static void C_ccall f_5274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5781)
static void C_ccall f_5781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8230)
static void C_ccall f_8230(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9652)
static void C_ccall f_9652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9655)
static void C_ccall f_9655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8917)
static void C_fcall f_8917(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_9642)
static void C_ccall f_9642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9640)
static void C_ccall f_9640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8921)
static void C_ccall f_8921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8936)
static void C_ccall f_8936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8945)
static void C_fcall f_8945(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8951)
static void C_ccall f_8951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8954)
static void C_ccall f_8954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8960)
static void C_ccall f_8960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9248)
static void C_fcall f_9248(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9569)
static void C_fcall f_9569(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9579)
static void C_ccall f_9579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9540)
static void C_fcall f_9540(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9550)
static void C_ccall f_9550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9522)
static void C_ccall f_9522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9525)
static void C_ccall f_9525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9470)
static void C_ccall f_9470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9473)
static void C_ccall f_9473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9317)
static void C_ccall f_9317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9364)
static void C_fcall f_9364(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9374)
static void C_ccall f_9374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9377)
static void C_ccall f_9377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9411)
static void C_ccall f_9411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9380)
static void C_ccall f_9380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9383)
static void C_ccall f_9383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9326)
static void C_ccall f_9326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9329)
static void C_ccall f_9329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9332)
static void C_ccall f_9332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8963)
static void C_ccall f_8963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9230)
static void C_ccall f_9230(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9032)
static void C_ccall f_9032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9207)
static void C_fcall f_9207(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9217)
static void C_ccall f_9217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9038)
static void C_ccall f_9038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9055)
static void C_ccall f_9055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9129)
static void C_ccall f_9129(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9058)
static void C_ccall f_9058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9061)
static void C_ccall f_9061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9106)
static void C_fcall f_9106(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9098)
static void C_ccall f_9098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9069)
static void C_ccall f_9069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8964)
static void C_fcall f_8964(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8979)
static void C_ccall f_8979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8463)
static void C_fcall f_8463(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8908)
static void C_ccall f_8908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8915)
static void C_ccall f_8915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8466)
static void C_fcall f_8466(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8895)
static void C_ccall f_8895(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8871)
static void C_ccall f_8871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8882)
static void C_ccall f_8882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8838)
static void C_ccall f_8838(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8729)
static void C_fcall f_8729(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8734)
static void C_ccall f_8734(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8676)
static void C_ccall f_8676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8682)
static void C_fcall f_8682(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8687)
static void C_ccall f_8687(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8635)
static void C_ccall f_8635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8641)
static void C_fcall f_8641(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8646)
static void C_ccall f_8646(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8619)
static void C_ccall f_8619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8615)
static void C_ccall f_8615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8585)
static void C_ccall f_8585(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8548)
static void C_ccall f_8548(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8564)
static void C_ccall f_8564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8530)
static void C_ccall f_8530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8233)
static void C_fcall f_8233(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8440)
static void C_fcall f_8440(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8450)
static void C_ccall f_8450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8428)
static void C_fcall f_8428(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8412)
static void C_ccall f_8412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8386)
static void C_ccall f_8386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8304)
static void C_ccall f_8304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8310)
static void C_ccall f_8310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8316)
static void C_ccall f_8316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8369)
static void C_ccall f_8369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8273)
static void C_ccall f_8273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5803)
static void C_ccall f_5803(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_8097)
static void C_ccall f_8097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8126)
static void C_ccall f_8126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8138)
static void C_ccall f_8138(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8152)
static void C_fcall f_8152(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8201)
static void C_ccall f_8201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5828)
static void C_fcall f_5828(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8172)
static void C_ccall f_8172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8176)
static void C_ccall f_8176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8146)
static void C_ccall f_8146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8132)
static void C_ccall f_8132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8130)
static void C_ccall f_8130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8122)
static void C_ccall f_8122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8017)
static void C_ccall f_8017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8061)
static void C_ccall f_8061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7822)
static void C_ccall f_7822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7828)
static void C_ccall f_7828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7944)
static void C_ccall f_7944(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7837)
static void C_ccall f_7837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7899)
static void C_ccall f_7899(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7897)
static void C_ccall f_7897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7859)
static void C_ccall f_7859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7737)
static void C_ccall f_7737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7778)
static void C_ccall f_7778(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7790)
static void C_ccall f_7790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7768)
static void C_ccall f_7768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7766)
static void C_ccall f_7766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7555)
static void C_ccall f_7555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7661)
static void C_ccall f_7661(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7564)
static void C_ccall f_7564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7635)
static void C_ccall f_7635(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7633)
static void C_ccall f_7633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7586)
static void C_ccall f_7586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7515)
static void C_ccall f_7515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7531)
static void C_ccall f_7531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7436)
static void C_ccall f_7436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7465)
static void C_fcall f_7465(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7288)
static void C_ccall f_7288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7311)
static void C_ccall f_7311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7317)
static void C_fcall f_7317(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7372)
static void C_fcall f_7372(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7346)
static void C_ccall f_7346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7342)
static void C_fcall f_7342(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7200)
static void C_ccall f_7200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7226)
static void C_ccall f_7226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7222)
static void C_ccall f_7222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7106)
static void C_ccall f_7106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7029)
static void C_ccall f_7029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7053)
static void C_fcall f_7053(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7057)
static void C_ccall f_7057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6941)
static void C_ccall f_6941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6997)
static void C_ccall f_6997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6993)
static void C_ccall f_6993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6870)
static void C_ccall f_6870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6882)
static void C_fcall f_6882(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6902)
static void C_ccall f_6902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6898)
static void C_ccall f_6898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6771)
static void C_ccall f_6771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6780)
static void C_ccall f_6780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6800)
static void C_ccall f_6800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6808)
static void C_ccall f_6808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6812)
static void C_ccall f_6812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6522)
static void C_ccall f_6522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6550)
static void C_fcall f_6550(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6553)
static void C_fcall f_6553(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6677)
static void C_fcall f_6677(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6706)
static void C_ccall f_6706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6564)
static void C_ccall f_6564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6642)
static void C_fcall f_6642(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6671)
static void C_ccall f_6671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6570)
static void C_ccall f_6570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6614)
static void C_ccall f_6614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6612)
static void C_ccall f_6612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6575)
static void C_ccall f_6575(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6544)
static void C_ccall f_6544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6496)
static void C_ccall f_6496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6423)
static void C_ccall f_6423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6460)
static void C_ccall f_6460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6452)
static void C_ccall f_6452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6334)
static void C_ccall f_6334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6229)
static void C_ccall f_6229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6284)
static void C_ccall f_6284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6161)
static void C_ccall f_6161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6181)
static void C_ccall f_6181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6189)
static void C_ccall f_6189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6085)
static void C_ccall f_6085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6128)
static void C_ccall f_6128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6090)
static void C_ccall f_6090(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6111)
static void C_ccall f_6111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6016)
static void C_ccall f_6016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5865)
static void C_ccall f_5865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5946)
static void C_ccall f_5946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5868)
static void C_fcall f_5868(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5783)
static void C_ccall f_5783(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5783)
static void C_ccall f_5783r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5787)
static void C_ccall f_5787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5797)
static void C_ccall f_5797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5276)
static void C_ccall f_5276(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5730)
static void C_fcall f_5730(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5763)
static void C_ccall f_5763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5743)
static void C_fcall f_5743(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5286)
static void C_ccall f_5286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5693)
static void C_fcall f_5693(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5703)
static void C_ccall f_5703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5349)
static void C_ccall f_5349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5670)
static void C_fcall f_5670(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5680)
static void C_ccall f_5680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5412)
static void C_ccall f_5412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5647)
static void C_fcall f_5647(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5657)
static void C_ccall f_5657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5476)
static void C_ccall f_5476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5479)
static void C_ccall f_5479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5499)
static void C_ccall f_5499(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5512)
static void C_fcall f_5512(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5573)
static void C_ccall f_5573(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5619)
static void C_ccall f_5619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5571)
static void C_ccall f_5571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5541)
static void C_ccall f_5541(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5482)
static void C_ccall f_5482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5491)
static void C_ccall f_5491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5413)
static void C_fcall f_5413(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5456)
static void C_ccall f_5456(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5462)
static void C_ccall f_5462(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5420)
static void C_ccall f_5420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5430)
static void C_ccall f_5430(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5443)
static void C_ccall f_5443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5428)
static void C_ccall f_5428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5424)
static void C_ccall f_5424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5350)
static void C_fcall f_5350(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5382)
static void C_ccall f_5382(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5395)
static void C_ccall f_5395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5360)
static void C_ccall f_5360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5376)
static void C_ccall f_5376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5364)
static void C_ccall f_5364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5368)
static void C_ccall f_5368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5331)
static void C_fcall f_5331(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5340)
static void C_ccall f_5340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5336)
static void C_ccall f_5336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5288)
static void C_fcall f_5288(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5294)
static void C_fcall f_5294(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5318)
static void C_ccall f_5318(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5261)
static void C_ccall f_5261(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5261)
static void C_ccall f_5261r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4940)
static void C_ccall f_4940(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4954)
static void C_ccall f_4954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4974)
static void C_ccall f_4974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5227)
static void C_ccall f_5227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5238)
static void C_fcall f_5238(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5248)
static void C_ccall f_5248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4975)
static void C_fcall f_4975(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5211)
static void C_ccall f_5211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4993)
static void C_ccall f_4993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4996)
static void C_ccall f_4996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5002)
static void C_fcall f_5002(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5022)
static void C_fcall f_5022(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5028)
static void C_ccall f_5028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5034)
static void C_fcall f_5034(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5043)
static void C_fcall f_5043(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5050)
static void C_ccall f_5050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5053)
static void C_ccall f_5053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5071)
static void C_ccall f_5071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5056)
static void C_ccall f_5056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4957)
static void C_ccall f_4957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4960)
static void C_ccall f_4960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4947)
static void C_fcall f_4947(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4943)
static C_word C_fcall f_4943(C_word t0);
C_noret_decl(f_2825)
static void C_ccall f_2825(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4819)
static void C_ccall f_4819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4825)
static void C_ccall f_4825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4829)
static void C_ccall f_4829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4832)
static void C_ccall f_4832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4868)
static void C_ccall f_4868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4905)
static void C_fcall f_4905(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4873)
static void C_ccall f_4873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4835)
static void C_ccall f_4835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4838)
static void C_ccall f_4838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4841)
static void C_ccall f_4841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4844)
static void C_ccall f_4844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4752)
static void C_fcall f_4752(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4780)
static void C_fcall f_4780(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4809)
static void C_ccall f_4809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4764)
static void C_ccall f_4764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4770)
static void C_ccall f_4770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4754)
static void C_fcall f_4754(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3191)
static void C_fcall f_3191(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4622)
static void C_ccall f_4622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4747)
static void C_ccall f_4747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4743)
static void C_ccall f_4743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4705)
static void C_fcall f_4705(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4736)
static void C_ccall f_4736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4732)
static void C_ccall f_4732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4724)
static void C_ccall f_4724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4665)
static void C_fcall f_4665(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4695)
static void C_ccall f_4695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4671)
static void C_ccall f_4671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4639)
static void C_ccall f_4639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4628)
static void C_ccall f_4628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4567)
static void C_fcall f_4567(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4596)
static void C_ccall f_4596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4565)
static void C_ccall f_4565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4555)
static void C_fcall f_4555(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4517)
static void C_ccall f_4517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4507)
static void C_ccall f_4507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3610)
static void C_ccall f_3610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3619)
static void C_ccall f_3619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3701)
static void C_ccall f_3701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3931)
static void C_fcall f_3931(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3947)
static void C_ccall f_3947(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4486)
static void C_ccall f_4486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4427)
static void C_ccall f_4427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4477)
static void C_ccall f_4477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4473)
static void C_ccall f_4473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4447)
static void C_ccall f_4447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3965)
static void C_fcall f_3965(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4063)
static void C_ccall f_4063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4414)
static void C_ccall f_4414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4277)
static void C_fcall f_4277(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4280)
static void C_ccall f_4280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4292)
static void C_ccall f_4292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4303)
static void C_ccall f_4303(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4378)
static void C_ccall f_4378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4370)
static void C_ccall f_4370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4333)
static void C_fcall f_4333(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4362)
static void C_ccall f_4362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4318)
static void C_fcall f_4318(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4297)
static void C_ccall f_4297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4077)
static void C_fcall f_4077(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4158)
static void C_ccall f_4158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4164)
static void C_ccall f_4164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4170)
static void C_ccall f_4170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4214)
static void C_ccall f_4214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4190)
static void C_ccall f_4190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4194)
static void C_ccall f_4194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4115)
static void C_fcall f_4115(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4113)
static void C_ccall f_4113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4100)
static void C_fcall f_4100(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3968)
static void C_ccall f_3968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4028)
static void C_fcall f_4028(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4038)
static void C_ccall f_4038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3979)
static void C_ccall f_3979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3982)
static void C_ccall f_3982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3985)
static void C_ccall f_3985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3990)
static void C_ccall f_3990(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4007)
static void C_ccall f_4007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3993)
static void C_ccall f_3993(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3997)
static void C_ccall f_3997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3969)
static void C_fcall f_3969(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3705)
static void C_fcall f_3705(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3727)
static void C_fcall f_3727(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3763)
static void C_ccall f_3763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3851)
static void C_ccall f_3851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3843)
static void C_ccall f_3843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3766)
static void C_fcall f_3766(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3822)
static void C_ccall f_3822(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3803)
static void C_ccall f_3803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3778)
static void C_ccall f_3778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3712)
static void C_fcall f_3712(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3633)
static void C_ccall f_3633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3636)
static void C_ccall f_3636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3672)
static void C_fcall f_3672(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3682)
static void C_ccall f_3682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3657)
static void C_ccall f_3657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3640)
static void C_fcall f_3640(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3415)
static void C_ccall f_3415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3514)
static void C_ccall f_3514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3519)
static void C_ccall f_3519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3526)
static void C_ccall f_3526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3546)
static void C_ccall f_3546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3438)
static void C_ccall f_3438(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3445)
static void C_ccall f_3445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3485)
static void C_ccall f_3485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3465)
static void C_ccall f_3465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3426)
static void C_ccall f_3426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3432)
static void C_ccall f_3432(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3312)
static void C_ccall f_3312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3390)
static void C_ccall f_3390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3397)
static void C_ccall f_3397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3315)
static void C_fcall f_3315(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3351)
static void C_fcall f_3351(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3380)
static void C_ccall f_3380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3349)
static void C_ccall f_3349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3339)
static void C_fcall f_3339(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3231)
static void C_fcall f_3231(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3002)
static void C_fcall f_3002(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3016)
static void C_ccall f_3016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3156)
static void C_ccall f_3156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3096)
static void C_ccall f_3096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3105)
static void C_ccall f_3105(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3115)
static void C_fcall f_3115(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3119)
static void C_ccall f_3119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2868)
static void C_fcall f_2868(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2883)
static void C_ccall f_2883(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2893)
static void C_ccall f_2893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2954)
static void C_fcall f_2954(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2938)
static C_word C_fcall f_2938(C_word t0,C_word t1);
C_noret_decl(f_2899)
static void C_ccall f_2899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2932)
static void C_ccall f_2932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2875)
static void C_ccall f_2875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2864)
static C_word C_fcall f_2864(C_word t0);
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2828)
static void C_fcall f_2828(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2444)
static void C_ccall f_2444(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2744)
static void C_ccall f_2744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2818)
static void C_ccall f_2818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2787)
static void C_fcall f_2787(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2754)
static void C_ccall f_2754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2797)
static void C_ccall f_2797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2519)
static void C_fcall f_2519(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2600)
static void C_fcall f_2600(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2680)
static void C_ccall f_2680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2698)
static void C_fcall f_2698(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2683)
static void C_ccall f_2683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2686)
static void C_ccall f_2686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2637)
static void C_ccall f_2637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2573)
static void C_fcall f_2573(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2556)
static void C_fcall f_2556(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2482)
static void C_fcall f_2482(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2496)
static void C_fcall f_2496(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2484)
static void C_fcall f_2484(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2477)
static C_word C_fcall f_2477(C_word t0);
C_noret_decl(f_2470)
static void C_fcall f_2470(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2475)
static void C_ccall f_2475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2447)
static void C_fcall f_2447(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2454)
static void C_fcall f_2454(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_10664)
static void C_fcall trf_10664(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10664(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10664(t0,t1,t2);}

C_noret_decl(trf_10678)
static void C_fcall trf_10678(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10678(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10678(t0,t1,t2);}

C_noret_decl(trf_9990)
static void C_fcall trf_9990(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9990(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9990(t0,t1,t2,t3);}

C_noret_decl(trf_10125)
static void C_fcall trf_10125(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10125(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_10125(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10156)
static void C_fcall trf_10156(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10156(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10156(t0,t1);}

C_noret_decl(trf_8917)
static void C_fcall trf_8917(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8917(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_8917(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_8945)
static void C_fcall trf_8945(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8945(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8945(t0,t1);}

C_noret_decl(trf_9248)
static void C_fcall trf_9248(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9248(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9248(t0,t1,t2);}

C_noret_decl(trf_9569)
static void C_fcall trf_9569(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9569(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9569(t0,t1,t2);}

C_noret_decl(trf_9540)
static void C_fcall trf_9540(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9540(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9540(t0,t1,t2);}

C_noret_decl(trf_9364)
static void C_fcall trf_9364(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9364(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9364(t0,t1,t2);}

C_noret_decl(trf_9207)
static void C_fcall trf_9207(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9207(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9207(t0,t1,t2);}

C_noret_decl(trf_9106)
static void C_fcall trf_9106(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9106(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9106(t0,t1,t2);}

C_noret_decl(trf_8964)
static void C_fcall trf_8964(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8964(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8964(t0,t1,t2);}

C_noret_decl(trf_8463)
static void C_fcall trf_8463(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8463(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_8463(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_8466)
static void C_fcall trf_8466(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8466(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_8466(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_8729)
static void C_fcall trf_8729(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8729(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8729(t0,t1);}

C_noret_decl(trf_8682)
static void C_fcall trf_8682(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8682(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8682(t0,t1);}

C_noret_decl(trf_8641)
static void C_fcall trf_8641(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8641(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8641(t0,t1);}

C_noret_decl(trf_8233)
static void C_fcall trf_8233(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8233(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8233(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8440)
static void C_fcall trf_8440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8440(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8440(t0,t1,t2);}

C_noret_decl(trf_8428)
static void C_fcall trf_8428(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8428(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8428(t0,t1,t2);}

C_noret_decl(trf_8152)
static void C_fcall trf_8152(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8152(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8152(t0,t1,t2,t3);}

C_noret_decl(trf_5828)
static void C_fcall trf_5828(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5828(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5828(t0,t1);}

C_noret_decl(trf_7465)
static void C_fcall trf_7465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7465(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7465(t0,t1);}

C_noret_decl(trf_7317)
static void C_fcall trf_7317(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7317(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7317(t0,t1);}

C_noret_decl(trf_7372)
static void C_fcall trf_7372(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7372(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7372(t0,t1);}

C_noret_decl(trf_7342)
static void C_fcall trf_7342(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7342(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7342(t0,t1);}

C_noret_decl(trf_7053)
static void C_fcall trf_7053(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7053(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7053(t0,t1);}

C_noret_decl(trf_6882)
static void C_fcall trf_6882(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6882(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6882(t0,t1);}

C_noret_decl(trf_6550)
static void C_fcall trf_6550(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6550(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6550(t0,t1);}

C_noret_decl(trf_6553)
static void C_fcall trf_6553(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6553(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6553(t0,t1);}

C_noret_decl(trf_6677)
static void C_fcall trf_6677(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6677(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6677(t0,t1,t2);}

C_noret_decl(trf_6642)
static void C_fcall trf_6642(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6642(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6642(t0,t1,t2);}

C_noret_decl(trf_5868)
static void C_fcall trf_5868(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5868(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5868(t0,t1);}

C_noret_decl(trf_5730)
static void C_fcall trf_5730(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5730(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5730(t0,t1,t2,t3);}

C_noret_decl(trf_5743)
static void C_fcall trf_5743(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5743(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5743(t0,t1);}

C_noret_decl(trf_5693)
static void C_fcall trf_5693(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5693(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5693(t0,t1,t2,t3);}

C_noret_decl(trf_5670)
static void C_fcall trf_5670(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5670(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5670(t0,t1,t2);}

C_noret_decl(trf_5647)
static void C_fcall trf_5647(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5647(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5647(t0,t1,t2);}

C_noret_decl(trf_5512)
static void C_fcall trf_5512(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5512(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5512(t0,t1);}

C_noret_decl(trf_5413)
static void C_fcall trf_5413(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5413(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5413(t0,t1,t2);}

C_noret_decl(trf_5350)
static void C_fcall trf_5350(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5350(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5350(t0,t1,t2);}

C_noret_decl(trf_5331)
static void C_fcall trf_5331(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5331(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5331(t0,t1,t2,t3);}

C_noret_decl(trf_5288)
static void C_fcall trf_5288(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5288(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5288(t0,t1,t2,t3);}

C_noret_decl(trf_5294)
static void C_fcall trf_5294(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5294(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5294(t0,t1,t2,t3);}

C_noret_decl(trf_5238)
static void C_fcall trf_5238(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5238(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5238(t0,t1,t2);}

C_noret_decl(trf_4975)
static void C_fcall trf_4975(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4975(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4975(t0,t1,t2);}

C_noret_decl(trf_5002)
static void C_fcall trf_5002(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5002(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5002(t0,t1);}

C_noret_decl(trf_5022)
static void C_fcall trf_5022(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5022(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5022(t0,t1);}

C_noret_decl(trf_5034)
static void C_fcall trf_5034(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5034(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5034(t0,t1);}

C_noret_decl(trf_5043)
static void C_fcall trf_5043(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5043(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5043(t0,t1);}

C_noret_decl(trf_4947)
static void C_fcall trf_4947(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4947(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4947(t0,t1,t2,t3);}

C_noret_decl(trf_4905)
static void C_fcall trf_4905(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4905(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4905(t0,t1,t2);}

C_noret_decl(trf_4752)
static void C_fcall trf_4752(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4752(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4752(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4780)
static void C_fcall trf_4780(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4780(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4780(t0,t1,t2);}

C_noret_decl(trf_4754)
static void C_fcall trf_4754(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4754(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4754(t0,t1,t2);}

C_noret_decl(trf_3191)
static void C_fcall trf_3191(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3191(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3191(t0,t1,t2,t3);}

C_noret_decl(trf_4705)
static void C_fcall trf_4705(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4705(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4705(t0,t1);}

C_noret_decl(trf_4665)
static void C_fcall trf_4665(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4665(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4665(t0,t1);}

C_noret_decl(trf_4567)
static void C_fcall trf_4567(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4567(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4567(t0,t1,t2);}

C_noret_decl(trf_4555)
static void C_fcall trf_4555(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4555(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4555(t0,t1,t2);}

C_noret_decl(trf_3931)
static void C_fcall trf_3931(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3931(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3931(t0,t1);}

C_noret_decl(trf_3965)
static void C_fcall trf_3965(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3965(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3965(t0,t1);}

C_noret_decl(trf_4277)
static void C_fcall trf_4277(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4277(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4277(t0,t1);}

C_noret_decl(trf_4333)
static void C_fcall trf_4333(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4333(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4333(t0,t1,t2);}

C_noret_decl(trf_4318)
static void C_fcall trf_4318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4318(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4318(t0,t1,t2);}

C_noret_decl(trf_4077)
static void C_fcall trf_4077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4077(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4077(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4115)
static void C_fcall trf_4115(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4115(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4115(t0,t1,t2);}

C_noret_decl(trf_4100)
static void C_fcall trf_4100(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4100(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4100(t0,t1,t2);}

C_noret_decl(trf_4028)
static void C_fcall trf_4028(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4028(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4028(t0,t1,t2);}

C_noret_decl(trf_3969)
static void C_fcall trf_3969(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3969(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3969(t0,t1,t2);}

C_noret_decl(trf_3705)
static void C_fcall trf_3705(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3705(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3705(t0,t1,t2);}

C_noret_decl(trf_3727)
static void C_fcall trf_3727(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3727(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3727(t0,t1);}

C_noret_decl(trf_3766)
static void C_fcall trf_3766(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3766(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3766(t0,t1);}

C_noret_decl(trf_3712)
static void C_fcall trf_3712(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3712(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3712(t0,t1);}

C_noret_decl(trf_3672)
static void C_fcall trf_3672(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3672(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3672(t0,t1,t2);}

C_noret_decl(trf_3640)
static void C_fcall trf_3640(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3640(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3640(t0,t1,t2);}

C_noret_decl(trf_3315)
static void C_fcall trf_3315(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3315(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3315(t0,t1);}

C_noret_decl(trf_3351)
static void C_fcall trf_3351(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3351(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3351(t0,t1,t2);}

C_noret_decl(trf_3339)
static void C_fcall trf_3339(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3339(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3339(t0,t1,t2);}

C_noret_decl(trf_3231)
static void C_fcall trf_3231(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3231(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3231(t0,t1,t2);}

C_noret_decl(trf_3002)
static void C_fcall trf_3002(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3002(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3002(t0,t1,t2,t3);}

C_noret_decl(trf_3115)
static void C_fcall trf_3115(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3115(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3115(t0,t1);}

C_noret_decl(trf_2868)
static void C_fcall trf_2868(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2868(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2868(t0,t1,t2);}

C_noret_decl(trf_2954)
static void C_fcall trf_2954(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2954(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2954(t0,t1,t2);}

C_noret_decl(trf_2828)
static void C_fcall trf_2828(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2828(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2828(t0,t1,t2,t3);}

C_noret_decl(trf_2787)
static void C_fcall trf_2787(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2787(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2787(t0,t1,t2);}

C_noret_decl(trf_2519)
static void C_fcall trf_2519(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2519(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2519(t0,t1,t2,t3);}

C_noret_decl(trf_2600)
static void C_fcall trf_2600(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2600(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2600(t0,t1);}

C_noret_decl(trf_2698)
static void C_fcall trf_2698(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2698(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2698(t0,t1);}

C_noret_decl(trf_2573)
static void C_fcall trf_2573(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2573(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2573(t0,t1);}

C_noret_decl(trf_2556)
static void C_fcall trf_2556(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2556(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2556(t0,t1);}

C_noret_decl(trf_2482)
static void C_fcall trf_2482(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2482(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2482(t0,t1,t2,t3);}

C_noret_decl(trf_2496)
static void C_fcall trf_2496(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2496(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2496(t0,t1,t2);}

C_noret_decl(trf_2484)
static void C_fcall trf_2484(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2484(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2484(t0,t1,t2);}

C_noret_decl(trf_2470)
static void C_fcall trf_2470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2470(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2470(t0,t1,t2,t3);}

C_noret_decl(trf_2447)
static void C_fcall trf_2447(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2447(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2447(t0,t1,t2);}

C_noret_decl(trf_2454)
static void C_fcall trf_2454(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2454(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2454(t0,t1);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr10)
static void C_fcall tr10(C_proc10 k) C_regparm C_noret;
C_regparm static void C_fcall tr10(C_proc10 k){
C_word t9=C_pick(0);
C_word t8=C_pick(1);
C_word t7=C_pick(2);
C_word t6=C_pick(3);
C_word t5=C_pick(4);
C_word t4=C_pick(5);
C_word t3=C_pick(6);
C_word t2=C_pick(7);
C_word t1=C_pick(8);
C_word t0=C_pick(9);
C_adjust_stack(-10);
(k)(10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

C_noret_decl(tr14)
static void C_fcall tr14(C_proc14 k) C_regparm C_noret;
C_regparm static void C_fcall tr14(C_proc14 k){
C_word t13=C_pick(0);
C_word t12=C_pick(1);
C_word t11=C_pick(2);
C_word t10=C_pick(3);
C_word t9=C_pick(4);
C_word t8=C_pick(5);
C_word t7=C_pick(6);
C_word t6=C_pick(7);
C_word t5=C_pick(8);
C_word t4=C_pick(9);
C_word t3=C_pick(10);
C_word t2=C_pick(11);
C_word t1=C_pick(12);
C_word t0=C_pick(13);
C_adjust_stack(-14);
(k)(14,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);}

C_noret_decl(tr11)
static void C_fcall tr11(C_proc11 k) C_regparm C_noret;
C_regparm static void C_fcall tr11(C_proc11 k){
C_word t10=C_pick(0);
C_word t9=C_pick(1);
C_word t8=C_pick(2);
C_word t7=C_pick(3);
C_word t6=C_pick(4);
C_word t5=C_pick(5);
C_word t4=C_pick(6);
C_word t3=C_pick(7);
C_word t2=C_pick(8);
C_word t1=C_pick(9);
C_word t0=C_pick(10);
C_adjust_stack(-11);
(k)(11,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}

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
C_optimizer_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_optimizer_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("optimizer_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1921)){
C_save(t1);
C_rereclaim2(1921*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,250);
lf[0]=C_h_intern(&lf[0],34,"\010compilerscan-toplevel-assignments");
lf[1]=C_h_intern(&lf[1],13,"alist-update!");
lf[2]=C_h_intern(&lf[2],8,"for-each");
lf[3]=C_h_intern(&lf[3],13,"\004corevariable");
lf[4]=C_h_intern(&lf[4],6,"remove");
lf[5]=C_h_intern(&lf[5],2,"if");
lf[6]=C_h_intern(&lf[6],3,"let");
lf[7]=C_h_intern(&lf[7],6,"append");
lf[8]=C_h_intern(&lf[8],4,"last");
lf[9]=C_h_intern(&lf[9],7,"butlast");
lf[10]=C_h_intern(&lf[10],6,"lambda");
lf[11]=C_h_intern(&lf[11],11,"\004corelambda");
lf[12]=C_h_intern(&lf[12],9,"\004corecall");
lf[13]=C_h_intern(&lf[13],13,"\004corecallunit");
lf[14]=C_h_intern(&lf[14],4,"set!");
lf[15]=C_h_intern(&lf[15],4,"node");
lf[16]=C_h_intern(&lf[16],14,"\004coreundefined");
lf[17]=C_h_intern(&lf[17],19,"\010compilercopy-node!");
lf[18]=C_h_intern(&lf[18],18,"\010compilerdebugging");
lf[19]=C_h_intern(&lf[19],1,"o");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000&dropping redundant toplevel assignment");
lf[21]=C_h_intern(&lf[21],9,"alist-ref");
lf[22]=C_h_intern(&lf[22],9,"\004corecond");
lf[23]=C_h_intern(&lf[23],11,"\004coreswitch");
lf[24]=C_h_intern(&lf[24],8,"\003sysput!");
lf[25]=C_h_intern(&lf[25],21,"\010compileralways-bound");
lf[26]=C_h_intern(&lf[26],9,"\003syserror");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\014safe globals");
lf[29]=C_h_intern(&lf[29],17,"delete-duplicates");
lf[30]=C_h_intern(&lf[30],3,"eq\077");
lf[31]=C_h_intern(&lf[31],1,"p");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000 scanning toplevel assignments...");
lf[33]=C_h_intern(&lf[33],24,"\010compilersimplifications");
lf[34]=C_h_intern(&lf[34],23,"\010compilersimplified-ops");
lf[35]=C_h_intern(&lf[35],41,"\010compilerperform-high-level-optimizations");
lf[36]=C_h_intern(&lf[36],12,"\010compilerget");
lf[37]=C_h_intern(&lf[37],5,"quote");
lf[38]=C_h_intern(&lf[38],10,"alist-cons");
lf[39]=C_h_intern(&lf[39],3,"map");
lf[40]=C_h_intern(&lf[40],19,"\010compilermatch-node");
lf[41]=C_h_intern(&lf[41],3,"any");
lf[42]=C_h_intern(&lf[42],18,"\003syshash-table-ref");
lf[43]=C_h_intern(&lf[43],30,"\010compilerbroken-constant-nodes");
lf[44]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[45]=C_h_intern(&lf[45],14,"\010compilerqnode");
lf[46]=C_h_intern(&lf[46],11,"lset-adjoin");
lf[47]=C_h_intern(&lf[47],27,"\010compilerconstant-form-eval");
lf[48]=C_h_intern(&lf[48],5,"every");
lf[49]=C_h_intern(&lf[49],9,"foldable\077");
lf[50]=C_h_intern(&lf[50],7,"\003sysget");
lf[51]=C_h_intern(&lf[51],18,"\010compilerintrinsic");
lf[52]=C_h_intern(&lf[52],5,"value");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\035substituted constant variable");
lf[54]=C_h_intern(&lf[54],16,"\010compilervarnode");
lf[55]=C_h_intern(&lf[55],11,"collapsable");
lf[56]=C_h_intern(&lf[56],10,"replacable");
lf[57]=C_h_intern(&lf[57],9,"replacing");
lf[58]=C_h_intern(&lf[58],12,"contractable");
lf[59]=C_h_intern(&lf[59],9,"removable");
lf[60]=C_h_intern(&lf[60],6,"unused");
lf[61]=C_h_intern(&lf[61],9,"partition");
lf[62]=C_h_intern(&lf[62],26,"\010compilerbuild-lambda-list");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\047merged explicitly consed rest parameter");
lf[64]=C_h_intern(&lf[64],13,"explicit-rest");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000 removed unused formal parameters");
lf[66]=C_h_intern(&lf[66],30,"\010compilerdecompose-lambda-list");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\047merged explicitly consed rest parameter");
lf[68]=C_h_intern(&lf[68],21,"has-unused-parameters");
lf[69]=C_h_intern(&lf[69],13,"\010compilerput!");
lf[70]=C_h_intern(&lf[70],13,"inline-target");
lf[71]=C_h_intern(&lf[71],31,"\010compilerinline-lambda-bindings");
lf[72]=C_h_intern(&lf[72],4,"void");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\024contracted procedure");
lf[74]=C_h_intern(&lf[74],24,"\010compilercheck-signature");
lf[75]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\0001removed call to pure procedure with unused result");
lf[77]=C_h_intern(&lf[77],28,"\010compilersource-info->string");
lf[78]=C_h_intern(&lf[78],37,"\010compilerexpression-has-side-effects\077");
lf[79]=C_h_intern(&lf[79],8,"assigned");
lf[80]=C_h_intern(&lf[80],10,"references");
lf[81]=C_h_intern(&lf[81],7,"unknown");
lf[82]=C_h_intern(&lf[82],8,"internal");
lf[83]=C_h_intern(&lf[83],1,"i");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\0008not inlining procedure because it refers to contractable");
lf[85]=C_h_intern(&lf[85],7,"call/cc");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\022inlining procedure");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\017global inlining");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\010inlining");
lf[89]=C_h_intern(&lf[89],14,"append-reverse");
lf[90]=C_h_intern(&lf[90],6,"gensym");
lf[91]=C_h_intern(&lf[91],1,"t");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000+removed unused parameter to known procedure");
lf[93]=C_h_intern(&lf[93],8,"split-at");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[95]=C_h_intern(&lf[95],20,"\004coreinline_allocate");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\042consed rest parameter at call site");
lf[97]=C_h_intern(&lf[97],21,"\010compilerllist-length");
lf[98]=C_h_intern(&lf[98],23,"\010compilerinline-locally");
lf[99]=C_h_intern(&lf[99],3,"yes");
lf[100]=C_h_intern(&lf[100],2,"no");
lf[101]=C_h_intern(&lf[101],24,"\010compilerinline-max-size");
lf[102]=C_h_intern(&lf[102],15,"\010compilerinline");
lf[103]=C_h_intern(&lf[103],9,"inlinable");
lf[104]=C_h_intern(&lf[104],22,"\010compilerinline-global");
lf[105]=C_h_intern(&lf[105],13,"\010compilerpure");
lf[106]=C_h_intern(&lf[106],11,"local-value");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\034removing global contractable");
lf[108]=C_h_intern(&lf[108],6,"global");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\0006removed side-effect free assignment to unused variable");
lf[110]=C_h_intern(&lf[110],16,"inline-transient");
lf[111]=C_h_intern(&lf[111],26,"\010compilervariable-visible\077");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\031removed conditional forms");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\025removed binding forms");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\022replaced variables");
lf[115]=C_h_intern(&lf[115],5,"print");
lf[116]=C_h_intern(&lf[116],7,"newline");
lf[117]=C_h_intern(&lf[117],6,"print*");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\027  call simplifications:");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\017simplifications");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\022traversal phase...");
lf[121]=C_h_intern(&lf[121],34,"\010compilerperform-pre-optimization!");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\023Removed `not\047 forms");
lf[123]=C_h_intern(&lf[123],24,"node-subexpressions-set!");
lf[124]=C_h_intern(&lf[124],7,"reverse");
lf[125]=C_h_intern(&lf[125],20,"node-parameters-set!");
lf[126]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[127]=C_h_intern(&lf[127],17,"\010compilerget-list");
lf[128]=C_h_intern(&lf[128],3,"not");
lf[129]=C_h_intern(&lf[129],10,"call-sites");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\031pre-optimization phase...");
lf[131]=C_h_intern(&lf[131],24,"register-simplifications");
lf[132]=C_h_intern(&lf[132],19,"\003syshash-table-set!");
lf[133]=C_h_intern(&lf[133],38,"\010compilerreorganize-recursive-bindings");
lf[134]=C_h_intern(&lf[134],4,"cons");
lf[135]=C_h_intern(&lf[135],28,"\010compilerscan-used-variables");
lf[136]=C_h_intern(&lf[136],6,"filter");
lf[137]=C_h_intern(&lf[137],6,"lset<=");
lf[138]=C_h_intern(&lf[138],10,"filter-map");
lf[139]=C_h_intern(&lf[139],10,"append-map");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000!converted assignments to bindings");
lf[141]=C_h_intern(&lf[141],10,"fold-right");
lf[142]=C_h_intern(&lf[142],4,"fold");
lf[143]=C_h_intern(&lf[143],16,"topological-sort");
lf[144]=C_h_intern(&lf[144],27,"\010compilersubstitution-table");
lf[145]=C_h_intern(&lf[145],16,"\010compilerrewrite");
lf[146]=C_h_intern(&lf[146],28,"\010compilersimplify-named-call");
lf[147]=C_h_intern(&lf[147],37,"\010compilerinline-substitutions-enabled");
lf[148]=C_h_intern(&lf[148],11,"\004coreinline");
lf[149]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[150]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[151]=C_h_intern(&lf[151],6,"unsafe");
lf[152]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[154]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[155]=C_h_intern(&lf[155],11,"number-type");
lf[156]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[157]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[158]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[159]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[160]=C_h_intern(&lf[160],6,"fixnum");
lf[161]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[162]=C_h_intern(&lf[162],21,"\010compilerfold-boolean");
lf[163]=C_h_intern(&lf[163],6,"flonum");
lf[164]=C_h_intern(&lf[164],7,"generic");
lf[165]=C_h_intern(&lf[165],5,"cons*");
lf[166]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[167]=C_h_intern(&lf[167],9,"\004coreproc");
lf[168]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[169]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[170]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[171]=C_h_intern(&lf[171],4,"conc");
lf[172]=C_h_intern(&lf[172],11,"specialized");
lf[173]=C_h_intern(&lf[173],41,"\010compilerunchecked-specialized-arithmetic");
lf[174]=C_h_intern(&lf[174],5,"fifth");
lf[175]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[176]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[177]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[178]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[179]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[180]=C_h_intern(&lf[180],19,"\010compilerfold-inner");
lf[181]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[182]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[183]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[184]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[185]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[186]=C_h_intern(&lf[186],13,"\010compilerbomb");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\023bad type (optimize)");
lf[188]=C_h_intern(&lf[188],34,"\010compilertransform-direct-lambdas!");
lf[189]=C_h_intern(&lf[189],24,"\010compilercallback-lambda");
lf[190]=C_h_intern(&lf[190],5,"boxed");
lf[191]=C_h_intern(&lf[191],18,"\004coredirect_lambda");
lf[192]=C_h_intern(&lf[192],15,"\004coreinline_ref");
lf[193]=C_h_intern(&lf[193],37,"\010compilerestimate-foreign-result-size");
lf[194]=C_h_intern(&lf[194],19,"\004coreinline_loc_ref");
lf[195]=C_h_intern(&lf[195],16,"\004coredirect_call");
lf[196]=C_h_intern(&lf[196],5,"lset=");
lf[197]=C_h_intern(&lf[197],6,"delete");
lf[198]=C_h_intern(&lf[198],4,"quit");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000;known procedure called with wrong number of arguments: `~A\047");
lf[200]=C_h_intern(&lf[200],15,"lset-difference");
lf[201]=C_h_intern(&lf[201],15,"node-class-set!");
lf[202]=C_h_intern(&lf[202],12,"\004corerecurse");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000Gknown procedure called recursively with wrong number of arguments: `~A\047");
lf[204]=C_h_intern(&lf[204],4,"take");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000Gknown procedure called recursively with wrong number of arguments: `~A\047");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\014missing kvar");
lf[207]=C_h_intern(&lf[207],11,"\004corereturn");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\017bad call (leaf)");
lf[209]=C_h_intern(&lf[209],6,"cdaddr");
lf[210]=C_h_intern(&lf[210],6,"caaddr");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid parameter list");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\0006direct leaf routine with hoistable closures/allocation");
lf[213]=C_h_intern(&lf[213],6,"unzip1");
lf[214]=C_h_intern(&lf[214],16,"\003sysmake-promise");
lf[215]=C_decode_literal(C_heaptop,"\376B\000\000\036direct leaf routine/allocation");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000(direct leaf routine optimization pass...");
lf[217]=C_h_intern(&lf[217],11,"make-vector");
lf[218]=C_h_intern(&lf[218],3,"var");
lf[219]=C_h_intern(&lf[219],2,"d2");
lf[220]=C_h_intern(&lf[220],1,"y");
lf[221]=C_h_intern(&lf[221],2,"d3");
lf[222]=C_h_intern(&lf[222],1,"z");
lf[223]=C_h_intern(&lf[223],2,"d1");
lf[224]=C_h_intern(&lf[224],1,"x");
lf[225]=C_h_intern(&lf[225],2,"op");
lf[226]=C_h_intern(&lf[226],5,"clist");
lf[227]=C_h_intern(&lf[227],34,"\010compilermembership-test-operators");
lf[228]=C_h_intern(&lf[228],32,"\010compilermembership-unfold-limit");
lf[229]=C_h_intern(&lf[229],4,"var1");
lf[230]=C_h_intern(&lf[230],4,"var0");
lf[231]=C_h_intern(&lf[231],6,"const1");
lf[232]=C_h_intern(&lf[232],4,"var2");
lf[233]=C_h_intern(&lf[233],6,"const2");
lf[234]=C_h_intern(&lf[234],5,"body2");
lf[235]=C_h_intern(&lf[235],4,"rest");
lf[236]=C_h_intern(&lf[236],5,"body1");
lf[237]=C_h_intern(&lf[237],27,"\010compilereq-inline-operator");
lf[238]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\002\376\377\016");
lf[239]=C_h_intern(&lf[239],19,"\010compilerimmediate\077");
lf[240]=C_h_intern(&lf[240],5,"const");
lf[241]=C_h_intern(&lf[241],1,"n");
lf[242]=C_h_intern(&lf[242],7,"clauses");
lf[243]=C_h_intern(&lf[243],1,"d");
lf[244]=C_h_intern(&lf[244],4,"body");
lf[245]=C_h_intern(&lf[245],4,"more");
lf[246]=C_h_intern(&lf[246],4,"args");
lf[247]=C_h_intern(&lf[247],1,"a");
lf[248]=C_h_intern(&lf[248],1,"b");
lf[249]=C_h_intern(&lf[249],1,"c");
C_register_lf2(lf,250,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2439,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2437 */
static void C_ccall f_2439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2442,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2440 in k2437 */
static void C_ccall f_2442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2442,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##compiler#scan-toplevel-assignments ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2444,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2822,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:129: make-vector */
t4=*((C_word*)lf[217]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k2820 in k2440 in k2437 */
static void C_ccall f_2822(C_word c,C_word t0,C_word t1){
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
C_word ab[56],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2822,2,t0,t1);}
t2=C_mutate((C_word*)lf[33]+1 /* (set! ##compiler#simplifications ...) */,t1);
t3=C_set_block_item(lf[34] /* simplified-ops */,0,C_SCHEME_END_OF_LIST);
t4=C_mutate((C_word*)lf[35]+1 /* (set! ##compiler#perform-high-level-optimizations ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2825,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[121]+1 /* (set! ##compiler#perform-pre-optimization! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4940,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[131]+1 /* (set! register-simplifications ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5261,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5268,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=C_a_i_list(&a,1,lf[247]);
t9=C_a_i_list(&a,2,lf[3],t8);
t10=C_a_i_cons(&a,2,lf[248],lf[249]);
t11=C_a_i_cons(&a,2,t9,t10);
t12=C_a_i_cons(&a,2,lf[243],t11);
t13=C_a_i_cons(&a,2,lf[12],t12);
t14=C_a_i_list(&a,4,lf[247],lf[248],lf[249],lf[243]);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10651,tmp=(C_word)a,a+=2,tmp);
t16=C_a_i_list(&a,3,t13,t14,t15);
t17=C_a_i_list(&a,1,t16);
/* optimizer.scm:527: ##sys#hash-table-set! */
t18=*((C_word*)lf[132]+1);
((C_proc5)(void*)(*((C_word*)t18+1)))(5,t18,t7,*((C_word*)lf[33]+1),lf[12],t17);}

/* a10650 in k2820 in k2440 in k2437 */
static void C_ccall f_10651(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_10651,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10659,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t6,a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:536: ##sys#hash-table-ref */
t8=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,*((C_word*)lf[144]+1),t3);}

/* k10657 in a10650 in k2820 in k2440 in k2437 */
static void C_ccall f_10659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10659,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10664,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_10664(t6,((C_word*)t0)[2],t2);}

/* loop in k10657 in a10650 in k2820 in k2440 in k2437 */
static void C_fcall f_10664(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10664,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10674,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=C_i_caar(t2);
t5=C_i_cdar(t2);
/* optimizer.scm:538: simplify-named-call */
t6=*((C_word*)lf[146]+1);
f_5803(9,t6,t3,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[7],((C_word*)t0)[3],t4,t5,((C_word*)t0)[2]);}}

/* k10672 in loop in k10657 in a10650 in k2820 in k2440 in k2437 */
static void C_ccall f_10674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10674,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10678,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* g971972 */
t3=t2;
f_10678(t3,((C_word*)t0)[4],t1);}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm:545: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10664(t3,((C_word*)t0)[4],t2);}}

/* g971 in k10672 in loop in k10657 in a10650 in k2820 in k2440 in k2437 */
static void C_fcall f_10678(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10678,NULL,3,t0,t1,t2);}
t3=C_i_assq(((C_word*)t0)[2],*((C_word*)lf[34]+1));
if(C_truep(t3)){
t4=C_i_cdr(t3);
t5=C_a_i_plus(&a,2,t4,C_fix(1));
t6=C_i_set_cdr(t3,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10700,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:543: alist-cons */
t5=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[2],C_fix(1),*((C_word*)lf[34]+1));}}

/* k10698 in g971 in k10672 in loop in k10657 in a10650 in k2820 in k2440 in k2437 */
static void C_ccall f_10700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[34]+1 /* (set! ##compiler#simplified-ops ...) */,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_5268(C_word c,C_word t0,C_word t1){
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
C_word ab[446],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5271,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list(&a,1,lf[229]);
t4=C_a_i_list(&a,1,lf[225]);
t5=C_a_i_list(&a,1,lf[230]);
t6=C_a_i_list(&a,2,lf[3],t5);
t7=C_a_i_list(&a,1,lf[231]);
t8=C_a_i_list(&a,2,lf[37],t7);
t9=C_a_i_list(&a,4,lf[148],t4,t6,t8);
t10=C_a_i_list(&a,1,lf[229]);
t11=C_a_i_list(&a,2,lf[3],t10);
t12=C_a_i_list(&a,1,lf[232]);
t13=C_a_i_list(&a,1,lf[225]);
t14=C_a_i_list(&a,1,lf[230]);
t15=C_a_i_list(&a,2,lf[3],t14);
t16=C_a_i_list(&a,1,lf[233]);
t17=C_a_i_list(&a,2,lf[37],t16);
t18=C_a_i_list(&a,4,lf[148],t13,t15,t17);
t19=C_a_i_list(&a,1,lf[232]);
t20=C_a_i_list(&a,2,lf[3],t19);
t21=C_a_i_list(&a,5,lf[5],lf[219],t20,lf[234],lf[235]);
t22=C_a_i_list(&a,4,lf[6],t12,t18,t21);
t23=C_a_i_list(&a,5,lf[5],lf[223],t11,lf[236],t22);
t24=C_a_i_list(&a,4,lf[6],t3,t9,t23);
t25=C_a_i_list(&a,11,lf[230],lf[229],lf[232],lf[225],lf[231],lf[233],lf[236],lf[234],lf[223],lf[219],lf[235]);
t26=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10482,tmp=(C_word)a,a+=2,tmp);
t27=C_a_i_list(&a,3,t24,t25,t26);
t28=C_a_i_list(&a,1,lf[218]);
t29=C_a_i_list(&a,1,lf[225]);
t30=C_a_i_list(&a,1,lf[230]);
t31=C_a_i_list(&a,2,lf[3],t30);
t32=C_a_i_list(&a,1,lf[240]);
t33=C_a_i_list(&a,2,lf[37],t32);
t34=C_a_i_list(&a,4,lf[148],t29,t31,t33);
t35=C_a_i_list(&a,1,lf[218]);
t36=C_a_i_list(&a,2,lf[3],t35);
t37=C_a_i_list(&a,1,lf[241]);
t38=C_a_i_list(&a,1,lf[230]);
t39=C_a_i_list(&a,2,lf[3],t38);
t40=C_a_i_cons(&a,2,t39,lf[242]);
t41=C_a_i_cons(&a,2,t37,t40);
t42=C_a_i_cons(&a,2,lf[23],t41);
t43=C_a_i_list(&a,5,lf[5],lf[243],t36,lf[244],t42);
t44=C_a_i_list(&a,4,lf[6],t28,t34,t43);
t45=C_a_i_list(&a,8,lf[218],lf[225],lf[230],lf[240],lf[243],lf[244],lf[241],lf[242]);
t46=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10353,tmp=(C_word)a,a+=2,tmp);
t47=C_a_i_list(&a,3,t44,t45,t46);
t48=C_a_i_list(&a,1,lf[229]);
t49=C_a_i_list(&a,2,lf[16],C_SCHEME_END_OF_LIST);
t50=C_a_i_list(&a,4,lf[6],t48,t49,lf[245]);
t51=C_a_i_list(&a,2,lf[229],lf[245]);
t52=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9980,tmp=(C_word)a,a+=2,tmp);
t53=C_a_i_list(&a,3,t50,t51,t52);
t54=C_a_i_list(&a,1,lf[218]);
t55=C_a_i_list(&a,1,lf[225]);
t56=C_a_i_cons(&a,2,t55,lf[246]);
t57=C_a_i_cons(&a,2,lf[148],t56);
t58=C_a_i_list(&a,1,lf[218]);
t59=C_a_i_list(&a,2,lf[3],t58);
t60=C_a_i_list(&a,5,lf[5],lf[243],t59,lf[224],lf[220]);
t61=C_a_i_list(&a,4,lf[6],t54,t57,t60);
t62=C_a_i_list(&a,6,lf[218],lf[225],lf[246],lf[243],lf[224],lf[220]);
t63=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9892,tmp=(C_word)a,a+=2,tmp);
t64=C_a_i_list(&a,3,t61,t62,t63);
t65=C_a_i_list(&a,4,t27,t47,t53,t64);
/* optimizer.scm:527: ##sys#hash-table-set! */
t66=*((C_word*)lf[132]+1);
((C_proc5)(void*)(*((C_word*)t66+1)))(5,t66,t2,*((C_word*)lf[33]+1),lf[6],t65);}

/* a9891 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_9892(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_9892,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
if(C_truep(C_i_equalp(t4,*((C_word*)lf[237]+1)))){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
else{
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9938,a[2]=t6,a[3]=t1,a[4]=t8,a[5]=t7,a[6]=t5,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:686: get-list */
t10=*((C_word*)lf[127]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,t2,t3,lf[80]);}}

/* k9936 in a9891 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_9938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9938,2,t0,t1);}
t2=C_i_length(t1);
if(C_truep(C_i_nequalp(C_fix(1),t2))){
t3=C_a_i_list1(&a,1,((C_word*)t0)[7]);
t4=((C_word*)t0)[6];
t5=C_a_i_record4(&a,4,lf[15],lf[148],t3,t4);
t6=C_a_i_list3(&a,3,t5,((C_word*)t0)[5],((C_word*)t0)[4]);
t7=((C_word*)t0)[3];
t8=((C_word*)t0)[2];
t9=t7;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_record4(&a,4,lf[15],lf[5],t8,t6));}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a9979 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_9980(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9980,5,t0,t1,t2,t3,t4);}
t5=C_a_i_list1(&a,1,t3);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9990,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_9990(t9,t1,t5,t4);}

/* loop1 in a9979 in k5266 in k2820 in k2440 in k2437 */
static void C_fcall f_9990(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9990,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=C_slot(t4,C_fix(1));
t6=t3;
t7=C_slot(t6,C_fix(2));
t8=t3;
t9=C_slot(t8,C_fix(3));
t10=C_eqp(t5,lf[6]);
if(C_truep(t10)){
t11=C_i_cdr(t7);
if(C_truep(C_i_nullp(t11))){
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t7,a[6]=t9,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t13=C_i_car(t7);
/* optimizer.scm:625: get */
t14=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t14+1)))(5,t14,t12,((C_word*)t0)[2],t13,lf[110]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}

/* k10325 in loop1 in a9979 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10327,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_car(((C_word*)t0)[5]);
/* optimizer.scm:626: get */
t4=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[2],t3,lf[80]);}}

/* k10317 in k10325 in loop1 in a9979 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10319(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10319,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_i_car(((C_word*)t0)[6]);
t3=C_slot(t2,C_fix(2));
t4=C_slot(t2,C_fix(3));
t5=C_slot(t2,C_fix(1));
t6=C_eqp(t5,lf[16]);
if(C_truep(t6)){
t7=C_i_car(((C_word*)t0)[5]);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[4]);
t9=C_i_cadr(((C_word*)t0)[6]);
/* optimizer.scm:631: loop1 */
t10=((C_word*)((C_word*)t0)[3])[1];
f_9990(t10,((C_word*)t0)[7],t8,t9);}
else{
t7=C_eqp(t5,lf[14]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10096,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:633: reverse */
t9=*((C_word*)lf[124]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,((C_word*)t0)[4]);}
else{
t8=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}}}

/* k10094 in k10317 in k10325 in loop1 in a9979 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10096(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10096,2,t0,t1);}
if(C_truep(C_i_pairp(t1))){
t2=C_i_car(((C_word*)t0)[6]);
t3=C_i_car(t1);
t4=C_eqp(t2,t3);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t0)[5]);
t6=C_a_i_list1(&a,1,t5);
t7=C_i_cdr(t1);
t8=C_i_cadr(((C_word*)t0)[4]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10125,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_10125(t12,((C_word*)t0)[2],t6,t7,t8);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop2 in k10094 in k10317 in k10325 in loop1 in a9979 in k5266 in k2820 in k2440 in k2437 */
static void C_fcall f_10125(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10125,NULL,5,t0,t1,t2,t3,t4);}
t5=t4;
t6=C_slot(t5,C_fix(1));
t7=t4;
t8=C_slot(t7,C_fix(2));
t9=t4;
t10=C_slot(t9,C_fix(3));
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10156,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=t2,a[8]=t10,tmp=(C_word)a,a+=9,tmp);
t12=C_eqp(t6,lf[6]);
if(C_truep(t12)){
t13=C_i_cdr(t8);
if(C_truep(C_i_nullp(t13))){
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10295,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=t10,a[5]=t3,a[6]=t11,tmp=(C_word)a,a+=7,tmp);
t15=C_i_car(t8);
/* optimizer.scm:644: get */
t16=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t16+1)))(5,t16,t14,((C_word*)t0)[2],t15,lf[110]);}
else{
t14=t11;
f_10156(t14,C_SCHEME_FALSE);}}
else{
t13=t11;
f_10156(t13,C_SCHEME_FALSE);}}

/* k10293 in loop2 in k10094 in k10317 in k10325 in loop1 in a9979 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10295,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
f_10156(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10287,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* optimizer.scm:645: get */
t4=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[2],t3,lf[80]);}}

/* k10285 in k10293 in loop2 in k10094 in k10317 in k10325 in loop1 in a9979 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_10156(t2,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_slot(t2,C_fix(1));
t4=C_eqp(lf[14],t3);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t0)[3]);
t6=C_i_car(((C_word*)t0)[2]);
t7=C_slot(t6,C_fix(2));
t8=C_i_car(t7);
t9=((C_word*)t0)[4];
f_10156(t9,C_eqp(t5,t8));}
else{
t5=((C_word*)t0)[4];
f_10156(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
f_10156(t2,C_SCHEME_FALSE);}}}

/* k10154 in loop2 in k10094 in k10317 in k10325 in loop1 in a9979 in k5266 in k2820 in k2440 in k2437 */
static void C_fcall f_10156(C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10156,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[8]);
t3=C_slot(t2,C_fix(3));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[7]);
t6=C_i_cdr(((C_word*)t0)[6]);
t7=C_i_cadr(((C_word*)t0)[8]);
/* optimizer.scm:649: loop2 */
t8=((C_word*)((C_word*)t0)[5])[1];
f_10125(t8,((C_word*)t0)[4],t5,t6,t7);}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[6]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10199,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10209,tmp=(C_word)a,a+=2,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* a10208 in k10154 in loop2 in k10094 in k10317 in k10325 in loop1 in a9979 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10209,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t2:C_SCHEME_FALSE));}

/* a10198 in k10154 in loop2 in k10094 in k10317 in k10325 in loop1 in a9979 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10207,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:654: reverse */
t3=*((C_word*)lf[124]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k10205 in a10198 in k10154 in loop2 in k10094 in k10317 in k10325 in loop1 in a9979 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:654: reorganize-recursive-bindings */
t2=*((C_word*)lf[133]+1);
f_5276(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a10352 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10353(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10){
C_word tmp;
C_word t11;
C_word t12;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr11,(void*)f_10353,11,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}
if(C_truep(C_i_equalp(t4,*((C_word*)lf[237]+1)))){
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10366,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=t6,a[6]=t10,a[7]=t8,a[8]=t1,a[9]=t9,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:595: immediate? */
t12=*((C_word*)lf[239]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t6);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}

/* k10364 in a10352 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10366,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10408,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:596: get-list */
t3=*((C_word*)lf[127]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[80]);}
else{
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k10406 in k10364 in a10352 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10408,2,t0,t1);}
t2=C_i_length(t1);
if(C_truep(C_i_nequalp(C_fix(1),t2))){
t3=C_a_i_plus(&a,2,((C_word*)t0)[7],C_fix(1));
t4=C_a_i_list1(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10388,a[2]=t4,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10392,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:600: varnode */
t7=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k10390 in k10406 in k10364 in a10352 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10392,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10396,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:601: qnode */
t3=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k10394 in k10390 in k10406 in k10364 in a10352 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:600: cons* */
t2=*((C_word*)lf[165]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10386 in k10406 in k10364 in a10352 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10388,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[15],lf[23],((C_word*)t0)[2],t1));}

/* a10481 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10482(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13){
C_word tmp;
C_word t14;
C_word t15;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr14,(void*)f_10482,14,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);}
if(C_truep(C_i_equalp(t6,*((C_word*)lf[237]+1)))){
t14=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10495,a[2]=t4,a[3]=t5,a[4]=t2,a[5]=t3,a[6]=t7,a[7]=t8,a[8]=t1,a[9]=t13,a[10]=t10,a[11]=t9,tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:568: immediate? */
t15=*((C_word*)lf[239]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t14,t7);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}

/* k10493 in a10481 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10495,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:569: immediate? */
t3=*((C_word*)lf[239]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k10499 in k10493 in a10481 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10501,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10553,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:570: get-list */
t3=*((C_word*)lf[127]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[80]);}
else{
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k10551 in k10499 in k10493 in a10481 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10553,2,t0,t1);}
t2=C_i_length(t1);
if(C_truep(C_i_nequalp(C_fix(1),t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10545,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:571: get-list */
t4=*((C_word*)lf[127]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2],lf[80]);}
else{
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k10543 in k10551 in k10499 in k10493 in a10481 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10545,2,t0,t1);}
t2=C_i_length(t1);
if(C_truep(C_i_nequalp(C_fix(1),t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10529,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:575: varnode */
t4=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k10527 in k10543 in k10551 in k10499 in k10493 in a10481 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10529,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10533,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:576: qnode */
t3=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k10531 in k10527 in k10543 in k10551 in k10499 in k10493 in a10481 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10537,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:578: qnode */
t3=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k10535 in k10531 in k10527 in k10543 in k10551 in k10499 in k10493 in a10481 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_10537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10537,2,t0,t1);}
t2=C_a_i_list6(&a,6,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[15],lf[23],lf[238],t2));}

/* k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_5271(C_word c,C_word t0,C_word t1){
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
C_word ab[166],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5271,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5274,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list(&a,1,lf[218]);
t4=C_a_i_list(&a,2,lf[3],t3);
t5=C_a_i_list(&a,4,lf[12],lf[219],t4,lf[220]);
t6=C_a_i_list(&a,1,lf[218]);
t7=C_a_i_list(&a,2,lf[3],t6);
t8=C_a_i_list(&a,4,lf[12],lf[221],t7,lf[222]);
t9=C_a_i_list(&a,5,lf[5],lf[223],lf[224],t5,t8);
t10=C_a_i_list(&a,7,lf[223],lf[219],lf[221],lf[224],lf[220],lf[222],lf[218]);
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9809,tmp=(C_word)a,a+=2,tmp);
t12=C_a_i_list(&a,3,t9,t10,t11);
t13=C_a_i_list(&a,1,lf[225]);
t14=C_a_i_list(&a,1,lf[226]);
t15=C_a_i_list(&a,2,lf[37],t14);
t16=C_a_i_list(&a,4,lf[148],t13,lf[224],t15);
t17=C_a_i_list(&a,5,lf[5],lf[223],t16,lf[220],lf[222]);
t18=C_a_i_list(&a,6,lf[223],lf[225],lf[224],lf[226],lf[220],lf[222]);
t19=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9673,tmp=(C_word)a,a+=2,tmp);
t20=C_a_i_list(&a,3,t17,t18,t19);
t21=C_a_i_list(&a,2,t12,t20);
/* optimizer.scm:527: ##sys#hash-table-set! */
t22=*((C_word*)lf[132]+1);
((C_proc5)(void*)(*((C_word*)t22+1)))(5,t22,t2,*((C_word*)lf[33]+1),lf[5],t21);}

/* a9672 in k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_9673(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_9673,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=C_i_assoc(t4,*((C_word*)lf[227]+1));
if(C_truep(t9)){
if(C_truep(C_i_listp(t6))){
t10=C_i_length(t6);
if(C_truep(C_i_lessp(t10,*((C_word*)lf[228]+1)))){
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9695,a[2]=t6,a[3]=t1,a[4]=t5,a[5]=t3,a[6]=t8,a[7]=t7,a[8]=t9,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:724: gensym */
t12=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k9693 in a9672 in k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_9695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9695,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[8]);
t3=C_a_i_list1(&a,1,t2);
t4=C_a_i_list1(&a,1,t1);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9731,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9733,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9775,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:741: qnode */
t8=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,C_SCHEME_FALSE);}

/* k9773 in k9693 in a9672 in k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_9775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:733: fold-right */
t2=*((C_word*)lf[141]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a9732 in k9693 in a9672 in k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_9733(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9733,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9767,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:738: varnode */
t5=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k9765 in a9732 in k9693 in a9672 in k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_9767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9771,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:738: qnode */
t3=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9769 in k9765 in a9732 in k9693 in a9672 in k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_9771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9771,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_record4(&a,4,lf[15],lf[148],((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9759,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:739: qnode */
t5=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_SCHEME_TRUE);}

/* k9757 in k9769 in k9765 in a9732 in k9693 in a9672 in k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_9759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9759,2,t0,t1);}
t2=C_a_i_list3(&a,3,((C_word*)t0)[4],t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[15],lf[22],C_SCHEME_END_OF_LIST,t2));}

/* k9729 in k9693 in a9672 in k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_9731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9731,2,t0,t1);}
t2=C_a_i_list3(&a,3,t1,((C_word*)t0)[7],((C_word*)t0)[6]);
t3=((C_word*)t0)[5];
t4=C_a_i_record4(&a,4,lf[15],lf[5],t3,t2);
t5=C_a_i_list2(&a,2,((C_word*)t0)[4],t4);
t6=((C_word*)t0)[3];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[15],lf[6],((C_word*)t0)[2],t5));}

/* a9808 in k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_9809(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr10,(void*)f_9809,10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}
if(C_truep(*((C_word*)lf[147]+1))){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9829,a[2]=t4,a[3]=t1,a[4]=t8,a[5]=t7,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:709: varnode */
t11=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t9);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k9827 in a9808 in k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_9829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9829,2,t0,t1);}
t2=C_a_i_list3(&a,3,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);
t3=C_a_i_record4(&a,4,lf[15],lf[22],C_SCHEME_END_OF_LIST,t2);
t4=C_a_i_list2(&a,2,t1,t3);
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[2];
t7=t5;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[15],lf[12],t6,t4));}

/* k5272 in k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_5274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5274,2,t0,t1);}
t2=C_mutate((C_word*)lf[133]+1 /* (set! ##compiler#reorganize-recursive-bindings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5276,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5781,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:836: make-vector */
t4=*((C_word*)lf[217]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k5779 in k5272 in k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_5781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5781,2,t0,t1);}
t2=C_mutate((C_word*)lf[144]+1 /* (set! ##compiler#substitution-table ...) */,t1);
t3=C_mutate((C_word*)lf[145]+1 /* (set! ##compiler#rewrite ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5783,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[146]+1 /* (set! ##compiler#simplify-named-call ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5803,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[188]+1 /* (set! ##compiler#transform-direct-lambdas! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8230,tmp=(C_word)a,a+=2,tmp));
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* f_8230 in k5779 in k5272 in k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_8230(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8230,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_fix(0);
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8233,a[2]=t3,a[3]=t15,a[4]=t13,a[5]=t11,a[6]=t9,a[7]=t7,a[8]=t17,tmp=(C_word)a,a+=9,tmp));
t19=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8463,a[2]=t7,a[3]=t9,a[4]=t3,a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t20=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8917,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9652,a[2]=t2,a[3]=t13,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1482: debugging */
t22=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t22+1)))(4,t22,t21,lf[31],lf[216]);}

/* k9650 */
static void C_ccall f_9652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9652,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9655,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1483: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8233(t3,t2,C_SCHEME_FALSE,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k9653 in k9650 */
static void C_ccall f_9655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* transform */
static void C_fcall f_8917(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8917,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8921,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,a[5]=t5,a[6]=t6,a[7]=t3,a[8]=t7,a[9]=t2,a[10]=((C_word*)t0)[3],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t5))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9640,a[2]=t7,a[3]=t3,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9642,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-promise */
t11=*((C_word*)lf[214]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}
else{
/* optimizer.scm:1373: debugging */
t9=*((C_word*)lf[18]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t8,lf[19],lf[215],t3,t7);}}

/* a9641 in transform */
static void C_ccall f_9642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9642,2,t0,t1);}
/* optimizer.scm:1372: unzip1 */
t2=*((C_word*)lf[213]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k9638 in transform */
static void C_ccall f_9640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1372: debugging */
t2=*((C_word*)lf[18]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[19],lf[212],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k8919 in transform */
static void C_ccall f_8921(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8921,2,t0,t1);}
t2=C_set_block_item(((C_word*)t0)[10],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[9];
t4=C_slot(t3,C_fix(2));
t5=C_i_caddr(t4);
t6=C_i_length(t5);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8936,a[2]=((C_word*)t0)[3],a[3]=t8,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t6,a[10]=((C_word*)t0)[8],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:1378: get */
t10=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,((C_word*)t0)[2],((C_word*)t0)[7],lf[129]);}

/* k8934 in k8919 in transform */
static void C_ccall f_8936(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8936,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[11]))){
t6=C_i_length(((C_word*)t0)[11]);
if(C_truep(C_i_nequalp(t6,C_fix(4)))){
t7=C_i_caddr(((C_word*)t0)[11]);
t8=t5;
f_8945(t8,C_i_listp(t7));}
else{
t7=t5;
f_8945(t7,C_SCHEME_FALSE);}}
else{
t6=t5;
f_8945(t6,C_SCHEME_FALSE);}}

/* k8943 in k8934 in k8919 in transform */
static void C_fcall f_8945(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8945,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[13]);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_8951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t2,a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* optimizer.scm:1382: caaddr */
t4=*((C_word*)lf[210]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[13]);}
else{
/* optimizer.scm:1480: bomb */
t2=*((C_word*)lf[186]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[7],lf[211],((C_word*)t0)[13]);}}

/* k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_8951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_8954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* optimizer.scm:1383: cdaddr */
t3=*((C_word*)lf[209]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[14]);}

/* k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_8954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8954,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[15]);
t3=C_i_set_car(t2,t1);
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_8960,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* optimizer.scm:1387: node-class-set! */
t5=*((C_word*)lf[201]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],lf[191]);}

/* k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_8960(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8963,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],tmp=(C_word)a,a+=11,tmp);
t3=((C_word*)t0)[5];
t4=C_slot(t3,C_fix(3));
t5=C_i_car(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9248,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp));
t9=((C_word*)t7)[1];
f_9248(t9,t2,t5);}

/* rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_fcall f_9248(C_word t0,C_word t1,C_word t2){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9248,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(2));
t5=t2;
t6=C_slot(t5,C_fix(3));
t7=t2;
t8=C_slot(t7,C_fix(1));
t9=C_eqp(t8,lf[12]);
if(C_truep(t9)){
t10=C_i_car(t6);
t11=C_i_cadr(t6);
t12=C_slot(t10,C_fix(2));
t13=C_slot(t11,C_fix(2));
t14=C_slot(t10,C_fix(1));
t15=C_eqp(lf[3],t14);
if(C_truep(t15)){
t16=C_i_car(t12);
t17=C_eqp(((C_word*)t0)[9],t16);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9317,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=t1,a[9]=t6,a[10]=((C_word*)t0)[7],a[11]=t13,a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* optimizer.scm:1401: alist-cons */
t19=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t19+1)))(5,t19,t18,C_SCHEME_FALSE,t2,((C_word*)((C_word*)t0)[8])[1]);}
else{
t18=C_i_car(t12);
t19=C_eqp(((C_word*)t0)[7],t18);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9470,a[2]=t2,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1426: node-class-set! */
t21=*((C_word*)lf[201]+1);
((C_proc4)(void*)(*((C_word*)t21+1)))(4,t21,t20,t2,lf[207]);}
else{
/* optimizer.scm:1429: bomb */
t20=*((C_word*)lf[186]+1);
((C_proc3)(void*)(*((C_word*)t20+1)))(3,t20,t1,lf[208]);}}}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_UNDEFINED);}}
else{
t10=C_eqp(t8,lf[6]);
if(C_truep(t10)){
t11=C_i_car(t4);
t12=C_i_car(t6);
if(C_truep(C_i_memq(t11,((C_word*)t0)[2]))){
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9522,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1434: alist-cons */
t14=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t14+1)))(5,t14,t13,t11,t12,((C_word*)((C_word*)t0)[4])[1]);}
else{
t13=C_i_check_list_2(t6,lf[2]);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9540,a[2]=((C_word*)t0)[3],a[3]=t15,tmp=(C_word)a,a+=4,tmp));
t17=((C_word*)t15)[1];
f_9540(t17,t1,t6);}}
else{
t11=C_i_check_list_2(t6,lf[2]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9569,a[2]=((C_word*)t0)[3],a[3]=t13,tmp=(C_word)a,a+=4,tmp));
t15=((C_word*)t13)[1];
f_9569(t15,t1,t6);}}}

/* for-each-loop2295 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_fcall f_9569(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9569,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9579,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g22962302 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_9248(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9577 in for-each-loop2295 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9569(t3,((C_word*)t0)[2],t2);}

/* for-each-loop2279 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_fcall f_9540(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9540,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9550,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g22802286 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_9248(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9548 in for-each-loop2279 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9540(t3,((C_word*)t0)[2],t2);}

/* k9520 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9522,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9525,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm:1435: copy-node! */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[3]);}

/* k9523 in k9520 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1436: rec */
t2=((C_word*)((C_word*)t0)[4])[1];
f_9248(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9468 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9470,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1427: node-parameters-set! */
t3=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k9471 in k9468 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm:1428: node-subexpressions-set! */
t3=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k9315 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9317(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9317,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[12])+1,t1);
t3=C_i_car(((C_word*)t0)[11]);
t4=C_eqp(((C_word*)t0)[10],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9326,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t6=C_i_cdr(((C_word*)t0)[9]);
t7=C_i_length(t6);
if(C_truep(C_i_nequalp(((C_word*)t0)[5],t7))){
t8=t5;
f_9326(2,t8,C_SCHEME_UNDEFINED);}
else{
/* optimizer.scm:1404: quit */
t8=*((C_word*)lf[198]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,lf[203],((C_word*)t0)[4]);}}
else{
t5=C_i_car(((C_word*)t0)[11]);
t6=C_i_assq(t5,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9364,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* g22472248 */
t8=t7;
f_9364(t8,((C_word*)t0)[8],t6);}
else{
/* optimizer.scm:1424: bomb */
t7=*((C_word*)lf[186]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[8],lf[206],((C_word*)t0)[11]);}}}

/* g2247 in k9315 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_fcall f_9364(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9364,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=C_slot(t3,C_fix(3));
t5=C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9374,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t5,a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t7=C_i_cdr(((C_word*)t0)[5]);
t8=C_i_length(t7);
if(C_truep(C_i_nequalp(((C_word*)t0)[3],t8))){
t9=t6;
f_9374(2,t9,C_SCHEME_UNDEFINED);}
else{
/* optimizer.scm:1415: quit */
t9=*((C_word*)lf[198]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,lf[205],((C_word*)t0)[2]);}}

/* k9372 in g2247 in k9315 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:1418: node-class-set! */
t3=*((C_word*)lf[201]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],lf[6]);}

/* k9375 in k9372 in g2247 in k9315 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9380,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9411,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[2],C_fix(2));
t5=C_i_caddr(t4);
/* optimizer.scm:1419: take */
t6=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t5,C_fix(1));}

/* k9409 in k9375 in k9372 in g2247 in k9315 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1419: node-parameters-set! */
t2=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k9378 in k9375 in k9372 in g2247 in k9315 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9380,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9383,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list2(&a,2,C_SCHEME_FALSE,((C_word*)t0)[4]);
t4=C_i_cddr(((C_word*)t0)[3]);
t5=C_a_i_record4(&a,4,lf[15],lf[202],t3,t4);
t6=C_a_i_list2(&a,2,t5,((C_word*)t0)[5]);
/* optimizer.scm:1420: node-subexpressions-set! */
t7=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,((C_word*)t0)[2],t6);}

/* k9381 in k9378 in k9375 in k9372 in g2247 in k9315 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1423: rec */
t2=((C_word*)((C_word*)t0)[4])[1];
f_9248(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9324 in k9315 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9326,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1407: node-class-set! */
t3=*((C_word*)lf[201]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],lf[202]);}

/* k9327 in k9324 in k9315 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9332,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list2(&a,2,C_SCHEME_TRUE,((C_word*)t0)[2]);
/* optimizer.scm:1408: node-parameters-set! */
t4=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[3],t3);}

/* k9330 in k9327 in k9324 in k9315 in rec in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cddr(((C_word*)t0)[4]);
/* optimizer.scm:1409: node-subexpressions-set! */
t3=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k8961 in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_8963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8963,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8964,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9032,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9230,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1457: lset-difference */
t5=*((C_word*)lf[200]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* a9229 in k8961 in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9230(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9230,4,t0,t1,t2,t3);}
t4=C_i_cdr(t2);
t5=C_i_cdr(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t4,t5));}

/* k9030 in k8961 in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9032,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9038,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9207,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_9207(t7,t3,t1);}

/* for-each-loop2315 in k9030 in k8961 in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_fcall f_9207(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9207,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9217,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g23162322 */
t5=((C_word*)t0)[2];
f_8964(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9215 in for-each-loop2315 in k9030 in k8961 in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9207(t3,((C_word*)t0)[2],t2);}

/* k9036 in k9030 in k8961 in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9038,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[4])?C_i_pairp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_a_i_record4(&a,4,lf[15],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9055,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1462: copy-node! */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[4],t3);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k9053 in k9036 in k9030 in k8961 in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9058,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9129,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1464: fold-right */
t4=*((C_word*)lf[141]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* a9128 in k9053 in k9036 in k9030 in k8961 in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9129(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9129,4,t0,t1,t2,t3);}
t4=C_i_car(t2);
t5=C_a_i_list1(&a,1,t4);
t6=C_i_cdr(t2);
t7=C_slot(t6,C_fix(3));
t8=C_i_car(t7);
t9=C_slot(t8,C_fix(1));
t10=C_slot(t8,C_fix(2));
t11=C_slot(t8,C_fix(3));
t12=C_a_i_record4(&a,4,lf[15],t9,t10,t11);
t13=C_a_i_list2(&a,2,t12,t3);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_a_i_record4(&a,4,lf[15],lf[6],t5,t13));}

/* k9056 in k9053 in k9036 in k9030 in k8961 in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9058,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9061,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1473: copy-node! */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[2]);}

/* k9059 in k9056 in k9053 in k9036 in k9030 in k8961 in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9061,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_i_check_list_2(t2,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9106,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_9106(t7,((C_word*)t0)[2],t2);}

/* for-each-loop2378 in k9059 in k9056 in k9053 in k9036 in k9030 in k8961 in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_fcall f_9106(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9106,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9069,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9098,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1477: gensym */
t7=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9096 in for-each-loop2378 in k9059 in k9056 in k9053 in k9036 in k9030 in k8961 in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9098,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1477: node-parameters-set! */
t3=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k9067 in for-each-loop2378 in k9059 in k9056 in k9053 in k9036 in k9030 in k8961 in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_9069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9069,2,t0,t1);}
t2=C_slot(((C_word*)t0)[5],C_fix(3));
t3=C_a_i_record4(&a,4,lf[15],lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t4=C_i_set_car(t2,t3);
t5=C_slot(((C_word*)t0)[4],C_fix(1));
t6=((C_word*)((C_word*)t0)[3])[1];
f_9106(t6,((C_word*)t0)[2],t5);}

/* g2316 in k8961 in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_fcall f_8964(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8964,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=C_slot(t3,C_fix(3));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8979,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=C_i_cdr(t4);
t7=C_i_length(t6);
if(C_truep(C_i_nequalp(((C_word*)t0)[3],t7))){
t8=t5;
f_8979(2,t8,C_SCHEME_UNDEFINED);}
else{
/* optimizer.scm:1447: quit */
t8=*((C_word*)lf[198]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,lf[199],((C_word*)t0)[2]);}}

/* k8977 in g2316 in k8961 in k8958 in k8952 in k8949 in k8943 in k8934 in k8919 in transform */
static void C_ccall f_8979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8979,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[6]);
t3=C_a_i_list4(&a,4,C_SCHEME_TRUE,C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[4]);
t4=C_i_car(((C_word*)t0)[6]);
t5=C_i_cddr(((C_word*)t0)[6]);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_record4(&a,4,lf[15],lf[195],t3,t6);
t8=C_a_i_list2(&a,2,t2,t7);
/* optimizer.scm:1450: node-subexpressions-set! */
t9=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,((C_word*)t0)[3],((C_word*)t0)[2],t8);}

/* scan */
static void C_fcall f_8463(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8463,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8466,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t5,a[7]=t12,a[8]=t8,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=t10,a[12]=t6,tmp=(C_word)a,a+=13,tmp));
t14=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_END_OF_LIST);
t15=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_END_OF_LIST);
t16=C_set_block_item(((C_word*)t0)[5],0,C_fix(0));
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8908,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t8,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1367: rec */
t18=((C_word*)t12)[1];
f_8466(t18,t17,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,t6);}

/* k8906 in scan */
static void C_ccall f_8908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8908,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8915,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1368: delete */
t3=*((C_word*)lf[197]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[30]+1));}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8913 in k8906 in scan */
static void C_ccall f_8915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1368: lset= */
t2=*((C_word*)lf[196]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],*((C_word*)lf[30]+1),((C_word*)((C_word*)t0)[2])[1],t1);}

/* rec in scan */
static void C_fcall f_8466(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8466,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=t2;
t9=C_slot(t8,C_fix(3));
t10=t2;
t11=C_slot(t10,C_fix(1));
t12=C_eqp(t11,lf[3]);
if(C_truep(t12)){
t13=C_i_car(t7);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8530,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=t13,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1299: get */
t15=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t15+1)))(5,t15,t14,((C_word*)t0)[9],t13,lf[190]);}
else{
t13=C_eqp(t11,lf[11]);
if(C_truep(t13)){
if(C_truep(t3)){
t14=C_i_caddr(t7);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8548,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=t9,a[5]=((C_word*)t0)[8],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1307: decompose-lambda-list */
t16=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,t14,t15);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t14=C_eqp(t11,lf[95]);
if(C_truep(t14)){
t15=((C_word*)((C_word*)t0)[11])[1];
if(C_truep(t15)){
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}
else{
t16=C_i_cadr(t7);
t17=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[10])[1],t16);
t18=C_mutate(((C_word *)((C_word*)t0)[10])+1,t17);
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8585,a[2]=t5,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1316: every */
t20=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t20+1)))(4,t20,t1,t19,t9);}}
else{
t15=C_eqp(t11,lf[191]);
if(C_truep(t15)){
if(C_truep(t4)){
if(C_truep(((C_word*)t0)[6])){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8619,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t17=C_i_car(t9);
/* optimizer.scm:1319: scan-used-variables */
t18=*((C_word*)lf[135]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t16,t17,t5);}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}}
else{
t16=C_eqp(t11,lf[192]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8635,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t9,a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t18=C_i_cadr(t7);
/* optimizer.scm:1324: estimate-foreign-result-size */
t19=*((C_word*)lf[193]+1);
((C_proc3)(void*)(*((C_word*)t19+1)))(3,t19,t17,t18);}
else{
t17=C_eqp(t11,lf[194]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8676,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t9,a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t19=C_i_car(t7);
/* optimizer.scm:1332: estimate-foreign-result-size */
t20=*((C_word*)lf[193]+1);
((C_proc3)(void*)(*((C_word*)t20+1)))(3,t20,t18,t19);}
else{
t18=C_eqp(t11,lf[12]);
if(C_truep(t18)){
t19=C_i_car(t9);
t20=C_slot(t19,C_fix(1));
t21=C_eqp(lf[3],t20);
if(C_truep(t21)){
t22=C_slot(t19,C_fix(2));
t23=C_i_car(t22);
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8729,a[2]=t1,a[3]=t9,a[4]=t5,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t25=C_eqp(t23,((C_word*)t0)[4]);
if(C_truep(t25)){
if(C_truep(C_i_zerop(((C_word*)((C_word*)t0)[10])[1]))){
t26=C_i_cadr(t9);
t27=C_slot(t26,C_fix(1));
t28=C_eqp(lf[3],t27);
if(C_truep(t28)){
t29=C_slot(t26,C_fix(2));
t30=C_i_car(t29);
t31=C_a_i_cons(&a,2,t30,((C_word*)((C_word*)t0)[3])[1]);
t32=C_mutate(((C_word *)((C_word*)t0)[3])+1,t31);
t33=C_set_block_item(((C_word*)t0)[11],0,C_SCHEME_TRUE);
t34=t24;
f_8729(t34,C_SCHEME_TRUE);}
else{
t29=C_set_block_item(((C_word*)t0)[11],0,C_SCHEME_TRUE);
t30=t24;
f_8729(t30,C_SCHEME_TRUE);}}
else{
t26=t24;
f_8729(t26,C_SCHEME_FALSE);}}
else{
t26=t24;
f_8729(t26,C_eqp(t23,((C_word*)t0)[2]));}}
else{
t22=t1;
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,C_SCHEME_FALSE);}}
else{
t19=C_eqp(t11,lf[195]);
if(C_truep(t19)){
t20=C_i_cadddr(t7);
t21=C_i_zerop(t20);
if(C_truep(t21)){
t22=t1;
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,t21);}
else{
t22=((C_word*)((C_word*)t0)[11])[1];
if(C_truep(t22)){
t23=t1;
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,C_SCHEME_FALSE);}
else{
t23=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[10])[1],t20);
t24=C_mutate(((C_word *)((C_word*)t0)[10])+1,t23);
t25=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8838,a[2]=t5,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1358: every */
t26=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t26+1)))(4,t26,t1,t25,t9);}}}
else{
t20=C_eqp(t11,lf[14]);
if(C_truep(t20)){
t21=C_i_car(t9);
t22=C_i_car(t7);
/* optimizer.scm:1359: rec */
t66=t1;
t67=t21;
t68=t22;
t69=C_SCHEME_FALSE;
t70=t5;
t1=t66;
t2=t67;
t3=t68;
t4=t69;
t5=t70;
goto loop;}
else{
t21=C_eqp(t11,lf[6]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8871,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=t9,tmp=(C_word)a,a+=7,tmp);
t23=C_i_car(t9);
t24=C_i_car(t7);
/* optimizer.scm:1361: rec */
t66=t22;
t67=t23;
t68=t24;
t69=t2;
t70=t5;
t1=t66;
t2=t67;
t3=t68;
t4=t69;
t5=t70;
goto loop;}
else{
t22=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8895,a[2]=t5,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1363: every */
t23=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t23+1)))(4,t23,t1,t22,t9);}}}}}}}}}}}

/* a8894 in rec in scan */
static void C_ccall f_8895(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8895,3,t0,t1,t2);}
/* optimizer.scm:1363: rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8466(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k8869 in rec in scan */
static void C_ccall f_8871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8871,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8882,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1362: append */
t4=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8880 in k8869 in rec in scan */
static void C_ccall f_8882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1362: rec */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8466(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE,t1);}

/* a8837 in rec in scan */
static void C_ccall f_8838(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8838,3,t0,t1,t2);}
/* optimizer.scm:1358: rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8466(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k8727 in rec in scan */
static void C_fcall f_8729(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8729,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8734,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm:1351: every */
t4=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a8733 in k8727 in rec in scan */
static void C_ccall f_8734(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8734,3,t0,t1,t2);}
/* optimizer.scm:1351: rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8466(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k8674 in rec in scan */
static void C_ccall f_8676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8676,2,t0,t1);}
t2=C_i_zerop(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8682,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_8682(t4,t2);}
else{
t4=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t4)){
t5=t3;
f_8682(t5,C_SCHEME_FALSE);}
else{
t5=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=t3;
f_8682(t7,C_SCHEME_TRUE);}}}

/* k8680 in k8674 in rec in scan */
static void C_fcall f_8682(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8682,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8687,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1338: every */
t3=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a8686 in k8680 in k8674 in rec in scan */
static void C_ccall f_8687(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8687,3,t0,t1,t2);}
/* optimizer.scm:1338: rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8466(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k8633 in rec in scan */
static void C_ccall f_8635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8635,2,t0,t1);}
t2=C_i_zerop(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8641,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_8641(t4,t2);}
else{
t4=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t4)){
t5=t3;
f_8641(t5,C_SCHEME_FALSE);}
else{
t5=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=t3;
f_8641(t7,C_SCHEME_TRUE);}}}

/* k8639 in k8633 in rec in scan */
static void C_fcall f_8641(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8641,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8646,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1330: every */
t3=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a8645 in k8639 in k8633 in rec in scan */
static void C_ccall f_8646(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8646,3,t0,t1,t2);}
/* optimizer.scm:1330: rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8466(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k8617 in rec in scan */
static void C_ccall f_8619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8619,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8615,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1321: alist-cons */
t3=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8613 in k8617 in rec in scan */
static void C_ccall f_8615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* a8584 in rec in scan */
static void C_ccall f_8585(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8585,3,t0,t1,t2);}
/* optimizer.scm:1316: rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8466(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* a8547 in rec in scan */
static void C_ccall f_8548(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8548,5,t0,t1,t2,t3,t4);}
t5=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[5])+1,t5);
t7=C_i_car(((C_word*)t0)[4]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8564,a[2]=t7,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1311: append */
t9=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t2,((C_word*)t0)[2]);}

/* k8562 in a8547 in rec in scan */
static void C_ccall f_8564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1311: rec */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8466(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE,t1);}

/* k8528 in rec in scan */
static void C_ccall f_8530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8530,2,t0,t1);}
t2=C_i_not(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=C_i_memq(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=C_i_not(t3);
if(C_truep(t4)){
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t5)){
t6=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],C_fix(2));
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_TRUE);}}}}

/* walk */
static void C_fcall f_8233(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t31;
C_word *a;
loop:
a=C_alloc(22);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8233,NULL,5,t0,t1,t2,t3,t4);}
t5=t3;
t6=C_slot(t5,C_fix(2));
t7=t3;
t8=C_slot(t7,C_fix(3));
t9=t3;
t10=C_slot(t9,C_fix(1));
t11=C_eqp(t10,lf[11]);
if(C_truep(t11)){
t12=C_i_caddr(t6);
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8273,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=t3,a[10]=t1,a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t2)){
if(C_truep(C_i_cadr(t6))){
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8386,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t8,a[7]=t3,a[8]=t12,a[9]=t13,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:1270: get */
t15=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t15+1)))(5,t15,t14,((C_word*)t0)[2],t2,lf[81]);}
else{
t14=t13;
f_8273(2,t14,C_SCHEME_FALSE);}}
else{
t14=t13;
f_8273(2,t14,C_SCHEME_FALSE);}}
else{
t12=C_eqp(t10,lf[14]);
if(C_truep(t12)){
t13=C_i_car(t6);
t14=C_i_car(t8);
/* optimizer.scm:1284: walk */
t28=t1;
t29=t13;
t30=t14;
t31=C_SCHEME_FALSE;
t1=t28;
t2=t29;
t3=t30;
t4=t31;
goto loop;}
else{
t13=C_eqp(t10,lf[6]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8412,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t15=C_i_car(t6);
t16=C_i_car(t8);
/* optimizer.scm:1286: walk */
t28=t14;
t29=t15;
t30=t16;
t31=t3;
t1=t28;
t2=t29;
t3=t30;
t4=t31;
goto loop;}
else{
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8428,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t15=C_i_check_list_2(t8,lf[2]);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8440,a[2]=t14,a[3]=t17,tmp=(C_word)a,a+=4,tmp));
t19=((C_word*)t17)[1];
f_8440(t19,t1,t8);}}}}

/* for-each-loop2065 in walk */
static void C_fcall f_8440(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8440,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8450,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g20662072 */
t5=((C_word*)t0)[2];
f_8428(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8448 in for-each-loop2065 in walk */
static void C_ccall f_8450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8440(t3,((C_word*)t0)[2],t2);}

/* g2066 in walk */
static void C_fcall f_8428(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8428,NULL,3,t0,t1,t2);}
/* optimizer.scm:1288: walk */
t3=((C_word*)((C_word*)t0)[2])[1];
f_8233(t3,t1,C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}

/* k8410 in walk */
static void C_ccall f_8412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[4]);
/* optimizer.scm:1287: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8233(t3,((C_word*)t0)[2],C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}

/* k8384 in walk */
static void C_ccall f_8386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8386,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[9];
f_8273(2,t2,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[8]))){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:1272: get */
t3=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5],lf[52]);}
else{
t2=((C_word*)t0)[9];
f_8273(2,t2,C_SCHEME_FALSE);}}}

/* k8302 in k8384 in walk */
static void C_ccall f_8304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8304,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:1273: get-list */
t3=*((C_word*)lf[127]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5],lf[80]);}
else{
t2=((C_word*)t0)[8];
f_8273(2,t2,C_SCHEME_FALSE);}}

/* k8308 in k8302 in k8384 in walk */
static void C_ccall f_8310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8310,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8316,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:1274: get-list */
t3=*((C_word*)lf[127]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5],lf[129]);}
else{
t2=((C_word*)t0)[8];
f_8273(2,t2,C_SCHEME_FALSE);}}

/* k8314 in k8308 in k8302 in k8384 in walk */
static void C_ccall f_8316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8316,2,t0,t1);}
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[10],((C_word*)t0)[9]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=((C_word*)t0)[9];
t5=C_slot(t4,C_fix(2));
t6=C_i_car(t5);
/* tweaks.scm:53: ##sys#get */
t7=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,lf[189]);}
else{
t3=((C_word*)t0)[8];
f_8273(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[8];
f_8273(2,t2,C_SCHEME_FALSE);}}

/* k8367 in k8314 in k8308 in k8302 in k8384 in walk */
static void C_ccall f_8369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8369,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[9];
f_8273(2,t2,C_SCHEME_FALSE);}
else{
t2=C_i_length(((C_word*)t0)[8]);
t3=C_i_length(((C_word*)t0)[7]);
if(C_truep(C_i_nequalp(t2,t3))){
t4=C_i_car(((C_word*)t0)[6]);
t5=C_i_car(((C_word*)t0)[5]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
/* optimizer.scm:1281: scan */
t7=((C_word*)((C_word*)t0)[3])[1];
f_8463(t7,((C_word*)t0)[9],t4,t5,((C_word*)t0)[4],((C_word*)t0)[2],t6);}
else{
t4=((C_word*)t0)[9];
f_8273(2,t4,C_SCHEME_FALSE);}}}

/* k8271 in walk */
static void C_ccall f_8273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* optimizer.scm:1282: transform */
t2=((C_word*)((C_word*)t0)[11])[1];
f_8917(t2,((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=C_i_car(((C_word*)t0)[3]);
/* optimizer.scm:1283: walk */
t3=((C_word*)((C_word*)t0)[2])[1];
f_8233(t3,((C_word*)t0)[10],C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}}

/* f_5803 in k5779 in k5272 in k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_5803(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_5803,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
switch(t6){
case C_fix(1):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5865,a[2]=t5,a[3]=t8,a[4]=t7,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t10=t4;
/* tweaks.scm:47: ##sys#get */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,lf[51]);
case C_fix(2):
if(C_truep(*((C_word*)lf[147]+1))){
t9=C_i_length(t8);
t10=C_i_car(t7);
if(C_truep(C_i_nequalp(t9,t10))){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6016,a[2]=t1,a[3]=t5,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t12=t4;
/* tweaks.scm:47: ##sys#get */
t13=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t11,t12,lf[51]);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(3):
if(C_truep(*((C_word*)lf[147]+1))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6085,a[2]=t7,a[3]=t8,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t10=t4;
/* tweaks.scm:47: ##sys#get */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,lf[51]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(4):
if(C_truep(*((C_word*)lf[147]+1))){
if(C_truep(*((C_word*)lf[151]+1))){
t9=C_i_length(t8);
if(C_truep(C_i_nequalp(C_fix(2),t9))){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6161,a[2]=t1,a[3]=t5,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t11=t4;
/* tweaks.scm:47: ##sys#get */
t12=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,t11,lf[51]);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(5):
if(C_truep(*((C_word*)lf[147]+1))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6229,a[2]=t1,a[3]=t5,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t10=t4;
/* tweaks.scm:47: ##sys#get */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,lf[51]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(6):
t9=C_i_caddr(t7);
t10=(C_truep(t9)?t9:*((C_word*)lf[151]+1));
if(C_truep(t10)){
if(C_truep(*((C_word*)lf[147]+1))){
t11=C_i_length(t8);
if(C_truep(C_i_nequalp(C_fix(1),t11))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6334,a[2]=t1,a[3]=t5,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:47: ##sys#get */
t14=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,lf[51]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}
case C_fix(7):
t9=C_i_cadddr(t7);
t10=(C_truep(t9)?t9:*((C_word*)lf[151]+1));
if(C_truep(t10)){
if(C_truep(*((C_word*)lf[147]+1))){
t11=C_i_length(t8);
t12=C_i_car(t7);
if(C_truep(C_i_nequalp(t11,t12))){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6423,a[2]=t8,a[3]=t1,a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t14=t4;
/* tweaks.scm:47: ##sys#get */
t15=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t13,t14,lf[51]);}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}
case C_fix(8):
if(C_truep(*((C_word*)lf[147]+1))){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6496,a[2]=t8,a[3]=t5,a[4]=t2,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t10=t4;
/* tweaks.scm:47: ##sys#get */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,lf[51]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(9):
if(C_truep(*((C_word*)lf[147]+1))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6522,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t10=t4;
/* tweaks.scm:47: ##sys#get */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,lf[51]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(10):
if(C_truep(*((C_word*)lf[147]+1))){
t9=C_i_cadddr(t7);
t10=(C_truep(t9)?t9:*((C_word*)lf[151]+1));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6771,a[2]=t1,a[3]=t5,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t12=t4;
/* tweaks.scm:47: ##sys#get */
t13=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t11,t12,lf[51]);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(11):
if(C_truep(*((C_word*)lf[147]+1))){
t9=C_i_caddr(t7);
t10=(C_truep(t9)?t9:*((C_word*)lf[151]+1));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6870,a[2]=t8,a[3]=t5,a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t12=t4;
/* tweaks.scm:47: ##sys#get */
t13=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t11,t12,lf[51]);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(12):
if(C_truep(*((C_word*)lf[147]+1))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6941,a[2]=t1,a[3]=t5,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t10=t4;
/* tweaks.scm:47: ##sys#get */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,lf[51]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(13):
if(C_truep(*((C_word*)lf[147]+1))){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7029,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t10=t4;
/* tweaks.scm:47: ##sys#get */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,lf[51]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(14):
if(C_truep(*((C_word*)lf[147]+1))){
t9=C_i_cadr(t7);
t10=C_i_length(t8);
if(C_truep(C_i_nequalp(t9,t10))){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7106,a[2]=t1,a[3]=t5,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t12=t4;
/* tweaks.scm:47: ##sys#get */
t13=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t11,t12,lf[51]);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(15):
if(C_truep(*((C_word*)lf[147]+1))){
t9=C_i_length(t8);
if(C_truep(C_i_nequalp(C_fix(1),t9))){
t10=*((C_word*)lf[151]+1);
t11=(C_truep(t10)?t10:C_i_cadddr(t7));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7200,a[2]=t8,a[3]=t5,a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:47: ##sys#get */
t14=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,lf[51]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(16):
t9=C_i_car(t7);
t10=C_i_length(t8);
t11=C_i_caddr(t7);
t12=C_i_cadddr(t7);
t13=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7288,a[2]=t4,a[3]=t11,a[4]=t7,a[5]=t12,a[6]=t1,a[7]=t5,a[8]=t8,a[9]=t10,a[10]=t9,tmp=(C_word)a,a+=11,tmp);
t14=C_i_cddddr(t7);
if(C_truep(C_i_pairp(t14))){
/* optimizer.scm:1073: fifth */
t15=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t13,t7);}
else{
t15=t13;
f_7288(2,t15,C_SCHEME_FALSE);}
case C_fix(17):
if(C_truep(*((C_word*)lf[147]+1))){
t9=C_i_length(t8);
t10=C_i_car(t7);
if(C_truep(C_i_nequalp(t9,t10))){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7436,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t12=t4;
/* tweaks.scm:47: ##sys#get */
t13=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t11,t12,lf[51]);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(18):
if(C_truep(*((C_word*)lf[147]+1))){
if(C_truep(C_i_nullp(t8))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7515,a[2]=t7,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t10=t4;
/* tweaks.scm:47: ##sys#get */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,lf[51]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(19):
if(C_truep(*((C_word*)lf[147]+1))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7555,a[2]=t8,a[3]=t1,a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t10=t4;
/* tweaks.scm:47: ##sys#get */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,lf[51]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(20):
t9=C_i_length(t8);
t10=C_i_cadddr(t7);
t11=(C_truep(t10)?t10:*((C_word*)lf[151]+1));
if(C_truep(t11)){
if(C_truep(*((C_word*)lf[147]+1))){
t12=C_i_car(t7);
if(C_truep(C_i_nequalp(t9,t12))){
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7737,a[2]=t8,a[3]=t9,a[4]=t1,a[5]=t5,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t14=t4;
/* tweaks.scm:47: ##sys#get */
t15=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t13,t14,lf[51]);}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(21):
if(C_truep(*((C_word*)lf[147]+1))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7822,a[2]=t8,a[3]=t1,a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t10=t4;
/* tweaks.scm:47: ##sys#get */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,lf[51]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(22):
t9=C_i_car(t7);
t10=C_i_length(t8);
t11=C_i_cadddr(t7);
if(C_truep(*((C_word*)lf[147]+1))){
if(C_truep(C_i_nequalp(t10,t9))){
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8017,a[2]=t11,a[3]=t1,a[4]=t5,a[5]=t8,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t13=t4;
/* tweaks.scm:47: ##sys#get */
t14=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,lf[51]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(23):
if(C_truep(*((C_word*)lf[147]+1))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8097,a[2]=t5,a[3]=t1,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t10=t4;
/* tweaks.scm:47: ##sys#get */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,lf[51]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
default:
/* optimizer.scm:1244: bomb */
t9=*((C_word*)lf[186]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t1,lf[187]);}}

/* k8095 */
static void C_ccall f_8097(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8097,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_i_length(((C_word*)t0)[4]);
t4=C_i_car(((C_word*)t0)[5]);
if(C_truep(C_i_greater_or_equalp(t3,t4))){
t5=C_i_cadr(((C_word*)t0)[5]);
t6=C_a_i_list2(&a,2,C_SCHEME_TRUE,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8122,a[2]=t6,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8126,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t9=C_i_cadr(((C_word*)t0)[5]);
/* optimizer.scm:1230: varnode */
t10=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8124 in k8095 */
static void C_ccall f_8126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8126,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8130,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8132,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8138,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}

/* a8137 in k8124 in k8095 */
static void C_ccall f_8138(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8138,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8146,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cddr(((C_word*)t0)[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8152,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_8152(t9,t4,t3,t5);}

/* loop in a8137 in k8124 in k8095 */
static void C_fcall f_8152(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8152,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8172,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(t3);
if(C_truep(C_i_symbolp(t5))){
/* optimizer.scm:845: varnode */
t6=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5828,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t5))){
t7=C_i_car(t5);
t8=t6;
f_5828(t8,C_eqp(lf[37],t7));}
else{
t7=t6;
f_5828(t7,C_SCHEME_FALSE);}}}}
else{
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8201,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(t2);
t7=C_i_cdr(t3);
/* optimizer.scm:1242: loop */
t13=t5;
t14=t6;
t15=t7;
t1=t13;
t2=t14;
t3=t15;
goto loop;}}}

/* k8199 in loop in a8137 in k8124 in k8095 */
static void C_ccall f_8201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8201,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k5826 in loop in a8137 in k8124 in k8095 */
static void C_fcall f_5828(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[3]);
/* optimizer.scm:846: qnode */
t3=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}
else{
/* optimizer.scm:847: qnode */
t2=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k8170 in loop in a8137 in k8124 in k8095 */
static void C_ccall f_8172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8176,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm:1240: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_8152(t4,t2,C_SCHEME_END_OF_LIST,t3);}

/* k8174 in k8170 in loop in a8137 in k8124 in k8095 */
static void C_ccall f_8176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8176,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k8144 in a8137 in k8124 in k8095 */
static void C_ccall f_8146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1233: append */
t2=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a8131 in k8124 in k8095 */
static void C_ccall f_8132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8132,2,t0,t1);}
/* optimizer.scm:1232: split-at */
t2=*((C_word*)lf[93]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8128 in k8124 in k8095 */
static void C_ccall f_8130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1229: cons* */
t2=*((C_word*)lf[165]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8120 in k8095 */
static void C_ccall f_8122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8122,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[15],lf[12],((C_word*)t0)[2],t1));}

/* k8015 */
static void C_ccall f_8017(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8017,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[6]);
t3=(C_truep(t2)?t2:*((C_word*)lf[151]+1));
if(C_truep(t3)){
t4=C_eqp(*((C_word*)lf[155]+1),lf[160]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8061,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1211: fifth */
t6=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[6]);}
else{
t5=C_i_cadr(((C_word*)t0)[6]);
t6=C_a_i_list2(&a,2,t5,((C_word*)t0)[2]);
t7=((C_word*)t0)[5];
t8=C_a_i_record4(&a,4,lf[15],lf[95],t6,t7);
t9=C_a_i_list2(&a,2,((C_word*)t0)[4],t8);
t10=((C_word*)t0)[3];
t11=t10;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_record4(&a,4,lf[15],lf[12],lf[185],t9));}}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8059 in k8015 */
static void C_ccall f_8061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8061,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[4];
t4=C_a_i_record4(&a,4,lf[15],lf[148],t2,t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[2];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[15],lf[12],lf[185],t5));}

/* k7820 */
static void C_ccall f_7822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7822,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7828,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1171: fifth */
t4=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7826 in k7820 */
static void C_ccall f_7828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7828,2,t0,t1);}
t2=C_i_cadddr(((C_word*)t0)[6]);
t3=(C_truep(*((C_word*)lf[151]+1))?C_i_caddr(((C_word*)t0)[6]):C_i_cadr(((C_word*)t0)[6]));
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7837,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7944,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1175: remove */
t6=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[2]);}

/* a7943 in k7826 in k7820 */
static void C_ccall f_7944(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_7944,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_eqp(lf[37],t4);
if(C_truep(t5)){
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=C_i_car(t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_eqp(((C_word*)t0)[2],t8));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k7835 in k7826 in k7820 */
static void C_ccall f_7837(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7837,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7859,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1180: qnode */
t3=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=C_i_car(t1);
t4=C_a_i_list2(&a,2,((C_word*)t0)[7],t3);
t5=((C_word*)t0)[6];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[15],lf[12],lf[183],t4));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7897,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1188: fold-inner */
t5=*((C_word*)lf[180]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t1);}}}

/* a7898 in k7835 in k7826 in k7820 */
static void C_ccall f_7899(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)tr4,(void*)f_7899,4,t0,t1,t2,t3);}
t4=C_eqp(*((C_word*)lf[155]+1),lf[160]);
if(C_truep(t4)){
t5=C_a_i_list1(&a,1,((C_word*)t0)[4]);
t6=C_a_i_list2(&a,2,t2,t3);
t7=t1;
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_record4(&a,4,lf[15],lf[148],t5,t6));}
else{
t5=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t6=C_a_i_list2(&a,2,t2,t3);
t7=t1;
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_record4(&a,4,lf[15],lf[95],t5,t6));}}

/* k7895 in k7835 in k7826 in k7820 */
static void C_ccall f_7897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7897,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[15],lf[12],lf[184],t2));}

/* k7857 in k7835 in k7826 in k7820 */
static void C_ccall f_7859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7859,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[15],lf[12],lf[182],t2));}

/* k7735 */
static void C_ccall f_7737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7737,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[6]);
t3=C_a_i_list1(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7766,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7778,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t4,t5,t6);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a7777 in k7735 */
static void C_ccall f_7778(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7778,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7790,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_i_caddr(((C_word*)t0)[2]);
/* optimizer.scm:1159: qnode */
t6=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k7788 in a7777 in k7735 */
static void C_ccall f_7790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7790,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1158: append */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a7767 in k7735 */
static void C_ccall f_7768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7768,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[3],C_fix(1));
/* optimizer.scm:1157: split-at */
t3=*((C_word*)lf[93]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[2],t2);}

/* k7764 in k7735 */
static void C_ccall f_7766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7766,2,t0,t1);}
t2=C_a_i_record4(&a,4,lf[15],lf[148],((C_word*)t0)[4],t1);
t3=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[15],lf[12],lf[181],t3));}

/* k7553 */
static void C_ccall f_7555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7555,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=(C_truep(*((C_word*)lf[151]+1))?C_i_caddr(((C_word*)t0)[5]):C_i_cadr(((C_word*)t0)[5]));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7564,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7661,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1126: remove */
t6=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a7660 in k7553 */
static void C_ccall f_7661(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_7661,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_eqp(lf[37],t4);
if(C_truep(t5)){
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=C_i_car(t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_eqp(((C_word*)t0)[2],t8));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k7562 in k7553 */
static void C_ccall f_7564(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7564,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7586,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1131: qnode */
t3=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=C_i_car(t1);
t4=C_a_i_list2(&a,2,((C_word*)t0)[6],t3);
t5=((C_word*)t0)[5];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[15],lf[12],lf[178],t4));}
else{
t3=C_i_cadddr(((C_word*)t0)[3]);
t4=(C_truep(t3)?t3:C_eqp(*((C_word*)lf[155]+1),lf[160]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7633,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7635,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1139: fold-inner */
t7=*((C_word*)lf[180]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t1);}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}}}

/* a7634 in k7562 in k7553 */
static void C_ccall f_7635(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7635,4,t0,t1,t2,t3);}
t4=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t5=C_a_i_list2(&a,2,t2,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[15],lf[148],t4,t5));}

/* k7631 in k7562 in k7553 */
static void C_ccall f_7633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7633,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[15],lf[12],lf[179],t2));}

/* k7584 in k7562 in k7553 */
static void C_ccall f_7586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7586,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[15],lf[12],lf[177],t2));}

/* k7513 */
static void C_ccall f_7515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7515,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7531,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* optimizer.scm:1113: qnode */
t4=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7529 in k7513 */
static void C_ccall f_7531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7531,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[15],lf[12],lf[176],t2));}

/* k7434 */
static void C_ccall f_7436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7436,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7465,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[151]+1))){
t3=C_i_cddr(((C_word*)t0)[2]);
t4=C_i_pairp(t3);
t5=t2;
f_7465(t5,(C_truep(t4)?C_i_caddr(((C_word*)t0)[2]):C_i_cadr(((C_word*)t0)[2])));}
else{
t3=t2;
f_7465(t3,C_i_cadr(((C_word*)t0)[2]));}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7463 in k7434 */
static void C_fcall f_7465(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7465,NULL,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[4];
t4=C_a_i_record4(&a,4,lf[15],lf[148],t2,t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[2];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[15],lf[12],lf[175],t5));}

/* k7286 */
static void C_ccall f_7288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7288,2,t0,t1);}
if(C_truep(*((C_word*)lf[147]+1))){
t2=C_i_not(((C_word*)t0)[10]);
t3=(C_truep(t2)?t2:C_i_nequalp(((C_word*)t0)[9],((C_word*)t0)[10]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7311,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t5=((C_word*)t0)[2];
/* tweaks.scm:47: ##sys#get */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,lf[51]);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7309 in k7286 */
static void C_ccall f_7311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7311,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[151]+1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7317,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t2)){
t4=t3;
f_7317(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[2],lf[172]);
if(C_truep(t4)){
t5=*((C_word*)lf[173]+1);
t6=t3;
f_7317(t6,t5);}
else{
t5=t3;
f_7317(t5,((C_word*)t0)[2]);}}}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7315 in k7309 in k7286 */
static void C_fcall f_7317(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7317,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7342,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7346,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7372,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t5=C_i_positivep(((C_word*)t0)[4]);
t6=t4;
f_7372(t6,(C_truep(t5)?C_i_less_or_equalp(((C_word*)t0)[4],C_fix(8)):C_SCHEME_FALSE));}
else{
t5=t4;
f_7372(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7370 in k7315 in k7309 in k7286 */
static void C_fcall f_7372(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[4]);
/* optimizer.scm:1087: conc */
t3=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_7346(2,t2,C_i_cadr(((C_word*)t0)[4]));}}

/* k7344 in k7315 in k7309 in k7286 */
static void C_ccall f_7346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7346,2,t0,t1);}
t2=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[4]);
if(C_truep(t2)){
t3=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t4=((C_word*)t0)[2];
f_7342(t4,C_a_i_list2(&a,2,t1,t3));}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t3=C_i_car(((C_word*)t0)[4]);
t4=C_a_i_times(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[2];
f_7342(t5,C_a_i_list2(&a,2,t1,t4));}
else{
t3=((C_word*)t0)[2];
f_7342(t3,C_a_i_list2(&a,2,t1,((C_word*)t0)[4]));}}}

/* k7340 in k7315 in k7309 in k7286 */
static void C_fcall f_7342(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7342,NULL,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=C_a_i_record4(&a,4,lf[15],lf[95],t1,t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[2];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[15],lf[12],lf[170],t4));}

/* k7198 */
static void C_ccall f_7200(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7200,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_eqp(*((C_word*)lf[155]+1),t2);
if(C_truep(t3)){
t4=C_i_caddr(((C_word*)t0)[5]);
t5=C_a_i_list2(&a,2,C_SCHEME_TRUE,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7222,a[2]=t5,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_i_caddr(((C_word*)t0)[5]);
/* optimizer.scm:1053: varnode */
t9=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}
else{
t4=C_i_cadr(((C_word*)t0)[5]);
t5=C_eqp(*((C_word*)lf[155]+1),t4);
if(C_truep(t5)){
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t7=((C_word*)t0)[4];
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_record4(&a,4,lf[15],lf[12],lf[169],t6));}
else{
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7224 in k7198 */
static void C_ccall f_7226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1053: cons* */
t2=*((C_word*)lf[165]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7220 in k7198 */
static void C_ccall f_7222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7222,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[15],lf[12],((C_word*)t0)[2],t1));}

/* k7104 */
static void C_ccall f_7106(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7106,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_eqp(*((C_word*)lf[155]+1),t2);
if(C_truep(t3)){
t4=C_i_cadddr(((C_word*)t0)[5]);
t5=(C_truep(t4)?t4:*((C_word*)lf[151]+1));
if(C_truep(t5)){
t6=(C_truep(*((C_word*)lf[151]+1))?C_i_cadddr(((C_word*)t0)[5]):C_i_caddr(((C_word*)t0)[5]));
t7=C_a_i_list1(&a,1,t6);
t8=((C_word*)t0)[4];
t9=C_a_i_record4(&a,4,lf[15],lf[148],t7,t8);
t10=C_a_i_list2(&a,2,((C_word*)t0)[3],t9);
t11=((C_word*)t0)[2];
t12=t11;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_a_i_record4(&a,4,lf[15],lf[12],lf[168],t10));}
else{
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7027 */
static void C_ccall f_7029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7029,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[6]);
t3=(C_truep(t2)?t2:*((C_word*)lf[151]+1));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[6]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7053,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t6=C_i_cdr(((C_word*)t0)[2]);
t7=t5;
f_7053(t7,C_a_i_cons(&a,2,C_SCHEME_TRUE,t6));}
else{
t6=t5;
f_7053(t6,((C_word*)t0)[2]);}}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7051 in k7027 */
static void C_fcall f_7053(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7053,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7057,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_list2(&a,2,((C_word*)t0)[4],C_SCHEME_TRUE);
t4=C_a_i_record4(&a,4,lf[15],lf[167],t3,C_SCHEME_END_OF_LIST);
/* optimizer.scm:1026: cons* */
t5=*((C_word*)lf[165]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7055 in k7051 in k7027 */
static void C_ccall f_7057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7057,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[15],lf[12],t3,t1));}

/* k6939 */
static void C_ccall f_6941(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6941,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[5]);
t3=(C_truep(t2)?t2:*((C_word*)lf[151]+1));
if(C_truep(t3)){
t4=C_i_length(((C_word*)t0)[4]);
t5=C_i_caddr(((C_word*)t0)[5]);
if(C_truep(C_i_less_or_equalp(t4,t5))){
t6=C_eqp(t4,C_fix(1));
if(C_truep(t6)){
t7=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t8=((C_word*)t0)[2];
t9=t8;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_record4(&a,4,lf[15],lf[12],lf[166],t7));}
else{
t7=C_i_car(((C_word*)t0)[5]);
t8=C_a_i_list2(&a,2,C_SCHEME_TRUE,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6993,a[2]=t8,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6997,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t11=C_i_car(((C_word*)t0)[5]);
/* optimizer.scm:1016: varnode */
t12=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t10,t11);}}
else{
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6995 in k6939 */
static void C_ccall f_6997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1016: cons* */
t2=*((C_word*)lf[165]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6991 in k6939 */
static void C_ccall f_6993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6993,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[15],lf[12],((C_word*)t0)[2],t1));}

/* k6868 */
static void C_ccall f_6870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6870,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_6882(t5,t3);}
else{
t5=C_i_length(((C_word*)t0)[2]);
t6=C_i_car(((C_word*)t0)[5]);
t7=t4;
f_6882(t7,C_i_nequalp(t5,t6));}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6880 in k6868 */
static void C_fcall f_6882(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6882,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[5]);
t3=C_a_i_list2(&a,2,C_SCHEME_TRUE,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6898,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_i_cadr(((C_word*)t0)[5]);
/* optimizer.scm:1001: varnode */
t7=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6900 in k6880 in k6868 */
static void C_ccall f_6902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1001: cons* */
t2=*((C_word*)lf[165]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6896 in k6880 in k6868 */
static void C_ccall f_6898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6898,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[15],lf[12],((C_word*)t0)[2],t1));}

/* k6769 */
static void C_ccall f_6771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6771,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:981: < */
C_lessp(5,0,t3,C_fix(0),t2,C_fix(3));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6778 in k6769 */
static void C_ccall f_6780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6780,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_a_i_list2(&a,2,C_SCHEME_FALSE,t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6800,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_i_car(((C_word*)t0)[5]);
/* optimizer.scm:983: varnode */
t6=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6798 in k6778 in k6769 */
static void C_ccall f_6800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6800,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t4=C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm:986: qnode */
t5=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k6806 in k6798 in k6778 in k6769 */
static void C_ccall f_6808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6808,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6812,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
if(C_truep(C_i_nullp(t3))){
t4=C_i_caddr(((C_word*)t0)[2]);
/* optimizer.scm:988: varnode */
t5=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}
else{
t4=t2;
f_6812(2,t4,C_i_cadr(((C_word*)t0)[3]));}}

/* k6810 in k6806 in k6798 in k6778 in k6769 */
static void C_ccall f_6812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6812,2,t0,t1);}
t2=C_a_i_list5(&a,5,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[15],lf[12],((C_word*)t0)[2],t2));}

/* k6520 */
static void C_ccall f_6522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6522,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[5]);
if(C_truep(C_i_lessp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6544,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:954: qnode */
t4=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6550,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[151]+1))){
t4=C_eqp(*((C_word*)lf[155]+1),lf[164]);
t5=t3;
f_6550(t5,C_i_not(t4));}
else{
t4=t3;
f_6550(t4,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6548 in k6520 */
static void C_fcall f_6550(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6550,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_6553(t3,t1);}
else{
t3=C_eqp(*((C_word*)lf[155]+1),lf[160]);
t4=(C_truep(t3)?C_i_caddr(((C_word*)t0)[4]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=t2;
f_6553(t5,t4);}
else{
t5=C_eqp(*((C_word*)lf[155]+1),lf[163]);
t6=t2;
f_6553(t6,(C_truep(t5)?C_i_cadddr(((C_word*)t0)[4]):C_SCHEME_FALSE));}}}

/* k6551 in k6548 in k6520 */
static void C_fcall f_6553(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6553,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[5];
t7=C_i_check_list_2(t6,lf[39]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6564,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6677,a[2]=t3,a[3]=t10,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_6677(t12,t8,t6);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* map-loop1577 in k6551 in k6548 in k6520 */
static void C_fcall f_6677(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6677,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6706,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:958: gensym */
t4=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6704 in map-loop1577 in k6551 in k6548 in k6520 */
static void C_ccall f_6706(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6706,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6677(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6677(t6,((C_word*)t0)[3],t5);}}

/* k6562 in k6551 in k6548 in k6520 */
static void C_ccall f_6564(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6564,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[54]+1);
t7=C_i_check_list_2(t1,lf[39]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6570,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6642,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_6642(t12,t8,t1);}

/* map-loop1605 in k6562 in k6551 in k6548 in k6520 */
static void C_fcall f_6642(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6642,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6671,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g16111620 */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6669 in map-loop1605 in k6562 in k6551 in k6548 in k6520 */
static void C_ccall f_6671(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6671,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6642(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6642(t6,((C_word*)t0)[3],t5);}}

/* k6568 in k6562 in k6551 in k6548 in k6520 */
static void C_ccall f_6570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6570,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6575,tmp=(C_word)a,a+=2,tmp);
t3=C_eqp(*((C_word*)lf[155]+1),lf[160]);
t4=(C_truep(t3)?C_i_car(((C_word*)t0)[6]):C_i_cadr(((C_word*)t0)[6]));
t5=C_a_i_list1(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6614,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:970: fold-boolean */
t8=*((C_word*)lf[162]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,t1);}

/* a6613 in k6568 in k6562 in k6551 in k6548 in k6520 */
static void C_ccall f_6614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6614,4,t0,t1,t2,t3);}
t4=C_a_i_list2(&a,2,t2,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[15],lf[148],((C_word*)t0)[2],t4));}

/* k6610 in k6568 in k6562 in k6551 in k6548 in k6520 */
static void C_ccall f_6612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6612,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[6],t1);
t3=C_a_i_record4(&a,4,lf[15],lf[12],lf[161],t2);
/* optimizer.scm:960: fold-right */
t4=*((C_word*)lf[141]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,((C_word*)t0)[5],((C_word*)t0)[4],t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a6574 in k6568 in k6562 in k6551 in k6548 in k6520 */
static void C_ccall f_6575(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6575,5,t0,t1,t2,t3,t4);}
t5=C_a_i_list1(&a,1,t3);
t6=C_a_i_list2(&a,2,t2,t4);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[15],lf[6],t5,t6));}

/* k6542 in k6520 */
static void C_ccall f_6544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6544,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[15],lf[12],lf[159],t2));}

/* k6494 */
static void C_ccall f_6496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[6]);
/* g15521553 */
t3=t2;
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6421 */
static void C_ccall f_6423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6423,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[5]);
t3=C_a_i_list1(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6452,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6460,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_caddr(((C_word*)t0)[5]);
/* optimizer.scm:940: qnode */
t7=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6458 in k6421 */
static void C_ccall f_6460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6460,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:939: append */
t3=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k6450 in k6421 */
static void C_ccall f_6452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6452,2,t0,t1);}
t2=C_a_i_record4(&a,4,lf[15],lf[148],((C_word*)t0)[4],t1);
t3=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[15],lf[12],lf[158],t3));}

/* k6332 */
static void C_ccall f_6334(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6334,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_a_i_list1(&a,1,t2);
t4=C_i_cadr(((C_word*)t0)[5]);
t5=C_a_i_list1(&a,1,t4);
t6=((C_word*)t0)[4];
t7=C_a_i_record4(&a,4,lf[15],lf[148],t5,t6);
t8=C_a_i_list1(&a,1,t7);
t9=C_a_i_record4(&a,4,lf[15],lf[148],t3,t8);
t10=C_a_i_list2(&a,2,((C_word*)t0)[3],t9);
t11=((C_word*)t0)[2];
t12=t11;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_a_i_record4(&a,4,lf[15],lf[12],lf[157],t10));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6227 */
static void C_ccall f_6229(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6229,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[5]);
if(C_truep(C_i_nequalp(C_fix(1),t2))){
t3=C_i_caddr(((C_word*)t0)[4]);
t4=C_i_not(t3);
t5=(C_truep(t4)?t4:C_eqp(t3,*((C_word*)lf[155]+1)));
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[4]);
t7=C_a_i_list1(&a,1,t6);
t8=C_i_car(((C_word*)t0)[5]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t10=C_i_cadr(((C_word*)t0)[4]);
/* optimizer.scm:916: qnode */
t11=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}
else{
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6282 in k6227 */
static void C_ccall f_6284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6284,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_record4(&a,4,lf[15],lf[148],((C_word*)t0)[4],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[2];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[15],lf[12],lf[156],t4));}

/* k6159 */
static void C_ccall f_6161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6161,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_a_i_list2(&a,2,C_SCHEME_FALSE,t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6181,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_i_car(((C_word*)t0)[5]);
/* optimizer.scm:898: varnode */
t6=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6179 in k6159 */
static void C_ccall f_6181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6181,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6189,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm:901: qnode */
t5=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k6187 in k6179 in k6159 */
static void C_ccall f_6189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6189,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[7]);
t3=C_a_i_list5(&a,5,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],t1,t2);
t4=((C_word*)t0)[3];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[15],lf[12],((C_word*)t0)[2],t3));}

/* k6083 */
static void C_ccall f_6085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6085,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6090,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6128,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(((C_word*)t0)[2]);
/* optimizer.scm:888: varnode */
t5=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6126 in k6083 */
static void C_ccall f_6128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6128,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_record4(&a,4,lf[15],lf[12],lf[154],t2);
/* optimizer.scm:885: fold-right */
t4=*((C_word*)lf[141]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],((C_word*)t0)[3],t3,((C_word*)t0)[2]);}

/* a6089 in k6083 */
static void C_ccall f_6090(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6090,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6111,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:887: gensym */
t5=*((C_word*)lf[90]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[153]);}

/* k6109 in a6089 in k6083 */
static void C_ccall f_6111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6111,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=C_a_i_list2(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t4=((C_word*)t0)[2];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[15],lf[6],t2,t3));}

/* k6014 */
static void C_ccall f_6016(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6016,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[5]);
t3=(C_truep(t2)?t2:*((C_word*)lf[151]+1));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=C_i_cadr(((C_word*)t0)[5]);
t6=C_a_i_list1(&a,1,t5);
t7=((C_word*)t0)[4];
t8=C_a_i_record4(&a,4,lf[15],lf[148],t6,t7);
t9=C_a_i_list2(&a,2,((C_word*)t0)[3],t8);
t10=((C_word*)t0)[2];
t11=t10;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_record4(&a,4,lf[15],lf[12],lf[152],t9));}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5863 */
static void C_ccall f_5865(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5865,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5868,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_length(((C_word*)t0)[3]);
t4=C_i_car(((C_word*)t0)[4]);
if(C_truep(C_i_nequalp(t3,t4))){
t5=C_i_car(((C_word*)t0)[3]);
t6=C_i_cadr(((C_word*)t0)[3]);
t7=C_slot(t5,C_fix(1));
t8=C_eqp(lf[3],t7);
if(C_truep(t8)){
t9=C_slot(t6,C_fix(1));
t10=C_eqp(lf[3],t9);
if(C_truep(t10)){
t11=C_slot(t5,C_fix(2));
t12=C_slot(t6,C_fix(2));
if(C_truep(C_i_equalp(t11,t12))){
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5946,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:861: qnode */
t14=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t13,C_SCHEME_TRUE);}
else{
t13=t2;
f_5868(t13,C_SCHEME_FALSE);}}
else{
t11=t2;
f_5868(t11,C_SCHEME_FALSE);}}
else{
t9=t2;
f_5868(t9,C_SCHEME_FALSE);}}
else{
t5=t2;
f_5868(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5944 in k5863 */
static void C_ccall f_5946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5946,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
f_5868(t3,C_a_i_record4(&a,4,lf[15],lf[12],lf[150],t2));}

/* k5866 in k5863 */
static void C_fcall f_5868(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_5868,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(*((C_word*)lf[147]+1))){
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_a_i_list1(&a,1,t2);
t4=((C_word*)t0)[3];
t5=C_a_i_record4(&a,4,lf[15],lf[148],t3,t4);
t6=C_a_i_list2(&a,2,((C_word*)t0)[2],t5);
t7=((C_word*)t0)[5];
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_record4(&a,4,lf[15],lf[12],lf[149],t6));}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* f_5783 in k5779 in k5272 in k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_5783(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5783r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5783r(t0,t1,t2,t3);}}

static void C_ccall f_5783r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5787,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:839: ##sys#hash-table-ref */
t5=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[144]+1),t2);}

/* k5785 */
static void C_ccall f_5787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5787,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5797,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* optimizer.scm:840: append */
t5=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,t4);}

/* k5795 in k5785 */
static void C_ccall f_5797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:840: ##sys#hash-table-set! */
t2=*((C_word*)lf[132]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],*((C_word*)lf[144]+1),((C_word*)t0)[2],t1);}

/* f_5276 in k5272 in k5269 in k5266 in k2820 in k2440 in k2437 */
static void C_ccall f_5276(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5276,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=*((C_word*)lf[134]+1);
t12=t2;
t13=t3;
t14=C_i_check_list_2(t12,lf[39]);
t15=C_i_check_list_2(t13,lf[39]);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5286,a[2]=t4,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5730,a[2]=t11,a[3]=t8,a[4]=t18,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_5730(t20,t16,t12,t13);}

/* map-loop1196 */
static void C_fcall f_5730(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_5730,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5763,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g12021212 */
t9=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5761 in map-loop1196 */
static void C_ccall f_5763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5763,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5743,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_5743(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_5743(t5,t4);}}

/* k5741 in k5761 in map-loop1196 */
static void C_fcall f_5743(C_word t0,C_word t1){
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
f_5730(t5,((C_word*)t0)[2],t3,t4);}

/* k5284 */
static void C_ccall f_5286(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5286,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5288,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5331,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[4];
t6=C_i_check_list_2(t4,lf[2]);
t7=C_i_check_list_2(t5,lf[2]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5693,a[2]=t3,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_5693(t12,t8,t4,t5);}

/* for-each-loop1227 in k5284 */
static void C_fcall f_5693(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_5693,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5703,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g12281249 */
t9=((C_word*)t0)[2];
f_5331(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5701 in for-each-loop1227 in k5284 */
static void C_ccall f_5703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_5693(t4,((C_word*)t0)[2],t2,t3);}

/* k5347 in k5284 */
static void C_ccall f_5349(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5349,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5350,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[6];
t8=C_i_check_list_2(t7,lf[2]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,tmp=(C_word)a,a+=9,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5670,a[2]=t6,a[3]=t11,tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];
f_5670(t13,t9,t7);}

/* for-each-loop1266 in k5347 in k5284 */
static void C_fcall f_5670(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5670,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5680,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g12671273 */
t5=((C_word*)t0)[2];
f_5350(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5678 in for-each-loop1266 in k5347 in k5284 */
static void C_ccall f_5680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5670(t3,((C_word*)t0)[2],t2);}

/* k5410 in k5347 in k5284 */
static void C_ccall f_5412(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5412,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5413,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)((C_word*)t0)[8])[1];
t6=C_i_check_list_2(t5,lf[2]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5476,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5647,a[2]=t4,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_5647(t11,t7,t5);}

/* for-each-loop1289 in k5410 in k5347 in k5284 */
static void C_fcall f_5647(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5647,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5657,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g12901296 */
t5=((C_word*)t0)[2];
f_5413(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5655 in for-each-loop1289 in k5410 in k5347 in k5284 */
static void C_ccall f_5657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5647(t3,((C_word*)t0)[2],t2);}

/* k5474 in k5410 in k5347 in k5284 */
static void C_ccall f_5476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5476,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5479,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:798: topological-sort */
t3=*((C_word*)lf[143]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[30]+1));}

/* k5477 in k5474 in k5410 in k5347 in k5284 */
static void C_ccall f_5479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5479,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5482,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5499,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:803: fold */
t6=*((C_word*)lf[142]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,t5,((C_word*)t0)[2],t1);}

/* a5498 in k5477 in k5474 in k5410 in k5347 in k5284 */
static void C_ccall f_5499(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5499,4,t0,t1,t2,t3);}
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[5])[1]);
t5=C_i_cdr(t4);
t6=C_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5512,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t8=C_i_cdr(t5);
if(C_truep(C_i_nullp(t8))){
t9=C_i_assq(t6,((C_word*)((C_word*)t0)[2])[1]);
t10=C_i_cdr(t9);
t11=C_i_memq(t6,t10);
t12=t7;
f_5512(t12,C_i_not(t11));}
else{
t9=t7;
f_5512(t9,C_SCHEME_FALSE);}}

/* k5510 in a5498 in k5477 in k5474 in k5410 in k5347 in k5284 */
static void C_fcall f_5512(C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5512,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_i_assq(((C_word*)t0)[7],((C_word*)t0)[5]);
t5=C_i_cdr(t4);
t6=C_a_i_list2(&a,2,t5,((C_word*)t0)[4]);
t7=((C_word*)t0)[3];
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_record4(&a,4,lf[15],lf[6],((C_word*)t0)[2],t6));}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5541,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5571,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5573,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:817: fold-right */
t5=*((C_word*)lf[141]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* a5572 in k5510 in a5498 in k5477 in k5474 in k5410 in k5347 in k5284 */
static void C_ccall f_5573(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5573,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5619,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:820: gensym */
t5=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k5617 in a5572 in k5510 in a5498 in k5477 in k5474 in k5410 in k5347 in k5284 */
static void C_ccall f_5619(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5619,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
t4=C_i_assq(((C_word*)t0)[5],((C_word*)t0)[4]);
t5=C_i_cdr(t4);
t6=C_a_i_list1(&a,1,t5);
t7=C_a_i_record4(&a,4,lf[15],lf[14],t3,t6);
t8=C_a_i_list2(&a,2,t7,((C_word*)t0)[3]);
t9=((C_word*)t0)[2];
t10=t9;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_record4(&a,4,lf[15],lf[6],t2,t8));}

/* k5569 in k5510 in a5498 in k5477 in k5474 in k5410 in k5347 in k5284 */
static void C_ccall f_5571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:812: fold-right */
t2=*((C_word*)lf[141]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a5540 in k5510 in a5498 in k5477 in k5474 in k5410 in k5347 in k5284 */
static void C_ccall f_5541(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5541,4,t0,t1,t2,t3);}
t4=C_a_i_list1(&a,1,t2);
t5=C_a_i_record4(&a,4,lf[15],lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t6=C_a_i_list2(&a,2,t5,t3);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[15],lf[6],t4,t6));}

/* k5480 in k5477 in k5474 in k5410 in k5347 in k5284 */
static void C_ccall f_5482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5482,2,t0,t1);}
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5491,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:829: debugging */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[19],lf[140],((C_word*)((C_word*)t0)[3])[1]);}
else{
/* optimizer.scm:831: values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}}

/* k5489 in k5480 in k5477 in k5474 in k5410 in k5347 in k5284 */
static void C_ccall f_5491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:830: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE);}

/* g1290 in k5410 in k5347 in k5284 */
static void C_fcall f_5413(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5413,NULL,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5420,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(t2);
/* optimizer.scm:785: append-map */
t7=*((C_word*)lf[139]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,t5,t6);}

/* a5455 in g1290 in k5410 in k5347 in k5284 */
static void C_ccall f_5456(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5456,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5462,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:786: filter */
t4=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,((C_word*)t0)[2]);}

/* a5461 in a5455 in g1290 in k5410 in k5347 in k5284 */
static void C_ccall f_5462(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5462,3,t0,t1,t2);}
/* optimizer.scm:786: find-path */
t3=((C_word*)t0)[3];
f_5288(t3,t1,((C_word*)t0)[2],t2);}

/* k5418 in g1290 in k5410 in k5347 in k5284 */
static void C_ccall f_5420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5424,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5428,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5430,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:791: filter-map */
t5=*((C_word*)lf[138]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* a5429 in k5418 in g1290 in k5410 in k5347 in k5284 */
static void C_ccall f_5430(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5430,3,t0,t1,t2);}
t3=C_eqp(t2,((C_word*)t0)[3]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5443,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cdr(t2);
/* optimizer.scm:792: lset<= */
t6=*((C_word*)lf[137]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,*((C_word*)lf[30]+1),t5,((C_word*)t0)[2]);}}

/* k5441 in a5429 in k5418 in g1290 in k5410 in k5347 in k5284 */
static void C_ccall f_5443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_i_car(((C_word*)t0)[2]):C_SCHEME_FALSE));}

/* k5426 in k5418 in g1290 in k5410 in k5347 in k5284 */
static void C_ccall f_5428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:789: alist-cons */
t2=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k5422 in k5418 in g1290 in k5410 in k5347 in k5284 */
static void C_ccall f_5424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* g1267 in k5347 in k5284 */
static void C_fcall f_5350(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5350,NULL,3,t0,t1,t2);}
if(C_truep(C_i_memq(t2,((C_word*)((C_word*)t0)[5])[1]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5360,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5382,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:772: filter */
t5=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}}

/* a5381 in g1267 in k5347 in k5284 */
static void C_ccall f_5382(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5382,3,t0,t1,t2);}
t3=C_eqp(t2,((C_word*)t0)[3]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5395,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:773: find-path */
t5=((C_word*)t0)[2];
f_5288(t5,t4,((C_word*)t0)[3],t2);}}

/* k5393 in a5381 in g1267 in k5347 in k5284 */
static void C_ccall f_5395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* optimizer.scm:773: find-path */
t2=((C_word*)t0)[5];
f_5288(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5358 in g1267 in k5347 in k5284 */
static void C_ccall f_5360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5360,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5364,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5376,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:775: gensym */
t4=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5374 in k5358 in g1267 in k5347 in k5284 */
static void C_ccall f_5376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5376,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
/* optimizer.scm:775: alist-cons */
t3=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],t1,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k5362 in k5358 in g1267 in k5347 in k5284 */
static void C_ccall f_5364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5364,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5368,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* optimizer.scm:776: append */
t5=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}

/* k5366 in k5362 in k5358 in g1267 in k5347 in k5284 */
static void C_ccall f_5368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* g1228 in k5284 */
static void C_fcall f_5331(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5331,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5336,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5340,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:763: scan-used-variables */
t6=*((C_word*)lf[135]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,((C_word*)t0)[2]);}

/* k5338 in g1228 in k5284 */
static void C_ccall f_5340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:763: alist-cons */
t2=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k5334 in g1228 in k5284 */
static void C_ccall f_5336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* find-path in k5284 */
static void C_fcall f_5288(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5288,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5294,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_5294(t7,t1,t2,C_SCHEME_END_OF_LIST);}

/* find in find-path in k5284 */
static void C_fcall f_5294(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5294,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_memq(t2,t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[4])[1]);
t5=C_i_cdr(t4);
t6=C_i_memq(((C_word*)t0)[3],t5);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=C_a_i_cons(&a,2,t2,t3);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5318,a[2]=t7,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:759: any */
t9=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t1,t8,t5);}}}

/* a5317 in find in find-path in k5284 */
static void C_ccall f_5318(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5318,3,t0,t1,t2);}
/* optimizer.scm:759: find */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5294(t3,t1,t2,((C_word*)t0)[2]);}

/* f_5261 in k2820 in k2440 in k2437 */
static void C_ccall f_5261(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_5261r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5261r(t0,t1,t2,t3);}}

static void C_ccall f_5261r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* optimizer.scm:527: ##sys#hash-table-set! */
t4=*((C_word*)lf[132]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,*((C_word*)lf[33]+1),t2,t3);}

/* f_4940 in k2820 in k2440 in k2437 */
static void C_ccall f_4940(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4940,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4943,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4947,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4954,a[2]=t11,a[3]=t3,a[4]=t9,a[5]=t7,a[6]=t5,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:479: debugging */
t15=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,lf[31],lf[130]);}

/* k4952 */
static void C_ccall f_4954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4957,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4974,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* tweaks.scm:47: ##sys#get */
t4=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[128],lf[51]);}

/* k4972 in k4952 */
static void C_ccall f_4974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4974,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4975,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5227,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:518: test */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4947(t4,t3,lf[128],lf[129]);}
else{
t2=((C_word*)t0)[2];
f_4957(2,t2,C_SCHEME_UNDEFINED);}}

/* k5225 in k4972 in k4952 */
static void C_ccall f_5227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5227,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_i_check_list_2(t2,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5238,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5238(t7,((C_word*)t0)[2],t2);}

/* for-each-loop876 in k5225 in k4972 in k4952 */
static void C_fcall f_5238(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5238,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5248,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g877883 */
t5=((C_word*)t0)[2];
f_4975(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5246 in for-each-loop876 in k5225 in k4972 in k4952 */
static void C_ccall f_5248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5238(t3,((C_word*)t0)[2],t2);}

/* g877 in k4972 in k4952 */
static void C_fcall f_4975(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_4975,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=C_slot(t3,C_fix(3));
t5=C_i_cadr(t4);
t6=C_slot(t5,C_fix(2));
t7=C_i_car(t6);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4993,a[2]=t7,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=t1,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5211,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:488: test */
t10=((C_word*)((C_word*)t0)[2])[1];
f_4947(t10,t9,t7,lf[81]);}

/* k5209 in g877 in k4972 in k4952 */
static void C_ccall f_5211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_4993(2,t2,C_SCHEME_FALSE);}
else{
/* optimizer.scm:488: test */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4947(t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[52]);}}

/* k4991 in g877 in k4972 in k4952 */
static void C_ccall f_4993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4996,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:489: get-list */
t3=*((C_word*)lf[127]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[80]);}

/* k4994 in k4991 in g877 in k4972 in k4952 */
static void C_ccall f_4996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[8])){
if(C_truep(t1)){
t3=C_i_length(t1);
if(C_truep(C_i_nequalp(C_fix(1),t3))){
t4=C_i_length(((C_word*)t0)[4]);
if(C_truep(C_i_nequalp(C_fix(3),t4))){
t5=((C_word*)t0)[8];
t6=C_slot(t5,C_fix(1));
t7=t2;
f_5002(t7,C_eqp(lf[11],t6));}
else{
t5=t2;
f_5002(t5,C_SCHEME_FALSE);}}
else{
t4=t2;
f_5002(t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_5002(t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_5002(t3,C_SCHEME_FALSE);}}

/* k5000 in k4994 in k4991 in g877 in k4972 in k4952 */
static void C_fcall f_5002(C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5002,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=C_slot(t2,C_fix(2));
t4=C_i_caddr(t3);
t5=((C_word*)t0)[8];
t6=C_slot(t5,C_fix(3));
t7=C_i_car(t6);
t8=C_slot(t7,C_fix(3));
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5022,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t8,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t7,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_listp(t4))){
t10=C_i_cdr(t4);
t11=t9;
f_5022(t11,C_i_nullp(t10));}
else{
t10=t9;
f_5022(t10,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5020 in k5000 in k4994 in k4991 in g877 in k4972 in k4952 */
static void C_fcall f_5022(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5022,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[10]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5028,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:500: get-list */
t4=*((C_word*)lf[127]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],t2,lf[80]);}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k5026 in k5020 in k5000 in k4994 in k4991 in g877 in k4972 in k4952 */
static void C_ccall f_5028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5028,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t1)){
t3=C_i_length(t1);
if(C_truep(C_i_nequalp(C_fix(1),t3))){
t4=C_slot(((C_word*)t0)[9],C_fix(1));
t5=t2;
f_5034(t5,C_eqp(lf[5],t4));}
else{
t4=t2;
f_5034(t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_5034(t3,C_SCHEME_FALSE);}}

/* k5032 in k5026 in k5020 in k5000 in k4994 in k4991 in g877 in k4972 in k4952 */
static void C_fcall f_5034(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_5034,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[9],C_fix(3));
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5043,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t5=C_slot(t3,C_fix(1));
t6=C_eqp(lf[3],t5);
if(C_truep(t6)){
t7=C_slot(t3,C_fix(2));
t8=C_i_car(t7);
t9=t4;
f_5043(t9,C_eqp(((C_word*)t0)[2],t8));}
else{
t7=t4;
f_5043(t7,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5041 in k5032 in k5026 in k5020 in k5000 in k4994 in k4991 in g877 in k4972 in k4952 */
static void C_fcall f_5043(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5043,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[8])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[8])+1,t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:512: node-parameters-set! */
t5=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],lf[126]);}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k5048 in k5041 in k5032 in k5026 in k5020 in k5000 in k4994 in k4991 in g877 in k4972 in k4952 */
static void C_ccall f_5050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5050,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5053,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm:513: node-subexpressions-set! */
t4=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}

/* k5051 in k5048 in k5041 in k5032 in k5026 in k5020 in k5000 in k4994 in k4991 in g877 in k4972 in k4952 */
static void C_ccall f_5053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5053,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5056,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5071,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm:516: reverse */
t6=*((C_word*)lf[124]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k5069 in k5051 in k5048 in k5041 in k5032 in k5026 in k5020 in k5000 in k4994 in k4991 in g877 in k4972 in k4952 */
static void C_ccall f_5071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5071,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* optimizer.scm:514: node-subexpressions-set! */
t3=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k5054 in k5051 in k5048 in k5041 in k5032 in k5026 in k5020 in k5000 in k4994 in k4991 in g877 in k4972 in k4952 */
static void C_ccall f_5056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:517: touch */
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_4943(((C_word*)((C_word*)t0)[2])[1]));}

/* k4955 in k4952 */
static void C_ccall f_4957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4960,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
/* optimizer.scm:520: debugging */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[19],lf[122],((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[3])[1]);}}

/* k4958 in k4955 in k4952 */
static void C_ccall f_4960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* test */
static void C_fcall f_4947(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4947,NULL,4,t0,t1,t2,t3);}
/* optimizer.scm:477: get */
t4=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[2],t2,t3);}

/* touch */
static C_word C_fcall f_4943(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_check;
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
return(C_SCHEME_TRUE);}

/* f_2825 in k2820 in k2440 in k2437 */
static void C_ccall f_2825(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[72],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2825,4,t0,t1,t2,t3);}
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fix(0);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_FALSE;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2828,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t31=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2834,tmp=(C_word)a,a+=2,tmp));
t32=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2864,a[2]=t15,tmp=(C_word)a,a+=3,tmp));
t33=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2868,a[2]=t3,a[3]=t23,a[4]=t21,a[5]=t13,tmp=(C_word)a,a+=6,tmp));
t34=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3002,a[2]=t27,a[3]=t19,a[4]=t25,a[5]=t21,a[6]=t7,a[7]=t23,a[8]=t15,tmp=(C_word)a,a+=9,tmp));
t35=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3191,a[2]=t11,a[3]=t3,a[4]=t29,a[5]=t25,a[6]=t5,a[7]=t9,a[8]=t17,a[9]=t21,tmp=(C_word)a,a+=10,tmp));
t36=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4752,a[2]=t25,tmp=(C_word)a,a+=3,tmp));
t37=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4819,a[2]=t25,a[3]=t13,a[4]=t9,a[5]=t5,a[6]=t7,a[7]=t15,a[8]=t2,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:445: perform-pre-optimization! */
t38=*((C_word*)lf[121]+1);
f_4940(4,t38,t37,t2,t3);}

/* k4817 */
static void C_ccall f_4819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4819,2,t0,t1);}
if(C_truep(t1)){
/* optimizer.scm:446: values */
C_values(4,0,((C_word*)t0)[9],((C_word*)t0)[8],C_SCHEME_TRUE);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4825,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:448: debugging */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[31],lf[120]);}}

/* k4823 in k4817 */
static void C_ccall f_4825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4825,2,t0,t1);}
t2=C_set_block_item(lf[34] /* simplified-ops */,0,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4829,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:450: walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3002(t4,t3,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k4827 in k4823 in k4817 */
static void C_ccall f_4829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4829,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4832,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
/* optimizer.scm:451: debugging */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[19],lf[119],((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=t2;
f_4832(2,t3,C_SCHEME_UNDEFINED);}}

/* k4830 in k4827 in k4823 in k4817 */
static void C_ccall f_4832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4832,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4835,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4868,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(*((C_word*)lf[34]+1)))){
/* optimizer.scm:452: debugging */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[19],lf[118]);}
else{
t4=t3;
f_4868(2,t4,C_SCHEME_FALSE);}}

/* k4866 in k4830 in k4827 in k4823 in k4817 */
static void C_ccall f_4868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4868,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[34]+1);
t3=C_i_check_list_2(t2,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4905,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4905(t7,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
f_4835(2,t2,C_SCHEME_UNDEFINED);}}

/* for-each-loop830 in k4866 in k4830 in k4827 in k4823 in k4817 */
static void C_fcall f_4905(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4905,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4915,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4873,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_car(t4);
/* optimizer.scm:455: print* */
t7=*((C_word*)lf[117]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,C_make_character(9),t6);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4871 in for-each-loop830 in k4866 in k4830 in k4827 in k4823 in k4817 */
static void C_ccall f_4873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[3]);
if(C_truep(C_i_greaterp(t2,C_fix(1)))){
t3=C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm:457: print */
t4=*((C_word*)lf[115]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],C_make_character(9),t3);}
else{
/* optimizer.scm:458: newline */
t3=*((C_word*)lf[116]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}}

/* k4913 in for-each-loop830 in k4866 in k4830 in k4827 in k4823 in k4817 */
static void C_ccall f_4915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4905(t3,((C_word*)t0)[2],t2);}

/* k4833 in k4830 in k4827 in k4823 in k4817 */
static void C_ccall f_4835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4835,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4838,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
/* optimizer.scm:460: debugging */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[19],lf[114],((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=t2;
f_4838(2,t3,C_SCHEME_UNDEFINED);}}

/* k4836 in k4833 in k4830 in k4827 in k4823 in k4817 */
static void C_ccall f_4838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4838,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4841,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
/* optimizer.scm:461: debugging */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[19],lf[113],((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=t2;
f_4841(2,t3,C_SCHEME_UNDEFINED);}}

/* k4839 in k4836 in k4833 in k4830 in k4827 in k4823 in k4817 */
static void C_ccall f_4841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4841,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4844,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
/* optimizer.scm:462: debugging */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[19],lf[112],((C_word*)((C_word*)t0)[2])[1]);}
else{
/* optimizer.scm:463: values */
C_values(4,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);}}

/* k4842 in k4839 in k4836 in k4833 in k4830 in k4827 in k4823 in k4817 */
static void C_ccall f_4844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:463: values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* walk-generic */
static void C_fcall f_4752(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4752,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4754,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t12=t5;
t13=C_i_check_list_2(t12,lf[39]);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4764,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4780,a[2]=t11,a[3]=t8,a[4]=t16,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_4780(t18,t14,t12);}

/* map-loop789 in walk-generic */
static void C_fcall f_4780(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4780,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4809,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g795804 */
t5=((C_word*)t0)[2];
f_4754(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4807 in map-loop789 in walk-generic */
static void C_ccall f_4809(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4809,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4780(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4780(t6,((C_word*)t0)[3],t5);}}

/* k4762 in walk-generic */
static void C_ccall f_4764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4764,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4770,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:441: every */
t3=*((C_word*)lf[48]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[30]+1),((C_word*)t0)[2],t1);}

/* k4768 in k4762 in walk-generic */
static void C_ccall f_4770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4770,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[4];
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[2];
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[15],t3,t4,t5));}}

/* g795 in walk-generic */
static void C_fcall f_4754(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4754,NULL,3,t0,t1,t2);}
/* g812813 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3002(t3,t1,t2,((C_word*)t0)[2]);}

/* walk1 */
static void C_fcall f_3191(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3191,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_slot(t4,C_fix(3));
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=t2;
t9=C_slot(t8,C_fix(1));
t10=C_eqp(t9,lf[3]);
if(C_truep(t10)){
t11=C_i_car(t7);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3231,a[2]=((C_word*)t0)[7],a[3]=t7,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t13,tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_3231(t15,t1,t11);}
else{
t11=C_eqp(t9,lf[6]);
if(C_truep(t11)){
t12=C_i_car(t7);
t13=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3312,a[2]=t12,a[3]=((C_word*)t0)[8],a[4]=t7,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:231: test */
t14=((C_word*)((C_word*)t0)[8])[1];
f_2828(t14,t13,t12,lf[59]);}
else{
t12=C_eqp(t9,lf[11]);
if(C_truep(t12)){
t13=C_i_caddr(t7);
t14=C_i_car(t7);
t15=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3415,a[2]=t9,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t13,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=t3,a[9]=t14,a[10]=t5,a[11]=t7,a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
/* optimizer.scm:241: test */
t16=((C_word*)((C_word*)t0)[8])[1];
f_2828(t16,t15,t14,lf[68]);}
else{
t13=C_eqp(t9,lf[12]);
if(C_truep(t13)){
t14=C_i_car(t5);
t15=C_slot(t14,C_fix(1));
t16=C_eqp(t15,lf[3]);
if(C_truep(t16)){
t17=C_slot(t14,C_fix(2));
t18=C_i_car(t17);
t19=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3610,a[2]=((C_word*)t0)[2],a[3]=t14,a[4]=((C_word*)t0)[8],a[5]=t7,a[6]=t9,a[7]=t2,a[8]=((C_word*)t0)[4],a[9]=t18,a[10]=t1,a[11]=((C_word*)t0)[5],a[12]=t3,a[13]=((C_word*)t0)[3],a[14]=((C_word*)t0)[9],a[15]=t5,tmp=(C_word)a,a+=16,tmp);
t20=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4517,a[2]=t18,a[3]=((C_word*)t0)[8],a[4]=t19,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:279: test */
t21=((C_word*)((C_word*)t0)[8])[1];
f_2828(t21,t20,t18,lf[81]);}
else{
t17=C_eqp(t15,lf[11]);
if(C_truep(t17)){
if(C_truep(C_i_car(t7))){
/* optimizer.scm:413: walk-generic */
t18=((C_word*)((C_word*)t0)[4])[1];
f_4752(t18,t1,t2,t9,t7,t5,t3);}
else{
t18=C_i_cdr(t7);
t19=C_a_i_cons(&a,2,C_SCHEME_TRUE,t18);
t20=C_SCHEME_END_OF_LIST;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_FALSE;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4555,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t25=C_i_check_list_2(t5,lf[39]);
t26=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4565,a[2]=t19,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4567,a[2]=t24,a[3]=t21,a[4]=t28,a[5]=t23,tmp=(C_word)a,a+=6,tmp));
t30=((C_word*)t28)[1];
f_4567(t30,t26,t5);}}
else{
/* optimizer.scm:415: walk-generic */
t18=((C_word*)((C_word*)t0)[4])[1];
f_4752(t18,t1,t2,t9,t7,t5,t3);}}}
else{
t14=C_eqp(t9,lf[14]);
if(C_truep(t14)){
t15=C_i_car(t7);
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4622,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t7,a[7]=((C_word*)t0)[8],a[8]=t15,a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:419: test */
t17=((C_word*)((C_word*)t0)[8])[1];
f_2828(t17,t16,t15,lf[58]);}
else{
/* optimizer.scm:437: walk-generic */
t15=((C_word*)((C_word*)t0)[4])[1];
f_4752(t15,t1,t2,t9,t7,t5,t3);}}}}}}

/* k4620 in walk1 */
static void C_ccall f_4622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4622,2,t0,t1);}
if(C_truep(t1)){
t2=f_2864(((C_word*)((C_word*)t0)[10])[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4628,a[2]=((C_word*)t0)[9],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4639,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[8],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:421: test */
t5=((C_word*)((C_word*)t0)[7])[1];
f_2828(t5,t4,((C_word*)t0)[8],lf[108]);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4648,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:424: test */
t3=((C_word*)((C_word*)t0)[7])[1];
f_2828(t3,t2,((C_word*)t0)[8],lf[56]);}}

/* k4646 in k4620 in walk1 */
static void C_ccall f_4648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4648,2,t0,t1);}
if(C_truep(t1)){
t2=f_2864(((C_word*)((C_word*)t0)[10])[1]);
t3=((C_word*)t0)[9];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[15],lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4665,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4747,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:427: test */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2828(t4,t3,((C_word*)t0)[8],lf[108]);}}

/* k4745 in k4646 in k4620 in walk1 */
static void C_ccall f_4747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4747,2,t0,t1);}
t2=C_i_not(t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4705,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_4705(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4743,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:428: variable-visible? */
t5=*((C_word*)lf[111]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}}

/* k4741 in k4745 in k4646 in k4620 in walk1 */
static void C_ccall f_4743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4705(t2,C_i_not(t1));}

/* k4703 in k4745 in k4646 in k4620 in walk1 */
static void C_fcall f_4705(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4705,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:429: test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2828(t3,t2,((C_word*)t0)[2],lf[110]);}
else{
t2=((C_word*)t0)[6];
f_4665(t2,C_SCHEME_FALSE);}}

/* k4734 in k4703 in k4745 in k4646 in k4620 in walk1 */
static void C_ccall f_4736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4736,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
f_4665(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4732,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:430: test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2828(t3,t2,((C_word*)t0)[2],lf[80]);}}

/* k4730 in k4734 in k4703 in k4745 in k4646 in k4620 in walk1 */
static void C_ccall f_4732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4732,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_4665(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4724,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* optimizer.scm:431: expression-has-side-effects? */
t4=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}}

/* k4722 in k4730 in k4734 in k4703 in k4745 in k4646 in k4620 in walk1 */
static void C_ccall f_4724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4665(t2,C_i_not(t1));}

/* k4663 in k4646 in k4620 in walk1 */
static void C_fcall f_4665(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4665,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=f_2864(((C_word*)((C_word*)t0)[8])[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4671,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:433: debugging */
t4=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[19],lf[109],((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4695,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* optimizer.scm:435: walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3002(t4,t2,t3,((C_word*)t0)[2]);}}

/* k4693 in k4663 in k4646 in k4620 in walk1 */
static void C_ccall f_4695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4695,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[15],lf[14],((C_word*)t0)[2],t2));}

/* k4669 in k4663 in k4646 in k4620 in walk1 */
static void C_ccall f_4671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4671,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[15],lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}

/* k4637 in k4620 in walk1 */
static void C_ccall f_4639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4639,2,t0,t1);}
if(C_truep(t1)){
/* optimizer.scm:422: debugging */
t2=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[83],lf[107],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[15],lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}}

/* k4626 in k4620 in walk1 */
static void C_ccall f_4628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4628,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[15],lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}

/* map-loop714 in walk1 */
static void C_fcall f_4567(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4567,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4596,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g720729 */
t5=((C_word*)t0)[2];
f_4555(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4594 in map-loop714 in walk1 */
static void C_ccall f_4596(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4596,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4567(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4567(t6,((C_word*)t0)[3],t5);}}

/* k4563 in walk1 */
static void C_ccall f_4565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4565,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[15],lf[12],((C_word*)t0)[2],t1));}

/* g720 in walk1 */
static void C_fcall f_4555(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4555,NULL,3,t0,t1,t2);}
/* g737738 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3002(t3,t1,t2,((C_word*)t0)[2]);}

/* k4515 in walk1 */
static void C_ccall f_4517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4517,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_3610(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:280: test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2828(t3,t2,((C_word*)t0)[2],lf[52]);}}

/* k4505 in k4515 in walk1 */
static void C_ccall f_4507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[4];
f_3610(2,t3,t2);}
else{
/* optimizer.scm:281: test */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2828(t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[106]);}}

/* k3608 in walk1 */
static void C_ccall f_3610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3610,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[15]);
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_3619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t2,a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],a[17]=t1,tmp=(C_word)a,a+=18,tmp);
/* optimizer.scm:283: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2828(t4,t3,((C_word*)t0)[9],lf[58]);}

/* k3617 in k3608 in walk1 */
static void C_ccall f_3619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3619,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[17];
t3=C_slot(t2,C_fix(2));
t4=C_i_caddr(t3);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3633,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t4,a[5]=((C_word*)t0)[17],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],a[9]=((C_word*)t0)[15],a[10]=((C_word*)t0)[16],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:286: check-signature */
t6=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[10],((C_word*)t0)[11],t4);}
else{
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_3701,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[16],a[6]=((C_word*)t0)[17],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[15],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[5],a[13]=((C_word*)t0)[6],a[14]=((C_word*)t0)[7],a[15]=((C_word*)t0)[8],a[16]=((C_word*)t0)[9],a[17]=((C_word*)t0)[11],tmp=(C_word)a,a+=18,tmp);
/* tweaks.scm:53: ##sys#get */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[10],lf[105]);}}

/* k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3701,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3705,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],a[9]=((C_word*)t0)[15],a[10]=((C_word*)t0)[16],a[11]=((C_word*)t0)[17],tmp=(C_word)a,a+=12,tmp);
/* g451452 */
t3=t2;
f_3705(t3,((C_word*)t0)[7],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_3931,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[17],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[9],a[17]=((C_word*)t0)[6],tmp=(C_word)a,a+=18,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=((C_word*)t0)[6];
t4=C_slot(t3,C_fix(1));
t5=t2;
f_3931(t5,C_eqp(lf[11],t4));}
else{
t3=t2;
f_3931(t3,C_SCHEME_FALSE);}}}

/* k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_fcall f_3931(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3931,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[17];
t3=C_slot(t2,C_fix(2));
t4=C_i_caddr(t3);
t5=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_3947,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[17],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=t3,tmp=(C_word)a,a+=19,tmp);
/* optimizer.scm:323: decompose-lambda-list */
t6=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[2],t4,t5);}
else{
/* optimizer.scm:410: walk-generic */
t2=((C_word*)((C_word*)t0)[14])[1];
f_4752(t2,((C_word*)t0)[2],((C_word*)t0)[13],((C_word*)t0)[12],((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[15]);}}

/* a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3947(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3947,5,t0,t1,t2,t3,t4);}
t5=C_i_car(((C_word*)t0)[18]);
t6=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_4486,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=t5,a[8]=((C_word*)t0)[18],a[9]=t1,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[8],a[14]=((C_word*)t0)[9],a[15]=((C_word*)t0)[10],a[16]=((C_word*)t0)[11],a[17]=((C_word*)t0)[12],a[18]=((C_word*)t0)[13],a[19]=((C_word*)t0)[14],a[20]=((C_word*)t0)[15],a[21]=((C_word*)t0)[16],a[22]=((C_word*)t0)[17],tmp=(C_word)a,a+=23,tmp);
/* tweaks.scm:53: ##sys#get */
t7=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[10],lf[104]);}

/* k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4486,2,t0,t1);}
t2=C_i_structurep(t1,lf[15]);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_3965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
if(C_truep(*((C_word*)lf[98]+1))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4427,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[8],a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:329: test */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2828(t5,t4,((C_word*)t0)[15],lf[103]);}
else{
t4=t3;
f_3965(t4,C_SCHEME_FALSE);}}

/* k4425 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4427,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4477,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:330: test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2828(t3,t2,((C_word*)t0)[2],lf[70]);}
else{
t2=((C_word*)t0)[7];
f_3965(t2,C_SCHEME_FALSE);}}

/* k4475 in k4425 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4477,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
f_3965(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4473,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:331: test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2828(t3,t2,((C_word*)t0)[2],lf[64]);}}

/* k4471 in k4475 in k4425 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4473,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_3965(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4447,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* tweaks.scm:53: ##sys#get */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],lf[102]);}}

/* k4445 in k4471 in k4475 in k4425 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_eqp(t1,lf[99]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];
f_3965(t3,C_SCHEME_TRUE);}
else{
t3=C_eqp(t1,lf[100]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];
f_3965(t4,C_SCHEME_FALSE);}
else{
if(C_truep(((C_word*)t0)[3])){
t4=((C_word*)t0)[4];
f_3965(t4,((C_word*)t0)[3]);}
else{
t4=C_i_cadddr(((C_word*)t0)[2]);
t5=((C_word*)t0)[4];
f_3965(t5,C_i_lessp(t4,*((C_word*)lf[101]+1)));}}}}

/* k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_fcall f_3965(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3965,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3968,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[15],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[17],a[10]=((C_word*)t0)[18],a[11]=((C_word*)t0)[19],a[12]=((C_word*)t0)[20],a[13]=((C_word*)t0)[21],a[14]=((C_word*)t0)[22],a[15]=((C_word*)t0)[23],tmp=(C_word)a,a+=16,tmp);
t3=(C_truep(((C_word*)t0)[9])?lf[87]:lf[88]);
t4=C_i_cadddr(((C_word*)t0)[8]);
/* optimizer.scm:337: debugging */
t5=*((C_word*)lf[18]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t2,lf[83],t3,((C_word*)t0)[16],((C_word*)t0)[7],t4);}
else{
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_4063,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[16],a[8]=((C_word*)t0)[23],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[22],a[13]=((C_word*)t0)[17],a[14]=((C_word*)t0)[18],a[15]=((C_word*)t0)[19],a[16]=((C_word*)t0)[20],a[17]=((C_word*)t0)[10],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[6],a[20]=((C_word*)t0)[11],tmp=(C_word)a,a+=21,tmp);
/* optimizer.scm:359: test */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2828(t3,t2,((C_word*)t0)[7],lf[68]);}}

/* k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4063,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[20]);
if(C_truep(C_i_lessp(t2,((C_word*)t0)[19]))){
/* optimizer.scm:361: walk-generic */
t3=((C_word*)((C_word*)t0)[18])[1];
f_4752(t3,((C_word*)t0)[17],((C_word*)t0)[16],((C_word*)t0)[15],((C_word*)t0)[14],((C_word*)t0)[13],((C_word*)t0)[12]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4077,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t4,a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_4077(t6,((C_word*)t0)[17],((C_word*)t0)[5],((C_word*)t0)[19],((C_word*)t0)[20],C_SCHEME_END_OF_LIST);}}
else{
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4277,a[2]=((C_word*)t0)[16],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[17],a[13]=((C_word*)t0)[18],a[14]=((C_word*)t0)[20],tmp=(C_word)a,a+=15,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4414,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[16],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:385: test */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2828(t4,t3,((C_word*)t0)[2],lf[64]);}}

/* k4412 in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_memq(((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[2];
f_4277(t3,C_i_not(t2));}
else{
t2=((C_word*)t0)[2];
f_4277(t2,C_SCHEME_FALSE);}}

/* k4275 in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_fcall f_4277(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4277,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4280,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],tmp=(C_word)a,a+=13,tmp);
/* optimizer.scm:387: llist-length */
t3=*((C_word*)lf[97]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
/* optimizer.scm:409: walk-generic */
t2=((C_word*)((C_word*)t0)[13])[1];
f_4752(t2,((C_word*)t0)[12],((C_word*)t0)[2],((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);}}

/* k4278 in k4275 in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4280,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[12]);
if(C_truep(C_i_lessp(t2,t1))){
/* optimizer.scm:389: walk-generic */
t3=((C_word*)((C_word*)t0)[11])[1];
f_4752(t3,((C_word*)t0)[10],t1,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4292,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:391: debugging */
t4=*((C_word*)lf[18]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[19],lf[96],((C_word*)t0)[2],t1);}}

/* k4290 in k4278 in k4275 in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4292,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4297,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4303,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a4302 in k4290 in k4278 in k4275 in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4303(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4303,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4318,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4370,a[2]=t8,a[3]=t5,a[4]=t7,a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4378,a[2]=t2,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* optimizer.scm:402: qnode */
t11=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,C_SCHEME_END_OF_LIST);}
else{
t11=C_i_length(t3);
t12=C_a_i_times(&a,2,C_fix(3),t11);
t13=C_a_i_list2(&a,2,lf[94],t12);
t14=t3;
t15=C_a_i_record4(&a,4,lf[15],lf[95],t13,t14);
t16=C_a_i_list1(&a,1,t15);
/* optimizer.scm:398: append */
t17=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t9,t2,t16);}}

/* k4376 in a4302 in k4290 in k4278 in k4275 in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4378,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:398: append */
t3=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k4368 in a4302 in k4290 in k4278 in k4275 in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4370(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4370,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=C_i_check_list_2(t2,lf[39]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4331,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4333(t8,t4,t2);}

/* map-loop668 in k4368 in a4302 in k4290 in k4278 in k4275 in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_fcall f_4333(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4333,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4362,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g674683 */
t5=((C_word*)t0)[2];
f_4318(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4360 in map-loop668 in k4368 in a4302 in k4290 in k4278 in k4275 in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4362(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4362,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4333(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4333(t6,((C_word*)t0)[3],t5);}}

/* k4329 in k4368 in a4302 in k4290 in k4278 in k4275 in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4331,2,t0,t1);}
t2=C_a_i_record4(&a,4,lf[15],lf[12],((C_word*)t0)[4],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* g674 in a4302 in k4290 in k4278 in k4275 in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_fcall f_4318(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4318,NULL,3,t0,t1,t2);}
/* g691692 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3002(t3,t1,t2,((C_word*)t0)[2]);}

/* a4296 in k4290 in k4278 in k4275 in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4297,2,t0,t1);}
/* optimizer.scm:392: split-at */
t2=*((C_word*)lf[93]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_fcall f_4077(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4077,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_nullp(t2);
t7=(C_truep(t6)?t6:C_i_zerop(t3));
if(C_truep(t7)){
t8=f_2864(((C_word*)((C_word*)t0)[10])[1]);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4100,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4152,a[2]=t13,a[3]=t10,a[4]=t12,a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:368: append-reverse */
t15=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,t5,t4);}
else{
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4158,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t5,a[7]=((C_word*)t0)[5],a[8]=t4,a[9]=t3,a[10]=t2,a[11]=t1,a[12]=((C_word*)t0)[10],tmp=(C_word)a,a+=13,tmp);
t9=C_i_car(t2);
/* optimizer.scm:369: test */
t10=((C_word*)((C_word*)t0)[2])[1];
f_2828(t10,t8,t9,lf[60]);}}

/* k4156 in loop in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4158(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4158,2,t0,t1);}
if(C_truep(t1)){
t2=f_2864(((C_word*)((C_word*)t0)[12])[1]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4164,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t4=C_i_car(((C_word*)t0)[10]);
/* optimizer.scm:371: debugging */
t5=*((C_word*)lf[18]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t3,lf[19],lf[92],t4,((C_word*)t0)[2]);}
else{
t2=C_i_cdr(((C_word*)t0)[10]);
t3=C_a_i_minus(&a,2,((C_word*)t0)[9],C_fix(1));
t4=C_i_cdr(((C_word*)t0)[8]);
t5=C_i_car(((C_word*)t0)[8]);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[6]);
/* optimizer.scm:381: loop */
t7=((C_word*)((C_word*)t0)[7])[1];
f_4077(t7,((C_word*)t0)[11],t2,t3,t4,t6);}}

/* k4162 in k4156 in loop in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4164,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4170,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t3=C_i_car(((C_word*)t0)[7]);
/* optimizer.scm:374: expression-has-side-effects? */
t4=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* k4168 in k4162 in k4156 in loop in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4170,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4214,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:377: gensym */
t3=*((C_word*)lf[90]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[91]);}
else{
t2=C_i_cdr(((C_word*)t0)[8]);
t3=C_a_i_minus(&a,2,((C_word*)t0)[7],C_fix(1));
t4=C_i_cdr(((C_word*)t0)[6]);
/* optimizer.scm:380: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_4077(t5,((C_word*)t0)[9],t2,t3,t4,((C_word*)t0)[4]);}}

/* k4212 in k4168 in k4162 in k4156 in loop in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4214,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4190,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t2,a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t4=C_i_car(((C_word*)t0)[6]);
/* optimizer.scm:378: walk */
t5=((C_word*)((C_word*)t0)[3])[1];
f_3002(t5,t3,t4,((C_word*)t0)[2]);}

/* k4188 in k4212 in k4168 in k4162 in k4156 in loop in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4194,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_cdr(((C_word*)t0)[6]);
t4=C_a_i_minus(&a,2,((C_word*)t0)[5],C_fix(1));
t5=C_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm:379: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_4077(t6,t2,t3,t4,t5,((C_word*)t0)[2]);}

/* k4192 in k4188 in k4212 in k4168 in k4162 in k4156 in loop in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4194,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[15],lf[6],((C_word*)t0)[2],t2));}

/* k4150 in loop in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4152,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=C_i_check_list_2(t2,lf[39]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4113,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4115,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4115(t8,t4,t2);}

/* map-loop609 in k4150 in loop in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_fcall f_4115(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4115,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4144,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g615624 */
t5=((C_word*)t0)[2];
f_4100(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4142 in map-loop609 in k4150 in loop in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4144(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4144,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4115(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4115(t6,((C_word*)t0)[3],t5);}}

/* k4111 in k4150 in loop in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4113,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[15],lf[12],((C_word*)t0)[2],t1));}

/* g615 in loop in k4061 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_fcall f_4100(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4100,NULL,3,t0,t1,t2);}
/* g632633 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3002(t3,t1,t2,((C_word*)t0)[2]);}

/* k3966 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3968(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3969,a[2]=((C_word*)t0)[15],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[14];
t4=C_i_check_list_2(t3,lf[2]);
t5=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],tmp=(C_word)a,a+=16,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4028,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4028(t9,t5,t3);}

/* for-each-loop555 in k3966 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_fcall f_4028(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4028,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4038,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g556562 */
t5=((C_word*)t0)[2];
f_3969(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4036 in for-each-loop555 in k3966 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4028(t3,((C_word*)t0)[2],t2);}

/* k3977 in k3966 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3979,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3982,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* optimizer.scm:344: check-signature */
t3=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[9],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3980 in k3977 in k3966 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3982,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3985,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* optimizer.scm:345: debugging */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[19],lf[86],((C_word*)t0)[9]);}

/* k3983 in k3980 in k3977 in k3966 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3985,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3990,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* optimizer.scm:346: call/cc */
t3=*((C_word*)lf[85]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* a3989 in k3983 in k3980 in k3977 in k3966 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3990(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3990,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3993,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4007,a[2]=((C_word*)t0)[9],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[5];
t6=C_slot(t5,C_fix(3));
t7=C_i_car(t6);
/* optimizer.scm:354: inline-lambda-bindings */
t8=*((C_word*)lf[71]+1);
((C_proc8)(void*)(*((C_word*)t8+1)))(8,t8,t4,((C_word*)t0)[4],((C_word*)t0)[3],t7,C_SCHEME_TRUE,((C_word*)t0)[2],t3);}

/* k4005 in a3989 in k3983 in k3980 in k3977 in k3966 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=f_2864(((C_word*)((C_word*)t0)[5])[1]);
/* optimizer.scm:358: walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3002(t3,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* cfk in a3989 in k3983 in k3980 in k3977 in k3966 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3993(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3993,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3997,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:349: debugging */
t4=*((C_word*)lf[18]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[83],lf[84],((C_word*)t0)[2],t2);}

/* k3995 in cfk in a3989 in k3983 in k3980 in k3977 in k3966 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3997,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4004,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:353: walk-generic */
t3=((C_word*)((C_word*)t0)[7])[1];
f_4752(t3,t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4002 in k3995 in cfk in a3989 in k3983 in k3980 in k3977 in k3966 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_4004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:353: return */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* g556 in k3966 in k3963 in k4484 in a3946 in k3929 in k3699 in k3617 in k3608 in walk1 */
static void C_fcall f_3969(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3969,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[69]+1);
/* g570571 */
t4=t3;
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,((C_word*)t0)[2],t2,lf[70],C_SCHEME_TRUE);}

/* g451 in k3699 in k3617 in k3608 in walk1 */
static void C_fcall f_3705(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3705,NULL,3,t0,t1,t2);}
t3=C_i_car(((C_word*)t0)[11]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3712,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=C_eqp(C_SCHEME_TRUE,t2);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=t4,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t5)){
t7=t6;
f_3727(t7,t5);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3913,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* tweaks.scm:53: ##sys#get */
t8=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)t0)[4],lf[51]);}}
else{
t5=t4;
f_3712(t5,C_SCHEME_FALSE);}}

/* k3911 in g451 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(t1,lf[82]);
t3=((C_word*)t0)[3];
f_3727(t3,(C_truep(t2)?t2:C_eqp(t1,((C_word*)t0)[2])));}

/* k3725 in g451 in k3699 in k3617 in k3608 in walk1 */
static void C_fcall f_3727(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3727,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[8],C_fix(1));
t3=C_eqp(lf[3],t2);
if(C_truep(t3)){
t4=C_slot(((C_word*)t0)[8],C_fix(2));
t5=C_i_car(t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3887,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:303: test */
t8=((C_word*)((C_word*)t0)[2])[1];
f_2828(t8,t7,t5,lf[81]);}
else{
t6=((C_word*)t0)[7];
f_3712(t6,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[7];
f_3712(t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[7];
f_3712(t2,C_SCHEME_FALSE);}}

/* k3885 in k3725 in g451 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_3742(2,t2,C_SCHEME_FALSE);}
else{
/* optimizer.scm:303: test */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2828(t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[52]);}}

/* k3740 in k3725 in g451 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3742(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3742,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=C_slot(t2,C_fix(1));
t4=C_eqp(lf[11],t3);
if(C_truep(t4)){
t5=t1;
t6=C_slot(t5,C_fix(2));
t7=C_i_caddr(t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3763,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t9=C_i_car(t7);
/* optimizer.scm:306: test */
t10=((C_word*)((C_word*)t0)[2])[1];
f_2828(t10,t8,t9,lf[60]);}
else{
t8=((C_word*)t0)[8];
f_3712(t8,C_SCHEME_FALSE);}}
else{
t5=((C_word*)t0)[8];
f_3712(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[8];
f_3712(t2,C_SCHEME_FALSE);}}

/* k3761 in k3740 in k3725 in g451 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3763,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3766,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t1)){
t3=t2;
f_3766(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3851,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(((C_word*)t0)[3]);
/* optimizer.scm:307: test */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2828(t5,t3,t4,lf[80]);}}

/* k3849 in k3761 in k3740 in k3725 in g451 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3851,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_3766(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3843,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* optimizer.scm:308: test */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2828(t4,t2,t3,lf[79]);}}

/* k3841 in k3849 in k3761 in k3740 in k3725 in g451 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3766(t2,C_i_not(t1));}

/* k3764 in k3761 in k3740 in k3725 in g451 in k3699 in k3617 in k3608 in walk1 */
static void C_fcall f_3766(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3766,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3820,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3822,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_i_cdr(((C_word*)t0)[2]);
/* optimizer.scm:309: any */
t5=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}
else{
t2=((C_word*)t0)[7];
f_3712(t2,C_SCHEME_FALSE);}}

/* a3821 in k3764 in k3761 in k3740 in k3725 in g451 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3822(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3822,3,t0,t1,t2);}
t3=*((C_word*)lf[78]+1);
/* g495496 */
t4=t3;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,((C_word*)t0)[2]);}

/* k3818 in k3764 in k3761 in k3740 in k3725 in g451 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3820,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_3712(t2,C_SCHEME_FALSE);}
else{
t2=C_i_cdr(((C_word*)t0)[4]);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_i_cadr(((C_word*)t0)[4]):C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3778,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3803,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:314: source-info->string */
t7=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}}

/* k3801 in k3818 in k3764 in k3761 in k3740 in k3725 in g451 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* optimizer.scm:311: debugging */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[19],lf[76],t2);}
else{
/* optimizer.scm:311: debugging */
t2=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[19],lf[76],((C_word*)t0)[2]);}}

/* k3776 in k3818 in k3764 in k3761 in k3740 in k3725 in g451 in k3699 in k3617 in k3608 in walk1 */
static void C_ccall f_3778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3778,2,t0,t1);}
t2=C_a_i_record4(&a,4,lf[15],lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t3=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
f_3712(t4,C_a_i_record4(&a,4,lf[15],lf[12],lf[75],t3));}

/* k3710 in g451 in k3699 in k3617 in k3608 in walk1 */
static void C_fcall f_3712(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* optimizer.scm:318: walk-generic */
t2=((C_word*)((C_word*)t0)[7])[1];
f_4752(t2,((C_word*)t0)[8],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k3631 in k3617 in k3608 in walk1 */
static void C_ccall f_3633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3633,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3636,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:287: debugging */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[19],lf[73],((C_word*)t0)[2]);}

/* k3634 in k3631 in k3617 in k3608 in walk1 */
static void C_ccall f_3636(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3636,2,t0,t1);}
t2=f_2864(((C_word*)((C_word*)t0)[9])[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3640,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[7];
t5=C_i_check_list_2(t4,lf[2]);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3650,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3672,a[2]=t3,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3672(t10,t6,t4);}

/* for-each-loop417 in k3634 in k3631 in k3617 in k3608 in walk1 */
static void C_fcall f_3672(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3672,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3682,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g418424 */
t5=((C_word*)t0)[2];
f_3640(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3680 in for-each-loop417 in k3634 in k3631 in k3617 in k3608 in walk1 */
static void C_ccall f_3682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3672(t3,((C_word*)t0)[2],t2);}

/* k3648 in k3634 in k3631 in k3617 in k3608 in walk1 */
static void C_ccall f_3650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3650,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3657,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
t4=C_slot(t3,C_fix(3));
t5=C_i_car(t4);
/* optimizer.scm:291: inline-lambda-bindings */
t6=*((C_word*)lf[71]+1);
((C_proc8)(void*)(*((C_word*)t6+1)))(8,t6,t2,((C_word*)t0)[4],((C_word*)t0)[3],t5,C_SCHEME_FALSE,((C_word*)t0)[2],*((C_word*)lf[72]+1));}

/* k3655 in k3648 in k3634 in k3631 in k3617 in k3608 in walk1 */
static void C_ccall f_3657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:290: walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3002(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* g418 in k3634 in k3631 in k3617 in k3608 in walk1 */
static void C_fcall f_3640(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3640,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[69]+1);
/* g432433 */
t4=t3;
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,((C_word*)t0)[2],t2,lf[70],C_SCHEME_TRUE);}

/* k3413 in walk1 */
static void C_ccall f_3415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3415,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3420,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:242: decompose-lambda-list */
t3=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[6],((C_word*)t0)[5],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* optimizer.scm:257: test */
t3=((C_word*)((C_word*)t0)[13])[1];
f_2828(t3,t2,((C_word*)t0)[9],lf[64]);}}

/* k3512 in k3413 in walk1 */
static void C_ccall f_3514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3514,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3519,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:258: decompose-lambda-list */
t3=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[6],((C_word*)t0)[5],t2);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[8]);
/* optimizer.scm:270: walk-generic */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4752(t3,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[11],((C_word*)t0)[10],t2);}}

/* a3518 in k3512 in k3413 in walk1 */
static void C_ccall f_3519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3519,5,t0,t1,t2,t3,t4);}
t5=f_2864(((C_word*)((C_word*)t0)[7])[1]);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3526,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:262: debugging */
t7=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[19],lf[67],t4);}

/* k3524 in a3518 in k3512 in k3413 in walk1 */
static void C_ccall f_3526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3526,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[9]);
t3=C_i_cadr(((C_word*)t0)[9]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3566,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t3,a[8]=t2,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t5=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* optimizer.scm:267: build-lambda-list */
t6=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[2],t5,C_SCHEME_FALSE);}

/* k3564 in k3524 in a3518 in k3512 in k3413 in walk1 */
static void C_ccall f_3566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3566,2,t0,t1);}
t2=C_i_cadddr(((C_word*)t0)[9]);
t3=C_a_i_list4(&a,4,((C_word*)t0)[8],((C_word*)t0)[7],t1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3546,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(((C_word*)t0)[5]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
/* optimizer.scm:269: walk */
t7=((C_word*)((C_word*)t0)[2])[1];
f_3002(t7,t4,t5,t6);}

/* k3544 in k3564 in k3524 in a3518 in k3512 in k3413 in walk1 */
static void C_ccall f_3546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3546,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[15],lf[11],((C_word*)t0)[2],t2));}

/* a3419 in k3413 in walk1 */
static void C_ccall f_3420(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3420,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3426,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3438,a[2]=((C_word*)t0)[8],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3437 in a3419 in k3413 in walk1 */
static void C_ccall f_3438(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3438,4,t0,t1,t2,t3);}
t4=f_2864(((C_word*)((C_word*)t0)[10])[1]);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3445,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t1,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:247: debugging */
t6=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[19],lf[65],t2);}

/* k3443 in a3437 in a3419 in k3413 in walk1 */
static void C_ccall f_3445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3445,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[11]);
t3=C_i_cadr(((C_word*)t0)[11]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3485,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=t3,a[8]=t2,a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3492,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
/* optimizer.scm:251: test */
t6=((C_word*)((C_word*)t0)[2])[1];
f_2828(t6,t5,((C_word*)t0)[8],lf[64]);}
else{
t6=t5;
f_3492(2,t6,C_SCHEME_FALSE);}}

/* k3490 in k3443 in a3437 in a3419 in k3413 in walk1 */
static void C_ccall f_3492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3492,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3495,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:252: debugging */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[19],lf[63],((C_word*)t0)[2]);}
else{
/* optimizer.scm:254: build-lambda-list */
t2=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k3493 in k3490 in k3443 in a3437 in a3419 in k3413 in walk1 */
static void C_ccall f_3495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3495,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
/* optimizer.scm:253: build-lambda-list */
t3=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2,C_SCHEME_FALSE);}

/* k3483 in k3443 in a3437 in a3419 in k3413 in walk1 */
static void C_ccall f_3485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3485,2,t0,t1);}
t2=C_i_cadddr(((C_word*)t0)[9]);
t3=C_a_i_list4(&a,4,((C_word*)t0)[8],((C_word*)t0)[7],t1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3465,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(((C_word*)t0)[5]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
/* optimizer.scm:256: walk */
t7=((C_word*)((C_word*)t0)[2])[1];
f_3002(t7,t4,t5,t6);}

/* k3463 in k3483 in k3443 in a3437 in a3419 in k3413 in walk1 */
static void C_ccall f_3465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3465,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[15],lf[11],((C_word*)t0)[2],t2));}

/* a3425 in a3419 in k3413 in walk1 */
static void C_ccall f_3426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3426,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3432,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:245: partition */
t3=*((C_word*)lf[61]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* a3431 in a3425 in a3419 in k3413 in walk1 */
static void C_ccall f_3432(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3432,3,t0,t1,t2);}
/* optimizer.scm:245: test */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2828(t3,t1,t2,lf[60]);}

/* k3310 in walk1 */
static void C_ccall f_3312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3312,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3315,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t1)){
t3=t2;
f_3315(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:232: test */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2828(t4,t3,((C_word*)t0)[2],lf[58]);}}

/* k3388 in k3310 in walk1 */
static void C_ccall f_3390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3390,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3397,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:232: test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2828(t3,t2,((C_word*)t0)[2],lf[57]);}
else{
t2=((C_word*)t0)[4];
f_3315(t2,C_SCHEME_FALSE);}}

/* k3395 in k3388 in k3310 in walk1 */
static void C_ccall f_3397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3315(t2,C_i_not(t1));}

/* k3313 in k3310 in walk1 */
static void C_fcall f_3315(C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3315,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=f_2864(((C_word*)((C_word*)t0)[8])[1]);
t3=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[7])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t3);
t5=C_i_cadr(((C_word*)t0)[6]);
/* optimizer.scm:235: walk */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3002(t6,((C_word*)t0)[4],t5,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3339,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[6],lf[39]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3351,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_3351(t12,t8,((C_word*)t0)[6]);}}

/* map-loop321 in k3313 in k3310 in walk1 */
static void C_fcall f_3351(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3351,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3380,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g327336 */
t5=((C_word*)t0)[2];
f_3339(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3378 in map-loop321 in k3313 in k3310 in walk1 */
static void C_ccall f_3380(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3380,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3351(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3351(t6,((C_word*)t0)[3],t5);}}

/* k3347 in k3313 in k3310 in walk1 */
static void C_ccall f_3349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3349,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[15],lf[6],((C_word*)t0)[2],t1));}

/* g327 in k3313 in k3310 in walk1 */
static void C_fcall f_3339(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3339,NULL,3,t0,t1,t2);}
/* g344345 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3002(t3,t1,t2,((C_word*)t0)[2]);}

/* replace in walk1 */
static void C_fcall f_3231(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3231,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3235,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:217: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2828(t4,t3,t2,lf[56]);}

/* k3233 in replace in walk1 */
static void C_ccall f_3235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3235,2,t0,t1);}
if(C_truep(t1)){
/* replace289 */
t2=((C_word*)((C_word*)t0)[8])[1];
f_3231(t2,((C_word*)t0)[7],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:218: test */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2828(t3,t2,((C_word*)t0)[4],lf[55]);}}

/* k3245 in k3233 in replace in walk1 */
static void C_ccall f_3247(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3247,2,t0,t1);}
if(C_truep(t1)){
t2=f_2864(((C_word*)((C_word*)t0)[7])[1]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3253,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:220: debugging */
t4=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[19],lf[53],((C_word*)t0)[4]);}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=C_eqp(((C_word*)t0)[4],t2);
if(C_truep(t3)){
/* optimizer.scm:227: varnode */
t4=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[6],((C_word*)t0)[4]);}
else{
t4=f_2864(((C_word*)((C_word*)t0)[7])[1]);
t5=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
/* optimizer.scm:227: varnode */
t7=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,((C_word*)t0)[6],((C_word*)t0)[4]);}}}

/* k3251 in k3245 in k3233 in replace in walk1 */
static void C_ccall f_3253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3253,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3273,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:221: test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2828(t3,t2,((C_word*)t0)[2],lf[52]);}

/* k3271 in k3251 in k3245 in k3233 in replace in walk1 */
static void C_ccall f_3273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(t1,C_fix(2));
t3=C_i_car(t2);
/* optimizer.scm:221: qnode */
t4=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* walk */
static void C_fcall f_3002(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3002,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_memq(t2,*((C_word*)lf[43]+1)))){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=((C_word*)((C_word*)t0)[8])[1];
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3016,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],a[4]=t4,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=t1,a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:167: walk1 */
t6=((C_word*)((C_word*)t0)[2])[1];
f_3191(t6,t5,t2,t3);}}

/* k3014 in walk */
static void C_ccall f_3016(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3016,2,t0,t1);}
t2=t1;
t3=C_slot(t2,C_fix(3));
t4=t1;
t5=C_slot(t4,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3035,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(t5,lf[5]);
if(C_truep(t7)){
t8=C_i_car(t3);
t9=C_slot(t8,C_fix(1));
t10=C_eqp(lf[37],t9);
if(C_truep(t10)){
t11=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[8])[1],C_fix(1));
t12=C_mutate(((C_word *)((C_word*)t0)[8])+1,t11);
t13=f_2864(((C_word*)((C_word*)t0)[7])[1]);
t14=C_i_car(t3);
t15=C_slot(t14,C_fix(2));
t16=C_i_car(t15);
t17=(C_truep(t16)?C_i_cadr(t3):C_i_caddr(t3));
/* optimizer.scm:175: walk */
t18=((C_word*)((C_word*)t0)[6])[1];
f_3002(t18,t6,t17,((C_word*)t0)[5]);}
else{
t11=t1;
/* optimizer.scm:165: simplify */
t12=((C_word*)((C_word*)t0)[10])[1];
f_2868(t12,((C_word*)t0)[9],t11);}}
else{
t8=C_eqp(t5,lf[12]);
if(C_truep(t8)){
t9=C_i_car(t3);
t10=C_slot(t9,C_fix(1));
t11=C_eqp(lf[3],t10);
if(C_truep(t11)){
t12=C_i_car(t3);
t13=C_slot(t12,C_fix(2));
t14=C_i_car(t13);
t15=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3096,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t14,a[5]=t6,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t1,a[9]=((C_word*)t0)[7],a[10]=t3,tmp=(C_word)a,a+=11,tmp);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3150,a[2]=t14,a[3]=((C_word*)t0)[2],a[4]=t15,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* tweaks.scm:47: ##sys#get */
t17=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t16,t14,lf[51]);}
else{
t12=t1;
/* optimizer.scm:165: simplify */
t13=((C_word*)((C_word*)t0)[10])[1];
f_2868(t13,((C_word*)t0)[9],t12);}}
else{
t9=t1;
/* optimizer.scm:165: simplify */
t10=((C_word*)((C_word*)t0)[10])[1];
f_2868(t10,((C_word*)t0)[9],t9);}}}

/* k3148 in k3014 in walk */
static void C_ccall f_3150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3150,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3156,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:185: foldable? */
t3=*((C_word*)lf[49]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
f_3096(2,t2,C_SCHEME_FALSE);}}

/* k3154 in k3148 in k3014 in walk */
static void C_ccall f_3156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_cddr(((C_word*)t0)[4]);
/* optimizer.scm:186: every */
t3=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t2);}
else{
t2=((C_word*)t0)[3];
f_3096(2,t2,C_SCHEME_FALSE);}}

/* k3094 in k3014 in walk */
static void C_ccall f_3096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3096,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cddr(((C_word*)t0)[10]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3105,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:187: constant-form-eval */
t4=*((C_word*)lf[47]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[5],((C_word*)t0)[4],t2,t3);}
else{
t2=((C_word*)t0)[8];
/* optimizer.scm:165: simplify */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2868(t3,((C_word*)t0)[2],t2);}}

/* a3104 in k3094 in k3014 in walk */
static void C_ccall f_3105(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3105,5,t0,t1,t2,t3,t4);}
if(C_truep(t2)){
t5=f_2864(((C_word*)((C_word*)t0)[6])[1]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3126,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:199: qnode */
t7=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3115,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t6=t5;
f_3115(t6,C_SCHEME_UNDEFINED);}
else{
t6=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t7=t5;
f_3115(t7,t6);}}}

/* k3113 in a3104 in k3094 in k3014 in walk */
static void C_fcall f_3115(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3115,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:194: lset-adjoin */
t3=*((C_word*)lf[46]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[30]+1),*((C_word*)lf[43]+1),((C_word*)t0)[3]);}

/* k3117 in k3113 in a3104 in k3094 in k3014 in walk */
static void C_ccall f_3119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate((C_word*)lf[43]+1 /* (set! ##compiler#broken-constant-nodes ...) */,t1);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3124 in a3104 in k3094 in k3014 in walk */
static void C_ccall f_3126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3126,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[3]);
t3=C_a_i_list2(&a,2,t2,t1);
t4=((C_word*)t0)[2];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[15],lf[12],lf[44],t3));}

/* k3033 in k3014 in walk */
static void C_ccall f_3035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:165: simplify */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2868(t2,((C_word*)t0)[2],t1);}

/* simplify */
static void C_fcall f_2868(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2868,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2872,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t4=t2;
t5=C_slot(t4,C_fix(1));
/* optimizer.scm:146: ##sys#hash-table-ref */
t6=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,*((C_word*)lf[33]+1),t5);}

/* k2870 in simplify */
static void C_ccall f_2872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2875,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2883,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:147: any */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}
else{
t3=((C_word*)t0)[6];
t4=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a2882 in k2870 in simplify */
static void C_ccall f_2883(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2883,3,t0,t1,t2);}
t3=C_i_cadr(t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2893,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t5=C_i_car(t2);
/* optimizer.scm:149: match-node */
t6=*((C_word*)lf[40]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[2],t5,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2891 in a2882 in k2870 in simplify */
static void C_ccall f_2893(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2893,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2899,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=C_i_caddr(((C_word*)t0)[8]);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2938,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t9=C_i_check_list_2(((C_word*)t0)[3],lf[39]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2952,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2954,a[2]=t5,a[3]=t12,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_2954(t14,t10,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* map-loop193 in k2891 in a2882 in k2870 in simplify */
static void C_fcall f_2954(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2954,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_2938(((C_word*)t0)[5],t3);
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

/* k2950 in k2891 in a2882 in k2870 in simplify */
static void C_ccall f_2952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* g199 in k2891 in a2882 in k2870 in simplify */
static C_word C_fcall f_2938(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=C_i_assq(t1,((C_word*)t0)[2]);
return(C_i_cdr(t2));}

/* k2897 in k2891 in a2882 in k2870 in simplify */
static void C_ccall f_2899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2899,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caar(((C_word*)t0)[6]);
t3=C_i_assq(t2,((C_word*)((C_word*)t0)[5])[1]);
if(C_truep(t3)){
t4=C_i_cdr(t3);
t5=C_a_i_plus(&a,2,t4,C_fix(1));
t6=C_i_set_cdr(t3,t5);
t7=f_2864(((C_word*)((C_word*)t0)[4])[1]);
/* optimizer.scm:158: simplify */
t8=((C_word*)((C_word*)t0)[3])[1];
f_2868(t8,((C_word*)t0)[2],t1);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2932,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:156: alist-cons */
t5=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t2,C_fix(1),((C_word*)((C_word*)t0)[5])[1]);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2930 in k2897 in k2891 in a2882 in k2870 in simplify */
static void C_ccall f_2932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=f_2864(((C_word*)((C_word*)t0)[5])[1]);
/* optimizer.scm:158: simplify */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2868(t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2873 in k2870 in simplify */
static void C_ccall f_2875(C_word c,C_word t0,C_word t1){
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

/* touch */
static C_word C_fcall f_2864(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_check;
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
return(t1);}

/* constant-node? */
static void C_ccall f_2834(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2834,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(lf[37],t3));}

/* test */
static void C_fcall f_2828(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2828,NULL,4,t0,t1,t2,t3);}
/* optimizer.scm:140: get */
t4=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[2],t2,t3);}

/* f_2444 in k2440 in k2437 */
static void C_ccall f_2444(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[48],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2444,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_END_OF_LIST;
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
t21=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2447,a[2]=t6,a[3]=t8,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t22=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2470,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t23=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2477,a[2]=t10,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t24=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2482,a[2]=t20,tmp=(C_word)a,a+=3,tmp));
t25=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2519,a[2]=t12,a[3]=t14,a[4]=t20,a[5]=t18,a[6]=t16,a[7]=t6,a[8]=t10,tmp=(C_word)a,a+=9,tmp));
t26=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2741,a[2]=t2,a[3]=t20,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:106: debugging */
t27=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t27+1)))(4,t27,t26,lf[31],lf[32]);}

/* k2739 */
static void C_ccall f_2741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2741,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2744,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:107: scan */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2519(t3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k2742 in k2739 */
static void C_ccall f_2744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2744,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2747,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2818,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:109: delete-duplicates */
t4=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[3])[1],*((C_word*)lf[30]+1));}
else{
t3=t2;
f_2747(2,t3,C_SCHEME_UNDEFINED);}}

/* k2816 in k2742 in k2739 */
static void C_ccall f_2818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:109: debugging */
t2=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[19],lf[28],t1);}

/* k2745 in k2742 in k2739 */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2747,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[3])[1];
t3=C_i_check_list_2(t2,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2787,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_2787(t7,((C_word*)t0)[2],t2);}

/* for-each-loop105 in k2745 in k2742 in k2739 */
static void C_fcall f_2787(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_2787,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2797,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2754,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t5))){
/* tweaks.scm:50: ##sys#put! */
t7=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t3,t4,lf[25],C_SCHEME_TRUE);}
else{
t7=C_i_cdr(t5);
if(C_truep(C_i_nullp(t7))){
t8=C_i_car(t5);
/* tweaks.scm:50: ##sys#put! */
t9=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t3,t4,lf[25],t8);}
else{
/* ##sys#error */
t8=*((C_word*)lf[26]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,lf[27],t5);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2752 in for-each-loop105 in k2745 in k2742 in k2739 */
static void C_ccall f_2754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tweaks.scm:50: ##sys#put! */
t2=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[25],t1);}

/* k2795 in for-each-loop105 in k2745 in k2742 in k2739 */
static void C_ccall f_2797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2787(t3,((C_word*)t0)[2],t2);}

/* scan */
static void C_fcall f_2519(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2519,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_slot(t4,C_fix(2));
t6=t2;
t7=C_slot(t6,C_fix(3));
t8=t2;
t9=C_slot(t8,C_fix(1));
t10=C_eqp(t9,lf[3]);
if(C_truep(t10)){
t11=C_i_car(t5);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2556,a[2]=t11,a[3]=t1,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2573,a[2]=t12,a[3]=((C_word*)t0)[7],a[4]=t11,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(t11,t3))){
t14=t13;
f_2573(t14,C_SCHEME_FALSE);}
else{
t14=C_i_memq(t11,((C_word*)((C_word*)t0)[7])[1]);
t15=t13;
f_2573(t15,C_i_not(t14));}}
else{
t11=C_eqp(t9,lf[5]);
t12=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2600,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=t5,a[8]=t9,a[9]=((C_word*)t0)[4],a[10]=t3,a[11]=t1,a[12]=((C_word*)t0)[5],a[13]=t7,a[14]=((C_word*)t0)[6],tmp=(C_word)a,a+=15,tmp);
if(C_truep(t11)){
t13=t12;
f_2600(t13,t11);}
else{
t13=C_eqp(t9,lf[22]);
t14=t12;
f_2600(t14,(C_truep(t13)?t13:C_eqp(t9,lf[23])));}}}

/* k2598 in scan */
static void C_fcall f_2600(C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2600,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[14],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[13]);
/* optimizer.scm:75: scan */
t4=((C_word*)((C_word*)t0)[9])[1];
f_2519(t4,t2,t3,((C_word*)t0)[10]);}
else{
t2=C_eqp(((C_word*)t0)[8],lf[6]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2641,a[2]=((C_word*)t0)[10],a[3]=t3,a[4]=((C_word*)t0)[12],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:80: butlast */
t5=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[13]);}
else{
t3=C_eqp(((C_word*)t0)[8],lf[10]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[8],lf[11]));
if(C_truep(t4)){
t5=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}
else{
t5=C_eqp(((C_word*)t0)[8],lf[12]);
t6=(C_truep(t5)?t5:C_eqp(((C_word*)t0)[8],lf[13]));
if(C_truep(t6)){
/* optimizer.scm:85: touch */
t7=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,f_2477(((C_word*)((C_word*)t0)[14])[1]));}
else{
t7=C_eqp(((C_word*)t0)[8],lf[14]);
if(C_truep(t7)){
t8=C_i_car(((C_word*)t0)[7]);
t9=C_i_car(((C_word*)t0)[13]);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2677,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[5],a[7]=t8,a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:90: scan */
t11=((C_word*)((C_word*)t0)[9])[1];
f_2519(t11,t10,t9,((C_word*)t0)[10]);}
else{
/* optimizer.scm:104: scan-each */
t8=((C_word*)((C_word*)t0)[12])[1];
f_2482(t8,((C_word*)t0)[11],((C_word*)t0)[13],((C_word*)t0)[10]);}}}}}}

/* k2675 in k2598 in scan */
static void C_ccall f_2677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2677,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2680,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:91: alist-ref */
t3=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[2])[1]);}

/* k2678 in k2675 in k2598 in scan */
static void C_ccall f_2680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2680,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2683,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2698,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t4=C_i_memq(((C_word*)t0)[6],((C_word*)((C_word*)t0)[2])[1]);
t5=t3;
f_2698(t5,C_i_not(t4));}
else{
t4=t3;
f_2698(t4,C_SCHEME_FALSE);}}

/* k2696 in k2678 in k2675 in k2598 in scan */
static void C_fcall f_2698(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2698,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2701,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:97: debugging */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[19],lf[20],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
f_2683(2,t2,C_SCHEME_UNDEFINED);}}

/* k2699 in k2696 in k2678 in k2675 in k2598 in scan */
static void C_ccall f_2701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2701,2,t0,t1);}
t2=C_a_i_record4(&a,4,lf[15],lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
/* optimizer.scm:98: copy-node! */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k2681 in k2678 in k2675 in k2598 in scan */
static void C_ccall f_2683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2683,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2686,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_memq(((C_word*)t0)[5],((C_word*)t0)[3]))){
/* optimizer.scm:102: remember */
t3=((C_word*)((C_word*)t0)[7])[1];
f_2470(t3,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
/* optimizer.scm:101: mark */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2447(t3,t2,((C_word*)t0)[5]);}}

/* k2684 in k2681 in k2678 in k2675 in k2598 in scan */
static void C_ccall f_2686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:102: remember */
t2=((C_word*)((C_word*)t0)[5])[1];
f_2470(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2639 in k2598 in scan */
static void C_ccall f_2641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:80: scan-each */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2482(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2624 in k2598 in scan */
static void C_ccall f_2626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2626,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2633,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:81: last */
t3=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2631 in k2624 in k2598 in scan */
static void C_ccall f_2633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2633,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2637,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:81: append */
t3=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2635 in k2631 in k2624 in k2598 in scan */
static void C_ccall f_2637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:81: scan */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2519(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2601 in k2598 in scan */
static void C_ccall f_2603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=f_2477(((C_word*)((C_word*)t0)[6])[1]);
t3=C_i_cdr(((C_word*)t0)[5]);
/* optimizer.scm:77: scan-each */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2482(t4,((C_word*)t0)[3],t3,((C_word*)t0)[2]);}

/* k2571 in scan */
static void C_fcall f_2573(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2573,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_2556(t4,t3);}
else{
t2=((C_word*)t0)[2];
f_2556(t2,C_SCHEME_UNDEFINED);}}

/* k2554 in scan */
static void C_fcall f_2556(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2556,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2560,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2562,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:72: remove */
t4=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)((C_word*)t0)[4])[1]);}

/* a2561 in k2554 in scan */
static void C_ccall f_2562(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2562,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(t3,((C_word*)t0)[2]));}

/* k2558 in k2554 in scan */
static void C_ccall f_2560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* scan-each */
static void C_fcall f_2482(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2482,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2484,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_list_2(t2,lf[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2496,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_2496(t9,t1,t2);}

/* for-each-loop38 in scan-each */
static void C_fcall f_2496(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2496,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2506,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g3945 */
t5=((C_word*)t0)[2];
f_2484(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2504 in for-each-loop38 in scan-each */
static void C_ccall f_2506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2496(t3,((C_word*)t0)[2],t2);}

/* g39 in scan-each */
static void C_fcall f_2484(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2484,NULL,3,t0,t1,t2);}
/* optimizer.scm:60: scan */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2519(t3,t1,t2,((C_word*)t0)[2]);}

/* touch */
static C_word C_fcall f_2477(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_stack_check;
t1=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_END_OF_LIST);
return(t2);}

/* remember */
static void C_fcall f_2470(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2470,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2475,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:53: alist-update! */
t5=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t2,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k2473 in remember */
static void C_ccall f_2475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* mark */
static void C_fcall f_2447(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2447,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2454,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t4)){
t5=t3;
f_2454(t5,C_SCHEME_FALSE);}
else{
t5=C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]);
t6=t3;
f_2454(t6,C_i_not(t5));}}

/* k2452 in mark */
static void C_fcall f_2454(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2454,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[489] = {
{"toplevel:optimizer_2escm",(void*)C_optimizer_toplevel},
{"f_2439:optimizer_2escm",(void*)f_2439},
{"f_2442:optimizer_2escm",(void*)f_2442},
{"f_2822:optimizer_2escm",(void*)f_2822},
{"f_10651:optimizer_2escm",(void*)f_10651},
{"f_10659:optimizer_2escm",(void*)f_10659},
{"f_10664:optimizer_2escm",(void*)f_10664},
{"f_10674:optimizer_2escm",(void*)f_10674},
{"f_10678:optimizer_2escm",(void*)f_10678},
{"f_10700:optimizer_2escm",(void*)f_10700},
{"f_5268:optimizer_2escm",(void*)f_5268},
{"f_9892:optimizer_2escm",(void*)f_9892},
{"f_9938:optimizer_2escm",(void*)f_9938},
{"f_9980:optimizer_2escm",(void*)f_9980},
{"f_9990:optimizer_2escm",(void*)f_9990},
{"f_10327:optimizer_2escm",(void*)f_10327},
{"f_10319:optimizer_2escm",(void*)f_10319},
{"f_10096:optimizer_2escm",(void*)f_10096},
{"f_10125:optimizer_2escm",(void*)f_10125},
{"f_10295:optimizer_2escm",(void*)f_10295},
{"f_10287:optimizer_2escm",(void*)f_10287},
{"f_10156:optimizer_2escm",(void*)f_10156},
{"f_10209:optimizer_2escm",(void*)f_10209},
{"f_10199:optimizer_2escm",(void*)f_10199},
{"f_10207:optimizer_2escm",(void*)f_10207},
{"f_10353:optimizer_2escm",(void*)f_10353},
{"f_10366:optimizer_2escm",(void*)f_10366},
{"f_10408:optimizer_2escm",(void*)f_10408},
{"f_10392:optimizer_2escm",(void*)f_10392},
{"f_10396:optimizer_2escm",(void*)f_10396},
{"f_10388:optimizer_2escm",(void*)f_10388},
{"f_10482:optimizer_2escm",(void*)f_10482},
{"f_10495:optimizer_2escm",(void*)f_10495},
{"f_10501:optimizer_2escm",(void*)f_10501},
{"f_10553:optimizer_2escm",(void*)f_10553},
{"f_10545:optimizer_2escm",(void*)f_10545},
{"f_10529:optimizer_2escm",(void*)f_10529},
{"f_10533:optimizer_2escm",(void*)f_10533},
{"f_10537:optimizer_2escm",(void*)f_10537},
{"f_5271:optimizer_2escm",(void*)f_5271},
{"f_9673:optimizer_2escm",(void*)f_9673},
{"f_9695:optimizer_2escm",(void*)f_9695},
{"f_9775:optimizer_2escm",(void*)f_9775},
{"f_9733:optimizer_2escm",(void*)f_9733},
{"f_9767:optimizer_2escm",(void*)f_9767},
{"f_9771:optimizer_2escm",(void*)f_9771},
{"f_9759:optimizer_2escm",(void*)f_9759},
{"f_9731:optimizer_2escm",(void*)f_9731},
{"f_9809:optimizer_2escm",(void*)f_9809},
{"f_9829:optimizer_2escm",(void*)f_9829},
{"f_5274:optimizer_2escm",(void*)f_5274},
{"f_5781:optimizer_2escm",(void*)f_5781},
{"f_8230:optimizer_2escm",(void*)f_8230},
{"f_9652:optimizer_2escm",(void*)f_9652},
{"f_9655:optimizer_2escm",(void*)f_9655},
{"f_8917:optimizer_2escm",(void*)f_8917},
{"f_9642:optimizer_2escm",(void*)f_9642},
{"f_9640:optimizer_2escm",(void*)f_9640},
{"f_8921:optimizer_2escm",(void*)f_8921},
{"f_8936:optimizer_2escm",(void*)f_8936},
{"f_8945:optimizer_2escm",(void*)f_8945},
{"f_8951:optimizer_2escm",(void*)f_8951},
{"f_8954:optimizer_2escm",(void*)f_8954},
{"f_8960:optimizer_2escm",(void*)f_8960},
{"f_9248:optimizer_2escm",(void*)f_9248},
{"f_9569:optimizer_2escm",(void*)f_9569},
{"f_9579:optimizer_2escm",(void*)f_9579},
{"f_9540:optimizer_2escm",(void*)f_9540},
{"f_9550:optimizer_2escm",(void*)f_9550},
{"f_9522:optimizer_2escm",(void*)f_9522},
{"f_9525:optimizer_2escm",(void*)f_9525},
{"f_9470:optimizer_2escm",(void*)f_9470},
{"f_9473:optimizer_2escm",(void*)f_9473},
{"f_9317:optimizer_2escm",(void*)f_9317},
{"f_9364:optimizer_2escm",(void*)f_9364},
{"f_9374:optimizer_2escm",(void*)f_9374},
{"f_9377:optimizer_2escm",(void*)f_9377},
{"f_9411:optimizer_2escm",(void*)f_9411},
{"f_9380:optimizer_2escm",(void*)f_9380},
{"f_9383:optimizer_2escm",(void*)f_9383},
{"f_9326:optimizer_2escm",(void*)f_9326},
{"f_9329:optimizer_2escm",(void*)f_9329},
{"f_9332:optimizer_2escm",(void*)f_9332},
{"f_8963:optimizer_2escm",(void*)f_8963},
{"f_9230:optimizer_2escm",(void*)f_9230},
{"f_9032:optimizer_2escm",(void*)f_9032},
{"f_9207:optimizer_2escm",(void*)f_9207},
{"f_9217:optimizer_2escm",(void*)f_9217},
{"f_9038:optimizer_2escm",(void*)f_9038},
{"f_9055:optimizer_2escm",(void*)f_9055},
{"f_9129:optimizer_2escm",(void*)f_9129},
{"f_9058:optimizer_2escm",(void*)f_9058},
{"f_9061:optimizer_2escm",(void*)f_9061},
{"f_9106:optimizer_2escm",(void*)f_9106},
{"f_9098:optimizer_2escm",(void*)f_9098},
{"f_9069:optimizer_2escm",(void*)f_9069},
{"f_8964:optimizer_2escm",(void*)f_8964},
{"f_8979:optimizer_2escm",(void*)f_8979},
{"f_8463:optimizer_2escm",(void*)f_8463},
{"f_8908:optimizer_2escm",(void*)f_8908},
{"f_8915:optimizer_2escm",(void*)f_8915},
{"f_8466:optimizer_2escm",(void*)f_8466},
{"f_8895:optimizer_2escm",(void*)f_8895},
{"f_8871:optimizer_2escm",(void*)f_8871},
{"f_8882:optimizer_2escm",(void*)f_8882},
{"f_8838:optimizer_2escm",(void*)f_8838},
{"f_8729:optimizer_2escm",(void*)f_8729},
{"f_8734:optimizer_2escm",(void*)f_8734},
{"f_8676:optimizer_2escm",(void*)f_8676},
{"f_8682:optimizer_2escm",(void*)f_8682},
{"f_8687:optimizer_2escm",(void*)f_8687},
{"f_8635:optimizer_2escm",(void*)f_8635},
{"f_8641:optimizer_2escm",(void*)f_8641},
{"f_8646:optimizer_2escm",(void*)f_8646},
{"f_8619:optimizer_2escm",(void*)f_8619},
{"f_8615:optimizer_2escm",(void*)f_8615},
{"f_8585:optimizer_2escm",(void*)f_8585},
{"f_8548:optimizer_2escm",(void*)f_8548},
{"f_8564:optimizer_2escm",(void*)f_8564},
{"f_8530:optimizer_2escm",(void*)f_8530},
{"f_8233:optimizer_2escm",(void*)f_8233},
{"f_8440:optimizer_2escm",(void*)f_8440},
{"f_8450:optimizer_2escm",(void*)f_8450},
{"f_8428:optimizer_2escm",(void*)f_8428},
{"f_8412:optimizer_2escm",(void*)f_8412},
{"f_8386:optimizer_2escm",(void*)f_8386},
{"f_8304:optimizer_2escm",(void*)f_8304},
{"f_8310:optimizer_2escm",(void*)f_8310},
{"f_8316:optimizer_2escm",(void*)f_8316},
{"f_8369:optimizer_2escm",(void*)f_8369},
{"f_8273:optimizer_2escm",(void*)f_8273},
{"f_5803:optimizer_2escm",(void*)f_5803},
{"f_8097:optimizer_2escm",(void*)f_8097},
{"f_8126:optimizer_2escm",(void*)f_8126},
{"f_8138:optimizer_2escm",(void*)f_8138},
{"f_8152:optimizer_2escm",(void*)f_8152},
{"f_8201:optimizer_2escm",(void*)f_8201},
{"f_5828:optimizer_2escm",(void*)f_5828},
{"f_8172:optimizer_2escm",(void*)f_8172},
{"f_8176:optimizer_2escm",(void*)f_8176},
{"f_8146:optimizer_2escm",(void*)f_8146},
{"f_8132:optimizer_2escm",(void*)f_8132},
{"f_8130:optimizer_2escm",(void*)f_8130},
{"f_8122:optimizer_2escm",(void*)f_8122},
{"f_8017:optimizer_2escm",(void*)f_8017},
{"f_8061:optimizer_2escm",(void*)f_8061},
{"f_7822:optimizer_2escm",(void*)f_7822},
{"f_7828:optimizer_2escm",(void*)f_7828},
{"f_7944:optimizer_2escm",(void*)f_7944},
{"f_7837:optimizer_2escm",(void*)f_7837},
{"f_7899:optimizer_2escm",(void*)f_7899},
{"f_7897:optimizer_2escm",(void*)f_7897},
{"f_7859:optimizer_2escm",(void*)f_7859},
{"f_7737:optimizer_2escm",(void*)f_7737},
{"f_7778:optimizer_2escm",(void*)f_7778},
{"f_7790:optimizer_2escm",(void*)f_7790},
{"f_7768:optimizer_2escm",(void*)f_7768},
{"f_7766:optimizer_2escm",(void*)f_7766},
{"f_7555:optimizer_2escm",(void*)f_7555},
{"f_7661:optimizer_2escm",(void*)f_7661},
{"f_7564:optimizer_2escm",(void*)f_7564},
{"f_7635:optimizer_2escm",(void*)f_7635},
{"f_7633:optimizer_2escm",(void*)f_7633},
{"f_7586:optimizer_2escm",(void*)f_7586},
{"f_7515:optimizer_2escm",(void*)f_7515},
{"f_7531:optimizer_2escm",(void*)f_7531},
{"f_7436:optimizer_2escm",(void*)f_7436},
{"f_7465:optimizer_2escm",(void*)f_7465},
{"f_7288:optimizer_2escm",(void*)f_7288},
{"f_7311:optimizer_2escm",(void*)f_7311},
{"f_7317:optimizer_2escm",(void*)f_7317},
{"f_7372:optimizer_2escm",(void*)f_7372},
{"f_7346:optimizer_2escm",(void*)f_7346},
{"f_7342:optimizer_2escm",(void*)f_7342},
{"f_7200:optimizer_2escm",(void*)f_7200},
{"f_7226:optimizer_2escm",(void*)f_7226},
{"f_7222:optimizer_2escm",(void*)f_7222},
{"f_7106:optimizer_2escm",(void*)f_7106},
{"f_7029:optimizer_2escm",(void*)f_7029},
{"f_7053:optimizer_2escm",(void*)f_7053},
{"f_7057:optimizer_2escm",(void*)f_7057},
{"f_6941:optimizer_2escm",(void*)f_6941},
{"f_6997:optimizer_2escm",(void*)f_6997},
{"f_6993:optimizer_2escm",(void*)f_6993},
{"f_6870:optimizer_2escm",(void*)f_6870},
{"f_6882:optimizer_2escm",(void*)f_6882},
{"f_6902:optimizer_2escm",(void*)f_6902},
{"f_6898:optimizer_2escm",(void*)f_6898},
{"f_6771:optimizer_2escm",(void*)f_6771},
{"f_6780:optimizer_2escm",(void*)f_6780},
{"f_6800:optimizer_2escm",(void*)f_6800},
{"f_6808:optimizer_2escm",(void*)f_6808},
{"f_6812:optimizer_2escm",(void*)f_6812},
{"f_6522:optimizer_2escm",(void*)f_6522},
{"f_6550:optimizer_2escm",(void*)f_6550},
{"f_6553:optimizer_2escm",(void*)f_6553},
{"f_6677:optimizer_2escm",(void*)f_6677},
{"f_6706:optimizer_2escm",(void*)f_6706},
{"f_6564:optimizer_2escm",(void*)f_6564},
{"f_6642:optimizer_2escm",(void*)f_6642},
{"f_6671:optimizer_2escm",(void*)f_6671},
{"f_6570:optimizer_2escm",(void*)f_6570},
{"f_6614:optimizer_2escm",(void*)f_6614},
{"f_6612:optimizer_2escm",(void*)f_6612},
{"f_6575:optimizer_2escm",(void*)f_6575},
{"f_6544:optimizer_2escm",(void*)f_6544},
{"f_6496:optimizer_2escm",(void*)f_6496},
{"f_6423:optimizer_2escm",(void*)f_6423},
{"f_6460:optimizer_2escm",(void*)f_6460},
{"f_6452:optimizer_2escm",(void*)f_6452},
{"f_6334:optimizer_2escm",(void*)f_6334},
{"f_6229:optimizer_2escm",(void*)f_6229},
{"f_6284:optimizer_2escm",(void*)f_6284},
{"f_6161:optimizer_2escm",(void*)f_6161},
{"f_6181:optimizer_2escm",(void*)f_6181},
{"f_6189:optimizer_2escm",(void*)f_6189},
{"f_6085:optimizer_2escm",(void*)f_6085},
{"f_6128:optimizer_2escm",(void*)f_6128},
{"f_6090:optimizer_2escm",(void*)f_6090},
{"f_6111:optimizer_2escm",(void*)f_6111},
{"f_6016:optimizer_2escm",(void*)f_6016},
{"f_5865:optimizer_2escm",(void*)f_5865},
{"f_5946:optimizer_2escm",(void*)f_5946},
{"f_5868:optimizer_2escm",(void*)f_5868},
{"f_5783:optimizer_2escm",(void*)f_5783},
{"f_5787:optimizer_2escm",(void*)f_5787},
{"f_5797:optimizer_2escm",(void*)f_5797},
{"f_5276:optimizer_2escm",(void*)f_5276},
{"f_5730:optimizer_2escm",(void*)f_5730},
{"f_5763:optimizer_2escm",(void*)f_5763},
{"f_5743:optimizer_2escm",(void*)f_5743},
{"f_5286:optimizer_2escm",(void*)f_5286},
{"f_5693:optimizer_2escm",(void*)f_5693},
{"f_5703:optimizer_2escm",(void*)f_5703},
{"f_5349:optimizer_2escm",(void*)f_5349},
{"f_5670:optimizer_2escm",(void*)f_5670},
{"f_5680:optimizer_2escm",(void*)f_5680},
{"f_5412:optimizer_2escm",(void*)f_5412},
{"f_5647:optimizer_2escm",(void*)f_5647},
{"f_5657:optimizer_2escm",(void*)f_5657},
{"f_5476:optimizer_2escm",(void*)f_5476},
{"f_5479:optimizer_2escm",(void*)f_5479},
{"f_5499:optimizer_2escm",(void*)f_5499},
{"f_5512:optimizer_2escm",(void*)f_5512},
{"f_5573:optimizer_2escm",(void*)f_5573},
{"f_5619:optimizer_2escm",(void*)f_5619},
{"f_5571:optimizer_2escm",(void*)f_5571},
{"f_5541:optimizer_2escm",(void*)f_5541},
{"f_5482:optimizer_2escm",(void*)f_5482},
{"f_5491:optimizer_2escm",(void*)f_5491},
{"f_5413:optimizer_2escm",(void*)f_5413},
{"f_5456:optimizer_2escm",(void*)f_5456},
{"f_5462:optimizer_2escm",(void*)f_5462},
{"f_5420:optimizer_2escm",(void*)f_5420},
{"f_5430:optimizer_2escm",(void*)f_5430},
{"f_5443:optimizer_2escm",(void*)f_5443},
{"f_5428:optimizer_2escm",(void*)f_5428},
{"f_5424:optimizer_2escm",(void*)f_5424},
{"f_5350:optimizer_2escm",(void*)f_5350},
{"f_5382:optimizer_2escm",(void*)f_5382},
{"f_5395:optimizer_2escm",(void*)f_5395},
{"f_5360:optimizer_2escm",(void*)f_5360},
{"f_5376:optimizer_2escm",(void*)f_5376},
{"f_5364:optimizer_2escm",(void*)f_5364},
{"f_5368:optimizer_2escm",(void*)f_5368},
{"f_5331:optimizer_2escm",(void*)f_5331},
{"f_5340:optimizer_2escm",(void*)f_5340},
{"f_5336:optimizer_2escm",(void*)f_5336},
{"f_5288:optimizer_2escm",(void*)f_5288},
{"f_5294:optimizer_2escm",(void*)f_5294},
{"f_5318:optimizer_2escm",(void*)f_5318},
{"f_5261:optimizer_2escm",(void*)f_5261},
{"f_4940:optimizer_2escm",(void*)f_4940},
{"f_4954:optimizer_2escm",(void*)f_4954},
{"f_4974:optimizer_2escm",(void*)f_4974},
{"f_5227:optimizer_2escm",(void*)f_5227},
{"f_5238:optimizer_2escm",(void*)f_5238},
{"f_5248:optimizer_2escm",(void*)f_5248},
{"f_4975:optimizer_2escm",(void*)f_4975},
{"f_5211:optimizer_2escm",(void*)f_5211},
{"f_4993:optimizer_2escm",(void*)f_4993},
{"f_4996:optimizer_2escm",(void*)f_4996},
{"f_5002:optimizer_2escm",(void*)f_5002},
{"f_5022:optimizer_2escm",(void*)f_5022},
{"f_5028:optimizer_2escm",(void*)f_5028},
{"f_5034:optimizer_2escm",(void*)f_5034},
{"f_5043:optimizer_2escm",(void*)f_5043},
{"f_5050:optimizer_2escm",(void*)f_5050},
{"f_5053:optimizer_2escm",(void*)f_5053},
{"f_5071:optimizer_2escm",(void*)f_5071},
{"f_5056:optimizer_2escm",(void*)f_5056},
{"f_4957:optimizer_2escm",(void*)f_4957},
{"f_4960:optimizer_2escm",(void*)f_4960},
{"f_4947:optimizer_2escm",(void*)f_4947},
{"f_4943:optimizer_2escm",(void*)f_4943},
{"f_2825:optimizer_2escm",(void*)f_2825},
{"f_4819:optimizer_2escm",(void*)f_4819},
{"f_4825:optimizer_2escm",(void*)f_4825},
{"f_4829:optimizer_2escm",(void*)f_4829},
{"f_4832:optimizer_2escm",(void*)f_4832},
{"f_4868:optimizer_2escm",(void*)f_4868},
{"f_4905:optimizer_2escm",(void*)f_4905},
{"f_4873:optimizer_2escm",(void*)f_4873},
{"f_4915:optimizer_2escm",(void*)f_4915},
{"f_4835:optimizer_2escm",(void*)f_4835},
{"f_4838:optimizer_2escm",(void*)f_4838},
{"f_4841:optimizer_2escm",(void*)f_4841},
{"f_4844:optimizer_2escm",(void*)f_4844},
{"f_4752:optimizer_2escm",(void*)f_4752},
{"f_4780:optimizer_2escm",(void*)f_4780},
{"f_4809:optimizer_2escm",(void*)f_4809},
{"f_4764:optimizer_2escm",(void*)f_4764},
{"f_4770:optimizer_2escm",(void*)f_4770},
{"f_4754:optimizer_2escm",(void*)f_4754},
{"f_3191:optimizer_2escm",(void*)f_3191},
{"f_4622:optimizer_2escm",(void*)f_4622},
{"f_4648:optimizer_2escm",(void*)f_4648},
{"f_4747:optimizer_2escm",(void*)f_4747},
{"f_4743:optimizer_2escm",(void*)f_4743},
{"f_4705:optimizer_2escm",(void*)f_4705},
{"f_4736:optimizer_2escm",(void*)f_4736},
{"f_4732:optimizer_2escm",(void*)f_4732},
{"f_4724:optimizer_2escm",(void*)f_4724},
{"f_4665:optimizer_2escm",(void*)f_4665},
{"f_4695:optimizer_2escm",(void*)f_4695},
{"f_4671:optimizer_2escm",(void*)f_4671},
{"f_4639:optimizer_2escm",(void*)f_4639},
{"f_4628:optimizer_2escm",(void*)f_4628},
{"f_4567:optimizer_2escm",(void*)f_4567},
{"f_4596:optimizer_2escm",(void*)f_4596},
{"f_4565:optimizer_2escm",(void*)f_4565},
{"f_4555:optimizer_2escm",(void*)f_4555},
{"f_4517:optimizer_2escm",(void*)f_4517},
{"f_4507:optimizer_2escm",(void*)f_4507},
{"f_3610:optimizer_2escm",(void*)f_3610},
{"f_3619:optimizer_2escm",(void*)f_3619},
{"f_3701:optimizer_2escm",(void*)f_3701},
{"f_3931:optimizer_2escm",(void*)f_3931},
{"f_3947:optimizer_2escm",(void*)f_3947},
{"f_4486:optimizer_2escm",(void*)f_4486},
{"f_4427:optimizer_2escm",(void*)f_4427},
{"f_4477:optimizer_2escm",(void*)f_4477},
{"f_4473:optimizer_2escm",(void*)f_4473},
{"f_4447:optimizer_2escm",(void*)f_4447},
{"f_3965:optimizer_2escm",(void*)f_3965},
{"f_4063:optimizer_2escm",(void*)f_4063},
{"f_4414:optimizer_2escm",(void*)f_4414},
{"f_4277:optimizer_2escm",(void*)f_4277},
{"f_4280:optimizer_2escm",(void*)f_4280},
{"f_4292:optimizer_2escm",(void*)f_4292},
{"f_4303:optimizer_2escm",(void*)f_4303},
{"f_4378:optimizer_2escm",(void*)f_4378},
{"f_4370:optimizer_2escm",(void*)f_4370},
{"f_4333:optimizer_2escm",(void*)f_4333},
{"f_4362:optimizer_2escm",(void*)f_4362},
{"f_4331:optimizer_2escm",(void*)f_4331},
{"f_4318:optimizer_2escm",(void*)f_4318},
{"f_4297:optimizer_2escm",(void*)f_4297},
{"f_4077:optimizer_2escm",(void*)f_4077},
{"f_4158:optimizer_2escm",(void*)f_4158},
{"f_4164:optimizer_2escm",(void*)f_4164},
{"f_4170:optimizer_2escm",(void*)f_4170},
{"f_4214:optimizer_2escm",(void*)f_4214},
{"f_4190:optimizer_2escm",(void*)f_4190},
{"f_4194:optimizer_2escm",(void*)f_4194},
{"f_4152:optimizer_2escm",(void*)f_4152},
{"f_4115:optimizer_2escm",(void*)f_4115},
{"f_4144:optimizer_2escm",(void*)f_4144},
{"f_4113:optimizer_2escm",(void*)f_4113},
{"f_4100:optimizer_2escm",(void*)f_4100},
{"f_3968:optimizer_2escm",(void*)f_3968},
{"f_4028:optimizer_2escm",(void*)f_4028},
{"f_4038:optimizer_2escm",(void*)f_4038},
{"f_3979:optimizer_2escm",(void*)f_3979},
{"f_3982:optimizer_2escm",(void*)f_3982},
{"f_3985:optimizer_2escm",(void*)f_3985},
{"f_3990:optimizer_2escm",(void*)f_3990},
{"f_4007:optimizer_2escm",(void*)f_4007},
{"f_3993:optimizer_2escm",(void*)f_3993},
{"f_3997:optimizer_2escm",(void*)f_3997},
{"f_4004:optimizer_2escm",(void*)f_4004},
{"f_3969:optimizer_2escm",(void*)f_3969},
{"f_3705:optimizer_2escm",(void*)f_3705},
{"f_3913:optimizer_2escm",(void*)f_3913},
{"f_3727:optimizer_2escm",(void*)f_3727},
{"f_3887:optimizer_2escm",(void*)f_3887},
{"f_3742:optimizer_2escm",(void*)f_3742},
{"f_3763:optimizer_2escm",(void*)f_3763},
{"f_3851:optimizer_2escm",(void*)f_3851},
{"f_3843:optimizer_2escm",(void*)f_3843},
{"f_3766:optimizer_2escm",(void*)f_3766},
{"f_3822:optimizer_2escm",(void*)f_3822},
{"f_3820:optimizer_2escm",(void*)f_3820},
{"f_3803:optimizer_2escm",(void*)f_3803},
{"f_3778:optimizer_2escm",(void*)f_3778},
{"f_3712:optimizer_2escm",(void*)f_3712},
{"f_3633:optimizer_2escm",(void*)f_3633},
{"f_3636:optimizer_2escm",(void*)f_3636},
{"f_3672:optimizer_2escm",(void*)f_3672},
{"f_3682:optimizer_2escm",(void*)f_3682},
{"f_3650:optimizer_2escm",(void*)f_3650},
{"f_3657:optimizer_2escm",(void*)f_3657},
{"f_3640:optimizer_2escm",(void*)f_3640},
{"f_3415:optimizer_2escm",(void*)f_3415},
{"f_3514:optimizer_2escm",(void*)f_3514},
{"f_3519:optimizer_2escm",(void*)f_3519},
{"f_3526:optimizer_2escm",(void*)f_3526},
{"f_3566:optimizer_2escm",(void*)f_3566},
{"f_3546:optimizer_2escm",(void*)f_3546},
{"f_3420:optimizer_2escm",(void*)f_3420},
{"f_3438:optimizer_2escm",(void*)f_3438},
{"f_3445:optimizer_2escm",(void*)f_3445},
{"f_3492:optimizer_2escm",(void*)f_3492},
{"f_3495:optimizer_2escm",(void*)f_3495},
{"f_3485:optimizer_2escm",(void*)f_3485},
{"f_3465:optimizer_2escm",(void*)f_3465},
{"f_3426:optimizer_2escm",(void*)f_3426},
{"f_3432:optimizer_2escm",(void*)f_3432},
{"f_3312:optimizer_2escm",(void*)f_3312},
{"f_3390:optimizer_2escm",(void*)f_3390},
{"f_3397:optimizer_2escm",(void*)f_3397},
{"f_3315:optimizer_2escm",(void*)f_3315},
{"f_3351:optimizer_2escm",(void*)f_3351},
{"f_3380:optimizer_2escm",(void*)f_3380},
{"f_3349:optimizer_2escm",(void*)f_3349},
{"f_3339:optimizer_2escm",(void*)f_3339},
{"f_3231:optimizer_2escm",(void*)f_3231},
{"f_3235:optimizer_2escm",(void*)f_3235},
{"f_3247:optimizer_2escm",(void*)f_3247},
{"f_3253:optimizer_2escm",(void*)f_3253},
{"f_3273:optimizer_2escm",(void*)f_3273},
{"f_3002:optimizer_2escm",(void*)f_3002},
{"f_3016:optimizer_2escm",(void*)f_3016},
{"f_3150:optimizer_2escm",(void*)f_3150},
{"f_3156:optimizer_2escm",(void*)f_3156},
{"f_3096:optimizer_2escm",(void*)f_3096},
{"f_3105:optimizer_2escm",(void*)f_3105},
{"f_3115:optimizer_2escm",(void*)f_3115},
{"f_3119:optimizer_2escm",(void*)f_3119},
{"f_3126:optimizer_2escm",(void*)f_3126},
{"f_3035:optimizer_2escm",(void*)f_3035},
{"f_2868:optimizer_2escm",(void*)f_2868},
{"f_2872:optimizer_2escm",(void*)f_2872},
{"f_2883:optimizer_2escm",(void*)f_2883},
{"f_2893:optimizer_2escm",(void*)f_2893},
{"f_2954:optimizer_2escm",(void*)f_2954},
{"f_2952:optimizer_2escm",(void*)f_2952},
{"f_2938:optimizer_2escm",(void*)f_2938},
{"f_2899:optimizer_2escm",(void*)f_2899},
{"f_2932:optimizer_2escm",(void*)f_2932},
{"f_2875:optimizer_2escm",(void*)f_2875},
{"f_2864:optimizer_2escm",(void*)f_2864},
{"f_2834:optimizer_2escm",(void*)f_2834},
{"f_2828:optimizer_2escm",(void*)f_2828},
{"f_2444:optimizer_2escm",(void*)f_2444},
{"f_2741:optimizer_2escm",(void*)f_2741},
{"f_2744:optimizer_2escm",(void*)f_2744},
{"f_2818:optimizer_2escm",(void*)f_2818},
{"f_2747:optimizer_2escm",(void*)f_2747},
{"f_2787:optimizer_2escm",(void*)f_2787},
{"f_2754:optimizer_2escm",(void*)f_2754},
{"f_2797:optimizer_2escm",(void*)f_2797},
{"f_2519:optimizer_2escm",(void*)f_2519},
{"f_2600:optimizer_2escm",(void*)f_2600},
{"f_2677:optimizer_2escm",(void*)f_2677},
{"f_2680:optimizer_2escm",(void*)f_2680},
{"f_2698:optimizer_2escm",(void*)f_2698},
{"f_2701:optimizer_2escm",(void*)f_2701},
{"f_2683:optimizer_2escm",(void*)f_2683},
{"f_2686:optimizer_2escm",(void*)f_2686},
{"f_2641:optimizer_2escm",(void*)f_2641},
{"f_2626:optimizer_2escm",(void*)f_2626},
{"f_2633:optimizer_2escm",(void*)f_2633},
{"f_2637:optimizer_2escm",(void*)f_2637},
{"f_2603:optimizer_2escm",(void*)f_2603},
{"f_2573:optimizer_2escm",(void*)f_2573},
{"f_2556:optimizer_2escm",(void*)f_2556},
{"f_2562:optimizer_2escm",(void*)f_2562},
{"f_2560:optimizer_2escm",(void*)f_2560},
{"f_2482:optimizer_2escm",(void*)f_2482},
{"f_2496:optimizer_2escm",(void*)f_2496},
{"f_2506:optimizer_2escm",(void*)f_2506},
{"f_2484:optimizer_2escm",(void*)f_2484},
{"f_2477:optimizer_2escm",(void*)f_2477},
{"f_2470:optimizer_2escm",(void*)f_2470},
{"f_2475:optimizer_2escm",(void*)f_2475},
{"f_2447:optimizer_2escm",(void*)f_2447},
{"f_2454:optimizer_2escm",(void*)f_2454},
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
