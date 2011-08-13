/* Generated from setup-api.import.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: setup-api.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -feature chicken-compile-shared -dynamic -no-trace -output-file setup-api.import.c
   used units: library eval
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[36];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,18),40,102,111,114,109,45,101,114,114,111,114,32,115,55,32,112,56,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,5),40,103,51,56,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,51,50,32,103,52,52,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,13),40,97,54,49,49,32,108,105,110,101,49,55,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,18),40,97,52,53,51,32,102,111,114,109,48,32,114,49,32,99,50,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,55,54,32,108,55,49,57,52,32,108,101,110,55,50,57,53,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,39),40,97,51,56,49,32,105,110,112,117,116,55,48,56,51,32,114,101,110,97,109,101,55,57,56,52,32,99,111,109,112,97,114,101,54,55,56,53,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,13),40,97,51,50,54,32,101,120,112,49,51,54,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,49,49,49,32,108,49,48,54,49,50,57,32,108,101,110,49,48,55,49,51,48,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,45),40,97,50,57,49,32,105,110,112,117,116,49,48,53,49,49,56,32,114,101,110,97,109,101,49,49,52,49,49,57,32,99,111,109,112,97,114,101,49,48,50,49,50,48,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,49,52,55,32,108,49,52,50,49,54,53,32,108,101,110,49,52,51,49,54,54,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,45),40,97,50,48,55,32,105,110,112,117,116,49,52,49,49,53,52,32,114,101,110,97,109,101,49,53,48,49,53,53,32,99,111,109,112,97,114,101,49,51,56,49,53,54,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_181)
static void C_ccall f_181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_184)
static void C_ccall f_184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_187)
static void C_ccall f_187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_208)
static void C_ccall f_208(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_243)
static void C_ccall f_243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_246)
static void C_ccall f_246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_252)
static void C_ccall f_252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_257)
static void C_fcall f_257(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_264)
static void C_ccall f_264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_278)
static void C_ccall f_278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_218)
static void C_ccall f_218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_225)
static void C_ccall f_225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_233)
static void C_ccall f_233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_292)
static void C_ccall f_292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_345)
static void C_ccall f_345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_348)
static void C_ccall f_348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_354)
static void C_ccall f_354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_359)
static void C_fcall f_359(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_366)
static void C_ccall f_366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_380)
static void C_ccall f_380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_302)
static void C_ccall f_302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_309)
static void C_ccall f_309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_321)
static void C_ccall f_321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_327)
static void C_ccall f_327(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_335)
static void C_ccall f_335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_325)
static void C_ccall f_325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_382)
static void C_ccall f_382(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_417)
static void C_ccall f_417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_420)
static void C_ccall f_420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_426)
static void C_ccall f_426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_431)
static void C_fcall f_431(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_438)
static void C_ccall f_438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_452)
static void C_ccall f_452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_392)
static void C_ccall f_392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_399)
static void C_ccall f_399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_411)
static void C_ccall f_411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_454)
static void C_ccall f_454(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_458)
static void C_ccall f_458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_464)
static void C_ccall f_464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_467)
static void C_ccall f_467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_598)
static void C_ccall f_598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_607)
static void C_ccall f_607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_612)
static void C_ccall f_612(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_619)
static void C_fcall f_619(C_word t0,C_word t1) C_noret;
C_noret_decl(f_622)
static void C_ccall f_622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_475)
static void C_ccall f_475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_482)
static void C_ccall f_482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_559)
static void C_fcall f_559(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_557)
static void C_ccall f_557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_506)
static C_word C_fcall f_506(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_468)
static void C_fcall f_468(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_190)
static void C_ccall f_190(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_257)
static void C_fcall trf_257(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_257(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_257(t0,t1,t2,t3);}

C_noret_decl(trf_359)
static void C_fcall trf_359(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_359(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_359(t0,t1,t2,t3);}

C_noret_decl(trf_431)
static void C_fcall trf_431(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_431(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_431(t0,t1,t2,t3);}

C_noret_decl(trf_619)
static void C_fcall trf_619(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_619(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_619(t0,t1);}

C_noret_decl(trf_559)
static void C_fcall trf_559(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_559(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_559(t0,t1,t2);}

C_noret_decl(trf_468)
static void C_fcall trf_468(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_468(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_468(t0,t1,t2,t3);}

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
if(!C_demand_2(1639)){
C_save(t1);
C_rereclaim2(1639*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,36);
lf[0]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007execute\376\001\000\000\021setup-api#execute");
lf[1]=C_h_intern(&lf[1],5,"error");
lf[2]=C_h_intern(&lf[2],3,"map");
lf[3]=C_h_intern(&lf[3],4,"list");
lf[4]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005quote\376\003\000\000\002\376\377\016\376\377\016\376\377\016");
lf[5]=C_h_intern(&lf[5],9,"make/proc");
lf[6]=C_h_intern(&lf[6],15,"make:line-error");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000\047second part of clause is not a sequence");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000%clause does not have at least 2 parts");
lf[9]=C_h_intern(&lf[9],5,"every");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\023empty specification");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000&illegal specification (not a sequence)");
lf[12]=C_h_intern(&lf[12],6,"lambda");
lf[13]=C_h_intern(&lf[13],16,"\003syscheck-syntax");
lf[14]=C_h_intern(&lf[14],4,"make");
lf[15]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[16]=C_h_intern(&lf[16],3,"csc");
lf[17]=C_h_intern(&lf[17],3,"run");
lf[18]=C_h_intern(&lf[18],25,"\003syssyntax-rules-mismatch");
lf[19]=C_h_intern(&lf[19],5,"\003sys+");
lf[20]=C_h_intern(&lf[20],5,"\003sys=");
lf[21]=C_h_intern(&lf[21],6,"\003sys>=");
lf[22]=C_h_intern(&lf[22],10,"\003syslength");
lf[23]=C_h_intern(&lf[23],9,"\003syslist\077");
lf[24]=C_h_intern(&lf[24],7,"compile");
lf[25]=C_h_intern(&lf[25],10,"quasiquote");
lf[26]=C_h_intern(&lf[26],9,"\003sysmap-n");
lf[27]=C_h_intern(&lf[27],7,"execute");
lf[28]=C_h_intern(&lf[28],2,"ex");
lf[29]=C_h_intern(&lf[29],17,"handle-exceptions");
lf[30]=C_h_intern(&lf[30],13,"ignore-errors");
lf[31]=C_h_intern(&lf[31],28,"\003sysregister-compiled-module");
lf[32]=C_h_intern(&lf[32],9,"setup-api");
lf[33]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022standard-extension\376\001\000\000\034setup-api#standard-extension\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\011make/proc\376\001\000\000\023setup-api#make/proc\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016host-extension\376\001\000\000\030setup-api#ho"
"st-extension\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021install-extension\376\001\000\000\033setup-api#install-extension\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\017install-program\376\001\000\000\031setup-api#install-program\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016install-s"
"cript\376\001\000\000\030setup-api#install-script\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022setup-verbose-mode\376\001\000\000\034setup-ap"
"i#setup-verbose-mode\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022setup-install-mode\376\001\000\000\034setup-api#setup-instal"
"l-mode\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017deployment-mode\376\001\000\000\031setup-api#deployment-mode\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\023installation-prefix\376\001\000\000\035setup-api#installation-prefix\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022destination"
"-prefix\376\001\000\000\034setup-api#destination-prefix\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016runtime-prefix\376\001\000\000\030setup-"
"api#runtime-prefix\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016chicken-prefix\376\001\000\000\030setup-api#chicken-prefix\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\014find-library\376\001\000\000\026setup-api#find-library\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013find-header\376\001\000\000"
"\025setup-api#find-header\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014program-path\376\001\000\000\026setup-api#program-path\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\014remove-file*\376\001\000\000\026setup-api#remove-file*\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005patch\376\001\000\000\017setup"
"-api#patch\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013abort-setup\376\001\000\000\025setup-api#abort-setup\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024set"
"up-root-directory\376\001\000\000\036setup-api#setup-root-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030create-direct"
"ory/parents\376\001\000\000\042setup-api#create-directory/parents\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014test-compile\376\001\000"
"\000\026setup-api#test-compile\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013try-compile\376\001\000\000\025setup-api#try-compile\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\013run-verbose\376\001\000\000\025setup-api#run-verbose\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016extra-features\376\001\000"
"\000\030setup-api#extra-features\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021extra-nonfeatures\376\001\000\000\033setup-api#extra-n"
"onfeatures\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011copy-file\376\001\000\000\023setup-api#copy-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011move-fi"
"le\376\001\000\000\023setup-api#move-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030required-chicken-version\376\001\000\000\042setup-api#"
"required-chicken-version\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032required-extension-version\376\001\000\000$setup-api#"
"required-extension-version\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014sudo-install\376\001\000\000\026setup-api#sudo-install"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022keep-intermediates\376\001\000\000\034setup-api#keep-intermediates\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\012version>=\077\376\001\000\000\024setup-api#version>=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032extension-name-and-version\376\001\000"
"\000$setup-api#extension-name-and-version\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016extension-name\376\001\000\000\030setup-ap"
"i#extension-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021extension-version\376\001\000\000\033setup-api#extension-version"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020remove-directory\376\001\000\000\032setup-api#remove-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020rem"
"ove-extension\376\001\000\000\032setup-api#remove-extension\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011read-info\376\001\000\000\023setup-a"
"pi#read-info\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020register-program\376\001\000\000\032setup-api#register-program\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\014find-program\376\001\000\000\026setup-api#find-program\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011shellpath\376\001\000\000\023set"
"up-api#shellpath\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024setup-error-handling\376\001\000\000\036setup-api#setup-error-ha"
"ndling\376\377\016");
lf[34]=C_h_intern(&lf[34],4,"eval");
lf[35]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006import\376\003\000\000\002\376\001\000\000\006scheme\376\003\000\000\002\376\001\000\000\007chicken\376\003\000\000\002\376\001\000\000\007foreign\376\003\000\000\002\376\001\000\000\007irre"
"gex\376\003\000\000\002\376\001\000\000\005utils\376\003\000\000\002\376\001\000\000\005posix\376\003\000\000\002\376\001\000\000\005ports\376\003\000\000\002\376\001\000\000\006extras\376\003\000\000\002\376\001\000\000\017data-s"
"tructures\376\003\000\000\002\376\001\000\000\006srfi-1\376\003\000\000\002\376\001\000\000\007srfi-13\376\003\000\000\002\376\001\000\000\005files\376\377\016");
C_register_lf2(lf,36,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_181,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k179 */
static void C_ccall f_181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_181,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_184,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k182 in k179 */
static void C_ccall f_184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_184,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_187,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* setup-api.import.scm:3: eval */
((C_proc3)C_fast_retrieve_symbol_proc(lf[34]))(3,*((C_word*)lf[34]+1),t2,lf[35]);}

