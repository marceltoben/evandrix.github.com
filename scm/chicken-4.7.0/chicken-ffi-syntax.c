/* Generated from chicken-ffi-syntax.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:18
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: chicken-ffi-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file chicken-ffi-syntax.c
   unit: chicken_2dffi_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[82];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,24),40,97,51,52,49,32,102,111,114,109,50,53,48,32,114,50,53,49,32,99,50,53,50,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,24),40,97,51,56,49,32,102,111,114,109,50,52,52,32,114,50,52,53,32,99,50,52,54,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,24),40,97,51,57,53,32,102,111,114,109,50,51,56,32,114,50,51,57,32,99,50,52,48,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,24),40,97,52,48,57,32,102,111,114,109,50,51,50,32,114,50,51,51,32,99,50,51,52,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,24),40,97,52,50,51,32,102,111,114,109,50,50,54,32,114,50,50,55,32,99,50,50,56,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,24),40,97,52,51,55,32,102,111,114,109,50,50,48,32,114,50,50,49,32,99,50,50,50,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,24),40,97,52,53,49,32,102,111,114,109,50,49,52,32,114,50,49,53,32,99,50,49,54,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,24),40,97,52,54,53,32,102,111,114,109,50,48,56,32,114,50,48,57,32,99,50,49,48,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,24),40,97,52,55,57,32,102,111,114,109,50,48,49,32,114,50,48,50,32,99,50,48,51,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,24),40,97,53,48,48,32,102,111,114,109,49,56,57,32,114,49,57,48,32,99,49,57,49,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,24),40,97,53,52,54,32,102,111,114,109,49,54,52,32,114,49,54,53,32,99,49,54,54,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,6),40,103,49,50,55,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,24),40,97,54,52,54,32,98,49,53,49,32,97,49,53,50,32,114,101,115,116,49,53,51,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,97,54,56,57,32,98,49,52,57,32,97,49,53,48,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,49,50,49,32,103,49,51,51,49,52,48,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,24),40,97,54,48,56,32,102,111,114,109,49,49,51,32,114,49,49,52,32,99,49,49,53,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,21),40,97,55,53,50,32,102,111,114,109,57,51,32,114,57,52,32,99,57,53,41,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,18),40,97,56,52,53,32,120,56,54,32,114,56,55,32,99,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,48,32,103,55,50,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,51,51,32,103,52,53,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,18),40,97,56,54,50,32,102,111,114,109,54,32,114,55,32,99,56,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_chicken_2dffi_2dsyntax_toplevel)
C_externexport void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_284)
static void C_ccall f_284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_288)
static void C_ccall f_288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_863)
static void C_ccall f_863(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_870)
static void C_fcall f_870(C_word t0,C_word t1) C_noret;
C_noret_decl(f_873)
static void C_fcall f_873(C_word t0,C_word t1) C_noret;
C_noret_decl(f_938)
static void C_ccall f_938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1058)
static void C_fcall f_1058(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1056)
static void C_ccall f_1056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_983)
static void C_ccall f_983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1011)
static void C_fcall f_1011(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_999)
static void C_ccall f_999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_879)
static void C_ccall f_879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_889)
static void C_ccall f_889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_861)
static void C_ccall f_861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_291)
static void C_ccall f_291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_846)
static void C_ccall f_846(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_850)
static void C_ccall f_850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_844)
static void C_ccall f_844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_294)
static void C_ccall f_294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_753)
static void C_ccall f_753(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_757)
static void C_ccall f_757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_769)
static void C_ccall f_769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_821)
static void C_ccall f_821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_772)
static void C_ccall f_772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_779)
static void C_ccall f_779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_817)
static void C_ccall f_817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_751)
static void C_ccall f_751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_297)
static void C_ccall f_297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_609)
static void C_ccall f_609(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_613)
static void C_ccall f_613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_714)
static void C_fcall f_714(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_743)
static void C_ccall f_743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_634)
static void C_ccall f_634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_690)
static void C_ccall f_690(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_641)
static void C_ccall f_641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_647)
static void C_ccall f_647(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_645)
static void C_ccall f_645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_620)
static void C_fcall f_620(C_word t0,C_word t1) C_noret;
C_noret_decl(f_628)
static void C_ccall f_628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_607)
static void C_ccall f_607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_300)
static void C_ccall f_300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_547)
static void C_ccall f_547(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_551)
static void C_ccall f_551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_554)
static void C_ccall f_554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_569)
static void C_ccall f_569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_577)
static void C_ccall f_577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_580)
static void C_ccall f_580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_583)
static void C_ccall f_583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_586)
static void C_ccall f_586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_599)
static void C_ccall f_599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_589)
static void C_ccall f_589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_592)
static void C_ccall f_592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_595)
static void C_ccall f_595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_545)
static void C_ccall f_545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_303)
static void C_ccall f_303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_501)
static void C_ccall f_501(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_505)
static void C_ccall f_505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_508)
static void C_ccall f_508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_526)
static void C_ccall f_526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_499)
static void C_ccall f_499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_306)
static void C_ccall f_306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_480)
static void C_ccall f_480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_484)
static void C_ccall f_484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_478)
static void C_ccall f_478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_309)
static void C_ccall f_309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_466)
static void C_ccall f_466(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_464)
static void C_ccall f_464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_312)
static void C_ccall f_312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_452)
static void C_ccall f_452(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_450)
static void C_ccall f_450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_315)
static void C_ccall f_315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_438)
static void C_ccall f_438(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_436)
static void C_ccall f_436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_318)
static void C_ccall f_318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_424)
static void C_ccall f_424(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_422)
static void C_ccall f_422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_321)
static void C_ccall f_321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_410)
static void C_ccall f_410(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_408)
static void C_ccall f_408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_324)
static void C_ccall f_324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_396)
static void C_ccall f_396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_394)
static void C_ccall f_394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_327)
static void C_ccall f_327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_382)
static void C_ccall f_382(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_380)
static void C_ccall f_380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_330)
static void C_ccall f_330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_342)
static void C_ccall f_342(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_346)
static void C_ccall f_346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_349)
static void C_ccall f_349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_352)
static void C_ccall f_352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_355)
static void C_ccall f_355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_366)
static void C_ccall f_366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_340)
static void C_ccall f_340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_333)
static void C_ccall f_333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_336)
static void C_ccall f_336(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_870)
static void C_fcall trf_870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_870(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_870(t0,t1);}

C_noret_decl(trf_873)
static void C_fcall trf_873(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_873(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_873(t0,t1);}

C_noret_decl(trf_1058)
static void C_fcall trf_1058(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1058(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1058(t0,t1,t2);}

C_noret_decl(trf_1011)
static void C_fcall trf_1011(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1011(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1011(t0,t1,t2);}

C_noret_decl(trf_714)
static void C_fcall trf_714(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_714(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_714(t0,t1,t2);}

C_noret_decl(trf_620)
static void C_fcall trf_620(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_620(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_620(t0,t1);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_chicken_2dffi_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("chicken_2dffi_2dsyntax_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1060)){
C_save(t1);
C_rereclaim2(1060*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,82);
lf[0]=C_h_intern(&lf[0],33,"\003syschicken-ffi-macro-environment");
lf[1]=C_h_intern(&lf[1],16,"\003sysmacro-subset");
lf[2]=C_h_intern(&lf[2],28,"\003sysextend-macro-environment");
lf[3]=C_h_intern(&lf[3],17,"foreign-type-size");
lf[4]=C_h_intern(&lf[4],28,"\004coredefine-foreign-variable");
lf[5]=C_h_intern(&lf[5],6,"size_t");
lf[6]=C_h_intern(&lf[6],10,"\004corebegin");
lf[7]=C_h_intern(&lf[7],13,"string-append");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000\007sizeof(");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[10]=C_h_intern(&lf[10],33,"\010compilerforeign-type-declaration");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[12]=C_h_intern(&lf[12],6,"gensym");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\005code_");
lf[14]=C_h_intern(&lf[14],16,"\003sysstrip-syntax");
lf[15]=C_h_intern(&lf[15],16,"\003syscheck-syntax");
lf[16]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[17]=C_h_intern(&lf[17],18,"\003syser-transformer");
lf[18]=C_h_intern(&lf[18],20,"foreign-safe-lambda*");
lf[19]=C_h_intern(&lf[19],25,"\004coreforeign-safe-lambda*");
lf[20]=C_h_intern(&lf[20],19,"foreign-safe-lambda");
lf[21]=C_h_intern(&lf[21],24,"\004coreforeign-safe-lambda");
lf[22]=C_h_intern(&lf[22],15,"foreign-lambda*");
lf[23]=C_h_intern(&lf[23],20,"\004coreforeign-lambda*");
lf[24]=C_h_intern(&lf[24],14,"foreign-lambda");
lf[25]=C_h_intern(&lf[25],19,"\004coreforeign-lambda");
lf[26]=C_h_intern(&lf[26],17,"foreign-primitive");
lf[27]=C_h_intern(&lf[27],22,"\004coreforeign-primitive");
lf[28]=C_h_intern(&lf[28],23,"define-foreign-variable");
lf[29]=C_h_intern(&lf[29],19,"define-foreign-type");
lf[30]=C_h_intern(&lf[30],24,"\004coredefine-foreign-type");
lf[31]=C_h_intern(&lf[31],15,"foreign-declare");
lf[32]=C_h_intern(&lf[32],12,"\004coredeclare");
lf[33]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006string\376\377\001\000\000\000\000");
lf[34]=C_h_intern(&lf[34],13,"foreign-value");
lf[35]=C_h_intern(&lf[35],14,"symbol->string");
lf[36]=C_h_intern(&lf[36],12,"syntax-error");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000*bad argument type - not a string or symbol");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\005code_");
lf[39]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[40]=C_h_intern(&lf[40],12,"foreign-code");
lf[41]=C_h_intern(&lf[41],11,"\004coreinline");
lf[42]=C_h_intern(&lf[42],17,"get-output-string");
lf[43]=C_h_intern(&lf[43],7,"display");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000 \012; return C_SCHEME_UNDEFINED; }\012");
lf[45]=C_h_intern(&lf[45],18,"string-intersperse");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\005() { ");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\016static C_word ");
lf[49]=C_h_intern(&lf[49],18,"open-output-string");
lf[50]=C_h_intern(&lf[50],7,"declare");
lf[51]=C_h_intern(&lf[51],5,"code_");
lf[52]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006string\376\377\001\000\000\000\000");
lf[53]=C_h_intern(&lf[53],12,"let-location");
lf[54]=C_h_intern(&lf[54],3,"map");
lf[55]=C_h_intern(&lf[55],8,"\004corelet");
lf[56]=C_h_intern(&lf[56],17,"\004corelet-location");
lf[57]=C_h_intern(&lf[57],10,"fold-right");
lf[58]=C_h_intern(&lf[58],10,"append-map");
lf[59]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001\376\377\001\000\000"
"\000\000\376\001\000\000\001_");
lf[60]=C_h_intern(&lf[60],15,"define-location");
lf[61]=C_h_intern(&lf[61],29,"\004coredefine-external-variable");
lf[62]=C_h_intern(&lf[62],9,"\004coreset!");
lf[63]=C_h_intern(&lf[63],5,"begin");
lf[64]=C_h_intern(&lf[64],9,"\003syserror");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[66]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[67]=C_h_intern(&lf[67],8,"location");
lf[68]=C_h_intern(&lf[68],13,"\004corelocation");
lf[69]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010location\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[70]=C_h_intern(&lf[70],15,"define-external");
lf[71]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[72]=C_h_intern(&lf[72],5,"quote");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[74]=C_h_intern(&lf[74],29,"\004coreforeign-callback-wrapper");
lf[75]=C_h_intern(&lf[75],6,"lambda");
lf[76]=C_h_intern(&lf[76],6,"define");
lf[77]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000\376"
"\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[78]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376"
"\001\000\000\001_\376\377\001\000\000\000\001");
lf[79]=C_h_intern(&lf[79],21,"\003sysmacro-environment");
lf[80]=C_h_intern(&lf[80],11,"\003sysprovide");
lf[81]=C_h_intern(&lf[81],18,"chicken-ffi-syntax");
C_register_lf2(lf,82,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_284,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:38: ##sys#provide */
t3=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[81]);}

