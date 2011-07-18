/* 1.1.0 */
var SMV = new function() {
	this.pType       = 'XP';
	this.site        = 'undef';
	this.section     = 'undef/undef';
	this.pageIdent   = '';
	this.urlPrefix   = '';
	this.sectionList = {};
	this.idList = {};
	this.tax_id = '1';
	this.crg = '';
	this.cr = '';
	this.visitcounter = 0;
	this.res = 0;
	this.vid = 0;
	this.sktg = 'Diverse/Diverse/Diverse';
	this.sectionListOewa = {};
	this.keyword = '';
	this.keywordMapping = {};
	this.cona = '';
	this.cost = '';
	this.cc = '';
	this.rc = '';
	this.initCounter = 0;
	this.iptm = '';
	this.siteName = 'undef';
    this._urlpath = function() {
        var hosturl = window.location.host;
        return hosturl;
    }
    this.pixeltypeList = {
        'CP':'CP'
    ,   'SP':'SP'
    ,   'AP':'AP'
    ,   'XP':'XP'
    };
    this._setSite = function(site) {
        if (typeof(this.box[site]) != 'undefined') {
            this.site = site;
        }
    }
	this._setContentClassification = function(contentClassification) {
		this.tax_id = contentClassification;
	}
	this._setSKTG = function(sktg) {
		this.sktg = sktg;
	}
	this._mapPageIdentifier2ContentClassification = function(pageIdentifier) {
		if (typeof(this.sectionList[ pageIdentifier ]) != 'undefined') {
			return this.sectionList[ pageIdentifier ];
		} else {
			return this._getIdCode();
		}
		return '';
	}
	this._mapContentClassification2ContentClassification = function(contentClassification) {
		if (typeof(this.idList[ contentClassification ]) != 'undefined') {
			return this.idList[ contentClassification ];
		}
		return '';
	}
    this._setCrg = function(crg) {
        this.crg = crg;
    }
    this._setCr = function(cr) {
        this.cr = cr;
    }
    this._setCoNa = function(cona) {
        this.cona = cona;
    }
    this._setCoSt = function(cost) {
        this.cost = cost;
    }
    this._validateSection = function(sc) {
        sc = '/' + String(sc).toLowerCase() + '/';
        var pos = sc.indexOf('//');
        while (pos > -1) {
            sc = sc.substr(0, pos) + sc.substr(pos+1);
            pos = sc.indexOf('//');
        }
        return sc.substr(1, sc.length-2);
    }
    this._setType = function(type) {
        if (typeof(this.pixeltypeList[type]) != 'undefined') {
            this.pType = type;
        } else {
            this.pType = "XP";
        }
    }
    this.checkId = function(cclass) {
        if (isNaN(cclass)){
            this._setSection(cclass);
        } else {
            this.tax_id=cclass;
        }
    }
    this._setSection = function(sc) {
    	  this.pageIdent = sc;
        this.section = this._validateSection(sc);
    }
    this.setSectionIdMap = function(sectionList) {
        this.sectionList = sectionList;
    }
    this.setId2IdMap = function(idList) {
        this.idList = idList;
    }
    this._getIdCode = function() {
        var thisSection = '/' + this.section + '/';
        var thisLength = thisSection.length;
        for (var section in this.sectionList) {
            if (thisLength >= section.length && thisSection.substr(0, section.length) == section) {
                this.tax_id = this.sectionList[section];
                break;
            }
        }
        return this.tax_id;
    }
    this._getNgUserId = function() {
        var uim_ngid = '';
        if (document.cookie && document.cookie.indexOf('NGUserID=')>=0) {
            var uim_c = document.cookie + ';';
            var uim_cs_pos = uim_c.indexOf('NGUserID=') + 'NGUserID='.length;
            var uim_ce_pos = uim_c.indexOf(';', uim_cs_pos);
            uim_ngid = uim_c.substring(uim_cs_pos, uim_ce_pos);
        }
        return uim_ngid;
    }
    this._createSemParams = function(params) {
        var qs = '';
        for (var i in params) {
            if (params[i]) {
                qs += '%26'+i+'%3D'+params[i];
            }
        }
        return (qs ? qs.substr(3) : '');
    }
    this._loadPixel = function(url) {
        url = this.urlPrefix+url;
        if (Image && url) {
            (new Image()).src = url;
        }
    }
    this._getCertificate = function(val) {
        var z = val.toString().split('');
        var cert = 0;
        for(var i = 0; i < z.length; i++){
            cert += Number(z[i]);
        }
        return cert;
    }
    this._setSKTG = function(sktg) {
        this.sktg = sktg;
    }
    this._mapPageIdentifier2SKTG = function(pageIdentifier) {
        if (typeof(this.sectionListOewa[ pageIdentifier ]) != 'undefined') {
             return this.sectionListOewa[ pageIdentifier ];
        } else {
             return this._getIdCodeOewa();
        }
        return '';
    }
    this.setSectionIdMapOewa = function(sectionList) {
        this.sectionListOewa = sectionList;
    }
    this._getIdCodeOewa = function() {
        var thisSection = '/' + this.section + '/';
        var thisLength = thisSection.length;
        for (var section in this.sectionListOewa) {
            if (thisLength >= section.length && thisSection.substr(0, section.length) == section) {
                 this.sktg = this.sectionListOewa[section];
                 break;
            }
        }
        return this.sktg;
    }
    this.box = {
		'88288':'88288'
    };
    this._replaceVariables = function(tracking_url) {
        tracking_url = tracking_url.replace(/__SC__/g, this.section);
        tracking_url = tracking_url.replace(/__SITE__/g, this.site);
        tracking_url = tracking_url.replace(/__TYPE__/g, this.pType);
        tracking_url = tracking_url.replace(/__CODE__/g, this.tax_id);
        tracking_url = tracking_url.replace(/__SKTG__/g, this.sktg);
        tracking_url = tracking_url.replace(/__CRG__/g, this.crg);
        tracking_url = tracking_url.replace(/__CR__/g, this.cr);
        tracking_url = tracking_url.replace(/__CONA__/g, this.cona);
        tracking_url = tracking_url.replace(/__CC__/g, this.cc);
        tracking_url = tracking_url.replace(/__REGION__/g, this.rc);
        tracking_url = tracking_url.replace(/__COST__/g, this.cost);
        tracking_url = tracking_url.replace(/__IPTM__/g, escape(this.iptm));
        tracking_url = tracking_url.replace(/__ORPGID__/g, this.pageIdent);
        tracking_url = tracking_url.replace(/__SITENAME__/g, this.siteName);
		if( typeof(SMV_Statistic) != 'undefined'){
			tracking_url = tracking_url.replace(/__JSV__/g, SMV_Statistic._getJsVersion());
			tracking_url = tracking_url.replace(/__SCR__/g, SMV_Statistic._getScreenResolution());
			tracking_url = tracking_url.replace(/__FLV__/g, SMV_Statistic._getFlashVersion());
		}
        tracking_url = tracking_url.replace(/__VID__/g, this.vid);
        tracking_url = tracking_url.replace(/__VCT__/g, this.visitcounter);
        tracking_url = tracking_url.replace(/__RES__/g, this.res);
        tracking_url = tracking_url.replace(/__SMV__/g, this._getCertificate(this.vid));
        tracking_url = tracking_url.replace(/__R__/g, escape(document.referrer));
        tracking_url = tracking_url.replace(/__D__/g, SMV_Utils._getRandom());
        tracking_url = tracking_url.replace(/__[A-Z]+__/g, "");
        return tracking_url;        
    }
	this.setVisitCookie = function() {
		this.vid = SMV_Utils._getCookie("SmvVisit",2);
		this.visitcounter = SMV_Utils._getCookie("SmvVisit",1);
		this.res = SMV_Utils._getCookie("SmvVisit",0)
		if(this.visitcounter == "none")
			this.visitcounter = 1 ;
		else
			this.visitcounter = Number(this.visitcounter) + 1;
		SMV_Utils._setCookie("SmvVisit", this.section+","+this.visitcounter+","+this.vid);
	}
	this.checkInitCounter = function() {
		return ++this.initCounter == 1;
	}
	this.smvInit = function(options) {
		var tmp;
		if(options['site']) {
			this._setSite(options['site']);
		} else {
			this._setSite(SMV_PUT.nr);
		}
		if(options['cr']) {
    		this._setCr(options['cr']);
    	}
    	if(options['crg']) {
    		this._setCrg(options['crg']);
    	}
    	if(options['cona']) {
    		this._setCoNa(options['cona']);
    	}
    	if(options['cost']) {
			this._setCoSt(options['cost']);
    	}
    	if(options['cc']) {
    		this.cc = options['cc'];
    	}
		if(options['region']) {
    		this.rc = options['region'];
    	}
    	if(options['sitename']) {
    		this.siteName = escape(options['sitename']);
    	}
		this.setSectionIdMap(SMV_PUT.setSectionIdMap);
		this.setSectionIdMapOewa(SMV_PUT.setSectionIdMapOewa);
		if(options['pageidentifier']) {
			this._setSection(options['pageidentifier']);
			tmp = this._mapPageIdentifier2ContentClassification(this.section);
			if(tmp != ''){
				this._setContentClassification(tmp);
			} else {
				this._setContentClassification('1');
			}
			tmp = this._mapPageIdentifier2SKTG(this.section);
			if(tmp != ''){
				this._setSKTG(tmp);
			} else {
				this._setSKTG('Diverse/Diverse/Diverse');
			}
		} else {
			this._setContentClassification('1');
			this._setSKTG('Diverse/Diverse/Diverse');
		}
		if(options['contentclass']) {
			this._setContentClassification(options['contentclass']);
		} 
		this.setVisitCookie();
		this._setType('CP');
		SMV_Utils._loadJavaScript('//ritva.mfserv.net/getppattrs.js');
	}
	this.rlsTrs = function() {
		this._loadPixel(this._replaceVariables('//tgp.uimserv.net/cgi-bin/adlink/__TYPE__/001;sc%3Dtif/__ORPGID__%26site%3D__SITENAME__?r=__R__&d=__D__'));
	}
	this.clbGC = function( param ){
		if(typeof(param)!='undefined') {
			adlrcmd = param;
			ADLRCMD = param;
		}
	}
	this.clbITar = function( param ){
		if(typeof(param)=='undefined') {
			param = '';
		}
		this.iptm = param;
		SMV_Utils._loadJavaScript('//q.uimserv.net/adlink.js?'+param+'&site='+this.siteName);
	}
	this.clbPrPry = function( param ){
		if(typeof(param)=='undefined') {
			param = '';
		}
		adlrcmd = param;
		ADLRCMD = param;
		this._loadPixel('//s.uimserv.net/88288/SetRcmd.gif?d='+SMV_Utils._getRandom()+'&p='+escape(param)+'&');
		this.rlsTrs();
	}
}
var SMV_Utils = new function() {
	this._isUrlEnc = function(arg) {
		return (arg && arg.match(/^[^@;\?\/:#&=$, <>~]*$/) && !arg.match(/%24/)); 
	}
	this._isValidSc = function(arg) {
		return (arg && arg.match(/^\/*[a-z0-9_\-]+(\/+[a-z0-9_\-]+)*\/*$/)); 
	}
	this._isValidB64 = function(arg) {
		return (arg && arg.match(/^[A-Za-z0-9+\/]*={0,2}$/));
	}
    this._trim = function(str){
        str = str.replace(/\s+$/,"");
        return (str.replace(/^\s+/,""));
    }
    this._getRandom = function() {
        return Math.round(Math.random()*100000);
    }
    this._getTimestamp = function() {
        var d = new Date();
        return d.getTime();
    }
    this._setCookie = function(name, value){
        var expired = new Date();
        expired = new Date(expired.getTime() + 30 * 1000 * 60);
        document.cookie = name + "=" + value + "; expires="+expired.toGMTString()+";";
    }
    this._getCookie = function(cookiename,index){
        if (document.cookie) {
            var cookies = document.cookie.split(";");
            for(var i=0;i<cookies.length;i++){
                var cookietext = cookies[i].split("=");
                if(this._trim(cookietext[0]) == cookiename){
                    return cookietext[1].split(",")[index];
                }
            }
        }
        return("none");
    }
    this._loadJavaScript = function( loc ) {
		var scriptElement = document.createElement("script");
		var srcAtt = document.createAttribute("src");
		srcAtt.nodeValue = loc;
		var typeAtt = document.createAttribute("type");
		typeAtt.nodeValue = "text/javascript"
		scriptElement.setAttributeNode(typeAtt);
		scriptElement.setAttributeNode(srcAtt);
		var siteHead = document.getElementsByTagName("head");
		if (siteHead && siteHead[0]) {
			siteHead[0].appendChild(scriptElement);
		}	
    }
}
var SMV_Statistic = new function() {
    this._getJsVersion = function() {
        var vers = "1.0";
        if (typeof frames.focus == "function")      { vers = "1.1"; }
        if (typeof window.forward == "function")    { vers = "1.2"; }
        if (typeof isFinite == "function")          { vers = "1.3"; }
        if (typeof arguments == "object")           { vers = "1.4"; }
        if (typeof Number.toFixed == "function")    { vers = "1.5"; }
        return vers;
    }
    this._getScreenResolution = function() {
        if (window.screen) {
            return window.screen.width + "x" + window.screen.height;
        }
        return '0x0';
    }
    this._getFlashVersion = function() {
        if (navigator.platform == "Win32" && navigator.userAgent.indexOf("MSIE") > -1) {
            window.flashVersion = 0;
            window.execScript('\
                on error resume next\n\
                temp = false: temp = (IsObject(CreateObject("ShockwaveFlash.ShockwaveFlash.2"))): If temp=true Then flashVersion = 2\n\
                temp = false: temp = (IsObject(CreateObject("ShockwaveFlash.ShockwaveFlash.3"))): If temp=true Then flashVersion = 3\n\
                temp = false: temp = (IsObject(CreateObject("ShockwaveFlash.ShockwaveFlash.4"))): If temp=true Then flashVersion = 4\n\
                temp = false: temp = (IsObject(CreateObject("ShockwaveFlash.ShockwaveFlash.5"))): If temp=true Then flashVersion = 5\n\
                temp = false: temp = (IsObject(CreateObject("ShockwaveFlash.ShockwaveFlash.6"))): If temp=true Then flashVersion = 6\n\
                temp = false: temp = (IsObject(CreateObject("ShockwaveFlash.ShockwaveFlash.7"))): If temp=true Then flashVersion = 7\n\
                temp = false: temp = (IsObject(CreateObject("ShockwaveFlash.ShockwaveFlash.8"))): If temp=true Then flashVersion = 8\n\
                temp = false: temp = (IsObject(CreateObject("ShockwaveFlash.ShockwaveFlash.9"))): If temp=true Then flashVersion = 9\n\
                temp = false: temp = (IsObject(CreateObject("ShockwaveFlash.ShockwaveFlash.10"))): If temp=true Then flashVersion = 10\n\
            ', 'VBScript');
        } 
        else if (navigator.plugins) {
            if (navigator.plugins['Shockwave Flash 2.0'] || navigator.plugins['Shockwave Flash']) {
                var isVersion2 = navigator.plugins['Shockwave Flash 2.0'] ? ' 2.0' : '';
                var flashDescription = navigator.plugins['Shockwave Flash' + isVersion2].description;
                window.flashVersion = parseInt(flashDescription.substring(16));
            }
        }
        if (window.flashVersion) {
            return window.flashVersion;
        } else {
            return 0;
        }
    }
}
var SMV_PUT = new function() {
	this.nr = 88288;
	this.setKeywordIdMap = {
	};
	this.id2IdMap = {
	};
	this.setSectionIdMap = {
	};
	this.setSectionIdMapOewa = {
	};
}
var TIF = new function() {
	this.tifInit = function(options) {
		SMV.smvInit( options );
	}
	this.clbGC = function( param ){
		SMV.clbGC( param );
	}
	this.clbITar = function( param ){
		SMV.clbITar( param );
	}
	this.clbPrPry = function( param ){
		SMV.clbPrPry( param );
	}
}
var NSfTIF = new function() {
	this.tifInit = function(options) {
		SMV.smvInit( options );
	}
	this.clbGC = function( param ){
		SMV.clbGC( param );
	}
	this.clbITar = function( param ){
		SMV.clbITar( param );
	}
	this.clbPrPry = function( param ){
		SMV.clbPrPry( param );
	}
}
if ( typeof(adlrcmd) == 'undefined' ) {
	var adlrcmd = '';
}
if ( typeof(ADLRCMD) == 'undefined' ) {
	var ADLRCMD = '';
}
var SMV_TMP_OPTIONS = {};
var SMV_TMP_OPTIONS_VALID = false;
if ( typeof(adlCCat) != 'undefined' && adlCCat != '') {
	SMV_TMP_OPTIONS['pageidentifier'] = adlCCat;
        SMV_TMP_OPTIONS_VALID = true;
}
if ( typeof(SMV_CC) != 'undefined' && SMV_CC != '') {
	SMV_TMP_OPTIONS['contentclass'] = SMV_CC;
        SMV_TMP_OPTIONS_VALID = true;
}
if ( typeof(SMV_SITE) != 'undefined' && SMV_SITE != '') {
        SMV_TMP_OPTIONS['site'] = SMV_SITE;
}
if ( typeof(adlSite) != 'undefined' && adlSite) {
        SMV_TMP_OPTIONS['sitename'] = adlSite;
}
else if ( typeof(wsite) != 'undefined' && wsite) {
        SMV_TMP_OPTIONS['sitename'] = wsite;
}
SMV.smvInit( SMV_TMP_OPTIONS );
