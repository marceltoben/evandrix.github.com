/* Generated from tcp.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: tcp.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file tcp.c
   unit: tcp
*/

#include "chicken.h"

#include <errno.h>
#ifdef _WIN32
# if (defined(HAVE_WINSOCK2_H) && defined(HAVE_WS2TCPIP_H))
#  include <winsock2.h>
#  include <ws2tcpip.h>
# else
#  include <winsock.h>
# endif
/* Beware: winsock2.h must come BEFORE windows.h */
# define socklen_t       int
static WSADATA wsa;
# define fcntl(a, b, c)  0
# define EWOULDBLOCK     0
# define EINPROGRESS     0
# define typecorrect_getsockopt(socket, level, optname, optval, optlen)	\
    getsockopt(socket, level, optname, (char *)optval, optlen)
#else
# include <fcntl.h>
# include <sys/types.h>
# include <sys/socket.h>
# include <sys/time.h>
# include <netinet/in.h>
# include <unistd.h>
# include <netdb.h>
# include <signal.h>
# define closesocket     close
# define INVALID_SOCKET  -1
# define typecorrect_getsockopt getsockopt
#endif

#ifndef SD_RECEIVE
# define SD_RECEIVE      0
# define SD_SEND         1
#endif

#ifdef ECOS
#include <sys/sockio.h>
#endif

#ifndef h_addr
# define h_addr  h_addr_list[ 0 ]
#endif

