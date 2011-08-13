/* Generated from posix.import.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: posix.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -feature chicken-compile-shared -dynamic -no-trace -output-file posix.import.c
   used units: library eval
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[3];
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
if(!C_demand_2(2997)){
C_save(t1);
C_rereclaim2(2997*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,3);
lf[0]=C_h_intern(&lf[0],29,"\003sysregister-primitive-module");
lf[1]=C_h_intern(&lf[1],5,"posix");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005_exit\376\003\000\000\002\376\001\000\000\024call-with-input-pipe\376\003\000\000\002\376\001\000\000\025call-with-output-pipe\376\003\000\000"
"\002\376\001\000\000\020change-directory\376\003\000\000\002\376\001\000\000\020change-file-mode\376\003\000\000\002\376\001\000\000\021change-file-owner\376\003\000\000\002"
"\376\001\000\000\020close-input-pipe\376\003\000\000\002\376\001\000\000\021close-output-pipe\376\003\000\000\002\376\001\000\000\020create-directory\376\003\000\000\002\376"
"\001\000\000\013create-fifo\376\003\000\000\002\376\001\000\000\013create-pipe\376\003\000\000\002\376\001\000\000\016create-session\376\003\000\000\002\376\001\000\000\024create-sym"
"bolic-link\376\003\000\000\002\376\001\000\000\021current-directory\376\003\000\000\002\376\001\000\000\032current-effective-group-id\376\003\000\000\002\376\001"
"\000\000\031current-effective-user-id\376\003\000\000\002\376\001\000\000\033current-effective-user-name\376\003\000\000\002\376\001\000\000\031get-e"
"nvironment-variables\376\003\000\000\002\376\001\000\000\020current-group-id\376\003\000\000\002\376\001\000\000\022current-process-id\376\003\000\000\002\376"
"\001\000\000\017current-user-id\376\003\000\000\002\376\001\000\000\021current-user-name\376\003\000\000\002\376\001\000\000\020delete-directory\376\003\000\000\002\376\001\000"
"\000\011directory\376\003\000\000\002\376\001\000\000\012directory\077\376\003\000\000\002\376\001\000\000\020duplicate-fileno\376\003\000\000\002\376\001\000\000\012errno/2big\376\003\000"
"\000\002\376\001\000\000\013errno/acces\376\003\000\000\002\376\001\000\000\013errno/again\376\003\000\000\002\376\001\000\000\012errno/badf\376\003\000\000\002\376\001\000\000\012errno/busy\376"
"\003\000\000\002\376\001\000\000\013errno/child\376\003\000\000\002\376\001\000\000\014errno/deadlk\376\003\000\000\002\376\001\000\000\011errno/dom\376\003\000\000\002\376\001\000\000\013errno/exi"
"st\376\003\000\000\002\376\001\000\000\013errno/fault\376\003\000\000\002\376\001\000\000\012errno/fbig\376\003\000\000\002\376\001\000\000\013errno/ilseq\376\003\000\000\002\376\001\000\000\012errno/"
"intr\376\003\000\000\002\376\001\000\000\013errno/inval\376\003\000\000\002\376\001\000\000\010errno/io\376\003\000\000\002\376\001\000\000\013errno/isdir\376\003\000\000\002\376\001\000\000\013errno/"
"mfile\376\003\000\000\002\376\001\000\000\013errno/mlink\376\003\000\000\002\376\001\000\000\021errno/nametoolong\376\003\000\000\002\376\001\000\000\013errno/nfile\376\003\000\000\002\376"
"\001\000\000\013errno/nodev\376\003\000\000\002\376\001\000\000\013errno/noent\376\003\000\000\002\376\001\000\000\014errno/noexec\376\003\000\000\002\376\001\000\000\013errno/nolck\376"
"\003\000\000\002\376\001\000\000\013errno/nomem\376\003\000\000\002\376\001\000\000\013errno/nospc\376\003\000\000\002\376\001\000\000\013errno/nosys\376\003\000\000\002\376\001\000\000\014errno/no"
"tdir\376\003\000\000\002\376\001\000\000\016errno/notempty\376\003\000\000\002\376\001\000\000\013errno/notty\376\003\000\000\002\376\001\000\000\012errno/nxio\376\003\000\000\002\376\001\000\000\012e"
"rrno/perm\376\003\000\000\002\376\001\000\000\012errno/pipe\376\003\000\000\002\376\001\000\000\013errno/range\376\003\000\000\002\376\001\000\000\012errno/rofs\376\003\000\000\002\376\001\000\000\013"
"errno/spipe\376\003\000\000\002\376\001\000\000\012errno/srch\376\003\000\000\002\376\001\000\000\020errno/wouldblock\376\003\000\000\002\376\001\000\000\012errno/xdev\376\003\000"
"\000\002\376\001\000\000\013fcntl/dupfd\376\003\000\000\002\376\001\000\000\013fcntl/getfd\376\003\000\000\002\376\001\000\000\013fcntl/getfl\376\003\000\000\002\376\001\000\000\013fcntl/setf"
"d\376\003\000\000\002\376\001\000\000\013fcntl/setfl\376\003\000\000\002\376\001\000\000\005fifo\077\376\003\000\000\002\376\001\000\000\020file-access-time\376\003\000\000\002\376\001\000\000\020file-ch"
"ange-time\376\003\000\000\002\376\001\000\000\022file-creation-mode\376\003\000\000\002\376\001\000\000\012file-close\376\003\000\000\002\376\001\000\000\014file-control\376"
"\003\000\000\002\376\001\000\000\024file-execute-access\077\376\003\000\000\002\376\001\000\000\011file-link\376\003\000\000\002\376\001\000\000\011file-lock\376\003\000\000\002\376\001\000\000\022fil"
"e-lock/blocking\376\003\000\000\002\376\001\000\000\014file-mkstemp\376\003\000\000\002\376\001\000\000\026file-modification-time\376\003\000\000\002\376\001\000\000\011f"
"ile-open\376\003\000\000\002\376\001\000\000\012file-owner\376\003\000\000\002\376\001\000\000\020file-permissions\376\003\000\000\002\376\001\000\000\015file-position\376\003\000"
"\000\002\376\001\000\000\022set-file-position!\376\003\000\000\002\376\001\000\000\011file-read\376\003\000\000\002\376\001\000\000\021file-read-access\077\376\003\000\000\002\376\001\000\000"
"\013file-select\376\003\000\000\002\376\001\000\000\011file-size\376\003\000\000\002\376\001\000\000\011file-stat\376\003\000\000\002\376\001\000\000\016file-test-lock\376\003\000\000\002\376"
"\001\000\000\015file-truncate\376\003\000\000\002\376\001\000\000\013file-unlock\376\003\000\000\002\376\001\000\000\012file-write\376\003\000\000\002\376\001\000\000\022file-write-a"
"ccess\077\376\003\000\000\002\376\001\000\000\015fileno/stderr\376\003\000\000\002\376\001\000\000\014fileno/stdin\376\003\000\000\002\376\001\000\000\015fileno/stdout\376\003\000\000\002\376"
"\001\000\000\012find-files\376\003\000\000\002\376\001\000\000\012get-groups\376\003\000\000\002\376\001\000\000\015get-host-name\376\003\000\000\002\376\001\000\000\004glob\376\003\000\000\002\376\001\000\000"
"\021group-information\376\003\000\000\002\376\001\000\000\021initialize-groups\376\003\000\000\002\376\001\000\000\023local-time->seconds\376\003\000\000\002\376"
"\001\000\000\033local-timezone-abbreviation\376\003\000\000\002\376\001\000\000\022map-file-to-memory\376\003\000\000\002\376\001\000\000\015map/anonymo"
"us\376\003\000\000\002\376\001\000\000\010map/file\376\003\000\000\002\376\001\000\000\011map/fixed\376\003\000\000\002\376\001\000\000\013map/private\376\003\000\000\002\376\001\000\000\012map/shared"
"\376\003\000\000\002\376\001\000\000\032memory-mapped-file-pointer\376\003\000\000\002\376\001\000\000\023memory-mapped-file\077\376\003\000\000\002\376\001\000\000\020open-"
"input-file*\376\003\000\000\002\376\001\000\000\017open-input-pipe\376\003\000\000\002\376\001\000\000\021open-output-file*\376\003\000\000\002\376\001\000\000\020open-ou"
"tput-pipe\376\003\000\000\002\376\001\000\000\013open/append\376\003\000\000\002\376\001\000\000\013open/binary\376\003\000\000\002\376\001\000\000\012open/creat\376\003\000\000\002\376\001\000\000"
"\011open/excl\376\003\000\000\002\376\001\000\000\012open/fsync\376\003\000\000\002\376\001\000\000\013open/noctty\376\003\000\000\002\376\001\000\000\015open/nonblock\376\003\000\000\002\376"
"\001\000\000\013open/rdonly\376\003\000\000\002\376\001\000\000\011open/rdwr\376\003\000\000\002\376\001\000\000\011open/read\376\003\000\000\002\376\001\000\000\011open/sync\376\003\000\000\002\376\001\000"
"\000\011open/text\376\003\000\000\002\376\001\000\000\012open/trunc\376\003\000\000\002\376\001\000\000\012open/write\376\003\000\000\002\376\001\000\000\013open/wronly\376\003\000\000\002\376\001\000"
"\000\021parent-process-id\376\003\000\000\002\376\001\000\000\012perm/irgrp\376\003\000\000\002\376\001\000\000\012perm/iroth\376\003\000\000\002\376\001\000\000\012perm/irusr\376"
"\003\000\000\002\376\001\000\000\012perm/irwxg\376\003\000\000\002\376\001\000\000\012perm/irwxo\376\003\000\000\002\376\001\000\000\012perm/irwxu\376\003\000\000\002\376\001\000\000\012perm/isgid\376"
"\003\000\000\002\376\001\000\000\012perm/isuid\376\003\000\000\002\376\001\000\000\012perm/isvtx\376\003\000\000\002\376\001\000\000\012perm/iwgrp\376\003\000\000\002\376\001\000\000\012perm/iwoth\376"
"\003\000\000\002\376\001\000\000\012perm/iwusr\376\003\000\000\002\376\001\000\000\012perm/ixgrp\376\003\000\000\002\376\001\000\000\012perm/ixoth\376\003\000\000\002\376\001\000\000\012perm/ixusr\376"
"\003\000\000\002\376\001\000\000\010pipe/buf\376\003\000\000\002\376\001\000\000\014port->fileno\376\003\000\000\002\376\001\000\000\007process\376\003\000\000\002\376\001\000\000\010process*\376\003\000\000\002\376"
"\001\000\000\017process-execute\376\003\000\000\002\376\001\000\000\014process-fork\376\003\000\000\002\376\001\000\000\020process-group-id\376\003\000\000\002\376\001\000\000\013pro"
"cess-run\376\003\000\000\002\376\001\000\000\016process-signal\376\003\000\000\002\376\001\000\000\014process-wait\376\003\000\000\002\376\001\000\000\011prot/exec\376\003\000\000\002\376\001"
"\000\000\011prot/none\376\003\000\000\002\376\001\000\000\011prot/read\376\003\000\000\002\376\001\000\000\012prot/write\376\003\000\000\002\376\001\000\000\022read-symbolic-link\376"
"\003\000\000\002\376\001\000\000\015regular-file\077\376\003\000\000\002\376\001\000\000\023seconds->local-time\376\003\000\000\002\376\001\000\000\017seconds->string\376\003\000\000"
"\002\376\001\000\000\021seconds->utc-time\376\003\000\000\002\376\001\000\000\010seek/cur\376\003\000\000\002\376\001\000\000\010seek/end\376\003\000\000\002\376\001\000\000\010seek/set\376\003\000"
"\000\002\376\001\000\000\012set-alarm!\376\003\000\000\002\376\001\000\000\023set-buffering-mode!\376\003\000\000\002\376\001\000\000\013set-groups!\376\003\000\000\002\376\001\000\000\023set"
"-root-directory!\376\003\000\000\002\376\001\000\000\023set-signal-handler!\376\003\000\000\002\376\001\000\000\020set-signal-mask!\376\003\000\000\002\376\001\000\000"
"\006setenv\376\003\000\000\002\376\001\000\000\016signal-handler\376\003\000\000\002\376\001\000\000\013signal-mask\376\003\000\000\002\376\001\000\000\014signal-mask!\376\003\000\000\002\376"
"\001\000\000\016signal-masked\077\376\003\000\000\002\376\001\000\000\016signal-unmask!\376\003\000\000\002\376\001\000\000\013signal/abrt\376\003\000\000\002\376\001\000\000\013signal/"
"alrm\376\003\000\000\002\376\001\000\000\013signal/chld\376\003\000\000\002\376\001\000\000\013signal/cont\376\003\000\000\002\376\001\000\000\012signal/fpe\376\003\000\000\002\376\001\000\000\012sign"
"al/hup\376\003\000\000\002\376\001\000\000\012signal/ill\376\003\000\000\002\376\001\000\000\012signal/int\376\003\000\000\002\376\001\000\000\011signal/io\376\003\000\000\002\376\001\000\000\013signa"
"l/kill\376\003\000\000\002\376\001\000\000\013signal/pipe\376\003\000\000\002\376\001\000\000\013signal/prof\376\003\000\000\002\376\001\000\000\013signal/quit\376\003\000\000\002\376\001\000\000\013s"
"ignal/segv\376\003\000\000\002\376\001\000\000\013signal/stop\376\003\000\000\002\376\001\000\000\013signal/term\376\003\000\000\002\376\001\000\000\013signal/trap\376\003\000\000\002\376\001"
"\000\000\013signal/tstp\376\003\000\000\002\376\001\000\000\012signal/urg\376\003\000\000\002\376\001\000\000\013signal/usr1\376\003\000\000\002\376\001\000\000\013signal/usr2\376\003\000\000"
"\002\376\001\000\000\015signal/vtalrm\376\003\000\000\002\376\001\000\000\014signal/winch\376\003\000\000\002\376\001\000\000\013signal/xcpu\376\003\000\000\002\376\001\000\000\013signal/x"
"fsz\376\003\000\000\002\376\001\000\000\014signals-list\376\003\000\000\002\376\001\000\000\005sleep\376\003\000\000\002\376\001\000\000\015block-device\077\376\003\000\000\002\376\001\000\000\021charact"
"er-device\077\376\003\000\000\002\376\001\000\000\005fifo\077\376\003\000\000\002\376\001\000\000\007socket\077\376\003\000\000\002\376\001\000\000\014string->time\376\003\000\000\002\376\001\000\000\016symbol"
"ic-link\077\376\003\000\000\002\376\001\000\000\022system-information\376\003\000\000\002\376\001\000\000\015terminal-name\376\003\000\000\002\376\001\000\000\016terminal-po"
"rt\077\376\003\000\000\002\376\001\000\000\015terminal-size\376\003\000\000\002\376\001\000\000\014time->string\376\003\000\000\002\376\001\000\000\026unmap-file-from-memory"
"\376\003\000\000\002\376\001\000\000\010unsetenv\376\003\000\000\002\376\001\000\000\020user-information\376\003\000\000\002\376\001\000\000\021utc-time->seconds\376\003\000\000\002\376\001\000\000"
"\024with-input-from-pipe\376\003\000\000\002\376\001\000\000\023with-output-to-pipe\376\377\016");
C_register_lf2(lf,3,create_ptable());
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
/* posix.import.scm:27: ##sys#register-primitive-module */
((C_proc4)C_fast_retrieve_symbol_proc(lf[0]))(4,*((C_word*)lf[0]+1),t2,lf[1],lf[2]);}

/* k12 in k9 in k6 */
static void C_ccall f_14(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[5] = {
{"toplevel:posix_2eimport_2escm",(void*)C_toplevel},
{"f_8:posix_2eimport_2escm",(void*)f_8},
{"f_11:posix_2eimport_2escm",(void*)f_11},
{"f_14:posix_2eimport_2escm",(void*)f_14},
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
