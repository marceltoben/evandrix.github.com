#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
require 5.6.0;
use strict;
use warnings;
use Thrift;

package EDAMUserStore::PublicUserInfo;
use base qw(Class::Accessor);
EDAMUserStore::PublicUserInfo->mk_accessors( qw( userId shardId privilege username ) );

sub new {
  my $classname = shift;
  my $self      = {};
  my $vals      = shift || {};
  $self->{userId} = undef;
  $self->{shardId} = undef;
  $self->{privilege} = undef;
  $self->{username} = undef;
  if (UNIVERSAL::isa($vals,'HASH')) {
    if (defined $vals->{userId}) {
      $self->{userId} = $vals->{userId};
    }
    if (defined $vals->{shardId}) {
      $self->{shardId} = $vals->{shardId};
    }
    if (defined $vals->{privilege}) {
      $self->{privilege} = $vals->{privilege};
    }
    if (defined $vals->{username}) {
      $self->{username} = $vals->{username};
    }
  }
  return bless ($self, $classname);
}

sub getName {
  return 'PublicUserInfo';
}

sub read {
  my ($self, $input) = @_;
  my $xfer  = 0;
  my $fname;
  my $ftype = 0;
  my $fid   = 0;
  $xfer += $input->readStructBegin(\$fname);
  while (1) 
  {
    $xfer += $input->readFieldBegin(\$fname, \$ftype, \$fid);
    if ($ftype == TType::STOP) {
      last;
    }
    SWITCH: for($fid)
    {
      /^1$/ && do{      if ($ftype == TType::I32) {
        $xfer += $input->readI32(\$self->{userId});
      } else {
        $xfer += $input->skip($ftype);
      }
      last; };
      /^2$/ && do{      if ($ftype == TType::STRING) {
        $xfer += $input->readString(\$self->{shardId});
      } else {
        $xfer += $input->skip($ftype);
      }
      last; };
      /^3$/ && do{      if ($ftype == TType::I32) {
        $xfer += $input->readI32(\$self->{privilege});
      } else {
        $xfer += $input->skip($ftype);
      }
      last; };
      /^4$/ && do{      if ($ftype == TType::STRING) {
        $xfer += $input->readString(\$self->{username});
      } else {
        $xfer += $input->skip($ftype);
      }
      last; };
        $xfer += $input->skip($ftype);
    }
    $xfer += $input->readFieldEnd();
  }
  $xfer += $input->readStructEnd();
  return $xfer;
}

sub write {
  my ($self, $output) = @_;
  my $xfer   = 0;
  $xfer += $output->writeStructBegin('PublicUserInfo');
  if (defined $self->{userId}) {
    $xfer += $output->writeFieldBegin('userId', TType::I32, 1);
    $xfer += $output->writeI32($self->{userId});
    $xfer += $output->writeFieldEnd();
  }
  if (defined $self->{shardId}) {
    $xfer += $output->writeFieldBegin('shardId', TType::STRING, 2);
    $xfer += $output->writeString($self->{shardId});
    $xfer += $output->writeFieldEnd();
  }
  if (defined $self->{privilege}) {
    $xfer += $output->writeFieldBegin('privilege', TType::I32, 3);
    $xfer += $output->writeI32($self->{privilege});
    $xfer += $output->writeFieldEnd();
  }
  if (defined $self->{username}) {
    $xfer += $output->writeFieldBegin('username', TType::STRING, 4);
    $xfer += $output->writeString($self->{username});
    $xfer += $output->writeFieldEnd();
  }
  $xfer += $output->writeFieldStop();
  $xfer += $output->writeStructEnd();
  return $xfer;
}

package EDAMUserStore::AuthenticationResult;
use base qw(Class::Accessor);
EDAMUserStore::AuthenticationResult->mk_accessors( qw( currentTime authenticationToken expiration user publicUserInfo ) );