static char addr_buffer[ 20 ];

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[99];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,43),40,35,35,110,101,116,35,103,101,116,104,111,115,116,97,100,100,114,32,97,50,48,54,50,49,49,32,97,50,48,53,50,49,50,32,97,50,48,52,50,49,51,41,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,6),40,97,57,49,51,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,16),40,97,57,48,52,32,114,101,116,117,114,110,50,49,55,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,7),40,121,105,101,108,100,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,7),40,97,49,49,50,51,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,32),40,97,49,49,50,57,32,115,50,56,52,50,56,53,50,56,56,32,97,100,100,114,50,56,54,50,56,55,50,56,57,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,22),40,98,111,100,121,50,55,50,32,119,50,56,50,32,104,111,115,116,50,56,51,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,22),40,100,101,102,45,104,111,115,116,50,55,53,32,37,119,50,55,48,50,57,55,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,10),40,100,101,102,45,119,50,55,52,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,26),40,102,95,49,49,49,54,32,112,111,114,116,50,54,56,32,46,32,109,111,114,101,50,54,57,41,0,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,13),40,102,95,49,50,49,52,32,120,51,48,53,41,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,16),40,102,95,49,50,50,51,32,116,99,112,108,51,48,56,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,13),40,102,95,49,50,54,54,32,120,51,50,48,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,14),40,99,104,101,99,107,32,108,111,99,51,49,57,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,12),40,114,101,97,100,45,105,110,112,117,116,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,101,110,52,50,53,32,111,102,102,115,101,116,52,50,54,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,13),40,111,117,116,112,117,116,32,115,52,50,51,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,13),40,102,95,49,53,57,54,32,115,52,52,50,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,13),40,102,95,49,54,49,54,32,115,52,52,53,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,7),40,97,49,53,49,54,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,8),40,102,95,49,53,56,48,41};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,7),40,97,49,54,51,49,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,97,49,54,53,51,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,7),40,97,49,54,56,56,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,7),40,97,49,55,51,49,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,110,51,56,48,32,109,51,56,49,32,115,116,97,114,116,51,56,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,34),40,97,49,55,52,57,32,112,51,55,53,32,110,51,55,54,32,100,101,115,116,51,55,55,32,115,116,97,114,116,51,55,56,41,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,23),40,97,49,56,52,48,32,112,111,115,50,52,48,48,32,110,101,120,116,52,48,49,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,115,116,114,51,57,53,32,108,105,109,105,116,51,57,54,41,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,21),40,97,49,56,49,52,32,112,51,57,50,32,108,105,109,105,116,51,57,51,41,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,12),40,97,49,57,50,54,32,112,52,49,57,41,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,22),40,35,35,110,101,116,35,105,111,45,112,111,114,116,115,32,102,100,51,50,57,41,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,16),40,102,95,49,57,54,51,32,116,99,112,108,52,54,51,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,16),40,102,95,50,48,52,57,32,116,99,112,108,52,55,55,41};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,6),40,102,97,105,108,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,50,50,54,41,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,7),40,97,50,51,50,53,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,29),40,97,50,51,51,49,32,104,111,115,116,53,48,51,53,48,53,32,112,111,114,116,53,48,52,53,48,54,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,26),40,102,95,50,49,48,51,32,104,111,115,116,52,57,52,32,46,32,109,111,114,101,52,57,53,41,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,13),40,102,95,50,51,53,54,32,112,53,52,48,41,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,13),40,102,95,50,51,55,52,32,112,53,52,51,41,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,13),40,102,95,50,52,50,50,32,112,53,53,51,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,16),40,102,95,50,52,55,48,32,116,99,112,108,53,54,51,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,13),40,102,95,50,52,57,57,32,112,53,54,57,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,13),40,102,95,50,53,49,57,32,108,53,55,50,41,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k2099 */
static C_word C_fcall stub489(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub489(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub484(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub484(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int socket=(int )C_unfix(C_a0);
int err, optlen;optlen = sizeof(err);if (typecorrect_getsockopt(socket, SOL_SOCKET, SO_ERROR, &err, (socklen_t *)&optlen) == -1)C_return(-1);C_return(err);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub254(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub254(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int socket=(int )C_unfix(C_a0);
int yes = 1; 
                      C_return(setsockopt(socket, SOL_SOCKET, SO_REUSEADDR, (const char *)&yes, sizeof(int)));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub236(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub236(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer_or_null(C_a0);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a1);
struct sockaddr_in *addr = (struct sockaddr_in *)saddr;memset(addr, 0, sizeof(struct sockaddr_in));addr->sin_family = AF_INET;addr->sin_port = htons(port);addr->sin_addr.s_addr = htonl(INADDR_ANY);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub207(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub207(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer_or_null(C_a0);
char * host=(char * )C_string_or_null(C_a1);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a2);
struct hostent *he = gethostbyname(host);struct sockaddr_in *addr = (struct sockaddr_in *)saddr;if(he == NULL) C_return(0);memset(addr, 0, sizeof(struct sockaddr_in));addr->sin_family = AF_INET;addr->sin_port = htons((short)port);addr->sin_addr = *((struct in_addr *)he->h_addr);C_return(1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub200(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub200(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
fd_set out;
     struct timeval tm;
     int rv;
     FD_ZERO(&out);
     FD_SET(fd, &out);
     tm.tv_sec = tm.tv_usec = 0;
     rv = select(fd + 1, NULL, &out, NULL, &tm);
     if(rv > 0) { rv = FD_ISSET(fd, &out) ? 1 : 0; }
     C_return(rv);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub195(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub195(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
fd_set in;
     struct timeval tm;
     int rv;
     FD_ZERO(&in);
     FD_SET(fd, &in);
     tm.tv_sec = tm.tv_usec = 0;
     rv = select(fd + 1, &in, NULL, NULL, &tm);
     if(rv > 0) { rv = FD_ISSET(fd, &in) ? 1 : 0; }
     C_return(rv);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub185(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub185(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * serv=(char * )C_string_or_null(C_a0);
char * proto=(char * )C_string_or_null(C_a1);
struct servent *se;
     if((se = getservbyname(serv, proto)) == NULL) C_return(0);
     else C_return(ntohs(se->s_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub180(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub180(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
#ifdef _WIN32
     C_return(WSAStartup(MAKEWORD(1, 1), &wsa) == 0);
#else
     signal(SIGPIPE, SIG_IGN);
     C_return(1);
#endif
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub175(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub175(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;unsigned char *ptr;unsigned int len = sizeof(struct sockaddr_in);if(getpeername(s, (struct sockaddr *)&sa, ((unsigned int *)&len)) != 0) C_return(NULL);ptr = (unsigned char *)&sa.sin_addr;sprintf(addr_buffer, "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);C_return(addr_buffer);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub170(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub170(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;int len = sizeof(struct sockaddr_in);if(getpeername(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) C_return(-1);else C_return(ntohs(sa.sin_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub165(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub165(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;int len = sizeof(struct sockaddr_in);if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) C_return(-1);else C_return(ntohs(sa.sin_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub159(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub159(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;unsigned char *ptr;int len = sizeof(struct sockaddr_in);if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)&len) != 0) C_return(NULL);ptr = (unsigned char *)&sa.sin_addr;sprintf(addr_buffer, "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);C_return(addr_buffer);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub154(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub154(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
int val = fcntl(fd, F_GETFL, 0);if(val == -1) C_return(0);C_return(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub143(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub143(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
void * msg=(void * )C_data_pointer_or_null(C_a1);
int offset=(int )C_unfix(C_a2);
int len=(int )C_unfix(C_a3);
int flags=(int )C_unfix(C_a4);
C_return(send(s, (char *)msg+offset, len, flags));
C_ret:
#undef return

return C_r;}

/* from k753 */
static C_word C_fcall stub130(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub130(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)connect(t0,t1,t2));
return C_r;}

/* from k738 */
static C_word C_fcall stub122(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub122(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)shutdown(t0,t1));
return C_r;}

/* from k724 */
static C_word C_fcall stub111(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub111(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
C_r=C_fix((C_word)recv(t0,t1,t2,t3));
return C_r;}

/* from k705 */
static C_word C_fcall stub103(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub103(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)closesocket(t0));
return C_r;}

/* from k692 */
static C_word C_fcall stub92(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub92(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
C_r=C_fix((C_word)accept(t0,t1,t2));
return C_r;}

/* from k677 */
static C_word C_fcall stub84(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub84(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)listen(t0,t1));
return C_r;}

/* from k663 */
static C_word C_fcall stub74(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub74(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)bind(t0,t1,t2));
return C_r;}

/* from k648 */
static C_word C_fcall stub65(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub65(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)socket(t0,t1,t2));
return C_r;}

C_noret_decl(C_tcp_toplevel)
C_externexport void C_ccall C_tcp_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_629)
static void C_ccall f_629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_632)
static void C_ccall f_632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_635)
static void C_ccall f_635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_833)
static void C_ccall f_833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1258)
static void C_ccall f_1258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2542)
static void C_ccall f_2542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1281)
static void C_ccall f_1281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2538)
static void C_ccall f_2538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1285)
static void C_ccall f_1285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2534)
static void C_ccall f_2534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1289)
static void C_ccall f_1289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1293)
static void C_ccall f_1293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2519)
static void C_ccall f_2519(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2499)
static void C_ccall f_2499(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2503)
static void C_ccall f_2503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2510)
static void C_ccall f_2510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2470)
static void C_ccall f_2470(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2497)
static void C_ccall f_2497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2483)
static void C_ccall f_2483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2422)
static void C_ccall f_2422(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2426)
static void C_ccall f_2426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2468)
static void C_ccall f_2468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2464)
static void C_ccall f_2464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2457)
static void C_ccall f_2457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2453)
static void C_ccall f_2453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2374)
static void C_ccall f_2374(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2378)
static void C_ccall f_2378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2381)
static void C_ccall f_2381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2388)
static void C_ccall f_2388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2391)
static void C_ccall f_2391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2395)
static void C_ccall f_2395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2409)
static void C_ccall f_2409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2405)
static void C_ccall f_2405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2398)
static void C_ccall f_2398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2356)
static void C_ccall f_2356(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2360)
static void C_ccall f_2360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2103)
static void C_ccall f_2103(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2103)
static void C_ccall f_2103r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2107)
static void C_ccall f_2107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2110)
static void C_ccall f_2110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2332)
static void C_ccall f_2332(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2326)
static void C_ccall f_2326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_929)
static void C_fcall f_929(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_952)
static void C_ccall f_952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_956)
static void C_ccall f_956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_840)
static void C_ccall f_840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_844)
static void C_ccall f_844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_968)
static void C_ccall f_968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_979)
static void C_ccall f_979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_975)
static void C_ccall f_975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_962)
static void C_ccall f_962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2318)
static void C_ccall f_2318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2116)
static void C_ccall f_2116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2122)
static void C_ccall f_2122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2315)
static void C_ccall f_2315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2311)
static void C_ccall f_2311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2148)
static void C_ccall f_2148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2295)
static void C_ccall f_2295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2151)
static void C_ccall f_2151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2292)
static void C_ccall f_2292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2288)
static void C_ccall f_2288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2154)
static void C_ccall f_2154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2217)
static void C_fcall f_2217(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2224)
static void C_ccall f_2224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2262)
static void C_ccall f_2262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2233)
static void C_ccall f_2233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2236)
static void C_ccall f_2236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2242)
static void C_ccall f_2242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2157)
static void C_ccall f_2157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2203)
static void C_ccall f_2203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2199)
static void C_ccall f_2199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2179)
static void C_ccall f_2179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2163)
static void C_ccall f_2163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2127)
static void C_fcall f_2127(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2134)
static void C_ccall f_2134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2145)
static void C_ccall f_2145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2141)
static void C_ccall f_2141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2049)
static void C_ccall f_2049(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2068)
static void C_ccall f_2068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2079)
static void C_ccall f_2079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2075)
static void C_ccall f_2075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2059)
static void C_ccall f_2059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1963)
static void C_ccall f_1963(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1973)
static void C_ccall f_1973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1978)
static void C_fcall f_1978(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2043)
static void C_ccall f_2043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2014)
static void C_ccall f_2014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2017)
static void C_ccall f_2017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2023)
static void C_ccall f_2023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2000)
static void C_ccall f_2000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2011)
static void C_ccall f_2011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2007)
static void C_ccall f_2007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1991)
static void C_ccall f_1991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1295)
static void C_fcall f_1295(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1961)
static void C_ccall f_1961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1957)
static void C_ccall f_1957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1299)
static void C_ccall f_1299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1302)
static void C_ccall f_1302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1308)
static void C_ccall f_1308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1311)
static void C_fcall f_1311(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1927)
static void C_ccall f_1927(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1937)
static void C_ccall f_1937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1815)
static void C_ccall f_1815(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1825)
static void C_fcall f_1825(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1848)
static void C_ccall f_1848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1886)
static void C_ccall f_1886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1756)
static void C_fcall f_1756(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1804)
static void C_ccall f_1804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1732)
static void C_ccall f_1732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1736)
static void C_ccall f_1736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1697)
static void C_fcall f_1697(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1703)
static void C_fcall f_1703(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1706)
static void C_ccall f_1706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1717)
static void C_ccall f_1717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1713)
static void C_ccall f_1713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1654)
static void C_ccall f_1654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1676)
static void C_ccall f_1676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1687)
static void C_ccall f_1687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1667)
static void C_ccall f_1667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1632)
static void C_ccall f_1632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1636)
static void C_ccall f_1636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1394)
static void C_ccall f_1394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1580)
static void C_ccall f_1580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1590)
static void C_ccall f_1590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1517)
static void C_ccall f_1517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1564)
static void C_fcall f_1564(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1567)
static void C_ccall f_1567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1525)
static void C_fcall f_1525(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1528)
static void C_fcall f_1528(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1534)
static void C_fcall f_1534(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1548)
static void C_ccall f_1548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1544)
static void C_ccall f_1544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1616)
static void C_ccall f_1616(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1596)
static void C_ccall f_1596(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1610)
static void C_ccall f_1610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1490)
static void C_ccall f_1490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1505)
static void C_ccall f_1505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1508)
static void C_ccall f_1508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1395)
static void C_fcall f_1395(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1405)
static void C_fcall f_1405(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1459)
static void C_ccall f_1459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1470)
static void C_ccall f_1470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1466)
static void C_ccall f_1466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1456)
static void C_ccall f_1456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1430)
static void C_ccall f_1430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1433)
static void C_ccall f_1433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1436)
static void C_ccall f_1436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1318)
static void C_fcall f_1318(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1324)
static void C_fcall f_1324(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1375)
static void C_ccall f_1375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1386)
static void C_ccall f_1386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1382)
static void C_ccall f_1382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1372)
static void C_ccall f_1372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1343)
static void C_ccall f_1343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1346)
static void C_ccall f_1346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1349)
static void C_ccall f_1349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1352)
static void C_ccall f_1352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1264)
static void C_fcall f_1264(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1223)
static void C_ccall f_1223(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1239)
static void C_ccall f_1239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1246)
static void C_ccall f_1246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1214)
static void C_ccall f_1214(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1116)
static void C_ccall f_1116(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1116)
static void C_ccall f_1116r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1166)
static void C_fcall f_1166(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1161)
static void C_fcall f_1161(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1118)
static void C_fcall f_1118(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1130)
static void C_ccall f_1130(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1160)
static void C_ccall f_1160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1156)
static void C_ccall f_1156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1140)
static void C_ccall f_1140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1124)
static void C_ccall f_1124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1099)
static void C_ccall f_1099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1019)
static void C_ccall f_1019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1072)
static void C_ccall f_1072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1083)
static void C_ccall f_1083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1079)
static void C_ccall f_1079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1022)
static void C_ccall f_1022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1025)
static void C_ccall f_1025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1060)
static void C_ccall f_1060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1028)
static void C_ccall f_1028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1043)
static void C_ccall f_1043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1054)
static void C_ccall f_1054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1050)
static void C_ccall f_1050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1034)
static void C_ccall f_1034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_899)
static void C_fcall f_899(C_word t0) C_noret;
C_noret_decl(f_905)
static void C_ccall f_905(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_914)
static void C_ccall f_914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_874)
static void C_fcall f_874(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_883)
static void C_ccall f_883(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_929)
static void C_fcall trf_929(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_929(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_929(t0,t1,t2);}

C_noret_decl(trf_2217)
static void C_fcall trf_2217(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2217(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2217(t0,t1);}

C_noret_decl(trf_2127)
static void C_fcall trf_2127(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2127(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2127(t0,t1);}

C_noret_decl(trf_1978)
static void C_fcall trf_1978(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1978(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1978(t0,t1);}

C_noret_decl(trf_1295)
static void C_fcall trf_1295(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1295(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1295(t0,t1,t2);}

C_noret_decl(trf_1311)
static void C_fcall trf_1311(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1311(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1311(t0,t1);}

C_noret_decl(trf_1825)
static void C_fcall trf_1825(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1825(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1825(t0,t1,t2,t3);}

C_noret_decl(trf_1756)
static void C_fcall trf_1756(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1756(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1756(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1697)
static void C_fcall trf_1697(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1697(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1697(t0,t1);}

C_noret_decl(trf_1703)
static void C_fcall trf_1703(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1703(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1703(t0,t1);}

C_noret_decl(trf_1564)
static void C_fcall trf_1564(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1564(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1564(t0,t1);}

C_noret_decl(trf_1525)
static void C_fcall trf_1525(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1525(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1525(t0,t1);}

C_noret_decl(trf_1528)
static void C_fcall trf_1528(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1528(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1528(t0,t1);}

C_noret_decl(trf_1534)
static void C_fcall trf_1534(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1534(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1534(t0,t1);}

C_noret_decl(trf_1395)
static void C_fcall trf_1395(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1395(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1395(t0,t1,t2);}

C_noret_decl(trf_1405)
static void C_fcall trf_1405(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1405(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1405(t0,t1,t2,t3);}

C_noret_decl(trf_1318)
static void C_fcall trf_1318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1318(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1318(t0,t1);}

C_noret_decl(trf_1324)
static void C_fcall trf_1324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1324(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1324(t0,t1);}

C_noret_decl(trf_1264)
static void C_fcall trf_1264(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1264(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1264(t0,t1);}

C_noret_decl(trf_1166)
static void C_fcall trf_1166(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1166(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1166(t0,t1);}

C_noret_decl(trf_1161)
static void C_fcall trf_1161(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1161(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1161(t0,t1,t2);}

C_noret_decl(trf_1118)
static void C_fcall trf_1118(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1118(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1118(t0,t1,t2,t3);}

C_noret_decl(trf_899)
static void C_fcall trf_899(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_899(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_899(t0);}

C_noret_decl(trf_874)
static void C_fcall trf_874(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_874(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_874(t0,t1,t2,t3);}

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
C_tcp_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_tcp_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("tcp_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(500)){
C_save(t1);
C_rereclaim2(500*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,99);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[3]=C_h_intern(&lf[3],17,"\003sysmake-c-string");
lf[5]=C_h_intern(&lf[5],18,"\003syscurrent-thread");
lf[6]=C_h_intern(&lf[6],12,"\003sysschedule");
lf[7]=C_h_intern(&lf[7],10,"tcp-listen");
lf[8]=C_h_intern(&lf[8],15,"\003syssignal-hook");
lf[9]=C_h_intern(&lf[9],14,"\000network-error");
lf[10]=C_h_intern(&lf[10],17,"\003sysstring-append");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot bind to socket - ");
lf[12]=C_h_intern(&lf[12],17,"\003syspeek-c-string");
lf[13]=C_h_intern(&lf[13],16,"\003sysupdate-errno");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\042getting listener host IP failed - ");
lf[15]=C_h_intern(&lf[15],11,"make-string");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000 error while setting up socket - ");
lf[17]=C_h_intern(&lf[17],9,"\003syserror");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot create socket");
lf[19]=C_h_intern(&lf[19],13,"\000domain-error");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid port number");
lf[21]=C_h_intern(&lf[21],12,"tcp-listener");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\032cannot listen on socket - ");
lf[23]=C_h_intern(&lf[23],13,"tcp-listener\077");
lf[24]=C_h_intern(&lf[24],9,"tcp-close");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000\032cannot close TCP socket - ");
lf[26]=C_h_intern(&lf[26],15,"tcp-buffer-size");
lf[27]=C_h_intern(&lf[27],16,"tcp-read-timeout");
lf[28]=C_h_intern(&lf[28],17,"tcp-write-timeout");
lf[29]=C_h_intern(&lf[29],19,"tcp-connect-timeout");
lf[30]=C_h_intern(&lf[30],18,"tcp-accept-timeout");
lf[32]=C_h_intern(&lf[32],22,"\000network-timeout-error");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\030read operation timed out");
lf[34]=C_h_intern(&lf[34],25,"\003systhread-block-for-i/o!");
lf[35]=C_h_intern(&lf[35],6,"\000input");
lf[36]=C_h_intern(&lf[36],29,"\003systhread-block-for-timeout!");
lf[37]=C_h_intern(&lf[37],20,"current-milliseconds");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\032cannot read from socket - ");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\031write operation timed out");
lf[40]=C_h_intern(&lf[40],7,"\000output");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot write to socket - ");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\005(tcp)");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\005(tcp)");
lf[44]=C_h_intern(&lf[44],6,"socket");
lf[45]=C_h_intern(&lf[45],18,"\003sysset-port-data!");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot close socket output port - ");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[50]=C_h_intern(&lf[50],16,"make-output-port");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000 cannot check socket for input - ");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000!cannot close socket input port - ");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[54]=C_h_intern(&lf[54],15,"\003sysmake-string");
lf[55]=C_h_intern(&lf[55],20,"\003sysscan-buffer-line");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[58]=C_h_intern(&lf[58],13,"\003syssubstring");
lf[59]=C_h_intern(&lf[59],15,"make-input-port");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\032cannot create TCP ports - ");
lf[62]=C_h_intern(&lf[62],10,"tcp-accept");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000!could not accept from listener - ");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\032accept operation timed out");
lf[65]=C_h_intern(&lf[65],17,"tcp-accept-ready\077");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000 cannot check socket for input - ");
lf[67]=C_h_intern(&lf[67],11,"tcp-connect");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot connect to socket - ");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\026getsockopt() failed - ");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create socket - ");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\033connect operation timed out");
lf[72]=C_h_intern(&lf[72],4,"\000all");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\021fcntl() failed - ");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot find host address");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create socket - ");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\021no port specified");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000#cannot compute port from service - ");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\003tcp");
lf[79]=C_h_intern(&lf[79],9,"substring");
lf[80]=C_h_intern(&lf[80],20,"\003systcp-port->fileno");
lf[81]=C_h_intern(&lf[81],5,"error");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000)argument does not appear to be a TCP port");
lf[83]=C_h_intern(&lf[83],13,"\003sysport-data");
lf[84]=C_h_intern(&lf[84],13,"tcp-addresses");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000 cannot compute remote address - ");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot compute local address - ");
lf[87]=C_h_intern(&lf[87],14,"\003syscheck-port");
lf[88]=C_h_intern(&lf[88],16,"tcp-port-numbers");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot compute remote port - ");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot compute local port - ");
lf[91]=C_h_intern(&lf[91],17,"tcp-listener-port");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\036cannot obtain listener port - ");
lf[93]=C_h_intern(&lf[93],16,"tcp-abandon-port");
lf[94]=C_h_intern(&lf[94],19,"tcp-listener-fileno");
lf[95]=C_h_intern(&lf[95],14,"make-parameter");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot initialize Winsock");
lf[97]=C_h_intern(&lf[97],17,"register-feature!");
lf[98]=C_h_intern(&lf[98],3,"tcp");
C_register_lf2(lf,99,create_ptable());
t2=C_mutate(&lf[0] /* (set! c303 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_629,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k627 */
static void C_ccall f_629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_629,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_632,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k630 in k627 */
static void C_ccall f_632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_632,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_635,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:84: register-feature! */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[97]+1)))(3,*((C_word*)lf[97]+1),t2,lf[98]);}

/* k633 in k630 in k627 */
static void C_ccall f_635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_635,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_833,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(stub180(C_SCHEME_UNDEFINED))){
t3=t2;
f_833(2,t3,C_SCHEME_UNDEFINED);}
else{
/* tcp.scm:170: ##sys#signal-hook */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t2,lf[9],lf[96]);}}

/* k831 in k633 in k630 in k627 */
static void C_ccall f_833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_833,2,t0,t1);}
t2=C_mutate(&lf[2] /* (set! ##net#gethostaddr ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_874,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[4] /* (set! yield ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_899,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[7]+1 /* (set! tcp-listen ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1116,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[23]+1 /* (set! tcp-listener? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1214,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[24]+1 /* (set! tcp-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1223,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1258,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:312: make-parameter */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(3,*((C_word*)lf[95]+1),t7,C_SCHEME_FALSE);}

/* k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1258(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1258,2,t0,t1);}
t2=C_mutate((C_word*)lf[26]+1 /* (set! tcp-buffer-size ...) */,t1);
t3=C_set_block_item(lf[27] /* tcp-read-timeout */,0,C_SCHEME_UNDEFINED);
t4=C_set_block_item(lf[28] /* tcp-write-timeout */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[29] /* tcp-connect-timeout */,0,C_SCHEME_UNDEFINED);
t6=C_set_block_item(lf[30] /* tcp-accept-timeout */,0,C_SCHEME_UNDEFINED);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1264,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1281,a[2]=t7,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2542,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:323: check */
f_1264(t9,lf[27]);}

/* k2540 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_2542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:323: make-parameter */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(4,*((C_word*)lf[95]+1),((C_word*)t0)[2],C_fix(60000),t1);}

/* k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1281,2,t0,t1);}
t2=C_mutate((C_word*)lf[27]+1 /* (set! tcp-read-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1285,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2538,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:324: check */
f_1264(t4,lf[28]);}

/* k2536 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_2538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:324: make-parameter */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(4,*((C_word*)lf[95]+1),((C_word*)t0)[2],C_fix(60000),t1);}

