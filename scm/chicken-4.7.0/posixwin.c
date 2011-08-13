/* Generated from posixwin.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: posixwin.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -explicit-use -no-trace -output-file posixwin.c
   unit: posix
*/

#include "chicken.h"

#ifndef WIN32_LEAN_AND_MEAN
# define WIN32_LEAN_AND_MEAN
#endif

#if (defined(HAVE_WINSOCK2_H) && defined(HAVE_WS2TCPIP_H))
# include <winsock2.h>
# include <ws2tcpip.h>
#else
# include <winsock.h>
#endif

#include <signal.h>
#include <errno.h>
#include <io.h>
#include <stdio.h>
#include <process.h>
#include <fcntl.h>
#include <direct.h>
#include <utime.h>
#include <time.h>

#define ARG_MAX		256
#define PIPE_BUF	512
#ifndef ENV_MAX
# define ENV_MAX	1024
#endif

static C_TLS char *C_exec_args[ ARG_MAX ];
static C_TLS char *C_exec_env[ ENV_MAX ];
static C_TLS struct group *C_group;
static C_TLS int C_pipefds[ 2 ];
static C_TLS time_t C_secs;
static C_TLS struct tm C_tm;

/* pipe handles */
static C_TLS HANDLE C_rd0, C_wr0, C_wr0_, C_rd1, C_wr1, C_rd1_;
static C_TLS HANDLE C_save0, C_save1; /* saved I/O handles */
static C_TLS char C_rdbuf; /* one-char buffer for read */
static C_TLS int C_exstatus;

/* platform information; initialized for cached testing */
static C_TLS char C_hostname[256] = "";
static C_TLS char C_osver[16] = "";
static C_TLS char C_osrel[16] = "";
static C_TLS char C_processor[16] = "";
static C_TLS char C_shlcmd[256] = "";

/* Windows NT or better */
static int C_isNT = 0;

/* Current user name */
static C_TLS TCHAR C_username[255 + 1] = "";

/* Directory Operations */

#define C_mkdir(str)	    C_fix(mkdir(C_c_string(str)))
#define C_chdir(str)	    C_fix(chdir(C_c_string(str)))
#define C_rmdir(str)	    C_fix(rmdir(C_c_string(str)))

#ifndef __WATCOMC__
/* DIRENT stuff */
struct dirent
{
    char *		d_name;
};

typedef struct
{
    struct _finddata_t	fdata;
    int			handle;
    struct dirent	current;
} DIR;

static DIR * C_fcall
opendir(const char *name)
{
    int name_len = strlen(name);
    DIR *dir = (DIR *)malloc(sizeof(DIR));
    char *what;
    if (!dir)
    {
	errno = ENOMEM;
	return NULL;
    }
    what = (char *)malloc(name_len + 3);
    if (!what)
    {
	free(dir);
	errno = ENOMEM;
	return NULL;
    }
    strcpy(what, name);
    if (strchr("\\/", name[name_len - 1]))
	strcat(what, "*");
    else
	strcat(what, "\\*");

    dir->handle = _findfirst(what, &dir->fdata);
    if (dir->handle == -1)
    {
	free(what);
	free(dir);
	return NULL;
    }
    dir->current.d_name = NULL; /* as the first-time indicator */
    free(what);
    return dir;
}

static int C_fcall
closedir(DIR * dir)
{
    if (dir)
    {
	int res = _findclose(dir->handle);
	free(dir);
	return res;
    }
    return -1;
}

static struct dirent * C_fcall
readdir(DIR * dir)
{
    if (dir)
    {
	if (!dir->current.d_name /* first time after opendir */
	     || _findnext(dir->handle, &dir->fdata) != -1)
	{
	    dir->current.d_name = dir->fdata.name;
	    return &dir->current;
	}
    }
    return NULL;
}
#endif /* ifndef __WATCOMC__ */

#ifdef __WATCOMC__
# define mktemp _mktemp
/* there is no P_DETACH in Watcom CRTL */
# define P_DETACH P_NOWAIT
#endif

#define C_opendir(x,h)		C_set_block_item(h, 0, (C_word) opendir(C_c_string(x)))
#define C_closedir(h)		(closedir((DIR *)C_block_item(h, 0)), C_SCHEME_UNDEFINED)
#define C_readdir(h,e)		C_set_block_item(e, 0, (C_word) readdir((DIR *)C_block_item(h, 0)))
#define C_foundfile(e,b)	(strcpy(C_c_string(b), ((struct dirent *) C_block_item(e, 0))->d_name), C_fix(strlen(((struct dirent *) C_block_item(e, 0))->d_name)))

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, _popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, _popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)			     C_fix(_pclose(C_port_file(p)))

#define C_set_file_ptr(port, ptr)  (C_set_block_item(port, 0, (C_block_item(ptr, 0))), C_SCHEME_UNDEFINED)

#define C_getpid	    getpid
#define C_chmod(fn, m)	    C_fix(chmod(C_data_pointer(fn), C_unfix(m)))
#define C_fdopen(a, n, fd, m) C_mpointer(a, fdopen(C_unfix(fd), C_c_string(m)))
#define C_C_fileno(p)	    C_fix(fileno(C_port_file(p)))
#define C_dup(x)	    C_fix(dup(C_unfix(x)))
#define C_dup2(x, y)	    C_fix(dup2(C_unfix(x), C_unfix(y)))
#define C_setvbuf(p, m, s)  C_fix(setvbuf(C_port_file(p), NULL, C_unfix(m), C_unfix(s)))
#define C_test_access(fn, m)	    C_fix(access((char *)C_data_pointer(fn), C_unfix(m)))
#define C_pipe(d, m)	    C_fix(_pipe(C_pipefds, PIPE_BUF, C_unfix(m)))
#define C_close(fd)	    C_fix(close(C_unfix(fd)))

#define C_getenventry(i)   environ[ i ]

#define C_putenv(s)	    C_fix(putenv((char *)C_data_pointer(s)))
#define C_lstat(fn)	    C_stat(fn)

static C_word C_fcall
C_setenv(C_word x, C_word y)
{
    char *sx = C_data_pointer(x),
	 *sy = C_data_pointer(y);
    int n1 = C_strlen(sx),
	n2 = C_strlen(sy);
    char *buf = (char *)C_malloc(n1 + n2 + 2);
    if (buf == NULL)
	return(C_fix(0));
    else
    {
	C_strcpy(buf, sx);
	buf[ n1 ] = '=';
	C_strcpy(buf + n1 + 1, sy);
	return(C_fix(putenv(buf)));
    }
}

static void C_fcall
C_set_arg_string(char **where, int i, char *dat, int len)
{
    char *ptr;
    if (dat)
    {
	ptr = (char *)C_malloc(len + 1);
	C_memcpy(ptr, dat, len);
	ptr[ len ] = '\0';
    }
    else
	ptr = NULL;
    where[ i ] = ptr;
}

static void C_fcall
C_free_arg_string(char **where) {
  while (*where) C_free(*(where++));
}

#define C_set_exec_arg(i, a, len)	C_set_arg_string(C_exec_args, i, a, len)
#define C_set_exec_env(i, a, len)	C_set_arg_string(C_exec_env, i, a, len)

#define C_free_exec_args()		(C_free_arg_string(C_exec_args), C_SCHEME_TRUE)
#define C_free_exec_env()		(C_free_arg_string(C_exec_env), C_SCHEME_TRUE)

#define C_execvp(f)	    C_fix(execvp(C_data_pointer(f), (const char *const *)C_exec_args))
#define C_execve(f)	    C_fix(execve(C_data_pointer(f), (const char *const *)C_exec_args, (const char *const *)C_exec_env))

/* MS replacement for the fork-exec pair */
#define C_spawnvp(m, f)	    C_fix(spawnvp(C_unfix(m), C_data_pointer(f), (const char *const *)C_exec_args))
#define C_spawnvpe(m, f)    C_fix(spawnvpe(C_unfix(m), C_data_pointer(f), (const char *const *)C_exec_args, (const char *const *)C_exec_env))

#define C_open(fn, fl, m)   C_fix(open(C_c_string(fn), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_write(fd, b, n)   C_fix(write(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_mkstemp(t)	    C_fix(mktemp(C_c_string(t)))

/* It is assumed that 'int' is-a 'long' */
#define C_ftell(p)          C_fix(ftell(C_port_file(p)))
#define C_fseek(p, n, w)    C_mk_nbool(fseek(C_port_file(p), C_num_to_int(n), C_unfix(w)))
#define C_lseek(fd, o, w)   C_fix(lseek(C_unfix(fd), C_unfix(o), C_unfix(w)))

#define C_flushall()	    C_fix(_flushall())

#define C_umask(m)          C_fix(_umask(C_unfix(m)))

#define C_ctime(n)	    (C_secs = (n), ctime(&C_secs))

#define C_tm_set_08(v) \
        (memset(&C_tm, 0, sizeof(struct tm)), \
        C_tm.tm_sec = C_unfix(C_block_item(v, 0)), \
        C_tm.tm_min = C_unfix(C_block_item(v, 1)), \
        C_tm.tm_hour = C_unfix(C_block_item(v, 2)), \
        C_tm.tm_mday = C_unfix(C_block_item(v, 3)), \
        C_tm.tm_mon = C_unfix(C_block_item(v, 4)), \
        C_tm.tm_year = C_unfix(C_block_item(v, 5)), \
        C_tm.tm_wday = C_unfix(C_block_item(v, 6)), \
        C_tm.tm_yday = C_unfix(C_block_item(v, 7)), \
        C_tm.tm_isdst = (C_block_item(v, 8) != C_SCHEME_FALSE))

#define C_tm_set(v) (C_tm_set_08(v), &C_tm)

#define C_asctime(v)    (asctime(C_tm_set(v)))
#define C_a_mktime(ptr, c, v)  C_flonum(ptr, mktime(C_tm_set(v)))

#define TIME_STRING_MAXLENGTH 255
static char C_time_string [TIME_STRING_MAXLENGTH + 1];
#undef TIME_STRING_MAXLENGTH

/*
  mapping from Win32 error codes to errno
*/

typedef struct
{
    DWORD   win32;
    int	    libc;
} errmap_t;

static errmap_t errmap[] =
{
    {ERROR_INVALID_FUNCTION,	  EINVAL},
    {ERROR_FILE_NOT_FOUND,	  ENOENT},
    {ERROR_PATH_NOT_FOUND,	  ENOENT},
    {ERROR_TOO_MANY_OPEN_FILES,	  EMFILE},
    {ERROR_ACCESS_DENIED,	  EACCES},
    {ERROR_INVALID_HANDLE,	  EBADF},
    {ERROR_ARENA_TRASHED,	  ENOMEM},
    {ERROR_NOT_ENOUGH_MEMORY,	  ENOMEM},
    {ERROR_INVALID_BLOCK,	  ENOMEM},
    {ERROR_BAD_ENVIRONMENT,	  E2BIG},
    {ERROR_BAD_FORMAT,		  ENOEXEC},
    {ERROR_INVALID_ACCESS,	  EINVAL},
    {ERROR_INVALID_DATA,	  EINVAL},
    {ERROR_INVALID_DRIVE,	  ENOENT},
    {ERROR_CURRENT_DIRECTORY,	  EACCES},
    {ERROR_NOT_SAME_DEVICE,	  EXDEV},
    {ERROR_NO_MORE_FILES,	  ENOENT},
    {ERROR_LOCK_VIOLATION,	  EACCES},
    {ERROR_BAD_NETPATH,		  ENOENT},
    {ERROR_NETWORK_ACCESS_DENIED, EACCES},
    {ERROR_BAD_NET_NAME,	  ENOENT},
    {ERROR_FILE_EXISTS,		  EEXIST},
    {ERROR_CANNOT_MAKE,		  EACCES},
    {ERROR_FAIL_I24,		  EACCES},
    {ERROR_INVALID_PARAMETER,	  EINVAL},
    {ERROR_NO_PROC_SLOTS,	  EAGAIN},
    {ERROR_DRIVE_LOCKED,	  EACCES},
    {ERROR_BROKEN_PIPE,		  EPIPE},
    {ERROR_DISK_FULL,		  ENOSPC},
    {ERROR_INVALID_TARGET_HANDLE, EBADF},
    {ERROR_INVALID_HANDLE,	  EINVAL},
    {ERROR_WAIT_NO_CHILDREN,	  ECHILD},
    {ERROR_CHILD_NOT_COMPLETE,	  ECHILD},
    {ERROR_DIRECT_ACCESS_HANDLE,  EBADF},
    {ERROR_NEGATIVE_SEEK,	  EINVAL},
    {ERROR_SEEK_ON_DEVICE,	  EACCES},
    {ERROR_DIR_NOT_EMPTY,	  ENOTEMPTY},
    {ERROR_NOT_LOCKED,		  EACCES},
    {ERROR_BAD_PATHNAME,	  ENOENT},
    {ERROR_MAX_THRDS_REACHED,	  EAGAIN},
    {ERROR_LOCK_FAILED,		  EACCES},
    {ERROR_ALREADY_EXISTS,	  EEXIST},
    {ERROR_FILENAME_EXCED_RANGE,  ENOENT},
    {ERROR_NESTING_NOT_ALLOWED,	  EAGAIN},
    {ERROR_NOT_ENOUGH_QUOTA,	  ENOMEM},
    {0, 0}
};

static void C_fcall
set_errno(DWORD w32err)
{
    errmap_t *map = errmap;
    for (; errmap->win32; ++map)
    {
	if (errmap->win32 == w32err)
	{
	    errno = errmap->libc;
	    return;
	}
    }
}

static int C_fcall
set_last_errno()
{
    set_errno(GetLastError());
    return 0;
}

/* Functions for creating process with redirected I/O */

static int C_fcall
zero_handles()
{
    C_rd0 = C_wr0 = C_wr0_ = INVALID_HANDLE_VALUE;
    C_rd1 = C_wr1 = C_rd1_ = INVALID_HANDLE_VALUE;
    C_save0 = C_save1 = INVALID_HANDLE_VALUE;
    return 1;
}

static int C_fcall
close_handles()
{
    if (C_rd0 != INVALID_HANDLE_VALUE)
	CloseHandle(C_rd0);
    if (C_rd1 != INVALID_HANDLE_VALUE)
	CloseHandle(C_rd1);
    if (C_wr0 != INVALID_HANDLE_VALUE)
	CloseHandle(C_wr0);
    if (C_wr1 != INVALID_HANDLE_VALUE)
	CloseHandle(C_wr1);
    if (C_rd1_ != INVALID_HANDLE_VALUE)
	CloseHandle(C_rd1_);
    if (C_wr0_ != INVALID_HANDLE_VALUE)
	CloseHandle(C_wr0_);
    if (C_save0 != INVALID_HANDLE_VALUE)
    {
	SetStdHandle(STD_INPUT_HANDLE, C_save0);
	CloseHandle(C_save0);
    }
    if (C_save1 != INVALID_HANDLE_VALUE)
    {
	SetStdHandle(STD_OUTPUT_HANDLE, C_save1);
	CloseHandle(C_save1);
    }
    return zero_handles();
}

static int C_fcall
redir_io()
{
    SECURITY_ATTRIBUTES sa;
    sa.nLength = sizeof(SECURITY_ATTRIBUTES);
    sa.bInheritHandle = TRUE;
    sa.lpSecurityDescriptor = NULL;

    zero_handles();

    C_save0 = GetStdHandle(STD_INPUT_HANDLE);
    C_save1 = GetStdHandle(STD_OUTPUT_HANDLE);
    if (!CreatePipe(&C_rd0, &C_wr0, &sa, 0)
	    || !SetStdHandle(STD_INPUT_HANDLE, C_rd0)
	    || !DuplicateHandle(GetCurrentProcess(), C_wr0, GetCurrentProcess(),
		&C_wr0_, 0, FALSE, DUPLICATE_SAME_ACCESS)
	    || !CreatePipe(&C_rd1, &C_wr1, &sa, 0)
	    || !SetStdHandle(STD_OUTPUT_HANDLE, C_wr1)
	    || !DuplicateHandle(GetCurrentProcess(), C_rd1, GetCurrentProcess(),
		&C_rd1_, 0, FALSE, DUPLICATE_SAME_ACCESS))
    {
	set_last_errno();
	close_handles();
	return 0;
    }

    CloseHandle(C_wr0);
    C_wr0 = INVALID_HANDLE_VALUE;
    CloseHandle(C_rd1);
    C_rd1 = INVALID_HANDLE_VALUE;
    return 1;
}

static int C_fcall
run_process(char *cmdline)
{
    PROCESS_INFORMATION pi;
    STARTUPINFO si;

    ZeroMemory(&pi, sizeof(PROCESS_INFORMATION));
    ZeroMemory(&si, sizeof(STARTUPINFO));
    si.cb = sizeof(STARTUPINFO);

    C_wr0_ = C_rd1_ = INVALID_HANDLE_VALUE; /* these handles are saved */

    if (CreateProcess(NULL, cmdline, NULL, NULL, TRUE, 0, NULL,
		      NULL, &si, &pi))
    {
	CloseHandle(pi.hThread);

	SetStdHandle(STD_INPUT_HANDLE, C_save0);
	SetStdHandle(STD_OUTPUT_HANDLE, C_save1);
	C_save0 = C_save1 = INVALID_HANDLE_VALUE;

	CloseHandle(C_rd0);
	CloseHandle(C_wr1);
	C_rd0 = C_wr1 = INVALID_HANDLE_VALUE;
	return (int)pi.hProcess;
    }
    else
	return set_last_errno();
}

static int C_fcall
pipe_write(int hpipe, void* buf, int count)
{
    DWORD done = 0;
    if (WriteFile((HANDLE)hpipe, buf, count, &done, NULL))
	return 1;
    else
	return set_last_errno();
}

static int C_fcall
pipe_read(int hpipe)
{
    DWORD done = 0;
    /* TODO:
    if (!pipe_ready(hpipe))
	go_to_sleep;
    */
    if (ReadFile((HANDLE)hpipe, &C_rdbuf, 1, &done, NULL))
    {
	if (done > 0) /* not EOF yet */
	    return 1;
	else
	    return -1;
    }
    return set_last_errno();
}

static int C_fcall
pipe_ready(int hpipe)
{
    DWORD avail = 0;
    if (PeekNamedPipe((HANDLE)hpipe, NULL, 0, NULL, &avail, NULL) && avail)
	return 1;
    else
    {
	Sleep(0); /* give pipe a chance */
	if (PeekNamedPipe((HANDLE)hpipe, NULL, 0, NULL, &avail, NULL))
	    return (avail > 0);
	else
	    return 0;
    }
}

#define C_zero_handles() C_fix(zero_handles())
#define C_close_handles() C_fix(close_handles())
#define C_redir_io() (redir_io() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_run_process(cmdline) C_fix(run_process(C_c_string(cmdline)))
#define C_pipe_write(h, b, n) (pipe_write(C_unfix(h), C_c_string(b), C_unfix(n)) ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_pipe_read(h) C_fix(pipe_read(C_unfix(h)))
#define C_pipe_ready(h) (pipe_ready(C_unfix(h)) ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define close_handle(h) CloseHandle((HANDLE)h)

static int C_fcall
process_wait(int h, int t)
{
    if (WaitForSingleObject((HANDLE)h, (t ? 0 : INFINITE)) == WAIT_OBJECT_0)
    {
	DWORD ret;
	if (GetExitCodeProcess((HANDLE)h, &ret))
	{
	    CloseHandle((HANDLE)h);
	    C_exstatus = ret;
	    return 1;
	}
    }
    return set_last_errno();
}

#define C_process_wait(p, t) (process_wait(C_unfix(p), C_truep(t)) ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_sleep(t) (Sleep(C_unfix(t) * 1000), C_SCHEME_UNDEFINED)

static int C_fcall
get_hostname()
{
    /* Do we already have hostname? */
    if (strlen(C_hostname))
    {
	return 1;
    }
    else
    {
	WSADATA wsa;
	if (WSAStartup(MAKEWORD(1, 1), &wsa) == 0)
	{
	    int nok = gethostname(C_hostname, sizeof(C_hostname));
	    WSACleanup();
	    return !nok;
	}
	return 0;
    }
}

static int C_fcall
sysinfo()
{
    /* Do we need to build the sysinfo? */
    if (!strlen(C_osrel))
    {
	OSVERSIONINFO ovf;
	ZeroMemory(&ovf, sizeof(ovf));
	ovf.dwOSVersionInfoSize = sizeof(ovf);
	if (get_hostname() && GetVersionEx(&ovf))
	{
	    SYSTEM_INFO si;
	    _snprintf(C_osver, sizeof(C_osver) - 1, "%d.%d.%d",
			ovf.dwMajorVersion, ovf.dwMinorVersion, ovf.dwBuildNumber);
	    strncpy(C_osrel, "Win", sizeof(C_osrel) - 1);
	    switch (ovf.dwPlatformId)
	    {
	    case VER_PLATFORM_WIN32s:
		strncpy(C_osrel, "Win32s", sizeof(C_osrel) - 1);
		break;
	    case VER_PLATFORM_WIN32_WINDOWS:
		if (ovf.dwMajorVersion == 4)
		{
		    if (ovf.dwMinorVersion == 0)
			strncpy(C_osrel, "Win95", sizeof(C_osrel) - 1);
		    else if (ovf.dwMinorVersion == 10)
			strncpy(C_osrel, "Win98", sizeof(C_osrel) - 1);
		    else if (ovf.dwMinorVersion == 90)
			strncpy(C_osrel, "WinMe", sizeof(C_osrel) - 1);
		}
		break;
	    case VER_PLATFORM_WIN32_NT:
		C_isNT = 1;
		if (ovf.dwMajorVersion == 6)
		    strncpy(C_osrel, "WinVista", sizeof(C_osrel) - 1);
		else if (ovf.dwMajorVersion == 5)
		{
		    if (ovf.dwMinorVersion == 2)
			strncpy(C_osrel, "WinServer2003", sizeof(C_osrel) - 1);
		    else if (ovf.dwMinorVersion == 1)
			strncpy(C_osrel, "WinXP", sizeof(C_osrel) - 1);
		    else if ( ovf.dwMinorVersion == 0)
			strncpy(C_osrel, "Win2000", sizeof(C_osrel) - 1);
		}
		else if (ovf.dwMajorVersion <= 4)
		   strncpy(C_osrel, "WinNT", sizeof(C_osrel) - 1);
		break;
	    }
	    GetSystemInfo(&si);
	    strncpy(C_processor, "Unknown", sizeof(C_processor) - 1);
	    switch (si.wProcessorArchitecture)
	    {
	    case PROCESSOR_ARCHITECTURE_INTEL:
		strncpy(C_processor, "x86", sizeof(C_processor) - 1);
		break;
#	    ifdef PROCESSOR_ARCHITECTURE_IA64
	    case PROCESSOR_ARCHITECTURE_IA64:
		strncpy(C_processor, "IA64", sizeof(C_processor) - 1);
		break;
#	    endif
#	    ifdef PROCESSOR_ARCHITECTURE_AMD64
	    case PROCESSOR_ARCHITECTURE_AMD64:
		strncpy(C_processor, "x64", sizeof(C_processor) - 1);
		break;
#	    endif
#	    ifdef PROCESSOR_ARCHITECTURE_IA32_ON_WIN64
	    case PROCESSOR_ARCHITECTURE_IA32_ON_WIN64:
		strncpy(C_processor, "WOW64", sizeof(C_processor) - 1);
		break;
#	    endif
	    }
	}
	else
	    return set_last_errno();
    }
    return 1;
}

static int C_fcall
get_shlcmd()
{
    /* Do we need to build the shell command pathname? */
    if (!strlen(C_shlcmd))
    {
	if (sysinfo())
	{
	    char *cmdnam = C_isNT ? "\\cmd.exe" : "\\command.com";
	    UINT len = GetSystemDirectory(C_shlcmd, sizeof(C_shlcmd) - strlen(cmdnam));
	    if (len)
		strcpy(C_shlcmd + len, cmdnam);
	    else
		return set_last_errno();
	}
	else
	    return 0;
    }
    return 1;
}

#define C_get_hostname() (get_hostname() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_sysinfo() (sysinfo() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_get_shlcmd() (get_shlcmd() ? C_SCHEME_TRUE : C_SCHEME_FALSE)

/* GetUserName */

static int C_fcall
get_user_name()
{
    if (!strlen(C_username))
    {
	DWORD bufCharCount = sizeof(C_username) / sizeof(C_username[0]);
	if (!GetUserName(C_username, &bufCharCount))
	    return set_last_errno();
    }
    return 1;
}

#define C_get_user_name() (get_user_name() ? C_SCHEME_TRUE : C_SCHEME_FALSE)

/* User Information */

#if 0
static int C_fcall
get_netinfo()
{
    HINSTANCE hNet = 0,
	      hLoc = 0;

    if (isNT)
	hNet = LoadLibrary("netapi32.dll");
    else
    {
	hLoc = LoadLibrary("rlocal32.dll");
	hNet = LoadLibrary("radmin32.dll");
	//hNet = LoadLibrary("netapi.dll");
    }

    if (!hNet)
	return 0;

    
}
#endif

/*
    Spawn a process directly.
    Params:
    app		Command to execute.
    cmdlin	Command line (arguments).
    env		Environment for the new process (may be NULL).
    handle, stdin, stdout, stderr
		Spawned process info are returned in integers.
		When spawned process shares standard io stream with the parent
		process the respective value in handle, stdin, stdout, stderr
		is -1.
    params	A bitmask controling operation.
		Bit 1: Child & parent share standard input if this bit is set.
		Bit 2: Share standard output if bit is set.
		Bit 3: Share standard error if bit is set.

    Returns: zero return value indicates failure.
*/
static int C_fcall
C_process(const char * app, const char * cmdlin, const char ** env,
	  int * phandle,
	  int * pstdin_fd, int * pstdout_fd, int * pstderr_fd,
	  int params)
{
    int i;
    int success = TRUE;
    const int f_share_io[3] = { params & 1, params & 2, params & 4};
    int io_fds[3] = { -1, -1, -1 };
    HANDLE
	child_io_handles[3] = { NULL, NULL, NULL },
	standard_io_handles[3] = {
	    GetStdHandle(STD_INPUT_HANDLE),
	    GetStdHandle(STD_OUTPUT_HANDLE),
	    GetStdHandle(STD_ERROR_HANDLE)};
    const char modes[3] = "rww";
    HANDLE cur_process = GetCurrentProcess(), child_process = NULL;
    void* envblk = NULL;

    /****** create io handles & fds ***/

    for (i=0; i<3 && success; ++i)
    {
	if (f_share_io[i])
	{
	    success = DuplicateHandle(
		cur_process, standard_io_handles[i],
		cur_process, &child_io_handles[i],
		0, FALSE, DUPLICATE_SAME_ACCESS);
	}
	else
	{
	    HANDLE a, b;
	    success = CreatePipe(&a,&b,NULL,0);
	    if(success)
	    {
		HANDLE parent_end;
		if (modes[i]=='r') { child_io_handles[i]=a; parent_end=b; }
		else		   { parent_end=a; child_io_handles[i]=b; }
		success = (io_fds[i] = _open_osfhandle((long)parent_end,0)) >= 0;
	    }
	}
    }

    /****** make handles inheritable */

    for (i=0; i<3 && success; ++i)
	success = SetHandleInformation(child_io_handles[i], HANDLE_FLAG_INHERIT, -1);

#if 0 /* Requires a sorted list by key! */
    /****** create environment block if necessary ****/

    if (env && success)
    {
	char** p;
	int len = 0;

	for (p = env; *p; ++p) len += strlen(*p) + 1;

	if (envblk = C_malloc(len + 1))
	{
	    char* pb = (char*)envblk;
	    for (p = env; *p; ++p)
	    {
		strcpy(pb, *p);
		pb += strlen(*p) + 1;
	    }
	    *pb = '\0';
	}
	else
	    success = FALSE;
    }
#endif

    /****** finally spawn process ****/

    if (success)
    {
	PROCESS_INFORMATION pi;
	STARTUPINFO si;

	ZeroMemory(&pi,sizeof pi);
	ZeroMemory(&si,sizeof si);
	si.cb = sizeof si;
	si.dwFlags = STARTF_USESTDHANDLES;
	si.hStdInput = child_io_handles[0];
	si.hStdOutput = child_io_handles[1];
	si.hStdError = child_io_handles[2];

	/* FIXME passing 'app' param causes failure & possible stack corruption */
	success = CreateProcess(
	    NULL, (char*)cmdlin, NULL, NULL, TRUE, 0, envblk, NULL, &si, &pi);

	if (success)
	{
	    child_process=pi.hProcess;
	    CloseHandle(pi.hThread);
	}
	else
	    set_last_errno();
    }
    else
	set_last_errno();

    /****** cleanup & return *********/

    /* parent must close child end */
    for (i=0; i<3; ++i) CloseHandle(child_io_handles[i]);

    if (success)
    {
	*phandle = (int)child_process;
	*pstdin_fd = io_fds[0];
	*pstdout_fd = io_fds[1];
	*pstderr_fd = io_fds[2];
    }
    else
    {
	for (i=0; i<3; ++i) _close(io_fds[i]);
    }

    return success;
}

static int set_file_mtime(char *filename, C_word tm)
{
  struct _utimbuf tb;

  tb.actime = tb.modtime = C_num_to_int(tm);
  return _utime(filename, &tb);
}

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