/* k185 in k182 in k179 */
static void C_ccall f_187(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_187,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_190,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,lf[0]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_454,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
t5=C_a_i_cons(&a,2,lf[14],t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_382,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_cons(&a,2,lf[24],t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_292,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
t9=C_a_i_cons(&a,2,lf[17],t8);
t10=C_a_i_list3(&a,3,t5,t7,t9);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_208,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
t12=C_a_i_cons(&a,2,lf[30],t11);
t13=C_a_i_list1(&a,1,t12);
/* setup-api.import.scm:16: ##sys#register-compiled-module */
((C_proc7)C_fast_retrieve_symbol_proc(lf[31]))(7,*((C_word*)lf[31]+1),t2,lf[32],t3,lf[33],t10,t13);}

/* a207 in k185 in k182 in k179 */
static void C_ccall f_208(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_208,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_218,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_243,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* ##sys#list? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(3,*((C_word*)lf[23]+1),t7,t5);}

/* k241 in a207 in k185 in k182 in k179 */
static void C_ccall f_243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_243,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#length */
((C_proc3)C_fast_retrieve_symbol_proc(lf[22]))(3,*((C_word*)lf[22]+1),t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_218(2,t2,C_SCHEME_FALSE);}}

/* k244 in k241 in a207 in k185 in k182 in k179 */
static void C_ccall f_246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_246,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_252,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#>= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[21]))(4,*((C_word*)lf[21]+1),t2,t1,C_fix(0));}

/* k250 in k244 in k241 in a207 in k185 in k182 in k179 */
static void C_ccall f_252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_252,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_257,a[2]=t3,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_257(t5,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
f_218(2,t2,C_SCHEME_FALSE);}}

/* loop147 in k250 in k244 in k241 in a207 in k185 in k182 in k179 */
static void C_fcall f_257(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_257,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_264,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* ##sys#= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[20]))(4,*((C_word*)lf[20]+1),t4,t3,C_fix(0));}

/* k262 in loop147 in k250 in k244 in k241 in a207 in k185 in k182 in k179 */
static void C_ccall f_264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_264,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[4],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_278,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#+ */
((C_proc4)C_fast_retrieve_symbol_proc(lf[19]))(4,*((C_word*)lf[19]+1),t3,((C_word*)t0)[2],C_fix(-1));}}

