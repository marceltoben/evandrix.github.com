#!/usr/bin/perl

#
# Copyright © 2008 Thomas A. Fine
#
# Redistribution is permitted, in whole or in part, for commercial and
# non-commercial purposes, provided only that this copyright notice
# remains.
#

use Socket;

$timeout=30;
$startport=12345;
$maxtries=50;
$options="";
$user="";
$localhost="localhost";
$command="sleep $timeout";

while (substr($ARGV[0],0,1) eq "-") {
  $opt=shift(@ARGV);
  if ($opt eq "-l" || $opt eq "--login") {
    $user=shift(@ARGV);
    if (index($user,"\@") == 0) {
      $ssh_host=substr($user,1);
      $user="";
    } elsif (index($user,"@") > 0) {
      ($user,$ssh_host)=split('@',$user,2);
      $user .= "@";
    } else {
      $user .= "@";
    }
  }
  elsif ($opt eq "-b" || $opt eq "--debug") {
    $debug=1;
  }
  elsif ($opt eq "-t" || $opt eq "--timeout") {
    if (length($command) == 0) {
      &usage;
      exit(-1);
    }
    $timeout=shift(@ARGV);
    if ($timeout !~ /^[0-9]+[hmd]?$/) {
      &usage;
      exit(-1);
    }
    if ($timeout =~ /[hmd]$/) {
      $u=substr($timeout,length($timeout)-1,1);
      $timeout=substr($timeout,0,length($timeout)-1);
      if ($u eq "m") { $timeout *= 60; }
      if ($u eq "h") { $timeout *= 3600; }
      if ($u eq "d") { $timeout *= 86400; }
    }
    $command="sleep $timeout";
    ++$customtimeout;
  }
  elsif ($opt eq "-p" || $opt eq "--port") {
    $ssh_port=shift(@ARGV);
    $options .= "-p $ssh_port ";
  }
  elsif ($opt eq "-s" || $opt eq "--shared") {
    $options .= "-o 'GatewayPorts yes' ";
    $localhost=`hostname`; chop($localhost);
  }
  elsif ($opt eq "-d" || $opt eq "--daemon") {
    if ($customtimeout) {
      &usage;
      exit(-1);
    }
    $options .= "-N ";
    $command = "";
  }
  elsif ($opt eq "-h" || $opt eq "--help") {
    &usage;
    exit(0);
  }
}

if ($#ARGV == -1 || $#ARGV > 0) {
  &usage;
  exit(0);
}

$url=shift(@ARGV);

if ($url !~ /:\/\//) {
  print STDERR "ERROR: argument must be in URL form.\n";
  &usage;
  exit(0);
}

($service,$rest)=split(/:\/\//,$url,2);
($hostport,$path)=split('/',$rest);
($host,$port)=split(':',$hostport);
if (index($host,'@') > 0) {
  ($servuser,$host)=split('@',$host);
  $servuser .= '@';
}

if (length($ssh_host) == 0) { $ssh_host=$host; }

if ($service eq "vnc") {
  if ($port>0) { $remoteport=$port; }
  else { $remoteport=5900; }
} elsif ($service eq "afp") {
  if ($port>0) { $remoteport=$port; }
  else { $remoteport=548; }
} elsif ($service eq "http") {
  if ($port>0) { $remoteport=$port; }
  else { $remoteport=80; }
} elsif ($service eq "https") {
  if ($port>0) { $remoteport=$port; }
  else { $remoteport=443; }
} else {
  print STDERR "Unknown (to this script) service: $service\n";
  exit(-1);
}

$proto = getprotobyname('tcp');
if (!socket(S,PF_INET,SOCK_STREAM,$proto)) {
  print STDERR "Can't create socket: $!\n";
  exit(-1);
}

for ($i=$startport; $i<$startport+$maxtries; ++$i) {
  $here=sockaddr_in($i,inet_aton($localhost));
  if (bind(S, $here)) {
    if ($debug) { print STDERR "using local port $i\n"; }
    $localport=$i;
    #this shouldn't cause TIME_WAIT, because it isn't connected or listening
    close(S);
    last;
  }
}
if ($localport == 0) {
  print STDERR "Can't find a port to bind to!\n";
  exit(-1);
}

if ($host eq $ssh_host) { $host="localhost"; }

if ($debug) { print STDERR "ssh -L $localport:$host:$remoteport -f $options $user$ssh_host $command\n"; }
system("ssh -L $localport:$host:$remoteport -f $options $user$ssh_host $command");

if (length($command) == 0 || $timeout >= 60) { print "Using $service://$servuser$localhost:$localport/\n"; }

if ($debug) { print STDERR "open $service://$servuser$localhost:$localport/$path\n"; }
system("open $service://$servuser$localhost:$localport/$path");

#
# END OF MAIN
#

sub usage {
  print <<EEE;
Usage: $0 [options] URL
  URL  - currently this can only be vnc, afp, http, or https
  Options are:
  -s/--shared             sets up a connection that all local computers
                          can access (may be VERY insecure if your
			  local network is not private)
  -d/--daemon             keeps the tunnel running after the first connection
			  exits (a good idea if --shared is used).
			  Can't be used with --timeout.
  -t/--timeout            keeps the tunnel running for at least timeout
			  seconds.  Defaults to 30, to leave time for
			  connection setup.  Can be set to longer values
			  to simulate --daemon, but still automatically
			  exit eventually.  May also be specified in
			  minutes, hours or days, by adding an m, h, or d
			  at the end of the number, e.g. "-t 3h"
			  Can't be used with --daemon.
  -l/--login user[\@host]  specifies the username for login to the remote system
			  and if a host is also provided, you will ssh
			  into this host, even if that is not where the
			  tunnel is going.  This third party connection
			  gets around a Leopard afp bug.  If login is
			  not specified it uses your current login
			  name.
  -p/--port               specifies an alternate ssh port, if your ssh
			  server doesn't listen on the default port (22).
  -h/--help               show this message
EEE
}
