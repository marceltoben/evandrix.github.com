/* Generated from scheme.import.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: scheme.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -feature chicken-compile-shared -dynamic -no-trace -output-file scheme.import.c
   used units: library eval
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[4];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8)
static void C_ccall f_8(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11)
static void C_ccall f_11(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14)
static void C_ccall f_14(C_word c,C_word t0,C_word t1) C_noret;

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
if(!C_demand_2(2565)){
C_save(t1);
C_rereclaim2(2565*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,4);
lf[0]=C_h_intern(&lf[0],29,"\003sysregister-primitive-module");
lf[1]=C_h_intern(&lf[1],6,"scheme");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003not\376\003\000\000\002\376\001\000\000\010boolean\077\376\003\000\000\002\376\001\000\000\003eq\077\376\003\000\000\002\376\001\000\000\004eqv\077\376\003\000\000\002\376\001\000\000\006equal\077\376\003\000\000\002\376"
"\001\000\000\005pair\077\376\003\000\000\002\376\001\000\000\004cons\376\003\000\000\002\376\001\000\000\003car\376\003\000\000\002\376\001\000\000\003cdr\376\003\000\000\002\376\001\000\000\004caar\376\003\000\000\002\376\001\000\000\004cadr\376\003\000"
"\000\002\376\001\000\000\004cdar\376\003\000\000\002\376\001\000\000\004cddr\376\003\000\000\002\376\001\000\000\005caaar\376\003\000\000\002\376\001\000\000\005caadr\376\003\000\000\002\376\001\000\000\005cadar\376\003\000\000\002\376\001\000\000\005"
"caddr\376\003\000\000\002\376\001\000\000\005cdaar\376\003\000\000\002\376\001\000\000\005cdadr\376\003\000\000\002\376\001\000\000\005cddar\376\003\000\000\002\376\001\000\000\005cdddr\376\003\000\000\002\376\001\000\000\006caaaa"
"r\376\003\000\000\002\376\001\000\000\006caaadr\376\003\000\000\002\376\001\000\000\006caadar\376\003\000\000\002\376\001\000\000\006caaddr\376\003\000\000\002\376\001\000\000\006cadaar\376\003\000\000\002\376\001\000\000\006cadad"
"r\376\003\000\000\002\376\001\000\000\006caddar\376\003\000\000\002\376\001\000\000\006cadddr\376\003\000\000\002\376\001\000\000\006cdaaar\376\003\000\000\002\376\001\000\000\006cdaadr\376\003\000\000\002\376\001\000\000\006cdada"
"r\376\003\000\000\002\376\001\000\000\006cdaddr\376\003\000\000\002\376\001\000\000\006cddaar\376\003\000\000\002\376\001\000\000\006cddadr\376\003\000\000\002\376\001\000\000\006cdddar\376\003\000\000\002\376\001\000\000\006cdddd"
"r\376\003\000\000\002\376\001\000\000\010set-car!\376\003\000\000\002\376\001\000\000\010set-cdr!\376\003\000\000\002\376\001\000\000\005null\077\376\003\000\000\002\376\001\000\000\005list\077\376\003\000\000\002\376\001\000\000\004lis"
"t\376\003\000\000\002\376\001\000\000\006length\376\003\000\000\002\376\001\000\000\011list-tail\376\003\000\000\002\376\001\000\000\010list-ref\376\003\000\000\002\376\001\000\000\006append\376\003\000\000\002\376\001\000\000\007"
"reverse\376\003\000\000\002\376\001\000\000\004memq\376\003\000\000\002\376\001\000\000\004memv\376\003\000\000\002\376\001\000\000\006member\376\003\000\000\002\376\001\000\000\004assq\376\003\000\000\002\376\001\000\000\004assv\376"
"\003\000\000\002\376\001\000\000\005assoc\376\003\000\000\002\376\001\000\000\007symbol\077\376\003\000\000\002\376\001\000\000\016symbol->string\376\003\000\000\002\376\001\000\000\016string->symbol\376"
"\003\000\000\002\376\001\000\000\007number\077\376\003\000\000\002\376\001\000\000\010integer\077\376\003\000\000\002\376\001\000\000\006exact\077\376\003\000\000\002\376\001\000\000\005real\077\376\003\000\000\002\376\001\000\000\010compl"
"ex\077\376\003\000\000\002\376\001\000\000\010inexact\077\376\003\000\000\002\376\001\000\000\011rational\077\376\003\000\000\002\376\001\000\000\005zero\077\376\003\000\000\002\376\001\000\000\004odd\077\376\003\000\000\002\376\001\000\000\005e"
"ven\077\376\003\000\000\002\376\001\000\000\011positive\077\376\003\000\000\002\376\001\000\000\011negative\077\376\003\000\000\002\376\001\000\000\003max\376\003\000\000\002\376\001\000\000\003min\376\003\000\000\002\376\001\000\000\001+\376"
"\003\000\000\002\376\001\000\000\001-\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\001/\376\003\000\000\002\376\001\000\000\001=\376\003\000\000\002\376\001\000\000\001>\376\003\000\000\002\376\001\000\000\001<\376\003\000\000\002\376\001\000\000\002>=\376\003\000"
"\000\002\376\001\000\000\002<=\376\003\000\000\002\376\001\000\000\010quotient\376\003\000\000\002\376\001\000\000\011remainder\376\003\000\000\002\376\001\000\000\006modulo\376\003\000\000\002\376\001\000\000\003gcd\376\003\000\000\002"
"\376\001\000\000\003lcm\376\003\000\000\002\376\001\000\000\003abs\376\003\000\000\002\376\001\000\000\005floor\376\003\000\000\002\376\001\000\000\007ceiling\376\003\000\000\002\376\001\000\000\010truncate\376\003\000\000\002\376\001\000\000"
"\005round\376\003\000\000\002\376\001\000\000\016exact->inexact\376\003\000\000\002\376\001\000\000\016inexact->exact\376\003\000\000\002\376\001\000\000\003exp\376\003\000\000\002\376\001\000\000\003log"
"\376\003\000\000\002\376\001\000\000\004expt\376\003\000\000\002\376\001\000\000\004sqrt\376\003\000\000\002\376\001\000\000\003sin\376\003\000\000\002\376\001\000\000\003cos\376\003\000\000\002\376\001\000\000\003tan\376\003\000\000\002\376\001\000\000\004asi"
"n\376\003\000\000\002\376\001\000\000\004acos\376\003\000\000\002\376\001\000\000\004atan\376\003\000\000\002\376\001\000\000\016number->string\376\003\000\000\002\376\001\000\000\016string->number\376\003\000"
"\000\002\376\001\000\000\005char\077\376\003\000\000\002\376\001\000\000\006char=\077\376\003\000\000\002\376\001\000\000\006char>\077\376\003\000\000\002\376\001\000\000\006char<\077\376\003\000\000\002\376\001\000\000\007char>=\077\376\003\000"
"\000\002\376\001\000\000\007char<=\077\376\003\000\000\002\376\001\000\000\011char-ci=\077\376\003\000\000\002\376\001\000\000\011char-ci<\077\376\003\000\000\002\376\001\000\000\011char-ci>\077\376\003\000\000\002\376\001\000\000"
"\012char-ci>=\077\376\003\000\000\002\376\001\000\000\012char-ci<=\077\376\003\000\000\002\376\001\000\000\020char-alphabetic\077\376\003\000\000\002\376\001\000\000\020char-whitespa"
"ce\077\376\003\000\000\002\376\001\000\000\015char-numeric\077\376\003\000\000\002\376\001\000\000\020char-upper-case\077\376\003\000\000\002\376\001\000\000\020char-lower-case\077\376\003"
"\000\000\002\376\001\000\000\013char-upcase\376\003\000\000\002\376\001\000\000\015char-downcase\376\003\000\000\002\376\001\000\000\015char->integer\376\003\000\000\002\376\001\000\000\015integ"
"er->char\376\003\000\000\002\376\001\000\000\007string\077\376\003\000\000\002\376\001\000\000\010string=\077\376\003\000\000\002\376\001\000\000\010string>\077\376\003\000\000\002\376\001\000\000\010string<\077\376"
"\003\000\000\002\376\001\000\000\011string>=\077\376\003\000\000\002\376\001\000\000\011string<=\077\376\003\000\000\002\376\001\000\000\013string-ci=\077\376\003\000\000\002\376\001\000\000\013string-ci<\077\376"
"\003\000\000\002\376\001\000\000\013string-ci>\077\376\003\000\000\002\376\001\000\000\014string-ci>=\077\376\003\000\000\002\376\001\000\000\014string-ci<=\077\376\003\000\000\002\376\001\000\000\013make-s"
"tring\376\003\000\000\002\376\001\000\000\015string-length\376\003\000\000\002\376\001\000\000\012string-ref\376\003\000\000\002\376\001\000\000\013string-set!\376\003\000\000\002\376\001\000\000\015s"
"tring-append\376\003\000\000\002\376\001\000\000\013string-copy\376\003\000\000\002\376\001\000\000\014string->list\376\003\000\000\002\376\001\000\000\014list->string\376\003\000"
"\000\002\376\001\000\000\011substring\376\003\000\000\002\376\001\000\000\014string-fill!\376\003\000\000\002\376\001\000\000\007vector\077\376\003\000\000\002\376\001\000\000\013make-vector\376\003\000\000"
"\002\376\001\000\000\012vector-ref\376\003\000\000\002\376\001\000\000\013vector-set!\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\001\000\000\006vector\376\003\000\000\002\376\001\000\000\015v"
"ector-length\376\003\000\000\002\376\001\000\000\014vector->list\376\003\000\000\002\376\001\000\000\014list->vector\376\003\000\000\002\376\001\000\000\014vector-fill!\376\003"
"\000\000\002\376\001\000\000\012procedure\077\376\003\000\000\002\376\001\000\000\003map\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\005apply\376\003\000\000\002\376\001\000\000\005force\376"
"\003\000\000\002\376\001\000\000\036call-with-current-continuation\376\003\000\000\002\376\001\000\000\013input-port\077\376\003\000\000\002\376\001\000\000\014output-por"
"t\077\376\003\000\000\002\376\001\000\000\022current-input-port\376\003\000\000\002\376\001\000\000\023current-output-port\376\003\000\000\002\376\001\000\000\024call-with-i"
"nput-file\376\003\000\000\002\376\001\000\000\025call-with-output-file\376\003\000\000\002\376\001\000\000\017open-input-file\376\003\000\000\002\376\001\000\000\020open-"
"output-file\376\003\000\000\002\376\001\000\000\020close-input-port\376\003\000\000\002\376\001\000\000\021close-output-port\376\003\000\000\002\376\001\000\000\004load\376\003"
"\000\000\002\376\001\000\000\004read\376\003\000\000\002\376\001\000\000\013eof-object\077\376\003\000\000\002\376\001\000\000\011read-char\376\003\000\000\002\376\001\000\000\011peek-char\376\003\000\000\002\376\001\000\000"
"\005write\376\003\000\000\002\376\001\000\000\007display\376\003\000\000\002\376\001\000\000\012write-char\376\003\000\000\002\376\001\000\000\007newline\376\003\000\000\002\376\001\000\000\024with-input"
"-from-file\376\003\000\000\002\376\001\000\000\023with-output-to-file\376\003\000\000\002\376\001\000\000\014dynamic-wind\376\003\000\000\002\376\001\000\000\006values\376\003\000"
"\000\002\376\001\000\000\020call-with-values\376\003\000\000\002\376\001\000\000\004eval\376\003\000\000\002\376\001\000\000\013char-ready\077\376\003\000\000\002\376\001\000\000\011imag-part\376\003\000"
"\000\002\376\001\000\000\011real-part\376\003\000\000\002\376\001\000\000\011magnitude\376\003\000\000\002\376\001\000\000\011numerator\376\003\000\000\002\376\001\000\000\013denominator\376\003\000\000\002"
"\376\001\000\000\031scheme-report-environment\376\003\000\000\002\376\001\000\000\020null-environment\376\003\000\000\002\376\001\000\000\027interaction-en"
"vironment\376\003\000\000\002\376\001\000\000\004else\376\377\016");
lf[3]=C_h_intern(&lf[3],29,"\003sysdefault-macro-environment");
C_register_lf2(lf,4,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k6 */
static void C_ccall f_8(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k9 in k6 */
static void C_ccall f_11(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheme.import.scm:27: ##sys#register-primitive-module */
((C_proc5)C_fast_retrieve_symbol_proc(lf[0]))(5,*((C_word*)lf[0]+1),t2,lf[1],lf[2],C_fast_retrieve(lf[3]));}

/* k12 in k9 in k6 */
static void C_ccall f_14(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[5] = {
{"toplevel:scheme_2eimport_2escm",(void*)C_toplevel},
{"f_8:scheme_2eimport_2escm",(void*)f_8},
{"f_11:scheme_2eimport_2escm",(void*)f_11},
{"f_14:scheme_2eimport_2escm",(void*)f_14},
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