static C_TLS C_word lf[395];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,41),40,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,54,57,32,108,111,99,55,48,32,109,115,103,55,49,32,46,32,97,114,103,115,55,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,115,116,97,116,32,102,105,108,101,56,51,32,108,105,110,107,56,52,32,101,114,114,56,53,32,108,111,99,56,54,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,22),40,102,95,49,57,56,53,32,102,57,56,32,46,32,116,109,112,57,55,57,57,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,13),40,102,95,50,48,50,48,32,102,49,50,54,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,13),40,102,95,50,48,50,54,32,102,49,50,57,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,13),40,102,95,50,48,51,50,32,102,49,51,50,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,13),40,102,95,50,48,51,56,32,102,49,51,53,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,13),40,102,95,50,48,52,52,32,102,49,51,56,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,28),40,102,95,50,48,53,48,32,102,105,108,101,49,52,54,32,46,32,116,109,112,49,52,53,49,52,55,41,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,16),40,102,95,50,49,52,48,32,102,105,108,101,49,54,53,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,16),40,102,95,50,49,53,48,32,102,105,108,101,49,54,55,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,16),40,102,95,50,49,54,48,32,102,105,108,101,49,54,57,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,16),40,102,95,50,49,55,48,32,102,105,108,101,49,55,49,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,102,95,50,49,56,48,32,102,105,108,101,49,55,51,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,16),40,102,95,50,49,57,48,32,102,105,108,101,49,55,53,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,16),40,102,95,50,50,48,48,32,102,105,108,101,49,55,55,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,20),40,102,95,50,50,49,48,32,46,32,116,109,112,49,56,51,49,56,52,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,14),40,114,109,100,105,114,32,100,105,114,50,49,51,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,11),40,103,50,50,48,32,102,50,50,56,41,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,49,57,32,103,50,50,53,50,51,53,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,28),40,102,95,50,50,53,54,32,110,97,109,101,50,48,52,32,46,32,116,109,112,50,48,51,50,48,53,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,20),40,102,95,50,51,54,48,32,46,32,116,109,112,50,52,55,50,52,56,41,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,97,50,53,50,55,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,11),40,103,51,48,57,32,109,51,49,49,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,110,115,51,48,51,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,46),40,97,50,53,51,51,32,100,105,114,50,56,54,50,56,55,50,57,50,32,102,105,108,50,56,56,50,56,57,50,57,51,32,101,120,116,50,57,48,50,57,49,50,57,52,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,20),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,50,56,52,41,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,19),40,102,95,50,53,48,55,32,46,32,112,97,116,104,115,50,56,50,41,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,50,54,57,57,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,7),40,97,50,55,48,52,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,7),40,97,50,55,50,56,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,102,115,51,52,48,32,114,51,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,13),40,102,95,50,55,56,57,32,120,51,51,56,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,15),40,102,95,50,56,48,56,32,46,32,95,51,51,50,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,15),40,102,95,50,56,48,48,32,46,32,95,51,51,49,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,82),40,35,35,115,121,115,35,102,105,110,100,45,102,105,108,101,115,32,100,105,114,51,49,56,32,112,114,101,100,51,49,57,32,97,99,116,105,111,110,51,50,48,32,105,100,51,50,49,32,108,105,109,105,116,51,50,50,32,102,111,108,108,111,119,51,50,51,32,100,111,116,51,50,52,32,108,111,99,51,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,42),40,98,111,100,121,51,55,54,32,112,114,101,100,51,56,56,32,97,99,116,105,111,110,51,56,57,32,105,100,51,57,48,32,108,105,109,105,116,51,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,50),40,100,101,102,45,108,105,109,105,116,51,56,49,32,37,112,114,101,100,51,55,50,51,57,51,32,37,97,99,116,105,111,110,51,55,51,51,57,52,32,37,105,100,51,55,52,51,57,53,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,37),40,100,101,102,45,105,100,51,56,48,32,37,112,114,101,100,51,55,50,51,57,55,32,37,97,99,116,105,111,110,51,55,51,51,57,56,41,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,17),40,97,50,56,52,53,32,120,52,48,49,32,121,52,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,27),40,100,101,102,45,97,99,116,105,111,110,51,55,57,32,37,112,114,101,100,51,55,50,52,48,48,41,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,14),40,97,50,56,53,54,32,46,32,95,52,48,52,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,112,114,101,100,51,55,56,41,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,50,57,53,56,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,7),40,97,50,57,54,49,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,7),40,97,50,57,54,52,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,50,57,54,55,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,18),40,102,95,50,57,55,51,32,120,52,50,50,32,121,52,50,51,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,50,57,55,48,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,15),40,102,95,50,57,56,49,32,46,32,95,52,50,48,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,7),40,97,50,57,55,56,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,19),40,97,50,57,51,52,32,46,32,116,109,112,52,49,55,52,49,56,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,25),40,102,95,50,56,49,52,32,100,105,114,51,54,52,32,46,32,97,114,103,115,51,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,45,116,105,109,101,45,118,101,99,116,111,114,32,108,111,99,52,52,55,32,116,109,52,52,56,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,20),40,102,95,51,48,49,56,32,46,32,116,109,112,52,53,53,52,53,54,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,20),40,102,95,51,48,53,50,32,46,32,116,109,112,52,54,57,52,55,48,41,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,20),40,102,95,51,48,57,54,32,46,32,116,109,112,52,56,57,52,57,48,41,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,14),40,102,95,51,49,52,55,32,116,109,53,48,48,41,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,26),40,102,95,51,49,55,50,32,116,109,53,50,51,32,46,32,116,109,112,53,50,50,53,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,39),40,102,95,51,50,54,55,32,102,105,108,101,110,97,109,101,53,57,52,32,102,108,97,103,115,53,57,53,32,46,32,109,111,100,101,53,57,54,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,14),40,102,95,51,51,48,56,32,102,100,54,48,53,41,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,34),40,102,95,51,51,50,54,32,102,100,54,48,57,32,115,105,122,101,54,49,48,32,46,32,98,117,102,102,101,114,54,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,34),40,102,95,51,51,55,49,32,102,100,54,50,49,32,98,117,102,102,101,114,54,50,50,32,46,32,115,105,122,101,54,50,51,41,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,20),40,102,95,51,52,49,51,32,116,101,109,112,108,97,116,101,54,51,51,41,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,17),40,102,95,51,52,53,49,32,102,110,97,109,101,54,52,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,20),40,102,54,53,53,56,32,102,110,97,109,101,54,52,56,54,53,53,55,41,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,20),40,102,54,53,53,50,32,102,110,97,109,101,54,52,56,54,53,53,49,41,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,20),40,102,54,53,52,54,32,102,110,97,109,101,54,52,56,54,53,52,53,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,20),40,102,54,53,52,48,32,102,110,97,109,101,54,52,56,54,53,51,57,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,35),40,102,95,51,52,56,48,32,112,111,114,116,54,53,52,32,112,111,115,54,53,53,32,46,32,119,104,101,110,99,101,54,53,54,41,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,11),40,103,54,57,53,32,120,55,48,51,41,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,57,52,32,103,55,48,48,55,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,28),40,102,95,51,53,52,50,32,110,97,109,101,54,55,56,32,46,32,116,109,112,54,55,55,54,55,57,41,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,16),40,102,95,51,55,48,49,32,110,97,109,101,55,50,57,41};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,26),40,99,104,101,99,107,32,99,109,100,55,51,57,32,105,110,112,55,52,48,32,114,55,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,22),40,102,95,51,55,54,50,32,99,109,100,55,52,53,32,46,32,109,55,52,54,41,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,22),40,102,95,51,55,57,56,32,99,109,100,55,53,52,32,46,32,109,55,53,53,41,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,16),40,102,95,51,56,51,52,32,112,111,114,116,55,54,51,41};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,7),40,97,51,56,54,49,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,20),40,97,51,56,54,55,32,46,32,114,101,115,117,108,116,115,55,55,57,41,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,33),40,102,95,51,56,53,51,32,99,109,100,55,55,53,32,112,114,111,99,55,55,54,32,46,32,109,111,100,101,55,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,7),40,97,51,56,56,53,41,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,20),40,97,51,56,57,49,32,46,32,114,101,115,117,108,116,115,55,56,54,41,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,33),40,102,95,51,56,55,55,32,99,109,100,55,56,50,32,112,114,111,99,55,56,51,32,46,32,109,111,100,101,55,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,20),40,97,51,57,49,48,32,46,32,114,101,115,117,108,116,115,55,57,52,41,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,34),40,102,95,51,57,48,49,32,99,109,100,55,56,57,32,116,104,117,110,107,55,57,48,32,46,32,109,111,100,101,55,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,20),40,97,51,57,51,48,32,46,32,114,101,115,117,108,116,115,56,48,52,41,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,34),40,102,95,51,57,50,49,32,99,109,100,55,57,57,32,116,104,117,110,107,56,48,48,32,46,32,109,111,100,101,56,48,49,41,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,20),40,102,95,51,57,52,49,32,46,32,116,109,112,56,49,51,56,49,52,41,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,15),40,102,95,52,48,49,55,32,115,105,103,56,53,50,41,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,23),40,102,95,52,48,50,54,32,115,105,103,56,53,52,32,112,114,111,99,56,53,53,41,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,27),40,102,95,52,48,51,57,32,114,101,97,115,111,110,56,53,57,32,115,116,97,116,101,56,54,48,41,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,22),40,102,95,52,48,57,53,32,102,110,97,109,101,57,48,52,32,109,57,48,53,41,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,33),40,99,104,101,99,107,32,102,105,108,101,110,97,109,101,57,49,48,32,97,99,99,57,49,49,32,108,111,99,57,49,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,20),40,102,95,52,49,52,57,32,102,105,108,101,110,97,109,101,57,49,54,41,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,20),40,102,95,52,49,53,53,32,102,105,108,101,110,97,109,101,57,49,55,41,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,20),40,102,95,52,49,54,49,32,102,105,108,101,110,97,109,101,57,49,56,41,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,25),40,109,111,100,101,32,105,110,112,57,50,55,32,109,57,50,56,32,108,111,99,57,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,25),40,99,104,101,99,107,32,102,100,57,51,57,32,105,110,112,57,52,48,32,114,57,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,21),40,102,95,52,50,50,53,32,102,100,57,52,53,32,46,32,109,57,52,54,41,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,21),40,102,95,52,50,51,57,32,102,100,57,52,56,32,46,32,109,57,52,57,41,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,16),40,102,95,52,50,53,51,32,112,111,114,116,57,53,53,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,24),40,102,95,52,50,56,56,32,111,108,100,57,54,49,32,46,32,110,101,119,57,54,50,41};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,22),40,102,95,52,51,49,56,32,118,97,114,57,55,48,32,118,97,108,57,55,49,41,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,15),40,102,95,52,51,51,53,32,118,97,114,57,55,54,41,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,11),40,115,99,97,110,32,106,57,57,48,41,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,57,56,55,41,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,8),40,102,95,52,51,53,53,41};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,8),40,102,95,52,52,50,48,41};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,19),40,102,95,52,52,51,50,32,46,32,99,111,100,101,49,48,48,51,41,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,17),40,102,95,52,52,52,56,32,112,111,114,116,49,48,48,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,17),40,102,95,52,52,54,55,32,112,111,114,116,49,48,49,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,37),40,102,95,52,52,56,50,32,112,111,114,116,49,48,49,50,32,109,111,100,101,49,48,49,51,32,46,32,115,105,122,101,49,48,49,52,41,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,105,108,115,116,49,48,52,50,32,111,108,115,116,49,48,52,51,41};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,37),40,36,113,117,111,116,101,45,97,114,103,115,45,108,105,115,116,32,108,115,116,49,48,51,48,32,101,120,97,99,116,102,49,48,51,49,41,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,38),40,115,101,116,97,114,103,32,97,49,48,53,50,49,48,53,54,32,97,49,48,53,49,49,48,53,55,32,97,49,48,53,48,49,48,53,56,41,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,38),40,115,101,116,101,110,118,32,97,49,48,54,50,49,48,54,54,32,97,49,48,54,49,49,48,54,55,32,97,49,48,54,48,49,48,54,56,41,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,24),40,100,111,108,111,111,112,49,48,55,52,32,108,49,48,55,54,32,105,49,48,55,55,41};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,61),40,98,117,105,108,100,45,101,120,101,99,45,97,114,103,118,101,99,32,108,111,99,49,48,55,48,32,108,115,116,49,48,55,49,32,97,114,103,118,101,99,45,115,101,116,116,101,114,49,48,55,50,32,105,100,120,49,48,55,51,41,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,67),40,36,101,120,101,99,45,115,101,116,117,112,32,108,111,99,49,48,56,51,32,102,105,108,101,110,97,109,101,49,48,56,52,32,97,114,103,108,115,116,49,48,56,53,32,101,110,118,108,115,116,49,48,56,54,32,101,120,97,99,116,102,49,48,56,55,41,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,53),40,36,101,120,101,99,45,116,101,97,114,100,111,119,110,32,108,111,99,49,48,57,54,32,109,115,103,49,48,57,55,32,102,105,108,101,110,97,109,101,49,48,57,56,32,114,101,115,49,48,57,57,41,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,35),40,102,95,52,55,54,48,32,102,105,108,101,110,97,109,101,49,49,48,57,32,46,32,116,109,112,49,49,48,56,49,49,49,48,41,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,44),40,102,95,52,56,51,54,32,109,111,100,101,49,49,51,48,32,102,105,108,101,110,97,109,101,49,49,51,49,32,46,32,116,109,112,49,49,50,57,49,49,51,50,41,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,8),40,102,95,52,57,49,50,41};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,8),40,102,95,52,57,49,53,41};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,19),40,102,95,52,57,51,54,32,99,109,100,108,105,110,49,49,53,53,41,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,25),40,102,95,52,57,52,50,32,102,49,49,53,55,32,46,32,97,114,103,115,49,49,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,90),40,102,95,53,48,51,52,32,108,111,99,49,49,57,57,32,99,109,100,49,50,48,48,32,97,114,103,115,49,50,48,49,32,101,110,118,49,50,48,50,32,115,116,100,111,117,116,102,49,50,48,51,32,115,116,100,105,110,102,49,50,48,52,32,115,116,100,101,114,114,102,49,50,48,53,32,46,32,116,109,112,49,49,57,56,49,50,48,54,41,0,0,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,21),40,103,49,50,54,57,32,103,49,50,56,48,49,50,56,49,49,50,56,50,41,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,54,56,32,103,49,50,55,52,49,50,56,54,41,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,19),40,99,104,107,115,116,114,108,115,116,32,108,115,116,49,50,54,53,41,0,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,7),40,97,53,50,48,54,41,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,38),40,97,53,50,49,50,32,105,110,49,50,57,51,32,111,117,116,49,50,57,52,32,112,105,100,49,50,57,53,32,101,114,114,49,50,57,54,41,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,63),40,37,112,114,111,99,101,115,115,32,108,111,99,49,50,53,56,32,101,114,114,63,49,50,53,57,32,99,109,100,49,50,54,48,32,97,114,103,115,49,50,54,49,32,101,110,118,49,50,54,50,32,101,120,97,99,116,102,49,50,54,51,41,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,30),40,102,95,53,50,52,48,32,99,109,100,49,51,48,53,32,46,32,116,109,112,49,51,48,52,49,51,48,54,41,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,30),40,102,95,53,51,48,57,32,99,109,100,49,51,50,52,32,46,32,116,109,112,49,51,50,51,49,51,50,53,41,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,27),40,102,95,53,51,55,56,32,112,105,100,49,51,52,48,32,110,111,104,97,110,103,49,51,52,49,41,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,7),40,97,53,52,49,48,41,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,36),40,97,53,52,49,54,32,101,112,105,100,49,51,53,51,32,101,110,111,114,109,49,51,53,52,32,101,99,111,100,101,49,51,53,53,41,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,27),40,102,95,53,51,57,48,32,112,105,100,49,51,52,51,32,46,32,97,114,103,115,49,51,52,52,41,0,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,14),40,102,95,53,52,53,48,32,116,49,51,53,57,41,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,8),40,102,95,53,52,53,51,41};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,8),40,102,95,53,52,54,53,41};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,8),40,102,95,53,52,57,54,41};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,20),40,102,95,53,53,49,49,32,46,32,95,49,51,57,53,49,51,57,57,41,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,20),40,102,95,53,53,49,55,32,46,32,95,49,52,48,50,49,52,48,54,41,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,20),40,102,95,53,53,50,51,32,46,32,95,49,52,48,56,49,52,49,50,41,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,20),40,102,95,53,53,50,57,32,46,32,95,49,52,49,52,49,52,49,56,41,0,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,20),40,102,95,53,53,51,53,32,46,32,95,49,52,50,48,49,52,50,52,41,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,20),40,102,95,53,53,52,49,32,46,32,95,49,52,50,54,49,52,51,48,41,0,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,20),40,102,95,53,53,52,55,32,46,32,95,49,52,51,50,49,52,51,54,41,0,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,20),40,102,95,53,53,53,51,32,46,32,95,49,52,51,56,49,52,52,50,41,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,20),40,102,95,53,53,53,57,32,46,32,95,49,52,52,52,49,52,52,56,41,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,20),40,102,95,53,53,54,53,32,46,32,95,49,52,53,48,49,52,53,52,41,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,20),40,102,95,53,53,55,49,32,46,32,95,49,52,53,54,49,52,54,48,41,0,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,20),40,102,95,53,53,55,55,32,46,32,95,49,52,54,50,49,52,54,54,41,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,20),40,102,95,53,53,56,51,32,46,32,95,49,52,54,56,49,52,55,50,41,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,20),40,102,95,53,53,56,57,32,46,32,95,49,52,55,52,49,52,55,56,41,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,20),40,102,95,53,53,57,53,32,46,32,95,49,52,56,48,49,52,56,52,41,0,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,48,49,32,46,32,95,49,52,56,54,49,52,57,48,41,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,48,55,32,46,32,95,49,52,57,50,49,52,57,54,41,0,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,49,51,32,46,32,95,49,52,57,56,49,53,48,50,41,0,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,49,57,32,46,32,95,49,53,48,52,49,53,48,56,41,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,50,53,32,46,32,95,49,53,49,48,49,53,49,52,41,0,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,51,49,32,46,32,95,49,53,49,54,49,53,50,48,41,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,51,55,32,46,32,95,49,53,50,50,49,53,50,54,41,0,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,52,51,32,46,32,95,49,53,50,56,49,53,51,50,41,0,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,52,57,32,46,32,95,49,53,51,52,49,53,51,56,41,0,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,53,53,32,46,32,95,49,53,52,48,49,53,52,52,41,0,0,0,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,54,49,32,46,32,95,49,53,52,54,49,53,53,48,41,0,0,0,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,54,55,32,46,32,95,49,53,53,50,49,53,53,54,41,0,0,0,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,55,51,32,46,32,95,49,53,53,56,49,53,54,50,41,0,0,0,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,55,57,32,46,32,95,49,53,54,52,49,53,54,56,41,0,0,0,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,56,53,32,46,32,95,49,53,55,48,49,53,55,52,41,0,0,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,57,49,32,46,32,95,49,53,55,54,49,53,56,48,41,0,0,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,20),40,102,95,53,54,57,55,32,46,32,95,49,53,56,50,49,53,56,54,41,0,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,20),40,102,95,53,55,48,51,32,46,32,95,49,53,56,56,49,53,57,50,41,0,0,0,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,20),40,102,95,53,55,48,57,32,46,32,95,49,53,57,52,49,53,57,56,41,0,0,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,20),40,102,95,53,55,49,53,32,46,32,95,49,54,48,48,49,54,48,52,41,0,0,0,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,20),40,102,95,53,55,50,49,32,46,32,95,49,54,48,54,49,54,49,48,41,0,0,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,20),40,102,95,53,55,50,55,32,46,32,95,49,54,49,50,49,54,49,54,41,0,0,0,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,20),40,102,95,53,55,51,51,32,46,32,95,49,54,49,56,49,54,50,50,41,0,0,0,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,20),40,102,95,53,55,51,57,32,46,32,95,49,54,50,52,49,54,50,56,41,0,0,0,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,20),40,102,95,53,55,52,53,32,46,32,95,49,54,51,48,49,54,51,52,41,0,0,0,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,20),40,102,95,53,55,53,49,32,46,32,95,49,54,51,54,49,54,52,48,41,0,0,0,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,20),40,102,95,53,55,53,55,32,46,32,95,49,54,52,50,49,54,52,54,41,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,14),40,102,95,53,55,54,52,32,95,49,54,52,57,41,0,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,14),40,102,95,53,55,54,55,32,95,49,54,53,49,41,0,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,15),40,97,53,55,56,53,32,112,111,114,116,54,54,54,41,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,19),40,97,53,56,50,54,32,46,32,116,109,112,52,51,51,52,51,52,41,0,0,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,13),40,97,53,56,54,48,32,117,109,52,52,52,41,0,0,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,12),40,97,53,56,54,54,32,102,49,48,57,41,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,17),40,97,53,56,55,50,32,102,49,49,49,32,116,49,49,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k5002 */
static C_word C_fcall stub1170(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7) C_regparm;
C_regparm static C_word C_fcall stub1170(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
int *t3=(int *)C_c_pointer_or_null(C_a3);
int *t4=(int *)C_c_pointer_or_null(C_a4);
int *t5=(int *)C_c_pointer_or_null(C_a5);
int *t6=(int *)C_c_pointer_or_null(C_a6);
int t7=(int )C_unfix(C_a7);
C_r=C_mk_bool(C_process(t0,t1,t2,t3,t4,t5,t6,t7));
return C_r;}