/* k282 */
static void C_ccall f_284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_284,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_288,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:43: ##sys#macro-environment */
t3=*((C_word*)lf[79]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k286 in k282 */
static void C_ccall f_288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_288,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_291,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_861,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_863,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:48: ##sys#er-transformer */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a862 in k286 in k282 */
static void C_ccall f_863(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_863,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_870,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t5))){
t7=C_i_car(t5);
t8=t6;
f_870(t8,C_i_stringp(t7));}
else{
t7=t6;
f_870(t7,C_SCHEME_FALSE);}}

/* k868 in a862 in k286 in k282 */
static void C_fcall f_870(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_870,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_873,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=t1;
if(C_truep(t3)){
t4=t2;
f_873(t4,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_873(t5,C_i_symbolp(t4));}
else{
t4=t2;
f_873(t4,C_SCHEME_FALSE);}}}

/* k871 in k868 in a862 in k286 in k282 */
static void C_fcall f_873(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_873,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_879,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:54: ##sys#check-syntax */
t3=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[70],((C_word*)t0)[5],lf[71]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_938,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
/* chicken-ffi-syntax.scm:64: ##sys#check-syntax */
t3=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[70],((C_word*)t0)[5],lf[77]);}
else{
/* chicken-ffi-syntax.scm:65: ##sys#check-syntax */
t3=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[70],((C_word*)t0)[5],lf[78]);}}}