/* k276 in k262 in loop147 in k250 in k244 in k241 in a207 in k185 in k182 in k179 */
static void C_ccall f_278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* loop147164 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_257(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k216 in a207 in k185 in k182 in k179 */
static void C_ccall f_218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_218,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_225,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* rename150155 */
t3=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[29]);}
else{
/* ##sys#syntax-rules-mismatch */
((C_proc3)C_fast_retrieve_symbol_proc(lf[18]))(3,*((C_word*)lf[18]+1),((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k223 in k216 in a207 in k185 in k182 in k179 */
static void C_ccall f_225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_225,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_233,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* rename150155 */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[28]);}

/* k231 in k223 in k216 in a207 in k185 in k182 in k179 */
static void C_ccall f_233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_233,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* a291 in k185 in k182 in k179 */
static void C_ccall f_292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_292,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_302,a[2]=t2,a[3]=t5,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_345,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* ##sys#list? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(3,*((C_word*)lf[23]+1),t7,t5);}

/* k343 in a291 in k185 in k182 in k179 */
static void C_ccall f_345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_345,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_348,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#length */
((C_proc3)C_fast_retrieve_symbol_proc(lf[22]))(3,*((C_word*)lf[22]+1),t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_302(2,t2,C_SCHEME_FALSE);}}

/* k346 in k343 in a291 in k185 in k182 in k179 */
static void C_ccall f_348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_354,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#>= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[21]))(4,*((C_word*)lf[21]+1),t2,t1,C_fix(0));}

/* k352 in k346 in k343 in a291 in k185 in k182 in k179 */
static void C_ccall f_354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_354,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_359,a[2]=t3,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_359(t5,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
f_302(2,t2,C_SCHEME_FALSE);}}

