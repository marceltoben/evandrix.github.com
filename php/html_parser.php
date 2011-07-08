<?
$d = new DOMDocument();
$d->loadHTML(
    '
    <p>fsdjl</p>
    <form><div>fdsjl</div></form>
    <input type="hidden" name="blah" value="hide yo kids">
    <input type="text" name="blah" value="hide yo kids">
    <input type="hidden" name="blah" value="hide yo wife">
');
$x = new DOMXpath($d);
$inputs = $x->evaluate('//input[@type="hidden"]');

foreach ( $inputs as $input ) {
    echo $input->getAttribute('value'), '<br>';
}
?>