/* from f_4912 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static C_word C_fcall stub1147(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1147(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from k4653 */
static C_word C_fcall stub1063(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1063(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_env(t0,t1,t2);
return C_r;}

/* from k4636 */
static C_word C_fcall stub1053(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1053(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from k4429 */
static C_word C_fcall stub1000(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1000(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub994(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub994(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char *z = (_daylight ? _tzname[1] : _tzname[0]);
C_return(z);
C_ret:
#undef return

return C_r;}

/* from k4352 */
static C_word C_fcall stub982(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub982(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
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

/* from k3093 */
static C_word C_fcall stub481(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub481(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from k5881 in k5904 in a5872 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static C_word C_fcall stub118(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub118(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_fix((C_word)set_file_mtime(t0,t1));
return C_r;}

/* from k1920 */
static C_word C_fcall stub65(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub65(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1896)
static void C_ccall f_1896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1899)
static void C_ccall f_1899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1905)
static void C_ccall f_1905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1911)
static void C_ccall f_1911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5873)
static void C_ccall f_5873(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5906)
static void C_ccall f_5906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5883)
static void C_ccall f_5883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5893)
static void C_fcall f_5893(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5867)
static void C_ccall f_5867(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5871)
static void C_ccall f_5871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2018)
static void C_ccall f_2018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5861)
static void C_ccall f_5861(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5827)
static void C_ccall f_5827(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5827)
static void C_ccall f_5827r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5831)
static void C_ccall f_5831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2997)
static void C_ccall f_2997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5786)
static void C_ccall f_5786(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5802)
static void C_ccall f_5802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5790)
static void C_ccall f_5790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5793)
static void C_ccall f_5793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3540)
static void C_ccall f_3540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4015)
static void C_ccall f_4015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5767)
static void C_ccall f_5767(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5764)
static void C_ccall f_5764(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5757)
static void C_ccall f_5757(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5751)
static void C_ccall f_5751(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5745)
static void C_ccall f_5745(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5739)
static void C_ccall f_5739(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5727)
static void C_ccall f_5727(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5721)
static void C_ccall f_5721(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5715)
static void C_ccall f_5715(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5709)
static void C_ccall f_5709(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5703)
static void C_ccall f_5703(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5697)
static void C_ccall f_5697(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5691)
static void C_ccall f_5691(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5685)
static void C_ccall f_5685(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5679)
static void C_ccall f_5679(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5673)
static void C_ccall f_5673(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5667)
static void C_ccall f_5667(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5661)
static void C_ccall f_5661(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5655)
static void C_ccall f_5655(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5649)
static void C_ccall f_5649(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5643)
static void C_ccall f_5643(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5637)
static void C_ccall f_5637(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5631)
static void C_ccall f_5631(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5625)
static void C_ccall f_5625(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5619)
static void C_ccall f_5619(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5613)
static void C_ccall f_5613(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5607)
static void C_ccall f_5607(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5601)
static void C_ccall f_5601(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5595)
static void C_ccall f_5595(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5589)
static void C_ccall f_5589(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5583)
static void C_ccall f_5583(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5577)
static void C_ccall f_5577(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5571)
static void C_ccall f_5571(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5565)
static void C_ccall f_5565(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5559)
static void C_ccall f_5559(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5553)
static void C_ccall f_5553(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5547)
static void C_ccall f_5547(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5541)
static void C_ccall f_5541(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5523)
static void C_ccall f_5523(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5517)
static void C_ccall f_5517(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5511)
static void C_ccall f_5511(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5496)
static void C_ccall f_5496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5506)
static void C_ccall f_5506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5465)
static void C_ccall f_5465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5491)
static void C_ccall f_5491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5476)
static void C_ccall f_5476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5480)
static void C_ccall f_5480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5484)
static void C_ccall f_5484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5488)
static void C_ccall f_5488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5453)
static void C_ccall f_5453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5450)
static void C_ccall f_5450(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5390)
static void C_ccall f_5390(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5390)
static void C_ccall f_5390r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5417)
static void C_ccall f_5417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5427)
static void C_ccall f_5427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5411)
static void C_ccall f_5411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5378)
static void C_ccall f_5378(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5309)
static void C_ccall f_5309(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5309)
static void C_ccall f_5309r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5240)
static void C_ccall f_5240(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5240)
static void C_ccall f_5240r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5153)
static void C_fcall f_5153(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5234)
static void C_ccall f_5234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5238)
static void C_ccall f_5238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5199)
static void C_ccall f_5199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5202)
static void C_ccall f_5202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5213)
static void C_ccall f_5213(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5207)
static void C_ccall f_5207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5155)
static void C_fcall f_5155(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5172)
static void C_fcall f_5172(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5182)
static void C_ccall f_5182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5160)
static void C_fcall f_5160(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5034)
static void C_ccall f_5034(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,...) C_noret;
C_noret_decl(f_5034)
static void C_ccall f_5034r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t10) C_noret;
C_noret_decl(f_5038)
static void C_ccall f_5038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5129)
static void C_ccall f_5129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5097)
static void C_ccall f_5097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5101)
static void C_ccall f_5101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5105)
static void C_ccall f_5105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5109)
static void C_ccall f_5109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5113)
static void C_ccall f_5113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4976)
static void C_ccall f_4976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4980)
static void C_ccall f_4980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5090)
static void C_ccall f_5090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5070)
static void C_ccall f_5070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5074)
static void C_ccall f_5074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5078)
static void C_ccall f_5078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4942)
static void C_ccall f_4942(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4942)
static void C_ccall f_4942r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4959)
static void C_ccall f_4959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4963)
static void C_ccall f_4963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4936)
static void C_ccall f_4936(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4931)
static void C_ccall f_4931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4912)
static void C_ccall f_4912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4836)
static void C_ccall f_4836(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4836)
static void C_ccall f_4836r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4864)
static void C_ccall f_4864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4760)
static void C_ccall f_4760(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4760)
static void C_ccall f_4760r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4788)
static void C_ccall f_4788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4745)
static void C_fcall f_4745(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4749)
static void C_ccall f_4749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4709)
static void C_fcall f_4709(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4719)
static void C_ccall f_4719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4736)
static void C_ccall f_4736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4722)
static void C_ccall f_4722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4725)
static void C_ccall f_4725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4732)
static void C_ccall f_4732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4659)
static void C_fcall f_4659(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4671)
static void C_fcall f_4671(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4690)
static void C_ccall f_4690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4642)
static void C_ccall f_4642(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4625)
static void C_ccall f_4625(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4546)
static void C_fcall f_4546(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4589)
static void C_fcall f_4589(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4560)
static C_word C_fcall f_4560(C_word t0,C_word t1);
C_noret_decl(f_4617)
static void C_ccall f_4617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4486)
static void C_ccall f_4486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4492)
static void C_ccall f_4492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4501)
static void C_fcall f_4501(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4467)
static void C_ccall f_4467(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4474)
static void C_ccall f_4474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4452)
static void C_ccall f_4452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4455)
static void C_ccall f_4455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4432)
static void C_ccall f_4432(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4432)
static void C_ccall f_4432r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4420)
static void C_ccall f_4420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4355)
static void C_ccall f_4355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4361)
static void C_fcall f_4361(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4365)
static void C_ccall f_4365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4373)
static void C_fcall f_4373(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4403)
static void C_ccall f_4403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4391)
static void C_ccall f_4391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4335)
static void C_ccall f_4335(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4318)
static void C_ccall f_4318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4329)
static void C_ccall f_4329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4288)
static void C_ccall f_4288(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4288)
static void C_ccall f_4288r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4295)
static void C_fcall f_4295(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4304)
static void C_ccall f_4304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4253)
static void C_ccall f_4253(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4257)
static void C_ccall f_4257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4286)
static void C_ccall f_4286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4272)
static void C_ccall f_4272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4266)
static void C_ccall f_4266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4251)
static void C_ccall f_4251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4237)
static void C_ccall f_4237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4207)
static void C_fcall f_4207(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4211)
static void C_ccall f_4211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4223)
static void C_ccall f_4223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4170)
static void C_fcall f_4170(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4178)
static void C_ccall f_4178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4161)
static void C_ccall f_4161(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4155)
static void C_ccall f_4155(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4149)
static void C_ccall f_4149(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4125)
static void C_fcall f_4125(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4147)
static void C_ccall f_4147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4143)
static void C_ccall f_4143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4135)
static void C_ccall f_4135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4095)
static void C_ccall f_4095(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4123)
static void C_ccall f_4123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4049)
static void C_ccall f_4049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4026)
static void C_ccall f_4026(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4017)
static void C_ccall f_4017(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3957)
static void C_ccall f_3957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3948)
static void C_ccall f_3948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3921)
static void C_ccall f_3921(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3921)
static void C_ccall f_3921r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3925)
static void C_ccall f_3925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3931)
static void C_ccall f_3931(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3931)
static void C_ccall f_3931r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3935)
static void C_ccall f_3935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3901)
static void C_ccall f_3901(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3901)
static void C_ccall f_3901r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3905)
static void C_ccall f_3905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3915)
static void C_ccall f_3915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3877)
static void C_ccall f_3877(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3877)
static void C_ccall f_3877r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3896)
static void C_ccall f_3896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3886)
static void C_ccall f_3886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3857)
static void C_ccall f_3857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3868)
static void C_ccall f_3868(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3868)
static void C_ccall f_3868r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3872)
static void C_ccall f_3872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3862)
static void C_ccall f_3862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3834)
static void C_ccall f_3834(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3798)
static void C_ccall f_3798(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3798)
static void C_ccall f_3798r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3829)
static void C_ccall f_3829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3812)
static void C_ccall f_3812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3762)
static void C_ccall f_3762(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3762)
static void C_ccall f_3762r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3793)
static void C_ccall f_3793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3783)
static void C_ccall f_3783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3776)
static void C_ccall f_3776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3744)
static void C_fcall f_3744(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3748)
static void C_ccall f_3748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3760)
static void C_ccall f_3760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3701)
static void C_ccall f_3701(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3708)
static void C_ccall f_3708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3717)
static void C_ccall f_3717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3711)
static void C_ccall f_3711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3542)
static void C_ccall f_3542(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3542)
static void C_ccall f_3542r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3546)
static void C_ccall f_3546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3552)
static void C_ccall f_3552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3669)
static void C_ccall f_3669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3560)
static void C_ccall f_3560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3634)
static void C_fcall f_3634(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3564)
static void C_fcall f_3564(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3569)
static void C_ccall f_3569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3598)
static void C_fcall f_3598(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3617)
static void C_ccall f_3617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3609)
static void C_ccall f_3609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3555)
static void C_ccall f_3555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3493)
static void C_ccall f_3493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3505)
static void C_ccall f_3505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3499)
static void C_ccall f_3499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6540)
static void C_ccall f6540(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6546)
static void C_ccall f6546(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6552)
static void C_ccall f6552(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6558)
static void C_ccall f6558(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3451)
static void C_ccall f_3451(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3413)
static void C_ccall f_3413(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3443)
static void C_ccall f_3443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3426)
static void C_ccall f_3426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3433)
static void C_ccall f_3433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3393)
static void C_ccall f_3393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3387)
static void C_ccall f_3387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3326)
static void C_ccall f_3326(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3326)
static void C_ccall f_3326r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3339)
static void C_ccall f_3339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3351)
static void C_ccall f_3351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3342)
static void C_ccall f_3342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3308)
static void C_ccall f_3308(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3267)
static void C_ccall f_3267(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3267)
static void C_ccall f_3267r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3300)
static void C_ccall f_3300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3284)
static void C_ccall f_3284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3293)
static void C_ccall f_3293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3287)
static void C_ccall f_3287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3172)
static void C_ccall f_3172(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3172)
static void C_ccall f_3172r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3176)
static void C_ccall f_3176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3179)
static void C_ccall f_3179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3201)
static void C_ccall f_3201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3188)
static void C_ccall f_3188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3147)
static void C_ccall f_3147(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3151)
static void C_ccall f_3151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3096)
static void C_ccall f_3096(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3096)
static void C_ccall f_3096r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3100)
static void C_ccall f_3100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3106)
static void C_ccall f_3106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3052)
static void C_ccall f_3052(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3052)
static void C_ccall f_3052r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2999)
static void C_fcall f_2999(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2814)
static void C_ccall f_2814(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2814)
static void C_ccall f_2814r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2989)
static void C_ccall f_2989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2824)
static void C_fcall f_2824(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2939)
static void C_ccall f_2939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2971)
static void C_ccall f_2971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2968)
static void C_ccall f_2968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2965)
static void C_ccall f_2965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2959)
static void C_ccall f_2959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2851)
static void C_fcall f_2851(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2840)
static void C_fcall f_2840(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2835)
static void C_fcall f_2835(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2830)
static void C_fcall f_2830(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2825)
static void C_fcall f_2825(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2616)
static void C_fcall f_2616(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_2800)
static void C_ccall f_2800(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2623)
static void C_fcall f_2623(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2785)
static void C_ccall f_2785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2788)
static void C_ccall f_2788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2789)
static void C_ccall f_2789(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2626)
static void C_fcall f_2626(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2775)
static void C_ccall f_2775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2635)
static void C_fcall f_2635(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2654)
static void C_ccall f_2654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2761)
static void C_ccall f_2761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2768)
static void C_ccall f_2768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2755)
static void C_ccall f_2755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2748)
static void C_ccall f_2748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2688)
static void C_ccall f_2688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2742)
static void C_ccall f_2742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2739)
static void C_ccall f_2739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2729)
static void C_ccall f_2729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2705)
static void C_ccall f_2705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2713)
static void C_ccall f_2713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2717)
static void C_ccall f_2717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2700)
static void C_ccall f_2700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2698)
static void C_ccall f_2698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2679)
static void C_ccall f_2679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2507)
static void C_ccall f_2507(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2507)
static void C_ccall f_2507r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2513)
static void C_fcall f_2513(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2534)
static void C_ccall f_2534(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2610)
static void C_ccall f_2610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2538)
static void C_ccall f_2538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2545)
static void C_ccall f_2545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2547)
static void C_fcall f_2547(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2564)
static void C_ccall f_2564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2568)
static void C_fcall f_2568(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2528)
static void C_ccall f_2528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2360)
static void C_ccall f_2360(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2360)
static void C_ccall f_2360r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2385)
static void C_ccall f_2385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2388)
static void C_ccall f_2388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2391)
static void C_ccall f_2391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2475)
static void C_ccall f_2475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2395)
static void C_ccall f_2395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2409)
static void C_fcall f_2409(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2419)
static void C_ccall f_2419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2431)
static void C_fcall f_2431(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2441)
static void C_ccall f_2441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2256)
static void C_ccall f_2256(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2256)
static void C_ccall f_2256r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2260)
static void C_ccall f_2260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2315)
static void C_fcall f_2315(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2325)
static void C_ccall f_2325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2288)
static void C_fcall f_2288(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2262)
static void C_fcall f_2262(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2266)
static void C_ccall f_2266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2210)
static void C_ccall f_2210(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2210)
static void C_ccall f_2210r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2214)
static void C_ccall f_2214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2223)
static void C_ccall f_2223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2226)
static void C_ccall f_2226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2200)
static void C_ccall f_2200(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2208)
static void C_ccall f_2208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2190)
static void C_ccall f_2190(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2198)
static void C_ccall f_2198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2170)
static void C_ccall f_2170(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2178)
static void C_ccall f_2178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2168)
static void C_ccall f_2168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2150)
static void C_ccall f_2150(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2158)
static void C_ccall f_2158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2148)
static void C_ccall f_2148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2050)
static void C_ccall f_2050(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2050)
static void C_ccall f_2050r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2075)
static void C_ccall f_2075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2044)
static void C_ccall f_2044(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2048)
static void C_ccall f_2048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2038)
static void C_ccall f_2038(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2032)
static void C_ccall f_2032(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2036)
static void C_ccall f_2036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2026)
static void C_ccall f_2026(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2024)
static void C_ccall f_2024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1985)
static void C_ccall f_1985(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1985)
static void C_ccall f_1985r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1989)
static void C_ccall f_1989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1992)
static void C_ccall f_1992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1941)
static void C_fcall f_1941(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1980)
static void C_ccall f_1980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1969)
static void C_ccall f_1969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1945)
static void C_ccall f_1945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1923)
static void C_ccall f_1923(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_1923)
static void C_ccall f_1923r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1927)
static void C_ccall f_1927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1938)
static void C_ccall f_1938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_5893)
static void C_fcall trf_5893(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5893(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5893(t0,t1);}

C_noret_decl(trf_5153)
static void C_fcall trf_5153(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5153(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5153(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5155)
static void C_fcall trf_5155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5155(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5155(t0,t1,t2);}

C_noret_decl(trf_5172)
static void C_fcall trf_5172(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5172(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5172(t0,t1,t2);}

C_noret_decl(trf_5160)
static void C_fcall trf_5160(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5160(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5160(t0,t1,t2);}

C_noret_decl(trf_4745)
static void C_fcall trf_4745(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4745(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4745(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4709)
static void C_fcall trf_4709(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4709(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4709(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4659)
static void C_fcall trf_4659(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4659(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4659(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4671)
static void C_fcall trf_4671(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4671(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4671(t0,t1,t2,t3);}

C_noret_decl(trf_4546)
static void C_fcall trf_4546(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4546(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4546(t0,t1,t2);}

C_noret_decl(trf_4589)
static void C_fcall trf_4589(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4589(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4589(t0,t1,t2,t3);}

C_noret_decl(trf_4501)
static void C_fcall trf_4501(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4501(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4501(t0,t1);}

C_noret_decl(trf_4361)
static void C_fcall trf_4361(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4361(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4361(t0,t1,t2);}

C_noret_decl(trf_4373)
static void C_fcall trf_4373(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4373(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4373(t0,t1,t2);}

C_noret_decl(trf_4295)
static void C_fcall trf_4295(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4295(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4295(t0,t1);}

C_noret_decl(trf_4207)
static void C_fcall trf_4207(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4207(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4207(t0,t1,t2,t3);}

C_noret_decl(trf_4170)
static void C_fcall trf_4170(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4170(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4170(t0,t1,t2,t3);}

C_noret_decl(trf_4125)
static void C_fcall trf_4125(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4125(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4125(t0,t1,t2,t3);}

C_noret_decl(trf_3744)
static void C_fcall trf_3744(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3744(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3744(t0,t1,t2,t3);}

C_noret_decl(trf_3634)
static void C_fcall trf_3634(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3634(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3634(t0,t1,t2);}

C_noret_decl(trf_3564)
static void C_fcall trf_3564(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3564(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3564(t0,t1,t2);}

C_noret_decl(trf_3598)
static void C_fcall trf_3598(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3598(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3598(t0,t1);}

C_noret_decl(trf_2999)
static void C_fcall trf_2999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2999(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2999(t0,t1,t2);}

C_noret_decl(trf_2824)
static void C_fcall trf_2824(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2824(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2824(t0,t1);}

C_noret_decl(trf_2851)
static void C_fcall trf_2851(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2851(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2851(t0,t1);}

C_noret_decl(trf_2840)
static void C_fcall trf_2840(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2840(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2840(t0,t1,t2);}

C_noret_decl(trf_2835)
static void C_fcall trf_2835(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2835(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2835(t0,t1,t2,t3);}

C_noret_decl(trf_2830)
static void C_fcall trf_2830(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2830(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2830(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2825)
static void C_fcall trf_2825(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2825(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2825(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2616)
static void C_fcall trf_2616(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2616(void *dummy){
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
f_2616(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_2623)
static void C_fcall trf_2623(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2623(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2623(t0,t1);}

C_noret_decl(trf_2626)
static void C_fcall trf_2626(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2626(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2626(t0,t1);}

C_noret_decl(trf_2635)
static void C_fcall trf_2635(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2635(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2635(t0,t1,t2,t3);}

C_noret_decl(trf_2513)
static void C_fcall trf_2513(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2513(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2513(t0,t1,t2);}

C_noret_decl(trf_2547)
static void C_fcall trf_2547(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2547(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2547(t0,t1,t2);}

C_noret_decl(trf_2568)
static void C_fcall trf_2568(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2568(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2568(t0,t1,t2);}

C_noret_decl(trf_2409)
static void C_fcall trf_2409(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2409(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2409(t0,t1);}

C_noret_decl(trf_2431)
static void C_fcall trf_2431(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2431(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2431(t0,t1);}

C_noret_decl(trf_2315)
static void C_fcall trf_2315(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2315(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2315(t0,t1,t2);}

C_noret_decl(trf_2288)
static void C_fcall trf_2288(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2288(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2288(t0,t1,t2);}

C_noret_decl(trf_2262)
static void C_fcall trf_2262(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2262(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2262(t0,t1);}

C_noret_decl(trf_1941)
static void C_fcall trf_1941(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1941(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1941(t0,t1,t2,t3,t4);}

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

C_noret_decl(tr9r)
static void C_fcall tr9r(C_proc9 k) C_regparm C_noret;
C_regparm static void C_fcall tr9r(C_proc9 k){
int n;
C_word *a,t9;
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
n=C_rest_count(0);
a=C_alloc(n*3);
t9=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

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
C_word t5;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("posix_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3134)){
C_save(t1);
C_rereclaim2(3134*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,395);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000/this function is not available on this platform");
lf[3]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[4]=C_h_intern(&lf[4],13,"string-append");
lf[6]=C_h_intern(&lf[6],15,"\003syssignal-hook");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000\003 - ");
lf[8]=C_h_intern(&lf[8],17,"\003syspeek-c-string");
lf[9]=C_h_intern(&lf[9],16,"\003sysupdate-errno");
lf[10]=C_h_intern(&lf[10],15,"\003sysposix-error");
lf[12]=C_h_intern(&lf[12],11,"\000file-error");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot access file");
lf[14]=C_h_intern(&lf[14],17,"\003sysmake-c-string");
lf[15]=C_h_intern(&lf[15],27,"\003sysplatform-fixup-pathname");
lf[16]=C_h_intern(&lf[16],20,"\003sysexpand-home-path");
lf[17]=C_h_intern(&lf[17],11,"\000type-error");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000*bad argument type - not a fixnum or string");
lf[19]=C_h_intern(&lf[19],9,"file-stat");
lf[20]=C_h_intern(&lf[20],16,"_stat_st_blksize");
lf[21]=C_h_intern(&lf[21],15,"_stat_st_blocks");
lf[22]=C_h_intern(&lf[22],9,"\003syserror");
lf[23]=C_h_intern(&lf[23],22,"file-modification-time");
lf[24]=C_h_intern(&lf[24],16,"file-access-time");
lf[25]=C_h_intern(&lf[25],16,"file-change-time");
lf[26]=C_h_intern(&lf[26],10,"file-owner");
lf[27]=C_h_intern(&lf[27],16,"file-permissions");
lf[28]=C_h_intern(&lf[28],9,"file-size");
lf[29]=C_h_intern(&lf[29],9,"file-type");
lf[30]=C_h_intern(&lf[30],13,"symbolic-link");
lf[31]=C_h_intern(&lf[31],9,"directory");
lf[32]=C_h_intern(&lf[32],16,"character-device");
lf[33]=C_h_intern(&lf[33],12,"block-device");
lf[34]=C_h_intern(&lf[34],4,"fifo");
lf[35]=C_h_intern(&lf[35],6,"socket");
lf[36]=C_h_intern(&lf[36],12,"regular-file");
lf[37]=C_h_intern(&lf[37],13,"regular-file\077");
lf[38]=C_h_intern(&lf[38],14,"symbolic-link\077");
lf[39]=C_h_intern(&lf[39],13,"block-device\077");
lf[40]=C_h_intern(&lf[40],17,"character-device\077");
lf[41]=C_h_intern(&lf[41],5,"fifo\077");
lf[42]=C_h_intern(&lf[42],7,"socket\077");
lf[43]=C_h_intern(&lf[43],10,"directory\077");
lf[44]=C_h_intern(&lf[44],17,"current-directory");
lf[45]=C_h_intern(&lf[45],16,"change-directory");
lf[46]=C_h_intern(&lf[46],13,"\003syssubstring");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current directory");
lf[48]=C_h_intern(&lf[48],11,"make-string");
lf[49]=C_h_intern(&lf[49],16,"delete-directory");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot delete directory");
lf[51]=C_h_intern(&lf[51],11,"delete-file");
lf[52]=C_h_intern(&lf[52],8,"for-each");
lf[53]=C_h_intern(&lf[53],10,"find-files");
lf[54]=C_h_intern(&lf[54],9,"\000dotfiles");
lf[55]=C_h_intern(&lf[55],16,"\000follow-symlinks");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot open directory");
lf[57]=C_h_intern(&lf[57],16,"\003sysmake-pointer");
lf[58]=C_h_intern(&lf[58],4,"glob");
lf[59]=C_h_intern(&lf[59],18,"decompose-pathname");
lf[60]=C_h_intern(&lf[60],13,"make-pathname");
lf[61]=C_h_intern(&lf[61],23,"irregex-match-substring");
lf[62]=C_h_intern(&lf[62],13,"irregex-match");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[64]=C_h_intern(&lf[64],16,"\003sysglob->regexp");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[70]=C_h_intern(&lf[70],16,"\003sysdynamic-wind");
lf[71]=C_h_intern(&lf[71],13,"pathname-file");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\002\077*");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[74]=C_h_intern(&lf[74],7,"irregex");
lf[75]=C_h_intern(&lf[75],8,"irregex\077");
lf[76]=C_h_intern(&lf[76],15,"\003sysget-keyword");
lf[77]=C_h_intern(&lf[77],6,"\000limit");
lf[78]=C_h_intern(&lf[78],5,"\000seed");
lf[79]=C_h_intern(&lf[79],7,"\000action");
lf[80]=C_h_intern(&lf[80],5,"\000test");
lf[81]=C_h_intern(&lf[81],8,"keyword\077");
lf[82]=C_h_intern(&lf[82],18,"file-creation-mode");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\025time vector too short");
lf[85]=C_h_intern(&lf[85],19,"seconds->local-time");
lf[86]=C_h_intern(&lf[86],18,"\003sysdecode-seconds");
lf[87]=C_h_intern(&lf[87],15,"current-seconds");
lf[88]=C_h_intern(&lf[88],17,"seconds->utc-time");
lf[89]=C_h_intern(&lf[89],15,"seconds->string");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000 cannot convert seconds to string");
lf[91]=C_h_intern(&lf[91],19,"local-time->seconds");
lf[92]=C_decode_literal(C_heaptop,"\376U-1.0\000");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[94]=C_h_intern(&lf[94],12,"time->string");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000 time formatting overflows buffer");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000$cannot convert time vector to string");
lf[97]=C_h_intern(&lf[97],8,"pipe/buf");
lf[98]=C_h_intern(&lf[98],11,"open/rdonly");
lf[99]=C_h_intern(&lf[99],11,"open/wronly");
lf[100]=C_h_intern(&lf[100],9,"open/rdwr");
lf[101]=C_h_intern(&lf[101],9,"open/read");
lf[102]=C_h_intern(&lf[102],10,"open/write");
lf[103]=C_h_intern(&lf[103],10,"open/creat");
lf[104]=C_h_intern(&lf[104],11,"open/append");
lf[105]=C_h_intern(&lf[105],9,"open/excl");
lf[106]=C_h_intern(&lf[106],10,"open/trunc");
lf[107]=C_h_intern(&lf[107],11,"open/binary");
lf[108]=C_h_intern(&lf[108],9,"open/text");
lf[109]=C_h_intern(&lf[109],14,"open/noinherit");
lf[110]=C_h_intern(&lf[110],10,"perm/irusr");
lf[111]=C_h_intern(&lf[111],10,"perm/iwusr");
lf[112]=C_h_intern(&lf[112],10,"perm/ixusr");
lf[113]=C_h_intern(&lf[113],10,"perm/irgrp");
lf[114]=C_h_intern(&lf[114],10,"perm/iwgrp");
lf[115]=C_h_intern(&lf[115],10,"perm/ixgrp");
lf[116]=C_h_intern(&lf[116],10,"perm/iroth");
lf[117]=C_h_intern(&lf[117],10,"perm/iwoth");
lf[118]=C_h_intern(&lf[118],10,"perm/ixoth");
lf[119]=C_h_intern(&lf[119],10,"perm/irwxu");
lf[120]=C_h_intern(&lf[120],10,"perm/irwxg");
lf[121]=C_h_intern(&lf[121],10,"perm/irwxo");
lf[122]=C_h_intern(&lf[122],9,"file-open");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[124]=C_h_intern(&lf[124],10,"file-close");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\021cannot close file");
lf[126]=C_h_intern(&lf[126],9,"file-read");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot read from file");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[129]=C_h_intern(&lf[129],10,"file-write");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot write to file");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[132]=C_h_intern(&lf[132],12,"file-mkstemp");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot create temporary file");
lf[134]=C_h_intern(&lf[134],8,"seek/set");
lf[135]=C_h_intern(&lf[135],8,"seek/end");
lf[136]=C_h_intern(&lf[136],8,"seek/cur");
lf[137]=C_h_intern(&lf[137],18,"set-file-position!");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot set file position");
lf[139]=C_h_intern(&lf[139],6,"stream");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[141]=C_h_intern(&lf[141],5,"port\077");
lf[142]=C_h_intern(&lf[142],13,"\000bounds-error");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\036invalid negative port position");
lf[144]=C_h_intern(&lf[144],13,"file-position");
lf[145]=C_h_intern(&lf[145],16,"create-directory");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create directory");
lf[147]=C_h_intern(&lf[147],13,"\003sysfile-info");
lf[148]=C_h_intern(&lf[148],12,"file-exists\077");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[150]=C_h_intern(&lf[150],12,"string-split");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\002/\134");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot change current directory");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open pipe");
lf[154]=C_h_intern(&lf[154],13,"\003sysmake-port");
lf[155]=C_h_intern(&lf[155],21,"\003sysstream-port-class");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\006(pipe)");
lf[157]=C_h_intern(&lf[157],15,"open-input-pipe");
lf[158]=C_h_intern(&lf[158],5,"\000text");
lf[159]=C_h_intern(&lf[159],7,"\000binary");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000#illegal input/output mode specifier");
lf[161]=C_h_intern(&lf[161],16,"open-output-pipe");
lf[162]=C_h_intern(&lf[162],16,"close-input-pipe");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[164]=C_h_intern(&lf[164],14,"\003syscheck-port");
lf[165]=C_h_intern(&lf[165],17,"close-output-pipe");
lf[166]=C_h_intern(&lf[166],20,"call-with-input-pipe");
lf[167]=C_h_intern(&lf[167],21,"call-with-output-pipe");
lf[168]=C_h_intern(&lf[168],20,"with-input-from-pipe");
lf[169]=C_h_intern(&lf[169],18,"\003sysstandard-input");
lf[170]=C_h_intern(&lf[170],19,"with-output-to-pipe");
lf[171]=C_h_intern(&lf[171],19,"\003sysstandard-output");
lf[172]=C_h_intern(&lf[172],11,"create-pipe");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create pipe");
lf[174]=C_h_intern(&lf[174],11,"signal/term");
lf[175]=C_h_intern(&lf[175],10,"signal/int");
lf[176]=C_h_intern(&lf[176],10,"signal/fpe");
lf[177]=C_h_intern(&lf[177],10,"signal/ill");
lf[178]=C_h_intern(&lf[178],11,"signal/segv");
lf[179]=C_h_intern(&lf[179],11,"signal/abrt");
lf[180]=C_h_intern(&lf[180],12,"signal/break");
lf[181]=C_h_intern(&lf[181],11,"signal/alrm");
lf[182]=C_h_intern(&lf[182],11,"signal/chld");
lf[183]=C_h_intern(&lf[183],11,"signal/cont");
lf[184]=C_h_intern(&lf[184],10,"signal/hup");
lf[185]=C_h_intern(&lf[185],9,"signal/io");
lf[186]=C_h_intern(&lf[186],11,"signal/kill");
lf[187]=C_h_intern(&lf[187],11,"signal/pipe");
lf[188]=C_h_intern(&lf[188],11,"signal/prof");
lf[189]=C_h_intern(&lf[189],11,"signal/quit");
lf[190]=C_h_intern(&lf[190],11,"signal/stop");
lf[191]=C_h_intern(&lf[191],11,"signal/trap");
lf[192]=C_h_intern(&lf[192],11,"signal/tstp");
lf[193]=C_h_intern(&lf[193],10,"signal/urg");
lf[194]=C_h_intern(&lf[194],11,"signal/usr1");
lf[195]=C_h_intern(&lf[195],11,"signal/usr2");
lf[196]=C_h_intern(&lf[196],13,"signal/vtalrm");
lf[197]=C_h_intern(&lf[197],12,"signal/winch");
lf[198]=C_h_intern(&lf[198],11,"signal/xcpu");
lf[199]=C_h_intern(&lf[199],11,"signal/xfsz");
lf[200]=C_h_intern(&lf[200],12,"signals-list");
lf[201]=C_h_intern(&lf[201],18,"\003sysinterrupt-hook");
lf[202]=C_h_intern(&lf[202],14,"signal-handler");
lf[203]=C_h_intern(&lf[203],19,"set-signal-handler!");
lf[204]=C_h_intern(&lf[204],10,"errno/perm");
lf[205]=C_h_intern(&lf[205],11,"errno/noent");
lf[206]=C_h_intern(&lf[206],10,"errno/srch");
lf[207]=C_h_intern(&lf[207],10,"errno/intr");
lf[208]=C_h_intern(&lf[208],8,"errno/io");
lf[209]=C_h_intern(&lf[209],12,"errno/noexec");
lf[210]=C_h_intern(&lf[210],10,"errno/badf");
lf[211]=C_h_intern(&lf[211],11,"errno/child");
lf[212]=C_h_intern(&lf[212],11,"errno/nomem");
lf[213]=C_h_intern(&lf[213],11,"errno/acces");
lf[214]=C_h_intern(&lf[214],11,"errno/fault");
lf[215]=C_h_intern(&lf[215],10,"errno/busy");
lf[216]=C_h_intern(&lf[216],11,"errno/exist");
lf[217]=C_h_intern(&lf[217],12,"errno/notdir");
lf[218]=C_h_intern(&lf[218],11,"errno/isdir");
lf[219]=C_h_intern(&lf[219],11,"errno/inval");
lf[220]=C_h_intern(&lf[220],11,"errno/mfile");
lf[221]=C_h_intern(&lf[221],11,"errno/nospc");
lf[222]=C_h_intern(&lf[222],11,"errno/spipe");
lf[223]=C_h_intern(&lf[223],10,"errno/pipe");
lf[224]=C_h_intern(&lf[224],11,"errno/again");
lf[225]=C_h_intern(&lf[225],10,"errno/rofs");
lf[226]=C_h_intern(&lf[226],10,"errno/nxio");
lf[227]=C_h_intern(&lf[227],10,"errno/2big");
lf[228]=C_h_intern(&lf[228],10,"errno/xdev");
lf[229]=C_h_intern(&lf[229],11,"errno/nodev");
lf[230]=C_h_intern(&lf[230],11,"errno/nfile");
lf[231]=C_h_intern(&lf[231],11,"errno/notty");
lf[232]=C_h_intern(&lf[232],10,"errno/fbig");
lf[233]=C_h_intern(&lf[233],11,"errno/mlink");
lf[234]=C_h_intern(&lf[234],9,"errno/dom");
lf[235]=C_h_intern(&lf[235],11,"errno/range");
lf[236]=C_h_intern(&lf[236],12,"errno/deadlk");
lf[237]=C_h_intern(&lf[237],17,"errno/nametoolong");
lf[238]=C_h_intern(&lf[238],11,"errno/nolck");
lf[239]=C_h_intern(&lf[239],11,"errno/nosys");
lf[240]=C_h_intern(&lf[240],14,"errno/notempty");
lf[241]=C_h_intern(&lf[241],11,"errno/ilseq");
lf[242]=C_h_intern(&lf[242],16,"change-file-mode");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot change file mode");
lf[244]=C_h_intern(&lf[244],17,"file-read-access\077");
lf[245]=C_h_intern(&lf[245],18,"file-write-access\077");
lf[246]=C_h_intern(&lf[246],20,"file-execute-access\077");
lf[247]=C_h_intern(&lf[247],12,"fileno/stdin");
lf[248]=C_h_intern(&lf[248],13,"fileno/stdout");
lf[249]=C_h_intern(&lf[249],13,"fileno/stderr");
lf[250]=C_h_intern(&lf[250],7,"\000append");
lf[251]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid mode for input file");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[253]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid mode argument");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\001w");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\010(fdport)");
lf[258]=C_h_intern(&lf[258],16,"open-input-file*");
lf[259]=C_h_intern(&lf[259],17,"open-output-file*");
lf[260]=C_h_intern(&lf[260],12,"port->fileno");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\031port has no attached file");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000%cannot access file-descriptor of port");
lf[263]=C_h_intern(&lf[263],25,"\003syspeek-unsigned-integer");
lf[264]=C_h_intern(&lf[264],16,"duplicate-fileno");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000 cannot duplicate file descriptor");
lf[266]=C_h_intern(&lf[266],6,"setenv");
lf[267]=C_h_intern(&lf[267],8,"unsetenv");
lf[268]=C_h_intern(&lf[268],25,"get-environment-variables");
lf[269]=C_h_intern(&lf[269],9,"substring");
lf[270]=C_h_intern(&lf[270],27,"local-timezone-abbreviation");
lf[271]=C_h_intern(&lf[271],5,"_exit");
lf[272]=C_h_intern(&lf[272],14,"terminal-port\077");
lf[273]=C_h_intern(&lf[273],13,"terminal-size");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000#port is not connected to a terminal");
lf[275]=C_h_intern(&lf[275],19,"set-buffering-mode!");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot set buffering mode");
lf[277]=C_h_intern(&lf[277],5,"\000full");
lf[278]=C_h_intern(&lf[278],5,"\000line");
lf[279]=C_h_intern(&lf[279],5,"\000none");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid buffering-mode");
lf[281]=C_h_intern(&lf[281],13,"spawn/overlay");
lf[282]=C_h_intern(&lf[282],10,"spawn/wait");
lf[283]=C_h_intern(&lf[283],12,"spawn/nowait");
lf[284]=C_h_intern(&lf[284],13,"spawn/nowaito");
lf[285]=C_h_intern(&lf[285],12,"spawn/detach");
lf[287]=C_h_intern(&lf[287],7,"reverse");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[291]=C_h_intern(&lf[291],24,"pathname-strip-directory");
lf[293]=C_h_intern(&lf[293],15,"process-execute");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[295]=C_h_intern(&lf[295],13,"process-spawn");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot spawn process");
lf[297]=C_h_intern(&lf[297],18,"current-process-id");
lf[298]=C_h_intern(&lf[298],17,"\003sysshell-command");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000 cannot retrieve system directory");
lf[300]=C_h_intern(&lf[300],24,"get-environment-variable");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\007COMSPEC");
lf[302]=C_h_intern(&lf[302],27,"\003sysshell-command-arguments");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\002/c");
lf[304]=C_h_intern(&lf[304],11,"process-run");
lf[305]=C_h_intern(&lf[305],11,"\003sysprocess");
lf[306]=C_h_intern(&lf[306],14,"\000process-error");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[308]=C_h_intern(&lf[308],17,"\003sysmake-locative");
lf[309]=C_h_intern(&lf[309],8,"location");
lf[310]=C_h_intern(&lf[310],18,"string-intersperse");
lf[311]=C_h_intern(&lf[311],16,"\003syscheck-string");
lf[312]=C_h_intern(&lf[312],7,"process");
lf[313]=C_h_intern(&lf[313],8,"process*");
lf[314]=C_h_intern(&lf[314],16,"\003sysprocess-wait");
lf[315]=C_h_intern(&lf[315],12,"process-wait");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000 waiting for child process failed");
lf[317]=C_h_intern(&lf[317],5,"sleep");
lf[318]=C_h_intern(&lf[318],13,"get-host-name");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot retrieve host-name");
lf[320]=C_h_intern(&lf[320],18,"system-information");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\007windows");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot retrieve system-information");
lf[323]=C_h_intern(&lf[323],17,"current-user-name");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current user-name");
lf[325]=C_h_intern(&lf[325],17,"change-file-owner");
lf[326]=C_h_intern(&lf[326],5,"error");
lf[327]=C_h_intern(&lf[327],11,"create-fifo");
lf[328]=C_h_intern(&lf[328],14,"create-session");
lf[329]=C_h_intern(&lf[329],20,"create-symbolic-link");
lf[330]=C_h_intern(&lf[330],26,"current-effective-group-id");
lf[331]=C_h_intern(&lf[331],25,"current-effective-user-id");
lf[332]=C_h_intern(&lf[332],27,"current-effective-user-name");
lf[333]=C_h_intern(&lf[333],16,"current-group-id");
lf[334]=C_h_intern(&lf[334],15,"current-user-id");
lf[335]=C_h_intern(&lf[335],18,"map-file-to-memory");
lf[336]=C_h_intern(&lf[336],9,"file-link");
lf[337]=C_h_intern(&lf[337],9,"file-lock");
lf[338]=C_h_intern(&lf[338],18,"file-lock/blocking");
lf[339]=C_h_intern(&lf[339],11,"file-select");
lf[340]=C_h_intern(&lf[340],14,"file-test-lock");
lf[341]=C_h_intern(&lf[341],13,"file-truncate");
lf[342]=C_h_intern(&lf[342],11,"file-unlock");
lf[343]=C_h_intern(&lf[343],10,"get-groups");
lf[344]=C_h_intern(&lf[344],17,"group-information");
lf[345]=C_h_intern(&lf[345],17,"initialize-groups");
lf[346]=C_h_intern(&lf[346],26,"memory-mapped-file-pointer");
lf[347]=C_h_intern(&lf[347],17,"parent-process-id");
lf[348]=C_h_intern(&lf[348],12,"process-fork");
lf[349]=C_h_intern(&lf[349],16,"process-group-id");
lf[350]=C_h_intern(&lf[350],14,"process-signal");
lf[351]=C_h_intern(&lf[351],18,"read-symbolic-link");
lf[352]=C_h_intern(&lf[352],10,"set-alarm!");
lf[353]=C_h_intern(&lf[353],13,"set-group-id!");
lf[354]=C_h_intern(&lf[354],11,"set-groups!");
lf[355]=C_h_intern(&lf[355],21,"set-process-group-id!");
lf[356]=C_h_intern(&lf[356],19,"set-root-directory!");
lf[357]=C_h_intern(&lf[357],16,"set-signal-mask!");
lf[358]=C_h_intern(&lf[358],12,"set-user-id!");
lf[359]=C_h_intern(&lf[359],11,"signal-mask");
lf[360]=C_h_intern(&lf[360],12,"signal-mask!");
lf[361]=C_h_intern(&lf[361],14,"signal-masked\077");
lf[362]=C_h_intern(&lf[362],14,"signal-unmask!");
lf[363]=C_h_intern(&lf[363],13,"terminal-name");
lf[364]=C_h_intern(&lf[364],22,"unmap-file-from-memory");
lf[365]=C_h_intern(&lf[365],16,"user-information");
lf[366]=C_h_intern(&lf[366],17,"utc-time->seconds");
lf[367]=C_h_intern(&lf[367],12,"string->time");
lf[368]=C_h_intern(&lf[368],16,"errno/wouldblock");
lf[369]=C_h_intern(&lf[369],19,"memory-mapped-file\077");
lf[370]=C_h_intern(&lf[370],13,"map/anonymous");
lf[371]=C_h_intern(&lf[371],8,"map/file");
lf[372]=C_h_intern(&lf[372],9,"map/fixed");
lf[373]=C_h_intern(&lf[373],11,"map/private");
lf[374]=C_h_intern(&lf[374],10,"map/shared");
lf[375]=C_h_intern(&lf[375],10,"open/fsync");
lf[376]=C_h_intern(&lf[376],11,"open/noctty");
lf[377]=C_h_intern(&lf[377],13,"open/nonblock");
lf[378]=C_h_intern(&lf[378],9,"open/sync");
lf[379]=C_h_intern(&lf[379],10,"perm/isgid");
lf[380]=C_h_intern(&lf[380],10,"perm/isuid");
lf[381]=C_h_intern(&lf[381],10,"perm/isvtx");
lf[382]=C_h_intern(&lf[382],9,"prot/exec");
lf[383]=C_h_intern(&lf[383],9,"prot/none");
lf[384]=C_h_intern(&lf[384],9,"prot/read");
lf[385]=C_h_intern(&lf[385],10,"prot/write");
lf[386]=C_h_intern(&lf[386],11,"make-vector");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000%cannot retrieve file position of port");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[389]=C_h_intern(&lf[389],18,"getter-with-setter");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000\024(file-position port)");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\031(file-creation-mode mode)");
lf[392]=C_h_intern(&lf[392],26,"set-file-modification-time");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000!cannot set file modification-time");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\032(file-modification-time f)");
C_register_lf2(lf,395,create_ptable());
t2=C_mutate(&lf[0] /* (set! c1400 ...) */,lf[1]);
t3=C_mutate(&lf[2] /* (set! c106 ...) */,lf[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1896,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t4);}

/* k1894 */
static void C_ccall f_1896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1896,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1899,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1897 in k1894 */
static void C_ccall f_1899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1899,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1902,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1900 in k1897 in k1894 */
static void C_ccall f_1902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1902,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1905,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_1905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1905,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1908,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_1908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1908,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1911,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_1911(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1911,2,t0,t1);}
t2=*((C_word*)lf[4]+1);
t3=C_mutate(&lf[5] /* (set! posix-error ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1923,a[2]=t2,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[10]+1 /* (set! ##sys#posix-error ...) */,lf[5]);
t5=C_mutate(&lf[11] /* (set! ##sys#stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1941,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[19]+1 /* (set! file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1985,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2018,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5867,a[2]=((C_word)li193),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5873,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:175: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[389]+1)))(5,*((C_word*)lf[389]+1),t7,t8,t9,lf[394]);}

/* a5872 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5873(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5873,4,t0,t1,t2,t3);}
t4=C_i_check_number_2(t3,lf[392]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5893,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5906,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:181: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(3,*((C_word*)lf[16]+1),t6,t2);}

/* k5904 in a5872 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5906,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5883,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t4=C_i_foreign_string_argumentp(t1);
/* ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t3,t4);}
else{
t4=((C_word*)t0)[2];
f_5893(t4,stub118(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t2));}}

/* k5881 in k5904 in a5872 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_5893(t2,stub118(C_SCHEME_UNDEFINED,t1,((C_word*)t0)[2]));}

/* k5891 in a5872 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_5893(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:183: posix-error */
t2=lf[5];
f_1923(7,t2,((C_word*)t0)[4],lf[12],lf[392],lf[393],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* a5866 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5867(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5867,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5871,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:177: ##sys#stat */
f_1941(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[23]);}

/* k5869 in a5866 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5871,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_mtime));}

/* k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2018(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2018,2,t0,t1);}
t2=C_mutate((C_word*)lf[23]+1 /* (set! file-modification-time ...) */,t1);
t3=C_mutate((C_word*)lf[24]+1 /* (set! file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2020,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[25]+1 /* (set! file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2026,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[26]+1 /* (set! file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2032,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[27]+1 /* (set! file-permissions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2038,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[28]+1 /* (set! file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2044,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[29]+1 /* (set! file-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2050,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[37]+1 /* (set! regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2140,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[38]+1 /* (set! symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2150,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[39]+1 /* (set! block-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2160,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[40]+1 /* (set! character-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2170,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[41]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2180,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[42]+1 /* (set! socket? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2190,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[43]+1 /* (set! directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2200,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[44]+1 /* (set! current-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2210,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[49]+1 /* (set! delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2256,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[31]+1 /* (set! directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2360,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[58]+1 /* (set! glob ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2507,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate(&lf[66] /* (set! ##sys#find-files ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2616,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[53]+1 /* (set! find-files ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2814,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2997,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5827,a[2]=((C_word)li191),tmp=(C_word)a,a+=3,tmp);
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5861,a[2]=((C_word)li192),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:372: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[389]+1)))(5,*((C_word*)lf[389]+1),t22,t23,t24,lf[391]);}

/* a5860 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5861(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5861,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[82]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_umask(t2));}

/* a5826 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5827(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_5827r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5827r(t0,t1,t2);}}

static void C_ccall f_5827r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5831,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_5831(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_5831(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k5829 in a5826 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_truep(t1)?C_i_check_exact_2(t1,lf[82]):C_SCHEME_UNDEFINED);
t3=C_umask(t1);
if(C_truep(t1)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_umask(t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}}

/* k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2997(C_word c,C_word t0,C_word t1){
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
C_word ab[62],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2997,2,t0,t1);}
t2=C_mutate((C_word*)lf[82]+1 /* (set! file-creation-mode ...) */,t1);
t3=C_mutate(&lf[83] /* (set! check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2999,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[85]+1 /* (set! seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3018,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[88]+1 /* (set! seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3052,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[89]+1 /* (set! seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3096,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[91]+1 /* (set! local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3147,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[94]+1 /* (set! time->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3172,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[97]+1 /* (set! pipe/buf ...) */,C_fix((C_word)PIPE_BUF));
t10=C_mutate((C_word*)lf[98]+1 /* (set! open/rdonly ...) */,C_fix((C_word)O_RDONLY));
t11=C_mutate((C_word*)lf[99]+1 /* (set! open/wronly ...) */,C_fix((C_word)O_WRONLY));
t12=C_mutate((C_word*)lf[100]+1 /* (set! open/rdwr ...) */,C_fix((C_word)O_RDWR));
t13=C_mutate((C_word*)lf[101]+1 /* (set! open/read ...) */,C_fix((C_word)O_RDWR));
t14=C_mutate((C_word*)lf[102]+1 /* (set! open/write ...) */,C_fix((C_word)O_WRONLY));
t15=C_mutate((C_word*)lf[103]+1 /* (set! open/creat ...) */,C_fix((C_word)O_CREAT));
t16=C_mutate((C_word*)lf[104]+1 /* (set! open/append ...) */,C_fix((C_word)O_APPEND));
t17=C_mutate((C_word*)lf[105]+1 /* (set! open/excl ...) */,C_fix((C_word)O_EXCL));
t18=C_mutate((C_word*)lf[106]+1 /* (set! open/trunc ...) */,C_fix((C_word)O_TRUNC));
t19=C_mutate((C_word*)lf[107]+1 /* (set! open/binary ...) */,C_fix((C_word)O_BINARY));
t20=C_mutate((C_word*)lf[108]+1 /* (set! open/text ...) */,C_fix((C_word)O_TEXT));
t21=C_mutate((C_word*)lf[109]+1 /* (set! open/noinherit ...) */,C_fix((C_word)O_NOINHERIT));
t22=C_mutate((C_word*)lf[110]+1 /* (set! perm/irusr ...) */,C_fix((C_word)S_IREAD));
t23=C_mutate((C_word*)lf[111]+1 /* (set! perm/iwusr ...) */,C_fix((C_word)S_IWRITE));
t24=C_mutate((C_word*)lf[112]+1 /* (set! perm/ixusr ...) */,C_fix((C_word)S_IEXEC));
t25=C_mutate((C_word*)lf[113]+1 /* (set! perm/irgrp ...) */,C_fix((C_word)S_IREAD));
t26=C_mutate((C_word*)lf[114]+1 /* (set! perm/iwgrp ...) */,C_fix((C_word)S_IWRITE));
t27=C_mutate((C_word*)lf[115]+1 /* (set! perm/ixgrp ...) */,C_fix((C_word)S_IEXEC));
t28=C_mutate((C_word*)lf[116]+1 /* (set! perm/iroth ...) */,C_fix((C_word)S_IREAD));
t29=C_mutate((C_word*)lf[117]+1 /* (set! perm/iwoth ...) */,C_fix((C_word)S_IWRITE));
t30=C_mutate((C_word*)lf[118]+1 /* (set! perm/ixoth ...) */,C_fix((C_word)S_IEXEC));
t31=C_mutate((C_word*)lf[119]+1 /* (set! perm/irwxu ...) */,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t32=C_mutate((C_word*)lf[120]+1 /* (set! perm/irwxg ...) */,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t33=C_mutate((C_word*)lf[121]+1 /* (set! perm/irwxo ...) */,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t34=C_fixnum_or(C_fix((C_word)S_IREAD),C_fix((C_word)S_IREAD));
t35=C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC),t34);
t36=C_mutate((C_word*)lf[122]+1 /* (set! file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3267,a[2]=t35,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp));
t37=C_mutate((C_word*)lf[124]+1 /* (set! file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3308,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[126]+1 /* (set! file-read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3326,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[129]+1 /* (set! file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3371,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[132]+1 /* (set! file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3413,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[134]+1 /* (set! seek/set ...) */,C_fix((C_word)SEEK_SET));
t42=C_mutate((C_word*)lf[135]+1 /* (set! seek/end ...) */,C_fix((C_word)SEEK_END));
t43=C_mutate((C_word*)lf[136]+1 /* (set! seek/cur ...) */,C_fix((C_word)SEEK_CUR));
t44=C_mutate((C_word*)lf[38]+1 /* (set! symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3451,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t45=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6558,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp);
t46=C_mutate((C_word*)lf[40]+1 /* (set! character-device? ...) */,t45);
t47=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6552,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp);
t48=C_mutate((C_word*)lf[39]+1 /* (set! block-device? ...) */,t47);
t49=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6546,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp);
t50=C_mutate((C_word*)lf[41]+1 /* (set! fifo? ...) */,t49);
t51=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6540,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp);
t52=C_mutate((C_word*)lf[42]+1 /* (set! socket? ...) */,t51);
t53=C_mutate((C_word*)lf[137]+1 /* (set! set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3480,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t54=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3540,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t55=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5786,a[2]=((C_word)li190),tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1066: getter-with-setter */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[389]+1)))(5,*((C_word*)lf[389]+1),t54,t55,*((C_word*)lf[137]+1),lf[390]);}

/* a5785 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5786(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5786,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5790,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5802,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1068: port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[141]+1)))(3,*((C_word*)lf[141]+1),t4,t2);}

/* k5800 in a5785 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[3],C_fix(7));
t3=C_eqp(t2,lf[139]);
if(C_truep(t3)){
t4=C_ftell(((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
f_5790(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
f_5790(2,t4,C_fix(-1));}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t2=C_lseek(((C_word*)t0)[3],C_fix(0),C_fix((C_word)SEEK_CUR));
t3=((C_word*)t0)[2];
f_5790(2,t3,t2);}
else{
/* posixwin.scm:1075: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),((C_word*)t0)[2],lf[17],lf[144],lf[388],((C_word*)t0)[3]);}}}

/* k5788 in a5785 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5790,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5793,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t1,C_fix(0)))){
/* posixwin.scm:1077: posix-error */
t3=lf[5];
f_1923(6,t3,t2,lf[12],lf[144],lf[387],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k5791 in k5788 in a5785 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3540(C_word c,C_word t0,C_word t1){
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
C_word ab[60],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3540,2,t0,t1);}
t2=C_mutate((C_word*)lf[144]+1 /* (set! file-position ...) */,t1);
t3=C_mutate((C_word*)lf[145]+1 /* (set! create-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3542,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[45]+1 /* (set! change-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3701,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3744,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
t6=C_mutate((C_word*)lf[157]+1 /* (set! open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3762,a[2]=t5,a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp));
t7=C_mutate((C_word*)lf[161]+1 /* (set! open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3798,a[2]=t5,a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp));
t8=C_mutate((C_word*)lf[162]+1 /* (set! close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3834,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[165]+1 /* (set! close-output-pipe ...) */,*((C_word*)lf[162]+1));
t10=C_mutate((C_word*)lf[166]+1 /* (set! call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3853,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[167]+1 /* (set! call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3877,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[168]+1 /* (set! with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3901,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[170]+1 /* (set! with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3921,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[172]+1 /* (set! create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3941,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[174]+1 /* (set! signal/term ...) */,C_fix((C_word)SIGTERM));
t16=C_mutate((C_word*)lf[175]+1 /* (set! signal/int ...) */,C_fix((C_word)SIGINT));
t17=C_mutate((C_word*)lf[176]+1 /* (set! signal/fpe ...) */,C_fix((C_word)SIGFPE));
t18=C_mutate((C_word*)lf[177]+1 /* (set! signal/ill ...) */,C_fix((C_word)SIGILL));
t19=C_mutate((C_word*)lf[178]+1 /* (set! signal/segv ...) */,C_fix((C_word)SIGSEGV));
t20=C_mutate((C_word*)lf[179]+1 /* (set! signal/abrt ...) */,C_fix((C_word)SIGABRT));
t21=C_mutate((C_word*)lf[180]+1 /* (set! signal/break ...) */,C_fix((C_word)SIGBREAK));
t22=C_set_block_item(lf[181] /* signal/alrm */,0,C_fix(0));
t23=C_set_block_item(lf[182] /* signal/chld */,0,C_fix(0));
t24=C_set_block_item(lf[183] /* signal/cont */,0,C_fix(0));
t25=C_set_block_item(lf[184] /* signal/hup */,0,C_fix(0));
t26=C_set_block_item(lf[185] /* signal/io */,0,C_fix(0));
t27=C_set_block_item(lf[186] /* signal/kill */,0,C_fix(0));
t28=C_set_block_item(lf[187] /* signal/pipe */,0,C_fix(0));
t29=C_set_block_item(lf[188] /* signal/prof */,0,C_fix(0));
t30=C_set_block_item(lf[189] /* signal/quit */,0,C_fix(0));
t31=C_set_block_item(lf[190] /* signal/stop */,0,C_fix(0));
t32=C_set_block_item(lf[191] /* signal/trap */,0,C_fix(0));
t33=C_set_block_item(lf[192] /* signal/tstp */,0,C_fix(0));
t34=C_set_block_item(lf[193] /* signal/urg */,0,C_fix(0));
t35=C_set_block_item(lf[194] /* signal/usr1 */,0,C_fix(0));
t36=C_set_block_item(lf[195] /* signal/usr2 */,0,C_fix(0));
t37=C_set_block_item(lf[196] /* signal/vtalrm */,0,C_fix(0));
t38=C_set_block_item(lf[197] /* signal/winch */,0,C_fix(0));
t39=C_set_block_item(lf[198] /* signal/xcpu */,0,C_fix(0));
t40=C_set_block_item(lf[199] /* signal/xfsz */,0,C_fix(0));
t41=C_a_i_list7(&a,7,*((C_word*)lf[174]+1),*((C_word*)lf[175]+1),*((C_word*)lf[176]+1),*((C_word*)lf[177]+1),*((C_word*)lf[178]+1),*((C_word*)lf[179]+1),*((C_word*)lf[180]+1));
t42=C_mutate((C_word*)lf[200]+1 /* (set! signals-list ...) */,t41);
t43=*((C_word*)lf[201]+1);
t44=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4015,a[2]=((C_word*)t0)[2],a[3]=t43,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1272: make-vector */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[386]+1)))(4,*((C_word*)lf[386]+1),t44,C_fix(256),C_SCHEME_FALSE);}

/* k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4015(C_word c,C_word t0,C_word t1){
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
C_word t150;
C_word t151;
C_word t152;
C_word t153;
C_word t154;
C_word t155;
C_word t156;
C_word t157;
C_word ab[284],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4015,2,t0,t1);}
t2=C_mutate((C_word*)lf[202]+1 /* (set! signal-handler ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4017,a[2]=t1,a[3]=((C_word)li90),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[203]+1 /* (set! set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4026,a[2]=t1,a[3]=((C_word)li91),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[201]+1 /* (set! ##sys#interrupt-hook ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4039,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li92),tmp=(C_word)a,a+=5,tmp));
t5=C_mutate((C_word*)lf[204]+1 /* (set! errno/perm ...) */,C_fix((C_word)EPERM));
t6=C_mutate((C_word*)lf[205]+1 /* (set! errno/noent ...) */,C_fix((C_word)ENOENT));
t7=C_mutate((C_word*)lf[206]+1 /* (set! errno/srch ...) */,C_fix((C_word)ESRCH));
t8=C_mutate((C_word*)lf[207]+1 /* (set! errno/intr ...) */,C_fix((C_word)EINTR));
t9=C_mutate((C_word*)lf[208]+1 /* (set! errno/io ...) */,C_fix((C_word)EIO));
t10=C_mutate((C_word*)lf[209]+1 /* (set! errno/noexec ...) */,C_fix((C_word)ENOEXEC));
t11=C_mutate((C_word*)lf[210]+1 /* (set! errno/badf ...) */,C_fix((C_word)EBADF));
t12=C_mutate((C_word*)lf[211]+1 /* (set! errno/child ...) */,C_fix((C_word)ECHILD));
t13=C_mutate((C_word*)lf[212]+1 /* (set! errno/nomem ...) */,C_fix((C_word)ENOMEM));
t14=C_mutate((C_word*)lf[213]+1 /* (set! errno/acces ...) */,C_fix((C_word)EACCES));
t15=C_mutate((C_word*)lf[214]+1 /* (set! errno/fault ...) */,C_fix((C_word)EFAULT));
t16=C_mutate((C_word*)lf[215]+1 /* (set! errno/busy ...) */,C_fix((C_word)EBUSY));
t17=C_mutate((C_word*)lf[216]+1 /* (set! errno/exist ...) */,C_fix((C_word)EEXIST));
t18=C_mutate((C_word*)lf[217]+1 /* (set! errno/notdir ...) */,C_fix((C_word)ENOTDIR));
t19=C_mutate((C_word*)lf[218]+1 /* (set! errno/isdir ...) */,C_fix((C_word)EISDIR));
t20=C_mutate((C_word*)lf[219]+1 /* (set! errno/inval ...) */,C_fix((C_word)EINVAL));
t21=C_mutate((C_word*)lf[220]+1 /* (set! errno/mfile ...) */,C_fix((C_word)EMFILE));
t22=C_mutate((C_word*)lf[221]+1 /* (set! errno/nospc ...) */,C_fix((C_word)ENOSPC));
t23=C_mutate((C_word*)lf[222]+1 /* (set! errno/spipe ...) */,C_fix((C_word)ESPIPE));
t24=C_mutate((C_word*)lf[223]+1 /* (set! errno/pipe ...) */,C_fix((C_word)EPIPE));
t25=C_mutate((C_word*)lf[224]+1 /* (set! errno/again ...) */,C_fix((C_word)EAGAIN));
t26=C_mutate((C_word*)lf[225]+1 /* (set! errno/rofs ...) */,C_fix((C_word)EROFS));
t27=C_mutate((C_word*)lf[226]+1 /* (set! errno/nxio ...) */,C_fix((C_word)ENXIO));
t28=C_mutate((C_word*)lf[227]+1 /* (set! errno/2big ...) */,C_fix((C_word)E2BIG));
t29=C_mutate((C_word*)lf[228]+1 /* (set! errno/xdev ...) */,C_fix((C_word)EXDEV));
t30=C_mutate((C_word*)lf[229]+1 /* (set! errno/nodev ...) */,C_fix((C_word)ENODEV));
t31=C_mutate((C_word*)lf[230]+1 /* (set! errno/nfile ...) */,C_fix((C_word)ENFILE));
t32=C_mutate((C_word*)lf[231]+1 /* (set! errno/notty ...) */,C_fix((C_word)ENOTTY));
t33=C_mutate((C_word*)lf[232]+1 /* (set! errno/fbig ...) */,C_fix((C_word)EFBIG));
t34=C_mutate((C_word*)lf[233]+1 /* (set! errno/mlink ...) */,C_fix((C_word)EMLINK));
t35=C_mutate((C_word*)lf[234]+1 /* (set! errno/dom ...) */,C_fix((C_word)EDOM));
t36=C_mutate((C_word*)lf[235]+1 /* (set! errno/range ...) */,C_fix((C_word)ERANGE));
t37=C_mutate((C_word*)lf[236]+1 /* (set! errno/deadlk ...) */,C_fix((C_word)EDEADLK));
t38=C_mutate((C_word*)lf[237]+1 /* (set! errno/nametoolong ...) */,C_fix((C_word)ENAMETOOLONG));
t39=C_mutate((C_word*)lf[238]+1 /* (set! errno/nolck ...) */,C_fix((C_word)ENOLCK));
t40=C_mutate((C_word*)lf[239]+1 /* (set! errno/nosys ...) */,C_fix((C_word)ENOSYS));
t41=C_mutate((C_word*)lf[240]+1 /* (set! errno/notempty ...) */,C_fix((C_word)ENOTEMPTY));
t42=C_mutate((C_word*)lf[241]+1 /* (set! errno/ilseq ...) */,C_fix((C_word)EILSEQ));
t43=C_mutate((C_word*)lf[242]+1 /* (set! change-file-mode ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4095,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t44=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4125,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
t45=C_mutate((C_word*)lf[244]+1 /* (set! file-read-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4149,a[2]=t44,a[3]=((C_word)li95),tmp=(C_word)a,a+=4,tmp));
t46=C_mutate((C_word*)lf[245]+1 /* (set! file-write-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4155,a[2]=t44,a[3]=((C_word)li96),tmp=(C_word)a,a+=4,tmp));
t47=C_mutate((C_word*)lf[246]+1 /* (set! file-execute-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4161,a[2]=t44,a[3]=((C_word)li97),tmp=(C_word)a,a+=4,tmp));
t48=C_mutate((C_word*)lf[247]+1 /* (set! fileno/stdin ...) */,C_fix((C_word)0));
t49=C_mutate((C_word*)lf[248]+1 /* (set! fileno/stdout ...) */,C_fix((C_word)1));
t50=C_mutate((C_word*)lf[249]+1 /* (set! fileno/stderr ...) */,C_fix((C_word)2));
t51=C_SCHEME_UNDEFINED;
t52=(*a=C_VECTOR_TYPE|1,a[1]=t51,tmp=(C_word)a,a+=2,tmp);
t53=C_SCHEME_UNDEFINED;
t54=(*a=C_VECTOR_TYPE|1,a[1]=t53,tmp=(C_word)a,a+=2,tmp);
t55=C_set_block_item(t52,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4170,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t56=C_set_block_item(t54,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4207,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[258]+1 /* (set! open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4225,a[2]=t52,a[3]=t54,a[4]=((C_word)li100),tmp=(C_word)a,a+=5,tmp));
t58=C_mutate((C_word*)lf[259]+1 /* (set! open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4239,a[2]=t52,a[3]=t54,a[4]=((C_word)li101),tmp=(C_word)a,a+=5,tmp));
t59=C_mutate((C_word*)lf[260]+1 /* (set! port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4253,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[264]+1 /* (set! duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4288,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[266]+1 /* (set! setenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4318,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[267]+1 /* (set! unsetenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4335,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[268]+1 /* (set! get-environment-variables ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4355,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[270]+1 /* (set! local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4420,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[271]+1 /* (set! _exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4432,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t66=C_mutate((C_word*)lf[272]+1 /* (set! terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4448,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[273]+1 /* (set! terminal-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4467,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[275]+1 /* (set! set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4482,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[281]+1 /* (set! spawn/overlay ...) */,C_fix((C_word)P_OVERLAY));
t70=C_mutate((C_word*)lf[282]+1 /* (set! spawn/wait ...) */,C_fix((C_word)P_WAIT));
t71=C_mutate((C_word*)lf[283]+1 /* (set! spawn/nowait ...) */,C_fix((C_word)P_NOWAIT));
t72=C_mutate((C_word*)lf[284]+1 /* (set! spawn/nowaito ...) */,C_fix((C_word)P_NOWAITO));
t73=C_mutate((C_word*)lf[285]+1 /* (set! spawn/detach ...) */,C_fix((C_word)P_DETACH));
t74=C_mutate(&lf[286] /* (set! $quote-args-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4546,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t75=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4625,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
t76=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4642,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp);
t77=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4659,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp);
t78=C_mutate(&lf[290] /* (set! $exec-setup ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4709,a[2]=t75,a[3]=t76,a[4]=t77,a[5]=((C_word)li121),tmp=(C_word)a,a+=6,tmp));
t79=C_mutate(&lf[292] /* (set! $exec-teardown ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4745,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t80=C_mutate((C_word*)lf[293]+1 /* (set! process-execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4760,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t81=C_mutate((C_word*)lf[295]+1 /* (set! process-spawn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4836,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp));
t82=C_mutate((C_word*)lf[297]+1 /* (set! current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4912,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t83=C_mutate((C_word*)lf[298]+1 /* (set! ##sys#shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4915,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t84=C_mutate((C_word*)lf[302]+1 /* (set! ##sys#shell-command-arguments ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4936,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t85=C_mutate((C_word*)lf[304]+1 /* (set! process-run ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4942,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t86=C_mutate((C_word*)lf[305]+1 /* (set! ##sys#process ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5034,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t87=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5153,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp);
t88=C_mutate((C_word*)lf[312]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5240,a[2]=t87,a[3]=((C_word)li136),tmp=(C_word)a,a+=4,tmp));
t89=C_mutate((C_word*)lf[313]+1 /* (set! process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5309,a[2]=t87,a[3]=((C_word)li137),tmp=(C_word)a,a+=4,tmp));
t90=C_mutate((C_word*)lf[314]+1 /* (set! ##sys#process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5378,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp));
t91=C_mutate((C_word*)lf[315]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5390,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp));
t92=C_mutate((C_word*)lf[317]+1 /* (set! sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5450,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp));
t93=C_mutate((C_word*)lf[318]+1 /* (set! get-host-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5453,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp));
t94=C_mutate((C_word*)lf[320]+1 /* (set! system-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5465,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp));
t95=C_mutate((C_word*)lf[323]+1 /* (set! current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5496,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp));
t96=C_mutate((C_word*)lf[325]+1 /* (set! change-file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5511,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));
t97=C_mutate((C_word*)lf[327]+1 /* (set! create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5517,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp));
t98=C_mutate((C_word*)lf[328]+1 /* (set! create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5523,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp));
t99=C_mutate((C_word*)lf[329]+1 /* (set! create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5529,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp));
t100=C_mutate((C_word*)lf[330]+1 /* (set! current-effective-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5535,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp));
t101=C_mutate((C_word*)lf[331]+1 /* (set! current-effective-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5541,a[2]=((C_word)li151),tmp=(C_word)a,a+=3,tmp));
t102=C_mutate((C_word*)lf[332]+1 /* (set! current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5547,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t103=C_mutate((C_word*)lf[333]+1 /* (set! current-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5553,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp));
t104=C_mutate((C_word*)lf[334]+1 /* (set! current-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5559,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp));
t105=C_mutate((C_word*)lf[335]+1 /* (set! map-file-to-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5565,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp));
t106=C_mutate((C_word*)lf[336]+1 /* (set! file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5571,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp));
t107=C_mutate((C_word*)lf[337]+1 /* (set! file-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5577,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp));
t108=C_mutate((C_word*)lf[338]+1 /* (set! file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5583,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp));
t109=C_mutate((C_word*)lf[339]+1 /* (set! file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5589,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp));
t110=C_mutate((C_word*)lf[340]+1 /* (set! file-test-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5595,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp));
t111=C_mutate((C_word*)lf[341]+1 /* (set! file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5601,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp));
t112=C_mutate((C_word*)lf[342]+1 /* (set! file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5607,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp));
t113=C_mutate((C_word*)lf[343]+1 /* (set! get-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5613,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp));
t114=C_mutate((C_word*)lf[344]+1 /* (set! group-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5619,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp));
t115=C_mutate((C_word*)lf[345]+1 /* (set! initialize-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5625,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp));
t116=C_mutate((C_word*)lf[346]+1 /* (set! memory-mapped-file-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5631,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp));
t117=C_mutate((C_word*)lf[347]+1 /* (set! parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5637,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp));
t118=C_mutate((C_word*)lf[348]+1 /* (set! process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5643,a[2]=((C_word)li168),tmp=(C_word)a,a+=3,tmp));
t119=C_mutate((C_word*)lf[349]+1 /* (set! process-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5649,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t120=C_mutate((C_word*)lf[350]+1 /* (set! process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5655,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t121=C_mutate((C_word*)lf[351]+1 /* (set! read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5661,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp));
t122=C_mutate((C_word*)lf[352]+1 /* (set! set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5667,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp));
t123=C_mutate((C_word*)lf[353]+1 /* (set! set-group-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5673,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t124=C_mutate((C_word*)lf[354]+1 /* (set! set-groups! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5679,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp));
t125=C_mutate((C_word*)lf[355]+1 /* (set! set-process-group-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5685,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp));
t126=C_mutate((C_word*)lf[356]+1 /* (set! set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5691,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp));
t127=C_mutate((C_word*)lf[357]+1 /* (set! set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5697,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp));
t128=C_mutate((C_word*)lf[358]+1 /* (set! set-user-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5703,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp));
t129=C_mutate((C_word*)lf[359]+1 /* (set! signal-mask ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5709,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp));
t130=C_mutate((C_word*)lf[360]+1 /* (set! signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5715,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp));
t131=C_mutate((C_word*)lf[361]+1 /* (set! signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5721,a[2]=((C_word)li181),tmp=(C_word)a,a+=3,tmp));
t132=C_mutate((C_word*)lf[362]+1 /* (set! signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5727,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp));
t133=C_mutate((C_word*)lf[363]+1 /* (set! terminal-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5733,a[2]=((C_word)li183),tmp=(C_word)a,a+=3,tmp));
t134=C_mutate((C_word*)lf[364]+1 /* (set! unmap-file-from-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5739,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp));
t135=C_mutate((C_word*)lf[365]+1 /* (set! user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5745,a[2]=((C_word)li185),tmp=(C_word)a,a+=3,tmp));
t136=C_mutate((C_word*)lf[366]+1 /* (set! utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5751,a[2]=((C_word)li186),tmp=(C_word)a,a+=3,tmp));
t137=C_mutate((C_word*)lf[367]+1 /* (set! string->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5757,a[2]=((C_word)li187),tmp=(C_word)a,a+=3,tmp));
t138=C_set_block_item(lf[368] /* errno/wouldblock */,0,C_fix(0));
t139=C_mutate((C_word*)lf[41]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5764,a[2]=((C_word)li188),tmp=(C_word)a,a+=3,tmp));
t140=C_mutate((C_word*)lf[369]+1 /* (set! memory-mapped-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5767,a[2]=((C_word)li189),tmp=(C_word)a,a+=3,tmp));
t141=C_set_block_item(lf[370] /* map/anonymous */,0,C_fix(0));
t142=C_set_block_item(lf[371] /* map/file */,0,C_fix(0));
t143=C_set_block_item(lf[372] /* map/fixed */,0,C_fix(0));
t144=C_set_block_item(lf[373] /* map/private */,0,C_fix(0));
t145=C_set_block_item(lf[374] /* map/shared */,0,C_fix(0));
t146=C_set_block_item(lf[375] /* open/fsync */,0,C_fix(0));
t147=C_set_block_item(lf[376] /* open/noctty */,0,C_fix(0));
t148=C_set_block_item(lf[377] /* open/nonblock */,0,C_fix(0));
t149=C_set_block_item(lf[378] /* open/sync */,0,C_fix(0));
t150=C_set_block_item(lf[379] /* perm/isgid */,0,C_fix(0));
t151=C_set_block_item(lf[380] /* perm/isuid */,0,C_fix(0));
t152=C_set_block_item(lf[381] /* perm/isvtx */,0,C_fix(0));
t153=C_set_block_item(lf[382] /* prot/exec */,0,C_fix(0));
t154=C_set_block_item(lf[383] /* prot/none */,0,C_fix(0));
t155=C_set_block_item(lf[384] /* prot/read */,0,C_fix(0));
t156=C_set_block_item(lf[385] /* prot/write */,0,C_fix(0));
t157=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t157+1)))(2,t157,C_SCHEME_UNDEFINED);}

/* f_5767 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5767(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5767,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* f_5764 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5764(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5764,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* f_5757 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5757(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5757,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[367],lf[0]);}

/* f_5751 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5751(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5751,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[366],lf[0]);}

/* f_5745 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5745(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5745,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[365],lf[0]);}

/* f_5739 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5739(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5739,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[364],lf[0]);}

/* f_5733 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5733(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5733,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[363],lf[0]);}

/* f_5727 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5727(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5727,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[362],lf[0]);}

/* f_5721 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5721(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5721,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[361],lf[0]);}

/* f_5715 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5715(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5715,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[360],lf[0]);}

/* f_5709 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5709(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5709,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[359],lf[0]);}

/* f_5703 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5703(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5703,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[358],lf[0]);}

/* f_5697 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5697(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5697,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[357],lf[0]);}

/* f_5691 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5691(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5691,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[356],lf[0]);}

/* f_5685 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5685(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5685,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[355],lf[0]);}

/* f_5679 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5679(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5679,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[354],lf[0]);}

/* f_5673 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5673(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5673,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[353],lf[0]);}

/* f_5667 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5667(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5667,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[352],lf[0]);}

/* f_5661 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5661(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5661,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[351],lf[0]);}

/* f_5655 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5655(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5655,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[350],lf[0]);}

/* f_5649 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5649(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5649,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[349],lf[0]);}

/* f_5643 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5643(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5643,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[348],lf[0]);}

/* f_5637 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5637(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5637,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[347],lf[0]);}

/* f_5631 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5631(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5631,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[346],lf[0]);}

/* f_5625 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5625(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5625,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[345],lf[0]);}

/* f_5619 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5619(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5619,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[344],lf[0]);}

/* f_5613 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5613(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5613,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[343],lf[0]);}

/* f_5607 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5607(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5607,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[342],lf[0]);}

/* f_5601 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5601(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5601,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[341],lf[0]);}

/* f_5595 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5595(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5595,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[340],lf[0]);}

/* f_5589 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5589(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5589,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[339],lf[0]);}

/* f_5583 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5583(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5583,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[338],lf[0]);}

/* f_5577 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5577(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5577,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[337],lf[0]);}

/* f_5571 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5571(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5571,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[336],lf[0]);}

/* f_5565 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5565(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5565,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[335],lf[0]);}

/* f_5559 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5559(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5559,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[334],lf[0]);}

/* f_5553 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5553(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5553,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[333],lf[0]);}

/* f_5547 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5547(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5547,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[332],lf[0]);}

/* f_5541 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5541(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5541,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[331],lf[0]);}

/* f_5535 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5535(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5535,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[330],lf[0]);}

/* f_5529 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5529(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5529,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[329],lf[0]);}

/* f_5523 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5523(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5523,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[328],lf[0]);}

/* f_5517 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5517(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5517,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[327],lf[0]);}

/* f_5511 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5511(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5511,2,t0,t1);}
/* error */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[326]+1)))(4,*((C_word*)lf[326]+1),t1,lf[325],lf[0]);}

/* f_5496 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5496,2,t0,t1);}
if(C_truep(C_get_user_name())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,C_mpointer(&a,(void*)C_username),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5506,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1722: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t2);}}

/* k5504 */
static void C_ccall f_5506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1723: ##sys#error */
t2=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[323],lf[324]);}

/* f_5465 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5465,2,t0,t1);}
if(C_truep(C_sysinfo())){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5476,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_hostname),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5491,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1713: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t2);}}

/* k5489 */
static void C_ccall f_5491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1714: ##sys#error */
t2=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[320],lf[322]);}

/* k5474 */
static void C_ccall f_5476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5476,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5480,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_osrel),C_fix(0));}

/* k5478 in k5474 */
static void C_ccall f_5480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5480,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5484,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_osver),C_fix(0));}

/* k5482 in k5478 in k5474 */
static void C_ccall f_5484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5484,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5488,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_processor),C_fix(0));}

/* k5486 in k5482 in k5478 in k5474 */
static void C_ccall f_5488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5488,2,t0,t1);}
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list5(&a,5,lf[321],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* f_5453 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5453,2,t0,t1);}
if(C_truep(C_get_hostname())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,C_mpointer(&a,(void*)C_hostname),C_fix(0));}
else{
/* posixwin.scm:1703: ##sys#error */
t2=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[318],lf[319]);}}

/* f_5450 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5450(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5450,3,t0,t1,t2);}
t3=C_sleep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(0));}

/* f_5390 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5390(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_5390r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5390r(t0,t1,t2,t3);}}

static void C_ccall f_5390r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
if(C_truep(C_i_nullp(t7))){
t8=C_i_check_exact_2(t2,lf[315]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5411,a[2]=t5,a[3]=t2,a[4]=((C_word)li139),tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5417,a[2]=t2,a[3]=((C_word)li140),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t9,t10);}
else{
/* ##sys#error */
t8=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,lf[2],t7);}}