/* loop111 in k352 in k346 in k343 in a291 in k185 in k182 in k179 */
static void C_fcall f_359(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_359,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_366,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* ##sys#= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[20]))(4,*((C_word*)lf[20]+1),t4,t3,C_fix(0));}

/* k364 in loop111 in k352 in k346 in k343 in a291 in k185 in k182 in k179 */
static void C_ccall f_366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_366,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[4],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_380,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#+ */
((C_proc4)C_fast_retrieve_symbol_proc(lf[19]))(4,*((C_word*)lf[19]+1),t3,((C_word*)t0)[2],C_fix(-1));}}

/* k378 in k364 in loop111 in k352 in k346 in k343 in a291 in k185 in k182 in k179 */
static void C_ccall f_380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* loop111128 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_359(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k300 in a291 in k185 in k182 in k179 */
static void C_ccall f_302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_302,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_309,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* rename114119 */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[27]);}
else{
/* ##sys#syntax-rules-mismatch */
((C_proc3)C_fast_retrieve_symbol_proc(lf[18]))(3,*((C_word*)lf[18]+1),((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k307 in k300 in a291 in k185 in k182 in k179 */
static void C_ccall f_309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_321,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* rename114119 */
t3=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[3]);}

/* k319 in k307 in k300 in a291 in k185 in k182 in k179 */
static void C_ccall f_321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_325,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_327,a[2]=((C_word*)t0)[3],a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp);
/* ##sys#map-n */
((C_proc4)C_fast_retrieve_symbol_proc(lf[26]))(4,*((C_word*)lf[26]+1),t2,t3,((C_word*)t0)[2]);}

