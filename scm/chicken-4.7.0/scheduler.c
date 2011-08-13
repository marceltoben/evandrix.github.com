/* Generated from scheduler.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: scheduler.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file scheduler.c
   unit: scheduler
*/

#include "chicken.h"

#ifdef HAVE_ERRNO_H
# include <errno.h>
# define C_signal_interrupted_p     C_mk_bool(errno == EINTR)
#else
# define C_signal_interrupted_p     C_SCHEME_FALSE
#endif

#ifdef _WIN32
# if (defined(HAVE_WINSOCK2_H) && defined(HAVE_WS2TCPIP_H))
#  include <winsock2.h>
#  include <ws2tcpip.h>
# else
#  include <winsock.h>
# endif
/* Beware: winsock2.h must come BEFORE windows.h */
# define C_msleep(n)     (Sleep(C_unfix(n)), C_SCHEME_TRUE)
#else
# include <unistd.h>
# include <sys/types.h>
# include <sys/time.h>
# include <time.h>
static C_word C_msleep(C_word ms);
C_word C_msleep(C_word ms) {
#ifdef __CYGWIN__
  if(usleep(C_unfix(ms) * 1000) == -1) return C_SCHEME_FALSE;
#else
  struct timespec ts;
  unsigned long mss = C_unfix(ms);
  ts.tv_sec = mss / 1000;
  ts.tv_nsec = (mss % 1000) * 1000000;
  
  if(nanosleep(&ts, NULL) == -1) return C_SCHEME_FALSE;
#endif
  return C_SCHEME_TRUE;
}
#endif
static fd_set C_fdset_input, C_fdset_output;
#define C_fd_test_input(fd)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_input))
#define C_fd_test_output(fd)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_output))

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[57];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,50,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,116,104,114,101,97,100,115,52,53,52,32,107,101,101,112,52,53,53,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,110,52,52,49,32,108,115,116,52,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,6),40,103,51,52,53,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,18),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,52,48,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,49,51,52,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,49,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,7),40,102,95,53,55,57,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,7),40,102,95,56,48,57,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,17),40,102,95,56,49,50,32,116,104,114,101,97,100,49,54,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,6),40,97,57,51,48,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,26),40,102,95,57,49,51,32,114,101,97,115,111,110,49,57,55,32,115,116,97,116,101,49,57,56,41,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,118,50,48,55,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,12),40,102,95,57,51,56,32,116,50,48,52,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,116,108,50,49,54,32,112,114,101,118,50,49,55,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,18),40,102,95,57,55,57,32,116,50,49,50,32,116,109,50,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,19),40,102,95,49,48,53,52,32,116,50,50,55,32,116,50,50,50,56,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,12),40,103,50,56,55,32,116,50,50,57,53,41,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,56,54,32,103,50,57,50,50,57,55,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,53,52,32,103,50,54,48,50,54,53,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,52,49,32,103,50,52,55,50,55,51,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,18),40,102,95,49,49,56,52,32,116,50,55,55,32,115,50,55,56,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,13),40,102,95,49,50,57,56,32,116,51,49,48,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,7),40,97,49,51,51,51,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,15),40,102,95,49,51,49,48,32,97,114,103,51,49,57,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,52,50,48,41,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,26),40,102,95,49,53,51,49,32,116,52,49,54,32,102,100,52,49,55,32,105,47,111,52,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,52,55,53,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,99,108,101,97,114,45,105,47,111,45,115,116,97,116,101,45,102,111,114,45,116,104,114,101,97,100,33,32,116,52,55,50,41};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,39),40,102,95,50,48,55,53,32,113,117,101,117,101,52,57,57,32,97,114,103,53,48,48,32,118,97,108,53,48,49,32,105,110,105,116,53,48,50,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,53,49,51,41,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,53,49,54,32,105,53,49,55,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,53,48,57,32,105,53,49,48,41};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,53,48,54,32,105,53,48,55,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,20),40,102,95,49,57,50,50,32,46,32,116,109,112,52,56,57,52,57,48,41,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,8),40,102,95,50,48,56,52,41};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,15),40,102,95,50,48,57,52,32,118,101,99,53,50,57,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,13),40,102,95,50,49,49,51,32,116,53,51,52,41,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub379(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub379(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
FD_SET(fd, &C_fdset_output);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub374(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub374(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
FD_SET(fd, &C_fdset_input);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub370(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub370(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
FD_ZERO(&C_fdset_input);FD_ZERO(&C_fdset_output);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub365(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub365(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int to=(int )C_truep(C_a0);
double tm=(double )C_c_double(C_a1);
struct timeval timeout;timeout.tv_sec = tm / 1000;timeout.tv_usec = fmod(tm, 1000) * 1000;C_return(select(FD_SETSIZE, &C_fdset_input, &C_fdset_output, NULL, to ? &timeout : NULL));
C_ret:
#undef return

return C_r;}

C_noret_decl(C_scheduler_toplevel)
C_externexport void C_ccall C_scheduler_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2113)
static void C_ccall f_2113(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2123)
static void C_fcall f_2123(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2126)
static void C_ccall f_2126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2129)
static void C_ccall f_2129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2094)
static void C_ccall f_2094(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2084)
static void C_ccall f_2084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1922)
static void C_ccall f_1922(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1922)
static void C_ccall f_1922r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1943)
static void C_fcall f_1943(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1970)
static void C_fcall f_1970(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2024)
static void C_fcall f_2024(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1997)
static void C_fcall f_1997(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2015)
static void C_ccall f_2015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1991)
static void C_ccall f_1991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1961)
static void C_ccall f_1961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2075)
static void C_ccall f_2075(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1847)
static void C_fcall f_1847(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1863)
static void C_fcall f_1863(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1885)
static void C_ccall f_1885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1861)
static void C_ccall f_1861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1531)
static void C_ccall f_1531(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1550)
static void C_fcall f_1550(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1535)
static void C_ccall f_1535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1310)
static void C_ccall f_1310(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1347)
static void C_ccall f_1347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1350)
static void C_ccall f_1350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1353)
static void C_ccall f_1353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1356)
static void C_ccall f_1356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1366)
static void C_ccall f_1366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1359)
static void C_ccall f_1359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1334)
static void C_ccall f_1334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1338)
static void C_ccall f_1338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1320)
static void C_ccall f_1320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1298)
static void C_ccall f_1298(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1184)
static void C_ccall f_1184(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1161)
static void C_fcall f_1161(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1135)
static void C_fcall f_1135(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1145)
static void C_ccall f_1145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1119)
static void C_ccall f_1119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1188)
static void C_ccall f_1188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1275)
static void C_ccall f_1275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1194)
static void C_fcall f_1194(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1197)
static void C_ccall f_1197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1200)
static void C_ccall f_1200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1244)
static void C_fcall f_1244(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1254)
static void C_ccall f_1254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1225)
static void C_fcall f_1225(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1218)
static void C_ccall f_1218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1054)
static void C_ccall f_1054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_979)
static void C_ccall f_979(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_983)
static void C_fcall f_983(C_word t0,C_word t1) C_noret;
C_noret_decl(f_997)
static void C_fcall f_997(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1007)
static void C_fcall f_1007(C_word t0,C_word t1) C_noret;
C_noret_decl(f_986)
static void C_ccall f_986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_938)
static void C_ccall f_938(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_944)
static C_word C_fcall f_944(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_913)
static void C_ccall f_913(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_931)
static void C_ccall f_931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_917)
static void C_ccall f_917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_812)
static void C_ccall f_812(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_809)
static void C_ccall f_809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_579)
static void C_ccall f_579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_609)
static void C_ccall f_609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_614)
static void C_fcall f_614(C_word t0,C_word t1) C_noret;
C_noret_decl(f_690)
static void C_fcall f_690(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_742)
static void C_fcall f_742(C_word t0,C_word t1) C_noret;
C_noret_decl(f_725)
static void C_ccall f_725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_728)
static void C_ccall f_728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_618)
static void C_ccall f_618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1378)
static void C_fcall f_1378(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1415)
static C_word C_fcall f_1415(C_word t0,C_word t1);
C_noret_decl(f_1389)
static C_word C_fcall f_1389(C_word t0,C_word t1);
C_noret_decl(f_1602)
static void C_ccall f_1602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1611)
static void C_fcall f_1611(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1614)
static void C_fcall f_1614(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1635)
static void C_fcall f_1635(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1818)
static void C_ccall f_1818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1666)
static void C_fcall f_1666(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1737)
static void C_ccall f_1737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1740)
static void C_ccall f_1740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1762)
static void C_fcall f_1762(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1765)
static void C_ccall f_1765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1768)
static void C_ccall f_1768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1701)
static void C_ccall f_1701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1633)
static void C_ccall f_1633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_621)
static void C_ccall f_621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_626)
static void C_fcall f_626(C_word t0,C_word t1) C_noret;
C_noret_decl(f_630)
static void C_fcall f_630(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2123)
static void C_fcall trf_2123(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2123(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2123(t0,t1);}

C_noret_decl(trf_1943)
static void C_fcall trf_1943(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1943(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1943(t0,t1,t2,t3);}

C_noret_decl(trf_1970)
static void C_fcall trf_1970(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1970(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1970(t0,t1,t2,t3);}

C_noret_decl(trf_2024)
static void C_fcall trf_2024(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2024(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2024(t0,t1,t2,t3);}

C_noret_decl(trf_1997)
static void C_fcall trf_1997(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1997(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1997(t0,t1,t2);}

C_noret_decl(trf_1847)
static void C_fcall trf_1847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1847(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1847(t0,t1);}

C_noret_decl(trf_1863)
static void C_fcall trf_1863(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1863(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1863(t0,t1,t2);}

C_noret_decl(trf_1550)
static void C_fcall trf_1550(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1550(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1550(t0,t1,t2);}

C_noret_decl(trf_1161)
static void C_fcall trf_1161(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1161(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1161(t0,t1,t2);}

C_noret_decl(trf_1135)
static void C_fcall trf_1135(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1135(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1135(t0,t1,t2);}

C_noret_decl(trf_1194)
static void C_fcall trf_1194(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1194(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1194(t0,t1);}

C_noret_decl(trf_1244)
static void C_fcall trf_1244(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1244(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1244(t0,t1,t2);}

C_noret_decl(trf_1225)
static void C_fcall trf_1225(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1225(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1225(t0,t1,t2);}

C_noret_decl(trf_983)
static void C_fcall trf_983(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_983(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_983(t0,t1);}

C_noret_decl(trf_997)
static void C_fcall trf_997(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_997(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_997(t0,t1,t2,t3);}

C_noret_decl(trf_1007)
static void C_fcall trf_1007(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1007(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1007(t0,t1);}

C_noret_decl(trf_614)
static void C_fcall trf_614(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_614(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_614(t0,t1);}

C_noret_decl(trf_690)
static void C_fcall trf_690(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_690(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_690(t0,t1,t2);}

C_noret_decl(trf_742)
static void C_fcall trf_742(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_742(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_742(t0,t1);}

C_noret_decl(trf_1378)
static void C_fcall trf_1378(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1378(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1378(t0,t1,t2);}

C_noret_decl(trf_1611)
static void C_fcall trf_1611(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1611(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1611(t0,t1);}

C_noret_decl(trf_1614)
static void C_fcall trf_1614(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1614(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1614(t0,t1);}

C_noret_decl(trf_1635)
static void C_fcall trf_1635(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1635(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1635(t0,t1,t2,t3);}

C_noret_decl(trf_1666)
static void C_fcall trf_1666(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1666(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1666(t0,t1,t2,t3);}

C_noret_decl(trf_1762)
static void C_fcall trf_1762(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1762(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1762(t0,t1);}

C_noret_decl(trf_626)
static void C_fcall trf_626(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_626(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_626(t0,t1);}

C_noret_decl(trf_630)
static void C_fcall trf_630(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_630(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_630(t0,t1);}

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
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_scheduler_toplevel(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("scheduler_toplevel"));
C_check_nursery_minimum(54);
if(!C_demand(54)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(464)){
C_save(t1);
C_rereclaim2(464*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(54);
C_initialize_lf(lf,57);
lf[0]=C_h_intern(&lf[0],12,"\003sysschedule");
lf[1]=C_h_intern(&lf[1],18,"\003syscurrent-thread");
lf[2]=C_h_intern(&lf[2],17,"\003sysdynamic-winds");
lf[3]=C_h_intern(&lf[3],18,"\003sysstandard-input");
lf[4]=C_h_intern(&lf[4],19,"\003sysstandard-output");
lf[5]=C_h_intern(&lf[5],18,"\003sysstandard-error");
lf[6]=C_h_intern(&lf[6],29,"\003syscurrent-exception-handler");
lf[7]=C_h_intern(&lf[7],28,"\003syscurrent-parameter-vector");
lf[8]=C_h_intern(&lf[8],5,"ready");
lf[9]=C_h_intern(&lf[9],7,"running");
lf[11]=C_h_intern(&lf[11],11,"\003sysfd-list");
lf[12]=C_h_intern(&lf[12],8,"\003syshalt");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\010deadlock");
lf[16]=C_h_intern(&lf[16],21,"\003sysprimordial-thread");
lf[17]=C_h_intern(&lf[17],19,"\003systhread-unblock!");
lf[18]=C_h_intern(&lf[18],25,"\003systhread-basic-unblock!");
lf[19]=C_h_intern(&lf[19],28,"\003sysremove-from-timeout-list");
lf[20]=C_h_intern(&lf[20],6,"\000input");
lf[21]=C_h_intern(&lf[21],7,"\000output");
lf[22]=C_h_intern(&lf[22],4,"\000all");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000!fdset-test: invalid i/o direction");
lf[24]=C_decode_literal(C_heaptop,"\376U0.0\000");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000 fdset-set: invalid i/o direction");
lf[27]=C_h_intern(&lf[27],22,"\003sysadd-to-ready-queue");
lf[28]=C_h_intern(&lf[28],15,"\003sysready-queue");
lf[29]=C_h_intern(&lf[29],18,"\003sysinterrupt-hook");
lf[30]=C_h_intern(&lf[30],29,"\003systhread-block-for-timeout!");
lf[31]=C_h_intern(&lf[31],7,"blocked");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\0000##sys#thread-block-for-timeout!: invalid timeout");
lf[33]=C_h_intern(&lf[33],33,"\003systhread-block-for-termination!");
lf[34]=C_h_intern(&lf[34],4,"dead");
lf[35]=C_h_intern(&lf[35],10,"terminated");
lf[36]=C_h_intern(&lf[36],16,"\003systhread-kill!");
lf[37]=C_h_intern(&lf[37],18,"condition-variable");
lf[38]=C_h_intern(&lf[38],8,"\003sysdelq");
lf[39]=C_h_intern(&lf[39],6,"thread");
lf[40]=C_h_intern(&lf[40],19,"print-error-message");
lf[41]=C_h_intern(&lf[41],7,"display");
lf[42]=C_h_intern(&lf[42],16,"print-call-chain");
lf[43]=C_h_intern(&lf[43],18,"open-output-string");
lf[44]=C_h_intern(&lf[44],17,"get-output-string");
lf[45]=C_h_intern(&lf[45],29,"\003sysdefault-exception-handler");
lf[46]=C_h_intern(&lf[46],10,"\003syssignal");
lf[47]=C_h_intern(&lf[47],20,"\003syswarnings-enabled");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\011Warning (");
lf[50]=C_h_intern(&lf[50],25,"\003systhread-block-for-i/o!");
lf[51]=C_h_intern(&lf[51],15,"\003sysall-threads");
lf[52]=C_h_intern(&lf[52],3,"i/o");
lf[53]=C_h_intern(&lf[53],7,"timeout");
lf[54]=C_h_intern(&lf[54],27,"\003sysfetch-and-clear-threads");
lf[55]=C_h_intern(&lf[55],19,"\003sysrestore-threads");
lf[56]=C_h_intern(&lf[56],8,"sleeping");
C_register_lf2(lf,57,create_ptable());
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##sys#schedule ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_579,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t3=lf[14] /* ready-queue-head */ =C_SCHEME_END_OF_LIST;;
t4=lf[15] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t5=C_mutate((C_word*)lf[28]+1 /* (set! ##sys#ready-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_809,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[27]+1 /* (set! ##sys#add-to-ready-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_812,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[29]+1);
t8=C_mutate((C_word*)lf[29]+1 /* (set! ##sys#interrupt-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_913,a[2]=t7,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t9=lf[10] /* timeout-list */ =C_SCHEME_END_OF_LIST;;
t10=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#remove-from-timeout-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_938,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[30]+1 /* (set! ##sys#thread-block-for-timeout! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_979,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[33]+1 /* (set! ##sys#thread-block-for-termination! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1054,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[36]+1 /* (set! ##sys#thread-kill! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1184,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[18]+1 /* (set! ##sys#thread-basic-unblock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1298,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t15=*((C_word*)lf[40]+1);
t16=*((C_word*)lf[41]+1);
t17=*((C_word*)lf[42]+1);
t18=*((C_word*)lf[43]+1);
t19=*((C_word*)lf[44]+1);
t20=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#default-exception-handler ...) */,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1310,a[2]=t18,a[3]=t16,a[4]=t19,a[5]=t15,a[6]=t17,a[7]=((C_word)li25),tmp=(C_word)a,a+=8,tmp));
t21=C_set_block_item(lf[11] /* fd-list */,0,C_SCHEME_END_OF_LIST);
t22=C_mutate((C_word*)lf[50]+1 /* (set! ##sys#thread-block-for-i/o! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1531,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate(&lf[26] /* (set! ##sys#clear-i/o-state-for-thread! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1847,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[51]+1 /* (set! ##sys#all-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1922,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[54]+1 /* (set! ##sys#fetch-and-clear-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2084,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[55]+1 /* (set! ##sys#restore-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2094,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[17]+1 /* (set! ##sys#thread-unblock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2113,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t28=t1;
((C_proc2)(void*)(*((C_word*)t28+1)))(2,t28,C_SCHEME_UNDEFINED);}

/* f_2113 */
static void C_ccall f_2113(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2113,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(3));
t4=C_eqp(lf[31],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2123,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_2123(t6,t4);}
else{
t6=C_slot(t2,C_fix(3));
t7=t5;
f_2123(t7,C_eqp(lf[56],t6));}}

/* k2121 */
static void C_fcall f_2123(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2123,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:542: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2124 in k2121 */
static void C_ccall f_2126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2126,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:543: ##sys#clear-i/o-state-for-thread! */
f_1847(t2,((C_word*)t0)[2]);}

/* k2127 in k2124 in k2121 */
static void C_ccall f_2129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:544: ##sys#thread-basic-unblock! */
t2=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_2094 */
static void C_ccall f_2094(C_word c,C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2094,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_mutate(&lf[14] /* (set! ready-queue-head ...) */,t3);
t5=C_slot(t2,C_fix(1));
t6=C_mutate(&lf[15] /* (set! ready-queue-tail ...) */,t5);
t7=C_slot(t2,C_fix(2));
t8=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t7);
t9=C_slot(t2,C_fix(3));
t10=C_mutate(&lf[10] /* (set! ##sys#timeout-list ...) */,t9);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}

/* f_2084 */
static void C_ccall f_2084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2084,2,t0,t1);}
t2=C_a_i_vector4(&a,4,lf[14],lf[15],*((C_word*)lf[11]+1),lf[10]);
t3=lf[14] /* ready-queue-head */ =C_SCHEME_END_OF_LIST;;
t4=lf[15] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t5=C_set_block_item(lf[11] /* fd-list */,0,C_SCHEME_END_OF_LIST);
t6=lf[10] /* timeout-list */ =C_SCHEME_END_OF_LIST;;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t2);}

/* f_1922 */
static void C_ccall f_1922(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr2r,(void*)f_1922r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1922r(t0,t1,t2);}}

static void C_ccall f_1922r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(10);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2075,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp):C_u_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_slot(t2,C_fix(1)));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_u_i_car(t6));
t9=C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_slot(t6,C_fix(1)));
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1943,a[2]=t4,a[3]=t12,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_1943(t14,t1,lf[14],t8);}

/* loop */
static void C_fcall f_1943(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1943,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1961,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=C_u_i_car(t2);
/* scheduler.scm:503: cns */
t7=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t5,lf[8],C_SCHEME_FALSE,t6,t3);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1970,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1970(t7,t1,*((C_word*)lf[11]+1),t3);}}

/* loop in loop */
static void C_fcall f_1970(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1970,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=C_u_i_caar(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1991,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=C_u_i_cdar(t2);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1997,a[2]=t9,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word)li31),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_1997(t11,t6,t7);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2024,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2024(t7,t1,lf[10],t3);}}

/* loop in loop in loop */
static void C_fcall f_2024(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2024,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2042,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=C_u_i_caar(t2);
t7=C_u_i_cdar(t2);
/* scheduler.scm:513: cns */
t8=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t5,lf[53],t6,t7,t3);}
else{
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2040 in loop in loop in loop */
static void C_ccall f_2042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:513: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2024(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in loop in loop */
static void C_fcall f_1997(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1997,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[5];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2015,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=C_slot(t2,C_fix(1));
/* scheduler.scm:510: loop */
t8=t4;
t9=t5;
t1=t8;
t2=t9;
goto loop;}}

/* k2013 in loop in loop in loop */
static void C_ccall f_2015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:510: cns */
t2=((C_word*)t0)[5];
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[52],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1989 in loop in loop */
static void C_ccall f_1991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:506: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1970(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1959 in loop */
static void C_ccall f_1961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:503: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1943(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_2075 */
static void C_ccall f_2075(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2075,6,t0,t1,t2,t3,t4,t5);}
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,t4,t5));}

/* ##sys#clear-i/o-state-for-thread! */
static void C_fcall f_1847(C_word t1,C_word t2){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1847,NULL,2,t1,t2);}
t3=C_slot(t2,C_fix(11));
if(C_truep(C_i_pairp(t3))){
t4=C_slot(t2,C_fix(11));
t5=C_u_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1861,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1863,a[2]=t8,a[3]=t2,a[4]=t5,a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_1863(t10,t6,*((C_word*)lf[11]+1));}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* loop in ##sys#clear-i/o-state-for-thread! */
static void C_fcall f_1863(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1863,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_u_i_car(t2);
t4=C_u_i_car(t3);
t5=C_eqp(((C_word*)t0)[4],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1885,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t3,C_fix(1));
/* scheduler.scm:485: ##sys#delq */
t8=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,((C_word*)t0)[3],t7);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1908,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_slot(t2,C_fix(1));
/* scheduler.scm:490: loop */
t11=t6;
t12=t7;
t1=t11;
t2=t12;
goto loop;}}}

/* k1906 in loop in ##sys#clear-i/o-state-for-thread! */
static void C_ccall f_1908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1908,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k1883 in loop in ##sys#clear-i/o-state-for-thread! */
static void C_ccall f_1885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[3],C_fix(1)));}
else{
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1859 in ##sys#clear-i/o-state-for-thread! */
static void C_ccall f_1861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_1531 */
static void C_ccall f_1531(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1531,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1535,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1550,a[2]=t7,a[3]=t2,a[4]=t3,a[5]=((C_word)li26),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_1550(t9,t5,*((C_word*)lf[11]+1));}

/* loop */
static void C_fcall f_1550(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1550,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_list2(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,*((C_word*)lf[11]+1));
t5=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t3=C_u_i_car(t2);
t4=C_u_i_car(t3);
t5=C_eqp(((C_word*)t0)[4],t4);
if(C_truep(t5)){
t6=C_slot(t3,C_fix(1));
t7=C_a_i_cons(&a,2,((C_word*)t0)[3],t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_setslot(t3,C_fix(1),t7));}
else{
t6=C_slot(t2,C_fix(1));
/* scheduler.scm:406: loop */
t13=t1;
t14=t6;
t1=t13;
t2=t14;
goto loop;}}}

/* k1533 */
static void C_ccall f_1535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1535,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[5],C_fix(3),lf[31]);
t3=C_i_set_i_slot(((C_word*)t0)[5],C_fix(13),C_SCHEME_FALSE);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(((C_word*)t0)[5],C_fix(11),t4));}

/* f_1310 */
static void C_ccall f_1310(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1310,3,t0,t1,t2);}
t3=*((C_word*)lf[1]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1314,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_mk_bool(C_abort_on_thread_exceptions))){
t5=*((C_word*)lf[16]+1);
t6=C_slot(t5,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1334,a[2]=t2,a[3]=t6,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp);
t8=C_i_setslot(t5,C_fix(1),t7);
/* scheduler.scm:330: ##sys#thread-unblock! */
t9=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t4,t5);}
else{
if(C_truep(*((C_word*)lf[47]+1))){
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1347,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t4,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* scheduler.scm:332: open-output-string */
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t4;
f_1314(2,t6,t5);}}}