/* k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1285,2,t0,t1);}
t2=C_mutate((C_word*)lf[28]+1 /* (set! tcp-write-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2534,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:325: check */
f_1264(t4,lf[29]);}

/* k2532 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_2534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:325: make-parameter */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(4,*((C_word*)lf[95]+1),((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1289,2,t0,t1);}
t2=C_mutate((C_word*)lf[29]+1 /* (set! tcp-connect-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1293,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2530,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:326: check */
f_1264(t4,lf[30]);}

/* k2528 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_2530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:326: make-parameter */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[95]+1)))(4,*((C_word*)lf[95]+1),((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1293(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1293,2,t0,t1);}
t2=C_mutate((C_word*)lf[30]+1 /* (set! tcp-accept-timeout ...) */,t1);
t3=*((C_word*)lf[26]+1);
t4=C_mutate(&lf[31] /* (set! ##net#io-ports ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1295,a[2]=t3,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[62]+1 /* (set! tcp-accept ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1963,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[65]+1 /* (set! tcp-accept-ready? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2049,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[67]+1 /* (set! tcp-connect ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2103,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[80]+1 /* (set! ##sys#tcp-port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2356,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[84]+1 /* (set! tcp-addresses ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2374,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[88]+1 /* (set! tcp-port-numbers ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2422,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[91]+1 /* (set! tcp-listener-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2470,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[93]+1 /* (set! tcp-abandon-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2499,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[94]+1 /* (set! tcp-listener-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2519,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t14=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_UNDEFINED);}

/* f_2519 in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_2519(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2519,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[21],lf[94]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f_2499 in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_2499(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2499,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2503,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:668: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[87]+1)))(4,*((C_word*)lf[87]+1),t3,t2,lf[93]);}

/* k2501 */
static void C_ccall f_2503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2503,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:670: ##sys#port-data */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(3,*((C_word*)lf[83]+1),t2,((C_word*)t0)[3]);}

/* k2508 in k2501 */
static void C_ccall f_2510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[3],C_fix(1));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_i_set_i_slot(t1,C_fix(1),C_SCHEME_TRUE):C_i_set_i_slot(t1,C_fix(2),C_SCHEME_TRUE)));}

/* f_2470 in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_2470(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2470,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[21],lf[91]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=stub165(C_SCHEME_UNDEFINED,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2483,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(C_fix(-1),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2493,a[2]=t4,a[3]=t2,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2497,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t11=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t6);}}

/* k2495 */
static void C_ccall f_2497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:663: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[92],t1);}

/* k2491 */
static void C_ccall f_2493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:662: ##sys#signal-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(7,*((C_word*)lf[8]+1),((C_word*)t0)[4],lf[9],lf[91],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2481 */
static void C_ccall f_2483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2422 in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_2422(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2422,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2426,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:645: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[87]+1)))(4,*((C_word*)lf[87]+1),t3,t2,lf[88]);}

/* k2424 */
static void C_ccall f_2426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2426,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2429,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:646: ##sys#tcp-port->fileno */
t3=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2427 in k2424 */
static void C_ccall f_2429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2429,2,t0,t1);}
t2=t1;
t3=C_i_foreign_fixnum_argumentp(t2);
t4=stub165(C_SCHEME_UNDEFINED,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_2439(2,t6,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2464,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2468,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k2466 in k2427 in k2424 */
static void C_ccall f_2468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:651: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[90],t1);}

/* k2462 in k2427 in k2424 */
static void C_ccall f_2464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:649: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(6,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],lf[88],t1,((C_word*)t0)[2]);}

/* k2437 in k2427 in k2424 */
static void C_ccall f_2439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2439,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=C_i_foreign_fixnum_argumentp(t2);
t4=stub170(C_SCHEME_UNDEFINED,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2446,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* tcp.scm:647: values */
C_values(4,0,((C_word*)t0)[3],t1,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2453,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2457,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k2455 in k2437 in k2427 in k2424 */
static void C_ccall f_2457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:655: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[89],t1);}

/* k2451 in k2437 in k2427 in k2424 */
static void C_ccall f_2453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:653: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(6,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],lf[88],t1,((C_word*)t0)[2]);}

/* k2444 in k2437 in k2427 in k2424 */
static void C_ccall f_2446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:647: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_2374 in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_2374(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2374,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2378,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:632: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[87]+1)))(4,*((C_word*)lf[87]+1),t3,t2,lf[84]);}

/* k2376 */
static void C_ccall f_2378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2378,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2381,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:633: ##sys#tcp-port->fileno */
t3=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2379 in k2376 */
static void C_ccall f_2381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2388,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=t1;
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
t6=stub159(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,C_fix(0));}

/* k2386 in k2379 in k2376 */
static void C_ccall f_2388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_2391(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2416,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2420,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k2418 in k2386 in k2379 in k2376 */
static void C_ccall f_2420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:638: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[86],t1);}

/* k2414 in k2386 in k2379 in k2376 */
static void C_ccall f_2416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:636: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(6,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],lf[84],t1,((C_word*)t0)[2]);}

/* k2389 in k2386 in k2379 in k2376 */
static void C_ccall f_2391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2391,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2395,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
t6=stub175(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,C_fix(0));}

/* k2393 in k2389 in k2386 in k2379 in k2376 */
static void C_ccall f_2395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2395,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2398,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t1;
/* tcp.scm:634: values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2405,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2409,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k2407 in k2393 in k2389 in k2386 in k2379 in k2376 */
static void C_ccall f_2409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:642: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[85],t1);}