/* a326 in k319 in k307 in k300 in a291 in k185 in k182 in k179 */
static void C_ccall f_327(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_327,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_335,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* rename114119 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[25]);}

/* k333 in a326 in k319 in k307 in k300 in a291 in k185 in k182 in k179 */
static void C_ccall f_335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_335,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t1,t2));}

/* k323 in k319 in k307 in k300 in a291 in k185 in k182 in k179 */
static void C_ccall f_325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_325,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* a381 in k185 in k182 in k179 */
static void C_ccall f_382(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_382,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_392,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_417,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* ##sys#list? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[23]+1)))(3,*((C_word*)lf[23]+1),t7,t5);}

/* k415 in a381 in k185 in k182 in k179 */
static void C_ccall f_417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_417,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#length */
((C_proc3)C_fast_retrieve_symbol_proc(lf[22]))(3,*((C_word*)lf[22]+1),t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_392(2,t2,C_SCHEME_FALSE);}}

/* k418 in k415 in a381 in k185 in k182 in k179 */
static void C_ccall f_420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_426,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#>= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[21]))(4,*((C_word*)lf[21]+1),t2,t1,C_fix(0));}

/* k424 in k418 in k415 in a381 in k185 in k182 in k179 */
static void C_ccall f_426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_426,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_431,a[2]=t3,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_431(t5,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
f_392(2,t2,C_SCHEME_FALSE);}}

/* loop76 in k424 in k418 in k415 in a381 in k185 in k182 in k179 */
static void C_fcall f_431(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_431,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_438,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* ##sys#= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[20]))(4,*((C_word*)lf[20]+1),t4,t3,C_fix(0));}

/* k436 in loop76 in k424 in k418 in k415 in a381 in k185 in k182 in k179 */
static void C_ccall f_438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_438,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[4],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_452,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#+ */
((C_proc4)C_fast_retrieve_symbol_proc(lf[19]))(4,*((C_word*)lf[19]+1),t3,((C_word*)t0)[2],C_fix(-1));}}

/* k450 in k436 in loop76 in k424 in k418 in k415 in a381 in k185 in k182 in k179 */
static void C_ccall f_452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* loop7693 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_431(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k390 in a381 in k185 in k182 in k179 */
static void C_ccall f_392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_392,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_399,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* rename7984 */
t3=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[17]);}
else{
/* ##sys#syntax-rules-mismatch */
((C_proc3)C_fast_retrieve_symbol_proc(lf[18]))(3,*((C_word*)lf[18]+1),((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k397 in k390 in a381 in k185 in k182 in k179 */
static void C_ccall f_399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_399,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_411,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* rename7984 */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[16]);}

/* k409 in k397 in k390 in a381 in k185 in k182 in k179 */
static void C_ccall f_411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_411,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* a453 in k185 in k182 in k179 */
static void C_ccall f_454(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_454,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_458,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:64: ##sys#check-syntax */
((C_proc5)C_fast_retrieve_symbol_proc(lf[13]))(5,*((C_word*)lf[13]+1),t5,lf[14],t2,lf[15]);}

/* k456 in a453 in k185 in k182 in k179 */
static void C_ccall f_458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_458,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_464,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* setup-api.import.scm:66: r */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[3]);}

/* k462 in k456 in a453 in k185 in k182 in k179 */
static void C_ccall f_464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_464,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* setup-api.import.scm:67: r */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[12]);}

/* k465 in k462 in k456 in a453 in k185 in k182 in k179 */
static void C_ccall f_467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_467,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_468,a[2]=((C_word*)t0)[6],a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_475,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=C_i_listp(((C_word*)t0)[6]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_598,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_598(2,t6,t4);}
else{
/* setup-api.import.scm:70: form-error */
t6=t2;
f_468(t6,t5,lf[11],C_SCHEME_END_OF_LIST);}}

/* k596 in k465 in k462 in k456 in a453 in k185 in k182 in k179 */
static void C_ccall f_598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_598,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_pairp(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_607,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_607(2,t4,t2);}
else{
/* setup-api.import.scm:72: form-error */
t4=((C_word*)t0)[3];
f_468(t4,t3,lf[10],C_SCHEME_END_OF_LIST);}}
else{
t2=((C_word*)t0)[2];
f_475(2,t2,C_SCHEME_FALSE);}}