/* a5416 */
static void C_ccall f_5417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5417,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5427,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1685: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t6);}
else{
/* posixwin.scm:1687: values */
C_values(5,0,t1,t2,t3,t4);}}

/* k5425 in a5416 */
static void C_ccall f_5427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1686: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),((C_word*)t0)[3],lf[306],lf[315],lf[316],((C_word*)t0)[2]);}

/* a5410 */
static void C_ccall f_5411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5411,2,t0,t1);}
/* posixwin.scm:1682: ##sys#process-wait */
t2=*((C_word*)lf[314]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_5378 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5378(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5378,4,t0,t1,t2,t3);}
if(C_truep(C_process_wait(t2,t3))){
/* posixwin.scm:1675: values */
C_values(5,0,t1,t2,C_SCHEME_TRUE,C_fix((C_word)C_exstatus));}
else{
/* posixwin.scm:1676: values */
C_values(5,0,t1,C_fix(-1),C_SCHEME_FALSE,C_SCHEME_FALSE);}}

/* f_5309 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5309(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_5309r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5309r(t0,t1,t2,t3);}}

static void C_ccall f_5309r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
if(C_truep(C_i_nullp(t15))){
/* posixwin.scm:1669: %process */
f_5153(t1,lf[313],C_SCHEME_TRUE,t2,t5,t9,t13);}
else{
/* ##sys#error */
t16=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,lf[2],t15);}}