/* k2403 in k2393 in k2389 in k2386 in k2379 in k2376 */
static void C_ccall f_2405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:640: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(6,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],lf[84],t1,((C_word*)t0)[2]);}

/* k2396 in k2393 in k2389 in k2386 in k2379 in k2376 */
static void C_ccall f_2398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:634: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_2356 in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_2356(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2356,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2360,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:626: ##sys#port-data */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(3,*((C_word*)lf[83]+1),t3,t2);}

/* k2358 */
static void C_ccall f_2360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_vectorp(t1))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(t1,C_fix(0)));}
else{
/* tcp.scm:629: error */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[81]+1)))(5,*((C_word*)lf[81]+1),((C_word*)t0)[3],lf[80],lf[82],((C_word*)t0)[2]);}}

/* f_2103 in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_2103(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_2103r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2103r(t0,t1,t2,t3);}}

static void C_ccall f_2103r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2107,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t6=t5;
f_2107(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(t3);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_2107(2,t7,C_i_car(t3));}
else{
/* ##sys#error */
t7=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t3);}}}

/* k2105 */
static void C_ccall f_2107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2107,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2110,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:569: tcp-connect-timeout */
t5=*((C_word*)lf[29]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k2108 in k2105 */
static void C_ccall f_2110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2110,2,t0,t1);}
t2=C_i_check_string(((C_word*)((C_word*)t0)[4])[1]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2116,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t4=t3;
f_2116(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2318,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2326,a[2]=((C_word*)t0)[4],a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2332,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t4,t5,t6);}}

/* a2331 in k2108 in k2105 */
static void C_ccall f_2332(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2332,4,t0,t1,t2,t3);}
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* a2325 in k2108 in k2105 */
static void C_ccall f_2326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2326,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_929,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=((C_word)li38),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_929(t7,t1,C_fix(0));}

/* loop in a2325 in k2108 in k2105 */
static void C_fcall f_929(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_929,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
/* tcp.scm:226: values */
C_values(4,0,t1,((C_word*)t0)[3],C_SCHEME_FALSE);}
else{
t3=C_subchar(((C_word*)t0)[3],t2);
if(C_truep(C_i_char_equalp(t3,C_make_character(58)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_952,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* tcp.scm:230: substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(5,*((C_word*)lf[79]+1),t4,((C_word*)t0)[3],t5,((C_word*)t0)[4]);}
else{
t4=C_fixnum_plus(t2,C_fix(1));
/* tcp.scm:240: loop */
t8=t1;
t9=t4;
t1=t8;
t2=t9;
goto loop;}}}

/* k950 in loop in a2325 in k2108 in k2105 */
static void C_ccall f_952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_952,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_956,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:231: substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(5,*((C_word*)lf[79]+1),t2,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* k954 in k950 in loop in a2325 in k2108 in k2105 */
static void C_ccall f_956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_956,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_840,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=C_i_foreign_string_argumentp(t2);
/* ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(3,*((C_word*)lf[3]+1),t3,t4);}
else{
t4=t3;
f_840(2,t4,C_SCHEME_FALSE);}}

/* k838 in k954 in k950 in loop in a2325 in k2108 in k2105 */
static void C_ccall f_840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_i_foreign_string_argumentp(lf[78]);
/* ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(3,*((C_word*)lf[3]+1),t2,t3);}

/* k842 in k838 in k954 in k950 in loop in a2325 in k2108 in k2105 */
static void C_ccall f_844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_844,2,t0,t1);}
t2=stub185(C_SCHEME_UNDEFINED,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_962,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_968,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:234: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t5);}
else{
/* tcp.scm:229: values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],t2);}}

/* k966 in k842 in k838 in k954 in k950 in loop in a2325 in k2108 in k2105 */
static void C_ccall f_968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_975,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_979,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k977 in k966 in k842 in k838 in k954 in k950 in loop in a2325 in k2108 in k2105 */
static void C_ccall f_979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:237: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[77],t1);}

/* k973 in k966 in k842 in k838 in k954 in k950 in loop in a2325 in k2108 in k2105 */
static void C_ccall f_975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:235: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(6,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],lf[67],t1,((C_word*)t0)[2]);}

/* k960 in k842 in k838 in k954 in k950 in loop in a2325 in k2108 in k2105 */
static void C_ccall f_962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:229: values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2316 in k2108 in k2105 */
static void C_ccall f_2318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_2116(2,t3,t2);}
else{
/* tcp.scm:573: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(6,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],lf[67],lf[76],((C_word*)((C_word*)t0)[2])[1]);}}

/* k2114 in k2108 in k2105 */
static void C_ccall f_2116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2116,2,t0,t1);}
t2=C_i_check_exact(((C_word*)((C_word*)t0)[5])[1]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2122,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:575: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t3,C_fix((C_word)sizeof(struct sockaddr_in)));}

/* k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2122(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2122,2,t0,t1);}
t2=C_fix((C_word)AF_INET);
t3=C_fix((C_word)SOCK_STREAM);
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=C_i_foreign_fixnum_argumentp(C_fix(0));
t7=stub65(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2127,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t7,a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2148,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t8,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=t7,tmp=(C_word)a,a+=9,tmp);
t10=C_eqp(C_fix(-1),t7);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2304,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:584: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t11);}
else{
t11=t9;
f_2148(2,t11,C_SCHEME_UNDEFINED);}}

/* k2302 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2315,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k2313 in k2302 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:587: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[75],t1);}

/* k2309 in k2302 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:585: ##sys#signal-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(7,*((C_word*)lf[8]+1),((C_word*)t0)[4],lf[9],lf[67],t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2148,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2151,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2295,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:588: ##net#gethostaddr */
f_874(t3,((C_word*)t0)[6],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* k2293 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_2151(2,t2,C_SCHEME_UNDEFINED);}
else{
/* tcp.scm:589: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(6,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],lf[67],lf[74],((C_word*)((C_word*)t0)[2])[1]);}}

/* k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2151,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
if(C_truep(stub154(C_SCHEME_UNDEFINED,t3))){
t4=t2;
f_2154(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2281,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:591: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t4);}}

/* k2279 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2281,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2288,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2292,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k2290 in k2279 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:592: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[73],t1);}

/* k2286 in k2279 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:592: ##sys#signal-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),((C_word*)t0)[2],lf[9],lf[67],t1);}

/* k2152 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2154(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2154,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2157,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_fix((C_word)sizeof(struct sockaddr_in));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t6=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t4);
t8=stub130(C_SCHEME_UNDEFINED,t5,t6,t7);
t9=C_eqp(C_fix(-1),t8);
if(C_truep(t9)){
t10=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINPROGRESS));
if(C_truep(t10)){
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t12,a[5]=((C_word*)t0)[6],a[6]=((C_word)li37),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_2217(t14,t2);}
else{
/* tcp.scm:611: fail */
t11=((C_word*)t0)[2];
f_2127(t11,t2);}}
else{
t10=t2;
f_2157(2,t10,C_SCHEME_UNDEFINED);}}

/* loop in k2152 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_fcall f_2217(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2217,NULL,2,t0,t1);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t3=stub200(C_SCHEME_UNDEFINED,t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2224,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=C_eqp(t3,C_fix(-1));
if(C_truep(t5)){
/* tcp.scm:597: fail */
t6=((C_word*)t0)[2];
f_2127(t6,t4);}
else{
t6=t4;
f_2224(2,t6,C_SCHEME_UNDEFINED);}}

/* k2222 in loop in k2152 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2224,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[6],C_fix(1));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2233,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2262,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:602: current-milliseconds */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[37]+1)))(2,*((C_word*)lf[37]+1),t4);}
else{
t4=t3;
f_2233(2,t4,C_SCHEME_UNDEFINED);}}}

/* k2260 in k2222 in loop in k2152 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2262,2,t0,t1);}
t2=C_a_i_plus(&a,2,t1,((C_word*)t0)[3]);
/* tcp.scm:600: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[36]+1)))(4,*((C_word*)lf[36]+1),((C_word*)t0)[2],*((C_word*)lf[5]+1),t2);}

/* k2231 in k2222 in loop in k2152 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2233,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:603: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(5,*((C_word*)lf[34]+1),t2,*((C_word*)lf[5]+1),((C_word*)t0)[2],lf[72]);}

/* k2234 in k2231 in k2222 in loop in k2152 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2236,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:604: yield */
f_899(t2);}

/* k2237 in k2234 in k2231 in k2222 in loop in k2152 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2239,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2242,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_slot(*((C_word*)lf[5]+1),C_fix(13)))){
/* tcp.scm:606: ##sys#signal-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(7,*((C_word*)lf[8]+1),t2,lf[32],lf[67],lf[71],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* tcp.scm:610: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2217(t3,((C_word*)t0)[4]);}}

/* k2240 in k2237 in k2234 in k2231 in k2222 in loop in k2152 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:610: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2217(t2,((C_word*)t0)[2]);}

/* k2155 in k2152 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2157(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2157,2,t0,t1);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t3=stub484(C_SCHEME_UNDEFINED,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2163,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(t3,C_fix(-1));
if(C_truep(t5)){
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t7=stub103(C_SCHEME_UNDEFINED,t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2179,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2183,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t10=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}
else{
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t7=stub103(C_SCHEME_UNDEFINED,t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2199,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2203,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=C_a_i_bytevector(&a,1,C_fix(3));
t11=C_i_foreign_fixnum_argumentp(t3);
t12=stub489(t10,t11);
/* ##sys#peek-c-string */
t13=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t9,t12,C_fix(0));}
else{
/* tcp.scm:623: ##net#io-ports */
t6=lf[31];
f_1295(t6,((C_word*)t0)[2],((C_word*)t0)[3]);}}}

/* k2201 in k2155 in k2152 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:622: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[70],t1);}

/* k2197 in k2155 in k2152 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:620: ##sys#signal-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),((C_word*)t0)[2],lf[9],lf[67],t1);}

/* k2181 in k2155 in k2152 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:617: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[69],t1);}

/* k2177 in k2155 in k2152 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:615: ##sys#signal-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),((C_word*)t0)[2],lf[9],lf[67],t1);}

/* k2161 in k2155 in k2152 in k2149 in k2146 in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:623: ##net#io-ports */
t2=lf[31];
f_1295(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* fail in k2120 in k2114 in k2108 in k2105 */
static void C_fcall f_2127(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2127,NULL,2,t0,t1);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t3=stub103(C_SCHEME_UNDEFINED,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2134,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:579: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t4);}

/* k2132 in fail in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2145,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k2143 in k2132 in fail in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:581: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[68],t1);}

/* k2139 in k2132 in fail in k2120 in k2114 in k2108 in k2105 */
static void C_ccall f_2141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:580: ##sys#signal-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(7,*((C_word*)lf[8]+1),((C_word*)t0)[4],lf[9],lf[67],t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* f_2049 in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_2049(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2049,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[21],lf[65]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=stub195(C_SCHEME_UNDEFINED,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2059,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(C_fix(-1),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2068,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:551: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t9);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_eqp(C_fix(1),t6));}}