sub new {
  my $classname = shift;
  my $self      = {};
  my $vals      = shift || {};
  $self->{currentTime} = undef;
  $self->{authenticationToken} = undef;
  $self->{expiration} = undef;
  $self->{user} = undef;
  $self->{publicUserInfo} = undef;
  if (UNIVERSAL::isa($vals,'HASH')) {
    if (defined $vals->{currentTime}) {
      $self->{currentTime} = $vals->{currentTime};
    }
    if (defined $vals->{authenticationToken}) {
      $self->{authenticationToken} = $vals->{authenticationToken};
    }
    if (defined $vals->{expiration}) {
      $self->{expiration} = $vals->{expiration};
    }
    if (defined $vals->{user}) {
      $self->{user} = $vals->{user};
    }
    if (defined $vals->{publicUserInfo}) {
      $self->{publicUserInfo} = $vals->{publicUserInfo};
    }
  }
  return bless ($self, $classname);
}

sub getName {
  return 'AuthenticationResult';
}

sub read {
  my ($self, $input) = @_;
  my $xfer  = 0;
  my $fname;
  my $ftype = 0;
  my $fid   = 0;
  $xfer += $input->readStructBegin(\$fname);
  while (1) 
  {
    $xfer += $input->readFieldBegin(\$fname, \$ftype, \$fid);
    if ($ftype == TType::STOP) {
      last;
    }
    SWITCH: for($fid)
    {
      /^1$/ && do{      if ($ftype == TType::I64) {
        $xfer += $input->readI64(\$self->{currentTime});
      } else {
        $xfer += $input->skip($ftype);
      }
      last; };
      /^2$/ && do{      if ($ftype == TType::STRING) {
        $xfer += $input->readString(\$self->{authenticationToken});
      } else {
        $xfer += $input->skip($ftype);
      }
      last; };
      /^3$/ && do{      if ($ftype == TType::I64) {
        $xfer += $input->readI64(\$self->{expiration});
      } else {
        $xfer += $input->skip($ftype);
      }
      last; };
      /^4$/ && do{      if ($ftype == TType::STRUCT) {
        $self->{user} = new EDAMTypes::User();
        $xfer += $self->{user}->read($input);
      } else {
        $xfer += $input->skip($ftype);
      }
      last; };
      /^5$/ && do{      if ($ftype == TType::STRUCT) {
        $self->{publicUserInfo} = new EDAMUserStore::PublicUserInfo();
        $xfer += $self->{publicUserInfo}->read($input);
      } else {
        $xfer += $input->skip($ftype);
      }
      last; };
        $xfer += $input->skip($ftype);
    }
    $xfer += $input->readFieldEnd();
  }
  $xfer += $input->readStructEnd();
  return $xfer;
}

sub write {
  my ($self, $output) = @_;
  my $xfer   = 0;
  $xfer += $output->writeStructBegin('AuthenticationResult');
  if (defined $self->{currentTime}) {
    $xfer += $output->writeFieldBegin('currentTime', TType::I64, 1);
    $xfer += $output->writeI64($self->{currentTime});
    $xfer += $output->writeFieldEnd();
  }
  if (defined $self->{authenticationToken}) {
    $xfer += $output->writeFieldBegin('authenticationToken', TType::STRING, 2);
    $xfer += $output->writeString($self->{authenticationToken});
    $xfer += $output->writeFieldEnd();
  }
  if (defined $self->{expiration}) {
    $xfer += $output->writeFieldBegin('expiration', TType::I64, 3);
    $xfer += $output->writeI64($self->{expiration});
    $xfer += $output->writeFieldEnd();
  }
  if (defined $self->{user}) {
    $xfer += $output->writeFieldBegin('user', TType::STRUCT, 4);
    $xfer += $self->{user}->write($output);
    $xfer += $output->writeFieldEnd();
  }
  if (defined $self->{publicUserInfo}) {
    $xfer += $output->writeFieldBegin('publicUserInfo', TType::STRUCT, 5);
    $xfer += $self->{publicUserInfo}->write($output);
    $xfer += $output->writeFieldEnd();
  }
  $xfer += $output->writeFieldStop();
  $xfer += $output->writeStructEnd();
  return $xfer;
}

1;