/* f_5240 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5240(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_5240r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5240r(t0,t1,t2,t3);}}

static void C_ccall f_5240r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
if(C_truep(C_i_nullp(t15))){
/* posixwin.scm:1666: %process */
f_5153(t1,lf[312],C_SCHEME_FALSE,t2,t5,t9,t13);}
else{
/* ##sys#error */
t16=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,lf[2],t15);}}

/* %process in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_5153(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5153,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5155,a[2]=t2,a[3]=((C_word)li132),tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_string_2(((C_word*)t8)[1],t2);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5199,a[2]=t11,a[3]=t1,a[4]=t10,a[5]=t3,a[6]=t6,a[7]=t9,a[8]=t8,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t9)[1])){
/* posixwin.scm:1654: chkstrlst */
t14=t11;
f_5155(t14,t13,((C_word*)t9)[1]);}
else{
t14=C_set_block_item(t10,0,C_SCHEME_TRUE);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5234,a[2]=t13,a[3]=t8,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1657: ##sys#shell-command-arguments */
t16=*((C_word*)lf[302]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,((C_word*)t8)[1]);}}

/* k5232 in %process in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5234,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5238,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1658: ##sys#shell-command */
t4=*((C_word*)lf[298]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5236 in k5232 in %process in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_5199(2,t3,t2);}

/* k5197 in %process in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5202,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[6])){
/* posixwin.scm:1659: chkstrlst */
t3=((C_word*)t0)[2];
f_5155(t3,t2,((C_word*)t0)[6]);}
else{
t3=t2;
f_5202(2,t3,C_SCHEME_UNDEFINED);}}

/* k5200 in k5197 in %process in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5202,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5207,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li133),tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5213,a[2]=((C_word*)t0)[4],a[3]=((C_word)li134),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a5212 in k5200 in k5197 in %process in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5213(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5213,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(((C_word*)t0)[2])){
/* posixwin.scm:1662: values */
C_values(6,0,t1,t2,t3,t4,t5);}
else{
/* posixwin.scm:1663: values */
C_values(5,0,t1,t2,t3,t4);}}

/* a5206 in k5200 in k5197 in %process in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5207,2,t0,t1);}
/* posixwin.scm:1660: ##sys#process */
t2=*((C_word*)lf[305]+1);
((C_proc10)(void*)(*((C_word*)t2+1)))(10,t2,t1,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[4],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* chkstrlst in %process in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_5155(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5155,NULL,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5160,a[2]=((C_word*)t0)[2],a[3]=((C_word)li130),tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=C_i_check_list_2(t5,lf[52]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5172,a[2]=t4,a[3]=t8,a[4]=((C_word)li131),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_5172(t10,t1,t5);}

/* for-each-loop1268 in chkstrlst in %process in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_5172(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5172,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5182,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g12691275 */
t5=((C_word*)t0)[2];
f_5160(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5180 in for-each-loop1268 in chkstrlst in %process in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5172(t3,((C_word*)t0)[2],t2);}

/* g1269 in chkstrlst in %process in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_5160(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5160,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[311]+1);
/* g12831284 */
t4=t3;
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,t2,((C_word*)t0)[2]);}

/* f_5034 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_5034(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,...){
C_word tmp;
C_word t9;
va_list v;
C_word *a,c2=c;
C_save_rest(t8,c2,9);
if(c<9) C_bad_min_argc_2(c,9,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr9r,(void*)f_5034r,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
else{
a=C_alloc((c-9)*3);
t9=C_restore_rest(a,C_rest_count(0));
f_5034r(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}}

static void C_ccall f_5034r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(9);
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5038,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=t7,a[6]=t8,a[7]=t1,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(t9))){
t11=t10;
f_5038(2,t11,C_SCHEME_FALSE);}
else{
t11=C_i_cdr(t9);
if(C_truep(C_i_nullp(t11))){
t12=t10;
f_5038(2,t12,C_i_car(t9));}
else{
/* ##sys#error */
t12=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,lf[2],t9);}}}

/* k5036 */
static void C_ccall f_5038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5038,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5041,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5129,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,((C_word*)t0)[8],((C_word*)t0)[2]);
/* posixwin.scm:1625: $quote-args-list */
f_4546(t3,t4,t1);}

/* k5127 in k5036 */
static void C_ccall f_5129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1625: string-intersperse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[310]+1)))(3,*((C_word*)lf[310]+1),((C_word*)t0)[2],t1);}

/* k5039 in k5036 */
static void C_ccall f_5041(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5041,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(1));
t3=C_i_foreign_fixnum_argumentp(C_fix(-1));
t4=((*(int *)C_data_pointer(t2))=C_unfix(t3),C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(1));
t6=C_i_foreign_fixnum_argumentp(C_fix(-1));
t7=((*(int *)C_data_pointer(t5))=C_unfix(t6),C_SCHEME_UNDEFINED);
t8=C_a_i_bytevector(&a,1,C_fix(1));
t9=C_i_foreign_fixnum_argumentp(C_fix(-1));
t10=((*(int *)C_data_pointer(t8))=C_unfix(t9),C_SCHEME_UNDEFINED);
t11=C_a_i_bytevector(&a,1,C_fix(1));
t12=C_i_foreign_fixnum_argumentp(C_fix(-1));
t13=((*(int *)C_data_pointer(t11))=C_unfix(t12),C_SCHEME_UNDEFINED);
t14=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5097,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=t11,a[8]=((C_word*)t0)[5],a[9]=t2,a[10]=((C_word*)t0)[6],a[11]=t1,a[12]=((C_word*)t0)[7],tmp=(C_word)a,a+=13,tmp);
/* ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[308]+1)))(6,*((C_word*)lf[308]+1),t14,t2,C_fix(0),C_SCHEME_FALSE,lf[309]);}

/* k5095 in k5039 in k5036 */
static void C_ccall f_5097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[308]+1)))(6,*((C_word*)lf[308]+1),t2,((C_word*)t0)[5],C_fix(0),C_SCHEME_FALSE,lf[309]);}

/* k5099 in k5095 in k5039 in k5036 */
static void C_ccall f_5101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5105,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[308]+1)))(6,*((C_word*)lf[308]+1),t2,((C_word*)t0)[3],C_fix(0),C_SCHEME_FALSE,lf[309]);}

/* k5103 in k5099 in k5095 in k5039 in k5036 */
static void C_ccall f_5105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5105,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[308]+1)))(6,*((C_word*)lf[308]+1),t2,((C_word*)t0)[7],C_fix(0),C_SCHEME_FALSE,lf[309]);}

/* k5107 in k5103 in k5099 in k5095 in k5039 in k5036 */
static void C_ccall f_5109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5109,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t3=(C_truep(((C_word*)t0)[6])?C_fix(0):C_fix(1));
t4=(C_truep(((C_word*)t0)[4])?C_fix(0):C_fix(2));
if(C_truep(((C_word*)t0)[8])){
/* posixwin.scm:1632: + */
C_plus(5,0,t2,t3,t4,C_fix(0));}
else{
/* posixwin.scm:1632: + */
C_plus(5,0,t2,t3,t4,C_fix(4));}}

/* k5111 in k5107 in k5103 in k5099 in k5095 in k5039 in k5036 */
static void C_ccall f_5113(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5113,2,t0,t1);}
t2=((C_word*)t0)[16];
t3=((C_word*)t0)[15];
t4=((C_word*)t0)[14];
t5=((C_word*)t0)[13];
t6=((C_word*)t0)[12];
t7=((C_word*)t0)[11];
t8=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_4976,a[2]=t3,a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=t1,a[14]=t7,a[15]=t6,a[16]=t5,a[17]=t4,tmp=(C_word)a,a+=18,tmp);
if(C_truep(t2)){
t9=C_i_foreign_string_argumentp(t2);
/* ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t8,t9);}
else{
t9=t8;
f_4976(2,t9,C_SCHEME_FALSE);}}

/* k4974 in k5111 in k5107 in k5103 in k5099 in k5095 in k5039 in k5036 */
static void C_ccall f_4976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_4980,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t1,a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_i_foreign_string_argumentp(((C_word*)t0)[2]);
/* ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t2,t3);}
else{
t3=t2;
f_4980(2,t3,C_SCHEME_FALSE);}}

/* k4978 in k4974 in k5111 in k5107 in k5103 in k5099 in k5095 in k5039 in k5036 */
static void C_ccall f_4980(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4980,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[17])?C_i_foreign_pointer_argumentp(((C_word*)t0)[17]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[16])?C_i_foreign_pointer_argumentp(((C_word*)t0)[16]):C_SCHEME_FALSE);
t4=(C_truep(((C_word*)t0)[15])?C_i_foreign_pointer_argumentp(((C_word*)t0)[15]):C_SCHEME_FALSE);
t5=(C_truep(((C_word*)t0)[14])?C_i_foreign_pointer_argumentp(((C_word*)t0)[14]):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[13]);
if(C_truep(stub1170(C_SCHEME_UNDEFINED,((C_word*)t0)[12],t1,C_SCHEME_FALSE,t2,t3,t4,t5,t6))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5070,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixwin.scm:1635: open-input-file* */
t8=*((C_word*)lf[258]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[4]))));}
else{
t8=t7;
f_5070(2,t8,C_SCHEME_FALSE);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5090,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1640: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t7);}}

/* k5088 in k4978 in k4974 in k5111 in k5107 in k5103 in k5099 in k5095 in k5039 in k5036 */
static void C_ccall f_5090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1641: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),((C_word*)t0)[4],lf[306],((C_word*)t0)[3],lf[307],((C_word*)t0)[2]);}

/* k5068 in k4978 in k4974 in k5111 in k5107 in k5103 in k5099 in k5095 in k5039 in k5036 */
static void C_ccall f_5070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5070,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5074,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixwin.scm:1636: open-output-file* */
t3=*((C_word*)lf[259]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))));}
else{
t3=t2;
f_5074(2,t3,C_SCHEME_FALSE);}}

/* k5072 in k5068 in k4978 in k4974 in k5111 in k5107 in k5103 in k5099 in k5095 in k5039 in k5036 */
static void C_ccall f_5074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5074,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5078,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixwin.scm:1638: open-input-file* */
t3=*((C_word*)lf[258]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))));}
else{
/* posixwin.scm:1634: values */
C_values(6,0,((C_word*)t0)[6],((C_word*)t0)[5],t1,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[4]))),C_SCHEME_FALSE);}}

/* k5076 in k5072 in k5068 in k4978 in k4974 in k5111 in k5107 in k5103 in k5099 in k5095 in k5039 in k5036 */
static void C_ccall f_5078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1634: values */
C_values(6,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))),t1);}

/* f_4942 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4942(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4942r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4942r(t0,t1,t2,t3);}}

static void C_ccall f_4942r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_i_car(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
/* posixwin.scm:1596: process-spawn */
t6=*((C_word*)lf[295]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,*((C_word*)lf[283]+1),t2,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4959,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1597: ##sys#shell-command */
t7=*((C_word*)lf[298]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4957 */
static void C_ccall f_4959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4959,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4963,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1597: ##sys#shell-command-arguments */
t3=*((C_word*)lf[302]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4961 in k4957 */
static void C_ccall f_4963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1597: process-spawn */
t2=*((C_word*)lf[295]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],*((C_word*)lf[283]+1),((C_word*)t0)[2],t1);}

/* f_4936 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4936(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4936,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list2(&a,2,lf[303],t2));}

/* f_4915 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4915,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4919,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1582: get-environment-variable */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[300]+1)))(3,*((C_word*)lf[300]+1),t2,lf[301]);}

/* k4917 */
static void C_ccall f_4919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4919,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_get_shlcmd())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_mpointer(&a,(void*)C_shlcmd),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4931,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1586: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t2);}}}

/* k4929 in k4917 */
static void C_ccall f_4931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1587: ##sys#error */
t2=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[298],lf[299]);}

/* f_4912 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4912,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1147(C_SCHEME_UNDEFINED));}

/* f_4836 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4836(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4836r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4836r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4836r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
if(C_truep(C_i_nullp(t16))){
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4864,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:1573: $exec-setup */
t18=lf[290];
f_4709(t18,t17,lf[295],t3,t6,t10,t14);}
else{
/* ##sys#error */
t17=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t1,lf[2],t16);}}

/* k4862 */
static void C_ccall f_4864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(((C_word*)t0)[5])){
t2=C_spawnvpe(((C_word*)t0)[4],t1);
/* posixwin.scm:1574: $exec-teardown */
f_4745(((C_word*)t0)[3],lf[295],lf[296],((C_word*)t0)[2],t2);}
else{
t2=C_spawnvp(((C_word*)t0)[4],t1);
/* posixwin.scm:1574: $exec-teardown */
f_4745(((C_word*)t0)[3],lf[295],lf[296],((C_word*)t0)[2],t2);}}

/* f_4760 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4760(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4760r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4760r(t0,t1,t2,t3);}}

static void C_ccall f_4760r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(5);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
if(C_truep(C_i_nullp(t15))){
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4788,a[2]=t2,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1568: $exec-setup */
t17=lf[290];
f_4709(t17,t16,lf[293],t2,t5,t9,t13);}
else{
/* ##sys#error */
t16=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,lf[2],t15);}}

/* k4786 */
static void C_ccall f_4788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
t2=C_execve(t1);
/* posixwin.scm:1569: $exec-teardown */
f_4745(((C_word*)t0)[3],lf[293],lf[294],((C_word*)t0)[2],t2);}
else{
t2=C_execvp(t1);
/* posixwin.scm:1569: $exec-teardown */
f_4745(((C_word*)t0)[3],lf[293],lf[294],((C_word*)t0)[2],t2);}}

/* $exec-teardown in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_4745(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4745,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4749,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:1560: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t6);}

/* k4747 in $exec-teardown in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_free_exec_args();
t3=C_free_exec_env();
t4=C_eqp(((C_word*)t0)[6],C_fix(-1));
if(C_truep(t4)){
/* posixwin.scm:1564: ##sys#error */
t5=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t5=((C_word*)t0)[6];
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* $exec-setup in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_4709(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4709,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_i_check_string_2(t3,t2);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4716,a[2]=t6,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t5,a[7]=((C_word*)t0)[4],a[8]=t3,a[9]=t2,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm:1552: pathname-strip-directory */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[291]+1)))(3,*((C_word*)lf[291]+1),t8,t3);}

/* k4714 in $exec-setup in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4716,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_block_size(t1);
/* posixwin.scm:1553: setarg */
t4=((C_word*)t0)[4];
f_4625(5,t4,t2,C_fix(0),t1,t3);}

/* k4717 in k4714 in $exec-setup in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4722,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4736,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[9],a[4]=t2,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixwin.scm:1554: $quote-args-list */
f_4546(t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* posixwin.scm:1554: build-exec-argvec */
f_4659(t2,((C_word*)t0)[9],C_SCHEME_FALSE,((C_word*)t0)[4],C_fix(1));}}

/* k4734 in k4717 in k4714 in $exec-setup in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1554: build-exec-argvec */
f_4659(((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2],C_fix(1));}

