String.implement({
	flipText: function(backwards, upsideDown) {
		
		var convertedTxt = "";
		var convertedHTML = "";
		var doConvertedHTML = $('cConvertedHTML').hasClass('show') ? true : false;

		for (var c = (this.length-1); c >=0; c--) {
			var p = null;
			var didConvertedHTML = false;
			var g = (backwards) ? c : (-1*(c-this.length+1));
			var s = this.charAt(g);
			if (doConvertedHTML) {
				var cHTMLLen = convertedHTML.length;
				var cHTMLLast = (cHTMLLen >= 1) ? convertedHTML.charAt(cHTMLLen-1) : "";
				if (s == " " && (cHTMLLast == " " || convertedHTML.substring(cHTMLLen-6) == "&nbsp;")) {
					convertedHTML += "&nbsp;";
					didConvertedHTML = true;
				}
				else if (s == "\n") {
					//convertedHTML += "<br>";
					didConvertedHTML = true;
				}
				else if (s == "\r" && cHTMLLast == "\n" && (cHTMLLen < 2 || s.charAt(cHTMLLen-2) != "\r")) {
					//convertedHTML = convertedHTML.substring(0, )
					//convertedHTML +="SLASH R HERE";
					//didConvertedHTML = true;
					// \r \r\n \n \r\n\r\n
				}
			}
			if (upsideDown) {
				p = (flipTable[s] || flipTableFlipped[s] || flipTable[s.toLowerCase()] || s);
			}
			else {
				p = s;
			}
			
			convertedTxt += p;
			
			if (doConvertedHTML  && !didConvertedHTML) {
				convertedHTML += (flipTableHTML[p] || HTMLTable[p] || p);
				didConvertedHTML = true;
			}
		}

		return Array(convertedTxt, convertedHTML);
	}
});

window.addEvent('domready', function () {
	
	var original = $('originalText');
	original.focus();
	/*original.addEvent('keydown', function(e) {
		$('charCount').set('text', this.get("value").length);
	});*/

	$('submitConvert').setStyle('display', 'none');
	$('share').setStyle('display', 'block');
	
	var converted = $('convertedText');
	var convertedHTML = $('convertedHTML');
	var back = $('backwards');
	var upside = $('upsideDown');
	var pFacebook = $('postFacebook');
	var pTwitter = $('postTwitter');
	
	var lastOriginalV = "";
	
	var justChange = function() {
		lastOriginalV = original.value;
		$('charCount').set('text', lastOriginalV.length);
		var converts = lastOriginalV.flipText(back.checked, upside.checked);
		converted.value = converts[0];
		convertedHTML.value = converts[1];
	}
	
	var checkChange = function() {
		if (original.value != lastOriginalV) {
			justChange();
		}
	};

	original.addEvent('keyup', function(e) {
		checkChange();
	});
	
	checkChange.periodical(500);
	
	$('bookmark').addEvent('click', function(e) {
		var url = "http://www.upsidedowntext.com/";
		var urlTitle = "UpsideDownText.com - Flip your Text!";

		if (window.external && (!document.createTextNode || (typeof(window.external.AddFavorite)=='unknown'))) {
			window.external.AddFavorite(url, urlTitle);//IE
		}
		else if (window.sidebar) {
			window.sidebar.addPanel(urlTitle, url, "");//Firefox
		}
		else if (window.opera && window.print) {
			return true;//Opera
		}
		else {
			alert("Please use the bookmark/favorite button on your brower to bookmark UpsideDownText.com");
		}
		return false;
	});
	
	back.addEvent('click', function(e) {
		justChange();
	});
	
	upside.addEvent('click', function(e) {
		justChange();
	});
	
	converted.addEvent('focus', function(e) {
		this.select();
	});
	converted.addEvent('mouseup', function(e) {
		e.preventDefault();//prevents bug in webkit, effecting Safari and Chrome, which deselects selected textarea on mouseup
	});
	
	pFacebook.addEvent('click', function (e) {
		if (original.value != "") {
			var req = new Request({
				url: '/facebook',
				method: 'post',
				data: {o: original.value, b: (back.checked ? 1:0), u: (upside.checked ? 1:0)},
				onSuccess: function(r) {
					var i = r.indexOf(",");
					window.location="http://apps.facebook.com/upside_down_text/?udn="+r.substr(0,i)+"&ps="+r.substr(i+1);
				}
			}).send();
		}
	});
	
	pTwitter.addEvent('click', function (e) {
		if (original.value != "") {
			var req = new Request({
				url: '/twitter',
				method: 'post',
				data: {o: original.value, b: (back.checked ? 1:0), u: (upside.checked ? 1:0)},
				onSuccess: function(r) {
					window.location=r;
				}
			}).send();
		}
	});
	
	convertedHTML.addEvent('focus', function(e) {
		this.select();
	});
	convertedHTML.addEvent('mouseup', function(e) {
		e.preventDefault();
	});
	
	$('viewHTML').addEvent('click', function(e) {
		this.set('class', 'dontshow');
		$('cConvertedHTML').set('class', 'show');
		justChange();
		return false;
	});
	
	checkChange();
});