/* k1345 */
static void C_ccall f_1347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1350,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* scheduler.scm:333: display */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[49],t1);}

/* k1348 in k1345 */
static void C_ccall f_1350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1350,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1353,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* scheduler.scm:334: display */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],((C_word*)t0)[3]);}

/* k1351 in k1348 in k1345 */
static void C_ccall f_1353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1353,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1356,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* scheduler.scm:335: display */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[48],((C_word*)t0)[3]);}

/* k1354 in k1351 in k1348 in k1345 */
static void C_ccall f_1356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1359,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1366,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:336: get-output-string */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k1364 in k1354 in k1351 in k1348 in k1345 */
static void C_ccall f_1366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:336: print-error-message */
t2=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],*((C_word*)lf[5]+1),t1);}

/* k1357 in k1354 in k1351 in k1348 in k1345 */
static void C_ccall f_1359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:337: print-call-chain */
t2=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],*((C_word*)lf[5]+1),C_fix(0),((C_word*)t0)[2]);}

/* a1333 */
static void C_ccall f_1334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1334,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1338,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:328: ##sys#signal */
t3=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1336 in a1333 */
static void C_ccall f_1338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:329: ptx */
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k1312 */
static void C_ccall f_1314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1314,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[4],C_fix(7),((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1320,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:339: ##sys#thread-kill! */
t4=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[35]);}