/* k4720 in k4717 in k4714 in $exec-setup in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4725,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1555: build-exec-argvec */
f_4659(t2,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* k4723 in k4720 in k4717 in k4714 in $exec-setup in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4725,2,t0,t1);}
t2=C_flushall();
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4732,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1557: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(3,*((C_word*)lf[16]+1),t3,((C_word*)t0)[2]);}

/* k4730 in k4723 in k4720 in k4717 in k4714 in $exec-setup in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1557: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* build-exec-argvec in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_4659(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4659,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep(t3)){
t6=C_i_check_list_2(t3,t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4671,a[2]=t8,a[3]=t2,a[4]=t4,a[5]=((C_word)li119),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_4671(t10,t1,t3,t5);}
else{
/* posixwin.scm:1549: argvec-setter */
t6=t4;
((C_proc5)C_fast_retrieve_proc(t6))(5,t6,t1,t5,C_SCHEME_FALSE,C_fix(0));}}

/* doloop1074 in build-exec-argvec in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_4671(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4671,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* posixwin.scm:1545: argvec-setter */
t4=((C_word*)t0)[4];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t1,t3,C_SCHEME_FALSE,C_fix(0));}
else{
t4=C_i_car(t2);
t5=C_i_check_string_2(t4,((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4690,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_block_size(t4);
/* posixwin.scm:1548: argvec-setter */
t8=((C_word*)t0)[4];
((C_proc5)C_fast_retrieve_proc(t8))(5,t8,t6,t3,t4,t7);}}

/* k4688 in doloop1074 in build-exec-argvec in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[5]);
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4671(t4,((C_word*)t0)[2],t2,t3);}

/* setenv in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4642(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4642,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub1063(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* setarg in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4625(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4625,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub1053(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* $quote-args-list in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_4546(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4546,NULL,3,t1,t2,t3);}
if(C_truep(t3)){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4589,a[2]=t5,a[3]=((C_word)li115),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4589(t7,t1,t2,C_SCHEME_END_OF_LIST);}}

/* loop in $quote-args-list in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_4589(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(14);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4589,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* posixwin.scm:1527: reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[287]+1)))(3,*((C_word*)lf[287]+1),t1,t3);}
else{
t4=C_i_car(t2);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4617,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=C_i_string_length(t4);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4560,a[2]=t4,a[3]=t7,a[4]=((C_word)li114),tmp=(C_word)a,a+=5,tmp);
t9=f_4560(t8,C_fix(0));
if(C_truep(t9)){
/* posixwin.scm:1532: string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(5,*((C_word*)lf[4]+1),t6,lf[288],t4,lf[289]);}
else{
t10=C_a_i_cons(&a,2,t4,t3);
/* posixwin.scm:1529: loop */
t12=t1;
t13=t5;
t14=t10;
t1=t12;
t2=t13;
t3=t14;
goto loop;}}}

/* loop in loop in $quote-args-list in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static C_word C_fcall f_4560(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_check;
loop:
t2=C_eqp(t1,((C_word*)t0)[3]);
if(C_truep(t2)){
return(C_SCHEME_FALSE);}
else{
t3=C_i_string_ref(((C_word*)t0)[2],t1);
if(C_truep(C_u_i_char_whitespacep(t3))){
return(C_SCHEME_TRUE);}
else{
t4=C_fixnum_plus(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}}}

/* k4615 in loop in $quote-args-list in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4617,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* posixwin.scm:1529: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4589(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* f_4482 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4482(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4482r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4482r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4482r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4486,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:1480: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[164]+1)))(4,*((C_word*)lf[164]+1),t5,t2,lf[275]);}

/* k4484 */
static void C_ccall f_4486(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4486,2,t0,t1);}
t2=C_i_pairp(((C_word*)t0)[5]);
t3=(C_truep(t2)?C_i_car(((C_word*)t0)[5]):C_fix((C_word)BUFSIZ));
t4=((C_word*)t0)[4];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4492,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(t4,lf[277]);
if(C_truep(t6)){
t7=t5;
f_4492(2,t7,C_fix((C_word)_IOFBF));}
else{
t7=C_eqp(t4,lf[278]);
if(C_truep(t7)){
t8=C_fix((C_word)_IOLBF);
t9=t5;
f_4492(2,t9,t8);}
else{
t8=C_eqp(t4,lf[279]);
if(C_truep(t8)){
t9=t5;
f_4492(2,t9,C_fix((C_word)_IONBF));}
else{
/* posixwin.scm:1486: ##sys#error */
t9=*((C_word*)lf[22]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t5,lf[275],lf[280],((C_word*)t0)[4],((C_word*)t0)[2]);}}}}

/* k4490 in k4484 */
static void C_ccall f_4492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4492,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[4],lf[275]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4501,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[2],C_fix(7));
t5=C_eqp(lf[139],t4);
if(C_truep(t5)){
t6=C_setvbuf(((C_word*)t0)[2],t1,((C_word*)t0)[4]);
t7=t3;
f_4501(t7,C_fixnum_lessp(t6,C_fix(0)));}
else{
t6=t3;
f_4501(t6,C_SCHEME_TRUE);}}

/* k4499 in k4490 in k4484 */
static void C_fcall f_4501(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixwin.scm:1492: ##sys#error */
t2=*((C_word*)lf[22]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[5],lf[275],lf[276],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_4467 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4467(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4467,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4474,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1469: terminal-port? */
t4=*((C_word*)lf[272]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4472 */
static void C_ccall f_4474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixwin.scm:1470: values */
C_values(4,0,((C_word*)t0)[3],C_fix(0),C_fix(0));}
else{
/* posixwin.scm:1471: ##sys#error */
t2=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[273],lf[274],((C_word*)t0)[2]);}}

/* f_4448 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4448(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4448,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4452,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1464: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[164]+1)))(4,*((C_word*)lf[164]+1),t3,t2,lf[272]);}

/* k4450 */
static void C_ccall f_4452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4452,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1465: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[263]+1)))(4,*((C_word*)lf[263]+1),t2,((C_word*)t0)[2],C_fix(0));}

/* k4453 in k4450 */
static void C_ccall f_4455(C_word c,C_word t0,C_word t1){
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

/* f_4432 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4432(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_4432r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4432r(t0,t1,t2);}}

static void C_ccall f_4432r(C_word t0,C_word t1,C_word t2){
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
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub1000(C_SCHEME_UNDEFINED,t5));}
else{
t3=t1;
t4=C_i_foreign_fixnum_argumentp(C_fix(0));
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub1000(C_SCHEME_UNDEFINED,t4));}}

/* f_4420 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4420,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,stub994(t2),C_fix(0));}

/* f_4355 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4355,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4361,a[2]=t3,a[3]=((C_word)li107),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4361(t5,t1,C_fix(0));}

/* loop */
static void C_fcall f_4361(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4361,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4365,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub982(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k4363 in loop */
static void C_ccall f_4365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4365,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4373,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word)li106),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_4373(t5,((C_word*)t0)[2],C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* scan in k4363 in loop */
static void C_fcall f_4373(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4373,NULL,3,t0,t1,t2);}
if(C_truep(C_i_char_equalp(C_make_character(61),C_subchar(((C_word*)t0)[5],t2)))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4399,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:1443: substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[269]+1)))(5,*((C_word*)lf[269]+1),t3,((C_word*)t0)[5],C_fix(0),t2);}
else{
t3=C_fixnum_plus(t2,C_fix(1));
/* posixwin.scm:1444: scan */
t6=t1;
t7=t3;
t1=t6;
t2=t7;
goto loop;}}

/* k4397 in scan in k4363 in loop */
static void C_ccall f_4399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4399,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4403,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_block_size(((C_word*)t0)[2]);
/* posixwin.scm:1443: substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[269]+1)))(5,*((C_word*)lf[269]+1),t2,((C_word*)t0)[2],t3,t4);}

/* k4401 in k4397 in scan in k4363 in loop */
static void C_ccall f_4403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4403,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4391,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm:1443: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_4361(t5,t3,t4);}

/* k4389 in k4401 in k4397 in scan in k4363 in loop */
static void C_ccall f_4391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4391,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* f_4335 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4335(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4335,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[267]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4343,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1432: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t4,t2,lf[267]);}

/* k4341 */
static void C_ccall f_4343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_putenv(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* f_4318 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4318,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[266]);
t5=C_i_check_string_2(t3,lf[266]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4329,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1427: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t6,t2,lf[266]);}

/* k4327 */
static void C_ccall f_4329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4333,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1427: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t2,((C_word*)t0)[2],lf[266]);}

/* k4331 in k4327 */
static void C_ccall f_4333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_setenv(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* f_4288 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4288(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4288r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4288r(t0,t1,t2,t3);}}

static void C_ccall f_4288r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=C_i_check_exact_2(t2,*((C_word*)lf[264]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4295,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t6=t5;
f_4295(t6,C_dup(t2));}
else{
t6=C_i_car(t3);
t7=C_i_check_exact_2(t6,lf[264]);
t8=t5;
f_4295(t8,C_dup2(t2,t6));}}

/* k4293 */
static void C_fcall f_4295(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4295,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4298,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4304,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1416: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t3);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k4302 in k4293 */
static void C_ccall f_4304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1417: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),((C_word*)t0)[3],lf[12],lf[264],lf[265],((C_word*)t0)[2]);}

/* k4296 in k4293 */
static void C_ccall f_4298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_4253 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4253(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4253,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4257,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1398: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[164]+1)))(4,*((C_word*)lf[164]+1),t3,t2,lf[260]);}

/* k4255 */
static void C_ccall f_4257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4257,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4286,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1399: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[263]+1)))(4,*((C_word*)lf[263]+1),t2,((C_word*)t0)[2],C_fix(0));}

/* k4284 in k4255 */
static void C_ccall f_4286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4286,2,t0,t1);}
if(C_truep(C_i_zerop(t1))){
/* posixwin.scm:1405: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),((C_word*)t0)[3],lf[17],lf[260],lf[261],((C_word*)t0)[2]);}
else{
t2=C_C_fileno(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4266,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4272,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1402: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t4);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}

/* k4270 in k4284 in k4255 */
static void C_ccall f_4272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1403: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),((C_word*)t0)[3],lf[12],lf[260],lf[262],((C_word*)t0)[2]);}

/* k4264 in k4284 in k4255 */
static void C_ccall f_4266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_4239 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4239(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4239r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4239r(t0,t1,t2,t3);}}

static void C_ccall f_4239r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[259]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4251,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1394: mode */
f_4170(t5,C_SCHEME_FALSE,t3,lf[259]);}

/* k4249 */
static void C_ccall f_4251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4251,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixwin.scm:1394: check */
f_4207(((C_word*)t0)[2],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* f_4225 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4225(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4225r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4225r(t0,t1,t2,t3);}}

static void C_ccall f_4225r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[258]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4237,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1390: mode */
f_4170(t5,C_SCHEME_TRUE,t3,lf[258]);}

/* k4235 */
static void C_ccall f_4237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4237,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixwin.scm:1390: check */
f_4207(((C_word*)t0)[2],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* check in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_4207(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4207,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4211,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:1381: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t5);}

/* k4209 in check in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4211,2,t0,t1);}
if(C_truep(C_null_pointerp(((C_word*)t0)[5]))){
/* posixwin.scm:1383: ##sys#signal-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(5,*((C_word*)lf[6]+1),((C_word*)t0)[4],lf[12],lf[256],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4223,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1384: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[154]+1)))(6,*((C_word*)lf[154]+1),t2,((C_word*)t0)[2],*((C_word*)lf[155]+1),lf[257],lf[139]);}}

/* k4221 in k4209 in check in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* mode in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_4170(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4170,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4178,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=C_i_car(t3);
t7=C_eqp(t6,lf[250]);
if(C_truep(t7)){
t8=t2;
if(C_truep(t8)){
/* posixwin.scm:1375: ##sys#error */
t9=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t5,lf[251],t6);}
else{
/* posixwin.scm:1371: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,lf[252],t4);}}
else{
/* posixwin.scm:1376: ##sys#error */
t8=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,lf[253],t6);}}
else{
if(C_truep(t2)){
/* posixwin.scm:1371: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,lf[254],t4);}
else{
/* posixwin.scm:1371: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,lf[255],t4);}}}

/* k4176 in mode in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1371: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* f_4161 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4161(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4161,3,t0,t1,t2);}
/* posixwin.scm:1355: check */
f_4125(t1,t2,C_fix((C_word)2),lf[246]);}

/* f_4155 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4155(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4155,3,t0,t1,t2);}
/* posixwin.scm:1354: check */
f_4125(t1,t2,C_fix((C_word)4),lf[245]);}

/* f_4149 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4149(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4149,3,t0,t1,t2);}
/* posixwin.scm:1353: check */
f_4125(t1,t2,C_fix((C_word)2),lf[244]);}

/* check in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_4125(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4125,NULL,4,t1,t2,t3,t4);}
t5=C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4143,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4147,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1350: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(3,*((C_word*)lf[16]+1),t7,t2);}

/* k4145 in check in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1350: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4141 in check in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4143,2,t0,t1);}
t2=C_test_access(t1,((C_word*)t0)[3]);
t3=C_eqp(C_fix(0),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4135,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
/* posixwin.scm:1351: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t4);}}

/* k4133 in k4141 in check in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_4095 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4095(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4095,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[242]);
t5=C_i_check_exact_2(t3,lf[242]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4119,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4123,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1339: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(3,*((C_word*)lf[16]+1),t7,t2);}

/* k4121 */
static void C_ccall f_4123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1339: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),((C_word*)t0)[2],t1,lf[242]);}

/* k4117 */
static void C_ccall f_4119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4119,2,t0,t1);}
t2=C_chmod(t1,((C_word*)t0)[4]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4111,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1340: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4109 in k4117 */
static void C_ccall f_4111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1341: ##sys#signal-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(7,*((C_word*)lf[6]+1),((C_word*)t0)[4],lf[12],lf[242],lf[243],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_4039 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4039(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4039,4,t0,t1,t2,t3);}
t4=C_slot(((C_word*)t0)[3],t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4049,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1287: h */
t6=t4;
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,t2);}
else{
/* posixwin.scm:1289: oldhook */
t5=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k4047 */
static void C_ccall f_4049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1288: ##sys#context-switch */
C_context_switch(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_4026 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4026(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4026,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t2,lf[203]);
if(C_truep(t3)){
t5=t2;
t6=C_establish_signal_handler(t2,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_vector_set(((C_word*)t0)[2],t2,t3));}
else{
t5=C_establish_signal_handler(t2,C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_vector_set(((C_word*)t0)[2],t2,t3));}}

/* f_4017 in k4013 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_4017(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4017,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[202]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(((C_word*)t0)[2],t2));}

/* f_3941 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3941(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3941r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3941r(t0,t1,t2);}}

static void C_ccall f_3941r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3945,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_3945(2,t4,C_fixnum_or(*((C_word*)lf[107]+1),*((C_word*)lf[109]+1)));}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_3945(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k3943 */
static void C_ccall f_3945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3948,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(C_pipe(C_SCHEME_FALSE,t1),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3957,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1224: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t3);}
else{
/* posixwin.scm:1226: values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}}

/* k3955 in k3943 */
static void C_ccall f_3957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1225: ##sys#signal-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(5,*((C_word*)lf[6]+1),((C_word*)t0)[2],lf[12],lf[172],lf[173]);}

/* k3946 in k3943 */
static void C_ccall f_3948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1226: values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}

/* f_3921 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3921(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3921r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3921r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3921r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=*((C_word*)lf[171]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3925,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t6,*((C_word*)lf[161]+1),t2,t4);}

/* k3923 */
static void C_ccall f_3925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3925,2,t0,t1);}
t2=C_mutate((C_word*)lf[171]+1 /* (set! ##sys#standard-output ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3931,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li87),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1208: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a3930 in k3923 */
static void C_ccall f_3931(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_3931r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3931r(t0,t1,t2);}}

static void C_ccall f_3931r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3935,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1211: close-output-pipe */
t4=*((C_word*)lf[165]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k3933 in a3930 in k3923 */
static void C_ccall f_3935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[171]+1 /* (set! ##sys#standard-output ...) */,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_3901 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3901(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3901r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3901r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3901r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=*((C_word*)lf[169]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3905,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t6,*((C_word*)lf[157]+1),t2,t4);}

/* k3903 */
static void C_ccall f_3905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3905,2,t0,t1);}
t2=C_mutate((C_word*)lf[169]+1 /* (set! ##sys#standard-input ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3911,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1196: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a3910 in k3903 */
static void C_ccall f_3911(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_3911r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3911r(t0,t1,t2);}}

static void C_ccall f_3911r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3915,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1199: close-input-pipe */
t4=*((C_word*)lf[162]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k3913 in a3910 in k3903 */
static void C_ccall f_3915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[169]+1 /* (set! ##sys#standard-input ...) */,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_3877 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3877(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_3877r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3877r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3877r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3881,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[161]+1),t2,t4);}

/* k3879 */
static void C_ccall f_3881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3886,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li82),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3892,a[2]=t1,a[3]=((C_word)li83),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1185: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a3891 in k3879 */
static void C_ccall f_3892(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3892r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3892r(t0,t1,t2);}}

static void C_ccall f_3892r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3896,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1188: close-output-pipe */
t4=*((C_word*)lf[165]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k3894 in a3891 in k3879 */
static void C_ccall f_3896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3885 in k3879 */
static void C_ccall f_3886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3886,2,t0,t1);}
/* posixwin.scm:1186: proc */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* f_3853 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3853(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_3853r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3853r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3853r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3857,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[157]+1),t2,t4);}

/* k3855 */
static void C_ccall f_3857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3857,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3862,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li79),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3868,a[2]=t1,a[3]=((C_word)li80),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1176: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a3867 in k3855 */
static void C_ccall f_3868(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3868r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3868r(t0,t1,t2);}}

static void C_ccall f_3868r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3872,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1179: close-input-pipe */
t4=*((C_word*)lf[162]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k3870 in a3867 in k3855 */
static void C_ccall f_3872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3861 in k3855 */
static void C_ccall f_3862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3862,2,t0,t1);}
/* posixwin.scm:1177: proc */
t2=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* f_3834 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3834(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3834,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3838,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1165: ##sys#check-port */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[164]+1)))(4,*((C_word*)lf[164]+1),t3,t2,lf[162]);}

/* k3836 */
static void C_ccall f_3838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3838,2,t0,t1);}
t2=close_pipe(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3841,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1167: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t3);}

/* k3839 in k3836 */
static void C_ccall f_3841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3841,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3844,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(C_fix(-1),((C_word*)t0)[3]);
if(C_truep(t3)){
/* posixwin.scm:1169: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),t2,lf[12],lf[162],lf[163],((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}}

/* k3842 in k3839 in k3836 */
static void C_ccall f_3844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_3798 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3798(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_3798r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3798r(t0,t1,t2,t3);}}

static void C_ccall f_3798r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_check_string_2(t2,lf[161]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[158]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3812,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[158]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3819,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1160: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t9,t2,lf[161]);}
else{
t9=C_eqp(t6,lf[159]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3829,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1161: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t10,t2,lf[161]);}
else{
/* posixwin.scm:1135: ##sys#error */
t10=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[160],t6);}}}

/* k3827 */
static void C_ccall f_3829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3829,2,t0,t1);}
t2=open_binary_output_pipe(&a,1,t1);
/* posixwin.scm:1157: check */
f_3744(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* k3817 */
static void C_ccall f_3819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3819,2,t0,t1);}
t2=open_text_output_pipe(&a,1,t1);
/* posixwin.scm:1157: check */
f_3744(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* k3810 */
static void C_ccall f_3812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1157: check */
f_3744(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* f_3762 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3762(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_3762r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3762r(t0,t1,t2,t3);}}

static void C_ccall f_3762r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_check_string_2(t2,lf[157]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[158]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3776,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[158]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3783,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1150: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t9,t2,lf[157]);}
else{
t9=C_eqp(t6,lf[159]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3793,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1151: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t10,t2,lf[157]);}
else{
/* posixwin.scm:1135: ##sys#error */
t10=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[160],t6);}}}

/* k3791 */
static void C_ccall f_3793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3793,2,t0,t1);}
t2=open_binary_input_pipe(&a,1,t1);
/* posixwin.scm:1147: check */
f_3744(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k3781 */
static void C_ccall f_3783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3783,2,t0,t1);}
t2=open_text_input_pipe(&a,1,t1);
/* posixwin.scm:1147: check */
f_3744(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k3774 */
static void C_ccall f_3776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1147: check */
f_3744(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* check in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_3744(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3744,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3748,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:1137: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t5);}

/* k3746 in check in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3748,2,t0,t1);}
if(C_truep(C_null_pointerp(((C_word*)t0)[5]))){
/* posixwin.scm:1139: ##sys#signal-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(5,*((C_word*)lf[6]+1),((C_word*)t0)[4],lf[12],lf[153],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3760,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1140: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[154]+1)))(6,*((C_word*)lf[154]+1),t2,((C_word*)t0)[2],*((C_word*)lf[155]+1),lf[156],lf[139]);}}

/* k3758 in k3746 in check in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* f_3701 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3701(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3701,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[45]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3708,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3724,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1123: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(3,*((C_word*)lf[16]+1),t5,t2);}

/* k3722 */
static void C_ccall f_3724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1123: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),((C_word*)t0)[2],t1,lf[45]);}

/* k3706 */
static void C_ccall f_3708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(C_fix(0),C_chdir(t1));
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3717,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1125: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t4);}}

/* k3715 in k3706 */
static void C_ccall f_3717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1126: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),((C_word*)t0)[3],lf[12],lf[45],lf[152],((C_word*)t0)[2]);}

/* k3709 in k3706 */
static void C_ccall f_3711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_3542 in k3538 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3542(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3542r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3542r(t0,t1,t2,t3);}}

static void C_ccall f_3542r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3546,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_3546(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_3546(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[2],t3);}}}

/* k3544 */
static void C_ccall f_3546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3546,2,t0,t1);}
t2=C_i_check_string_2(((C_word*)t0)[3],lf[145]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3552,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1114: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(3,*((C_word*)lf[16]+1),t3,((C_word*)t0)[3]);}

/* k3550 in k3544 */
static void C_ccall f_3552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3552,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3555,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3560,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1103: string-split */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[150]+1)))(4,*((C_word*)lf[150]+1),t4,t3,lf[151]);}
else{
t3=t1;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3677,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:1086: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t4,t3,lf[145]);}}

/* k3675 in k3550 in k3544 */
static void C_ccall f_3677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3677,2,t0,t1);}
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3669,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1087: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t4);}}

/* k3667 in k3675 in k3550 in k3544 */
static void C_ccall f_3669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1088: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),((C_word*)t0)[3],lf[12],lf[145],lf[146],((C_word*)t0)[2]);}

/* k3558 in k3550 in k3544 */
static void C_ccall f_3560(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3560,2,t0,t1);}
t2=C_i_car(t1);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3564,a[2]=t4,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(t1);
t7=C_i_check_list_2(t6,lf[52]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3634,a[2]=t5,a[3]=t9,a[4]=((C_word)li72),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3634(t11,((C_word*)t0)[2],t6);}

/* for-each-loop694 in k3558 in k3550 in k3544 */
static void C_fcall f_3634(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3634,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3644,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g695701 */
t5=((C_word*)t0)[2];
f_3564(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3642 in for-each-loop694 in k3558 in k3550 in k3544 */
static void C_ccall f_3644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3634(t3,((C_word*)t0)[2],t2);}

/* g695 in k3558 in k3550 in k3544 */
static void C_fcall f_3564(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3564,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3569,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1107: string-append */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(5,*((C_word*)lf[4]+1),t3,((C_word*)((C_word*)t0)[2])[1],lf[149],t2);}

/* k3567 in g695 in k3558 in k3550 in k3544 */
static void C_ccall f_3569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3569,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
t4=((C_word*)((C_word*)t0)[3])[1];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3598,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3582,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1092: file-exists? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[148]+1)))(3,*((C_word*)lf[148]+1),t6,t4);}

/* k3580 in k3567 in g695 in k3558 in k3550 in k3544 */
static void C_ccall f_3582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3582,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3585,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1093: ##sys#file-info */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[147]+1)))(3,*((C_word*)lf[147]+1),t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_3598(t2,C_SCHEME_FALSE);}}

/* k3583 in k3580 in k3567 in g695 in k3558 in k3550 in k3544 */
static void C_ccall f_3585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_slot(t1,C_fix(4));
t3=((C_word*)t0)[2];
f_3598(t3,C_eqp(C_fix(1),t2));}
else{
t2=((C_word*)t0)[2];
f_3598(t2,C_SCHEME_FALSE);}}

/* k3596 in k3567 in g695 in k3558 in k3550 in k3544 */
static void C_fcall f_3598(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3598,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1086: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t2,((C_word*)t0)[2],lf[145]);}}

/* k3615 in k3596 in k3567 in g695 in k3558 in k3550 in k3544 */
static void C_ccall f_3617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3617,2,t0,t1);}
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1087: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t4);}}

/* k3607 in k3615 in k3596 in k3567 in g695 in k3558 in k3550 in k3544 */
static void C_ccall f_3609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1088: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),((C_word*)t0)[3],lf[12],lf[145],lf[146],((C_word*)t0)[2]);}

/* k3553 in k3550 in k3544 */
static void C_ccall f_3555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_3480 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3480r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3480r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3480r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t7=C_i_check_exact_2(t3,lf[137]);
t8=C_i_check_exact_2(t6,lf[137]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3493,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_negativep(t3))){
/* posixwin.scm:1055: ##sys#signal-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(7,*((C_word*)lf[6]+1),t9,lf[142],lf[137],lf[143],t3,t2);}
else{
t10=t9;
f_3493(2,t10,C_SCHEME_UNDEFINED);}}

/* k3491 */
static void C_ccall f_3493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3493,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3499,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3505,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:1056: port? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[141]+1)))(3,*((C_word*)lf[141]+1),t3,((C_word*)t0)[4]);}

/* k3503 in k3491 */
static void C_ccall f_3505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[5],C_fix(7));
t3=C_eqp(t2,lf[139]);
if(C_truep(t3)){
t4=C_fseek(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
f_3499(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
f_3499(2,t4,C_SCHEME_FALSE);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[5]))){
t2=C_lseek(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_3499(2,t3,t2);}
else{
/* posixwin.scm:1062: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),((C_word*)t0)[2],lf[17],lf[137],lf[140],((C_word*)t0)[5]);}}}

/* k3497 in k3491 */
static void C_ccall f_3499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posixwin.scm:1063: posix-error */
t2=lf[5];
f_1923(7,t2,((C_word*)t0)[4],lf[12],lf[137],lf[138],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* f6540 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f6540(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6540,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[42]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6546 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f6546(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6546,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[41]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6552 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f6552(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6552,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[39]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6558 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f6558(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6558,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[40]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f_3451 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3451(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3451,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[38]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f_3413 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3413(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3413,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[132]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3420,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1016: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t4,t2,lf[132]);}

/* k3418 */
static void C_ccall f_3420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3420,2,t0,t1);}
t2=C_mkstemp(t1);
t3=C_i_string_length(t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3426,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(C_fix(-1),t2);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3443,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1020: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t6);}
else{
t6=t4;
f_3426(2,t6,C_SCHEME_UNDEFINED);}}

/* k3441 in k3418 */
static void C_ccall f_3443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1021: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),((C_word*)t0)[3],lf[12],lf[132],lf[133],((C_word*)t0)[2]);}

/* k3424 in k3418 */
static void C_ccall f_3426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3426,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3433,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm:1022: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[46]+1)))(5,*((C_word*)lf[46]+1),t2,((C_word*)t0)[2],C_fix(0),t3);}

/* k3431 in k3424 in k3418 */
static void C_ccall f_3433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1022: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_3371 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3371(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3371r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3371r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3371r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=C_i_check_exact_2(t2,lf[129]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3378,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t3))){
if(C_truep(C_byteblockp(t3))){
t7=t6;
f_3378(2,t7,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm:1004: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),t6,lf[17],lf[129],lf[131],t3);}}
else{
/* posixwin.scm:1004: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),t6,lf[17],lf[129],lf[131],t3);}}

/* k3376 */
static void C_ccall f_3378(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3378,2,t0,t1);}
t2=C_i_pairp(((C_word*)t0)[5]);
t3=(C_truep(t2)?C_i_car(((C_word*)t0)[5]):C_block_size(((C_word*)t0)[4]));
t4=C_i_check_exact_2(t3,lf[129]);
t5=C_write(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3387,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3393,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1009: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t8);}
else{
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t5);}}

/* k3391 in k3376 */
static void C_ccall f_3393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1010: ##sys#signal-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(7,*((C_word*)lf[6]+1),((C_word*)t0)[4],lf[12],lf[129],lf[130],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3385 in k3376 */
static void C_ccall f_3387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_3326 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3326(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3326r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3326r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3326r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=C_i_check_exact_2(t2,lf[126]);
t6=C_i_check_exact_2(t3,lf[126]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3336,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t8=t7;
f_3336(2,t8,C_i_car(t4));}
else{
/* posixwin.scm:991: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[48]+1)))(3,*((C_word*)lf[48]+1),t7,t3);}}

/* k3334 */
static void C_ccall f_3336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3336,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3339,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t1))){
if(C_truep(C_byteblockp(t1))){
t3=t2;
f_3339(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm:993: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),t2,lf[17],lf[126],lf[128],t1);}}
else{
/* posixwin.scm:993: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),t2,lf[17],lf[126],lf[128],t1);}}

/* k3337 in k3334 */
static void C_ccall f_3339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3339,2,t0,t1);}
t2=C_read(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3342,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3351,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:996: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t5);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list2(&a,2,((C_word*)t0)[4],t2));}}

