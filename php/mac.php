<?
$mac = $_SERVER['argv'][1];
$postData = '{
    "version": "1.1.0", 
    "wifi_towers": [{
        "mac_address": "' . $mac . '", 
        "ssid": "0", 
        "signal_strength":-72
    }]
}';
$opts = array(
  'http'=>array(
    'method' => "POST",
    'header'  => 'Content-type: application/x-www-form-urlencoded',
    'content' => $postData
  )
);
$response = file_get_contents(
    'http://www.google.com/loc/json', 
    false, 
    stream_context_create($opts)
);
$loc = json_decode($response, true);
echo $loc['location']['latitude'];
echo ',';
echo $loc['location']['longitude'];
