var WlParams = '';
var WlReferrer = document.location.toString();
var BLACKLISTED = "";

   if (typeof WlNeedRcmd == 'undefined')
   {
       WlNeedRcmd= true;
   }
   if ( typeof WlRcmdType == 'undefined')
   {
       WlRcmdType= "keyword";
   }
   if (typeof WlNeedTracking == 'undefined')
   {
       WlNeedTracking= true;
   }
   if (typeof WlWebsiteId == 'undefined')
   {
    var WlWebsiteId = document.domain.replace(/.*www./g,"").replace(/.*\.([a-zA-Z0-9]+\-*[a-zA-Z0-9]+\.(co.uk|com|fr|be|net|com.br|es|de|se|sp|nl|ws))/g,"$1");
   }
   if (typeof WlCustomerId == 'undefined')
   {
       WlCustomerId= "himedia";
   }
   if (WlCustomerId)
   {
       WlParams= WlParams + "&CustomerId=" + escape(WlCustomerId);
   }
   if (WlWebsiteId)
   {
        if( WlWebsiteId.match(/.*\..*/) ) {
            var WlWebsiteId = WlWebsiteId.toLowerCase();
        } else
        {
         var WlWebsiteId = document.domain.replace(/.*www./g,"").replace(/.*\.([a-zA-Z0-9]+\-*[a-zA-Z0-9]+\.(co.uk|com|fr|be|net|com.br|es|de|se|sp|nl|ws))/g,"$1");
        }
       WlParams= WlParams + "&WebsiteId=" + escape(WlWebsiteId);
   }
   if (typeof WlAC == 'undefined')
   {
       WlAC= true;
   }
   if (WlAC)
   {
    WlParams= WlParams + "&AC=on&ConfExtId=AdmTargetAdRcmdDe";
   }

   if (typeof WlContentGroup == 'undefined')
   {
       WlContentGroup= "Default";
   }
   if (typeof WlReferrer == 'string')
   {
       WlParams= WlParams + "&Referer=" + escape(WlReferrer)
   }

    var websiteb;
    var BLACKLIST = new Array('adfocus.de','adition.com','adjug.com','d1.openx.org','doubleclick.net','googleusercontent.com','hfboards.com','icopyright.net','independentonlinesolutions.com','indieclick.com','mirror.webcache.eu','spielaffe.de','yieldmanager.com','filmpalast-cine-world.de','movie2k.de','arbeitsargentur.de','facbook.de','stadionfuehrer.de','mein-vz.de','mobile24.de','videoautomaten.de','spieckmich.de','facebock.de','faceboo.de','kinder-kleider-basar.de','pocco.de','kaffeebraun.de','lokalsiten.de','cinestream.de','chlipfich.de','photofunia.de','x-hamster.de','wikipeida.de','peugot.de','topshop.de','kciker.de','technobase.de','onlinethek.de','vimeo.de','apartmentmieten.de','bauplanwelt.de','stream800.de','esprite.de','loklaisten.de','ucikinowelt.de','flyff.de','armorgames.de','hubba.de','schuelrvz.de','wikipdia.de','thomas-phillips.de','fishclip.de','clipfich.de','closer','gorillamale.de','gorillaron.de','jetztspielenws.de','meetic.uk','mysc.de','Netlog','okf.de','ptv.adac.de','sedo.de','Serieslive','sn.energy-webradio','stayblue.de','tppcrpg.net','datingdirect.co.uk','bloguedesporto.com','bloguedemusica.com','bloguedobebe.com','fotosblogue.com','bloguepessoal.com','bloguedoido.com','fotologs.net','fr.emessenger.net','de.emessenger.net','fotolog.com.br','netlog.com','fr.netlog.com','emessenger.nl','lexa.meetic.nl','fotolog.com','buienradar.nl','meetic.com','sonymusicrunofnetwork.com','hi5.com','masrv.com','blogspot.com','runofnetwork.es');

    for ( i in BLACKLIST ) {
        websiteb=BLACKLIST[i]
        if ( WlWebsiteId == websiteb )
        {
     var BLACKLISTED="yes";
        }
    }

    var BLACKLISTDOMAIN = /.*\.(br|ch|ru|li|tv|to|org|in|[0-9]{1,})+$/;
    if( WlWebsiteId.match(BLACKLISTDOMAIN) ) {
     var BLACKLISTED="yes";
    }

    var BLACKLISTURL = /.*forum.*/;
    if( WlReferrer.match(BLACKLISTURL) ) {
     var BLACKLISTED="yes";
    }

   if (typeof WlQuestion == 'undefined')
   {
        WlQuestion= "";
   }

   var WlRnd = Math.floor(Math.random()*99999999999);
   var WlProtocol = location.protocol.indexOf('https')>-1?'https:':'http:';


if ((WlNeedTracking) && ( BLACKLISTED == "" ))
   {
       var WlUrl= WlProtocol + '//tr.himedia.individuad.net/Cnt/himedia/CP/' + WlContentGroup + '?ord=' + WlRnd + WlParams;
       document.write('<img src="' + WlUrl + '"style="display:none" width="0" height="0" border="0">');
   }

   if ((WlNeedRcmd)  && ( BLACKLISTED == "" ))
   {
       WlRcmd= "";

       if (WlRcmdType == 'keyword')
       {
       var WlUrl= WlProtocol + '//rc.himedia.individuad.net/Get/himedia/JS/GetRcmd.js?ord=' + WlRnd;
       }
       else
       {
       var WlUrl= WlProtocol + '//rc.himedia.individuad.net/Get/himedia/JS/GetRcmdByCookie.js?ord=' + WlRnd;
       }
       document.write('<scr' + 'ipt language="JavaScript" src="' + WlUrl + '"></sc' + 'ript>');
   }


   if (WlQuestion)
   {
   var WlUrl= WlProtocol + '//tr.himedia.individuad.net/Cnt/himedia/CD/questionnaire' + '?ord=' + WlRnd + '&' + WlQuestion;
   document.write('<img src="' + WlUrl + '"style="display:none" width="0" height="0" border="0">');
   }
