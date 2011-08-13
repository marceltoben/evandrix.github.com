/* Generated from posixunix.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: posixunix.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file posixunix.c
   unit: posix
*/

#include "chicken.h"


#include <signal.h>
#include <errno.h>
#include <math.h>

#include <sys/types.h>
#include <sys/stat.h>

static int C_not_implemented(void);
int C_not_implemented() { return -1; }

#define C_curdir(buf)       (getcwd(C_c_string(buf), 1024) ? C_fix(strlen(C_c_string(buf))) : C_SCHEME_FALSE)

static C_TLS struct stat C_statbuf;

#define C_stat_type         (C_statbuf.st_mode & S_IFMT)
#define C_stat(fn)          C_fix(stat((char *)C_data_pointer(fn), &C_statbuf))
#define C_fstat(f)          C_fix(fstat(C_unfix(f), &C_statbuf))

#ifndef S_IFSOCK
# define S_IFSOCK           0140000
#endif

#define C_strftime(v, f) \
        (strftime(C_time_string, sizeof(C_time_string), C_c_string(f), C_tm_set(v)) ? C_time_string : NULL)

#ifndef S_IFLNK
#define S_IFLNK S_IFREG
#endif

#ifndef S_IFREG
#define S_IFREG S_IFREG
#endif

#ifndef S_IFDIR
#define S_IFDIR S_IFREG
#endif

#ifndef S_IFCHR
#define S_IFCHR S_IFREG
#endif

#ifndef S_IFBLK
#define S_IFBLK S_IFREG
#endif

#ifndef S_IFSOCK
#define S_IFSOCK S_IFREG
#endif

#ifndef S_IFIFO
#define S_IFIFO S_IFREG
#endif

static C_TLS int C_wait_status;

#include <unistd.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <sys/utsname.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <dirent.h>
#include <pwd.h>
#include <utime.h>

#if defined(__sun__) && defined(__svr4__)
# include <sys/tty.h>
#endif

#ifdef HAVE_GRP_H
#include <grp.h>
#endif

#include <sys/mman.h>
#include <time.h>

#ifndef O_FSYNC
# define O_FSYNC O_SYNC
#endif

#ifndef PIPE_BUF
# ifdef __CYGWIN__
#  define PIPE_BUF       _POSIX_PIPE_BUF
# else
#  define PIPE_BUF 1024
# endif
#endif

#ifndef O_BINARY
# define O_BINARY        0
#endif
#ifndef O_TEXT
# define O_TEXT          0
#endif

#ifndef ARG_MAX
# define ARG_MAX 256
#endif

#ifndef MAP_FILE
# define MAP_FILE    0
#endif

#ifndef MAP_ANON
# define MAP_ANON    0
#endif

#if defined(HAVE_CRT_EXTERNS_H)
# include <crt_externs.h>
# define C_getenventry(i)       ((*_NSGetEnviron())[ i ])
#elif defined(C_MACOSX)
# define C_getenventry(i)       NULL
#else
extern char **environ;
# define C_getenventry(i)       (environ[ i ])
#endif

#ifndef ENV_MAX
# define ENV_MAX        1024
#endif

#ifndef FILENAME_MAX
# define FILENAME_MAX          1024
#endif

static C_TLS char *C_exec_args[ ARG_MAX ];
static C_TLS char *C_exec_env[ ENV_MAX ];
static C_TLS struct utsname C_utsname;
static C_TLS struct flock C_flock;
static C_TLS DIR *temphandle;
static C_TLS struct passwd *C_user;
#ifdef HAVE_GRP_H
static C_TLS struct group *C_group;
#else
static C_TLS struct {
  char *gr_name, gr_passwd;
  int gr_gid;
  char *gr_mem[ 1 ];
} C_group = { "", "", 0, { "" } };
#endif
static C_TLS int C_pipefds[ 2 ];
static C_TLS time_t C_secs;
static C_TLS struct tm C_tm;
static C_TLS fd_set C_fd_sets[ 2 ];
static C_TLS struct timeval C_timeval;
static C_TLS char C_hostbuf[ 256 ];
static C_TLS struct stat C_statbuf;

#define C_mkdir(str)        C_fix(mkdir(C_c_string(str), S_IRWXU | S_IRWXG | S_IRWXO))
#define C_chdir(str)        C_fix(chdir(C_c_string(str)))
#define C_rmdir(str)        C_fix(rmdir(C_c_string(str)))

#define C_opendir(x,h)      C_set_block_item(h, 0, (C_word) opendir(C_c_string(x)))
#define C_closedir(h)       (closedir((DIR *)C_block_item(h, 0)), C_SCHEME_UNDEFINED)
#define C_readdir(h,e)      C_set_block_item(e, 0, (C_word) readdir((DIR *)C_block_item(h, 0)))
#define C_foundfile(e,b)    (strcpy(C_c_string(b), ((struct dirent *) C_block_item(e, 0))->d_name), C_fix(strlen(((struct dirent *) C_block_item(e, 0))->d_name)))

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)                        C_fix(pclose(C_port_file(p)))

#define C_set_file_ptr(port, ptr)  (C_set_block_item(port, 0, (C_block_item(ptr, 0))), C_SCHEME_UNDEFINED)

#define C_fork              fork
#define C_waitpid(id, o)    C_fix(waitpid(C_unfix(id), &C_wait_status, C_unfix(o)))
#define C_getppid           getppid
#define C_kill(id, s)       C_fix(kill(C_unfix(id), C_unfix(s)))
#define C_getuid            getuid
#define C_getgid            getgid
#define C_geteuid           geteuid
#define C_getegid           getegid
#define C_chown(fn, u, g)   C_fix(chown(C_data_pointer(fn), C_unfix(u), C_unfix(g)))
#define C_chmod(fn, m)      C_fix(chmod(C_data_pointer(fn), C_unfix(m)))
#define C_setuid(id)        C_fix(setuid(C_unfix(id)))
#define C_setgid(id)        C_fix(setgid(C_unfix(id)))
#define C_seteuid(id)       C_fix(seteuid(C_unfix(id)))
#define C_setegid(id)       C_fix(setegid(C_unfix(id)))
#define C_setsid(dummy)     C_fix(setsid())
#define C_setpgid(x, y)     C_fix(setpgid(C_unfix(x), C_unfix(y)))
#define C_getpgid(x)        C_fix(getpgid(C_unfix(x)))
#define C_symlink(o, n)     C_fix(symlink(C_data_pointer(o), C_data_pointer(n)))
#define C_do_readlink(f, b)    C_fix(readlink(C_data_pointer(f), C_data_pointer(b), FILENAME_MAX))
#define C_getpwnam(n)       C_mk_bool((C_user = getpwnam((char *)C_data_pointer(n))) != NULL)
#define C_getpwuid(u)       C_mk_bool((C_user = getpwuid(C_unfix(u))) != NULL)
#ifdef HAVE_GRP_H
#define C_getgrnam(n)       C_mk_bool((C_group = getgrnam((char *)C_data_pointer(n))) != NULL)
#define C_getgrgid(u)       C_mk_bool((C_group = getgrgid(C_unfix(u))) != NULL)
#else
#define C_getgrnam(n)       C_SCHEME_FALSE
#define C_getgrgid(n)       C_SCHEME_FALSE
#endif
#define C_pipe(d)           C_fix(pipe(C_pipefds))
#define C_truncate(f, n)    C_fix(truncate((char *)C_data_pointer(f), C_num_to_int(n)))
#define C_ftruncate(f, n)   C_fix(ftruncate(C_unfix(f), C_num_to_int(n)))
#define C_uname             C_fix(uname(&C_utsname))
#define C_fdopen(a, n, fd, m) C_mpointer(a, fdopen(C_unfix(fd), C_c_string(m)))
#define C_C_fileno(p)       C_fix(fileno(C_port_file(p)))
#define C_dup(x)            C_fix(dup(C_unfix(x)))
#define C_dup2(x, y)        C_fix(dup2(C_unfix(x), C_unfix(y)))
#define C_alarm             alarm
#define C_setvbuf(p, m, s)  C_fix(setvbuf(C_port_file(p), NULL, C_unfix(m), C_unfix(s)))
#define C_test_access(fn, m)     C_fix(access((char *)C_data_pointer(fn), C_unfix(m)))
#define C_close(fd)         C_fix(close(C_unfix(fd)))
#define C_sleep             sleep
#define C_umask(m)          C_fix(umask(C_unfix(m)))

#define C_lstat(fn)         C_fix(lstat((char *)C_data_pointer(fn), &C_statbuf))

#ifdef C_GNU_ENV
# define C_unsetenv(s)      (unsetenv((char *)C_data_pointer(s)), C_SCHEME_TRUE)
# define C_setenv(x, y)     C_fix(setenv((char *)C_data_pointer(x), (char *)C_data_pointer(y), 1))
#else
# define C_unsetenv(s)      C_fix(putenv((char *)C_data_pointer(s)))
static C_word C_fcall C_setenv(C_word x, C_word y) {
  char *sx = C_data_pointer(x),
       *sy = C_data_pointer(y);
  int n1 = C_strlen(sx), n2 = C_strlen(sy);
  char *buf = (char *)C_malloc(n1 + n2 + 2);
  if(buf == NULL) return(C_fix(0));
  else {
    C_strcpy(buf, sx);
    buf[ n1 ] = '=';
    C_strcpy(buf + n1 + 1, sy);
    return(C_fix(putenv(buf)));
  }
}
#endif

static void C_fcall C_set_arg_string(char **where, int i, char *a, int len) {
  char *ptr;
  if(a != NULL) {
    ptr = (char *)C_malloc(len + 1);
    C_memcpy(ptr, a, len);
    ptr[ len ] = '\0';
  }
  else ptr = NULL;
  where[ i ] = ptr;
}

static void C_fcall C_free_arg_string(char **where) {
  while((*where) != NULL) C_free(*(where++));
}

static void C_set_timeval(C_word num, struct timeval *tm)
{
  if((num & C_FIXNUM_BIT) != 0) {
    tm->tv_sec = C_unfix(num);
    tm->tv_usec = 0;
  }
  else {
    double i;
    tm->tv_usec = (int)(modf(C_flonum_magnitude(num), &i) * 1000000);
    tm->tv_sec = (int)i;
  }
}

#define C_set_exec_arg(i, a, len)	C_set_arg_string(C_exec_args, i, a, len)
#define C_free_exec_args()		C_free_arg_string(C_exec_args)
#define C_set_exec_env(i, a, len)	C_set_arg_string(C_exec_env, i, a, len)
#define C_free_exec_env()		C_free_arg_string(C_exec_env)

#define C_execvp(f)         C_fix(execvp(C_data_pointer(f), C_exec_args))
#define C_execve(f)         C_fix(execve(C_data_pointer(f), C_exec_args, C_exec_env))

#if defined(__FreeBSD__) || defined(C_MACOSX) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__sgi__) || defined(sgi) || defined(__DragonFly__) || defined(__SUNPRO_C)
static C_TLS int C_uw;
# define C_WIFEXITED(n)      (C_uw = C_unfix(n), C_mk_bool(WIFEXITED(C_uw)))
# define C_WIFSIGNALED(n)    (C_uw = C_unfix(n), C_mk_bool(WIFSIGNALED(C_uw)))
# define C_WIFSTOPPED(n)     (C_uw = C_unfix(n), C_mk_bool(WIFSTOPPED(C_uw)))
# define C_WEXITSTATUS(n)    (C_uw = C_unfix(n), C_fix(WEXITSTATUS(C_uw)))
# define C_WTERMSIG(n)       (C_uw = C_unfix(n), C_fix(WTERMSIG(C_uw)))
# define C_WSTOPSIG(n)       (C_uw = C_unfix(n), C_fix(WSTOPSIG(C_uw)))
#else
# define C_WIFEXITED(n)      C_mk_bool(WIFEXITED(C_unfix(n)))
# define C_WIFSIGNALED(n)    C_mk_bool(WIFSIGNALED(C_unfix(n)))
# define C_WIFSTOPPED(n)     C_mk_bool(WIFSTOPPED(C_unfix(n)))
# define C_WEXITSTATUS(n)    C_fix(WEXITSTATUS(C_unfix(n)))
# define C_WTERMSIG(n)       C_fix(WTERMSIG(C_unfix(n)))
# define C_WSTOPSIG(n)       C_fix(WSTOPSIG(C_unfix(n)))
#endif

#ifdef __CYGWIN__
# define C_mkfifo(fn, m)    C_fix(-1);
#else
# define C_mkfifo(fn, m)    C_fix(mkfifo((char *)C_data_pointer(fn), C_unfix(m)))
#endif

#define C_flock_setup(t, s, n) (C_flock.l_type = C_unfix(t), C_flock.l_start = C_num_to_int(s), C_flock.l_whence = SEEK_SET, C_flock.l_len = C_num_to_int(n), C_SCHEME_UNDEFINED)
#define C_flock_test(p)     (fcntl(fileno(C_port_file(p)), F_GETLK, &C_flock) >= 0 ? (C_flock.l_type == F_UNLCK ? C_fix(0) : C_fix(C_flock.l_pid)) : C_SCHEME_FALSE)
#define C_flock_lock(p)     C_fix(fcntl(fileno(C_port_file(p)), F_SETLK, &C_flock))
#define C_flock_lockw(p)    C_fix(fcntl(fileno(C_port_file(p)), F_SETLKW, &C_flock))

static C_TLS sigset_t C_sigset;
#define C_sigemptyset(d)    (sigemptyset(&C_sigset), C_SCHEME_UNDEFINED)
#define C_sigaddset(s)      (sigaddset(&C_sigset, C_unfix(s)), C_SCHEME_UNDEFINED)
#define C_sigdelset(s)      (sigdelset(&C_sigset, C_unfix(s)), C_SCHEME_UNDEFINED)
#define C_sigismember(s)    C_mk_bool(sigismember(&C_sigset, C_unfix(s)))
#define C_sigprocmask_set(d)        C_fix(sigprocmask(SIG_SETMASK, &C_sigset, NULL))
#define C_sigprocmask_block(d)      C_fix(sigprocmask(SIG_BLOCK, &C_sigset, NULL))
#define C_sigprocmask_unblock(d)    C_fix(sigprocmask(SIG_UNBLOCK, &C_sigset, NULL))

#define C_open(fn, fl, m)   C_fix(open(C_c_string(fn), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_write(fd, b, n)   C_fix(write(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_mkstemp(t)        C_fix(mkstemp(C_c_string(t)))

/* It is assumed that 'int' is-a 'long' */
#define C_ftell(p)          C_fix(ftell(C_port_file(p)))
#define C_fseek(p, n, w)    C_mk_nbool(fseek(C_port_file(p), C_num_to_int(n), C_unfix(w)))
#define C_lseek(fd, o, w)     C_fix(lseek(C_unfix(fd), C_unfix(o), C_unfix(w)))

#define C_zero_fd_set(i)      FD_ZERO(&C_fd_sets[ i ])
#define C_set_fd_set(i, fd)   FD_SET(fd, &C_fd_sets[ i ])
#define C_test_fd_set(i, fd)  FD_ISSET(fd, &C_fd_sets[ i ])
#define C_C_select(m)         C_fix(select(C_unfix(m), &C_fd_sets[ 0 ], &C_fd_sets[ 1 ], NULL, NULL))
#define C_C_select_t(m, t)    (C_set_timeval(t, &C_timeval), \
			       C_fix(select(C_unfix(m), &C_fd_sets[ 0 ], &C_fd_sets[ 1 ], NULL, &C_timeval)))

#define C_ctime(n)          (C_secs = (n), ctime(&C_secs))

#if defined(__SVR4) || defined(C_MACOSX)
/* Seen here: http://lists.samba.org/archive/samba-technical/2002-November/025571.html */

static time_t C_timegm(struct tm *t)
{
  time_t tl, tb;
  struct tm *tg;

  tl = mktime (t);
  if (tl == -1)
    {
      t->tm_hour--;
      tl = mktime (t);
      if (tl == -1)
        return -1; /* can't deal with output from strptime */
      tl += 3600;
    }
  tg = gmtime (&tl);
  tg->tm_isdst = 0;
  tb = mktime (tg);
  if (tb == -1)
    {
      tg->tm_hour--;
      tb = mktime (tg);
      if (tb == -1)
        return -1; /* can't deal with output from gmtime */
      tb += 3600;
    }
  return (tl - (tb - tl));
}
#else
#define C_timegm timegm
#endif

#define cpy_tmvec_to_tmstc08(ptm, v) \
    (memset((ptm), 0, sizeof(struct tm)), \
    (ptm)->tm_sec = C_unfix(C_block_item((v), 0)), \
    (ptm)->tm_min = C_unfix(C_block_item((v), 1)), \
    (ptm)->tm_hour = C_unfix(C_block_item((v), 2)), \
    (ptm)->tm_mday = C_unfix(C_block_item((v), 3)), \
    (ptm)->tm_mon = C_unfix(C_block_item((v), 4)), \
    (ptm)->tm_year = C_unfix(C_block_item((v), 5)), \
    (ptm)->tm_wday = C_unfix(C_block_item((v), 6)), \
    (ptm)->tm_yday = C_unfix(C_block_item((v), 7)), \
    (ptm)->tm_isdst = (C_block_item((v), 8) != C_SCHEME_FALSE))

#define cpy_tmvec_to_tmstc9(ptm, v) \
    (((struct tm *)ptm)->tm_gmtoff = -C_unfix(C_block_item((v), 9)))

#define cpy_tmstc08_to_tmvec(v, ptm) \
    (C_set_block_item((v), 0, C_fix(((struct tm *)ptm)->tm_sec)), \
    C_set_block_item((v), 1, C_fix((ptm)->tm_min)), \
    C_set_block_item((v), 2, C_fix((ptm)->tm_hour)), \
    C_set_block_item((v), 3, C_fix((ptm)->tm_mday)), \
    C_set_block_item((v), 4, C_fix((ptm)->tm_mon)), \
    C_set_block_item((v), 5, C_fix((ptm)->tm_year)), \
    C_set_block_item((v), 6, C_fix((ptm)->tm_wday)), \
    C_set_block_item((v), 7, C_fix((ptm)->tm_yday)), \
    C_set_block_item((v), 8, ((ptm)->tm_isdst ? C_SCHEME_TRUE : C_SCHEME_FALSE)))

#define cpy_tmstc9_to_tmvec(v, ptm) \
    (C_set_block_item((v), 9, C_fix(-(ptm)->tm_gmtoff)))

#define C_tm_set_08(v)  cpy_tmvec_to_tmstc08( &C_tm, (v) )
#define C_tm_set_9(v)   cpy_tmvec_to_tmstc9( &C_tm, (v) )

#define C_tm_get_08(v)  cpy_tmstc08_to_tmvec( (v), &C_tm )
#define C_tm_get_9(v)   cpy_tmstc9_to_tmvec( (v), &C_tm )

#if !defined(C_GNU_ENV) || defined(__CYGWIN__) || defined(__uClinux__)

static struct tm *
C_tm_set( C_word v )
{
  C_tm_set_08( v );
  return &C_tm;
}

static C_word
C_tm_get( C_word v )
{
  C_tm_get_08( v );
  return v;
}

#else

static struct tm *
C_tm_set( C_word v )
{
  C_tm_set_08( v );
  C_tm_set_9( v );
  return &C_tm;
}

static C_word
C_tm_get( C_word v )
{
  C_tm_get_08( v );
  C_tm_get_9( v );
  return v;
}

#endif

#define C_asctime(v)    (asctime(C_tm_set(v)))
#define C_a_mktime(ptr, c, v)  C_flonum(ptr, mktime(C_tm_set(v)))
#define C_a_timegm(ptr, c, v)  C_flonum(ptr, C_timegm(C_tm_set(v)))

#define TIME_STRING_MAXLENGTH 255
static char C_time_string [TIME_STRING_MAXLENGTH + 1];
#undef TIME_STRING_MAXLENGTH

#ifdef __linux__
extern char *strptime(const char *s, const char *format, struct tm *tm);
extern pid_t getpgid(pid_t pid);
#endif

#define C_strptime(s, f, v) \
        (strptime(C_c_string(s), C_c_string(f), &C_tm) ? C_tm_get(v) : C_SCHEME_FALSE)

static gid_t *C_groups = NULL;

#define C_get_gid(n)      C_fix(C_groups[ C_unfix(n) ])
#define C_set_gid(n, id)  (C_groups[ C_unfix(n) ] = C_unfix(id), C_SCHEME_UNDEFINED)
#define C_set_groups(n)   C_fix(setgroups(C_unfix(n), C_groups))

#ifdef TIOCGWINSZ
static int get_tty_size(int p, int *rows, int *cols)
{
 struct winsize tty_size;
 int r;

 memset(&tty_size, 0, sizeof tty_size);

 r = ioctl(p, TIOCGWINSZ, &tty_size);
 if (r == 0) {
    *rows = tty_size.ws_row;
    *cols = tty_size.ws_col;
 }
 return r;
}
#else
static int get_tty_size(int p, int *rows, int *cols)
{
 *rows = *cols = 0;
 return -1;
}
#endif

static int set_file_mtime(char *filename, C_word tm)
{
  struct utimbuf tb;

  tb.actime = tb.modtime = C_num_to_int(tm);
  return utime(filename, &tb);
}


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[461];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,41),40,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,54,57,32,108,111,99,55,48,32,109,115,103,55,49,32,46,32,97,114,103,115,55,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,115,116,97,116,32,102,105,108,101,56,51,32,108,105,110,107,56,52,32,101,114,114,56,53,32,108,111,99,56,54,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,22),40,102,95,50,52,51,51,32,102,57,56,32,46,32,116,109,112,57,55,57,57,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,13),40,102,95,50,52,54,56,32,102,49,50,54,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,13),40,102,95,50,52,55,52,32,102,49,50,57,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,13),40,102,95,50,52,56,48,32,102,49,51,50,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,13),40,102,95,50,52,56,54,32,102,49,51,53,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,13),40,102,95,50,52,57,50,32,102,49,51,56,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,28),40,102,95,50,52,57,56,32,102,105,108,101,49,52,54,32,46,32,116,109,112,49,52,53,49,52,55,41,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,16),40,102,95,50,53,56,56,32,102,105,108,101,49,54,53,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,16),40,102,95,50,53,57,56,32,102,105,108,101,49,54,55,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,16),40,102,95,50,54,48,56,32,102,105,108,101,49,54,57,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,16),40,102,95,50,54,49,56,32,102,105,108,101,49,55,49,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,102,95,50,54,50,56,32,102,105,108,101,49,55,51,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,16),40,102,95,50,54,51,56,32,102,105,108,101,49,55,53,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,16),40,102,95,50,54,52,56,32,102,105,108,101,49,55,55,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,20),40,102,95,50,54,53,56,32,46,32,116,109,112,49,56,51,49,56,52,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,14),40,114,109,100,105,114,32,100,105,114,50,49,51,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,11),40,103,50,50,48,32,102,50,50,56,41,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,49,57,32,103,50,50,53,50,51,53,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,28),40,102,95,50,55,48,52,32,110,97,109,101,50,48,52,32,46,32,116,109,112,50,48,51,50,48,53,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,20),40,102,95,50,56,48,56,32,46,32,116,109,112,50,52,55,50,52,56,41,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,97,50,57,55,53,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,11),40,103,51,48,57,32,109,51,49,49,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,110,115,51,48,51,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,46),40,97,50,57,56,49,32,100,105,114,50,56,54,50,56,55,50,57,50,32,102,105,108,50,56,56,50,56,57,50,57,51,32,101,120,116,50,57,48,50,57,49,50,57,52,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,20),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,50,56,52,41,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,19),40,102,95,50,57,53,53,32,46,32,112,97,116,104,115,50,56,50,41,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,51,49,52,55,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,7),40,97,51,49,53,50,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,7),40,97,51,49,55,54,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,102,115,51,52,48,32,114,51,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,13),40,102,95,51,50,51,55,32,120,51,51,56,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,15),40,102,95,51,50,53,54,32,46,32,95,51,51,50,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,15),40,102,95,51,50,52,56,32,46,32,95,51,51,49,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,82),40,35,35,115,121,115,35,102,105,110,100,45,102,105,108,101,115,32,100,105,114,51,49,56,32,112,114,101,100,51,49,57,32,97,99,116,105,111,110,51,50,48,32,105,100,51,50,49,32,108,105,109,105,116,51,50,50,32,102,111,108,108,111,119,51,50,51,32,100,111,116,51,50,52,32,108,111,99,51,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,42),40,98,111,100,121,51,55,54,32,112,114,101,100,51,56,56,32,97,99,116,105,111,110,51,56,57,32,105,100,51,57,48,32,108,105,109,105,116,51,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,50),40,100,101,102,45,108,105,109,105,116,51,56,49,32,37,112,114,101,100,51,55,50,51,57,51,32,37,97,99,116,105,111,110,51,55,51,51,57,52,32,37,105,100,51,55,52,51,57,53,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,37),40,100,101,102,45,105,100,51,56,48,32,37,112,114,101,100,51,55,50,51,57,55,32,37,97,99,116,105,111,110,51,55,51,51,57,56,41,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,17),40,97,51,50,57,51,32,120,52,48,49,32,121,52,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,27),40,100,101,102,45,97,99,116,105,111,110,51,55,57,32,37,112,114,101,100,51,55,50,52,48,48,41,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,14),40,97,51,51,48,52,32,46,32,95,52,48,52,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,112,114,101,100,51,55,56,41,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,51,52,48,54,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,7),40,97,51,52,48,57,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,7),40,97,51,52,49,50,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,51,52,49,53,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,18),40,102,95,51,52,50,49,32,120,52,50,50,32,121,52,50,51,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,51,52,49,56,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,15),40,102,95,51,52,50,57,32,46,32,95,52,50,48,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,7),40,97,51,52,50,54,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,19),40,97,51,51,56,50,32,46,32,116,109,112,52,49,55,52,49,56,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,25),40,102,95,51,50,54,50,32,100,105,114,51,54,52,32,46,32,97,114,103,115,51,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,45,116,105,109,101,45,118,101,99,116,111,114,32,108,111,99,52,52,55,32,116,109,52,52,56,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,20),40,102,95,51,52,54,54,32,46,32,116,109,112,52,53,53,52,53,54,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,20),40,102,95,51,53,48,48,32,46,32,116,109,112,52,54,57,52,55,48,41,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,20),40,102,95,51,53,52,52,32,46,32,116,109,112,52,56,57,52,57,48,41,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,14),40,102,95,51,53,57,53,32,116,109,53,48,48,41,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,26),40,102,95,51,54,50,48,32,116,109,53,50,51,32,46,32,116,109,112,53,50,50,53,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,16),40,102,95,51,54,56,55,32,97,53,54,56,53,55,49,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,16),40,102,95,51,54,57,52,32,97,53,55,51,53,55,54,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,33),40,102,95,51,55,53,49,32,102,100,54,50,56,32,99,109,100,54,50,57,32,46,32,116,109,112,54,50,55,54,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,39),40,102,95,51,55,57,55,32,102,105,108,101,110,97,109,101,54,52,50,32,102,108,97,103,115,54,52,51,32,46,32,109,111,100,101,54,52,52,41,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,14),40,102,95,51,56,51,53,32,102,100,54,53,50,41,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,34),40,102,95,51,56,53,48,32,102,100,54,53,53,32,115,105,122,101,54,53,54,32,46,32,98,117,102,102,101,114,54,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,34),40,102,95,51,56,57,50,32,102,100,54,54,54,32,98,117,102,102,101,114,54,54,55,32,46,32,115,105,122,101,54,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,20),40,102,95,51,57,51,49,32,116,101,109,112,108,97,116,101,54,55,55,41,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,6),40,103,55,57,53,41,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,57,52,32,103,56,48,48,56,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,6),40,103,55,55,53,41,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,55,52,32,103,55,56,48,55,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,6),40,103,55,52,53,41,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,18),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,6),40,103,55,49,56,41,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,18),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,49,55,41,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,37),40,102,95,51,57,56,57,32,102,100,115,114,55,48,51,32,102,100,115,119,55,48,52,32,46,32,116,105,109,101,111,117,116,55,48,53,41,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,35),40,102,95,52,50,56,49,32,112,111,114,116,56,49,56,32,112,111,115,56,49,57,32,46,32,119,104,101,110,99,101,56,50,48,41,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,100,105,114,56,53,53,41,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,7),40,97,52,52,49,53,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,47),40,97,52,52,50,49,32,100,105,114,56,54,51,56,54,52,56,54,57,32,102,105,108,101,56,54,53,56,54,54,56,55,48,32,101,120,116,56,54,55,56,54,56,56,55,49,41,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,28),40,102,95,52,51,52,51,32,110,97,109,101,56,52,50,32,46,32,116,109,112,56,52,49,56,52,51,41,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,16),40,102,95,52,52,55,54,32,110,97,109,101,56,56,50,41};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,33),40,99,104,101,99,107,32,108,111,99,56,57,49,32,99,109,100,56,57,50,32,105,110,112,56,57,51,32,114,56,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,22),40,102,95,52,53,51,49,32,99,109,100,56,57,55,32,46,32,109,56,57,56,41,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,22),40,102,95,52,53,54,55,32,99,109,100,57,48,54,32,46,32,109,57,48,55,41,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,16),40,102,95,52,54,48,51,32,112,111,114,116,57,49,53,41};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,7),40,97,52,54,50,55,41,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,20),40,97,52,54,51,51,32,46,32,114,101,115,117,108,116,115,57,51,48,41,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,33),40,102,95,52,54,49,57,32,99,109,100,57,50,54,32,112,114,111,99,57,50,55,32,46,32,109,111,100,101,57,50,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,7),40,97,52,54,53,49,41,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,20),40,97,52,54,53,55,32,46,32,114,101,115,117,108,116,115,57,51,55,41,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,33),40,102,95,52,54,52,51,32,99,109,100,57,51,51,32,112,114,111,99,57,51,52,32,46,32,109,111,100,101,57,51,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,20),40,97,52,54,55,54,32,46,32,114,101,115,117,108,116,115,57,52,53,41,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,34),40,102,95,52,54,54,55,32,99,109,100,57,52,48,32,116,104,117,110,107,57,52,49,32,46,32,109,111,100,101,57,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,20),40,97,52,54,57,54,32,46,32,114,101,115,117,108,116,115,57,53,53,41,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,34),40,102,95,52,54,56,55,32,99,109,100,57,53,48,32,116,104,117,110,107,57,53,49,32,46,32,109,111,100,101,57,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,8),40,102,95,52,55,48,55,41};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,15),40,102,95,52,55,53,52,32,115,105,103,57,56,57,41,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,23),40,102,95,52,55,54,51,32,115,105,103,57,57,49,32,112,114,111,99,57,57,50,41,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,27),40,102,95,52,55,55,54,32,114,101,97,115,111,110,57,57,54,32,115,116,97,116,101,57,57,55,41,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,48,48,54,41,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,17),40,102,95,52,55,57,52,32,115,105,103,115,49,48,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,115,105,103,115,49,48,50,55,32,109,97,115,107,49,48,50,56,41};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,8),40,102,95,52,56,52,51,41};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,16),40,102,95,52,56,55,53,32,115,105,103,49,48,51,50,41};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,16),40,102,95,52,56,56,49,32,115,105,103,49,48,51,53,41};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,16),40,102,95,52,56,57,54,32,115,105,103,49,48,51,57,41};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,8),40,102,95,52,57,49,52,41};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,31),40,102,95,52,57,54,56,32,117,115,101,114,49,48,55,50,32,46,32,116,109,112,49,48,55,49,49,48,55,51,41,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,8),40,102,95,53,48,51,53,41};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,8),40,102,95,53,48,52,57,41};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,49,49,51,41,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,32),40,102,95,53,48,55,52,32,103,114,111,117,112,49,48,57,57,32,46,32,116,109,112,49,48,57,56,49,49,48,48,41};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,49,51,50,41,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,8),40,102,95,53,49,54,55,41};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,26),40,100,111,108,111,111,112,49,49,51,57,32,108,115,116,49,49,52,49,32,105,49,49,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,17),40,102,95,53,50,51,48,32,108,115,116,48,49,49,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,24),40,102,95,53,51,48,52,32,117,115,101,114,49,49,53,57,32,105,100,49,49,54,48,41};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,24),40,102,95,53,51,54,56,32,102,110,97,109,101,49,50,48,52,32,109,49,50,48,53,41};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,31),40,102,95,53,51,57,53,32,102,110,49,50,48,57,32,117,105,100,49,50,49,48,32,103,105,100,49,50,49,49,41,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,36),40,99,104,101,99,107,32,102,105,108,101,110,97,109,101,49,50,49,54,32,97,99,99,49,50,49,55,32,108,111,99,49,50,49,56,41,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,21),40,102,95,53,52,52,57,32,102,105,108,101,110,97,109,101,49,50,50,50,41,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,21),40,102,95,53,52,53,53,32,102,105,108,101,110,97,109,101,49,50,50,51,41,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,21),40,102,95,53,52,54,49,32,102,105,108,101,110,97,109,101,49,50,50,52,41,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,8),40,102,95,53,52,54,55,41};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,24),40,102,95,53,52,56,54,32,111,108,100,49,50,52,52,32,110,101,119,49,50,52,53,41};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,32),40,102,95,53,53,50,52,32,102,110,97,109,101,49,50,53,53,32,46,32,116,109,112,49,50,53,52,49,50,53,54,41};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,24),40,102,95,53,54,49,49,32,111,108,100,49,50,55,57,32,110,101,119,49,50,56,48,41};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,28),40,109,111,100,101,32,105,110,112,49,50,56,56,32,109,49,50,56,57,32,108,111,99,49,50,57,48,41,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,36),40,99,104,101,99,107,32,108,111,99,49,51,48,48,32,102,100,49,51,48,49,32,105,110,112,49,51,48,50,32,114,49,51,48,51,41,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,23),40,102,95,53,54,56,56,32,102,100,49,51,48,54,32,46,32,109,49,51,48,55,41,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,23),40,102,95,53,55,48,50,32,102,100,49,51,48,57,32,46,32,109,49,51,49,48,41,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,17),40,102,95,53,55,49,54,32,112,111,114,116,49,51,49,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,26),40,102,95,53,55,54,49,32,111,108,100,49,51,50,52,32,46,32,110,101,119,49,51,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,8),40,114,101,97,100,121,63,41};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,7),40,102,101,116,99,104,41,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,7),40,97,53,57,52,54,41,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,7),40,97,53,57,53,57,41,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,7),40,97,53,57,55,49,41,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,7),40,97,53,57,57,50,41,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,28),40,108,111,111,112,32,110,49,51,57,49,32,109,49,51,57,50,32,115,116,97,114,116,49,51,57,51,41,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,41),40,97,54,48,48,49,32,112,111,114,116,49,51,56,54,32,110,49,51,56,55,32,100,101,115,116,49,51,56,56,32,115,116,97,114,116,49,51,56,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,24),40,98,117,109,112,101,114,32,99,117,114,49,52,49,49,32,112,116,114,49,52,49,50,41};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,7),40,97,54,49,54,51,41,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,42),40,97,54,49,54,57,32,100,101,115,116,49,52,51,49,49,52,51,50,49,52,51,53,32,99,111,110,116,63,49,52,51,51,49,52,51,52,49,52,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,116,114,49,52,48,57,41,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,26),40,97,54,48,55,55,32,112,111,114,116,49,52,48,54,32,108,105,109,105,116,49,52,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,16),40,97,54,49,57,48,32,112,111,114,116,49,52,52,49,41};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,45),40,102,95,53,55,56,56,32,108,111,99,49,51,51,55,32,110,97,109,49,51,51,56,32,102,100,49,51,51,57,32,46,32,116,109,112,49,51,51,54,49,51,52,48,41,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,22),40,112,111,107,101,32,115,116,114,49,52,55,49,32,108,101,110,49,52,55,50,41,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,15),40,97,54,51,53,52,32,115,116,114,49,52,57,54,41,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,7),40,97,54,51,54,48,41,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,7),40,97,54,51,56,49,41,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,16),40,102,95,54,51,57,48,32,115,116,114,49,52,55,57,41};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,32,114,101,109,49,52,56,52,32,115,116,97,114,116,49,52,56,53,32,108,101,110,49,52,56,54,41};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,16),40,102,95,54,52,48,53,32,115,116,114,49,52,56,50,41};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,45),40,102,95,54,50,55,48,32,108,111,99,49,52,53,51,32,110,97,109,49,52,53,52,32,102,100,49,52,53,53,32,46,32,116,109,112,49,52,53,50,49,52,53,54,41,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,26),40,102,95,54,53,49,56,32,102,110,97,109,101,49,53,48,52,32,111,102,102,49,53,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,33),40,115,101,116,117,112,32,112,111,114,116,49,53,49,50,32,97,114,103,115,49,53,49,51,32,108,111,99,49,53,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,30),40,101,114,114,32,109,115,103,49,53,50,57,32,108,111,99,107,49,53,51,48,32,108,111,99,49,53,51,49,41,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,28),40,102,95,54,54,52,57,32,112,111,114,116,49,53,51,50,32,46,32,97,114,103,115,49,53,51,51,41,0,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,28),40,102,95,54,54,54,52,32,112,111,114,116,49,53,51,53,32,46,32,97,114,103,115,49,53,51,54,41,0,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,28),40,102,95,54,54,55,57,32,112,111,114,116,49,53,51,56,32,46,32,97,114,103,115,49,53,51,57,41,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,17),40,102,95,54,55,48,54,32,108,111,99,107,49,53,53,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,29),40,102,95,54,55,51,52,32,102,110,97,109,101,49,53,53,57,32,46,32,109,111,100,101,49,53,54,48,41,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,21),40,102,95,54,55,55,55,32,102,105,108,101,110,97,109,101,49,53,54,53,41,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,24),40,102,95,54,56,48,51,32,118,97,114,49,53,54,57,32,118,97,108,49,53,55,48,41};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,16),40,102,95,54,56,50,48,32,118,97,114,49,53,55,53,41};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,12),40,115,99,97,110,32,106,49,53,56,57,41,0,0,0,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,53,56,54,41,0,0,0,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,8),40,102,95,54,56,52,48,41};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,60),40,102,95,54,57,52,51,32,97,100,100,114,49,54,50,48,32,108,101,110,49,54,50,49,32,112,114,111,116,49,54,50,50,32,102,108,97,103,49,54,50,51,32,102,100,49,54,50,52,32,46,32,111,102,102,49,54,50,53,41,0,0,0,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,27),40,102,95,55,48,48,53,32,109,109,97,112,49,54,52,50,32,46,32,108,101,110,49,54,52,51,41,0,0,0,0,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,17),40,102,95,55,48,52,48,32,109,109,97,112,49,54,52,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,14),40,102,95,55,48,52,57,32,120,49,54,53,48,41,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,29),40,102,95,55,48,54,53,32,116,109,49,54,55,49,32,46,32,116,109,112,49,54,55,48,49,54,55,50,41,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,30),40,102,95,55,49,51,52,32,116,105,109,49,55,48,48,32,46,32,116,109,112,49,54,57,57,49,55,48,49,41,0,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,15),40,102,95,55,49,56,48,32,116,109,49,55,49,49,41,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,8),40,102,95,55,49,57,53,41};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,19),40,102,95,55,50,48,55,32,46,32,99,111,100,101,49,55,50,52,41,0,0,0,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,18),40,102,95,55,50,50,51,32,97,49,55,50,54,49,55,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,37),40,102,95,55,50,51,48,32,112,111,114,116,49,55,51,49,32,109,111,100,101,49,55,51,50,32,46,32,115,105,122,101,49,55,51,51,41,0,0,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,17),40,102,95,55,50,56,57,32,112,111,114,116,49,55,52,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,116,101,114,109,105,110,97,108,45,99,104,101,99,107,32,99,97,108,108,101,114,49,55,52,57,32,112,111,114,116,49,55,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,17),40,102,95,55,51,52,48,32,112,111,114,116,49,55,54,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,17),40,102,95,55,51,54,51,32,112,111,114,116,49,55,55,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,8),40,102,95,55,51,57,56,41};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,20),40,102,95,55,52,49,50,32,46,32,116,104,117,110,107,49,55,57,53,41,0,0,0,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,28),40,115,101,116,97,114,103,32,97,49,56,49,55,49,56,50,51,32,97,49,56,49,54,49,56,50,52,41,0,0,0,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,28),40,115,101,116,101,110,118,32,97,49,56,50,57,49,56,51,53,32,97,49,56,50,56,49,56,51,54,41,0,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,56,54,50,32,105,49,56,54,53,41,0,0,0,0,0,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,25),40,100,111,108,111,111,112,49,56,53,56,32,97,108,49,56,54,48,32,105,49,56,54,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,35),40,102,95,55,52,57,50,32,102,105,108,101,110,97,109,101,49,56,52,53,32,46,32,116,109,112,49,56,52,52,49,56,52,54,41,0,0,0,0,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,27),40,102,95,55,54,54,53,32,112,105,100,49,56,56,53,32,110,111,104,97,110,103,49,56,56,54,41,0,0,0,0,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,7),40,97,55,55,49,49,41,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,36),40,97,55,55,49,55,32,101,112,105,100,49,57,48,56,32,101,110,111,114,109,49,57,48,57,32,101,99,111,100,101,49,57,49,48,41,0,0,0,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,19),40,102,95,55,54,56,50,32,46,32,97,114,103,115,49,56,57,51,41,0,0,0,0,0};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,8),40,102,95,55,55,54,48,41};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,8),40,102,95,55,55,54,51,41};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,18),40,102,95,55,55,54,54,32,97,49,57,49,57,49,57,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li202[] C_aligned={C_lihdr(0,0,25),40,102,95,55,55,55,51,32,105,100,49,57,50,52,32,46,32,115,105,103,49,57,50,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li203[] C_aligned={C_lihdr(0,0,8),40,102,95,55,56,48,48,41};
static C_char C_TLS li204[] C_aligned={C_lihdr(0,0,19),40,102,95,55,56,48,57,32,99,109,100,108,105,110,49,57,51,53,41,0,0,0,0,0};
static C_char C_TLS li205[] C_aligned={C_lihdr(0,0,25),40,102,95,55,56,49,53,32,102,49,57,51,55,32,46,32,97,114,103,115,49,57,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li206[] C_aligned={C_lihdr(0,0,7),40,97,55,56,56,55,41,0};
static C_char C_TLS li207[] C_aligned={C_lihdr(0,0,29),40,97,55,56,57,51,32,95,49,57,54,49,32,102,108,103,49,57,54,50,32,99,111,100,49,57,54,51,41,0,0,0};
static C_char C_TLS li208[] C_aligned={C_lihdr(0,0,8),40,102,95,55,56,55,51,41};
static C_char C_TLS li209[] C_aligned={C_lihdr(0,0,68),40,109,97,107,101,45,111,110,45,99,108,111,115,101,32,108,111,99,49,57,53,52,32,112,105,100,49,57,53,53,32,99,108,115,118,101,99,49,57,53,54,32,105,100,120,49,57,53,55,32,105,100,120,97,49,57,53,56,32,105,100,120,98,49,57,53,57,41,0,0,0,0};
static C_char C_TLS li210[] C_aligned={C_lihdr(0,0,7),40,97,55,57,49,54,41,0};
static C_char C_TLS li211[] C_aligned={C_lihdr(0,0,19),40,97,55,57,50,50,32,105,49,57,54,56,32,111,49,57,54,57,41,0,0,0,0,0};
static C_char C_TLS li212[] C_aligned={C_lihdr(0,0,22),40,110,101,101,100,101,100,45,112,105,112,101,32,112,111,114,116,49,57,54,54,41,0,0};
static C_char C_TLS li213[] C_aligned={C_lihdr(0,0,34),40,99,111,110,110,101,99,116,45,112,97,114,101,110,116,32,112,105,112,101,49,57,55,49,32,112,111,114,116,49,57,55,50,41,0,0,0,0,0,0};
static C_char C_TLS li214[] C_aligned={C_lihdr(0,0,43),40,99,111,110,110,101,99,116,45,99,104,105,108,100,32,112,105,112,101,49,57,55,57,32,112,111,114,116,49,57,56,48,32,115,116,100,102,100,49,57,56,49,41,0,0,0,0,0};
static C_char C_TLS li215[] C_aligned={C_lihdr(0,0,7),40,97,55,57,57,55,41,0};
static C_char C_TLS li216[] C_aligned={C_lihdr(0,0,67),40,115,112,97,119,110,32,99,109,100,49,57,57,50,32,97,114,103,115,49,57,57,51,32,101,110,118,49,57,57,52,32,115,116,100,111,117,116,102,49,57,57,53,32,115,116,100,105,110,102,49,57,57,54,32,115,116,100,101,114,114,102,49,57,57,55,41,0,0,0,0,0};
static C_char C_TLS li217[] C_aligned={C_lihdr(0,0,59),40,105,110,112,117,116,45,112,111,114,116,32,108,111,99,50,48,48,52,32,99,109,100,50,48,48,54,32,112,105,112,101,50,48,48,55,32,115,116,100,102,50,48,48,56,32,111,110,45,99,108,111,115,101,50,48,49,48,41,0,0,0,0,0};
static C_char C_TLS li218[] C_aligned={C_lihdr(0,0,60),40,111,117,116,112,117,116,45,112,111,114,116,32,108,111,99,50,48,49,50,32,99,109,100,50,48,49,52,32,112,105,112,101,50,48,49,53,32,115,116,100,102,50,48,49,54,32,111,110,45,99,108,111,115,101,50,48,49,56,41,0,0,0,0};
static C_char C_TLS li219[] C_aligned={C_lihdr(0,0,7),40,97,56,48,52,55,41,0};
static C_char C_TLS li220[] C_aligned={C_lihdr(0,0,50),40,97,56,48,53,51,32,105,110,112,105,112,101,50,48,50,55,32,111,117,116,112,105,112,101,50,48,50,56,32,101,114,114,112,105,112,101,50,48,50,57,32,112,105,100,50,48,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li221[] C_aligned={C_lihdr(0,0,76),40,102,95,56,48,52,50,32,108,111,99,50,48,50,48,32,99,109,100,50,48,50,49,32,97,114,103,115,50,48,50,50,32,101,110,118,50,48,50,51,32,115,116,100,111,117,116,102,50,48,50,52,32,115,116,100,105,110,102,50,48,50,53,32,115,116,100,101,114,114,102,50,48,50,54,41,0,0,0,0};
static C_char C_TLS li222[] C_aligned={C_lihdr(0,0,21),40,103,50,48,52,53,32,103,50,48,53,54,50,48,53,55,50,48,53,56,41,0,0,0};
static C_char C_TLS li223[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,48,52,52,32,103,50,48,53,48,50,48,54,50,41,0,0,0};
static C_char C_TLS li224[] C_aligned={C_lihdr(0,0,19),40,99,104,107,115,116,114,108,115,116,32,108,115,116,50,48,52,49,41,0,0,0,0,0};
static C_char C_TLS li225[] C_aligned={C_lihdr(0,0,7),40,97,56,49,53,49,41,0};
static C_char C_TLS li226[] C_aligned={C_lihdr(0,0,38),40,97,56,49,53,55,32,105,110,50,48,54,56,32,111,117,116,50,48,54,57,32,112,105,100,50,48,55,48,32,101,114,114,50,48,55,49,41,0,0};
static C_char C_TLS li227[] C_aligned={C_lihdr(0,0,52),40,37,112,114,111,99,101,115,115,32,108,111,99,50,48,51,53,32,101,114,114,63,50,48,51,54,32,99,109,100,50,48,51,55,32,97,114,103,115,50,48,51,56,32,101,110,118,50,48,51,57,41,0,0,0,0};
static C_char C_TLS li228[] C_aligned={C_lihdr(0,0,30),40,102,95,56,49,56,52,32,99,109,100,50,48,56,48,32,46,32,116,109,112,50,48,55,57,50,48,56,49,41,0,0};
static C_char C_TLS li229[] C_aligned={C_lihdr(0,0,30),40,102,95,56,50,51,53,32,99,109,100,50,48,57,55,32,46,32,116,109,112,50,48,57,54,50,48,57,56,41,0,0};
static C_char C_TLS li230[] C_aligned={C_lihdr(0,0,16),40,102,95,56,50,57,57,32,100,105,114,50,49,49,56,41};
static C_char C_TLS li231[] C_aligned={C_lihdr(0,0,15),40,97,56,51,50,49,32,112,105,100,49,50,51,51,41,0};
static C_char C_TLS li232[] C_aligned={C_lihdr(0,0,24),40,97,56,51,51,57,32,112,105,100,49,50,51,56,32,112,103,105,100,49,50,51,57,41};
static C_char C_TLS li233[] C_aligned={C_lihdr(0,0,7),40,97,56,51,54,48,41,0};
static C_char C_TLS li234[] C_aligned={C_lihdr(0,0,14),40,97,56,51,54,51,32,105,100,49,48,54,52,41,0,0};
static C_char C_TLS li235[] C_aligned={C_lihdr(0,0,7),40,97,56,51,55,56,41,0};
static C_char C_TLS li236[] C_aligned={C_lihdr(0,0,14),40,97,56,51,56,49,32,105,100,49,48,53,57,41,0,0};
static C_char C_TLS li237[] C_aligned={C_lihdr(0,0,7),40,97,56,51,57,54,41,0};
static C_char C_TLS li238[] C_aligned={C_lihdr(0,0,14),40,97,56,51,57,57,32,105,100,49,48,53,52,41,0,0};
static C_char C_TLS li239[] C_aligned={C_lihdr(0,0,7),40,97,56,52,49,52,41,0};
static C_char C_TLS li240[] C_aligned={C_lihdr(0,0,14),40,97,56,52,49,55,32,105,100,49,48,52,57,41,0,0};
static C_char C_TLS li241[] C_aligned={C_lihdr(0,0,13),40,97,56,52,51,50,32,110,49,48,52,50,41,0,0,0};
static C_char C_TLS li242[] C_aligned={C_lihdr(0,0,15),40,97,56,52,51,56,32,112,111,114,116,56,51,48,41,0};
static C_char C_TLS li243[] C_aligned={C_lihdr(0,0,19),40,97,56,52,55,57,32,46,32,116,109,112,52,51,51,52,51,52,41,0,0,0,0,0};
static C_char C_TLS li244[] C_aligned={C_lihdr(0,0,13),40,97,56,53,49,51,32,117,109,52,52,52,41,0,0,0};
static C_char C_TLS li245[] C_aligned={C_lihdr(0,0,12),40,97,56,53,49,57,32,102,49,48,57,41,0,0,0,0};
static C_char C_TLS li246[] C_aligned={C_lihdr(0,0,17),40,97,56,53,50,53,32,102,49,49,49,32,116,49,49,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li247[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k8289 */
static C_word C_fcall stub2113(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub2113(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_r=C_fix((C_word)chroot(t0));
return C_r;}

/* from k7769 */
static C_word C_fcall stub1920(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1920(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_sleep(t0));
return C_r;}

/* from f_7763 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static C_word C_fcall stub1916(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1916(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getppid());
return C_r;}

/* from f_7760 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static C_word C_fcall stub1913(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1913(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from freeenv */
static C_word C_fcall stub1838(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1838(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_env();
return C_r;}

/* from k7484 */
static C_word C_fcall stub1831(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1831(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_env(t0,t1,t2);
return C_r;}

/* from freeargs */
static C_word C_fcall stub1826(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1826(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_args();
return C_r;}

/* from k7465 */
static C_word C_fcall stub1819(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1819(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from k7441 */
static C_word C_fcall stub1806(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1806(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

/* from fork */
static C_word C_fcall stub1793(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1793(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_fork());
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1786(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1786(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
if(gethostname(C_hostbuf, 256) == -1) C_return(NULL);else C_return(C_hostbuf);
C_ret:
#undef return

return C_r;}

/* from k7360 */
static C_word C_fcall stub1767(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1767(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int *t1=(int *)C_c_pointer_nn(C_a1);
int *t2=(int *)C_c_pointer_nn(C_a2);
C_r=C_fix((C_word)get_tty_size(t0,t1,t2));
return C_r;}

/* from k7337 */
static C_word C_fcall stub1756(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1756(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)ttyname(t0));
return C_r;}

/* from k7226 */
static C_word C_fcall stub1727(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1727(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_alarm(t0));
return C_r;}

/* from k7204 */
static C_word C_fcall stub1721(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1721(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1715(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1715(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;

#if !defined(__CYGWIN__) && !defined(__SVR4) && !defined(__uClinux__) && !defined(__hpux__)
time_t clock = time(NULL);struct tm *ltm = C_localtime(&clock);char *z = ltm ? (char *)ltm->tm_zone : 0;
#else
char *z = (daylight ? tzname[1] : tzname[0]);
#endif
C_return(z);
C_ret:
#undef return

return C_r;}

/* from strptime */
static C_word C_fcall stub1690(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1690(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_word t2=(C_word )(C_a2);
C_r=((C_word)C_strptime(t0,t1,t2));
return C_r;}

/* from strftime */
static C_word C_fcall stub1661(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1661(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1));
return C_r;}

/* from asctime */
static C_word C_fcall stub1655(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1655(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0));
return C_r;}

/* from k6999 */
static C_word C_fcall stub1636(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1636(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
C_r=C_fix((C_word)munmap(t0,t1));
return C_r;}

/* from k6937 */
static C_word C_fcall stub1609(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5) C_regparm;
C_regparm static C_word C_fcall stub1609(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
int t5=(int )C_num_to_int(C_a5);
C_r=C_mpointer_or_false(&C_a,(void*)mmap(t0,t1,t2,t3,t4,t5));
return C_r;}

/* from k6837 */
static C_word C_fcall stub1581(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1581(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
return C_r;}

/* from k5594 in k5590 */
static C_word C_fcall stub1271(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1271(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
C_r=C_fix((C_word)link(t0,t1));
return C_r;}

/* from k5294 */
static C_word C_fcall stub1153(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1153(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)initgroups(t0,t1));
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub1123(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1123(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int n=(int )C_unfix(C_a0);
if(C_groups != NULL) C_free(C_groups);C_groups = (gid_t *)C_malloc(sizeof(gid_t) * n);if(C_groups == NULL) C_return(0);else C_return(1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1118(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1118(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int n=(int )C_unfix(C_a0);
C_return(getgroups(n, C_groups));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1089(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1089(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
C_return(C_group->gr_mem[ i ]);
C_ret:
#undef return

return C_r;}

/* from a8360 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static C_word C_fcall stub1062(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1062(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getegid());
return C_r;}

/* from a8378 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static C_word C_fcall stub1057(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1057(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getgid());
return C_r;}

/* from a8396 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static C_word C_fcall stub1052(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1052(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_geteuid());
return C_r;}

/* from a8414 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static C_word C_fcall stub1047(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1047(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getuid());
return C_r;}

/* from k3986 */
static C_word C_fcall stub699(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub699(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_mk_bool(C_test_fd_set(t0,t1));
return C_r;}

/* from k3976 */
static C_word C_fcall stub693(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub693(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_set_fd_set(t0,t1);
return C_r;}

/* from k3966 */
static C_word C_fcall stub688(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub688(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_zero_fd_set(t0);
return C_r;}

/* from k3748 */
static C_word C_fcall stub618(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub618(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
long t2=(long )C_num_to_long(C_a2);
C_r=C_fix((C_word)fcntl(t0,t1,t2));
return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub574(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub574(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
fd_set in;struct timeval tm;FD_ZERO(&in);FD_SET(fd, &in);tm.tv_sec = tm.tv_usec = 0;if(select(fd + 1, &in, NULL, NULL, &tm) == -1) C_return(-1);else C_return(FD_ISSET(fd, &in) ? 1 : 0);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub569(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub569(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
int val = fcntl(fd, F_GETFL, 0);if(val == -1) C_return(0);C_return(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1);
C_ret:
#undef return

return C_r;}

/* from strftime */
static C_word C_fcall stub513(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub513(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1));
return C_r;}

/* from asctime */
static C_word C_fcall stub507(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub507(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0));
return C_r;}

/* from k3541 */
static C_word C_fcall stub481(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub481(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from k8534 in k8557 in a8525 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static C_word C_fcall stub118(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub118(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_fix((C_word)set_file_mtime(t0,t1));
return C_r;}

/* from k2368 */
static C_word C_fcall stub65(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub65(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2344)
static void C_ccall f_2344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2347)
static void C_ccall f_2347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2350)
static void C_ccall f_2350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2353)
static void C_ccall f_2353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2356)
static void C_ccall f_2356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2359)
static void C_ccall f_2359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8526)
static void C_ccall f_8526(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8559)
static void C_ccall f_8559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8536)
static void C_ccall f_8536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8546)
static void C_fcall f_8546(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8520)
static void C_ccall f_8520(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8524)
static void C_ccall f_8524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2466)
static void C_ccall f_2466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8514)
static void C_ccall f_8514(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8480)
static void C_ccall f_8480(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_8480)
static void C_ccall f_8480r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_8484)
static void C_ccall f_8484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3445)
static void C_ccall f_3445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8439)
static void C_ccall f_8439(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8455)
static void C_ccall f_8455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8443)
static void C_ccall f_8443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8446)
static void C_ccall f_8446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4341)
static void C_ccall f_4341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4752)
static void C_ccall f_4752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8433)
static void C_ccall f_8433(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4912)
static void C_ccall f_4912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8418)
static void C_ccall f_8418(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8428)
static void C_ccall f_8428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8415)
static void C_ccall f_8415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4954)
static void C_ccall f_4954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8400)
static void C_ccall f_8400(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8410)
static void C_ccall f_8410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8397)
static void C_ccall f_8397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4958)
static void C_ccall f_4958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8382)
static void C_ccall f_8382(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8392)
static void C_ccall f_8392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8379)
static void C_ccall f_8379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4962)
static void C_ccall f_4962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8364)
static void C_ccall f_8364(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8374)
static void C_ccall f_8374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8361)
static void C_ccall f_8361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4966)
static void C_ccall f_4966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8340)
static void C_ccall f_8340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8356)
static void C_ccall f_8356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8322)
static void C_ccall f_8322(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8335)
static void C_ccall f_8335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8329)
static void C_ccall f_8329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5484)
static void C_ccall f_5484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5523)
static void C_ccall f_5523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8299)
static void C_ccall f_8299(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8291)
static void C_ccall f_8291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8309)
static void C_fcall f_8309(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8235)
static void C_ccall f_8235(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8235)
static void C_ccall f_8235r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8184)
static void C_ccall f_8184(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8184)
static void C_ccall f_8184r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8098)
static void C_fcall f_8098(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8178)
static void C_ccall f_8178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8182)
static void C_ccall f_8182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8144)
static void C_ccall f_8144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8147)
static void C_ccall f_8147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8158)
static void C_ccall f_8158(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8152)
static void C_ccall f_8152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8100)
static void C_fcall f_8100(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8117)
static void C_fcall f_8117(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8127)
static void C_ccall f_8127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8105)
static void C_fcall f_8105(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8042)
static void C_ccall f_8042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_8054)
static void C_ccall f_8054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8085)
static void C_ccall f_8085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8065)
static void C_ccall f_8065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8081)
static void C_ccall f_8081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8069)
static void C_ccall f_8069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8077)
static void C_ccall f_8077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8073)
static void C_ccall f_8073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8048)
static void C_ccall f_8048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8031)
static void C_fcall f_8031(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8035)
static void C_ccall f_8035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8020)
static void C_fcall f_8020(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8024)
static void C_ccall f_8024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7975)
static void C_fcall f_7975(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_7979)
static void C_ccall f_7979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7982)
static void C_ccall f_7982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7985)
static void C_ccall f_7985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7992)
static void C_fcall f_7992(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7998)
static void C_ccall f_7998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8002)
static void C_ccall f_8002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8005)
static void C_ccall f_8005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8008)
static void C_ccall f_8008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7996)
static void C_ccall f_7996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7942)
static void C_fcall f_7942(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7955)
static void C_ccall f_7955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7867)
static void C_ccall f_7867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7928)
static void C_fcall f_7928(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7941)
static void C_ccall f_7941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7908)
static void C_fcall f_7908(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7923)
static void C_ccall f_7923(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7917)
static void C_ccall f_7917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7871)
static void C_fcall f_7871(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7873)
static void C_ccall f_7873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7894)
static void C_ccall f_7894(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7888)
static void C_ccall f_7888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7815)
static void C_ccall f_7815(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7815)
static void C_ccall f_7815r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7822)
static void C_ccall f_7822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7841)
static void C_ccall f_7841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7845)
static void C_ccall f_7845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7809)
static void C_ccall f_7809(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7800)
static void C_ccall f_7800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7804)
static void C_ccall f_7804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7773)
static void C_ccall f_7773(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7773)
static void C_ccall f_7773r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7766)
static void C_ccall f_7766(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7763)
static void C_ccall f_7763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7760)
static void C_ccall f_7760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7682)
static void C_ccall f_7682(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7682)
static void C_ccall f_7682r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7718)
static void C_ccall f_7718(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7712)
static void C_ccall f_7712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7665)
static void C_ccall f_7665(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7492)
static void C_ccall f_7492(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7492)
static void C_ccall f_7492r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7520)
static void C_ccall f_7520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7528)
static void C_fcall f_7528(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7574)
static C_word C_fcall f_7574(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_7541)
static void C_fcall f_7541(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7566)
static void C_ccall f_7566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7544)
static void C_ccall f_7544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7473)
static C_word C_fcall f_7473(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_7454)
static C_word C_fcall f_7454(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_7412)
static void C_ccall f_7412(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7412)
static void C_ccall f_7412r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7437)
static void C_ccall f_7437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7398)
static void C_ccall f_7398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7402)
static void C_ccall f_7402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7405)
static void C_ccall f_7405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7363)
static void C_ccall f_7363(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7367)
static void C_ccall f_7367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7387)
static void C_ccall f_7387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7391)
static void C_ccall f_7391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7340)
static void C_ccall f_7340(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7344)
static void C_ccall f_7344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7308)
static void C_fcall f_7308(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7312)
static void C_ccall f_7312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7289)
static void C_ccall f_7289(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7293)
static void C_ccall f_7293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7296)
static void C_ccall f_7296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7230)
static void C_ccall f_7230(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_7230)
static void C_ccall f_7230r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_7234)
static void C_ccall f_7234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7240)
static void C_ccall f_7240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7249)
static void C_fcall f_7249(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7223)
static void C_ccall f_7223(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7207)
static void C_ccall f_7207(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7207)
static void C_ccall f_7207r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7195)
static void C_ccall f_7195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7180)
static void C_ccall f_7180(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7184)
static void C_ccall f_7184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7134)
static void C_ccall f_7134(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7134)
static void C_ccall f_7134r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7138)
static void C_ccall f_7138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7151)
static void C_ccall f_7151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7155)
static void C_ccall f_7155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7065)
static void C_ccall f_7065(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7065)
static void C_ccall f_7065r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7069)
static void C_ccall f_7069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7072)
static void C_ccall f_7072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7094)
static void C_ccall f_7094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7091)
static void C_ccall f_7091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7081)
static void C_ccall f_7081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7049)
static void C_ccall f_7049(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7040)
static void C_ccall f_7040(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7005)
static void C_ccall f_7005(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7005)
static void C_ccall f_7005r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6943)
static void C_ccall f_6943(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...) C_noret;
C_noret_decl(f_6943)
static void C_ccall f_6943r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t8) C_noret;
C_noret_decl(f_6947)
static void C_ccall f_6947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6953)
static void C_ccall f_6953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6972)
static void C_ccall f_6972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6959)
static void C_ccall f_6959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6840)
static void C_ccall f_6840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6846)
static void C_fcall f_6846(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6850)
static void C_ccall f_6850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6858)
static void C_fcall f_6858(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6884)
static void C_ccall f_6884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6888)
static void C_ccall f_6888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6876)
static void C_ccall f_6876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6820)
static void C_ccall f_6820(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6828)
static void C_ccall f_6828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6803)
static void C_ccall f_6803(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6814)
static void C_ccall f_6814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6818)
static void C_ccall f_6818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6777)
static void C_ccall f_6777(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6801)
static void C_ccall f_6801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6784)
static void C_ccall f_6784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6734)
static void C_ccall f_6734(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6734)
static void C_ccall f_6734r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6741)
static void C_fcall f_6741(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6762)
static void C_ccall f_6762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6758)
static void C_ccall f_6758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6706)
static void C_ccall f_6706(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6679)
static void C_ccall f_6679(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6679)
static void C_ccall f_6679r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6683)
static void C_ccall f_6683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6664)
static void C_ccall f_6664(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6664)
static void C_ccall f_6664r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6668)
static void C_ccall f_6668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6649)
static void C_ccall f_6649(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6649)
static void C_ccall f_6649r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6653)
static void C_ccall f_6653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6631)
static void C_fcall f_6631(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6557)
static void C_fcall f_6557(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6579)
static void C_ccall f_6579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6585)
static void C_fcall f_6585(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6518)
static void C_ccall f_6518(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6546)
static void C_ccall f_6546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6542)
static void C_ccall f_6542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6535)
static void C_ccall f_6535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6528)
static void C_fcall f_6528(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6270)
static void C_ccall f_6270(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_6270)
static void C_ccall f_6270r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_6298)
static void C_ccall f_6298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6404)
static void C_ccall f_6404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6405)
static void C_ccall f_6405(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6422)
static void C_fcall f_6422(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6432)
static void C_ccall f_6432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6390)
static void C_ccall f_6390(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6346)
static void C_fcall f_6346(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6382)
static void C_ccall f_6382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6361)
static void C_ccall f_6361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6371)
static void C_ccall f_6371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6355)
static void C_ccall f_6355(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6350)
static void C_ccall f_6350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6353)
static void C_ccall f_6353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6300)
static void C_fcall f_6300(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6335)
static void C_ccall f_6335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6316)
static void C_ccall f_6316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5788)
static void C_ccall f_5788(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_5788)
static void C_ccall f_5788r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_5822)
static void C_ccall f_5822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5828)
static void C_ccall f_5828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6191)
static void C_ccall f_6191(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6201)
static void C_ccall f_6201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6078)
static void C_ccall f_6078(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6084)
static void C_fcall f_6084(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6180)
static void C_ccall f_6180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6170)
static void C_ccall f_6170(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6164)
static void C_ccall f_6164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6086)
static void C_ccall f_6086(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6136)
static void C_ccall f_6136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6093)
static void C_ccall f_6093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6103)
static void C_ccall f_6103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6002)
static void C_ccall f_6002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6010)
static void C_fcall f_6010(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6012)
static void C_fcall f_6012(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6060)
static void C_ccall f_6060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5993)
static void C_ccall f_5993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5997)
static void C_ccall f_5997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5972)
static void C_ccall f_5972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5982)
static void C_ccall f_5982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5960)
static void C_ccall f_5960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5947)
static void C_ccall f_5947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5951)
static void C_ccall f_5951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5942)
static void C_ccall f_5942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5945)
static void C_ccall f_5945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5860)
static void C_fcall f_5860(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5872)
static void C_fcall f_5872(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5909)
static void C_ccall f_5909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5918)
static void C_ccall f_5918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5912)
static void C_ccall f_5912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5888)
static void C_ccall f_5888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5891)
static void C_ccall f_5891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5852)
static C_word C_fcall f_5852(C_word t0);
C_noret_decl(f_5829)
static void C_fcall f_5829(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5833)
static void C_ccall f_5833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5761)
static void C_ccall f_5761(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5761)
static void C_ccall f_5761r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5768)
static void C_fcall f_5768(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5771)
static void C_ccall f_5771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5720)
static void C_ccall f_5720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5755)
static void C_ccall f_5755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5738)
static void C_ccall f_5738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5702)
static void C_ccall f_5702(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5702)
static void C_ccall f_5702r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5714)
static void C_ccall f_5714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5688)
static void C_ccall f_5688(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5688)
static void C_ccall f_5688r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5700)
static void C_ccall f_5700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5673)
static void C_fcall f_5673(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5686)
static void C_ccall f_5686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5636)
static void C_fcall f_5636(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5644)
static void C_ccall f_5644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5611)
static void C_ccall f_5611(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5592)
static void C_ccall f_5592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5596)
static void C_ccall f_5596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5624)
static void C_fcall f_5624(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5524)
static void C_ccall f_5524(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5524)
static void C_ccall f_5524r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5528)
static void C_ccall f_5528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5566)
static void C_ccall f_5566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5550)
static void C_ccall f_5550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5556)
static void C_ccall f_5556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5486)
static void C_ccall f_5486(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5519)
static void C_ccall f_5519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5507)
static void C_ccall f_5507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5515)
static void C_ccall f_5515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5511)
static void C_ccall f_5511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5467)
static void C_ccall f_5467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5477)
static void C_ccall f_5477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5471)
static void C_ccall f_5471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5461)
static void C_ccall f_5461(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5455)
static void C_ccall f_5455(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5449)
static void C_ccall f_5449(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5425)
static void C_fcall f_5425(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5447)
static void C_ccall f_5447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5443)
static void C_ccall f_5443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5435)
static void C_ccall f_5435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5395)
static void C_ccall f_5395(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5423)
static void C_ccall f_5423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5419)
static void C_ccall f_5419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5368)
static void C_ccall f_5368(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5393)
static void C_ccall f_5393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5389)
static void C_ccall f_5389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5304)
static void C_ccall f_5304(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5292)
static void C_ccall f_5292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5320)
static void C_ccall f_5320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5230)
static void C_ccall f_5230(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5234)
static void C_ccall f_5234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5239)
static void C_fcall f_5239(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5255)
static void C_ccall f_5255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5167)
static void C_ccall f_5167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5225)
static void C_ccall f_5225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5171)
static void C_ccall f_5171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5174)
static void C_ccall f_5174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5206)
static void C_ccall f_5206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5177)
static void C_ccall f_5177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5182)
static void C_fcall f_5182(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5196)
static void C_ccall f_5196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5074)
static void C_ccall f_5074(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5074)
static void C_ccall f_5074r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5078)
static void C_ccall f_5078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5132)
static void C_ccall f_5132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5081)
static void C_fcall f_5081(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5094)
static void C_ccall f_5094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5098)
static void C_ccall f_5098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5104)
static void C_fcall f_5104(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5108)
static void C_ccall f_5108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5118)
static void C_ccall f_5118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5102)
static void C_ccall f_5102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5049)
static void C_ccall f_5049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5061)
static void C_ccall f_5061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5057)
static void C_ccall f_5057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5047)
static void C_ccall f_5047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5043)
static void C_ccall f_5043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4968)
static void C_ccall f_4968(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4968)
static void C_ccall f_4968r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5014)
static void C_ccall f_5014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4975)
static void C_fcall f_4975(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4988)
static void C_ccall f_4988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4992)
static void C_ccall f_4992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4996)
static void C_ccall f_4996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5000)
static void C_ccall f_5000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5004)
static void C_ccall f_5004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4914)
static void C_ccall f_4914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4947)
static void C_ccall f_4947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4918)
static void C_ccall f_4918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4925)
static void C_ccall f_4925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4929)
static void C_ccall f_4929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4937)
static void C_ccall f_4937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4941)
static void C_ccall f_4941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4896)
static void C_ccall f_4896(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4881)
static void C_ccall f_4881(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4875)
static void C_ccall f_4875(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4849)
static void C_fcall f_4849(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4794)
static void C_ccall f_4794(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4820)
static C_word C_fcall f_4820(C_word t0);
C_noret_decl(f_4776)
static void C_ccall f_4776(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4786)
static void C_ccall f_4786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4763)
static void C_ccall f_4763(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4754)
static void C_ccall f_4754(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4707)
static void C_ccall f_4707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4687)
static void C_ccall f_4687(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4687)
static void C_ccall f_4687r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4691)
static void C_ccall f_4691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4697)
static void C_ccall f_4697(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4697)
static void C_ccall f_4697r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4671)
static void C_ccall f_4671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4677)
static void C_ccall f_4677(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4677)
static void C_ccall f_4677r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4681)
static void C_ccall f_4681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4643)
static void C_ccall f_4643(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4643)
static void C_ccall f_4643r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4647)
static void C_ccall f_4647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4658)
static void C_ccall f_4658(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4658)
static void C_ccall f_4658r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4662)
static void C_ccall f_4662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4652)
static void C_ccall f_4652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4619)
static void C_ccall f_4619(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4619)
static void C_ccall f_4619r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4623)
static void C_ccall f_4623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4634)
static void C_ccall f_4634(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4634)
static void C_ccall f_4634r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4638)
static void C_ccall f_4638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4628)
static void C_ccall f_4628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4603)
static void C_ccall f_4603(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4607)
static void C_ccall f_4607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4567)
static void C_ccall f_4567(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4567)
static void C_ccall f_4567r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4598)
static void C_ccall f_4598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4588)
static void C_ccall f_4588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4581)
static void C_ccall f_4581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4531)
static void C_ccall f_4531(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4531)
static void C_ccall f_4531r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4562)
static void C_ccall f_4562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4552)
static void C_ccall f_4552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4545)
static void C_ccall f_4545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4516)
static void C_fcall f_4516(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4529)
static void C_ccall f_4529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4476)
static void C_ccall f_4476(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4496)
static void C_ccall f_4496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4483)
static void C_ccall f_4483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4486)
static void C_ccall f_4486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4347)
static void C_ccall f_4347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4353)
static void C_ccall f_4353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4362)
static void C_ccall f_4362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4445)
static void C_ccall f_4445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4422)
static void C_ccall f_4422(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4416)
static void C_ccall f_4416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4372)
static void C_ccall f_4372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4374)
static void C_fcall f_4374(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4414)
static void C_ccall f_4414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4381)
static void C_fcall f_4381(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4407)
static void C_ccall f_4407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4400)
static void C_ccall f_4400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4356)
static void C_ccall f_4356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4281)
static void C_ccall f_4281(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4281)
static void C_ccall f_4281r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4294)
static void C_ccall f_4294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4306)
static void C_ccall f_4306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4300)
static void C_ccall f_4300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3989)
static void C_ccall f_3989(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3989)
static void C_ccall f_3989r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4249)
static C_word C_fcall f_4249(C_word t0,C_word t1);
C_noret_decl(f_4233)
static C_word C_fcall f_4233(C_word t0,C_word t1);
C_noret_decl(f_4005)
static void C_fcall f_4005(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4198)
static C_word C_fcall f_4198(C_word t0,C_word t1);
C_noret_decl(f_4182)
static C_word C_fcall f_4182(C_word t0,C_word t1);
C_noret_decl(f_4011)
static void C_fcall f_4011(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4014)
static void C_fcall f_4014(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4136)
static void C_fcall f_4136(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4134)
static void C_ccall f_4134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4117)
static C_word C_fcall f_4117(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4053)
static void C_fcall f_4053(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4086)
static void C_fcall f_4086(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4067)
static C_word C_fcall f_4067(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3931)
static void C_ccall f_3931(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3944)
static void C_ccall f_3944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3951)
static void C_ccall f_3951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3899)
static void C_ccall f_3899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3908)
static void C_ccall f_3908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3850)
static void C_ccall f_3850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3850)
static void C_ccall f_3850r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3860)
static void C_ccall f_3860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3863)
static void C_ccall f_3863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3835)
static void C_ccall f_3835(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3797)
static void C_ccall f_3797(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3797)
static void C_ccall f_3797r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3827)
static void C_ccall f_3827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3814)
static void C_ccall f_3814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3817)
static void C_ccall f_3817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3751)
static void C_ccall f_3751(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3751)
static void C_ccall f_3751r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3694)
static void C_ccall f_3694(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3687)
static void C_ccall f_3687(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3620)
static void C_ccall f_3620(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3620)
static void C_ccall f_3620r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3624)
static void C_ccall f_3624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3627)
static void C_ccall f_3627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3649)
static void C_ccall f_3649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3646)
static void C_ccall f_3646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3636)
static void C_ccall f_3636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3595)
static void C_ccall f_3595(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3599)
static void C_ccall f_3599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3544)
static void C_ccall f_3544(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3544)
static void C_ccall f_3544r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3504)
static void C_ccall f_3504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3466)
static void C_ccall f_3466(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3466)
static void C_ccall f_3466r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3470)
static void C_ccall f_3470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3447)
static void C_fcall f_3447(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3437)
static void C_ccall f_3437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3272)
static void C_fcall f_3272(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3427)
static void C_ccall f_3427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3429)
static void C_ccall f_3429(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3387)
static void C_ccall f_3387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3419)
static void C_ccall f_3419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3421)
static void C_ccall f_3421(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3390)
static void C_ccall f_3390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3416)
static void C_ccall f_3416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3393)
static void C_ccall f_3393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3413)
static void C_ccall f_3413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3396)
static void C_ccall f_3396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3399)
static void C_ccall f_3399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3407)
static void C_ccall f_3407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3402)
static void C_ccall f_3402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3299)
static void C_fcall f_3299(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3288)
static void C_fcall f_3288(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3294)
static void C_ccall f_3294(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3283)
static void C_fcall f_3283(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3278)
static void C_fcall f_3278(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3273)
static void C_fcall f_3273(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3064)
static void C_fcall f_3064(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_3248)
static void C_ccall f_3248(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3071)
static void C_fcall f_3071(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3233)
static void C_ccall f_3233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3236)
static void C_ccall f_3236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3074)
static void C_fcall f_3074(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3223)
static void C_ccall f_3223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3081)
static void C_ccall f_3081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3083)
static void C_fcall f_3083(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3209)
static void C_ccall f_3209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3216)
static void C_ccall f_3216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3203)
static void C_ccall f_3203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3196)
static void C_ccall f_3196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3136)
static void C_ccall f_3136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3190)
static void C_ccall f_3190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3177)
static void C_ccall f_3177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3153)
static void C_ccall f_3153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3175)
static void C_ccall f_3175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3161)
static void C_ccall f_3161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3148)
static void C_ccall f_3148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3146)
static void C_ccall f_3146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3127)
static void C_ccall f_3127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3124)
static void C_ccall f_3124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2961)
static void C_fcall f_2961(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3058)
static void C_ccall f_3058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2995)
static void C_fcall f_2995(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3012)
static void C_ccall f_3012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3016)
static void C_fcall f_3016(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3036)
static void C_ccall f_3036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3028)
static void C_ccall f_3028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2976)
static void C_ccall f_2976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2812)
static void C_ccall f_2812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2833)
static void C_ccall f_2833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2836)
static void C_ccall f_2836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2839)
static void C_ccall f_2839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2923)
static void C_ccall f_2923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2843)
static void C_ccall f_2843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2857)
static void C_fcall f_2857(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2879)
static void C_fcall f_2879(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2704)
static void C_ccall f_2704(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2704)
static void C_ccall f_2704r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2729)
static void C_ccall f_2729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2735)
static void C_ccall f_2735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2763)
static void C_fcall f_2763(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2773)
static void C_ccall f_2773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2758)
static void C_ccall f_2758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2736)
static void C_fcall f_2736(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2746)
static void C_ccall f_2746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2752)
static void C_ccall f_2752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2710)
static void C_fcall f_2710(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2658)
static void C_ccall f_2658(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2658)
static void C_ccall f_2658r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2662)
static void C_ccall f_2662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2671)
static void C_ccall f_2671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2674)
static void C_ccall f_2674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2646)
static void C_ccall f_2646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2636)
static void C_ccall f_2636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2618)
static void C_ccall f_2618(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2608)
static void C_ccall f_2608(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2616)
static void C_ccall f_2616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2598)
static void C_ccall f_2598(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2492)
static void C_ccall f_2492(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2496)
static void C_ccall f_2496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2486)
static void C_ccall f_2486(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2480)
static void C_ccall f_2480(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2484)
static void C_ccall f_2484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2474)
static void C_ccall f_2474(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2478)
static void C_ccall f_2478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2468)
static void C_ccall f_2468(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2472)
static void C_ccall f_2472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2433)
static void C_ccall f_2433(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2433)
static void C_ccall f_2433r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2437)
static void C_ccall f_2437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2440)
static void C_ccall f_2440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2389)
static void C_fcall f_2389(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2428)
static void C_ccall f_2428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2424)
static void C_ccall f_2424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2417)
static void C_ccall f_2417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2393)
static void C_ccall f_2393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2386)
static void C_ccall f_2386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2382)
static void C_ccall f_2382(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_8546)
static void C_fcall trf_8546(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8546(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8546(t0,t1);}

C_noret_decl(trf_8309)
static void C_fcall trf_8309(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8309(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8309(t0,t1);}

C_noret_decl(trf_8098)
static void C_fcall trf_8098(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8098(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_8098(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_8100)
static void C_fcall trf_8100(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8100(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8100(t0,t1,t2);}

C_noret_decl(trf_8117)
static void C_fcall trf_8117(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8117(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8117(t0,t1,t2);}

C_noret_decl(trf_8105)
static void C_fcall trf_8105(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8105(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8105(t0,t1,t2);}

C_noret_decl(trf_8031)
static void C_fcall trf_8031(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8031(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_8031(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_8020)
static void C_fcall trf_8020(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8020(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_8020(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7975)
static void C_fcall trf_7975(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7975(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_7975(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_7992)
static void C_fcall trf_7992(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7992(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7992(t0,t1);}

C_noret_decl(trf_7942)
static void C_fcall trf_7942(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7942(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7942(t0,t1,t2,t3);}

C_noret_decl(trf_7928)
static void C_fcall trf_7928(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7928(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7928(t0,t1,t2);}

C_noret_decl(trf_7908)
static void C_fcall trf_7908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7908(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7908(t0,t1);}

C_noret_decl(trf_7871)
static void C_fcall trf_7871(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7871(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_7871(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7528)
static void C_fcall trf_7528(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7528(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7528(t0,t1,t2,t3);}

C_noret_decl(trf_7541)
static void C_fcall trf_7541(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7541(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7541(t0,t1);}

C_noret_decl(trf_7308)
static void C_fcall trf_7308(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7308(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7308(t0,t1,t2);}

C_noret_decl(trf_7249)
static void C_fcall trf_7249(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7249(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7249(t0,t1);}

C_noret_decl(trf_6846)
static void C_fcall trf_6846(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6846(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6846(t0,t1,t2);}

C_noret_decl(trf_6858)
static void C_fcall trf_6858(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6858(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6858(t0,t1,t2);}

C_noret_decl(trf_6741)
static void C_fcall trf_6741(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6741(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6741(t0,t1);}

C_noret_decl(trf_6631)
static void C_fcall trf_6631(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6631(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6631(t0,t1,t2,t3);}

C_noret_decl(trf_6557)
static void C_fcall trf_6557(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6557(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6557(t0,t1,t2,t3);}

C_noret_decl(trf_6585)
static void C_fcall trf_6585(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6585(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6585(t0,t1);}

C_noret_decl(trf_6528)
static void C_fcall trf_6528(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6528(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6528(t0,t1);}

C_noret_decl(trf_6422)
static void C_fcall trf_6422(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6422(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6422(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6346)
static void C_fcall trf_6346(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6346(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6346(t0,t1);}

C_noret_decl(trf_6300)
static void C_fcall trf_6300(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6300(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6300(t0,t1,t2,t3);}

C_noret_decl(trf_6084)
static void C_fcall trf_6084(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6084(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6084(t0,t1,t2);}

C_noret_decl(trf_6010)
static void C_fcall trf_6010(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6010(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6010(t0,t1);}

C_noret_decl(trf_6012)
static void C_fcall trf_6012(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6012(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6012(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5860)
static void C_fcall trf_5860(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5860(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5860(t0,t1);}

C_noret_decl(trf_5872)
static void C_fcall trf_5872(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5872(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5872(t0,t1);}

C_noret_decl(trf_5829)
static void C_fcall trf_5829(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5829(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5829(t0,t1);}

C_noret_decl(trf_5768)
static void C_fcall trf_5768(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5768(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5768(t0,t1);}

C_noret_decl(trf_5673)
static void C_fcall trf_5673(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5673(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5673(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5636)
static void C_fcall trf_5636(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5636(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5636(t0,t1,t2,t3);}

C_noret_decl(trf_5624)
static void C_fcall trf_5624(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5624(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5624(t0,t1);}

C_noret_decl(trf_5425)
static void C_fcall trf_5425(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5425(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5425(t0,t1,t2,t3);}

C_noret_decl(trf_5239)
static void C_fcall trf_5239(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5239(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5239(t0,t1,t2,t3);}

C_noret_decl(trf_5182)
static void C_fcall trf_5182(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5182(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5182(t0,t1,t2);}

C_noret_decl(trf_5081)
static void C_fcall trf_5081(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5081(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5081(t0,t1);}

C_noret_decl(trf_5104)
static void C_fcall trf_5104(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5104(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5104(t0,t1,t2);}

C_noret_decl(trf_4975)
static void C_fcall trf_4975(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4975(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4975(t0,t1);}

C_noret_decl(trf_4849)
static void C_fcall trf_4849(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4849(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4849(t0,t1,t2,t3);}

C_noret_decl(trf_4516)
static void C_fcall trf_4516(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4516(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4516(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4374)
static void C_fcall trf_4374(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4374(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4374(t0,t1,t2);}

C_noret_decl(trf_4381)
static void C_fcall trf_4381(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4381(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4381(t0,t1);}

C_noret_decl(trf_4005)
static void C_fcall trf_4005(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4005(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4005(t0,t1);}

C_noret_decl(trf_4011)
static void C_fcall trf_4011(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4011(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4011(t0,t1);}

C_noret_decl(trf_4014)
static void C_fcall trf_4014(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4014(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4014(t0,t1);}

C_noret_decl(trf_4136)
static void C_fcall trf_4136(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4136(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4136(t0,t1,t2);}

C_noret_decl(trf_4053)
static void C_fcall trf_4053(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4053(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4053(t0,t1);}

C_noret_decl(trf_4086)
static void C_fcall trf_4086(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4086(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4086(t0,t1,t2);}

C_noret_decl(trf_3447)
static void C_fcall trf_3447(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3447(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3447(t0,t1,t2);}

C_noret_decl(trf_3272)
static void C_fcall trf_3272(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3272(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3272(t0,t1);}

C_noret_decl(trf_3299)
static void C_fcall trf_3299(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3299(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3299(t0,t1);}

C_noret_decl(trf_3288)
static void C_fcall trf_3288(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3288(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3288(t0,t1,t2);}

C_noret_decl(trf_3283)
static void C_fcall trf_3283(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3283(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3283(t0,t1,t2,t3);}

C_noret_decl(trf_3278)
static void C_fcall trf_3278(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3278(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3278(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3273)
static void C_fcall trf_3273(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3273(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3273(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3064)
static void C_fcall trf_3064(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3064(void *dummy){
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
f_3064(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_3071)
static void C_fcall trf_3071(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3071(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3071(t0,t1);}

C_noret_decl(trf_3074)
static void C_fcall trf_3074(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3074(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3074(t0,t1);}

C_noret_decl(trf_3083)
static void C_fcall trf_3083(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3083(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3083(t0,t1,t2,t3);}

C_noret_decl(trf_2961)
static void C_fcall trf_2961(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2961(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2961(t0,t1,t2);}

C_noret_decl(trf_2995)
static void C_fcall trf_2995(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2995(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2995(t0,t1,t2);}

C_noret_decl(trf_3016)
static void C_fcall trf_3016(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3016(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3016(t0,t1,t2);}

C_noret_decl(trf_2857)
static void C_fcall trf_2857(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2857(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2857(t0,t1);}

C_noret_decl(trf_2879)
static void C_fcall trf_2879(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2879(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2879(t0,t1);}

C_noret_decl(trf_2763)
static void C_fcall trf_2763(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2763(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2763(t0,t1,t2);}

C_noret_decl(trf_2736)
static void C_fcall trf_2736(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2736(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2736(t0,t1,t2);}

C_noret_decl(trf_2710)
static void C_fcall trf_2710(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2710(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2710(t0,t1);}

C_noret_decl(trf_2389)
static void C_fcall trf_2389(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2389(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2389(t0,t1,t2,t3,t4);}

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

C_noret_decl(tr7r)
static void C_fcall tr7r(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7r(C_proc7 k){
int n;
C_word *a,t7;
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
n=C_rest_count(0);
a=C_alloc(n*3);
t7=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6,t7);}

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
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_posix_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("posix_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3364)){
C_save(t1);
C_rereclaim2(3364*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,461);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],13,"string-append");
lf[4]=C_h_intern(&lf[4],15,"\003syssignal-hook");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000\003 - ");
lf[6]=C_h_intern(&lf[6],17,"\003syspeek-c-string");
lf[7]=C_h_intern(&lf[7],16,"\003sysupdate-errno");
lf[8]=C_h_intern(&lf[8],15,"\003sysposix-error");
lf[10]=C_h_intern(&lf[10],11,"\000file-error");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot access file");
lf[12]=C_h_intern(&lf[12],17,"\003sysmake-c-string");
lf[13]=C_h_intern(&lf[13],27,"\003sysplatform-fixup-pathname");
lf[14]=C_h_intern(&lf[14],20,"\003sysexpand-home-path");
lf[15]=C_h_intern(&lf[15],11,"\000type-error");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000*bad argument type - not a fixnum or string");
lf[17]=C_h_intern(&lf[17],9,"file-stat");
lf[18]=C_h_intern(&lf[18],9,"\003syserror");
lf[19]=C_h_intern(&lf[19],22,"file-modification-time");
lf[20]=C_h_intern(&lf[20],16,"file-access-time");
lf[21]=C_h_intern(&lf[21],16,"file-change-time");
lf[22]=C_h_intern(&lf[22],10,"file-owner");
lf[23]=C_h_intern(&lf[23],16,"file-permissions");
lf[24]=C_h_intern(&lf[24],9,"file-size");
lf[25]=C_h_intern(&lf[25],9,"file-type");
lf[26]=C_h_intern(&lf[26],13,"symbolic-link");
lf[27]=C_h_intern(&lf[27],9,"directory");
lf[28]=C_h_intern(&lf[28],16,"character-device");
lf[29]=C_h_intern(&lf[29],12,"block-device");
lf[30]=C_h_intern(&lf[30],4,"fifo");
lf[31]=C_h_intern(&lf[31],6,"socket");
lf[32]=C_h_intern(&lf[32],12,"regular-file");
lf[33]=C_h_intern(&lf[33],13,"regular-file\077");
lf[34]=C_h_intern(&lf[34],14,"symbolic-link\077");
lf[35]=C_h_intern(&lf[35],13,"block-device\077");
lf[36]=C_h_intern(&lf[36],17,"character-device\077");
lf[37]=C_h_intern(&lf[37],5,"fifo\077");
lf[38]=C_h_intern(&lf[38],7,"socket\077");
lf[39]=C_h_intern(&lf[39],10,"directory\077");
lf[40]=C_h_intern(&lf[40],17,"current-directory");
lf[41]=C_h_intern(&lf[41],16,"change-directory");
lf[42]=C_h_intern(&lf[42],13,"\003syssubstring");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current directory");
lf[44]=C_h_intern(&lf[44],11,"make-string");
lf[45]=C_h_intern(&lf[45],16,"delete-directory");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot delete directory");
lf[47]=C_h_intern(&lf[47],11,"delete-file");
lf[48]=C_h_intern(&lf[48],8,"for-each");
lf[49]=C_h_intern(&lf[49],10,"find-files");
lf[50]=C_h_intern(&lf[50],9,"\000dotfiles");
lf[51]=C_h_intern(&lf[51],16,"\000follow-symlinks");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot open directory");
lf[53]=C_h_intern(&lf[53],16,"\003sysmake-pointer");
lf[54]=C_h_intern(&lf[54],4,"glob");
lf[55]=C_h_intern(&lf[55],18,"decompose-pathname");
lf[56]=C_h_intern(&lf[56],13,"make-pathname");
lf[57]=C_h_intern(&lf[57],23,"irregex-match-substring");
lf[58]=C_h_intern(&lf[58],13,"irregex-match");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[60]=C_h_intern(&lf[60],16,"\003sysglob->regexp");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[66]=C_h_intern(&lf[66],16,"\003sysdynamic-wind");
lf[67]=C_h_intern(&lf[67],13,"pathname-file");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\002\077*");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[70]=C_h_intern(&lf[70],7,"irregex");
lf[71]=C_h_intern(&lf[71],8,"irregex\077");
lf[72]=C_h_intern(&lf[72],15,"\003sysget-keyword");
lf[73]=C_h_intern(&lf[73],6,"\000limit");
lf[74]=C_h_intern(&lf[74],5,"\000seed");
lf[75]=C_h_intern(&lf[75],7,"\000action");
lf[76]=C_h_intern(&lf[76],5,"\000test");
lf[77]=C_h_intern(&lf[77],8,"keyword\077");
lf[78]=C_h_intern(&lf[78],18,"file-creation-mode");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\025time vector too short");
lf[81]=C_h_intern(&lf[81],19,"seconds->local-time");
lf[82]=C_h_intern(&lf[82],18,"\003sysdecode-seconds");
lf[83]=C_h_intern(&lf[83],15,"current-seconds");
lf[84]=C_h_intern(&lf[84],17,"seconds->utc-time");
lf[85]=C_h_intern(&lf[85],15,"seconds->string");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000 cannot convert seconds to string");
lf[87]=C_h_intern(&lf[87],19,"local-time->seconds");
lf[88]=C_decode_literal(C_heaptop,"\376U-1.0\000");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[90]=C_h_intern(&lf[90],12,"time->string");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000 time formatting overflows buffer");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000$cannot convert time vector to string");
lf[93]=C_h_intern(&lf[93],21,"\003sysfile-nonblocking!");
lf[94]=C_h_intern(&lf[94],19,"\003sysfile-select-one");
lf[95]=C_h_intern(&lf[95],8,"pipe/buf");
lf[96]=C_h_intern(&lf[96],11,"fcntl/dupfd");
lf[97]=C_h_intern(&lf[97],11,"fcntl/getfd");
lf[98]=C_h_intern(&lf[98],11,"fcntl/setfd");
lf[99]=C_h_intern(&lf[99],11,"fcntl/getfl");
lf[100]=C_h_intern(&lf[100],11,"fcntl/setfl");
lf[101]=C_h_intern(&lf[101],11,"open/rdonly");
lf[102]=C_h_intern(&lf[102],11,"open/wronly");
lf[103]=C_h_intern(&lf[103],9,"open/rdwr");
lf[104]=C_h_intern(&lf[104],9,"open/read");
lf[105]=C_h_intern(&lf[105],10,"open/write");
lf[106]=C_h_intern(&lf[106],10,"open/creat");
lf[107]=C_h_intern(&lf[107],11,"open/append");
lf[108]=C_h_intern(&lf[108],9,"open/excl");
lf[109]=C_h_intern(&lf[109],11,"open/noctty");
lf[110]=C_h_intern(&lf[110],13,"open/nonblock");
lf[111]=C_h_intern(&lf[111],10,"open/trunc");
lf[112]=C_h_intern(&lf[112],9,"open/sync");
lf[113]=C_h_intern(&lf[113],10,"open/fsync");
lf[114]=C_h_intern(&lf[114],11,"open/binary");
lf[115]=C_h_intern(&lf[115],9,"open/text");
lf[116]=C_h_intern(&lf[116],10,"perm/irusr");
lf[117]=C_h_intern(&lf[117],10,"perm/iwusr");
lf[118]=C_h_intern(&lf[118],10,"perm/ixusr");
lf[119]=C_h_intern(&lf[119],10,"perm/irgrp");
lf[120]=C_h_intern(&lf[120],10,"perm/iwgrp");
lf[121]=C_h_intern(&lf[121],10,"perm/ixgrp");
lf[122]=C_h_intern(&lf[122],10,"perm/iroth");
lf[123]=C_h_intern(&lf[123],10,"perm/iwoth");
lf[124]=C_h_intern(&lf[124],10,"perm/ixoth");
lf[125]=C_h_intern(&lf[125],10,"perm/irwxu");
lf[126]=C_h_intern(&lf[126],10,"perm/irwxg");
lf[127]=C_h_intern(&lf[127],10,"perm/irwxo");
lf[128]=C_h_intern(&lf[128],10,"perm/isvtx");
lf[129]=C_h_intern(&lf[129],10,"perm/isuid");
lf[130]=C_h_intern(&lf[130],10,"perm/isgid");
lf[131]=C_h_intern(&lf[131],12,"file-control");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot control file");
lf[133]=C_h_intern(&lf[133],9,"file-open");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[135]=C_h_intern(&lf[135],10,"file-close");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\021cannot close file");
lf[137]=C_h_intern(&lf[137],9,"file-read");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot read from file");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[140]=C_h_intern(&lf[140],10,"file-write");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot write to file");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[143]=C_h_intern(&lf[143],12,"file-mkstemp");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot create temporary file");
lf[145]=C_h_intern(&lf[145],11,"file-select");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\006failed");
lf[147]=C_h_intern(&lf[147],8,"seek/set");
lf[148]=C_h_intern(&lf[148],8,"seek/end");
lf[149]=C_h_intern(&lf[149],8,"seek/cur");
lf[150]=C_h_intern(&lf[150],18,"set-file-position!");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot set file position");
lf[152]=C_h_intern(&lf[152],6,"stream");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[154]=C_h_intern(&lf[154],5,"port\077");
lf[155]=C_h_intern(&lf[155],13,"\000bounds-error");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\036invalid negative port position");
lf[157]=C_h_intern(&lf[157],13,"file-position");
lf[158]=C_h_intern(&lf[158],16,"create-directory");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create directory");
lf[160]=C_h_intern(&lf[160],18,"pathname-directory");
lf[161]=C_h_intern(&lf[161],12,"file-exists\077");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot change current directory");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open pipe");
lf[164]=C_h_intern(&lf[164],13,"\003sysmake-port");
lf[165]=C_h_intern(&lf[165],21,"\003sysstream-port-class");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\006(pipe)");
lf[167]=C_h_intern(&lf[167],15,"open-input-pipe");
lf[168]=C_h_intern(&lf[168],5,"\000text");
lf[169]=C_h_intern(&lf[169],7,"\000binary");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000#illegal input/output mode specifier");
lf[171]=C_h_intern(&lf[171],16,"open-output-pipe");
lf[172]=C_h_intern(&lf[172],16,"close-input-pipe");
lf[173]=C_h_intern(&lf[173],23,"close-input/output-pipe");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[175]=C_h_intern(&lf[175],14,"\003syscheck-port");
lf[176]=C_h_intern(&lf[176],17,"close-output-pipe");
lf[177]=C_h_intern(&lf[177],20,"call-with-input-pipe");
lf[178]=C_h_intern(&lf[178],21,"call-with-output-pipe");
lf[179]=C_h_intern(&lf[179],20,"with-input-from-pipe");
lf[180]=C_h_intern(&lf[180],18,"\003sysstandard-input");
lf[181]=C_h_intern(&lf[181],19,"with-output-to-pipe");
lf[182]=C_h_intern(&lf[182],19,"\003sysstandard-output");
lf[183]=C_h_intern(&lf[183],11,"create-pipe");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create pipe");
lf[185]=C_h_intern(&lf[185],11,"signal/term");
lf[186]=C_h_intern(&lf[186],11,"signal/kill");
lf[187]=C_h_intern(&lf[187],10,"signal/int");
lf[188]=C_h_intern(&lf[188],10,"signal/hup");
lf[189]=C_h_intern(&lf[189],10,"signal/fpe");
lf[190]=C_h_intern(&lf[190],10,"signal/ill");
lf[191]=C_h_intern(&lf[191],11,"signal/segv");
lf[192]=C_h_intern(&lf[192],11,"signal/abrt");
lf[193]=C_h_intern(&lf[193],11,"signal/trap");
lf[194]=C_h_intern(&lf[194],11,"signal/quit");
lf[195]=C_h_intern(&lf[195],11,"signal/alrm");
lf[196]=C_h_intern(&lf[196],13,"signal/vtalrm");
lf[197]=C_h_intern(&lf[197],11,"signal/prof");
lf[198]=C_h_intern(&lf[198],9,"signal/io");
lf[199]=C_h_intern(&lf[199],10,"signal/urg");
lf[200]=C_h_intern(&lf[200],11,"signal/chld");
lf[201]=C_h_intern(&lf[201],11,"signal/cont");
lf[202]=C_h_intern(&lf[202],11,"signal/stop");
lf[203]=C_h_intern(&lf[203],11,"signal/tstp");
lf[204]=C_h_intern(&lf[204],11,"signal/pipe");
lf[205]=C_h_intern(&lf[205],11,"signal/xcpu");
lf[206]=C_h_intern(&lf[206],11,"signal/xfsz");
lf[207]=C_h_intern(&lf[207],11,"signal/usr1");
lf[208]=C_h_intern(&lf[208],11,"signal/usr2");
lf[209]=C_h_intern(&lf[209],12,"signal/winch");
lf[210]=C_h_intern(&lf[210],12,"signals-list");
lf[211]=C_h_intern(&lf[211],18,"\003sysinterrupt-hook");
lf[212]=C_h_intern(&lf[212],14,"signal-handler");
lf[213]=C_h_intern(&lf[213],19,"set-signal-handler!");
lf[214]=C_h_intern(&lf[214],16,"set-signal-mask!");
lf[215]=C_h_intern(&lf[215],14,"\000process-error");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot set signal mask");
lf[217]=C_h_intern(&lf[217],11,"signal-mask");
lf[218]=C_h_intern(&lf[218],14,"signal-masked\077");
lf[219]=C_h_intern(&lf[219],12,"signal-mask!");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot block signal");
lf[221]=C_h_intern(&lf[221],14,"signal-unmask!");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot unblock signal");
lf[223]=C_h_intern(&lf[223],18,"system-information");
lf[224]=C_h_intern(&lf[224],25,"\003syspeek-nonnull-c-string");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot retrieve system information");
lf[226]=C_h_intern(&lf[226],15,"current-user-id");
lf[227]=C_h_intern(&lf[227],25,"current-effective-user-id");
lf[228]=C_h_intern(&lf[228],16,"current-group-id");
lf[229]=C_h_intern(&lf[229],26,"current-effective-group-id");
lf[230]=C_h_intern(&lf[230],16,"user-information");
lf[231]=C_h_intern(&lf[231],6,"vector");
lf[232]=C_h_intern(&lf[232],4,"list");
lf[233]=C_h_intern(&lf[233],17,"current-user-name");
lf[234]=C_h_intern(&lf[234],27,"current-effective-user-name");
lf[235]=C_h_intern(&lf[235],17,"group-information");
lf[236]=C_h_intern(&lf[236],10,"get-groups");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\047cannot retrieve supplementary group ids");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\015out of memory");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\047cannot retrieve supplementary group ids");
lf[240]=C_h_intern(&lf[240],11,"set-groups!");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot set supplementary group ids");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\015out of memory");
lf[243]=C_h_intern(&lf[243],17,"initialize-groups");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000)cannot initialize supplementary group ids");
lf[245]=C_h_intern(&lf[245],10,"errno/perm");
lf[246]=C_h_intern(&lf[246],11,"errno/noent");
lf[247]=C_h_intern(&lf[247],10,"errno/srch");
lf[248]=C_h_intern(&lf[248],10,"errno/intr");
lf[249]=C_h_intern(&lf[249],8,"errno/io");
lf[250]=C_h_intern(&lf[250],12,"errno/noexec");
lf[251]=C_h_intern(&lf[251],10,"errno/badf");
lf[252]=C_h_intern(&lf[252],11,"errno/child");
lf[253]=C_h_intern(&lf[253],11,"errno/nomem");
lf[254]=C_h_intern(&lf[254],11,"errno/acces");
lf[255]=C_h_intern(&lf[255],11,"errno/fault");
lf[256]=C_h_intern(&lf[256],10,"errno/busy");
lf[257]=C_h_intern(&lf[257],12,"errno/notdir");
lf[258]=C_h_intern(&lf[258],11,"errno/isdir");
lf[259]=C_h_intern(&lf[259],11,"errno/inval");
lf[260]=C_h_intern(&lf[260],11,"errno/mfile");
lf[261]=C_h_intern(&lf[261],11,"errno/nospc");
lf[262]=C_h_intern(&lf[262],11,"errno/spipe");
lf[263]=C_h_intern(&lf[263],10,"errno/pipe");
lf[264]=C_h_intern(&lf[264],11,"errno/again");
lf[265]=C_h_intern(&lf[265],10,"errno/rofs");
lf[266]=C_h_intern(&lf[266],11,"errno/exist");
lf[267]=C_h_intern(&lf[267],16,"errno/wouldblock");
lf[268]=C_h_intern(&lf[268],10,"errno/2big");
lf[269]=C_h_intern(&lf[269],12,"errno/deadlk");
lf[270]=C_h_intern(&lf[270],9,"errno/dom");
lf[271]=C_h_intern(&lf[271],10,"errno/fbig");
lf[272]=C_h_intern(&lf[272],11,"errno/ilseq");
lf[273]=C_h_intern(&lf[273],11,"errno/mlink");
lf[274]=C_h_intern(&lf[274],17,"errno/nametoolong");
lf[275]=C_h_intern(&lf[275],11,"errno/nfile");
lf[276]=C_h_intern(&lf[276],11,"errno/nodev");
lf[277]=C_h_intern(&lf[277],11,"errno/nolck");
lf[278]=C_h_intern(&lf[278],11,"errno/nosys");
lf[279]=C_h_intern(&lf[279],14,"errno/notempty");
lf[280]=C_h_intern(&lf[280],11,"errno/notty");
lf[281]=C_h_intern(&lf[281],10,"errno/nxio");
lf[282]=C_h_intern(&lf[282],11,"errno/range");
lf[283]=C_h_intern(&lf[283],10,"errno/xdev");
lf[284]=C_h_intern(&lf[284],16,"change-file-mode");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot change file mode");
lf[286]=C_h_intern(&lf[286],17,"change-file-owner");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot change file owner");
lf[288]=C_h_intern(&lf[288],17,"file-read-access\077");
lf[289]=C_h_intern(&lf[289],18,"file-write-access\077");
lf[290]=C_h_intern(&lf[290],20,"file-execute-access\077");
lf[291]=C_h_intern(&lf[291],14,"create-session");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot create session");
lf[293]=C_h_intern(&lf[293],16,"process-group-id");
lf[294]=C_h_intern(&lf[294],20,"create-symbolic-link");
lf[295]=C_h_intern(&lf[295],18,"create-symbol-link");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot create symbolic link");
lf[297]=C_h_intern(&lf[297],18,"read-symbolic-link");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot read symbolic link");
lf[299]=C_h_intern(&lf[299],12,"canonicalize");
lf[300]=C_h_intern(&lf[300],9,"substring");
lf[301]=C_h_intern(&lf[301],9,"file-link");
lf[302]=C_h_intern(&lf[302],9,"hard-link");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\032could not create hard link");
lf[304]=C_h_intern(&lf[304],12,"fileno/stdin");
lf[305]=C_h_intern(&lf[305],13,"fileno/stdout");
lf[306]=C_h_intern(&lf[306],13,"fileno/stderr");
lf[307]=C_h_intern(&lf[307],7,"\000append");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid mode for input file");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid mode argument");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\001w");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\010(fdport)");
lf[315]=C_h_intern(&lf[315],16,"open-input-file*");
lf[316]=C_h_intern(&lf[316],17,"open-output-file*");
lf[317]=C_h_intern(&lf[317],12,"port->fileno");
lf[318]=C_h_intern(&lf[318],20,"\003systcp-port->fileno");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\031port has no attached file");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000%cannot access file-descriptor of port");
lf[321]=C_h_intern(&lf[321],25,"\003syspeek-unsigned-integer");
lf[322]=C_h_intern(&lf[322],16,"duplicate-fileno");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000 cannot duplicate file-descriptor");
lf[324]=C_h_intern(&lf[324],21,"\003syscustom-input-port");
lf[325]=C_h_intern(&lf[325],4,"void");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\015cannot select");
lf[327]=C_h_intern(&lf[327],17,"\003systhread-yield!");
lf[328]=C_h_intern(&lf[328],25,"\003systhread-block-for-i/o!");
lf[329]=C_h_intern(&lf[329],18,"\003syscurrent-thread");
lf[330]=C_h_intern(&lf[330],6,"\000input");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\013cannot read");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\013cannot read");
lf[333]=C_h_intern(&lf[333],14,"set-port-name!");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot close");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[336]=C_h_intern(&lf[336],17,"\003sysstring-append");
lf[337]=C_h_intern(&lf[337],15,"\003sysmake-string");
lf[338]=C_h_intern(&lf[338],20,"\003sysscan-buffer-line");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[340]=C_h_intern(&lf[340],15,"make-input-port");
lf[341]=C_h_intern(&lf[341],22,"\003syscustom-output-port");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot write");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot close");
lf[344]=C_h_intern(&lf[344],16,"make-output-port");
lf[345]=C_h_intern(&lf[345],13,"file-truncate");
lf[346]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot truncate file");
lf[347]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[348]=C_h_intern(&lf[348],4,"lock");
lf[349]=C_h_intern(&lf[349],9,"file-lock");
lf[350]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot lock file");
lf[351]=C_h_intern(&lf[351],18,"file-lock/blocking");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot lock file");
lf[353]=C_h_intern(&lf[353],14,"file-test-lock");
lf[354]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot unlock file");
lf[355]=C_h_intern(&lf[355],11,"file-unlock");
lf[356]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot unlock file");
lf[357]=C_h_intern(&lf[357],11,"create-fifo");
lf[358]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create FIFO");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\023file does not exist");
lf[360]=C_h_intern(&lf[360],13,"\003sysfile-info");
lf[361]=C_h_intern(&lf[361],6,"setenv");
lf[362]=C_h_intern(&lf[362],8,"unsetenv");
lf[363]=C_h_intern(&lf[363],25,"get-environment-variables");
lf[364]=C_h_intern(&lf[364],9,"prot/read");
lf[365]=C_h_intern(&lf[365],10,"prot/write");
lf[366]=C_h_intern(&lf[366],9,"prot/exec");
lf[367]=C_h_intern(&lf[367],9,"prot/none");
lf[368]=C_h_intern(&lf[368],9,"map/fixed");
lf[369]=C_h_intern(&lf[369],10,"map/shared");
lf[370]=C_h_intern(&lf[370],11,"map/private");
lf[371]=C_h_intern(&lf[371],13,"map/anonymous");
lf[372]=C_h_intern(&lf[372],8,"map/file");
lf[373]=C_h_intern(&lf[373],18,"map-file-to-memory");
lf[374]=C_h_intern(&lf[374],4,"mmap");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot map file to memory");
lf[376]=C_h_intern(&lf[376],20,"\003syspointer->address");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000)bad argument type - not a foreign pointer");
lf[378]=C_h_intern(&lf[378],16,"\003sysnull-pointer");
lf[379]=C_h_intern(&lf[379],22,"unmap-file-from-memory");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot unmap file from memory");
lf[381]=C_h_intern(&lf[381],26,"memory-mapped-file-pointer");
lf[382]=C_h_intern(&lf[382],19,"memory-mapped-file\077");
lf[383]=C_decode_literal(C_heaptop,"\376B\000\000 time formatting overflows buffer");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000$cannot convert time vector to string");
lf[385]=C_h_intern(&lf[385],12,"string->time");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000\027%a %b %e %H:%M:%S %Z %Y");
lf[387]=C_h_intern(&lf[387],17,"utc-time->seconds");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[389]=C_h_intern(&lf[389],27,"local-timezone-abbreviation");
lf[390]=C_h_intern(&lf[390],5,"_exit");
lf[391]=C_h_intern(&lf[391],10,"set-alarm!");
lf[392]=C_h_intern(&lf[392],19,"set-buffering-mode!");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot set buffering mode");
lf[394]=C_h_intern(&lf[394],5,"\000full");
lf[395]=C_h_intern(&lf[395],5,"\000line");
lf[396]=C_h_intern(&lf[396],5,"\000none");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid buffering-mode");
lf[398]=C_h_intern(&lf[398],14,"terminal-port\077");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000#port is not connected to a terminal");
lf[401]=C_h_intern(&lf[401],13,"terminal-name");
lf[402]=C_h_intern(&lf[402],13,"terminal-size");
lf[403]=C_h_intern(&lf[403],6,"\000error");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\036Unable to get size of terminal");
lf[405]=C_h_intern(&lf[405],17,"\003sysmake-locative");
lf[406]=C_h_intern(&lf[406],8,"location");
lf[407]=C_h_intern(&lf[407],13,"get-host-name");
lf[408]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot retrieve host-name");
lf[409]=C_h_intern(&lf[409],12,"process-fork");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot create child process");
lf[411]=C_h_intern(&lf[411],24,"pathname-strip-directory");
lf[412]=C_h_intern(&lf[412],15,"process-execute");
lf[413]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[414]=C_h_intern(&lf[414],16,"\003sysprocess-wait");
lf[415]=C_h_intern(&lf[415],12,"process-wait");
lf[416]=C_decode_literal(C_heaptop,"\376B\000\000 waiting for child process failed");
lf[417]=C_h_intern(&lf[417],18,"current-process-id");
lf[418]=C_h_intern(&lf[418],17,"parent-process-id");
lf[419]=C_h_intern(&lf[419],5,"sleep");
lf[420]=C_h_intern(&lf[420],14,"process-signal");
lf[421]=C_decode_literal(C_heaptop,"\376B\000\000 could not send signal to process");
lf[422]=C_h_intern(&lf[422],17,"\003sysshell-command");
lf[423]=C_decode_literal(C_heaptop,"\376B\000\000\007/bin/sh");
lf[424]=C_h_intern(&lf[424],24,"get-environment-variable");
lf[425]=C_decode_literal(C_heaptop,"\376B\000\000\005SHELL");
lf[426]=C_h_intern(&lf[426],27,"\003sysshell-command-arguments");
lf[427]=C_decode_literal(C_heaptop,"\376B\000\000\002-c");
lf[428]=C_h_intern(&lf[428],11,"process-run");
lf[429]=C_decode_literal(C_heaptop,"\376B\000\000\025abnormal process exit");
lf[430]=C_h_intern(&lf[430],11,"\003sysprocess");
lf[431]=C_h_intern(&lf[431],16,"\003syscheck-string");
lf[432]=C_h_intern(&lf[432],7,"process");
lf[433]=C_h_intern(&lf[433],8,"process*");
lf[434]=C_h_intern(&lf[434],19,"set-root-directory!");
lf[435]=C_decode_literal(C_heaptop,"\376B\000\000\037unable to change root directory");
lf[436]=C_decode_literal(C_heaptop,"\376B\000\000 cannot retrieve process group ID");
lf[437]=C_h_intern(&lf[437],21,"set-process-group-id!");
lf[438]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot set process group ID");
lf[439]=C_h_intern(&lf[439],18,"getter-with-setter");
lf[440]=C_decode_literal(C_heaptop,"\376B\000\000\026(process-group-id pid)");
lf[441]=C_h_intern(&lf[441],26,"effective-group-id!-setter");
lf[442]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot set effective group ID");
lf[443]=C_decode_literal(C_heaptop,"\376B\000\000\034(current-effective-group-id)");
lf[444]=C_h_intern(&lf[444],12,"set-user-id!");
lf[445]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot set group ID");
lf[446]=C_decode_literal(C_heaptop,"\376B\000\000\022(current-group-id)");
lf[447]=C_h_intern(&lf[447],25,"effective-user-id!-setter");
lf[448]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot set effective user ID");
lf[449]=C_decode_literal(C_heaptop,"\376B\000\000\033(current-effective-used-id)");
lf[450]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot set user ID");
lf[451]=C_decode_literal(C_heaptop,"\376B\000\000\021(current-user-id)");
lf[452]=C_h_intern(&lf[452],23,"\003sysuser-interrupt-hook");
lf[453]=C_h_intern(&lf[453],11,"make-vector");
lf[454]=C_decode_literal(C_heaptop,"\376B\000\000%cannot retrieve file position of port");
lf[455]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[456]=C_decode_literal(C_heaptop,"\376B\000\000\024(file-position port)");
lf[457]=C_decode_literal(C_heaptop,"\376B\000\000\031(file-creation-mode mode)");
lf[458]=C_h_intern(&lf[458],26,"set-file-modification-time");
lf[459]=C_decode_literal(C_heaptop,"\376B\000\000!cannot set file modification-time");
lf[460]=C_decode_literal(C_heaptop,"\376B\000\000\032(file-modification-time f)");
C_register_lf2(lf,461,create_ptable());
t2=C_mutate(&lf[0] /* (set! c106 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2344,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k2342 */
static void C_ccall f_2344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2347,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2345 in k2342 */
static void C_ccall f_2347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2350,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2348 in k2345 in k2342 */
static void C_ccall f_2350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2350,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2353,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2353,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2356,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2359,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2359(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2359,2,t0,t1);}
t2=*((C_word*)lf[2]+1);
t3=C_mutate(&lf[3] /* (set! posix-error ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2371,a[2]=t2,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[8]+1 /* (set! ##sys#posix-error ...) */,lf[3]);
t5=C_mutate(&lf[9] /* (set! ##sys#stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2389,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[17]+1 /* (set! file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2433,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2466,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8520,a[2]=((C_word)li245),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8526,a[2]=((C_word)li246),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:175: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[439]+1)))(5,*((C_word*)lf[439]+1),t7,t8,t9,lf[460]);}

/* a8525 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8526(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8526,4,t0,t1,t2,t3);}
t4=C_i_check_number_2(t3,lf[458]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8546,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8559,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:181: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t6,t2);}

/* k8557 in a8525 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8559,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8536,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t4=C_i_foreign_string_argumentp(t1);
/* ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t3,t4);}
else{
t4=((C_word*)t0)[2];
f_8546(t4,stub118(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t2));}}

/* k8534 in k8557 in a8525 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_8546(t2,stub118(C_SCHEME_UNDEFINED,t1,((C_word*)t0)[2]));}

/* k8544 in a8525 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_8546(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:183: posix-error */
t2=lf[3];
f_2371(7,t2,((C_word*)t0)[4],lf[10],lf[458],lf[459],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* a8519 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8520(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8520,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8524,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:177: ##sys#stat */
f_2389(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[19]);}

/* k8522 in a8519 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8524,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_mtime));}

/* k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2466(C_word c,C_word t0,C_word t1){
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
C_word ab[66],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2466,2,t0,t1);}
t2=C_mutate((C_word*)lf[19]+1 /* (set! file-modification-time ...) */,t1);
t3=C_mutate((C_word*)lf[20]+1 /* (set! file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2468,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[21]+1 /* (set! file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2474,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[22]+1 /* (set! file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2480,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[23]+1 /* (set! file-permissions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2486,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[24]+1 /* (set! file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2492,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[25]+1 /* (set! file-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2498,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[33]+1 /* (set! regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2588,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[34]+1 /* (set! symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2598,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[35]+1 /* (set! block-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2608,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[36]+1 /* (set! character-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2618,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[37]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2628,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[38]+1 /* (set! socket? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2638,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[39]+1 /* (set! directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2648,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[40]+1 /* (set! current-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2658,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[45]+1 /* (set! delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2704,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[27]+1 /* (set! directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2808,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[54]+1 /* (set! glob ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2955,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate(&lf[62] /* (set! ##sys#find-files ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3064,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[49]+1 /* (set! find-files ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3262,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3445,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8480,a[2]=((C_word)li243),tmp=(C_word)a,a+=3,tmp);
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8514,a[2]=((C_word)li244),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:372: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[439]+1)))(5,*((C_word*)lf[439]+1),t22,t23,t24,lf[457]);}

/* a8513 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8514(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8514,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[78]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_umask(t2));}

/* a8479 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8480(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_8480r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_8480r(t0,t1,t2);}}

static void C_ccall f_8480r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8484,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_8484(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_8484(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k8482 in a8479 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_truep(t1)?C_i_check_exact_2(t1,lf[78]):C_SCHEME_UNDEFINED);
t3=C_umask(t1);
if(C_truep(t1)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_umask(t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}}

/* k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3445(C_word c,C_word t0,C_word t1){
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
C_word ab[63],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3445,2,t0,t1);}
t2=C_mutate((C_word*)lf[78]+1 /* (set! file-creation-mode ...) */,t1);
t3=C_mutate(&lf[79] /* (set! check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3447,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[81]+1 /* (set! seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3466,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[84]+1 /* (set! seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3500,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[85]+1 /* (set! seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3544,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[87]+1 /* (set! local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3595,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[90]+1 /* (set! time->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3620,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[93]+1 /* (set! ##sys#file-nonblocking! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3687,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[94]+1 /* (set! ##sys#file-select-one ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3694,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[95]+1 /* (set! pipe/buf ...) */,C_fix((C_word)PIPE_BUF));
t12=C_mutate((C_word*)lf[96]+1 /* (set! fcntl/dupfd ...) */,C_fix((C_word)F_DUPFD));
t13=C_mutate((C_word*)lf[97]+1 /* (set! fcntl/getfd ...) */,C_fix((C_word)F_GETFD));
t14=C_mutate((C_word*)lf[98]+1 /* (set! fcntl/setfd ...) */,C_fix((C_word)F_SETFD));
t15=C_mutate((C_word*)lf[99]+1 /* (set! fcntl/getfl ...) */,C_fix((C_word)F_GETFL));
t16=C_mutate((C_word*)lf[100]+1 /* (set! fcntl/setfl ...) */,C_fix((C_word)F_SETFL));
t17=C_mutate((C_word*)lf[101]+1 /* (set! open/rdonly ...) */,C_fix((C_word)O_RDONLY));
t18=C_mutate((C_word*)lf[102]+1 /* (set! open/wronly ...) */,C_fix((C_word)O_WRONLY));
t19=C_mutate((C_word*)lf[103]+1 /* (set! open/rdwr ...) */,C_fix((C_word)O_RDWR));
t20=C_mutate((C_word*)lf[104]+1 /* (set! open/read ...) */,C_fix((C_word)O_RDONLY));
t21=C_mutate((C_word*)lf[105]+1 /* (set! open/write ...) */,C_fix((C_word)O_WRONLY));
t22=C_mutate((C_word*)lf[106]+1 /* (set! open/creat ...) */,C_fix((C_word)O_CREAT));
t23=C_mutate((C_word*)lf[107]+1 /* (set! open/append ...) */,C_fix((C_word)O_APPEND));
t24=C_mutate((C_word*)lf[108]+1 /* (set! open/excl ...) */,C_fix((C_word)O_EXCL));
t25=C_mutate((C_word*)lf[109]+1 /* (set! open/noctty ...) */,C_fix((C_word)O_NOCTTY));
t26=C_mutate((C_word*)lf[110]+1 /* (set! open/nonblock ...) */,C_fix((C_word)O_NONBLOCK));
t27=C_mutate((C_word*)lf[111]+1 /* (set! open/trunc ...) */,C_fix((C_word)O_TRUNC));
t28=C_mutate((C_word*)lf[112]+1 /* (set! open/sync ...) */,C_fix((C_word)O_FSYNC));
t29=C_mutate((C_word*)lf[113]+1 /* (set! open/fsync ...) */,C_fix((C_word)O_FSYNC));
t30=C_mutate((C_word*)lf[114]+1 /* (set! open/binary ...) */,C_fix((C_word)O_BINARY));
t31=C_mutate((C_word*)lf[115]+1 /* (set! open/text ...) */,C_fix((C_word)O_TEXT));
t32=C_mutate((C_word*)lf[116]+1 /* (set! perm/irusr ...) */,C_fix((C_word)S_IRUSR));
t33=C_mutate((C_word*)lf[117]+1 /* (set! perm/iwusr ...) */,C_fix((C_word)S_IWUSR));
t34=C_mutate((C_word*)lf[118]+1 /* (set! perm/ixusr ...) */,C_fix((C_word)S_IXUSR));
t35=C_mutate((C_word*)lf[119]+1 /* (set! perm/irgrp ...) */,C_fix((C_word)S_IRGRP));
t36=C_mutate((C_word*)lf[120]+1 /* (set! perm/iwgrp ...) */,C_fix((C_word)S_IWGRP));
t37=C_mutate((C_word*)lf[121]+1 /* (set! perm/ixgrp ...) */,C_fix((C_word)S_IXGRP));
t38=C_mutate((C_word*)lf[122]+1 /* (set! perm/iroth ...) */,C_fix((C_word)S_IROTH));
t39=C_mutate((C_word*)lf[123]+1 /* (set! perm/iwoth ...) */,C_fix((C_word)S_IWOTH));
t40=C_mutate((C_word*)lf[124]+1 /* (set! perm/ixoth ...) */,C_fix((C_word)S_IXOTH));
t41=C_mutate((C_word*)lf[125]+1 /* (set! perm/irwxu ...) */,C_fix((C_word)S_IRWXU));
t42=C_mutate((C_word*)lf[126]+1 /* (set! perm/irwxg ...) */,C_fix((C_word)S_IRWXG));
t43=C_mutate((C_word*)lf[127]+1 /* (set! perm/irwxo ...) */,C_fix((C_word)S_IRWXO));
t44=C_mutate((C_word*)lf[128]+1 /* (set! perm/isvtx ...) */,C_fix((C_word)S_ISVTX));
t45=C_mutate((C_word*)lf[129]+1 /* (set! perm/isuid ...) */,C_fix((C_word)S_ISUID));
t46=C_mutate((C_word*)lf[130]+1 /* (set! perm/isgid ...) */,C_fix((C_word)S_ISGID));
t47=C_mutate((C_word*)lf[131]+1 /* (set! file-control ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3751,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t48=C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRGRP),C_fix((C_word)S_IROTH));
t49=C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRWXU),t48);
t50=C_mutate((C_word*)lf[133]+1 /* (set! file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3797,a[2]=t49,a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp));
t51=C_mutate((C_word*)lf[135]+1 /* (set! file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3835,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[137]+1 /* (set! file-read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3850,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[140]+1 /* (set! file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3892,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[143]+1 /* (set! file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3931,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[145]+1 /* (set! file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3989,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[147]+1 /* (set! seek/set ...) */,C_fix((C_word)SEEK_SET));
t57=C_mutate((C_word*)lf[148]+1 /* (set! seek/end ...) */,C_fix((C_word)SEEK_END));
t58=C_mutate((C_word*)lf[149]+1 /* (set! seek/cur ...) */,C_fix((C_word)SEEK_CUR));
t59=C_mutate((C_word*)lf[150]+1 /* (set! set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4281,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t60=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4341,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t61=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8439,a[2]=((C_word)li242),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:725: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[439]+1)))(5,*((C_word*)lf[439]+1),t60,t61,*((C_word*)lf[150]+1),lf[456]);}

/* a8438 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8439(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8439,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8443,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8455,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:727: port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[154]+1)))(3,*((C_word*)lf[154]+1),t4,t2);}

/* k8453 in a8438 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[3],C_fix(7));
t3=C_eqp(t2,lf[152]);
if(C_truep(t3)){
t4=C_ftell(((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
f_8443(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
f_8443(2,t4,C_fix(-1));}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t2=C_lseek(((C_word*)t0)[3],C_fix(0),C_fix((C_word)SEEK_CUR));
t3=((C_word*)t0)[2];
f_8443(2,t3,t2);}
else{
/* posixunix.scm:734: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(6,*((C_word*)lf[4]+1),((C_word*)t0)[2],lf[15],lf[157],lf[455],((C_word*)t0)[3]);}}}

/* k8441 in a8438 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8443,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8446,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t1,C_fix(0)))){
/* posixunix.scm:736: posix-error */
t3=lf[3];
f_2371(6,t3,t2,lf[10],lf[157],lf[454],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k8444 in k8441 in a8438 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4341(C_word c,C_word t0,C_word t1){
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
C_word ab[114],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4341,2,t0,t1);}
t2=C_mutate((C_word*)lf[157]+1 /* (set! file-position ...) */,t1);
t3=C_mutate((C_word*)lf[158]+1 /* (set! create-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4343,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[41]+1 /* (set! change-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4476,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4516,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
t6=C_mutate((C_word*)lf[167]+1 /* (set! open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4531,a[2]=t5,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp));
t7=C_mutate((C_word*)lf[171]+1 /* (set! open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4567,a[2]=t5,a[3]=((C_word)li85),tmp=(C_word)a,a+=4,tmp));
t8=C_mutate((C_word*)lf[172]+1 /* (set! close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4603,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[176]+1 /* (set! close-output-pipe ...) */,*((C_word*)lf[172]+1));
t10=C_mutate((C_word*)lf[177]+1 /* (set! call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4619,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[178]+1 /* (set! call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4643,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[179]+1 /* (set! with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4667,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[181]+1 /* (set! with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4687,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[183]+1 /* (set! create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4707,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[185]+1 /* (set! signal/term ...) */,C_fix((C_word)SIGTERM));
t16=C_mutate((C_word*)lf[186]+1 /* (set! signal/kill ...) */,C_fix((C_word)SIGKILL));
t17=C_mutate((C_word*)lf[187]+1 /* (set! signal/int ...) */,C_fix((C_word)SIGINT));
t18=C_mutate((C_word*)lf[188]+1 /* (set! signal/hup ...) */,C_fix((C_word)SIGHUP));
t19=C_mutate((C_word*)lf[189]+1 /* (set! signal/fpe ...) */,C_fix((C_word)SIGFPE));
t20=C_mutate((C_word*)lf[190]+1 /* (set! signal/ill ...) */,C_fix((C_word)SIGILL));
t21=C_mutate((C_word*)lf[191]+1 /* (set! signal/segv ...) */,C_fix((C_word)SIGSEGV));
t22=C_mutate((C_word*)lf[192]+1 /* (set! signal/abrt ...) */,C_fix((C_word)SIGABRT));
t23=C_mutate((C_word*)lf[193]+1 /* (set! signal/trap ...) */,C_fix((C_word)SIGTRAP));
t24=C_mutate((C_word*)lf[194]+1 /* (set! signal/quit ...) */,C_fix((C_word)SIGQUIT));
t25=C_mutate((C_word*)lf[195]+1 /* (set! signal/alrm ...) */,C_fix((C_word)SIGALRM));
t26=C_mutate((C_word*)lf[196]+1 /* (set! signal/vtalrm ...) */,C_fix((C_word)SIGVTALRM));
t27=C_mutate((C_word*)lf[197]+1 /* (set! signal/prof ...) */,C_fix((C_word)SIGPROF));
t28=C_mutate((C_word*)lf[198]+1 /* (set! signal/io ...) */,C_fix((C_word)SIGIO));
t29=C_mutate((C_word*)lf[199]+1 /* (set! signal/urg ...) */,C_fix((C_word)SIGURG));
t30=C_mutate((C_word*)lf[200]+1 /* (set! signal/chld ...) */,C_fix((C_word)SIGCHLD));
t31=C_mutate((C_word*)lf[201]+1 /* (set! signal/cont ...) */,C_fix((C_word)SIGCONT));
t32=C_mutate((C_word*)lf[202]+1 /* (set! signal/stop ...) */,C_fix((C_word)SIGSTOP));
t33=C_mutate((C_word*)lf[203]+1 /* (set! signal/tstp ...) */,C_fix((C_word)SIGTSTP));
t34=C_mutate((C_word*)lf[204]+1 /* (set! signal/pipe ...) */,C_fix((C_word)SIGPIPE));
t35=C_mutate((C_word*)lf[205]+1 /* (set! signal/xcpu ...) */,C_fix((C_word)SIGXCPU));
t36=C_mutate((C_word*)lf[206]+1 /* (set! signal/xfsz ...) */,C_fix((C_word)SIGXFSZ));
t37=C_mutate((C_word*)lf[207]+1 /* (set! signal/usr1 ...) */,C_fix((C_word)SIGUSR1));
t38=C_mutate((C_word*)lf[208]+1 /* (set! signal/usr2 ...) */,C_fix((C_word)SIGUSR2));
t39=C_mutate((C_word*)lf[209]+1 /* (set! signal/winch ...) */,C_fix((C_word)SIGWINCH));
t40=C_a_i_list(&a,25,*((C_word*)lf[185]+1),*((C_word*)lf[186]+1),*((C_word*)lf[187]+1),*((C_word*)lf[188]+1),*((C_word*)lf[189]+1),*((C_word*)lf[190]+1),*((C_word*)lf[191]+1),*((C_word*)lf[192]+1),*((C_word*)lf[193]+1),*((C_word*)lf[194]+1),*((C_word*)lf[195]+1),*((C_word*)lf[196]+1),*((C_word*)lf[197]+1),*((C_word*)lf[198]+1),*((C_word*)lf[199]+1),*((C_word*)lf[200]+1),*((C_word*)lf[201]+1),*((C_word*)lf[202]+1),*((C_word*)lf[203]+1),*((C_word*)lf[204]+1),*((C_word*)lf[205]+1),*((C_word*)lf[206]+1),*((C_word*)lf[207]+1),*((C_word*)lf[208]+1),*((C_word*)lf[209]+1));
t41=C_mutate((C_word*)lf[210]+1 /* (set! signals-list ...) */,t40);
t42=*((C_word*)lf[211]+1);
t43=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4752,a[2]=((C_word*)t0)[2],a[3]=t42,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:926: make-vector */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[453]+1)))(4,*((C_word*)lf[453]+1),t43,C_fix(256),C_SCHEME_FALSE);}

/* k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4752(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4752,2,t0,t1);}
t2=C_mutate((C_word*)lf[212]+1 /* (set! signal-handler ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4754,a[2]=t1,a[3]=((C_word)li98),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[213]+1 /* (set! set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4763,a[2]=t1,a[3]=((C_word)li99),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[211]+1 /* (set! ##sys#interrupt-hook ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4776,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li100),tmp=(C_word)a,a+=5,tmp));
t5=C_mutate((C_word*)lf[214]+1 /* (set! set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4794,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[217]+1 /* (set! signal-mask ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4843,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[218]+1 /* (set! signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4875,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[219]+1 /* (set! signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4881,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[221]+1 /* (set! signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4896,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4912,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8433,a[2]=((C_word)li241),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:982: set-signal-handler! */
t12=*((C_word*)lf[213]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,*((C_word*)lf[187]+1),t11);}

/* a8432 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8433(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8433,3,t0,t1,t2);}
/* posixunix.scm:984: ##sys#user-interrupt-hook */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[452]+1)))(2,*((C_word*)lf[452]+1),t1);}

/* k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4912,2,t0,t1);}
t2=C_mutate((C_word*)lf[223]+1 /* (set! system-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4914,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4954,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8415,a[2]=((C_word)li239),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8418,a[2]=((C_word)li240),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1008: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[439]+1)))(5,*((C_word*)lf[439]+1),t3,t4,t5,lf[451]);}

/* a8417 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8418(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8418,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(C_setuid(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8428,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1012: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8426 in a8417 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1013: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[444],lf[450],((C_word*)t0)[2]);}

/* a8414 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8415,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1047(C_SCHEME_UNDEFINED));}

/* k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4954,2,t0,t1);}
t2=C_mutate((C_word*)lf[226]+1 /* (set! current-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4958,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8397,a[2]=((C_word)li237),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8400,a[2]=((C_word)li238),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1017: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[439]+1)))(5,*((C_word*)lf[439]+1),t3,t4,t5,lf[449]);}

/* a8399 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8400(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8400,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(C_seteuid(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8410,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1021: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8408 in a8399 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1022: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[447],lf[448],((C_word*)t0)[2]);}

/* a8396 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8397,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1052(C_SCHEME_UNDEFINED));}

/* k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4958,2,t0,t1);}
t2=C_mutate((C_word*)lf[227]+1 /* (set! current-effective-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4962,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8379,a[2]=((C_word)li235),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8382,a[2]=((C_word)li236),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1027: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[439]+1)))(5,*((C_word*)lf[439]+1),t3,t4,t5,lf[446]);}

/* a8381 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8382(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8382,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(C_setgid(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8392,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1031: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8390 in a8381 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1032: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[444],lf[445],((C_word*)t0)[2]);}

/* a8378 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8379,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1057(C_SCHEME_UNDEFINED));}

/* k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4962,2,t0,t1);}
t2=C_mutate((C_word*)lf[228]+1 /* (set! current-group-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4966,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8361,a[2]=((C_word)li233),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8364,a[2]=((C_word)li234),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1036: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[439]+1)))(5,*((C_word*)lf[439]+1),t3,t4,t5,lf[443]);}

/* a8363 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8364(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8364,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(C_setegid(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8374,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1040: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8372 in a8363 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1041: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[441],lf[442],((C_word*)t0)[2]);}

/* a8360 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8361,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1062(C_SCHEME_UNDEFINED));}

/* k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4966(C_word c,C_word t0,C_word t1){
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
C_word ab[54],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4966,2,t0,t1);}
t2=C_mutate((C_word*)lf[229]+1 /* (set! current-effective-group-id ...) */,t1);
t3=C_mutate((C_word*)lf[230]+1 /* (set! user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4968,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[233]+1 /* (set! current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5035,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[234]+1 /* (set! current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5049,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[235]+1 /* (set! group-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5074,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[236]+1 /* (set! get-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5167,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[240]+1 /* (set! set-groups! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5230,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[243]+1 /* (set! initialize-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5304,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[245]+1 /* (set! errno/perm ...) */,C_fix((C_word)EPERM));
t11=C_mutate((C_word*)lf[246]+1 /* (set! errno/noent ...) */,C_fix((C_word)ENOENT));
t12=C_mutate((C_word*)lf[247]+1 /* (set! errno/srch ...) */,C_fix((C_word)ESRCH));
t13=C_mutate((C_word*)lf[248]+1 /* (set! errno/intr ...) */,C_fix((C_word)EINTR));
t14=C_mutate((C_word*)lf[249]+1 /* (set! errno/io ...) */,C_fix((C_word)EIO));
t15=C_mutate((C_word*)lf[250]+1 /* (set! errno/noexec ...) */,C_fix((C_word)ENOEXEC));
t16=C_mutate((C_word*)lf[251]+1 /* (set! errno/badf ...) */,C_fix((C_word)EBADF));
t17=C_mutate((C_word*)lf[252]+1 /* (set! errno/child ...) */,C_fix((C_word)ECHILD));
t18=C_mutate((C_word*)lf[253]+1 /* (set! errno/nomem ...) */,C_fix((C_word)ENOMEM));
t19=C_mutate((C_word*)lf[254]+1 /* (set! errno/acces ...) */,C_fix((C_word)EACCES));
t20=C_mutate((C_word*)lf[255]+1 /* (set! errno/fault ...) */,C_fix((C_word)EFAULT));
t21=C_mutate((C_word*)lf[256]+1 /* (set! errno/busy ...) */,C_fix((C_word)EBUSY));
t22=C_mutate((C_word*)lf[257]+1 /* (set! errno/notdir ...) */,C_fix((C_word)ENOTDIR));
t23=C_mutate((C_word*)lf[258]+1 /* (set! errno/isdir ...) */,C_fix((C_word)EISDIR));
t24=C_mutate((C_word*)lf[259]+1 /* (set! errno/inval ...) */,C_fix((C_word)EINVAL));
t25=C_mutate((C_word*)lf[260]+1 /* (set! errno/mfile ...) */,C_fix((C_word)EMFILE));
t26=C_mutate((C_word*)lf[261]+1 /* (set! errno/nospc ...) */,C_fix((C_word)ENOSPC));
t27=C_mutate((C_word*)lf[262]+1 /* (set! errno/spipe ...) */,C_fix((C_word)ESPIPE));
t28=C_mutate((C_word*)lf[263]+1 /* (set! errno/pipe ...) */,C_fix((C_word)EPIPE));
t29=C_mutate((C_word*)lf[264]+1 /* (set! errno/again ...) */,C_fix((C_word)EAGAIN));
t30=C_mutate((C_word*)lf[265]+1 /* (set! errno/rofs ...) */,C_fix((C_word)EROFS));
t31=C_mutate((C_word*)lf[266]+1 /* (set! errno/exist ...) */,C_fix((C_word)EEXIST));
t32=C_mutate((C_word*)lf[267]+1 /* (set! errno/wouldblock ...) */,C_fix((C_word)EWOULDBLOCK));
t33=C_set_block_item(lf[268] /* errno/2big */,0,C_fix(0));
t34=C_set_block_item(lf[269] /* errno/deadlk */,0,C_fix(0));
t35=C_set_block_item(lf[270] /* errno/dom */,0,C_fix(0));
t36=C_set_block_item(lf[271] /* errno/fbig */,0,C_fix(0));
t37=C_set_block_item(lf[272] /* errno/ilseq */,0,C_fix(0));
t38=C_set_block_item(lf[273] /* errno/mlink */,0,C_fix(0));
t39=C_set_block_item(lf[274] /* errno/nametoolong */,0,C_fix(0));
t40=C_set_block_item(lf[275] /* errno/nfile */,0,C_fix(0));
t41=C_set_block_item(lf[276] /* errno/nodev */,0,C_fix(0));
t42=C_set_block_item(lf[277] /* errno/nolck */,0,C_fix(0));
t43=C_set_block_item(lf[278] /* errno/nosys */,0,C_fix(0));
t44=C_set_block_item(lf[279] /* errno/notempty */,0,C_fix(0));
t45=C_set_block_item(lf[280] /* errno/notty */,0,C_fix(0));
t46=C_set_block_item(lf[281] /* errno/nxio */,0,C_fix(0));
t47=C_set_block_item(lf[282] /* errno/range */,0,C_fix(0));
t48=C_set_block_item(lf[283] /* errno/xdev */,0,C_fix(0));
t49=C_mutate((C_word*)lf[284]+1 /* (set! change-file-mode ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5368,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[286]+1 /* (set! change-file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5395,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp));
t51=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5425,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
t52=C_mutate((C_word*)lf[288]+1 /* (set! file-read-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5449,a[2]=t51,a[3]=((C_word)li122),tmp=(C_word)a,a+=4,tmp));
t53=C_mutate((C_word*)lf[289]+1 /* (set! file-write-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5455,a[2]=t51,a[3]=((C_word)li123),tmp=(C_word)a,a+=4,tmp));
t54=C_mutate((C_word*)lf[290]+1 /* (set! file-execute-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5461,a[2]=t51,a[3]=((C_word)li124),tmp=(C_word)a,a+=4,tmp));
t55=C_mutate((C_word*)lf[291]+1 /* (set! create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5467,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t56=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5484,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t57=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8322,a[2]=((C_word)li231),tmp=(C_word)a,a+=3,tmp);
t58=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8340,a[2]=((C_word)li232),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1231: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[439]+1)))(5,*((C_word*)lf[439]+1),t56,t57,t58,lf[440]);}

/* a8339 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8340,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t2,lf[437]);
t5=C_i_check_exact_2(t3,lf[437]);
if(C_truep(C_fixnum_lessp(C_setpgid(t2,t3),C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8356,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1243: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t6);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8354 in a8339 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1244: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[437],lf[438],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a8321 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8322(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8322,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[293]);
t4=C_getpgid(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8329,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8335,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1236: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t6);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t4);}}

/* k8333 in a8321 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1237: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[293],lf[436],((C_word*)t0)[2]);}

/* k8327 in a8321 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5484,2,t0,t1);}
t2=C_mutate((C_word*)lf[293]+1 /* (set! process-group-id ...) */,t1);
t3=C_mutate((C_word*)lf[294]+1 /* (set! create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5486,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5523,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_plus(C_fix((C_word)FILENAME_MAX),C_fix(1));
/* posixunix.scm:1264: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[44]+1)))(3,*((C_word*)lf[44]+1),t4,t5);}

/* k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5523(C_word c,C_word t0,C_word t1){
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
C_word ab[221],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5523,2,t0,t1);}
t2=C_mutate((C_word*)lf[297]+1 /* (set! read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5524,a[2]=t1,a[3]=((C_word)li127),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[301]+1 /* (set! file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5611,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[304]+1 /* (set! fileno/stdin ...) */,C_fix((C_word)STDIN_FILENO));
t5=C_mutate((C_word*)lf[305]+1 /* (set! fileno/stdout ...) */,C_fix((C_word)STDOUT_FILENO));
t6=C_mutate((C_word*)lf[306]+1 /* (set! fileno/stderr ...) */,C_fix((C_word)STDERR_FILENO));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5636,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t12=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5673,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[315]+1 /* (set! open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5688,a[2]=t8,a[3]=t10,a[4]=((C_word)li131),tmp=(C_word)a,a+=5,tmp));
t14=C_mutate((C_word*)lf[316]+1 /* (set! open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5702,a[2]=t8,a[3]=t10,a[4]=((C_word)li132),tmp=(C_word)a,a+=5,tmp));
t15=C_mutate((C_word*)lf[317]+1 /* (set! port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5716,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[322]+1 /* (set! duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5761,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[324]+1 /* (set! ##sys#custom-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5788,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[341]+1 /* (set! ##sys#custom-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6270,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[345]+1 /* (set! file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6518,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp));
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6557,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp));
t25=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6631,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[349]+1 /* (set! file-lock ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6649,a[2]=t21,a[3]=t23,a[4]=((C_word)li162),tmp=(C_word)a,a+=5,tmp));
t27=C_mutate((C_word*)lf[351]+1 /* (set! file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6664,a[2]=t21,a[3]=t23,a[4]=((C_word)li163),tmp=(C_word)a,a+=5,tmp));
t28=C_mutate((C_word*)lf[353]+1 /* (set! file-test-lock ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6679,a[2]=t21,a[3]=t23,a[4]=((C_word)li164),tmp=(C_word)a,a+=5,tmp));
t29=C_mutate((C_word*)lf[355]+1 /* (set! file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6706,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[357]+1 /* (set! create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6734,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[37]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6777,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[361]+1 /* (set! setenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6803,a[2]=((C_word)li168),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[362]+1 /* (set! unsetenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6820,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[363]+1 /* (set! get-environment-variables ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6840,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[364]+1 /* (set! prot/read ...) */,C_fix((C_word)PROT_READ));
t36=C_mutate((C_word*)lf[365]+1 /* (set! prot/write ...) */,C_fix((C_word)PROT_WRITE));
t37=C_mutate((C_word*)lf[366]+1 /* (set! prot/exec ...) */,C_fix((C_word)PROT_EXEC));
t38=C_mutate((C_word*)lf[367]+1 /* (set! prot/none ...) */,C_fix((C_word)PROT_NONE));
t39=C_mutate((C_word*)lf[368]+1 /* (set! map/fixed ...) */,C_fix((C_word)MAP_FIXED));
t40=C_mutate((C_word*)lf[369]+1 /* (set! map/shared ...) */,C_fix((C_word)MAP_SHARED));
t41=C_mutate((C_word*)lf[370]+1 /* (set! map/private ...) */,C_fix((C_word)MAP_PRIVATE));
t42=C_mutate((C_word*)lf[371]+1 /* (set! map/anonymous ...) */,C_fix((C_word)MAP_ANON));
t43=C_mutate((C_word*)lf[372]+1 /* (set! map/file ...) */,C_fix((C_word)MAP_FILE));
t44=C_mutate((C_word*)lf[373]+1 /* (set! map-file-to-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6943,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[379]+1 /* (set! unmap-file-from-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7005,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[381]+1 /* (set! memory-mapped-file-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7040,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[382]+1 /* (set! memory-mapped-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7049,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[90]+1 /* (set! time->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7065,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[385]+1 /* (set! string->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7134,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[387]+1 /* (set! utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7180,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[389]+1 /* (set! local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7195,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[390]+1 /* (set! _exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7207,a[2]=((C_word)li181),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[391]+1 /* (set! set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7223,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[392]+1 /* (set! set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7230,a[2]=((C_word)li183),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[398]+1 /* (set! terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7289,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate(&lf[399] /* (set! ##sys#terminal-check ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7308,a[2]=((C_word)li185),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[401]+1 /* (set! terminal-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7340,a[2]=((C_word)li186),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[402]+1 /* (set! terminal-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7363,a[2]=((C_word)li187),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[407]+1 /* (set! get-host-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7398,a[2]=((C_word)li188),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[409]+1 /* (set! process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7412,a[2]=((C_word)li189),tmp=(C_word)a,a+=3,tmp));
t61=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7454,a[2]=((C_word)li190),tmp=(C_word)a,a+=3,tmp);
t62=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7473,a[2]=((C_word)li191),tmp=(C_word)a,a+=3,tmp);
t63=*((C_word*)lf[411]+1);
t64=C_mutate((C_word*)lf[412]+1 /* (set! process-execute ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7492,a[2]=t63,a[3]=t62,a[4]=t61,a[5]=((C_word)li194),tmp=(C_word)a,a+=6,tmp));
t65=C_mutate((C_word*)lf[414]+1 /* (set! ##sys#process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7665,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp));
t66=C_mutate((C_word*)lf[415]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7682,a[2]=((C_word)li198),tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[417]+1 /* (set! current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7760,a[2]=((C_word)li199),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[418]+1 /* (set! parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7763,a[2]=((C_word)li200),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[419]+1 /* (set! sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7766,a[2]=((C_word)li201),tmp=(C_word)a,a+=3,tmp));
t70=C_mutate((C_word*)lf[420]+1 /* (set! process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7773,a[2]=((C_word)li202),tmp=(C_word)a,a+=3,tmp));
t71=C_mutate((C_word*)lf[422]+1 /* (set! ##sys#shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7800,a[2]=((C_word)li203),tmp=(C_word)a,a+=3,tmp));
t72=C_mutate((C_word*)lf[426]+1 /* (set! ##sys#shell-command-arguments ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7809,a[2]=((C_word)li204),tmp=(C_word)a,a+=3,tmp));
t73=C_mutate((C_word*)lf[428]+1 /* (set! process-run ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7815,a[2]=((C_word)li205),tmp=(C_word)a,a+=3,tmp));
t74=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7871,a[2]=((C_word)li209),tmp=(C_word)a,a+=3,tmp);
t75=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7908,a[2]=((C_word)li212),tmp=(C_word)a,a+=3,tmp);
t76=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7928,a[2]=((C_word)li213),tmp=(C_word)a,a+=3,tmp);
t77=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7942,a[2]=((C_word)li214),tmp=(C_word)a,a+=3,tmp);
t78=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7975,a[2]=t75,a[3]=t77,a[4]=((C_word)li216),tmp=(C_word)a,a+=5,tmp);
t79=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8020,a[2]=t76,a[3]=((C_word)li217),tmp=(C_word)a,a+=4,tmp);
t80=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8031,a[2]=t76,a[3]=((C_word)li218),tmp=(C_word)a,a+=4,tmp);
t81=C_mutate((C_word*)lf[430]+1 /* (set! ##sys#process ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8042,a[2]=t80,a[3]=t74,a[4]=t79,a[5]=t78,a[6]=((C_word)li221),tmp=(C_word)a,a+=7,tmp));
t82=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8098,a[2]=((C_word)li227),tmp=(C_word)a,a+=3,tmp);
t83=C_mutate((C_word*)lf[432]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8184,a[2]=t82,a[3]=((C_word)li228),tmp=(C_word)a,a+=4,tmp));
t84=C_mutate((C_word*)lf[433]+1 /* (set! process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8235,a[2]=t82,a[3]=((C_word)li229),tmp=(C_word)a,a+=4,tmp));
t85=C_mutate((C_word*)lf[434]+1 /* (set! set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8299,a[2]=((C_word)li230),tmp=(C_word)a,a+=3,tmp));
t86=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t86+1)))(2,t86,C_SCHEME_UNDEFINED);}

/* f_8299 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8299(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_8299,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[434]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8309,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8291,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t5)){
t7=C_i_foreign_string_argumentp(t5);
/* ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t6,t7);}
else{
t7=stub2113(C_SCHEME_UNDEFINED,C_SCHEME_FALSE);
t8=t4;
f_8309(t8,C_fixnum_lessp(t7,C_fix(0)));}}

/* k8289 */
static void C_ccall f_8291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=stub2113(C_SCHEME_UNDEFINED,t1);
t3=((C_word*)t0)[2];
f_8309(t3,C_fixnum_lessp(t2,C_fix(0)));}

/* k8307 */
static void C_fcall f_8309(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:2034: posix-error */
t2=lf[3];
f_2371(6,t2,((C_word*)t0)[3],lf[10],lf[434],lf[435],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_8235 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8235(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_8235r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8235r(t0,t1,t2,t3);}}

static void C_ccall f_8235r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
if(C_truep(C_i_nullp(t11))){
/* posixunix.scm:2024: %process */
f_8098(t1,lf[433],C_SCHEME_TRUE,t2,t5,t9);}
else{
/* ##sys#error */
t12=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}

/* f_8184 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8184(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_8184r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8184r(t0,t1,t2,t3);}}

static void C_ccall f_8184r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
if(C_truep(C_i_nullp(t11))){
/* posixunix.scm:2021: %process */
f_8098(t1,lf[432],C_SCHEME_FALSE,t2,t5,t9);}
else{
/* ##sys#error */
t12=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}

/* %process in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_8098(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8098,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8100,a[2]=t2,a[3]=((C_word)li224),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_string_2(((C_word*)t7)[1],t2);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8144,a[2]=t9,a[3]=t1,a[4]=t3,a[5]=t6,a[6]=t8,a[7]=t7,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t8)[1])){
/* posixunix.scm:2010: chkstrlst */
t12=t9;
f_8100(t12,t11,((C_word*)t8)[1]);}
else{
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8178,a[2]=t11,a[3]=t7,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:2012: ##sys#shell-command-arguments */
t13=*((C_word*)lf[426]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,((C_word*)t7)[1]);}}

/* k8176 in %process in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8178,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8182,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:2013: ##sys#shell-command */
t4=*((C_word*)lf[422]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k8180 in k8176 in %process in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_8144(2,t3,t2);}

/* k8142 in %process in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8144,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8147,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixunix.scm:2014: chkstrlst */
t3=((C_word*)t0)[2];
f_8100(t3,t2,((C_word*)t0)[5]);}
else{
t3=t2;
f_8147(2,t3,C_SCHEME_UNDEFINED);}}

/* k8145 in k8142 in %process in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8147,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8152,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li225),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8158,a[2]=((C_word*)t0)[3],a[3]=((C_word)li226),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a8157 in k8145 in k8142 in %process in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8158(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_8158,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(((C_word*)t0)[2])){
/* posixunix.scm:2017: values */
C_values(6,0,t1,t2,t3,t4,t5);}
else{
/* posixunix.scm:2018: values */
C_values(5,0,t1,t2,t3,t4);}}

/* a8151 in k8145 in k8142 in %process in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8152,2,t0,t1);}
/* posixunix.scm:2015: ##sys#process */
t2=*((C_word*)lf[430]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,t1,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* chkstrlst in %process in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_8100(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_8100,NULL,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8105,a[2]=((C_word*)t0)[2],a[3]=((C_word)li222),tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=C_i_check_list_2(t5,lf[48]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8117,a[2]=t4,a[3]=t8,a[4]=((C_word)li223),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_8117(t10,t1,t5);}

/* for-each-loop2044 in chkstrlst in %process in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_8117(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8117,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8127,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g20452051 */
t5=((C_word*)t0)[2];
f_8105(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8125 in for-each-loop2044 in chkstrlst in %process in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8117(t3,((C_word*)t0)[2],t2);}

/* g2045 in chkstrlst in %process in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_8105(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8105,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[431]+1);
/* g20592060 */
t4=t3;
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,t2,((C_word*)t0)[2]);}

/* f_8042 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word ab[21],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_8042,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8048,a[2]=t8,a[3]=t7,a[4]=t6,a[5]=t5,a[6]=t4,a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word)li219),tmp=(C_word)a,a+=10,tmp);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=t8,a[8]=t6,a[9]=t7,a[10]=((C_word)li220),tmp=(C_word)a,a+=11,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t9,t10);}

/* a8053 */
static void C_ccall f_8054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[26],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_8054,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_not(((C_word*)t0)[9]);
t7=C_i_not(((C_word*)t0)[8]);
t8=C_i_not(((C_word*)t0)[7]);
t9=C_a_i_vector3(&a,3,t6,t7,t8);
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8065,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t9,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=t4,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=t5,a[13]=t1,tmp=(C_word)a,a+=14,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8085,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t10,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1990: make-on-close */
f_7871(t11,((C_word*)t0)[5],t5,t9,C_fix(0),C_fix(1),C_fix(2));}

/* k8083 in a8053 */
static void C_ccall f_8085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1989: input-port */
t2=((C_word*)t0)[7];
f_8020(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8063 in a8053 */
static void C_ccall f_8065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8065,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8069,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=t1,a[11]=((C_word*)t0)[13],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8081,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1992: make-on-close */
f_7871(t3,((C_word*)t0)[10],((C_word*)t0)[12],((C_word*)t0)[5],C_fix(1),C_fix(0),C_fix(2));}

/* k8079 in k8063 in a8053 */
static void C_ccall f_8081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1991: output-port */
t2=((C_word*)t0)[7];
f_8031(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8067 in k8063 in a8053 */
static void C_ccall f_8069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8073,a[2]=((C_word*)t0)[9],a[3]=t1,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8077,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1995: make-on-close */
f_7871(t3,((C_word*)t0)[7],((C_word*)t0)[9],((C_word*)t0)[2],C_fix(2),C_fix(0),C_fix(1));}

/* k8075 in k8067 in k8063 in a8053 */
static void C_ccall f_8077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1994: input-port */
t2=((C_word*)t0)[7];
f_8020(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8071 in k8067 in k8063 in a8053 */
static void C_ccall f_8073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1988: values */
C_values(6,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a8047 */
static void C_ccall f_8048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8048,2,t0,t1);}
/* posixunix.scm:1983: spawn */
t2=((C_word*)t0)[8];
f_7975(t2,t1,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* output-port in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_8031(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8031,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8035,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1979: connect-parent */
f_7928(t7,t4,t5);}

/* k8033 in output-port in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1980: ##sys#custom-output-port */
t2=*((C_word*)lf[341]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,C_SCHEME_TRUE,C_fix(0),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* input-port in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_8020(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8020,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8024,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1975: connect-parent */
f_7928(t7,t4,t5);}

/* k8022 in input-port in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1976: ##sys#custom-input-port */
t2=*((C_word*)lf[324]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,C_SCHEME_TRUE,C_fix(256),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* spawn in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_7975(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7975,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7979,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t5,a[5]=t7,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=t3,a[9]=t2,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1962: needed-pipe */
f_7908(t8,t6);}

/* k7977 in spawn in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7979,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7982,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* posixunix.scm:1963: needed-pipe */
f_7908(t2,((C_word*)t0)[4]);}

/* k7980 in k7977 in spawn in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7982,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7985,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* posixunix.scm:1964: needed-pipe */
f_7908(t2,((C_word*)t0)[5]);}

/* k7983 in k7980 in k7977 in spawn in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7985,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7992,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t3=((C_word*)t0)[3];
if(C_truep(t3)){
t4=C_i_cdr(t3);
t5=C_i_car(t3);
t6=t2;
f_7992(t6,C_a_i_cons(&a,2,t4,t5));}
else{
t4=t2;
f_7992(t4,C_SCHEME_FALSE);}}

/* k7990 in k7983 in k7980 in k7977 in spawn in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_7992(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7992,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7996,a[2]=((C_word*)t0)[10],a[3]=t1,a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7998,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word)li215),tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm:1967: process-fork */
t4=*((C_word*)lf[409]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a7997 in k7990 in k7983 in k7980 in k7977 in spawn in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7998,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8002,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1969: connect-child */
f_7942(t2,((C_word*)t0)[3],((C_word*)t0)[2],*((C_word*)lf[304]+1));}

/* k8000 in a7997 in k7990 in k7983 in k7980 in k7977 in spawn in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8002,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8005,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t3=((C_word*)t0)[3];
if(C_truep(t3)){
t4=C_i_cdr(t3);
t5=C_i_car(t3);
t6=C_a_i_cons(&a,2,t4,t5);
/* posixunix.scm:1970: connect-child */
f_7942(t2,t6,((C_word*)t0)[2],*((C_word*)lf[305]+1));}
else{
/* posixunix.scm:1970: connect-child */
f_7942(t2,C_SCHEME_FALSE,((C_word*)t0)[2],*((C_word*)lf[305]+1));}}

/* k8003 in k8000 in a7997 in k7990 in k7983 in k7980 in k7977 in spawn in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8005,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8008,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
if(C_truep(t3)){
t4=C_i_cdr(t3);
t5=C_i_car(t3);
t6=C_a_i_cons(&a,2,t4,t5);
/* posixunix.scm:1971: connect-child */
f_7942(t2,t6,((C_word*)t0)[2],*((C_word*)lf[306]+1));}
else{
/* posixunix.scm:1971: connect-child */
f_7942(t2,C_SCHEME_FALSE,((C_word*)t0)[2],*((C_word*)lf[306]+1));}}

/* k8006 in k8003 in k8000 in a7997 in k7990 in k7983 in k7980 in k7977 in spawn in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_8008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1972: process-execute */
t2=*((C_word*)lf[412]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7994 in k7990 in k7983 in k7980 in k7977 in spawn in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1965: values */
C_values(6,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* connect-child in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_7942(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7942,NULL,4,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=C_i_car(t2);
t6=C_i_cdr(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7955,a[2]=t5,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1953: file-close */
t8=*((C_word*)lf[135]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t6);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k7953 in connect-child in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7955,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7867,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1927: duplicate-fileno */
t6=*((C_word*)lf[322]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[2],t3);}}

/* k7865 in k7953 in connect-child in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1928: file-close */
t2=*((C_word*)lf[135]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* connect-parent in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_7928(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7928,NULL,3,t1,t2,t3);}
if(C_truep(t3)){
t4=C_i_car(t2);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7941,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1947: file-close */
t7=*((C_word*)lf[135]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k7939 in connect-parent in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* needed-pipe in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_7908(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7908,NULL,2,t1,t2);}
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7917,a[2]=((C_word)li210),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7923,a[2]=((C_word)li211),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a7922 in needed-pipe in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7923(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7923,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}

/* a7916 in needed-pipe in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7917,2,t0,t1);}
/* posixunix.scm:1942: create-pipe */
t2=*((C_word*)lf[183]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}

/* make-on-close in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_7871(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7871,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7873,a[2]=t2,a[3]=t3,a[4]=t7,a[5]=t6,a[6]=t5,a[7]=t4,a[8]=((C_word)li208),tmp=(C_word)a,a+=9,tmp));}

/* f_7873 in make-on-close in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7873,2,t0,t1);}
t2=C_i_vector_set(((C_word*)t0)[7],((C_word*)t0)[6],C_SCHEME_TRUE);
t3=C_i_vector_ref(((C_word*)t0)[7],((C_word*)t0)[5]);
t4=(C_truep(t3)?C_i_vector_ref(((C_word*)t0)[7],((C_word*)t0)[4]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7888,a[2]=((C_word*)t0)[3],a[3]=((C_word)li206),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7894,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word)li207),tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* a7893 */
static void C_ccall f_7894(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7894,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* posixunix.scm:1937: ##sys#signal-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(7,*((C_word*)lf[4]+1),t1,lf[215],((C_word*)t0)[3],lf[429],((C_word*)t0)[2],t4);}}

/* a7887 */
static void C_ccall f_7888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7888,2,t0,t1);}
/* posixunix.scm:1935: process-wait */
t2=*((C_word*)lf[415]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* f_7815 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7815(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_7815r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7815r(t0,t1,t2,t3);}}

static void C_ccall f_7815r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_i_car(t3):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7822,a[2]=t2,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1897: process-fork */
t7=*((C_word*)lf[409]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k7820 */
static void C_ccall f_7822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7822,2,t0,t1);}
t2=C_eqp(C_fix(0),t1);
if(C_truep(t2)){
if(C_truep(((C_word*)t0)[4])){
/* posixunix.scm:1899: process-execute */
t3=*((C_word*)lf[412]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7841,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1901: ##sys#shell-command */
t4=*((C_word*)lf[422]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}
else{
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7839 in k7820 */
static void C_ccall f_7841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7841,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7845,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1901: ##sys#shell-command-arguments */
t3=*((C_word*)lf[426]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k7843 in k7839 in k7820 */
static void C_ccall f_7845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1901: process-execute */
t2=*((C_word*)lf[412]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_7809 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7809(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7809,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list2(&a,2,lf[427],t2));}

/* f_7800 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7804,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1889: get-environment-variable */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[424]+1)))(3,*((C_word*)lf[424]+1),t2,lf[425]);}

/* k7802 */
static void C_ccall f_7804(C_word c,C_word t0,C_word t1){
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
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[423]);}}

/* f_7773 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7773(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_7773r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7773r(t0,t1,t2,t3);}}

static void C_ccall f_7773r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_i_car(t3):C_fix((C_word)SIGTERM));
t6=C_i_check_exact_2(t2,lf[420]);
t7=C_i_check_exact_2(t5,lf[420]);
t8=C_kill(t2,t5);
t9=C_eqp(t8,C_fix(-1));
if(C_truep(t9)){
/* posixunix.scm:1886: posix-error */
t10=lf[3];
f_2371(7,t10,t1,lf[215],lf[420],lf[421],t2,t5);}
else{
t10=C_SCHEME_UNDEFINED;
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}}

/* f_7766 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7766(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7766,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1920(C_SCHEME_UNDEFINED,t3));}

/* f_7763 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7763,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1916(C_SCHEME_UNDEFINED));}

/* f_7760 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7760,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1913(C_SCHEME_UNDEFINED));}

/* f_7682 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7682(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_7682r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7682r(t0,t1,t2);}}

static void C_ccall f_7682r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(9);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_FALSE:C_i_car(t6));
t9=C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t6));
if(C_truep(C_i_nullp(t10))){
t11=(C_truep(t4)?t4:C_fix(-1));
t12=C_i_check_exact_2(t11,lf[415]);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7712,a[2]=t8,a[3]=t11,a[4]=((C_word)li196),tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7718,a[2]=t11,a[3]=((C_word)li197),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t13,t14);}
else{
/* ##sys#error */
t11=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}

/* a7717 */
static void C_ccall f_7718(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7718,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
/* posixunix.scm:1872: posix-error */
t6=lf[3];
f_2371(6,t6,t1,lf[215],lf[415],lf[416],((C_word*)t0)[2]);}
else{
/* posixunix.scm:1873: values */
C_values(5,0,t1,t2,t3,t4);}}

/* a7711 */
static void C_ccall f_7712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7712,2,t0,t1);}
/* posixunix.scm:1870: ##sys#process-wait */
t2=*((C_word*)lf[414]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_7665 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7665(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7665,4,t0,t1,t2,t3);}
t4=(C_truep(t3)?C_fix((C_word)WNOHANG):C_fix(0));
t5=C_waitpid(t2,t4);
t6=C_WIFEXITED(C_fix((C_word)C_wait_status));
if(C_truep(t6)){
t7=C_WEXITSTATUS(C_fix((C_word)C_wait_status));
/* posixunix.scm:1857: values */
C_values(5,0,t1,t5,t6,t7);}
else{
if(C_truep(C_WIFSIGNALED(C_fix((C_word)C_wait_status)))){
t7=C_WTERMSIG(C_fix((C_word)C_wait_status));
/* posixunix.scm:1857: values */
C_values(5,0,t1,t5,t6,t7);}
else{
t7=C_WSTOPSIG(C_fix((C_word)C_wait_status));
/* posixunix.scm:1857: values */
C_values(5,0,t1,t5,t6,t7);}}}

/* f_7492 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7492(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_7492r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7492r(t0,t1,t2,t3);}}

static void C_ccall f_7492r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_END_OF_LIST:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
if(C_truep(C_i_nullp(t11))){
t12=C_i_check_string_2(t2,lf[412]);
t13=C_i_check_list_2(t5,lf[412]);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7520,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t9,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1825: pathname-strip-directory */
t15=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t15))(3,t15,t14,t2);}
else{
/* ##sys#error */
t12=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}

/* k7518 */
static void C_ccall f_7520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7520,2,t0,t1);}
t2=C_block_size(t1);
t3=f_7454(C_fix(0),t1,t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7528,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li193),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_7528(t7,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(1));}

/* doloop1858 in k7518 */
static void C_fcall f_7528(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7528,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=f_7454(t3,C_SCHEME_FALSE,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7541,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t6=C_i_check_list_2(((C_word*)t0)[5],lf[412]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7574,a[2]=((C_word*)t0)[3],a[3]=((C_word)li192),tmp=(C_word)a,a+=4,tmp);
t8=t5;
f_7541(t8,f_7574(t7,((C_word*)t0)[5],C_fix(0)));}
else{
t6=t5;
f_7541(t6,C_SCHEME_UNDEFINED);}}
else{
t4=C_i_car(t2);
t5=C_i_check_string_2(t4,lf[412]);
t6=C_block_size(t4);
t7=f_7454(t3,t4,t6);
t8=C_i_cdr(t2);
t9=C_fixnum_plus(t3,C_fix(1));
t15=t1;
t16=t8;
t17=t9;
t1=t15;
t2=t16;
t3=t17;
goto loop;}}

/* doloop1862 in doloop1858 in k7518 */
static C_word C_fcall f_7574(C_word t0,C_word t1,C_word t2){
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
C_stack_check;
loop:
if(C_truep(C_i_nullp(t1))){
return(f_7473(t2,C_SCHEME_FALSE,C_fix(0)));}
else{
t3=C_i_car(t1);
t4=C_i_check_string_2(t3,lf[412]);
t5=C_block_size(t3);
t6=f_7473(t2,t3,t5);
t7=C_i_cdr(t1);
t8=C_fixnum_plus(t2,C_fix(1));
t10=t7;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* k7539 in doloop1858 in k7518 */
static void C_fcall f_7541(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7541,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7566,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1839: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[2]);}

/* k7564 in k7539 in doloop1858 in k7518 */
static void C_ccall f_7566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1839: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,lf[412]);}

/* k7542 in k7539 in doloop1858 in k7518 */
static void C_ccall f_7544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_truep(((C_word*)t0)[4])?C_execve(t1):C_execvp(t1));
t3=C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=stub1826(C_SCHEME_UNDEFINED);
t5=stub1838(C_SCHEME_UNDEFINED);
/* posixunix.scm:1846: posix-error */
t6=lf[3];
f_2371(6,t6,((C_word*)t0)[3],lf[215],lf[412],lf[413],((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* setenv in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static C_word C_fcall f_7473(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t4=C_i_foreign_fixnum_argumentp(t1);
t5=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(t3);
return(stub1831(C_SCHEME_UNDEFINED,t4,t5,t6));}

/* setarg in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static C_word C_fcall f_7454(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t4=C_i_foreign_fixnum_argumentp(t1);
t5=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(t3);
return(stub1819(C_SCHEME_UNDEFINED,t4,t5,t6));}

/* f_7412 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7412(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_7412r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7412r(t0,t1,t2);}}

static void C_ccall f_7412r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(3);
t3=stub1793(C_SCHEME_UNDEFINED);
t4=C_eqp(C_fix(-1),t3);
if(C_truep(t4)){
/* posixunix.scm:1810: posix-error */
t5=lf[3];
f_2371(5,t5,t1,lf[215],lf[409],lf[410]);}
else{
t5=C_i_pairp(t2);
t6=(C_truep(t5)?C_eqp(t3,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7437,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* g18011802 */
t9=t7;
((C_proc2)C_fast_retrieve_proc(t9))(2,t9,t8);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t3);}}}

/* k7435 */
static void C_ccall f_7437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_foreign_fixnum_argumentp(C_fix(0));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1806(C_SCHEME_UNDEFINED,t3));}

/* f_7398 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7398,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7402,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,stub1786(t3),C_fix(0));}

/* k7400 */
static void C_ccall f_7402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7402,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7405,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}
else{
/* posixunix.scm:1800: posix-error */
t3=lf[3];
f_2371(5,t3,t2,lf[403],lf[407],lf[408]);}}

/* k7403 in k7400 */
static void C_ccall f_7405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_7363 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7363(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7363,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7367,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1781: ##sys#terminal-check */
f_7308(t3,lf[402],t2);}

/* k7365 */
static void C_ccall f_7367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7367,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(1));
t3=C_a_i_bytevector(&a,1,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7387,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[405]+1)))(6,*((C_word*)lf[405]+1),t4,t2,C_fix(0),C_SCHEME_FALSE,lf[406]);}

/* k7385 in k7365 */
static void C_ccall f_7387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[405]+1)))(6,*((C_word*)lf[405]+1),t2,((C_word*)t0)[2],C_fix(0),C_SCHEME_FALSE,lf[406]);}

/* k7389 in k7385 in k7365 */
static void C_ccall f_7391(C_word c,C_word t0,C_word t1){
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
t2=C_C_fileno(((C_word*)t0)[6]);
t3=((C_word*)t0)[5];
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_pointer_argumentp(t3);
t6=C_i_foreign_pointer_argumentp(t1);
t7=stub1767(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=C_eqp(C_fix(0),t7);
if(C_truep(t8)){
/* posixunix.scm:1788: values */
C_values(4,0,((C_word*)t0)[4],C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[3]))),C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))));}
else{
/* posixunix.scm:1789: posix-error */
t9=lf[3];
f_2371(6,t9,((C_word*)t0)[4],lf[403],lf[402],lf[404],((C_word*)t0)[6]);}}

/* f_7340 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7340(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7340,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7344,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1773: ##sys#terminal-check */
f_7308(t3,lf[401],t2);}

/* k7342 */
static void C_ccall f_7344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7344,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_C_fileno(((C_word*)t0)[2]);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
t6=stub1756(t4,t5);
/* ##sys#peek-nonnull-c-string */
t7=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,C_fix(0));}

/* ##sys#terminal-check in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_7308(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7308,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7312,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1765: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[175]+1)))(4,*((C_word*)lf[175]+1),t4,t3,t2);}

/* k7310 in ##sys#terminal-check in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(7));
t3=C_eqp(lf[152],t2);
t4=(C_truep(t3)?C_tty_portp(((C_word*)t0)[4]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* posixunix.scm:1768: ##sys#error */
t5=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[3],((C_word*)t0)[2],lf[400],((C_word*)t0)[4]);}}

/* f_7289 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7289(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7289,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7293,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1760: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[175]+1)))(4,*((C_word*)lf[175]+1),t3,t2,lf[398]);}

/* k7291 */
static void C_ccall f_7293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7293,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1761: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[321]+1)))(4,*((C_word*)lf[321]+1),t2,((C_word*)t0)[2],C_fix(0));}

/* k7294 in k7291 */
static void C_ccall f_7296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(C_fix(0),t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_tty_portp(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_7230 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7230(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_7230r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_7230r(t0,t1,t2,t3,t4);}}

static void C_ccall f_7230r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7234,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1745: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[175]+1)))(4,*((C_word*)lf[175]+1),t5,t2,lf[392]);}

/* k7232 */
static void C_ccall f_7234(C_word c,C_word t0,C_word t1){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7234,2,t0,t1);}
t2=C_i_pairp(((C_word*)t0)[5]);
t3=(C_truep(t2)?C_i_car(((C_word*)t0)[5]):C_fix((C_word)BUFSIZ));
t4=((C_word*)t0)[4];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7240,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(t4,lf[394]);
if(C_truep(t6)){
t7=t5;
f_7240(2,t7,C_fix((C_word)_IOFBF));}
else{
t7=C_eqp(t4,lf[395]);
if(C_truep(t7)){
t8=C_fix((C_word)_IOLBF);
t9=t5;
f_7240(2,t9,t8);}
else{
t8=C_eqp(t4,lf[396]);
if(C_truep(t8)){
t9=t5;
f_7240(2,t9,C_fix((C_word)_IONBF));}
else{
/* posixunix.scm:1751: ##sys#error */
t9=*((C_word*)lf[18]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t5,lf[392],lf[397],((C_word*)t0)[4],((C_word*)t0)[2]);}}}}

/* k7238 in k7232 */
static void C_ccall f_7240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7240,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[4],lf[392]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7249,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[2],C_fix(7));
t5=C_eqp(lf[152],t4);
if(C_truep(t5)){
t6=C_setvbuf(((C_word*)t0)[2],t1,((C_word*)t0)[4]);
t7=t3;
f_7249(t7,C_fixnum_lessp(t6,C_fix(0)));}
else{
t6=t3;
f_7249(t6,C_SCHEME_TRUE);}}

/* k7247 in k7238 in k7232 */
static void C_fcall f_7249(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1757: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[5],lf[392],lf[393],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_7223 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7223(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7223,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1727(C_SCHEME_UNDEFINED,t3));}

/* f_7207 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7207(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_7207r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7207r(t0,t1,t2);}}

static void C_ccall f_7207r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
if(C_truep(C_i_pairp(t2))){
t3=C_i_car(t2);
t4=t1;
t5=C_i_foreign_fixnum_argumentp(t3);
t6=t4;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub1721(C_SCHEME_UNDEFINED,t5));}
else{
t3=t1;
t4=C_i_foreign_fixnum_argumentp(C_fix(0));
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub1721(C_SCHEME_UNDEFINED,t4));}}

/* f_7195 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7195,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,stub1715(t2),C_fix(0));}

/* f_7180 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7180(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7180,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7184,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1711: check-time-vector */
f_3447(t3,lf[387],t2);}

/* k7182 */
static void C_ccall f_7184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7184,2,t0,t1);}
t2=C_a_timegm(&a,1,((C_word*)t0)[3]);
if(C_truep(C_flonum_equalp(lf[88],t2))){
/* posixunix.scm:1714: ##sys#error */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[387],lf[388],((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_7134 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7134(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7134r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7134r(t0,t1,t2,t3);}}

static void C_ccall f_7134r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7138,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_7138(2,t5,lf[386]);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_7138(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k7136 */
static void C_ccall f_7138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7138,2,t0,t1);}
t2=C_i_check_string_2(((C_word*)t0)[3],lf[385]);
t3=C_i_check_string_2(t1,lf[385]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7151,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1708: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,((C_word*)t0)[3],lf[385]);}

/* k7149 in k7136 */
static void C_ccall f_7151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7151,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7155,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1708: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t2,((C_word*)t0)[2]);}

/* k7153 in k7149 in k7136 */
static void C_ccall f_7155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7155,2,t0,t1);}
t2=C_a_i_vector(&a,10,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub1690(C_SCHEME_UNDEFINED,t4,t1,t2));}

/* f_7065 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7065(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7065r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7065r(t0,t1,t2,t3);}}

static void C_ccall f_7065r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7069,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_7069(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_7069(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k7067 */
static void C_ccall f_7069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1692: check-time-vector */
f_3447(t2,lf[90],((C_word*)t0)[2]);}

/* k7070 in k7067 */
static void C_ccall f_7072(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7072,2,t0,t1);}
if(C_truep(((C_word*)t0)[4])){
t2=C_i_check_string_2(((C_word*)t0)[4],lf[90]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7081,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7091,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1696: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,((C_word*)t0)[4],lf[90]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7094,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t5=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,stub1655(t4,t3),C_fix(0));}}

/* k7092 in k7070 in k7067 */
static void C_ccall f_7094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posixunix.scm:1700: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[42]+1)))(5,*((C_word*)lf[42]+1),((C_word*)t0)[3],t1,C_fix(0),t3);}
else{
/* posixunix.scm:1701: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[90],lf[384],((C_word*)t0)[2]);}}

/* k7089 in k7070 in k7067 */
static void C_ccall f_7091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7091,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],stub1661(t3,t2,t1),C_fix(0));}

/* k7079 in k7070 in k7067 */
static void C_ccall f_7081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* posixunix.scm:1697: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[90],lf[383],((C_word*)t0)[2]);}}

/* f_7049 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7049(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7049,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[374]));}

/* f_7040 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7040(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7040,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[374],lf[381]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* f_7005 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_7005(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_7005r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7005r(t0,t1,t2,t3);}}

static void C_ccall f_7005r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_check_structure_2(t2,lf[374],lf[379]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_i_car(t3):C_slot(t2,C_fix(2)));
t7=C_slot(t2,C_fix(1));
t8=(C_truep(t7)?C_i_foreign_pointer_argumentp(t7):C_SCHEME_FALSE);
t9=C_i_foreign_integer_argumentp(t6);
t10=stub1636(C_SCHEME_UNDEFINED,t8,t9);
t11=C_eqp(C_fix(0),t10);
if(C_truep(t11)){
t12=C_SCHEME_UNDEFINED;
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
/* posixunix.scm:1677: posix-error */
t12=lf[3];
f_2371(7,t12,t1,lf[10],lf[379],lf[380],t2,t6);}}

/* f_6943 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_6943(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...){
C_word tmp;
C_word t7;
va_list v;
C_word *a,c2=c;
C_save_rest(t6,c2,7);
if(c<7) C_bad_min_argc_2(c,7,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr7r,(void*)f_6943r,7,t0,t1,t2,t3,t4,t5,t6);}
else{
a=C_alloc((c-7)*3);
t7=C_restore_rest(a,C_rest_count(0));
f_6943r(t0,t1,t2,t3,t4,t5,t6,t7);}}

static void C_ccall f_6943r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6947,a[2]=t1,a[3]=t6,a[4]=t5,a[5]=t4,a[6]=t3,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t9=t2;
if(C_truep(t9)){
t10=t8;
f_6947(2,t10,t2);}
else{
/* posixunix.scm:1662: ##sys#null-pointer */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[378]+1)))(2,*((C_word*)lf[378]+1),t8);}}

/* k6945 */
static void C_ccall f_6947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6947,2,t0,t1);}
t2=C_i_pairp(((C_word*)t0)[7]);
t3=(C_truep(t2)?C_i_car(((C_word*)t0)[7]):C_fix(0));
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6953,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_blockp(t1))){
if(C_truep(C_specialp(t1))){
t5=t4;
f_6953(2,t5,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm:1665: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(6,*((C_word*)lf[4]+1),t4,lf[15],lf[373],lf[377],t1);}}
else{
/* posixunix.scm:1665: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(6,*((C_word*)lf[4]+1),t4,lf[15],lf[373],lf[377],t1);}}

/* k6951 in k6945 */
static void C_ccall f_6953(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6953,2,t0,t1);}
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[4];
t7=C_a_i_bytevector(&a,1,C_fix(3));
t8=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t9=C_i_foreign_integer_argumentp(t3);
t10=C_i_foreign_fixnum_argumentp(t4);
t11=C_i_foreign_fixnum_argumentp(t5);
t12=C_i_foreign_fixnum_argumentp(t6);
t13=C_i_foreign_integer_argumentp(((C_word*)t0)[3]);
t14=stub1609(t7,t8,t9,t10,t11,t12,t13);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6959,a[2]=((C_word*)t0)[7],a[3]=t14,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6972,a[2]=t14,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t15,tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1667: ##sys#pointer->address */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[376]+1)))(3,*((C_word*)lf[376]+1),t16,t14);}

/* k6970 in k6951 in k6945 */
static void C_ccall f_6972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6972,2,t0,t1);}
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
/* posixunix.scm:1668: posix-error */
t3=lf[3];
f_2371(11,t3,((C_word*)t0)[10],lf[10],lf[373],lf[375],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record3(&a,3,lf[374],((C_word*)t0)[2],((C_word*)t0)[8]));}}

/* k6957 in k6951 in k6945 */
static void C_ccall f_6959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6959,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record3(&a,3,lf[374],((C_word*)t0)[3],((C_word*)t0)[2]));}

/* f_6840 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_6840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6840,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6846,a[2]=t3,a[3]=((C_word)li171),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_6846(t5,t1,C_fix(0));}

/* loop */
static void C_fcall f_6846(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6846,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6850,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub1581(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k6848 in loop */
static void C_ccall f_6850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6850,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6858,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word)li170),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_6858(t5,((C_word*)t0)[2],C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* scan in k6848 in loop */
static void C_fcall f_6858(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6858,NULL,3,t0,t1,t2);}
if(C_truep(C_i_char_equalp(C_make_character(61),C_subchar(((C_word*)t0)[5],t2)))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6884,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1628: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[42]+1)))(5,*((C_word*)lf[42]+1),t3,((C_word*)t0)[5],C_fix(0),t2);}
else{
t3=C_fixnum_plus(t2,C_fix(1));
/* posixunix.scm:1631: scan */
t6=t1;
t7=t3;
t1=t6;
t2=t7;
goto loop;}}

/* k6882 in scan in k6848 in loop */
static void C_ccall f_6884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6884,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6888,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_block_size(((C_word*)t0)[2]);
/* posixunix.scm:1629: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[42]+1)))(5,*((C_word*)lf[42]+1),t2,((C_word*)t0)[2],t3,t4);}

/* k6886 in k6882 in scan in k6848 in loop */
static void C_ccall f_6888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6888,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6876,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm:1630: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6846(t5,t3,t4);}

/* k6874 in k6886 in k6882 in scan in k6848 in loop */
static void C_ccall f_6876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6876,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* f_6820 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_6820(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6820,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[362]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6828,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1617: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,t2,lf[362]);}

/* k6826 */
static void C_ccall f_6828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_unsetenv(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* f_6803 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_6803(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6803,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[361]);
t5=C_i_check_string_2(t3,lf[361]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6814,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1612: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t6,t2,lf[361]);}

/* k6812 */
static void C_ccall f_6814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6814,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6818,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1612: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t2,((C_word*)t0)[2],lf[361]);}

/* k6816 in k6812 */
static void C_ccall f_6818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_setenv(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* f_6777 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_6777(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6777,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[37]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6784,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6801,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1600: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t5,t2);}

/* k6799 */
static void C_ccall f_6801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1600: ##sys#file-info */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[360]+1)))(3,*((C_word*)lf[360]+1),((C_word*)t0)[2],t1);}

/* k6782 */
static void C_ccall f_6784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_slot(t1,C_fix(4));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(C_fix(3),t2));}
else{
/* posixunix.scm:1603: posix-error */
t2=lf[3];
f_2371(6,t2,((C_word*)t0)[3],lf[10],lf[37],lf[359],((C_word*)t0)[2]);}}

/* f_6734 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_6734(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_6734r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6734r(t0,t1,t2,t3);}}

static void C_ccall f_6734r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=C_i_check_string_2(t2,lf[357]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6741,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t5;
f_6741(t6,C_i_car(t3));}
else{
t6=C_fixnum_or(C_fix((C_word)S_IRWXG),C_fix((C_word)S_IRWXO));
t7=t5;
f_6741(t7,C_fixnum_or(C_fix((C_word)S_IRWXU),t6));}}

/* k6739 */
static void C_fcall f_6741(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6741,NULL,2,t0,t1);}
t2=C_i_check_exact_2(t1,lf[357]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6762,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1594: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t4,((C_word*)t0)[2]);}

/* k6760 in k6739 */
static void C_ccall f_6762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1594: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,lf[357]);}

/* k6756 in k6739 */
static void C_ccall f_6758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mkfifo(t1,((C_word*)t0)[4]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1595: posix-error */
t3=lf[3];
f_2371(7,t3,((C_word*)t0)[3],lf[10],lf[357],lf[358],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_6706 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_6706(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6706,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[348],lf[355]);
t4=C_slot(t2,C_fix(2));
t5=C_slot(t2,C_fix(3));
t6=C_flock_setup(C_fix((C_word)F_UNLCK),t4,t5);
t7=C_slot(t2,C_fix(1));
t8=C_flock_lock(t7);
if(C_truep(C_fixnum_lessp(t8,C_fix(0)))){
/* posixunix.scm:1584: posix-error */
t9=lf[3];
f_2371(6,t9,t1,lf[10],lf[355],lf[356],t2);}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* f_6679 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_6679(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6679r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6679r(t0,t1,t2,t3);}}

static void C_ccall f_6679r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6683,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1575: setup */
f_6557(t4,t2,t3,lf[353]);}

/* k6681 */
static void C_ccall f_6683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_flock_test(((C_word*)t0)[4]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=C_eqp(t2,C_fix(0));
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?C_SCHEME_FALSE:t2));}
else{
/* posixunix.scm:1577: err */
f_6631(((C_word*)t0)[3],lf[354],t1,lf[353]);}}

/* f_6664 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_6664(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6664r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6664r(t0,t1,t2,t3);}}

static void C_ccall f_6664r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6668,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1569: setup */
f_6557(t4,t2,t3,lf[351]);}

/* k6666 */
static void C_ccall f_6668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(C_flock_lockw(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm:1571: err */
f_6631(((C_word*)t0)[2],lf[352],t1,lf[351]);}
else{
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_6649 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_6649(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6649r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6649r(t0,t1,t2,t3);}}

static void C_ccall f_6649r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6653,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1563: setup */
f_6557(t4,t2,t3,lf[349]);}

/* k6651 */
static void C_ccall f_6653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(C_flock_lock(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm:1565: err */
f_6631(((C_word*)t0)[2],lf[350],t1,lf[349]);}
else{
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* err in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_6631(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6631,NULL,4,t1,t2,t3,t4);}
t5=C_slot(t3,C_fix(1));
t6=C_slot(t3,C_fix(2));
t7=C_slot(t3,C_fix(3));
/* posixunix.scm:1560: posix-error */
t8=lf[3];
f_2371(8,t8,t1,lf[10],t4,t2,t5,t6,t7);}

/* setup in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_6557(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6557,NULL,4,t1,t2,t3,t4);}
t5=C_i_nullp(t3);
t6=(C_truep(t5)?C_fix(0):C_i_car(t3));
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_i_car(t8));
t11=t10;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_i_nullp(t8);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
if(C_truep(C_i_nullp(t14))){
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6579,a[2]=t1,a[3]=t12,a[4]=t2,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1552: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[175]+1)))(4,*((C_word*)lf[175]+1),t15,t2,t4);}
else{
/* ##sys#error */
t15=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}

/* k6577 in setup in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_6579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6579,2,t0,t1);}
t2=C_i_check_number_2(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(C_SCHEME_TRUE,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=C_set_block_item(((C_word*)t0)[3],0,C_fix(0));
t6=t3;
f_6585(t6,t5);}
else{
t5=t3;
f_6585(t5,C_i_check_number_2(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[5]));}}

/* k6583 in k6577 in setup in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_6585(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6585,NULL,2,t0,t1);}
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_truep(t2)?C_fix((C_word)F_RDLCK):C_fix((C_word)F_WRLCK));
t4=C_flock_setup(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[348],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]));}

/* f_6518 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_6518(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[15],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6518,4,t0,t1,t2,t3);}
t4=C_i_check_number_2(t3,lf[345]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6528,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6535,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t2))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6542,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6546,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1535: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t8,t2);}
else{
if(C_truep(C_fixnump(t2))){
t7=C_ftruncate(t2,t3);
t8=t5;
f_6528(t8,C_fixnum_lessp(t7,C_fix(0)));}
else{
/* posixunix.scm:1537: ##sys#error */
t7=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[345],lf[347],t2);}}}

/* k6544 */
static void C_ccall f_6546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1535: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,lf[345]);}

/* k6540 */
static void C_ccall f_6542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_truncate(t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_6528(t3,C_fixnum_lessp(t2,C_fix(0)));}

/* k6533 */
static void C_ccall f_6535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6528(t2,C_fixnum_lessp(t1,C_fix(0)));}

/* k6526 */
static void C_fcall f_6528(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1539: posix-error */
t2=lf[3];
f_2371(7,t2,((C_word*)t0)[4],lf[10],lf[345],lf[346],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_6270 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_6270(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_6270r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_6270r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_6270r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(8);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=C_i_nullp(t5);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(0):C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?*((C_word*)lf[325]+1):C_i_car(t13));
t16=C_i_nullp(t13);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
if(C_truep(C_i_nullp(t17))){
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6298,a[2]=t15,a[3]=t1,a[4]=t11,a[5]=t3,a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t7)){
/* posixunix.scm:1478: ##sys#file-nonblocking! */
t19=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t19+1)))(3,t19,t18,t4);}
else{
t19=t18;
f_6298(2,t19,C_SCHEME_UNDEFINED);}}
else{
/* ##sys#error */
t18=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t1,lf[0],t17);}}

/* k6296 */
static void C_ccall f_6298(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6298,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6300,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=((C_word*)t0)[7],a[6]=((C_word)li151),tmp=(C_word)a,a+=7,tmp));
t7=C_fixnump(((C_word*)t0)[4]);
t8=(C_truep(t7)?((C_word*)t0)[4]:C_block_size(((C_word*)t0)[4]));
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6346,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t10=C_eqp(C_fix(0),t8);
if(C_truep(t10)){
t11=t9;
f_6346(t11,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6390,a[2]=t3,a[3]=((C_word)li155),tmp=(C_word)a,a+=4,tmp));}
else{
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6404,a[2]=t3,a[3]=t8,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[4]))){
/* posixunix.scm:1497: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[337]+1)))(3,*((C_word*)lf[337]+1),t11,((C_word*)t0)[4]);}
else{
t12=t11;
f_6404(2,t12,((C_word*)t0)[4]);}}}

/* k6402 in k6296 */
static void C_ccall f_6404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6404,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[4];
f_6346(t4,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6405,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word)li157),tmp=(C_word)a,a+=7,tmp));}

/* f_6405 in k6402 in k6296 */
static void C_ccall f_6405(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6405,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_fixnum_difference(((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);
t4=C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6422,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=t6,a[7]=((C_word*)t0)[4],a[8]=((C_word)li156),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6422(t8,t1,t3,C_fix(0),t4);}
else{
if(C_truep(C_fixnum_lessp(C_fix(0),((C_word*)((C_word*)t0)[4])[1]))){
/* posixunix.scm:1513: poke */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6300(t3,t1,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}}

/* loop */
static void C_fcall f_6422(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6422,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(C_fix(0),t2);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6432,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1503: poke */
t7=((C_word*)((C_word*)t0)[4])[1];
f_6300(t7,t6,((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
if(C_truep(C_fixnum_lessp(t2,t4))){
t6=C_substring_copy(((C_word*)t0)[2],((C_word*)t0)[3],t3,t2,((C_word*)((C_word*)t0)[7])[1]);
t7=C_fixnum_difference(t4,t2);
/* posixunix.scm:1508: loop */
t13=t1;
t14=C_fix(0);
t15=t2;
t16=t7;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
goto loop;}
else{
t6=C_substring_copy(((C_word*)t0)[2],((C_word*)t0)[3],t3,t4,((C_word*)((C_word*)t0)[7])[1]);
t7=C_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t4);
t8=C_mutate(((C_word *)((C_word*)t0)[7])+1,t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}}

/* k6430 in loop */
static void C_ccall f_6432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[6],0,C_fix(0));
/* posixunix.scm:1505: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_6422(t3,((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* f_6390 in k6296 */
static void C_ccall f_6390(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6390,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_block_size(t2);
/* posixunix.scm:1496: poke */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6300(t4,t1,t2,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6344 in k6296 */
static void C_fcall f_6346(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6346,NULL,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6350,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6355,a[2]=((C_word*)t0)[7],a[3]=((C_word)li152),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6361,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=((C_word)li153),tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6382,a[2]=((C_word*)t0)[7],a[3]=((C_word)li154),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1516: make-output-port */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[344]+1)))(5,*((C_word*)lf[344]+1),t5,t6,t7,t8);}

/* a6381 in k6344 in k6296 */
static void C_ccall f_6382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6382,2,t0,t1);}
/* posixunix.scm:1525: store */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_FALSE);}

/* a6360 in k6344 in k6296 */
static void C_ccall f_6361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6361,2,t0,t1);}
if(C_truep(C_slot(((C_word*)((C_word*)t0)[6])[1],C_fix(8)))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6371,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(C_close(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm:1522: posix-error */
t3=lf[3];
f_2371(7,t3,t2,lf[10],((C_word*)t0)[3],lf[343],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
/* posixunix.scm:1523: on-close */
t3=((C_word*)t0)[5];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}}}

/* k6369 in a6360 in k6344 in k6296 */
static void C_ccall f_6371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1523: on-close */
t2=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* a6354 in k6344 in k6296 */
static void C_ccall f_6355(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6355,3,t0,t1,t2);}
/* posixunix.scm:1518: store */
t3=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t1,t2);}

/* k6348 in k6344 in k6296 */
static void C_ccall f_6350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6350,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6353,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1526: set-port-name! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[333]+1)))(4,*((C_word*)lf[333]+1),t3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[2]);}

/* k6351 in k6348 in k6344 in k6296 */
static void C_ccall f_6353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* poke in k6296 */
static void C_fcall f_6300(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6300,NULL,4,t0,t1,t2,t3);}
t4=C_write(((C_word*)t0)[5],t2,t3);
t5=C_eqp(C_fix(-1),t4);
if(C_truep(t5)){
t6=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6316,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1486: ##sys#thread-yield! */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[327]+1)))(2,*((C_word*)lf[327]+1),t7);}
else{
/* posixunix.scm:1488: posix-error */
t7=lf[3];
f_2371(7,t7,t1,((C_word*)t0)[3],lf[10],lf[342],((C_word*)t0)[5],((C_word*)t0)[2]);}}
else{
if(C_truep(C_fixnum_lessp(t4,t3))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6335,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1490: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[42]+1)))(5,*((C_word*)lf[42]+1),t6,t2,t4,t3);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}}

/* k6333 in poke in k6296 */
static void C_ccall f_6335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* posixunix.scm:1490: poke */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6300(t3,((C_word*)t0)[2],t1,t2);}

/* k6314 in poke in k6296 */
static void C_ccall f_6316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1487: poke */
t2=((C_word*)((C_word*)t0)[5])[1];
f_6300(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_5788 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5788(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr5r,(void*)f_5788r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_5788r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_5788r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(9);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=C_i_nullp(t5);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(1):C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?*((C_word*)lf[325]+1):C_i_car(t13));
t16=C_i_nullp(t13);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t18=C_i_nullp(t17);
t19=(C_truep(t18)?C_SCHEME_FALSE:C_i_car(t17));
t20=C_i_nullp(t17);
t21=(C_truep(t20)?C_SCHEME_END_OF_LIST:C_i_cdr(t17));
if(C_truep(C_i_nullp(t21))){
t22=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5822,a[2]=t15,a[3]=t1,a[4]=t19,a[5]=t3,a[6]=t4,a[7]=t2,a[8]=t11,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t7)){
/* posixunix.scm:1349: ##sys#file-nonblocking! */
t23=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t23+1)))(3,t23,t22,t4);}
else{
t23=t22;
f_5822(2,t23,C_SCHEME_UNDEFINED);}}
else{
/* ##sys#error */
t22=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t22+1)))(4,t22,t1,lf[0],t21);}}

/* k5820 */
static void C_ccall f_5822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5822,2,t0,t1);}
t2=C_fixnump(((C_word*)t0)[8]);
t3=(C_truep(t2)?((C_word*)t0)[8]:C_block_size(((C_word*)t0)[8]));
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5828,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[8]))){
/* posixunix.scm:1351: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[337]+1)))(3,*((C_word*)lf[337]+1),t4,((C_word*)t0)[8]);}
else{
t5=t4;
f_5828(2,t5,((C_word*)t0)[8]);}}

/* k5826 in k5820 */
static void C_ccall f_5828(C_word c,C_word t0,C_word t1){
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
C_word ab[78],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5828,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5829,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word)li135),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5852,a[2]=t1,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5860,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=t5,a[10]=((C_word)li137),tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5942,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=t10,tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5947,a[2]=t8,a[3]=t5,a[4]=t7,a[5]=((C_word)li138),tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5960,a[2]=t6,a[3]=t3,a[4]=t5,a[5]=((C_word)li139),tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5972,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],a[6]=t10,a[7]=((C_word)li140),tmp=(C_word)a,a+=8,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5993,a[2]=t8,a[3]=t7,a[4]=((C_word)li141),tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6002,a[2]=t8,a[3]=t1,a[4]=t3,a[5]=t5,a[6]=((C_word)li143),tmp=(C_word)a,a+=7,tmp);
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6078,a[2]=t1,a[3]=t8,a[4]=t3,a[5]=t5,a[6]=((C_word)li148),tmp=(C_word)a,a+=7,tmp);
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6191,a[2]=t1,a[3]=t3,a[4]=t5,a[5]=((C_word)li149),tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1397: make-input-port */
((C_proc9)C_fast_retrieve_proc(*((C_word*)lf[340]+1)))(9,*((C_word*)lf[340]+1),t11,t12,t13,t14,t15,t16,t17,t18);}

/* a6190 in k5826 in k5820 */
static void C_ccall f_6191(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6191,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[339]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6201,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1469: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[42]+1)))(5,*((C_word*)lf[42]+1),t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);}}

/* k6199 in a6190 in k5826 in k5820 */
static void C_ccall f_6201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* a6077 in k5826 in k5820 */
static void C_ccall f_6078(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6078,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6084,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li147),tmp=(C_word)a,a+=9,tmp));
t7=((C_word*)t5)[1];
f_6084(t7,t1,C_SCHEME_FALSE);}

/* loop in a6077 in k5826 in k5820 */
static void C_fcall f_6084(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6084,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6086,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li144),tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6164,a[2]=t3,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word)li145),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6170,a[2]=((C_word*)t0)[2],a[3]=((C_word)li146),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6180,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1462: fetch */
t5=((C_word*)t0)[5];
f_5860(t5,t4);}}

/* k6178 in loop in a6077 in k5826 in k5820 */
static void C_ccall f_6180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[5])[1]))){
/* posixunix.scm:1464: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_6084(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}}

/* a6169 in loop in a6077 in k5826 in k5820 */
static void C_ccall f_6170(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6170,4,t0,t1,t2,t3);}
if(C_truep(t3)){
/* posixunix.scm:1459: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6084(t4,t1,t2);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* a6163 in loop in a6077 in k5826 in k5820 */
static void C_ccall f_6164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6164,2,t0,t1);}
/* posixunix.scm:1457: ##sys#scan-buffer-line */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[338]+1)))(6,*((C_word*)lf[338]+1),t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* bumper in loop in a6077 in k5826 in k5820 */
static void C_ccall f_6086(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6086,4,t0,t1,t2,t3);}
t4=C_fixnum_difference(t2,((C_word*)((C_word*)t0)[7])[1]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6093,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t3,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t6=C_eqp(C_fix(0),t4);
if(C_truep(t6)){
t7=((C_word*)t0)[3];
t8=t5;
f_6093(2,t8,(C_truep(t7)?t7:lf[335]));}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6136,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm:1439: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[337]+1)))(3,*((C_word*)lf[337]+1),t7,t4);}}

/* k6134 in bumper in loop in a6077 in k5826 in k5820 */
static void C_ccall f_6136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_substring_copy(((C_word*)t0)[8],t1,((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[6],C_fix(0));
t3=C_slot(((C_word*)t0)[5],C_fix(5));
t4=C_fixnum_plus(t3,((C_word*)t0)[4]);
t5=C_i_set_i_slot(((C_word*)t0)[5],C_fix(5),t4);
if(C_truep(((C_word*)t0)[3])){
/* posixunix.scm:1445: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[336]+1)))(4,*((C_word*)lf[336]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}
else{
t6=t1;
t7=((C_word*)t0)[2];
f_6093(2,t7,t6);}}

/* k6091 in bumper in loop in a6077 in k5826 in k5820 */
static void C_ccall f_6093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6093,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[8])+1,((C_word*)t0)[7]);
t3=C_eqp(((C_word*)t0)[6],((C_word*)t0)[7]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6103,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1449: fetch */
t5=((C_word*)t0)[3];
f_5860(t5,t4);}
else{
t4=C_slot(((C_word*)t0)[2],C_fix(4));
t5=C_fixnum_plus(t4,C_fix(1));
t6=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),t5);
t7=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_fix(0));
/* posixunix.scm:1454: values */
C_values(4,0,((C_word*)t0)[4],t1,C_SCHEME_FALSE);}}

/* k6101 in k6091 in bumper in loop in a6077 in k5826 in k5820 */
static void C_ccall f_6103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1]);
/* posixunix.scm:1450: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a6001 in k5826 in k5820 */
static void C_ccall f_6002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_6002,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6010,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t7=t6;
f_6010(t7,t3);}
else{
t7=C_block_size(t4);
t8=t6;
f_6010(t8,C_fixnum_difference(t7,t5));}}

/* k6008 in a6001 in k5826 in k5820 */
static void C_fcall f_6010(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6010,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6012,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li142),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_6012(t5,((C_word*)t0)[3],t1,C_fix(0),((C_word*)t0)[2]);}

/* loop in k6008 in a6001 in k5826 in k5820 */
static void C_fcall f_6012(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6012,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(C_fix(0),t2);
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
/* posixunix.scm:1425: loop */
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
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6060,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1427: fetch */
t7=((C_word*)t0)[2];
f_5860(t7,t6);}}}

/* k6058 in loop in k6008 in a6001 in k5826 in k5820 */
static void C_ccall f_6060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(C_fix(0),((C_word*)((C_word*)t0)[7])[1]);
if(C_truep(t2)){
t3=((C_word*)t0)[6];
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* posixunix.scm:1430: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6012(t3,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[2]);}}

/* a5992 in k5826 in k5820 */
static void C_ccall f_5993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5997,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1415: fetch */
t3=((C_word*)t0)[2];
f_5860(t3,t2);}

/* k5995 in a5992 in k5826 in k5820 */
static void C_ccall f_5997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1416: peek */
t2=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,f_5852(((C_word*)t0)[2]));}

/* a5971 in k5826 in k5820 */
static void C_ccall f_5972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5972,2,t0,t1);}
if(C_truep(C_slot(((C_word*)((C_word*)t0)[6])[1],C_fix(8)))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5982,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(C_close(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm:1412: posix-error */
t3=lf[3];
f_2371(7,t3,t2,lf[10],((C_word*)t0)[3],lf[334],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
/* posixunix.scm:1413: on-close */
t3=((C_word*)t0)[5];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}}}

/* k5980 in a5971 in k5826 in k5820 */
static void C_ccall f_5982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1413: on-close */
t2=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* a5959 in k5826 in k5820 */
static void C_ccall f_5960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5960,2,t0,t1);}
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posixunix.scm:1407: ready? */
t3=((C_word*)t0)[2];
f_5829(t3,t1);}}

/* a5946 in k5826 in k5820 */
static void C_ccall f_5947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5947,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5951,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1399: fetch */
t3=((C_word*)t0)[2];
f_5860(t3,t2);}

/* k5949 in a5946 in k5826 in k5820 */
static void C_ccall f_5951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=f_5852(((C_word*)t0)[4]);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* k5940 in k5826 in k5820 */
static void C_ccall f_5942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5942,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5945,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1473: set-port-name! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[333]+1)))(4,*((C_word*)lf[333]+1),t3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[2]);}

/* k5943 in k5940 in k5826 in k5820 */
static void C_ccall f_5945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* fetch in k5826 in k5820 */
static void C_fcall f_5860(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5860,NULL,2,t0,t1);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[8])[1]))){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5872,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word)li136),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_5872(t5,t1);}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* loop in fetch in k5826 in k5820 */
static void C_fcall f_5872(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_5872,NULL,2,t0,t1);}
t2=C_read(((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);
t3=C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5888,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1375: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[328]+1)))(5,*((C_word*)lf[328]+1),t5,*((C_word*)lf[329]+1),((C_word*)t0)[10],lf[330]);}
else{
/* posixunix.scm:1378: posix-error */
t5=lf[3];
f_2371(7,t5,t1,lf[10],((C_word*)t0)[6],lf[331],((C_word*)t0)[10],((C_word*)t0)[5]);}}
else{
t4=(C_truep(((C_word*)t0)[4])?C_eqp(t2,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5909,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1382: more? */
t6=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t6))(2,t6,t5);}
else{
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t6=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}}

/* k5907 in loop in fetch in k5826 in k5820 */
static void C_ccall f_5909(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5909,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5912,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1384: ##sys#thread-yield! */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[327]+1)))(2,*((C_word*)lf[327]+1),t2);}
else{
t2=C_read(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5918,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(((C_word*)t3)[1],C_fix(-1));
if(C_truep(t5)){
t6=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t6)){
t7=C_set_block_item(t3,0,C_fix(0));
t8=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)t3)[1]);
t9=C_set_block_item(((C_word*)t0)[4],0,C_fix(0));
t10=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
/* posixunix.scm:1390: posix-error */
t7=lf[3];
f_2371(7,t7,t4,lf[10],((C_word*)t0)[3],lf[332],((C_word*)t0)[8],((C_word*)t0)[2]);}}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)t3)[1]);
t7=C_set_block_item(((C_word*)t0)[4],0,C_fix(0));
t8=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}}

/* k5916 in k5907 in loop in fetch in k5826 in k5820 */
static void C_ccall f_5918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)((C_word*)t0)[4])[1]);
t3=C_set_block_item(((C_word*)t0)[3],0,C_fix(0));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5910 in k5907 in loop in fetch in k5826 in k5820 */
static void C_ccall f_5912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1385: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5872(t2,((C_word*)t0)[2]);}

/* k5886 in loop in fetch in k5826 in k5820 */
static void C_ccall f_5888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5888,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5891,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1376: ##sys#thread-yield! */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[327]+1)))(2,*((C_word*)lf[327]+1),t2);}

/* k5889 in k5886 in loop in fetch in k5826 in k5820 */
static void C_ccall f_5891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1377: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5872(t2,((C_word*)t0)[2]);}

/* peek in k5826 in k5820 */
static C_word C_fcall f_5852(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_check;
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]))){
return(C_SCHEME_END_OF_FILE);}
else{
t1=C_subchar(((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);
return(t1);}}

/* ready? in k5826 in k5820 */
static void C_fcall f_5829(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5829,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5833,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1356: ##sys#file-select-one */
t3=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5831 in ready? in k5826 in k5820 */
static void C_ccall f_5833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
t3=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
/* posixunix.scm:1360: posix-error */
t4=lf[3];
f_2371(7,t4,((C_word*)t0)[5],lf[10],((C_word*)t0)[4],lf[326],((C_word*)t0)[3],((C_word*)t0)[2]);}}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(C_fix(1),t1));}}

/* f_5761 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5761(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5761r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5761r(t0,t1,t2,t3);}}

static void C_ccall f_5761r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=C_i_check_exact_2(t2,*((C_word*)lf[322]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5768,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t6=t5;
f_5768(t6,C_dup(t2));}
else{
t6=C_i_car(t3);
t7=C_i_check_exact_2(t6,lf[322]);
t8=t5;
f_5768(t8,C_dup2(t2,t6));}}

/* k5766 */
static void C_fcall f_5768(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5768,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5771,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm:1344: posix-error */
t3=lf[3];
f_2371(6,t3,t2,lf[10],lf[322],lf[323],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k5769 in k5766 */
static void C_ccall f_5771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_5716 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5716(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5716,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5720,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1326: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[175]+1)))(4,*((C_word*)lf[175]+1),t3,t2,lf[317]);}

/* k5718 */
static void C_ccall f_5720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5720,2,t0,t1);}
t2=C_slot(((C_word*)t0)[3],C_fix(7));
t3=C_eqp(lf[31],t2);
if(C_truep(t3)){
/* posixunix.scm:1327: ##sys#tcp-port->fileno */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[318]+1)))(3,*((C_word*)lf[318]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5755,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1328: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[321]+1)))(4,*((C_word*)lf[321]+1),t4,((C_word*)t0)[3],C_fix(0));}}

/* k5753 in k5718 */
static void C_ccall f_5755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5755,2,t0,t1);}
if(C_truep(C_i_zerop(t1))){
/* posixunix.scm:1333: posix-error */
t2=lf[3];
f_2371(6,t2,((C_word*)t0)[3],lf[15],lf[317],lf[319],((C_word*)t0)[2]);}
else{
t2=C_C_fileno(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5738,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1331: posix-error */
t4=lf[3];
f_2371(6,t4,t3,lf[10],lf[317],lf[320],((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}

/* k5736 in k5753 in k5718 */
static void C_ccall f_5738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_5702 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5702(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5702r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5702r(t0,t1,t2,t3);}}

static void C_ccall f_5702r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[316]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5714,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1322: mode */
f_5636(t5,C_SCHEME_FALSE,t3,lf[316]);}

/* k5712 */
static void C_ccall f_5714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5714,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixunix.scm:1322: check */
f_5673(((C_word*)t0)[2],lf[316],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* f_5688 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5688(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5688r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5688r(t0,t1,t2,t3);}}

static void C_ccall f_5688r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[315]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5700,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1318: mode */
f_5636(t5,C_SCHEME_TRUE,t3,lf[315]);}

/* k5698 */
static void C_ccall f_5700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5700,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixunix.scm:1318: check */
f_5673(((C_word*)t0)[2],lf[315],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* check in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_5673(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5673,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep(C_null_pointerp(t5))){
/* posixunix.scm:1311: posix-error */
t6=lf[3];
f_2371(6,t6,t1,lf[10],t2,lf[313],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5686,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1312: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[164]+1)))(6,*((C_word*)lf[164]+1),t6,t4,*((C_word*)lf[165]+1),lf[314],lf[152]);}}

/* k5684 in check in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* mode in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_5636(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5636,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5644,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=C_i_car(t3);
t7=C_eqp(t6,lf[307]);
if(C_truep(t7)){
t8=t2;
if(C_truep(t8)){
/* posixunix.scm:1304: ##sys#error */
t9=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t5,lf[308],t6);}
else{
/* posixunix.scm:1300: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t1,lf[309],t4);}}
else{
/* posixunix.scm:1305: ##sys#error */
t8=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,lf[310],t6);}}
else{
if(C_truep(t2)){
/* posixunix.scm:1300: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t1,lf[311],t4);}
else{
/* posixunix.scm:1300: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t1,lf[312],t4);}}}

/* k5642 in mode in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1300: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* f_5611 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5611(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5611,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[301]);
t5=C_i_check_string_2(t3,lf[301]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5624,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=t3;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5592,a[2]=t8,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t7)){
t10=C_i_foreign_string_argumentp(t7);
/* ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t9,t10);}
else{
t10=t9;
f_5592(2,t10,C_SCHEME_FALSE);}}

/* k5590 */
static void C_ccall f_5592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5592,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5596,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_i_foreign_string_argumentp(((C_word*)t0)[2]);
/* ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t2,t3);}
else{
t3=stub1271(C_SCHEME_UNDEFINED,t1,C_SCHEME_FALSE);
t4=((C_word*)t0)[3];
f_5624(t4,C_fixnum_lessp(t3,C_fix(0)));}}

/* k5594 in k5590 */
static void C_ccall f_5596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=stub1271(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
f_5624(t3,C_fixnum_lessp(t2,C_fix(0)));}

/* k5622 */
static void C_fcall f_5624(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1285: posix-error */
t2=lf[3];
f_2371(7,t2,((C_word*)t0)[4],lf[10],lf[302],lf[303],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_5524 in k5521 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5524(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5524r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5524r(t0,t1,t2,t3);}}

static void C_ccall f_5524r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5528,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_5528(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_5528(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k5526 */
static void C_ccall f_5528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5528,2,t0,t1);}
t2=C_i_check_string_2(((C_word*)t0)[4],lf[297]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5535,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5566,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1269: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t4,((C_word*)t0)[4]);}

/* k5564 in k5526 */
static void C_ccall f_5566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1269: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,lf[297]);}

/* k5533 in k5526 */
static void C_ccall f_5535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5535,2,t0,t1);}
t2=C_do_readlink(t1,((C_word*)t0)[5]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
if(C_truep(((C_word*)t0)[4])){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}
else{
/* posixunix.scm:1273: posix-error */
t3=lf[3];
f_2371(6,t3,((C_word*)t0)[3],lf[10],lf[297],lf[298],((C_word*)t0)[2]);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5550,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1274: substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[300]+1)))(5,*((C_word*)lf[300]+1),t3,((C_word*)t0)[5],C_fix(0),t2);}}

/* k5548 in k5533 in k5526 */
static void C_ccall f_5550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5550,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5556,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* posixunix.scm:1275: symbolic-link? */
t3=*((C_word*)lf[34]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k5554 in k5548 in k5533 in k5526 */
static void C_ccall f_5556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1276: read-symbolic-link */
t2=*((C_word*)lf[297]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[299]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* f_5486 in k5482 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5486(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5486,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[294]);
t5=C_i_check_string_2(t3,lf[294]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5507,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5519,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1256: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t7,t2);}

/* k5517 */
static void C_ccall f_5519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1256: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,lf[294]);}

/* k5505 */
static void C_ccall f_5507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5507,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5511,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5515,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1257: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[2]);}

/* k5513 in k5505 */
static void C_ccall f_5515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1257: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,lf[294]);}

/* k5509 in k5505 */
static void C_ccall f_5511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_symlink(((C_word*)t0)[5],t1);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1259: posix-error */
t3=lf[3];
f_2371(7,t3,((C_word*)t0)[4],lf[10],lf[295],lf[296],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_5467 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5467,2,t0,t1);}
t2=C_setsid(C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5471,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5477,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1226: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k5475 */
static void C_ccall f_5477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1227: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[291],lf[292]);}

/* k5469 */
static void C_ccall f_5471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_5461 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5461(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5461,3,t0,t1,t2);}
/* posixunix.scm:1221: check */
f_5425(t1,t2,C_fix((C_word)X_OK),lf[290]);}

/* f_5455 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5455(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5455,3,t0,t1,t2);}
/* posixunix.scm:1220: check */
f_5425(t1,t2,C_fix((C_word)W_OK),lf[289]);}

/* f_5449 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5449(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5449,3,t0,t1,t2);}
/* posixunix.scm:1219: check */
f_5425(t1,t2,C_fix((C_word)R_OK),lf[288]);}

/* check in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_5425(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5425,NULL,4,t1,t2,t3,t4);}
t5=C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5443,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5447,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1216: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t7,t2);}

/* k5445 in check in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1216: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5441 in check in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5443,2,t0,t1);}
t2=C_test_access(t1,((C_word*)t0)[3]);
t3=C_eqp(C_fix(0),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5435,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
/* posixunix.scm:1217: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t4);}}

/* k5433 in k5441 in check in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_5395 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5395(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5395,5,t0,t1,t2,t3,t4);}
t5=C_i_check_string_2(t2,lf[286]);
t6=C_i_check_exact_2(t3,lf[286]);
t7=C_i_check_exact_2(t4,lf[286]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5419,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5423,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1206: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t9,t2);}

/* k5421 */
static void C_ccall f_5423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1206: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,lf[286]);}

/* k5417 */
static void C_ccall f_5419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_chown(t1,((C_word*)t0)[5],((C_word*)t0)[4]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1207: posix-error */
t3=lf[3];
f_2371(8,t3,((C_word*)t0)[3],lf[10],lf[286],lf[287],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_5368 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5368(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5368,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[284]);
t5=C_i_check_exact_2(t3,lf[284]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5389,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5393,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1198: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t7,t2);}

/* k5391 */
static void C_ccall f_5393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1198: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,lf[284]);}

/* k5387 */
static void C_ccall f_5389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_chmod(t1,((C_word*)t0)[4]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1199: posix-error */
t3=lf[3];
f_2371(7,t3,((C_word*)t0)[3],lf[10],lf[284],lf[285],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_5304 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5304(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5304,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[243]);
t5=C_i_check_exact_2(t3,lf[243]);
t6=t2;
t7=t3;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5292,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t9=C_i_foreign_string_argumentp(t6);
/* ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t8,t9);}
else{
t9=t8;
f_5292(2,t9,C_SCHEME_FALSE);}}

/* k5290 */
static void C_ccall f_5292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5292,2,t0,t1);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t3=stub1153(C_SCHEME_UNDEFINED,t1,t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1145: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5318 in k5290 */
static void C_ccall f_5320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1146: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[243],lf[244],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_5230 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5230(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5230,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5234,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_length(t2);
t5=C_i_foreign_fixnum_argumentp(t4);
if(C_truep(stub1123(C_SCHEME_UNDEFINED,t5))){
t6=t3;
f_5234(2,t6,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm:1128: ##sys#error */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,lf[240],lf[242]);}}

/* k5232 */
static void C_ccall f_5234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5234,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5239,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word)li116),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5239(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* doloop1139 in k5232 */
static void C_fcall f_5239(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5239,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_fixnum_lessp(C_set_groups(t3),C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5255,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1133: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=C_slot(t2,C_fix(0));
t5=C_i_check_exact_2(t4,lf[240]);
t6=C_set_gid(t3,t4);
t7=C_slot(t2,C_fix(1));
t8=C_fixnum_plus(t3,C_fix(1));
t11=t1;
t12=t7;
t13=t8;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}

/* k5253 in doloop1139 in k5232 */
static void C_ccall f_5255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1134: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[240],lf[241],((C_word*)t0)[2]);}

/* f_5167 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5167,2,t0,t1);}
t2=C_fix((C_word)getgroups(0, C_groups));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5171,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5225,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1114: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t4);}
else{
t4=t3;
f_5171(2,t4,C_SCHEME_UNDEFINED);}}

/* k5223 */
static void C_ccall f_5225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1115: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[236],lf[239]);}

/* k5169 */
static void C_ccall f_5171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
if(C_truep(stub1123(C_SCHEME_UNDEFINED,t3))){
t4=t2;
f_5174(2,t4,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm:1117: ##sys#error */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[236],lf[238]);}}

/* k5172 in k5169 */
static void C_ccall f_5174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=stub1118(C_SCHEME_UNDEFINED,t3);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5206,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1119: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t5);}
else{
t5=t2;
f_5177(2,t5,C_SCHEME_UNDEFINED);}}

/* k5204 in k5172 in k5169 */
static void C_ccall f_5206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1120: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[236],lf[237]);}

/* k5175 in k5172 in k5169 */
static void C_ccall f_5177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5177,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5182,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word)li114),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5182(t5,((C_word*)t0)[2],C_fix(0));}

/* loop in k5175 in k5172 in k5169 */
static void C_fcall f_5182(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5182,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[3]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5196,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* posixunix.scm:1124: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k5194 in loop in k5175 in k5172 in k5169 */
static void C_ccall f_5196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5196,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_get_gid(((C_word*)t0)[2]),t1));}

/* f_5074 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5074(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5074r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5074r(t0,t1,t2,t3);}}

static void C_ccall f_5074r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5078,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_5078(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_5078(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k5076 */
static void C_ccall f_5078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5078,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5081,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t3=t2;
f_5081(t3,C_getgrgid(((C_word*)t0)[2]));}
else{
t3=C_i_check_string_2(((C_word*)t0)[2],lf[235]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5132,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1088: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,((C_word*)t0)[2],lf[235]);}}

/* k5130 in k5076 */
static void C_ccall f_5132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5081(t2,C_getgrnam(t1));}

/* k5079 in k5076 */
static void C_fcall f_5081(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5081,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[3])?*((C_word*)lf[231]+1):*((C_word*)lf[232]+1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5094,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_group->gr_name),C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5092 in k5079 in k5076 */
static void C_ccall f_5094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5094,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5098,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_group->gr_passwd),C_fix(0));}

/* k5096 in k5092 in k5079 in k5076 */
static void C_ccall f_5098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5102,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5104,a[2]=t4,a[3]=((C_word)li112),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5104(t6,t2,C_fix(0));}

/* loop in k5096 in k5092 in k5079 in k5076 */
static void C_fcall f_5104(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5104,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5108,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub1089(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k5106 in loop in k5096 in k5092 in k5079 in k5076 */
static void C_ccall f_5108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5108,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5118,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm:1097: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_5104(t4,t2,t3);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* k5116 in k5106 in loop in k5096 in k5092 in k5079 in k5076 */
static void C_ccall f_5118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5118,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k5100 in k5096 in k5092 in k5079 in k5076 */
static void C_ccall f_5102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g11101111 */
t2=((C_word*)t0)[5];
((C_proc6)C_fast_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],C_fix((C_word)C_group->gr_gid),t1);}

/* f_5049 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5049,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5057,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5061,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1073: current-effective-user-id */
t4=*((C_word*)lf[227]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5059 */
static void C_ccall f_5061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1073: user-information */
t2=*((C_word*)lf[230]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5055 */
static void C_ccall f_5057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_car(t1));}

/* f_5035 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_5035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5035,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5043,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5047,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1070: current-user-id */
t4=*((C_word*)lf[226]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5045 */
static void C_ccall f_5047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1070: user-information */
t2=*((C_word*)lf[230]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5041 */
static void C_ccall f_5043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_car(t1));}

/* f_4968 in k4964 in k4960 in k4956 in k4952 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4968(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4968r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4968r(t0,t1,t2,t3);}}

static void C_ccall f_4968r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4972,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_4972(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_4972(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k4970 */
static void C_ccall f_4972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4972,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4975,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t3=t2;
f_4975(t3,C_getpwuid(((C_word*)t0)[2]));}
else{
t3=C_i_check_string_2(((C_word*)t0)[2],lf[230]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5014,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1058: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,((C_word*)t0)[2],lf[230]);}}

/* k5012 in k4970 */
static void C_ccall f_5014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4975(t2,C_getpwnam(t1));}

/* k4973 in k4970 */
static void C_fcall f_4975(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4975,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[3])?*((C_word*)lf[231]+1):*((C_word*)lf[232]+1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4988,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_user->pw_name),C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4986 in k4973 in k4970 */
static void C_ccall f_4988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4988,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4992,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_passwd),C_fix(0));}

/* k4990 in k4986 in k4973 in k4970 */
static void C_ccall f_4992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4992,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4996,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_gecos),C_fix(0));}

/* k4994 in k4990 in k4986 in k4973 in k4970 */
static void C_ccall f_4996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5000,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_dir),C_fix(0));}

/* k4998 in k4994 in k4990 in k4986 in k4973 in k4970 */
static void C_ccall f_5000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5000,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5004,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_shell),C_fix(0));}

/* k5002 in k4998 in k4994 in k4990 in k4986 in k4973 in k4970 */
static void C_ccall f_5004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g10831084 */
t2=((C_word*)t0)[7];
((C_proc9)C_fast_retrieve_proc(t2))(9,t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],C_fix((C_word)C_user->pw_uid),C_fix((C_word)C_user->pw_gid),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_4914 in k4910 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4914,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4918,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(C_fix((C_word)C_uname),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4947,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:999: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t3);}
else{
t3=t2;
f_4918(2,t3,C_SCHEME_UNDEFINED);}}

/* k4945 */
static void C_ccall f_4947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1000: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[223],lf[225]);}

/* k4916 */
static void C_ccall f_4918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4918,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4925,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.sysname),C_fix(0));}

/* k4923 in k4916 */
static void C_ccall f_4925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4929,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.nodename),C_fix(0));}

/* k4927 in k4923 in k4916 */
static void C_ccall f_4929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4929,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4933,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.release),C_fix(0));}

/* k4931 in k4927 in k4923 in k4916 */
static void C_ccall f_4933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4933,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4937,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.version),C_fix(0));}

/* k4935 in k4931 in k4927 in k4923 in k4916 */
static void C_ccall f_4937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4937,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4941,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.machine),C_fix(0));}

/* k4939 in k4935 in k4931 in k4927 in k4923 in k4916 */
static void C_ccall f_4941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4941,2,t0,t1);}
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list5(&a,5,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* f_4896 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4896(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4896,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[221]);
t4=C_sigdelset(t2);
if(C_truep(C_fixnum_lessp(C_sigprocmask_unblock(C_fix(0)),C_fix(0)))){
/* posixunix.scm:978: posix-error */
t5=lf[3];
f_2371(5,t5,t1,lf[215],lf[221],lf[222]);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* f_4881 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4881(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4881,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[219]);
t4=C_sigaddset(t2);
if(C_truep(C_fixnum_lessp(C_sigprocmask_block(C_fix(0)),C_fix(0)))){
/* posixunix.scm:972: posix-error */
t5=lf[3];
f_2371(5,t5,t1,lf[215],lf[219],lf[220]);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* f_4875 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4875(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4875,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[218]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_sigismember(t2));}

/* f_4843 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4843,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4849,a[2]=t3,a[3]=((C_word)li103),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4849(t5,t1,*((C_word*)lf[210]+1),C_SCHEME_END_OF_LIST);}

/* loop */
static void C_fcall f_4849(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4849,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=C_i_cdr(t2);
if(C_truep(C_sigismember(t4))){
t6=C_a_i_cons(&a,2,t4,t3);
/* posixunix.scm:962: loop */
t10=t1;
t11=t5;
t12=t6;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t6=t3;
/* posixunix.scm:962: loop */
t10=t1;
t11=t5;
t12=t6;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}}

/* f_4794 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4794(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4794,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[214]);
t4=C_sigemptyset(C_fix(0));
t5=t2;
t6=C_i_check_list_2(t5,lf[48]);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4820,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp);
t8=f_4820(t5);
if(C_truep(C_fixnum_lessp(C_sigprocmask_set(C_fix(0)),C_fix(0)))){
/* posixunix.scm:955: posix-error */
t9=lf[3];
f_2371(5,t9,t1,lf[215],lf[214],lf[216]);}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* for-each-loop1006 */
static C_word C_fcall f_4820(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_check;
loop:
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_i_check_exact_2(t2,lf[214]);
t4=C_sigaddset(t2);
t5=C_slot(t1,C_fix(1));
t8=t5;
t1=t8;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* f_4776 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4776(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4776,4,t0,t1,t2,t3);}
t4=C_slot(((C_word*)t0)[3],t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4786,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:941: h */
t6=t4;
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t2);}
else{
/* posixunix.scm:943: oldhook */
t5=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k4784 */
static void C_ccall f_4786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:942: ##sys#context-switch */
C_context_switch(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_4763 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4763(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4763,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t2,lf[213]);
if(C_truep(t3)){
t5=t2;
t6=C_establish_signal_handler(t2,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_vector_set(((C_word*)t0)[2],t2,t3));}
else{
t5=C_establish_signal_handler(t2,C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_vector_set(((C_word*)t0)[2],t2,t3));}}

/* f_4754 in k4750 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4754(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4754,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[212]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(((C_word*)t0)[2],t2));}

/* f_4707 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4707,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4711,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(C_pipe(C_SCHEME_FALSE),C_fix(0)))){
/* posixunix.scm:858: posix-error */
t3=lf[3];
f_2371(5,t3,t2,lf[10],lf[183],lf[184]);}
else{
/* posixunix.scm:859: values */
C_values(4,0,t1,C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}}

/* k4709 */
static void C_ccall f_4711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:859: values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}

/* f_4687 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4687(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_4687r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4687r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4687r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=*((C_word*)lf[182]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4691,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t6,*((C_word*)lf[171]+1),t2,t4);}

/* k4689 */
static void C_ccall f_4691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4691,2,t0,t1);}
t2=C_mutate((C_word*)lf[182]+1 /* (set! ##sys#standard-output ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4697,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li95),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:846: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a4696 in k4689 */
static void C_ccall f_4697(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_4697r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4697r(t0,t1,t2);}}

static void C_ccall f_4697r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4701,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:848: close-output-pipe */
t4=*((C_word*)lf[176]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k4699 in a4696 in k4689 */
static void C_ccall f_4701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[182]+1 /* (set! ##sys#standard-output ...) */,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_4667 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4667(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_4667r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4667r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4667r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=*((C_word*)lf[180]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4671,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t6,*((C_word*)lf[167]+1),t2,t4);}

/* k4669 */
static void C_ccall f_4671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4671,2,t0,t1);}
t2=C_mutate((C_word*)lf[180]+1 /* (set! ##sys#standard-input ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4677,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li93),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:836: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a4676 in k4669 */
static void C_ccall f_4677(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_4677r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4677r(t0,t1,t2);}}

static void C_ccall f_4677r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4681,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:838: close-input-pipe */
t4=*((C_word*)lf[172]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k4679 in a4676 in k4669 */
static void C_ccall f_4681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[180]+1 /* (set! ##sys#standard-input ...) */,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_4643 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4643(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_4643r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4643r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4643r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4647,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[171]+1),t2,t4);}

/* k4645 */
static void C_ccall f_4647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4647,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4652,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li90),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4658,a[2]=t1,a[3]=((C_word)li91),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:825: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a4657 in k4645 */
static void C_ccall f_4658(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4658r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4658r(t0,t1,t2);}}

static void C_ccall f_4658r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4662,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:828: close-output-pipe */
t4=*((C_word*)lf[176]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k4660 in a4657 in k4645 */
static void C_ccall f_4662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4651 in k4645 */
static void C_ccall f_4652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4652,2,t0,t1);}
/* posixunix.scm:826: proc */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* f_4619 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4619(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_4619r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4619r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4619r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4623,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[167]+1),t2,t4);}

/* k4621 */
static void C_ccall f_4623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4623,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4628,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li87),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4634,a[2]=t1,a[3]=((C_word)li88),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:816: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a4633 in k4621 */
static void C_ccall f_4634(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4634r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4634r(t0,t1,t2);}}

static void C_ccall f_4634r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4638,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:819: close-input-pipe */
t4=*((C_word*)lf[172]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k4636 in a4633 in k4621 */
static void C_ccall f_4638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4627 in k4621 */
static void C_ccall f_4628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4628,2,t0,t1);}
/* posixunix.scm:817: proc */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* f_4603 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4603(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4603,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4607,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:807: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[175]+1)))(4,*((C_word*)lf[175]+1),t3,t2,lf[172]);}

/* k4605 */
static void C_ccall f_4607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4607,2,t0,t1);}
t2=close_pipe(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4610,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:809: posix-error */
t5=lf[3];
f_2371(6,t5,t3,lf[10],lf[173],lf[174],((C_word*)t0)[3]);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k4608 in k4605 */
static void C_ccall f_4610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_4567 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4567(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_4567r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4567r(t0,t1,t2,t3);}}

static void C_ccall f_4567r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(10);
t4=C_i_check_string_2(t2,lf[171]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[168]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4581,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[168]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4588,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:802: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t9,t2,lf[171]);}
else{
t9=C_eqp(t6,lf[169]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4598,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:803: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t10,t2,lf[171]);}
else{
/* posixunix.scm:776: ##sys#error */
t10=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[170],t6);}}}

/* k4596 */
static void C_ccall f_4598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4598,2,t0,t1);}
t2=open_binary_output_pipe(&a,1,t1);
/* posixunix.scm:798: check */
f_4516(((C_word*)t0)[3],lf[171],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* k4586 */
static void C_ccall f_4588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4588,2,t0,t1);}
t2=open_text_output_pipe(&a,1,t1);
/* posixunix.scm:798: check */
f_4516(((C_word*)t0)[3],lf[171],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* k4579 */
static void C_ccall f_4581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:798: check */
f_4516(((C_word*)t0)[3],lf[171],((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* f_4531 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4531(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_4531r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4531r(t0,t1,t2,t3);}}

static void C_ccall f_4531r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(10);
t4=C_i_check_string_2(t2,lf[167]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[168]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4545,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[168]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4552,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:791: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t9,t2,lf[167]);}
else{
t9=C_eqp(t6,lf[169]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4562,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:792: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t10,t2,lf[167]);}
else{
/* posixunix.scm:776: ##sys#error */
t10=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[170],t6);}}}

/* k4560 */
static void C_ccall f_4562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4562,2,t0,t1);}
t2=open_binary_input_pipe(&a,1,t1);
/* posixunix.scm:787: check */
f_4516(((C_word*)t0)[3],lf[167],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k4550 */
static void C_ccall f_4552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4552,2,t0,t1);}
t2=open_text_input_pipe(&a,1,t1);
/* posixunix.scm:787: check */
f_4516(((C_word*)t0)[3],lf[167],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k4543 */
static void C_ccall f_4545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:787: check */
f_4516(((C_word*)t0)[3],lf[167],((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* check in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_4516(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4516,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep(C_null_pointerp(t5))){
/* posixunix.scm:779: posix-error */
t6=lf[3];
f_2371(6,t6,t1,lf[10],t2,lf[163],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4529,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:780: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[164]+1)))(6,*((C_word*)lf[164]+1),t6,t4,*((C_word*)lf[165]+1),lf[166],lf[152]);}}

/* k4527 in check in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* f_4476 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4476(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4476,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[41]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4483,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4496,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:766: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t5,t2);}

/* k4494 */
static void C_ccall f_4496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:766: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,lf[41]);}

/* k4481 */
static void C_ccall f_4483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4486,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(C_fix(0),C_chdir(t1));
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
/* posixunix.scm:768: posix-error */
t4=lf[3];
f_2371(6,t4,t2,lf[10],lf[41],lf[162],((C_word*)t0)[2]);}}

/* k4484 in k4481 */
static void C_ccall f_4486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_4343 in k4339 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4343(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4343r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4343r(t0,t1,t2,t3);}}

static void C_ccall f_4343r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4347,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_4347(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_4347(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k4345 */
static void C_ccall f_4347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4347,2,t0,t1);}
t2=C_i_check_string_2(((C_word*)t0)[3],lf[158]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4353,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:751: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[3]);}

/* k4351 in k4345 */
static void C_ccall f_4353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4353,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4356,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_block_size(t1);
t4=C_eqp(C_fix(0),t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4362,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_4362(2,t6,t4);}
else{
/* posixunix.scm:753: file-exists? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[161]+1)))(3,*((C_word*)lf[161]+1),t5,t1);}}

/* k4360 in k4351 in k4345 */
static void C_ccall f_4362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4362,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
if(C_truep(((C_word*)t0)[3])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4372,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4416,a[2]=((C_word*)t0)[4],a[3]=((C_word)li79),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4422,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}
else{
t2=((C_word*)t0)[4];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4445,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:745: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t3,t2,lf[158]);}}}

/* k4443 in k4360 in k4351 in k4345 */
static void C_ccall f_4445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[4]);}
else{
/* posixunix.scm:746: posix-error */
t4=lf[3];
f_2371(6,t4,((C_word*)t0)[3],lf[10],lf[158],lf[159],((C_word*)t0)[2]);}}

/* a4421 in k4360 in k4351 in k4345 */
static void C_ccall f_4422(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4422,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
/* posixunix.scm:756: make-pathname */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(5,*((C_word*)lf[56]+1),t1,t2,t3,t4);}
else{
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* a4415 in k4360 in k4351 in k4345 */
static void C_ccall f_4416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4416,2,t0,t1);}
/* posixunix.scm:755: decompose-pathname */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[55]+1)))(3,*((C_word*)lf[55]+1),t1,((C_word*)t0)[2]);}

/* k4370 in k4360 in k4351 in k4345 */
static void C_ccall f_4372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4372,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4374,a[2]=t3,a[3]=((C_word)li78),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4374(t5,((C_word*)t0)[2],t1);}

/* loop in k4370 in k4360 in k4351 in k4345 */
static void C_fcall f_4374(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4374,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4381,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4414,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:757: directory? */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t4=t3;
f_4381(t4,C_SCHEME_FALSE);}}

/* k4412 in loop in k4370 in k4360 in k4351 in k4345 */
static void C_ccall f_4414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4381(t2,C_i_not(t1));}

/* k4379 in loop in k4370 in k4360 in k4351 in k4345 */
static void C_fcall f_4381(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4381,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4384,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4407,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:758: pathname-directory */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[160]+1)))(3,*((C_word*)lf[160]+1),t3,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4405 in k4379 in loop in k4370 in k4360 in k4351 in k4345 */
static void C_ccall f_4407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:758: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4374(t2,((C_word*)t0)[2],t1);}

/* k4382 in k4379 in loop in k4370 in k4360 in k4351 in k4345 */
static void C_ccall f_4384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4384,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4400,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:745: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,t3,lf[158]);}

/* k4398 in k4382 in k4379 in loop in k4370 in k4360 in k4351 in k4345 */
static void C_ccall f_4400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* posixunix.scm:746: posix-error */
t4=lf[3];
f_2371(6,t4,((C_word*)t0)[3],lf[10],lf[158],lf[159],((C_word*)t0)[2]);}}

/* k4354 in k4351 in k4345 */
static void C_ccall f_4356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_4281 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_4281(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4281r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4281r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4281r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(6);
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_i_car(t4):C_fix((C_word)SEEK_SET));
t7=C_i_check_exact_2(t3,lf[150]);
t8=C_i_check_exact_2(t6,lf[150]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4294,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_negativep(t3))){
/* posixunix.scm:714: ##sys#signal-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(7,*((C_word*)lf[4]+1),t9,lf[155],lf[150],lf[156],t3,t2);}
else{
t10=t9;
f_4294(2,t10,C_SCHEME_UNDEFINED);}}

/* k4292 */
static void C_ccall f_4294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4294,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4300,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4306,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:715: port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[154]+1)))(3,*((C_word*)lf[154]+1),t3,((C_word*)t0)[4]);}

/* k4304 in k4292 */
static void C_ccall f_4306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[5],C_fix(7));
t3=C_eqp(t2,lf[152]);
if(C_truep(t3)){
t4=C_fseek(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
f_4300(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
f_4300(2,t4,C_SCHEME_FALSE);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[5]))){
t2=C_lseek(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_4300(2,t3,t2);}
else{
/* posixunix.scm:721: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(6,*((C_word*)lf[4]+1),((C_word*)t0)[2],lf[15],lf[150],lf[153],((C_word*)t0)[5]);}}}

/* k4298 in k4292 */
static void C_ccall f_4300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posixunix.scm:722: posix-error */
t2=lf[3];
f_2371(7,t2,((C_word*)t0)[4],lf[10],lf[150],lf[151],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* f_3989 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3989(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_3989r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3989r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3989r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(17);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_pairp(t4);
t8=(C_truep(t7)?C_i_car(t4):C_SCHEME_FALSE);
t9=C_i_foreign_fixnum_argumentp(C_fix(0));
t10=stub688(C_SCHEME_UNDEFINED,t9);
t11=C_i_foreign_fixnum_argumentp(C_fix(1));
t12=stub688(C_SCHEME_UNDEFINED,t11);
t13=C_i_not(t2);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4005,a[2]=t6,a[3]=t8,a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t13)){
t15=t14;
f_4005(t15,t13);}
else{
if(C_truep(C_fixnump(t2))){
t15=C_set_block_item(t6,0,t2);
t16=t2;
t17=C_i_foreign_fixnum_argumentp(C_fix(0));
t18=C_i_foreign_fixnum_argumentp(t16);
t19=t14;
f_4005(t19,stub693(C_SCHEME_UNDEFINED,t17,t18));}
else{
t15=C_i_check_list_2(t2,lf[145]);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4233,a[2]=t6,a[3]=((C_word)li74),tmp=(C_word)a,a+=4,tmp);
t17=t2;
t18=C_i_check_list_2(t17,lf[48]);
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4249,a[2]=t16,a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp);
t20=t14;
f_4005(t20,f_4249(t19,t17));}}}

/* for-each-loop717 */
static C_word C_fcall f_4249(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
loop:
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=f_4233(((C_word*)t0)[2],t2);
t4=C_slot(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* g718 */
static C_word C_fcall f_4233(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t2=C_i_check_exact_2(t1,lf[145]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_i_fixnum_max(((C_word*)((C_word*)t0)[2])[1],t1));
t4=t1;
t5=C_i_foreign_fixnum_argumentp(C_fix(0));
t6=C_i_foreign_fixnum_argumentp(t4);
return(stub693(C_SCHEME_UNDEFINED,t5,t6));}

/* k4003 */
static void C_fcall f_4005(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4005,NULL,2,t0,t1);}
t2=C_i_not(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_4011(t4,t2);}
else{
if(C_truep(C_fixnump(((C_word*)t0)[6]))){
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[6]);
t5=((C_word*)t0)[6];
t6=C_i_foreign_fixnum_argumentp(C_fix(1));
t7=C_i_foreign_fixnum_argumentp(t5);
t8=t3;
f_4011(t8,stub693(C_SCHEME_UNDEFINED,t6,t7));}
else{
t4=C_i_check_list_2(((C_word*)t0)[6],lf[145]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4182,a[2]=((C_word*)t0)[2],a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp);
t6=((C_word*)t0)[6];
t7=C_i_check_list_2(t6,lf[48]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4198,a[2]=t5,a[3]=((C_word)li73),tmp=(C_word)a,a+=4,tmp);
t9=t3;
f_4011(t9,f_4198(t8,t6));}}}

/* for-each-loop744 in k4003 */
static C_word C_fcall f_4198(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
loop:
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=f_4182(((C_word*)t0)[2],t2);
t4=C_slot(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* g745 in k4003 */
static C_word C_fcall f_4182(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t2=C_i_check_exact_2(t1,lf[145]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_i_fixnum_max(((C_word*)((C_word*)t0)[2])[1],t1));
t4=t1;
t5=C_i_foreign_fixnum_argumentp(C_fix(1));
t6=C_i_foreign_fixnum_argumentp(t4);
return(stub693(C_SCHEME_UNDEFINED,t5,t6));}

/* k4009 in k4003 */
static void C_fcall f_4011(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4011,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4014,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_i_check_number_2(((C_word*)t0)[3],lf[145]);
t4=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t5=t2;
f_4014(t5,C_C_select_t(t4,((C_word*)t0)[3]));}
else{
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=t2;
f_4014(t4,C_C_select(t3));}}

/* k4012 in k4009 in k4003 */
static void C_fcall f_4014(C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4014,NULL,2,t0,t1);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm:680: posix-error */
t2=lf[3];
f_2371(7,t2,((C_word*)t0)[4],lf[10],lf[145],lf[146],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_i_pairp(((C_word*)t0)[3]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_SCHEME_FALSE);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* posixunix.scm:681: values */
C_values(4,0,((C_word*)t0)[4],t4,C_SCHEME_END_OF_LIST);}
else{
/* posixunix.scm:681: values */
C_values(4,0,((C_word*)t0)[4],t4,C_SCHEME_FALSE);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4053,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t4=((C_word*)t0)[3];
t5=C_i_foreign_fixnum_argumentp(C_fix(0));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=t3;
f_4053(t7,stub699(C_SCHEME_UNDEFINED,t5,t6));}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4117,a[2]=t5,a[3]=((C_word)li70),tmp=(C_word)a,a+=4,tmp);
t7=((C_word*)t0)[3];
t8=C_i_check_list_2(t7,lf[48]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4134,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4136,a[2]=t11,a[3]=t6,a[4]=((C_word)li71),tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_4136(t13,t9,t7);}}
else{
t4=t3;
f_4053(t4,C_SCHEME_FALSE);}}}}

/* for-each-loop774 in k4012 in k4009 in k4003 */
static void C_fcall f_4136(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4136,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_4117(C_a_i(&a,3),((C_word*)t0)[3],t3);
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

/* k4132 in k4012 in k4009 in k4003 */
static void C_ccall f_4134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
f_4053(t3,t2);}

/* g775 in k4012 in k4009 in k4003 */
static C_word C_fcall f_4117(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_check;
t2=t1;
t3=C_i_foreign_fixnum_argumentp(C_fix(0));
t4=C_i_foreign_fixnum_argumentp(t2);
if(C_truep(stub699(C_SCHEME_UNDEFINED,t3,t4))){
t5=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
return(t6);}
else{
t5=C_SCHEME_UNDEFINED;
return(t5);}}

/* k4051 in k4012 in k4009 in k4003 */
static void C_fcall f_4053(C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4053,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[3])){
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[3];
t3=C_i_foreign_fixnum_argumentp(C_fix(1));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=stub699(C_SCHEME_UNDEFINED,t3,t4);
/* posixunix.scm:683: values */
C_values(4,0,((C_word*)t0)[2],t1,t5);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4067,a[2]=t3,a[3]=((C_word)li68),tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[3];
t6=C_i_check_list_2(t5,lf[48]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4084,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4086,a[2]=t9,a[3]=t4,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4086(t11,t7,t5);}}
else{
/* posixunix.scm:683: values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}}

/* for-each-loop794 in k4051 in k4012 in k4009 in k4003 */
static void C_fcall f_4086(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4086,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_4067(C_a_i(&a,3),((C_word*)t0)[3],t3);
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

/* k4082 in k4051 in k4012 in k4009 in k4003 */
static void C_ccall f_4084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
/* posixunix.scm:683: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* g795 in k4051 in k4012 in k4009 in k4003 */
static C_word C_fcall f_4067(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_check;
t2=t1;
t3=C_i_foreign_fixnum_argumentp(C_fix(1));
t4=C_i_foreign_fixnum_argumentp(t2);
if(C_truep(stub699(C_SCHEME_UNDEFINED,t3,t4))){
t5=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
return(t6);}
else{
t5=C_SCHEME_UNDEFINED;
return(t5);}}

/* f_3931 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3931(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3931,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[143]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3938,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:632: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,t2,lf[143]);}

/* k3936 */
static void C_ccall f_3938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3938,2,t0,t1);}
t2=C_mkstemp(t1);
t3=C_block_size(t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3944,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(C_fix(-1),t2);
if(C_truep(t5)){
/* posixunix.scm:636: posix-error */
t6=lf[3];
f_2371(6,t6,t4,lf[10],lf[143],lf[144],((C_word*)t0)[2]);}
else{
t6=t4;
f_3944(2,t6,C_SCHEME_UNDEFINED);}}

/* k3942 in k3936 */
static void C_ccall f_3944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3951,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm:637: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[42]+1)))(5,*((C_word*)lf[42]+1),t2,((C_word*)t0)[2],C_fix(0),t3);}

/* k3949 in k3942 in k3936 */
static void C_ccall f_3951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:637: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_3892 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3892(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3892r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3892r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3892r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=C_i_check_exact_2(t2,lf[140]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3899,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t3))){
if(C_truep(C_byteblockp(t3))){
t7=t6;
f_3899(2,t7,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm:621: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(6,*((C_word*)lf[4]+1),t6,lf[15],lf[140],lf[142],t3);}}
else{
/* posixunix.scm:621: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(6,*((C_word*)lf[4]+1),t6,lf[15],lf[140],lf[142],t3);}}

/* k3897 */
static void C_ccall f_3899(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3899,2,t0,t1);}
t2=C_i_pairp(((C_word*)t0)[5]);
t3=(C_truep(t2)?C_i_car(((C_word*)t0)[5]):C_block_size(((C_word*)t0)[4]));
t4=C_i_check_exact_2(t3,lf[140]);
t5=C_write(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3908,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
/* posixunix.scm:626: posix-error */
t8=lf[3];
f_2371(7,t8,t6,lf[10],lf[140],lf[141],((C_word*)t0)[3],t3);}
else{
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t5);}}

/* k3906 in k3897 */
static void C_ccall f_3908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_3850 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3850r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3850r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3850r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=C_i_check_exact_2(t2,lf[137]);
t6=C_i_check_exact_2(t3,lf[137]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3860,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t8=t7;
f_3860(2,t8,C_i_car(t4));}
else{
/* posixunix.scm:609: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[44]+1)))(3,*((C_word*)lf[44]+1),t7,t3);}}

/* k3858 */
static void C_ccall f_3860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3860,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t1))){
if(C_truep(C_byteblockp(t1))){
t3=t2;
f_3863(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm:611: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(6,*((C_word*)lf[4]+1),t2,lf[15],lf[137],lf[139],t1);}}
else{
/* posixunix.scm:611: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(6,*((C_word*)lf[4]+1),t2,lf[15],lf[137],lf[139],t1);}}

/* k3861 in k3858 */
static void C_ccall f_3863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3863,2,t0,t1);}
t2=C_read(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3866,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:614: posix-error */
t5=lf[3];
f_2371(7,t5,t3,lf[10],lf[137],lf[138],((C_word*)t0)[5],((C_word*)t0)[3]);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list2(&a,2,((C_word*)t0)[4],t2));}}

/* k3864 in k3861 in k3858 */
static void C_ccall f_3866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3866,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* f_3835 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3835(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3835,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[135]);
if(C_truep(C_fixnum_lessp(C_close(t2),C_fix(0)))){
/* posixunix.scm:603: posix-error */
t4=lf[3];
f_2371(6,t4,t1,lf[10],lf[135],lf[136],t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_3797 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3797(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4r,(void*)f_3797r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3797r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3797r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(9);
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_i_car(t4):((C_word*)t0)[2]);
t7=C_i_check_string_2(t2,lf[133]);
t8=C_i_check_exact_2(t3,lf[133]);
t9=C_i_check_exact_2(t6,lf[133]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3814,a[2]=t2,a[3]=t1,a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3827,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:594: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t11,t2);}

/* k3825 */
static void C_ccall f_3827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:594: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,lf[133]);}

/* k3812 */
static void C_ccall f_3814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3814,2,t0,t1);}
t2=C_open(t1,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3817,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:596: posix-error */
t5=lf[3];
f_2371(8,t5,t3,lf[10],lf[133],lf[134],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k3815 in k3812 */
static void C_ccall f_3817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_3751 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3751(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3751r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3751r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3751r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3755,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_3755(2,t6,C_fix(0));}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_3755(2,t7,C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k3753 */
static void C_ccall f_3755(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=C_i_check_exact_2(((C_word*)t0)[4],lf[131]);
t3=C_i_check_exact_2(((C_word*)t0)[3],lf[131]);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
t6=C_i_foreign_fixnum_argumentp(t4);
t7=C_i_foreign_fixnum_argumentp(t5);
t8=C_i_foreign_integer_argumentp(t1);
t9=stub618(C_SCHEME_UNDEFINED,t6,t7,t8);
t10=C_eqp(t9,C_fix(-1));
if(C_truep(t10)){
/* posixunix.scm:584: posix-error */
t11=lf[3];
f_2371(7,t11,((C_word*)t0)[2],lf[10],lf[131],lf[132],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t9);}}

/* f_3694 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3694(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3694,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub574(C_SCHEME_UNDEFINED,t3));}

/* f_3687 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3687(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3687,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub569(C_SCHEME_UNDEFINED,t3));}

/* f_3620 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3620(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3620r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3620r(t0,t1,t2,t3);}}

static void C_ccall f_3620r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3624,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_3624(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_3624(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k3622 */
static void C_ccall f_3624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3627,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:419: check-time-vector */
f_3447(t2,lf[90],((C_word*)t0)[2]);}

/* k3625 in k3622 */
static void C_ccall f_3627(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3627,2,t0,t1);}
if(C_truep(((C_word*)t0)[4])){
t2=C_i_check_string_2(((C_word*)t0)[4],lf[90]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3646,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:423: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,((C_word*)t0)[4],lf[90]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3649,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t5=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,stub507(t4,t3),C_fix(0));}}

/* k3647 in k3625 in k3622 */
static void C_ccall f_3649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:427: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[42]+1)))(5,*((C_word*)lf[42]+1),((C_word*)t0)[3],t1,C_fix(0),t3);}
else{
/* posix-common.scm:428: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[90],lf[92],((C_word*)t0)[2]);}}

/* k3644 in k3625 in k3622 */
static void C_ccall f_3646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3646,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],stub513(t3,t2,t1),C_fix(0));}

/* k3634 in k3625 in k3622 */
static void C_ccall f_3636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* posix-common.scm:424: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[90],lf[91],((C_word*)t0)[2]);}}

/* f_3595 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3595(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3595,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3599,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:409: check-time-vector */
f_3447(t3,lf[87],t2);}

/* k3597 */
static void C_ccall f_3599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3599,2,t0,t1);}
t2=C_a_mktime(&a,1,((C_word*)t0)[3]);
if(C_truep(C_flonum_equalp(lf[88],t2))){
/* posix-common.scm:412: ##sys#error */
t3=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[87],lf[89],((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_3544 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3544(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3544r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3544r(t0,t1,t2);}}

static void C_ccall f_3544r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3548,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:401: current-seconds */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(2,*((C_word*)lf[83]+1),t3);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_3548(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k3546 */
static void C_ccall f_3548(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3548,2,t0,t1);}
t2=C_i_check_number_2(t1,lf[85]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3554,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=t1;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_integer_argumentp(t4);
t7=stub481(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k3552 in k3546 */
static void C_ccall f_3554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:405: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[42]+1)))(5,*((C_word*)lf[42]+1),((C_word*)t0)[3],t1,C_fix(0),t3);}
else{
/* posix-common.scm:406: ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[85],lf[86],((C_word*)t0)[2]);}}

/* f_3500 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3500(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3500r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3500r(t0,t1,t2);}}

static void C_ccall f_3500r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3504,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:395: current-seconds */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(2,*((C_word*)lf[83]+1),t3);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
t6=C_i_check_number_2(t5,lf[84]);
/* posix-common.scm:397: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[82]+1)))(4,*((C_word*)lf[82]+1),t1,t5,C_SCHEME_TRUE);}
else{
/* ##sys#error */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k3502 */
static void C_ccall f_3504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_number_2(t1,lf[84]);
/* posix-common.scm:397: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[82]+1)))(4,*((C_word*)lf[82]+1),((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* f_3466 in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3466(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3466r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3466r(t0,t1,t2);}}

static void C_ccall f_3466r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3470,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:391: current-seconds */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[83]+1)))(2,*((C_word*)lf[83]+1),t3);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
t6=C_i_check_number_2(t5,lf[81]);
/* posix-common.scm:393: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[82]+1)))(4,*((C_word*)lf[82]+1),t1,t5,C_SCHEME_FALSE);}
else{
/* ##sys#error */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k3468 */
static void C_ccall f_3470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_number_2(t1,lf[81]);
/* posix-common.scm:393: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[82]+1)))(4,*((C_word*)lf[82]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* check-time-vector in k3443 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_3447(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3447,NULL,3,t1,t2,t3);}
t4=C_i_check_vector_2(t3,t2);
t5=C_block_size(t3);
if(C_truep(C_fixnum_lessp(t5,C_fix(10)))){
/* posix-common.scm:389: ##sys#error */
t6=*((C_word*)lf[18]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,lf[80],t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* f_3262 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3262(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3262r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3262r(t0,t1,t2,t3);}}

static void C_ccall f_3262r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3272,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_3272(t6,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3437,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_i_car(t3);
/* posix-common.scm:350: keyword? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[77]+1)))(3,*((C_word*)lf[77]+1),t6,t7);}}

/* k3435 */
static void C_ccall f_3437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3272(t2,C_i_not(t1));}

/* k3270 */
static void C_fcall f_3272(C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3272,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3273,a[2]=((C_word*)t0)[3],a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3278,a[2]=t3,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3283,a[2]=t4,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3288,a[2]=t5,a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3299,a[2]=t6,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* def-pred378403 */
t8=t7;
f_3299(t8,((C_word*)t0)[2]);}
else{
t8=C_i_car(t2);
t9=C_i_cdr(t2);
if(C_truep(C_i_nullp(t9))){
/* def-action379399 */
t10=t6;
f_3288(t10,((C_word*)t0)[2],t8);}
else{
t10=C_i_car(t9);
t11=C_i_cdr(t9);
if(C_truep(C_i_nullp(t11))){
/* def-id380396 */
t12=t5;
f_3283(t12,((C_word*)t0)[2],t8,t10);}
else{
t12=C_i_car(t11);
t13=C_i_cdr(t11);
if(C_truep(C_i_nullp(t13))){
/* def-limit381392 */
t14=t4;
f_3278(t14,((C_word*)t0)[2],t8,t10,t12);}
else{
t14=C_i_car(t13);
t15=C_i_cdr(t13);
if(C_truep(C_i_nullp(t15))){
/* body376387 */
t16=t3;
f_3273(t16,((C_word*)t0)[2],t8,t10,t12,t14);}
else{
/* ##sys#error */
t16=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,((C_word*)t0)[2],lf[0],t15);}}}}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3383,a[2]=((C_word*)t0)[3],a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,((C_word*)t0)[2],t2,((C_word*)t0)[4]);}}

/* a3382 in k3270 */
static void C_ccall f_3383(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2r,(void*)f_3383r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3383r(t0,t1,t2);}}

static void C_ccall f_3383r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3387,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3427,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(5,*((C_word*)lf[72]+1),t3,lf[76],t2,t4);}

/* a3426 in a3382 in k3270 */
static void C_ccall f_3427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3427,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3429,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));}

/* f_3429 in a3426 in a3382 in k3270 */
static void C_ccall f_3429(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3429,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k3385 in a3382 in k3270 */
static void C_ccall f_3387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3390,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3419,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(5,*((C_word*)lf[72]+1),t2,lf[75],((C_word*)t0)[2],t3);}

/* a3418 in k3385 in a3382 in k3270 */
static void C_ccall f_3419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3419,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3421,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));}

/* f_3421 in a3418 in k3385 in a3382 in k3270 */
static void C_ccall f_3421(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3421,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}

/* k3388 in k3385 in a3382 in k3270 */
static void C_ccall f_3390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3393,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3416,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(5,*((C_word*)lf[72]+1),t2,lf[74],((C_word*)t0)[2],t3);}

/* a3415 in k3388 in k3385 in a3382 in k3270 */
static void C_ccall f_3416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3416,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}

/* k3391 in k3388 in k3385 in a3382 in k3270 */
static void C_ccall f_3393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3393,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3396,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3413,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(5,*((C_word*)lf[72]+1),t2,lf[73],((C_word*)t0)[2],t3);}

/* a3412 in k3391 in k3388 in k3385 in a3382 in k3270 */
static void C_ccall f_3413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3413,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k3394 in k3391 in k3388 in k3385 in a3382 in k3270 */
static void C_ccall f_3396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3396,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3399,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3410,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(5,*((C_word*)lf[72]+1),t2,lf[50],((C_word*)t0)[2],t3);}

/* a3409 in k3394 in k3391 in k3388 in k3385 in a3382 in k3270 */
static void C_ccall f_3410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3410,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k3397 in k3394 in k3391 in k3388 in k3385 in a3382 in k3270 */
static void C_ccall f_3399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3399,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3402,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3407,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(5,*((C_word*)lf[72]+1),t2,lf[51],((C_word*)t0)[2],t3);}

/* a3406 in k3397 in k3394 in k3391 in k3388 in k3385 in a3382 in k3270 */
static void C_ccall f_3407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3407,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in a3382 in k3270 */
static void C_ccall f_3402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:365: ##sys#find-files */
f_3064(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2],lf[49]);}

/* def-pred378 in k3270 */
static void C_fcall f_3299(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3299,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3305,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
/* def-action379399 */
t3=((C_word*)t0)[2];
f_3288(t3,t1,t2);}

/* a3304 in def-pred378 in k3270 */
static void C_ccall f_3305(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3305,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* def-action379 in k3270 */
static void C_fcall f_3288(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3288,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3294,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp);
/* def-id380396 */
t4=((C_word*)t0)[2];
f_3283(t4,t1,t2,t3);}

/* a3293 in def-action379 in k3270 */
static void C_ccall f_3294(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3294,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}

/* def-id380 in k3270 */
static void C_fcall f_3283(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3283,NULL,4,t0,t1,t2,t3);}
/* def-limit381392 */
t4=((C_word*)t0)[2];
f_3278(t4,t1,t2,t3,C_SCHEME_END_OF_LIST);}

/* def-limit381 in k3270 */
static void C_fcall f_3278(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3278,NULL,5,t0,t1,t2,t3,t4);}
/* body376387 */
t5=((C_word*)t0)[2];
f_3273(t5,t1,t2,t3,t4,C_SCHEME_FALSE);}

/* body376 in k3270 */
static void C_fcall f_3273(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3273,NULL,6,t0,t1,t2,t3,t4,t5);}
/* posix-common.scm:356: ##sys#find-files */
f_3064(t1,((C_word*)t0)[2],t2,t3,t4,t5,C_SCHEME_TRUE,C_SCHEME_FALSE,lf[49]);}

/* ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_3064(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3064,NULL,9,t1,t2,t3,t4,t5,t6,t7,t8,t9);}
t10=C_i_check_string_2(t2,t9);
t11=C_fix(0);
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3071,a[2]=t3,a[3]=t2,a[4]=t8,a[5]=t5,a[6]=t1,a[7]=t12,a[8]=t4,a[9]=t7,tmp=(C_word)a,a+=10,tmp);
t14=t6;
if(C_truep(t14)){
if(C_truep(C_fixnump(t6))){
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3256,a[2]=t6,a[3]=t12,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp);
t16=t13;
f_3071(t16,t15);}
else{
t15=t6;
t16=t13;
f_3071(t16,t15);}}
else{
t15=t13;
f_3071(t15,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3248,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));}}

/* f_3248 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3248(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3248,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_3256 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3256(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3256,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_lessp(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]));}

/* k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_3071(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3071,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3074,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=C_i_stringp(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3233,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_3233(2,t5,t3);}
else{
/* posix-common.scm:326: irregex? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[71]+1)))(3,*((C_word*)lf[71]+1),t4,((C_word*)t0)[2]);}}

/* k3231 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3233,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3236,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:327: irregex */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(3,*((C_word*)lf[70]+1),t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_3074(t2,((C_word*)t0)[2]);}}

/* k3234 in k3231 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3236,2,t0,t1);}
t2=((C_word*)t0)[2];
f_3074(t2,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3237,a[2]=t1,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp));}

/* f_3237 in k3234 in k3231 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3237(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3237,3,t0,t1,t2);}
/* posix-common.scm:328: irregex-match */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[58]+1)))(4,*((C_word*)lf[58]+1),t1,((C_word*)t0)[2],t2);}

/* k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_3074(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3074,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3081,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3223,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posix-common.scm:330: make-pathname */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(4,*((C_word*)lf[56]+1),t3,((C_word*)t0)[2],lf[68]);}
else{
/* posix-common.scm:330: make-pathname */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(4,*((C_word*)lf[56]+1),t3,((C_word*)t0)[2],lf[69]);}}

/* k3221 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:330: glob */
t2=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3081,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3083,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t3,a[8]=((C_word)li32),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_3083(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_3083(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3083,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=t5,a[10]=t1,a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* posix-common.scm:336: directory? */
t7=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}}

/* k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3102,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* posix-common.scm:337: pathname-file */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[67]+1)))(3,*((C_word*)lf[67]+1),t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3209,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:346: pproc */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[5]);}}

/* k3207 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3209,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3216,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:346: action */
t3=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* posix-common.scm:347: loop */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3083(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k3214 in k3207 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:346: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3083(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3201 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3203,2,t0,t1);}
if(C_truep((C_truep(C_i_equalp(t1,lf[63]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t1,lf[64]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posix-common.scm:337: loop */
t2=((C_word*)((C_word*)t0)[11])[1];
f_3083(t2,((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* posix-common.scm:338: symbolic-link? */
t3=*((C_word*)lf[34]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}}

/* k3194 in k3201 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3196,2,t0,t1);}
t2=(C_truep(t1)?C_i_not(((C_word*)t0)[11]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3124,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3127,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:339: pproc */
t5=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[6]);}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3136,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:340: lproc */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[6]);}}

/* k3134 in k3194 in k3201 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3136(C_word c,C_word t0,C_word t1){
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
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3136,2,t0,t1);}
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[9])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3146,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3148,a[2]=t4,a[3]=((C_word*)t0)[9],a[4]=t6,a[5]=((C_word)li29),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3153,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word)li30),tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3177,a[2]=t6,a[3]=((C_word*)t0)[9],a[4]=t4,a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp);
/* ##sys#dynamic-wind */
t11=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t7,t8,t9,t10);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3187,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3190,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:345: pproc */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}}

/* k3188 in k3134 in k3194 in k3201 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:345: action */
t2=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[5];
/* posix-common.scm:345: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3083(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* k3185 in k3134 in k3194 in k3201 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:345: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3083(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a3176 in k3134 in k3194 in k3201 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3177,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a3152 in k3134 in k3194 in k3201 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3153,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3175,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:343: make-pathname */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(4,*((C_word*)lf[56]+1),t3,((C_word*)t0)[4],lf[65]);}

/* k3173 in a3152 in k3134 in k3194 in k3201 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:343: glob */
t2=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3159 in a3152 in k3134 in k3194 in k3201 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3161,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3165,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3168,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:344: pproc */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}

/* k3166 in k3159 in a3152 in k3134 in k3194 in k3201 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:344: action */
t2=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[5];
/* posix-common.scm:343: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3083(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* k3163 in k3159 in a3152 in k3134 in k3194 in k3201 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:343: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3083(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a3147 in k3134 in k3194 in k3201 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3148,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k3144 in k3134 in k3194 in k3201 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:341: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3083(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3125 in k3194 in k3201 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:339: action */
t2=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[5];
/* posix-common.scm:339: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3083(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* k3122 in k3194 in k3201 in k3100 in loop in k3079 in k3072 in k3069 in ##sys#find-files in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_3124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:339: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3083(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_2955 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2955(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_2955r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2955r(t0,t1,t2);}}

static void C_ccall f_2955r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2961,a[2]=t4,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2961(t6,t1,t2);}

/* conc-loop */
static void C_fcall f_2961(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2961,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2976,a[2]=t3,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2982,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li26),tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* a2981 in conc-loop */
static void C_ccall f_2982(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2982,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2986,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3058,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t7=t3;
/* posix-common.scm:304: make-pathname */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(5,*((C_word*)lf[56]+1),t6,C_SCHEME_FALSE,t7,t4);}
else{
/* posix-common.scm:304: make-pathname */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(5,*((C_word*)lf[56]+1),t6,C_SCHEME_FALSE,lf[61],t4);}}

/* k3056 in a2981 in conc-loop */
static void C_ccall f_3058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:304: ##sys#glob->regexp */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(3,*((C_word*)lf[60]+1),((C_word*)t0)[2],t1);}

/* k2984 in a2981 in conc-loop */
static void C_ccall f_2986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2986,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2993,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[3];
/* posix-common.scm:305: directory */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_TRUE);}
else{
/* posix-common.scm:305: directory */
t3=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[59],C_SCHEME_TRUE);}}

/* k2991 in k2984 in a2981 in conc-loop */
static void C_ccall f_2993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2993,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2995,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li25),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2995(t5,((C_word*)t0)[2],t1);}

/* loop in k2991 in k2984 in a2981 in conc-loop */
static void C_fcall f_2995(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2995,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[6]);
/* posix-common.scm:306: conc-loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2961(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3012,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* posix-common.scm:307: irregex-match */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[58]+1)))(4,*((C_word*)lf[58]+1),t3,((C_word*)t0)[2],t4);}}

/* k3010 in loop in k2991 in k2984 in a2981 in conc-loop */
static void C_ccall f_3012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3012,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3016,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li24),tmp=(C_word)a,a+=6,tmp);
/* g309310 */
t3=t2;
f_3016(t3,((C_word*)t0)[2],t1);}
else{
t2=C_i_cdr(((C_word*)t0)[5]);
/* posix-common.scm:312: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2995(t3,((C_word*)t0)[2],t2);}}

/* g309 in k3010 in loop in k2991 in k2984 in a2981 in conc-loop */
static void C_fcall f_3016(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3016,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3024,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3036,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:310: irregex-match-substring */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(3,*((C_word*)lf[57]+1),t4,t2);}

/* k3034 in g309 in k3010 in loop in k2991 in k2984 in a2981 in conc-loop */
static void C_ccall f_3036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:310: make-pathname */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(4,*((C_word*)lf[56]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3022 in g309 in k3010 in loop in k2991 in k2984 in a2981 in conc-loop */
static void C_ccall f_3024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3024,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3028,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* posix-common.scm:311: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2995(t4,t2,t3);}

/* k3026 in k3022 in g309 in k3010 in loop in k2991 in k2984 in a2981 in conc-loop */
static void C_ccall f_3028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3028,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* a2975 in conc-loop */
static void C_ccall f_2976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2976,2,t0,t1);}
/* posix-common.scm:303: decompose-pathname */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[55]+1)))(3,*((C_word*)lf[55]+1),t1,((C_word*)t0)[2]);}

/* f_2808 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2808(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2808r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2808r(t0,t1,t2);}}

static void C_ccall f_2808r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2812,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:267: current-directory */
t4=*((C_word*)lf[40]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=t3;
f_2812(2,t4,C_i_car(t2));}}

/* k2810 */
static void C_ccall f_2812(C_word c,C_word t0,C_word t1){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2812,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[3]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[3]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
if(C_truep(C_i_nullp(t7))){
t8=C_i_check_string_2(t1,lf[27]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2833,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:269: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[44]+1)))(3,*((C_word*)lf[44]+1),t9,C_fix(256));}
else{
/* ##sys#error */
t8=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,((C_word*)t0)[2],lf[0],t7);}}

/* k2831 in k2810 */
static void C_ccall f_2833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2833,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2836,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:270: ##sys#make-pointer */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[53]+1)))(2,*((C_word*)lf[53]+1),t2);}

/* k2834 in k2831 in k2810 */
static void C_ccall f_2836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2836,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2839,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:271: ##sys#make-pointer */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[53]+1)))(2,*((C_word*)lf[53]+1),t2);}

/* k2837 in k2834 in k2831 in k2810 */
static void C_ccall f_2839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2839,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2843,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2923,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:274: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t3,((C_word*)t0)[4]);}

/* k2921 in k2837 in k2834 in k2831 in k2810 */
static void C_ccall f_2923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:274: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,lf[27]);}

/* k2841 in k2837 in k2834 in k2831 in k2810 */
static void C_ccall f_2843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2843,2,t0,t1);}
t2=C_opendir(t1,((C_word*)t0)[7]);
if(C_truep(C_null_pointerp(((C_word*)t0)[7]))){
/* posix-common.scm:276: posix-error */
t3=lf[3];
f_2371(6,t3,((C_word*)t0)[6],lf[10],lf[27],lf[52],((C_word*)t0)[5]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2857,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word)li21),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_2857(t6,((C_word*)t0)[6]);}}

/* loop in k2841 in k2837 in k2834 in k2831 in k2810 */
static void C_fcall f_2857(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2857,NULL,2,t0,t1);}
t2=C_readdir(((C_word*)t0)[6],((C_word*)t0)[5]);
if(C_truep(C_null_pointerp(((C_word*)t0)[5]))){
t3=C_closedir(((C_word*)t0)[6]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t3=C_foundfile(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2867,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:284: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[42]+1)))(5,*((C_word*)lf[42]+1),t4,((C_word*)t0)[4],C_fix(0),t3);}}

/* k2865 in loop in k2841 in k2837 in k2834 in k2831 in k2810 */
static void C_ccall f_2867(C_word c,C_word t0,C_word t1){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2867,2,t0,t1);}
t2=C_i_string_ref(t1,C_fix(0));
t3=C_fixnum_greaterp(((C_word*)t0)[5],C_fix(1));
t4=(C_truep(t3)?C_i_string_ref(t1,C_fix(1)):C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2879,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(C_make_character(46),t2);
if(C_truep(t6)){
t7=C_i_not(t4);
if(C_truep(t7)){
t8=t5;
f_2879(t8,t7);}
else{
t8=C_eqp(C_make_character(46),t4);
if(C_truep(t8)){
t9=C_eqp(C_fix(2),((C_word*)t0)[5]);
t10=t5;
f_2879(t10,(C_truep(t9)?t9:C_i_not(((C_word*)t0)[2])));}
else{
t9=t5;
f_2879(t9,C_i_not(((C_word*)t0)[2]));}}}
else{
t7=t5;
f_2879(t7,C_SCHEME_FALSE);}}

/* k2877 in k2865 in loop in k2841 in k2837 in k2834 in k2831 in k2810 */
static void C_fcall f_2879(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2879,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posix-common.scm:291: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2857(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2889,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:292: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2857(t3,t2);}}

/* k2887 in k2877 in k2865 in loop in k2841 in k2837 in k2834 in k2831 in k2810 */
static void C_ccall f_2889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2889,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* f_2704 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2704(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2704r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2704r(t0,t1,t2,t3);}}

static void C_ccall f_2704r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2708,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_2708(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_2708(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2706 */
static void C_ccall f_2708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2710,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
t3=C_i_check_string_2(((C_word*)t0)[3],lf[45]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2729,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:250: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t4,((C_word*)t0)[3]);}

/* k2727 in k2706 */
static void C_ccall f_2729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2729,2,t0,t1);}
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2735,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:252: find-files */
t3=*((C_word*)lf[49]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,t1,lf[50],C_SCHEME_TRUE,lf[51],C_SCHEME_FALSE);}
else{
/* posix-common.scm:264: rmdir */
f_2710(((C_word*)t0)[2],t1);}}

/* k2733 in k2727 in k2706 */
static void C_ccall f_2735(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2735,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2736,a[2]=((C_word*)t0)[4],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(t1,lf[48]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2763,a[2]=t2,a[3]=t6,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2763(t8,t4,t1);}

/* for-each-loop219 in k2733 in k2727 in k2706 */
static void C_fcall f_2763(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2763,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2773,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g220226 */
t5=((C_word*)t0)[2];
f_2736(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2771 in for-each-loop219 in k2733 in k2727 in k2706 */
static void C_ccall f_2773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2763(t3,((C_word*)t0)[2],t2);}

/* k2756 in k2733 in k2727 in k2706 */
static void C_ccall f_2758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:263: rmdir */
f_2710(((C_word*)t0)[3],((C_word*)t0)[2]);}

/* g220 in k2733 in k2727 in k2706 */
static void C_fcall f_2736(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2736,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2746,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:258: symbolic-link? */
t4=*((C_word*)lf[34]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2744 in g220 in k2733 in k2727 in k2706 */
static void C_ccall f_2746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2746,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[47]+1);
/* g229230 */
t3=t2;
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2752,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:259: directory? */
t3=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}

/* k2750 in k2744 in g220 in k2733 in k2727 in k2706 */
static void C_ccall f_2752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* g229230 */
f_2710(((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=*((C_word*)lf[47]+1);
/* g229230 */
t3=t2;
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* rmdir in k2706 */
static void C_fcall f_2710(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2710,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2714,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:246: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t3,t2);}

/* k2712 in rmdir in k2706 */
static void C_ccall f_2714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(C_fix(0),C_rmdir(t1));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* posix-common.scm:248: posix-error */
t3=lf[3];
f_2371(6,t3,((C_word*)t0)[3],lf[10],lf[45],lf[46],((C_word*)t0)[2]);}}

/* f_2658 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2658(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_2658r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2658r(t0,t1,t2);}}

static void C_ccall f_2658r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2662,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_2662(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_2662(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k2660 */
static void C_ccall f_2662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2662,2,t0,t1);}
if(C_truep(t1)){
/* posix-common.scm:232: change-directory */
t2=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2671,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:233: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[44]+1)))(3,*((C_word*)lf[44]+1),t2,C_fix(1024));}}

/* k2669 in k2660 */
static void C_ccall f_2671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2671,2,t0,t1);}
t2=C_curdir(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2674,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:236: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t3);}

/* k2672 in k2669 in k2660 */
static void C_ccall f_2674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* posix-common.scm:238: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[42]+1)))(5,*((C_word*)lf[42]+1),((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),((C_word*)t0)[4]);}
else{
/* posix-common.scm:239: ##sys#signal-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(5,*((C_word*)lf[4]+1),((C_word*)t0)[3],lf[10],lf[40],lf[43]);}}

/* f_2648 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2648(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2648,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2656,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:224: file-type */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2654 */
static void C_ccall f_2656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[27],t1));}

/* f_2638 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2638(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2638,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2646,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:221: file-type */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2644 */
static void C_ccall f_2646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[31],t1));}

/* f_2628 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2628(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2628,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2636,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:218: file-type */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2634 */
static void C_ccall f_2636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[30],t1));}

/* f_2618 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2618(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2618,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2626,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:215: file-type */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2624 */
static void C_ccall f_2626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[28],t1));}

/* f_2608 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2608(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2608,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2616,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:212: file-type */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2614 */
static void C_ccall f_2616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[29],t1));}

/* f_2598 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2598(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2598,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2606,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:209: file-type */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_TRUE,C_SCHEME_FALSE);}

/* k2604 */
static void C_ccall f_2606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[26],t1));}

/* f_2588 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2588(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2588,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2596,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:206: file-type */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2594 */
static void C_ccall f_2596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[32],t1));}

/* f_2498 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2498(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_2498r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2498r(t0,t1,t2,t3);}}

static void C_ccall f_2498r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(3);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_TRUE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
if(C_truep(C_i_nullp(t11))){
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2523,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:195: ##sys#stat */
f_2389(t12,t2,t5,t9,lf[25]);}
else{
/* ##sys#error */
t12=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}

/* k2521 */
static void C_ccall f_2523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_type);
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFLNK)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[26]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFDIR)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[27]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFCHR)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[28]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFBLK)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[29]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFIFO)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[30]);}
else{
t3=C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFSOCK));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?lf[31]:lf[32]));}}}}}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_2492 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2492(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2492,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2496,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:192: ##sys#stat */
f_2389(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[24]);}

/* k2494 */
static void C_ccall f_2496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2496,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_double_to_num(&a,C_statbuf.st_size));}

/* f_2486 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2486(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2486,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2490,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:191: ##sys#stat */
f_2389(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[23]);}

/* k2488 */
static void C_ccall f_2490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode));}

/* f_2480 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2480(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2480,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2484,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:190: ##sys#stat */
f_2389(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[22]);}

/* k2482 */
static void C_ccall f_2484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid));}

/* f_2474 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2474(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2474,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2478,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:189: ##sys#stat */
f_2389(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[21]);}

/* k2476 */
static void C_ccall f_2478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2478,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_ctime));}

/* f_2468 in k2464 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2468(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2468,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2472,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:188: ##sys#stat */
f_2389(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[20]);}

/* k2470 */
static void C_ccall f_2472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2472,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_atime));}

/* f_2433 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2433(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2433r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2433r(t0,t1,t2,t3);}}

static void C_ccall f_2433r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2437,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_2437(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_2437(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2435 */
static void C_ccall f_2437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2437,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2440,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:167: ##sys#stat */
f_2389(t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE,lf[17]);}

/* k2438 in k2435 */
static void C_ccall f_2440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2440,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_a_double_to_num(&a,C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blksize),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blocks)));}

/* ##sys#stat in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_fcall f_2389(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2389,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2393,a[2]=t2,a[3]=t5,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t7=t6;
f_2393(2,t7,C_fstat(t2));}
else{
if(C_truep(C_i_stringp(t2))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2417,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2424,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2428,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:152: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t9,t2);}
else{
/* posix-common.scm:158: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(6,*((C_word*)lf[4]+1),t6,lf[15],t5,lf[16],t2);}}}

/* k2426 in ##sys#stat in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:151: ##sys#platform-fixup-pathname */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),((C_word*)t0)[2],t1);}

/* k2422 in ##sys#stat in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:150: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2415 in ##sys#stat in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_2393(2,t2,(C_truep(((C_word*)t0)[2])?C_lstat(t1):C_stat(t1)));}

/* k2391 in ##sys#stat in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
if(C_truep(((C_word*)t0)[5])){
/* posix-common.scm:162: posix-error */
t2=lf[3];
f_2371(6,t2,((C_word*)t0)[4],lf[10],((C_word*)t0)[3],lf[11],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}}

/* posix-error in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2371(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_2371r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2371r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2371r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2375,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t3,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:110: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t6);}

/* k2373 in posix-error in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2382,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2386,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
t6=stub65(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k2384 in k2373 in posix-error in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:111: string-append */
t2=((C_word*)t0)[4];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[5],t1);}

/* k2380 in k2373 in posix-error in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 */
static void C_ccall f_2382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(7,0,((C_word*)t0)[5],*((C_word*)lf[4]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[601] = {
{"toplevel:posixunix_2escm",(void*)C_posix_toplevel},
{"f_2344:posixunix_2escm",(void*)f_2344},
{"f_2347:posixunix_2escm",(void*)f_2347},
{"f_2350:posixunix_2escm",(void*)f_2350},
{"f_2353:posixunix_2escm",(void*)f_2353},
{"f_2356:posixunix_2escm",(void*)f_2356},
{"f_2359:posixunix_2escm",(void*)f_2359},
{"f_8526:posixunix_2escm",(void*)f_8526},
{"f_8559:posixunix_2escm",(void*)f_8559},
{"f_8536:posixunix_2escm",(void*)f_8536},
{"f_8546:posixunix_2escm",(void*)f_8546},
{"f_8520:posixunix_2escm",(void*)f_8520},
{"f_8524:posixunix_2escm",(void*)f_8524},
{"f_2466:posixunix_2escm",(void*)f_2466},
{"f_8514:posixunix_2escm",(void*)f_8514},
{"f_8480:posixunix_2escm",(void*)f_8480},
{"f_8484:posixunix_2escm",(void*)f_8484},
{"f_3445:posixunix_2escm",(void*)f_3445},
{"f_8439:posixunix_2escm",(void*)f_8439},
{"f_8455:posixunix_2escm",(void*)f_8455},
{"f_8443:posixunix_2escm",(void*)f_8443},
{"f_8446:posixunix_2escm",(void*)f_8446},
{"f_4341:posixunix_2escm",(void*)f_4341},
{"f_4752:posixunix_2escm",(void*)f_4752},
{"f_8433:posixunix_2escm",(void*)f_8433},
{"f_4912:posixunix_2escm",(void*)f_4912},
{"f_8418:posixunix_2escm",(void*)f_8418},
{"f_8428:posixunix_2escm",(void*)f_8428},
{"f_8415:posixunix_2escm",(void*)f_8415},
{"f_4954:posixunix_2escm",(void*)f_4954},
{"f_8400:posixunix_2escm",(void*)f_8400},
{"f_8410:posixunix_2escm",(void*)f_8410},
{"f_8397:posixunix_2escm",(void*)f_8397},
{"f_4958:posixunix_2escm",(void*)f_4958},
{"f_8382:posixunix_2escm",(void*)f_8382},
{"f_8392:posixunix_2escm",(void*)f_8392},
{"f_8379:posixunix_2escm",(void*)f_8379},
{"f_4962:posixunix_2escm",(void*)f_4962},
{"f_8364:posixunix_2escm",(void*)f_8364},
{"f_8374:posixunix_2escm",(void*)f_8374},
{"f_8361:posixunix_2escm",(void*)f_8361},
{"f_4966:posixunix_2escm",(void*)f_4966},
{"f_8340:posixunix_2escm",(void*)f_8340},
{"f_8356:posixunix_2escm",(void*)f_8356},
{"f_8322:posixunix_2escm",(void*)f_8322},
{"f_8335:posixunix_2escm",(void*)f_8335},
{"f_8329:posixunix_2escm",(void*)f_8329},
{"f_5484:posixunix_2escm",(void*)f_5484},
{"f_5523:posixunix_2escm",(void*)f_5523},
{"f_8299:posixunix_2escm",(void*)f_8299},
{"f_8291:posixunix_2escm",(void*)f_8291},
{"f_8309:posixunix_2escm",(void*)f_8309},
{"f_8235:posixunix_2escm",(void*)f_8235},
{"f_8184:posixunix_2escm",(void*)f_8184},
{"f_8098:posixunix_2escm",(void*)f_8098},
{"f_8178:posixunix_2escm",(void*)f_8178},
{"f_8182:posixunix_2escm",(void*)f_8182},
{"f_8144:posixunix_2escm",(void*)f_8144},
{"f_8147:posixunix_2escm",(void*)f_8147},
{"f_8158:posixunix_2escm",(void*)f_8158},
{"f_8152:posixunix_2escm",(void*)f_8152},
{"f_8100:posixunix_2escm",(void*)f_8100},
{"f_8117:posixunix_2escm",(void*)f_8117},
{"f_8127:posixunix_2escm",(void*)f_8127},
{"f_8105:posixunix_2escm",(void*)f_8105},
{"f_8042:posixunix_2escm",(void*)f_8042},
{"f_8054:posixunix_2escm",(void*)f_8054},
{"f_8085:posixunix_2escm",(void*)f_8085},
{"f_8065:posixunix_2escm",(void*)f_8065},
{"f_8081:posixunix_2escm",(void*)f_8081},
{"f_8069:posixunix_2escm",(void*)f_8069},
{"f_8077:posixunix_2escm",(void*)f_8077},
{"f_8073:posixunix_2escm",(void*)f_8073},
{"f_8048:posixunix_2escm",(void*)f_8048},
{"f_8031:posixunix_2escm",(void*)f_8031},
{"f_8035:posixunix_2escm",(void*)f_8035},
{"f_8020:posixunix_2escm",(void*)f_8020},
{"f_8024:posixunix_2escm",(void*)f_8024},
{"f_7975:posixunix_2escm",(void*)f_7975},
{"f_7979:posixunix_2escm",(void*)f_7979},
{"f_7982:posixunix_2escm",(void*)f_7982},
{"f_7985:posixunix_2escm",(void*)f_7985},
{"f_7992:posixunix_2escm",(void*)f_7992},
{"f_7998:posixunix_2escm",(void*)f_7998},
{"f_8002:posixunix_2escm",(void*)f_8002},
{"f_8005:posixunix_2escm",(void*)f_8005},
{"f_8008:posixunix_2escm",(void*)f_8008},
{"f_7996:posixunix_2escm",(void*)f_7996},
{"f_7942:posixunix_2escm",(void*)f_7942},
{"f_7955:posixunix_2escm",(void*)f_7955},
{"f_7867:posixunix_2escm",(void*)f_7867},
{"f_7928:posixunix_2escm",(void*)f_7928},
{"f_7941:posixunix_2escm",(void*)f_7941},
{"f_7908:posixunix_2escm",(void*)f_7908},
{"f_7923:posixunix_2escm",(void*)f_7923},
{"f_7917:posixunix_2escm",(void*)f_7917},
{"f_7871:posixunix_2escm",(void*)f_7871},
{"f_7873:posixunix_2escm",(void*)f_7873},
{"f_7894:posixunix_2escm",(void*)f_7894},
{"f_7888:posixunix_2escm",(void*)f_7888},
{"f_7815:posixunix_2escm",(void*)f_7815},
{"f_7822:posixunix_2escm",(void*)f_7822},
{"f_7841:posixunix_2escm",(void*)f_7841},
{"f_7845:posixunix_2escm",(void*)f_7845},
{"f_7809:posixunix_2escm",(void*)f_7809},
{"f_7800:posixunix_2escm",(void*)f_7800},
{"f_7804:posixunix_2escm",(void*)f_7804},
{"f_7773:posixunix_2escm",(void*)f_7773},
{"f_7766:posixunix_2escm",(void*)f_7766},
{"f_7763:posixunix_2escm",(void*)f_7763},
{"f_7760:posixunix_2escm",(void*)f_7760},
{"f_7682:posixunix_2escm",(void*)f_7682},
{"f_7718:posixunix_2escm",(void*)f_7718},
{"f_7712:posixunix_2escm",(void*)f_7712},
{"f_7665:posixunix_2escm",(void*)f_7665},
{"f_7492:posixunix_2escm",(void*)f_7492},
{"f_7520:posixunix_2escm",(void*)f_7520},
{"f_7528:posixunix_2escm",(void*)f_7528},
{"f_7574:posixunix_2escm",(void*)f_7574},
{"f_7541:posixunix_2escm",(void*)f_7541},
{"f_7566:posixunix_2escm",(void*)f_7566},
{"f_7544:posixunix_2escm",(void*)f_7544},
{"f_7473:posixunix_2escm",(void*)f_7473},
{"f_7454:posixunix_2escm",(void*)f_7454},
{"f_7412:posixunix_2escm",(void*)f_7412},
{"f_7437:posixunix_2escm",(void*)f_7437},
{"f_7398:posixunix_2escm",(void*)f_7398},
{"f_7402:posixunix_2escm",(void*)f_7402},
{"f_7405:posixunix_2escm",(void*)f_7405},
{"f_7363:posixunix_2escm",(void*)f_7363},
{"f_7367:posixunix_2escm",(void*)f_7367},
{"f_7387:posixunix_2escm",(void*)f_7387},
{"f_7391:posixunix_2escm",(void*)f_7391},
{"f_7340:posixunix_2escm",(void*)f_7340},
{"f_7344:posixunix_2escm",(void*)f_7344},
{"f_7308:posixunix_2escm",(void*)f_7308},
{"f_7312:posixunix_2escm",(void*)f_7312},
{"f_7289:posixunix_2escm",(void*)f_7289},
{"f_7293:posixunix_2escm",(void*)f_7293},
{"f_7296:posixunix_2escm",(void*)f_7296},
{"f_7230:posixunix_2escm",(void*)f_7230},
{"f_7234:posixunix_2escm",(void*)f_7234},
{"f_7240:posixunix_2escm",(void*)f_7240},
{"f_7249:posixunix_2escm",(void*)f_7249},
{"f_7223:posixunix_2escm",(void*)f_7223},
{"f_7207:posixunix_2escm",(void*)f_7207},
{"f_7195:posixunix_2escm",(void*)f_7195},
{"f_7180:posixunix_2escm",(void*)f_7180},
{"f_7184:posixunix_2escm",(void*)f_7184},
{"f_7134:posixunix_2escm",(void*)f_7134},
{"f_7138:posixunix_2escm",(void*)f_7138},
{"f_7151:posixunix_2escm",(void*)f_7151},
{"f_7155:posixunix_2escm",(void*)f_7155},
{"f_7065:posixunix_2escm",(void*)f_7065},
{"f_7069:posixunix_2escm",(void*)f_7069},
{"f_7072:posixunix_2escm",(void*)f_7072},
{"f_7094:posixunix_2escm",(void*)f_7094},
{"f_7091:posixunix_2escm",(void*)f_7091},
{"f_7081:posixunix_2escm",(void*)f_7081},
{"f_7049:posixunix_2escm",(void*)f_7049},
{"f_7040:posixunix_2escm",(void*)f_7040},
{"f_7005:posixunix_2escm",(void*)f_7005},
{"f_6943:posixunix_2escm",(void*)f_6943},
{"f_6947:posixunix_2escm",(void*)f_6947},
{"f_6953:posixunix_2escm",(void*)f_6953},
{"f_6972:posixunix_2escm",(void*)f_6972},
{"f_6959:posixunix_2escm",(void*)f_6959},
{"f_6840:posixunix_2escm",(void*)f_6840},
{"f_6846:posixunix_2escm",(void*)f_6846},
{"f_6850:posixunix_2escm",(void*)f_6850},
{"f_6858:posixunix_2escm",(void*)f_6858},
{"f_6884:posixunix_2escm",(void*)f_6884},
{"f_6888:posixunix_2escm",(void*)f_6888},
{"f_6876:posixunix_2escm",(void*)f_6876},
{"f_6820:posixunix_2escm",(void*)f_6820},
{"f_6828:posixunix_2escm",(void*)f_6828},
{"f_6803:posixunix_2escm",(void*)f_6803},
{"f_6814:posixunix_2escm",(void*)f_6814},
{"f_6818:posixunix_2escm",(void*)f_6818},
{"f_6777:posixunix_2escm",(void*)f_6777},
{"f_6801:posixunix_2escm",(void*)f_6801},
{"f_6784:posixunix_2escm",(void*)f_6784},
{"f_6734:posixunix_2escm",(void*)f_6734},
{"f_6741:posixunix_2escm",(void*)f_6741},
{"f_6762:posixunix_2escm",(void*)f_6762},
{"f_6758:posixunix_2escm",(void*)f_6758},
{"f_6706:posixunix_2escm",(void*)f_6706},
{"f_6679:posixunix_2escm",(void*)f_6679},
{"f_6683:posixunix_2escm",(void*)f_6683},
{"f_6664:posixunix_2escm",(void*)f_6664},
{"f_6668:posixunix_2escm",(void*)f_6668},
{"f_6649:posixunix_2escm",(void*)f_6649},
{"f_6653:posixunix_2escm",(void*)f_6653},
{"f_6631:posixunix_2escm",(void*)f_6631},
{"f_6557:posixunix_2escm",(void*)f_6557},
{"f_6579:posixunix_2escm",(void*)f_6579},
{"f_6585:posixunix_2escm",(void*)f_6585},
{"f_6518:posixunix_2escm",(void*)f_6518},
{"f_6546:posixunix_2escm",(void*)f_6546},
{"f_6542:posixunix_2escm",(void*)f_6542},
{"f_6535:posixunix_2escm",(void*)f_6535},
{"f_6528:posixunix_2escm",(void*)f_6528},
{"f_6270:posixunix_2escm",(void*)f_6270},
{"f_6298:posixunix_2escm",(void*)f_6298},
{"f_6404:posixunix_2escm",(void*)f_6404},
{"f_6405:posixunix_2escm",(void*)f_6405},
{"f_6422:posixunix_2escm",(void*)f_6422},
{"f_6432:posixunix_2escm",(void*)f_6432},
{"f_6390:posixunix_2escm",(void*)f_6390},
{"f_6346:posixunix_2escm",(void*)f_6346},
{"f_6382:posixunix_2escm",(void*)f_6382},
{"f_6361:posixunix_2escm",(void*)f_6361},
{"f_6371:posixunix_2escm",(void*)f_6371},
{"f_6355:posixunix_2escm",(void*)f_6355},
{"f_6350:posixunix_2escm",(void*)f_6350},
{"f_6353:posixunix_2escm",(void*)f_6353},
{"f_6300:posixunix_2escm",(void*)f_6300},
{"f_6335:posixunix_2escm",(void*)f_6335},
{"f_6316:posixunix_2escm",(void*)f_6316},
{"f_5788:posixunix_2escm",(void*)f_5788},
{"f_5822:posixunix_2escm",(void*)f_5822},
{"f_5828:posixunix_2escm",(void*)f_5828},
{"f_6191:posixunix_2escm",(void*)f_6191},
{"f_6201:posixunix_2escm",(void*)f_6201},
{"f_6078:posixunix_2escm",(void*)f_6078},
{"f_6084:posixunix_2escm",(void*)f_6084},
{"f_6180:posixunix_2escm",(void*)f_6180},
{"f_6170:posixunix_2escm",(void*)f_6170},
{"f_6164:posixunix_2escm",(void*)f_6164},
{"f_6086:posixunix_2escm",(void*)f_6086},
{"f_6136:posixunix_2escm",(void*)f_6136},
{"f_6093:posixunix_2escm",(void*)f_6093},
{"f_6103:posixunix_2escm",(void*)f_6103},
{"f_6002:posixunix_2escm",(void*)f_6002},
{"f_6010:posixunix_2escm",(void*)f_6010},
{"f_6012:posixunix_2escm",(void*)f_6012},
{"f_6060:posixunix_2escm",(void*)f_6060},
{"f_5993:posixunix_2escm",(void*)f_5993},
{"f_5997:posixunix_2escm",(void*)f_5997},
{"f_5972:posixunix_2escm",(void*)f_5972},
{"f_5982:posixunix_2escm",(void*)f_5982},
{"f_5960:posixunix_2escm",(void*)f_5960},
{"f_5947:posixunix_2escm",(void*)f_5947},
{"f_5951:posixunix_2escm",(void*)f_5951},
{"f_5942:posixunix_2escm",(void*)f_5942},
{"f_5945:posixunix_2escm",(void*)f_5945},
{"f_5860:posixunix_2escm",(void*)f_5860},
{"f_5872:posixunix_2escm",(void*)f_5872},
{"f_5909:posixunix_2escm",(void*)f_5909},
{"f_5918:posixunix_2escm",(void*)f_5918},
{"f_5912:posixunix_2escm",(void*)f_5912},
{"f_5888:posixunix_2escm",(void*)f_5888},
{"f_5891:posixunix_2escm",(void*)f_5891},
{"f_5852:posixunix_2escm",(void*)f_5852},
{"f_5829:posixunix_2escm",(void*)f_5829},
{"f_5833:posixunix_2escm",(void*)f_5833},
{"f_5761:posixunix_2escm",(void*)f_5761},
{"f_5768:posixunix_2escm",(void*)f_5768},
{"f_5771:posixunix_2escm",(void*)f_5771},
{"f_5716:posixunix_2escm",(void*)f_5716},
{"f_5720:posixunix_2escm",(void*)f_5720},
{"f_5755:posixunix_2escm",(void*)f_5755},
{"f_5738:posixunix_2escm",(void*)f_5738},
{"f_5702:posixunix_2escm",(void*)f_5702},
{"f_5714:posixunix_2escm",(void*)f_5714},
{"f_5688:posixunix_2escm",(void*)f_5688},
{"f_5700:posixunix_2escm",(void*)f_5700},
{"f_5673:posixunix_2escm",(void*)f_5673},
{"f_5686:posixunix_2escm",(void*)f_5686},
{"f_5636:posixunix_2escm",(void*)f_5636},
{"f_5644:posixunix_2escm",(void*)f_5644},
{"f_5611:posixunix_2escm",(void*)f_5611},
{"f_5592:posixunix_2escm",(void*)f_5592},
{"f_5596:posixunix_2escm",(void*)f_5596},
{"f_5624:posixunix_2escm",(void*)f_5624},
{"f_5524:posixunix_2escm",(void*)f_5524},
{"f_5528:posixunix_2escm",(void*)f_5528},
{"f_5566:posixunix_2escm",(void*)f_5566},
{"f_5535:posixunix_2escm",(void*)f_5535},
{"f_5550:posixunix_2escm",(void*)f_5550},
{"f_5556:posixunix_2escm",(void*)f_5556},
{"f_5486:posixunix_2escm",(void*)f_5486},
{"f_5519:posixunix_2escm",(void*)f_5519},
{"f_5507:posixunix_2escm",(void*)f_5507},
{"f_5515:posixunix_2escm",(void*)f_5515},
{"f_5511:posixunix_2escm",(void*)f_5511},
{"f_5467:posixunix_2escm",(void*)f_5467},
{"f_5477:posixunix_2escm",(void*)f_5477},
{"f_5471:posixunix_2escm",(void*)f_5471},
{"f_5461:posixunix_2escm",(void*)f_5461},
{"f_5455:posixunix_2escm",(void*)f_5455},
{"f_5449:posixunix_2escm",(void*)f_5449},
{"f_5425:posixunix_2escm",(void*)f_5425},
{"f_5447:posixunix_2escm",(void*)f_5447},
{"f_5443:posixunix_2escm",(void*)f_5443},
{"f_5435:posixunix_2escm",(void*)f_5435},
{"f_5395:posixunix_2escm",(void*)f_5395},
{"f_5423:posixunix_2escm",(void*)f_5423},
{"f_5419:posixunix_2escm",(void*)f_5419},
{"f_5368:posixunix_2escm",(void*)f_5368},
{"f_5393:posixunix_2escm",(void*)f_5393},
{"f_5389:posixunix_2escm",(void*)f_5389},
{"f_5304:posixunix_2escm",(void*)f_5304},
{"f_5292:posixunix_2escm",(void*)f_5292},
{"f_5320:posixunix_2escm",(void*)f_5320},
{"f_5230:posixunix_2escm",(void*)f_5230},
{"f_5234:posixunix_2escm",(void*)f_5234},
{"f_5239:posixunix_2escm",(void*)f_5239},
{"f_5255:posixunix_2escm",(void*)f_5255},
{"f_5167:posixunix_2escm",(void*)f_5167},
{"f_5225:posixunix_2escm",(void*)f_5225},
{"f_5171:posixunix_2escm",(void*)f_5171},
{"f_5174:posixunix_2escm",(void*)f_5174},
{"f_5206:posixunix_2escm",(void*)f_5206},
{"f_5177:posixunix_2escm",(void*)f_5177},
{"f_5182:posixunix_2escm",(void*)f_5182},
{"f_5196:posixunix_2escm",(void*)f_5196},
{"f_5074:posixunix_2escm",(void*)f_5074},
{"f_5078:posixunix_2escm",(void*)f_5078},
{"f_5132:posixunix_2escm",(void*)f_5132},
{"f_5081:posixunix_2escm",(void*)f_5081},
{"f_5094:posixunix_2escm",(void*)f_5094},
{"f_5098:posixunix_2escm",(void*)f_5098},
{"f_5104:posixunix_2escm",(void*)f_5104},
{"f_5108:posixunix_2escm",(void*)f_5108},
{"f_5118:posixunix_2escm",(void*)f_5118},
{"f_5102:posixunix_2escm",(void*)f_5102},
{"f_5049:posixunix_2escm",(void*)f_5049},
{"f_5061:posixunix_2escm",(void*)f_5061},
{"f_5057:posixunix_2escm",(void*)f_5057},
{"f_5035:posixunix_2escm",(void*)f_5035},
{"f_5047:posixunix_2escm",(void*)f_5047},
{"f_5043:posixunix_2escm",(void*)f_5043},
{"f_4968:posixunix_2escm",(void*)f_4968},
{"f_4972:posixunix_2escm",(void*)f_4972},
{"f_5014:posixunix_2escm",(void*)f_5014},
{"f_4975:posixunix_2escm",(void*)f_4975},
{"f_4988:posixunix_2escm",(void*)f_4988},
{"f_4992:posixunix_2escm",(void*)f_4992},
{"f_4996:posixunix_2escm",(void*)f_4996},
{"f_5000:posixunix_2escm",(void*)f_5000},
{"f_5004:posixunix_2escm",(void*)f_5004},
{"f_4914:posixunix_2escm",(void*)f_4914},
{"f_4947:posixunix_2escm",(void*)f_4947},
{"f_4918:posixunix_2escm",(void*)f_4918},
{"f_4925:posixunix_2escm",(void*)f_4925},
{"f_4929:posixunix_2escm",(void*)f_4929},
{"f_4933:posixunix_2escm",(void*)f_4933},
{"f_4937:posixunix_2escm",(void*)f_4937},
{"f_4941:posixunix_2escm",(void*)f_4941},
{"f_4896:posixunix_2escm",(void*)f_4896},
{"f_4881:posixunix_2escm",(void*)f_4881},
{"f_4875:posixunix_2escm",(void*)f_4875},
{"f_4843:posixunix_2escm",(void*)f_4843},
{"f_4849:posixunix_2escm",(void*)f_4849},
{"f_4794:posixunix_2escm",(void*)f_4794},
{"f_4820:posixunix_2escm",(void*)f_4820},
{"f_4776:posixunix_2escm",(void*)f_4776},
{"f_4786:posixunix_2escm",(void*)f_4786},
{"f_4763:posixunix_2escm",(void*)f_4763},
{"f_4754:posixunix_2escm",(void*)f_4754},
{"f_4707:posixunix_2escm",(void*)f_4707},
{"f_4711:posixunix_2escm",(void*)f_4711},
{"f_4687:posixunix_2escm",(void*)f_4687},
{"f_4691:posixunix_2escm",(void*)f_4691},
{"f_4697:posixunix_2escm",(void*)f_4697},
{"f_4701:posixunix_2escm",(void*)f_4701},
{"f_4667:posixunix_2escm",(void*)f_4667},
{"f_4671:posixunix_2escm",(void*)f_4671},
{"f_4677:posixunix_2escm",(void*)f_4677},
{"f_4681:posixunix_2escm",(void*)f_4681},
{"f_4643:posixunix_2escm",(void*)f_4643},
{"f_4647:posixunix_2escm",(void*)f_4647},
{"f_4658:posixunix_2escm",(void*)f_4658},
{"f_4662:posixunix_2escm",(void*)f_4662},
{"f_4652:posixunix_2escm",(void*)f_4652},
{"f_4619:posixunix_2escm",(void*)f_4619},
{"f_4623:posixunix_2escm",(void*)f_4623},
{"f_4634:posixunix_2escm",(void*)f_4634},
{"f_4638:posixunix_2escm",(void*)f_4638},
{"f_4628:posixunix_2escm",(void*)f_4628},
{"f_4603:posixunix_2escm",(void*)f_4603},
{"f_4607:posixunix_2escm",(void*)f_4607},
{"f_4610:posixunix_2escm",(void*)f_4610},
{"f_4567:posixunix_2escm",(void*)f_4567},
{"f_4598:posixunix_2escm",(void*)f_4598},
{"f_4588:posixunix_2escm",(void*)f_4588},
{"f_4581:posixunix_2escm",(void*)f_4581},
{"f_4531:posixunix_2escm",(void*)f_4531},
{"f_4562:posixunix_2escm",(void*)f_4562},
{"f_4552:posixunix_2escm",(void*)f_4552},
{"f_4545:posixunix_2escm",(void*)f_4545},
{"f_4516:posixunix_2escm",(void*)f_4516},
{"f_4529:posixunix_2escm",(void*)f_4529},
{"f_4476:posixunix_2escm",(void*)f_4476},
{"f_4496:posixunix_2escm",(void*)f_4496},
{"f_4483:posixunix_2escm",(void*)f_4483},
{"f_4486:posixunix_2escm",(void*)f_4486},
{"f_4343:posixunix_2escm",(void*)f_4343},
{"f_4347:posixunix_2escm",(void*)f_4347},
{"f_4353:posixunix_2escm",(void*)f_4353},
{"f_4362:posixunix_2escm",(void*)f_4362},
{"f_4445:posixunix_2escm",(void*)f_4445},
{"f_4422:posixunix_2escm",(void*)f_4422},
{"f_4416:posixunix_2escm",(void*)f_4416},
{"f_4372:posixunix_2escm",(void*)f_4372},
{"f_4374:posixunix_2escm",(void*)f_4374},
{"f_4414:posixunix_2escm",(void*)f_4414},
{"f_4381:posixunix_2escm",(void*)f_4381},
{"f_4407:posixunix_2escm",(void*)f_4407},
{"f_4384:posixunix_2escm",(void*)f_4384},
{"f_4400:posixunix_2escm",(void*)f_4400},
{"f_4356:posixunix_2escm",(void*)f_4356},
{"f_4281:posixunix_2escm",(void*)f_4281},
{"f_4294:posixunix_2escm",(void*)f_4294},
{"f_4306:posixunix_2escm",(void*)f_4306},
{"f_4300:posixunix_2escm",(void*)f_4300},
{"f_3989:posixunix_2escm",(void*)f_3989},
{"f_4249:posixunix_2escm",(void*)f_4249},
{"f_4233:posixunix_2escm",(void*)f_4233},
{"f_4005:posixunix_2escm",(void*)f_4005},
{"f_4198:posixunix_2escm",(void*)f_4198},
{"f_4182:posixunix_2escm",(void*)f_4182},
{"f_4011:posixunix_2escm",(void*)f_4011},
{"f_4014:posixunix_2escm",(void*)f_4014},
{"f_4136:posixunix_2escm",(void*)f_4136},
{"f_4134:posixunix_2escm",(void*)f_4134},
{"f_4117:posixunix_2escm",(void*)f_4117},
{"f_4053:posixunix_2escm",(void*)f_4053},
{"f_4086:posixunix_2escm",(void*)f_4086},
{"f_4084:posixunix_2escm",(void*)f_4084},
{"f_4067:posixunix_2escm",(void*)f_4067},
{"f_3931:posixunix_2escm",(void*)f_3931},
{"f_3938:posixunix_2escm",(void*)f_3938},
{"f_3944:posixunix_2escm",(void*)f_3944},
{"f_3951:posixunix_2escm",(void*)f_3951},
{"f_3892:posixunix_2escm",(void*)f_3892},
{"f_3899:posixunix_2escm",(void*)f_3899},
{"f_3908:posixunix_2escm",(void*)f_3908},
{"f_3850:posixunix_2escm",(void*)f_3850},
{"f_3860:posixunix_2escm",(void*)f_3860},
{"f_3863:posixunix_2escm",(void*)f_3863},
{"f_3866:posixunix_2escm",(void*)f_3866},
{"f_3835:posixunix_2escm",(void*)f_3835},
{"f_3797:posixunix_2escm",(void*)f_3797},
{"f_3827:posixunix_2escm",(void*)f_3827},
{"f_3814:posixunix_2escm",(void*)f_3814},
{"f_3817:posixunix_2escm",(void*)f_3817},
{"f_3751:posixunix_2escm",(void*)f_3751},
{"f_3755:posixunix_2escm",(void*)f_3755},
{"f_3694:posixunix_2escm",(void*)f_3694},
{"f_3687:posixunix_2escm",(void*)f_3687},
{"f_3620:posixunix_2escm",(void*)f_3620},
{"f_3624:posixunix_2escm",(void*)f_3624},
{"f_3627:posixunix_2escm",(void*)f_3627},
{"f_3649:posixunix_2escm",(void*)f_3649},
{"f_3646:posixunix_2escm",(void*)f_3646},
{"f_3636:posixunix_2escm",(void*)f_3636},
{"f_3595:posixunix_2escm",(void*)f_3595},
{"f_3599:posixunix_2escm",(void*)f_3599},
{"f_3544:posixunix_2escm",(void*)f_3544},
{"f_3548:posixunix_2escm",(void*)f_3548},
{"f_3554:posixunix_2escm",(void*)f_3554},
{"f_3500:posixunix_2escm",(void*)f_3500},
{"f_3504:posixunix_2escm",(void*)f_3504},
{"f_3466:posixunix_2escm",(void*)f_3466},
{"f_3470:posixunix_2escm",(void*)f_3470},
{"f_3447:posixunix_2escm",(void*)f_3447},
{"f_3262:posixunix_2escm",(void*)f_3262},
{"f_3437:posixunix_2escm",(void*)f_3437},
{"f_3272:posixunix_2escm",(void*)f_3272},
{"f_3383:posixunix_2escm",(void*)f_3383},
{"f_3427:posixunix_2escm",(void*)f_3427},
{"f_3429:posixunix_2escm",(void*)f_3429},
{"f_3387:posixunix_2escm",(void*)f_3387},
{"f_3419:posixunix_2escm",(void*)f_3419},
{"f_3421:posixunix_2escm",(void*)f_3421},
{"f_3390:posixunix_2escm",(void*)f_3390},
{"f_3416:posixunix_2escm",(void*)f_3416},
{"f_3393:posixunix_2escm",(void*)f_3393},
{"f_3413:posixunix_2escm",(void*)f_3413},
{"f_3396:posixunix_2escm",(void*)f_3396},
{"f_3410:posixunix_2escm",(void*)f_3410},
{"f_3399:posixunix_2escm",(void*)f_3399},
{"f_3407:posixunix_2escm",(void*)f_3407},
{"f_3402:posixunix_2escm",(void*)f_3402},
{"f_3299:posixunix_2escm",(void*)f_3299},
{"f_3305:posixunix_2escm",(void*)f_3305},
{"f_3288:posixunix_2escm",(void*)f_3288},
{"f_3294:posixunix_2escm",(void*)f_3294},
{"f_3283:posixunix_2escm",(void*)f_3283},
{"f_3278:posixunix_2escm",(void*)f_3278},
{"f_3273:posixunix_2escm",(void*)f_3273},
{"f_3064:posixunix_2escm",(void*)f_3064},
{"f_3248:posixunix_2escm",(void*)f_3248},
{"f_3256:posixunix_2escm",(void*)f_3256},
{"f_3071:posixunix_2escm",(void*)f_3071},
{"f_3233:posixunix_2escm",(void*)f_3233},
{"f_3236:posixunix_2escm",(void*)f_3236},
{"f_3237:posixunix_2escm",(void*)f_3237},
{"f_3074:posixunix_2escm",(void*)f_3074},
{"f_3223:posixunix_2escm",(void*)f_3223},
{"f_3081:posixunix_2escm",(void*)f_3081},
{"f_3083:posixunix_2escm",(void*)f_3083},
{"f_3102:posixunix_2escm",(void*)f_3102},
{"f_3209:posixunix_2escm",(void*)f_3209},
{"f_3216:posixunix_2escm",(void*)f_3216},
{"f_3203:posixunix_2escm",(void*)f_3203},
{"f_3196:posixunix_2escm",(void*)f_3196},
{"f_3136:posixunix_2escm",(void*)f_3136},
{"f_3190:posixunix_2escm",(void*)f_3190},
{"f_3187:posixunix_2escm",(void*)f_3187},
{"f_3177:posixunix_2escm",(void*)f_3177},
{"f_3153:posixunix_2escm",(void*)f_3153},
{"f_3175:posixunix_2escm",(void*)f_3175},
{"f_3161:posixunix_2escm",(void*)f_3161},
{"f_3168:posixunix_2escm",(void*)f_3168},
{"f_3165:posixunix_2escm",(void*)f_3165},
{"f_3148:posixunix_2escm",(void*)f_3148},
{"f_3146:posixunix_2escm",(void*)f_3146},
{"f_3127:posixunix_2escm",(void*)f_3127},
{"f_3124:posixunix_2escm",(void*)f_3124},
{"f_2955:posixunix_2escm",(void*)f_2955},
{"f_2961:posixunix_2escm",(void*)f_2961},
{"f_2982:posixunix_2escm",(void*)f_2982},
{"f_3058:posixunix_2escm",(void*)f_3058},
{"f_2986:posixunix_2escm",(void*)f_2986},
{"f_2993:posixunix_2escm",(void*)f_2993},
{"f_2995:posixunix_2escm",(void*)f_2995},
{"f_3012:posixunix_2escm",(void*)f_3012},
{"f_3016:posixunix_2escm",(void*)f_3016},
{"f_3036:posixunix_2escm",(void*)f_3036},
{"f_3024:posixunix_2escm",(void*)f_3024},
{"f_3028:posixunix_2escm",(void*)f_3028},
{"f_2976:posixunix_2escm",(void*)f_2976},
{"f_2808:posixunix_2escm",(void*)f_2808},
{"f_2812:posixunix_2escm",(void*)f_2812},
{"f_2833:posixunix_2escm",(void*)f_2833},
{"f_2836:posixunix_2escm",(void*)f_2836},
{"f_2839:posixunix_2escm",(void*)f_2839},
{"f_2923:posixunix_2escm",(void*)f_2923},
{"f_2843:posixunix_2escm",(void*)f_2843},
{"f_2857:posixunix_2escm",(void*)f_2857},
{"f_2867:posixunix_2escm",(void*)f_2867},
{"f_2879:posixunix_2escm",(void*)f_2879},
{"f_2889:posixunix_2escm",(void*)f_2889},
{"f_2704:posixunix_2escm",(void*)f_2704},
{"f_2708:posixunix_2escm",(void*)f_2708},
{"f_2729:posixunix_2escm",(void*)f_2729},
{"f_2735:posixunix_2escm",(void*)f_2735},
{"f_2763:posixunix_2escm",(void*)f_2763},
{"f_2773:posixunix_2escm",(void*)f_2773},
{"f_2758:posixunix_2escm",(void*)f_2758},
{"f_2736:posixunix_2escm",(void*)f_2736},
{"f_2746:posixunix_2escm",(void*)f_2746},
{"f_2752:posixunix_2escm",(void*)f_2752},
{"f_2710:posixunix_2escm",(void*)f_2710},
{"f_2714:posixunix_2escm",(void*)f_2714},
{"f_2658:posixunix_2escm",(void*)f_2658},
{"f_2662:posixunix_2escm",(void*)f_2662},
{"f_2671:posixunix_2escm",(void*)f_2671},
{"f_2674:posixunix_2escm",(void*)f_2674},
{"f_2648:posixunix_2escm",(void*)f_2648},
{"f_2656:posixunix_2escm",(void*)f_2656},
{"f_2638:posixunix_2escm",(void*)f_2638},
{"f_2646:posixunix_2escm",(void*)f_2646},
{"f_2628:posixunix_2escm",(void*)f_2628},
{"f_2636:posixunix_2escm",(void*)f_2636},
{"f_2618:posixunix_2escm",(void*)f_2618},
{"f_2626:posixunix_2escm",(void*)f_2626},
{"f_2608:posixunix_2escm",(void*)f_2608},
{"f_2616:posixunix_2escm",(void*)f_2616},
{"f_2598:posixunix_2escm",(void*)f_2598},
{"f_2606:posixunix_2escm",(void*)f_2606},
{"f_2588:posixunix_2escm",(void*)f_2588},
{"f_2596:posixunix_2escm",(void*)f_2596},
{"f_2498:posixunix_2escm",(void*)f_2498},
{"f_2523:posixunix_2escm",(void*)f_2523},
{"f_2492:posixunix_2escm",(void*)f_2492},
{"f_2496:posixunix_2escm",(void*)f_2496},
{"f_2486:posixunix_2escm",(void*)f_2486},
{"f_2490:posixunix_2escm",(void*)f_2490},
{"f_2480:posixunix_2escm",(void*)f_2480},
{"f_2484:posixunix_2escm",(void*)f_2484},
{"f_2474:posixunix_2escm",(void*)f_2474},
{"f_2478:posixunix_2escm",(void*)f_2478},
{"f_2468:posixunix_2escm",(void*)f_2468},
{"f_2472:posixunix_2escm",(void*)f_2472},
{"f_2433:posixunix_2escm",(void*)f_2433},
{"f_2437:posixunix_2escm",(void*)f_2437},
{"f_2440:posixunix_2escm",(void*)f_2440},
{"f_2389:posixunix_2escm",(void*)f_2389},
{"f_2428:posixunix_2escm",(void*)f_2428},
{"f_2424:posixunix_2escm",(void*)f_2424},
{"f_2417:posixunix_2escm",(void*)f_2417},
{"f_2393:posixunix_2escm",(void*)f_2393},
{"f_2371:posixunix_2escm",(void*)f_2371},
{"f_2375:posixunix_2escm",(void*)f_2375},
{"f_2386:posixunix_2escm",(void*)f_2386},
{"f_2382:posixunix_2escm",(void*)f_2382},
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
