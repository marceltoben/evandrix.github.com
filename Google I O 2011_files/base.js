/*
 Base for helper functions and other globals.
 @author mking@mking.me (Matt King)
*/
var degraded=false;if(typeof String.prototype.trim!=="function")String.prototype.trim=function(){return this.replace(/^\s+|\s+$/g,"")};
var io=function(){var i=function(b){return function(){var a=window.event;a.target=a.srcElement;a.preventDefault=function(){a.returnValue=false};a.stopPropagation=function(){a.cancelBubble=true};b.call(a.srcElement,a)}},g=function(b,a,e){if(a.addEventListener)g=function(c,d,f){d.addEventListener(c,f,false)};else if(a.attachEvent)g=function(c,d,f){d["on"+c]=i(f)};g(b,a,e)},h=function(b,a,e){if(a.removeEventListener)h=function(c,d,f){d.removeEventListener(c,f,false)};else if(a.attachEvent)h=function(c,
d){d["on"+c]=null};h(b,a,e)};return{el:function(b){return document.getElementById(b)},listen:g,unlisten:h,map:function(b,a){for(var e=[],c=0,d=b.length;c<d;c++)e[c]=a.call(b,b[c]);return e},injectScript:function(b){var a=document.createElement("script");a.setAttribute("type","text/javascript");a.setAttribute("src",b);document.getElementsByTagName("body")[0].appendChild(a)}}}();