/* k936 in k871 in k868 in a862 in k286 in k282 */
static void C_ccall f_938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_938,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[5])?C_i_cadr(((C_word*)t0)[4]):C_i_car(((C_word*)t0)[4]));
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:68: r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[76]);}

/* k949 in k936 in k871 in k868 in a862 in k286 in k282 */
static void C_ccall f_951(C_word c,C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_951,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[7]);
t3=C_i_car(((C_word*)t0)[7]);
t4=C_a_i_list(&a,2,lf[72],t3);
t5=(C_truep(((C_word*)t0)[6])?C_i_car(((C_word*)t0)[5]):lf[73]);
t6=(C_truep(((C_word*)t0)[6])?C_i_caddr(((C_word*)t0)[5]):C_i_cadr(((C_word*)t0)[5]));
t7=C_a_i_list(&a,2,lf[72],t6);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_i_check_list_2(((C_word*)t0)[4],lf[54]);
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1056,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t7,a[7]=t5,a[8]=t4,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1058,a[2]=t9,a[3]=t15,a[4]=t11,a[5]=((C_word)li19),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_1058(t17,t13,((C_word*)t0)[4]);}

/* map-loop33 in k949 in k936 in k871 in k868 in a862 in k286 in k282 */
static void C_fcall f_1058(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1058,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* k1054 in k949 in k936 in k871 in k868 in a862 in k286 in k282 */
static void C_ccall f_1056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1056,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[72],t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_983,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* chicken-ffi-syntax.scm:74: r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[75]);}