/* k1318 in k1312 */
static void C_ccall f_1320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:340: ##sys#schedule */
t2=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_1298 */
static void C_ccall f_1298(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1298,3,t0,t1,t2);}
t3=C_i_set_i_slot(t2,C_fix(11),C_SCHEME_FALSE);
t4=C_i_set_i_slot(t2,C_fix(4),C_SCHEME_FALSE);
/* scheduler.scm:310: ##sys#add-to-ready-queue */
t5=*((C_word*)lf[27]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t2);}

/* f_1184 */
static void C_ccall f_1184(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)tr4,(void*)f_1184,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1188,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_slot(t5,C_fix(8));
if(C_truep(C_i_nullp(t6))){
t7=C_SCHEME_UNDEFINED;
t8=t4;
f_1188(2,t8,t7);}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1161,a[2]=t8,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_1161(t10,t4,t6);}}

/* for-each-loop241 */
static void C_fcall f_1161(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(12);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1161,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_set_i_slot(t3,C_fix(2),C_SCHEME_FALSE);
t5=C_i_set_i_slot(t3,C_fix(4),C_SCHEME_TRUE);
t6=C_i_set_i_slot(t3,C_fix(5),C_SCHEME_FALSE);
t7=C_slot(t3,C_fix(3));
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1119,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t7))){
t9=C_i_set_i_slot(t3,C_fix(3),C_SCHEME_END_OF_LIST);
t10=C_slot(t2,C_fix(1));
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}
else{
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1135,a[2]=t10,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_1135(t12,t8,t7);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* for-each-loop254 in for-each-loop241 */
static void C_fcall f_1135(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1135,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1145,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:276: ##sys#thread-unblock! */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1143 in for-each-loop254 in for-each-loop241 */
static void C_ccall f_1145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1135(t3,((C_word*)t0)[2],t2);}

/* k1117 in for-each-loop241 */
static void C_ccall f_1119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_set_i_slot(((C_word*)t0)[5],C_fix(3),C_SCHEME_END_OF_LIST);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_1161(t4,((C_word*)t0)[2],t3);}