/* k3349 in k3337 in k3334 */
static void C_ccall f_3351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:997: ##sys#signal-hook */
((C_proc7)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(7,*((C_word*)lf[6]+1),((C_word*)t0)[4],lf[12],lf[126],lf[127],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3340 in k3337 in k3334 */
static void C_ccall f_3342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3342,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* f_3308 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3308(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3308,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[124]);
if(C_truep(C_fixnum_lessp(C_close(t2),C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3321,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:984: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k3319 */
static void C_ccall f_3321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:985: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),((C_word*)t0)[3],lf[12],lf[124],lf[125],((C_word*)t0)[2]);}

/* f_3267 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3267(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4r,(void*)f_3267r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3267r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3267r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t7=C_i_check_string_2(t2,lf[122]);
t8=C_i_check_exact_2(t3,lf[122]);
t9=C_i_check_exact_2(t6,lf[122]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3284,a[2]=t2,a[3]=t1,a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3300,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:974: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(3,*((C_word*)lf[16]+1),t11,t2);}

/* k3298 */
static void C_ccall f_3300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:974: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),((C_word*)t0)[2],t1,lf[122]);}

/* k3282 */
static void C_ccall f_3284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3284,2,t0,t1);}
t2=C_open(t1,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3287,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3293,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:976: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t5);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k3291 in k3282 */
static void C_ccall f_3293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:977: ##sys#signal-hook */
((C_proc8)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(8,*((C_word*)lf[6]+1),((C_word*)t0)[5],lf[12],lf[122],lf[123],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3285 in k3282 */
static void C_ccall f_3287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_3172 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3172(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3172r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3172r(t0,t1,t2,t3);}}

static void C_ccall f_3172r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3176,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_3176(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_3176(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[2],t3);}}}

/* k3174 */
static void C_ccall f_3176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3176,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3179,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:419: check-time-vector */
f_2999(t2,lf[94],((C_word*)t0)[2]);}

/* k3177 in k3174 */
static void C_ccall f_3179(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3179,2,t0,t1);}
if(C_truep(((C_word*)t0)[4])){
t2=C_i_check_string_2(((C_word*)t0)[4],lf[94]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3198,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:423: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t4,((C_word*)t0)[4],lf[94]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t5=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,stub507(t4,t3),C_fix(0));}}

/* k3199 in k3177 in k3174 */
static void C_ccall f_3201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:427: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[46]+1)))(5,*((C_word*)lf[46]+1),((C_word*)t0)[3],t1,C_fix(0),t3);}
else{
/* posix-common.scm:428: ##sys#error */
t2=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[94],lf[96],((C_word*)t0)[2]);}}

/* k3196 in k3177 in k3174 */
static void C_ccall f_3198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3198,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],stub513(t3,t2,t1),C_fix(0));}

/* k3186 in k3177 in k3174 */
static void C_ccall f_3188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* posix-common.scm:424: ##sys#error */
t2=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[94],lf[95],((C_word*)t0)[2]);}}

/* f_3147 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3147(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3147,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3151,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:409: check-time-vector */
f_2999(t3,lf[91],t2);}

/* k3149 */
static void C_ccall f_3151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3151,2,t0,t1);}
t2=C_a_mktime(&a,1,((C_word*)t0)[3]);
if(C_truep(C_flonum_equalp(lf[92],t2))){
/* posix-common.scm:412: ##sys#error */
t3=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[91],lf[93],((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_3096 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3096(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3096r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3096r(t0,t1,t2);}}

static void C_ccall f_3096r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3100,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:401: current-seconds */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[87]+1)))(2,*((C_word*)lf[87]+1),t3);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_3100(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k3098 */
static void C_ccall f_3100(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3100,2,t0,t1);}
t2=C_i_check_number_2(t1,lf[89]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3106,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=t1;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_integer_argumentp(t4);
t7=stub481(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k3104 in k3098 */
static void C_ccall f_3106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:405: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[46]+1)))(5,*((C_word*)lf[46]+1),((C_word*)t0)[3],t1,C_fix(0),t3);}
else{
/* posix-common.scm:406: ##sys#error */
t2=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[89],lf[90],((C_word*)t0)[2]);}}

/* f_3052 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3052(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3052r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3052r(t0,t1,t2);}}

static void C_ccall f_3052r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3056,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:395: current-seconds */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[87]+1)))(2,*((C_word*)lf[87]+1),t3);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
t6=C_i_check_number_2(t5,lf[88]);
/* posix-common.scm:397: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[86]+1)))(4,*((C_word*)lf[86]+1),t1,t5,C_SCHEME_TRUE);}
else{
/* ##sys#error */
t5=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k3054 */
static void C_ccall f_3056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_number_2(t1,lf[88]);
/* posix-common.scm:397: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[86]+1)))(4,*((C_word*)lf[86]+1),((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* f_3018 in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_3018(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3018r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3018r(t0,t1,t2);}}

static void C_ccall f_3018r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3022,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:391: current-seconds */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[87]+1)))(2,*((C_word*)lf[87]+1),t3);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
t6=C_i_check_number_2(t5,lf[85]);
/* posix-common.scm:393: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[86]+1)))(4,*((C_word*)lf[86]+1),t1,t5,C_SCHEME_FALSE);}
else{
/* ##sys#error */
t5=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k3020 */
static void C_ccall f_3022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_number_2(t1,lf[85]);
/* posix-common.scm:393: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[86]+1)))(4,*((C_word*)lf[86]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* check-time-vector in k2995 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_2999(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2999,NULL,3,t1,t2,t3);}
t4=C_i_check_vector_2(t3,t2);
t5=C_block_size(t3);
if(C_truep(C_fixnum_lessp(t5,C_fix(10)))){
/* posix-common.scm:389: ##sys#error */
t6=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,lf[84],t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* f_2814 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2814(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2814r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2814r(t0,t1,t2,t3);}}

static void C_ccall f_2814r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2824,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_2824(t6,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2989,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_i_car(t3);
/* posix-common.scm:350: keyword? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[81]+1)))(3,*((C_word*)lf[81]+1),t6,t7);}}

/* k2987 */
static void C_ccall f_2989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2824(t2,C_i_not(t1));}

/* k2822 */
static void C_fcall f_2824(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2824,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2825,a[2]=((C_word*)t0)[3],a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2830,a[2]=t3,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2835,a[2]=t4,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2840,a[2]=t5,a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2851,a[2]=t6,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* def-pred378403 */
t8=t7;
f_2851(t8,((C_word*)t0)[2]);}
else{
t8=C_i_car(t2);
t9=C_i_cdr(t2);
if(C_truep(C_i_nullp(t9))){
/* def-action379399 */
t10=t6;
f_2840(t10,((C_word*)t0)[2],t8);}
else{
t10=C_i_car(t9);
t11=C_i_cdr(t9);
if(C_truep(C_i_nullp(t11))){
/* def-id380396 */
t12=t5;
f_2835(t12,((C_word*)t0)[2],t8,t10);}
else{
t12=C_i_car(t11);
t13=C_i_cdr(t11);
if(C_truep(C_i_nullp(t13))){
/* def-limit381392 */
t14=t4;
f_2830(t14,((C_word*)t0)[2],t8,t10,t12);}
else{
t14=C_i_car(t13);
t15=C_i_cdr(t13);
if(C_truep(C_i_nullp(t15))){
/* body376387 */
t16=t3;
f_2825(t16,((C_word*)t0)[2],t8,t10,t12,t14);}
else{
/* ##sys#error */
t16=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,((C_word*)t0)[2],lf[2],t15);}}}}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2935,a[2]=((C_word*)t0)[3],a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,((C_word*)t0)[2],t2,((C_word*)t0)[4]);}}

/* a2934 in k2822 */
static void C_ccall f_2935(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2r,(void*)f_2935r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2935r(t0,t1,t2);}}

static void C_ccall f_2935r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2939,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2979,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(5,*((C_word*)lf[76]+1),t3,lf[80],t2,t4);}

/* a2978 in a2934 in k2822 */
static void C_ccall f_2979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2979,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2981,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));}

/* f_2981 in a2978 in a2934 in k2822 */
static void C_ccall f_2981(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2981,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k2937 in a2934 in k2822 */
static void C_ccall f_2939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2939,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2942,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2971,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(5,*((C_word*)lf[76]+1),t2,lf[79],((C_word*)t0)[2],t3);}

/* a2970 in k2937 in a2934 in k2822 */
static void C_ccall f_2971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2971,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2973,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));}

/* f_2973 in a2970 in k2937 in a2934 in k2822 */
static void C_ccall f_2973(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2973,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}

/* k2940 in k2937 in a2934 in k2822 */
static void C_ccall f_2942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2945,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2968,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(5,*((C_word*)lf[76]+1),t2,lf[78],((C_word*)t0)[2],t3);}

/* a2967 in k2940 in k2937 in a2934 in k2822 */
static void C_ccall f_2968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2968,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}

/* k2943 in k2940 in k2937 in a2934 in k2822 */
static void C_ccall f_2945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2948,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2965,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(5,*((C_word*)lf[76]+1),t2,lf[77],((C_word*)t0)[2],t3);}

/* a2964 in k2943 in k2940 in k2937 in a2934 in k2822 */
static void C_ccall f_2965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2965,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k2946 in k2943 in k2940 in k2937 in a2934 in k2822 */
static void C_ccall f_2948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2951,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2962,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(5,*((C_word*)lf[76]+1),t2,lf[54],((C_word*)t0)[2],t3);}

/* a2961 in k2946 in k2943 in k2940 in k2937 in a2934 in k2822 */
static void C_ccall f_2962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2962,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k2949 in k2946 in k2943 in k2940 in k2937 in a2934 in k2822 */
static void C_ccall f_2951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2954,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2959,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(5,*((C_word*)lf[76]+1),t2,lf[55],((C_word*)t0)[2],t3);}

/* a2958 in k2949 in k2946 in k2943 in k2940 in k2937 in a2934 in k2822 */
static void C_ccall f_2959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2959,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in a2934 in k2822 */
static void C_ccall f_2954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:365: ##sys#find-files */
f_2616(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2],lf[53]);}

/* def-pred378 in k2822 */
static void C_fcall f_2851(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2851,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2857,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
/* def-action379399 */
t3=((C_word*)t0)[2];
f_2840(t3,t1,t2);}

/* a2856 in def-pred378 in k2822 */
static void C_ccall f_2857(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2857,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* def-action379 in k2822 */
static void C_fcall f_2840(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2840,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2846,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp);
/* def-id380396 */
t4=((C_word*)t0)[2];
f_2835(t4,t1,t2,t3);}

/* a2845 in def-action379 in k2822 */
static void C_ccall f_2846(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2846,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}

/* def-id380 in k2822 */
static void C_fcall f_2835(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2835,NULL,4,t0,t1,t2,t3);}
/* def-limit381392 */
t4=((C_word*)t0)[2];
f_2830(t4,t1,t2,t3,C_SCHEME_END_OF_LIST);}

/* def-limit381 in k2822 */
static void C_fcall f_2830(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2830,NULL,5,t0,t1,t2,t3,t4);}
/* body376387 */
t5=((C_word*)t0)[2];
f_2825(t5,t1,t2,t3,t4,C_SCHEME_FALSE);}

/* body376 in k2822 */
static void C_fcall f_2825(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2825,NULL,6,t0,t1,t2,t3,t4,t5);}
/* posix-common.scm:356: ##sys#find-files */
f_2616(t1,((C_word*)t0)[2],t2,t3,t4,t5,C_SCHEME_TRUE,C_SCHEME_FALSE,lf[53]);}

/* ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_2616(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
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
C_save_and_reclaim((void*)trf_2616,NULL,9,t1,t2,t3,t4,t5,t6,t7,t8,t9);}
t10=C_i_check_string_2(t2,t9);
t11=C_fix(0);
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2623,a[2]=t3,a[3]=t2,a[4]=t8,a[5]=t5,a[6]=t1,a[7]=t12,a[8]=t4,a[9]=t7,tmp=(C_word)a,a+=10,tmp);
t14=t6;
if(C_truep(t14)){
if(C_truep(C_fixnump(t6))){
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2808,a[2]=t6,a[3]=t12,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp);
t16=t13;
f_2623(t16,t15);}
else{
t15=t6;
t16=t13;
f_2623(t16,t15);}}
else{
t15=t13;
f_2623(t15,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2800,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));}}

/* f_2800 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2800(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2800,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_2808 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2808(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2808,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_lessp(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]));}

/* k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_2623(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2623,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=C_i_stringp(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2785,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_2785(2,t5,t3);}
else{
/* posix-common.scm:326: irregex? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[75]+1)))(3,*((C_word*)lf[75]+1),t4,((C_word*)t0)[2]);}}

/* k2783 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2785,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2788,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:327: irregex */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[74]+1)))(3,*((C_word*)lf[74]+1),t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_2626(t2,((C_word*)t0)[2]);}}

/* k2786 in k2783 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2788,2,t0,t1);}
t2=((C_word*)t0)[2];
f_2626(t2,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2789,a[2]=t1,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp));}

/* f_2789 in k2786 in k2783 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2789(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2789,3,t0,t1,t2);}
/* posix-common.scm:328: irregex-match */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(4,*((C_word*)lf[62]+1),t1,((C_word*)t0)[2],t2);}

/* k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_2626(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2626,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2633,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2775,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posix-common.scm:330: make-pathname */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(4,*((C_word*)lf[60]+1),t3,((C_word*)t0)[2],lf[72]);}
else{
/* posix-common.scm:330: make-pathname */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(4,*((C_word*)lf[60]+1),t3,((C_word*)t0)[2],lf[73]);}}

/* k2773 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:330: glob */
t2=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2633,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2635,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t3,a[8]=((C_word)li32),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_2635(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_2635(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2635,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2654,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=t5,a[10]=t1,a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* posix-common.scm:336: directory? */
t7=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}}

/* k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2654,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2755,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* posix-common.scm:337: pathname-file */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[71]+1)))(3,*((C_word*)lf[71]+1),t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2761,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:346: pproc */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[5]);}}

/* k2759 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2761,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2768,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:346: action */
t3=((C_word*)t0)[4];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* posix-common.scm:347: loop */
t2=((C_word*)((C_word*)t0)[7])[1];
f_2635(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k2766 in k2759 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:346: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2635(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2753 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2755,2,t0,t1);}
if(C_truep((C_truep(C_i_equalp(t1,lf[67]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t1,lf[68]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posix-common.scm:337: loop */
t2=((C_word*)((C_word*)t0)[11])[1];
f_2635(t2,((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2748,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* posix-common.scm:338: symbolic-link? */
t3=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}}

/* k2746 in k2753 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2748,2,t0,t1);}
t2=(C_truep(t1)?C_i_not(((C_word*)t0)[11]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2676,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2679,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:339: pproc */
t5=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[6]);}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2688,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:340: lproc */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[6]);}}

/* k2686 in k2746 in k2753 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2688(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2688,2,t0,t1);}
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[9])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2698,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2700,a[2]=t4,a[3]=((C_word*)t0)[9],a[4]=t6,a[5]=((C_word)li29),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2705,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word)li30),tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2729,a[2]=t6,a[3]=((C_word*)t0)[9],a[4]=t4,a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp);
/* ##sys#dynamic-wind */
t11=*((C_word*)lf[70]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t7,t8,t9,t10);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2739,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2742,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:345: pproc */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}}

/* k2740 in k2686 in k2746 in k2753 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2742(C_word c,C_word t0,C_word t1){
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
f_2635(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* k2737 in k2686 in k2746 in k2753 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:345: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2635(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2728 in k2686 in k2746 in k2753 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2729,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a2704 in k2686 in k2746 in k2753 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2727,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:343: make-pathname */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(4,*((C_word*)lf[60]+1),t3,((C_word*)t0)[4],lf[69]);}

/* k2725 in a2704 in k2686 in k2746 in k2753 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:343: glob */
t2=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2711 in a2704 in k2686 in k2746 in k2753 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2713,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2717,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2720,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:344: pproc */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}

/* k2718 in k2711 in a2704 in k2686 in k2746 in k2753 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2720(C_word c,C_word t0,C_word t1){
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
f_2635(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* k2715 in k2711 in a2704 in k2686 in k2746 in k2753 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:343: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2635(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2699 in k2686 in k2746 in k2753 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2700,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k2696 in k2686 in k2746 in k2753 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:341: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2635(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2677 in k2746 in k2753 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2679(C_word c,C_word t0,C_word t1){
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
f_2635(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* k2674 in k2746 in k2753 in k2652 in loop in k2631 in k2624 in k2621 in ##sys#find-files in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:339: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2635(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_2507 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2507(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_2507r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2507r(t0,t1,t2);}}

static void C_ccall f_2507r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2513,a[2]=t4,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2513(t6,t1,t2);}

/* conc-loop */
static void C_fcall f_2513(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2513,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2528,a[2]=t3,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2534,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li26),tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* a2533 in conc-loop */
static void C_ccall f_2534(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2534,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2538,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2610,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t7=t3;
/* posix-common.scm:304: make-pathname */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(5,*((C_word*)lf[60]+1),t6,C_SCHEME_FALSE,t7,t4);}
else{
/* posix-common.scm:304: make-pathname */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(5,*((C_word*)lf[60]+1),t6,C_SCHEME_FALSE,lf[65],t4);}}

/* k2608 in a2533 in conc-loop */
static void C_ccall f_2610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:304: ##sys#glob->regexp */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[64]+1)))(3,*((C_word*)lf[64]+1),((C_word*)t0)[2],t1);}

/* k2536 in a2533 in conc-loop */
static void C_ccall f_2538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2538,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2545,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[3];
/* posix-common.scm:305: directory */
t4=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_TRUE);}
else{
/* posix-common.scm:305: directory */
t3=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[63],C_SCHEME_TRUE);}}

/* k2543 in k2536 in a2533 in conc-loop */
static void C_ccall f_2545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2545,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2547,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li25),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2547(t5,((C_word*)t0)[2],t1);}

/* loop in k2543 in k2536 in a2533 in conc-loop */
static void C_fcall f_2547(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2547,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[6]);
/* posix-common.scm:306: conc-loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2513(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2564,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* posix-common.scm:307: irregex-match */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(4,*((C_word*)lf[62]+1),t3,((C_word*)t0)[2],t4);}}

/* k2562 in loop in k2543 in k2536 in a2533 in conc-loop */
static void C_ccall f_2564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2564,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2568,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li24),tmp=(C_word)a,a+=6,tmp);
/* g309310 */
t3=t2;
f_2568(t3,((C_word*)t0)[2],t1);}
else{
t2=C_i_cdr(((C_word*)t0)[5]);
/* posix-common.scm:312: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2547(t3,((C_word*)t0)[2],t2);}}

/* g309 in k2562 in loop in k2543 in k2536 in a2533 in conc-loop */
static void C_fcall f_2568(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2568,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2576,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2588,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:310: irregex-match-substring */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[61]+1)))(3,*((C_word*)lf[61]+1),t4,t2);}

/* k2586 in g309 in k2562 in loop in k2543 in k2536 in a2533 in conc-loop */
static void C_ccall f_2588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:310: make-pathname */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(4,*((C_word*)lf[60]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2574 in g309 in k2562 in loop in k2543 in k2536 in a2533 in conc-loop */
static void C_ccall f_2576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2576,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2580,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* posix-common.scm:311: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2547(t4,t2,t3);}

/* k2578 in k2574 in g309 in k2562 in loop in k2543 in k2536 in a2533 in conc-loop */
static void C_ccall f_2580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2580,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* a2527 in conc-loop */
static void C_ccall f_2528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2528,2,t0,t1);}
/* posix-common.scm:303: decompose-pathname */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t1,((C_word*)t0)[2]);}

/* f_2360 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2360(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2360r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2360r(t0,t1,t2);}}

static void C_ccall f_2360r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2364,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:267: current-directory */
t4=*((C_word*)lf[44]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=t3;
f_2364(2,t4,C_i_car(t2));}}

/* k2362 */
static void C_ccall f_2364(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2364,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[3]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[3]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
if(C_truep(C_i_nullp(t7))){
t8=C_i_check_string_2(t1,lf[31]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2385,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:269: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[48]+1)))(3,*((C_word*)lf[48]+1),t9,C_fix(256));}
else{
/* ##sys#error */
t8=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,((C_word*)t0)[2],lf[2],t7);}}

/* k2383 in k2362 */
static void C_ccall f_2385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2385,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2388,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:270: ##sys#make-pointer */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(2,*((C_word*)lf[57]+1),t2);}

/* k2386 in k2383 in k2362 */
static void C_ccall f_2388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:271: ##sys#make-pointer */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(2,*((C_word*)lf[57]+1),t2);}

/* k2389 in k2386 in k2383 in k2362 */
static void C_ccall f_2391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2391,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2395,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2475,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:274: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(3,*((C_word*)lf[16]+1),t3,((C_word*)t0)[4]);}

/* k2473 in k2389 in k2386 in k2383 in k2362 */
static void C_ccall f_2475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:274: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),((C_word*)t0)[2],t1,lf[31]);}

/* k2393 in k2389 in k2386 in k2383 in k2362 */
static void C_ccall f_2395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2395,2,t0,t1);}
t2=C_opendir(t1,((C_word*)t0)[7]);
if(C_truep(C_null_pointerp(((C_word*)t0)[7]))){
/* posix-common.scm:276: posix-error */
t3=lf[5];
f_1923(6,t3,((C_word*)t0)[6],lf[12],lf[31],lf[56],((C_word*)t0)[5]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2409,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word)li21),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_2409(t6,((C_word*)t0)[6]);}}

/* loop in k2393 in k2389 in k2386 in k2383 in k2362 */
static void C_fcall f_2409(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2409,NULL,2,t0,t1);}
t2=C_readdir(((C_word*)t0)[6],((C_word*)t0)[5]);
if(C_truep(C_null_pointerp(((C_word*)t0)[5]))){
t3=C_closedir(((C_word*)t0)[6]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t3=C_foundfile(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2419,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:284: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[46]+1)))(5,*((C_word*)lf[46]+1),t4,((C_word*)t0)[4],C_fix(0),t3);}}

/* k2417 in loop in k2393 in k2389 in k2386 in k2383 in k2362 */
static void C_ccall f_2419(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2419,2,t0,t1);}
t2=C_i_string_ref(t1,C_fix(0));
t3=C_fixnum_greaterp(((C_word*)t0)[5],C_fix(1));
t4=(C_truep(t3)?C_i_string_ref(t1,C_fix(1)):C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2431,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(C_make_character(46),t2);
if(C_truep(t6)){
t7=C_i_not(t4);
if(C_truep(t7)){
t8=t5;
f_2431(t8,t7);}
else{
t8=C_eqp(C_make_character(46),t4);
if(C_truep(t8)){
t9=C_eqp(C_fix(2),((C_word*)t0)[5]);
t10=t5;
f_2431(t10,(C_truep(t9)?t9:C_i_not(((C_word*)t0)[2])));}
else{
t9=t5;
f_2431(t9,C_i_not(((C_word*)t0)[2]));}}}
else{
t7=t5;
f_2431(t7,C_SCHEME_FALSE);}}

/* k2429 in k2417 in loop in k2393 in k2389 in k2386 in k2383 in k2362 */
static void C_fcall f_2431(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2431,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posix-common.scm:291: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2409(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:292: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2409(t3,t2);}}

/* k2439 in k2429 in k2417 in loop in k2393 in k2389 in k2386 in k2383 in k2362 */
static void C_ccall f_2441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2441,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* f_2256 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2256(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2256r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2256r(t0,t1,t2,t3);}}

static void C_ccall f_2256r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2260,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_2260(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_2260(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[2],t3);}}}

/* k2258 */
static void C_ccall f_2260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2260,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2262,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
t3=C_i_check_string_2(((C_word*)t0)[3],lf[49]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2281,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:250: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(3,*((C_word*)lf[16]+1),t4,((C_word*)t0)[3]);}

/* k2279 in k2258 */
static void C_ccall f_2281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2281,2,t0,t1);}
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2287,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:252: find-files */
t3=*((C_word*)lf[53]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,t1,lf[54],C_SCHEME_TRUE,lf[55],C_SCHEME_FALSE);}
else{
/* posix-common.scm:264: rmdir */
f_2262(((C_word*)t0)[2],t1);}}

/* k2285 in k2279 in k2258 */
static void C_ccall f_2287(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2287,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2288,a[2]=((C_word*)t0)[4],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(t1,lf[52]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2315,a[2]=t2,a[3]=t6,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2315(t8,t4,t1);}

/* for-each-loop219 in k2285 in k2279 in k2258 */
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
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2325,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g220226 */
t5=((C_word*)t0)[2];
f_2288(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2323 in for-each-loop219 in k2285 in k2279 in k2258 */
static void C_ccall f_2325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2315(t3,((C_word*)t0)[2],t2);}

/* k2308 in k2285 in k2279 in k2258 */
static void C_ccall f_2310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:263: rmdir */
f_2262(((C_word*)t0)[3],((C_word*)t0)[2]);}

/* g220 in k2285 in k2279 in k2258 */
static void C_fcall f_2288(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2288,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2298,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:258: symbolic-link? */
t4=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2296 in g220 in k2285 in k2279 in k2258 */
static void C_ccall f_2298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2298,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[51]+1);
/* g229230 */
t3=t2;
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2304,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:259: directory? */
t3=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}

/* k2302 in k2296 in g220 in k2285 in k2279 in k2258 */
static void C_ccall f_2304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* g229230 */
f_2262(((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=*((C_word*)lf[51]+1);
/* g229230 */
t3=t2;
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* rmdir in k2258 */
static void C_fcall f_2262(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2262,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2266,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:246: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(3,*((C_word*)lf[14]+1),t3,t2);}

/* k2264 in rmdir in k2258 */
static void C_ccall f_2266(C_word c,C_word t0,C_word t1){
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
t3=lf[5];
f_1923(6,t3,((C_word*)t0)[3],lf[12],lf[49],lf[50],((C_word*)t0)[2]);}}

/* f_2210 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2210(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_2210r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2210r(t0,t1,t2);}}

static void C_ccall f_2210r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2214,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_2214(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_2214(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k2212 */
static void C_ccall f_2214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2214,2,t0,t1);}
if(C_truep(t1)){
/* posix-common.scm:232: change-directory */
t2=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2223,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:233: make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[48]+1)))(3,*((C_word*)lf[48]+1),t2,C_fix(1024));}}

/* k2221 in k2212 */
static void C_ccall f_2223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2223,2,t0,t1);}
t2=C_curdir(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2226,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:236: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t3);}

/* k2224 in k2221 in k2212 */
static void C_ccall f_2226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* posix-common.scm:238: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[46]+1)))(5,*((C_word*)lf[46]+1),((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),((C_word*)t0)[4]);}
else{
/* posix-common.scm:239: ##sys#signal-hook */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(5,*((C_word*)lf[6]+1),((C_word*)t0)[3],lf[12],lf[44],lf[47]);}}

/* f_2200 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2200(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2200,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2208,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:224: file-type */
t4=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2206 */
static void C_ccall f_2208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[31],t1));}

/* f_2190 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2190(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2190,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2198,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:221: file-type */
t4=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2196 */
static void C_ccall f_2198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[35],t1));}

/* f_2180 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2180(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2180,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2188,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:218: file-type */
t4=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2186 */
static void C_ccall f_2188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[34],t1));}

/* f_2170 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2170(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2170,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2178,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:215: file-type */
t4=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2176 */
static void C_ccall f_2178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[32],t1));}

/* f_2160 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2160(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2160,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2168,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:212: file-type */
t4=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2166 */
static void C_ccall f_2168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[33],t1));}

/* f_2150 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2150(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2150,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2158,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:209: file-type */
t4=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_TRUE,C_SCHEME_FALSE);}

/* k2156 */
static void C_ccall f_2158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[30],t1));}

/* f_2140 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2140(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2140,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2148,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:206: file-type */
t4=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2146 */
static void C_ccall f_2148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[36],t1));}

/* f_2050 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2050(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_2050r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2050r(t0,t1,t2,t3);}}

static void C_ccall f_2050r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2075,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:195: ##sys#stat */
f_1941(t12,t2,t5,t9,lf[29]);}
else{
/* ##sys#error */
t12=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[2],t11);}}

/* k2073 */
static void C_ccall f_2075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_type);
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFLNK)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[30]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFDIR)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[31]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFCHR)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[32]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFBLK)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[33]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFIFO)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[34]);}
else{
t3=C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFSOCK));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?lf[35]:lf[36]));}}}}}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_2044 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2044(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2044,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2048,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:192: ##sys#stat */
f_1941(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[28]);}

/* k2046 */
static void C_ccall f_2048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2048,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_double_to_num(&a,C_statbuf.st_size));}

/* f_2038 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2038(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2038,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2042,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:191: ##sys#stat */
f_1941(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[27]);}

/* k2040 */
static void C_ccall f_2042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode));}

/* f_2032 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2032(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2032,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2036,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:190: ##sys#stat */
f_1941(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[26]);}

/* k2034 */
static void C_ccall f_2036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid));}

/* f_2026 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2026(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2026,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2030,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:189: ##sys#stat */
f_1941(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[25]);}

/* k2028 */
static void C_ccall f_2030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2030,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_ctime));}

/* f_2020 in k2016 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_2020(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2020,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2024,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:188: ##sys#stat */
f_1941(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[24]);}

/* k2022 */
static void C_ccall f_2024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2024,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_atime));}