/* k981 in k1054 in k949 in k936 in k871 in k868 in a862 in k286 in k282 */
static void C_ccall f_983(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_983,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(((C_word*)t0)[11],lf[54]);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_999,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1011,a[2]=t3,a[3]=t9,a[4]=t5,a[5]=((C_word)li18),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_1011(t11,t7,((C_word*)t0)[11]);}

/* map-loop60 in k981 in k1054 in k949 in k936 in k871 in k868 in a862 in k286 in k282 */
static void C_fcall f_1011(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1011,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* k997 in k981 in k1054 in k949 in k936 in k871 in k868 in a862 in k286 in k282 */
static void C_ccall f_999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_999,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[11])?C_i_cdddr(((C_word*)t0)[10]):C_i_cddr(((C_word*)t0)[10]));
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[9],t3);
t5=C_a_i_list(&a,6,lf[74],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[2],t5));}

/* k877 in k871 in k868 in a862 in k286 in k282 */
static void C_ccall f_879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_879,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_889,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:56: r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[63]);}

/* k887 in k877 in k871 in k868 in a862 in k286 in k282 */
static void C_ccall f_889(C_word c,C_word t0,C_word t1){
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
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_889,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_a_i_list(&a,3,lf[4],((C_word*)t0)[3],t2);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=C_a_i_list(&a,4,lf[61],((C_word*)t0)[3],t4,C_SCHEME_TRUE);
t6=C_i_cddr(((C_word*)t0)[4]);
if(C_truep(C_i_pairp(t6))){
t7=C_i_caddr(((C_word*)t0)[4]);
t8=C_a_i_list(&a,3,lf[62],((C_word*)t0)[3],t7);
t9=C_a_i_list(&a,1,t8);
t10=C_a_i_cons(&a,2,t5,t9);
t11=C_a_i_cons(&a,2,t3,t10);
t12=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_a_i_cons(&a,2,t1,t11));}
else{
t7=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,t3,t7);
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_cons(&a,2,t1,t8));}}

/* k859 in k286 in k282 */
static void C_ccall f_861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:45: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[70],C_SCHEME_END_OF_LIST,t1);}

/* k289 in k286 in k282 */
static void C_ccall f_291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_844,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_846,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:85: ##sys#er-transformer */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a845 in k289 in k286 in k282 */
static void C_ccall f_846(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_846,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_850,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:87: ##sys#check-syntax */
t6=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[67],t2,lf[69]);}

/* k848 in a845 in k289 in k286 in k282 */
static void C_ccall f_850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_850,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[68],t2));}

/* k842 in k289 in k286 in k282 */
static void C_ccall f_844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:82: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[67],C_SCHEME_END_OF_LIST,t1);}

/* k292 in k289 in k286 in k282 */
static void C_ccall f_294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_294,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_751,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_753,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:93: ##sys#er-transformer */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a752 in k292 in k289 in k286 in k282 */
static void C_ccall f_753(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_753,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_757,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:95: ##sys#check-syntax */
t6=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[60],t2,lf[66]);}