/* k1186 */
static void C_ccall f_1188(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1188,2,t0,t1);}
t2=C_slot(((C_word*)t0)[4],C_fix(11));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_structurep(t2,lf[37]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1275,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(2));
/* scheduler.scm:287: ##sys#delq */
t6=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[4],t5);}
else{
if(C_truep(C_i_structurep(t2,lf[39]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1292,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(12));
/* scheduler.scm:289: ##sys#delq */
t6=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[4],t5);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t3;
f_1194(t5,t4);}}}

/* k1290 in k1186 */
static void C_ccall f_1292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_1194(t2,C_i_setslot(((C_word*)t0)[2],C_fix(12),t1));}

/* k1273 in k1186 */
static void C_ccall f_1275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_1194(t2,C_i_setslot(((C_word*)t0)[2],C_fix(2),t1));}

/* k1192 in k1186 */
static void C_fcall f_1194(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1194,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:290: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k1195 in k1192 in k1186 */
static void C_ccall f_1197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1197,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1200,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:291: ##sys#clear-i/o-state-for-thread! */
f_1847(t2,((C_word*)t0)[4]);}

/* k1198 in k1195 in k1192 in k1186 */
static void C_ccall f_1200(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1200,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[4],C_fix(3),((C_word*)t0)[3]);
t3=C_i_set_i_slot(((C_word*)t0)[4],C_fix(4),C_SCHEME_FALSE);
t4=C_i_set_i_slot(((C_word*)t0)[4],C_fix(11),C_SCHEME_FALSE);
t5=C_i_set_i_slot(((C_word*)t0)[4],C_fix(8),C_SCHEME_END_OF_LIST);
t6=C_slot(((C_word*)t0)[4],C_fix(12));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1218,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t6))){
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_set_i_slot(((C_word*)t0)[4],C_fix(12),C_SCHEME_END_OF_LIST));}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1225,a[2]=((C_word*)t0)[4],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1244,a[2]=t8,a[3]=t10,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1244(t12,t7,t6);}}

