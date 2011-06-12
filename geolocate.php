<?php
$mac = $_SERVER['argv'][1];
/*
	00:11:24:ec:72:df
	00:26:91:1d:73:5b
*/

$postData = '{
    "version": "1.1.0",
	"host": "maps.google.com",
	"request_address": true,
    "wifi_towers": [{
		"mac_address": "'.$mac.'",
		"signal_strength": 65,
		"ssid": "BTHomeHub-F009"
    }]
}';
var_dump($postData);

$opts = array(
  'http'=>array(
    'method'  => "POST",
    'header'  => 'Content-type: application/json; charset=utf-8',
    'content' => $postData
  )
);
$response = file_get_contents('http://www.google.com/loc/json', false, stream_context_create($opts));
$loc = json_decode($response, true);
var_dump($loc);

?>