/* k755 in a752 in k292 in k289 in k286 in k282 */
static void C_ccall f_757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_757,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_caddr(((C_word*)t0)[4]);
t4=C_i_cdddr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_769(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_769(2,t7,C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[65],t4);}}}

/* k767 in k755 in a752 in k292 in k289 in k286 in k282 */
static void C_ccall f_769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_769,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_772,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_821,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:99: gensym */
t4=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k819 in k767 in k755 in a752 in k292 in k289 in k286 in k282 */
static void C_ccall f_821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:99: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k770 in k767 in k755 in a752 in k292 in k289 in k286 in k282 */
static void C_ccall f_772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_772,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_779,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:100: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[63]);}

/* k777 in k770 in k767 in k755 in a752 in k292 in k289 in k286 in k282 */
static void C_ccall f_779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_779,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_817,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:101: symbol->string */
t3=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k815 in k777 in k770 in k767 in k755 in a752 in k292 in k289 in k286 in k282 */
static void C_ccall f_817(C_word c,C_word t0,C_word t1){
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
C_word ab[48],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_817,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[4],((C_word*)t0)[7],((C_word*)t0)[6],t1);
t3=C_a_i_list(&a,5,lf[61],((C_word*)t0)[7],((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[5]);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t4=C_i_car(((C_word*)t0)[4]);
t5=C_a_i_list(&a,3,lf[62],((C_word*)t0)[7],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=C_a_i_cons(&a,2,t2,t7);
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_cons(&a,2,((C_word*)t0)[2],t8));}
else{
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,t2,t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}}

/* k749 in k292 in k289 in k286 in k282 */
static void C_ccall f_751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:90: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[60],C_SCHEME_END_OF_LIST,t1);}

/* k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_297,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_607,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_609,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:110: ##sys#er-transformer */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a608 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_609(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_609,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_613,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:112: ##sys#check-syntax */
t6=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[53],t2,lf[59]);}

/* k611 in a608 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_613(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_613,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_620,a[2]=((C_word*)t0)[3],a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
t9=C_i_check_list_2(t2,lf[54]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_634,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_714,a[2]=t8,a[3]=t5,a[4]=t12,a[5]=t7,a[6]=((C_word)li14),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_714(t14,t10,t2);}

/* map-loop121 in k611 in a608 in k295 in k292 in k289 in k286 in k282 */
static void C_fcall f_714(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_714,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_743,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* g127136 */
t4=((C_word*)t0)[2];
f_620(t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k741 in map-loop121 in k611 in a608 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_743(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_743,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_714(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_714(t6,((C_word*)t0)[3],t5);}}

/* k632 in k611 in a608 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_641,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_690,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:116: append-map */
t4=*((C_word*)lf[58]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,((C_word*)t0)[2],t1);}

/* a689 in k632 in k611 in a608 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_690(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_690,4,t0,t1,t2,t3);}
t4=C_i_cddr(t2);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cddr(t2);
t6=C_a_i_cons(&a,2,t3,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list1(&a,1,t6));}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}}

/* k639 in k632 in k611 in a608 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_645,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_647,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);
t5=C_a_i_cons(&a,2,lf[55],t4);
/* chicken-ffi-syntax.scm:122: fold-right */
t6=*((C_word*)lf[57]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t2,t3,t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a646 in k639 in k632 in k611 in a608 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_647(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_647,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
t6=C_eqp(C_fix(3),t5);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=C_i_cadr(t2);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,5,lf[56],t7,t8,t3,t4));}
else{
t7=C_i_car(t2);
t8=C_i_cadr(t2);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,4,lf[56],t7,t8,t4));}}

/* k643 in k639 in k632 in k611 in a608 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_645,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[55],((C_word*)t0)[2],t1));}

/* g127 in k611 in a608 in k295 in k292 in k289 in k286 in k282 */
static void C_fcall f_620(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_620,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_628,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:115: gensym */
t3=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k626 in g127 in k611 in a608 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:115: r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k605 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:107: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[53],C_SCHEME_END_OF_LIST,t1);}

/* k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_300,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_303,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_545,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_547,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:143: ##sys#er-transformer */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a546 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_547(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_547,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_551,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:145: ##sys#check-syntax */
t6=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[40],t2,lf[52]);}

/* k549 in a546 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:146: gensym */
t3=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[51]);}

/* k552 in k549 in a546 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_554,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_569,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:148: r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[50]);}

/* k567 in k552 in k549 in a546 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_569,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* open-output-string */
t3=*((C_word*)lf[49]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k575 in k567 in k552 in k549 in a546 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_577,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_580,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[48],t1);}