/* for-each-loop286 in k1198 in k1195 in k1192 in k1186 */
static void C_fcall f_1244(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1244,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1254,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g287293 */
t5=((C_word*)t0)[2];
f_1225(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1252 in for-each-loop286 in k1198 in k1195 in k1192 in k1186 */
static void C_ccall f_1254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1244(t3,((C_word*)t0)[2],t2);}

/* g287 in k1198 in k1195 in k1192 in k1186 */
static void C_fcall f_1225(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1225,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(11));
t4=C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
/* scheduler.scm:302: ##sys#thread-basic-unblock! */
t5=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t2);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k1216 in k1198 in k1195 in k1192 in k1186 */
static void C_ccall f_1218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[2],C_fix(12),C_SCHEME_END_OF_LIST));}

/* f_1054 */
static void C_ccall f_1054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1054,4,t0,t1,t2,t3);}
t4=C_slot(t3,C_fix(3));
t5=C_eqp(t4,lf[34]);
t6=(C_truep(t5)?t5:C_eqp(t4,lf[35]));
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_slot(t3,C_fix(12));
t8=C_a_i_cons(&a,2,t2,t7);
t9=C_i_setslot(t3,C_fix(12),t8);
t10=C_i_setslot(t2,C_fix(3),lf[31]);
t11=C_i_set_i_slot(t2,C_fix(13),C_SCHEME_FALSE);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_i_setslot(t2,C_fix(11),t3));}}

/* f_979 */
static void C_ccall f_979(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_979,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_983,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_flonump(t3))){
t5=C_flonum_greaterp(t3,lf[24]);
t6=t4;
f_983(t6,(C_truep(t5)?C_SCHEME_UNDEFINED:C_halt(lf[32])));}
else{
t5=t4;
f_983(t5,C_halt(lf[32]));}}

/* k981 */
static void C_fcall f_983(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_983,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_986,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_997,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_997(t6,t2,lf[10],C_SCHEME_FALSE);}

/* loop in k981 */
static void C_fcall f_997(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_997,NULL,4,t0,t1,t2,t3);}
t4=C_i_nullp(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1007,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_1007(t6,t4);}
else{
t6=C_u_i_caar(t2);
t7=t5;
f_1007(t7,C_flonum_lessp(((C_word*)t0)[4],t6));}}

/* k1005 in loop in k981 */
static void C_fcall f_1007(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1007,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[7])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_setslot(((C_word*)t0)[7],C_fix(1),t3));}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=C_mutate(&lf[10] /* (set! ##sys#timeout-list ...) */,t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm:249: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_997(t3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}}

/* k984 in k981 */
static void C_ccall f_986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[4],C_fix(3),lf[31]);
t3=C_i_set_i_slot(((C_word*)t0)[4],C_fix(13),C_SCHEME_FALSE);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_setslot(((C_word*)t0)[4],C_fix(4),((C_word*)t0)[2]));}

/* f_938 */
static void C_ccall f_938(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_938,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_944,a[2]=t2,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_944(t3,lf[10],C_SCHEME_FALSE));}

/* loop */
static C_word C_fcall f_944(C_word t0,C_word t1,C_word t2){
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
loop:
if(C_truep(C_i_nullp(t1))){
t3=t1;
return(t3);}
else{
t3=C_slot(t1,C_fix(0));
t4=C_slot(t1,C_fix(1));
t5=C_slot(t3,C_fix(1));
t6=C_eqp(t5,((C_word*)t0)[2]);
if(C_truep(t6)){
if(C_truep(t2)){
return(C_i_setslot(t2,C_fix(1),t4));}
else{
t7=C_mutate(&lf[10] /* (set! ##sys#timeout-list ...) */,t4);
return(t7);}}
else{
t10=t4;
t11=t1;
t1=t10;
t2=t11;
goto loop;}}}

/* f_913 */
static void C_ccall f_913(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_913,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_917,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(t2,C_fix(255));
if(C_truep(t5)){
t6=*((C_word*)lf[1]+1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_931,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp);
t8=C_i_setslot(t6,C_fix(1),t7);
/* scheduler.scm:221: ##sys#schedule */
t9=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t4);}
else{
/* scheduler.scm:222: oldhook */
t6=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t2,t3);}}

