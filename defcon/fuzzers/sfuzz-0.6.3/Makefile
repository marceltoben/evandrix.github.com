# This file was automatically built by the simple fuzzer configuration process
# Manual edits will not be saved if you run configure again
# you have been warned.

### Variables for building
CCPATH=/usr/bin
CC=gcc
INSTALL=/usr/bin/install
CFLAGS=-g -O2 -Wall -I. -DPREFIX=\"/usr/local\" -fPIC -D__LINUX__ 
LDFLAGS=
TARGET_PLAT=Darwin
CP=/bin/cp
SED=/usr/bin/sed
CAT=/bin/cat
UNAME=/usr/bin/uname
DIRNAME=/usr/bin/dirname
BASENAME=/usr/bin/basename
LS=/bin/ls
GREP=/usr/bin/grep
PREFIX=/usr/local
RM=/bin/rm
MKDIR=/bin/mkdir
SHARED_INC=
SHARED_OPTS=-dynamiclib -undefined dynamic_lookup -single_module

SF_OBJS=file-utils.o sfuzz.o os-abs.o
SNOOP_OBJS=snoop.o os-abs.o
PLUGIN_EXAMPLE_OBJS=sfuzz-plugin-example.o sfuzz-plugin-ssl-transport.o sfuzz-server-plugin.o

LIBS= -ldl

BIN_DIR=/usr/local/bin/
SHARE_DIR=/usr/local/share/
SFUZZ_SAMPLE=sfuzz-sample/

PROGS=sfuzz sfuzz-plugin-example.so sfuzz-server-plugin.so 

all: sfuzz sfuzz-plugin-example.so sfuzz-server-plugin.so 
	@echo Finished building.

.PHONY: all install uninstall clean dist-clean distclean release

sfuzz sfuzz.exe: $(SF_OBJS)
	@echo "[LINK] $@"
	@$(CCPATH)/$(CC) -o $@ $(SF_OBJS) $(LDFLAGS) $(LIBS)

snoop snoop.exe: $(SNOOP_OBJS)
	@echo "[LINK] $@"
	@$(CCPATH)/$(CC) -o $@ $(SNOOP_OBJS) $(LDFLAGS) $(LIBS)

%.so: %.c $(SHARED_INC)
	@echo "[LINK] $@"
	@$(CCPATH)/$(CC) $(CFLAGS) -D__PLUGIN_BUILD__ -o $@ $< $(SHARED_INC) $(SHARED_OPTS)

%.o: %.c
	@echo "[CC] $@"
	@$(CCPATH)/$(CC) -c -o $@ $(CFLAGS) $<

install: all
	@echo "Installing to: $(PREFIX)"
	@$(INSTALL) sfuzz $(BIN_DIR)
	@$(MKDIR) $(SHARE_DIR)sfuzz-db
	@$(CP) $(SFUZZ_SAMPLE)* $(SHARE_DIR)sfuzz-db
	@$(CP) *.so $(SHARE_DIR)sfuzz-db
	@echo Installed.

uninstall:
	@$(RM) -rf $(SHARE_DIR)sfuzz-db
	@$(RM) -f  $(BIN_DIR)sfuzz
	@$(RM) -f  $(BIN_DIR)sfuzz.exe
	@echo "Uninstalled."

clean:
	@$(RM) -f core *~ *.o snoop snoop.exe sfuzz sfuzz.exe *.so

distclean dist-clean: clean
	@$(RM) -f Makefile Makefile.old
	@echo Makefile / configuration removed.

release: distclean
	@echo Making a release tree:
	@$(RM) -rf /tmp/sfuzz-release
	@$(MKDIR) /tmp/sfuzz-release
	@$(CP) -dPar * /tmp/sfuzz-release
	@$(RM) -rf /tmp/sfuzz-release/CVS
	@$(RM) -rf /tmp/sfuzz-release/sfuzz-sample/CVS
	@$(RM) -rf /tmp/sfuzz-release/.git
	@echo /tmp/sfuzz-release is built.