/* f_1985 in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_1985(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1985r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1985r(t0,t1,t2,t3);}}

static void C_ccall f_1985r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1989,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_1989(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_1989(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[2],t3);}}}

/* k1987 */
static void C_ccall f_1989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1989,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1992,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:167: ##sys#stat */
f_1941(t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE,lf[19]);}

/* k1990 in k1987 */
static void C_ccall f_1992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1992,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_a_double_to_num(&a,C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),*((C_word*)lf[20]+1),*((C_word*)lf[21]+1)));}

/* ##sys#stat in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_fcall f_1941(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1941,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1945,a[2]=t2,a[3]=t5,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t7=t6;
f_1945(2,t7,C_fstat(t2));}
else{
if(C_truep(C_i_stringp(t2))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1969,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1976,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1980,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:152: ##sys#expand-home-path */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(3,*((C_word*)lf[16]+1),t9,t2);}
else{
/* posix-common.scm:158: ##sys#signal-hook */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[6]+1)))(6,*((C_word*)lf[6]+1),t6,lf[17],t5,lf[18],t2);}}}

/* k1978 in ##sys#stat in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_1980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:151: ##sys#platform-fixup-pathname */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),((C_word*)t0)[2],t1);}

/* k1974 in ##sys#stat in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_1976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:150: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1967 in ##sys#stat in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_1969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_1945(2,t2,(C_truep(((C_word*)t0)[2])?C_lstat(t1):C_stat(t1)));}

/* k1943 in ##sys#stat in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_1945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
if(C_truep(((C_word*)t0)[5])){
/* posix-common.scm:162: posix-error */
t2=lf[5];
f_1923(6,t2,((C_word*)t0)[4],lf[12],((C_word*)t0)[3],lf[13],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}}

/* posix-error in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_1923(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_1923r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_1923r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_1923r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1927,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t3,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:110: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[9]+1)))(2,*((C_word*)lf[9]+1),t6);}

/* k1925 in posix-error in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_1927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1927,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1934,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1938,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
t6=stub65(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k1936 in k1925 in posix-error in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_1938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:111: string-append */
t2=((C_word*)t0)[4];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[7],t1);}

/* k1932 in k1925 in posix-error in k1909 in k1906 in k1903 in k1900 in k1897 in k1894 */
static void C_ccall f_1934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(7,0,((C_word*)t0)[5],*((C_word*)lf[6]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[434] = {
{"toplevel:posixwin_2escm",(void*)C_posix_toplevel},
{"f_1896:posixwin_2escm",(void*)f_1896},
{"f_1899:posixwin_2escm",(void*)f_1899},
{"f_1902:posixwin_2escm",(void*)f_1902},
{"f_1905:posixwin_2escm",(void*)f_1905},
{"f_1908:posixwin_2escm",(void*)f_1908},
{"f_1911:posixwin_2escm",(void*)f_1911},
{"f_5873:posixwin_2escm",(void*)f_5873},
{"f_5906:posixwin_2escm",(void*)f_5906},
{"f_5883:posixwin_2escm",(void*)f_5883},
{"f_5893:posixwin_2escm",(void*)f_5893},
{"f_5867:posixwin_2escm",(void*)f_5867},
{"f_5871:posixwin_2escm",(void*)f_5871},
{"f_2018:posixwin_2escm",(void*)f_2018},
{"f_5861:posixwin_2escm",(void*)f_5861},
{"f_5827:posixwin_2escm",(void*)f_5827},
{"f_5831:posixwin_2escm",(void*)f_5831},
{"f_2997:posixwin_2escm",(void*)f_2997},
{"f_5786:posixwin_2escm",(void*)f_5786},
{"f_5802:posixwin_2escm",(void*)f_5802},
{"f_5790:posixwin_2escm",(void*)f_5790},
{"f_5793:posixwin_2escm",(void*)f_5793},
{"f_3540:posixwin_2escm",(void*)f_3540},
{"f_4015:posixwin_2escm",(void*)f_4015},
{"f_5767:posixwin_2escm",(void*)f_5767},
{"f_5764:posixwin_2escm",(void*)f_5764},
{"f_5757:posixwin_2escm",(void*)f_5757},
{"f_5751:posixwin_2escm",(void*)f_5751},
{"f_5745:posixwin_2escm",(void*)f_5745},
{"f_5739:posixwin_2escm",(void*)f_5739},
{"f_5733:posixwin_2escm",(void*)f_5733},
{"f_5727:posixwin_2escm",(void*)f_5727},
{"f_5721:posixwin_2escm",(void*)f_5721},
{"f_5715:posixwin_2escm",(void*)f_5715},
{"f_5709:posixwin_2escm",(void*)f_5709},
{"f_5703:posixwin_2escm",(void*)f_5703},
{"f_5697:posixwin_2escm",(void*)f_5697},
{"f_5691:posixwin_2escm",(void*)f_5691},
{"f_5685:posixwin_2escm",(void*)f_5685},
{"f_5679:posixwin_2escm",(void*)f_5679},
{"f_5673:posixwin_2escm",(void*)f_5673},
{"f_5667:posixwin_2escm",(void*)f_5667},
{"f_5661:posixwin_2escm",(void*)f_5661},
{"f_5655:posixwin_2escm",(void*)f_5655},
{"f_5649:posixwin_2escm",(void*)f_5649},
{"f_5643:posixwin_2escm",(void*)f_5643},
{"f_5637:posixwin_2escm",(void*)f_5637},
{"f_5631:posixwin_2escm",(void*)f_5631},
{"f_5625:posixwin_2escm",(void*)f_5625},
{"f_5619:posixwin_2escm",(void*)f_5619},
{"f_5613:posixwin_2escm",(void*)f_5613},
{"f_5607:posixwin_2escm",(void*)f_5607},
{"f_5601:posixwin_2escm",(void*)f_5601},
{"f_5595:posixwin_2escm",(void*)f_5595},
{"f_5589:posixwin_2escm",(void*)f_5589},
{"f_5583:posixwin_2escm",(void*)f_5583},
{"f_5577:posixwin_2escm",(void*)f_5577},
{"f_5571:posixwin_2escm",(void*)f_5571},
{"f_5565:posixwin_2escm",(void*)f_5565},
{"f_5559:posixwin_2escm",(void*)f_5559},
{"f_5553:posixwin_2escm",(void*)f_5553},
{"f_5547:posixwin_2escm",(void*)f_5547},
{"f_5541:posixwin_2escm",(void*)f_5541},
{"f_5535:posixwin_2escm",(void*)f_5535},
{"f_5529:posixwin_2escm",(void*)f_5529},
{"f_5523:posixwin_2escm",(void*)f_5523},
{"f_5517:posixwin_2escm",(void*)f_5517},
{"f_5511:posixwin_2escm",(void*)f_5511},
{"f_5496:posixwin_2escm",(void*)f_5496},
{"f_5506:posixwin_2escm",(void*)f_5506},
{"f_5465:posixwin_2escm",(void*)f_5465},
{"f_5491:posixwin_2escm",(void*)f_5491},
{"f_5476:posixwin_2escm",(void*)f_5476},
{"f_5480:posixwin_2escm",(void*)f_5480},
{"f_5484:posixwin_2escm",(void*)f_5484},
{"f_5488:posixwin_2escm",(void*)f_5488},
{"f_5453:posixwin_2escm",(void*)f_5453},
{"f_5450:posixwin_2escm",(void*)f_5450},
{"f_5390:posixwin_2escm",(void*)f_5390},
{"f_5417:posixwin_2escm",(void*)f_5417},
{"f_5427:posixwin_2escm",(void*)f_5427},
{"f_5411:posixwin_2escm",(void*)f_5411},
{"f_5378:posixwin_2escm",(void*)f_5378},
{"f_5309:posixwin_2escm",(void*)f_5309},
{"f_5240:posixwin_2escm",(void*)f_5240},
{"f_5153:posixwin_2escm",(void*)f_5153},
{"f_5234:posixwin_2escm",(void*)f_5234},
{"f_5238:posixwin_2escm",(void*)f_5238},
{"f_5199:posixwin_2escm",(void*)f_5199},
{"f_5202:posixwin_2escm",(void*)f_5202},
{"f_5213:posixwin_2escm",(void*)f_5213},
{"f_5207:posixwin_2escm",(void*)f_5207},
{"f_5155:posixwin_2escm",(void*)f_5155},
{"f_5172:posixwin_2escm",(void*)f_5172},
{"f_5182:posixwin_2escm",(void*)f_5182},
{"f_5160:posixwin_2escm",(void*)f_5160},
{"f_5034:posixwin_2escm",(void*)f_5034},
{"f_5038:posixwin_2escm",(void*)f_5038},
{"f_5129:posixwin_2escm",(void*)f_5129},
{"f_5041:posixwin_2escm",(void*)f_5041},
{"f_5097:posixwin_2escm",(void*)f_5097},
{"f_5101:posixwin_2escm",(void*)f_5101},
{"f_5105:posixwin_2escm",(void*)f_5105},
{"f_5109:posixwin_2escm",(void*)f_5109},
{"f_5113:posixwin_2escm",(void*)f_5113},
{"f_4976:posixwin_2escm",(void*)f_4976},
{"f_4980:posixwin_2escm",(void*)f_4980},
{"f_5090:posixwin_2escm",(void*)f_5090},
{"f_5070:posixwin_2escm",(void*)f_5070},
{"f_5074:posixwin_2escm",(void*)f_5074},
{"f_5078:posixwin_2escm",(void*)f_5078},
{"f_4942:posixwin_2escm",(void*)f_4942},
{"f_4959:posixwin_2escm",(void*)f_4959},
{"f_4963:posixwin_2escm",(void*)f_4963},
{"f_4936:posixwin_2escm",(void*)f_4936},
{"f_4915:posixwin_2escm",(void*)f_4915},
{"f_4919:posixwin_2escm",(void*)f_4919},
{"f_4931:posixwin_2escm",(void*)f_4931},
{"f_4912:posixwin_2escm",(void*)f_4912},
{"f_4836:posixwin_2escm",(void*)f_4836},
{"f_4864:posixwin_2escm",(void*)f_4864},
{"f_4760:posixwin_2escm",(void*)f_4760},
{"f_4788:posixwin_2escm",(void*)f_4788},
{"f_4745:posixwin_2escm",(void*)f_4745},
{"f_4749:posixwin_2escm",(void*)f_4749},
{"f_4709:posixwin_2escm",(void*)f_4709},
{"f_4716:posixwin_2escm",(void*)f_4716},
{"f_4719:posixwin_2escm",(void*)f_4719},
{"f_4736:posixwin_2escm",(void*)f_4736},
{"f_4722:posixwin_2escm",(void*)f_4722},
{"f_4725:posixwin_2escm",(void*)f_4725},
{"f_4732:posixwin_2escm",(void*)f_4732},
{"f_4659:posixwin_2escm",(void*)f_4659},
{"f_4671:posixwin_2escm",(void*)f_4671},
{"f_4690:posixwin_2escm",(void*)f_4690},
{"f_4642:posixwin_2escm",(void*)f_4642},
{"f_4625:posixwin_2escm",(void*)f_4625},
{"f_4546:posixwin_2escm",(void*)f_4546},
{"f_4589:posixwin_2escm",(void*)f_4589},
{"f_4560:posixwin_2escm",(void*)f_4560},
{"f_4617:posixwin_2escm",(void*)f_4617},
{"f_4482:posixwin_2escm",(void*)f_4482},
{"f_4486:posixwin_2escm",(void*)f_4486},
{"f_4492:posixwin_2escm",(void*)f_4492},
{"f_4501:posixwin_2escm",(void*)f_4501},
{"f_4467:posixwin_2escm",(void*)f_4467},
{"f_4474:posixwin_2escm",(void*)f_4474},
{"f_4448:posixwin_2escm",(void*)f_4448},
{"f_4452:posixwin_2escm",(void*)f_4452},
{"f_4455:posixwin_2escm",(void*)f_4455},
{"f_4432:posixwin_2escm",(void*)f_4432},
{"f_4420:posixwin_2escm",(void*)f_4420},
{"f_4355:posixwin_2escm",(void*)f_4355},
{"f_4361:posixwin_2escm",(void*)f_4361},
{"f_4365:posixwin_2escm",(void*)f_4365},
{"f_4373:posixwin_2escm",(void*)f_4373},
{"f_4399:posixwin_2escm",(void*)f_4399},
{"f_4403:posixwin_2escm",(void*)f_4403},
{"f_4391:posixwin_2escm",(void*)f_4391},
{"f_4335:posixwin_2escm",(void*)f_4335},
{"f_4343:posixwin_2escm",(void*)f_4343},
{"f_4318:posixwin_2escm",(void*)f_4318},
{"f_4329:posixwin_2escm",(void*)f_4329},
{"f_4333:posixwin_2escm",(void*)f_4333},
{"f_4288:posixwin_2escm",(void*)f_4288},
{"f_4295:posixwin_2escm",(void*)f_4295},
{"f_4304:posixwin_2escm",(void*)f_4304},
{"f_4298:posixwin_2escm",(void*)f_4298},
{"f_4253:posixwin_2escm",(void*)f_4253},
{"f_4257:posixwin_2escm",(void*)f_4257},
{"f_4286:posixwin_2escm",(void*)f_4286},
{"f_4272:posixwin_2escm",(void*)f_4272},
{"f_4266:posixwin_2escm",(void*)f_4266},
{"f_4239:posixwin_2escm",(void*)f_4239},
{"f_4251:posixwin_2escm",(void*)f_4251},
{"f_4225:posixwin_2escm",(void*)f_4225},
{"f_4237:posixwin_2escm",(void*)f_4237},
{"f_4207:posixwin_2escm",(void*)f_4207},
{"f_4211:posixwin_2escm",(void*)f_4211},
{"f_4223:posixwin_2escm",(void*)f_4223},
{"f_4170:posixwin_2escm",(void*)f_4170},
{"f_4178:posixwin_2escm",(void*)f_4178},
{"f_4161:posixwin_2escm",(void*)f_4161},
{"f_4155:posixwin_2escm",(void*)f_4155},
{"f_4149:posixwin_2escm",(void*)f_4149},
{"f_4125:posixwin_2escm",(void*)f_4125},
{"f_4147:posixwin_2escm",(void*)f_4147},
{"f_4143:posixwin_2escm",(void*)f_4143},
{"f_4135:posixwin_2escm",(void*)f_4135},
{"f_4095:posixwin_2escm",(void*)f_4095},
{"f_4123:posixwin_2escm",(void*)f_4123},
{"f_4119:posixwin_2escm",(void*)f_4119},
{"f_4111:posixwin_2escm",(void*)f_4111},
{"f_4039:posixwin_2escm",(void*)f_4039},
{"f_4049:posixwin_2escm",(void*)f_4049},
{"f_4026:posixwin_2escm",(void*)f_4026},
{"f_4017:posixwin_2escm",(void*)f_4017},
{"f_3941:posixwin_2escm",(void*)f_3941},
{"f_3945:posixwin_2escm",(void*)f_3945},
{"f_3957:posixwin_2escm",(void*)f_3957},
{"f_3948:posixwin_2escm",(void*)f_3948},
{"f_3921:posixwin_2escm",(void*)f_3921},
{"f_3925:posixwin_2escm",(void*)f_3925},
{"f_3931:posixwin_2escm",(void*)f_3931},
{"f_3935:posixwin_2escm",(void*)f_3935},
{"f_3901:posixwin_2escm",(void*)f_3901},
{"f_3905:posixwin_2escm",(void*)f_3905},
{"f_3911:posixwin_2escm",(void*)f_3911},
{"f_3915:posixwin_2escm",(void*)f_3915},
{"f_3877:posixwin_2escm",(void*)f_3877},
{"f_3881:posixwin_2escm",(void*)f_3881},
{"f_3892:posixwin_2escm",(void*)f_3892},
{"f_3896:posixwin_2escm",(void*)f_3896},
{"f_3886:posixwin_2escm",(void*)f_3886},
{"f_3853:posixwin_2escm",(void*)f_3853},
{"f_3857:posixwin_2escm",(void*)f_3857},
{"f_3868:posixwin_2escm",(void*)f_3868},
{"f_3872:posixwin_2escm",(void*)f_3872},
{"f_3862:posixwin_2escm",(void*)f_3862},
{"f_3834:posixwin_2escm",(void*)f_3834},
{"f_3838:posixwin_2escm",(void*)f_3838},
{"f_3841:posixwin_2escm",(void*)f_3841},
{"f_3844:posixwin_2escm",(void*)f_3844},
{"f_3798:posixwin_2escm",(void*)f_3798},
{"f_3829:posixwin_2escm",(void*)f_3829},
{"f_3819:posixwin_2escm",(void*)f_3819},
{"f_3812:posixwin_2escm",(void*)f_3812},
{"f_3762:posixwin_2escm",(void*)f_3762},
{"f_3793:posixwin_2escm",(void*)f_3793},
{"f_3783:posixwin_2escm",(void*)f_3783},
{"f_3776:posixwin_2escm",(void*)f_3776},
{"f_3744:posixwin_2escm",(void*)f_3744},
{"f_3748:posixwin_2escm",(void*)f_3748},
{"f_3760:posixwin_2escm",(void*)f_3760},
{"f_3701:posixwin_2escm",(void*)f_3701},
{"f_3724:posixwin_2escm",(void*)f_3724},
{"f_3708:posixwin_2escm",(void*)f_3708},
{"f_3717:posixwin_2escm",(void*)f_3717},
{"f_3711:posixwin_2escm",(void*)f_3711},
{"f_3542:posixwin_2escm",(void*)f_3542},
{"f_3546:posixwin_2escm",(void*)f_3546},
{"f_3552:posixwin_2escm",(void*)f_3552},
{"f_3677:posixwin_2escm",(void*)f_3677},
{"f_3669:posixwin_2escm",(void*)f_3669},
{"f_3560:posixwin_2escm",(void*)f_3560},
{"f_3634:posixwin_2escm",(void*)f_3634},
{"f_3644:posixwin_2escm",(void*)f_3644},
{"f_3564:posixwin_2escm",(void*)f_3564},
{"f_3569:posixwin_2escm",(void*)f_3569},
{"f_3582:posixwin_2escm",(void*)f_3582},
{"f_3585:posixwin_2escm",(void*)f_3585},
{"f_3598:posixwin_2escm",(void*)f_3598},
{"f_3617:posixwin_2escm",(void*)f_3617},
{"f_3609:posixwin_2escm",(void*)f_3609},
{"f_3555:posixwin_2escm",(void*)f_3555},
{"f_3480:posixwin_2escm",(void*)f_3480},
{"f_3493:posixwin_2escm",(void*)f_3493},
{"f_3505:posixwin_2escm",(void*)f_3505},
{"f_3499:posixwin_2escm",(void*)f_3499},
{"f6540:posixwin_2escm",(void*)f6540},
{"f6546:posixwin_2escm",(void*)f6546},
{"f6552:posixwin_2escm",(void*)f6552},
{"f6558:posixwin_2escm",(void*)f6558},
{"f_3451:posixwin_2escm",(void*)f_3451},
{"f_3413:posixwin_2escm",(void*)f_3413},
{"f_3420:posixwin_2escm",(void*)f_3420},
{"f_3443:posixwin_2escm",(void*)f_3443},
{"f_3426:posixwin_2escm",(void*)f_3426},
{"f_3433:posixwin_2escm",(void*)f_3433},
{"f_3371:posixwin_2escm",(void*)f_3371},
{"f_3378:posixwin_2escm",(void*)f_3378},
{"f_3393:posixwin_2escm",(void*)f_3393},
{"f_3387:posixwin_2escm",(void*)f_3387},
{"f_3326:posixwin_2escm",(void*)f_3326},
{"f_3336:posixwin_2escm",(void*)f_3336},
{"f_3339:posixwin_2escm",(void*)f_3339},
{"f_3351:posixwin_2escm",(void*)f_3351},
{"f_3342:posixwin_2escm",(void*)f_3342},
{"f_3308:posixwin_2escm",(void*)f_3308},
{"f_3321:posixwin_2escm",(void*)f_3321},
{"f_3267:posixwin_2escm",(void*)f_3267},
{"f_3300:posixwin_2escm",(void*)f_3300},
{"f_3284:posixwin_2escm",(void*)f_3284},
{"f_3293:posixwin_2escm",(void*)f_3293},
{"f_3287:posixwin_2escm",(void*)f_3287},
{"f_3172:posixwin_2escm",(void*)f_3172},
{"f_3176:posixwin_2escm",(void*)f_3176},
{"f_3179:posixwin_2escm",(void*)f_3179},
{"f_3201:posixwin_2escm",(void*)f_3201},
{"f_3198:posixwin_2escm",(void*)f_3198},
{"f_3188:posixwin_2escm",(void*)f_3188},
{"f_3147:posixwin_2escm",(void*)f_3147},
{"f_3151:posixwin_2escm",(void*)f_3151},
{"f_3096:posixwin_2escm",(void*)f_3096},
{"f_3100:posixwin_2escm",(void*)f_3100},
{"f_3106:posixwin_2escm",(void*)f_3106},
{"f_3052:posixwin_2escm",(void*)f_3052},
{"f_3056:posixwin_2escm",(void*)f_3056},
{"f_3018:posixwin_2escm",(void*)f_3018},
{"f_3022:posixwin_2escm",(void*)f_3022},
{"f_2999:posixwin_2escm",(void*)f_2999},
{"f_2814:posixwin_2escm",(void*)f_2814},
{"f_2989:posixwin_2escm",(void*)f_2989},
{"f_2824:posixwin_2escm",(void*)f_2824},
{"f_2935:posixwin_2escm",(void*)f_2935},
{"f_2979:posixwin_2escm",(void*)f_2979},
{"f_2981:posixwin_2escm",(void*)f_2981},
{"f_2939:posixwin_2escm",(void*)f_2939},
{"f_2971:posixwin_2escm",(void*)f_2971},
{"f_2973:posixwin_2escm",(void*)f_2973},
{"f_2942:posixwin_2escm",(void*)f_2942},
{"f_2968:posixwin_2escm",(void*)f_2968},
{"f_2945:posixwin_2escm",(void*)f_2945},
{"f_2965:posixwin_2escm",(void*)f_2965},
{"f_2948:posixwin_2escm",(void*)f_2948},
{"f_2962:posixwin_2escm",(void*)f_2962},
{"f_2951:posixwin_2escm",(void*)f_2951},
{"f_2959:posixwin_2escm",(void*)f_2959},
{"f_2954:posixwin_2escm",(void*)f_2954},
{"f_2851:posixwin_2escm",(void*)f_2851},
{"f_2857:posixwin_2escm",(void*)f_2857},
{"f_2840:posixwin_2escm",(void*)f_2840},
{"f_2846:posixwin_2escm",(void*)f_2846},
{"f_2835:posixwin_2escm",(void*)f_2835},
{"f_2830:posixwin_2escm",(void*)f_2830},
{"f_2825:posixwin_2escm",(void*)f_2825},
{"f_2616:posixwin_2escm",(void*)f_2616},
{"f_2800:posixwin_2escm",(void*)f_2800},
{"f_2808:posixwin_2escm",(void*)f_2808},
{"f_2623:posixwin_2escm",(void*)f_2623},
{"f_2785:posixwin_2escm",(void*)f_2785},
{"f_2788:posixwin_2escm",(void*)f_2788},
{"f_2789:posixwin_2escm",(void*)f_2789},
{"f_2626:posixwin_2escm",(void*)f_2626},
{"f_2775:posixwin_2escm",(void*)f_2775},
{"f_2633:posixwin_2escm",(void*)f_2633},
{"f_2635:posixwin_2escm",(void*)f_2635},
{"f_2654:posixwin_2escm",(void*)f_2654},
{"f_2761:posixwin_2escm",(void*)f_2761},
{"f_2768:posixwin_2escm",(void*)f_2768},
{"f_2755:posixwin_2escm",(void*)f_2755},
{"f_2748:posixwin_2escm",(void*)f_2748},
{"f_2688:posixwin_2escm",(void*)f_2688},
{"f_2742:posixwin_2escm",(void*)f_2742},
{"f_2739:posixwin_2escm",(void*)f_2739},
{"f_2729:posixwin_2escm",(void*)f_2729},
{"f_2705:posixwin_2escm",(void*)f_2705},
{"f_2727:posixwin_2escm",(void*)f_2727},
{"f_2713:posixwin_2escm",(void*)f_2713},
{"f_2720:posixwin_2escm",(void*)f_2720},
{"f_2717:posixwin_2escm",(void*)f_2717},
{"f_2700:posixwin_2escm",(void*)f_2700},
{"f_2698:posixwin_2escm",(void*)f_2698},
{"f_2679:posixwin_2escm",(void*)f_2679},
{"f_2676:posixwin_2escm",(void*)f_2676},
{"f_2507:posixwin_2escm",(void*)f_2507},
{"f_2513:posixwin_2escm",(void*)f_2513},
{"f_2534:posixwin_2escm",(void*)f_2534},
{"f_2610:posixwin_2escm",(void*)f_2610},
{"f_2538:posixwin_2escm",(void*)f_2538},
{"f_2545:posixwin_2escm",(void*)f_2545},
{"f_2547:posixwin_2escm",(void*)f_2547},
{"f_2564:posixwin_2escm",(void*)f_2564},
{"f_2568:posixwin_2escm",(void*)f_2568},
{"f_2588:posixwin_2escm",(void*)f_2588},
{"f_2576:posixwin_2escm",(void*)f_2576},
{"f_2580:posixwin_2escm",(void*)f_2580},
{"f_2528:posixwin_2escm",(void*)f_2528},
{"f_2360:posixwin_2escm",(void*)f_2360},
{"f_2364:posixwin_2escm",(void*)f_2364},
{"f_2385:posixwin_2escm",(void*)f_2385},
{"f_2388:posixwin_2escm",(void*)f_2388},
{"f_2391:posixwin_2escm",(void*)f_2391},
{"f_2475:posixwin_2escm",(void*)f_2475},
{"f_2395:posixwin_2escm",(void*)f_2395},
{"f_2409:posixwin_2escm",(void*)f_2409},
{"f_2419:posixwin_2escm",(void*)f_2419},
{"f_2431:posixwin_2escm",(void*)f_2431},
{"f_2441:posixwin_2escm",(void*)f_2441},
{"f_2256:posixwin_2escm",(void*)f_2256},
{"f_2260:posixwin_2escm",(void*)f_2260},
{"f_2281:posixwin_2escm",(void*)f_2281},
{"f_2287:posixwin_2escm",(void*)f_2287},
{"f_2315:posixwin_2escm",(void*)f_2315},
{"f_2325:posixwin_2escm",(void*)f_2325},
{"f_2310:posixwin_2escm",(void*)f_2310},
{"f_2288:posixwin_2escm",(void*)f_2288},
{"f_2298:posixwin_2escm",(void*)f_2298},
{"f_2304:posixwin_2escm",(void*)f_2304},
{"f_2262:posixwin_2escm",(void*)f_2262},
{"f_2266:posixwin_2escm",(void*)f_2266},
{"f_2210:posixwin_2escm",(void*)f_2210},
{"f_2214:posixwin_2escm",(void*)f_2214},
{"f_2223:posixwin_2escm",(void*)f_2223},
{"f_2226:posixwin_2escm",(void*)f_2226},
{"f_2200:posixwin_2escm",(void*)f_2200},
{"f_2208:posixwin_2escm",(void*)f_2208},
{"f_2190:posixwin_2escm",(void*)f_2190},
{"f_2198:posixwin_2escm",(void*)f_2198},
{"f_2180:posixwin_2escm",(void*)f_2180},
{"f_2188:posixwin_2escm",(void*)f_2188},
{"f_2170:posixwin_2escm",(void*)f_2170},
{"f_2178:posixwin_2escm",(void*)f_2178},
{"f_2160:posixwin_2escm",(void*)f_2160},
{"f_2168:posixwin_2escm",(void*)f_2168},
{"f_2150:posixwin_2escm",(void*)f_2150},
{"f_2158:posixwin_2escm",(void*)f_2158},
{"f_2140:posixwin_2escm",(void*)f_2140},
{"f_2148:posixwin_2escm",(void*)f_2148},
{"f_2050:posixwin_2escm",(void*)f_2050},
{"f_2075:posixwin_2escm",(void*)f_2075},
{"f_2044:posixwin_2escm",(void*)f_2044},
{"f_2048:posixwin_2escm",(void*)f_2048},
{"f_2038:posixwin_2escm",(void*)f_2038},
{"f_2042:posixwin_2escm",(void*)f_2042},
{"f_2032:posixwin_2escm",(void*)f_2032},
{"f_2036:posixwin_2escm",(void*)f_2036},
{"f_2026:posixwin_2escm",(void*)f_2026},
{"f_2030:posixwin_2escm",(void*)f_2030},
{"f_2020:posixwin_2escm",(void*)f_2020},
{"f_2024:posixwin_2escm",(void*)f_2024},
{"f_1985:posixwin_2escm",(void*)f_1985},
{"f_1989:posixwin_2escm",(void*)f_1989},
{"f_1992:posixwin_2escm",(void*)f_1992},
{"f_1941:posixwin_2escm",(void*)f_1941},
{"f_1980:posixwin_2escm",(void*)f_1980},
{"f_1976:posixwin_2escm",(void*)f_1976},
{"f_1969:posixwin_2escm",(void*)f_1969},
{"f_1945:posixwin_2escm",(void*)f_1945},
{"f_1923:posixwin_2escm",(void*)f_1923},
{"f_1927:posixwin_2escm",(void*)f_1927},
{"f_1938:posixwin_2escm",(void*)f_1938},
{"f_1934:posixwin_2escm",(void*)f_1934},
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
