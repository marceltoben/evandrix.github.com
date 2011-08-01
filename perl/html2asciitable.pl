#!/usr/bin/perl 
use strict;
use HTML::TreeBuilder;
use Text::ASCIITable;
use List::Util qw(max);

my $html = q~
<table border=1>
<tr><th>header1</th><th>header2</th></tr>
<tr>
<Td> tr 1, td 1 </td>
<td> tr 1, td 2</td>
</tr>
<tr>
<td> tr 3, td 1 <table border=0><tr><td>00</td></tr><tr><td>0</td></tr><tr><td> Yes, a Lone Table Cell</td></tr></table>
</td>
<td> tr2 td2 </td>
</tr>
</table>~;

my $t = HTML::TreeBuilder->new();
$t->parse($html);
$t->eof;

print DumpTable( $_ ), $/, $/
    for $t->find_by_tag_name('table') ;

sub DumpTable {
    my $ht = shift;

    die "$ht is not a table" unless $ht->tag eq 'table';

    my $tt = Text::ASCIITable::->new;
    my @co;
    my @da;
    my $da = [];

    for my $ro ( @{ $ht->content() } ) {

        if( $ro->tag eq 'tr' ) {

            push @da, $da if @$da;
            $da = [];

            for my $ce ( @{ $ro->content() } ) {

                if( $ce->tag eq 'td' ) {

                    if( $ce->look_down( '_tag', 'table' ) ) {
                        my $string = '';

                        for my $i ( @{ $ce->content() } ) {
                            if( not ref $i ) {
                                $string .= $i;
                            }
                            elsif( $i->tag eq 'table' ) {
                                $string .= "\n";
                                $string .= DumpTable($i);
                                $string .= "\n";
                            }
                            else {
                                $string .= $i->as_text;
                            }
                        }

                        push @$da, $string;
                    }
                    else {
                        push @$da, $ce->as_text;
                    }
                }
                elsif( $ce->tag eq 'th' ) {
                    push @co, $ce->as_text;
                }
            }
        }
    }

    push @da, $da if @$da;

    if(@co) {
        $tt->setCols(@co);
    }
    else {
        use List::Util qw(max);
        my $max = 1 + max( 0, map { $#$_ } @da );
        $tt->setCols( (' ') x $max );
        $tt->setOptions( hide_HeadRow  => 1 );
        $tt->setOptions( hide_HeadLine => 1 );
    }

    $tt->addRow($_) for @da;

    $tt->setOptions( 'drawRowLine', 1) if $ht->attr('border');
#    return $tt->draw();
    return $tt->draw(
        [ '.=', '=.', '-', '-' ],    # .=-----------=.
        [ '|',  '|',  '|' ],         # | info | info |
        [ '|-', '-|', '=', '=' ],    # |-===========-|
        [ '|',  '|',  '|' ],         # | info | info |
        [ "'=", "='", '-', '-' ],    # '=-----------='
        [ '|=', '=|', '-', '*' ]     # rowseperator
    );
}