/* k578 in k575 in k567 in k552 in k549 in a546 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k581 in k578 in k575 in k567 in k552 in k549 in a546 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_583,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[47],((C_word*)t0)[3]);}

/* k584 in k581 in k578 in k575 in k567 in k552 in k549 in a546 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_586,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_589,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_599,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:152: string-intersperse */
t5=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,lf[46]);}

/* k597 in k584 in k581 in k578 in k575 in k567 in k552 in k549 in a546 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k587 in k584 in k581 in k578 in k575 in k567 in k552 in k549 in a546 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_589,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[44],((C_word*)t0)[2]);}

/* k590 in k587 in k584 in k581 in k578 in k575 in k567 in k552 in k549 in a546 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_592,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_595,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
t3=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k593 in k590 in k587 in k584 in k581 in k578 in k575 in k567 in k552 in k549 in a546 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_595,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[31],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,2,lf[41],((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[6],t3,t4));}

/* k543 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:140: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[40],C_SCHEME_END_OF_LIST,t1);}

/* k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_306,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_499,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_501,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:158: ##sys#er-transformer */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a500 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_501(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_501,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_505,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:160: ##sys#check-syntax */
t6=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[34],t2,lf[39]);}

/* k503 in a500 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:161: gensym */
t3=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[38]);}

/* k506 in k503 in a500 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_508,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[3]);
t3=C_i_caddr(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_526,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_stringp(t2))){
t5=C_a_i_list(&a,4,lf[4],t1,t3,t2);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[6],t5,t1));}
else{
if(C_truep(C_i_symbolp(t2))){
/* chicken-ffi-syntax.scm:167: symbol->string */
t5=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
/* chicken-ffi-syntax.scm:168: syntax-error */
t5=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[34],lf[37],t2);}}}

/* k524 in k506 in k503 in a500 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_526,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[4],((C_word*)t0)[4],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[6],t2,((C_word*)t0)[4]));}

/* k497 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:155: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[34],C_SCHEME_END_OF_LIST,t1);}

/* k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_306,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_478,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_480,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:177: ##sys#er-transformer */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a479 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_480,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_484,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:179: ##sys#check-syntax */
t6=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[31],t2,lf[33]);}

/* k482 in a479 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_484,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,lf[31],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[32],t3));}

/* k476 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:174: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[31],C_SCHEME_END_OF_LIST,t1);}

/* k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_464,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_466,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:188: ##sys#er-transformer */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a465 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_466(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_466,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[30],t5));}

/* k462 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:185: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[29],C_SCHEME_END_OF_LIST,t1);}

/* k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_312,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_450,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_452,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:195: ##sys#er-transformer */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a451 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_452(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_452,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[4],t5));}

/* k448 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:192: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[28],C_SCHEME_END_OF_LIST,t1);}

/* k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_436,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_438,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:202: ##sys#er-transformer */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a437 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_438(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_438,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[27],t5));}

/* k434 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:199: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[26],C_SCHEME_END_OF_LIST,t1);}

/* k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_318,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_321,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_422,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_424,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:209: ##sys#er-transformer */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a423 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_424(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_424,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[25],t5));}

/* k420 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:206: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[24],C_SCHEME_END_OF_LIST,t1);}

/* k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_408,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_410,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:216: ##sys#er-transformer */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a409 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_410(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_410,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[23],t5));}

/* k406 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:213: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[22],C_SCHEME_END_OF_LIST,t1);}

/* k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_394,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_396,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:223: ##sys#er-transformer */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a395 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_396,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[21],t5));}

/* k392 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:220: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[20],C_SCHEME_END_OF_LIST,t1);}

/* k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_380,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_382,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:230: ##sys#er-transformer */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a381 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_382(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_382,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[19],t5));}

/* k378 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:227: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[18],C_SCHEME_END_OF_LIST,t1);}

/* k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_330,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_340,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_342,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:237: ##sys#er-transformer */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a341 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_342(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_342,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_346,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:239: ##sys#check-syntax */
t6=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[3],t2,lf[16]);}

/* k344 in a341 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_346,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_349,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:240: ##sys#strip-syntax */
t4=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k347 in k344 in a341 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_349,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_352,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:241: gensym */
t3=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[13]);}

/* k350 in k347 in k344 in a341 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_352,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_355,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(((C_word*)t0)[2]))){
t3=t2;
f_355(2,t3,((C_word*)t0)[2]);}
else{
/* chicken-ffi-syntax.scm:245: ##compiler#foreign-type-declaration */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],lf[11]);}}

/* k353 in k350 in k347 in k344 in a341 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_366,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:247: string-append */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[8],t1,lf[9]);}