/* k605 in k596 in k465 in k462 in k456 in a453 in k185 in k182 in k179 */
static void C_ccall f_607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_607,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_612,a[2]=((C_word*)t0)[4],a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:73: every */
((C_proc4)C_fast_retrieve_symbol_proc(lf[9]))(4,*((C_word*)lf[9]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_475(2,t2,C_SCHEME_FALSE);}}

/* a611 in k605 in k596 in k465 in k462 in k456 in a453 in k185 in k182 in k179 */
static void C_ccall f_612(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_612,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_619,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t2))){
t4=C_i_length(t2);
t5=t3;
f_619(t5,C_i_greater_or_equalp(t4,C_fix(2)));}
else{
t4=t3;
f_619(t4,C_SCHEME_FALSE);}}

/* k617 in a611 in k605 in k596 in k465 in k462 in k456 in a453 in k185 in k182 in k179 */
static void C_fcall f_619(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_619,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_622,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_622(2,t3,t1);}
else{
/* setup-api.import.scm:75: form-error */
t3=((C_word*)t0)[2];
f_468(t3,t2,lf[8],C_a_i_list(&a,1,((C_word*)t0)[4]));}}

/* k620 in k617 in a611 in k605 in k596 in k465 in k462 in k456 in a453 in k185 in k182 in k179 */
static void C_ccall f_622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[3]);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=C_i_listp(t3);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_i_cadr(((C_word*)t0)[3]);
/* setup-api.import.scm:80: make:line-error */
((C_proc5)C_fast_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),((C_word*)t0)[2],lf[7],t5,t2);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k473 in k465 in k462 in k456 in a453 in k185 in k182 in k179 */
static void C_ccall f_475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_475,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_482,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* setup-api.import.scm:85: r */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[5]);}

/* k480 in k473 in k465 in k462 in k456 in a453 in k185 in k182 in k179 */
static void C_ccall f_482(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_482,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_506,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[2]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_557,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_559,a[2]=t3,a[3]=t10,a[4]=t5,a[5]=t6,a[6]=((C_word)li2),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_559(t12,t8,((C_word*)t0)[4]);}

/* map-loop32 in k480 in k473 in k465 in k462 in k456 in a453 in k185 in k182 in k179 */
static void C_fcall f_559(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(33);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_559,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_506(C_a_i(&a,30),((C_word*)t0)[5],t3);
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

/* k555 in k480 in k473 in k465 in k462 in k456 in a453 in k185 in k182 in k179 */
static void C_ccall f_557(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_557,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[3],t1);
t3=C_i_cddr(((C_word*)t0)[4]);
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_cons(&a,2,t2,lf[4]);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}
else{
t4=C_i_cddr(((C_word*)t0)[4]);
t5=C_a_i_cons(&a,2,t2,t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}}

/* g38 in k480 in k473 in k465 in k462 in k456 in a453 in k185 in k182 in k179 */
static C_word C_fcall f_506(C_word *a,C_word t0,C_word t1){
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
C_stack_check;
t2=C_i_car(t1);
t3=C_i_cadr(t1);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=C_i_cddr(t1);
if(C_truep(C_i_nullp(t5))){
t6=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,t2,t6);
return(C_a_i_cons(&a,2,((C_word*)t0)[3],t7));}
else{
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[2],t6);
t8=C_a_i_list(&a,1,t7);
t9=C_a_i_cons(&a,2,t4,t8);
t10=C_a_i_cons(&a,2,t2,t9);
return(C_a_i_cons(&a,2,((C_word*)t0)[3],t10));}}

/* form-error in k465 in k462 in k456 in a453 in k185 in k182 in k179 */
static void C_fcall f_468(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_468,NULL,4,t0,t1,t2,t3);}
C_apply(6,0,t1,*((C_word*)lf[1]+1),t2,((C_word*)t0)[2],t3);}