/* k2066 */
static void C_ccall f_2068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2068,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2079,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k2077 in k2066 */
static void C_ccall f_2079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:553: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[66],t1);}

/* k2073 in k2066 */
static void C_ccall f_2075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:552: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(6,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],lf[65],t1,((C_word*)t0)[2]);}

/* k2057 */
static void C_ccall f_2059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(C_fix(1),((C_word*)t0)[2]));}

/* f_1963 in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1963(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1963,3,t0,t1,t2);}
t3=C_i_check_structure(t2,lf[21]);
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1973,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:523: tcp-accept-timeout */
t6=*((C_word*)lf[30]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k1971 */
static void C_ccall f_1973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1973,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1978,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li33),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1978(t5,((C_word*)t0)[2]);}

/* loop in k1971 */
static void C_fcall f_1978(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1978,NULL,2,t0,t1);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t3=stub195(C_SCHEME_UNDEFINED,t2);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t6=stub92(C_SCHEME_UNDEFINED,t5,C_SCHEME_FALSE,C_SCHEME_FALSE);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1991,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(C_fix(-1),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2000,a[2]=((C_word*)t0)[4],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:528: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t9);}
else{
/* tcp.scm:532: ##net#io-ports */
t9=lf[31];
f_1295(t9,t1,t6);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2014,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2043,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:537: current-milliseconds */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[37]+1)))(2,*((C_word*)lf[37]+1),t6);}
else{
t6=t5;
f_2014(2,t6,C_SCHEME_UNDEFINED);}}}

/* k2041 in loop in k1971 */
static void C_ccall f_2043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2043,2,t0,t1);}
t2=C_a_i_plus(&a,2,t1,((C_word*)t0)[3]);
/* tcp.scm:535: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[36]+1)))(4,*((C_word*)lf[36]+1),((C_word*)t0)[2],*((C_word*)lf[5]+1),t2);}

/* k2012 in loop in k1971 */
static void C_ccall f_2014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:538: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(5,*((C_word*)lf[34]+1),t2,*((C_word*)lf[5]+1),((C_word*)t0)[2],lf[35]);}

/* k2015 in k2012 in loop in k1971 */
static void C_ccall f_2017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:539: yield */
f_899(t2);}

/* k2018 in k2015 in k2012 in loop in k1971 */
static void C_ccall f_2020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2020,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2023,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_slot(*((C_word*)lf[5]+1),C_fix(13)))){
/* tcp.scm:541: ##sys#signal-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(7,*((C_word*)lf[8]+1),t2,lf[32],lf[62],lf[64],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* tcp.scm:545: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1978(t3,((C_word*)t0)[4]);}}

/* k2021 in k2018 in k2015 in k2012 in loop in k1971 */
static void C_ccall f_2023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:545: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1978(t2,((C_word*)t0)[2]);}

/* k1998 in loop in k1971 */
static void C_ccall f_2000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2000,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2007,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2011,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k2009 in k1998 in loop in k1971 */
static void C_ccall f_2011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:530: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[63],t1);}

/* k2005 in k1998 in loop in k1971 */
static void C_ccall f_2007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:529: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(6,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],lf[62],t1,((C_word*)t0)[2]);}

/* k1989 in loop in k1971 */
static void C_ccall f_1991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:532: ##net#io-ports */
t2=lf[31];
f_1295(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_fcall f_1295(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1295,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1299,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_i_foreign_fixnum_argumentp(t4);
if(C_truep(stub154(C_SCHEME_UNDEFINED,t5))){
t6=t3;
f_1299(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1950,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:332: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t6);}}

/* k1948 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1957,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1961,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1959 in k1948 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:334: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[61],t1);}

/* k1955 in k1948 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:333: ##sys#signal-hook */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),((C_word*)t0)[2],lf[9],t1);}

/* k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1299,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:335: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,C_fix(1024));}

/* k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1302(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1302,2,t0,t1);}
t2=C_a_i_vector5(&a,5,((C_word*)t0)[4],C_SCHEME_FALSE,C_SCHEME_FALSE,t1,C_fix(0));
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1308,a[2]=t8,a[3]=t10,a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=t2,a[7]=t4,a[8]=t1,a[9]=((C_word*)t0)[4],tmp=(C_word)a,a+=10,tmp);
/* tcp.scm:341: tbs */
t12=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t12))(2,t12,t11);}

/* k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1308,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t1)){
t3=C_fixnum_greaterp(t1,C_fix(0));
t4=t2;
f_1311(t4,(C_truep(t3)?lf[60]:C_SCHEME_FALSE));}
else{
t3=t2;
f_1311(t3,C_SCHEME_FALSE);}}

/* k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_fcall f_1311(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1311,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* tcp.scm:343: tcp-read-timeout */
t5=*((C_word*)lf[27]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* tcp.scm:344: tcp-write-timeout */
t3=*((C_word*)lf[28]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1317(C_word c,C_word t0,C_word t1){
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
C_word ab[66],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1318,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word)li15),tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1394,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],a[8]=t1,a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1632,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word)li22),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1654,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],a[5]=((C_word)li23),tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1689,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[2],a[6]=((C_word)li24),tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1732,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word)li25),tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1750,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word)li27),tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1815,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word)li30),tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1927,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:373: make-input-port */
((C_proc9)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(9,*((C_word*)lf[59]+1),t3,t4,t5,t6,t7,t8,t9,t10);}

/* a1926 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1927(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1927,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[56]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1937,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:454: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[58]+1)))(5,*((C_word*)lf[58]+1),t3,((C_word*)t0)[2],lf[57],((C_word*)((C_word*)t0)[3])[1]);}}

/* k1935 in a1926 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[57] /* (set! bufpos ...) */,((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* a1814 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1815(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1815,4,t0,t1,t2,t3);}
t4=(C_truep(t3)?t3:C_fudge(C_fix(21)));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1825,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li29),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_1825(t8,t1,C_SCHEME_FALSE,t4);}

/* loop in a1814 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_fcall f_1825(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1825,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
t4=C_i_fixnum_min(((C_word*)((C_word*)t0)[6])[1],t3);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1841,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[7],a[10]=((C_word)li28),tmp=(C_word)a,a+=11,tmp);
/* tcp.scm:426: ##sys#scan-buffer-line */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[55]+1)))(6,*((C_word*)lf[55]+1),t1,((C_word*)t0)[5],t4,((C_word*)((C_word*)t0)[7])[1],t5);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1913,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:447: read-input */
t5=((C_word*)t0)[3];
f_1318(t5,t4);}}

/* k1911 in loop in a1814 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
/* tcp.scm:449: loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_1825(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}}

/* a1840 in loop in a1814 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1841(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1841,4,t0,t1,t2,t3);}
t4=C_fixnum_difference(t2,((C_word*)((C_word*)t0)[9])[1]);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t3,a[11]=t2,a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
/* tcp.scm:432: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[54]+1)))(3,*((C_word*)lf[54]+1),t5,t4);}

/* k1846 in a1840 in loop in a1814 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1848(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1848,2,t0,t1);}
t2=C_substring_copy(((C_word*)t0)[13],t1,((C_word*)((C_word*)t0)[12])[1],((C_word*)t0)[11],C_fix(0));
t3=C_mutate(((C_word *)((C_word*)t0)[12])+1,((C_word*)t0)[10]);
t4=C_eqp(((C_word*)t0)[11],((C_word*)t0)[9]);
if(C_truep(t4)){
if(C_truep(((C_word*)t0)[8])){
/* tcp.scm:436: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[7],((C_word*)t0)[8],t1);}
else{
t5=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}}
else{
t5=C_eqp(((C_word*)t0)[11],((C_word*)t0)[10]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1870,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
/* tcp.scm:438: read-input */
t7=((C_word*)t0)[3];
f_1318(t7,t6);}
else{
t6=C_slot(((C_word*)t0)[2],C_fix(4));
t7=C_fixnum_plus(t6,C_fix(1));
t8=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),t7);
if(C_truep(((C_word*)t0)[8])){
/* tcp.scm:445: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[7],((C_word*)t0)[8],t1);}
else{
t9=t1;
t10=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}}}

/* k1868 in k1846 in a1840 in loop in a1814 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1870,2,t0,t1);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[8])[1]))){
t2=((C_word*)t0)[7];
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?t2:lf[53]));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1886,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[7])){
/* tcp.scm:441: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t2,((C_word*)t0)[7],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[2];
t4=C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* tcp.scm:441: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1825(t5,((C_word*)t0)[6],t3,t4);}}}

/* k1884 in k1868 in k1846 in a1840 in loop in a1814 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* tcp.scm:441: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1825(t3,((C_word*)t0)[2],t1,t2);}

/* a1749 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1750(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1750,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1756,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li26),tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_1756(t9,t1,t3,C_fix(0),t5);}

/* loop in a1749 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_fcall f_1756(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(8);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1756,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t2,C_fix(0));
if(C_truep(t5)){
t6=t3;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
t6=C_fixnum_difference(((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1]);
t7=C_fixnum_lessp(t2,t6);
t8=(C_truep(t7)?t2:t6);
t9=C_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t8);
t10=C_substring_copy(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[7])[1],t9,t4);
t11=C_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t8);
t12=C_mutate(((C_word *)((C_word*)t0)[7])+1,t11);
t13=C_fixnum_difference(t2,t8);
t14=C_fixnum_plus(t3,t8);
t15=C_fixnum_plus(t4,t8);
/* tcp.scm:416: loop */
t19=t1;
t20=t13;
t21=t14;
t22=t15;
t1=t19;
t2=t20;
t3=t21;
t4=t22;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1804,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:418: read-input */
t7=((C_word*)t0)[2];
f_1318(t7,t6);}}}

/* k1802 in loop in a1749 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(((C_word*)((C_word*)t0)[7])[1],C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[6];
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* tcp.scm:421: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1756(t3,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[2]);}}

/* a1731 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1732,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1736,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1]))){
/* tcp.scm:404: read-input */
t3=((C_word*)t0)[2];
f_1318(t3,t2);}
else{
t3=t2;
f_1736(2,t3,C_SCHEME_UNDEFINED);}}

