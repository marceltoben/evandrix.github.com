#!/usr/bin/env perl
#
# chunk_HTML - a regex-based HTML chunker
#
# Tom Christiansen <tchrist@perl.com
#   Sun Nov 21 19:16:02 MST 2010
########################################

use 5.012;

use strict;
use autodie;
use warnings qw< FATAL all >;
use open     qw< IN :bytes OUT :utf8 :std >;

MAIN: {
  $| = 1;
  lex_html(my $page = slurpy());
  exit();
}

########################################################################
sub lex_html {
    our $RX_SUBS;                                        ###############
    my  $html = shift();                                 # Am I...     #
    for (;;) {                                           # forgiven? :)#
        given ($html) {                                  ###############
            last                when (pos || 0) >= length;
            printf "\@%d=",          (pos || 0);
            print  "doctype "   when / \G (?&doctype)  $RX_SUBS  /xgc;
            print  "cdata "     when / \G (?&cdata)    $RX_SUBS  /xgc;
            print  "xml "       when / \G (?&xml)      $RX_SUBS  /xgc;
            print  "xhook "     when / \G (?&xhook)    $RX_SUBS  /xgc;
            print  "script "    when / \G (?&script)   $RX_SUBS  /xgc;
            print  "style "     when / \G (?&style)    $RX_SUBS  /xgc;
            print  "comment "   when / \G (?&comment)  $RX_SUBS  /xgc;
            print  "tag "       when / \G (?&tag)      $RX_SUBS  /xgc;
            print  "untag "     when / \G (?&untag)    $RX_SUBS  /xgc;
            print  "nasty "     when / \G (?&nasty)    $RX_SUBS  /xgc;
            print  "text "      when / \G (?&nontag)   $RX_SUBS  /xgc;
            default {
                die "UNCLASSIFIED: " .
                  substr($_, pos || 0, (length > 65) ? 65 : length);
            }
        }
    }
    say ".";
}
#####################
# Return correctly decoded contents of next complete
# file slurped in from the <ARGV> stream.
#
sub slurpy {
    our ($RX_SUBS, $Meta_Tag_Rx);
    my $_ = do { local $/; <ARGV> };   # read all input

    return unless length;

    use Encode   qw< decode >;

    my $bom = "";
    given ($_) {
        $bom = "UTF-32LE" when / ^ \xFf \xFe \0   \0   /x;  # LE
        $bom = "UTF-32BE" when / ^ \0   \0   \xFe \xFf /x;  #   BE
        $bom = "UTF-16LE" when / ^ \xFf \xFe           /x;  # le
        $bom = "UTF-16BE" when / ^ \xFe \xFf           /x;  #   be
        $bom = "UTF-8"    when / ^ \xEF \xBB \xBF      /x;  # st00pid
    }
    if ($bom) {
        say "[BOM $bom]";
        s/^...// if $bom eq "UTF-8";                        # st00pid

        # Must use UTF-(16|32) w/o -[BL]E to strip BOM.
        $bom =~ s/-[LB]E//;

        return decode($bom, $_);

        # if BOM found, don't fall through to look
        #  for embedded encoding spec
    }

    # Latin1 is web default if not otherwise specified.
    # No way to do this correctly if it was overridden
    # in the HTTP header, since we assume stream contains
    # HTML only, not also the HTTP header.
    my $encoding = "iso-8859-1";
    while (/ (?&xml) $RX_SUBS /pgx) {
        my $xml = ${^MATCH};
        next unless $xml =~ m{              $RX_SUBS
            (?= encoding )  (?&name)
                            (?&equals)
                            (?&quote) ?
            (?<ENCODING>    (?&value)       )
        }sx;
        if (lc $encoding ne lc $+{ENCODING}) {
            say "[XML ENCODING $encoding => $+{ENCODING}]";
            $encoding = $+{ENCODING};
        }
    }

    while (/$Meta_Tag_Rx/gi) {
        my $meta = $+{META};

        next unless $meta =~ m{             $RX_SUBS
            (?= http-equiv )    (?&name)
                                (?&equals)
            (?= (?&quote)? content-type )
                                (?&value)
        }six;

        next unless $meta =~ m{             $RX_SUBS
            (?= content )       (?&name)
                                (?&equals)
            (?<CONTENT>         (?&value)    )
        }six;

        next unless $+{CONTENT} =~ m{       $RX_SUBS
            (?= charset )       (?&name)
                                (?&equals)
            (?<CHARSET>         (?&value)    )
        }six;

        if (lc $encoding ne lc $+{CHARSET}) {
            say "[HTTP-EQUIV ENCODING $encoding => $+{CHARSET}]";
            $encoding = $+{CHARSET};
        }
    }

    return decode($encoding, $_);
}
########################################################################
# Make sure to this function is called
# as soon as source unit has been compiled.
UNITCHECK { load_rxsubs() }

# useful regex subroutines for HTML parsing
sub load_rxsubs {

    our $RX_SUBS = qr{
      (?(DEFINE)

        (?<WS> \s *  )

        (?<any_nv_pair>     (?&name) (?&equals) (?&value)         )
        (?<name>            \b (?=  \pL ) [\w:\-] +  \b           )
        (?<equals>          (?&WS)  = (?&WS)    )
        (?<value>           (?&quoted_value) | (?&unquoted_value) )
        (?<unwhite_chunk>   (?: (?! > ) \S ) +                    )

        (?<unquoted_value>  [\w:\-] *                             )

        (?<any_quote>  ["']      )

        (?<quoted_value>
            (?<quote>   (?&any_quote)  )
            (?: (?! \k<quote> ) . ) *
            \k<quote>
        )

        (?<start_tag>       < (?&WS)      )
        (?<html_end_tag>      >           )
        (?<xhtml_end_tag>   / >           )
        (?<end_tag>
            (?&WS)
            (?: (?&html_end_tag)
              | (?&xhtml_end_tag) )
         )

        (?<tag>
            (?&start_tag)
            (?&name)
            (?:
                (?&WS)
                (?&any_nv_pair)
            ) *
            (?&end_tag)
        )

        (?<untag> </ (?&name) > )

        # starts like a tag, but has screwed up quotes inside it
        (?<nasty>
            (?&start_tag)
            (?&name)
            .*?
            (?&end_tag)
        )

        (?<nontag>    [^<] +            )

        (?<string> (?&quoted_value)     )
        (?<word>   (?&name)             )

        (?<doctype>
            <!DOCTYPE
                # please don't feed me nonHTML
                ### (?&WS) HTML
            [^>]* >
        )

        (?<cdata>   <!\[CDATA\[     .*?     \]\]    > )
        (?<script>  (?= <script ) (?&tag)   .*?     </script> )
        (?<style>   (?= <style  ) (?&tag)   .*?     </style> )
        (?<comment> <!--            .*?           --> )

        (?<xml>
            < \? xml
            (?:
                (?&WS)
                (?&any_nv_pair)
            ) *
            (?&WS)
            \? >
        )

        (?<xhook> < \? .*? \? > )

      )

    }six;

    our $Meta_Tag_Rx = qr{                          $RX_SUBS
        (?<META>
            (?&start_tag) meta \b
            (?:
                (?&WS) (?&any_nv_pair)
            ) +
            (?&end_tag)
        )
    }six;

}

# nobody *ever* remembers to do this!
END { close STDOUT }