/* k188 in k185 in k182 in k179 */
static void C_ccall f_190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[54] = {
{"toplevel:setup_2dapi_2eimport_2escm",(void*)C_toplevel},
{"f_181:setup_2dapi_2eimport_2escm",(void*)f_181},
{"f_184:setup_2dapi_2eimport_2escm",(void*)f_184},
{"f_187:setup_2dapi_2eimport_2escm",(void*)f_187},
{"f_208:setup_2dapi_2eimport_2escm",(void*)f_208},
{"f_243:setup_2dapi_2eimport_2escm",(void*)f_243},
{"f_246:setup_2dapi_2eimport_2escm",(void*)f_246},
{"f_252:setup_2dapi_2eimport_2escm",(void*)f_252},
{"f_257:setup_2dapi_2eimport_2escm",(void*)f_257},
{"f_264:setup_2dapi_2eimport_2escm",(void*)f_264},
{"f_278:setup_2dapi_2eimport_2escm",(void*)f_278},
{"f_218:setup_2dapi_2eimport_2escm",(void*)f_218},
{"f_225:setup_2dapi_2eimport_2escm",(void*)f_225},
{"f_233:setup_2dapi_2eimport_2escm",(void*)f_233},
{"f_292:setup_2dapi_2eimport_2escm",(void*)f_292},
{"f_345:setup_2dapi_2eimport_2escm",(void*)f_345},
{"f_348:setup_2dapi_2eimport_2escm",(void*)f_348},
{"f_354:setup_2dapi_2eimport_2escm",(void*)f_354},
{"f_359:setup_2dapi_2eimport_2escm",(void*)f_359},
{"f_366:setup_2dapi_2eimport_2escm",(void*)f_366},
{"f_380:setup_2dapi_2eimport_2escm",(void*)f_380},
{"f_302:setup_2dapi_2eimport_2escm",(void*)f_302},
{"f_309:setup_2dapi_2eimport_2escm",(void*)f_309},
{"f_321:setup_2dapi_2eimport_2escm",(void*)f_321},
{"f_327:setup_2dapi_2eimport_2escm",(void*)f_327},
{"f_335:setup_2dapi_2eimport_2escm",(void*)f_335},
{"f_325:setup_2dapi_2eimport_2escm",(void*)f_325},
{"f_382:setup_2dapi_2eimport_2escm",(void*)f_382},
{"f_417:setup_2dapi_2eimport_2escm",(void*)f_417},
{"f_420:setup_2dapi_2eimport_2escm",(void*)f_420},
{"f_426:setup_2dapi_2eimport_2escm",(void*)f_426},
{"f_431:setup_2dapi_2eimport_2escm",(void*)f_431},
{"f_438:setup_2dapi_2eimport_2escm",(void*)f_438},
{"f_452:setup_2dapi_2eimport_2escm",(void*)f_452},
{"f_392:setup_2dapi_2eimport_2escm",(void*)f_392},
{"f_399:setup_2dapi_2eimport_2escm",(void*)f_399},
{"f_411:setup_2dapi_2eimport_2escm",(void*)f_411},
{"f_454:setup_2dapi_2eimport_2escm",(void*)f_454},
{"f_458:setup_2dapi_2eimport_2escm",(void*)f_458},
{"f_464:setup_2dapi_2eimport_2escm",(void*)f_464},
{"f_467:setup_2dapi_2eimport_2escm",(void*)f_467},
{"f_598:setup_2dapi_2eimport_2escm",(void*)f_598},
{"f_607:setup_2dapi_2eimport_2escm",(void*)f_607},
{"f_612:setup_2dapi_2eimport_2escm",(void*)f_612},
{"f_619:setup_2dapi_2eimport_2escm",(void*)f_619},
{"f_622:setup_2dapi_2eimport_2escm",(void*)f_622},
{"f_475:setup_2dapi_2eimport_2escm",(void*)f_475},
{"f_482:setup_2dapi_2eimport_2escm",(void*)f_482},
{"f_559:setup_2dapi_2eimport_2escm",(void*)f_559},
{"f_557:setup_2dapi_2eimport_2escm",(void*)f_557},
{"f_506:setup_2dapi_2eimport_2escm",(void*)f_506},
{"f_468:setup_2dapi_2eimport_2escm",(void*)f_468},
{"f_190:setup_2dapi_2eimport_2escm",(void*)f_190},
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
