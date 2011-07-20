#!/usr/bin/env perl
#
# html_input_rx - pull out all <input> tags from (X)HTML src
#                  via simple regex processing
#
# Tom Christiansen <tchrist@perl.com>
# Sat Nov 20 10:17:31 MST 2010
#
################################################################

use 5.012;

use strict;
use autodie;
use warnings FATAL => "all";    
use subs qw{
    see_no_evil
    parse_input_tags
    input descape dequote
    load_patterns
};    
use open        ":std",
          IN => ":bytes",
         OUT => ":utf8";    
use Encode qw< encode decode >;

    ###########################################################

                        parse_input_tags 
                           see_no_evil 
                              input  

    ###########################################################

until eof(); sub parse_input_tags {
    my $_ = shift();
    our($Input_Tag_Rx, $Pull_Attr_Rx);
    my $count = 0;
    while (/$Input_Tag_Rx/pig) {
        my $input_tag = $+{TAG};
        my $place     = pos() - length ${^MATCH};
        printf "input tag #%d at character %d:\n", ++$count, $place;
        my %attr = ();
        while ($input_tag =~ /$Pull_Attr_Rx/g) {
            my ($name, $value) = @+{ qw< NAME VALUE > };
            $value = dequote($value);
            if (exists $attr{$name}) {
                printf "Discarding dup attr value '%s' on %s attr\n",
                    $attr{$name} // "<undef>", $name;
            } 
            $attr{$name} = $value;
        } 
        for my $name (sort keys %attr) {
            printf "  %10s => ", $name;
            my $value = descape $attr{$name};
            my  @Q; given ($value) {
                @Q = qw[  " "  ]  when !/'/ && !/"/;
                @Q = qw[  " "  ]  when  /'/ && !/"/;
                @Q = qw[  ' '  ]  when !/'/ &&  /"/;
                @Q = qw[ q( )  ]  when  /'/ &&  /"/;
                default { die "NOTREACHED" }
            } 
            say $Q[0], $value, $Q[1];
        } 
        print "\n";
    } 

}