/* k1734 in a1731 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1]))){
t2=C_subchar(((C_word*)t0)[3],((C_word*)((C_word*)t0)[5])[1]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}}

/* a1688 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1689(C_word c,C_word t0,C_word t1){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1689,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1697,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[2],C_fix(1)))){
t4=t3;
f_1697(t4,C_SCHEME_UNDEFINED);}
else{
t4=((C_word*)t0)[4];
t5=C_fix((C_word)SD_RECEIVE);
t6=C_i_foreign_fixnum_argumentp(t4);
t7=C_i_foreign_fixnum_argumentp(t5);
t8=t3;
f_1697(t8,stub122(C_SCHEME_UNDEFINED,t6,t7));}}}

/* k1695 in a1688 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_fcall f_1697(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1697,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1703,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=((C_word*)t0)[3];
t4=C_i_foreign_fixnum_argumentp(t3);
t5=stub103(C_SCHEME_UNDEFINED,t4);
t6=t2;
f_1703(t6,C_eqp(C_fix(-1),t5));}
else{
t3=t2;
f_1703(t3,C_SCHEME_FALSE);}}

/* k1701 in k1695 in a1688 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_fcall f_1703(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1703,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:397: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1704 in k1701 in k1695 in a1688 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1706,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1717,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1715 in k1704 in k1701 in k1695 in a1688 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:400: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[52],t1);}

/* k1711 in k1704 in k1701 in k1695 in a1688 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:398: ##sys#signal-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],t1,((C_word*)t0)[2]);}

/* a1653 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1654,2,t0,t1);}
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=((C_word*)t0)[2];
t4=C_i_foreign_fixnum_argumentp(t3);
t5=stub195(C_SCHEME_UNDEFINED,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1667,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(t5,C_fix(-1));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1676,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:386: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_eqp(t5,C_fix(1)));}}}

/* k1674 in a1653 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1676,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1683,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1687,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1685 in k1674 in a1653 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:389: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[51],t1);}

/* k1681 in k1674 in a1653 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:387: ##sys#signal-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],t1,((C_word*)t0)[2]);}

/* k1665 in a1653 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[2],C_fix(1)));}

/* a1631 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1632,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1636,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1]))){
/* tcp.scm:376: read-input */
t3=((C_word*)t0)[2];
f_1318(t3,t2);}
else{
t3=t2;
f_1636(2,t3,C_SCHEME_UNDEFINED);}}

/* k1634 in a1631 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1]))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}
else{
t2=C_subchar(((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[5])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1394,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1395,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1490,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(((C_word*)((C_word*)t0)[5])[1])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1596,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li18),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1616,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp));
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1517,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[3],a[8]=((C_word)li20),tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1580,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:486: make-output-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(5,*((C_word*)lf[50]+1),t3,t4,t5,t6);}
else{
/* tcp.scm:486: make-output-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(5,*((C_word*)lf[50]+1),t3,t4,t5,C_SCHEME_FALSE);}}

/* f_1580 in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1580,2,t0,t1);}
t2=C_block_size(((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1590,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:510: output */
t4=((C_word*)t0)[2];
f_1395(t4,t3,((C_word*)((C_word*)t0)[3])[1]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1588 */
static void C_ccall f_1590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[49]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* a1516 in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1517,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1525,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1564,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t5=C_block_size(((C_word*)((C_word*)t0)[3])[1]);
t6=t4;
f_1564(t6,C_fixnum_greaterp(t5,C_fix(0)));}
else{
t5=t4;
f_1564(t5,C_SCHEME_FALSE);}}}

/* k1562 in a1516 in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_fcall f_1564(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1564,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1567,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:500: output */
t3=((C_word*)t0)[2];
f_1395(t3,t2,((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=((C_word*)t0)[3];
f_1525(t2,C_SCHEME_UNDEFINED);}}

/* k1565 in k1562 in a1516 in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[48]);
t3=((C_word*)t0)[2];
f_1525(t3,t2);}

/* k1523 in a1516 in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_fcall f_1525(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1525,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1528,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[2],C_fix(2)))){
t3=t2;
f_1528(t3,C_SCHEME_UNDEFINED);}
else{
t3=((C_word*)t0)[4];
t4=C_fix((C_word)SD_SEND);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=C_i_foreign_fixnum_argumentp(t4);
t7=t2;
f_1528(t7,stub122(C_SCHEME_UNDEFINED,t5,t6));}}

/* k1526 in k1523 in a1516 in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_fcall f_1528(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1528,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1534,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=((C_word*)t0)[3];
t4=C_i_foreign_fixnum_argumentp(t3);
t5=stub103(C_SCHEME_UNDEFINED,t4);
t6=t2;
f_1534(t6,C_eqp(C_fix(-1),t5));}
else{
t3=t2;
f_1534(t3,C_SCHEME_FALSE);}}

/* k1532 in k1526 in k1523 in a1516 in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_fcall f_1534(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1534,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:504: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1535 in k1532 in k1526 in k1523 in a1516 in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1537,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1548,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1546 in k1535 in k1532 in k1526 in k1523 in a1516 in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:506: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[47],t1);}

/* k1542 in k1535 in k1532 in k1526 in k1523 in a1516 in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:505: ##sys#signal-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],t1,((C_word*)t0)[2]);}

/* f_1616 in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1616(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1616,3,t0,t1,t2);}
t3=C_block_size(t2);
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
/* tcp.scm:495: output */
t4=((C_word*)t0)[2];
f_1395(t4,t1,t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_1596 in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1596(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1596,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1601,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:489: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t3,((C_word*)((C_word*)t0)[4])[1],t2);}

/* k1599 */
static void C_ccall f_1601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1601,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_block_size(((C_word*)((C_word*)t0)[5])[1]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[4]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1610,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:491: output */
t5=((C_word*)t0)[2];
f_1395(t5,t4,((C_word*)((C_word*)t0)[5])[1]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1608 in k1599 */
static void C_ccall f_1610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[46]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1488 in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1490,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[4],C_fix(3),lf[42]);
t3=C_i_setslot(t1,C_fix(3),lf[43]);
t4=C_i_setslot(((C_word*)t0)[4],C_fix(7),lf[44]);
t5=C_i_setslot(t1,C_fix(7),lf[44]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1505,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:516: ##sys#set-port-data! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),t6,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* k1503 in k1488 in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1508,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:517: ##sys#set-port-data! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1506 in k1503 in k1488 in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:518: values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* output in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_fcall f_1395(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1395,NULL,3,t0,t1,t2);}
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1405,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word)li16),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1405(t7,t1,t3,C_fix(0));}

/* loop in output in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_fcall f_1405(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(12);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1405,NULL,4,t0,t1,t2,t3);}
t4=C_i_fixnum_min(C_fix(8192),t2);
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[4];
t7=t3;
t8=C_i_foreign_fixnum_argumentp(t5);
t9=(C_truep(t6)?C_i_foreign_block_argumentp(t6):C_SCHEME_FALSE);
t10=C_i_foreign_fixnum_argumentp(t7);
t11=C_i_foreign_fixnum_argumentp(t4);
t12=C_i_foreign_fixnum_argumentp(C_fix(0));
t13=stub143(C_SCHEME_UNDEFINED,t8,t9,t10,t11,t12);
t14=C_eqp(C_fix(-1),t13);
if(C_truep(t14)){
t15=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1427,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1456,a[2]=t16,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:469: current-milliseconds */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[37]+1)))(2,*((C_word*)lf[37]+1),t17);}
else{
t17=t16;
f_1427(2,t17,C_SCHEME_UNDEFINED);}}
else{
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1459,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:478: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t16);}}
else{
if(C_truep(C_fixnum_lessp(t13,t2))){
t15=C_fixnum_difference(t2,t13);
t16=C_fixnum_plus(t3,t13);
/* tcp.scm:484: loop */
t22=t1;
t23=t15;
t24=t16;
t1=t22;
t2=t23;
t3=t24;
goto loop;}
else{
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_SCHEME_UNDEFINED);}}}

/* k1457 in loop in output in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1459,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1470,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1468 in k1457 in loop in output in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:481: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[41],t1);}

/* k1464 in k1457 in loop in output in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:479: ##sys#signal-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],t1,((C_word*)t0)[2]);}

/* k1454 in loop in output in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1456,2,t0,t1);}
t2=C_a_i_plus(&a,2,t1,((C_word*)t0)[3]);
/* tcp.scm:467: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[36]+1)))(4,*((C_word*)lf[36]+1),((C_word*)t0)[2],*((C_word*)lf[5]+1),t2);}

/* k1425 in loop in output in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1427,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:470: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(5,*((C_word*)lf[34]+1),t2,*((C_word*)lf[5]+1),((C_word*)t0)[2],lf[40]);}

/* k1428 in k1425 in loop in output in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1430,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:471: yield */
f_899(t2);}

/* k1431 in k1428 in k1425 in loop in output in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1436,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_slot(*((C_word*)lf[5]+1),C_fix(13)))){
/* tcp.scm:473: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(6,*((C_word*)lf[8]+1),t2,lf[32],lf[39],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* tcp.scm:476: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_1405(t3,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}}

/* k1434 in k1431 in k1428 in k1425 in loop in output in k1392 in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:476: loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_1405(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* read-input in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_fcall f_1318(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1318,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li14),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_1324(t5,t1);}

/* loop in read-input in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_fcall f_1324(C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1324,NULL,2,t0,t1);}
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=C_i_foreign_fixnum_argumentp(t2);
t5=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(C_fix(1024));
t7=C_i_foreign_fixnum_argumentp(C_fix(0));
t8=stub111(C_SCHEME_UNDEFINED,t4,t5,t6,t7);
t9=C_eqp(C_fix(-1),t8);
if(C_truep(t9)){
t10=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1343,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1372,a[2]=t11,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:354: current-milliseconds */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[37]+1)))(2,*((C_word*)lf[37]+1),t12);}
else{
t12=t11;
f_1343(2,t12,C_SCHEME_UNDEFINED);}}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1375,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:363: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t11);}}
else{
t10=C_mutate(((C_word *)((C_word*)t0)[4])+1,t8);
t11=C_i_set_i_slot(((C_word*)t0)[3],C_fix(4),t8);
t12=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}}

/* k1373 in loop in read-input in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1386,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1384 in k1373 in loop in read-input in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:366: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[38],t1);}

/* k1380 in k1373 in loop in read-input in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:364: ##sys#signal-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],t1,((C_word*)t0)[2]);}

/* k1370 in loop in read-input in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1372,2,t0,t1);}
t2=C_a_i_plus(&a,2,t1,((C_word*)t0)[3]);
/* tcp.scm:352: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[36]+1)))(4,*((C_word*)lf[36]+1),((C_word*)t0)[2],*((C_word*)lf[5]+1),t2);}

/* k1341 in loop in read-input in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1343,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:355: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(5,*((C_word*)lf[34]+1),t2,*((C_word*)lf[5]+1),((C_word*)t0)[2],lf[35]);}

/* k1344 in k1341 in loop in read-input in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1346,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:356: yield */
f_899(t2);}

/* k1347 in k1344 in k1341 in loop in read-input in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1349,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1352,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_slot(*((C_word*)lf[5]+1),C_fix(13)))){
/* tcp.scm:358: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(6,*((C_word*)lf[8]+1),t2,lf[32],lf[33],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* tcp.scm:361: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1324(t3,((C_word*)t0)[4]);}}

/* k1350 in k1347 in k1344 in k1341 in loop in read-input in k1315 in k1312 in k1309 in k1306 in k1300 in k1297 in ##net#io-ports in k1291 in k1287 in k1283 in k1279 in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:361: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1324(t2,((C_word*)t0)[2]);}

/* check in k1256 in k831 in k633 in k630 in k627 */
static void C_fcall f_1264(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1264,NULL,2,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1266,a[2]=t2,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));}

