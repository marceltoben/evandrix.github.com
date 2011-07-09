<?php
# Import environment settings from DotCloud
$envjson = json_decode(file_get_contents("/home/dotcloud/environment.json"), true);

# Create MySQL Connection
$mysqli = new mysqli($envjson['DOTCLOUD_DB_MYSQL_HOST'],
                     'helloappuser',             # username
                     'helloworldpassword',       # password 
                     'helloworldapp2',           # db name
                     $envjson['DOTCLOUD_DB_MYSQL_PORT']);

echo "<pre>";
echo "helloworldapp2\n";
print_r($envjson);
print_r($mysqli->query('SELECT now();'));
echo "</pre>";
?>