/* a930 */
static void C_ccall f_931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_931,2,t0,t1);}
/* scheduler.scm:220: oldhook */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k915 */
static void C_ccall f_917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:222: oldhook */
t2=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_812 */
static void C_ccall f_812(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_812,3,t0,t1,t2);}
t3=C_i_setslot(t2,C_fix(3),lf[8]);
t4=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t5=C_eqp(C_SCHEME_END_OF_LIST,lf[14]);
if(C_truep(t5)){
t6=C_mutate(&lf[14] /* (set! ready-queue-head ...) */,t4);
t7=C_mutate(&lf[15] /* (set! ready-queue-tail ...) */,t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t6=C_i_setslot(lf[15],C_fix(1),t4);
t7=C_mutate(&lf[15] /* (set! ready-queue-tail ...) */,t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* f_809 */
static void C_ccall f_809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_809,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[14]);}

/* f_579 */
static void C_ccall f_579(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_579,2,t0,t1);}
t2=*((C_word*)lf[1]+1);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_slot(t2,C_fix(3));
t6=C_slot(t2,C_fix(5));
t7=C_i_setslot(t6,C_fix(0),*((C_word*)lf[2]+1));
t8=C_i_setslot(t6,C_fix(1),*((C_word*)lf[3]+1));
t9=C_i_setslot(t6,C_fix(2),*((C_word*)lf[4]+1));
t10=C_i_setslot(t6,C_fix(3),*((C_word*)lf[5]+1));
t11=C_i_setslot(t6,C_fix(4),*((C_word*)lf[6]+1));
t12=C_i_setslot(t6,C_fix(5),*((C_word*)lf[7]+1));
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_609,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t14=C_eqp(t5,lf[9]);
t15=(C_truep(t14)?t14:C_eqp(t5,lf[8]));
if(C_truep(t15)){
t16=C_i_set_i_slot(t2,C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:119: ##sys#add-to-ready-queue */
t17=*((C_word*)lf[27]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t13,t2);}
else{
t16=t13;
f_609(2,t16,C_SCHEME_UNDEFINED);}}

/* k607 */
static void C_ccall f_609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_609,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_614,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_614(t5,((C_word*)t0)[2]);}

/* loop1 in k607 */
static void C_fcall f_614(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_614,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_618,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(lf[10]))){
t3=t2;
f_618(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=C_a_i_current_milliseconds(&a,1,C_SCHEME_FALSE);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_690,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t3,a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_690(t7,t2,lf[10]);}}

/* loop in loop1 in k607 */
static void C_fcall f_690(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_690,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=lf[10] /* timeout-list */ =C_SCHEME_END_OF_LIST;;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_u_i_caar(t2);
t4=C_u_i_cdar(t2);
t5=C_slot(t4,C_fix(4));
if(C_truep(C_i_equalp(t3,t5))){
if(C_truep(C_flonum_greater_or_equal_p(((C_word*)t0)[4],t3))){
t6=C_i_set_i_slot(t4,C_fix(13),C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_725,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:135: ##sys#clear-i/o-state-for-thread! */
f_1847(t7,t4);}
else{
t6=C_mutate(&lf[10] /* (set! ##sys#timeout-list ...) */,t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_742,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(lf[14]))){
t8=C_i_nullp(*((C_word*)lf[11]+1));
t9=t7;
f_742(t9,(C_truep(t8)?C_i_pairp(lf[10]):C_SCHEME_FALSE));}
else{
t8=t7;
f_742(t8,C_SCHEME_FALSE);}}}
else{
t6=C_slot(t2,C_fix(1));
/* scheduler.scm:155: loop */
t14=t1;
t15=t6;
t1=t14;
t2=t15;
goto loop;}}}

/* k740 in loop in loop1 in k607 */
static void C_fcall f_742(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_742,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_caar(lf[10]);
t3=C_a_i_flonum_difference(&a,2,t2,((C_word*)t0)[4]);
t4=C_quickflonumtruncate(t3);
t5=C_i_fixnum_max(C_fix(0),t4);
if(C_truep(C_msleep(t5))){
t6=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_mk_bool(C_signal_interrupted_p);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k723 in loop in loop1 in k607 */
static void C_ccall f_725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_728,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:136: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k726 in k723 in loop in loop1 in k607 */
static void C_ccall f_728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm:137: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_690(t3,((C_word*)t0)[2],t2);}

/* k616 in loop1 in k607 */
static void C_ccall f_618(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_618,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_621,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_set_i_slot(*((C_word*)lf[16]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:174: ##sys#thread-unblock! */
t4=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,*((C_word*)lf[16]+1));}
else{
if(C_truep(C_i_nullp(*((C_word*)lf[11]+1)))){
t3=C_SCHEME_UNDEFINED;
t4=t2;
f_621(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1602,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=stub370(C_SCHEME_UNDEFINED);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1378,a[2]=t6,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_1378(t8,t3,*((C_word*)lf[11]+1));}}}

/* loop in k616 in loop1 in k607 */
static void C_fcall f_1378(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1378,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_u_i_caar(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1389,a[2]=t3,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp);
t5=C_u_i_cdar(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1415,a[2]=t4,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp);
t7=f_1415(t6,t5);
t8=C_slot(t2,C_fix(1));
/* scheduler.scm:357: loop */
t11=t1;
t12=t8;
t1=t11;
t2=t12;
goto loop;}}

/* for-each-loop344 in loop in k616 in loop1 in k607 */
static C_word C_fcall f_1415(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=f_1389(((C_word*)t0)[2],t2);
t4=C_slot(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* g345 in loop in k616 in loop1 in k607 */
static C_word C_fcall f_1389(C_word t0,C_word t1){
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
t2=C_slot(t1,C_fix(11));
t3=C_slot(t2,C_fix(1));
t4=C_eqp(t3,C_SCHEME_TRUE);
t5=(C_truep(t4)?t4:C_eqp(t3,lf[20]));
if(C_truep(t5)){
return(stub374(C_SCHEME_UNDEFINED,((C_word*)t0)[2]));}
else{
t6=C_eqp(t3,C_SCHEME_FALSE);
t7=(C_truep(t6)?t6:C_eqp(t3,lf[21]));
if(C_truep(t7)){
return(stub379(C_SCHEME_UNDEFINED,((C_word*)t0)[2]));}
else{
t8=C_eqp(t3,lf[22]);
if(C_truep(t8)){
t9=stub374(C_SCHEME_UNDEFINED,((C_word*)t0)[2]);
return(stub379(C_SCHEME_UNDEFINED,((C_word*)t0)[2]));}
else{
t9=C_halt(lf[25]);
return(t9);}}}}

/* k1600 in k616 in loop1 in k607 */
static void C_ccall f_1602(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1602,2,t0,t1);}
t2=C_i_pairp(lf[10]);
t3=C_i_pairp(lf[14]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1611,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(C_truep(t2)?C_i_not(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_u_i_caar(lf[10]);
t7=C_a_i_current_milliseconds(&a,1,C_SCHEME_FALSE);
t8=C_a_i_flonum_difference(&a,2,t6,t7);
t9=t4;
f_1611(t9,C_i_flonum_max(lf[24],t8));}
else{
t6=t4;
f_1611(t6,lf[24]);}}

/* k1609 in k1600 in k616 in loop1 in k607 */
static void C_fcall f_1611(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1611,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1614,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t1;
t4=t2;
f_1614(t4,stub365(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t3));}
else{
t3=t1;
t4=t2;
f_1614(t4,stub365(C_SCHEME_UNDEFINED,((C_word*)t0)[2],t3));}}

/* k1612 in k1609 in k1600 in k616 in loop1 in k607 */
static void C_fcall f_1614(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1614,NULL,2,t0,t1);}
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
t3=C_i_set_i_slot(*((C_word*)lf[16]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:174: ##sys#thread-unblock! */
t4=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],*((C_word*)lf[16]+1));}
else{
if(C_truep(C_fixnum_greaterp(t1,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1633,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1635,a[2]=t5,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1635(t7,t3,t1,*((C_word*)lf[11]+1));}
else{
t3=((C_word*)t0)[2];
f_621(2,t3,C_SCHEME_UNDEFINED);}}}

/* loop in k1612 in k1609 in k1600 in k616 in loop1 in k607 */
static void C_fcall f_1635(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(12);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1635,NULL,4,t0,t1,t2,t3);}
t4=C_i_zerop(t2);
t5=(C_truep(t4)?t4:C_i_nullp(t3));
if(C_truep(t5)){
t6=t3;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_u_i_car(t3);
t7=C_u_i_car(t6);
t8=C_fd_test_input(t7);
t9=C_fd_test_output(t7);
t10=(C_truep(t8)?t8:t9);
if(C_truep(t10)){
t11=C_slot(t6,C_fix(1));
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1666,a[2]=t9,a[3]=t8,a[4]=t13,a[5]=t7,a[6]=((C_word*)t0)[2],a[7]=t3,a[8]=t2,a[9]=((C_word)li1),tmp=(C_word)a,a+=10,tmp));
t15=((C_word*)t13)[1];
f_1666(t15,t1,t11,C_SCHEME_END_OF_LIST);}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1818,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=C_slot(t3,C_fix(1));
/* scheduler.scm:470: loop */
t19=t11;
t20=t2;
t21=t12;
t1=t19;
t2=t20;
t3=t21;
goto loop;}}}