/* f_1266 in check in k1256 in k831 in k633 in k630 in k627 */
static void C_ccall f_1266(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1266,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_i_check_exact_2(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_1223 in k831 in k633 in k630 in k627 */
static void C_ccall f_1223(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1223,3,t0,t1,t2);}
t3=C_i_check_structure(t2,lf[21]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=stub103(C_SCHEME_UNDEFINED,t5);
t7=C_eqp(C_fix(-1),t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1239,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:304: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t8);}
else{
t8=C_SCHEME_UNDEFINED;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* k1237 */
static void C_ccall f_1239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1239,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1250,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1248 in k1237 */
static void C_ccall f_1250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:307: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[25],t1);}

/* k1244 in k1237 */
static void C_ccall f_1246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:305: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(6,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],lf[24],t1,((C_word*)t0)[2]);}

/* f_1214 in k831 in k633 in k630 in k627 */
static void C_ccall f_1214(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1214,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(C_blockp(t2))?C_i_structurep(t2,lf[21]):C_SCHEME_FALSE));}

/* f_1116 in k831 in k633 in k630 in k627 */
static void C_ccall f_1116(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr3r,(void*)f_1116r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1116r(t0,t1,t2,t3);}}

static void C_ccall f_1116r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(12);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1118,a[2]=t2,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1161,a[2]=t4,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1166,a[2]=t5,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* def-w274298 */
t7=t6;
f_1166(t7,t1);}
else{
t7=C_i_car(t3);
t8=C_i_cdr(t3);
if(C_truep(C_i_nullp(t8))){
/* def-host275296 */
t9=t5;
f_1161(t9,t1,t7);}
else{
t9=C_i_car(t8);
t10=C_i_cdr(t8);
if(C_truep(C_i_nullp(t10))){
/* body272281 */
t11=t4;
f_1118(t11,t1,t7,t9);}
else{
/* ##sys#error */
t11=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}}}

/* def-w274 */
static void C_fcall f_1166(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1166,NULL,2,t0,t1);}
/* def-host275296 */
t2=((C_word*)t0)[2];
f_1161(t2,t1,C_fix(10));}

/* def-host275 */
static void C_fcall f_1161(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1161,NULL,3,t0,t1,t2);}
/* body272281 */
t3=((C_word*)t0)[2];
f_1118(t3,t1,t2,C_SCHEME_FALSE);}

/* body272 */
static void C_fcall f_1118(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1118,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1124,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1130,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a1129 in body272 */
static void C_ccall f_1130(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1130,4,t0,t1,t2,t3);}
t4=C_i_check_exact(((C_word*)t0)[3]);
t5=t2;
t6=((C_word*)t0)[3];
t7=C_i_foreign_fixnum_argumentp(t5);
t8=C_i_foreign_fixnum_argumentp(t6);
t9=stub84(C_SCHEME_UNDEFINED,t7,t8);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1140,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t11=C_eqp(C_fix(-1),t9);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1149,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:290: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t12);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_a_i_record2(&a,2,lf[21],t2));}}

/* k1147 in a1129 in body272 */
static void C_ccall f_1149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1149,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1160,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1158 in k1147 in a1129 in body272 */
static void C_ccall f_1160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:293: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[22],t1);}

/* k1154 in k1147 in a1129 in body272 */
static void C_ccall f_1156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:291: ##sys#signal-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(7,*((C_word*)lf[8]+1),((C_word*)t0)[4],lf[9],lf[7],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1138 in a1129 in body272 */
static void C_ccall f_1140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1140,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record2(&a,2,lf[21],((C_word*)t0)[2]));}

/* a1123 in body272 */
static void C_ccall f_1124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1124,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_fix((C_word)SOCK_STREAM);
t4=((C_word*)t0)[2];
t5=C_i_check_exact(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1013,a[2]=t4,a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=C_fixnum_lessp(t2,C_fix(0));
if(C_truep(t7)){
if(C_truep(t7)){
/* tcp.scm:253: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(6,*((C_word*)lf[8]+1),t6,lf[19],lf[7],lf[20],t2);}
else{
t8=t6;
f_1013(2,t8,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(65535)))){
/* tcp.scm:253: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(6,*((C_word*)lf[8]+1),t6,lf[19],lf[7],lf[20],t2);}
else{
t8=t6;
f_1013(2,t8,C_SCHEME_UNDEFINED);}}}

/* k1011 in a1123 in body272 */
static void C_ccall f_1013(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1013,2,t0,t1);}
t2=C_fix((C_word)AF_INET);
t3=C_i_foreign_fixnum_argumentp(t2);
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t5=C_i_foreign_fixnum_argumentp(C_fix(0));
t6=stub65(C_SCHEME_UNDEFINED,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1019,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=C_eqp(C_fix((C_word)INVALID_SOCKET),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1099,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:256: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t9);}
else{
t9=t7;
f_1019(2,t9,C_SCHEME_UNDEFINED);}}

/* k1097 in k1011 in a1123 in body272 */
static void C_ccall f_1099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:257: ##sys#error */
t2=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[18]);}

/* k1017 in k1011 in a1123 in body272 */
static void C_ccall f_1019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1019,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1022,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t4=stub254(C_SCHEME_UNDEFINED,t3);
t5=C_eqp(C_fix(-1),t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1072,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:263: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t6);}
else{
t6=t2;
f_1022(2,t6,C_SCHEME_UNDEFINED);}}

/* k1070 in k1017 in k1011 in a1123 in body272 */
static void C_ccall f_1072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1072,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1083,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1081 in k1070 in k1017 in k1011 in a1123 in body272 */
static void C_ccall f_1083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:266: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[16],t1);}

/* k1077 in k1070 in k1017 in k1011 in a1123 in body272 */
static void C_ccall f_1079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:264: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(6,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],lf[7],t1,((C_word*)t0)[2]);}

/* k1020 in k1017 in k1011 in a1123 in body272 */
static void C_ccall f_1022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1022,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1025,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:267: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,C_fix((C_word)sizeof(struct sockaddr_in)));}

/* k1023 in k1020 in k1017 in k1011 in a1123 in body272 */
static void C_ccall f_1025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1025,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1028,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1060,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:269: ##net#gethostaddr */
f_874(t3,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t3=t1;
if(C_truep(t3)){
t4=C_i_foreign_block_argumentp(t3);
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=t2;
f_1028(2,t6,stub236(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t5=t2;
f_1028(2,t5,stub236(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}}

/* k1058 in k1023 in k1020 in k1017 in k1011 in a1123 in body272 */
static void C_ccall f_1060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
f_1028(2,t3,t2);}
else{
/* tcp.scm:270: ##sys#signal-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(7,*((C_word*)lf[8]+1),((C_word*)t0)[4],lf[9],lf[7],lf[14],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k1026 in k1023 in k1020 in k1017 in k1011 in a1123 in body272 */
static void C_ccall f_1028(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1028,2,t0,t1);}
t2=((C_word*)t0)[5];
t3=C_fix((C_word)sizeof(struct sockaddr_in));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t5=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=stub74(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1034,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t9=C_eqp(C_fix(-1),t7);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1043,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:276: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t10);}
else{
/* tcp.scm:280: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}}

/* k1041 in k1026 in k1023 in k1020 in k1017 in k1011 in a1123 in body272 */
static void C_ccall f_1043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1043,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1054,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1052 in k1041 in k1026 in k1023 in k1020 in k1017 in k1011 in a1123 in body272 */
static void C_ccall f_1054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:279: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],lf[11],t1);}

/* k1048 in k1041 in k1026 in k1023 in k1020 in k1017 in k1011 in a1123 in body272 */
static void C_ccall f_1050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:277: ##sys#signal-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(7,*((C_word*)lf[8]+1),((C_word*)t0)[4],lf[9],lf[7],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1032 in k1026 in k1023 in k1020 in k1017 in k1011 in a1123 in body272 */
static void C_ccall f_1034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:280: values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* yield in k831 in k633 in k630 in k627 */
static void C_fcall f_899(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_899,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_905,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:214: ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t2);}

/* a904 in yield in k831 in k633 in k630 in k627 */
static void C_ccall f_905(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_905,3,t0,t1,t2);}
t3=*((C_word*)lf[5]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_914,a[2]=t2,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
t5=C_i_setslot(t3,C_fix(1),t4);
/* tcp.scm:218: ##sys#schedule */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(2,*((C_word*)lf[6]+1),t1);}