sub dequote {
    my $_ = $_[0];
    s{
        (?<quote>   ["']      )
        (?<BODY>    
          (?s: (?! \k<quote> ) . ) * 
        )
        \k<quote> 
    }{$+{BODY}}six;
    return $_;
} 

sub descape {
    my $string = $_[0];
    for my $_ ($string) {
        s{
            (?<! % )
            % ( \p{Hex_Digit} {2} )
        }{
            chr hex $1;
        }gsex;
        s{
            & \043 
            ( [0-9]+ )
            (?: ; 
              | (?= [^0-9] )
            )
        }{
            chr     $1;
        }gsex;
        s{
            & \043 x
            ( \p{ASCII_HexDigit} + )
            (?: ; 
              | (?= \P{ASCII_HexDigit} )
            )
        }{
            chr hex $1;
        }gsex;

    }
    return $string;
} 

sub input { 
    our ($RX_SUBS, $Meta_Tag_Rx);
    my $_ = do { local $/; <> };  
    my $encoding = "iso-8859-1";  # web default; wish we had the HTTP headers :(
    while (/$Meta_Tag_Rx/gi) {
        my $meta = $+{META};
        next unless $meta =~ m{             $RX_SUBS
            (?= http-equiv ) 
            (?&name) 
            (?&equals) 
            (?= (?&quote)? content-type )
            (?&value)    
        }six;
        next unless $meta =~ m{             $RX_SUBS
            (?= content ) (?&name) 
                          (?&equals) 
            (?<CONTENT>   (?&value)    )
        }six;
        next unless $+{CONTENT} =~ m{       $RX_SUBS
            (?= charset ) (?&name) 
                          (?&equals) 
            (?<CHARSET>   (?&value)    )
        }six;
        if (lc $encoding ne lc $+{CHARSET}) {
            say "[RESETTING ENCODING $encoding => $+{CHARSET}]";
            $encoding = $+{CHARSET};
        }
    } 
    return decode($encoding, $_);
}

sub see_no_evil {
    my $_ = shift();

    s{ <!    DOCTYPE  .*?         > }{}sx; 
    s{ <! \[ CDATA \[ .*?    \]\] > }{}gsx; 

    s{ <script> .*?  </script> }{}gsix; 
    s{ <!--     .*?        --> }{}gsx;

    return $_;
}

sub load_patterns { 

    our $RX_SUBS = qr{ (?(DEFINE)
        (?<nv_pair>         (?&name) (?&equals) (?&value)         ) 
        (?<name>            \b (?=  \pL ) [\w\-] + (?<= \pL ) \b  )
        (?<equals>          (?&might_white)  = (?&might_white)    )
        (?<value>           (?&quoted_value) | (?&unquoted_value) )
        (?<unwhite_chunk>   (?: (?! > ) \S ) +                    )
        (?<unquoted_value>  [\w\-] *                              )
        (?<might_white>     \s *                                  )
        (?<quoted_value>
            (?<quote>   ["']      )
            (?: (?! \k<quote> ) . ) *
            \k<quote> 
        )
        (?<start_tag>  < (?&might_white) )
        (?<end_tag>          
            (?&might_white)
            (?: (?&html_end_tag) 
              | (?&xhtml_end_tag) 
             )
        )
        (?<html_end_tag>       >  )
        (?<xhtml_end_tag>    / >  )
    ) }six; 

    our $Meta_Tag_Rx = qr{                          $RX_SUBS 
        (?<META> 
            (?&start_tag) meta \b
            (?:
                (?&might_white) (?&nv_pair) 
            ) +
            (?&end_tag)
        )
    }six;

    our $Pull_Attr_Rx = qr{                         $RX_SUBS
        (?<NAME>  (?&name)      )
                  (?&equals) 
        (?<VALUE> (?&value)     )
    }six;

    our $Input_Tag_Rx = qr{                         $RX_SUBS 

        (?<TAG> (?&input_tag) )

        (?(DEFINE)

            (?<input_tag>
                (?&start_tag)
                input
                (?&might_white) 
                (?&attributes) 
                (?&might_white) 
                (?&end_tag)
            )

            (?<attributes>
                (?: 
                    (?&might_white) 
                    (?&one_attribute) 
                ) *
            )

            (?<one_attribute>
                \b
                (?&legal_attribute)
                (?&might_white) = (?&might_white) 
                (?:
                    (?&quoted_value)
                  | (?&unquoted_value)
                )
            )

            (?<legal_attribute> 
                (?: (?&optional_attribute)
                  | (?&standard_attribute)
                  | (?&event_attribute)
            # for LEGAL parse only, comment out next line 
                  | (?&illegal_attribute)
                )
            )

            (?<illegal_attribute>  (?&name) )

            (?<required_attribute> (?#no required attributes) )

            (?<optional_attribute>
                (?&permitted_attribute)
              | (?&deprecated_attribute)
            )

            # NB: The white space in string literals 
            #     below DOES NOT COUNT!   It's just 
            #     there for legibility.

            (?<permitted_attribute>
                  accept
                | alt
                | bottom
                | check box
                | checked
                | disabled
                | file
                | hidden
                | image
                | max length
                | middle
                | name
                | password
                | radio
                | read only
                | reset
                | right
                | size
                | src
                | submit
                | text
                | top
                | type
                | value
            )

            (?<deprecated_attribute>
                  align
            )

            (?<standard_attribute>
                  access key
                | class
                | dir
                | ltr
                | id
                | lang
                | style
                | tab index
                | title
                | xml:lang
            )

            (?<event_attribute>
                  on blur
                | on change
                | on click
                | on dbl   click
                | on focus
                | on mouse down
                | on mouse move
                | on mouse out
                | on mouse over
                | on mouse up
                | on key   down
                | on key   press
                | on key   up
                | on select
            )
        )
    }six;

}

UNITCHECK {
    load_patterns();
} 

END {
    close(STDOUT) 
        || die "can't close stdout: $!";
}