/* k1816 in loop in k1612 in k1609 in k1600 in k616 in loop1 in k607 */
static void C_ccall f_1818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1818,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* loop2 in loop in k1612 in k1609 in k1600 in k616 in loop1 in k607 */
static void C_fcall f_1666(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(11);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1666,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_minus(&a,2,((C_word*)t0)[8],C_fix(1));
t5=C_slot(((C_word*)t0)[7],C_fix(1));
/* scheduler.scm:443: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_1635(t6,t1,t4,t5);}
else{
t4=C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1701,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_minus(&a,2,((C_word*)t0)[8],C_fix(1));
t7=C_slot(((C_word*)t0)[7],C_fix(1));
/* scheduler.scm:444: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_1635(t8,t5,t6,t7);}}
else{
t4=C_u_i_car(t2);
t5=C_slot(t4,C_fix(11));
if(C_truep(C_slot(t4,C_fix(13)))){
t6=C_slot(t2,C_fix(1));
/* scheduler.scm:450: loop2 */
t26=t1;
t27=t6;
t28=t3;
t1=t26;
t2=t27;
t3=t28;
goto loop;}
else{
if(C_truep(C_i_pairp(t5))){
t6=C_u_i_car(t5);
t7=C_eqp(((C_word*)t0)[5],t6);
t8=C_i_not(t7);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1762,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t8)){
t10=t9;
f_1762(t10,t8);}
else{
t10=C_slot(t5,C_fix(1));
t11=C_eqp(t10,C_SCHEME_TRUE);
t12=(C_truep(t11)?t11:C_eqp(t10,lf[20]));
if(C_truep(t12)){
t13=t9;
f_1762(t13,((C_word*)t0)[3]);}
else{
t13=C_eqp(t10,C_SCHEME_FALSE);
t14=(C_truep(t13)?t13:C_eqp(t10,lf[21]));
if(C_truep(t14)){
t15=t9;
f_1762(t15,((C_word*)t0)[2]);}
else{
t15=C_eqp(t10,lf[22]);
if(C_truep(t15)){
t16=t9;
f_1762(t16,(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:((C_word*)t0)[2]));}
else{
t16=C_halt(lf[23]);
t17=t9;
f_1762(t17,t16);}}}}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1737,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(t4,C_fix(4)))){
/* scheduler.scm:455: ##sys#remove-from-timeout-list */
t7=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t7=t6;
f_1737(2,t7,C_SCHEME_UNDEFINED);}}}}}

/* k1735 in loop2 in loop in k1612 in k1609 in k1600 in k616 in loop1 in k607 */
static void C_ccall f_1737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1737,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1740,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:456: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1738 in k1735 in loop2 in loop in k1612 in k1609 in k1600 in k616 in loop1 in k607 */
static void C_ccall f_1740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
/* scheduler.scm:457: loop2 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1666(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k1760 in loop2 in loop in k1612 in k1609 in k1600 in k616 in loop1 in k607 */
static void C_fcall f_1762(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1762,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(((C_word*)t0)[2],C_fix(4)))){
/* scheduler.scm:466: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t3=t2;
f_1765(2,t3,C_SCHEME_UNDEFINED);}}
else{
t2=C_slot(((C_word*)t0)[6],C_fix(1));
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* scheduler.scm:469: loop2 */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1666(t4,((C_word*)t0)[4],t2,t3);}}

/* k1763 in k1760 in loop2 in loop in k1612 in k1609 in k1600 in k616 in loop1 in k607 */
static void C_ccall f_1765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1768,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:467: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1766 in k1763 in k1760 in loop2 in loop in k1612 in k1609 in k1600 in k616 in loop1 in k607 */
static void C_ccall f_1768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
/* scheduler.scm:468: loop2 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1666(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k1699 in loop2 in loop in k1612 in k1609 in k1600 in k616 in loop1 in k607 */
static void C_ccall f_1701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1701,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k1631 in k1612 in k1609 in k1600 in k616 in loop1 in k607 */
static void C_ccall f_1633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t1);
t3=((C_word*)t0)[2];
f_621(2,t3,t2);}

/* k619 in k616 in loop1 in k607 */
static void C_ccall f_621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_621,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_626,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_626(t5,((C_word*)t0)[2]);}

/* loop2 in k619 in k616 in loop1 in k607 */
static void C_fcall f_626(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_626,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=lf[14];
if(C_truep(C_i_nullp(t3))){
t4=t2;
f_630(t4,C_SCHEME_FALSE);}
else{
t4=C_slot(t3,C_fix(1));
t5=C_mutate(&lf[14] /* (set! ready-queue-head ...) */,t4);
t6=C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
t7=lf[15] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t8=t2;
f_630(t8,C_u_i_car(t3));}
else{
t7=t2;
f_630(t7,C_u_i_car(t3));}}}