/* a913 in a904 in yield in k831 in k633 in k630 in k627 */
static void C_ccall f_914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_914,2,t0,t1);}
/* tcp.scm:217: return */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* ##net#gethostaddr in k831 in k633 in k630 in k627 */
static void C_fcall f_874(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_874,NULL,4,t1,t2,t3,t4);}
t5=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_883,a[2]=t5,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t7=C_i_foreign_string_argumentp(t3);
/* ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(3,*((C_word*)lf[3]+1),t6,t7);}
else{
t7=C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub207(C_SCHEME_UNDEFINED,t5,C_SCHEME_FALSE,t7));}}

/* k881 in ##net#gethostaddr in k831 in k633 in k630 in k627 */
static void C_ccall f_883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub207(C_SCHEME_UNDEFINED,((C_word*)t0)[2],t1,t2));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[218] = {
{"toplevel:tcp_2escm",(void*)C_tcp_toplevel},
{"f_629:tcp_2escm",(void*)f_629},
{"f_632:tcp_2escm",(void*)f_632},
{"f_635:tcp_2escm",(void*)f_635},
{"f_833:tcp_2escm",(void*)f_833},
{"f_1258:tcp_2escm",(void*)f_1258},
{"f_2542:tcp_2escm",(void*)f_2542},
{"f_1281:tcp_2escm",(void*)f_1281},
{"f_2538:tcp_2escm",(void*)f_2538},
{"f_1285:tcp_2escm",(void*)f_1285},
{"f_2534:tcp_2escm",(void*)f_2534},
{"f_1289:tcp_2escm",(void*)f_1289},
{"f_2530:tcp_2escm",(void*)f_2530},
{"f_1293:tcp_2escm",(void*)f_1293},
{"f_2519:tcp_2escm",(void*)f_2519},
{"f_2499:tcp_2escm",(void*)f_2499},
{"f_2503:tcp_2escm",(void*)f_2503},
{"f_2510:tcp_2escm",(void*)f_2510},
{"f_2470:tcp_2escm",(void*)f_2470},
{"f_2497:tcp_2escm",(void*)f_2497},
{"f_2493:tcp_2escm",(void*)f_2493},
{"f_2483:tcp_2escm",(void*)f_2483},
{"f_2422:tcp_2escm",(void*)f_2422},
{"f_2426:tcp_2escm",(void*)f_2426},
{"f_2429:tcp_2escm",(void*)f_2429},
{"f_2468:tcp_2escm",(void*)f_2468},
{"f_2464:tcp_2escm",(void*)f_2464},
{"f_2439:tcp_2escm",(void*)f_2439},
{"f_2457:tcp_2escm",(void*)f_2457},
{"f_2453:tcp_2escm",(void*)f_2453},
{"f_2446:tcp_2escm",(void*)f_2446},
{"f_2374:tcp_2escm",(void*)f_2374},
{"f_2378:tcp_2escm",(void*)f_2378},
{"f_2381:tcp_2escm",(void*)f_2381},
{"f_2388:tcp_2escm",(void*)f_2388},
{"f_2420:tcp_2escm",(void*)f_2420},
{"f_2416:tcp_2escm",(void*)f_2416},
{"f_2391:tcp_2escm",(void*)f_2391},
{"f_2395:tcp_2escm",(void*)f_2395},
{"f_2409:tcp_2escm",(void*)f_2409},
{"f_2405:tcp_2escm",(void*)f_2405},
{"f_2398:tcp_2escm",(void*)f_2398},
{"f_2356:tcp_2escm",(void*)f_2356},
{"f_2360:tcp_2escm",(void*)f_2360},
{"f_2103:tcp_2escm",(void*)f_2103},
{"f_2107:tcp_2escm",(void*)f_2107},
{"f_2110:tcp_2escm",(void*)f_2110},
{"f_2332:tcp_2escm",(void*)f_2332},
{"f_2326:tcp_2escm",(void*)f_2326},
{"f_929:tcp_2escm",(void*)f_929},
{"f_952:tcp_2escm",(void*)f_952},
{"f_956:tcp_2escm",(void*)f_956},
{"f_840:tcp_2escm",(void*)f_840},
{"f_844:tcp_2escm",(void*)f_844},
{"f_968:tcp_2escm",(void*)f_968},
{"f_979:tcp_2escm",(void*)f_979},
{"f_975:tcp_2escm",(void*)f_975},
{"f_962:tcp_2escm",(void*)f_962},
{"f_2318:tcp_2escm",(void*)f_2318},
{"f_2116:tcp_2escm",(void*)f_2116},
{"f_2122:tcp_2escm",(void*)f_2122},
{"f_2304:tcp_2escm",(void*)f_2304},
{"f_2315:tcp_2escm",(void*)f_2315},
{"f_2311:tcp_2escm",(void*)f_2311},
{"f_2148:tcp_2escm",(void*)f_2148},
{"f_2295:tcp_2escm",(void*)f_2295},
{"f_2151:tcp_2escm",(void*)f_2151},
{"f_2281:tcp_2escm",(void*)f_2281},
{"f_2292:tcp_2escm",(void*)f_2292},
{"f_2288:tcp_2escm",(void*)f_2288},
{"f_2154:tcp_2escm",(void*)f_2154},
{"f_2217:tcp_2escm",(void*)f_2217},
{"f_2224:tcp_2escm",(void*)f_2224},
{"f_2262:tcp_2escm",(void*)f_2262},
{"f_2233:tcp_2escm",(void*)f_2233},
{"f_2236:tcp_2escm",(void*)f_2236},
{"f_2239:tcp_2escm",(void*)f_2239},
{"f_2242:tcp_2escm",(void*)f_2242},
{"f_2157:tcp_2escm",(void*)f_2157},
{"f_2203:tcp_2escm",(void*)f_2203},
{"f_2199:tcp_2escm",(void*)f_2199},
{"f_2183:tcp_2escm",(void*)f_2183},
{"f_2179:tcp_2escm",(void*)f_2179},
{"f_2163:tcp_2escm",(void*)f_2163},
{"f_2127:tcp_2escm",(void*)f_2127},
{"f_2134:tcp_2escm",(void*)f_2134},
{"f_2145:tcp_2escm",(void*)f_2145},
{"f_2141:tcp_2escm",(void*)f_2141},
{"f_2049:tcp_2escm",(void*)f_2049},
{"f_2068:tcp_2escm",(void*)f_2068},
{"f_2079:tcp_2escm",(void*)f_2079},
{"f_2075:tcp_2escm",(void*)f_2075},
{"f_2059:tcp_2escm",(void*)f_2059},
{"f_1963:tcp_2escm",(void*)f_1963},
{"f_1973:tcp_2escm",(void*)f_1973},
{"f_1978:tcp_2escm",(void*)f_1978},
{"f_2043:tcp_2escm",(void*)f_2043},
{"f_2014:tcp_2escm",(void*)f_2014},
{"f_2017:tcp_2escm",(void*)f_2017},
{"f_2020:tcp_2escm",(void*)f_2020},
{"f_2023:tcp_2escm",(void*)f_2023},
{"f_2000:tcp_2escm",(void*)f_2000},
{"f_2011:tcp_2escm",(void*)f_2011},
{"f_2007:tcp_2escm",(void*)f_2007},
{"f_1991:tcp_2escm",(void*)f_1991},
{"f_1295:tcp_2escm",(void*)f_1295},
{"f_1950:tcp_2escm",(void*)f_1950},
{"f_1961:tcp_2escm",(void*)f_1961},
{"f_1957:tcp_2escm",(void*)f_1957},
{"f_1299:tcp_2escm",(void*)f_1299},
{"f_1302:tcp_2escm",(void*)f_1302},
{"f_1308:tcp_2escm",(void*)f_1308},
{"f_1311:tcp_2escm",(void*)f_1311},
{"f_1314:tcp_2escm",(void*)f_1314},
{"f_1317:tcp_2escm",(void*)f_1317},
{"f_1927:tcp_2escm",(void*)f_1927},
{"f_1937:tcp_2escm",(void*)f_1937},
{"f_1815:tcp_2escm",(void*)f_1815},
{"f_1825:tcp_2escm",(void*)f_1825},
{"f_1913:tcp_2escm",(void*)f_1913},
{"f_1841:tcp_2escm",(void*)f_1841},
{"f_1848:tcp_2escm",(void*)f_1848},
{"f_1870:tcp_2escm",(void*)f_1870},
{"f_1886:tcp_2escm",(void*)f_1886},
{"f_1750:tcp_2escm",(void*)f_1750},
{"f_1756:tcp_2escm",(void*)f_1756},
{"f_1804:tcp_2escm",(void*)f_1804},
{"f_1732:tcp_2escm",(void*)f_1732},
{"f_1736:tcp_2escm",(void*)f_1736},
{"f_1689:tcp_2escm",(void*)f_1689},
{"f_1697:tcp_2escm",(void*)f_1697},
{"f_1703:tcp_2escm",(void*)f_1703},
{"f_1706:tcp_2escm",(void*)f_1706},
{"f_1717:tcp_2escm",(void*)f_1717},
{"f_1713:tcp_2escm",(void*)f_1713},
{"f_1654:tcp_2escm",(void*)f_1654},
{"f_1676:tcp_2escm",(void*)f_1676},
{"f_1687:tcp_2escm",(void*)f_1687},
{"f_1683:tcp_2escm",(void*)f_1683},
{"f_1667:tcp_2escm",(void*)f_1667},
{"f_1632:tcp_2escm",(void*)f_1632},
{"f_1636:tcp_2escm",(void*)f_1636},
{"f_1394:tcp_2escm",(void*)f_1394},
{"f_1580:tcp_2escm",(void*)f_1580},
{"f_1590:tcp_2escm",(void*)f_1590},
{"f_1517:tcp_2escm",(void*)f_1517},
{"f_1564:tcp_2escm",(void*)f_1564},
{"f_1567:tcp_2escm",(void*)f_1567},
{"f_1525:tcp_2escm",(void*)f_1525},
{"f_1528:tcp_2escm",(void*)f_1528},
{"f_1534:tcp_2escm",(void*)f_1534},
{"f_1537:tcp_2escm",(void*)f_1537},
{"f_1548:tcp_2escm",(void*)f_1548},
{"f_1544:tcp_2escm",(void*)f_1544},
{"f_1616:tcp_2escm",(void*)f_1616},
{"f_1596:tcp_2escm",(void*)f_1596},
{"f_1601:tcp_2escm",(void*)f_1601},
{"f_1610:tcp_2escm",(void*)f_1610},
{"f_1490:tcp_2escm",(void*)f_1490},
{"f_1505:tcp_2escm",(void*)f_1505},
{"f_1508:tcp_2escm",(void*)f_1508},
{"f_1395:tcp_2escm",(void*)f_1395},
{"f_1405:tcp_2escm",(void*)f_1405},
{"f_1459:tcp_2escm",(void*)f_1459},
{"f_1470:tcp_2escm",(void*)f_1470},
{"f_1466:tcp_2escm",(void*)f_1466},
{"f_1456:tcp_2escm",(void*)f_1456},
{"f_1427:tcp_2escm",(void*)f_1427},
{"f_1430:tcp_2escm",(void*)f_1430},
{"f_1433:tcp_2escm",(void*)f_1433},
{"f_1436:tcp_2escm",(void*)f_1436},
{"f_1318:tcp_2escm",(void*)f_1318},
{"f_1324:tcp_2escm",(void*)f_1324},
{"f_1375:tcp_2escm",(void*)f_1375},
{"f_1386:tcp_2escm",(void*)f_1386},
{"f_1382:tcp_2escm",(void*)f_1382},
{"f_1372:tcp_2escm",(void*)f_1372},
{"f_1343:tcp_2escm",(void*)f_1343},
{"f_1346:tcp_2escm",(void*)f_1346},
{"f_1349:tcp_2escm",(void*)f_1349},
{"f_1352:tcp_2escm",(void*)f_1352},
{"f_1264:tcp_2escm",(void*)f_1264},
{"f_1266:tcp_2escm",(void*)f_1266},
{"f_1223:tcp_2escm",(void*)f_1223},
{"f_1239:tcp_2escm",(void*)f_1239},
{"f_1250:tcp_2escm",(void*)f_1250},
{"f_1246:tcp_2escm",(void*)f_1246},
{"f_1214:tcp_2escm",(void*)f_1214},
{"f_1116:tcp_2escm",(void*)f_1116},
{"f_1166:tcp_2escm",(void*)f_1166},
{"f_1161:tcp_2escm",(void*)f_1161},
{"f_1118:tcp_2escm",(void*)f_1118},
{"f_1130:tcp_2escm",(void*)f_1130},
{"f_1149:tcp_2escm",(void*)f_1149},
{"f_1160:tcp_2escm",(void*)f_1160},
{"f_1156:tcp_2escm",(void*)f_1156},
{"f_1140:tcp_2escm",(void*)f_1140},
{"f_1124:tcp_2escm",(void*)f_1124},
{"f_1013:tcp_2escm",(void*)f_1013},
{"f_1099:tcp_2escm",(void*)f_1099},
{"f_1019:tcp_2escm",(void*)f_1019},
{"f_1072:tcp_2escm",(void*)f_1072},
{"f_1083:tcp_2escm",(void*)f_1083},
{"f_1079:tcp_2escm",(void*)f_1079},
{"f_1022:tcp_2escm",(void*)f_1022},
{"f_1025:tcp_2escm",(void*)f_1025},
{"f_1060:tcp_2escm",(void*)f_1060},
{"f_1028:tcp_2escm",(void*)f_1028},
{"f_1043:tcp_2escm",(void*)f_1043},
{"f_1054:tcp_2escm",(void*)f_1054},
{"f_1050:tcp_2escm",(void*)f_1050},
{"f_1034:tcp_2escm",(void*)f_1034},
{"f_899:tcp_2escm",(void*)f_899},
{"f_905:tcp_2escm",(void*)f_905},
{"f_914:tcp_2escm",(void*)f_914},
{"f_874:tcp_2escm",(void*)f_874},
{"f_883:tcp_2escm",(void*)f_883},
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
