#     PREREQ_PM => { Carp=>q[0] }

all : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1
realclean : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 realclean
	/opt/local/bin/perl -e '1 while unlink $$ARGV[0]' Makefile
distclean : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 distclean
	/opt/local/bin/perl -e '1 while unlink $$ARGV[0]' Makefile


force_do_it :
	@ true
build : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 build
clean : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 clean
code : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 code
config_data : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 config_data
diff : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 diff
dist : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 dist
distcheck : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 distcheck
distdir : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 distdir
distinstall : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 distinstall
distmeta : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 distmeta
distsign : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 distsign
disttest : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 disttest
docs : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 docs
fakeinstall : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 fakeinstall
help : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 help
html : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 html
install : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 install
installdeps : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 installdeps
manifest : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 manifest
manifest_skip : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 manifest_skip
manpages : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 manpages
pardist : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 pardist
ppd : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 ppd
ppmdist : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 ppmdist
prereq_data : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 prereq_data
prereq_report : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 prereq_report
pure_install : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 pure_install
retest : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 retest
skipcheck : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 skipcheck
test : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 test
testall : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 testall
testcover : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 testcover
testdb : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 testdb
testpod : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 testpod
testpodcoverage : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 testpodcoverage
versioninstall : force_do_it
	/opt/local/bin/perl Build --makefile_env_macros 1 versioninstall

.EXPORT : INSTALLARCHLIB INSTALLSCRIPT INSTALLVENDORSCRIPT INSTALLSITEMAN1DIR INSTALLSITESCRIPT DESTDIR VERBINST INSTALLSITEARCH INSTALLSITEBIN INSTALLVENDORMAN3DIR INSTALLVENDORBIN UNINST POLLUTE INSTALLVENDORLIB INSTALLPRIVLIB INSTALLMAN3DIR INC INSTALLSITELIB INSTALLVENDORMAN1DIR PREFIX INSTALLDIRS INSTALLVENDORARCH TEST_VERBOSE INSTALLMAN1DIR INSTALLBIN INSTALL_BASE INSTALLSITEMAN3DIR