/* k628 in loop2 in k619 in k616 in loop1 in k607 */
static void C_fcall f_630(C_word t0,C_word t1){
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
C_word *a;
t2=t1;
if(C_truep(t2)){
t3=C_slot(t1,C_fix(3));
t4=C_eqp(t3,lf[8]);
if(C_truep(t4)){
t5=((C_word*)t0)[4];
t6=t1;
t7=C_mutate((C_word*)lf[1]+1 /* (set! ##sys#current-thread ...) */,t6);
t8=C_i_setslot(t6,C_fix(3),lf[9]);
t9=C_slot(t6,C_fix(5));
t10=C_slot(t9,C_fix(0));
t11=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#dynamic-winds ...) */,t10);
t12=C_slot(t9,C_fix(1));
t13=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,t12);
t14=C_slot(t9,C_fix(2));
t15=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#standard-output ...) */,t14);
t16=C_slot(t9,C_fix(3));
t17=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#standard-error ...) */,t16);
t18=C_slot(t9,C_fix(4));
t19=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#current-exception-handler ...) */,t18);
t20=C_slot(t9,C_fix(5));
t21=C_mutate((C_word*)lf[7]+1 /* (set! ##sys#current-parameter-vector ...) */,t20);
t22=C_slot(t6,C_fix(9));
t23=C_set_initial_timer_interrupt_period(t22);
t24=C_slot(t6,C_fix(1));
/* g118119 */
t25=t24;
((C_proc2)(void*)(*((C_word*)t25+1)))(2,t25,t5);}
else{
/* scheduler.scm:169: loop2 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_626(t5,((C_word*)t0)[4]);}}
else{
if(C_truep(C_i_nullp(lf[10]))){
if(C_truep(C_i_nullp(*((C_word*)lf[11]+1)))){
/* scheduler.scm:166: ##sys#halt */
t3=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],lf[13]);}
else{
/* scheduler.scm:167: loop1 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_614(t3,((C_word*)t0)[4]);}}
else{
/* scheduler.scm:167: loop1 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_614(t3,((C_word*)t0)[4]);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[93] = {
{"toplevel:scheduler_2escm",(void*)C_scheduler_toplevel},
{"f_2113:scheduler_2escm",(void*)f_2113},
{"f_2123:scheduler_2escm",(void*)f_2123},
{"f_2126:scheduler_2escm",(void*)f_2126},
{"f_2129:scheduler_2escm",(void*)f_2129},
{"f_2094:scheduler_2escm",(void*)f_2094},
{"f_2084:scheduler_2escm",(void*)f_2084},
{"f_1922:scheduler_2escm",(void*)f_1922},
{"f_1943:scheduler_2escm",(void*)f_1943},
{"f_1970:scheduler_2escm",(void*)f_1970},
{"f_2024:scheduler_2escm",(void*)f_2024},
{"f_2042:scheduler_2escm",(void*)f_2042},
{"f_1997:scheduler_2escm",(void*)f_1997},
{"f_2015:scheduler_2escm",(void*)f_2015},
{"f_1991:scheduler_2escm",(void*)f_1991},
{"f_1961:scheduler_2escm",(void*)f_1961},
{"f_2075:scheduler_2escm",(void*)f_2075},
{"f_1847:scheduler_2escm",(void*)f_1847},
{"f_1863:scheduler_2escm",(void*)f_1863},
{"f_1908:scheduler_2escm",(void*)f_1908},
{"f_1885:scheduler_2escm",(void*)f_1885},
{"f_1861:scheduler_2escm",(void*)f_1861},
{"f_1531:scheduler_2escm",(void*)f_1531},
{"f_1550:scheduler_2escm",(void*)f_1550},
{"f_1535:scheduler_2escm",(void*)f_1535},
{"f_1310:scheduler_2escm",(void*)f_1310},
{"f_1347:scheduler_2escm",(void*)f_1347},
{"f_1350:scheduler_2escm",(void*)f_1350},
{"f_1353:scheduler_2escm",(void*)f_1353},
{"f_1356:scheduler_2escm",(void*)f_1356},
{"f_1366:scheduler_2escm",(void*)f_1366},
{"f_1359:scheduler_2escm",(void*)f_1359},
{"f_1334:scheduler_2escm",(void*)f_1334},
{"f_1338:scheduler_2escm",(void*)f_1338},
{"f_1314:scheduler_2escm",(void*)f_1314},
{"f_1320:scheduler_2escm",(void*)f_1320},
{"f_1298:scheduler_2escm",(void*)f_1298},
{"f_1184:scheduler_2escm",(void*)f_1184},
{"f_1161:scheduler_2escm",(void*)f_1161},
{"f_1135:scheduler_2escm",(void*)f_1135},
{"f_1145:scheduler_2escm",(void*)f_1145},
{"f_1119:scheduler_2escm",(void*)f_1119},
{"f_1188:scheduler_2escm",(void*)f_1188},
{"f_1292:scheduler_2escm",(void*)f_1292},
{"f_1275:scheduler_2escm",(void*)f_1275},
{"f_1194:scheduler_2escm",(void*)f_1194},
{"f_1197:scheduler_2escm",(void*)f_1197},
{"f_1200:scheduler_2escm",(void*)f_1200},
{"f_1244:scheduler_2escm",(void*)f_1244},
{"f_1254:scheduler_2escm",(void*)f_1254},
{"f_1225:scheduler_2escm",(void*)f_1225},
{"f_1218:scheduler_2escm",(void*)f_1218},
{"f_1054:scheduler_2escm",(void*)f_1054},
{"f_979:scheduler_2escm",(void*)f_979},
{"f_983:scheduler_2escm",(void*)f_983},
{"f_997:scheduler_2escm",(void*)f_997},
{"f_1007:scheduler_2escm",(void*)f_1007},
{"f_986:scheduler_2escm",(void*)f_986},
{"f_938:scheduler_2escm",(void*)f_938},
{"f_944:scheduler_2escm",(void*)f_944},
{"f_913:scheduler_2escm",(void*)f_913},
{"f_931:scheduler_2escm",(void*)f_931},
{"f_917:scheduler_2escm",(void*)f_917},
{"f_812:scheduler_2escm",(void*)f_812},
{"f_809:scheduler_2escm",(void*)f_809},
{"f_579:scheduler_2escm",(void*)f_579},
{"f_609:scheduler_2escm",(void*)f_609},
{"f_614:scheduler_2escm",(void*)f_614},
{"f_690:scheduler_2escm",(void*)f_690},
{"f_742:scheduler_2escm",(void*)f_742},
{"f_725:scheduler_2escm",(void*)f_725},
{"f_728:scheduler_2escm",(void*)f_728},
{"f_618:scheduler_2escm",(void*)f_618},
{"f_1378:scheduler_2escm",(void*)f_1378},
{"f_1415:scheduler_2escm",(void*)f_1415},
{"f_1389:scheduler_2escm",(void*)f_1389},
{"f_1602:scheduler_2escm",(void*)f_1602},
{"f_1611:scheduler_2escm",(void*)f_1611},
{"f_1614:scheduler_2escm",(void*)f_1614},
{"f_1635:scheduler_2escm",(void*)f_1635},
{"f_1818:scheduler_2escm",(void*)f_1818},
{"f_1666:scheduler_2escm",(void*)f_1666},
{"f_1737:scheduler_2escm",(void*)f_1737},
{"f_1740:scheduler_2escm",(void*)f_1740},
{"f_1762:scheduler_2escm",(void*)f_1762},
{"f_1765:scheduler_2escm",(void*)f_1765},
{"f_1768:scheduler_2escm",(void*)f_1768},
{"f_1701:scheduler_2escm",(void*)f_1701},
{"f_1633:scheduler_2escm",(void*)f_1633},
{"f_621:scheduler_2escm",(void*)f_621},
{"f_626:scheduler_2escm",(void*)f_626},
{"f_630:scheduler_2escm",(void*)f_630},
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
