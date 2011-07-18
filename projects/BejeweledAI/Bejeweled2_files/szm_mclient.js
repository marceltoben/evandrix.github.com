// szm_mclient.js 20041209  
 
var szm_mccookie = "szm_mc";  
var szm_prefix='http://mclient.ivwbox.de/cgi-bin/ivw/CP/';  
var szm_prefixssl='https://mclientssl2.ivwbox.de/cgi-bin/ivw/CP/';  
 
// on every page  
function szm_client(szm_site, szm_hcode, szm_isssl) {  
if (szm_getcookie() != szm_hcode)  
{ szm_getmclient(szm_site,szm_isssl,szm_hcode); szm_setcookie(szm_hcode);  
} 
 }  
 
// before login, logout  
function szm_clear() {  
szm_setcookie("spring.de");  
}  
 
// privates  
function szm_getcookie() {  
var split = new Array();  
split = document.cookie.split(";");  
for(var i=0; i<split.length;i++) {  
if(split[i].match(".*"+szm_mccookie+".*")) {  
return (split[i].split("="))[1];  
} 
} return "";  
}  
 
function szm_getmclient(szm_site,szm_isssl,szm_hcode) {  
var img = new Image();  
if(szm_isssl) img.src = szm_prefixssl+szm_site+'/'+szm_hcode;  
else img.src = szm_prefix+szm_site+'/'+szm_hcode;  
}  
 
function szm_setcookie(code) {  
document.cookie = szm_mccookie+"="+code;  
}  
 
// EOF