/* k364 in k353 in k350 in k347 in k344 in a341 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_366,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[4],((C_word*)t0)[3],lf[5],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[6],t2,((C_word*)t0)[3]));}

/* k338 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:234: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[3],C_SCHEME_END_OF_LIST,t1);}

/* k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_336,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:251: ##sys#macro-subset */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k334 in k331 in k328 in k325 in k322 in k319 in k316 in k313 in k310 in k307 in k304 in k301 in k298 in k295 in k292 in k289 in k286 in k282 */
static void C_ccall f_336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##sys#chicken-ffi-macro-environment ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[98] = {
{"toplevel:chicken_2dffi_2dsyntax_2escm",(void*)C_chicken_2dffi_2dsyntax_toplevel},
{"f_284:chicken_2dffi_2dsyntax_2escm",(void*)f_284},
{"f_288:chicken_2dffi_2dsyntax_2escm",(void*)f_288},
{"f_863:chicken_2dffi_2dsyntax_2escm",(void*)f_863},
{"f_870:chicken_2dffi_2dsyntax_2escm",(void*)f_870},
{"f_873:chicken_2dffi_2dsyntax_2escm",(void*)f_873},
{"f_938:chicken_2dffi_2dsyntax_2escm",(void*)f_938},
{"f_951:chicken_2dffi_2dsyntax_2escm",(void*)f_951},
{"f_1058:chicken_2dffi_2dsyntax_2escm",(void*)f_1058},
{"f_1056:chicken_2dffi_2dsyntax_2escm",(void*)f_1056},
{"f_983:chicken_2dffi_2dsyntax_2escm",(void*)f_983},
{"f_1011:chicken_2dffi_2dsyntax_2escm",(void*)f_1011},
{"f_999:chicken_2dffi_2dsyntax_2escm",(void*)f_999},
{"f_879:chicken_2dffi_2dsyntax_2escm",(void*)f_879},
{"f_889:chicken_2dffi_2dsyntax_2escm",(void*)f_889},
{"f_861:chicken_2dffi_2dsyntax_2escm",(void*)f_861},
{"f_291:chicken_2dffi_2dsyntax_2escm",(void*)f_291},
{"f_846:chicken_2dffi_2dsyntax_2escm",(void*)f_846},
{"f_850:chicken_2dffi_2dsyntax_2escm",(void*)f_850},
{"f_844:chicken_2dffi_2dsyntax_2escm",(void*)f_844},
{"f_294:chicken_2dffi_2dsyntax_2escm",(void*)f_294},
{"f_753:chicken_2dffi_2dsyntax_2escm",(void*)f_753},
{"f_757:chicken_2dffi_2dsyntax_2escm",(void*)f_757},
{"f_769:chicken_2dffi_2dsyntax_2escm",(void*)f_769},
{"f_821:chicken_2dffi_2dsyntax_2escm",(void*)f_821},
{"f_772:chicken_2dffi_2dsyntax_2escm",(void*)f_772},
{"f_779:chicken_2dffi_2dsyntax_2escm",(void*)f_779},
{"f_817:chicken_2dffi_2dsyntax_2escm",(void*)f_817},
{"f_751:chicken_2dffi_2dsyntax_2escm",(void*)f_751},
{"f_297:chicken_2dffi_2dsyntax_2escm",(void*)f_297},
{"f_609:chicken_2dffi_2dsyntax_2escm",(void*)f_609},
{"f_613:chicken_2dffi_2dsyntax_2escm",(void*)f_613},
{"f_714:chicken_2dffi_2dsyntax_2escm",(void*)f_714},
{"f_743:chicken_2dffi_2dsyntax_2escm",(void*)f_743},
{"f_634:chicken_2dffi_2dsyntax_2escm",(void*)f_634},
{"f_690:chicken_2dffi_2dsyntax_2escm",(void*)f_690},
{"f_641:chicken_2dffi_2dsyntax_2escm",(void*)f_641},
{"f_647:chicken_2dffi_2dsyntax_2escm",(void*)f_647},
{"f_645:chicken_2dffi_2dsyntax_2escm",(void*)f_645},
{"f_620:chicken_2dffi_2dsyntax_2escm",(void*)f_620},
{"f_628:chicken_2dffi_2dsyntax_2escm",(void*)f_628},
{"f_607:chicken_2dffi_2dsyntax_2escm",(void*)f_607},
{"f_300:chicken_2dffi_2dsyntax_2escm",(void*)f_300},
{"f_547:chicken_2dffi_2dsyntax_2escm",(void*)f_547},
{"f_551:chicken_2dffi_2dsyntax_2escm",(void*)f_551},
{"f_554:chicken_2dffi_2dsyntax_2escm",(void*)f_554},
{"f_569:chicken_2dffi_2dsyntax_2escm",(void*)f_569},
{"f_577:chicken_2dffi_2dsyntax_2escm",(void*)f_577},
{"f_580:chicken_2dffi_2dsyntax_2escm",(void*)f_580},
{"f_583:chicken_2dffi_2dsyntax_2escm",(void*)f_583},
{"f_586:chicken_2dffi_2dsyntax_2escm",(void*)f_586},
{"f_599:chicken_2dffi_2dsyntax_2escm",(void*)f_599},
{"f_589:chicken_2dffi_2dsyntax_2escm",(void*)f_589},
{"f_592:chicken_2dffi_2dsyntax_2escm",(void*)f_592},
{"f_595:chicken_2dffi_2dsyntax_2escm",(void*)f_595},
{"f_545:chicken_2dffi_2dsyntax_2escm",(void*)f_545},
{"f_303:chicken_2dffi_2dsyntax_2escm",(void*)f_303},
{"f_501:chicken_2dffi_2dsyntax_2escm",(void*)f_501},
{"f_505:chicken_2dffi_2dsyntax_2escm",(void*)f_505},
{"f_508:chicken_2dffi_2dsyntax_2escm",(void*)f_508},
{"f_526:chicken_2dffi_2dsyntax_2escm",(void*)f_526},
{"f_499:chicken_2dffi_2dsyntax_2escm",(void*)f_499},
{"f_306:chicken_2dffi_2dsyntax_2escm",(void*)f_306},
{"f_480:chicken_2dffi_2dsyntax_2escm",(void*)f_480},
{"f_484:chicken_2dffi_2dsyntax_2escm",(void*)f_484},
{"f_478:chicken_2dffi_2dsyntax_2escm",(void*)f_478},
{"f_309:chicken_2dffi_2dsyntax_2escm",(void*)f_309},
{"f_466:chicken_2dffi_2dsyntax_2escm",(void*)f_466},
{"f_464:chicken_2dffi_2dsyntax_2escm",(void*)f_464},
{"f_312:chicken_2dffi_2dsyntax_2escm",(void*)f_312},
{"f_452:chicken_2dffi_2dsyntax_2escm",(void*)f_452},
{"f_450:chicken_2dffi_2dsyntax_2escm",(void*)f_450},
{"f_315:chicken_2dffi_2dsyntax_2escm",(void*)f_315},
{"f_438:chicken_2dffi_2dsyntax_2escm",(void*)f_438},
{"f_436:chicken_2dffi_2dsyntax_2escm",(void*)f_436},
{"f_318:chicken_2dffi_2dsyntax_2escm",(void*)f_318},
{"f_424:chicken_2dffi_2dsyntax_2escm",(void*)f_424},
{"f_422:chicken_2dffi_2dsyntax_2escm",(void*)f_422},
{"f_321:chicken_2dffi_2dsyntax_2escm",(void*)f_321},
{"f_410:chicken_2dffi_2dsyntax_2escm",(void*)f_410},
{"f_408:chicken_2dffi_2dsyntax_2escm",(void*)f_408},
{"f_324:chicken_2dffi_2dsyntax_2escm",(void*)f_324},
{"f_396:chicken_2dffi_2dsyntax_2escm",(void*)f_396},
{"f_394:chicken_2dffi_2dsyntax_2escm",(void*)f_394},
{"f_327:chicken_2dffi_2dsyntax_2escm",(void*)f_327},
{"f_382:chicken_2dffi_2dsyntax_2escm",(void*)f_382},
{"f_380:chicken_2dffi_2dsyntax_2escm",(void*)f_380},
{"f_330:chicken_2dffi_2dsyntax_2escm",(void*)f_330},
{"f_342:chicken_2dffi_2dsyntax_2escm",(void*)f_342},
{"f_346:chicken_2dffi_2dsyntax_2escm",(void*)f_346},
{"f_349:chicken_2dffi_2dsyntax_2escm",(void*)f_349},
{"f_352:chicken_2dffi_2dsyntax_2escm",(void*)f_352},
{"f_355:chicken_2dffi_2dsyntax_2escm",(void*)f_355},
{"f_366:chicken_2dffi_2dsyntax_2escm",(void*)f_366},
{"f_340:chicken_2dffi_2dsyntax_2escm",(void*)f_340},
{"f_333:chicken_2dffi_2dsyntax_2escm",(void*)f_333},
{"f_336:chicken_2dffi_2dsyntax_2escm",(void*)f_336},
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
